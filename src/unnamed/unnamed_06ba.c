#include "protos.h"

void f_006ba080(void) /* sub_6BA080 */
{
    FN_ENTER(0x006ba080);
    /* 006ba080: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ba081: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ba082: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ba083: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba084: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ba087: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba08c: call 0x80f780 */ r_esp -= 4; W32(r_esp, 0x6ba091u); f_0080f780();
    /* 006ba091: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ba092: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ba094: mov esi, eax */ r_esi = r_eax;
L_006ba096:; BB(0x006ba096);
    /* 006ba096: movsx edx, word ptr [esi*2 + 0xa95628] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi*2+0xa95628u));
    /* 006ba09e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ba0a0: je 0x6ba0da */ if (fZ) goto L_006ba0da;
L_006ba0a2:; BB(0x006ba0a2);
    /* 006ba0a2: jle 0x6ba0bb */ if ((fZ||fS!=fO)) goto L_006ba0bb;
L_006ba0a4:; BB(0x006ba0a4);
    /* 006ba0a4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ba0a7: jg 0x6ba0bb */ if ((!fZ&&fS==fO)) goto L_006ba0bb;
L_006ba0a9:; BB(0x006ba0a9);
    /* 006ba0a9: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006ba0ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba0ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ba0ae: call 0x80bf28 */ r_esp -= 4; W32(r_esp, 0x6ba0b3u); f_0080bf28();
    /* 006ba0b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ba0b6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba0b9: je 0x6ba106 */ if (fZ) goto L_006ba106;
L_006ba0bb:; BB(0x006ba0bb);
    /* 006ba0bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ba0be: cmp esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ba0c1: jl 0x6ba096 */ if ((fS!=fO)) goto L_006ba096;
L_006ba0c3:; BB(0x006ba0c3);
    /* 006ba0c3: call 0x80ed90 */ r_esp -= 4; W32(r_esp, 0x6ba0c8u); f_0080ed90();
    /* 006ba0c8: call 0x80ed98 */ r_esp -= 4; W32(r_esp, 0x6ba0cdu); f_0080ed98();
    /* 006ba0cd: call 0x80fa98 */ r_esp -= 4; W32(r_esp, 0x6ba0d2u); f_0080fa98();
    /* 006ba0d2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ba0d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ba0d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ba0d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ba0d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ba0d9: ret  */ FN_RET(0x006ba080); r_esp += 4; return;
L_006ba0da:; BB(0x006ba0da);
    /* 006ba0da: mov eax, dword ptr [0xa9564c] */ r_eax = R32((u32)(0xa9564cu));
    /* 006ba0df: mov ebx, eax */ r_ebx = r_eax;
    /* 006ba0e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba0e3: jne 0x6ba0ec */ if (!fZ) goto L_006ba0ec;
L_006ba0e5:; BB(0x006ba0e5);
    /* 006ba0e5: jmp 0x6ba17e */ goto L_006ba17e;
L_006ba0ea:; BB(0x006ba0ea);
    /* 006ba0ea: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006ba0ec:; BB(0x006ba0ec);
    /* 006ba0ec: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006ba0ee: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 006ba0f1: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 006ba0f4: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 006ba0f7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba0fa: je 0x6ba267 */ if (fZ) goto L_006ba267;
L_006ba100:; BB(0x006ba100);
    /* 006ba100: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba102: je 0x6ba17e */ if (fZ) goto L_006ba17e;
L_006ba104:; BB(0x006ba104);
    /* 006ba104: jmp 0x6ba0ea */ goto L_006ba0ea;
L_006ba106:; BB(0x006ba106);
    /* 006ba106: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 006ba109: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ba10b: jl 0x6ba0bb */ if ((fS!=fO)) goto L_006ba0bb;
L_006ba10d:; BB(0x006ba10d);
    /* 006ba10d: push 0x969b98 */ { u32 v = 0x969b98u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba112: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba117u); f_0061cdb0();
    /* 006ba117: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba11b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba11f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba123: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ba124: call 0x80f304 */ r_esp -= 4; W32(r_esp, 0x6ba129u); f_0080f304();
    /* 006ba129: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ba12c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba131u); f_0061cdb0();
    /* 006ba131: push 0x969bac */ { u32 v = 0x969bacu; r_esp -= 4; W32(r_esp, v); }
    /* 006ba136: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba13bu); f_0061cdb0();
    /* 006ba13b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba13f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba143: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba147: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ba148: call 0x80f52c */ r_esp -= 4; W32(r_esp, 0x6ba14du); f_0080f52c();
    /* 006ba14d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ba150: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba155u); f_0061cdb0();
    /* 006ba155: push 0x969bc0 */ { u32 v = 0x969bc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba15a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba15fu); f_0061cdb0();
    /* 006ba15f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba163: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba167: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba16b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ba16c: call 0x80cf78 */ r_esp -= 4; W32(r_esp, 0x6ba171u); f_0080cf78();
    /* 006ba171: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ba174: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba179u); f_0061cdb0();
    /* 006ba179: jmp 0x6ba0bb */ goto L_006ba0bb;
L_006ba17e:; BB(0x006ba17e);
    /* 006ba17e: mov ebx, eax */ r_ebx = r_eax;
    /* 006ba180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba182: jne 0x6ba188 */ if (!fZ) goto L_006ba188;
L_006ba184:; BB(0x006ba184);
    /* 006ba184: jmp 0x6ba19c */ goto L_006ba19c;
L_006ba186:; BB(0x006ba186);
    /* 006ba186: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006ba188:; BB(0x006ba188);
    /* 006ba188: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 006ba18a: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 006ba18d: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 006ba190: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 006ba193: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba196: je 0x6ba1d8 */ if (fZ) goto L_006ba1d8;
L_006ba198:; BB(0x006ba198);
    /* 006ba198: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba19a: jne 0x6ba186 */ if (!fZ) goto L_006ba186;
L_006ba19c:; BB(0x006ba19c);
    /* 006ba19c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba19e: jne 0x6ba1a7 */ if (!fZ) goto L_006ba1a7;
L_006ba1a0:; BB(0x006ba1a0);
    /* 006ba1a0: jmp 0x6ba0bb */ goto L_006ba0bb;
L_006ba1a5:; BB(0x006ba1a5);
    /* 006ba1a5: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006ba1a7:; BB(0x006ba1a7);
    /* 006ba1a7: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006ba1a9: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 006ba1ac: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006ba1af: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006ba1b2: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba1b5: je 0x6ba1c1 */ if (fZ) goto L_006ba1c1;
L_006ba1b7:; BB(0x006ba1b7);
    /* 006ba1b7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba1b9: je 0x6ba0bb */ if (fZ) goto L_006ba0bb;
L_006ba1bf:; BB(0x006ba1bf);
    /* 006ba1bf: jmp 0x6ba1a5 */ goto L_006ba1a5;
L_006ba1c1:; BB(0x006ba1c1);
    /* 006ba1c1: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba1c3: jne 0x6ba1a5 */ if (!fZ) goto L_006ba1a5;
L_006ba1c5:; BB(0x006ba1c5);
    /* 006ba1c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba1c6: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba1c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba1ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba1cb: call 0x80d1e8 */ r_esp -= 4; W32(r_esp, 0x6ba1d0u); f_0080d1e8();
    /* 006ba1d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ba1d3: jmp 0x6ba0bb */ goto L_006ba0bb;
L_006ba1d8:; BB(0x006ba1d8);
    /* 006ba1d8: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba1da: jne 0x6ba186 */ if (!fZ) goto L_006ba186;
L_006ba1dc:; BB(0x006ba1dc);
    /* 006ba1dc: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006ba1e0: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 006ba1e5: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ba1e8: mov edi, ebx */ r_edi = r_ebx;
    /* 006ba1ea: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006ba1ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ba1ee: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006ba1f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ba1f3: ja 0x6ba201 */ if ((!fC&&!fZ)) goto L_006ba201;
L_006ba1f5:; BB(0x006ba1f5);
    /* 006ba1f5: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006ba1f9: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 006ba1fd: mov ebp, edx */ r_ebp = r_edx;
    /* 006ba1ff: jmp 0x6ba240 */ goto L_006ba240;
L_006ba201:; BB(0x006ba201);
    /* 006ba201: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006ba205: mov ebp, edx */ r_ebp = r_edx;
    /* 006ba207: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006ba20b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006ba20f: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 006ba213: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 006ba217: mov edi, eax */ r_edi = r_eax;
    /* 006ba219: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 006ba21d: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
L_006ba221:; BB(0x006ba221);
    /* 006ba221: mov ecx, esi */ r_ecx = r_esi;
    /* 006ba223: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba228u); f_0061cdb0();
    /* 006ba228: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ba22a: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 006ba22e: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ba231: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ba234: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ba236: jb 0x6ba221 */ if (fC) goto L_006ba221;
L_006ba238:; BB(0x006ba238);
    /* 006ba238: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006ba23c: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_006ba240:; BB(0x006ba240);
    /* 006ba240: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ba241: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x6ba246u); f_0080c2dc();
    /* 006ba246: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba247: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ba248: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba249: call 0x80ee4c */ r_esp -= 4; W32(r_esp, 0x6ba24eu); f_0080ee4c();
    /* 006ba24e: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 006ba252: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba253: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba254: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ba255: call 0x810030 */ r_esp -= 4; W32(r_esp, 0x6ba25au); f_00810030();
    /* 006ba25a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ba25d: mov eax, dword ptr [0xa9564c] */ r_eax = R32((u32)(0xa9564cu));
    /* 006ba262: jmp 0x6ba19c */ goto L_006ba19c;
L_006ba267:; BB(0x006ba267);
    /* 006ba267: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba269: jne 0x6ba0ea */ if (!fZ) goto L_006ba0ea;
L_006ba26f:; BB(0x006ba26f);
    /* 006ba26f: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ba272: mov edi, ebx */ r_edi = r_ebx;
    /* 006ba274: mov eax, 0xf0f0f0f1 */ r_eax = 0xf0f0f0f1u;
    /* 006ba279: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006ba27b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ba27d: shr edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006ba280: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ba282: ja 0x6ba28e */ if ((!fC&&!fZ)) goto L_006ba28e;
L_006ba284:; BB(0x006ba284);
    /* 006ba284: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006ba288: mov edi, ebp */ r_edi = r_ebp;
    /* 006ba28a: mov ebp, edx */ r_ebp = r_edx;
    /* 006ba28c: jmp 0x6ba2cb */ goto L_006ba2cb;
L_006ba28e:; BB(0x006ba28e);
    /* 006ba28e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006ba292: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 006ba296: mov edi, ebp */ r_edi = r_ebp;
    /* 006ba298: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006ba29c: mov ebp, edx */ r_ebp = r_edx;
    /* 006ba29e: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006ba2a2: mov edi, eax */ r_edi = r_eax;
    /* 006ba2a4: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 006ba2a8: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_006ba2ac:; BB(0x006ba2ac);
    /* 006ba2ac: mov ecx, esi */ r_ecx = r_esi;
    /* 006ba2ae: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba2b3u); f_0061cdb0();
    /* 006ba2b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ba2b5: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 006ba2b9: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ba2bc: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ba2bf: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ba2c1: jb 0x6ba2ac */ if (fC) goto L_006ba2ac;
L_006ba2c3:; BB(0x006ba2c3);
    /* 006ba2c3: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 006ba2c7: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_006ba2cb:; BB(0x006ba2cb);
    /* 006ba2cb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ba2cc: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x6ba2d1u); f_0080c2dc();
    /* 006ba2d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba2d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ba2d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba2d4: call 0x80eda0 */ r_esp -= 4; W32(r_esp, 0x6ba2d9u); f_0080eda0();
    /* 006ba2d9: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006ba2dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba2de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba2df: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ba2e0: call 0x80fef8 */ r_esp -= 4; W32(r_esp, 0x6ba2e5u); f_0080fef8();
    /* 006ba2e5: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ba2e8: mov eax, dword ptr [0xa9564c] */ r_eax = R32((u32)(0xa9564cu));
    /* 006ba2ed: jmp 0x6ba17e */ goto L_006ba17e;
}

void f_006ba2f8(void) /* sub_6BA2F8 */
{
    FN_ENTER(0x006ba2f8);
    /* 006ba2f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba2f9: mov ebx, eax */ r_ebx = r_eax;
    /* 006ba2fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba2fc: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x6ba301u); f_005b9328();
    /* 006ba301: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ba302: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ba304: jl 0x6ba3e3 */ if ((fS!=fO)) goto L_006ba3e3;
L_006ba30a:; BB(0x006ba30a);
    /* 006ba30a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba30b: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6ba310u); f_0082e940();
    /* 006ba310: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ba311: mov dword ptr [0xa9564c], eax */ W32((u32)(0xa9564cu), r_eax);
    /* 006ba316: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ba318: je 0x6ba3e3 */ if (fZ) goto L_006ba3e3;
L_006ba31e:; BB(0x006ba31e);
    /* 006ba31e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba31f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba320: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x6ba325u); f_005b9910();
    /* 006ba325: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ba328: call 0x6ba080 */ r_esp -= 4; W32(r_esp, 0x6ba32du); f_006ba080();
    /* 006ba32d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ba32f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006ba331:; BB(0x006ba331);
    /* 006ba331: mov ebx, dword ptr [0xab02bc] */ r_ebx = R32((u32)(0xab02bcu));
    /* 006ba337: lea edx, [ecx + 0x100] */ r_edx = (u32)(r_ecx+0x100u);
    /* 006ba33d: mov word ptr [ebx + eax*4 + 2], dx */ W16((u32)(r_ebx+r_eax*4+0x2u), (u16)r_edx);
    /* 006ba342: lea edx, [ecx + 0x101] */ r_edx = (u32)(r_ecx+0x101u);
    /* 006ba348: mov ebx, dword ptr [0xab02bc] */ r_ebx = R32((u32)(0xab02bcu));
    /* 006ba34e: mov word ptr [ebx + eax*4 + 6], dx */ W16((u32)(r_ebx+r_eax*4+0x6u), (u16)r_edx);
    /* 006ba353: mov ebx, dword ptr [0xab02bc] */ r_ebx = R32((u32)(0xab02bcu));
    /* 006ba359: lea edx, [ecx + 0x102] */ r_edx = (u32)(r_ecx+0x102u);
    /* 006ba35f: mov word ptr [ebx + eax*4 + 0xa], dx */ W16((u32)(r_ebx+r_eax*4+0xau), (u16)r_edx);
    /* 006ba364: mov ebx, dword ptr [0xab02bc] */ r_ebx = R32((u32)(0xab02bcu));
    /* 006ba36a: lea edx, [ecx + 0x103] */ r_edx = (u32)(r_ecx+0x103u);
    /* 006ba370: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ba373: mov word ptr [ebx + eax*4 + 0xe], dx */ W16((u32)(r_ebx+r_eax*4+0xeu), (u16)r_edx);
    /* 006ba378: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba37b: cmp eax, 0xba0 */ {  u32 a = r_eax; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ba380: jl 0x6ba331 */ if ((fS!=fO)) goto L_006ba331;
L_006ba382:; BB(0x006ba382);
    /* 006ba382: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 006ba387: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 006ba38a: add eax, 0x87c4 */ {  u32 a = r_eax; u32 b = 0x87c4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006ba38f:; BB(0x006ba38f);
    /* 006ba38f: lea ebx, [ecx + 0x100] */ r_ebx = (u32)(r_ecx+0x100u);
    /* 006ba395: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 006ba398: lea ebx, [ecx + 0x101] */ r_ebx = (u32)(r_ecx+0x101u);
    /* 006ba39e: mov word ptr [edx + 0xc], bx */ W16((u32)(r_edx+0xcu), (u16)r_ebx);
    /* 006ba3a2: lea ebx, [ecx + 0x102] */ r_ebx = (u32)(r_ecx+0x102u);
    /* 006ba3a8: mov word ptr [edx + 0x18], bx */ W16((u32)(r_edx+0x18u), (u16)r_ebx);
    /* 006ba3ac: lea ebx, [ecx + 0x103] */ r_ebx = (u32)(r_ecx+0x103u);
    /* 006ba3b2: mov word ptr [edx + 0x24], bx */ W16((u32)(r_edx+0x24u), (u16)r_ebx);
    /* 006ba3b6: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ba3b9: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba3bc: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006ba3be: ja 0x6ba38f */ if ((!fC&&!fZ)) goto L_006ba38f;
L_006ba3c0:; BB(0x006ba3c0);
    /* 006ba3c0: push dword ptr [0xa9564c] */ { u32 v = R32((u32)(0xa9564cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba3c6: mov eax, 1 */ r_eax = 0x1u;
    /* 006ba3cb: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
    /* 006ba3d1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6ba3d6u); f_0082e960();
    /* 006ba3d6: mov dword ptr [0xa9564c], 0 */ W32((u32)(0xa9564cu), 0x0u);
    /* 006ba3e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ba3e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ba3e2: ret  */ FN_RET(0x006ba2f8); r_esp += 4; return;
L_006ba3e3:; BB(0x006ba3e3);
    /* 006ba3e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ba3e4: ret  */ FN_RET(0x006ba2f8); r_esp += 4; return;
}

void f_006ba3e8(void) /* sub_6BA3E8 */
{
    FN_ENTER(0x006ba3e8);
    /* 006ba3e8: mov edx, 0xa95628 */ r_edx = 0xa95628u;
    /* 006ba3ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ba3ef: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006ba3f1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006ba3f4: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006ba3f7: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006ba3fa: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006ba3fd: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006ba400: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006ba403: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006ba406: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006ba409: ret  */ FN_RET(0x006ba3e8); r_esp += 4; return;
}

void f_006ba40c(void) /* sub_6BA40C */
{
    FN_ENTER(0x006ba40c);
    /* 006ba40c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ba40d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ba40e: movsx edi, word ptr [esp + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 006ba413: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006ba417: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ba41a: jg 0x6ba453 */ if ((!fZ&&fS==fO)) goto L_006ba453;
L_006ba41c:; BB(0x006ba41c);
    /* 006ba41c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba41e: je 0x6ba456 */ if (fZ) goto L_006ba456;
L_006ba420:; BB(0x006ba420);
    /* 006ba420: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba423: je 0x6ba43a */ if (fZ) goto L_006ba43a;
L_006ba425:; BB(0x006ba425);
    /* 006ba425: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ba428: je 0x6ba42f */ if (fZ) goto L_006ba42f;
L_006ba42a:; BB(0x006ba42a);
    /* 006ba42a: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ba42d: jne 0x6ba453 */ if (!fZ) goto L_006ba453;
L_006ba42f:; BB(0x006ba42f);
    /* 006ba42f: mov word ptr [ebp*2 + 0xa95628], di */ W16((u32)(r_ebp*2+0xa95628u), (u16)r_edi);
    /* 006ba437: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ba438: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ba439: ret  */ FN_RET(0x006ba40c); r_esp += 4; return;
L_006ba43a:; BB(0x006ba43a);
    /* 006ba43a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba43c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006ba440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba441: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ba442: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ba443: call 0x80c248 */ r_esp -= 4; W32(r_esp, 0x6ba448u); f_0080c248();
    /* 006ba448: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ba44b: mov word ptr [ebp*2 + 0xa95628], di */ W16((u32)(r_ebp*2+0xa95628u), (u16)r_edi);
L_006ba453:; BB(0x006ba453);
    /* 006ba453: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ba454: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ba455: ret  */ FN_RET(0x006ba40c); r_esp += 4; return;
L_006ba456:; BB(0x006ba456);
    /* 006ba456: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba458: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006ba45c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba45d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ba45e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ba45f: call 0x80c248 */ r_esp -= 4; W32(r_esp, 0x6ba464u); f_0080c248();
    /* 006ba464: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ba467: mov word ptr [ebp*2 + 0xa95628], di */ W16((u32)(r_ebp*2+0xa95628u), (u16)r_edi);
    /* 006ba46f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ba470: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ba471: ret  */ FN_RET(0x006ba40c); r_esp += 4; return;
}

void f_006ba474(void) /* sub_6BA474 */
{
    FN_ENTER(0x006ba474);
    /* 006ba474: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ba475: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba476: movsx ebp, word ptr [esp + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 006ba47b: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 006ba47f: cmp ebx, 0x11 */ {  u32 a = r_ebx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ba482: jg 0x6ba4ca */ if ((!fZ&&fS==fO)) goto L_006ba4ca;
L_006ba484:; BB(0x006ba484);
    /* 006ba484: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006ba488: cmp eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ba48b: jg 0x6ba4ca */ if ((!fZ&&fS==fO)) goto L_006ba4ca;
L_006ba48d:; BB(0x006ba48d);
    /* 006ba48d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba48f: je 0x6ba4cd */ if (fZ) goto L_006ba4cd;
L_006ba491:; BB(0x006ba491);
    /* 006ba491: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba494: je 0x6ba4ab */ if (fZ) goto L_006ba4ab;
L_006ba496:; BB(0x006ba496);
    /* 006ba496: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ba499: je 0x6ba4a0 */ if (fZ) goto L_006ba4a0;
L_006ba49b:; BB(0x006ba49b);
    /* 006ba49b: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ba49e: jne 0x6ba4ca */ if (!fZ) goto L_006ba4ca;
L_006ba4a0:; BB(0x006ba4a0);
    /* 006ba4a0: mov word ptr [ebx*2 + 0xa95628], bp */ W16((u32)(r_ebx*2+0xa95628u), (u16)r_ebp);
    /* 006ba4a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ba4a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ba4aa: ret  */ FN_RET(0x006ba474); r_esp += 4; return;
L_006ba4ab:; BB(0x006ba4ab);
    /* 006ba4ab: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba4af: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006ba4b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba4b4: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 006ba4b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba4b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba4ba: call 0x80c248 */ r_esp -= 4; W32(r_esp, 0x6ba4bfu); f_0080c248();
    /* 006ba4bf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ba4c2: mov word ptr [ebx*2 + 0xa95628], bp */ W16((u32)(r_ebx*2+0xa95628u), (u16)r_ebp);
L_006ba4ca:; BB(0x006ba4ca);
    /* 006ba4ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ba4cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ba4cc: ret  */ FN_RET(0x006ba474); r_esp += 4; return;
L_006ba4cd:; BB(0x006ba4cd);
    /* 006ba4cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba4cf: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006ba4d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba4d4: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 006ba4d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba4d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba4da: call 0x80c248 */ r_esp -= 4; W32(r_esp, 0x6ba4dfu); f_0080c248();
    /* 006ba4df: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ba4e2: mov word ptr [ebx*2 + 0xa95628], bp */ W16((u32)(r_ebx*2+0xa95628u), (u16)r_ebp);
    /* 006ba4ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ba4eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ba4ec: ret  */ FN_RET(0x006ba474); r_esp += 4; return;
}

void f_006ba4f0(void) /* sub_6BA4F0 */
{
    FN_ENTER(0x006ba4f0);
    /* 006ba4f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba4f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ba4f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ba4f5: call 0x6ba514 */ r_esp -= 4; W32(r_esp, 0x6ba4fau); f_006ba514();
    /* 006ba4fa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ba4fe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ba500: jne 0x6ba506 */ if (!fZ) goto L_006ba506;
L_006ba502:; BB(0x006ba502);
    /* 006ba502: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ba503: ret 4 */ FN_RET(0x006ba4f0); r_esp += 8; return;
L_006ba506:; BB(0x006ba506);
    /* 006ba506: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba507: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ba50cu); f_005c2f74();
    /* 006ba50c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ba50d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ba50e: ret 4 */ FN_RET(0x006ba4f0); r_esp += 8; return;
}

void f_006ba514(void) /* sub_6BA514 */
{
    FN_ENTER(0x006ba514);
    /* 006ba514: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ba515: mov ebp, esp */ r_ebp = r_esp;
    /* 006ba517: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ba519: push 0x8ebfdc */ { u32 v = 0x8ebfdcu; r_esp -= 4; W32(r_esp, v); }
    /* 006ba51e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ba524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba525: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ba52c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ba52f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ba532: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ba535: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ba538: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ba53b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ba53e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ba545: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ba548: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ba54b: mov dword ptr [eax], 0xb3ab38 */ W32((u32)(r_eax), 0xb3ab38u);
    /* 006ba551: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba553: je 0x6ba567 */ if (fZ) goto L_006ba567;
L_006ba555:; BB(0x006ba555);
    /* 006ba555: je 0x6ba560 */ if (fZ) goto L_006ba560;
L_006ba557:; BB(0x006ba557);
    /* 006ba557: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba559: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ba55b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6ba55du); call_ind(t); }
    /* 006ba55d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006ba560:; BB(0x006ba560);
    /* 006ba560: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_006ba567:; BB(0x006ba567);
    /* 006ba567: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ba56a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba56c: je 0x6ba580 */ if (fZ) goto L_006ba580;
L_006ba56e:; BB(0x006ba56e);
    /* 006ba56e: je 0x6ba579 */ if (fZ) goto L_006ba579;
L_006ba570:; BB(0x006ba570);
    /* 006ba570: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba572: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ba574: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6ba576u); call_ind(t); }
    /* 006ba576: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006ba579:; BB(0x006ba579);
    /* 006ba579: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ba580:; BB(0x006ba580);
    /* 006ba580: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ba587: mov ecx, eax */ r_ecx = r_eax;
    /* 006ba589: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x6ba58eu); f_004f7078();
    /* 006ba58e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ba591: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ba598: mov esp, ebp */ r_esp = r_ebp;
    /* 006ba59a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ba59b: ret  */ FN_RET(0x006ba514); r_esp += 4; return;
}

void f_006ba59c(void) /* sub_6BA59C */
{
    FN_ENTER(0x006ba59c);
    /* 006ba59c: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006ba5a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ba5a4: je 0x6ba5b3 */ if (fZ) goto L_006ba5b3;
L_006ba5a6:; BB(0x006ba5a6);
    /* 006ba5a6: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006ba5aa: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ba5af: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006ba5b3:; BB(0x006ba5b3);
    /* 006ba5b3: ret  */ FN_RET(0x006ba59c); r_esp += 4; return;
}

void f_006ba5b4(void) /* sub_6BA5B4 */
{
    FN_ENTER(0x006ba5b4);
    /* 006ba5b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ba5b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006ba5b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ba5b9: push 0x8ec02e */ { u32 v = 0x8ec02eu; r_esp -= 4; W32(r_esp, v); }
    /* 006ba5be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ba5c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba5c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ba5cc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ba5cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ba5d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ba5d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ba5d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ba5db: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba5e1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ba5e4: call 0x4f7330 */ r_esp -= 4; W32(r_esp, 0x6ba5e9u); f_004f7330();
    /* 006ba5e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ba5f0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ba5f3: mov dword ptr [edx], 0xb3ab38 */ W32((u32)(r_edx), 0xb3ab38u);
    /* 006ba5f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ba5fb: mov eax, dword ptr [0x9ce4c0] */ r_eax = R32((u32)(0x9ce4c0u));
    /* 006ba600: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006ba603: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba605: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006ba608: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006ba60b: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006ba60e: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006ba611: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ba616u); f_008581c5();
    /* 006ba616: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ba617: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006ba61a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba61c: je 0x6ba724 */ if (fZ) goto L_006ba724;
L_006ba622:; BB(0x006ba622);
    /* 006ba622: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006ba629: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006ba630: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ba633: call 0x4ff798 */ r_esp -= 4; W32(r_esp, 0x6ba638u); f_004ff798();
    /* 006ba638: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ba63b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006ba642:; BB(0x006ba642);
    /* 006ba642: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ba645: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 006ba648: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ba64f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba651: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba655: call 0x4ff7bc */ r_esp -= 4; W32(r_esp, 0x6ba65au); f_004ff7bc();
    /* 006ba65a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006ba661: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba663: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ba668u); f_008581c5();
    /* 006ba668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ba669: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006ba66c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba66e: je 0x6ba71d */ if (fZ) goto L_006ba71d;
L_006ba674:; BB(0x006ba674);
    /* 006ba674: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006ba67b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006ba682: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ba685: call 0x4ff8e8 */ r_esp -= 4; W32(r_esp, 0x6ba68au); f_004ff8e8();
    /* 006ba68a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ba68d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006ba694:; BB(0x006ba694);
    /* 006ba694: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ba697: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 006ba69a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ba6a1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba6a3: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba6a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba6a7: call 0x4ff90c */ r_esp -= 4; W32(r_esp, 0x6ba6acu); f_004ff90c();
    /* 006ba6ac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ba6af: mov dword ptr [ecx + 0x88], 1 */ W32((u32)(r_ecx+0x88u), 0x1u);
    /* 006ba6b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ba6bb: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 006ba6c1: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 006ba6c7: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 006ba6cd: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ba6d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ba6d2: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006ba6d4: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006ba6d7: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006ba6da: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 006ba6dd: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 006ba6e0: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 006ba6e3: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 006ba6e6: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 006ba6e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ba6ec: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006ba6ee: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba6f0: lea edx, [eax + 0x4c] */ r_edx = (u32)(r_eax+0x4cu);
    /* 006ba6f3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba6f5: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ba6f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba6fa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba6ffu); f_0061cdb0();
    /* 006ba6ff: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ba702: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ba705: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 006ba70f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ba712: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ba719: mov esp, ebp */ r_esp = r_ebp;
    /* 006ba71b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ba71c: ret  */ FN_RET(0x006ba5b4); r_esp += 4; return;
L_006ba71d:; BB(0x006ba71d);
    /* 006ba71d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ba71f: jmp 0x6ba694 */ goto L_006ba694;
L_006ba724:; BB(0x006ba724);
    /* 006ba724: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ba726: jmp 0x6ba642 */ goto L_006ba642;
}

void f_006ba72c(void) /* sub_6BA72C */
{
    FN_ENTER(0x006ba72c);
    /* 006ba72c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba72d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ba730: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ba732: call 0x7c0424 */ r_esp -= 4; W32(r_esp, 0x6ba737u); f_007c0424();
    /* 006ba737: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6ba73cu); f_007becd4();
    /* 006ba73c: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 006ba742: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba744: je 0x6baa11 */ if (fZ) goto L_006baa11;
L_006ba74a:; BB(0x006ba74a);
    /* 006ba74a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba74d: je 0x6baa08 */ if (fZ) goto L_006baa08;
L_006ba753:; BB(0x006ba753);
    /* 006ba753: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba756: je 0x6ba9a6 */ if (fZ) goto L_006ba9a6;
L_006ba75c:; BB(0x006ba75c);
    /* 006ba75c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba75f: jne 0x6ba76d */ if (!fZ) goto L_006ba76d;
L_006ba761:; BB(0x006ba761);
    /* 006ba761: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ba763: call 0x6badb4 */ r_esp -= 4; W32(r_esp, 0x6ba768u); f_006badb4();
    /* 006ba768: jmp 0x6ba9ad */ goto L_006ba9ad;
L_006ba76d:; BB(0x006ba76d);
    /* 006ba76d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba770: jne 0x6ba9ad */ if (!fZ) goto L_006ba9ad;
L_006ba776:; BB(0x006ba776);
    /* 006ba776: push 0x969c48 */ { u32 v = 0x969c48u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba77b: push 0x4000a */ { u32 v = 0x4000au; r_esp -= 4; W32(r_esp, v); }
    /* 006ba780: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba785u); f_0061cdb0();
    /* 006ba785: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ba788: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba78e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006ba791: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006ba794: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba796: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba798: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba79a: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006ba7a1: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x6ba7a6u); f_007c1180();
    /* 006ba7a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba7a8: je 0x6ba837 */ if (fZ) goto L_006ba837;
L_006ba7ae:; BB(0x006ba7ae);
    /* 006ba7ae: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba7b0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba7b2: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006ba7b5: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006ba7b8: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba7be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba7c0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba7c2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba7c4: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006ba7cb: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6ba7d0u); f_007c09fc();
    /* 006ba7d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba7d2: je 0x6ba7db */ if (fZ) goto L_006ba7db;
L_006ba7d4:; BB(0x006ba7d4);
    /* 006ba7d4: add dword ptr [0xa95650], -1 */ { u32 ad = (u32)(0xa95650u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006ba7db:; BB(0x006ba7db);
    /* 006ba7db: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba7dd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba7df: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006ba7e2: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006ba7e5: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba7eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba7ed: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba7ef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba7f1: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006ba7f8: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6ba7fdu); f_007c09fc();
    /* 006ba7fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba7ff: je 0x6ba810 */ if (fZ) goto L_006ba810;
L_006ba801:; BB(0x006ba801);
    /* 006ba801: mov eax, dword ptr [0xa95650] */ r_eax = R32((u32)(0xa95650u));
    /* 006ba806: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba809: mov dword ptr [0xa95650], eax */ W32((u32)(0xa95650u), r_eax);
    /* 006ba80e: jmp 0x6ba815 */ goto L_006ba815;
L_006ba810:; BB(0x006ba810);
    /* 006ba810: mov eax, dword ptr [0xa95650] */ r_eax = R32((u32)(0xa95650u));
L_006ba815:; BB(0x006ba815);
    /* 006ba815: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ba817: jge 0x6ba828 */ if ((fS==fO)) goto L_006ba828;
L_006ba819:; BB(0x006ba819);
    /* 006ba819: mov dword ptr [0xa95650], 4 */ W32((u32)(0xa95650u), 0x4u);
    /* 006ba823: mov eax, 4 */ r_eax = 0x4u;
L_006ba828:; BB(0x006ba828);
    /* 006ba828: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ba82b: jle 0x6ba837 */ if ((fZ||fS!=fO)) goto L_006ba837;
L_006ba82d:; BB(0x006ba82d);
    /* 006ba82d: mov dword ptr [0xa95650], 0 */ W32((u32)(0xa95650u), 0x0u);
L_006ba837:; BB(0x006ba837);
    /* 006ba837: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba83d: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006ba840: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006ba843: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba845: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba847: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba849: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006ba850: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x6ba855u); f_007c1100();
    /* 006ba855: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba857: je 0x6ba964 */ if (fZ) goto L_006ba964;
L_006ba85d:; BB(0x006ba85d);
    /* 006ba85d: mov eax, dword ptr [0xa95650] */ r_eax = R32((u32)(0xa95650u));
    /* 006ba862: mov edx, dword ptr [eax*4 + 0x9ce490] */ r_edx = R32((u32)(r_eax*4+0x9ce490u));
    /* 006ba869: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006ba86c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba86e: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 006ba871: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba873: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba879: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ba87c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba87e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba880: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba882: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ba889: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6ba88eu); f_007c09fc();
    /* 006ba88e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba890: je 0x6ba89c */ if (fZ) goto L_006ba89c;
L_006ba892:; BB(0x006ba892);
    /* 006ba892: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ba894: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 006ba897: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ba899: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6ba89cu); call_ind(t); }
L_006ba89c:; BB(0x006ba89c);
    /* 006ba89c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba89e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba8a0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006ba8a3: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006ba8a6: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba8ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba8ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba8b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba8b2: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006ba8b9: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6ba8beu); f_007c09fc();
    /* 006ba8be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba8c0: je 0x6ba8cc */ if (fZ) goto L_006ba8cc;
L_006ba8c2:; BB(0x006ba8c2);
    /* 006ba8c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba8c4: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 006ba8c7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ba8c9: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6ba8ccu); call_ind(t); }
L_006ba8cc:; BB(0x006ba8cc);
    /* 006ba8cc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba8ce: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba8d0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006ba8d3: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006ba8d6: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba8dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba8de: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba8e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba8e2: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006ba8e9: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6ba8eeu); f_007c09fc();
    /* 006ba8ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba8f0: je 0x6ba8fc */ if (fZ) goto L_006ba8fc;
L_006ba8f2:; BB(0x006ba8f2);
    /* 006ba8f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba8f4: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 006ba8f7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ba8f9: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6ba8fcu); call_ind(t); }
L_006ba8fc:; BB(0x006ba8fc);
    /* 006ba8fc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba8fe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba900: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006ba903: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006ba906: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba90c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba90e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba910: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba912: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006ba919: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6ba91eu); f_007c09fc();
    /* 006ba91e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba920: je 0x6ba92c */ if (fZ) goto L_006ba92c;
L_006ba922:; BB(0x006ba922);
    /* 006ba922: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ba924: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 006ba927: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ba929: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6ba92cu); call_ind(t); }
L_006ba92c:; BB(0x006ba92c);
    /* 006ba92c: push 0x969c34 */ { u32 v = 0x969c34u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba931: push 0x4001c */ { u32 v = 0x4001cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ba936: mov edx, dword ptr [0xa95650] */ r_edx = R32((u32)(0xa95650u));
    /* 006ba93c: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 006ba93f: mov dword ptr [edx*4 + 0x9ce490], eax */ W32((u32)(r_edx*4+0x9ce490u), r_eax);
    /* 006ba946: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba94bu); f_0061cdb0();
    /* 006ba94b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ba94e: push 0xff00ffff */ { u32 v = 0xff00ffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ba953: push 0xfff0f0f0 */ { u32 v = 0xfff0f0f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba958: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 006ba95b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ba95d: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ba95f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba961: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6ba964u); call_ind(t); }
L_006ba964:; BB(0x006ba964);
    /* 006ba964: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006ba967: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 006ba96b: mov edx, 0xc */ r_edx = 0xcu;
    /* 006ba970: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ba972: mov ebp, eax */ r_ebp = r_eax;
    /* 006ba974: mov edi, edx */ r_edi = r_edx;
L_006ba976:; BB(0x006ba976);
    /* 006ba976: push dword ptr [ebp + 0x9ce490] */ { u32 v = R32((u32)(r_ebp+0x9ce490u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba97c: mov ecx, edi */ r_ecx = r_edi;
    /* 006ba97e: or ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006ba984: push 0x969c54 */ { u32 v = 0x969c54u; r_esp -= 4; W32(r_esp, v); }
    /* 006ba989: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ba98a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ba98fu); f_0061cdb0();
    /* 006ba98f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ba992: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ba995: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ba998: cmp ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ba99b: jl 0x6ba976 */ if ((fS!=fO)) goto L_006ba976;
L_006ba99d:; BB(0x006ba99d);
    /* 006ba99d: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006ba9a0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 006ba9a4: jmp 0x6ba9ad */ goto L_006ba9ad;
L_006ba9a6:; BB(0x006ba9a6);
    /* 006ba9a6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ba9a8: call 0x6baa1c */ r_esp -= 4; W32(r_esp, 0x6ba9adu); f_006baa1c();
L_006ba9ad:; BB(0x006ba9ad);
    /* 006ba9ad: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ba9b3: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006ba9b6: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006ba9b9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba9bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba9bd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ba9bf: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006ba9c6: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ba9cbu); f_007c1160();
    /* 006ba9cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ba9cd: je 0x6ba9f7 */ if (fZ) goto L_006ba9f7;
L_006ba9cf:; BB(0x006ba9cf);
    /* 006ba9cf: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006ba9d4: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 006ba9da: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ba9dd: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006ba9df: mov eax, ecx */ r_eax = r_ecx;
    /* 006ba9e1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006ba9e4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006ba9e6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006ba9e8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006ba9eb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba9ed: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ba9ef: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006ba9f1: mov dword ptr [ebx + 0x84], ecx */ W32((u32)(r_ebx+0x84u), r_ecx);
L_006ba9f7:; BB(0x006ba9f7);
    /* 006ba9f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ba9f9: call 0x6bb0ac */ r_esp -= 4; W32(r_esp, 0x6ba9feu); f_006bb0ac();
    /* 006ba9fe: call 0x7c0368 */ r_esp -= 4; W32(r_esp, 0x6baa03u); f_007c0368();
    /* 006baa03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006baa06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006baa07: ret  */ FN_RET(0x006ba72c); r_esp += 4; return;
L_006baa08:; BB(0x006baa08);
    /* 006baa08: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006baa0a: call 0x6bab34 */ r_esp -= 4; W32(r_esp, 0x6baa0fu); f_006bab34();
    /* 006baa0f: jmp 0x6ba9ad */ goto L_006ba9ad;
L_006baa11:; BB(0x006baa11);
    /* 006baa11: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006baa13: call 0x6bac60 */ r_esp -= 4; W32(r_esp, 0x6baa18u); f_006bac60();
    /* 006baa18: jmp 0x6ba9ad */ goto L_006ba9ad;
}

void f_006baa1c(void) /* sub_6BAA1C */
{
    FN_ENTER(0x006baa1c);
    /* 006baa1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006baa1d: mov ebp, esp */ r_ebp = r_esp;
    /* 006baa1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006baa21: push 0x8ec054 */ { u32 v = 0x8ec054u; r_esp -= 4; W32(r_esp, v); }
    /* 006baa26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006baa2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006baa2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006baa34: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006baa37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006baa3a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006baa3d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006baa40: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006baa43: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006baa46: push 0x969c20 */ { u32 v = 0x969c20u; r_esp -= 4; W32(r_esp, v); }
    /* 006baa4b: push 0x4000a */ { u32 v = 0x4000au; r_esp -= 4; W32(r_esp, v); }
    /* 006baa50: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6baa55u); f_0061cdb0();
    /* 006baa55: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006baa58: lea edx, [eax + 0x4c] */ r_edx = (u32)(r_eax+0x4cu);
    /* 006baa5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006baa5c: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x6baa61u); f_006a6f78();
    /* 006baa61: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006baa64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006baa66: jle 0x6bab1f */ if ((fZ||fS!=fO)) goto L_006bab1f;
L_006baa6c:; BB(0x006baa6c);
    /* 006baa6c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006baa6f: lea eax, [edx + 0x64] */ r_eax = (u32)(r_edx+0x64u);
    /* 006baa72: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 006baa78: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006baa7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006baa7d: je 0x6baa99 */ if (fZ) goto L_006baa99;
L_006baa7f:; BB(0x006baa7f);
    /* 006baa7f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006baa83: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006baa88: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006baa8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006baa8f: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
L_006baa99:; BB(0x006baa99);
    /* 006baa99: call 0x7b39c8 */ r_esp -= 4; W32(r_esp, 0x6baa9eu); f_007b39c8();
    /* 006baa9e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006baaa5: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006baaaa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6baaafu); f_005caba4();
    /* 006baaaf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006baab2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006baab5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006baab8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006baaba: je 0x6bab2d */ if (fZ) goto L_006bab2d;
L_006baabc:; BB(0x006baabc);
    /* 006baabc: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006baac3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006baaca: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006baacd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006baad0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006baad2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006baad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006baad5: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006baadb: call 0x6bbc24 */ r_esp -= 4; W32(r_esp, 0x6baae0u); f_006bbc24();
    /* 006baae0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006baae7:; BB(0x006baae7);
    /* 006baae7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006baaea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006baaed: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 006baaf3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006baafa: mov ecx, eax */ r_ecx = r_eax;
    /* 006baafc: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6bab01u); f_008173b4();
    /* 006bab01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bab03: jne 0x6bab12 */ if (!fZ) goto L_006bab12;
L_006bab05:; BB(0x006bab05);
    /* 006bab05: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bab08: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
L_006bab12:; BB(0x006bab12);
    /* 006bab12: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bab15: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
L_006bab1f:; BB(0x006bab1f);
    /* 006bab1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bab22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bab29: mov esp, ebp */ r_esp = r_ebp;
    /* 006bab2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bab2c: ret  */ FN_RET(0x006baa1c); r_esp += 4; return;
L_006bab2d:; BB(0x006bab2d);
    /* 006bab2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bab2f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006bab32: jmp 0x6baae7 */ goto L_006baae7;
}

void f_006bab34(void) /* sub_6BAB34 */
{
    FN_ENTER(0x006bab34);
    /* 006bab34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bab35: mov ebp, esp */ r_ebp = r_esp;
    /* 006bab37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bab39: push 0x8ec07c */ { u32 v = 0x8ec07cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bab3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bab44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bab45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bab4c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bab4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bab52: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006bab55: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006bab58: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006bab5b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006bab5e: push 0x969c00 */ { u32 v = 0x969c00u; r_esp -= 4; W32(r_esp, v); }
    /* 006bab63: push 0x4000a */ { u32 v = 0x4000au; r_esp -= 4; W32(r_esp, v); }
    /* 006bab68: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6bab6du); f_0061cdb0();
    /* 006bab6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bab70: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bab76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bab79: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006bab7c: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 006bab7f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bab81: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bab83: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bab85: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 006bab8c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bab91u); f_007c1160();
    /* 006bab91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bab93: je 0x6bac46 */ if (fZ) goto L_006bac46;
L_006bab99:; BB(0x006bab99);
    /* 006bab99: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bab9c: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 006baba2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006baba4: je 0x6babc0 */ if (fZ) goto L_006babc0;
L_006baba6:; BB(0x006baba6);
    /* 006baba6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006babaa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006babaf: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006babb3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006babb6: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
L_006babc0:; BB(0x006babc0);
    /* 006babc0: call 0x7b39c8 */ r_esp -= 4; W32(r_esp, 0x6babc5u); f_007b39c8();
    /* 006babc5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006babcc: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006babd1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6babd6u); f_005caba4();
    /* 006babd6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006babd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006babdc: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006babdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006babe1: je 0x6bac57 */ if (fZ) goto L_006bac57;
L_006babe3:; BB(0x006babe3);
    /* 006babe3: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006babea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006babf1: mov ecx, eax */ r_ecx = r_eax;
    /* 006babf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006babf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006babf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006babf7: push 0x969c10 */ { u32 v = 0x969c10u; r_esp -= 4; W32(r_esp, v); }
    /* 006babfc: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bac02: call 0x6bbc24 */ r_esp -= 4; W32(r_esp, 0x6bac07u); f_006bbc24();
    /* 006bac07: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006bac0e:; BB(0x006bac0e);
    /* 006bac0e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bac11: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bac14: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 006bac1a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006bac21: mov ecx, eax */ r_ecx = r_eax;
    /* 006bac23: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6bac28u); f_008173b4();
    /* 006bac28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bac2a: jne 0x6bac39 */ if (!fZ) goto L_006bac39;
L_006bac2c:; BB(0x006bac2c);
    /* 006bac2c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bac2f: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
L_006bac39:; BB(0x006bac39);
    /* 006bac39: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bac3c: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
L_006bac46:; BB(0x006bac46);
    /* 006bac46: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bac49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bac4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bac53: mov esp, ebp */ r_esp = r_ebp;
    /* 006bac55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bac56: ret  */ FN_RET(0x006bab34); r_esp += 4; return;
L_006bac57:; BB(0x006bac57);
    /* 006bac57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bac59: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006bac5c: jmp 0x6bac0e */ goto L_006bac0e;
}

void f_006bac60(void) /* sub_6BAC60 */
{
    FN_ENTER(0x006bac60);
    /* 006bac60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bac61: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006bac63: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006bac66: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 006bac69: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bac6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bac6c: call 0x4ff7bc */ r_esp -= 4; W32(r_esp, 0x6bac71u); f_004ff7bc();
    /* 006bac71: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006bac73: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006bac75: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006bac78: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006bac7b: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bac81: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bac83: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bac85: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bac87: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006bac8e: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6bac93u); f_007c09fc();
    /* 006bac93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bac95: je 0x6baca1 */ if (fZ) goto L_006baca1;
L_006bac97:; BB(0x006bac97);
    /* 006bac97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bac99: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006bac9c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006bac9e: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6baca1u); call_ind(t); }
L_006baca1:; BB(0x006baca1);
    /* 006baca1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006baca3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006baca5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006baca8: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006bacab: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bacb1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bacb3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bacb5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bacb7: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006bacbe: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6bacc3u); f_007c09fc();
    /* 006bacc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bacc5: je 0x6bacd1 */ if (fZ) goto L_006bacd1;
L_006bacc7:; BB(0x006bacc7);
    /* 006bacc7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bacc9: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006baccc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006bacce: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6bacd1u); call_ind(t); }
L_006bacd1:; BB(0x006bacd1);
    /* 006bacd1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006bacd3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006bacd5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006bacd8: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006bacdb: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bace1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bace3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bace5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bace7: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006bacee: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6bacf3u); f_007c09fc();
    /* 006bacf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bacf5: je 0x6bad01 */ if (fZ) goto L_006bad01;
L_006bacf7:; BB(0x006bacf7);
    /* 006bacf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bacf9: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006bacfc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006bacfe: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6bad01u); call_ind(t); }
L_006bad01:; BB(0x006bad01);
    /* 006bad01: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006bad03: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006bad05: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006bad08: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006bad0b: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bad11: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bad13: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bad15: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bad17: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006bad1e: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6bad23u); f_007c09fc();
    /* 006bad23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bad25: je 0x6bad31 */ if (fZ) goto L_006bad31;
L_006bad27:; BB(0x006bad27);
    /* 006bad27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bad29: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006bad2c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006bad2e: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6bad31u); call_ind(t); }
L_006bad31:; BB(0x006bad31);
    /* 006bad31: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bad37: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 006bad3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bad3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bad3e: jg 0x6bad42 */ if ((!fZ&&fS==fO)) goto L_006bad42;
L_006bad40:; BB(0x006bad40);
    /* 006bad40: mov edx, eax */ r_edx = r_eax;
L_006bad42:; BB(0x006bad42);
    /* 006bad42: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006bad45: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 006bad48: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006bad4b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bad4d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bad4f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bad51: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bad58: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bad5du); f_007c1160();
    /* 006bad5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bad5f: je 0x6bad6a */ if (fZ) goto L_006bad6a;
L_006bad61:; BB(0x006bad61);
    /* 006bad61: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bad64: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6bad69u); f_006bc76c();
    /* 006bad69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006bad6a:; BB(0x006bad6a);
    /* 006bad6a: push 0x969bf4 */ { u32 v = 0x969bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bad6f: push 0x4000a */ { u32 v = 0x4000au; r_esp -= 4; W32(r_esp, v); }
    /* 006bad74: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6bad79u); f_0061cdb0();
    /* 006bad79: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bad7c: push 0xff00ffff */ { u32 v = 0xff00ffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bad81: push 0xfff0f0f0 */ { u32 v = 0xfff0f0f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bad86: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006bad89: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006bad8b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006bad8d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006bad8f: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6bad92u); call_ind(t); }
    /* 006bad92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bad93: ret  */ FN_RET(0x006bac60); r_esp += 4; return;
}

void f_006bad94(void) /* sub_6BAD94 */
{
    FN_ENTER(0x006bad94);
    /* 006bad94: mov dword ptr [0xa95654], 0x3f800000 */ W32((u32)(0xa95654u), 0x3f800000u);
    /* 006bad9e: mov dword ptr [0xa95658], 0x41000000 */ W32((u32)(0xa95658u), 0x41000000u);
    /* 006bada8: mov dword ptr [0xa9565c], 0x3fc00000 */ W32((u32)(0xa9565cu), 0x3fc00000u);
    /* 006badb2: ret  */ FN_RET(0x006bad94); r_esp += 4; return;
}

void f_006badb4(void) /* sub_6BADB4 */
{
    FN_ENTER(0x006badb4);
    /* 006badb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006badb5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006badb8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006badba: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006badbd: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006badc0: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006badc6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006badc8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006badca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006badcc: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006badd3: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x6badd8u); f_007c1180();
    /* 006badd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006badda: jne 0x6bade7 */ if (!fZ) goto L_006bade7;
L_006baddc:; BB(0x006baddc);
    /* 006baddc: mov ecx, dword ptr [ebx + 0x90] */ r_ecx = R32((u32)(r_ebx+0x90u));
    /* 006bade2: jmp 0x6baead */ goto L_006baead;
L_006bade7:; BB(0x006bade7);
    /* 006bade7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006bade9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006badeb: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006badee: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006badf1: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 006badf7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006badf9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006badfb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006badfd: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006bae04: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6bae09u); f_007c09fc();
    /* 006bae09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bae0b: je 0x6bae14 */ if (fZ) goto L_006bae14;
L_006bae0d:; BB(0x006bae0d);
    /* 006bae0d: add dword ptr [ebx + 0x90], -1 */ { u32 ad = (u32)(r_ebx+0x90u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006bae14:; BB(0x006bae14);
    /* 006bae14: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006bae16: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006bae18: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006bae1b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006bae1e: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bae24: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bae26: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bae28: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bae2a: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006bae31: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6bae36u); f_007c09fc();
    /* 006bae36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bae38: je 0x6bae41 */ if (fZ) goto L_006bae41;
L_006bae3a:; BB(0x006bae3a);
    /* 006bae3a: add dword ptr [ebx + 0x90], 1 */ { u32 ad = (u32)(r_ebx+0x90u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006bae41:; BB(0x006bae41);
    /* 006bae41: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006bae43: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006bae45: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006bae48: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006bae4b: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bae51: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bae53: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bae55: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bae57: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006bae5e: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6bae63u); f_007c09fc();
    /* 006bae63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bae65: je 0x6bae76 */ if (fZ) goto L_006bae76;
L_006bae67:; BB(0x006bae67);
    /* 006bae67: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 006bae6d: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bae70: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
L_006bae76:; BB(0x006bae76);
    /* 006bae76: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006bae78: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006bae7a: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006bae7d: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006bae80: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bae86: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bae88: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bae8a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bae8c: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006bae93: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6bae98u); f_007c09fc();
    /* 006bae98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bae9a: je 0x6baea7 */ if (fZ) goto L_006baea7;
L_006bae9c:; BB(0x006bae9c);
    /* 006bae9c: mov ecx, dword ptr [ebx + 0x90] */ r_ecx = R32((u32)(r_ebx+0x90u));
    /* 006baea2: add ecx, -0xf */ {  u32 a = r_ecx; u32 b = 0xfffffff1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006baea5: jmp 0x6baead */ goto L_006baead;
L_006baea7:; BB(0x006baea7);
    /* 006baea7: mov ecx, dword ptr [ebx + 0x90] */ r_ecx = R32((u32)(r_ebx+0x90u));
L_006baead:; BB(0x006baead);
    /* 006baead: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006baeaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006baeb1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006baeb3: mov edx, 0xff */ r_edx = 0xffu;
    /* 006baeb8: jg 0x6baebc */ if ((!fZ&&fS==fO)) goto L_006baebc;
L_006baeba:; BB(0x006baeba);
    /* 006baeba: mov ecx, eax */ r_ecx = r_eax;
L_006baebc:; BB(0x006baebc);
    /* 006baebc: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006baec2: lea eax, [ebx + 0x3c] */ r_eax = (u32)(r_ebx+0x3cu);
    /* 006baec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006baec6: jl 0x6baeca */ if ((fS!=fO)) goto L_006baeca;
L_006baec8:; BB(0x006baec8);
    /* 006baec8: mov ecx, edx */ r_ecx = r_edx;
L_006baeca:; BB(0x006baeca);
    /* 006baeca: mov dword ptr [ebx + 0x90], ecx */ W32((u32)(r_ebx+0x90u), r_ecx);
    /* 006baed0: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 006baed3: call 0x4ff7bc */ r_esp -= 4; W32(r_esp, 0x6baed8u); f_004ff7bc();
    /* 006baed8: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006baede: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006baee1: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006baee4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baee6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baee8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baeea: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006baef1: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x6baef6u); f_007c1100();
    /* 006baef6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006baef8: je 0x6bb011 */ if (fZ) goto L_006bb011;
L_006baefe:; BB(0x006baefe);
    /* 006baefe: push dword ptr [ebx + 0x90] */ { u32 v = R32((u32)(r_ebx+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 006baf04: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006baf0a: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x6baf0fu); f_006bc260();
    /* 006baf0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006baf12: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006baf14: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006baf16: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 006baf1c: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 006baf1f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006baf22: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006baf25: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baf27: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baf29: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baf2b: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006baf32: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6baf37u); f_007c09fc();
    /* 006baf37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006baf39: je 0x6baf45 */ if (fZ) goto L_006baf45;
L_006baf3b:; BB(0x006baf3b);
    /* 006baf3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006baf3d: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 006baf40: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006baf42: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6baf45u); call_ind(t); }
L_006baf45:; BB(0x006baf45);
    /* 006baf45: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006baf47: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006baf49: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006baf4c: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006baf4f: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006baf55: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baf57: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baf59: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baf5b: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006baf62: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6baf67u); f_007c09fc();
    /* 006baf67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006baf69: je 0x6baf75 */ if (fZ) goto L_006baf75;
L_006baf6b:; BB(0x006baf6b);
    /* 006baf6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006baf6d: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 006baf70: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006baf72: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6baf75u); call_ind(t); }
L_006baf75:; BB(0x006baf75);
    /* 006baf75: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006baf77: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006baf79: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006baf7c: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006baf7f: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 006baf85: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baf87: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baf89: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006baf8b: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006baf92: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6baf97u); f_007c09fc();
    /* 006baf97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006baf99: je 0x6bafa5 */ if (fZ) goto L_006bafa5;
L_006baf9b:; BB(0x006baf9b);
    /* 006baf9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006baf9d: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 006bafa0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006bafa2: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6bafa5u); call_ind(t); }
L_006bafa5:; BB(0x006bafa5);
    /* 006bafa5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006bafa7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006bafa9: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006bafac: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006bafaf: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bafb5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bafb7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bafb9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bafbb: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006bafc2: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x6bafc7u); f_007c09fc();
    /* 006bafc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bafc9: je 0x6bafd5 */ if (fZ) goto L_006bafd5;
L_006bafcb:; BB(0x006bafcb);
    /* 006bafcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bafcd: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 006bafd0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006bafd2: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6bafd5u); call_ind(t); }
L_006bafd5:; BB(0x006bafd5);
    /* 006bafd5: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bafd8: push dword ptr [ebx + 0x90] */ { u32 v = R32((u32)(r_ebx+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bafde: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bafe4: call 0x6bc278 */ r_esp -= 4; W32(r_esp, 0x6bafe9u); f_006bc278();
    /* 006bafe9: push 0x969c34 */ { u32 v = 0x969c34u; r_esp -= 4; W32(r_esp, v); }
    /* 006bafee: push 0x4001c */ { u32 v = 0x4001cu; r_esp -= 4; W32(r_esp, v); }
    /* 006baff3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6baff8u); f_0061cdb0();
    /* 006baff8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006baffb: push 0xff00ffff */ { u32 v = 0xff00ffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bb000: push 0xfff0f0f0 */ { u32 v = 0xfff0f0f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb005: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 006bb008: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006bb00a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bb00c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb00e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6bb011u); call_ind(t); }
L_006bb011:; BB(0x006bb011);
    /* 006bb011: mov ecx, dword ptr [ebx + 0x90] */ r_ecx = R32((u32)(r_ebx+0x90u));
    /* 006bb017: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 006bb01c: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006bb01e: mov eax, edx */ r_eax = r_edx;
    /* 006bb020: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bb022: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006bb025: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006bb028: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb02a: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 006bb030: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006bb033: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb035: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb037: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb039: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006bb03b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb03d: lea ebx, [edx + 0xf] */ r_ebx = (u32)(r_edx+0xfu);
    /* 006bb040: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bb046: jle 0x6bb04f */ if ((fZ||fS!=fO)) goto L_006bb04f;
L_006bb048:; BB(0x006bb048);
    /* 006bb048: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 006bb04d: jmp 0x6bb052 */ goto L_006bb052;
L_006bb04f:; BB(0x006bb04f);
    /* 006bb04f: lea ecx, [edx + 0xe] */ r_ecx = (u32)(r_edx+0xeu);
L_006bb052:; BB(0x006bb052);
    /* 006bb052: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bb054: jg 0x6bb0a7 */ if ((!fZ&&fS==fO)) goto L_006bb0a7;
L_006bb056:; BB(0x006bb056);
    /* 006bb056: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006bb05a: mov esi, eax */ r_esi = r_eax;
    /* 006bb05c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006bb060: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006bb063: lea ebx, [eax + 0xa] */ r_ebx = (u32)(r_eax+0xau);
    /* 006bb066: mov edi, edx */ r_edi = r_edx;
    /* 006bb068: mov ebp, ecx */ r_ebp = r_ecx;
L_006bb06a:; BB(0x006bb06a);
    /* 006bb06a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb06b: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bb071: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x6bb076u); f_006bc260();
    /* 006bb076: mov edx, eax */ r_edx = r_eax;
    /* 006bb078: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb079: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb07a: mov eax, ebx */ r_eax = r_ebx;
    /* 006bb07c: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bb081: push 0x969c38 */ { u32 v = 0x969c38u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bb087: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6bb08cu); f_0061cdb0();
    /* 006bb08c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bb08f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006bb092: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bb095: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb098: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bb09a: jle 0x6bb06a */ if ((fZ||fS!=fO)) goto L_006bb06a;
L_006bb09c:; BB(0x006bb09c);
    /* 006bb09c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006bb0a0: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006bb0a4: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006bb0a7:; BB(0x006bb0a7);
    /* 006bb0a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb0aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb0ab: ret  */ FN_RET(0x006badb4); r_esp += 4; return;
}

