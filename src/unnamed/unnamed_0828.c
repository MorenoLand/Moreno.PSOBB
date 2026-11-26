#include "protos.h"

void f_00828044(void) /* sub_828044 */
{
    FN_ENTER(0x00828044);
    /* 00828044: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00828045: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828046: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00828047: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00828048: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082804b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0082804d: lea edi, [ebp + 0xa0] */ r_edi = (u32)(r_ebp+0xa0u);
    /* 00828053: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 00828057: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0082805a: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0082805d: mov eax, dword ptr [0xacb368] */ r_eax = R32((u32)(0xacb368u));
    /* 00828062: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00828065: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00828068: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0082806b: mov dword ptr [0xacb368], edx */ W32((u32)(0xacb368u), r_edx);
    /* 00828071: mov dword ptr [ebp + 0x90], eax */ W32((u32)(r_ebp+0x90u), r_eax);
    /* 00828077: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0082807a: mov dword ptr [ebp + 0x94], eax */ W32((u32)(r_ebp+0x94u), r_eax);
    /* 00828080: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00828083: mov dword ptr [ebp + 0x98], eax */ W32((u32)(r_ebp+0x98u), r_eax);
    /* 00828089: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0082808c: mov dword ptr [ebp + 0x9c], eax */ W32((u32)(r_ebp+0x9cu), r_eax);
    /* 00828092: lea esi, [ebx + 0xac] */ r_esi = (u32)(r_ebx+0xacu);
    /* 00828098: mov ecx, 0x84 */ r_ecx = 0x84u;
    /* 0082809d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082809e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008280a1: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008280a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008280a4: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008280a7: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008280a9: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 008280ac: call 0x781e0c */ r_esp -= 4; W32(r_esp, 0x8280b1u); f_00781e0c();
    /* 008280b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008280b2: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 008280b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008280b7: je 0x828810 */ if (fZ) goto L_00828810;
L_008280bd:; BB(0x008280bd);
    /* 008280bd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008280bf: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008280c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008280c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008280c4: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x8280c9u); f_00857dec();
    /* 008280c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008280cc:; BB(0x008280cc);
    /* 008280cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008280ce: mov word ptr [ebp + 0x28], ax */ W16((u32)(r_ebp+0x28u), (u16)r_eax);
    /* 008280d2: lea edi, [ebx + 0x24] */ r_edi = (u32)(r_ebx+0x24u);
    /* 008280d5: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x8280dau); f_00816d30();
    /* 008280da: movzx esi, word ptr [ebx + 0x24] */ r_esi = (u32)R16((u32)(r_ebx+0x24u));
    /* 008280de: mov eax, edi */ r_eax = r_edi;
    /* 008280e0: mov edx, 1 */ r_edx = 0x1u;
    /* 008280e5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008280e7: je 0x828100 */ if (fZ) goto L_00828100;
L_008280e9:; BB(0x008280e9);
    /* 008280e9: mov ecx, eax */ r_ecx = r_eax;
    /* 008280eb: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 008280ee: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008280f1: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008280f4: jne 0x8280f9 */ if (!fZ) goto L_008280f9;
L_008280f6:; BB(0x008280f6);
    /* 008280f6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008280f9:; BB(0x008280f9);
    /* 008280f9: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 008280fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008280fe: jne 0x8280e9 */ if (!fZ) goto L_008280e9;
L_00828100:; BB(0x00828100);
    /* 00828100: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00828102: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00828104: jle 0x828177 */ if ((fZ||fS!=fO)) goto L_00828177;
L_00828106:; BB(0x00828106);
    /* 00828106: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0082810a: mov ebp, edi */ r_ebp = r_edi;
    /* 0082810c: mov edi, edx */ r_edi = r_edx;
L_0082810e:; BB(0x0082810e);
    /* 0082810e: call 0x8169c0 */ r_esp -= 4; W32(r_esp, 0x828113u); f_008169c0();
    /* 00828113: mov edx, ebp */ r_edx = r_ebp;
    /* 00828115: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00828118: mov ecx, esi */ r_ecx = r_esi;
    /* 0082811a: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082811c: jge 0x828807 */ if ((fS==fO)) goto L_00828807;
L_00828122:; BB(0x00828122);
    /* 00828122: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00828125: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828127: je 0x828140 */ if (fZ) goto L_00828140;
L_00828129:; BB(0x00828129);
    /* 00828129: mov eax, edx */ r_eax = r_edx;
    /* 0082812b: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0082812e: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828131: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828134: jne 0x828122 */ if (!fZ) goto L_00828122;
L_00828136:; BB(0x00828136);
    /* 00828136: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00828139: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082813b: jl 0x828122 */ if ((fS!=fO)) goto L_00828122;
L_0082813d:; BB(0x0082813d);
    /* 0082813d: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
L_00828140:; BB(0x00828140);
    /* 00828140: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00828143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828145: je 0x828160 */ if (fZ) goto L_00828160;
L_00828147:; BB(0x00828147);
    /* 00828147: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
L_0082814a:; BB(0x0082814a);
    /* 0082814a: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082814d: je 0x828160 */ if (fZ) goto L_00828160;
L_0082814f:; BB(0x0082814f);
    /* 0082814f: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00828152: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 00828156: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828159: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082815c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082815e: jne 0x82814a */ if (!fZ) goto L_0082814a;
L_00828160:; BB(0x00828160);
    /* 00828160: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00828162: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00828165: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00828168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828169: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x82816eu); f_00816cb8();
    /* 0082816e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082816f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00828171: jl 0x82810e */ if ((fS!=fO)) goto L_0082810e;
L_00828173:; BB(0x00828173);
    /* 00828173: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
L_00828177:; BB(0x00828177);
    /* 00828177: mov edx, 0xac9d80 */ r_edx = 0xac9d80u;
    /* 0082817c: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0082817f: lea ebx, [ebp + 0x2a] */ r_ebx = (u32)(r_ebp+0x2au);
    /* 00828182: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828184: je 0x8287ff */ if (fZ) goto L_008287ff;
L_0082818a:; BB(0x0082818a);
    /* 0082818a: mov edx, 0xac9d82 */ r_edx = 0xac9d82u;
    /* 0082818f: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828192: je 0x8287f7 */ if (fZ) goto L_008287f7;
L_00828198:; BB(0x00828198);
    /* 00828198: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 0082819b: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082819e: lea ebx, [ebp + 0x2c] */ r_ebx = (u32)(r_ebp+0x2cu);
    /* 008281a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008281a3: je 0x828364 */ if (fZ) goto L_00828364;
L_008281a9:; BB(0x008281a9);
    /* 008281a9: mov edx, 0xac9d84 */ r_edx = 0xac9d84u;
    /* 008281ae: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008281b1: je 0x8287ef */ if (fZ) goto L_008287ef;
L_008281b7:; BB(0x008281b7);
    /* 008281b7: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008281ba: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008281bd: lea ebx, [ebp + 0x2e] */ r_ebx = (u32)(r_ebp+0x2eu);
    /* 008281c0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008281c2: je 0x828364 */ if (fZ) goto L_00828364;
L_008281c8:; BB(0x008281c8);
    /* 008281c8: mov edx, 0xac9d86 */ r_edx = 0xac9d86u;
    /* 008281cd: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008281d0: je 0x8287e7 */ if (fZ) goto L_008287e7;
L_008281d6:; BB(0x008281d6);
    /* 008281d6: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008281d9: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008281dc: lea ebx, [ebp + 0x30] */ r_ebx = (u32)(r_ebp+0x30u);
    /* 008281df: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008281e1: je 0x828364 */ if (fZ) goto L_00828364;
L_008281e7:; BB(0x008281e7);
    /* 008281e7: mov edx, 0xac9d88 */ r_edx = 0xac9d88u;
    /* 008281ec: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008281ef: je 0x8287df */ if (fZ) goto L_008287df;
L_008281f5:; BB(0x008281f5);
    /* 008281f5: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008281f8: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008281fb: lea ebx, [ebp + 0x32] */ r_ebx = (u32)(r_ebp+0x32u);
    /* 008281fe: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828200: je 0x828364 */ if (fZ) goto L_00828364;
L_00828206:; BB(0x00828206);
    /* 00828206: mov edx, 0xac9d8a */ r_edx = 0xac9d8au;
    /* 0082820b: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082820e: je 0x8287d7 */ if (fZ) goto L_008287d7;
L_00828214:; BB(0x00828214);
    /* 00828214: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828217: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082821a: lea ebx, [ebp + 0x34] */ r_ebx = (u32)(r_ebp+0x34u);
    /* 0082821d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082821f: je 0x828364 */ if (fZ) goto L_00828364;
L_00828225:; BB(0x00828225);
    /* 00828225: mov edx, 0xac9d8c */ r_edx = 0xac9d8cu;
    /* 0082822a: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082822d: je 0x8287cf */ if (fZ) goto L_008287cf;
L_00828233:; BB(0x00828233);
    /* 00828233: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828236: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828239: lea ebx, [ebp + 0x36] */ r_ebx = (u32)(r_ebp+0x36u);
    /* 0082823c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082823e: je 0x828364 */ if (fZ) goto L_00828364;
L_00828244:; BB(0x00828244);
    /* 00828244: mov edx, 0xac9d8e */ r_edx = 0xac9d8eu;
    /* 00828249: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082824c: je 0x8287c7 */ if (fZ) goto L_008287c7;
L_00828252:; BB(0x00828252);
    /* 00828252: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828255: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828258: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0082825b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082825d: je 0x828364 */ if (fZ) goto L_00828364;
L_00828263:; BB(0x00828263);
    /* 00828263: mov edx, 0xac9d90 */ r_edx = 0xac9d90u;
    /* 00828268: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082826b: je 0x8287bf */ if (fZ) goto L_008287bf;
L_00828271:; BB(0x00828271);
    /* 00828271: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828274: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828277: lea ebx, [ebp + 0x3a] */ r_ebx = (u32)(r_ebp+0x3au);
    /* 0082827a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082827c: je 0x828364 */ if (fZ) goto L_00828364;
L_00828282:; BB(0x00828282);
    /* 00828282: mov edx, 0xac9d92 */ r_edx = 0xac9d92u;
    /* 00828287: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082828a: je 0x8287b7 */ if (fZ) goto L_008287b7;
L_00828290:; BB(0x00828290);
    /* 00828290: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828293: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828296: lea ebx, [ebp + 0x3c] */ r_ebx = (u32)(r_ebp+0x3cu);
    /* 00828299: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082829b: je 0x828364 */ if (fZ) goto L_00828364;
L_008282a1:; BB(0x008282a1);
    /* 008282a1: mov edx, 0xac9d94 */ r_edx = 0xac9d94u;
    /* 008282a6: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008282a9: je 0x8287af */ if (fZ) goto L_008287af;
L_008282af:; BB(0x008282af);
    /* 008282af: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008282b2: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008282b5: lea ebx, [ebp + 0x3e] */ r_ebx = (u32)(r_ebp+0x3eu);
    /* 008282b8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008282ba: je 0x828364 */ if (fZ) goto L_00828364;
L_008282c0:; BB(0x008282c0);
    /* 008282c0: mov edx, 0xac9d96 */ r_edx = 0xac9d96u;
    /* 008282c5: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008282c8: je 0x8287a7 */ if (fZ) goto L_008287a7;
L_008282ce:; BB(0x008282ce);
    /* 008282ce: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008282d1: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008282d4: lea ebx, [ebp + 0x40] */ r_ebx = (u32)(r_ebp+0x40u);
    /* 008282d7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008282d9: je 0x828364 */ if (fZ) goto L_00828364;
L_008282df:; BB(0x008282df);
    /* 008282df: mov edx, 0xac9d98 */ r_edx = 0xac9d98u;
    /* 008282e4: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008282e7: je 0x82879f */ if (fZ) goto L_0082879f;
L_008282ed:; BB(0x008282ed);
    /* 008282ed: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008282f0: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008282f3: lea ebx, [ebp + 0x42] */ r_ebx = (u32)(r_ebp+0x42u);
    /* 008282f6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008282f8: je 0x828364 */ if (fZ) goto L_00828364;
L_008282fa:; BB(0x008282fa);
    /* 008282fa: mov edx, 0xac9d9a */ r_edx = 0xac9d9au;
    /* 008282ff: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828302: je 0x828797 */ if (fZ) goto L_00828797;
L_00828308:; BB(0x00828308);
    /* 00828308: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 0082830b: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082830e: lea ebx, [ebp + 0x44] */ r_ebx = (u32)(r_ebp+0x44u);
    /* 00828311: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828313: je 0x828364 */ if (fZ) goto L_00828364;
L_00828315:; BB(0x00828315);
    /* 00828315: mov edx, 0xac9d9c */ r_edx = 0xac9d9cu;
    /* 0082831a: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082831d: je 0x82878f */ if (fZ) goto L_0082878f;
L_00828323:; BB(0x00828323);
    /* 00828323: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828326: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828329: lea ebx, [ebp + 0x46] */ r_ebx = (u32)(r_ebp+0x46u);
    /* 0082832c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082832e: je 0x828364 */ if (fZ) goto L_00828364;
L_00828330:; BB(0x00828330);
    /* 00828330: mov edx, 0xac9d9e */ r_edx = 0xac9d9eu;
    /* 00828335: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828338: je 0x828787 */ if (fZ) goto L_00828787;
L_0082833e:; BB(0x0082833e);
    /* 0082833e: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828341: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828344: lea ebx, [ebp + 0x48] */ r_ebx = (u32)(r_ebp+0x48u);
    /* 00828347: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828349: je 0x828364 */ if (fZ) goto L_00828364;
L_0082834b:; BB(0x0082834b);
    /* 0082834b: mov edx, 0xac9da0 */ r_edx = 0xac9da0u;
    /* 00828350: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828353: je 0x82877f */ if (fZ) goto L_0082877f;
L_00828359:; BB(0x00828359);
    /* 00828359: mov eax, ebx */ r_eax = r_ebx;
    /* 0082835b: lea ebx, [ebp + 0x4a] */ r_ebx = (u32)(r_ebp+0x4au);
    /* 0082835e: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 00828361: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
L_00828364:; BB(0x00828364);
    /* 00828364: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828367: jne 0x82836c */ if (!fZ) goto L_0082836c;
L_00828369:; BB(0x00828369);
    /* 00828369: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0082836c:; BB(0x0082836c);
    /* 0082836c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082836e: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 00828371: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00828374: lea ebx, [ebp + 0x4c] */ r_ebx = (u32)(r_ebp+0x4cu);
    /* 00828377: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828379: je 0x828777 */ if (fZ) goto L_00828777;
L_0082837f:; BB(0x0082837f);
    /* 0082837f: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828382: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828385: je 0x82876f */ if (fZ) goto L_0082876f;
L_0082838b:; BB(0x0082838b);
    /* 0082838b: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 0082838e: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828391: lea ebx, [ebp + 0x4e] */ r_ebx = (u32)(r_ebp+0x4eu);
    /* 00828394: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828396: je 0x828535 */ if (fZ) goto L_00828535;
L_0082839c:; BB(0x0082839c);
    /* 0082839c: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082839f: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008283a2: je 0x828767 */ if (fZ) goto L_00828767;
L_008283a8:; BB(0x008283a8);
    /* 008283a8: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008283ab: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008283ae: lea ebx, [ebp + 0x50] */ r_ebx = (u32)(r_ebp+0x50u);
    /* 008283b1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008283b3: je 0x828535 */ if (fZ) goto L_00828535;
L_008283b9:; BB(0x008283b9);
    /* 008283b9: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008283bc: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008283bf: je 0x82875f */ if (fZ) goto L_0082875f;
L_008283c5:; BB(0x008283c5);
    /* 008283c5: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008283c8: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008283cb: lea ebx, [ebp + 0x52] */ r_ebx = (u32)(r_ebp+0x52u);
    /* 008283ce: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008283d0: je 0x828535 */ if (fZ) goto L_00828535;
L_008283d6:; BB(0x008283d6);
    /* 008283d6: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008283d9: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008283dc: je 0x828757 */ if (fZ) goto L_00828757;
L_008283e2:; BB(0x008283e2);
    /* 008283e2: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008283e5: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008283e8: lea ebx, [ebp + 0x54] */ r_ebx = (u32)(r_ebp+0x54u);
    /* 008283eb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008283ed: je 0x828535 */ if (fZ) goto L_00828535;
L_008283f3:; BB(0x008283f3);
    /* 008283f3: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008283f6: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008283f9: je 0x82874f */ if (fZ) goto L_0082874f;
L_008283ff:; BB(0x008283ff);
    /* 008283ff: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828402: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828405: lea ebx, [ebp + 0x56] */ r_ebx = (u32)(r_ebp+0x56u);
    /* 00828408: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082840a: je 0x828535 */ if (fZ) goto L_00828535;
L_00828410:; BB(0x00828410);
    /* 00828410: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828413: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828416: je 0x828747 */ if (fZ) goto L_00828747;
L_0082841c:; BB(0x0082841c);
    /* 0082841c: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 0082841f: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828422: lea ebx, [ebp + 0x58] */ r_ebx = (u32)(r_ebp+0x58u);
    /* 00828425: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828427: je 0x828535 */ if (fZ) goto L_00828535;
L_0082842d:; BB(0x0082842d);
    /* 0082842d: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828430: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828433: je 0x82873f */ if (fZ) goto L_0082873f;
L_00828439:; BB(0x00828439);
    /* 00828439: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 0082843c: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082843f: lea ebx, [ebp + 0x5a] */ r_ebx = (u32)(r_ebp+0x5au);
    /* 00828442: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828444: je 0x828535 */ if (fZ) goto L_00828535;
L_0082844a:; BB(0x0082844a);
    /* 0082844a: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082844d: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828450: je 0x828737 */ if (fZ) goto L_00828737;
L_00828456:; BB(0x00828456);
    /* 00828456: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828459: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082845c: lea ebx, [ebp + 0x5c] */ r_ebx = (u32)(r_ebp+0x5cu);
    /* 0082845f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828461: je 0x828535 */ if (fZ) goto L_00828535;
L_00828467:; BB(0x00828467);
    /* 00828467: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082846a: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082846d: je 0x82872f */ if (fZ) goto L_0082872f;
L_00828473:; BB(0x00828473);
    /* 00828473: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828476: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828479: lea ebx, [ebp + 0x5e] */ r_ebx = (u32)(r_ebp+0x5eu);
    /* 0082847c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082847e: je 0x828535 */ if (fZ) goto L_00828535;
L_00828484:; BB(0x00828484);
    /* 00828484: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828487: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082848a: je 0x828727 */ if (fZ) goto L_00828727;
L_00828490:; BB(0x00828490);
    /* 00828490: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828493: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828496: lea ebx, [ebp + 0x60] */ r_ebx = (u32)(r_ebp+0x60u);
    /* 00828499: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082849b: je 0x828535 */ if (fZ) goto L_00828535;
L_008284a1:; BB(0x008284a1);
    /* 008284a1: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008284a4: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008284a7: je 0x82871f */ if (fZ) goto L_0082871f;
L_008284ad:; BB(0x008284ad);
    /* 008284ad: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008284b0: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008284b3: lea ebx, [ebp + 0x62] */ r_ebx = (u32)(r_ebp+0x62u);
    /* 008284b6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008284b8: je 0x828535 */ if (fZ) goto L_00828535;
L_008284ba:; BB(0x008284ba);
    /* 008284ba: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008284bd: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008284c0: je 0x828717 */ if (fZ) goto L_00828717;
L_008284c6:; BB(0x008284c6);
    /* 008284c6: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008284c9: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008284cc: lea ebx, [ebp + 0x64] */ r_ebx = (u32)(r_ebp+0x64u);
    /* 008284cf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008284d1: je 0x828535 */ if (fZ) goto L_00828535;
L_008284d3:; BB(0x008284d3);
    /* 008284d3: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008284d6: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008284d9: je 0x82870f */ if (fZ) goto L_0082870f;
L_008284df:; BB(0x008284df);
    /* 008284df: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008284e2: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008284e5: lea ebx, [ebp + 0x66] */ r_ebx = (u32)(r_ebp+0x66u);
    /* 008284e8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008284ea: je 0x828535 */ if (fZ) goto L_00828535;
L_008284ec:; BB(0x008284ec);
    /* 008284ec: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008284ef: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008284f2: je 0x828707 */ if (fZ) goto L_00828707;
L_008284f8:; BB(0x008284f8);
    /* 008284f8: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 008284fb: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008284fe: lea ebx, [ebp + 0x68] */ r_ebx = (u32)(r_ebp+0x68u);
    /* 00828501: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828503: je 0x828535 */ if (fZ) goto L_00828535;
L_00828505:; BB(0x00828505);
    /* 00828505: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828508: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082850b: je 0x8286ff */ if (fZ) goto L_008286ff;
L_00828511:; BB(0x00828511);
    /* 00828511: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00828514: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828517: lea ebx, [ebp + 0x6a] */ r_ebx = (u32)(r_ebp+0x6au);
    /* 0082851a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082851c: je 0x828535 */ if (fZ) goto L_00828535;
L_0082851e:; BB(0x0082851e);
    /* 0082851e: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828521: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828524: je 0x8286f7 */ if (fZ) goto L_008286f7;
L_0082852a:; BB(0x0082852a);
    /* 0082852a: mov eax, ebx */ r_eax = r_ebx;
    /* 0082852c: lea ebx, [ebp + 0x6c] */ r_ebx = (u32)(r_ebp+0x6cu);
    /* 0082852f: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 00828532: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
L_00828535:; BB(0x00828535);
    /* 00828535: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828538: jne 0x82853d */ if (!fZ) goto L_0082853d;
L_0082853a:; BB(0x0082853a);
    /* 0082853a: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0082853d:; BB(0x0082853d);
    /* 0082853d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082853f: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 00828542: movzx ebx, word ptr [edx] */ r_ebx = (u32)R16((u32)(r_edx));
    /* 00828545: lea eax, [ebp + 0x6e] */ r_eax = (u32)(r_ebp+0x6eu);
    /* 00828548: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082854a: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828550:; BB(0x00828550);
    /* 00828550: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828553: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828556: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_0082855c:; BB(0x0082855c);
    /* 0082855c: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 0082855f: movzx ebx, word ptr [edx] */ r_ebx = (u32)R16((u32)(r_edx));
    /* 00828562: lea eax, [ebp + 0x70] */ r_eax = (u32)(r_ebp+0x70u);
    /* 00828565: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828567: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_0082856d:; BB(0x0082856d);
    /* 0082856d: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828570: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828576:; BB(0x00828576);
    /* 00828576: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00828579: movzx ebx, word ptr [edx + 2] */ r_ebx = (u32)R16((u32)(r_edx+0x2u));
    /* 0082857d: lea eax, [ebp + 0x72] */ r_eax = (u32)(r_ebp+0x72u);
    /* 00828580: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828582: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828588:; BB(0x00828588);
    /* 00828588: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082858b: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828591:; BB(0x00828591);
    /* 00828591: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00828594: movzx ebx, word ptr [edx + 4] */ r_ebx = (u32)R16((u32)(r_edx+0x4u));
    /* 00828598: lea eax, [ebp + 0x74] */ r_eax = (u32)(r_ebp+0x74u);
    /* 0082859b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082859d: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008285a3:; BB(0x008285a3);
    /* 008285a3: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008285a6: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008285ac:; BB(0x008285ac);
    /* 008285ac: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 008285af: movzx ebx, word ptr [edx + 6] */ r_ebx = (u32)R16((u32)(r_edx+0x6u));
    /* 008285b3: lea eax, [ebp + 0x76] */ r_eax = (u32)(r_ebp+0x76u);
    /* 008285b6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008285b8: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008285be:; BB(0x008285be);
    /* 008285be: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008285c1: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008285c7:; BB(0x008285c7);
    /* 008285c7: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 008285ca: movzx ebx, word ptr [edx + 8] */ r_ebx = (u32)R16((u32)(r_edx+0x8u));
    /* 008285ce: lea eax, [ebp + 0x78] */ r_eax = (u32)(r_ebp+0x78u);
    /* 008285d1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008285d3: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008285d9:; BB(0x008285d9);
    /* 008285d9: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008285dc: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008285e2:; BB(0x008285e2);
    /* 008285e2: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 008285e5: movzx ebx, word ptr [edx + 0xa] */ r_ebx = (u32)R16((u32)(r_edx+0xau));
    /* 008285e9: lea eax, [ebp + 0x7a] */ r_eax = (u32)(r_ebp+0x7au);
    /* 008285ec: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008285ee: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008285f4:; BB(0x008285f4);
    /* 008285f4: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008285f7: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008285fd:; BB(0x008285fd);
    /* 008285fd: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00828600: movzx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)R16((u32)(r_edx+0xcu));
    /* 00828604: lea eax, [ebp + 0x7c] */ r_eax = (u32)(r_ebp+0x7cu);
    /* 00828607: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828609: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_0082860f:; BB(0x0082860f);
    /* 0082860f: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828612: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828618:; BB(0x00828618);
    /* 00828618: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 0082861b: movzx ebx, word ptr [edx + 0xe] */ r_ebx = (u32)R16((u32)(r_edx+0xeu));
    /* 0082861f: lea eax, [ebp + 0x7e] */ r_eax = (u32)(r_ebp+0x7eu);
    /* 00828622: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828624: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_0082862a:; BB(0x0082862a);
    /* 0082862a: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082862d: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828633:; BB(0x00828633);
    /* 00828633: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00828636: movzx ebx, word ptr [edx + 0x10] */ r_ebx = (u32)R16((u32)(r_edx+0x10u));
    /* 0082863a: lea eax, [ebp + 0x80] */ r_eax = (u32)(r_ebp+0x80u);
    /* 00828640: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828642: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828648:; BB(0x00828648);
    /* 00828648: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082864b: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828651:; BB(0x00828651);
    /* 00828651: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00828654: movzx ebx, word ptr [edx + 0x12] */ r_ebx = (u32)R16((u32)(r_edx+0x12u));
    /* 00828658: lea eax, [ebp + 0x82] */ r_eax = (u32)(r_ebp+0x82u);
    /* 0082865e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828660: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828666:; BB(0x00828666);
    /* 00828666: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828669: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_0082866f:; BB(0x0082866f);
    /* 0082866f: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00828672: movzx ebx, word ptr [edx + 0x14] */ r_ebx = (u32)R16((u32)(r_edx+0x14u));
    /* 00828676: lea eax, [ebp + 0x84] */ r_eax = (u32)(r_ebp+0x84u);
    /* 0082867c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082867e: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828680:; BB(0x00828680);
    /* 00828680: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828683: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828685:; BB(0x00828685);
    /* 00828685: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00828688: movzx ebx, word ptr [edx + 0x16] */ r_ebx = (u32)R16((u32)(r_edx+0x16u));
    /* 0082868c: lea eax, [ebp + 0x86] */ r_eax = (u32)(r_ebp+0x86u);
    /* 00828692: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828694: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_00828696:; BB(0x00828696);
    /* 00828696: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828699: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_0082869b:; BB(0x0082869b);
    /* 0082869b: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 0082869e: movzx ebx, word ptr [edx + 0x18] */ r_ebx = (u32)R16((u32)(r_edx+0x18u));
    /* 008286a2: lea eax, [ebp + 0x88] */ r_eax = (u32)(r_ebp+0x88u);
    /* 008286a8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008286aa: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008286ac:; BB(0x008286ac);
    /* 008286ac: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008286af: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008286b1:; BB(0x008286b1);
    /* 008286b1: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 008286b4: movzx ebx, word ptr [edx + 0x1a] */ r_ebx = (u32)R16((u32)(r_edx+0x1au));
    /* 008286b8: lea eax, [ebp + 0x8a] */ r_eax = (u32)(r_ebp+0x8au);
    /* 008286be: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008286c0: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008286c2:; BB(0x008286c2);
    /* 008286c2: cmp ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008286c5: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008286c7:; BB(0x008286c7);
    /* 008286c7: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 008286ca: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 008286ce: lea eax, [ebp + 0x8c] */ r_eax = (u32)(r_ebp+0x8cu);
    /* 008286d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008286d6: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008286d8:; BB(0x008286d8);
    /* 008286d8: cmp edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008286db: je 0x8286e8 */ if (fZ) goto L_008286e8;
L_008286dd:; BB(0x008286dd);
    /* 008286dd: mov ebx, eax */ r_ebx = r_eax;
    /* 008286df: lea eax, [ebp + 0x8e] */ r_eax = (u32)(r_ebp+0x8eu);
    /* 008286e5: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
L_008286e8:; BB(0x008286e8);
    /* 008286e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008286ea: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 008286ed: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008286f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008286f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008286f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008286f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008286f4: ret 4 */ FN_RET(0x00828044); r_esp += 8; return;
L_008286f7:; BB(0x008286f7);
    /* 008286f7: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008286fa: jmp 0x828535 */ goto L_00828535;
L_008286ff:; BB(0x008286ff);
    /* 008286ff: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828702: jmp 0x828535 */ goto L_00828535;
L_00828707:; BB(0x00828707);
    /* 00828707: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082870a: jmp 0x828535 */ goto L_00828535;
L_0082870f:; BB(0x0082870f);
    /* 0082870f: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828712: jmp 0x828535 */ goto L_00828535;
L_00828717:; BB(0x00828717);
    /* 00828717: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082871a: jmp 0x828535 */ goto L_00828535;
L_0082871f:; BB(0x0082871f);
    /* 0082871f: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828722: jmp 0x828535 */ goto L_00828535;
L_00828727:; BB(0x00828727);
    /* 00828727: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082872a: jmp 0x828535 */ goto L_00828535;
L_0082872f:; BB(0x0082872f);
    /* 0082872f: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828732: jmp 0x828535 */ goto L_00828535;
L_00828737:; BB(0x00828737);
    /* 00828737: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082873a: jmp 0x828535 */ goto L_00828535;
L_0082873f:; BB(0x0082873f);
    /* 0082873f: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828742: jmp 0x828535 */ goto L_00828535;
L_00828747:; BB(0x00828747);
    /* 00828747: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082874a: jmp 0x828535 */ goto L_00828535;
L_0082874f:; BB(0x0082874f);
    /* 0082874f: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828752: jmp 0x828535 */ goto L_00828535;
L_00828757:; BB(0x00828757);
    /* 00828757: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082875a: jmp 0x828535 */ goto L_00828535;
L_0082875f:; BB(0x0082875f);
    /* 0082875f: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828762: jmp 0x828535 */ goto L_00828535;
L_00828767:; BB(0x00828767);
    /* 00828767: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082876a: jmp 0x828535 */ goto L_00828535;
L_0082876f:; BB(0x0082876f);
    /* 0082876f: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828772: jmp 0x828535 */ goto L_00828535;
L_00828777:; BB(0x00828777);
    /* 00828777: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082877a: jmp 0x828535 */ goto L_00828535;
L_0082877f:; BB(0x0082877f);
    /* 0082877f: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828782: jmp 0x828364 */ goto L_00828364;
L_00828787:; BB(0x00828787);
    /* 00828787: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082878a: jmp 0x828364 */ goto L_00828364;
L_0082878f:; BB(0x0082878f);
    /* 0082878f: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828792: jmp 0x828364 */ goto L_00828364;
L_00828797:; BB(0x00828797);
    /* 00828797: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0082879a: jmp 0x828364 */ goto L_00828364;
L_0082879f:; BB(0x0082879f);
    /* 0082879f: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287a2: jmp 0x828364 */ goto L_00828364;
L_008287a7:; BB(0x008287a7);
    /* 008287a7: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287aa: jmp 0x828364 */ goto L_00828364;
L_008287af:; BB(0x008287af);
    /* 008287af: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287b2: jmp 0x828364 */ goto L_00828364;
L_008287b7:; BB(0x008287b7);
    /* 008287b7: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287ba: jmp 0x828364 */ goto L_00828364;
L_008287bf:; BB(0x008287bf);
    /* 008287bf: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287c2: jmp 0x828364 */ goto L_00828364;
L_008287c7:; BB(0x008287c7);
    /* 008287c7: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287ca: jmp 0x828364 */ goto L_00828364;
L_008287cf:; BB(0x008287cf);
    /* 008287cf: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287d2: jmp 0x828364 */ goto L_00828364;
L_008287d7:; BB(0x008287d7);
    /* 008287d7: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287da: jmp 0x828364 */ goto L_00828364;
L_008287df:; BB(0x008287df);
    /* 008287df: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287e2: jmp 0x828364 */ goto L_00828364;
L_008287e7:; BB(0x008287e7);
    /* 008287e7: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287ea: jmp 0x828364 */ goto L_00828364;
L_008287ef:; BB(0x008287ef);
    /* 008287ef: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287f2: jmp 0x828364 */ goto L_00828364;
L_008287f7:; BB(0x008287f7);
    /* 008287f7: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 008287fa: jmp 0x828364 */ goto L_00828364;
L_008287ff:; BB(0x008287ff);
    /* 008287ff: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00828802: jmp 0x828364 */ goto L_00828364;
L_00828807:; BB(0x00828807);
    /* 00828807: movzx eax, word ptr [ebx + 0x24] */ r_eax = (u32)R16((u32)(r_ebx+0x24u));
    /* 0082880b: jmp 0x828140 */ goto L_00828140;
L_00828810:; BB(0x00828810);
    /* 00828810: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00828812: lea eax, [ebp + 0xe4] */ r_eax = (u32)(r_ebp+0xe4u);
    /* 00828818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00828819: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082881a: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x82881fu); f_00857dec();
    /* 0082881f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00828822: jmp 0x8280cc */ goto L_008280cc;
}

void f_00828828(void)
{
    FN_ENTER(0x00828828);
    /* 00828828: mov eax, 8 */ r_eax = 0x8u;
    /* 0082882d: mov word ptr [0xacb2d0], ax */ W16((u32)(0xacb2d0u), (u16)r_eax);
    /* 00828833: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00828835: mov eax, 8 */ r_eax = 0x8u;
    /* 0082883a: mov byte ptr [0xacb2d2], dl */ W8((u32)(0xacb2d2u), (u8)r_edx);
    /* 00828840: mov byte ptr [0xacb2d3], dl */ W8((u32)(0xacb2d3u), (u8)r_edx);
    /* 00828846: mov dword ptr [0xacb2d4], edx */ W32((u32)(0xacb2d4u), r_edx);
    /* 0082884c: mov edx, 0xaca920 */ r_edx = 0xaca920u;
L_00828851:; BB(0x00828851);
    /* 00828851: mov ecx, 8 */ r_ecx = 0x8u;
    /* 00828856: mov word ptr [edx + 0x90], cx */ W16((u32)(r_edx+0x90u), (u16)r_ecx);
    /* 0082885d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082885f: mov byte ptr [edx + 0x92], cl */ W8((u32)(r_edx+0x92u), (u8)r_ecx);
    /* 00828865: mov byte ptr [edx + 0x93], cl */ W8((u32)(r_edx+0x93u), (u8)r_ecx);
    /* 0082886b: mov dword ptr [edx + 0x94], ecx */ W32((u32)(r_edx+0x94u), r_ecx);
    /* 00828871: add edx, 0x124 */ {  u32 a = r_edx; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828877: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082887a: jne 0x828851 */ if (!fZ) goto L_00828851;
L_0082887c:; BB(0x0082887c);
    /* 0082887c: ret  */ FN_RET(0x00828828); r_esp += 4; return;
}

void f_00828880(void) /* sub_828880 */
{
    FN_ENTER(0x00828880);
    /* 00828880: call 0x828888 */ r_esp -= 4; W32(r_esp, 0x828885u); f_00828888();
    /* 00828885: ret  */ FN_RET(0x00828880); r_esp += 4; return;
}

void f_00828888(void) /* sub_828888 */
{
    FN_ENTER(0x00828888);
    /* 00828888: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0082888f: mov dword ptr [0xacb364], 0 */ W32((u32)(0xacb364u), 0x0u);
    /* 00828899: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082889e: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 008288a4: ret  */ FN_RET(0x00828888); r_esp += 4; return;
}

void f_008288a8(void)
{
    FN_ENTER(0x008288a8);
    /* 008288a8: mov eax, dword ptr [0xacb380] */ r_eax = R32((u32)(0xacb380u));
    /* 008288ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008288af: je 0x8288c2 */ if (fZ) goto L_008288c2;
L_008288b1:; BB(0x008288b1);
    /* 008288b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008288b2: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x8288b7u); f_0082e960();
    /* 008288b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008288b8: mov dword ptr [0xacb380], 0 */ W32((u32)(0xacb380u), 0x0u);
L_008288c2:; BB(0x008288c2);
    /* 008288c2: ret  */ FN_RET(0x008288a8); r_esp += 4; return;
}

void f_008288c4(void) /* sub_8288C4 */
{
    FN_ENTER(0x008288c4);
    /* 008288c4: mov eax, dword ptr [0xacb384] */ r_eax = R32((u32)(0xacb384u));
    /* 008288c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008288cb: je 0x8288de */ if (fZ) goto L_008288de;
L_008288cd:; BB(0x008288cd);
    /* 008288cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008288ce: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x8288d3u); f_0082e960();
    /* 008288d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008288d4: mov dword ptr [0xacb384], 0 */ W32((u32)(0xacb384u), 0x0u);
L_008288de:; BB(0x008288de);
    /* 008288de: ret  */ FN_RET(0x008288c4); r_esp += 4; return;
}

void f_008288e0(void) /* sub_8288E0 */
{
    FN_ENTER(0x008288e0);
    /* 008288e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008288e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008288e2: mov eax, 0xa167c0 */ r_eax = 0xa167c0u;
    /* 008288e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008288e9: mov ebx, eax */ r_ebx = r_eax;
    /* 008288eb: mov esi, edx */ r_esi = r_edx;
L_008288ed:; BB(0x008288ed);
    /* 008288ed: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008288f1: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 008288f3: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x8288f8u); f_0082c198();
    /* 008288f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008288fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008288fd: jne 0x828906 */ if (!fZ) goto L_00828906;
L_008288ff:; BB(0x008288ff);
    /* 008288ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00828901: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00828903: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00828904: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00828905: ret  */ FN_RET(0x008288e0); r_esp += 4; return;
L_00828906:; BB(0x00828906);
    /* 00828906: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00828909: jne 0x828913 */ if (!fZ) goto L_00828913;
L_0082890b:; BB(0x0082890b);
    /* 0082890b: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 00828910: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00828911: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00828912: ret  */ FN_RET(0x008288e0); r_esp += 4; return;
L_00828913:; BB(0x00828913);
    /* 00828913: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00828916: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00828919: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082891c: jl 0x8288ed */ if ((fS!=fO)) goto L_008288ed;
L_0082891e:; BB(0x0082891e);
    /* 0082891e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00828923: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00828924: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00828925: ret  */ FN_RET(0x008288e0); r_esp += 4; return;
}

void f_00828928(void) /* sub_828928 */
{
    FN_ENTER(0x00828928);
    /* 00828928: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082892b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082892e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082892f: call 0x7a8ec0 */ r_esp -= 4; W32(r_esp, 0x828934u); f_007a8ec0();
    /* 00828934: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00828936: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00828939: ret  */ FN_RET(0x00828928); r_esp += 4; return;
}

void f_0082893c(void) /* sub_82893C */
{
    FN_ENTER(0x0082893c);
    /* 0082893c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082893e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082893f: push dword ptr [0xacb380] */ { u32 v = R32((u32)(0xacb380u)); r_esp -= 4; W32(r_esp, v); }
    /* 00828945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00828946: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00828947: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x82894cu); f_0082c21c();
    /* 0082894c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082894f: ret  */ FN_RET(0x0082893c); r_esp += 4; return;
}

void f_00828950(void)
{
    FN_ENTER(0x00828950);
    /* 00828950: push 0x14000 */ { u32 v = 0x14000u; r_esp -= 4; W32(r_esp, v); }
    /* 00828955: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x82895au); f_0082e940();
    /* 0082895a: mov dword ptr [0xacb380], eax */ W32((u32)(0xacb380u), r_eax);
    /* 0082895f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00828960: ret  */ FN_RET(0x00828950); r_esp += 4; return;
}

void f_00828964(void) /* sub_828964 */
{
    FN_ENTER(0x00828964);
    /* 00828964: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828965: mov eax, 1 */ r_eax = 0x1u;
    /* 0082896a: call 0x828978 */ r_esp -= 4; W32(r_esp, 0x82896fu); f_00828978();
    /* 0082896f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00828970: ret  */ FN_RET(0x00828964); r_esp += 4; return;
}

void f_00828974(void) /* sub_828974 */
{
    FN_ENTER(0x00828974);
    /* 00828974: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00828978: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00828979: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082897c: mov ebx, eax */ r_ebx = r_eax;
    /* 0082897e: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x828983u); f_00483740();
    /* 00828983: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828985: je 0x828acc */ if (fZ) goto L_00828acc;
L_0082898b:; BB(0x0082898b);
    /* 0082898b: mov edx, dword ptr [0xacb388] */ r_edx = R32((u32)(0xacb388u));
    /* 00828991: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828993: je 0x828acc */ if (fZ) goto L_00828acc;
L_00828999:; BB(0x00828999);
    /* 00828999: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0082899d: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 008289a1: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 008289a5: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 008289a9: mov eax, 0x40 */ r_eax = 0x40u;
    /* 008289ae: mov ebx, eax */ r_ebx = r_eax;
    /* 008289b0: mov ebp, edx */ r_ebp = r_edx;
L_008289b2:; BB(0x008289b2);
    /* 008289b2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008289b5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289b8: je 0x828a9b */ if (fZ) goto L_00828a9b;
L_008289be:; BB(0x008289be);
    /* 008289be: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 008289c1: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289c4: je 0x828a9b */ if (fZ) goto L_00828a9b;
L_008289ca:; BB(0x008289ca);
    /* 008289ca: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008289cd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289cf: je 0x828b90 */ if (fZ) goto L_00828b90;
L_008289d5:; BB(0x008289d5);
    /* 008289d5: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008289d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289db: jne 0x828a1d */ if (!fZ) goto L_00828a1d;
L_008289dd:; BB(0x008289dd);
    /* 008289dd: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 008289e0: cmp ecx, dword ptr [ebp + 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289e3: je 0x828a1d */ if (fZ) goto L_00828a1d;
L_008289e5:; BB(0x008289e5);
    /* 008289e5: mov edi, dword ptr [ebp + 0x3c] */ r_edi = R32((u32)(r_ebp+0x3cu));
    /* 008289e8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289ea: je 0x828a1a */ if (fZ) goto L_00828a1a;
L_008289ec:; BB(0x008289ec);
    /* 008289ec: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 008289ef: fadd dword ptr [ebp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x44u));
    /* 008289f2: fst dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0));
    /* 008289f5: fnstcw word ptr [esp + 4] */ W16((u32)(r_esp+0x4u), fcw);
    /* 008289f9: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 008289fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00828a03: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00828a07: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00828a0b: fistp dword ptr [ebp + 0x34] */ W32((u32)(r_ebp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00828a0e: fldcw word ptr [esp + 4] */ fcw = R16((u32)(r_esp+0x4u));
    /* 00828a12: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00828a15: mov dword ptr [ebp + 0x3c], edi */ W32((u32)(r_ebp+0x3cu), r_edi);
    /* 00828a18: jmp 0x828a1d */ goto L_00828a1d;
L_00828a1a:; BB(0x00828a1a);
    /* 00828a1a: mov dword ptr [ebp + 0x34], ecx */ W32((u32)(r_ebp+0x34u), r_ecx);
L_00828a1d:; BB(0x00828a1d);
    /* 00828a1d: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00828a20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00828a22: jl 0x828afd */ if ((fS!=fO)) goto L_00828afd;
L_00828a28:; BB(0x00828a28);
    /* 00828a28: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00828a2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828a2d: je 0x828a88 */ if (fZ) goto L_00828a88;
L_00828a2f:; BB(0x00828a2f);
    /* 00828a2f: mov ecx, dword ptr [0xacb3a8] */ r_ecx = R32((u32)(0xacb3a8u));
    /* 00828a35: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00828a38: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00828a3a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00828a3c: mov ecx, dword ptr [ecx + edi*8] */ r_ecx = R32((u32)(r_ecx+r_edi*8));
    /* 00828a3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828a41: je 0x828a88 */ if (fZ) goto L_00828a88;
L_00828a43:; BB(0x00828a43);
    /* 00828a43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00828a45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00828a46: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x828a4cu); call_ind(t); }
    /* 00828a4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828a4e: je 0x828a55 */ if (fZ) goto L_00828a55;
L_00828a50:; BB(0x00828a50);
    /* 00828a50: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00828a53: jmp 0x828a88 */ goto L_00828a88;
L_00828a55:; BB(0x00828a55);
    /* 00828a55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828a56: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00828a58: call dword ptr [ecx + 0x48] */ { u32 t = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, 0x828a5bu); call_ind(t); }
    /* 00828a5b: mov eax, dword ptr [0xacb3a8] */ r_eax = R32((u32)(0xacb3a8u));
    /* 00828a60: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00828a63: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00828a65: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828a67: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828a69: mov edi, dword ptr [eax + edx*8] */ r_edi = R32((u32)(r_eax+r_edx*8));
    /* 00828a6c: movzx edi, word ptr [edi + 0xc] */ r_edi = (u32)R16((u32)(r_edi+0xcu));
    /* 00828a70: imul edi, dword ptr [eax + edx*8 + 0x10] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_eax+r_edx*8+0x10u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00828a75: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00828a76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828a77: call dword ptr [ecx + 0x34] */ { u32 t = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, 0x828a7au); call_ind(t); }
    /* 00828a7a: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00828a7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00828a7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828a7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828a80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828a81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828a82: call dword ptr [edi + 0x30] */ { u32 t = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, 0x828a85u); call_ind(t); }
    /* 00828a85: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
L_00828a88:; BB(0x00828a88);
    /* 00828a88: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00828a8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828a8e: jne 0x828a96 */ if (!fZ) goto L_00828a96;
L_00828a90:; BB(0x00828a90);
    /* 00828a90: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828a93: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
L_00828a96:; BB(0x00828a96);
    /* 00828a96: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828a99: je 0x828ad1 */ if (fZ) goto L_00828ad1;
L_00828a9b:; BB(0x00828a9b);
    /* 00828a9b: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00828a9e: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00828aa1: jne 0x8289b2 */ if (!fZ) goto L_008289b2;
L_00828aa7:; BB(0x00828aa7);
    /* 00828aa7: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00828aab: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00828aaf: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00828ab3: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00828ab7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ab9: jne 0x828acc */ if (!fZ) goto L_00828acc;
L_00828abb:; BB(0x00828abb);
    /* 00828abb: mov eax, dword ptr [0xacb38c] */ r_eax = R32((u32)(0xacb38cu));
    /* 00828ac0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ac2: je 0x828acc */ if (fZ) goto L_00828acc;
L_00828ac4:; BB(0x00828ac4);
    /* 00828ac4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00828ac7: mov dword ptr [0xacb38c], eax */ W32((u32)(0xacb38cu), r_eax);
L_00828acc:; BB(0x00828acc);
    /* 00828acc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00828acf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00828ad0: ret  */ FN_RET(0x00828974); r_esp += 4; return;
L_00828ad1:; BB(0x00828ad1);
    /* 00828ad1: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00828ad4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ad6: je 0x828ae5 */ if (fZ) goto L_00828ae5;
L_00828ad8:; BB(0x00828ad8);
    /* 00828ad8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828ad9: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00828adb: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x828adeu); call_ind(t); }
    /* 00828ade: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
L_00828ae5:; BB(0x00828ae5);
    /* 00828ae5: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00828ae8: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828aeb: je 0x828a9b */ if (fZ) goto L_00828a9b;
L_00828aed:; BB(0x00828aed);
    /* 00828aed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828aee: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x828af4u); call_ind(t); }
    /* 00828af4: mov dword ptr [ebp + 0x1c], 0xffffffff */ W32((u32)(r_ebp+0x1cu), 0xffffffffu);
    /* 00828afb: jmp 0x828a9b */ goto L_00828a9b;
L_00828afd:; BB(0x00828afd);
    /* 00828afd: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00828b04: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00828b07: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00828b09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828b0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828b0b: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x828b0eu); call_ind(t); }
    /* 00828b0e: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00828b11: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00828b14: jne 0x828a9b */ if (!fZ) goto L_00828a9b;
L_00828b16:; BB(0x00828b16);
    /* 00828b16: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828b18: je 0x828a9b */ if (fZ) goto L_00828a9b;
L_00828b1a:; BB(0x00828b1a);
    /* 00828b1a: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00828b1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828b1f: je 0x828b2e */ if (fZ) goto L_00828b2e;
L_00828b21:; BB(0x00828b21);
    /* 00828b21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828b22: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00828b24: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x828b27u); call_ind(t); }
    /* 00828b27: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
L_00828b2e:; BB(0x00828b2e);
    /* 00828b2e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00828b31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828b33: je 0x828b42 */ if (fZ) goto L_00828b42;
L_00828b35:; BB(0x00828b35);
    /* 00828b35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828b36: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00828b38: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x828b3bu); call_ind(t); }
    /* 00828b3b: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_00828b42:; BB(0x00828b42);
    /* 00828b42: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00828b45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828b47: je 0x828b56 */ if (fZ) goto L_00828b56;
L_00828b49:; BB(0x00828b49);
    /* 00828b49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828b4a: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00828b4c: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x828b4fu); call_ind(t); }
    /* 00828b4f: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
L_00828b56:; BB(0x00828b56);
    /* 00828b56: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00828b59: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828b5c: je 0x828b6c */ if (fZ) goto L_00828b6c;
L_00828b5e:; BB(0x00828b5e);
    /* 00828b5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828b5f: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x828b65u); call_ind(t); }
    /* 00828b65: mov dword ptr [ebp + 0x1c], 0xffffffff */ W32((u32)(r_ebp+0x1cu), 0xffffffffu);
L_00828b6c:; BB(0x00828b6c);
    /* 00828b6c: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00828b71: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00828b74: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00828b77: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00828b79: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 00828b7c: mov dword ptr [ebp + 0x20], ecx */ W32((u32)(r_ebp+0x20u), r_ecx);
    /* 00828b7f: mov dword ptr [ebp + 0x24], esi */ W32((u32)(r_ebp+0x24u), r_esi);
    /* 00828b82: mov dword ptr [ebp + 0x28], esi */ W32((u32)(r_ebp+0x28u), r_esi);
    /* 00828b85: mov dword ptr [ebp + 0x34], esi */ W32((u32)(r_ebp+0x34u), r_esi);
    /* 00828b88: mov dword ptr [ebp + 0x38], esi */ W32((u32)(r_ebp+0x38u), r_esi);
    /* 00828b8b: jmp 0x828a9b */ goto L_00828a9b;
L_00828b90:; BB(0x00828b90);
    /* 00828b90: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00828b92: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 00828b95: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 00828b98: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 00828b9b: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00828b9e: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ba1: je 0x828bb1 */ if (fZ) goto L_00828bb1;
L_00828ba3:; BB(0x00828ba3);
    /* 00828ba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828ba4: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x828baau); call_ind(t); }
    /* 00828baa: mov dword ptr [ebp + 0x1c], 0xffffffff */ W32((u32)(r_ebp+0x1cu), 0xffffffffu);
L_00828bb1:; BB(0x00828bb1);
    /* 00828bb1: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00828bb6: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00828bb9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00828bbb: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 00828bbe: mov dword ptr [ebp + 0x20], ecx */ W32((u32)(r_ebp+0x20u), r_ecx);
    /* 00828bc1: mov dword ptr [ebp + 0x34], esi */ W32((u32)(r_ebp+0x34u), r_esi);
    /* 00828bc4: mov dword ptr [ebp + 0x38], esi */ W32((u32)(r_ebp+0x38u), r_esi);
    /* 00828bc7: jmp 0x828a9b */ goto L_00828a9b;
}

void f_00828978(void) /* sub_828978 */
{
    FN_ENTER(0x00828978);
    /* 00828978: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00828979: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082897c: mov ebx, eax */ r_ebx = r_eax;
    /* 0082897e: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x828983u); f_00483740();
    /* 00828983: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828985: je 0x828acc */ if (fZ) goto L_00828acc;
L_0082898b:; BB(0x0082898b);
    /* 0082898b: mov edx, dword ptr [0xacb388] */ r_edx = R32((u32)(0xacb388u));
    /* 00828991: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828993: je 0x828acc */ if (fZ) goto L_00828acc;
L_00828999:; BB(0x00828999);
    /* 00828999: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0082899d: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 008289a1: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 008289a5: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 008289a9: mov eax, 0x40 */ r_eax = 0x40u;
    /* 008289ae: mov ebx, eax */ r_ebx = r_eax;
    /* 008289b0: mov ebp, edx */ r_ebp = r_edx;
L_008289b2:; BB(0x008289b2);
    /* 008289b2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008289b5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289b8: je 0x828a9b */ if (fZ) goto L_00828a9b;
L_008289be:; BB(0x008289be);
    /* 008289be: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 008289c1: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289c4: je 0x828a9b */ if (fZ) goto L_00828a9b;
L_008289ca:; BB(0x008289ca);
    /* 008289ca: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008289cd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289cf: je 0x828b90 */ if (fZ) goto L_00828b90;
L_008289d5:; BB(0x008289d5);
    /* 008289d5: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008289d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289db: jne 0x828a1d */ if (!fZ) goto L_00828a1d;
L_008289dd:; BB(0x008289dd);
    /* 008289dd: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 008289e0: cmp ecx, dword ptr [ebp + 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289e3: je 0x828a1d */ if (fZ) goto L_00828a1d;
L_008289e5:; BB(0x008289e5);
    /* 008289e5: mov edi, dword ptr [ebp + 0x3c] */ r_edi = R32((u32)(r_ebp+0x3cu));
    /* 008289e8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008289ea: je 0x828a1a */ if (fZ) goto L_00828a1a;
L_008289ec:; BB(0x008289ec);
    /* 008289ec: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 008289ef: fadd dword ptr [ebp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x44u));
    /* 008289f2: fst dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0));
    /* 008289f5: fnstcw word ptr [esp + 4] */ W16((u32)(r_esp+0x4u), fcw);
    /* 008289f9: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 008289fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00828a03: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00828a07: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00828a0b: fistp dword ptr [ebp + 0x34] */ W32((u32)(r_ebp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00828a0e: fldcw word ptr [esp + 4] */ fcw = R16((u32)(r_esp+0x4u));
    /* 00828a12: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00828a15: mov dword ptr [ebp + 0x3c], edi */ W32((u32)(r_ebp+0x3cu), r_edi);
    /* 00828a18: jmp 0x828a1d */ goto L_00828a1d;
L_00828a1a:; BB(0x00828a1a);
    /* 00828a1a: mov dword ptr [ebp + 0x34], ecx */ W32((u32)(r_ebp+0x34u), r_ecx);
L_00828a1d:; BB(0x00828a1d);
    /* 00828a1d: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00828a20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00828a22: jl 0x828afd */ if ((fS!=fO)) goto L_00828afd;
L_00828a28:; BB(0x00828a28);
    /* 00828a28: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00828a2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828a2d: je 0x828a88 */ if (fZ) goto L_00828a88;
L_00828a2f:; BB(0x00828a2f);
    /* 00828a2f: mov ecx, dword ptr [0xacb3a8] */ r_ecx = R32((u32)(0xacb3a8u));
    /* 00828a35: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00828a38: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00828a3a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00828a3c: mov ecx, dword ptr [ecx + edi*8] */ r_ecx = R32((u32)(r_ecx+r_edi*8));
    /* 00828a3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828a41: je 0x828a88 */ if (fZ) goto L_00828a88;
L_00828a43:; BB(0x00828a43);
    /* 00828a43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00828a45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00828a46: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x828a4cu); call_ind(t); }
    /* 00828a4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828a4e: je 0x828a55 */ if (fZ) goto L_00828a55;
L_00828a50:; BB(0x00828a50);
    /* 00828a50: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00828a53: jmp 0x828a88 */ goto L_00828a88;
L_00828a55:; BB(0x00828a55);
    /* 00828a55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828a56: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00828a58: call dword ptr [ecx + 0x48] */ { u32 t = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, 0x828a5bu); call_ind(t); }
    /* 00828a5b: mov eax, dword ptr [0xacb3a8] */ r_eax = R32((u32)(0xacb3a8u));
    /* 00828a60: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00828a63: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00828a65: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828a67: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828a69: mov edi, dword ptr [eax + edx*8] */ r_edi = R32((u32)(r_eax+r_edx*8));
    /* 00828a6c: movzx edi, word ptr [edi + 0xc] */ r_edi = (u32)R16((u32)(r_edi+0xcu));
    /* 00828a70: imul edi, dword ptr [eax + edx*8 + 0x10] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_eax+r_edx*8+0x10u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00828a75: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00828a76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828a77: call dword ptr [ecx + 0x34] */ { u32 t = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, 0x828a7au); call_ind(t); }
    /* 00828a7a: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00828a7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00828a7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828a7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828a80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828a81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828a82: call dword ptr [edi + 0x30] */ { u32 t = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, 0x828a85u); call_ind(t); }
    /* 00828a85: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
L_00828a88:; BB(0x00828a88);
    /* 00828a88: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00828a8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828a8e: jne 0x828a96 */ if (!fZ) goto L_00828a96;
L_00828a90:; BB(0x00828a90);
    /* 00828a90: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828a93: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
L_00828a96:; BB(0x00828a96);
    /* 00828a96: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828a99: je 0x828ad1 */ if (fZ) goto L_00828ad1;
L_00828a9b:; BB(0x00828a9b);
    /* 00828a9b: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00828a9e: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00828aa1: jne 0x8289b2 */ if (!fZ) goto L_008289b2;
L_00828aa7:; BB(0x00828aa7);
    /* 00828aa7: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00828aab: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00828aaf: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00828ab3: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00828ab7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ab9: jne 0x828acc */ if (!fZ) goto L_00828acc;
L_00828abb:; BB(0x00828abb);
    /* 00828abb: mov eax, dword ptr [0xacb38c] */ r_eax = R32((u32)(0xacb38cu));
    /* 00828ac0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ac2: je 0x828acc */ if (fZ) goto L_00828acc;
L_00828ac4:; BB(0x00828ac4);
    /* 00828ac4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00828ac7: mov dword ptr [0xacb38c], eax */ W32((u32)(0xacb38cu), r_eax);
L_00828acc:; BB(0x00828acc);
    /* 00828acc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00828acf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00828ad0: ret  */ FN_RET(0x00828978); r_esp += 4; return;
L_00828ad1:; BB(0x00828ad1);
    /* 00828ad1: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00828ad4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ad6: je 0x828ae5 */ if (fZ) goto L_00828ae5;
L_00828ad8:; BB(0x00828ad8);
    /* 00828ad8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828ad9: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00828adb: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x828adeu); call_ind(t); }
    /* 00828ade: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
L_00828ae5:; BB(0x00828ae5);
    /* 00828ae5: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00828ae8: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828aeb: je 0x828a9b */ if (fZ) goto L_00828a9b;
L_00828aed:; BB(0x00828aed);
    /* 00828aed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828aee: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x828af4u); call_ind(t); }
    /* 00828af4: mov dword ptr [ebp + 0x1c], 0xffffffff */ W32((u32)(r_ebp+0x1cu), 0xffffffffu);
    /* 00828afb: jmp 0x828a9b */ goto L_00828a9b;
L_00828afd:; BB(0x00828afd);
    /* 00828afd: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00828b04: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00828b07: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00828b09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828b0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828b0b: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x828b0eu); call_ind(t); }
    /* 00828b0e: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00828b11: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00828b14: jne 0x828a9b */ if (!fZ) goto L_00828a9b;
L_00828b16:; BB(0x00828b16);
    /* 00828b16: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828b18: je 0x828a9b */ if (fZ) goto L_00828a9b;
L_00828b1a:; BB(0x00828b1a);
    /* 00828b1a: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00828b1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828b1f: je 0x828b2e */ if (fZ) goto L_00828b2e;
L_00828b21:; BB(0x00828b21);
    /* 00828b21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828b22: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00828b24: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x828b27u); call_ind(t); }
    /* 00828b27: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
L_00828b2e:; BB(0x00828b2e);
    /* 00828b2e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00828b31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828b33: je 0x828b42 */ if (fZ) goto L_00828b42;
L_00828b35:; BB(0x00828b35);
    /* 00828b35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828b36: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00828b38: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x828b3bu); call_ind(t); }
    /* 00828b3b: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_00828b42:; BB(0x00828b42);
    /* 00828b42: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00828b45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828b47: je 0x828b56 */ if (fZ) goto L_00828b56;
L_00828b49:; BB(0x00828b49);
    /* 00828b49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828b4a: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00828b4c: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x828b4fu); call_ind(t); }
    /* 00828b4f: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
L_00828b56:; BB(0x00828b56);
    /* 00828b56: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00828b59: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828b5c: je 0x828b6c */ if (fZ) goto L_00828b6c;
L_00828b5e:; BB(0x00828b5e);
    /* 00828b5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828b5f: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x828b65u); call_ind(t); }
    /* 00828b65: mov dword ptr [ebp + 0x1c], 0xffffffff */ W32((u32)(r_ebp+0x1cu), 0xffffffffu);
L_00828b6c:; BB(0x00828b6c);
    /* 00828b6c: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00828b71: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00828b74: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00828b77: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00828b79: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 00828b7c: mov dword ptr [ebp + 0x20], ecx */ W32((u32)(r_ebp+0x20u), r_ecx);
    /* 00828b7f: mov dword ptr [ebp + 0x24], esi */ W32((u32)(r_ebp+0x24u), r_esi);
    /* 00828b82: mov dword ptr [ebp + 0x28], esi */ W32((u32)(r_ebp+0x28u), r_esi);
    /* 00828b85: mov dword ptr [ebp + 0x34], esi */ W32((u32)(r_ebp+0x34u), r_esi);
    /* 00828b88: mov dword ptr [ebp + 0x38], esi */ W32((u32)(r_ebp+0x38u), r_esi);
    /* 00828b8b: jmp 0x828a9b */ goto L_00828a9b;
L_00828b90:; BB(0x00828b90);
    /* 00828b90: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00828b92: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 00828b95: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 00828b98: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 00828b9b: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00828b9e: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ba1: je 0x828bb1 */ if (fZ) goto L_00828bb1;
L_00828ba3:; BB(0x00828ba3);
    /* 00828ba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00828ba4: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x828baau); call_ind(t); }
    /* 00828baa: mov dword ptr [ebp + 0x1c], 0xffffffff */ W32((u32)(r_ebp+0x1cu), 0xffffffffu);
L_00828bb1:; BB(0x00828bb1);
    /* 00828bb1: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00828bb6: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00828bb9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00828bbb: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 00828bbe: mov dword ptr [ebp + 0x20], ecx */ W32((u32)(r_ebp+0x20u), r_ecx);
    /* 00828bc1: mov dword ptr [ebp + 0x34], esi */ W32((u32)(r_ebp+0x34u), r_esi);
    /* 00828bc4: mov dword ptr [ebp + 0x38], esi */ W32((u32)(r_ebp+0x38u), r_esi);
    /* 00828bc7: jmp 0x828a9b */ goto L_00828a9b;
}

void f_00828bcc(void) /* sub_828BCC */
{
    FN_ENTER(0x00828bcc);
    /* 00828bcc: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x828bd1u); f_00483740();
    /* 00828bd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00828bd3: jne 0x828bd6 */ if (!fZ) goto L_00828bd6;
L_00828bd5:; BB(0x00828bd5);
    /* 00828bd5: ret  */ FN_RET(0x00828bcc); r_esp += 4; return;
L_00828bd6:; BB(0x00828bd6);
    /* 00828bd6: call 0x828c38 */ r_esp -= 4; W32(r_esp, 0x828bdbu); f_00828c38();
    /* 00828bdb: push dword ptr [0xacb390] */ { u32 v = R32((u32)(0xacb390u)); r_esp -= 4; W32(r_esp, v); }
    /* 00828be1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x828be6u); f_0082e960();
    /* 00828be6: push dword ptr [0xacb394] */ { u32 v = R32((u32)(0xacb394u)); r_esp -= 4; W32(r_esp, v); }
    /* 00828bec: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x828bf1u); f_0082e960();
    /* 00828bf1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00828bf4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00828bf6: mov dword ptr [0xacb390], eax */ W32((u32)(0xacb390u), r_eax);
    /* 00828bfb: mov dword ptr [0xacb394], eax */ W32((u32)(0xacb394u), r_eax);
    /* 00828c00: mov eax, dword ptr [0xacb388] */ r_eax = R32((u32)(0xacb388u));
    /* 00828c05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828c07: je 0x828c1a */ if (fZ) goto L_00828c1a;
L_00828c09:; BB(0x00828c09);
    /* 00828c09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00828c0a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x828c0fu); f_00857e98();
    /* 00828c0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00828c10: mov dword ptr [0xacb388], 0 */ W32((u32)(0xacb388u), 0x0u);
L_00828c1a:; BB(0x00828c1a);
    /* 00828c1a: mov eax, dword ptr [0xacb3a8] */ r_eax = R32((u32)(0xacb3a8u));
    /* 00828c1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00828c21: je 0x828c34 */ if (fZ) goto L_00828c34;
L_00828c23:; BB(0x00828c23);
    /* 00828c23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00828c24: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x828c29u); f_00857e98();
    /* 00828c29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00828c2a: mov dword ptr [0xacb3a8], 0 */ W32((u32)(0xacb3a8u), 0x0u);
L_00828c34:; BB(0x00828c34);
    /* 00828c34: ret  */ FN_RET(0x00828bcc); r_esp += 4; return;
}

void f_00828c38(void) /* sub_828C38 */
{
    FN_ENTER(0x00828c38);
    /* 00828c38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828c39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00828c3a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00828c3d: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x828c42u); f_00483740();
    /* 00828c42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828c44: je 0x828d1e */ if (fZ) goto L_00828d1e;
L_00828c4a:; BB(0x00828c4a);
    /* 00828c4a: mov eax, dword ptr [0xacb398] */ r_eax = R32((u32)(0xacb398u));
    /* 00828c4f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828c52: je 0x828c84 */ if (fZ) goto L_00828c84;
L_00828c54:; BB(0x00828c54);
    /* 00828c54: push dword ptr [0xacb390] */ { u32 v = R32((u32)(0xacb390u)); r_esp -= 4; W32(r_esp, v); }
    /* 00828c5a: mov dword ptr [0xacb398], 0xffffffff */ W32((u32)(0xacb398u), 0xffffffffu);
    /* 00828c64: call 0x844ac4 */ r_esp -= 4; W32(r_esp, 0x828c69u); f_00844ac4();
    /* 00828c69: push 0xe000 */ { u32 v = 0xe000u; r_esp -= 4; W32(r_esp, v); }
    /* 00828c6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00828c70: mov dword ptr [0xacb390], eax */ W32((u32)(0xacb390u), r_eax);
    /* 00828c75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00828c76: push dword ptr [0xacb3a8] */ { u32 v = R32((u32)(0xacb3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00828c7c: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x828c81u); f_0086b5cc();
    /* 00828c81: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00828c84:; BB(0x00828c84);
    /* 00828c84: mov edx, dword ptr [0xacb394] */ r_edx = R32((u32)(0xacb394u));
    /* 00828c8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828c8c: je 0x828d1e */ if (fZ) goto L_00828d1e;
L_00828c92:; BB(0x00828c92);
    /* 00828c92: mov esi, dword ptr [0xa2147c] */ r_esi = R32((u32)(0xa2147cu));
    /* 00828c98: mov ebx, dword ptr [0xa215fc] */ r_ebx = R32((u32)(0xa215fcu));
    /* 00828c9e: mov eax, dword ptr [0xa214fc] */ r_eax = R32((u32)(0xa214fcu));
    /* 00828ca3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ca5: je 0x828d1e */ if (fZ) goto L_00828d1e;
L_00828ca7:; BB(0x00828ca7);
    /* 00828ca7: mov ecx, dword ptr [0xacb3a8] */ r_ecx = R32((u32)(0xacb3a8u));
    /* 00828cad: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00828cb1: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00828cb5: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00828cb9: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_00828cbc:; BB(0x00828cbc);
    /* 00828cbc: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00828cc0: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00828cc2: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 00828cc5: lea eax, [ebp + edi] */ r_eax = (u32)(r_ebp+r_edi);
    /* 00828cc9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828ccb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828ccd: mov dword ptr [ecx + edx*8 + 0x1c], eax */ W32((u32)(r_ecx+r_edx*8+0x1cu), r_eax);
    /* 00828cd1: mov dword ptr [ecx + edx*8], eax */ W32((u32)(r_ecx+r_edx*8), r_eax);
    /* 00828cd4: lea ebp, [ebp + edi + 0x20] */ r_ebp = (u32)(r_ebp+r_edi+0x20u);
    /* 00828cd8: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00828cdb: mov ecx, dword ptr [0xacb3a8] */ r_ecx = R32((u32)(0xacb3a8u));
    /* 00828ce1: mov dword ptr [ecx + edx*8 + 4], ebp */ W32((u32)(r_ecx+r_edx*8+0x4u), r_ebp);
    /* 00828ce5: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00828ce8: mov dword ptr [ecx + edx*8 + 8], eax */ W32((u32)(r_ecx+r_edx*8+0x8u), r_eax);
    /* 00828cec: movzx eax, byte ptr [ebx + 2] */ r_eax = (u32)R8((u32)(r_ebx+0x2u));
    /* 00828cf0: mov dword ptr [ecx + edx*8 + 0xc], eax */ W32((u32)(r_ecx+r_edx*8+0xcu), r_eax);
    /* 00828cf4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00828cf7: mov dword ptr [ecx + edx*8 + 0x10], eax */ W32((u32)(r_ecx+r_edx*8+0x10u), r_eax);
    /* 00828cfb: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00828cfe: sub eax, dword ptr [ebx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00828d01: mov dword ptr [ecx + edx*8 + 0x14], eax */ W32((u32)(r_ecx+r_edx*8+0x14u), r_eax);
    /* 00828d05: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00828d08: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00828d0c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00828d0f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00828d13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828d15: jne 0x828cbc */ if (!fZ) goto L_00828cbc;
L_00828d17:; BB(0x00828d17);
    /* 00828d17: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00828d1b: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00828d1e:; BB(0x00828d1e);
    /* 00828d1e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00828d21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00828d22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00828d23: ret  */ FN_RET(0x00828c38); r_esp += 4; return;
}

void f_00828d24(void) /* sub_828D24 */
{
    FN_ENTER(0x00828d24);
    /* 00828d24: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x828d29u); f_00483740();
    /* 00828d29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00828d2b: jne 0x828d2e */ if (!fZ) goto L_00828d2e;
L_00828d2d:; BB(0x00828d2d);
    /* 00828d2d: ret  */ FN_RET(0x00828d24); r_esp += 4; return;
L_00828d2e:; BB(0x00828d2e);
    /* 00828d2e: call 0x83e13c */ r_esp -= 4; W32(r_esp, 0x828d33u); f_0083e13c();
    /* 00828d33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00828d35: je 0x828d3d */ if (fZ) goto L_00828d3d;
L_00828d37:; BB(0x00828d37);
    /* 00828d37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00828d38: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00828d3a: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x828d3du); call_ind(t); }
L_00828d3d:; BB(0x00828d3d);
    /* 00828d3d: ret  */ FN_RET(0x00828d24); r_esp += 4; return;
}

void f_00828d40(void) /* sub_828D40 */
{
    FN_ENTER(0x00828d40);
    /* 00828d40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828d41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00828d42: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00828d45: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x828d4au); f_00483740();
    /* 00828d4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828d4c: jne 0x828d56 */ if (!fZ) goto L_00828d56;
L_00828d4e:; BB(0x00828d4e);
    /* 00828d4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00828d50: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00828d53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00828d54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00828d55: ret  */ FN_RET(0x00828d40); r_esp += 4; return;
L_00828d56:; BB(0x00828d56);
    /* 00828d56: call 0x829ad0 */ r_esp -= 4; W32(r_esp, 0x828d5bu); f_00829ad0();
    /* 00828d5b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00828d5f: cmp eax, dword ptr [0xacb398] */ {  u32 a = r_eax; u32 b = R32((u32)(0xacb398u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828d65: je 0x828e41 */ if (fZ) goto L_00828e41;
L_00828d6b:; BB(0x00828d6b);
    /* 00828d6b: call 0x828c38 */ r_esp -= 4; W32(r_esp, 0x828d70u); f_00828c38();
    /* 00828d70: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00828d74: push 0x98a0f8 */ { u32 v = 0x98a0f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00828d79: mov ebp, dword ptr [eax*4 + 0x989e60] */ r_ebp = R32((u32)(r_eax*4+0x989e60u));
    /* 00828d80: call 0x83c43c */ r_esp -= 4; W32(r_esp, 0x828d85u); f_0083c43c();
    /* 00828d85: push dword ptr [ebp*4 + 0xa21560] */ { u32 v = R32((u32)(r_ebp*4+0xa21560u)); r_esp -= 4; W32(r_esp, v); }
    /* 00828d8c: call 0x5b9554 */ r_esp -= 4; W32(r_esp, 0x828d91u); f_005b9554();
    /* 00828d91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00828d94: mov dword ptr [0xacb390], eax */ W32((u32)(0xacb390u), r_eax);
    /* 00828d99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828d9b: je 0x828e2d */ if (fZ) goto L_00828e2d;
L_00828da1:; BB(0x00828da1);
    /* 00828da1: mov ecx, dword ptr [ebp*4 + 0xa21460] */ r_ecx = R32((u32)(r_ebp*4+0xa21460u));
    /* 00828da8: mov edx, dword ptr [ebp*4 + 0xa215e0] */ r_edx = R32((u32)(r_ebp*4+0xa215e0u));
    /* 00828daf: mov esi, dword ptr [ebp*4 + 0xa214e0] */ r_esi = R32((u32)(r_ebp*4+0xa214e0u));
    /* 00828db6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828db8: je 0x828e2d */ if (fZ) goto L_00828e2d;
L_00828dba:; BB(0x00828dba);
    /* 00828dba: mov ebp, dword ptr [0xacb3a8] */ r_ebp = R32((u32)(0xacb3a8u));
    /* 00828dc0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00828dc4: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00828dc8: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_00828dcb:; BB(0x00828dcb);
    /* 00828dcb: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00828dcf: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00828dd2: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00828dd6: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00828dd8: lea eax, [ebx + edi] */ r_eax = (u32)(r_ebx+r_edi);
    /* 00828ddb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00828ddd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00828ddf: mov dword ptr [ebp + ecx*8 + 0x1c], eax */ W32((u32)(r_ebp+r_ecx*8+0x1cu), r_eax);
    /* 00828de3: lea ebx, [ebx + edi + 0x20] */ r_ebx = (u32)(r_ebx+r_edi+0x20u);
    /* 00828de7: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00828dea: mov dword ptr [ebp + ecx*8], eax */ W32((u32)(r_ebp+r_ecx*8), r_eax);
    /* 00828dee: mov ebp, dword ptr [0xacb3a8] */ r_ebp = R32((u32)(0xacb3a8u));
    /* 00828df4: mov dword ptr [ebp + ecx*8 + 4], ebx */ W32((u32)(r_ebp+r_ecx*8+0x4u), r_ebx);
    /* 00828df8: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00828dfb: mov dword ptr [ebp + ecx*8 + 8], eax */ W32((u32)(r_ebp+r_ecx*8+0x8u), r_eax);
    /* 00828dff: movzx eax, byte ptr [edx + 2] */ r_eax = (u32)R8((u32)(r_edx+0x2u));
    /* 00828e03: mov dword ptr [ebp + ecx*8 + 0xc], eax */ W32((u32)(r_ebp+r_ecx*8+0xcu), r_eax);
    /* 00828e07: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00828e0a: mov dword ptr [ebp + ecx*8 + 0x10], eax */ W32((u32)(r_ebp+r_ecx*8+0x10u), r_eax);
    /* 00828e0e: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00828e11: sub eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00828e14: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00828e17: mov dword ptr [ebp + ecx*8 + 0x14], eax */ W32((u32)(r_ebp+r_ecx*8+0x14u), r_eax);
    /* 00828e1b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00828e1f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00828e22: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828e24: jne 0x828dcb */ if (!fZ) goto L_00828dcb;
L_00828e26:; BB(0x00828e26);
    /* 00828e26: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00828e2a: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00828e2d:; BB(0x00828e2d);
    /* 00828e2d: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 00828e32: call 0x83c43c */ r_esp -= 4; W32(r_esp, 0x828e37u); f_0083c43c();
    /* 00828e37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00828e38: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00828e3c: mov dword ptr [0xacb398], eax */ W32((u32)(0xacb398u), r_eax);
L_00828e41:; BB(0x00828e41);
    /* 00828e41: mov eax, 1 */ r_eax = 0x1u;
    /* 00828e46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00828e49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00828e4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00828e4b: ret  */ FN_RET(0x00828d40); r_esp += 4; return;
}

void f_00828e4c(void) /* sub_828E4C */
{
    FN_ENTER(0x00828e4c);
    /* 00828e4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00828e4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00828e4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00828e4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00828e50: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00828e53: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 00828e57: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x828e5cu); f_00483740();
    /* 00828e5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828e5e: je 0x828e76 */ if (fZ) goto L_00828e76;
L_00828e60:; BB(0x00828e60);
    /* 00828e60: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00828e64: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00828e69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828e6b: je 0x828e76 */ if (fZ) goto L_00828e76;
L_00828e6d:; BB(0x00828e6d);
    /* 00828e6d: mov eax, dword ptr [0xacb38c] */ r_eax = R32((u32)(0xacb38cu));
    /* 00828e72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828e74: je 0x828e83 */ if (fZ) goto L_00828e83;
L_00828e76:; BB(0x00828e76);
    /* 00828e76: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00828e7b: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00828e7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00828e7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00828e80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00828e81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00828e82: ret  */ FN_RET(0x00828e4c); r_esp += 4; return;
L_00828e83:; BB(0x00828e83);
    /* 00828e83: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00828e87: call 0x8290f4 */ r_esp -= 4; W32(r_esp, 0x828e8cu); f_008290f4();
    /* 00828e8c: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00828e90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00828e91: mov ebp, eax */ r_ebp = r_eax;
    /* 00828e93: call 0x829c38 */ r_esp -= 4; W32(r_esp, 0x828e98u); f_00829c38();
    /* 00828e98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00828e99: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00828e9d: call 0x829110 */ r_esp -= 4; W32(r_esp, 0x828ea2u); f_00829110();
    /* 00828ea2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ea4: je 0x8290c1 */ if (fZ) goto L_008290c1;
L_00828eaa:; BB(0x00828eaa);
    /* 00828eaa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00828eac: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00828eb0: mov edx, dword ptr [0xacb388] */ r_edx = R32((u32)(0xacb388u));
    /* 00828eb6: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
L_00828eba:; BB(0x00828eba);
    /* 00828eba: lea ebx, [ecx + ecx*8] */ r_ebx = (u32)(r_ecx+r_ecx*8);
    /* 00828ebd: mov ebx, dword ptr [edx + ebx*8 + 0x10] */ r_ebx = R32((u32)(r_edx+r_ebx*8+0x10u));
    /* 00828ec1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ec3: je 0x8290d4 */ if (fZ) goto L_008290d4;
L_00828ec9:; BB(0x00828ec9);
    /* 00828ec9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00828ecc: lea ebx, [ecx + ecx*8] */ r_ebx = (u32)(r_ecx+r_ecx*8);
    /* 00828ecf: mov ebx, dword ptr [edx + ebx*8 + 0x10] */ r_ebx = R32((u32)(r_edx+r_ebx*8+0x10u));
    /* 00828ed3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ed5: je 0x8290e6 */ if (fZ) goto L_008290e6;
L_00828edb:; BB(0x00828edb);
    /* 00828edb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00828ede: lea ebx, [ecx + ecx*8] */ r_ebx = (u32)(r_ecx+r_ecx*8);
    /* 00828ee1: mov ebx, dword ptr [edx + ebx*8 + 0x10] */ r_ebx = R32((u32)(r_edx+r_ebx*8+0x10u));
    /* 00828ee5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ee7: je 0x8290dd */ if (fZ) goto L_008290dd;
L_00828eed:; BB(0x00828eed);
    /* 00828eed: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00828ef0: lea ebx, [ecx + ecx*8] */ r_ebx = (u32)(r_ecx+r_ecx*8);
    /* 00828ef3: mov ebx, dword ptr [edx + ebx*8 + 0x10] */ r_ebx = R32((u32)(r_edx+r_ebx*8+0x10u));
    /* 00828ef7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828ef9: je 0x8290cb */ if (fZ) goto L_008290cb;
L_00828eff:; BB(0x00828eff);
    /* 00828eff: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00828f02: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00828f05: jb 0x828eba */ if (fC) goto L_00828eba;
L_00828f07:; BB(0x00828f07);
    /* 00828f07: mov edx, 0x40 */ r_edx = 0x40u;
    /* 00828f0c: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
L_00828f10:; BB(0x00828f10);
    /* 00828f10: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00828f14: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00828f17: jae 0x828e76 */ if (!fC) goto L_00828e76;
L_00828f1d:; BB(0x00828f1d);
    /* 00828f1d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828f1f: jne 0x828f2e */ if (!fZ) goto L_00828f2e;
L_00828f21:; BB(0x00828f21);
    /* 00828f21: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00828f23: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00828f27: mov esi, 0xacb39c */ r_esi = 0xacb39cu;
    /* 00828f2c: jmp 0x828f39 */ goto L_00828f39;
L_00828f2e:; BB(0x00828f2e);
    /* 00828f2e: mov eax, ebp */ r_eax = r_ebp;
    /* 00828f30: call 0x829130 */ r_esp -= 4; W32(r_esp, 0x828f35u); f_00829130();
    /* 00828f35: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
L_00828f39:; BB(0x00828f39);
    /* 00828f39: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00828f3d: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00828f41: call 0x829164 */ r_esp -= 4; W32(r_esp, 0x828f46u); f_00829164();
    /* 00828f46: mov ebx, eax */ r_ebx = r_eax;
    /* 00828f48: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828f4a: je 0x8290c1 */ if (fZ) goto L_008290c1;
L_00828f50:; BB(0x00828f50);
    /* 00828f50: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00828f54: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00828f5c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828f5f: jne 0x828fc3 */ if (!fZ) goto L_00828fc3;
L_00828f61:; BB(0x00828f61);
    /* 00828f61: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00828f65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00828f66: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00828f68: push 0x99f84c */ { u32 v = 0x99f84cu; r_esp -= 4; W32(r_esp, v); }
    /* 00828f6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00828f6e: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x828f70u); call_ind(t); }
    /* 00828f70: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00828f74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828f76: je 0x828fc3 */ if (fZ) goto L_00828fc3;
L_00828f78:; BB(0x00828f78);
    /* 00828f78: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00828f7a: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00828f7d: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00828f80: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00828f83: fchs  */ ST(0) = -ST(0);
    /* 00828f85: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00828f89: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 00828f91: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00828f94: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00828f96: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00828f9a: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00828f9e: call dword ptr [edi + 0x4c] */ { u32 t = R32((u32)(r_edi+0x4cu)); r_esp -= 4; W32(r_esp, 0x828fa1u); call_ind(t); }
    /* 00828fa1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00828fa5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00828fa7: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00828fa9: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00828fae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00828faf: call dword ptr [ecx + 0x44] */ { u32 t = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, 0x828fb2u); call_ind(t); }
    /* 00828fb2: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00828fb6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00828fb8: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00828fba: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00828fbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00828fc0: call dword ptr [ecx + 0x40] */ { u32 t = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, 0x828fc3u); call_ind(t); }
L_00828fc3:; BB(0x00828fc3);
    /* 00828fc3: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00828fc7: mov edx, dword ptr [0xacb388] */ r_edx = R32((u32)(0xacb388u));
    /* 00828fcd: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00828fd1: lea edi, [edi + edi*8] */ r_edi = (u32)(r_edi+r_edi*8);
    /* 00828fd4: test ebp, 0x80000000 */ {  u32 a = r_ebp; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00828fda: jne 0x828fe3 */ if (!fZ) goto L_00828fe3;
L_00828fdc:; BB(0x00828fdc);
    /* 00828fdc: mov edx, 0xfffffe0c */ r_edx = 0xfffffe0cu;
    /* 00828fe1: jmp 0x829030 */ goto L_00829030;
L_00828fe3:; BB(0x00828fe3);
    /* 00828fe3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x828fe8u); f_008587a5();
    /* 00828fe8: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00828fec: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00828ff0: fdiv dword ptr [0x989fac] */ ST(0) = ST(0) / R_F32((u32)(0x989facu));
    /* 00828ff6: fadd dword ptr [0x989fb0] */ ST(0) = ST(0) + R_F32((u32)(0x989fb0u));
    /* 00828ffc: fmul qword ptr [0x989f60] */ ST(0) = ST(0) * R_F64((u32)(0x989f60u));
    /* 00829002: fadd qword ptr [0x989f68] */ ST(0) = ST(0) + R_F64((u32)(0x989f68u));
    /* 00829008: fmul qword ptr [0x989f58] */ ST(0) = ST(0) * R_F64((u32)(0x989f58u));
    /* 0082900e: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00829012: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00829017: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082901c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00829020: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00829024: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00829028: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0082902c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
L_00829030:; BB(0x00829030);
    /* 00829030: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00829034: mov dword ptr [ecx + edi*8 + 0x34], edx */ W32((u32)(r_ecx+r_edi*8+0x34u), r_edx);
    /* 00829038: push 0xffffd8f0 */ { u32 v = 0xffffd8f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082903d: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082903f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00829040: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x829043u); call_ind(t); }
    /* 00829043: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00829045: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00829047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00829048: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00829049: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082904a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082904b: call dword ptr [ecx + 0x30] */ { u32 t = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, 0x82904eu); call_ind(t); }
    /* 0082904e: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00829052: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00829053: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00829054: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00829056: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x829059u); call_ind(t); }
    /* 00829059: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0082905d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00829061: mov dword ptr [edx + edi*8 + 0x10], ebx */ W32((u32)(r_edx+r_edi*8+0x10u), r_ebx);
    /* 00829065: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 00829069: mov dword ptr [edx + edi*8 + 0x14], ecx */ W32((u32)(r_edx+r_edi*8+0x14u), r_ecx);
    /* 0082906d: mov dword ptr [edx + edi*8 + 8], ebx */ W32((u32)(r_edx+r_edi*8+0x8u), r_ebx);
    /* 00829071: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00829073: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00829078: mov dword ptr [edx + edi*8 + 0x18], ecx */ W32((u32)(r_edx+r_edi*8+0x18u), r_ecx);
    /* 0082907c: mov dword ptr [edx + edi*8 + 0x1c], eax */ W32((u32)(r_edx+r_edi*8+0x1cu), r_eax);
    /* 00829080: mov dword ptr [edx + edi*8 + 4], ecx */ W32((u32)(r_edx+r_edi*8+0x4u), r_ecx);
    /* 00829084: mov dword ptr [edx + edi*8 + 0xc], ebp */ W32((u32)(r_edx+r_edi*8+0xcu), r_ebp);
    /* 00829088: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 0082908c: mov dword ptr [edx + edi*8 + 0x20], eax */ W32((u32)(r_edx+r_edi*8+0x20u), r_eax);
    /* 00829090: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00829093: mov dword ptr [edx + edi*8 + 0x28], esi */ W32((u32)(r_edx+r_edi*8+0x28u), r_esi);
    /* 00829097: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0082909b: mov dword ptr [edx + edi*8 + 0x24], ebp */ W32((u32)(r_edx+r_edi*8+0x24u), r_ebp);
    /* 0082909f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008290a1: mov dword ptr [edx + edi*8 + 0x2c], esi */ W32((u32)(r_edx+r_edi*8+0x2cu), r_esi);
    /* 008290a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008290a7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008290a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008290ab: add eax, dword ptr [0xacb3a8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xacb3a8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008290b1: mov dword ptr [edx + edi*8 + 0x30], eax */ W32((u32)(r_edx+r_edi*8+0x30u), r_eax);
    /* 008290b5: mov eax, dword ptr [edx + edi*8 + 0x34] */ r_eax = R32((u32)(r_edx+r_edi*8+0x34u));
    /* 008290b9: mov dword ptr [edx + edi*8 + 0x38], eax */ W32((u32)(r_edx+r_edi*8+0x38u), r_eax);
    /* 008290bd: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
L_008290c1:; BB(0x008290c1);
    /* 008290c1: mov eax, edi */ r_eax = r_edi;
    /* 008290c3: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008290c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008290c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008290c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008290c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008290ca: ret  */ FN_RET(0x00828e4c); r_esp += 4; return;
L_008290cb:; BB(0x008290cb);
    /* 008290cb: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 008290cf: jmp 0x828f10 */ goto L_00828f10;
L_008290d4:; BB(0x008290d4);
    /* 008290d4: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 008290d8: jmp 0x828f10 */ goto L_00828f10;
L_008290dd:; BB(0x008290dd);
    /* 008290dd: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 008290e1: jmp 0x828f10 */ goto L_00828f10;
L_008290e6:; BB(0x008290e6);
    /* 008290e6: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 008290ea: jmp 0x828f10 */ goto L_00828f10;
}

