#include "protos.h"

void f_00709080(void)
{
    FN_ENTER(0x00709080);
    /* 00709080: movzx eax, byte ptr [0xa97f20] */ r_eax = (u32)R8((u32)(0xa97f20u));
    /* 00709087: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00709089: jne 0x70913e */ if (!fZ) goto L_0070913e;
L_0070908f:; BB(0x0070908f);
    /* 0070908f: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709094u); f_00791b48();
    /* 00709094: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00709096: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709098: je 0x7096d5 */ if (fZ) goto L_007096d5;
L_0070909e:; BB(0x0070909e);
    /* 0070909e: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007090a1:; BB(0x007090a1);
    /* 007090a1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007090a4: mov dword ptr [0x9d07a0], eax */ W32((u32)(0x9d07a0u), r_eax);
    /* 007090a9: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7090aeu); f_00791b48();
    /* 007090ae: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007090b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007090b2: je 0x7096cb */ if (fZ) goto L_007096cb;
L_007090b8:; BB(0x007090b8);
    /* 007090b8: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007090bb:; BB(0x007090bb);
    /* 007090bb: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007090be: mov dword ptr [0x9d07a8], eax */ W32((u32)(0x9d07a8u), r_eax);
    /* 007090c3: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7090c8u); f_00791b48();
    /* 007090c8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007090ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007090cc: je 0x7096c1 */ if (fZ) goto L_007096c1;
L_007090d2:; BB(0x007090d2);
    /* 007090d2: add eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007090d5:; BB(0x007090d5);
    /* 007090d5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007090d8: mov dword ptr [0x9d07b0], eax */ W32((u32)(0x9d07b0u), r_eax);
    /* 007090dd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7090e2u); f_00791b48();
    /* 007090e2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007090e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007090e6: je 0x7096b7 */ if (fZ) goto L_007096b7;
L_007090ec:; BB(0x007090ec);
    /* 007090ec: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007090ef:; BB(0x007090ef);
    /* 007090ef: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007090f2: mov dword ptr [0x9d07b8], eax */ W32((u32)(0x9d07b8u), r_eax);
    /* 007090f7: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7090fcu); f_00791b48();
    /* 007090fc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007090fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709100: je 0x7096ad */ if (fZ) goto L_007096ad;
L_00709106:; BB(0x00709106);
    /* 00709106: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00709109:; BB(0x00709109);
    /* 00709109: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0070910c: mov dword ptr [0x9d07c0], eax */ W32((u32)(0x9d07c0u), r_eax);
    /* 00709111: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709116u); f_00791b48();
    /* 00709116: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00709118: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070911a: je 0x7096a3 */ if (fZ) goto L_007096a3;
L_00709120:; BB(0x00709120);
    /* 00709120: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00709123:; BB(0x00709123);
    /* 00709123: movzx edx, byte ptr [0xa97f20] */ r_edx = (u32)R8((u32)(0xa97f20u));
    /* 0070912a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0070912d: mov dword ptr [0x9d07c8], eax */ W32((u32)(0x9d07c8u), r_eax);
    /* 00709132: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00709138: mov byte ptr [0xa97f20], dl */ W8((u32)(0xa97f20u), (u8)r_edx);
L_0070913e:; BB(0x0070913e);
    /* 0070913e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00709142: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00709146: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00709148: mov ebx, eax */ r_ebx = r_eax;
L_0070914a:; BB(0x0070914a);
    /* 0070914a: movzx edx, byte ptr [ebx + 0x9d07a0] */ r_edx = (u32)R8((u32)(r_ebx+0x9d07a0u));
    /* 00709151: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00709152: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x709157u); f_007bfce4();
    /* 00709157: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709158: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070915a: je 0x709166 */ if (fZ) goto L_00709166;
L_0070915c:; BB(0x0070915c);
    /* 0070915c: mov edx, dword ptr [ebx + 0x9d07a4] */ r_edx = R32((u32)(r_ebx+0x9d07a4u));
    /* 00709162: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00709164: or dword ptr [esi], ecx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709166:; BB(0x00709166);
    /* 00709166: movzx edx, byte ptr [ebx + 0x9d07a0] */ r_edx = (u32)R8((u32)(r_ebx+0x9d07a0u));
    /* 0070916d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070916e: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709173u); f_007bfff8();
    /* 00709173: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709174: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709176: je 0x709182 */ if (fZ) goto L_00709182;
L_00709178:; BB(0x00709178);
    /* 00709178: mov edx, dword ptr [ebx + 0x9d07a4] */ r_edx = R32((u32)(r_ebx+0x9d07a4u));
    /* 0070917e: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00709180: or dword ptr [edi], ecx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709182:; BB(0x00709182);
    /* 00709182: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00709185: cmp ebx, 0x50 */ {  u32 a = r_ebx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00709188: jb 0x70914a */ if (fC) goto L_0070914a;
L_0070918a:; BB(0x0070918a);
    /* 0070918a: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00709080); r_esp += 4; return;
L_007096a3:; BB(0x007096a3);
    /* 007096a3: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 007096a8: jmp 0x709123 */ goto L_00709123;
L_007096ad:; BB(0x007096ad);
    /* 007096ad: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 007096b2: jmp 0x709109 */ goto L_00709109;
L_007096b7:; BB(0x007096b7);
    /* 007096b7: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 007096bc: jmp 0x7090ef */ goto L_007090ef;
L_007096c1:; BB(0x007096c1);
    /* 007096c1: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 007096c6: jmp 0x7090d5 */ goto L_007090d5;
L_007096cb:; BB(0x007096cb);
    /* 007096cb: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 007096d0: jmp 0x7090bb */ goto L_007090bb;
L_007096d5:; BB(0x007096d5);
    /* 007096d5: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 007096da: jmp 0x7090a1 */ goto L_007090a1;
}

void f_0070918f(void)
{
    FN_ENTER(0x0070918f);
    /* 0070918f: movzx eax, byte ptr [0xa97f20] */ r_eax = (u32)R8((u32)(0xa97f20u));
    /* 00709196: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00709198: jne 0x70924d */ if (!fZ) goto L_0070924d;
L_0070919e:; BB(0x0070919e);
    /* 0070919e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7091a3u); f_00791b48();
    /* 007091a3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007091a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007091a7: je 0x709711 */ if (fZ) goto L_00709711;
L_007091ad:; BB(0x007091ad);
    /* 007091ad: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007091b0:; BB(0x007091b0);
    /* 007091b0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007091b3: mov dword ptr [0x9d0988], eax */ W32((u32)(0x9d0988u), r_eax);
    /* 007091b8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7091bdu); f_00791b48();
    /* 007091bd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007091bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007091c1: je 0x709707 */ if (fZ) goto L_00709707;
L_007091c7:; BB(0x007091c7);
    /* 007091c7: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007091ca:; BB(0x007091ca);
    /* 007091ca: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007091cd: mov dword ptr [0x9d0990], eax */ W32((u32)(0x9d0990u), r_eax);
    /* 007091d2: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7091d7u); f_00791b48();
    /* 007091d7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007091d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007091db: je 0x7096fd */ if (fZ) goto L_007096fd;
L_007091e1:; BB(0x007091e1);
    /* 007091e1: add eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007091e4:; BB(0x007091e4);
    /* 007091e4: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007091e7: mov dword ptr [0x9d0998], eax */ W32((u32)(0x9d0998u), r_eax);
    /* 007091ec: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7091f1u); f_00791b48();
    /* 007091f1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007091f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007091f5: je 0x7096f3 */ if (fZ) goto L_007096f3;
L_007091fb:; BB(0x007091fb);
    /* 007091fb: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007091fe:; BB(0x007091fe);
    /* 007091fe: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00709201: mov dword ptr [0x9d09a0], eax */ W32((u32)(0x9d09a0u), r_eax);
    /* 00709206: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x70920bu); f_00791b48();
    /* 0070920b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0070920d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070920f: je 0x7096e9 */ if (fZ) goto L_007096e9;
L_00709215:; BB(0x00709215);
    /* 00709215: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00709218:; BB(0x00709218);
    /* 00709218: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0070921b: mov dword ptr [0x9d09a8], eax */ W32((u32)(0x9d09a8u), r_eax);
    /* 00709220: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709225u); f_00791b48();
    /* 00709225: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00709227: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709229: je 0x7096df */ if (fZ) goto L_007096df;
L_0070922f:; BB(0x0070922f);
    /* 0070922f: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00709232:; BB(0x00709232);
    /* 00709232: movzx edx, byte ptr [0xa97f20] */ r_edx = (u32)R8((u32)(0xa97f20u));
    /* 00709239: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0070923c: mov dword ptr [0x9d09b0], eax */ W32((u32)(0x9d09b0u), r_eax);
    /* 00709241: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00709247: mov byte ptr [0xa97f20], dl */ W8((u32)(0xa97f20u), (u8)r_edx);
L_0070924d:; BB(0x0070924d);
    /* 0070924d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00709251: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00709255: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00709257: mov ebx, eax */ r_ebx = r_eax;
L_00709259:; BB(0x00709259);
    /* 00709259: movzx edx, byte ptr [ebx + 0x9d0988] */ r_edx = (u32)R8((u32)(r_ebx+0x9d0988u));
    /* 00709260: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00709261: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x709266u); f_007bfce4();
    /* 00709266: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709267: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709269: je 0x709275 */ if (fZ) goto L_00709275;
L_0070926b:; BB(0x0070926b);
    /* 0070926b: mov edx, dword ptr [ebx + 0x9d098c] */ r_edx = R32((u32)(r_ebx+0x9d098cu));
    /* 00709271: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00709273: or dword ptr [esi], ecx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709275:; BB(0x00709275);
    /* 00709275: movzx edx, byte ptr [ebx + 0x9d0988] */ r_edx = (u32)R8((u32)(r_ebx+0x9d0988u));
    /* 0070927c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070927d: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709282u); f_007bfff8();
    /* 00709282: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709283: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709285: je 0x709291 */ if (fZ) goto L_00709291;
L_00709287:; BB(0x00709287);
    /* 00709287: mov edx, dword ptr [ebx + 0x9d098c] */ r_edx = R32((u32)(r_ebx+0x9d098cu));
    /* 0070928d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0070928f: or dword ptr [edi], ecx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709291:; BB(0x00709291);
    /* 00709291: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00709294: cmp ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00709297: jb 0x709259 */ if (fC) goto L_00709259;
L_00709299:; BB(0x00709299);
    /* 00709299: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x0070918f); r_esp += 4; return;
L_007096df:; BB(0x007096df);
    /* 007096df: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 007096e4: jmp 0x709232 */ goto L_00709232;
L_007096e9:; BB(0x007096e9);
    /* 007096e9: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 007096ee: jmp 0x709218 */ goto L_00709218;
L_007096f3:; BB(0x007096f3);
    /* 007096f3: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 007096f8: jmp 0x7091fe */ goto L_007091fe;
L_007096fd:; BB(0x007096fd);
    /* 007096fd: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709702: jmp 0x7091e4 */ goto L_007091e4;
L_00709707:; BB(0x00709707);
    /* 00709707: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 0070970c: jmp 0x7091ca */ goto L_007091ca;
L_00709711:; BB(0x00709711);
    /* 00709711: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709716: jmp 0x7091b0 */ goto L_007091b0;
}

void f_0070929e(void)
{
    FN_ENTER(0x0070929e);
    /* 0070929e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007092a0: mov ebx, eax */ r_ebx = r_eax;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x0070929e); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_00709346(void)
{
    FN_ENTER(0x00709346);
    goto L_00709346;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00709346:; BB(0x00709346);
    /* 00709346: mov edx, dword ptr [0xa0f68c] */ r_edx = R32((u32)(0xa0f68cu));
    /* 0070934c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0070934f: jmp 0x7093cb */ goto L_007093cb;
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00709346); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_00709354(void)
{
    FN_ENTER(0x00709354);
    goto L_00709354;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00709354:; BB(0x00709354);
    /* 00709354: mov edx, dword ptr [0xa0f684] */ r_edx = R32((u32)(0xa0f684u));
    /* 0070935a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0070935d: jmp 0x7093cb */ goto L_007093cb;
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00709354); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_0070935f(void)
{
    FN_ENTER(0x0070935f);
    goto L_0070935f;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0070935f:; BB(0x0070935f);
    /* 0070935f: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00709365: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00709368: jmp 0x7093cb */ goto L_007093cb;
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x0070935f); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_0070936a(void)
{
    FN_ENTER(0x0070936a);
    goto L_0070936a;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0070936a:; BB(0x0070936a);
    /* 0070936a: mov edx, dword ptr [0xa0f67c] */ r_edx = R32((u32)(0xa0f67cu));
    /* 00709370: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00709373: jmp 0x7093cb */ goto L_007093cb;
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x0070936a); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_00709375(void)
{
    FN_ENTER(0x00709375);
    goto L_00709375;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00709375:; BB(0x00709375);
    /* 00709375: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0070937b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0070937e: jmp 0x7093cb */ goto L_007093cb;
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00709375); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_00709380(void)
{
    FN_ENTER(0x00709380);
    goto L_00709380;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00709380:; BB(0x00709380);
    /* 00709380: mov edx, dword ptr [0xa0f688] */ r_edx = R32((u32)(0xa0f688u));
    /* 00709386: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00709389: jmp 0x7093cb */ goto L_007093cb;
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00709380); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_0070938b(void)
{
    FN_ENTER(0x0070938b);
    goto L_0070938b;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0070938b:; BB(0x0070938b);
    /* 0070938b: mov edx, dword ptr [0xa0f684] */ r_edx = R32((u32)(0xa0f684u));
    /* 00709391: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00709394: jmp 0x7093cb */ goto L_007093cb;
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x0070938b); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_00709396(void)
{
    FN_ENTER(0x00709396);
    goto L_00709396;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00709396:; BB(0x00709396);
    /* 00709396: mov edx, dword ptr [0xa0f668] */ r_edx = R32((u32)(0xa0f668u));
    /* 0070939c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0070939f: jmp 0x7093cb */ goto L_007093cb;
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00709396); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_007093a1(void)
{
    FN_ENTER(0x007093a1);
    goto L_007093a1;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007093a1:; BB(0x007093a1);
    /* 007093a1: mov edx, dword ptr [0xa0f664] */ r_edx = R32((u32)(0xa0f664u));
    /* 007093a7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007093aa: jmp 0x7093cb */ goto L_007093cb;
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007093a1); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_007093ac(void)
{
    FN_ENTER(0x007093ac);
    goto L_007093ac;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007093ac:; BB(0x007093ac);
    /* 007093ac: mov edx, dword ptr [0xa0f68c] */ r_edx = R32((u32)(0xa0f68cu));
    /* 007093b2: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007093b5: jmp 0x7093cb */ goto L_007093cb;
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007093ac); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_007093b7(void)
{
    FN_ENTER(0x007093b7);
    goto L_007093b7;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007093b7:; BB(0x007093b7);
    /* 007093b7: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 007093bd: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007093c0: jmp 0x7093cb */ goto L_007093cb;
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007093b7); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_007093c2(void)
{
    FN_ENTER(0x007093c2);
    goto L_007093c2;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007093c2:; BB(0x007093c2);
    /* 007093c2: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 007093c8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007093c2); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_007093cb(void)
{
    FN_ENTER(0x007093cb);
    goto L_007093cb;
L_007092a2:; BB(0x007092a2);
    /* 007092a2: mov ebp, dword ptr [ebx + 0x96edb8] */ r_ebp = R32((u32)(r_ebx+0x96edb8u));
    /* 007092a8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7092adu); f_00791b48();
    /* 007092ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007092af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007092b1: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007092b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092b9: je 0x70971b */ if (fZ) goto L_0070971b;
L_007092bf:; BB(0x007092bf);
    /* 007092bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007092c5: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_007092c8:; BB(0x007092c8);
    /* 007092c8: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007092cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007092d3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007092d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007092d8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7092ddu); f_007be19c();
    /* 007092dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007092e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092e2: je 0x7092f0 */ if (fZ) goto L_007092f0;
L_007092e4:; BB(0x007092e4);
    /* 007092e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007092e5: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x7092eau); f_00791b34();
    /* 007092ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007092eb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007092ed: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_007092f0:; BB(0x007092f0);
    /* 007092f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007092f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007092f8: jne 0x7093f3 */ if (!fZ) goto L_007093f3;
L_007092fe:; BB(0x007092fe);
    /* 007092fe: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709303: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709309: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070930f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709314u); f_007be19c();
    /* 00709314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709319: je 0x709331 */ if (fZ) goto L_00709331;
L_0070931b:; BB(0x0070931b);
    /* 0070931b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070931e: je 0x70932c */ if (fZ) goto L_0070932c;
L_00709320:; BB(0x00709320);
    /* 00709320: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709323: jne 0x709331 */ if (!fZ) goto L_00709331;
L_00709325:; BB(0x00709325);
    /* 00709325: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 0070932a: jmp 0x709331 */ goto L_00709331;
L_0070932c:; BB(0x0070932c);
    /* 0070932c: mov ebp, 0x11 */ r_ebp = 0x11u;
L_00709331:; BB(0x00709331);
    /* 00709331: add ebp, -6 */ {  u32 a = r_ebp; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709334: cmp ebp, 0x19 */ {  u32 a = r_ebp; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709337: ja 0x7093cb */ if ((!fC&&!fZ)) goto L_007093cb;
L_0070933d:; BB(0x0070933d);
    /* 0070933d: mov edx, dword ptr [ebp*4 + 0x96ec60] */ r_edx = R32((u32)(r_ebp*4+0x96ec60u));
    /* 00709344: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007093cb:; BB(0x007093cb);
    /* 007093cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093cc: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x7093d1u); f_007bfce4();
    /* 007093d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093d4: je 0x7093df */ if (fZ) goto L_007093df;
L_007093d6:; BB(0x007093d6);
    /* 007093d6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007093da: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093dd: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093df:; BB(0x007093df);
    /* 007093df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007093e0: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x7093e5u); f_007bfff8();
    /* 007093e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007093e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007093e8: je 0x7093f3 */ if (fZ) goto L_007093f3;
L_007093ea:; BB(0x007093ea);
    /* 007093ea: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007093ee: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007093f1: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007093f3:; BB(0x007093f3);
    /* 007093f3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007093f6: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007093f9: jl 0x7092a2 */ if ((fS!=fO)) goto L_007092a2;
L_007093ff:; BB(0x007093ff);
    /* 007093ff: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007093cb); r_esp += 4; return;
L_0070971b:; BB(0x0070971b);
    /* 0070971b: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709720: jmp 0x7092c8 */ goto L_007092c8;
}

void f_00709404(void)
{
    FN_ENTER(0x00709404);
    /* 00709404: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00709406: mov ebx, eax */ r_ebx = r_eax;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00709404); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_0070947f(void)
{
    FN_ENTER(0x0070947f);
    goto L_0070947f;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0070947f:; BB(0x0070947f);
    /* 0070947f: mov edx, dword ptr [0xa0f68c] */ r_edx = R32((u32)(0xa0f68cu));
    /* 00709485: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00709488: jmp 0x709504 */ goto L_00709504;
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x0070947f); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_0070948d(void)
{
    FN_ENTER(0x0070948d);
    goto L_0070948d;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0070948d:; BB(0x0070948d);
    /* 0070948d: mov edx, dword ptr [0xa0f684] */ r_edx = R32((u32)(0xa0f684u));
    /* 00709493: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00709496: jmp 0x709504 */ goto L_00709504;
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x0070948d); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_00709498(void)
{
    FN_ENTER(0x00709498);
    goto L_00709498;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00709498:; BB(0x00709498);
    /* 00709498: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0070949e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007094a1: jmp 0x709504 */ goto L_00709504;
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00709498); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_007094a3(void)
{
    FN_ENTER(0x007094a3);
    goto L_007094a3;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007094a3:; BB(0x007094a3);
    /* 007094a3: mov edx, dword ptr [0xa0f67c] */ r_edx = R32((u32)(0xa0f67cu));
    /* 007094a9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007094ac: jmp 0x709504 */ goto L_00709504;
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007094a3); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_007094ae(void)
{
    FN_ENTER(0x007094ae);
    goto L_007094ae;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007094ae:; BB(0x007094ae);
    /* 007094ae: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 007094b4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007094b7: jmp 0x709504 */ goto L_00709504;
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007094ae); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_007094b9(void)
{
    FN_ENTER(0x007094b9);
    goto L_007094b9;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007094b9:; BB(0x007094b9);
    /* 007094b9: mov edx, dword ptr [0xa0f688] */ r_edx = R32((u32)(0xa0f688u));
    /* 007094bf: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007094c2: jmp 0x709504 */ goto L_00709504;
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007094b9); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_007094c4(void)
{
    FN_ENTER(0x007094c4);
    goto L_007094c4;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007094c4:; BB(0x007094c4);
    /* 007094c4: mov edx, dword ptr [0xa0f684] */ r_edx = R32((u32)(0xa0f684u));
    /* 007094ca: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007094cd: jmp 0x709504 */ goto L_00709504;
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007094c4); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_007094cf(void)
{
    FN_ENTER(0x007094cf);
    goto L_007094cf;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007094cf:; BB(0x007094cf);
    /* 007094cf: mov edx, dword ptr [0xa0f668] */ r_edx = R32((u32)(0xa0f668u));
    /* 007094d5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007094d8: jmp 0x709504 */ goto L_00709504;
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007094cf); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_007094da(void)
{
    FN_ENTER(0x007094da);
    goto L_007094da;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007094da:; BB(0x007094da);
    /* 007094da: mov edx, dword ptr [0xa0f664] */ r_edx = R32((u32)(0xa0f664u));
    /* 007094e0: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007094e3: jmp 0x709504 */ goto L_00709504;
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007094da); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_007094e5(void)
{
    FN_ENTER(0x007094e5);
    goto L_007094e5;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007094e5:; BB(0x007094e5);
    /* 007094e5: mov edx, dword ptr [0xa0f68c] */ r_edx = R32((u32)(0xa0f68cu));
    /* 007094eb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007094ee: jmp 0x709504 */ goto L_00709504;
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007094e5); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_007094f0(void)
{
    FN_ENTER(0x007094f0);
    goto L_007094f0;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007094f0:; BB(0x007094f0);
    /* 007094f0: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 007094f6: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007094f9: jmp 0x709504 */ goto L_00709504;
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007094f0); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_007094fb(void)
{
    FN_ENTER(0x007094fb);
    goto L_007094fb;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007094fb:; BB(0x007094fb);
    /* 007094fb: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 00709501: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x007094fb); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_00709504(void)
{
    FN_ENTER(0x00709504);
    goto L_00709504;
L_00709408:; BB(0x00709408);
    /* 00709408: mov ebp, dword ptr [ebx + 0x96eda8] */ r_ebp = R32((u32)(r_ebx+0x96eda8u));
    /* 0070940e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709413u); f_00791b48();
    /* 00709413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00709415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00709417: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070941d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070941f: je 0x709725 */ if (fZ) goto L_00709725;
L_00709425:; BB(0x00709425);
    /* 00709425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709427: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00709429: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070942b: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_0070942e:; BB(0x0070942e);
    /* 0070942e: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709439: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0070943b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0070943e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709443u); f_007be19c();
    /* 00709443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709448: je 0x709456 */ if (fZ) goto L_00709456;
L_0070944a:; BB(0x0070944a);
    /* 0070944a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070944b: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x709450u); f_00791b34();
    /* 00709450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00709453: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00709456:; BB(0x00709456);
    /* 00709456: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0070945c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070945e: jne 0x70952c */ if (!fZ) goto L_0070952c;
L_00709464:; BB(0x00709464);
    /* 00709464: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0070946a: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 0070946d: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00709470: ja 0x709504 */ if ((!fC&&!fZ)) goto L_00709504;
L_00709476:; BB(0x00709476);
    /* 00709476: mov edx, dword ptr [ebp*4 + 0x96ebc8] */ r_edx = R32((u32)(r_ebp*4+0x96ebc8u));
    /* 0070947d: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00709504:; BB(0x00709504);
    /* 00709504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709505: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70950au); f_007bfce4();
    /* 0070950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070950b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070950d: je 0x709518 */ if (fZ) goto L_00709518;
L_0070950f:; BB(0x0070950f);
    /* 0070950f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00709513: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00709516: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709518:; BB(0x00709518);
    /* 00709518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709519: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x70951eu); f_007bfff8();
    /* 0070951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070951f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709521: je 0x70952c */ if (fZ) goto L_0070952c;
L_00709523:; BB(0x00709523);
    /* 00709523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709527: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0070952a: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070952c:; BB(0x0070952c);
    /* 0070952c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070952f: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709532: jl 0x709408 */ if ((fS!=fO)) goto L_00709408;
L_00709538:; BB(0x00709538);
    /* 00709538: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0070953a: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x70953fu); f_007bfce4();
    /* 0070953f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709542: je 0x70954f */ if (fZ) goto L_0070954f;
L_00709544:; BB(0x00709544);
    /* 00709544: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709549: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0070954d: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0070954f:; BB(0x0070954f);
    /* 0070954f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00709551: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709556u); f_007bfff8();
    /* 00709556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709559: je 0x709566 */ if (fZ) goto L_00709566;
L_0070955b:; BB(0x0070955b);
    /* 0070955b: mov eax, dword ptr [0xa0f67c] */ r_eax = R32((u32)(0xa0f67cu));
    /* 00709560: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00709564: or dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00709504); r_esp += 4; return;
L_00709725:; BB(0x00709725);
    /* 00709725: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 0070972a: jmp 0x70942e */ goto L_0070942e;
}

void f_0070973c(void) /* sub_70973C */
{
    FN_ENTER(0x0070973c);
    /* 0070973c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070973d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070973e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070973f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00709740: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00709743: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 00709747: mov eax, dword ptr [0x9d09e8] */ r_eax = R32((u32)(0x9d09e8u));
    /* 0070974c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070974e: je 0x709a86 */ if (fZ) goto L_00709a86;
L_00709754:; BB(0x00709754);
    /* 00709754: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709756: je 0x709a86 */ if (fZ) goto L_00709a86;
L_0070975c:; BB(0x0070975c);
    /* 0070975c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070975e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00709760: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x709765u); f_007a61a4();
    /* 00709765: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709768: jl 0x7099da */ if ((fS!=fO)) goto L_007099da;
L_0070976e:; BB(0x0070976e);
    /* 0070976e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00709771: jg 0x7099da */ if ((!fZ&&fS==fO)) goto L_007099da;
L_00709777:; BB(0x00709777);
    /* 00709777: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070977d: call 0x7be250 */ r_esp -= 4; W32(r_esp, 0x709782u); f_007be250();
    /* 00709782: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709783: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709785: je 0x7099cd */ if (fZ) goto L_007099cd;
L_0070978b:; BB(0x0070978b);
    /* 0070978b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070978d: call 0x83fdfc */ r_esp -= 4; W32(r_esp, 0x709792u); f_0083fdfc();
    /* 00709792: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00709794: call 0x83fde4 */ r_esp -= 4; W32(r_esp, 0x709799u); f_0083fde4();
    /* 00709799: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0070979d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007097a0: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x7097a5u); f_007917b8();
    /* 007097a5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007097a8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007097ab: je 0x709852 */ if (fZ) goto L_00709852;
L_007097b1:; BB(0x007097b1);
    /* 007097b1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007097b5: mov edx, dword ptr [0x9d0918] */ r_edx = R32((u32)(0x9d0918u));
    /* 007097bb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007097bd: test edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007097bf: je 0x7097c8 */ if (fZ) goto L_007097c8;
L_007097c1:; BB(0x007097c1);
    /* 007097c1: mov eax, dword ptr [0x9d091c] */ r_eax = R32((u32)(0x9d091cu));
    /* 007097c6: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
L_007097c8:; BB(0x007097c8);
    /* 007097c8: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007097cc: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 007097cf: test eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007097d1: je 0x7097db */ if (fZ) goto L_007097db;
L_007097d3:; BB(0x007097d3);
    /* 007097d3: mov edx, dword ptr [0x9d091c] */ r_edx = R32((u32)(0x9d091cu));
    /* 007097d9: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
L_007097db:; BB(0x007097db);
    /* 007097db: mov edi, dword ptr [0x9d0920] */ r_edi = R32((u32)(0x9d0920u));
    /* 007097e1: test edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007097e3: je 0x7097ed */ if (fZ) goto L_007097ed;
L_007097e5:; BB(0x007097e5);
    /* 007097e5: mov edx, dword ptr [0x9d0924] */ r_edx = R32((u32)(0x9d0924u));
    /* 007097eb: or esi, dword ptr [edx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007097ed:; BB(0x007097ed);
    /* 007097ed: test edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007097ef: je 0x7097f9 */ if (fZ) goto L_007097f9;
L_007097f1:; BB(0x007097f1);
    /* 007097f1: mov edx, dword ptr [0x9d0924] */ r_edx = R32((u32)(0x9d0924u));
    /* 007097f7: or ebp, dword ptr [edx] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_007097f9:; BB(0x007097f9);
    /* 007097f9: mov edi, dword ptr [0x9d0928] */ r_edi = R32((u32)(0x9d0928u));
    /* 007097ff: test edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709801: je 0x70980b */ if (fZ) goto L_0070980b;
L_00709803:; BB(0x00709803);
    /* 00709803: mov edx, dword ptr [0x9d092c] */ r_edx = R32((u32)(0x9d092cu));
    /* 00709809: or esi, dword ptr [edx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_0070980b:; BB(0x0070980b);
    /* 0070980b: test edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070980d: je 0x709817 */ if (fZ) goto L_00709817;
L_0070980f:; BB(0x0070980f);
    /* 0070980f: mov edx, dword ptr [0x9d092c] */ r_edx = R32((u32)(0x9d092cu));
    /* 00709815: or ebp, dword ptr [edx] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_00709817:; BB(0x00709817);
    /* 00709817: mov edi, dword ptr [0x9d0930] */ r_edi = R32((u32)(0x9d0930u));
    /* 0070981d: test edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070981f: je 0x709829 */ if (fZ) goto L_00709829;
L_00709821:; BB(0x00709821);
    /* 00709821: mov edx, dword ptr [0x9d0934] */ r_edx = R32((u32)(0x9d0934u));
    /* 00709827: or esi, dword ptr [edx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_00709829:; BB(0x00709829);
    /* 00709829: test edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070982b: je 0x709835 */ if (fZ) goto L_00709835;
L_0070982d:; BB(0x0070982d);
    /* 0070982d: mov edx, dword ptr [0x9d0934] */ r_edx = R32((u32)(0x9d0934u));
    /* 00709833: or ebp, dword ptr [edx] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_00709835:; BB(0x00709835);
    /* 00709835: mov edi, dword ptr [0x9d0938] */ r_edi = R32((u32)(0x9d0938u));
    /* 0070983b: test edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070983d: je 0x709847 */ if (fZ) goto L_00709847;
L_0070983f:; BB(0x0070983f);
    /* 0070983f: mov edx, dword ptr [0x9d093c] */ r_edx = R32((u32)(0x9d093cu));
    /* 00709845: or esi, dword ptr [edx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_00709847:; BB(0x00709847);
    /* 00709847: test edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709849: je 0x709852 */ if (fZ) goto L_00709852;
L_0070984b:; BB(0x0070984b);
    /* 0070984b: mov eax, dword ptr [0x9d093c] */ r_eax = R32((u32)(0x9d093cu));
    /* 00709850: or ebp, dword ptr [eax] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_00709852:; BB(0x00709852);
    /* 00709852: call 0x709a90 */ r_esp -= 4; W32(r_esp, 0x709857u); f_00709a90();
    /* 00709857: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709859: je 0x7099cd */ if (fZ) goto L_007099cd;
L_0070985f:; BB(0x0070985f);
    /* 0070985f: mov eax, dword ptr [0xa97f3c] */ r_eax = R32((u32)(0xa97f3cu));
    /* 00709864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709866: je 0x70995b */ if (fZ) goto L_0070995b;
L_0070986c:; BB(0x0070986c);
    /* 0070986c: fild dword ptr [0xa97f30] */ FPUSH((long double)(i32)R32((u32)(0xa97f30u)));
    /* 00709872: mov ecx, dword ptr [0xa97f2c] */ r_ecx = R32((u32)(0xa97f2cu));
    /* 00709878: fld dword ptr [0x96eda4] */ FPUSH(R_F32((u32)(0x96eda4u)));
    /* 0070987e: fmul dword ptr [0xaf035c] */ ST(0) = ST(0) * R_F32((u32)(0xaf035cu));
    /* 00709884: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00709886: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0070988a: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0070988f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709894: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00709898: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0070989c: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 007098a0: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 007098a4: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 007098a9: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007098ad: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007098b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007098b3: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007098b7: je 0x709949 */ if (fZ) goto L_00709949;
L_007098bd:; BB(0x007098bd);
    /* 007098bd: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 007098c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007098c2: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007098c8: call dword ptr [0x8f8328] */ { u32 t = R32((u32)(0x8f8328u)); r_esp -= 4; W32(r_esp, 0x7098ceu); call_ind(t); }
    /* 007098ce: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007098d2: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 007098d8: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 007098da: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007098de: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007098e0: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007098e4: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 007098ea: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 007098ec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007098ee: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 007098f2: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 007098f7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007098fc: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00709900: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00709904: fistp dword ptr [esp + 8] */ W32((u32)(r_esp+0x8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709908: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0070990c: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 00709910: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00709912: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00709916: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0070991b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709920: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00709924: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00709928: fistp dword ptr [esp + 0xc] */ W32((u32)(r_esp+0xcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0070992c: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00709930: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00709934: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00709935: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070993b: call dword ptr [0x8f8340] */ { u32 t = R32((u32)(0x8f8340u)); r_esp -= 4; W32(r_esp, 0x709941u); call_ind(t); }
    /* 00709941: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00709945: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
L_00709949:; BB(0x00709949);
    /* 00709949: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070994a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070994b: call dword ptr [0x8f8344] */ { u32 t = R32((u32)(0x8f8344u)); r_esp -= 4; W32(r_esp, 0x709951u); call_ind(t); }
    /* 00709951: mov dword ptr [0xa97f3c], 0 */ W32((u32)(0xa97f3cu), 0x0u);
L_0070995b:; BB(0x0070995b);
    /* 0070995b: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0070995f: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00709962: test dword ptr [0x9d0970], eax */ {  u32 a = R32((u32)(0x9d0970u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709968: je 0x709986 */ if (fZ) goto L_00709986;
L_0070996a:; BB(0x0070996a);
    /* 0070996a: mov edx, dword ptr [0x9d0974] */ r_edx = R32((u32)(0x9d0974u));
    /* 00709970: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00709972: or ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00709974: cmp ecx, dword ptr [0xa0f684] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa0f684u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070997a: jne 0x709986 */ if (!fZ) goto L_00709986;
L_0070997c:; BB(0x0070997c);
    /* 0070997c: mov dword ptr [0xa97f3c], 1 */ W32((u32)(0xa97f3cu), 0x1u);
L_00709986:; BB(0x00709986);
    /* 00709986: test dword ptr [0x9d0978], eax */ {  u32 a = R32((u32)(0x9d0978u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070998c: je 0x7099aa */ if (fZ) goto L_007099aa;
L_0070998e:; BB(0x0070998e);
    /* 0070998e: mov edx, dword ptr [0x9d097c] */ r_edx = R32((u32)(0x9d097cu));
    /* 00709994: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00709996: or ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00709998: cmp ecx, dword ptr [0xa0f684] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa0f684u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070999e: jne 0x7099aa */ if (!fZ) goto L_007099aa;
L_007099a0:; BB(0x007099a0);
    /* 007099a0: mov dword ptr [0xa97f3c], 1 */ W32((u32)(0xa97f3cu), 0x1u);
L_007099aa:; BB(0x007099aa);
    /* 007099aa: test dword ptr [0x9d0980], eax */ {  u32 a = R32((u32)(0x9d0980u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007099b0: je 0x7099cd */ if (fZ) goto L_007099cd;
L_007099b2:; BB(0x007099b2);
    /* 007099b2: mov eax, dword ptr [0x9d0984] */ r_eax = R32((u32)(0x9d0984u));
    /* 007099b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007099b9: or ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 007099bb: cmp edx, dword ptr [0xa0f684] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f684u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007099c1: jne 0x7099cd */ if (!fZ) goto L_007099cd;
L_007099c3:; BB(0x007099c3);
    /* 007099c3: mov dword ptr [0xa97f3c], 1 */ W32((u32)(0xa97f3cu), 0x1u);
L_007099cd:; BB(0x007099cd);
    /* 007099cd: lea eax, [ebx + 0x14] */ r_eax = (u32)(r_ebx+0x14u);
    /* 007099d0: lea edx, [ebx + 0x16] */ r_edx = (u32)(r_ebx+0x16u);
    /* 007099d3: call 0x709ae0 */ r_esp -= 4; W32(r_esp, 0x7099d8u); f_00709ae0();
    /* 007099d8: jmp 0x709a51 */ goto L_00709a51;
L_007099da:; BB(0x007099da);
    /* 007099da: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 007099df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007099e1: jne 0x709a05 */ if (!fZ) goto L_00709a05;
L_007099e3:; BB(0x007099e3);
    /* 007099e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007099e5: call dword ptr [0x8f8334] */ { u32 t = R32((u32)(0x8f8334u)); r_esp -= 4; W32(r_esp, 0x7099ebu); call_ind(t); }
    /* 007099eb: mov dword ptr [0xa97f40], eax */ W32((u32)(0xa97f40u), r_eax);
    /* 007099f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007099f2: jl 0x709a05 */ if ((fS!=fO)) goto L_00709a05;
L_007099f4:; BB(0x007099f4);
    /* 007099f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007099f6: call dword ptr [0x8f8334] */ { u32 t = R32((u32)(0x8f8334u)); r_esp -= 4; W32(r_esp, 0x7099fcu); call_ind(t); }
    /* 007099fc: mov dword ptr [0xa97f40], eax */ W32((u32)(0xa97f40u), r_eax);
    /* 00709a01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00709a03: jge 0x7099f4 */ if ((fS==fO)) goto L_007099f4;
L_00709a05:; BB(0x00709a05);
    /* 00709a05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00709a07: call 0x83fdfc */ r_esp -= 4; W32(r_esp, 0x709a0cu); f_0083fdfc();
    /* 00709a0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00709a0e: call 0x83fde4 */ r_esp -= 4; W32(r_esp, 0x709a13u); f_0083fde4();
    /* 00709a13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709a16: mov ecx, dword ptr [0xacbee8] */ r_ecx = R32((u32)(0xacbee8u));
    /* 00709a1c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00709a1e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00709a20: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00709a22:; BB(0x00709a22);
    /* 00709a22: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00709a25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709a27: jne 0x709a48 */ if (!fZ) goto L_00709a48;
L_00709a29:; BB(0x00709a29);
    /* 00709a29: mov edi, dword ptr [edx + 0x9d0938] */ r_edi = R32((u32)(r_edx+0x9d0938u));
    /* 00709a2f: test dword ptr [eax], edi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709a31: je 0x709a3b */ if (fZ) goto L_00709a3b;
L_00709a33:; BB(0x00709a33);
    /* 00709a33: mov ebx, dword ptr [edx + 0x9d093c] */ r_ebx = R32((u32)(r_edx+0x9d093cu));
    /* 00709a39: or esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_00709a3b:; BB(0x00709a3b);
    /* 00709a3b: test dword ptr [eax + 8], edi */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709a3e: je 0x709a48 */ if (fZ) goto L_00709a48;
L_00709a40:; BB(0x00709a40);
    /* 00709a40: mov ebx, dword ptr [edx + 0x9d093c] */ r_ebx = R32((u32)(r_edx+0x9d093cu));
    /* 00709a46: or ebp, dword ptr [ebx] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_00709a48:; BB(0x00709a48);
    /* 00709a48: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00709a4b: jb 0x709a22 */ if (fC) goto L_00709a22;
L_00709a4d:; BB(0x00709a4d);
    /* 00709a4d: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
L_00709a51:; BB(0x00709a51);
    /* 00709a51: mov edx, esi */ r_edx = r_esi;
    /* 00709a53: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00709a55: test dword ptr [0xa0f684], edx */ {  u32 a = R32((u32)(0xa0f684u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709a5b: je 0x709a66 */ if (fZ) goto L_00709a66;
L_00709a5d:; BB(0x00709a5d);
    /* 00709a5d: mov eax, 0xff */ r_eax = 0xffu;
    /* 00709a62: mov word ptr [ebx + 0x12], ax */ W16((u32)(r_ebx+0x12u), (u16)r_eax);
L_00709a66:; BB(0x00709a66);
    /* 00709a66: test dword ptr [0xa0f688], edx */ {  u32 a = R32((u32)(0xa0f688u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709a6c: je 0x709a77 */ if (fZ) goto L_00709a77;
L_00709a6e:; BB(0x00709a6e);
    /* 00709a6e: mov eax, 0xff */ r_eax = 0xffu;
    /* 00709a73: mov word ptr [ebx + 0x10], ax */ W16((u32)(r_ebx+0x10u), (u16)r_eax);
L_00709a77:; BB(0x00709a77);
    /* 00709a77: or dword ptr [ebx], esi */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00709a79: not esi */ r_esi = ~r_esi;
    /* 00709a7b: and dword ptr [ebx + 4], esi */ { u32 ad = (u32)(r_ebx+0x4u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00709a7e: or dword ptr [ebx + 8], ebp */ { u32 ad = (u32)(r_ebx+0x8u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00709a81: not ebp */ r_ebp = ~r_ebp;
    /* 00709a83: and dword ptr [ebx + 0xc], ebp */ { u32 ad = (u32)(r_ebx+0xcu);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00709a86:; BB(0x00709a86);
    /* 00709a86: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709a89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00709a8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00709a8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00709a8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00709a8d: ret  */ FN_RET(0x0070973c); r_esp += 4; return;
}

void f_00709a90(void) /* sub_709A90 */
{
    FN_ENTER(0x00709a90);
    /* 00709a90: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709a96: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x709a9bu); f_0068d5a8();
    /* 00709a9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709a9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709a9e: je 0x709ac6 */ if (fZ) goto L_00709ac6;
L_00709aa0:; BB(0x00709aa0);
    /* 00709aa0: mov ecx, eax */ r_ecx = r_eax;
    /* 00709aa2: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x709aa7u); f_00689410();
    /* 00709aa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709aa9: je 0x709aae */ if (fZ) goto L_00709aae;
L_00709aab:; BB(0x00709aab);
    /* 00709aab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00709aad: ret  */ FN_RET(0x00709a90); r_esp += 4; return;
L_00709aae:; BB(0x00709aae);
    /* 00709aae: call 0x717d88 */ r_esp -= 4; W32(r_esp, 0x709ab3u); f_00717d88();
    /* 00709ab3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709ab5: je 0x709aba */ if (fZ) goto L_00709aba;
L_00709ab7:; BB(0x00709ab7);
    /* 00709ab7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00709ab9: ret  */ FN_RET(0x00709a90); r_esp += 4; return;
L_00709aba:; BB(0x00709aba);
    /* 00709aba: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x709abfu); f_007917b8();
    /* 00709abf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00709ac2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709ac4: jne 0x709ac9 */ if (!fZ) goto L_00709ac9;
L_00709ac6:; BB(0x00709ac6);
    /* 00709ac6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00709ac8: ret  */ FN_RET(0x00709a90); r_esp += 4; return;
L_00709ac9:; BB(0x00709ac9);
    /* 00709ac9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709acf: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x709ad4u); f_00716ba0();
    /* 00709ad4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00709ad6: mov eax, 0 */ r_eax = 0x0u;
    /* 00709adb: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00709ade: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709adf: ret  */ FN_RET(0x00709a90); r_esp += 4; return;
}

void f_00709ae0(void) /* sub_709AE0 */
{
    FN_ENTER(0x00709ae0);
    /* 00709ae0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00709ae1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00709ae2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00709ae3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00709ae6: mov edi, edx */ r_edi = r_edx;
    /* 00709ae8: mov esi, eax */ r_esi = r_eax;
    /* 00709aea: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709af0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x709af5u); f_0068d5a8();
    /* 00709af5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709af6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709af8: je 0x709b27 */ if (fZ) goto L_00709b27;
L_00709afa:; BB(0x00709afa);
    /* 00709afa: mov ecx, dword ptr [eax + 0x33c] */ r_ecx = R32((u32)(r_eax+0x33cu));
    /* 00709b00: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00709b03: je 0x709b0c */ if (fZ) goto L_00709b0c;
L_00709b05:; BB(0x00709b05);
    /* 00709b05: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00709b0a: jmp 0x709b0e */ goto L_00709b0e;
L_00709b0c:; BB(0x00709b0c);
    /* 00709b0c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00709b0e:; BB(0x00709b0e);
    /* 00709b0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709b10: jne 0x709b20 */ if (!fZ) goto L_00709b20;
L_00709b12:; BB(0x00709b12);
    /* 00709b12: mov ecx, dword ptr [eax + 0x328] */ r_ecx = R32((u32)(r_eax+0x328u));
    /* 00709b18: test ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709b1e: je 0x709b27 */ if (fZ) goto L_00709b27;
L_00709b20:; BB(0x00709b20);
    /* 00709b20: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709b23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00709b24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00709b25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00709b26: ret  */ FN_RET(0x00709ae0); r_esp += 4; return;
L_00709b27:; BB(0x00709b27);
    /* 00709b27: mov ebp, dword ptr [0xa97f44] */ r_ebp = R32((u32)(0xa97f44u));
    /* 00709b2d: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00709b31: call 0x70a028 */ r_esp -= 4; W32(r_esp, 0x709b36u); f_0070a028();
    /* 00709b36: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709b3c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x709b41u); f_00716ba0();
    /* 00709b41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709b42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709b44: je 0x709b4d */ if (fZ) goto L_00709b4d;
L_00709b46:; BB(0x00709b46);
    /* 00709b46: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00709b4b: jmp 0x709b66 */ goto L_00709b66;
L_00709b4d:; BB(0x00709b4d);
    /* 00709b4d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709b53: call 0x718e88 */ r_esp -= 4; W32(r_esp, 0x709b58u); f_00718e88();
    /* 00709b58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709b59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709b5b: je 0x709b64 */ if (fZ) goto L_00709b64;
L_00709b5d:; BB(0x00709b5d);
    /* 00709b5d: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00709b62: jmp 0x709b66 */ goto L_00709b66;
L_00709b64:; BB(0x00709b64);
    /* 00709b64: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00709b66:; BB(0x00709b66);
    /* 00709b66: mov dword ptr [0xa97f44], ecx */ W32((u32)(0xa97f44u), r_ecx);
    /* 00709b6c: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709b6e: je 0x709d8a */ if (fZ) goto L_00709d8a;
L_00709b74:; BB(0x00709b74);
    /* 00709b74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709b76: je 0x709d02 */ if (fZ) goto L_00709d02;
L_00709b7c:; BB(0x00709b7c);
    /* 00709b7c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709b7f: jne 0x709c3f */ if (!fZ) goto L_00709c3f;
L_00709b85:; BB(0x00709b85);
    /* 00709b85: fld dword ptr [0xaf0358] */ FPUSH(R_F32((u32)(0xaf0358u)));
    /* 00709b8b: fld dword ptr [0x9712c8] */ FPUSH(R_F32((u32)(0x9712c8u)));
    /* 00709b91: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709b93: jne 0x709bb9 */ if (!fZ) goto L_00709bb9;
L_00709b95:; BB(0x00709b95);
    /* 00709b95: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00709b97: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00709b9b: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00709ba1: fmul dword ptr [0x9712cc] */ ST(0) = ST(0) * R_F32((u32)(0x9712ccu));
    /* 00709ba7: fsubr dword ptr [esp + 0xc] */ ST(0) = R_F32((u32)(r_esp+0xcu)) - ST(0);
    /* 00709bab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709bad: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00709bb1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709bb3: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00709bb7: jmp 0x709be9 */ goto L_00709be9;
L_00709bb9:; BB(0x00709bb9);
    /* 00709bb9: fld dword ptr [0x9712c0] */ FPUSH(R_F32((u32)(0x9712c0u)));
    /* 00709bbf: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00709bc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00709bc3: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00709bc7: fld dword ptr [0x9712cc] */ FPUSH(R_F32((u32)(0x9712ccu)));
    /* 00709bcd: fsub dword ptr [0x9712c4] */ ST(0) = ST(0) - R_F32((u32)(0x9712c4u));
    /* 00709bd3: fmul dword ptr [0xaf035c] */ ST(0) = ST(0) * R_F32((u32)(0xaf035cu));
    /* 00709bd9: fsubr dword ptr [esp + 0xc] */ ST(0) = R_F32((u32)(r_esp+0xcu)) - ST(0);
    /* 00709bdd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709bdf: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00709be3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709be5: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
L_00709be9:; BB(0x00709be9);
    /* 00709be9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709beb: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00709bef: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00709bf4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709bf9: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00709bfd: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00709c01: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709c05: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00709c09: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 00709c0e: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00709c12: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00709c17: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709c1c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00709c20: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00709c24: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709c28: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00709c2c: movsx ecx, word ptr [esp + 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 00709c31: mov eax, edx */ r_eax = r_edx;
    /* 00709c33: mov edx, ecx */ r_edx = r_ecx;
    /* 00709c35: call 0x709f5e */ r_esp -= 4; W32(r_esp, 0x709c3au); f_00709f5e();
    /* 00709c3a: jmp 0x709d8a */ goto L_00709d8a;
L_00709c3f:; BB(0x00709c3f);
    /* 00709c3f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709c42: jne 0x709d8a */ if (!fZ) goto L_00709d8a;
L_00709c48:; BB(0x00709c48);
    /* 00709c48: fld dword ptr [0xaf0358] */ FPUSH(R_F32((u32)(0xaf0358u)));
    /* 00709c4e: fld dword ptr [0x9712c0] */ FPUSH(R_F32((u32)(0x9712c0u)));
    /* 00709c54: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709c56: jne 0x709c7c */ if (!fZ) goto L_00709c7c;
L_00709c58:; BB(0x00709c58);
    /* 00709c58: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00709c5a: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00709c5e: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00709c64: fmul dword ptr [0x9712c4] */ ST(0) = ST(0) * R_F32((u32)(0x9712c4u));
    /* 00709c6a: fsubr dword ptr [esp + 0xc] */ ST(0) = R_F32((u32)(r_esp+0xcu)) - ST(0);
    /* 00709c6e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709c70: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00709c74: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709c76: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00709c7a: jmp 0x709cac */ goto L_00709cac;
L_00709c7c:; BB(0x00709c7c);
    /* 00709c7c: fld dword ptr [0x9712c8] */ FPUSH(R_F32((u32)(0x9712c8u)));
    /* 00709c82: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00709c84: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00709c86: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 00709c8a: fld dword ptr [0x9712cc] */ FPUSH(R_F32((u32)(0x9712ccu)));
    /* 00709c90: fsub dword ptr [0x9712c4] */ ST(0) = ST(0) - R_F32((u32)(0x9712c4u));
    /* 00709c96: fmul dword ptr [0xaf035c] */ ST(0) = ST(0) * R_F32((u32)(0xaf035cu));
    /* 00709c9c: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00709ca0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709ca2: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00709ca6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709ca8: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
L_00709cac:; BB(0x00709cac);
    /* 00709cac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709cae: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00709cb2: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00709cb7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709cbc: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00709cc0: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00709cc4: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709cc8: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00709ccc: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 00709cd1: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00709cd5: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00709cda: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709cdf: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00709ce3: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00709ce7: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709ceb: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00709cef: movsx ecx, word ptr [esp + 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 00709cf4: mov eax, edx */ r_eax = r_edx;
    /* 00709cf6: mov edx, ecx */ r_edx = r_ecx;
    /* 00709cf8: call 0x709f5e */ r_esp -= 4; W32(r_esp, 0x709cfdu); f_00709f5e();
    /* 00709cfd: jmp 0x709d8a */ goto L_00709d8a;
L_00709d02:; BB(0x00709d02);
    /* 00709d02: fld dword ptr [0xaf0358] */ FPUSH(R_F32((u32)(0xaf0358u)));
    /* 00709d08: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709d0b: je 0x709f27 */ if (fZ) goto L_00709f27;
L_00709d11:; BB(0x00709d11);
    /* 00709d11: fld dword ptr [0x9712c0] */ FPUSH(R_F32((u32)(0x9712c0u)));
    /* 00709d17: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00709d19: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 00709d1d: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00709d23: fmul dword ptr [0x9712c4] */ ST(0) = ST(0) * R_F32((u32)(0x9712c4u));
    /* 00709d29: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00709d2d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709d2f: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00709d33: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709d35: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
L_00709d39:; BB(0x00709d39);
    /* 00709d39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709d3b: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00709d3f: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00709d44: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709d49: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00709d4d: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00709d51: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709d55: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00709d59: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 00709d5e: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00709d62: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00709d67: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709d6c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00709d70: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00709d74: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709d78: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00709d7c: movsx ecx, word ptr [esp + 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 00709d81: mov eax, edx */ r_eax = r_edx;
    /* 00709d83: mov edx, ecx */ r_edx = r_ecx;
    /* 00709d85: call 0x709f5e */ r_esp -= 4; W32(r_esp, 0x709d8au); f_00709f5e();
L_00709d8a:; BB(0x00709d8a);
    /* 00709d8a: mov ecx, dword ptr [0xa97f24] */ r_ecx = R32((u32)(0xa97f24u));
    /* 00709d90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709d92: je 0x709db6 */ if (fZ) goto L_00709db6;
L_00709d94:; BB(0x00709d94);
    /* 00709d94: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709d97: jne 0x709da3 */ if (!fZ) goto L_00709da3;
L_00709d99:; BB(0x00709d99);
    /* 00709d99: call 0x70a2a0 */ r_esp -= 4; W32(r_esp, 0x709d9eu); f_0070a2a0();
    /* 00709d9e: jmp 0x709e5a */ goto L_00709e5a;
L_00709da3:; BB(0x00709da3);
    /* 00709da3: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709da6: jne 0x709e5a */ if (!fZ) goto L_00709e5a;
L_00709dac:; BB(0x00709dac);
    /* 00709dac: call 0x70a050 */ r_esp -= 4; W32(r_esp, 0x709db1u); f_0070a050();
    /* 00709db1: jmp 0x709e5a */ goto L_00709e5a;
L_00709db6:; BB(0x00709db6);
    /* 00709db6: fld dword ptr [0xa48828] */ FPUSH(R_F32((u32)(0xa48828u)));
    /* 00709dbc: mov ebp, dword ptr [0xacbef0] */ r_ebp = R32((u32)(0xacbef0u));
    /* 00709dc2: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00709dc6: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00709dcb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709dd0: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00709dd4: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00709dd8: fistp dword ptr [0xa97f2c] */ W32((u32)(0xa97f2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00709dde: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00709de2: fld dword ptr [0x96eda0] */ FPUSH(R_F32((u32)(0x96eda0u)));
    /* 00709de8: fmul dword ptr [0xaf035c] */ ST(0) = ST(0) * R_F32((u32)(0xaf035cu));
    /* 00709dee: fadd dword ptr [0xa4882c] */ ST(0) = ST(0) + R_F32((u32)(0xa4882cu));
    /* 00709df4: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00709df8: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00709dfd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709e02: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00709e06: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00709e0a: fistp dword ptr [0xa97f30] */ W32((u32)(0xa97f30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709e10: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00709e14: mov dword ptr [0xa97f38], 0 */ W32((u32)(0xa97f38u), 0x0u);
    /* 00709e1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00709e20: mov dword ptr [0xa97f28], ecx */ W32((u32)(0xa97f28u), r_ecx);
    /* 00709e26: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709e28: mov word ptr [0xa97f34], cx */ W16((u32)(0xa97f34u), (u16)r_ecx);
    /* 00709e2f: mov word ptr [0xa97f36], cx */ W16((u32)(0xa97f36u), (u16)r_ecx);
    /* 00709e36: jne 0x709e5a */ if (!fZ) goto L_00709e5a;
L_00709e38:; BB(0x00709e38);
    /* 00709e38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00709e3a: call dword ptr [0x8f8334] */ { u32 t = R32((u32)(0x8f8334u)); r_esp -= 4; W32(r_esp, 0x709e40u); call_ind(t); }
    /* 00709e40: mov dword ptr [0xa97f40], eax */ W32((u32)(0xa97f40u), r_eax);
    /* 00709e45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00709e47: jl 0x709e5a */ if ((fS!=fO)) goto L_00709e5a;
L_00709e49:; BB(0x00709e49);
    /* 00709e49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00709e4b: call dword ptr [0x8f8334] */ { u32 t = R32((u32)(0x8f8334u)); r_esp -= 4; W32(r_esp, 0x709e51u); call_ind(t); }
    /* 00709e51: mov dword ptr [0xa97f40], eax */ W32((u32)(0xa97f40u), r_eax);
    /* 00709e56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00709e58: jge 0x709e49 */ if ((fS==fO)) goto L_00709e49;
L_00709e5a:; BB(0x00709e5a);
    /* 00709e5a: mov ecx, dword ptr [0xa97f28] */ r_ecx = R32((u32)(0xa97f28u));
    /* 00709e60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709e62: je 0x709f20 */ if (fZ) goto L_00709f20;
L_00709e68:; BB(0x00709e68);
    /* 00709e68: movsx ebp, word ptr [0xa97f34] */ r_ebp = (u32)(i32)(i16)R16((u32)(0xa97f34u));
    /* 00709e6f: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00709e72: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00709e73: movsx ecx, word ptr [0xa97f36] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa97f36u));
    /* 00709e7a: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00709e7d: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00709e7f: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00709e83: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00709e87: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00709e8a: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x709e8fu); f_0082dc9c();
    /* 00709e8f: movsx ecx, word ptr [0xa97f34] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa97f34u));
    /* 00709e96: movsx ebp, word ptr [0xa97f36] */ r_ebp = (u32)(i32)(i16)R16((u32)(0xa97f36u));
    /* 00709e9d: fld dword ptr [0xa97f38] */ FPUSH(R_F32((u32)(0xa97f38u)));
    /* 00709ea3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00709ea5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00709ea7: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00709eab: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 00709eaf: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00709eb1: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00709eb5: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 00709eb9: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00709ebb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00709ebc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00709ebe: jb 0x709ec2 */ if (fC) goto L_00709ec2;
L_00709ec0:; BB(0x00709ec0);
    /* 00709ec0: fst st(3) */ ST(3) = ST(0);
L_00709ec2:; BB(0x00709ec2);
    /* 00709ec2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00709ec4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00709ec6: fst dword ptr [0xa97f38] */ W_F32((u32)(0xa97f38u), ST(0));
    /* 00709ecc: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00709ece: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709ed0: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00709ed4: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00709ed9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709ede: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00709ee2: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00709ee6: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709eea: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00709eee: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00709ef2: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 00709ef5: fmul dword ptr [0xa97f38] */ ST(0) = ST(0) * R_F32((u32)(0xa97f38u));
    /* 00709efb: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00709eff: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00709f04: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709f09: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00709f0d: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00709f11: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709f15: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00709f19: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00709f1d: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
L_00709f20:; BB(0x00709f20);
    /* 00709f20: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709f23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00709f24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00709f25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00709f26: ret  */ FN_RET(0x00709ae0); r_esp += 4; return;
L_00709f27:; BB(0x00709f27);
    /* 00709f27: fld dword ptr [0x9712c8] */ FPUSH(R_F32((u32)(0x9712c8u)));
    /* 00709f2d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00709f2f: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 00709f33: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00709f39: fmul dword ptr [0x9712cc] */ ST(0) = ST(0) * R_F32((u32)(0x9712ccu));
    /* 00709f3f: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00709f43: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709f45: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00709f49: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709f4b: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00709f4f: jmp 0x709d39 */ goto L_00709d39;
}

void f_00709f5e(void) /* sub_709F5E */
{
    FN_ENTER(0x00709f5e);
    /* 00709f5e: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00709f61: mov ecx, dword ptr [0xacbef0] */ r_ecx = R32((u32)(0xacbef0u));
    /* 00709f67: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00709f6a: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00709f6d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00709f70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709f72: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00709f76: je 0x70a016 */ if (fZ) goto L_0070a016;
L_00709f7c:; BB(0x00709f7c);
    /* 00709f7c: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00709f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00709f81: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00709f87: call dword ptr [0x8f8328] */ { u32 t = R32((u32)(0x8f8328u)); r_esp -= 4; W32(r_esp, 0x709f8du); call_ind(t); }
    /* 00709f8d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00709f90: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 00709f96: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00709f98: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00709f9c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00709f9e: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00709fa2: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 00709fa8: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00709faa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00709fac: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00709fb0: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00709fb5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709fba: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00709fbe: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00709fc2: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709fc6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00709fca: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00709fce: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00709fd0: movsx edx, word ptr [esp + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 00709fd5: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00709fd9: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00709fde: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00709fe3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00709fe7: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00709feb: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00709fef: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00709ff3: movsx eax, word ptr [esp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 00709ff8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00709ffb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00709fff: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0070a002: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070a003: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070a009: call dword ptr [0x8f8340] */ { u32 t = R32((u32)(0x8f8340u)); r_esp -= 4; W32(r_esp, 0x70a00fu); call_ind(t); }
    /* 0070a00f: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0070a012: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
L_0070a016:; BB(0x0070a016);
    /* 0070a016: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070a017: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070a018: call dword ptr [0x8f8344] */ { u32 t = R32((u32)(0x8f8344u)); r_esp -= 4; W32(r_esp, 0x70a01eu); call_ind(t); }
    /* 0070a01e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070a021: ret  */ FN_RET(0x00709f5e); r_esp += 4; return;
}

