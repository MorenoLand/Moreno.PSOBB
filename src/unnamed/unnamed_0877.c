#include "protos.h"

void f_00877154(void) /* sub_877154 */
{
    FN_ENTER(0x00877154);
    /* 00877154: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877155: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877156: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00877157: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00877158: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877159: mov edi, edx */ r_edi = r_edx;
    /* 0087715b: mov ebx, eax */ r_ebx = r_eax;
    /* 0087715d: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
    /* 00877160: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00877162: je 0x8774e2 */ if (fZ) goto L_008774e2;
L_00877168:; BB(0x00877168);
    /* 00877168: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0087716a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087716b: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877170u); f_00877c98();
    /* 00877170: mov edx, eax */ r_edx = r_eax;
    /* 00877172: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877175: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877176: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00877178: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087717a: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 0087717d: jle 0x8771a9 */ if ((fZ||fS!=fO)) goto L_008771a9;
L_0087717f:; BB(0x0087717f);
    /* 0087717f: mov esi, eax */ r_esi = r_eax;
L_00877181:; BB(0x00877181);
    /* 00877181: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00877183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00877185: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x87718au); f_008587c7();
    /* 0087718a: mov dword ptr [ebp + esi*4 + 0x720], eax */ W32((u32)(r_ebp+r_esi*4+0x720u), r_eax);
    /* 00877191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00877192: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877193: call 0x885cfc */ r_esp -= 4; W32(r_esp, 0x877198u); f_00885cfc();
    /* 00877198: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087719b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087719d: jne 0x87739a */ if (!fZ) goto L_0087739a;
L_008771a3:; BB(0x008771a3);
    /* 008771a3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008771a4: cmp esi, dword ptr [ebp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008771a7: jl 0x877181 */ if ((fS!=fO)) goto L_00877181;
L_008771a9:; BB(0x008771a9);
    /* 008771a9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008771ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008771ac: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8771b1u); f_00877c98();
    /* 008771b1: mov edx, eax */ r_edx = r_eax;
    /* 008771b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008771b6: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008771b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008771b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008771bb: jle 0x8771e5 */ if ((fZ||fS!=fO)) goto L_008771e5;
L_008771bd:; BB(0x008771bd);
    /* 008771bd: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008771c0: mov ebx, eax */ r_ebx = r_eax;
    /* 008771c2: mov esi, edx */ r_esi = r_edx;
L_008771c4:; BB(0x008771c4);
    /* 008771c4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008771c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008771c7: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8771ccu); f_00877c98();
    /* 008771cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008771cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008771d1: jl 0x8774f5 */ if ((fS!=fO)) goto L_008774f5;
L_008771d7:; BB(0x008771d7);
    /* 008771d7: jg 0x8774da */ if ((!fZ&&fS==fO)) goto L_008774da;
L_008771dd:; BB(0x008771dd);
    /* 008771dd: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008771de: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008771e0: jl 0x8771c4 */ if ((fS!=fO)) goto L_008771c4;
L_008771e2:; BB(0x008771e2);
    /* 008771e2: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_008771e5:; BB(0x008771e5);
    /* 008771e5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008771e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008771e8: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8771edu); f_00877c98();
    /* 008771ed: mov edx, eax */ r_edx = r_eax;
    /* 008771ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008771f2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008771f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008771f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008771f7: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 008771fa: jle 0x877245 */ if ((fZ||fS!=fO)) goto L_00877245;
L_008771fc:; BB(0x008771fc);
    /* 008771fc: mov esi, eax */ r_esi = r_eax;
L_008771fe:; BB(0x008771fe);
    /* 008771fe: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00877200: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877201: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877206u); f_00877c98();
    /* 00877206: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877209: mov dword ptr [ebp + esi*4 + 0x320], eax */ W32((u32)(r_ebp+r_esi*4+0x320u), r_eax);
    /* 00877210: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00877212: jl 0x87739a */ if ((fS!=fO)) goto L_0087739a;
L_00877218:; BB(0x00877218);
    /* 00877218: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087721b: jge 0x87739a */ if ((fS==fO)) goto L_0087739a;
L_00877221:; BB(0x00877221);
    /* 00877221: mov ecx, dword ptr [eax*4 + 0xa25340] */ r_ecx = R32((u32)(r_eax*4+0xa25340u));
    /* 00877228: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877229: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087722a: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x87722du); call_ind(t); }
    /* 0087722d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877230: mov dword ptr [ebp + esi*4 + 0x420], eax */ W32((u32)(r_ebp+r_esi*4+0x420u), r_eax);
    /* 00877237: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877239: je 0x87739a */ if (fZ) goto L_0087739a;
L_0087723f:; BB(0x0087723f);
    /* 0087723f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00877240: cmp esi, dword ptr [ebp + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877243: jl 0x8771fe */ if ((fS!=fO)) goto L_008771fe;
L_00877245:; BB(0x00877245);
    /* 00877245: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00877247: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877248: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x87724du); f_00877c98();
    /* 0087724d: mov edx, eax */ r_edx = r_eax;
    /* 0087724f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877252: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877253: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00877255: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00877257: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 0087725a: jle 0x8772a5 */ if ((fZ||fS!=fO)) goto L_008772a5;
L_0087725c:; BB(0x0087725c);
    /* 0087725c: mov esi, eax */ r_esi = r_eax;
L_0087725e:; BB(0x0087725e);
    /* 0087725e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00877260: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877261: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877266u); f_00877c98();
    /* 00877266: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877269: mov dword ptr [ebp + esi*4 + 0x520], eax */ W32((u32)(r_ebp+r_esi*4+0x520u), r_eax);
    /* 00877270: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00877272: jl 0x87739a */ if ((fS!=fO)) goto L_0087739a;
L_00877278:; BB(0x00877278);
    /* 00877278: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087727b: jge 0x87739a */ if ((fS==fO)) goto L_0087739a;
L_00877281:; BB(0x00877281);
    /* 00877281: mov ecx, dword ptr [eax*4 + 0xa25348] */ r_ecx = R32((u32)(r_eax*4+0xa25348u));
    /* 00877288: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877289: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087728a: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x87728du); call_ind(t); }
    /* 0087728d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877290: mov dword ptr [ebp + esi*4 + 0x620], eax */ W32((u32)(r_ebp+r_esi*4+0x620u), r_eax);
    /* 00877297: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877299: je 0x87739a */ if (fZ) goto L_0087739a;
L_0087729f:; BB(0x0087729f);
    /* 0087729f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008772a0: cmp esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008772a3: jl 0x87725e */ if ((fS!=fO)) goto L_0087725e;
L_008772a5:; BB(0x008772a5);
    /* 008772a5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008772a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008772a8: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8772adu); f_00877c98();
    /* 008772ad: mov edx, eax */ r_edx = r_eax;
    /* 008772af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008772b2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008772b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008772b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008772b7: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 008772ba: jle 0x877302 */ if ((fZ||fS!=fO)) goto L_00877302;
L_008772bc:; BB(0x008772bc);
    /* 008772bc: mov esi, eax */ r_esi = r_eax;
L_008772be:; BB(0x008772be);
    /* 008772be: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008772c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008772c1: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8772c6u); f_00877c98();
    /* 008772c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008772c9: mov dword ptr [ebp + esi*4 + 0x120], eax */ W32((u32)(r_ebp+r_esi*4+0x120u), r_eax);
    /* 008772d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008772d2: jl 0x87739a */ if ((fS!=fO)) goto L_0087739a;
L_008772d8:; BB(0x008772d8);
    /* 008772d8: jg 0x87739a */ if ((!fZ&&fS==fO)) goto L_0087739a;
L_008772de:; BB(0x008772de);
    /* 008772de: mov ecx, dword ptr [eax*4 + 0xa25354] */ r_ecx = R32((u32)(r_eax*4+0xa25354u));
    /* 008772e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008772e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008772e7: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x8772eau); call_ind(t); }
    /* 008772ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008772ed: mov dword ptr [ebp + esi*4 + 0x220], eax */ W32((u32)(r_ebp+r_esi*4+0x220u), r_eax);
    /* 008772f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008772f6: je 0x87739a */ if (fZ) goto L_0087739a;
L_008772fc:; BB(0x008772fc);
    /* 008772fc: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008772fd: cmp esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877300: jl 0x8772be */ if ((fS!=fO)) goto L_008772be;
L_00877302:; BB(0x00877302);
    /* 00877302: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00877304: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877305: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x87730au); f_00877c98();
    /* 0087730a: mov edx, eax */ r_edx = r_eax;
    /* 0087730c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087730f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877310: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00877312: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00877314: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00877317: jle 0x877386 */ if ((fZ||fS!=fO)) goto L_00877386;
L_00877319:; BB(0x00877319);
    /* 00877319: mov esi, ebp */ r_esi = r_ebp;
    /* 0087731b: mov ebp, eax */ r_ebp = r_eax;
L_0087731d:; BB(0x0087731d);
    /* 0087731d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0087731f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00877321: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x877326u); f_008587c7();
    /* 00877326: mov dword ptr [esi + ebp*4 + 0x20], eax */ W32((u32)(r_esi+r_ebp*4+0x20u), r_eax);
    /* 0087732a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0087732c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087732d: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877332u); f_00877c98();
    /* 00877332: mov ecx, dword ptr [esi + ebp*4 + 0x20] */ r_ecx = R32((u32)(r_esi+r_ebp*4+0x20u));
    /* 00877336: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00877338: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0087733a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087733b: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877340u); f_00877c98();
    /* 00877340: mov ecx, dword ptr [esi + ebp*4 + 0x20] */ r_ecx = R32((u32)(r_esi+r_ebp*4+0x20u));
    /* 00877344: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00877347: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00877349: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087734a: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x87734fu); f_00877c98();
    /* 0087734f: mov ecx, dword ptr [esi + ebp*4 + 0x20] */ r_ecx = R32((u32)(r_esi+r_ebp*4+0x20u));
    /* 00877353: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00877356: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00877358: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877359: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x87735eu); f_00877c98();
    /* 0087735e: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877361: mov ecx, dword ptr [esi + ebp*4 + 0x20] */ r_ecx = R32((u32)(r_esi+r_ebp*4+0x20u));
    /* 00877365: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00877368: mov ecx, dword ptr [esi + ebp*4 + 0x20] */ r_ecx = R32((u32)(r_esi+r_ebp*4+0x20u));
    /* 0087736c: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877370: jg 0x87739a */ if ((!fZ&&fS==fO)) goto L_0087739a;
L_00877372:; BB(0x00877372);
    /* 00877372: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877376: jg 0x87739a */ if ((!fZ&&fS==fO)) goto L_0087739a;
L_00877378:; BB(0x00877378);
    /* 00877378: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0087737b: cmp ecx, dword ptr [esi + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087737e: jge 0x87739a */ if ((fS==fO)) goto L_0087739a;
L_00877380:; BB(0x00877380);
    /* 00877380: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00877381: cmp ebp, dword ptr [esi + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877384: jl 0x87731d */ if ((fS!=fO)) goto L_0087731d;
L_00877386:; BB(0x00877386);
    /* 00877386: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00877388: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877389: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x87738eu); f_00877c98();
    /* 0087738e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877391: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877394: je 0x8774ed */ if (fZ) goto L_008774ed;
L_0087739a:; BB(0x0087739a);
    /* 0087739a: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
    /* 0087739d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087739f: je 0x8774b6 */ if (fZ) goto L_008774b6;
L_008773a5:; BB(0x008773a5);
    /* 008773a5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008773a7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008773aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008773ac: jle 0x8773c5 */ if ((fZ||fS!=fO)) goto L_008773c5;
L_008773ae:; BB(0x008773ae);
    /* 008773ae: mov ecx, dword ptr [ebp + edi*4 + 0x20] */ r_ecx = R32((u32)(r_ebp+r_edi*4+0x20u));
    /* 008773b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008773b4: je 0x8773c0 */ if (fZ) goto L_008773c0;
L_008773b6:; BB(0x008773b6);
    /* 008773b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008773b7: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8773bcu); f_00858882();
    /* 008773bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008773bd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
L_008773c0:; BB(0x008773c0);
    /* 008773c0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008773c1: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008773c3: jl 0x8773ae */ if ((fS!=fO)) goto L_008773ae;
L_008773c5:; BB(0x008773c5);
    /* 008773c5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008773c7: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008773cb: jle 0x8773ec */ if ((fZ||fS!=fO)) goto L_008773ec;
L_008773cd:; BB(0x008773cd);
    /* 008773cd: mov edx, dword ptr [ebp + edi*4 + 0x120] */ r_edx = R32((u32)(r_ebp+r_edi*4+0x120u));
    /* 008773d4: mov ecx, dword ptr [edx*4 + 0xa25354] */ r_ecx = R32((u32)(r_edx*4+0xa25354u));
    /* 008773db: push dword ptr [ebp + edi*4 + 0x220] */ { u32 v = R32((u32)(r_ebp+r_edi*4+0x220u)); r_esp -= 4; W32(r_esp, v); }
    /* 008773e2: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8773e5u); call_ind(t); }
    /* 008773e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008773e6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008773e7: cmp edi, dword ptr [ebp + 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008773ea: jl 0x8773cd */ if ((fS!=fO)) goto L_008773cd;
L_008773ec:; BB(0x008773ec);
    /* 008773ec: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008773ee: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008773f2: jle 0x877413 */ if ((fZ||fS!=fO)) goto L_00877413;
L_008773f4:; BB(0x008773f4);
    /* 008773f4: mov edx, dword ptr [ebp + edi*4 + 0x320] */ r_edx = R32((u32)(r_ebp+r_edi*4+0x320u));
    /* 008773fb: mov ecx, dword ptr [edx*4 + 0xa25340] */ r_ecx = R32((u32)(r_edx*4+0xa25340u));
    /* 00877402: push dword ptr [ebp + edi*4 + 0x420] */ { u32 v = R32((u32)(r_ebp+r_edi*4+0x420u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877409: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x87740cu); call_ind(t); }
    /* 0087740c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087740d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087740e: cmp edi, dword ptr [ebp + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877411: jl 0x8773f4 */ if ((fS!=fO)) goto L_008773f4;
L_00877413:; BB(0x00877413);
    /* 00877413: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00877415: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877419: jle 0x87743a */ if ((fZ||fS!=fO)) goto L_0087743a;
L_0087741b:; BB(0x0087741b);
    /* 0087741b: mov edx, dword ptr [ebp + edi*4 + 0x520] */ r_edx = R32((u32)(r_ebp+r_edi*4+0x520u));
    /* 00877422: mov ecx, dword ptr [edx*4 + 0xa25348] */ r_ecx = R32((u32)(r_edx*4+0xa25348u));
    /* 00877429: push dword ptr [ebp + edi*4 + 0x620] */ { u32 v = R32((u32)(r_ebp+r_edi*4+0x620u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877430: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x877433u); call_ind(t); }
    /* 00877433: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00877434: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877435: cmp edi, dword ptr [ebp + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877438: jl 0x87741b */ if ((fS!=fO)) goto L_0087741b;
L_0087743a:; BB(0x0087743a);
    /* 0087743a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087743c: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877440: jle 0x877483 */ if ((fZ||fS!=fO)) goto L_00877483;
L_00877442:; BB(0x00877442);
    /* 00877442: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00877445: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877447: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00877449: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087744b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087744d: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087744f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877451: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877453: mov esi, eax */ r_esi = r_eax;
L_00877455:; BB(0x00877455);
    /* 00877455: mov edx, dword ptr [ebp + esi*4 + 0x720] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x720u));
    /* 0087745c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087745e: je 0x877467 */ if (fZ) goto L_00877467;
L_00877460:; BB(0x00877460);
    /* 00877460: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00877461: call 0x884a00 */ r_esp -= 4; W32(r_esp, 0x877466u); f_00884a00();
    /* 00877466: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00877467:; BB(0x00877467);
    /* 00877467: mov edx, dword ptr [ebp + 0xb20] */ r_edx = R32((u32)(r_ebp+0xb20u));
    /* 0087746d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087746f: je 0x87747a */ if (fZ) goto L_0087747a;
L_00877471:; BB(0x00877471);
    /* 00877471: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877473: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00877474: call 0x884b64 */ r_esp -= 4; W32(r_esp, 0x877479u); f_00884b64();
    /* 00877479: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0087747a:; BB(0x0087747a);
    /* 0087747a: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087747d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087747e: cmp esi, dword ptr [ebp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877481: jl 0x877455 */ if ((fS!=fO)) goto L_00877455;
L_00877483:; BB(0x00877483);
    /* 00877483: mov edx, dword ptr [ebp + 0xb20] */ r_edx = R32((u32)(r_ebp+0xb20u));
    /* 00877489: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087748b: je 0x877494 */ if (fZ) goto L_00877494;
L_0087748d:; BB(0x0087748d);
    /* 0087748d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087748e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x877493u); f_00858882();
    /* 00877493: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00877494:; BB(0x00877494);
    /* 00877494: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00877496: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087749a: jle 0x8774af */ if ((fZ||fS!=fO)) goto L_008774af;
L_0087749c:; BB(0x0087749c);
    /* 0087749c: push dword ptr [ebp + edi*4 + 0xb24] */ { u32 v = R32((u32)(r_ebp+r_edi*4+0xb24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008774a3: call 0x879098 */ r_esp -= 4; W32(r_esp, 0x8774a8u); f_00879098();
    /* 008774a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008774a9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008774aa: cmp edi, dword ptr [ebp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008774ad: jl 0x87749c */ if ((fS!=fO)) goto L_0087749c;
L_008774af:; BB(0x008774af);
    /* 008774af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008774b0: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8774b5u); f_00858882();
    /* 008774b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008774b6:; BB(0x008774b6);
    /* 008774b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008774b8: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 008774ba: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 008774bd: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 008774c0: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 008774c3: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 008774c6: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 008774c9: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 008774cc: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 008774cf: mov eax, 0xffffff7b */ r_eax = 0xffffff7bu;
    /* 008774d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008774d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008774d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008774d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008774d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008774d9: ret  */ FN_RET(0x00877154); r_esp += 4; return;
L_008774da:; BB(0x008774da);
    /* 008774da: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 008774dd: jmp 0x87739a */ goto L_0087739a;
L_008774e2:; BB(0x008774e2);
    /* 008774e2: mov eax, 0xffffff7f */ r_eax = 0xffffff7fu;
    /* 008774e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008774e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008774e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008774ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008774eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008774ec: ret  */ FN_RET(0x00877154); r_esp += 4; return;
L_008774ed:; BB(0x008774ed);
    /* 008774ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008774ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008774f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008774f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008774f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008774f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008774f4: ret  */ FN_RET(0x00877154); r_esp += 4; return;
L_008774f5:; BB(0x008774f5);
    /* 008774f5: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 008774f8: jmp 0x87739a */ goto L_0087739a;
}

void f_00877500(void) /* sub_877500 */
{
    FN_ENTER(0x00877500);
    /* 00877500: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877501: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877502: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00877503: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877504: mov esi, edx */ r_esi = r_edx;
    /* 00877506: mov edi, eax */ r_edi = r_eax;
    /* 00877508: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 0087750b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0087750d: je 0x877701 */ if (fZ) goto L_00877701;
L_00877513:; BB(0x00877513);
    /* 00877513: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00877515: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877516: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x87751bu); f_00877c98();
    /* 0087751b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087751e: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00877520: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00877522: je 0x87752e */ if (fZ) goto L_0087752e;
L_00877524:; BB(0x00877524);
    /* 00877524: mov eax, 0xffffff7a */ r_eax = 0xffffff7au;
    /* 00877529: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087752a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087752b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087752c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087752d: ret  */ FN_RET(0x00877500); r_esp += 4; return;
L_0087752e:; BB(0x0087752e);
    /* 0087752e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00877530: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877531: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877536u); f_00877c98();
    /* 00877536: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00877539: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0087753b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087753c: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877541u); f_00877c98();
    /* 00877541: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 00877544: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00877546: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877547: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x87754cu); f_00877c98();
    /* 0087754c: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0087754f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00877551: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877552: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877557u); f_00877c98();
    /* 00877557: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 0087755a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0087755c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087755d: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877562u); f_00877c98();
    /* 00877562: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 00877565: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00877567: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877568: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x87756du); f_00877c98();
    /* 0087756d: mov ecx, eax */ r_ecx = r_eax;
    /* 0087756f: mov eax, 1 */ r_eax = 0x1u;
    /* 00877574: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00877576: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00877579: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0087757b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087757c: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877581u); f_00877c98();
    /* 00877581: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877584: mov ecx, eax */ r_ecx = r_eax;
    /* 00877586: mov eax, 1 */ r_eax = 0x1u;
    /* 0087758b: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087758d: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00877590: cmp dword ptr [edi + 8], 0 */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877594: jle 0x8775bc */ if ((fZ||fS!=fO)) goto L_008775bc;
L_00877596:; BB(0x00877596);
    /* 00877596: cmp dword ptr [edi + 4], 0 */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087759a: jle 0x8775bc */ if ((fZ||fS!=fO)) goto L_008775bc;
L_0087759c:; BB(0x0087759c);
    /* 0087759c: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0087759f: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008775a2: jl 0x8775bc */ if ((fS!=fO)) goto L_008775bc;
L_008775a4:; BB(0x008775a4);
    /* 008775a4: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008775a6: jl 0x8775bc */ if ((fS!=fO)) goto L_008775bc;
L_008775a8:; BB(0x008775a8);
    /* 008775a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008775aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008775ab: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8775b0u); f_00877c98();
    /* 008775b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008775b3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008775b6: je 0x87770b */ if (fZ) goto L_0087770b;
L_008775bc:; BB(0x008775bc);
    /* 008775bc: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 008775bf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008775c1: je 0x8776de */ if (fZ) goto L_008776de;
L_008775c7:; BB(0x008775c7);
    /* 008775c7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008775c9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008775cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008775ce: jle 0x8775e7 */ if ((fZ||fS!=fO)) goto L_008775e7;
L_008775d0:; BB(0x008775d0);
    /* 008775d0: mov ecx, dword ptr [ebp + esi*4 + 0x20] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0x20u));
    /* 008775d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008775d6: je 0x8775e2 */ if (fZ) goto L_008775e2;
L_008775d8:; BB(0x008775d8);
    /* 008775d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008775d9: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8775deu); f_00858882();
    /* 008775de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008775df: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
L_008775e2:; BB(0x008775e2);
    /* 008775e2: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008775e3: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008775e5: jl 0x8775d0 */ if ((fS!=fO)) goto L_008775d0;
L_008775e7:; BB(0x008775e7);
    /* 008775e7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008775e9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008775ed: jle 0x87760e */ if ((fZ||fS!=fO)) goto L_0087760e;
L_008775ef:; BB(0x008775ef);
    /* 008775ef: mov edx, dword ptr [ebp + esi*4 + 0x120] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x120u));
    /* 008775f6: mov ecx, dword ptr [edx*4 + 0xa25354] */ r_ecx = R32((u32)(r_edx*4+0xa25354u));
    /* 008775fd: push dword ptr [ebp + esi*4 + 0x220] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0x220u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877604: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x877607u); call_ind(t); }
    /* 00877607: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00877608: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00877609: cmp esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087760c: jl 0x8775ef */ if ((fS!=fO)) goto L_008775ef;
L_0087760e:; BB(0x0087760e);
    /* 0087760e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00877610: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877614: jle 0x877635 */ if ((fZ||fS!=fO)) goto L_00877635;
L_00877616:; BB(0x00877616);
    /* 00877616: mov edx, dword ptr [ebp + esi*4 + 0x320] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x320u));
    /* 0087761d: mov ecx, dword ptr [edx*4 + 0xa25340] */ r_ecx = R32((u32)(r_edx*4+0xa25340u));
    /* 00877624: push dword ptr [ebp + esi*4 + 0x420] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0x420u)); r_esp -= 4; W32(r_esp, v); }
    /* 0087762b: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x87762eu); call_ind(t); }
    /* 0087762e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087762f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00877630: cmp esi, dword ptr [ebp + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877633: jl 0x877616 */ if ((fS!=fO)) goto L_00877616;
L_00877635:; BB(0x00877635);
    /* 00877635: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00877637: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087763b: jle 0x87765c */ if ((fZ||fS!=fO)) goto L_0087765c;
L_0087763d:; BB(0x0087763d);
    /* 0087763d: mov edx, dword ptr [ebp + esi*4 + 0x520] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x520u));
    /* 00877644: mov ecx, dword ptr [edx*4 + 0xa25348] */ r_ecx = R32((u32)(r_edx*4+0xa25348u));
    /* 0087764b: push dword ptr [ebp + esi*4 + 0x620] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0x620u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877652: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x877655u); call_ind(t); }
    /* 00877655: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00877656: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00877657: cmp esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087765a: jl 0x87763d */ if ((fS!=fO)) goto L_0087763d;
L_0087765c:; BB(0x0087765c);
    /* 0087765c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087765e: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877662: jle 0x8776ab */ if ((fZ||fS!=fO)) goto L_008776ab;
L_00877664:; BB(0x00877664);
    /* 00877664: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00877667: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00877669: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087766b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087766d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087766f: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00877671: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00877673: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00877675: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00877678: mov ebx, eax */ r_ebx = r_eax;
L_0087767a:; BB(0x0087767a);
    /* 0087767a: mov edx, dword ptr [ebp + ebx*4 + 0x720] */ r_edx = R32((u32)(r_ebp+r_ebx*4+0x720u));
    /* 00877681: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877683: je 0x87768c */ if (fZ) goto L_0087768c;
L_00877685:; BB(0x00877685);
    /* 00877685: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00877686: call 0x884a00 */ r_esp -= 4; W32(r_esp, 0x87768bu); f_00884a00();
    /* 0087768b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0087768c:; BB(0x0087768c);
    /* 0087768c: mov edx, dword ptr [ebp + 0xb20] */ r_edx = R32((u32)(r_ebp+0xb20u));
    /* 00877692: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877694: je 0x87769f */ if (fZ) goto L_0087769f;
L_00877696:; BB(0x00877696);
    /* 00877696: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877698: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00877699: call 0x884b64 */ r_esp -= 4; W32(r_esp, 0x87769eu); f_00884b64();
    /* 0087769e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0087769f:; BB(0x0087769f);
    /* 0087769f: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008776a2: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008776a3: cmp ebx, dword ptr [ebp + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008776a6: jl 0x87767a */ if ((fS!=fO)) goto L_0087767a;
L_008776a8:; BB(0x008776a8);
    /* 008776a8: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_008776ab:; BB(0x008776ab);
    /* 008776ab: mov edx, dword ptr [ebp + 0xb20] */ r_edx = R32((u32)(r_ebp+0xb20u));
    /* 008776b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008776b3: je 0x8776bc */ if (fZ) goto L_008776bc;
L_008776b5:; BB(0x008776b5);
    /* 008776b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008776b6: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8776bbu); f_00858882();
    /* 008776bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008776bc:; BB(0x008776bc);
    /* 008776bc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008776be: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008776c2: jle 0x8776d7 */ if ((fZ||fS!=fO)) goto L_008776d7;
L_008776c4:; BB(0x008776c4);
    /* 008776c4: push dword ptr [ebp + esi*4 + 0xb24] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0xb24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008776cb: call 0x879098 */ r_esp -= 4; W32(r_esp, 0x8776d0u); f_00879098();
    /* 008776d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008776d1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008776d2: cmp esi, dword ptr [ebp + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008776d5: jl 0x8776c4 */ if ((fS!=fO)) goto L_008776c4;
L_008776d7:; BB(0x008776d7);
    /* 008776d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008776d8: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8776ddu); f_00858882();
    /* 008776dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008776de:; BB(0x008776de);
    /* 008776de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008776e0: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 008776e2: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 008776e5: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 008776e8: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 008776eb: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 008776ee: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 008776f1: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 008776f4: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 008776f7: mov eax, 0xffffff7b */ r_eax = 0xffffff7bu;
    /* 008776fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008776fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008776fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008776ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877700: ret  */ FN_RET(0x00877500); r_esp += 4; return;
L_00877701:; BB(0x00877701);
    /* 00877701: mov eax, 0xffffff7f */ r_eax = 0xffffff7fu;
    /* 00877706: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00877707: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877708: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877709: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087770a: ret  */ FN_RET(0x00877500); r_esp += 4; return;
L_0087770b:; BB(0x0087770b);
    /* 0087770b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0087770d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087770e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087770f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877710: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877711: ret  */ FN_RET(0x00877500); r_esp += 4; return;
}

void f_00877714(void) /* sub_877714 */
{
    FN_ENTER(0x00877714);
    /* 00877714: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00877715: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00877719: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087771b: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0087771e: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00877721: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00877724: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00877727: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0087772a: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 0087772d: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 00877730: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00877733: push 0xe80 */ { u32 v = 0xe80u; r_esp -= 4; W32(r_esp, v); }
    /* 00877738: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0087773a: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x87773fu); f_008587c7();
    /* 0087773f: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00877742: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877745: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877746: ret  */ FN_RET(0x00877714); r_esp += 4; return;
}

void f_00877748(void) /* sub_877748 */
{
    FN_ENTER(0x00877748);
    /* 00877748: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0087774c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0087774e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00877750: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00877753: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00877756: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00877759: ret  */ FN_RET(0x00877748); r_esp += 4; return;
}

void f_0087775c(void) /* sub_87775C */
{
    FN_ENTER(0x0087775c);
    /* 0087775c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087775d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087775e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087775f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00877760: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877761: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00877765: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00877768: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0087776b: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 0087776e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00877771: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 00877774: lea ebx, [edi + 4] */ r_ebx = (u32)(r_edi+0x4u);
    /* 00877777: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877778: call 0x873e50 */ r_esp -= 4; W32(r_esp, 0x87777du); f_00873e50();
    /* 0087777d: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00877781: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877784: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00877786: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00877787: call 0x877da4 */ r_esp -= 4; W32(r_esp, 0x87778cu); f_00877da4();
    /* 0087778c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0087778e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087778f: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877794u); f_00877c98();
    /* 00877794: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877797: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00877799: je 0x8777a6 */ if (fZ) goto L_008777a6;
L_0087779b:; BB(0x0087779b);
    /* 0087779b: mov eax, 0xffffff79 */ r_eax = 0xffffff79u;
    /* 008777a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008777a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008777a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008777a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008777a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008777a5: ret  */ FN_RET(0x0087775c); r_esp += 4; return;
L_008777a6:; BB(0x008777a6);
    /* 008777a6: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008777a9: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008777ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008777ad: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8777b2u); f_00877c98();
    /* 008777b2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008777b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008777b9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008777bc: je 0x87788b */ if (fZ) goto L_0087788b;
L_008777c2:; BB(0x008777c2);
    /* 008777c2: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 008777c5: mov edx, dword ptr [esi + eax*4 + 0x20] */ r_edx = R32((u32)(r_esi+r_eax*4+0x20u));
    /* 008777c9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 008777cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008777cd: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 008777d0: jne 0x8777dc */ if (!fZ) goto L_008777dc;
L_008777d2:; BB(0x008777d2);
    /* 008777d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008777d4: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 008777d7: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 008777da: jmp 0x877801 */ goto L_00877801;
L_008777dc:; BB(0x008777dc);
    /* 008777dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008777de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008777df: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8777e4u); f_00877c98();
    /* 008777e4: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 008777e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008777e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008777ea: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8777efu); f_00877c98();
    /* 008777ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008777f2: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 008777f5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008777f8: je 0x87788b */ if (fZ) goto L_0087788b;
L_008777fe:; BB(0x008777fe);
    /* 008777fe: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
L_00877801:; BB(0x00877801);
    /* 00877801: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00877805: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00877808: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 0087780b: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 0087780e: mov dword ptr [edi + 0x34], ebx */ W32((u32)(r_edi+0x34u), r_ebx);
    /* 00877811: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00877814: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 00877817: mov dword ptr [edi + 0x38], ecx */ W32((u32)(r_edi+0x38u), r_ecx);
    /* 0087781a: mov dword ptr [edi + 0x3c], ebx */ W32((u32)(r_edi+0x3cu), r_ebx);
    /* 0087781d: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00877820: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 00877823: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 00877826: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 00877829: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0087782c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087782e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00877830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00877831: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877832: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x877837u); f_0087421c();
    /* 00877837: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087783a: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0087783c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0087783e: cmp dword ptr [ebp + 4], 0 */ {  u32 a = R32((u32)(r_ebp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877842: jle 0x877860 */ if ((fZ||fS!=fO)) goto L_00877860;
L_00877844:; BB(0x00877844);
    /* 00877844: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00877847: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00877849: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087784b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087784c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087784d: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x877852u); f_0087421c();
    /* 00877852: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877855: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00877857: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 0087785a: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087785b: cmp ebx, dword ptr [ebp + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087785e: jl 0x877844 */ if ((fS!=fO)) goto L_00877844;
L_00877860:; BB(0x00877860);
    /* 00877860: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00877863: mov edx, dword ptr [esi + eax*4 + 0x20] */ r_edx = R32((u32)(r_esi+r_eax*4+0x20u));
    /* 00877867: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 0087786a: mov ecx, dword ptr [esi + ebx*4 + 0x120] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x120u));
    /* 00877871: mov ebp, dword ptr [ecx*4 + 0xa25354] */ r_ebp = R32((u32)(r_ecx*4+0xa25354u));
    /* 00877878: push dword ptr [esi + ebx*4 + 0x220] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x220u)); r_esp -= 4; W32(r_esp, v); }
    /* 0087787f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877880: call dword ptr [ebp + 0x10] */ { u32 t = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, 0x877883u); call_ind(t); }
    /* 00877883: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877886: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00877887: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877888: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877889: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087788a: ret  */ FN_RET(0x0087775c); r_esp += 4; return;
L_0087788b:; BB(0x0087788b);
    /* 0087788b: mov eax, 0xffffff78 */ r_eax = 0xffffff78u;
    /* 00877890: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00877891: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00877892: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877893: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877894: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877895: ret  */ FN_RET(0x0087775c); r_esp += 4; return;
}

void f_00877898(void) /* sub_877898 */
{
    FN_ENTER(0x00877898);
    /* 00877898: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877899: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087789a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087789b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087789c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 008778a0: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 008778a3: mov edi, dword ptr [eax + 0x68] */ r_edi = R32((u32)(r_eax+0x68u));
    /* 008778a6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008778a9: mov ebp, dword ptr [edx + 0x1c] */ r_ebp = R32((u32)(r_edx+0x1cu));
    /* 008778ac: lea ebx, [esi + 4] */ r_ebx = (u32)(r_esi+0x4u);
    /* 008778af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008778b0: call 0x873e50 */ r_esp -= 4; W32(r_esp, 0x8778b5u); f_00873e50();
    /* 008778b5: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008778b9: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008778bc: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 008778be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008778bf: call 0x877da4 */ r_esp -= 4; W32(r_esp, 0x8778c4u); f_00877da4();
    /* 008778c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008778c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008778c7: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8778ccu); f_00877c98();
    /* 008778cc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008778cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008778d1: je 0x8778dd */ if (fZ) goto L_008778dd;
L_008778d3:; BB(0x008778d3);
    /* 008778d3: mov eax, 0xffffff79 */ r_eax = 0xffffff79u;
    /* 008778d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008778d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008778da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008778db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008778dc: ret  */ FN_RET(0x00877898); r_esp += 4; return;
L_008778dd:; BB(0x008778dd);
    /* 008778dd: push dword ptr [edi + 0x2c] */ { u32 v = R32((u32)(r_edi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008778e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008778e1: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8778e6u); f_00877c98();
    /* 008778e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008778e9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008778ec: je 0x877956 */ if (fZ) goto L_00877956;
L_008778ee:; BB(0x008778ee);
    /* 008778ee: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 008778f1: mov eax, dword ptr [ebp + eax*4 + 0x20] */ r_eax = R32((u32)(r_ebp+r_eax*4+0x20u));
    /* 008778f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008778f7: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 008778fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008778fc: jne 0x877908 */ if (!fZ) goto L_00877908;
L_008778fe:; BB(0x008778fe);
    /* 008778fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00877900: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00877903: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00877906: jmp 0x877926 */ goto L_00877926;
L_00877908:; BB(0x00877908);
    /* 00877908: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0087790a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087790b: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877910u); f_00877c98();
    /* 00877910: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00877913: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00877915: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00877916: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x87791bu); f_00877c98();
    /* 0087791b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087791e: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00877921: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00877924: je 0x877956 */ if (fZ) goto L_00877956;
L_00877926:; BB(0x00877926);
    /* 00877926: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0087792a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0087792d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00877930: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00877933: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 00877936: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00877939: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 0087793c: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0087793f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00877941: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 00877944: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00877947: mov dword ptr [esi + 0x2c], edi */ W32((u32)(r_esi+0x2cu), r_edi);
    /* 0087794a: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 0087794d: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0087794f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00877951: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00877952: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877953: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877954: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877955: ret  */ FN_RET(0x00877898); r_esp += 4; return;
L_00877956:; BB(0x00877956);
    /* 00877956: mov eax, 0xffffff78 */ r_eax = 0xffffff78u;
    /* 0087795b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087795c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087795d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087795e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087795f: ret  */ FN_RET(0x00877898); r_esp += 4; return;
}

void f_00877960(void) /* sub_877960 */
{
    FN_ENTER(0x00877960);
    /* 00877960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00877961: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00877964: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00877968: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0087796c: mov ebp, dword ptr [eax + 0x1c] */ r_ebp = R32((u32)(r_eax+0x1cu));
    /* 0087796f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00877972: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877975: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00877977: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00877978: call 0x877da4 */ r_esp -= 4; W32(r_esp, 0x87797du); f_00877da4();
    /* 0087797d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00877981: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00877983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00877984: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877989u); f_00877c98();
    /* 00877989: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087798c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087798e: jne 0x8779c3 */ if (!fZ) goto L_008779c3;
L_00877990:; BB(0x00877990);
    /* 00877990: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00877992: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00877995: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877998: jle 0x8779a2 */ if ((fZ||fS!=fO)) goto L_008779a2;
L_0087799a:; BB(0x0087799a);
    /* 0087799a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087799b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0087799d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008779a0: jg 0x87799a */ if ((!fZ&&fS==fO)) goto L_0087799a;
L_008779a2:; BB(0x008779a2);
    /* 008779a2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008779a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008779a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008779a7: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8779acu); f_00877c98();
    /* 008779ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008779af: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008779b2: je 0x8779cd */ if (fZ) goto L_008779cd;
L_008779b4:; BB(0x008779b4);
    /* 008779b4: mov edx, dword ptr [ebp + eax*4 + 0x20] */ r_edx = R32((u32)(r_ebp+r_eax*4+0x20u));
    /* 008779b8: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008779ba: mov eax, dword ptr [ebp + ecx*4] */ r_eax = R32((u32)(r_ebp+r_ecx*4));
    /* 008779be: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008779c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008779c2: ret  */ FN_RET(0x00877960); r_esp += 4; return;
L_008779c3:; BB(0x008779c3);
    /* 008779c3: mov eax, 0xffffff79 */ r_eax = 0xffffff79u;
    /* 008779c8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008779cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008779cc: ret  */ FN_RET(0x00877960); r_esp += 4; return;
L_008779cd:; BB(0x008779cd);
    /* 008779cd: mov eax, 0xffffff78 */ r_eax = 0xffffff78u;
    /* 008779d2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008779d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008779d6: ret  */ FN_RET(0x00877960); r_esp += 4; return;
}

void f_008779d8(void) /* sub_8779D8 */
{
    FN_ENTER(0x008779d8);
    /* 008779d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008779d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008779da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008779db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008779dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008779dd: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008779e1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008779e3: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008779e6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008779e9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008779eb: jge 0x8779f2 */ if ((fS==fO)) goto L_008779f2;
L_008779ed:; BB(0x008779ed);
    /* 008779ed: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008779f0: jmp 0x877a1a */ goto L_00877a1a;
L_008779f2:; BB(0x008779f2);
    /* 008779f2: add edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008779f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008779f9: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008779fc: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x877a01u); f_00860f6c();
    /* 00877a01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877a04: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00877a07: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00877a0a: add edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877a10: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 00877a13: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 00877a15: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00877a17: mov dword ptr [ebx + 0xc], ebp */ W32((u32)(r_ebx+0xcu), r_ebp);
L_00877a1a:; BB(0x00877a1a);
    /* 00877a1a: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00877a1e: mov eax, dword ptr [edx*4 + 0xa25280] */ r_eax = R32((u32)(r_edx*4+0xa25280u));
    /* 00877a25: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00877a28: and eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00877a2c: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00877a2f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00877a32: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00877a34: or byte ptr [ebp], al */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00877a37: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877a3a: jl 0x877aa4 */ if ((fS!=fO)) goto L_00877aa4;
L_00877a3c:; BB(0x00877a3c);
    /* 00877a3c: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00877a3f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877a41: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877a44: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00877a47: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00877a49: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 00877a4c: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877a4f: mov byte ptr [ebp + 1], al */ W8((u32)(r_ebp+0x1u), (u8)r_eax);
    /* 00877a52: jl 0x877aa4 */ if ((fS!=fO)) goto L_00877aa4;
L_00877a54:; BB(0x00877a54);
    /* 00877a54: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00877a57: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877a59: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877a5c: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00877a5f: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00877a61: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 00877a64: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877a67: mov byte ptr [ebp + 2], al */ W8((u32)(r_ebp+0x2u), (u8)r_eax);
    /* 00877a6a: jl 0x877aa4 */ if ((fS!=fO)) goto L_00877aa4;
L_00877a6c:; BB(0x00877a6c);
    /* 00877a6c: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00877a6f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877a71: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877a74: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00877a77: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00877a79: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 00877a7c: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877a7f: mov byte ptr [ebp + 3], al */ W8((u32)(r_ebp+0x3u), (u8)r_eax);
    /* 00877a82: jl 0x877aa4 */ if ((fS!=fO)) goto L_00877aa4;
L_00877a84:; BB(0x00877a84);
    /* 00877a84: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00877a87: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877a89: je 0x877a9d */ if (fZ) goto L_00877a9d;
L_00877a8b:; BB(0x00877a8b);
    /* 00877a8b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877a8d: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877a90: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00877a93: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 00877a96: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00877a98: mov byte ptr [ebp + 4], al */ W8((u32)(r_ebp+0x4u), (u8)r_eax);
    /* 00877a9b: jmp 0x877aa4 */ goto L_00877aa4;
L_00877a9d:; BB(0x00877a9d);
    /* 00877a9d: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00877aa0: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
L_00877aa4:; BB(0x00877aa4);
    /* 00877aa4: mov eax, edx */ r_eax = r_edx;
    /* 00877aa6: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00877aa9: shr eax, 0x1d */ { u32 c = (29u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00877aac: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00877aae: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00877ab1: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00877ab4: add dword ptr [ebx], eax */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00877ab6: add dword ptr [ebx + 0xc], eax */ { u32 ad = (u32)(r_ebx+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877ab9: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00877abc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00877abd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00877abe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877abf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877ac0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877ac1: ret  */ FN_RET(0x008779d8); r_esp += 4; return;
}

void f_00877ac4(void) /* sub_877AC4 */
{
    FN_ENTER(0x00877ac4);
    /* 00877ac4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877ac5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00877ac6: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00877aca: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00877acd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00877acf: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00877ad1: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 00877ad4: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00877ad7: jge 0x877ba4 */ if ((fS==fO)) goto L_00877ba4;
L_00877add:; BB(0x00877add);
    /* 00877add: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00877adf: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00877ae2: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00877ae5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877ae7: jge 0x877aee */ if ((fS==fO)) goto L_00877aee;
L_00877ae9:; BB(0x00877ae9);
    /* 00877ae9: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00877aec: jmp 0x877b19 */ goto L_00877b19;
L_00877aee:; BB(0x00877aee);
    /* 00877aee: add edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877af4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00877af5: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877af8: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x877afdu); f_00860f6c();
    /* 00877afd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877b00: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 00877b03: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00877b06: add edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877b0c: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 00877b0f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00877b11: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877b13: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 00877b16: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
L_00877b19:; BB(0x00877b19);
    /* 00877b19: lea ebx, [ecx + ebx + 8] */ r_ebx = (u32)(r_ecx+r_ebx+0x8u);
    /* 00877b1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00877b1f: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00877b21: or byte ptr [edx], al */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00877b23: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877b26: jl 0x877b8c */ if ((fS!=fO)) goto L_00877b8c;
L_00877b28:; BB(0x00877b28);
    /* 00877b28: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00877b2b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877b2d: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00877b32: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00877b35: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00877b37: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877b3a: mov byte ptr [edx + 1], al */ W8((u32)(r_edx+0x1u), (u8)r_eax);
    /* 00877b3d: jl 0x877b8c */ if ((fS!=fO)) goto L_00877b8c;
L_00877b3f:; BB(0x00877b3f);
    /* 00877b3f: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00877b42: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877b44: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877b47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00877b49: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00877b4c: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00877b4e: cmp ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877b51: mov byte ptr [edx + 2], al */ W8((u32)(r_edx+0x2u), (u8)r_eax);
    /* 00877b54: jl 0x877b8c */ if ((fS!=fO)) goto L_00877b8c;
L_00877b56:; BB(0x00877b56);
    /* 00877b56: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00877b59: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877b5b: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877b5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00877b60: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00877b63: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00877b65: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877b68: mov byte ptr [edx + 3], al */ W8((u32)(r_edx+0x3u), (u8)r_eax);
    /* 00877b6b: jl 0x877b8c */ if ((fS!=fO)) goto L_00877b8c;
L_00877b6d:; BB(0x00877b6d);
    /* 00877b6d: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00877b70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877b72: je 0x877b85 */ if (fZ) goto L_00877b85;
L_00877b74:; BB(0x00877b74);
    /* 00877b74: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877b76: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877b79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00877b7b: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00877b7e: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00877b80: mov byte ptr [edx + 4], al */ W8((u32)(r_edx+0x4u), (u8)r_eax);
    /* 00877b83: jmp 0x877b8c */ goto L_00877b8c;
L_00877b85:; BB(0x00877b85);
    /* 00877b85: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00877b88: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
L_00877b8c:; BB(0x00877b8c);
    /* 00877b8c: mov eax, ebx */ r_eax = r_ebx;
    /* 00877b8e: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00877b91: shr eax, 0x1d */ { u32 c = (29u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00877b94: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00877b96: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00877b99: and ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00877b9c: add dword ptr [edi], eax */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00877b9e: add dword ptr [edi + 0xc], eax */ { u32 ad = (u32)(r_edi+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877ba1: mov dword ptr [edi + 4], ebx */ W32((u32)(r_edi+0x4u), r_ebx);
L_00877ba4:; BB(0x00877ba4);
    /* 00877ba4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00877ba5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877ba6: ret  */ FN_RET(0x00877ac4); r_esp += 4; return;
}

void f_00877ba8(void) /* sub_877BA8 */
{
    FN_ENTER(0x00877ba8);
    /* 00877ba8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00877bac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00877bad: mov ebp, eax */ r_ebp = r_eax;
    /* 00877baf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877bb2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x877bb7u); f_00858882();
    /* 00877bb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00877bb8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00877bba: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00877bbd: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00877bc0: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00877bc3: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00877bc6: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00877bc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877bca: ret  */ FN_RET(0x00877ba8); r_esp += 4; return;
}

void f_00877bcc(void) /* sub_877BCC */
{
    FN_ENTER(0x00877bcc);
    /* 00877bcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877bcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877bce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00877bcf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00877bd0: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00877bd4: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00877bd8: mov esi, dword ptr [edx*4 + 0xa25280] */ r_esi = R32((u32)(r_edx*4+0xa25280u));
    /* 00877bdf: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 00877be2: lea ebx, [edx + ebp] */ r_ebx = (u32)(r_edx+r_ebp);
    /* 00877be5: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00877be7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00877bea: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 00877bed: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00877bef: jl 0x877c0d */ if ((fS!=fO)) goto L_00877c0d;
L_00877bf1:; BB(0x00877bf1);
    /* 00877bf1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877bf3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877bf5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877bf7: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877bf9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877bfb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877bfd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877bff: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00877c01: jle 0x877c0d */ if ((fZ||fS!=fO)) goto L_00877c0d;
L_00877c03:; BB(0x00877c03);
    /* 00877c03: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00877c08: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00877c09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877c0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877c0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877c0c: ret  */ FN_RET(0x00877bcc); r_esp += 4; return;
L_00877c0d:; BB(0x00877c0d);
    /* 00877c0d: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00877c10: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00877c13: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00877c15: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00877c17: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877c1a: jle 0x877c6b */ if ((fZ||fS!=fO)) goto L_00877c6b;
L_00877c1c:; BB(0x00877c1c);
    /* 00877c1c: movzx edi, byte ptr [edx + 1] */ r_edi = (u32)R8((u32)(r_edx+0x1u));
    /* 00877c20: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00877c22: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877c24: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877c27: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00877c29: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00877c2b: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877c2e: jle 0x877c6b */ if ((fZ||fS!=fO)) goto L_00877c6b;
L_00877c30:; BB(0x00877c30);
    /* 00877c30: movzx edi, byte ptr [edx + 2] */ r_edi = (u32)R8((u32)(r_edx+0x2u));
    /* 00877c34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00877c36: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877c38: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877c3b: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00877c3d: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00877c3f: cmp ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877c42: jle 0x877c6b */ if ((fZ||fS!=fO)) goto L_00877c6b;
L_00877c44:; BB(0x00877c44);
    /* 00877c44: movzx edi, byte ptr [edx + 3] */ r_edi = (u32)R8((u32)(r_edx+0x3u));
    /* 00877c48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00877c4a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877c4c: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877c4f: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00877c51: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00877c53: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877c56: jle 0x877c6b */ if ((fZ||fS!=fO)) goto L_00877c6b;
L_00877c58:; BB(0x00877c58);
    /* 00877c58: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877c5a: je 0x877c6b */ if (fZ) goto L_00877c6b;
L_00877c5c:; BB(0x00877c5c);
    /* 00877c5c: movzx edx, byte ptr [edx + 4] */ r_edx = (u32)R8((u32)(r_edx+0x4u));
    /* 00877c60: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00877c62: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877c65: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00877c67: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00877c69: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00877c6b:; BB(0x00877c6b);
    /* 00877c6b: and esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00877c6d: mov eax, esi */ r_eax = r_esi;
    /* 00877c6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00877c70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877c71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877c72: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877c73: ret  */ FN_RET(0x00877bcc); r_esp += 4; return;
}

void f_00877c74(void) /* sub_877C74 */
{
    FN_ENTER(0x00877c74);
    /* 00877c74: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00877c78: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00877c7c: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877c7f: mov ecx, edx */ r_ecx = r_edx;
    /* 00877c81: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00877c84: shr ecx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00877c87: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877c89: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00877c8c: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00877c8f: add dword ptr [eax + 0xc], ecx */ { u32 ad = (u32)(r_eax+0xcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00877c92: add dword ptr [eax], ecx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877c94: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00877c97: ret  */ FN_RET(0x00877c74); r_esp += 4; return;
}

void f_00877c98(void) /* sub_877C98 */
{
    FN_ENTER(0x00877c98);
    /* 00877c98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877c99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877c9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00877c9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00877c9c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00877c9f: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00877ca3: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00877ca7: mov edx, dword ptr [eax*4 + 0xa25280] */ r_edx = R32((u32)(r_eax*4+0xa25280u));
    /* 00877cae: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 00877cb1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00877cb4: lea ebx, [eax + ebp] */ r_ebx = (u32)(r_eax+r_ebp);
    /* 00877cb7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00877cb9: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
    /* 00877cbc: lea eax, [edx + 4] */ r_eax = (u32)(r_edx+0x4u);
    /* 00877cbf: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00877cc1: jl 0x877ce3 */ if ((fS!=fO)) goto L_00877ce3;
L_00877cc3:; BB(0x00877cc3);
    /* 00877cc3: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00877cc8: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00877ccb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877ccd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877ccf: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877cd1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877cd3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877cd5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877cd7: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00877cd9: jle 0x877ce3 */ if ((fZ||fS!=fO)) goto L_00877ce3;
L_00877cdb:; BB(0x00877cdb);
    /* 00877cdb: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00877cde: jmp 0x877d64 */ goto L_00877d64;
L_00877ce3:; BB(0x00877ce3);
    /* 00877ce3: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00877ce6: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 00877ce9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00877ceb: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00877ced: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877cf0: jle 0x877d61 */ if ((fZ||fS!=fO)) goto L_00877d61;
L_00877cf2:; BB(0x00877cf2);
    /* 00877cf2: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00877cf6: movzx edi, byte ptr [edi + 1] */ r_edi = (u32)R8((u32)(r_edi+0x1u));
    /* 00877cfa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00877cfc: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877cfe: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877d01: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00877d03: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00877d05: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877d08: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00877d0c: jle 0x877d61 */ if ((fZ||fS!=fO)) goto L_00877d61;
L_00877d0e:; BB(0x00877d0e);
    /* 00877d0e: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00877d12: movzx edi, byte ptr [edi + 2] */ r_edi = (u32)R8((u32)(r_edi+0x2u));
    /* 00877d16: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00877d18: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877d1a: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877d1d: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00877d1f: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00877d21: cmp ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877d24: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00877d28: jle 0x877d61 */ if ((fZ||fS!=fO)) goto L_00877d61;
L_00877d2a:; BB(0x00877d2a);
    /* 00877d2a: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00877d2e: movzx edi, byte ptr [edi + 3] */ r_edi = (u32)R8((u32)(r_edi+0x3u));
    /* 00877d32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00877d34: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00877d36: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877d39: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00877d3b: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00877d3d: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877d40: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00877d44: jle 0x877d61 */ if ((fZ||fS!=fO)) goto L_00877d61;
L_00877d46:; BB(0x00877d46);
    /* 00877d46: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877d48: je 0x877d61 */ if (fZ) goto L_00877d61;
L_00877d4a:; BB(0x00877d4a);
    /* 00877d4a: movzx ecx, byte ptr [edi + 4] */ r_ecx = (u32)R8((u32)(r_edi+0x4u));
    /* 00877d4e: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00877d50: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877d53: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00877d57: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00877d59: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00877d5d: shl ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00877d5f: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00877d61:; BB(0x00877d61);
    /* 00877d61: and eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00877d64:; BB(0x00877d64);
    /* 00877d64: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00877d66: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00877d69: shr ecx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00877d6c: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877d6e: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00877d71: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877d73: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 00877d76: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877d78: and ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00877d7b: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00877d7d: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 00877d80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877d83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00877d84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877d85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877d86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877d87: ret  */ FN_RET(0x00877c98); r_esp += 4; return;
}

void f_00877d88(void) /* sub_877D88 */
{
    FN_ENTER(0x00877d88);
    /* 00877d88: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00877d8c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00877d8f: lea ecx, [eax + 7] */ r_ecx = (u32)(r_eax+0x7u);
    /* 00877d92: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00877d95: shr ecx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00877d98: lea eax, [ecx + eax + 7] */ r_eax = (u32)(r_ecx+r_eax+0x7u);
    /* 00877d9c: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00877d9f: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877da1: ret  */ FN_RET(0x00877d88); r_esp += 4; return;
}

void f_00877da4(void) /* sub_877DA4 */
{
    FN_ENTER(0x00877da4);
    /* 00877da4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877da5: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00877da9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00877dad: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00877db1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00877db3: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00877db5: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00877db8: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 00877dbb: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 00877dbe: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 00877dc1: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 00877dc4: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 00877dc7: mov dword ptr [edi + 0x10], ecx */ W32((u32)(r_edi+0x10u), r_ecx);
    /* 00877dca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877dcb: ret  */ FN_RET(0x00877da4); r_esp += 4; return;
}

void f_00877dcc(void) /* sub_877DCC */
{
    FN_ENTER(0x00877dcc);
    /* 00877dcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00877dcd: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00877dd1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00877dd3: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00877dd6: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00877dd9: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00877ddc: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00877ddf: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00877de2: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00877de7: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x877decu); f_00859c55();
    /* 00877dec: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00877def: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00877df2: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00877df5: mov dword ptr [ebp + 0x10], 0x100 */ W32((u32)(r_ebp+0x10u), 0x100u);
    /* 00877dfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00877dfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877dfe: ret  */ FN_RET(0x00877dcc); r_esp += 4; return;
}

void f_00877e00(void) /* sub_877E00 */
{
    FN_ENTER(0x00877e00);
    /* 00877e00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877e01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00877e02: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00877e06: lea eax, [ebx + 0x10] */ r_eax = (u32)(r_ebx+0x10u);
    /* 00877e09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00877e0a: call 0x877e58 */ r_esp -= 4; W32(r_esp, 0x877e0fu); f_00877e58();
    /* 00877e0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00877e10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00877e12: mov esi, eax */ r_esi = r_eax;
L_00877e14:; BB(0x00877e14);
    /* 00877e14: push dword ptr [esi + ebx + 0x30] */ { u32 v = R32((u32)(r_esi+r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877e18: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x877e1du); f_00858882();
    /* 00877e1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00877e1e: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00877e21: cmp esi, 0x70 */ {  u32 a = r_esi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877e24: jl 0x877e14 */ if ((fS!=fO)) goto L_00877e14;
L_00877e26:; BB(0x00877e26);
    /* 00877e26: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877e29: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x877e2eu); f_00858882();
    /* 00877e2e: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877e34: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x877e39u); f_00858882();
    /* 00877e39: push dword ptr [ebx + 0xa0] */ { u32 v = R32((u32)(r_ebx+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00877e3f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x877e44u); f_00858882();
    /* 00877e44: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00877e49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00877e4b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00877e4c: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x877e51u); f_0086b688();
    /* 00877e51: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877e54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00877e55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877e56: ret  */ FN_RET(0x00877e00); r_esp += 4; return;
}

void f_00877e58(void) /* sub_877E58 */
{
    FN_ENTER(0x00877e58);
    /* 00877e58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00877e59: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00877e5d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00877e5f: je 0x877e8d */ if (fZ) goto L_00877e8d;
L_00877e61:; BB(0x00877e61);
    /* 00877e61: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00877e64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877e66: je 0x877e6f */ if (fZ) goto L_00877e6f;
L_00877e68:; BB(0x00877e68);
    /* 00877e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00877e69: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x877e6eu); f_00858882();
    /* 00877e6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00877e6f:; BB(0x00877e6f);
    /* 00877e6f: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00877e72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877e74: je 0x877e7d */ if (fZ) goto L_00877e7d;
L_00877e76:; BB(0x00877e76);
    /* 00877e76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00877e77: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x877e7cu); f_00858882();
    /* 00877e7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00877e7d:; BB(0x00877e7d);
    /* 00877e7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00877e7f: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00877e81: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00877e84: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00877e87: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 00877e8a: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
L_00877e8d:; BB(0x00877e8d);
    /* 00877e8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00877e8e: ret  */ FN_RET(0x00877e58); r_esp += 4; return;
}

void f_00877e90(void) /* sub_877E90 */
{
    FN_ENTER(0x00877e90);
    /* 00877e90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00877e91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00877e92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00877e93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00877e94: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00877e97: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00877e9b: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00877e9f: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00877ea3: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00877ea5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00877ea7: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00877ea9: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00877eac: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00877eaf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00877eb1: lea edx, [esi + edx - 0x1c] */ r_edx = (u32)(r_esi+r_edx+0xffffffe4u);
    /* 00877eb5: lea eax, [eax + esi] */ r_eax = (u32)(r_eax+r_esi);
    /* 00877eb8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00877eba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00877ebc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00877ec0: lea ebp, [ebx + eax] */ r_ebp = (u32)(r_ebx+r_eax);
    /* 00877ec3: mov eax, ebp */ r_eax = r_ebp;
    /* 00877ec5: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 00877ec8: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877eca: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00877ece: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
L_00877ed2:; BB(0x00877ed2);
    /* 00877ed2: add eax, -0x10 */ {  u32 a = r_eax; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00877ed5: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00877ed8: fchs  */ ST(0) = -ST(0);
    /* 00877eda: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 00877edd: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00877edf: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 00877ee2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00877ee4: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00877ee6: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00877ee8: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 00877eeb: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00877eee: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 00877ef1: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00877ef3: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00877ef6: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 00877ef9: fchs  */ ST(0) = -ST(0);
    /* 00877efb: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 00877efe: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00877f01: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 00877f03: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00877f05: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00877f08: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00877f0b: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 00877f0e: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 00877f11: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 00877f13: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00877f15: add edx, -0x20 */ {  u32 a = r_edx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877f18: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00877f1b: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877f1e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00877f20: jae 0x877ed2 */ if (!fC) goto L_00877ed2;
L_00877f22:; BB(0x00877f22);
    /* 00877f22: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00877f26: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00877f2a: lea edi, [esi + edx - 0x20] */ r_edi = (u32)(r_esi+r_edx+0xffffffe0u);
    /* 00877f2e: mov edx, ebp */ r_edx = r_ebp;
    /* 00877f30: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00877f34: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00877f37: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00877f39: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00877f3d: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00877f41: jmp 0x877f46 */ goto L_00877f46;
L_00877f43:; BB(0x00877f43);
    /* 00877f43: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
L_00877f46:; BB(0x00877f46);
    /* 00877f46: add eax, -0x10 */ {  u32 a = r_eax; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00877f49: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 00877f4c: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00877f4f: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00877f52: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00877f55: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00877f57: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00877f59: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 00877f5c: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00877f5f: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00877f62: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00877f65: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00877f67: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 00877f6a: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00877f6c: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00877f6f: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00877f72: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00877f74: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00877f76: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00877f79: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00877f7b: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00877f7d: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00877f80: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00877f83: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00877f85: add edi, -0x20 */ {  u32 a = r_edi; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877f88: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877f8b: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00877f8d: jae 0x877f43 */ if (!fC) goto L_00877f43;
L_00877f8f:; BB(0x00877f8f);
    /* 00877f8f: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 00877f92: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00877f96: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00877f9a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00877f9e: call 0x878214 */ r_esp -= 4; W32(r_esp, 0x877fa3u); f_00878214();
    /* 00877fa3: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00877fa7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00877fa9: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00877fac: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00877fb0: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00877fb4: mov edi, edx */ r_edi = r_edx;
    /* 00877fb6: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00877fba: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00877fbc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877fbe: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877fc0: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00877fc2: mov ecx, edi */ r_ecx = r_edi;
    /* 00877fc4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877fc6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877fc8: add edx, dword ptr [eax + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00877fcb: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00877fcf: fld dword ptr [0x99a81c] */ FPUSH(R_F32((u32)(0x99a81cu)));
    /* 00877fd5: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00877fd9: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00877fdd: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00877fe1: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00877fe5: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00877fe7:; BB(0x00877fe7);
    /* 00877fe7: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00877fe9: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00877fec: add ecx, -0x10 */ {  u32 a = r_ecx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00877fef: fld dword ptr [edi + ebp*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4+0x4u)));
    /* 00877ff3: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00877ff5: fld dword ptr [edi + esi*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4+0x4u)));
    /* 00877ff9: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00877ffb: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00877ffd: fld dword ptr [edi + ebp*4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4)));
    /* 00878000: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00878004: fld dword ptr [edi + esi*4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4)));
    /* 00878007: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00878009: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0087800d: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0087800f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878011: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878013: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00878016: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878018: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0087801a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087801c: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0087801e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878020: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00878022: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878024: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878026: fld dword ptr [0x99a81c] */ FPUSH(R_F32((u32)(0x99a81cu)));
    /* 0087802c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0087802e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00878032: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 00878036: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878038: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0087803a: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0087803c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087803e: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00878040: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878042: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 00878044: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878046: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00878048: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087804a: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0087804d: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0087804f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878051: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 00878054: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 00878057: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 0087805a: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0087805d: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878060: fld dword ptr [edi + ebp*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4+0x4u)));
    /* 00878064: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878066: fld dword ptr [edi + esi*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4+0x4u)));
    /* 0087806a: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0087806c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087806e: fld dword ptr [edi + ebp*4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4)));
    /* 00878071: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 00878075: fld dword ptr [edi + esi*4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4)));
    /* 00878078: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087807a: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0087807e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00878081: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878083: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878085: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00878088: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087808a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0087808c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087808e: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00878090: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878092: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00878094: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878096: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878098: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087809b: fld dword ptr [0x99a81c] */ FPUSH(R_F32((u32)(0x99a81cu)));
    /* 008780a1: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 008780a3: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 008780a7: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 008780ab: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008780ad: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008780af: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 008780b1: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 008780b4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008780b6: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 008780b8: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008780ba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008780bc: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008780be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008780c0: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 008780c2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008780c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008780c6: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 008780c9: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008780cc: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008780ce: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008780d1: jb 0x877fe7 */ if (fC) goto L_00877fe7;
L_008780d7:; BB(0x008780d7);
    /* 008780d7: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 008780db: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 008780df: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008780e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008780e5: mov edx, ebp */ r_edx = r_ebp;
    /* 008780e7: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 008780eb: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 008780ef: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 008780f2: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008780f4: jmp 0x8780f9 */ goto L_008780f9;
L_008780f6:; BB(0x008780f6);
    /* 008780f6: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
L_008780f9:; BB(0x008780f9);
    /* 008780f9: add ecx, -0x10 */ {  u32 a = r_ecx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008780fc: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008780fe: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 00878101: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00878104: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 00878106: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878108: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0087810b: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0087810d: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 0087810f: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00878112: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 00878115: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878117: fchs  */ ST(0) = -ST(0);
    /* 00878119: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0087811b: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0087811e: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 00878121: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00878124: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 00878127: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878129: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0087812c: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0087812f: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 00878132: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00878135: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 00878138: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087813a: fchs  */ ST(0) = -ST(0);
    /* 0087813c: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0087813f: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00878142: fmul dword ptr [edi + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x14u));
    /* 00878145: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00878148: fmul dword ptr [edi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x10u));
    /* 0087814b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087814d: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00878150: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00878153: fmul dword ptr [edi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x10u));
    /* 00878156: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00878159: fmul dword ptr [edi + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x14u));
    /* 0087815c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087815e: fchs  */ ST(0) = -ST(0);
    /* 00878160: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00878163: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 00878166: fmul dword ptr [edi + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x1cu));
    /* 00878169: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0087816c: fmul dword ptr [edi + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x18u));
    /* 0087816f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878171: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00878173: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 00878176: fmul dword ptr [edi + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x18u));
    /* 00878179: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0087817c: fmul dword ptr [edi + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x1cu));
    /* 0087817f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878181: fchs  */ ST(0) = -ST(0);
    /* 00878183: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878186: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878189: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087818c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087818e: jb 0x8780f6 */ if (fC) goto L_008780f6;
L_00878194:; BB(0x00878194);
    /* 00878194: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 00878197: mov edx, ebp */ r_edx = r_ebp;
    /* 00878199: add ebx, dword ptr [esp + 0x48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087819d: mov eax, ebx */ r_eax = r_ebx;
    /* 0087819f: jmp 0x8781a4 */ goto L_008781a4;
L_008781a1:; BB(0x008781a1);
    /* 008781a1: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_008781a4:; BB(0x008781a4);
    /* 008781a4: add ebx, -0x10 */ {  u32 a = r_ebx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008781a7: add edx, -0x10 */ {  u32 a = r_edx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008781aa: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 008781ad: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 008781b0: fchs  */ ST(0) = -ST(0);
    /* 008781b2: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 008781b5: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008781b7: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 008781ba: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 008781bd: fchs  */ ST(0) = -ST(0);
    /* 008781bf: mov dword ptr [ebx + 8], esi */ W32((u32)(r_ebx+0x8u), r_esi);
    /* 008781c2: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008781c5: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008781c8: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 008781cb: fchs  */ ST(0) = -ST(0);
    /* 008781cd: mov dword ptr [ebx + 4], edi */ W32((u32)(r_ebx+0x4u), r_edi);
    /* 008781d0: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 008781d3: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008781d5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008781d7: fchs  */ ST(0) = -ST(0);
    /* 008781d9: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 008781db: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008781de: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008781e0: jb 0x8781a1 */ if (fC) goto L_008781a1;
L_008781e2:; BB(0x008781e2);
    /* 008781e2: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 008781e5: mov eax, ebp */ r_eax = r_ebp;
    /* 008781e7: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_008781eb:; BB(0x008781eb);
    /* 008781eb: add eax, -0x10 */ {  u32 a = r_eax; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008781ee: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008781f1: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 008781f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008781f6: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008781f9: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 008781fc: mov dword ptr [eax + 8], ebx */ W32((u32)(r_eax+0x8u), r_ebx);
    /* 008781ff: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 00878202: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00878205: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00878208: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0087820a: ja 0x8781eb */ if ((!fC&&!fZ)) goto L_008781eb;
L_0087820c:; BB(0x0087820c);
    /* 0087820c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087820f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00878210: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00878211: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00878212: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00878213: ret  */ FN_RET(0x00877e90); r_esp += 4; return;
}

