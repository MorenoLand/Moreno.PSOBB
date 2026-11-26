#include "protos.h"

void f_00887174(void) /* sub_887174 */
{
    FN_ENTER(0x00887174);
    /* 00887174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00887175: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00887179: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088717b: je 0x887193 */ if (fZ) goto L_00887193;
L_0088717d:; BB(0x0088717d);
    /* 0088717d: push 0x520 */ { u32 v = 0x520u; r_esp -= 4; W32(r_esp, v); }
    /* 00887182: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00887184: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00887185: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88718au); f_0086b688();
    /* 0088718a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088718b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x887190u); f_00858882();
    /* 00887190: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00887193:; BB(0x00887193);
    /* 00887193: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00887194: ret  */ FN_RET(0x00887174); r_esp += 4; return;
}

void f_00887198(void) /* sub_887198 */
{
    FN_ENTER(0x00887198);
    /* 00887198: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00887199: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088719a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088719b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088719c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088719f: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 008871a3: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 008871a7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008871a9: mov edi, dword ptr [ebp + 0x348] */ r_edi = R32((u32)(r_ebp+0x348u));
    /* 008871af: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 008871b4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008871b6: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 008871b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008871ba: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x8871bfu); f_008779d8();
    /* 008871bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008871c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008871c4: cmp dword ptr [ebp], 0 */ {  u32 a = R32((u32)(r_ebp)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008871c8: jle 0x8871fd */ if ((fZ||fS!=fO)) goto L_008871fd;
L_008871ca:; BB(0x008871ca);
    /* 008871ca: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 008871ce: mov edi, eax */ r_edi = r_eax;
    /* 008871d0: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008871d3: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
L_008871d7:; BB(0x008871d7);
    /* 008871d7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008871d9: push dword ptr [ebp + edi*4 + 4] */ { u32 v = R32((u32)(r_ebp+r_edi*4+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008871dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008871de: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x8871e3u); f_008779d8();
    /* 008871e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008871e6: mov edx, dword ptr [ebp + edi*4 + 4] */ r_edx = R32((u32)(r_ebp+r_edi*4+0x4u));
    /* 008871ea: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008871ec: jle 0x8871f0 */ if ((fZ||fS!=fO)) goto L_008871f0;
L_008871ee:; BB(0x008871ee);
    /* 008871ee: mov esi, edx */ r_esi = r_edx;
L_008871f0:; BB(0x008871f0);
    /* 008871f0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008871f1: cmp edi, dword ptr [ebp] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008871f4: jl 0x8871d7 */ if ((fS!=fO)) goto L_008871d7;
L_008871f6:; BB(0x008871f6);
    /* 008871f6: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 008871fa: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_008871fd:; BB(0x008871fd);
    /* 008871fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008871ff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00887201: jl 0x8872cd */ if ((fS!=fO)) goto L_008872cd;
L_00887207:; BB(0x00887207);
    /* 00887207: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0088720a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088720c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088720e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887210: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887212: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00887216: mov edi, eax */ r_edi = r_eax;
    /* 00887218: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0088721c: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00887220: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00887223: mov ebx, edx */ r_ebx = r_edx;
L_00887225:; BB(0x00887225);
    /* 00887225: mov ecx, dword ptr [ebp + ebx*4 + 0x80] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0x80u));
    /* 0088722c: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088722d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0088722f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00887230: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00887231: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x887236u); f_008779d8();
    /* 00887236: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00887238: push dword ptr [ebp + ebx*4 + 0xc0] */ { u32 v = R32((u32)(r_ebp+r_ebx*4+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088723f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00887240: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x887245u); f_008779d8();
    /* 00887245: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00887248: mov ecx, dword ptr [ebp + ebx*4 + 0xc0] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0xc0u));
    /* 0088724f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887251: je 0x88726c */ if (fZ) goto L_0088726c;
L_00887253:; BB(0x00887253);
    /* 00887253: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00887255: push dword ptr [ebp + ebx*4 + 0x100] */ { u32 v = R32((u32)(r_ebp+r_ebx*4+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088725c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088725d: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x887262u); f_008779d8();
    /* 00887262: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00887265: mov ecx, dword ptr [ebp + ebx*4 + 0xc0] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0xc0u));
L_0088726c:; BB(0x0088726c);
    /* 0088726c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088726e: mov edx, 1 */ r_edx = 0x1u;
    /* 00887273: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00887275: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887277: jle 0x8872b6 */ if ((fZ||fS!=fO)) goto L_008872b6;
L_00887279:; BB(0x00887279);
    /* 00887279: lea ecx, [ebp + edi] */ r_ecx = (u32)(r_ebp+r_edi);
    /* 0088727d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00887281: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00887285: mov edi, eax */ r_edi = r_eax;
L_00887287:; BB(0x00887287);
    /* 00887287: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0088728b: mov ecx, dword ptr [ecx + edi*4 + 0x140] */ r_ecx = R32((u32)(r_ecx+r_edi*4+0x140u));
    /* 00887292: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887293: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00887295: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00887296: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00887297: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88729cu); f_008779d8();
    /* 0088729c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fC = (r < a); }
    /* 0088729f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008872a0: mov ecx, dword ptr [ebp + ebx*4 + 0xc0] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0xc0u));
    /* 008872a7: mov eax, 1 */ r_eax = 0x1u;
    /* 008872ac: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008872ae: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008872b0: jl 0x887287 */ if ((fS!=fO)) goto L_00887287;
L_008872b2:; BB(0x008872b2);
    /* 008872b2: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_008872b6:; BB(0x008872b6);
    /* 008872b6: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008872b9: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008872ba: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008872be: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008872c0: jle 0x887225 */ if ((fZ||fS!=fO)) goto L_00887225;
L_008872c6:; BB(0x008872c6);
    /* 008872c6: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 008872ca: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_008872cd:; BB(0x008872cd);
    /* 008872cd: mov eax, dword ptr [ebp + 0x340] */ r_eax = R32((u32)(r_ebp+0x340u));
    /* 008872d3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008872d4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008872d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008872d7: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 008872db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008872dc: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x8872e1u); f_008779d8();
    /* 008872e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008872e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008872e6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008872e8: je 0x8872f6 */ if (fZ) goto L_008872f6;
L_008872ea:; BB(0x008872ea);
    /* 008872ea: mov eax, edi */ r_eax = r_edi;
    /* 008872ec: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008872ed: je 0x8872f6 */ if (fZ) goto L_008872f6;
L_008872ef:; BB(0x008872ef);
    /* 008872ef: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008872f0: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008872f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008872f4: jne 0x8872ef */ if (!fZ) goto L_008872ef;
L_008872f6:; BB(0x008872f6);
    /* 008872f6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008872f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008872f9: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 008872fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008872fe: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x887303u); f_008779d8();
    /* 00887303: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00887306: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00887308: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088730a: je 0x887316 */ if (fZ) goto L_00887316;
L_0088730c:; BB(0x0088730c);
    /* 0088730c: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0088730d: je 0x887316 */ if (fZ) goto L_00887316;
L_0088730f:; BB(0x0088730f);
    /* 0088730f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887310: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00887312: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887314: jne 0x88730f */ if (!fZ) goto L_0088730f;
L_00887316:; BB(0x00887316);
    /* 00887316: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887318: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088731a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0088731d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088731f: jle 0x887362 */ if ((fZ||fS!=fO)) goto L_00887362;
L_00887321:; BB(0x00887321);
    /* 00887321: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00887325: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
L_00887329:; BB(0x00887329);
    /* 00887329: mov ecx, dword ptr [ebp + edx*4 + 4] */ r_ecx = R32((u32)(r_ebp+r_edx*4+0x4u));
    /* 0088732d: add ebx, dword ptr [ebp + ecx*4 + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_ecx*4+0x80u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00887334: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887336: jge 0x88735d */ if ((fS==fO)) goto L_0088735d;
L_00887338:; BB(0x00887338);
    /* 00887338: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_0088733c:; BB(0x0088733c);
    /* 0088733c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00887340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00887341: push dword ptr [ebp + edi*4 + 0x34c] */ { u32 v = R32((u32)(r_ebp+r_edi*4+0x34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00887348: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00887349: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88734eu); f_008779d8();
    /* 0088734e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00887351: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00887352: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887354: jl 0x88733c */ if ((fS!=fO)) goto L_0088733c;
L_00887356:; BB(0x00887356);
    /* 00887356: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088735a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
L_0088735d:; BB(0x0088735d);
    /* 0088735d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088735e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887360: jl 0x887329 */ if ((fS!=fO)) goto L_00887329;
L_00887362:; BB(0x00887362);
    /* 00887362: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00887365: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00887366: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00887367: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00887368: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00887369: ret  */ FN_RET(0x00887198); r_esp += 4; return;
}

void f_0088736c(void) /* sub_88736C */
{
    FN_ENTER(0x0088736c);
    /* 0088736c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088736d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088736e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088736f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00887370: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00887373: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00887377: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0088737b: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 0088737e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00887380: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00887385: push 0x460 */ { u32 v = 0x460u; r_esp -= 4; W32(r_esp, v); }
    /* 0088738a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088738c: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x887391u); f_008587c7();
    /* 00887391: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00887395: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00887397: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00887398: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88739du); f_00877c98();
    /* 0088739d: mov ecx, eax */ r_ecx = r_eax;
    /* 0088739f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008873a2: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008873a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008873a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008873aa: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 008873ac: jle 0x8873dd */ if ((fZ||fS!=fO)) goto L_008873dd;
L_008873ae:; BB(0x008873ae);
    /* 008873ae: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008873b2: mov ebp, edx */ r_ebp = r_edx;
    /* 008873b4: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 008873b8: mov edi, eax */ r_edi = r_eax;
L_008873ba:; BB(0x008873ba);
    /* 008873ba: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008873bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008873bd: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8873c2u); f_00877c98();
    /* 008873c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008873c5: mov dword ptr [ebp + edi*4 + 4], eax */ W32((u32)(r_ebp+r_edi*4+0x4u), r_eax);
    /* 008873c9: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008873cb: jle 0x8873cf */ if ((fZ||fS!=fO)) goto L_008873cf;
L_008873cd:; BB(0x008873cd);
    /* 008873cd: mov ebx, eax */ r_ebx = r_eax;
L_008873cf:; BB(0x008873cf);
    /* 008873cf: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008873d0: cmp edi, dword ptr [ebp] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008873d3: jl 0x8873ba */ if ((fS!=fO)) goto L_008873ba;
L_008873d5:; BB(0x008873d5);
    /* 008873d5: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 008873d9: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_008873dd:; BB(0x008873dd);
    /* 008873dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008873df: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008873e1: jl 0x8874df */ if ((fS!=fO)) goto L_008874df;
L_008873e7:; BB(0x008873e7);
    /* 008873e7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008873ea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008873ec: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008873ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008873f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008873f2: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008873f6: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 008873fa: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008873fe: mov ebp, edi */ r_ebp = r_edi;
    /* 00887400: mov edi, eax */ r_edi = r_eax;
    /* 00887402: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_00887406:; BB(0x00887406);
    /* 00887406: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00887408: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00887409: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88740eu); f_00877c98();
    /* 0088740e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088740f: mov dword ptr [ebx + edi*4 + 0x80], eax */ W32((u32)(r_ebx+r_edi*4+0x80u), r_eax);
    /* 00887416: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00887418: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00887419: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88741eu); f_00877c98();
    /* 0088741e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00887421: mov dword ptr [ebx + edi*4 + 0xc0], eax */ W32((u32)(r_ebx+r_edi*4+0xc0u), r_eax);
    /* 00887428: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088742a: jl 0x887596 */ if ((fS!=fO)) goto L_00887596;
L_00887430:; BB(0x00887430);
    /* 00887430: jne 0x88743b */ if (!fZ) goto L_0088743b;
L_00887432:; BB(0x00887432);
    /* 00887432: mov eax, dword ptr [ebx + edi*4 + 0x100] */ r_eax = R32((u32)(r_ebx+r_edi*4+0x100u));
    /* 00887439: jmp 0x88744d */ goto L_0088744d;
L_0088743b:; BB(0x0088743b);
    /* 0088743b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088743d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088743e: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x887443u); f_00877c98();
    /* 00887443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00887446: mov dword ptr [ebx + edi*4 + 0x100], eax */ W32((u32)(r_ebx+r_edi*4+0x100u), r_eax);
L_0088744d:; BB(0x0088744d);
    /* 0088744d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088744f: jl 0x887596 */ if ((fS!=fO)) goto L_00887596;
L_00887455:; BB(0x00887455);
    /* 00887455: cmp eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887458: jge 0x887596 */ if ((fS==fO)) goto L_00887596;
L_0088745e:; BB(0x0088745e);
    /* 0088745e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00887460: mov ecx, dword ptr [ebx + edi*4 + 0xc0] */ r_ecx = R32((u32)(r_ebx+r_edi*4+0xc0u));
    /* 00887467: mov edx, 1 */ r_edx = 0x1u;
    /* 0088746c: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0088746e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887470: jle 0x8874c9 */ if ((fZ||fS!=fO)) goto L_008874c9;
L_00887472:; BB(0x00887472);
    /* 00887472: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00887476: lea edx, [ebx + edx] */ r_edx = (u32)(r_ebx+r_edx);
    /* 00887479: mov ebx, edx */ r_ebx = r_edx;
    /* 0088747b: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0088747f: mov edi, eax */ r_edi = r_eax;
L_00887481:; BB(0x00887481);
    /* 00887481: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00887483: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00887484: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x887489u); f_00877c98();
    /* 00887489: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088748c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088748d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887490: mov dword ptr [ebx + edi*4 + 0x140], eax */ W32((u32)(r_ebx+r_edi*4+0x140u), r_eax);
    /* 00887497: jl 0x887596 */ if ((fS!=fO)) goto L_00887596;
L_0088749d:; BB(0x0088749d);
    /* 0088749d: cmp eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008874a0: jge 0x887596 */ if ((fS==fO)) goto L_00887596;
L_008874a6:; BB(0x008874a6);
    /* 008874a6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008874a7: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008874ab: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008874af: mov ecx, dword ptr [ecx + eax*4 + 0xc0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xc0u));
    /* 008874b6: mov eax, 1 */ r_eax = 0x1u;
    /* 008874bb: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008874bd: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008874bf: jl 0x887481 */ if ((fS!=fO)) goto L_00887481;
L_008874c1:; BB(0x008874c1);
    /* 008874c1: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 008874c5: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_008874c9:; BB(0x008874c9);
    /* 008874c9: add dword ptr [esp + 0x10], 0x20 */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008874ce: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008874cf: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008874d3: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008874d5: jle 0x887406 */ if ((fZ||fS!=fO)) goto L_00887406;
L_008874db:; BB(0x008874db);
    /* 008874db: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_008874df:; BB(0x008874df);
    /* 008874df: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008874e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008874e2: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8874e7u); f_00877c98();
    /* 008874e7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008874e8: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 008874ec: mov dword ptr [edx + 0x340], eax */ W32((u32)(r_edx+0x340u), r_eax);
    /* 008874f2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008874f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008874f5: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x8874fau); f_00877c98();
    /* 008874fa: mov ecx, eax */ r_ecx = r_eax;
    /* 008874fc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008874ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887501: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00887503: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00887507: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 00887509: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088750b: jle 0x8875a9 */ if ((fZ||fS!=fO)) goto L_008875a9;
L_00887511:; BB(0x00887511);
    /* 00887511: mov eax, 1 */ r_eax = 0x1u;
    /* 00887516: mov esi, ecx */ r_esi = r_ecx;
    /* 00887518: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0088751a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0088751e: mov eax, edi */ r_eax = r_edi;
    /* 00887520: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_00887524:; BB(0x00887524);
    /* 00887524: mov ecx, dword ptr [edi + edx*4 + 4] */ r_ecx = R32((u32)(r_edi+r_edx*4+0x4u));
    /* 00887528: add ebp, dword ptr [edi + ecx*4 + 0x80] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+r_ecx*4+0x80u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088752f: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887531: jge 0x88756f */ if ((fS==fO)) goto L_0088756f;
L_00887533:; BB(0x00887533);
    /* 00887533: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00887537: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0088753b: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
L_0088753f:; BB(0x0088753f);
    /* 0088753f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00887540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00887541: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x887546u); f_00877c98();
    /* 00887546: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00887549: mov dword ptr [edi + ebx*4 + 0x34c], eax */ W32((u32)(r_edi+r_ebx*4+0x34cu), r_eax);
    /* 00887550: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00887552: jl 0x887596 */ if ((fS!=fO)) goto L_00887596;
L_00887554:; BB(0x00887554);
    /* 00887554: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00887558: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088755a: jge 0x887596 */ if ((fS==fO)) goto L_00887596;
L_0088755c:; BB(0x0088755c);
    /* 0088755c: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088755d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00887561: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887563: jl 0x88753f */ if ((fS!=fO)) goto L_0088753f;
L_00887565:; BB(0x00887565);
    /* 00887565: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00887569: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0088756d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
L_0088756f:; BB(0x0088756f);
    /* 0088756f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00887570: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887572: jl 0x887524 */ if ((fS!=fO)) goto L_00887524;
L_00887574:; BB(0x00887574);
    /* 00887574: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
L_00887578:; BB(0x00887578);
    /* 00887578: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0088757c: mov dword ptr [edx + 0x344], 0 */ W32((u32)(r_edx+0x344u), 0x0u);
    /* 00887586: mov dword ptr [edx + 0x348], eax */ W32((u32)(r_edx+0x348u), r_eax);
    /* 0088758c: mov eax, edx */ r_eax = r_edx;
    /* 0088758e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00887591: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00887592: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00887593: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00887594: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00887595: ret  */ FN_RET(0x0088736c); r_esp += 4; return;
L_00887596:; BB(0x00887596);
    /* 00887596: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0088759a: call 0x8875b8 */ r_esp -= 4; W32(r_esp, 0x88759fu); f_008875b8();
    /* 0088759f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008875a1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008875a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008875a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008875a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008875a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008875a8: ret  */ FN_RET(0x0088736c); r_esp += 4; return;
L_008875a9:; BB(0x008875a9);
    /* 008875a9: mov eax, 1 */ r_eax = 0x1u;
    /* 008875ae: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008875b0: jmp 0x887578 */ goto L_00887578;
}

void f_008875b4(void) /* sub_8875B4 */
{
    FN_ENTER(0x008875b4);
    /* 008875b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008875b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008875b9: mov esi, eax */ r_esi = r_eax;
    /* 008875bb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008875bd: je 0x8875d5 */ if (fZ) goto L_008875d5;
L_008875bf:; BB(0x008875bf);
    /* 008875bf: push 0x460 */ { u32 v = 0x460u; r_esp -= 4; W32(r_esp, v); }
    /* 008875c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008875c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008875c7: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x8875ccu); f_0086b688();
    /* 008875cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008875cd: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8875d2u); f_00858882();
    /* 008875d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008875d5:; BB(0x008875d5);
    /* 008875d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008875d6: ret  */ FN_RET(0x008875b4); r_esp += 4; return;
}

void f_008875b8(void) /* sub_8875B8 */
{
    FN_ENTER(0x008875b8);
    /* 008875b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008875b9: mov esi, eax */ r_esi = r_eax;
    /* 008875bb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008875bd: je 0x8875d5 */ if (fZ) goto L_008875d5;
L_008875bf:; BB(0x008875bf);
    /* 008875bf: push 0x460 */ { u32 v = 0x460u; r_esp -= 4; W32(r_esp, v); }
    /* 008875c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008875c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008875c7: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x8875ccu); f_0086b688();
    /* 008875cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008875cd: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8875d2u); f_00858882();
    /* 008875d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008875d5:; BB(0x008875d5);
    /* 008875d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008875d6: ret  */ FN_RET(0x008875b8); r_esp += 4; return;
}

void f_008875d8(void) /* sub_8875D8 */
{
    FN_ENTER(0x008875d8);
    /* 008875d8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008875dc: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008875e0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008875e2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008875e4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008875e6: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008875e8: ret  */ FN_RET(0x008875d8); r_esp += 4; return;
}

void f_008875ec(void) /* sub_8875EC */
{
    FN_ENTER(0x008875ec);
    /* 008875ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008875ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008875ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008875ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008875f0: sub esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008875f6: mov esi, dword ptr [esp + 0x134] */ r_esi = R32((u32)(r_esp+0x134u));
    /* 008875fd: push 0x520 */ { u32 v = 0x520u; r_esp -= 4; W32(r_esp, v); }
    /* 00887602: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00887604: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x887609u); f_008587c7();
    /* 00887609: mov ebp, eax */ r_ebp = r_eax;
    /* 0088760b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088760e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00887610: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00887612: mov dword ptr [ebp + 0x510], esi */ W32((u32)(r_ebp+0x510u), r_esi);
    /* 00887618: mov edx, dword ptr [esi + 0x348] */ r_edx = R32((u32)(r_esi+0x348u));
    /* 0088761e: mov dword ptr [ebp + 0x508], edx */ W32((u32)(r_ebp+0x508u), r_edx);
    /* 00887624: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00887626: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887628: jle 0x887680 */ if ((fZ||fS!=fO)) goto L_00887680;
L_0088762a:; BB(0x0088762a);
    /* 0088762a: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088762d: jl 0x887670 */ if ((fS!=fO)) goto L_00887670;
L_0088762f:; BB(0x0088762f);
    /* 0088762f: lea edx, [ecx - 6] */ r_edx = (u32)(r_ecx+0xfffffffau);
L_00887632:; BB(0x00887632);
    /* 00887632: mov eax, dword ptr [esi + edi*4 + 4] */ r_eax = R32((u32)(r_esi+r_edi*4+0x4u));
    /* 00887636: add ebx, dword ptr [esi + eax*4 + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+r_eax*4+0x80u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088763d: mov eax, dword ptr [esi + edi*4 + 8] */ r_eax = R32((u32)(r_esi+r_edi*4+0x8u));
    /* 00887641: add ebx, dword ptr [esi + eax*4 + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+r_eax*4+0x80u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00887648: mov eax, dword ptr [esi + edi*4 + 0xc] */ r_eax = R32((u32)(r_esi+r_edi*4+0xcu));
    /* 0088764c: add ebx, dword ptr [esi + eax*4 + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+r_eax*4+0x80u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00887653: mov eax, dword ptr [esi + edi*4 + 0x10] */ r_eax = R32((u32)(r_esi+r_edi*4+0x10u));
    /* 00887657: add ebx, dword ptr [esi + eax*4 + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+r_eax*4+0x80u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088765e: mov eax, dword ptr [esi + edi*4 + 0x14] */ r_eax = R32((u32)(r_esi+r_edi*4+0x14u));
    /* 00887662: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00887665: add ebx, dword ptr [esi + eax*4 + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+r_eax*4+0x80u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088766c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088766e: jle 0x887632 */ if ((fZ||fS!=fO)) goto L_00887632;
L_00887670:; BB(0x00887670);
    /* 00887670: mov edx, dword ptr [esi + edi*4 + 4] */ r_edx = R32((u32)(r_esi+r_edi*4+0x4u));
    /* 00887674: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00887675: add ebx, dword ptr [esi + edx*4 + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+r_edx*4+0x80u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088767c: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088767e: jl 0x887670 */ if ((fS!=fO)) goto L_00887670;
L_00887680:; BB(0x00887680);
    /* 00887680: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00887683: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887685: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887687: mov dword ptr [ebp + 0x504], ebx */ W32((u32)(r_ebp+0x504u), r_ebx);
    /* 0088768d: jle 0x88774a */ if ((fZ||fS!=fO)) goto L_0088774a;
L_00887693:; BB(0x00887693);
    /* 00887693: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887696: jl 0x887732 */ if ((fS!=fO)) goto L_00887732;
L_0088769c:; BB(0x0088769c);
    /* 0088769c: lea edi, [ebx - 6] */ r_edi = (u32)(r_ebx+0xfffffffau);
    /* 0088769f: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008876a2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008876a5: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 008876a9: lea edi, [ecx + ecx + 0x344] */ r_edi = (u32)(r_ecx+r_ecx+0x344u);
    /* 008876b0: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008876b2: lea ecx, [edx + edx + 0x348] */ r_ecx = (u32)(r_edx+r_edx+0x348u);
    /* 008876b9: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008876bb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008876be: lea edx, [edx + edx + 0x34c] */ r_edx = (u32)(r_edx+r_edx+0x34cu);
    /* 008876c5: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008876c7: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008876cb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008876ce: lea edx, [edx + edx + 0x350] */ r_edx = (u32)(r_edx+r_edx+0x350u);
    /* 008876d5: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008876d7: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008876db: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008876de: lea edx, [edx + edx + 0x354] */ r_edx = (u32)(r_edx+r_edx+0x354u);
    /* 008876e5: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008876e7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008876ea: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 008876ee: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 008876f2: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008876f6: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_008876fa:; BB(0x008876fa);
    /* 008876fa: mov dword ptr [esp + eax*4 + 0x18], edi */ W32((u32)(r_esp+r_eax*4+0x18u), r_edi);
    /* 008876fe: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00887701: mov dword ptr [esp + eax*4 + 0x1c], ecx */ W32((u32)(r_esp+r_eax*4+0x1cu), r_ecx);
    /* 00887705: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887708: mov dword ptr [esp + eax*4 + 0x20], ebp */ W32((u32)(r_esp+r_eax*4+0x20u), r_ebp);
    /* 0088770c: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088770f: mov dword ptr [esp + eax*4 + 0x24], ebx */ W32((u32)(r_esp+r_eax*4+0x24u), r_ebx);
    /* 00887713: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00887716: mov dword ptr [esp + eax*4 + 0x28], edx */ W32((u32)(r_esp+r_eax*4+0x28u), r_edx);
    /* 0088771a: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088771d: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887720: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887722: jle 0x8876fa */ if ((fZ||fS!=fO)) goto L_008876fa;
L_00887724:; BB(0x00887724);
    /* 00887724: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00887727: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0088772b: mov esi, dword ptr [esp + 0x134] */ r_esi = R32((u32)(r_esp+0x134u));
L_00887732:; BB(0x00887732);
    /* 00887732: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00887735: lea edx, [edx + edx + 0x344] */ r_edx = (u32)(r_edx+r_edx+0x344u);
    /* 0088773c: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0088773e:; BB(0x0088773e);
    /* 0088773e: mov dword ptr [esp + eax*4 + 0x18], edx */ W32((u32)(r_esp+r_eax*4+0x18u), r_edx);
    /* 00887742: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00887745: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887746: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887748: jl 0x88773e */ if ((fS!=fO)) goto L_0088773e;
L_0088774a:; BB(0x0088774a);
    /* 0088774a: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0088774e: push 0x8875d8 */ { u32 v = 0x8875d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00887753: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00887755: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00887756: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00887757: call 0x8cade0 */ r_esp -= 4; W32(r_esp, 0x88775cu); f_008cade0();
    /* 0088775c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088775f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00887761: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887763: jle 0x8877e7 */ if ((fZ||fS!=fO)) goto L_008877e7;
L_00887769:; BB(0x00887769);
    /* 00887769: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088776c: jl 0x887a19 */ if ((fS!=fO)) goto L_00887a19;
L_00887772:; BB(0x00887772);
    /* 00887772: lea edx, [ebx - 6] */ r_edx = (u32)(r_ebx+0xfffffffau);
    /* 00887775: lea ecx, [esi + 0x344] */ r_ecx = (u32)(r_esi+0x344u);
L_0088777b:; BB(0x0088777b);
    /* 0088777b: mov eax, dword ptr [esp + edi*4 + 0x18] */ r_eax = R32((u32)(r_esp+r_edi*4+0x18u));
    /* 0088777f: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00887781: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00887784: mov dword ptr [ebp + edi*4 + 0x104], eax */ W32((u32)(r_ebp+r_edi*4+0x104u), r_eax);
    /* 0088778b: mov eax, dword ptr [esp + edi*4 + 0x1c] */ r_eax = R32((u32)(r_esp+r_edi*4+0x1cu));
    /* 0088778f: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00887791: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00887794: mov dword ptr [ebp + edi*4 + 0x108], eax */ W32((u32)(r_ebp+r_edi*4+0x108u), r_eax);
    /* 0088779b: mov eax, dword ptr [esp + edi*4 + 0x20] */ r_eax = R32((u32)(r_esp+r_edi*4+0x20u));
    /* 0088779f: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008877a1: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008877a4: mov dword ptr [ebp + edi*4 + 0x10c], eax */ W32((u32)(r_ebp+r_edi*4+0x10cu), r_eax);
    /* 008877ab: mov eax, dword ptr [esp + edi*4 + 0x24] */ r_eax = R32((u32)(r_esp+r_edi*4+0x24u));
    /* 008877af: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008877b1: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008877b4: mov dword ptr [ebp + edi*4 + 0x110], eax */ W32((u32)(r_ebp+r_edi*4+0x110u), r_eax);
    /* 008877bb: mov eax, dword ptr [esp + edi*4 + 0x28] */ r_eax = R32((u32)(r_esp+r_edi*4+0x28u));
    /* 008877bf: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008877c1: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008877c4: mov dword ptr [ebp + edi*4 + 0x114], eax */ W32((u32)(r_ebp+r_edi*4+0x114u), r_eax);
    /* 008877cb: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008877ce: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008877d0: jle 0x88777b */ if ((fZ||fS!=fO)) goto L_0088777b;
L_008877d2:; BB(0x008877d2);
    /* 008877d2: mov edx, dword ptr [esp + edi*4 + 0x18] */ r_edx = R32((u32)(r_esp+r_edi*4+0x18u));
    /* 008877d6: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008877d8: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008877db: mov dword ptr [ebp + edi*4 + 0x104], edx */ W32((u32)(r_ebp+r_edi*4+0x104u), r_edx);
    /* 008877e2: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008877e3: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008877e5: jl 0x8877d2 */ if ((fS!=fO)) goto L_008877d2;
L_008877e7:; BB(0x008877e7);
    /* 008877e7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008877e9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008877eb: jle 0x88789a */ if ((fZ||fS!=fO)) goto L_0088789a;
L_008877f1:; BB(0x008877f1);
    /* 008877f1: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008877f4: jl 0x887887 */ if ((fS!=fO)) goto L_00887887;
L_008877fa:; BB(0x008877fa);
    /* 008877fa: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
    /* 008877fd: lea ecx, [edi + 1] */ r_ecx = (u32)(r_edi+0x1u);
    /* 00887800: lea edx, [edi + 2] */ r_edx = (u32)(r_edi+0x2u);
    /* 00887803: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00887807: lea edx, [edi + 3] */ r_edx = (u32)(r_edi+0x3u);
    /* 0088780a: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0088780e: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00887812: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 00887815: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00887818: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0088781c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
L_00887820:; BB(0x00887820);
    /* 00887820: mov eax, dword ptr [ebp + edi*4 + 0x104] */ r_eax = R32((u32)(r_ebp+r_edi*4+0x104u));
    /* 00887827: mov dword ptr [ebp + eax*4 + 0x208], edi */ W32((u32)(r_ebp+r_eax*4+0x208u), r_edi);
    /* 0088782e: mov eax, dword ptr [ebp + edi*4 + 0x108] */ r_eax = R32((u32)(r_ebp+r_edi*4+0x108u));
    /* 00887835: mov dword ptr [ebp + eax*4 + 0x208], ecx */ W32((u32)(r_ebp+r_eax*4+0x208u), r_ecx);
    /* 0088783c: mov eax, dword ptr [ebp + edi*4 + 0x10c] */ r_eax = R32((u32)(r_ebp+r_edi*4+0x10cu));
    /* 00887843: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887846: mov dword ptr [ebp + eax*4 + 0x208], esi */ W32((u32)(r_ebp+r_eax*4+0x208u), r_esi);
    /* 0088784d: mov eax, dword ptr [ebp + edi*4 + 0x110] */ r_eax = R32((u32)(r_ebp+r_edi*4+0x110u));
    /* 00887854: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00887857: mov dword ptr [ebp + eax*4 + 0x208], ebx */ W32((u32)(r_ebp+r_eax*4+0x208u), r_ebx);
    /* 0088785e: mov eax, dword ptr [ebp + edi*4 + 0x114] */ r_eax = R32((u32)(r_ebp+r_edi*4+0x114u));
    /* 00887865: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00887868: mov dword ptr [ebp + eax*4 + 0x208], edx */ W32((u32)(r_ebp+r_eax*4+0x208u), r_edx);
    /* 0088786f: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00887872: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00887875: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00887879: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088787b: jle 0x887820 */ if ((fZ||fS!=fO)) goto L_00887820;
L_0088787d:; BB(0x0088787d);
    /* 0088787d: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00887880: mov esi, dword ptr [esp + 0x134] */ r_esi = R32((u32)(r_esp+0x134u));
L_00887887:; BB(0x00887887);
    /* 00887887: mov edx, dword ptr [ebp + edi*4 + 0x104] */ r_edx = R32((u32)(r_ebp+r_edi*4+0x104u));
    /* 0088788e: mov dword ptr [ebp + edx*4 + 0x208], edi */ W32((u32)(r_ebp+r_edx*4+0x208u), r_edi);
    /* 00887895: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00887896: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887898: jl 0x887887 */ if ((fS!=fO)) goto L_00887887;
L_0088789a:; BB(0x0088789a);
    /* 0088789a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088789c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088789e: jle 0x88790e */ if ((fZ||fS!=fO)) goto L_0088790e;
L_008878a0:; BB(0x008878a0);
    /* 008878a0: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008878a3: jl 0x8878f7 */ if ((fS!=fO)) goto L_008878f7;
L_008878a5:; BB(0x008878a5);
    /* 008878a5: lea edx, [ebx - 5] */ r_edx = (u32)(r_ebx+0xfffffffbu);
L_008878a8:; BB(0x008878a8);
    /* 008878a8: mov edi, dword ptr [ebp + ecx*4 + 0x104] */ r_edi = R32((u32)(r_ebp+r_ecx*4+0x104u));
    /* 008878af: mov edi, dword ptr [esi + edi*4 + 0x344] */ r_edi = R32((u32)(r_esi+r_edi*4+0x344u));
    /* 008878b6: mov dword ptr [ebp + ecx*4], edi */ W32((u32)(r_ebp+r_ecx*4), r_edi);
    /* 008878ba: mov edi, dword ptr [ebp + ecx*4 + 0x108] */ r_edi = R32((u32)(r_ebp+r_ecx*4+0x108u));
    /* 008878c1: mov edi, dword ptr [esi + edi*4 + 0x344] */ r_edi = R32((u32)(r_esi+r_edi*4+0x344u));
    /* 008878c8: mov dword ptr [ebp + ecx*4 + 4], edi */ W32((u32)(r_ebp+r_ecx*4+0x4u), r_edi);
    /* 008878cc: mov edi, dword ptr [ebp + ecx*4 + 0x10c] */ r_edi = R32((u32)(r_ebp+r_ecx*4+0x10cu));
    /* 008878d3: mov edi, dword ptr [esi + edi*4 + 0x344] */ r_edi = R32((u32)(r_esi+r_edi*4+0x344u));
    /* 008878da: mov dword ptr [ebp + ecx*4 + 8], edi */ W32((u32)(r_ebp+r_ecx*4+0x8u), r_edi);
    /* 008878de: mov edi, dword ptr [ebp + ecx*4 + 0x110] */ r_edi = R32((u32)(r_ebp+r_ecx*4+0x110u));
    /* 008878e5: mov edi, dword ptr [esi + edi*4 + 0x344] */ r_edi = R32((u32)(r_esi+r_edi*4+0x344u));
    /* 008878ec: mov dword ptr [ebp + ecx*4 + 0xc], edi */ W32((u32)(r_ebp+r_ecx*4+0xcu), r_edi);
    /* 008878f0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008878f3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008878f5: jle 0x8878a8 */ if ((fZ||fS!=fO)) goto L_008878a8;
L_008878f7:; BB(0x008878f7);
    /* 008878f7: mov edx, dword ptr [ebp + ecx*4 + 0x104] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0x104u));
    /* 008878fe: mov edi, dword ptr [esi + edx*4 + 0x344] */ r_edi = R32((u32)(r_esi+r_edx*4+0x344u));
    /* 00887905: mov dword ptr [ebp + ecx*4], edi */ W32((u32)(r_ebp+r_ecx*4), r_edi);
    /* 00887909: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088790a: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088790c: jl 0x8878f7 */ if ((fS!=fO)) goto L_008878f7;
L_0088790e:; BB(0x0088790e);
    /* 0088790e: mov edx, dword ptr [esi + 0x340] */ r_edx = R32((u32)(r_esi+0x340u));
    /* 00887914: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887917: je 0x887a0a */ if (fZ) goto L_00887a0a;
L_0088791d:; BB(0x0088791d);
    /* 0088791d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887920: je 0x887944 */ if (fZ) goto L_00887944;
L_00887922:; BB(0x00887922);
    /* 00887922: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887925: jne 0x887933 */ if (!fZ) goto L_00887933;
L_00887927:; BB(0x00887927);
    /* 00887927: mov dword ptr [ebp + 0x50c], 0x56 */ W32((u32)(r_ebp+0x50cu), 0x56u);
    /* 00887931: jmp 0x88794e */ goto L_0088794e;
L_00887933:; BB(0x00887933);
    /* 00887933: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887936: jne 0x88794e */ if (!fZ) goto L_0088794e;
L_00887938:; BB(0x00887938);
    /* 00887938: mov dword ptr [ebp + 0x50c], 0x40 */ W32((u32)(r_ebp+0x50cu), 0x40u);
    /* 00887942: jmp 0x88794e */ goto L_0088794e;
L_00887944:; BB(0x00887944);
    /* 00887944: mov dword ptr [ebp + 0x50c], 0x80 */ W32((u32)(r_ebp+0x50cu), 0x80u);
L_0088794e:; BB(0x0088794e);
    /* 0088794e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00887950: add ebx, -2 */ {  u32 a = r_ebx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00887953: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887955: jle 0x8879fd */ if ((fZ||fS!=fO)) goto L_008879fd;
L_0088795b:; BB(0x0088795b);
    /* 0088795b: lea edx, [ecx + 2] */ r_edx = (u32)(r_ecx+0x2u);
    /* 0088795e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00887961: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_00887965:; BB(0x00887965);
    /* 00887965: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00887967: mov eax, 1 */ r_eax = 0x1u;
    /* 0088796c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088796e: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00887972: mov esi, dword ptr [esi + 0x508] */ r_esi = R32((u32)(r_esi+0x508u));
    /* 00887978: mov ebp, dword ptr [esp + 0x134] */ r_ebp = R32((u32)(r_esp+0x134u));
    /* 0088797f: mov ebp, dword ptr [ebp + ecx*4 + 0x34c] */ r_ebp = R32((u32)(r_ebp+r_ecx*4+0x34cu));
    /* 00887986: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887988: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0088798c: mov ebp, 0 */ r_ebp = 0x0u;
    /* 00887991: jle 0x8879de */ if ((fZ||fS!=fO)) goto L_008879de;
L_00887993:; BB(0x00887993);
    /* 00887993: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00887997: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0088799b: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0088799f: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008879a3: mov ebx, dword ptr [esp + 0x134] */ r_ebx = R32((u32)(r_esp+0x134u));
L_008879aa:; BB(0x008879aa);
    /* 008879aa: mov eax, dword ptr [ebx + ebp*4 + 0x344] */ r_eax = R32((u32)(r_ebx+r_ebp*4+0x344u));
    /* 008879b1: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008879b3: jle 0x8879bf */ if ((fZ||fS!=fO)) goto L_008879bf;
L_008879b5:; BB(0x008879b5);
    /* 008879b5: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008879b7: jge 0x8879bf */ if ((fS==fO)) goto L_008879bf;
L_008879b9:; BB(0x008879b9);
    /* 008879b9: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 008879bd: mov edi, eax */ r_edi = r_eax;
L_008879bf:; BB(0x008879bf);
    /* 008879bf: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008879c1: jge 0x8879cd */ if ((fS==fO)) goto L_008879cd;
L_008879c3:; BB(0x008879c3);
    /* 008879c3: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008879c5: jle 0x8879cd */ if ((fZ||fS!=fO)) goto L_008879cd;
L_008879c7:; BB(0x008879c7);
    /* 008879c7: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008879cb: mov esi, eax */ r_esi = r_eax;
L_008879cd:; BB(0x008879cd);
    /* 008879cd: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008879ce: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008879d0: jl 0x8879aa */ if ((fS!=fO)) goto L_008879aa;
L_008879d2:; BB(0x008879d2);
    /* 008879d2: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008879d6: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 008879da: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
L_008879de:; BB(0x008879de);
    /* 008879de: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 008879e2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008879e3: mov dword ptr [ebp + ecx*4 + 0x408], ebx */ W32((u32)(r_ebp+r_ecx*4+0x408u), r_ebx);
    /* 008879ea: mov dword ptr [ebp + ecx*4 + 0x30c], eax */ W32((u32)(r_ebp+r_ecx*4+0x30cu), r_eax);
    /* 008879f1: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008879f2: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008879f5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008879f7: jl 0x887965 */ if ((fS!=fO)) goto L_00887965;
L_008879fd:; BB(0x008879fd);
    /* 008879fd: mov eax, ebp */ r_eax = r_ebp;
    /* 008879ff: add esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00887a05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00887a06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00887a07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00887a08: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00887a09: ret  */ FN_RET(0x008875ec); r_esp += 4; return;
L_00887a0a:; BB(0x00887a0a);
    /* 00887a0a: mov dword ptr [ebp + 0x50c], 0x100 */ W32((u32)(r_ebp+0x50cu), 0x100u);
    /* 00887a14: jmp 0x88794e */ goto L_0088794e;
L_00887a19:; BB(0x00887a19);
    /* 00887a19: lea ecx, [esi + 0x344] */ r_ecx = (u32)(r_esi+0x344u);
    /* 00887a1f: jmp 0x8877d2 */ goto L_008877d2;
}

void f_00887a24(void) /* sub_887A24 */
{
    FN_ENTER(0x00887a24);
L_00887a24:; BB(0x00887a24);
    /* 00887a24: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887a2e: jne 0x887a4c */ if (!fZ) goto L_00887a4c;
L_00887a34:; BB(0x00887a34);
    /* 00887a34: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887a3e: jne 0x888ecc */ if (!fZ) goto L_00888ecc;
L_00887a44:; BB(0x00887a44);
    /* 00887a44: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x887a49u); f_0086b8a0();
    /* 00887a49: jmp 0x887a24 */ goto L_00887a24;
L_00887a4c:; BB(0x00887a4c);
    /* 00887a4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00887a4d: mov ebx, esp */ r_ebx = r_esp;
    /* 00887a4f: and esp, 0xffffffe0 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00887a52: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00887a53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00887a54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00887a55: sub esp, 0xd94 */ {  u32 a = r_esp; u32 b = 0xd94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00887a5b: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00887a5e: mov edx, dword ptr [eax + 0x510] */ r_edx = R32((u32)(r_eax+0x510u));
    /* 00887a64: mov esi, dword ptr [eax + 0x504] */ r_esi = R32((u32)(r_eax+0x504u));
    /* 00887a6a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00887a6c: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00887a70: mov edx, dword ptr [eax + 0x508] */ r_edx = R32((u32)(r_eax+0x508u));
    /* 00887a76: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00887a78: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00887a7c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887a7e: jle 0x887ae2 */ if ((fZ||fS!=fO)) goto L_00887ae2;
L_00887a80:; BB(0x00887a80);
    /* 00887a80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887a82: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887a85: jb 0x887ad2 */ if (fC) goto L_00887ad2;
L_00887a87:; BB(0x00887a87);
    /* 00887a87: mov ecx, esi */ r_ecx = r_esi;
    /* 00887a89: lea edi, [esp + 0x80] */ r_edi = (u32)(r_esp+0x80u);
    /* 00887a90: test edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887a96: je 0x887aab */ if (fZ) goto L_00887aab;
L_00887a98:; BB(0x00887a98);
    /* 00887a98: lea ecx, [esi - 1] */ r_ecx = (u32)(r_esi+0xffffffffu);
    /* 00887a9b: mov eax, 1 */ r_eax = 0x1u;
    /* 00887aa0: mov dword ptr [esp + 0x80], 0xffffff38 */ W32((u32)(r_esp+0x80u), 0xffffff38u);
L_00887aab:; BB(0x00887aab);
    /* 00887aab: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00887aae: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00887ab0: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887ab2: jmp 0x887ab9 */ goto L_00887ab9;
L_00887ab4:; BB(0x00887ab4);
    /* 00887ab4: movq qword ptr [esp + eax*4 + 0x78], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+r_eax*4+0x78u), r.q); }
L_00887ab9:; BB(0x00887ab9);
    /* 00887ab9: movq mm0, qword ptr [0x99af88] */ { MM64 r; r.q = R64((u32)(0x99af88u)); fpr[0] = (long double)(i64)(r.q); }
    /* 00887ac0: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887ac3: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887ac5: jb 0x887ab4 */ if (fC) goto L_00887ab4;
L_00887ac7:; BB(0x00887ac7);
    /* 00887ac7: movq qword ptr [esp + eax*4 + 0x78], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+r_eax*4+0x78u), r.q); }
    /* 00887acc: emms  */ ; /* the MMX tag state is not modelled */
    /* 00887ace: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887ad0: jae 0x887ae2 */ if (!fC) goto L_00887ae2;
L_00887ad2:; BB(0x00887ad2);
    /* 00887ad2: mov dword ptr [esp + eax*4 + 0x80], 0xffffff38 */ W32((u32)(r_esp+r_eax*4+0x80u), 0xffffff38u);
    /* 00887add: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887ade: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887ae0: jb 0x887ad2 */ if (fC) goto L_00887ad2;
L_00887ae2:; BB(0x00887ae2);
    /* 00887ae2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887ae4: jle 0x887b4e */ if ((fZ||fS!=fO)) goto L_00887b4e;
L_00887ae6:; BB(0x00887ae6);
    /* 00887ae6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887ae8: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887aeb: jb 0x887b3e */ if (fC) goto L_00887b3e;
L_00887aed:; BB(0x00887aed);
    /* 00887aed: mov ecx, esi */ r_ecx = r_esi;
    /* 00887aef: lea edi, [esp + 0x184] */ r_edi = (u32)(r_esp+0x184u);
    /* 00887af6: test edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887afc: je 0x887b11 */ if (fZ) goto L_00887b11;
L_00887afe:; BB(0x00887afe);
    /* 00887afe: lea ecx, [esi - 1] */ r_ecx = (u32)(r_esi+0xffffffffu);
    /* 00887b01: mov eax, 1 */ r_eax = 0x1u;
    /* 00887b06: mov dword ptr [esp + 0x184], 0xffffff38 */ W32((u32)(r_esp+0x184u), 0xffffff38u);
L_00887b11:; BB(0x00887b11);
    /* 00887b11: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00887b14: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00887b16: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887b18: jmp 0x887b22 */ goto L_00887b22;
L_00887b1a:; BB(0x00887b1a);
    /* 00887b1a: movq qword ptr [esp + eax*4 + 0x17c], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+r_eax*4+0x17cu), r.q); }
L_00887b22:; BB(0x00887b22);
    /* 00887b22: movq mm0, qword ptr [0x99af88] */ { MM64 r; r.q = R64((u32)(0x99af88u)); fpr[0] = (long double)(i64)(r.q); }
    /* 00887b29: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887b2c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887b2e: jb 0x887b1a */ if (fC) goto L_00887b1a;
L_00887b30:; BB(0x00887b30);
    /* 00887b30: movq qword ptr [esp + eax*4 + 0x17c], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+r_eax*4+0x17cu), r.q); }
    /* 00887b38: emms  */ ; /* the MMX tag state is not modelled */
    /* 00887b3a: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887b3c: jae 0x887b4e */ if (!fC) goto L_00887b4e;
L_00887b3e:; BB(0x00887b3e);
    /* 00887b3e: mov dword ptr [esp + eax*4 + 0x184], 0xffffff38 */ W32((u32)(r_esp+r_eax*4+0x184u), 0xffffff38u);
    /* 00887b49: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887b4a: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887b4c: jb 0x887b3e */ if (fC) goto L_00887b3e;
L_00887b4e:; BB(0x00887b4e);
    /* 00887b4e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887b50: jle 0x887bb6 */ if ((fZ||fS!=fO)) goto L_00887bb6;
L_00887b52:; BB(0x00887b52);
    /* 00887b52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887b54: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887b57: jb 0x887ba6 */ if (fC) goto L_00887ba6;
L_00887b59:; BB(0x00887b59);
    /* 00887b59: mov ecx, esi */ r_ecx = r_esi;
    /* 00887b5b: lea edi, [esp + 0x288] */ r_edi = (u32)(r_esp+0x288u);
    /* 00887b62: test edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887b68: je 0x887b7d */ if (fZ) goto L_00887b7d;
L_00887b6a:; BB(0x00887b6a);
    /* 00887b6a: lea ecx, [esi - 1] */ r_ecx = (u32)(r_esi+0xffffffffu);
    /* 00887b6d: mov eax, 1 */ r_eax = 0x1u;
    /* 00887b72: mov dword ptr [esp + 0x288], 0 */ W32((u32)(r_esp+0x288u), 0x0u);
L_00887b7d:; BB(0x00887b7d);
    /* 00887b7d: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00887b80: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00887b82: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887b84: jmp 0x887b8e */ goto L_00887b8e;
L_00887b86:; BB(0x00887b86);
    /* 00887b86: movq qword ptr [esp + eax*4 + 0x280], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+r_eax*4+0x280u), r.q); }
L_00887b8e:; BB(0x00887b8e);
    /* 00887b8e: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 00887b91: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887b94: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887b96: jb 0x887b86 */ if (fC) goto L_00887b86;
L_00887b98:; BB(0x00887b98);
    /* 00887b98: movq qword ptr [esp + eax*4 + 0x280], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+r_eax*4+0x280u), r.q); }
    /* 00887ba0: emms  */ ; /* the MMX tag state is not modelled */
    /* 00887ba2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887ba4: jae 0x887bb6 */ if (!fC) goto L_00887bb6;
L_00887ba6:; BB(0x00887ba6);
    /* 00887ba6: mov dword ptr [esp + eax*4 + 0x288], 0 */ W32((u32)(r_esp+r_eax*4+0x288u), 0x0u);
    /* 00887bb1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887bb2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887bb4: jb 0x887ba6 */ if (fC) goto L_00887ba6;
L_00887bb6:; BB(0x00887bb6);
    /* 00887bb6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887bb8: jle 0x887c22 */ if ((fZ||fS!=fO)) goto L_00887c22;
L_00887bba:; BB(0x00887bba);
    /* 00887bba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887bbc: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887bbf: jb 0x887c12 */ if (fC) goto L_00887c12;
L_00887bc1:; BB(0x00887bc1);
    /* 00887bc1: mov ecx, esi */ r_ecx = r_esi;
    /* 00887bc3: lea edi, [esp + 0x38c] */ r_edi = (u32)(r_esp+0x38cu);
    /* 00887bca: test edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887bd0: je 0x887be5 */ if (fZ) goto L_00887be5;
L_00887bd2:; BB(0x00887bd2);
    /* 00887bd2: lea ecx, [esi - 1] */ r_ecx = (u32)(r_esi+0xffffffffu);
    /* 00887bd5: mov eax, 1 */ r_eax = 0x1u;
    /* 00887bda: mov dword ptr [esp + 0x38c], 1 */ W32((u32)(r_esp+0x38cu), 0x1u);
L_00887be5:; BB(0x00887be5);
    /* 00887be5: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00887be8: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00887bea: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887bec: jmp 0x887bf6 */ goto L_00887bf6;
L_00887bee:; BB(0x00887bee);
    /* 00887bee: movq qword ptr [esp + eax*4 + 0x384], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+r_eax*4+0x384u), r.q); }
L_00887bf6:; BB(0x00887bf6);
    /* 00887bf6: movq mm0, qword ptr [0x99af80] */ { MM64 r; r.q = R64((u32)(0x99af80u)); fpr[0] = (long double)(i64)(r.q); }
    /* 00887bfd: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887c00: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887c02: jb 0x887bee */ if (fC) goto L_00887bee;
L_00887c04:; BB(0x00887c04);
    /* 00887c04: movq qword ptr [esp + eax*4 + 0x384], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+r_eax*4+0x384u), r.q); }
    /* 00887c0c: emms  */ ; /* the MMX tag state is not modelled */
    /* 00887c0e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887c10: jae 0x887c22 */ if (!fC) goto L_00887c22;
L_00887c12:; BB(0x00887c12);
    /* 00887c12: mov dword ptr [esp + eax*4 + 0x38c], 1 */ W32((u32)(r_esp+r_eax*4+0x38cu), 0x1u);
    /* 00887c1d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887c1e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887c20: jb 0x887c12 */ if (fC) goto L_00887c12;
L_00887c22:; BB(0x00887c22);
    /* 00887c22: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887c24: jle 0x887c8e */ if ((fZ||fS!=fO)) goto L_00887c8e;
L_00887c26:; BB(0x00887c26);
    /* 00887c26: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00887c28: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887c2b: jb 0x887c7e */ if (fC) goto L_00887c7e;
L_00887c2d:; BB(0x00887c2d);
    /* 00887c2d: mov eax, esi */ r_eax = r_esi;
    /* 00887c2f: lea edi, [esp + 0x490] */ r_edi = (u32)(r_esp+0x490u);
    /* 00887c36: test edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887c3c: je 0x887c51 */ if (fZ) goto L_00887c51;
L_00887c3e:; BB(0x00887c3e);
    /* 00887c3e: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 00887c41: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00887c46: mov dword ptr [esp + 0x490], 0xffffffff */ W32((u32)(r_esp+0x490u), 0xffffffffu);
L_00887c51:; BB(0x00887c51);
    /* 00887c51: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00887c54: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00887c56: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887c58: jmp 0x887c62 */ goto L_00887c62;
L_00887c5a:; BB(0x00887c5a);
    /* 00887c5a: movq qword ptr [esp + ecx*4 + 0x488], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+r_ecx*4+0x488u), r.q); }
L_00887c62:; BB(0x00887c62);
    /* 00887c62: movq mm0, qword ptr [0x99af78] */ { MM64 r; r.q = R64((u32)(0x99af78u)); fpr[0] = (long double)(i64)(r.q); }
    /* 00887c69: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887c6c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887c6e: jb 0x887c5a */ if (fC) goto L_00887c5a;
L_00887c70:; BB(0x00887c70);
    /* 00887c70: movq qword ptr [esp + ecx*4 + 0x488], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+r_ecx*4+0x488u), r.q); }
    /* 00887c78: emms  */ ; /* the MMX tag state is not modelled */
    /* 00887c7a: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887c7c: jae 0x887c8e */ if (!fC) goto L_00887c8e;
L_00887c7e:; BB(0x00887c7e);
    /* 00887c7e: mov dword ptr [esp + ecx*4 + 0x490], 0xffffffff */ W32((u32)(r_esp+r_ecx*4+0x490u), 0xffffffffu);
    /* 00887c89: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887c8a: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00887c8c: jb 0x887c7e */ if (fC) goto L_00887c7e;
L_00887c8e:; BB(0x00887c8e);
    /* 00887c8e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00887c90: je 0x887f02 */ if (fZ) goto L_00887f02;
L_00887c96:; BB(0x00887c96);
    /* 00887c96: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00887c98: lea ecx, [esi - 1] */ r_ecx = (u32)(r_esi+0xffffffffu);
    /* 00887c9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887c9d: jle 0x88810a */ if ((fZ||fS!=fO)) goto L_0088810a;
L_00887ca3:; BB(0x00887ca3);
    /* 00887ca3: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00887ca6: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00887caa: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00887cad: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887caf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887cb1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887cb3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887cb5: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00887cb9: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 00887cbd: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 00887cc1: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 00887cc5: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
L_00887cc9:; BB(0x00887cc9);
    /* 00887cc9: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 00887ccc: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00887cd0: mov ecx, dword ptr [esi + edx*4] */ r_ecx = R32((u32)(r_esi+r_edx*4));
    /* 00887cd3: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00887cd7: mov ecx, dword ptr [esi + edx*4 + 4] */ r_ecx = R32((u32)(r_esi+r_edx*4+0x4u));
    /* 00887cdb: lea edi, [esp + 0x594] */ r_edi = (u32)(r_esp+0x594u);
    /* 00887ce2: lea ebp, [edi + eax] */ r_ebp = (u32)(r_edi+r_eax);
    /* 00887ce5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887ce7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00887ce9: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00887ced: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887cef: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00887cf1: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00887cf5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887cf7: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00887cfb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887cfd: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00887d01: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887d03: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00887d07: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887d09: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00887d0d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887d0f: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00887d13: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887d15: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00887d19: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887d1b: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00887d1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887d21: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00887d25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00887d27: mov dword ptr [ebp], edi */ W32((u32)(r_ebp), r_edi);
    /* 00887d2a: mov dword ptr [ebp + 4], edi */ W32((u32)(r_ebp+0x4u), r_edi);
    /* 00887d2d: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00887d30: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00887d33: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00887d36: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00887d39: mov dword ptr [ebp + 0x18], edi */ W32((u32)(r_ebp+0x18u), r_edi);
    /* 00887d3c: mov dword ptr [ebp + 0x1c], edi */ W32((u32)(r_ebp+0x1cu), r_edi);
    /* 00887d3f: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00887d43: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00887d47: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887d49: mov dword ptr [esp + eax + 0x594], ebp */ W32((u32)(r_esp+r_eax+0x594u), r_ebp);
    /* 00887d50: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 00887d54: mov dword ptr [esp + eax + 0x598], ecx */ W32((u32)(r_esp+r_eax+0x598u), r_ecx);
    /* 00887d5b: cmovge ecx, edi */ if ((fS==fO)) { r_ecx = r_edi; }
    /* 00887d5e: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887d60: jg 0x887e1e */ if ((!fZ&&fS==fO)) goto L_00887e1e;
L_00887d66:; BB(0x00887d66);
    /* 00887d66: movss xmm0, dword ptr [0x99aff4] */ { u32 v = R32((u32)(0x99aff4u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00887d6e: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 00887d72: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 00887d75: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
L_00887d79:; BB(0x00887d79);
    /* 00887d79: movss xmm2, dword ptr [esi + ebp*4] */ { u32 v = R32((u32)(r_esi+r_ebp*4)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00887d7e: movss xmm1, dword ptr [0x99aff0] */ { u32 v = R32((u32)(0x99aff0u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00887d86: mulss xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00887d8a: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 00887d8e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00887d90: cvttss2si eax, xmm1 */ { XMM s = xmm[1]; double v = (double)s.fs[0]; double r = trunc(v); r_eax = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 00887d94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887d96: jg 0x887d9a */ if ((!fZ&&fS==fO)) goto L_00887d9a;
L_00887d98:; BB(0x00887d98);
    /* 00887d98: mov eax, edi */ r_eax = r_edi;
L_00887d9a:; BB(0x00887d9a);
    /* 00887d9a: mov edi, 0x3ff */ r_edi = 0x3ffu;
    /* 00887d9f: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887da4: cmovge eax, edi */ if ((fS==fO)) { r_eax = r_edi; }
    /* 00887da7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00887da9: je 0x887e0d */ if (fZ) goto L_00887e0d;
L_00887dab:; BB(0x00887dab);
    /* 00887dab: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00887daf: movss xmm1, dword ptr [edi + 0x458] */ { u32 v = R32((u32)(r_edi+0x458u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00887db7: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 00887dba: addss xmm1, dword ptr [edi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 00887dbf: comiss xmm1, xmm2 */ { XMM s = xmm[2]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 00887dc2: jb 0x887deb */ if (fC) goto L_00887deb;
L_00887dc4:; BB(0x00887dc4);
    /* 00887dc4: add dword ptr [esp + 0x54], ebp */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887dc8: mov edi, ebp */ r_edi = r_ebp;
    /* 00887dca: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887dcd: add dword ptr [esp + 0x50], eax */ { u32 ad = (u32)(r_esp+0x50u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887dd1: add dword ptr [esp + 0x4c], edi */ { u32 ad = (u32)(r_esp+0x4cu);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887dd5: mov edi, eax */ r_edi = r_eax;
    /* 00887dd7: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887dda: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887ddd: add dword ptr [esp + 0x48], edi */ { u32 ad = (u32)(r_esp+0x48u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887de1: add dword ptr [esp + 0x44], eax */ { u32 ad = (u32)(r_esp+0x44u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887de5: inc dword ptr [esp + 0x3c] */ { u32 ad = (u32)(r_esp+0x3cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887de9: jmp 0x887e0d */ goto L_00887e0d;
L_00887deb:; BB(0x00887deb);
    /* 00887deb: add dword ptr [esp + 0x2c], ebp */ { u32 ad = (u32)(r_esp+0x2cu);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887def: mov edi, ebp */ r_edi = r_ebp;
    /* 00887df1: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887df4: add dword ptr [esp + 0x64], eax */ { u32 ad = (u32)(r_esp+0x64u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887df8: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00887df9: add dword ptr [esp + 0x38], edi */ { u32 ad = (u32)(r_esp+0x38u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887dfd: mov edi, eax */ r_edi = r_eax;
    /* 00887dff: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887e02: add dword ptr [esp + 0x28], edi */ { u32 ad = (u32)(r_esp+0x28u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887e06: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887e09: add dword ptr [esp + 0x34], eax */ { u32 ad = (u32)(r_esp+0x34u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00887e0d:; BB(0x00887e0d);
    /* 00887e0d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00887e0e: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887e10: jle 0x887d79 */ if ((fZ||fS!=fO)) goto L_00887d79;
L_00887e16:; BB(0x00887e16);
    /* 00887e16: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 00887e1a: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_00887e1e:; BB(0x00887e1e);
    /* 00887e1e: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00887e22: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00887e26: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00887e28: add esi, dword ptr [esp + 0x50] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00887e2c: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00887e30: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00887e32: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 00887e36: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 00887e3a: add dword ptr [esp + 0x38], esi */ { u32 ad = (u32)(r_esp+0x38u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887e3e: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 00887e42: add dword ptr [esp + 0x28], esi */ { u32 ad = (u32)(r_esp+0x28u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887e46: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00887e4a: add dword ptr [esp + 0x34], esi */ { u32 ad = (u32)(r_esp+0x34u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887e4e: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00887e52: cvtsi2ss xmm6, edx */ xmm[6].fs[0] = (float)(i32)(r_edx);
    /* 00887e56: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00887e5a: mulss xmm6, dword ptr [edx + 0x454] */ { XMM s; s.d[0] = R32((u32)(r_edx+0x454u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 00887e62: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 00887e65: cvtsi2ss xmm0, edx */ xmm[0].fs[0] = (float)(i32)(r_edx);
    /* 00887e69: divss xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].fs[0] = xmm[6].fs[0] / s.fs[0]; }
    /* 00887e6d: cvttss2si edx, xmm6 */ { XMM s = xmm[6]; double v = (double)s.fs[0]; double r = trunc(v); r_edx = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 00887e71: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887e74: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00887e76: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00887e7a: mov dword ptr [esp + eax + 0x59c], ebp */ W32((u32)(r_esp+r_eax+0x59cu), r_ebp);
    /* 00887e81: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887e84: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00887e88: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00887e8a: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00887e8e: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887e91: mov dword ptr [esp + eax + 0x5a0], ebp */ W32((u32)(r_esp+r_eax+0x5a0u), r_ebp);
    /* 00887e98: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00887e9c: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00887e9e: mov dword ptr [esp + eax + 0x5a4], ebp */ W32((u32)(r_esp+r_eax+0x5a4u), r_ebp);
    /* 00887ea5: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00887ea9: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887eac: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00887eb0: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00887eb2: imul esi, edx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887eb5: mov dword ptr [esp + eax + 0x5a8], ebp */ W32((u32)(r_esp+r_eax+0x5a8u), r_ebp);
    /* 00887ebc: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00887ec0: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887ec2: mov dword ptr [esp + eax + 0x5ac], ecx */ W32((u32)(r_esp+r_eax+0x5acu), r_ecx);
    /* 00887ec9: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887ecc: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00887ed0: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00887ed2: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00887ed6: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00887ed7: mov dword ptr [esp + eax + 0x5b0], ecx */ W32((u32)(r_esp+r_eax+0x5b0u), r_ecx);
    /* 00887ede: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00887ee1: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 00887ee5: add dword ptr [esp + 0x58], edi */ { u32 ad = (u32)(r_esp+0x58u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887ee9: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887eeb: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00887eef: jl 0x887cc9 */ if ((fS!=fO)) goto L_00887cc9;
L_00887ef5:; BB(0x00887ef5);
    /* 00887ef5: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 00887ef9: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00887efd: jmp 0x88810a */ goto L_0088810a;
L_00887f02:; BB(0x00887f02);
    /* 00887f02: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00887f04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887f06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00887f08: mov dword ptr [esp + 0x64], ebp */ W32((u32)(r_esp+0x64u), r_ebp);
    /* 00887f0c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00887f0e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00887f10: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00887f14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887f16: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 00887f1a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00887f1c: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00887f20: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00887f22: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00887f26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887f28: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00887f2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887f2e: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00887f32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887f34: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00887f38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887f3a: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00887f3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00887f40: mov dword ptr [esp + 0x594], edi */ W32((u32)(r_esp+0x594u), r_edi);
    /* 00887f47: mov dword ptr [esp + 0x598], edi */ W32((u32)(r_esp+0x598u), r_edi);
    /* 00887f4e: mov dword ptr [esp + 0x59c], edi */ W32((u32)(r_esp+0x59cu), r_edi);
    /* 00887f55: mov dword ptr [esp + 0x5a0], edi */ W32((u32)(r_esp+0x5a0u), r_edi);
    /* 00887f5c: mov dword ptr [esp + 0x5a4], edi */ W32((u32)(r_esp+0x5a4u), r_edi);
    /* 00887f63: mov dword ptr [esp + 0x5a8], edi */ W32((u32)(r_esp+0x5a8u), r_edi);
    /* 00887f6a: mov dword ptr [esp + 0x5ac], edi */ W32((u32)(r_esp+0x5acu), r_edi);
    /* 00887f71: mov dword ptr [esp + 0x5b0], edi */ W32((u32)(r_esp+0x5b0u), r_edi);
    /* 00887f78: mov dword ptr [esp + 0x594], 0 */ W32((u32)(r_esp+0x594u), 0x0u);
    /* 00887f83: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00887f85: mov dword ptr [esp + 0x598], edx */ W32((u32)(r_esp+0x598u), r_edx);
    /* 00887f8c: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00887f8d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00887f8f: jl 0x88804b */ if ((fS!=fO)) goto L_0088804b;
L_00887f95:; BB(0x00887f95);
    /* 00887f95: movss xmm0, dword ptr [0x99aff4] */ { u32 v = R32((u32)(0x99aff4u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00887f9d: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00887fa1: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
L_00887fa5:; BB(0x00887fa5);
    /* 00887fa5: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 00887fa8: movss xmm2, dword ptr [ecx + edi*4] */ { u32 v = R32((u32)(r_ecx+r_edi*4)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00887fad: movss xmm1, dword ptr [0x99aff0] */ { u32 v = R32((u32)(0x99aff0u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00887fb5: mulss xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00887fb9: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 00887fbd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00887fbf: cvttss2si ecx, xmm1 */ { XMM s = xmm[1]; double v = (double)s.fs[0]; double r = trunc(v); r_ecx = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 00887fc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887fc5: jg 0x887fc9 */ if ((!fZ&&fS==fO)) goto L_00887fc9;
L_00887fc7:; BB(0x00887fc7);
    /* 00887fc7: mov ecx, esi */ r_ecx = r_esi;
L_00887fc9:; BB(0x00887fc9);
    /* 00887fc9: mov esi, 0x3ff */ r_esi = 0x3ffu;
    /* 00887fce: cmp ecx, 0x3ff */ {  u32 a = r_ecx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887fd4: cmovge ecx, esi */ if ((fS==fO)) { r_ecx = r_esi; }
    /* 00887fd7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00887fd9: je 0x88803a */ if (fZ) goto L_0088803a;
L_00887fdb:; BB(0x00887fdb);
    /* 00887fdb: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00887fdf: movss xmm1, dword ptr [esi + 0x458] */ { u32 v = R32((u32)(r_esi+0x458u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00887fe7: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 00887fea: addss xmm1, dword ptr [esi + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 00887fef: comiss xmm1, xmm2 */ { XMM s = xmm[2]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 00887ff2: jb 0x888018 */ if (fC) goto L_00888018;
L_00887ff4:; BB(0x00887ff4);
    /* 00887ff4: add dword ptr [esp + 0x64], edi */ { u32 ad = (u32)(r_esp+0x64u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00887ff8: mov esi, edi */ r_esi = r_edi;
    /* 00887ffa: imul esi, esi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_esi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00887ffd: add dword ptr [esp + 0x60], ecx */ { u32 ad = (u32)(r_esp+0x60u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00888001: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888002: add dword ptr [esp + 0x54], esi */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00888006: mov esi, ecx */ r_esi = r_ecx;
    /* 00888008: imul esi, esi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_esi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088800b: add dword ptr [esp + 0x50], esi */ { u32 ad = (u32)(r_esp+0x50u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088800f: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00888012: add dword ptr [esp + 0x4c], ecx */ { u32 ad = (u32)(r_esp+0x4cu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00888016: jmp 0x88803a */ goto L_0088803a;
L_00888018:; BB(0x00888018);
    /* 00888018: add dword ptr [esp + 0x3c], edi */ { u32 ad = (u32)(r_esp+0x3cu);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088801c: mov esi, edi */ r_esi = r_edi;
    /* 0088801e: imul esi, esi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_esi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00888021: add dword ptr [esp + 0x48], ecx */ { u32 ad = (u32)(r_esp+0x48u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00888025: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888026: add dword ptr [esp + 0x44], esi */ { u32 ad = (u32)(r_esp+0x44u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088802a: mov esi, ecx */ r_esi = r_ecx;
    /* 0088802c: imul esi, esi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_esi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088802f: add dword ptr [esp + 0x40], esi */ { u32 ad = (u32)(r_esp+0x40u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00888033: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00888036: add dword ptr [esp + 0x68], ecx */ { u32 ad = (u32)(r_esp+0x68u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0088803a:; BB(0x0088803a);
    /* 0088803a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088803b: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088803d: jle 0x887fa5 */ if ((fZ||fS!=fO)) goto L_00887fa5;
L_00888043:; BB(0x00888043);
    /* 00888043: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 00888047: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
L_0088804b:; BB(0x0088804b);
    /* 0088804b: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 0088804f: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00888053: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00888057: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0088805b: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 0088805f: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888061: add dword ptr [esp + 0x3c], edx */ { u32 ad = (u32)(r_esp+0x3cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00888065: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888067: lea ebp, [ebp + 1] */ r_ebp = (u32)(r_ebp+0x1u);
    /* 0088806a: add dword ptr [esp + 0x48], esi */ { u32 ad = (u32)(r_esp+0x48u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088806e: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 00888072: add dword ptr [esp + 0x44], esi */ { u32 ad = (u32)(r_esp+0x44u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00888076: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0088807a: add dword ptr [esp + 0x40], esi */ { u32 ad = (u32)(r_esp+0x40u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088807e: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00888082: cvtsi2ss xmm6, eax */ xmm[6].fs[0] = (float)(i32)(r_eax);
    /* 00888086: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0088808a: mulss xmm6, dword ptr [eax + 0x454] */ { XMM s; s.d[0] = R32((u32)(r_eax+0x454u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 00888092: cvtsi2ss xmm0, ebp */ xmm[0].fs[0] = (float)(i32)(r_ebp);
    /* 00888096: divss xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].fs[0] = xmm[6].fs[0] / s.fs[0]; }
    /* 0088809a: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0088809e: cvttss2si eax, xmm6 */ { XMM s = xmm[6]; double v = (double)s.fs[0]; double r = trunc(v); r_eax = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 008880a2: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008880a5: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008880a7: mov dword ptr [esp + 0x59c], ebp */ W32((u32)(r_esp+0x59cu), r_ebp);
    /* 008880ae: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 008880b2: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008880b5: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 008880b9: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008880bb: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 008880bf: mov dword ptr [esp + 0x5a0], ebp */ W32((u32)(r_esp+0x5a0u), r_ebp);
    /* 008880c6: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008880c9: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 008880cd: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008880cf: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008880d2: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 008880d6: mov dword ptr [esp + 0x5a4], ebp */ W32((u32)(r_esp+0x5a4u), r_ebp);
    /* 008880dd: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008880df: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008880e2: mov dword ptr [esp + 0x5a8], edx */ W32((u32)(r_esp+0x5a8u), r_edx);
    /* 008880e9: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008880eb: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 008880ef: mov dword ptr [esp + 0x5ac], ecx */ W32((u32)(r_esp+0x5acu), r_ecx);
    /* 008880f6: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008880f9: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 008880fd: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008880ff: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00888103: mov dword ptr [esp + 0x5b0], ecx */ W32((u32)(r_esp+0x5b0u), r_ecx);
L_0088810a:; BB(0x0088810a);
    /* 0088810a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088810c: je 0x888ca1 */ if (fZ) goto L_00888ca1;
L_00888112:; BB(0x00888112);
    /* 00888112: lea ebp, [esi - 1] */ r_ebp = (u32)(r_esi+0xffffffffu);
    /* 00888115: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00888117: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00888119: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 0088811d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088811f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00888121: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00888125: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00888127: mov edi, dword ptr [esp + 0x594] */ r_edi = R32((u32)(r_esp+0x594u));
    /* 0088812e: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00888132: lea eax, [esi + esi - 2] */ r_eax = (u32)(r_esi+r_esi+0xfffffffeu);
    /* 00888136: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888138: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0088813c: mov eax, dword ptr [esp + eax*8 + 0x578] */ r_eax = R32((u32)(r_esp+r_eax*8+0x578u));
    /* 00888143: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00888145: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00888149: mov eax, 0 */ r_eax = 0x0u;
    /* 0088814e: jle 0x888324 */ if ((fZ||fS!=fO)) goto L_00888324;
L_00888154:; BB(0x00888154);
    /* 00888154: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00888157: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00888159: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088815b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088815d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088815f: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 00888163: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 00888167: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0088816b: mov ebp, edi */ r_ebp = r_edi;
    /* 0088816d: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
L_00888171:; BB(0x00888171);
    /* 00888171: add esi, dword ptr [esp + ebp + 0x59c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+r_ebp+0x59cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00888178: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0088817c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088817d: add ecx, dword ptr [esp + ebp + 0x5a0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+r_ebp+0x5a0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888184: add edi, dword ptr [esp + ebp + 0x5a4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_ebp+0x5a4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088818b: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 0088818f: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00888193: add edi, dword ptr [esp + ebp + 0x5ac] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_ebp+0x5acu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088819a: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 0088819e: add edx, dword ptr [esp + ebp + 0x5b0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+r_ebp+0x5b0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008881a5: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008881a8: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 008881ac: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008881ae: jl 0x888171 */ if ((fS!=fO)) goto L_00888171;
L_008881b0:; BB(0x008881b0);
    /* 008881b0: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 008881b4: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 008881b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008881ba: je 0x888324 */ if (fZ) goto L_00888324;
L_008881c0:; BB(0x008881c0);
    /* 008881c0: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 008881c4: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 008881c8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008881cc: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 008881d0: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008881d4: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 008881d8: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008881da: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 008881de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008881e0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008881e2: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008881e6: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 008881ea: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 008881ee: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 008881f2: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008881f6: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008881f8: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008881fa: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 008881fe: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00888200: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00888202: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00888204: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00888206: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00888208: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0088820a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0088820c: fdivr qword ptr [0x99af70] */ ST(0) = R_F64((u32)(0x99af70u)) / ST(0);
    /* 00888212: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00888214: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00888216: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00888218: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088821a: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0088821c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088821e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00888220: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00888222: fst qword ptr [esp + 0x70] */ W_F64((u32)(r_esp+0x70u), ST(0));
    /* 00888226: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 0088822a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088822c: fadd qword ptr [0x99af68] */ ST(0) = ST(0) + R_F64((u32)(0x99af68u));
    /* 00888232: fst qword ptr [esp + 0x78] */ W_F64((u32)(r_esp+0x78u), ST(0));
    /* 00888236: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0088823a: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0088823e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00888240: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00888242: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00888245: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x88824au); f_008c9b50();
    /* 0088824a: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0088824e: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00888252: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00888256: mov ecx, edx */ r_ecx = r_edx;
    /* 00888258: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088825b: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00888261: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888267: jle 0x88828a */ if ((fZ||fS!=fO)) goto L_0088828a;
L_00888269:; BB(0x00888269);
    /* 00888269: mov eax, edx */ r_eax = r_edx;
    /* 0088826b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088826d: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888273: shld eax, ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_ebp; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 00888277: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088827c: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088827e: mov ebp, eax */ r_ebp = r_eax;
    /* 00888280: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00888282: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888285: cmovge ebp, eax */ if ((fS==fO)) { r_ebp = r_eax; }
    /* 00888288: jmp 0x88828c */ goto L_0088828c;
L_0088828a:; BB(0x0088828a);
    /* 0088828a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0088828c:; BB(0x0088828c);
    /* 0088828c: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00888290: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00888294: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00888298: fld qword ptr [esp + 0x70] */ FPUSH(R_F64((u32)(r_esp+0x70u)));
    /* 0088829c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088829e: fld qword ptr [esp + 0x78] */ FPUSH(R_F64((u32)(r_esp+0x78u)));
    /* 008882a2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008882a4: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008882a7: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x8882acu); f_008c9b50();
    /* 008882ac: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008882b0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008882b4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008882b8: mov ecx, edx */ r_ecx = r_edx;
    /* 008882ba: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008882bd: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008882c3: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008882c9: jle 0x8882ed */ if ((fZ||fS!=fO)) goto L_008882ed;
L_008882cb:; BB(0x008882cb);
    /* 008882cb: mov edi, edx */ r_edi = r_edx;
    /* 008882cd: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008882cf: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008882d5: shld edi, eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_edi; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edi = r; } }
    /* 008882d9: or edi, 0x80000000 */ {  u32 a = r_edi; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008882df: shr edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008882e1: mov eax, edi */ r_eax = r_edi;
    /* 008882e3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008882e5: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008882e8: cmovge eax, edi */ if ((fS==fO)) { r_eax = r_edi; }
    /* 008882eb: jmp 0x8882ef */ goto L_008882ef;
L_008882ed:; BB(0x008882ed);
    /* 008882ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008882ef:; BB(0x008882ef);
    /* 008882ef: mov edx, 0x3ff */ r_edx = 0x3ffu;
    /* 008882f4: cmp ebp, 0x3ff */ {  u32 a = r_ebp; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008882fa: mov ecx, 0x3ff */ r_ecx = 0x3ffu;
    /* 008882ff: jle 0x888303 */ if ((fZ||fS!=fO)) goto L_00888303;
L_00888301:; BB(0x00888301);
    /* 00888301: mov ebp, edx */ r_ebp = r_edx;
L_00888303:; BB(0x00888303);
    /* 00888303: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888308: mov edi, 0 */ r_edi = 0x0u;
    /* 0088830d: jle 0x888311 */ if ((fZ||fS!=fO)) goto L_00888311;
L_0088830f:; BB(0x0088830f);
    /* 0088830f: mov eax, ecx */ r_eax = r_ecx;
L_00888311:; BB(0x00888311);
    /* 00888311: cmp ebp, 0 */ {  u32 a = r_ebp; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888314: mov edx, 0 */ r_edx = 0x0u;
    /* 00888319: cmovl ebp, edi */ if ((fS!=fO)) { r_ebp = r_edi; }
    /* 0088831c: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088831f: cmovl eax, edx */ if ((fS!=fO)) { r_eax = r_edx; }
    /* 00888322: jmp 0x888328 */ goto L_00888328;
L_00888324:; BB(0x00888324);
    /* 00888324: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00888326: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00888328:; BB(0x00888328);
    /* 00888328: mov dword ptr [esp + 0x80], ebp */ W32((u32)(r_esp+0x80u), r_ebp);
    /* 0088832f: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888332: mov dword ptr [esp + 0x184], ebp */ W32((u32)(r_esp+0x184u), r_ebp);
    /* 00888339: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0088833e: mov dword ptr [esp + 0x188], eax */ W32((u32)(r_esp+0x188u), r_eax);
    /* 00888345: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 0088834c: jle 0x888b59 */ if ((fZ||fS!=fO)) goto L_00888b59;
L_00888352:; BB(0x00888352);
    /* 00888352: lea eax, [esi - 6] */ r_eax = (u32)(r_esi+0xfffffffau);
    /* 00888355: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00888359: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
L_0088835d:; BB(0x0088835d);
    /* 0088835d: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 00888360: mov esi, dword ptr [esi + ebp*4 + 0x208] */ r_esi = R32((u32)(r_esi+r_ebp*4+0x208u));
    /* 00888367: mov eax, dword ptr [esp + esi*4 + 0x288] */ r_eax = R32((u32)(r_esp+r_esi*4+0x288u));
    /* 0088836e: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00888372: mov edi, dword ptr [esp + esi*4 + 0x38c] */ r_edi = R32((u32)(r_esp+r_esi*4+0x38cu));
    /* 00888379: cmp edi, dword ptr [esp + eax*4 + 0x490] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x490u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888380: je 0x888b4a */ if (fZ) goto L_00888b4a;
L_00888386:; BB(0x00888386);
    /* 00888386: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00888389: mov edx, eax */ r_edx = r_eax;
    /* 0088838b: mov eax, dword ptr [ecx + edx*4 + 0x208] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x208u));
    /* 00888392: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00888396: mov eax, dword ptr [ecx + edi*4 + 0x208] */ r_eax = R32((u32)(r_ecx+r_edi*4+0x208u));
    /* 0088839d: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 008883a1: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 008883a5: mov dword ptr [esp + edx*4 + 0x490], edi */ W32((u32)(r_esp+r_edx*4+0x490u), r_edi);
    /* 008883ac: mov eax, dword ptr [ecx + edx*4 + 0x344] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x344u));
    /* 008883b3: mov ecx, dword ptr [ecx + edi*4 + 0x344] */ r_ecx = R32((u32)(r_ecx+r_edi*4+0x344u));
    /* 008883ba: mov edx, dword ptr [esp + edx*4 + 0x80] */ r_edx = R32((u32)(r_esp+r_edx*4+0x80u));
    /* 008883c1: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 008883c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008883c7: jl 0x888e9a */ if ((fS!=fO)) goto L_00888e9a;
L_008883cd:; BB(0x008883cd);
    /* 008883cd: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 008883d1: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008883d5: mov esi, dword ptr [esp + ecx*4 + 0x184] */ r_esi = R32((u32)(r_esp+r_ecx*4+0x184u));
    /* 008883dc: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 008883df: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008883e1: cmp esi, 0 */ {  u32 a = r_esi; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008883e4: cmovl ecx, edx */ if ((fS!=fO)) { r_ecx = r_edx; }
    /* 008883e7: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 008883eb: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
L_008883ef:; BB(0x008883ef);
    /* 008883ef: mov edx, dword ptr [esp + edi*4 + 0x80] */ r_edx = R32((u32)(r_esp+r_edi*4+0x80u));
    /* 008883f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008883f8: jl 0x888e8a */ if ((fS!=fO)) goto L_00888e8a;
L_008883fe:; BB(0x008883fe);
    /* 008883fe: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00888402: mov ecx, dword ptr [esp + edi*4 + 0x184] */ r_ecx = R32((u32)(r_esp+r_edi*4+0x184u));
    /* 00888409: lea esi, [edx + ecx] */ r_esi = (u32)(r_edx+r_ecx);
    /* 0088840c: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0088840e: cmp ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888411: cmovl esi, edx */ if ((fS!=fO)) { r_esi = r_edx; }
    /* 00888414: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 00888418: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
L_0088841c:; BB(0x0088841c);
    /* 0088841c: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00888420: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888423: je 0x888e82 */ if (fZ) goto L_00888e82;
L_00888429:; BB(0x00888429);
    /* 00888429: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0088842d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888430: je 0x888e82 */ if (fZ) goto L_00888e82;
L_00888436:; BB(0x00888436);
    /* 00888436: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0088843a: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0088843d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088843e: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00888441: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00888442: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00888443: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00888447: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00888448: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 0088844c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088844d: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00888451: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00888452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00888453: call 0x88b230 */ r_esp -= 4; W32(r_esp, 0x888458u); f_0088b230();
    /* 00888458: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088845b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088845d: jne 0x888477 */ if (!fZ) goto L_00888477;
L_0088845f:; BB(0x0088845f);
    /* 0088845f: mov eax, 0xffffff38 */ r_eax = 0xffffff38u;
    /* 00888464: mov dword ptr [esp + ebp*4 + 0x80], eax */ W32((u32)(r_esp+r_ebp*4+0x80u), r_eax);
    /* 0088846b: mov dword ptr [esp + ebp*4 + 0x184], eax */ W32((u32)(r_esp+r_ebp*4+0x184u), r_eax);
    /* 00888472: jmp 0x888b4a */ goto L_00888b4a;
L_00888477:; BB(0x00888477);
    /* 00888477: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 0088847b: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 0088847f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00888482: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888488: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088848a: lea eax, [esp + 0x594] */ r_eax = (u32)(r_esp+0x594u);
    /* 00888491: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 00888494: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00888498: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088849a: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088849c: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 008884a0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008884a2: mov ecx, dword ptr [esp + ecx + 0x594] */ r_ecx = R32((u32)(r_esp+r_ecx+0x594u));
    /* 008884a9: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 008884ad: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008884af: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 008884b3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008884b5: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 008884b9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008884bb: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 008884bf: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008884c1: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 008884c5: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 008884c9: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 008884cd: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 008884d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008884d2: mov eax, dword ptr [eax + ecx*8 - 0x1c] */ r_eax = R32((u32)(r_eax+r_ecx*8+0xffffffe4u));
    /* 008884d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008884d8: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 008884dc: mov eax, 0 */ r_eax = 0x0u;
    /* 008884e1: jle 0x888719 */ if ((fZ||fS!=fO)) goto L_00888719;
L_008884e7:; BB(0x008884e7);
    /* 008884e7: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008884ea: jge 0x888dc1 */ if ((fS==fO)) goto L_00888dc1;
L_008884f0:; BB(0x008884f0);
    /* 008884f0: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008884f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008884f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008884f7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008884f9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008884fb: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 008884ff: lea edx, [edx + ecx + 8] */ r_edx = (u32)(r_edx+r_ecx+0x8u);
    /* 00888503: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00888507: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 0088850b: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0088850f: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00888513: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00888517: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
L_0088851b:; BB(0x0088851b);
    /* 0088851b: add esi, dword ptr [edx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088851d: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00888521: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888522: add ebp, dword ptr [edx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888525: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888528: add edi, dword ptr [edx + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088852b: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 0088852f: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00888533: add edi, dword ptr [edx + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00888536: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0088853a: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088853d: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00888541: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888543: jl 0x88851b */ if ((fS!=fO)) goto L_0088851b;
L_00888545:; BB(0x00888545);
    /* 00888545: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00888549: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0088854d: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00888551: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00888555: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00888559: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088855b: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0088855f: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00888563: je 0x888719 */ if (fZ) goto L_00888719;
L_00888569:; BB(0x00888569);
    /* 00888569: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088856d: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00888571: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00888575: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00888579: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0088857d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088857f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00888581: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00888585: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00888589: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0088858d: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00888591: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00888595: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00888599: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0088859d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088859f: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008885a1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008885a5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008885a7: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 008885a9: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 008885ad: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 008885b1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008885b3: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008885b5: fsubrp st(6) */ ST(6) = ST(0) - ST(6); FPOP();
    /* 008885b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008885b9: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008885bb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008885bd: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 008885bf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008885c1: fdivr qword ptr [0x99af70] */ ST(0) = R_F64((u32)(0x99af70u)) / ST(0);
    /* 008885c7: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 008885c9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008885cb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008885cd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008885cf: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008885d1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008885d3: fst qword ptr [esp + 0x78] */ W_F64((u32)(r_esp+0x78u), ST(0));
    /* 008885d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008885d9: fadd qword ptr [0x99af68] */ ST(0) = ST(0) + R_F64((u32)(0x99af68u));
    /* 008885df: fst qword ptr [esp + 0x70] */ W_F64((u32)(r_esp+0x70u), ST(0));
    /* 008885e3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008885e7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 008885eb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008885ed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008885ef: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008885f2: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x8885f7u); f_008c9b50();
    /* 008885f7: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008885fb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008885ff: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00888603: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00888607: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 0088860b: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088860e: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00888614: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088861a: jle 0x888651 */ if ((fZ||fS!=fO)) goto L_00888651;
L_0088861c:; BB(0x0088861c);
    /* 0088861c: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00888620: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00888624: mov eax, edx */ r_eax = r_edx;
    /* 00888626: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 0088862a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088862c: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888632: shld eax, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 00888636: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088863b: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088863d: mov ecx, eax */ r_ecx = r_eax;
    /* 0088863f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00888641: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888644: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00888648: cmovge ecx, eax */ if ((fS==fO)) { r_ecx = r_eax; }
    /* 0088864b: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0088864f: jmp 0x888657 */ goto L_00888657;
L_00888651:; BB(0x00888651);
    /* 00888651: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00888653: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
L_00888657:; BB(0x00888657);
    /* 00888657: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0088865b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088865f: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00888663: fld qword ptr [esp + 0x78] */ FPUSH(R_F64((u32)(r_esp+0x78u)));
    /* 00888667: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00888669: fld qword ptr [esp + 0x70] */ FPUSH(R_F64((u32)(r_esp+0x70u)));
    /* 0088866d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088866f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00888672: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x888677u); f_008c9b50();
    /* 00888677: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0088867b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0088867f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00888683: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00888687: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 0088868b: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088868e: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00888694: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088869a: jle 0x8886d1 */ if ((fZ||fS!=fO)) goto L_008886d1;
L_0088869c:; BB(0x0088869c);
    /* 0088869c: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 008886a0: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008886a4: mov eax, edx */ r_eax = r_edx;
    /* 008886a6: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 008886aa: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008886ac: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008886b2: shld eax, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 008886b6: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008886bb: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008886bd: mov ecx, eax */ r_ecx = r_eax;
    /* 008886bf: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008886c1: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008886c4: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 008886c8: cmovge ecx, eax */ if ((fS==fO)) { r_ecx = r_eax; }
    /* 008886cb: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 008886cf: jmp 0x8886d7 */ goto L_008886d7;
L_008886d1:; BB(0x008886d1);
    /* 008886d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008886d3: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_008886d7:; BB(0x008886d7);
    /* 008886d7: mov ecx, 0x3ff */ r_ecx = 0x3ffu;
    /* 008886dc: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 008886e0: cmp edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008886e6: jle 0x8886ea */ if ((fZ||fS!=fO)) goto L_008886ea;
L_008886e8:; BB(0x008886e8);
    /* 008886e8: mov edx, ecx */ r_edx = r_ecx;
L_008886ea:; BB(0x008886ea);
    /* 008886ea: mov ecx, 0x3ff */ r_ecx = 0x3ffu;
    /* 008886ef: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 008886f3: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008886f8: jle 0x8886fc */ if ((fZ||fS!=fO)) goto L_008886fc;
L_008886fa:; BB(0x008886fa);
    /* 008886fa: mov eax, ecx */ r_eax = r_ecx;
L_008886fc:; BB(0x008886fc);
    /* 008886fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008886fe: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888701: cmovl edx, ecx */ if ((fS!=fO)) { r_edx = r_ecx; }
    /* 00888704: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888707: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0088870b: mov edx, 0 */ r_edx = 0x0u;
    /* 00888710: cmovl eax, edx */ if ((fS!=fO)) { r_eax = r_edx; }
    /* 00888713: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00888717: jmp 0x888725 */ goto L_00888725;
L_00888719:; BB(0x00888719);
    /* 00888719: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088871b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088871d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00888721: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
L_00888725:; BB(0x00888725);
    /* 00888725: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00888729: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0088872c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088872e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888730: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888732: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888734: lea eax, [esp + 0x594] */ r_eax = (u32)(r_esp+0x594u);
    /* 0088873b: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 0088873e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00888742: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00888746: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00888748: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088874a: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0088874e: mov ecx, dword ptr [esp + ecx + 0x594] */ r_ecx = R32((u32)(r_esp+r_ecx+0x594u));
    /* 00888755: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
    /* 00888759: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088875b: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 0088875f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00888761: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00888765: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00888767: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 0088876b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088876d: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 00888771: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00888775: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00888779: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088877c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088877e: mov eax, dword ptr [eax + ecx*8 - 0x1c] */ r_eax = R32((u32)(r_eax+r_ecx*8+0xffffffe4u));
    /* 00888782: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00888784: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00888788: mov eax, 0 */ r_eax = 0x0u;
    /* 0088878d: jle 0x8889c5 */ if ((fZ||fS!=fO)) goto L_008889c5;
L_00888793:; BB(0x00888793);
    /* 00888793: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888796: jge 0x888d00 */ if ((fS==fO)) goto L_00888d00;
L_0088879c:; BB(0x0088879c);
    /* 0088879c: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0088879f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008887a1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008887a3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008887a5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008887a7: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 008887ab: lea edx, [edx + ecx + 8] */ r_edx = (u32)(r_edx+r_ecx+0x8u);
    /* 008887af: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 008887b3: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 008887b7: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 008887bb: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 008887bf: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 008887c3: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
L_008887c7:; BB(0x008887c7);
    /* 008887c7: add esi, dword ptr [edx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008887c9: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 008887cd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008887ce: add ebp, dword ptr [edx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008887d1: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008887d4: add edi, dword ptr [edx + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008887d7: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 008887db: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 008887df: add edi, dword ptr [edx + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008887e2: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 008887e6: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008887e9: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 008887ed: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008887ef: jl 0x8887c7 */ if ((fS!=fO)) goto L_008887c7;
L_008887f1:; BB(0x008887f1);
    /* 008887f1: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 008887f5: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 008887f9: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 008887fd: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 00888801: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00888805: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888807: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
    /* 0088880b: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 0088880f: je 0x8889c5 */ if (fZ) goto L_008889c5;
L_00888815:; BB(0x00888815);
    /* 00888815: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00888819: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0088881d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00888821: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00888825: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00888829: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088882b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088882d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00888831: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00888835: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00888839: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0088883d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00888841: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00888845: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00888849: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088884b: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0088884d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00888851: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00888853: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 00888855: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00888859: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0088885d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088885f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00888861: fsubrp st(6) */ ST(6) = ST(0) - ST(6); FPOP();
    /* 00888863: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00888865: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00888867: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00888869: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0088886b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0088886d: fdivr qword ptr [0x99af70] */ ST(0) = R_F64((u32)(0x99af70u)) / ST(0);
    /* 00888873: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00888875: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00888877: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00888879: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0088887b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0088887d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088887f: fst qword ptr [esp + 0x78] */ W_F64((u32)(r_esp+0x78u), ST(0));
    /* 00888883: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00888885: fadd qword ptr [0x99af68] */ ST(0) = ST(0) + R_F64((u32)(0x99af68u));
    /* 0088888b: fst qword ptr [esp + 0x70] */ W_F64((u32)(r_esp+0x70u), ST(0));
    /* 0088888f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00888893: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00888897: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00888899: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088889b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088889e: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x8888a3u); f_008c9b50();
    /* 008888a3: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008888a7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008888ab: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008888af: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 008888b3: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 008888b7: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008888ba: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008888c0: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008888c6: jle 0x8888fd */ if ((fZ||fS!=fO)) goto L_008888fd;
L_008888c8:; BB(0x008888c8);
    /* 008888c8: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 008888cc: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008888d0: mov eax, edx */ r_eax = r_edx;
    /* 008888d2: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 008888d6: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008888d8: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008888de: shld eax, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 008888e2: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008888e7: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008888e9: mov ecx, eax */ r_ecx = r_eax;
    /* 008888eb: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008888ed: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008888f0: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 008888f4: cmovge ecx, eax */ if ((fS==fO)) { r_ecx = r_eax; }
    /* 008888f7: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 008888fb: jmp 0x888903 */ goto L_00888903;
L_008888fd:; BB(0x008888fd);
    /* 008888fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008888ff: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
L_00888903:; BB(0x00888903);
    /* 00888903: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00888907: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088890b: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0088890f: fld qword ptr [esp + 0x78] */ FPUSH(R_F64((u32)(r_esp+0x78u)));
    /* 00888913: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00888915: fld qword ptr [esp + 0x70] */ FPUSH(R_F64((u32)(r_esp+0x70u)));
    /* 00888919: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088891b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088891e: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x888923u); f_008c9b50();
    /* 00888923: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00888927: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0088892b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0088892f: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00888933: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00888937: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088893a: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00888940: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888946: jle 0x88897d */ if ((fZ||fS!=fO)) goto L_0088897d;
L_00888948:; BB(0x00888948);
    /* 00888948: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 0088894c: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00888950: mov eax, edx */ r_eax = r_edx;
    /* 00888952: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 00888956: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00888958: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088895e: shld eax, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 00888962: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00888967: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00888969: mov ecx, eax */ r_ecx = r_eax;
    /* 0088896b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088896d: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888970: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00888974: cmovge ecx, eax */ if ((fS==fO)) { r_ecx = r_eax; }
    /* 00888977: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 0088897b: jmp 0x888983 */ goto L_00888983;
L_0088897d:; BB(0x0088897d);
    /* 0088897d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088897f: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
L_00888983:; BB(0x00888983);
    /* 00888983: mov ecx, 0x3ff */ r_ecx = 0x3ffu;
    /* 00888988: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0088898c: cmp edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888992: jle 0x888996 */ if ((fZ||fS!=fO)) goto L_00888996;
L_00888994:; BB(0x00888994);
    /* 00888994: mov edx, ecx */ r_edx = r_ecx;
L_00888996:; BB(0x00888996);
    /* 00888996: mov ecx, 0x3ff */ r_ecx = 0x3ffu;
    /* 0088899b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0088899f: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008889a4: jle 0x8889a8 */ if ((fZ||fS!=fO)) goto L_008889a8;
L_008889a6:; BB(0x008889a6);
    /* 008889a6: mov eax, ecx */ r_eax = r_ecx;
L_008889a8:; BB(0x008889a8);
    /* 008889a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008889aa: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008889ad: cmovl edx, ecx */ if ((fS!=fO)) { r_edx = r_ecx; }
    /* 008889b0: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008889b3: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 008889b7: mov edx, 0 */ r_edx = 0x0u;
    /* 008889bc: cmovl eax, edx */ if ((fS!=fO)) { r_eax = r_edx; }
    /* 008889bf: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 008889c3: jmp 0x8889d1 */ goto L_008889d1;
L_008889c5:; BB(0x008889c5);
    /* 008889c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008889c7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008889c9: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 008889cd: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
L_008889d1:; BB(0x008889d1);
    /* 008889d1: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 008889d5: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 008889d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008889db: mov dword ptr [esp + edx*4 + 0x184], eax */ W32((u32)(r_esp+r_edx*4+0x184u), r_eax);
    /* 008889e2: jne 0x8889eb */ if (!fZ) goto L_008889eb;
L_008889e4:; BB(0x008889e4);
    /* 008889e4: mov dword ptr [esp + edx*4 + 0x80], eax */ W32((u32)(r_esp+r_edx*4+0x80u), r_eax);
L_008889eb:; BB(0x008889eb);
    /* 008889eb: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 008889ef: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 008889f3: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 008889f7: mov dword ptr [esp + ebp*4 + 0x80], eax */ W32((u32)(r_esp+r_ebp*4+0x80u), r_eax);
    /* 008889fe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888a01: mov dword ptr [esp + ebp*4 + 0x184], edx */ W32((u32)(r_esp+r_ebp*4+0x184u), r_edx);
    /* 00888a08: mov dword ptr [esp + edi*4 + 0x80], ecx */ W32((u32)(r_esp+r_edi*4+0x80u), r_ecx);
    /* 00888a0f: jne 0x888a1a */ if (!fZ) goto L_00888a1a;
L_00888a11:; BB(0x00888a11);
    /* 00888a11: mov eax, ecx */ r_eax = r_ecx;
    /* 00888a13: mov dword ptr [esp + edi*4 + 0x184], eax */ W32((u32)(r_esp+r_edi*4+0x184u), r_eax);
L_00888a1a:; BB(0x00888a1a);
    /* 00888a1a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00888a1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00888a20: jl 0x888cf1 */ if ((fS!=fO)) goto L_00888cf1;
L_00888a26:; BB(0x00888a26);
    /* 00888a26: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 00888a29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00888a2b: jl 0x888aa2 */ if ((fS!=fO)) goto L_00888aa2;
L_00888a2d:; BB(0x00888a2d);
    /* 00888a2d: lea edx, [esi - 1] */ r_edx = (u32)(r_esi+0xffffffffu);
    /* 00888a30: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888a33: jl 0x888a8d */ if ((fS!=fO)) goto L_00888a8d;
L_00888a35:; BB(0x00888a35);
    /* 00888a35: cmp edi, dword ptr [esp + eax*4 + 0x38c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x38cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888a3c: jne 0x888aa2 */ if (!fZ) goto L_00888aa2;
L_00888a3e:; BB(0x00888a3e);
    /* 00888a3e: mov dword ptr [esp + eax*4 + 0x38c], ebp */ W32((u32)(r_esp+r_eax*4+0x38cu), r_ebp);
    /* 00888a45: cmp edi, dword ptr [esp + eax*4 + 0x388] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x388u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888a4c: jne 0x888aa2 */ if (!fZ) goto L_00888aa2;
L_00888a4e:; BB(0x00888a4e);
    /* 00888a4e: mov dword ptr [esp + eax*4 + 0x388], ebp */ W32((u32)(r_esp+r_eax*4+0x388u), r_ebp);
    /* 00888a55: cmp edi, dword ptr [esp + eax*4 + 0x384] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x384u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888a5c: jne 0x888aa2 */ if (!fZ) goto L_00888aa2;
L_00888a5e:; BB(0x00888a5e);
    /* 00888a5e: mov dword ptr [esp + eax*4 + 0x384], ebp */ W32((u32)(r_esp+r_eax*4+0x384u), r_ebp);
    /* 00888a65: cmp edi, dword ptr [esp + eax*4 + 0x380] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x380u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888a6c: jne 0x888aa2 */ if (!fZ) goto L_00888aa2;
L_00888a6e:; BB(0x00888a6e);
    /* 00888a6e: mov dword ptr [esp + eax*4 + 0x380], ebp */ W32((u32)(r_esp+r_eax*4+0x380u), r_ebp);
    /* 00888a75: cmp edi, dword ptr [esp + eax*4 + 0x37c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888a7c: jne 0x888aa2 */ if (!fZ) goto L_00888aa2;
L_00888a7e:; BB(0x00888a7e);
    /* 00888a7e: mov dword ptr [esp + eax*4 + 0x37c], ebp */ W32((u32)(r_esp+r_eax*4+0x37cu), r_ebp);
    /* 00888a85: add eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888a88: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888a8b: jge 0x888a35 */ if ((fS==fO)) goto L_00888a35;
L_00888a8d:; BB(0x00888a8d);
    /* 00888a8d: cmp edi, dword ptr [esp + eax*4 + 0x38c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x38cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888a94: jne 0x888aa2 */ if (!fZ) goto L_00888aa2;
L_00888a96:; BB(0x00888a96);
    /* 00888a96: mov dword ptr [esp + eax*4 + 0x38c], ebp */ W32((u32)(r_esp+r_eax*4+0x38cu), r_ebp);
    /* 00888a9d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00888a9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00888aa0: jge 0x888a8d */ if ((fS==fO)) goto L_00888a8d;
L_00888aa2:; BB(0x00888aa2);
    /* 00888aa2: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00888aa3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00888aa7: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888aa9: jge 0x888b4a */ if ((fS==fO)) goto L_00888b4a;
L_00888aaf:; BB(0x00888aaf);
    /* 00888aaf: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00888ab1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888ab4: jl 0x888b2d */ if ((fS!=fO)) goto L_00888b2d;
L_00888ab6:; BB(0x00888ab6);
    /* 00888ab6: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00888aba: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
L_00888abe:; BB(0x00888abe);
    /* 00888abe: cmp eax, dword ptr [esp + esi*4 + 0x288] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+r_esi*4+0x288u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888ac5: jne 0x888ce8 */ if (!fZ) goto L_00888ce8;
L_00888acb:; BB(0x00888acb);
    /* 00888acb: mov dword ptr [esp + esi*4 + 0x288], ebp */ W32((u32)(r_esp+r_esi*4+0x288u), r_ebp);
    /* 00888ad2: cmp eax, dword ptr [esp + esi*4 + 0x28c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+r_esi*4+0x28cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888ad9: jne 0x888cdf */ if (!fZ) goto L_00888cdf;
L_00888adf:; BB(0x00888adf);
    /* 00888adf: mov dword ptr [esp + esi*4 + 0x28c], ebp */ W32((u32)(r_esp+r_esi*4+0x28cu), r_ebp);
    /* 00888ae6: cmp eax, dword ptr [esp + esi*4 + 0x290] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+r_esi*4+0x290u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888aed: jne 0x888ec0 */ if (!fZ) goto L_00888ec0;
L_00888af3:; BB(0x00888af3);
    /* 00888af3: mov dword ptr [esp + esi*4 + 0x290], ebp */ W32((u32)(r_esp+r_esi*4+0x290u), r_ebp);
    /* 00888afa: cmp eax, dword ptr [esp + esi*4 + 0x294] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+r_esi*4+0x294u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888b01: jne 0x888eb7 */ if (!fZ) goto L_00888eb7;
L_00888b07:; BB(0x00888b07);
    /* 00888b07: mov dword ptr [esp + esi*4 + 0x294], ebp */ W32((u32)(r_esp+r_esi*4+0x294u), r_ebp);
    /* 00888b0e: cmp eax, dword ptr [esp + esi*4 + 0x298] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+r_esi*4+0x298u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888b15: jne 0x888eae */ if (!fZ) goto L_00888eae;
L_00888b1b:; BB(0x00888b1b);
    /* 00888b1b: mov dword ptr [esp + esi*4 + 0x298], ebp */ W32((u32)(r_esp+r_esi*4+0x298u), r_ebp);
    /* 00888b22: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00888b25: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888b27: jle 0x888abe */ if ((fZ||fS!=fO)) goto L_00888abe;
L_00888b29:; BB(0x00888b29);
    /* 00888b29: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
L_00888b2d:; BB(0x00888b2d);
    /* 00888b2d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00888b31: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
L_00888b35:; BB(0x00888b35);
    /* 00888b35: cmp eax, dword ptr [esp + esi*4 + 0x288] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+r_esi*4+0x288u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888b3c: jne 0x888b4a */ if (!fZ) goto L_00888b4a;
L_00888b3e:; BB(0x00888b3e);
    /* 00888b3e: mov dword ptr [esp + esi*4 + 0x288], ebp */ W32((u32)(r_esp+r_esi*4+0x288u), r_ebp);
    /* 00888b45: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00888b46: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888b48: jl 0x888b35 */ if ((fS!=fO)) goto L_00888b35;
L_00888b4a:; BB(0x00888b4a);
    /* 00888b4a: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888b4b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00888b4f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888b51: jl 0x88835d */ if ((fS!=fO)) goto L_0088835d;
L_00888b57:; BB(0x00888b57);
    /* 00888b57: mov esi, eax */ r_esi = r_eax;
L_00888b59:; BB(0x00888b59);
    /* 00888b59: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00888b5c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888b5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00888b5f: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00888b62: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x888b67u); f_0087421c();
    /* 00888b67: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00888b6b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00888b6e: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00888b75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00888b77: jl 0x888cd3 */ if ((fS!=fO)) goto L_00888cd3;
L_00888b7d:; BB(0x00888b7d);
    /* 00888b7d: mov eax, dword ptr [esp + 0x184] */ r_eax = R32((u32)(r_esp+0x184u));
    /* 00888b84: lea ecx, [edx + eax] */ r_ecx = (u32)(r_edx+r_eax);
    /* 00888b87: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00888b89: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888b8c: cmovl ecx, edx */ if ((fS!=fO)) { r_ecx = r_edx; }
L_00888b8f:; BB(0x00888b8f);
    /* 00888b8f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00888b93: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00888b95: cmp dword ptr [esp + 0x84], 0 */ {  u32 a = R32((u32)(r_esp+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888b9d: jl 0x888cc7 */ if ((fS!=fO)) goto L_00888cc7;
L_00888ba3:; BB(0x00888ba3);
    /* 00888ba3: cmp dword ptr [esp + 0x188], 0 */ {  u32 a = R32((u32)(r_esp+0x188u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888bab: jl 0x888cbb */ if ((fS!=fO)) goto L_00888cbb;
L_00888bb1:; BB(0x00888bb1);
    /* 00888bb1: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 00888bb8: add edx, dword ptr [esp + 0x188] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x188u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888bbf: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
L_00888bc1:; BB(0x00888bc1);
    /* 00888bc1: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888bc4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00888bc7: mov edx, 2 */ r_edx = 0x2u;
    /* 00888bcc: jle 0x888ca1 */ if ((fZ||fS!=fO)) goto L_00888ca1;
L_00888bd2:; BB(0x00888bd2);
    /* 00888bd2: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
L_00888bd6:; BB(0x00888bd6);
    /* 00888bd6: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00888bda: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00888bdd: mov ebp, dword ptr [edi + edx*4 + 0x400] */ r_ebp = R32((u32)(r_edi+r_edx*4+0x400u));
    /* 00888be4: mov eax, dword ptr [edi + edx*4 + 0x304] */ r_eax = R32((u32)(r_edi+r_edx*4+0x304u));
    /* 00888beb: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00888bef: mov ecx, dword ptr [esi + eax*4 + 0x344] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x344u));
    /* 00888bf6: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00888bfa: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00888bfe: mov edi, dword ptr [ecx + ebp*4] */ r_edi = R32((u32)(r_ecx+r_ebp*4));
    /* 00888c01: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00888c04: mov ecx, dword ptr [esi + edx*4 + 0x344] */ r_ecx = R32((u32)(r_esi+r_edx*4+0x344u));
    /* 00888c0b: and edi, 0x7fff */ {  u32 a = r_edi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00888c11: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00888c16: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00888c18: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00888c1c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00888c1d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00888c1f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00888c21: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00888c25: sub ecx, dword ptr [esi + ebp*4 + 0x344] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+r_ebp*4+0x344u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00888c2c: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00888c2f: mov eax, ecx */ r_eax = r_ecx;
    /* 00888c31: sub edx, dword ptr [esi + ebp*4 + 0x344] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ebp*4+0x344u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00888c38: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00888c3c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00888c3d: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 00888c41: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x00888c41, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00888c41, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00888c43: mov edx, edi */ r_edx = r_edi;
    /* 00888c45: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00888c47: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00888c49: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00888c4d: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888c50: cmovl edi, edx */ if ((fS!=fO)) { r_edi = r_edx; }
    /* 00888c53: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00888c57: mov ecx, dword ptr [esp + edx*4 + 0x80] */ r_ecx = R32((u32)(r_esp+r_edx*4+0x80u));
    /* 00888c5e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888c5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00888c61: jl 0x888cb2 */ if ((fS!=fO)) goto L_00888cb2;
L_00888c63:; BB(0x00888c63);
    /* 00888c63: mov eax, dword ptr [esp + edx*4 + 0x180] */ r_eax = R32((u32)(r_esp+r_edx*4+0x180u));
    /* 00888c6a: lea ebp, [ecx + eax] */ r_ebp = (u32)(r_ecx+r_eax);
    /* 00888c6d: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00888c6f: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888c72: cmovl ebp, ecx */ if ((fS!=fO)) { r_ebp = r_ecx; }
L_00888c75:; BB(0x00888c75);
    /* 00888c75: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00888c77: jl 0x888c87 */ if ((fS!=fO)) goto L_00888c87;
L_00888c79:; BB(0x00888c79);
    /* 00888c79: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00888c7b: je 0x888c87 */ if (fZ) goto L_00888c87;
L_00888c7d:; BB(0x00888c7d);
    /* 00888c7d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00888c81: mov dword ptr [eax + edx*4 - 4], ebp */ W32((u32)(r_eax+r_edx*4+0xfffffffcu), r_ebp);
    /* 00888c85: jmp 0x888c95 */ goto L_00888c95;
L_00888c87:; BB(0x00888c87);
    /* 00888c87: or edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00888c8d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00888c91: mov dword ptr [eax + edx*4 - 4], edi */ W32((u32)(r_eax+r_edx*4+0xfffffffcu), r_edi);
L_00888c95:; BB(0x00888c95);
    /* 00888c95: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00888c99: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888c9b: jl 0x888bd6 */ if ((fS!=fO)) goto L_00888bd6;
L_00888ca1:; BB(0x00888ca1);
    /* 00888ca1: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00888ca5: add esp, 0xd94 */ {  u32 a = r_esp; u32 b = 0xd94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00888cab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00888cac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00888cad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00888cae: mov esp, ebx */ r_esp = r_ebx;
    /* 00888cb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00888cb1: ret  */ FN_RET(0x00887a24); r_esp += 4; return;
L_00888cb2:; BB(0x00888cb2);
    /* 00888cb2: mov ebp, dword ptr [esp + edx*4 + 0x180] */ r_ebp = R32((u32)(r_esp+r_edx*4+0x180u));
    /* 00888cb9: jmp 0x888c75 */ goto L_00888c75;
L_00888cbb:; BB(0x00888cbb);
    /* 00888cbb: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 00888cc2: jmp 0x888bc1 */ goto L_00888bc1;
L_00888cc7:; BB(0x00888cc7);
    /* 00888cc7: mov edx, dword ptr [esp + 0x188] */ r_edx = R32((u32)(r_esp+0x188u));
    /* 00888cce: jmp 0x888bc1 */ goto L_00888bc1;
L_00888cd3:; BB(0x00888cd3);
    /* 00888cd3: mov ecx, dword ptr [esp + 0x184] */ r_ecx = R32((u32)(r_esp+0x184u));
    /* 00888cda: jmp 0x888b8f */ goto L_00888b8f;
L_00888cdf:; BB(0x00888cdf);
    /* 00888cdf: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00888ce3: jmp 0x888b4a */ goto L_00888b4a;
L_00888ce8:; BB(0x00888ce8);
    /* 00888ce8: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00888cec: jmp 0x888b4a */ goto L_00888b4a;
L_00888cf1:; BB(0x00888cf1);
    /* 00888cf1: mov eax, edx */ r_eax = r_edx;
    /* 00888cf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00888cf5: jl 0x888b4a */ if ((fS!=fO)) goto L_00888b4a;
L_00888cfb:; BB(0x00888cfb);
    /* 00888cfb: jmp 0x888a26 */ goto L_00888a26;
L_00888d00:; BB(0x00888d00);
    /* 00888d00: lea ecx, [edx - 4] */ r_ecx = (u32)(r_edx+0xfffffffcu);
    /* 00888d03: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00888d06: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888d08: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888d0a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888d0c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888d0e: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00888d12: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00888d16: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00888d1a: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
L_00888d1e:; BB(0x00888d1e);
    /* 00888d1e: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00888d22: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 00888d26: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 00888d2a: add ebp, dword ptr [edx + esi + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+r_esi+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888d2e: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00888d32: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00888d36: add eax, dword ptr [edx + esi + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_esi+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888d3a: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00888d3e: add edi, dword ptr [edx + esi + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_esi+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00888d42: add ecx, dword ptr [edx + esi + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888d46: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 00888d4a: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00888d4e: add ecx, dword ptr [edx + esi + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_esi+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888d52: add ebp, dword ptr [edx + esi + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+r_esi+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888d56: add eax, dword ptr [edx + esi + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_esi+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888d5a: add edi, dword ptr [edx + esi + 0x30] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_esi+0x30u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00888d5e: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00888d62: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00888d66: add edi, dword ptr [edx + esi + 0x38] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_esi+0x38u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00888d6a: add ecx, dword ptr [edx + esi + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_esi+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888d6e: add ebp, dword ptr [edx + esi + 0x48] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888d72: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 00888d76: add eax, dword ptr [edx + esi + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_esi+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888d7a: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00888d7e: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00888d82: add eax, dword ptr [edx + esi + 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_esi+0x50u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888d86: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00888d8a: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00888d8e: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888d91: add edi, dword ptr [edx + esi + 0x58] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_esi+0x58u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00888d95: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00888d99: add ecx, dword ptr [edx + esi + 0x5c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_esi+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888d9d: add edx, 0x60 */ {  u32 a = r_edx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888da0: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00888da4: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00888da8: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888daa: jle 0x888d1e */ if ((fZ||fS!=fO)) goto L_00888d1e;
L_00888db0:; BB(0x00888db0);
    /* 00888db0: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00888db4: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00888db8: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00888dbc: jmp 0x88879c */ goto L_0088879c;
L_00888dc1:; BB(0x00888dc1);
    /* 00888dc1: lea ecx, [edx - 4] */ r_ecx = (u32)(r_edx+0xfffffffcu);
    /* 00888dc4: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00888dc7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888dc9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888dcb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888dcd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888dcf: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00888dd3: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00888dd7: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00888ddb: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
L_00888ddf:; BB(0x00888ddf);
    /* 00888ddf: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00888de3: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 00888de7: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00888deb: add ebp, dword ptr [edx + esi + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+r_esi+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888def: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00888df3: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00888df7: add eax, dword ptr [edx + esi + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_esi+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888dfb: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00888dff: add edi, dword ptr [edx + esi + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_esi+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00888e03: add ecx, dword ptr [edx + esi + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888e07: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 00888e0b: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00888e0f: add ecx, dword ptr [edx + esi + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_esi+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888e13: add ebp, dword ptr [edx + esi + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+r_esi+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888e17: add eax, dword ptr [edx + esi + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_esi+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888e1b: add edi, dword ptr [edx + esi + 0x30] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_esi+0x30u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00888e1f: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 00888e23: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00888e27: add edi, dword ptr [edx + esi + 0x38] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_esi+0x38u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00888e2b: add ecx, dword ptr [edx + esi + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_esi+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888e2f: add ebp, dword ptr [edx + esi + 0x48] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888e33: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00888e37: add eax, dword ptr [edx + esi + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_esi+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888e3b: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00888e3f: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00888e43: add eax, dword ptr [edx + esi + 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_esi+0x50u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888e47: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00888e4b: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00888e4f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00888e52: add edi, dword ptr [edx + esi + 0x58] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_esi+0x58u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00888e56: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00888e5a: add ecx, dword ptr [edx + esi + 0x5c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_esi+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00888e5e: add edx, 0x60 */ {  u32 a = r_edx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00888e61: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00888e65: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00888e69: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888e6b: jle 0x888ddf */ if ((fZ||fS!=fO)) goto L_00888ddf;
L_00888e71:; BB(0x00888e71);
    /* 00888e71: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00888e75: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00888e79: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00888e7d: jmp 0x8884f0 */ goto L_008884f0;
L_00888e82:; BB(0x00888e82);
    /* 00888e82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00888e84: call 0x85a032 */ r_esp -= 4; W32(r_esp, 0x888e89u); f_0085a032();
    /* 00888e89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00888e8a:; BB(0x00888e8a);
    /* 00888e8a: mov edx, dword ptr [esp + edi*4 + 0x184] */ r_edx = R32((u32)(r_esp+r_edi*4+0x184u));
    /* 00888e91: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00888e95: jmp 0x88841c */ goto L_0088841c;
L_00888e9a:; BB(0x00888e9a);
    /* 00888e9a: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00888e9e: mov ecx, dword ptr [esp + edx*4 + 0x184] */ r_ecx = R32((u32)(r_esp+r_edx*4+0x184u));
    /* 00888ea5: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00888ea9: jmp 0x8883ef */ goto L_008883ef;
L_00888eae:; BB(0x00888eae);
    /* 00888eae: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00888eb2: jmp 0x888b4a */ goto L_00888b4a;
L_00888eb7:; BB(0x00888eb7);
    /* 00888eb7: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00888ebb: jmp 0x888b4a */ goto L_00888b4a;
L_00888ec0:; BB(0x00888ec0);
    /* 00888ec0: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00888ec4: jmp 0x888b4a */ goto L_00888b4a;
L_00888ecc:; BB(0x00888ecc);
    /* 00888ecc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00888ecd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00888ece: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00888ecf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00888ed0: sub esp, 0xd84 */ {  u32 a = r_esp; u32 b = 0xd84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00888ed6: mov edx, dword ptr [esp + 0xd9c] */ r_edx = R32((u32)(r_esp+0xd9cu));
    /* 00888edd: mov eax, dword ptr [edx + 0x510] */ r_eax = R32((u32)(r_edx+0x510u));
    /* 00888ee3: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00888ee7: mov esi, dword ptr [edx + 0x508] */ r_esi = R32((u32)(r_edx+0x508u));
    /* 00888eed: mov ebx, dword ptr [edx + 0x504] */ r_ebx = R32((u32)(r_edx+0x504u));
    /* 00888ef3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00888ef5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00888ef7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00888ef9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00888efb: jle 0x888f44 */ if ((fZ||fS!=fO)) goto L_00888f44;
L_00888efd:; BB(0x00888efd);
    /* 00888efd: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888f00: jl 0x888f34 */ if ((fS!=fO)) goto L_00888f34;
L_00888f02:; BB(0x00888f02);
    /* 00888f02: lea ecx, [ebx - 6] */ r_ecx = (u32)(r_ebx+0xfffffffau);
L_00888f05:; BB(0x00888f05);
    /* 00888f05: mov eax, 0xffffff38 */ r_eax = 0xffffff38u;
    /* 00888f0a: mov dword ptr [esp + ebp*4 + 0xc80], eax */ W32((u32)(r_esp+r_ebp*4+0xc80u), r_eax);
    /* 00888f11: mov dword ptr [esp + ebp*4 + 0xc84], eax */ W32((u32)(r_esp+r_ebp*4+0xc84u), r_eax);
    /* 00888f18: mov dword ptr [esp + ebp*4 + 0xc88], eax */ W32((u32)(r_esp+r_ebp*4+0xc88u), r_eax);
    /* 00888f1f: mov dword ptr [esp + ebp*4 + 0xc8c], eax */ W32((u32)(r_esp+r_ebp*4+0xc8cu), r_eax);
    /* 00888f26: mov dword ptr [esp + ebp*4 + 0xc90], eax */ W32((u32)(r_esp+r_ebp*4+0xc90u), r_eax);
    /* 00888f2d: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888f30: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888f32: jle 0x888f05 */ if ((fZ||fS!=fO)) goto L_00888f05;
L_00888f34:; BB(0x00888f34);
    /* 00888f34: mov dword ptr [esp + ebp*4 + 0xc80], 0xffffff38 */ W32((u32)(r_esp+r_ebp*4+0xc80u), 0xffffff38u);
    /* 00888f3f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888f40: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888f42: jl 0x888f34 */ if ((fS!=fO)) goto L_00888f34;
L_00888f44:; BB(0x00888f44);
    /* 00888f44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00888f46: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00888f48: jle 0x888f82 */ if ((fZ||fS!=fO)) goto L_00888f82;
L_00888f4a:; BB(0x00888f4a);
    /* 00888f4a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888f4d: jl 0x888f75 */ if ((fS!=fO)) goto L_00888f75;
L_00888f4f:; BB(0x00888f4f);
    /* 00888f4f: lea ecx, [ebx - 6] */ r_ecx = (u32)(r_ebx+0xfffffffau);
L_00888f52:; BB(0x00888f52);
    /* 00888f52: mov eax, 0xffffff38 */ r_eax = 0xffffff38u;
    /* 00888f57: mov dword ptr [esp + ebp*4 + 0x70], eax */ W32((u32)(r_esp+r_ebp*4+0x70u), r_eax);
    /* 00888f5b: mov dword ptr [esp + ebp*4 + 0x74], eax */ W32((u32)(r_esp+r_ebp*4+0x74u), r_eax);
    /* 00888f5f: mov dword ptr [esp + ebp*4 + 0x78], eax */ W32((u32)(r_esp+r_ebp*4+0x78u), r_eax);
    /* 00888f63: mov dword ptr [esp + ebp*4 + 0x7c], eax */ W32((u32)(r_esp+r_ebp*4+0x7cu), r_eax);
    /* 00888f67: mov dword ptr [esp + ebp*4 + 0x80], eax */ W32((u32)(r_esp+r_ebp*4+0x80u), r_eax);
    /* 00888f6e: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888f71: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888f73: jle 0x888f52 */ if ((fZ||fS!=fO)) goto L_00888f52;
L_00888f75:; BB(0x00888f75);
    /* 00888f75: mov dword ptr [esp + ebp*4 + 0x70], 0xffffff38 */ W32((u32)(r_esp+r_ebp*4+0x70u), 0xffffff38u);
    /* 00888f7d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888f7e: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888f80: jl 0x888f75 */ if ((fS!=fO)) goto L_00888f75;
L_00888f82:; BB(0x00888f82);
    /* 00888f82: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00888f84: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00888f86: jle 0x888fcc */ if ((fZ||fS!=fO)) goto L_00888fcc;
L_00888f88:; BB(0x00888f88);
    /* 00888f88: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888f8b: jl 0x888fbc */ if ((fS!=fO)) goto L_00888fbc;
L_00888f8d:; BB(0x00888f8d);
    /* 00888f8d: lea ecx, [ebx - 6] */ r_ecx = (u32)(r_ebx+0xfffffffau);
L_00888f90:; BB(0x00888f90);
    /* 00888f90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00888f92: mov dword ptr [esp + ebp*4 + 0x174], eax */ W32((u32)(r_esp+r_ebp*4+0x174u), r_eax);
    /* 00888f99: mov dword ptr [esp + ebp*4 + 0x178], eax */ W32((u32)(r_esp+r_ebp*4+0x178u), r_eax);
    /* 00888fa0: mov dword ptr [esp + ebp*4 + 0x17c], eax */ W32((u32)(r_esp+r_ebp*4+0x17cu), r_eax);
    /* 00888fa7: mov dword ptr [esp + ebp*4 + 0x180], eax */ W32((u32)(r_esp+r_ebp*4+0x180u), r_eax);
    /* 00888fae: mov dword ptr [esp + ebp*4 + 0x184], eax */ W32((u32)(r_esp+r_ebp*4+0x184u), r_eax);
    /* 00888fb5: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888fb8: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888fba: jle 0x888f90 */ if ((fZ||fS!=fO)) goto L_00888f90;
L_00888fbc:; BB(0x00888fbc);
    /* 00888fbc: mov dword ptr [esp + ebp*4 + 0x174], 0 */ W32((u32)(r_esp+r_ebp*4+0x174u), 0x0u);
    /* 00888fc7: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00888fc8: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888fca: jl 0x888fbc */ if ((fS!=fO)) goto L_00888fbc;
L_00888fcc:; BB(0x00888fcc);
    /* 00888fcc: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00888fce: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00888fd0: jle 0x889019 */ if ((fZ||fS!=fO)) goto L_00889019;
L_00888fd2:; BB(0x00888fd2);
    /* 00888fd2: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00888fd5: jl 0x889009 */ if ((fS!=fO)) goto L_00889009;
L_00888fd7:; BB(0x00888fd7);
    /* 00888fd7: lea ecx, [ebx - 6] */ r_ecx = (u32)(r_ebx+0xfffffffau);
L_00888fda:; BB(0x00888fda);
    /* 00888fda: mov eax, 1 */ r_eax = 0x1u;
    /* 00888fdf: mov dword ptr [esp + ebp*4 + 0x278], eax */ W32((u32)(r_esp+r_ebp*4+0x278u), r_eax);
    /* 00888fe6: mov dword ptr [esp + ebp*4 + 0x27c], eax */ W32((u32)(r_esp+r_ebp*4+0x27cu), r_eax);
    /* 00888fed: mov dword ptr [esp + ebp*4 + 0x280], eax */ W32((u32)(r_esp+r_ebp*4+0x280u), r_eax);
    /* 00888ff4: mov dword ptr [esp + ebp*4 + 0x284], eax */ W32((u32)(r_esp+r_ebp*4+0x284u), r_eax);
    /* 00888ffb: mov dword ptr [esp + ebp*4 + 0x288], eax */ W32((u32)(r_esp+r_ebp*4+0x288u), r_eax);
    /* 00889002: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889005: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889007: jle 0x888fda */ if ((fZ||fS!=fO)) goto L_00888fda;
L_00889009:; BB(0x00889009);
    /* 00889009: mov dword ptr [esp + ebp*4 + 0x278], 1 */ W32((u32)(r_esp+r_ebp*4+0x278u), 0x1u);
    /* 00889014: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889015: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889017: jl 0x889009 */ if ((fS!=fO)) goto L_00889009;
L_00889019:; BB(0x00889019);
    /* 00889019: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088901b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088901d: jle 0x889066 */ if ((fZ||fS!=fO)) goto L_00889066;
L_0088901f:; BB(0x0088901f);
    /* 0088901f: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889022: jl 0x889056 */ if ((fS!=fO)) goto L_00889056;
L_00889024:; BB(0x00889024);
    /* 00889024: lea ecx, [ebx - 6] */ r_ecx = (u32)(r_ebx+0xfffffffau);
L_00889027:; BB(0x00889027);
    /* 00889027: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0088902c: mov dword ptr [esp + ebp*4 + 0x37c], eax */ W32((u32)(r_esp+r_ebp*4+0x37cu), r_eax);
    /* 00889033: mov dword ptr [esp + ebp*4 + 0x380], eax */ W32((u32)(r_esp+r_ebp*4+0x380u), r_eax);
    /* 0088903a: mov dword ptr [esp + ebp*4 + 0x384], eax */ W32((u32)(r_esp+r_ebp*4+0x384u), r_eax);
    /* 00889041: mov dword ptr [esp + ebp*4 + 0x388], eax */ W32((u32)(r_esp+r_ebp*4+0x388u), r_eax);
    /* 00889048: mov dword ptr [esp + ebp*4 + 0x38c], eax */ W32((u32)(r_esp+r_ebp*4+0x38cu), r_eax);
    /* 0088904f: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889052: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889054: jle 0x889027 */ if ((fZ||fS!=fO)) goto L_00889027;
L_00889056:; BB(0x00889056);
    /* 00889056: mov dword ptr [esp + ebp*4 + 0x37c], 0xffffffff */ W32((u32)(r_esp+r_ebp*4+0x37cu), 0xffffffffu);
    /* 00889061: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889062: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889064: jl 0x889056 */ if ((fS!=fO)) goto L_00889056;
L_00889066:; BB(0x00889066);
    /* 00889066: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889068: je 0x88930d */ if (fZ) goto L_0088930d;
L_0088906e:; BB(0x0088906e);
    /* 0088906e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00889070: lea ebp, [ebx - 1] */ r_ebp = (u32)(r_ebx+0xffffffffu);
    /* 00889073: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00889075: jle 0x889556 */ if ((fZ||fS!=fO)) goto L_00889556;
L_0088907b:; BB(0x0088907b);
    /* 0088907b: lea ecx, [esi - 1] */ r_ecx = (u32)(r_esi+0xffffffffu);
    /* 0088907e: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00889082: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00889085: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889087: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889089: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088908b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088908d: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00889091: mov dword ptr [esp + 0x68], ebp */ W32((u32)(r_esp+0x68u), r_ebp);
    /* 00889095: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00889099: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0088909d: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 008890a1: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
L_008890a5:; BB(0x008890a5);
    /* 008890a5: mov edx, dword ptr [esp + 0xd9c] */ r_edx = R32((u32)(r_esp+0xd9cu));
    /* 008890ac: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 008890b0: mov ebx, dword ptr [edx + edi*4] */ r_ebx = R32((u32)(r_edx+r_edi*4));
    /* 008890b3: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 008890b7: lea eax, [esp + 0x480] */ r_eax = (u32)(r_esp+0x480u);
    /* 008890be: lea ebp, [eax + ecx] */ r_ebp = (u32)(r_eax+r_ecx);
    /* 008890c1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008890c3: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 008890c7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008890c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008890cb: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 008890cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008890d1: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 008890d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008890d7: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 008890db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008890dd: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 008890e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008890e3: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 008890e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008890e9: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 008890ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008890ef: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 008890f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008890f5: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 008890f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008890fb: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 008890ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00889101: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00889103: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 00889106: mov dword ptr [ebp + 4], esi */ W32((u32)(r_ebp+0x4u), r_esi);
    /* 00889109: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 0088910c: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 0088910f: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00889112: mov dword ptr [ebp + 0x14], esi */ W32((u32)(r_ebp+0x14u), r_esi);
    /* 00889115: mov dword ptr [ebp + 0x18], esi */ W32((u32)(r_ebp+0x18u), r_esi);
    /* 00889118: mov dword ptr [ebp + 0x1c], esi */ W32((u32)(r_ebp+0x1cu), r_esi);
    /* 0088911b: mov dword ptr [esp + ecx + 0x480], ebx */ W32((u32)(r_esp+r_ecx+0x480u), r_ebx);
    /* 00889122: mov dword ptr [esp + ecx + 0x484], edx */ W32((u32)(r_esp+r_ecx+0x484u), r_edx);
    /* 00889129: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 0088912d: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088912f: jl 0x889135 */ if ((fS!=fO)) goto L_00889135;
L_00889131:; BB(0x00889131);
    /* 00889131: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
L_00889135:; BB(0x00889135);
    /* 00889135: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889137: jg 0x88920e */ if ((!fZ&&fS==fO)) goto L_0088920e;
L_0088913d:; BB(0x0088913d);
    /* 0088913d: fld dword ptr [0x99afec] */ FPUSH(R_F32((u32)(0x99afecu)));
    /* 00889143: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00889147: mov ecx, eax */ r_ecx = r_eax;
    /* 00889149: mov esi, dword ptr [esp + 0xda4] */ r_esi = R32((u32)(r_esp+0xda4u));
L_00889150:; BB(0x00889150);
    /* 00889150: fld dword ptr [esi + ebx*4] */ FPUSH(R_F32((u32)(r_esi+r_ebx*4)));
    /* 00889153: fld dword ptr [0x99afe8] */ FPUSH(R_F32((u32)(0x99afe8u)));
    /* 00889159: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0088915b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088915d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00889160: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00889164: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00889169: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088916d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00889171: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00889175: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00889178: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0088917c: cmp ebp, 0x3ff */ {  u32 a = r_ebp; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889182: jg 0x88918e */ if ((!fZ&&fS==fO)) goto L_0088918e;
L_00889184:; BB(0x00889184);
    /* 00889184: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00889186: jl 0x88a062 */ if ((fS!=fO)) goto L_0088a062;
L_0088918c:; BB(0x0088918c);
    /* 0088918c: jmp 0x889193 */ goto L_00889193;
L_0088918e:; BB(0x0088918e);
    /* 0088918e: mov ebp, 0x3ff */ r_ebp = 0x3ffu;
L_00889193:; BB(0x00889193);
    /* 00889193: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889195: je 0x8891fb */ if (fZ) goto L_008891fb;
L_00889197:; BB(0x00889197);
    /* 00889197: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088919b: fld dword ptr [eax + 0x458] */ FPUSH(R_F32((u32)(r_eax+0x458u)));
    /* 008891a1: mov eax, dword ptr [esp + 0xda0] */ r_eax = R32((u32)(r_esp+0xda0u));
    /* 008891a8: fadd dword ptr [eax + ebx*4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ebx*4));
    /* 008891ab: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 008891ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008891af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008891b0: jb 0x8891d7 */ if (fC) goto L_008891d7;
L_008891b2:; BB(0x008891b2);
    /* 008891b2: add dword ptr [esp + 0x5c], ebx */ { u32 ad = (u32)(r_esp+0x5cu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008891b6: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008891b8: mov eax, ebx */ r_eax = r_ebx;
    /* 008891ba: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008891bd: add dword ptr [esp + 0x50], eax */ { u32 ad = (u32)(r_esp+0x50u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008891c1: mov eax, ebp */ r_eax = r_ebp;
    /* 008891c3: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008891c6: add dword ptr [esp + 0x58], eax */ { u32 ad = (u32)(r_esp+0x58u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008891ca: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008891cd: add dword ptr [esp + 0x54], ebp */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008891d1: inc dword ptr [esp + 0x48] */ { u32 ad = (u32)(r_esp+0x48u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008891d5: jmp 0x8891fd */ goto L_008891fd;
L_008891d7:; BB(0x008891d7);
    /* 008891d7: add dword ptr [esp + 0x38], ebx */ { u32 ad = (u32)(r_esp+0x38u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008891db: add dword ptr [esp + 0x34], ebp */ { u32 ad = (u32)(r_esp+0x34u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008891df: mov eax, ebx */ r_eax = r_ebx;
    /* 008891e1: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008891e4: add dword ptr [esp + 0x44], eax */ { u32 ad = (u32)(r_esp+0x44u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008891e8: mov eax, ebp */ r_eax = r_ebp;
    /* 008891ea: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008891ed: add dword ptr [esp + 0x40], eax */ { u32 ad = (u32)(r_esp+0x40u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008891f1: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008891f4: add dword ptr [esp + 0x3c], ebp */ { u32 ad = (u32)(r_esp+0x3cu);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008891f8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008891f9: jmp 0x8891fd */ goto L_008891fd;
L_008891fb:; BB(0x008891fb);
    /* 008891fb: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008891fd:; BB(0x008891fd);
    /* 008891fd: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008891fe: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889200: jle 0x889150 */ if ((fZ||fS!=fO)) goto L_00889150;
L_00889206:; BB(0x00889206);
    /* 00889206: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00889208: mov eax, ecx */ r_eax = r_ecx;
    /* 0088920a: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
L_0088920e:; BB(0x0088920e);
    /* 0088920e: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 00889212: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00889216: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889218: add dword ptr [esp + 0x34], edi */ { u32 ad = (u32)(r_esp+0x34u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088921c: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 00889220: add dword ptr [esp + 0x44], ebx */ { u32 ad = (u32)(r_esp+0x44u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00889224: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 00889228: add dword ptr [esp + 0x40], ebx */ { u32 ad = (u32)(r_esp+0x40u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088922c: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 00889230: add dword ptr [esp + 0x3c], ebx */ { u32 ad = (u32)(r_esp+0x3cu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00889234: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 00889238: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088923a: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0088923e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889242: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889246: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088924a: fmul dword ptr [eax + 0x454] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x454u));
    /* 00889250: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 00889253: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889257: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0088925b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0088925d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00889260: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00889264: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00889269: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088926d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00889271: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00889275: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00889278: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088927c: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088927f: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889281: mov dword ptr [esp + ecx + 0x488], edx */ W32((u32)(r_esp+r_ecx+0x488u), r_edx);
    /* 00889288: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088928b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0088928f: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889291: mov dword ptr [esp + ecx + 0x48c], edx */ W32((u32)(r_esp+r_ecx+0x48cu), r_edx);
    /* 00889298: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 0088929c: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088929f: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 008892a3: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008892a5: mov dword ptr [esp + ecx + 0x490], edx */ W32((u32)(r_esp+r_ecx+0x490u), r_edx);
    /* 008892ac: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 008892b0: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008892b3: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 008892b7: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008892b9: mov dword ptr [esp + ecx + 0x494], ebp */ W32((u32)(r_esp+r_ecx+0x494u), r_ebp);
    /* 008892c0: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008892c3: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 008892c7: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008892c9: mov dword ptr [esp + ecx + 0x498], edx */ W32((u32)(r_esp+r_ecx+0x498u), r_edx);
    /* 008892d0: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008892d3: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008892d7: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008892d9: mov dword ptr [esp + ecx + 0x49c], edx */ W32((u32)(r_esp+r_ecx+0x49cu), r_edx);
    /* 008892e0: add dword ptr [esp + 0x60], esi */ { u32 ad = (u32)(r_esp+0x60u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008892e4: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008892e7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 008892eb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008892ec: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 008892f0: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008892f4: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008892f6: jl 0x8890a5 */ if ((fS!=fO)) goto L_008890a5;
L_008892fc:; BB(0x008892fc);
    /* 008892fc: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00889300: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00889304: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00889308: jmp 0x889556 */ goto L_00889556;
L_0088930d:; BB(0x0088930d);
    /* 0088930d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088930f: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00889313: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00889315: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 00889319: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088931b: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 0088931f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00889321: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00889325: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00889327: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0088932b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088932d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088932f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00889331: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 00889335: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00889337: mov dword ptr [esp + 0x48], ebp */ W32((u32)(r_esp+0x48u), r_ebp);
    /* 0088933b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088933d: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00889341: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00889343: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 00889347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00889349: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088934b: mov dword ptr [esp + 0x480], ebp */ W32((u32)(r_esp+0x480u), r_ebp);
    /* 00889352: mov dword ptr [esp + 0x484], ebp */ W32((u32)(r_esp+0x484u), r_ebp);
    /* 00889359: mov dword ptr [esp + 0x488], ebp */ W32((u32)(r_esp+0x488u), r_ebp);
    /* 00889360: mov dword ptr [esp + 0x48c], ebp */ W32((u32)(r_esp+0x48cu), r_ebp);
    /* 00889367: mov dword ptr [esp + 0x490], ebp */ W32((u32)(r_esp+0x490u), r_ebp);
    /* 0088936e: mov dword ptr [esp + 0x494], ebp */ W32((u32)(r_esp+0x494u), r_ebp);
    /* 00889375: mov dword ptr [esp + 0x498], ebp */ W32((u32)(r_esp+0x498u), r_ebp);
    /* 0088937c: mov dword ptr [esp + 0x49c], ebp */ W32((u32)(r_esp+0x49cu), r_ebp);
    /* 00889383: mov dword ptr [esp + 0x480], 0 */ W32((u32)(r_esp+0x480u), 0x0u);
    /* 0088938e: mov dword ptr [esp + 0x484], esi */ W32((u32)(r_esp+0x484u), r_esi);
    /* 00889395: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00889396: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00889398: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088939a: jl 0x88947a */ if ((fS!=fO)) goto L_0088947a;
L_008893a0:; BB(0x008893a0);
    /* 008893a0: fld dword ptr [0x99afec] */ FPUSH(R_F32((u32)(0x99afecu)));
    /* 008893a6: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 008893aa: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 008893ae: mov edi, edx */ r_edi = r_edx;
    /* 008893b0: mov edx, eax */ r_edx = r_eax;
L_008893b2:; BB(0x008893b2);
    /* 008893b2: mov ebx, dword ptr [esp + 0xda4] */ r_ebx = R32((u32)(r_esp+0xda4u));
    /* 008893b9: fld dword ptr [ebx + ebp*4] */ FPUSH(R_F32((u32)(r_ebx+r_ebp*4)));
    /* 008893bc: fld dword ptr [0x99afe8] */ FPUSH(R_F32((u32)(0x99afe8u)));
    /* 008893c2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008893c4: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 008893c6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008893c9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008893cd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008893d2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008893d6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008893da: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 008893de: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008893e1: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 008893e5: cmp ebx, 0x3ff */ {  u32 a = r_ebx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008893eb: jg 0x8893f7 */ if ((!fZ&&fS==fO)) goto L_008893f7;
L_008893ed:; BB(0x008893ed);
    /* 008893ed: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008893ef: jl 0x88a069 */ if ((fS!=fO)) goto L_0088a069;
L_008893f5:; BB(0x008893f5);
    /* 008893f5: jmp 0x8893fc */ goto L_008893fc;
L_008893f7:; BB(0x008893f7);
    /* 008893f7: mov ebx, 0x3ff */ r_ebx = 0x3ffu;
L_008893fc:; BB(0x008893fc);
    /* 008893fc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008893fe: je 0x889461 */ if (fZ) goto L_00889461;
L_00889400:; BB(0x00889400);
    /* 00889400: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00889404: fld dword ptr [eax + 0x458] */ FPUSH(R_F32((u32)(r_eax+0x458u)));
    /* 0088940a: mov eax, dword ptr [esp + 0xda0] */ r_eax = R32((u32)(r_esp+0xda0u));
    /* 00889411: fadd dword ptr [eax + ebp*4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ebp*4));
    /* 00889414: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00889416: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00889418: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00889419: jb 0x88943f */ if (fC) goto L_0088943f;
L_0088941b:; BB(0x0088941b);
    /* 0088941b: add dword ptr [esp + 0x68], ebp */ { u32 ad = (u32)(r_esp+0x68u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088941f: add dword ptr [esp + 0x5c], ebx */ { u32 ad = (u32)(r_esp+0x5cu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00889423: mov eax, ebp */ r_eax = r_ebp;
    /* 00889425: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00889428: add dword ptr [esp + 0x58], eax */ { u32 ad = (u32)(r_esp+0x58u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088942c: mov eax, ebx */ r_eax = r_ebx;
    /* 0088942e: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00889431: add dword ptr [esp + 0x54], eax */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00889435: imul ebx, ebp */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_ebp; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00889438: add dword ptr [esp + 0x50], ebx */ { u32 ad = (u32)(r_esp+0x50u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088943c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088943d: jmp 0x889463 */ goto L_00889463;
L_0088943f:; BB(0x0088943f);
    /* 0088943f: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889441: add dword ptr [esp + 0x44], ebx */ { u32 ad = (u32)(r_esp+0x44u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00889445: mov eax, ebp */ r_eax = r_ebp;
    /* 00889447: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088944a: add dword ptr [esp + 0x48], eax */ { u32 ad = (u32)(r_esp+0x48u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088944e: mov eax, ebx */ r_eax = r_ebx;
    /* 00889450: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00889453: add dword ptr [esp + 0x40], eax */ { u32 ad = (u32)(r_esp+0x40u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00889457: imul ebx, ebp */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_ebp; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088945a: add dword ptr [esp + 0x4c], ebx */ { u32 ad = (u32)(r_esp+0x4cu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088945e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088945f: jmp 0x889463 */ goto L_00889463;
L_00889461:; BB(0x00889461);
    /* 00889461: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00889463:; BB(0x00889463);
    /* 00889463: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889464: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889466: jle 0x8893b2 */ if ((fZ||fS!=fO)) goto L_008893b2;
L_0088946c:; BB(0x0088946c);
    /* 0088946c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088946e: mov eax, edx */ r_eax = r_edx;
    /* 00889470: mov edx, edi */ r_edx = r_edi;
    /* 00889472: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00889476: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_0088947a:; BB(0x0088947a);
    /* 0088947a: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0088947e: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00889482: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 00889486: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889488: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
    /* 0088948c: add dword ptr [esp + 0x44], ebx */ { u32 ad = (u32)(r_esp+0x44u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00889490: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 00889494: add dword ptr [esp + 0x48], ebp */ { u32 ad = (u32)(r_esp+0x48u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00889498: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 0088949c: add dword ptr [esp + 0x40], ebp */ { u32 ad = (u32)(r_esp+0x40u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008894a0: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 008894a4: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 008894a8: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008894aa: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008894ac: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008894b0: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008894b4: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 008894b8: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 008894bc: fmul dword ptr [eax + 0x454] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x454u));
    /* 008894c2: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 008894c5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008894c9: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 008894cd: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 008894cf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008894d2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008894d6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008894db: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008894df: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008894e3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 008894e7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008894ea: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008894ee: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008894f1: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008894f3: mov dword ptr [esp + 0x488], ecx */ W32((u32)(r_esp+0x488u), r_ecx);
    /* 008894fa: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008894fd: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00889501: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889503: mov dword ptr [esp + 0x48c], ecx */ W32((u32)(r_esp+0x48cu), r_ecx);
    /* 0088950a: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 0088950e: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00889511: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 00889515: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00889517: mov dword ptr [esp + 0x490], ebx */ W32((u32)(r_esp+0x490u), r_ebx);
    /* 0088951e: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00889522: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00889525: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 00889529: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088952b: mov dword ptr [esp + 0x494], ebx */ W32((u32)(r_esp+0x494u), r_ebx);
    /* 00889532: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00889535: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00889537: mov dword ptr [esp + 0x498], esi */ W32((u32)(r_esp+0x498u), r_esi);
    /* 0088953e: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00889541: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00889545: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889547: mov dword ptr [esp + 0x49c], ecx */ W32((u32)(r_esp+0x49cu), r_ecx);
    /* 0088954e: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00889552: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_00889556:; BB(0x00889556);
    /* 00889556: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889558: je 0x88a055 */ if (fZ) goto L_0088a055;
L_0088955e:; BB(0x0088955e);
    /* 0088955e: lea esi, [ebx - 1] */ r_esi = (u32)(r_ebx+0xffffffffu);
    /* 00889561: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00889563: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00889567: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00889569: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 0088956d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088956f: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 00889573: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00889575: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00889577: mov ebp, dword ptr [esp + 0x480] */ r_ebp = R32((u32)(r_esp+0x480u));
    /* 0088957e: lea eax, [ebx + ebx - 2] */ r_eax = (u32)(r_ebx+r_ebx+0xfffffffeu);
    /* 00889582: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889584: mov edi, dword ptr [esp + eax*8 + 0x464] */ r_edi = R32((u32)(r_esp+r_eax*8+0x464u));
    /* 0088958b: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 0088958f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00889591: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00889593: jle 0x8896fd */ if ((fZ||fS!=fO)) goto L_008896fd;
L_00889599:; BB(0x00889599);
    /* 00889599: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0088959c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088959e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008895a0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008895a2: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008895a4: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 008895a8: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 008895ac: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 008895b0: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 008895b4: mov ebx, edi */ r_ebx = r_edi;
    /* 008895b6: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 008895ba: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
L_008895be:; BB(0x008895be);
    /* 008895be: add esi, dword ptr [esp + ebx + 0x488] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+r_ebx+0x488u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008895c5: add ebp, dword ptr [esp + ebx + 0x48c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+r_ebx+0x48cu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008895cc: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 008895d0: add edi, dword ptr [esp + ebx + 0x490] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_ebx+0x490u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008895d7: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 008895db: add ecx, dword ptr [esp + ebx + 0x498] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+r_ebx+0x498u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008895e2: add edx, dword ptr [esp + ebx + 0x49c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+r_ebx+0x49cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008895e9: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008895ec: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008895ed: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 008895f1: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008895f3: jl 0x8895be */ if ((fS!=fO)) goto L_008895be;
L_008895f5:; BB(0x008895f5);
    /* 008895f5: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 008895f9: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 008895fd: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00889601: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00889605: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889607: je 0x8896fd */ if (fZ) goto L_008896fd;
L_0088960d:; BB(0x0088960d);
    /* 0088960d: mov eax, esi */ r_eax = r_esi;
    /* 0088960f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889613: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889617: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 0088961b: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0088961f: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889623: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00889627: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0088962b: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0088962f: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00889633: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889637: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0088963b: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0088963f: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00889641: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00889643: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00889645: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00889647: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00889649: fdivr qword ptr [0x99af60] */ ST(0) = R_F64((u32)(0x99af60u)) / ST(0);
    /* 0088964f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00889651: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00889653: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00889655: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00889657: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00889659: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0088965b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0088965d: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0088965f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00889661: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00889663: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00889665: fadd qword ptr [0x99af58] */ ST(0) = ST(0) + R_F64((u32)(0x99af58u));
    /* 0088966b: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0088966f: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889673: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00889675: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00889677: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0088967a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0088967e: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00889683: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00889688: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088968c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00889690: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00889694: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00889697: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088969b: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 0088969f: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 008896a3: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 008896a7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008896a9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008896ab: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008896ae: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008896b2: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008896b7: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008896bc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008896c0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008896c4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 008896c8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008896cb: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008896cf: mov ebp, 0x3ff */ r_ebp = 0x3ffu;
    /* 008896d4: cmp edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008896da: jle 0x8896de */ if ((fZ||fS!=fO)) goto L_008896de;
L_008896dc:; BB(0x008896dc);
    /* 008896dc: mov edx, ebp */ r_edx = r_ebp;
L_008896de:; BB(0x008896de);
    /* 008896de: mov eax, 0x3ff */ r_eax = 0x3ffu;
    /* 008896e3: cmp ecx, 0x3ff */ {  u32 a = r_ecx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008896e9: jle 0x8896ed */ if ((fZ||fS!=fO)) goto L_008896ed;
L_008896eb:; BB(0x008896eb);
    /* 008896eb: mov ecx, eax */ r_ecx = r_eax;
L_008896ed:; BB(0x008896ed);
    /* 008896ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008896ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008896f1: jge 0x8896f5 */ if ((fS==fO)) goto L_008896f5;
L_008896f3:; BB(0x008896f3);
    /* 008896f3: mov edx, eax */ r_edx = r_eax;
L_008896f5:; BB(0x008896f5);
    /* 008896f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008896f7: jge 0x889701 */ if ((fS==fO)) goto L_00889701;
L_008896f9:; BB(0x008896f9);
    /* 008896f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008896fb: jmp 0x889701 */ goto L_00889701;
L_008896fd:; BB(0x008896fd);
    /* 008896fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008896ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00889701:; BB(0x00889701);
    /* 00889701: mov dword ptr [esp + 0xc80], edx */ W32((u32)(r_esp+0xc80u), r_edx);
    /* 00889708: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0088970c: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 00889710: mov dword ptr [esp + 0xc84], ecx */ W32((u32)(r_esp+0xc84u), r_ecx);
    /* 00889717: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0088971c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088971f: jle 0x889f22 */ if ((fZ||fS!=fO)) goto L_00889f22;
L_00889725:; BB(0x00889725);
    /* 00889725: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
    /* 00889728: fld qword ptr [0x99af60] */ FPUSH(R_F64((u32)(0x99af60u)));
    /* 0088972e: fld qword ptr [0x99af58] */ FPUSH(R_F64((u32)(0x99af58u)));
    /* 00889734: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00889738: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0088973c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088973e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00889740:; BB(0x00889740);
    /* 00889740: mov eax, dword ptr [esp + 0xd9c] */ r_eax = R32((u32)(r_esp+0xd9cu));
    /* 00889747: mov ebx, dword ptr [eax + ebp*4 + 0x208] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x208u));
    /* 0088974e: mov esi, dword ptr [esp + ebx*4 + 0x174] */ r_esi = R32((u32)(r_esp+r_ebx*4+0x174u));
    /* 00889755: mov edi, dword ptr [esp + ebx*4 + 0x278] */ r_edi = R32((u32)(r_esp+r_ebx*4+0x278u));
    /* 0088975c: cmp edi, dword ptr [esp + esi*4 + 0x37c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_esi*4+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889763: je 0x889f13 */ if (fZ) goto L_00889f13;
L_00889769:; BB(0x00889769);
    /* 00889769: mov edx, dword ptr [esp + 0xd9c] */ r_edx = R32((u32)(r_esp+0xd9cu));
    /* 00889770: mov eax, dword ptr [edx + esi*4 + 0x208] */ r_eax = R32((u32)(r_edx+r_esi*4+0x208u));
    /* 00889777: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0088977b: mov ecx, dword ptr [edx + edi*4 + 0x208] */ r_ecx = R32((u32)(r_edx+r_edi*4+0x208u));
    /* 00889782: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00889786: mov dword ptr [esp + esi*4 + 0x37c], edi */ W32((u32)(r_esp+r_esi*4+0x37cu), r_edi);
    /* 0088978d: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00889791: mov eax, dword ptr [edx + esi*4 + 0x344] */ r_eax = R32((u32)(r_edx+r_esi*4+0x344u));
    /* 00889798: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0088979c: mov eax, dword ptr [edx + edi*4 + 0x344] */ r_eax = R32((u32)(r_edx+r_edi*4+0x344u));
    /* 008897a3: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 008897a7: mov edx, dword ptr [esp + esi*4 + 0xc80] */ r_edx = R32((u32)(r_esp+r_esi*4+0xc80u));
    /* 008897ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008897b0: jl 0x88a0d6 */ if ((fS!=fO)) goto L_0088a0d6;
L_008897b6:; BB(0x008897b6);
    /* 008897b6: mov eax, dword ptr [esp + esi*4 + 0x70] */ r_eax = R32((u32)(r_esp+r_esi*4+0x70u));
    /* 008897ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008897bc: jl 0x8897c2 */ if ((fS!=fO)) goto L_008897c2;
L_008897be:; BB(0x008897be);
    /* 008897be: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008897c0: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
L_008897c2:; BB(0x008897c2);
    /* 008897c2: mov eax, dword ptr [esp + edi*4 + 0xc80] */ r_eax = R32((u32)(r_esp+r_edi*4+0xc80u));
    /* 008897c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008897cb: jl 0x88a0cd */ if ((fS!=fO)) goto L_0088a0cd;
L_008897d1:; BB(0x008897d1);
    /* 008897d1: mov ecx, dword ptr [esp + edi*4 + 0x70] */ r_ecx = R32((u32)(r_esp+r_edi*4+0x70u));
    /* 008897d5: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 008897d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008897db: jl 0x8897e3 */ if ((fS!=fO)) goto L_008897e3;
L_008897dd:; BB(0x008897dd);
    /* 008897dd: add eax, dword ptr [esp + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x68u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008897e1: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
L_008897e3:; BB(0x008897e3);
    /* 008897e3: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008897e6: je 0x88a0c5 */ if (fZ) goto L_0088a0c5;
L_008897ec:; BB(0x008897ec);
    /* 008897ec: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008897ef: je 0x88a0c5 */ if (fZ) goto L_0088a0c5;
L_008897f5:; BB(0x008897f5);
    /* 008897f5: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008897f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008897fa: mov ecx, dword ptr [esp + 0xda4] */ r_ecx = R32((u32)(r_esp+0xda4u));
    /* 00889801: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00889802: mov ecx, dword ptr [esp + 0xdac] */ r_ecx = R32((u32)(r_esp+0xdacu));
    /* 00889809: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088980a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088980b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088980c: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 00889810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00889811: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 00889815: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00889816: call 0x88b230 */ r_esp -= 4; W32(r_esp, 0x88981bu); f_0088b230();
    /* 0088981b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088981e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889820: jne 0x889837 */ if (!fZ) goto L_00889837;
L_00889822:; BB(0x00889822);
    /* 00889822: mov eax, 0xffffff38 */ r_eax = 0xffffff38u;
    /* 00889827: mov dword ptr [esp + ebp*4 + 0xc80], eax */ W32((u32)(r_esp+r_ebp*4+0xc80u), r_eax);
    /* 0088982e: mov dword ptr [esp + ebp*4 + 0x70], eax */ W32((u32)(r_esp+r_ebp*4+0x70u), r_eax);
    /* 00889832: jmp 0x889f13 */ goto L_00889f13;
L_00889837:; BB(0x00889837);
    /* 00889837: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0088983b: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0088983f: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00889842: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889844: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00889847: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889849: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088984b: lea edi, [esp + 0x480] */ r_edi = (u32)(r_esp+0x480u);
    /* 00889852: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889854: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00889858: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088985a: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088985c: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00889860: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00889862: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
    /* 00889866: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00889868: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 0088986c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088986e: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00889872: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00889874: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00889878: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088987a: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0088987e: mov edx, dword ptr [esp + edx*8 + 0x480] */ r_edx = R32((u32)(r_esp+r_edx*8+0x480u));
    /* 00889885: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00889889: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0088988c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088988e: mov eax, dword ptr [eax + edx*8 - 0x1c] */ r_eax = R32((u32)(r_eax+r_edx*8+0xffffffe4u));
    /* 00889892: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00889896: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00889898: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088989a: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0088989e: jle 0x889ae9 */ if ((fZ||fS!=fO)) goto L_00889ae9;
L_008898a4:; BB(0x008898a4);
    /* 008898a4: mov eax, ecx */ r_eax = r_ecx;
    /* 008898a6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008898a9: jl 0x88995f */ if ((fS!=fO)) goto L_0088995f;
L_008898af:; BB(0x008898af);
    /* 008898af: lea ecx, [eax - 4] */ r_ecx = (u32)(r_eax+0xfffffffcu);
    /* 008898b2: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 008898b5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008898b7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008898b9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008898bb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008898bd: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 008898c1: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 008898c5: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 008898c9: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 008898cd: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
L_008898d1:; BB(0x008898d1);
    /* 008898d1: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 008898d5: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 008898d9: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 008898dd: add edx, dword ptr [eax + esi + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_esi+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008898e1: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 008898e5: add ecx, dword ptr [eax + esi + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_esi+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008898e9: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
    /* 008898ed: add ebx, dword ptr [eax + esi + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+r_esi+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008898f1: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 008898f5: add ebp, dword ptr [eax + esi + 0x18] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008898f9: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 008898fd: add edi, dword ptr [eax + esi + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_esi+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00889901: add edx, dword ptr [eax + esi + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_esi+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889905: add ecx, dword ptr [eax + esi + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_esi+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889909: add ebx, dword ptr [eax + esi + 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+r_esi+0x30u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088990d: add ebp, dword ptr [eax + esi + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+r_esi+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889911: add edi, dword ptr [eax + esi + 0x3c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_esi+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00889915: add edx, dword ptr [eax + esi + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889919: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0088991d: add ecx, dword ptr [eax + esi + 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_esi+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889921: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 00889925: add ebx, dword ptr [eax + esi + 0x50] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+r_esi+0x50u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00889929: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 0088992d: add ebp, dword ptr [eax + esi + 0x58] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+r_esi+0x58u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889931: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 00889935: add edi, dword ptr [eax + esi + 0x5c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_esi+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00889939: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0088993d: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889940: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00889944: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889947: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0088994b: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088994d: jle 0x8898d1 */ if ((fZ||fS!=fO)) goto L_008898d1;
L_0088994f:; BB(0x0088994f);
    /* 0088994f: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 00889953: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00889957: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0088995b: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
L_0088995f:; BB(0x0088995f);
    /* 0088995f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00889962: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889964: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889966: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889968: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088996a: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0088996e: lea eax, [eax + ecx + 8] */ r_eax = (u32)(r_eax+r_ecx+0x8u);
    /* 00889972: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 00889976: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0088997a: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0088997e: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00889982: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 00889986: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
    /* 0088998a: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 0088998e: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
L_00889992:; BB(0x00889992);
    /* 00889992: add esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00889994: add ebp, dword ptr [eax + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889997: add ebx, dword ptr [eax + 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088999a: add ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088999d: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 008899a1: add edi, dword ptr [eax + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008899a4: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 008899a8: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008899ab: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008899ac: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 008899b0: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008899b2: jl 0x889992 */ if ((fS!=fO)) goto L_00889992;
L_008899b4:; BB(0x008899b4);
    /* 008899b4: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 008899b8: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 008899bc: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 008899c0: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 008899c4: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 008899c8: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 008899cc: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 008899d0: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 008899d4: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 008899d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008899da: je 0x889ae9 */ if (fZ) goto L_00889ae9;
L_008899e0:; BB(0x008899e0);
    /* 008899e0: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 008899e4: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 008899e8: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 008899ec: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 008899f0: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008899f4: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 008899f8: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 008899fc: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889a00: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889a04: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00889a08: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889a0c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889a10: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00889a14: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889a18: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889a1c: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00889a1e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00889a20: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00889a22: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00889a24: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00889a26: fdivr qword ptr [0x99af60] */ ST(0) = R_F64((u32)(0x99af60u)) / ST(0);
    /* 00889a2c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00889a2e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00889a30: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00889a32: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00889a34: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00889a36: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00889a38: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00889a3a: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00889a3c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00889a3e: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00889a40: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00889a42: fadd qword ptr [0x99af58] */ ST(0) = ST(0) + R_F64((u32)(0x99af58u));
    /* 00889a48: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00889a4c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889a50: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889a54: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00889a56: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00889a58: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00889a5b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00889a5f: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00889a64: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00889a69: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00889a6d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00889a71: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00889a75: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00889a78: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00889a7c: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00889a80: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889a84: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889a88: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00889a8a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00889a8c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00889a8f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00889a93: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00889a98: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00889a9d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00889aa1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00889aa5: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00889aa9: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00889aac: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00889ab0: mov ecx, 0x3ff */ r_ecx = 0x3ffu;
    /* 00889ab5: cmp edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889abb: jle 0x889abf */ if ((fZ||fS!=fO)) goto L_00889abf;
L_00889abd:; BB(0x00889abd);
    /* 00889abd: mov edx, ecx */ r_edx = r_ecx;
L_00889abf:; BB(0x00889abf);
    /* 00889abf: mov ecx, 0x3ff */ r_ecx = 0x3ffu;
    /* 00889ac4: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889ac9: jle 0x889acd */ if ((fZ||fS!=fO)) goto L_00889acd;
L_00889acb:; BB(0x00889acb);
    /* 00889acb: mov eax, ecx */ r_eax = r_ecx;
L_00889acd:; BB(0x00889acd);
    /* 00889acd: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00889ad1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00889ad3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00889ad5: jge 0x889ad9 */ if ((fS==fO)) goto L_00889ad9;
L_00889ad7:; BB(0x00889ad7);
    /* 00889ad7: mov edx, ecx */ r_edx = r_ecx;
L_00889ad9:; BB(0x00889ad9);
    /* 00889ad9: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00889add: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00889adf: jge 0x889af5 */ if ((fS==fO)) goto L_00889af5;
L_00889ae1:; BB(0x00889ae1);
    /* 00889ae1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00889ae3: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00889ae7: jmp 0x889af5 */ goto L_00889af5;
L_00889ae9:; BB(0x00889ae9);
    /* 00889ae9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00889aeb: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00889aef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00889af1: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
L_00889af5:; BB(0x00889af5);
    /* 00889af5: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 00889af9: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00889afc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889afe: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00889b01: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889b03: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889b05: lea eax, [esp + 0x480] */ r_eax = (u32)(r_esp+0x480u);
    /* 00889b0c: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889b0e: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00889b12: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00889b16: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00889b18: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00889b1c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00889b1e: mov dword ptr [esp + 0x68], ebx */ W32((u32)(r_esp+0x68u), r_ebx);
    /* 00889b22: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00889b24: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 00889b28: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00889b2a: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 00889b2e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00889b30: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 00889b34: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00889b36: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00889b3a: mov ecx, dword ptr [esp + ecx*8 + 0x480] */ r_ecx = R32((u32)(r_esp+r_ecx*8+0x480u));
    /* 00889b41: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 00889b45: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00889b48: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889b4a: mov edx, dword ptr [edx + ecx*8 - 0x1c] */ r_edx = R32((u32)(r_edx+r_ecx*8+0xffffffe4u));
    /* 00889b4e: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00889b52: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00889b54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00889b56: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 00889b5a: jle 0x889c8e */ if ((fZ||fS!=fO)) goto L_00889c8e;
L_00889b60:; BB(0x00889b60);
    /* 00889b60: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889b63: jl 0x889c19 */ if ((fS!=fO)) goto L_00889c19;
L_00889b69:; BB(0x00889b69);
    /* 00889b69: lea ecx, [eax - 4] */ r_ecx = (u32)(r_eax+0xfffffffcu);
    /* 00889b6c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00889b6f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889b71: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889b73: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889b75: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889b77: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 00889b7b: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00889b7f: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00889b83: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00889b87: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
L_00889b8b:; BB(0x00889b8b);
    /* 00889b8b: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00889b8f: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 00889b93: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00889b97: add edx, dword ptr [eax + esi + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_esi+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889b9b: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00889b9f: add ecx, dword ptr [eax + esi + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_esi+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889ba3: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 00889ba7: add ebx, dword ptr [eax + esi + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+r_esi+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00889bab: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 00889baf: add ebp, dword ptr [eax + esi + 0x18] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889bb3: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00889bb7: add edi, dword ptr [eax + esi + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_esi+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00889bbb: add edx, dword ptr [eax + esi + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_esi+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889bbf: add ecx, dword ptr [eax + esi + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_esi+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889bc3: add ebx, dword ptr [eax + esi + 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+r_esi+0x30u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00889bc7: add ebp, dword ptr [eax + esi + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+r_esi+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889bcb: add edi, dword ptr [eax + esi + 0x3c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_esi+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00889bcf: add edx, dword ptr [eax + esi + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889bd3: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00889bd7: add ecx, dword ptr [eax + esi + 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_esi+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889bdb: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00889bdf: add ebx, dword ptr [eax + esi + 0x50] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+r_esi+0x50u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00889be3: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 00889be7: add ebp, dword ptr [eax + esi + 0x58] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+r_esi+0x58u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889beb: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00889bef: add edi, dword ptr [eax + esi + 0x5c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_esi+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00889bf3: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 00889bf7: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889bfa: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00889bfe: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889c01: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00889c05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889c07: jle 0x889b8b */ if ((fZ||fS!=fO)) goto L_00889b8b;
L_00889c09:; BB(0x00889c09);
    /* 00889c09: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 00889c0d: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00889c11: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00889c15: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
L_00889c19:; BB(0x00889c19);
    /* 00889c19: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00889c1c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889c1e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889c20: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889c22: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889c24: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00889c28: lea eax, [eax + ecx + 8] */ r_eax = (u32)(r_eax+r_ecx+0x8u);
    /* 00889c2c: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 00889c30: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00889c34: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00889c38: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00889c3c: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00889c40: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 00889c44: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00889c48: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
L_00889c4c:; BB(0x00889c4c);
    /* 00889c4c: add esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00889c4e: add ebp, dword ptr [eax + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889c51: add ebx, dword ptr [eax + 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00889c54: add ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889c57: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00889c5b: add edi, dword ptr [eax + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00889c5e: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 00889c62: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889c65: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00889c66: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 00889c6a: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889c6c: jl 0x889c4c */ if ((fS!=fO)) goto L_00889c4c;
L_00889c6e:; BB(0x00889c6e);
    /* 00889c6e: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00889c72: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 00889c76: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00889c7a: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
    /* 00889c7e: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 00889c82: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00889c86: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00889c8a: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
L_00889c8e:; BB(0x00889c8e);
    /* 00889c8e: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00889c92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889c94: je 0x889da3 */ if (fZ) goto L_00889da3;
L_00889c9a:; BB(0x00889c9a);
    /* 00889c9a: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 00889c9e: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00889ca2: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889ca6: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00889caa: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889cae: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889cb2: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00889cb6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889cba: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889cbe: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00889cc2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889cc6: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889cca: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00889cce: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889cd2: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889cd6: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00889cd8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00889cda: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00889cdc: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00889cde: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00889ce0: fdivr qword ptr [0x99af60] */ ST(0) = R_F64((u32)(0x99af60u)) / ST(0);
    /* 00889ce6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00889ce8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00889cea: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00889cec: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00889cee: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00889cf0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00889cf2: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00889cf4: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00889cf6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00889cf8: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00889cfa: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00889cfc: fadd qword ptr [0x99af58] */ ST(0) = ST(0) + R_F64((u32)(0x99af58u));
    /* 00889d02: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00889d06: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889d0a: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889d0e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00889d10: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00889d12: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00889d15: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00889d19: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00889d1e: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00889d23: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00889d27: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00889d2b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00889d2f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00889d32: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00889d36: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00889d3a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00889d3e: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00889d42: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00889d44: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00889d46: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00889d49: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00889d4d: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00889d52: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00889d57: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00889d5b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00889d5f: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00889d63: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00889d66: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00889d6a: mov ecx, 0x3ff */ r_ecx = 0x3ffu;
    /* 00889d6f: cmp edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889d75: jle 0x889d79 */ if ((fZ||fS!=fO)) goto L_00889d79;
L_00889d77:; BB(0x00889d77);
    /* 00889d77: mov edx, ecx */ r_edx = r_ecx;
L_00889d79:; BB(0x00889d79);
    /* 00889d79: mov ecx, 0x3ff */ r_ecx = 0x3ffu;
    /* 00889d7e: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889d83: jle 0x889d87 */ if ((fZ||fS!=fO)) goto L_00889d87;
L_00889d85:; BB(0x00889d85);
    /* 00889d85: mov eax, ecx */ r_eax = r_ecx;
L_00889d87:; BB(0x00889d87);
    /* 00889d87: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00889d8b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00889d8d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00889d8f: jge 0x889d93 */ if ((fS==fO)) goto L_00889d93;
L_00889d91:; BB(0x00889d91);
    /* 00889d91: mov edx, ecx */ r_edx = r_ecx;
L_00889d93:; BB(0x00889d93);
    /* 00889d93: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00889d97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00889d99: jge 0x889daf */ if ((fS==fO)) goto L_00889daf;
L_00889d9b:; BB(0x00889d9b);
    /* 00889d9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00889d9d: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00889da1: jmp 0x889daf */ goto L_00889daf;
L_00889da3:; BB(0x00889da3);
    /* 00889da3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00889da5: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00889da9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00889dab: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
L_00889daf:; BB(0x00889daf);
    /* 00889daf: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00889db3: mov dword ptr [esp + esi*4 + 0x70], eax */ W32((u32)(r_esp+r_esi*4+0x70u), r_eax);
    /* 00889db7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889db9: jne 0x889dc2 */ if (!fZ) goto L_00889dc2;
L_00889dbb:; BB(0x00889dbb);
    /* 00889dbb: mov dword ptr [esp + esi*4 + 0xc80], eax */ W32((u32)(r_esp+r_esi*4+0xc80u), r_eax);
L_00889dc2:; BB(0x00889dc2);
    /* 00889dc2: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00889dc6: mov dword ptr [esp + ebp*4 + 0xc80], eax */ W32((u32)(r_esp+r_ebp*4+0xc80u), r_eax);
    /* 00889dcd: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 00889dd1: mov dword ptr [esp + ebp*4 + 0x70], edx */ W32((u32)(r_esp+r_ebp*4+0x70u), r_edx);
    /* 00889dd5: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 00889dd9: mov dword ptr [esp + edi*4 + 0xc80], ecx */ W32((u32)(r_esp+r_edi*4+0xc80u), r_ecx);
    /* 00889de0: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889de3: jne 0x889deb */ if (!fZ) goto L_00889deb;
L_00889de5:; BB(0x00889de5);
    /* 00889de5: mov eax, ecx */ r_eax = r_ecx;
    /* 00889de7: mov dword ptr [esp + edi*4 + 0x70], eax */ W32((u32)(r_esp+r_edi*4+0x70u), r_eax);
L_00889deb:; BB(0x00889deb);
    /* 00889deb: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00889def: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00889df1: jl 0x88a0b6 */ if ((fS!=fO)) goto L_0088a0b6;
L_00889df7:; BB(0x00889df7);
    /* 00889df7: lea eax, [ebx - 1] */ r_eax = (u32)(r_ebx+0xffffffffu);
    /* 00889dfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00889dfc: jl 0x889e73 */ if ((fS!=fO)) goto L_00889e73;
L_00889dfe:; BB(0x00889dfe);
    /* 00889dfe: lea edx, [ebx - 1] */ r_edx = (u32)(r_ebx+0xffffffffu);
    /* 00889e01: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889e04: jl 0x889e5e */ if ((fS!=fO)) goto L_00889e5e;
L_00889e06:; BB(0x00889e06);
    /* 00889e06: cmp edi, dword ptr [esp + eax*4 + 0x278] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x278u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889e0d: jne 0x889e73 */ if (!fZ) goto L_00889e73;
L_00889e0f:; BB(0x00889e0f);
    /* 00889e0f: mov dword ptr [esp + eax*4 + 0x278], ebp */ W32((u32)(r_esp+r_eax*4+0x278u), r_ebp);
    /* 00889e16: cmp edi, dword ptr [esp + eax*4 + 0x274] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x274u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889e1d: jne 0x889e73 */ if (!fZ) goto L_00889e73;
L_00889e1f:; BB(0x00889e1f);
    /* 00889e1f: mov dword ptr [esp + eax*4 + 0x274], ebp */ W32((u32)(r_esp+r_eax*4+0x274u), r_ebp);
    /* 00889e26: cmp edi, dword ptr [esp + eax*4 + 0x270] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x270u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889e2d: jne 0x889e73 */ if (!fZ) goto L_00889e73;
L_00889e2f:; BB(0x00889e2f);
    /* 00889e2f: mov dword ptr [esp + eax*4 + 0x270], ebp */ W32((u32)(r_esp+r_eax*4+0x270u), r_ebp);
    /* 00889e36: cmp edi, dword ptr [esp + eax*4 + 0x26c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x26cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889e3d: jne 0x889e73 */ if (!fZ) goto L_00889e73;
L_00889e3f:; BB(0x00889e3f);
    /* 00889e3f: mov dword ptr [esp + eax*4 + 0x26c], ebp */ W32((u32)(r_esp+r_eax*4+0x26cu), r_ebp);
    /* 00889e46: cmp edi, dword ptr [esp + eax*4 + 0x268] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x268u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889e4d: jne 0x889e73 */ if (!fZ) goto L_00889e73;
L_00889e4f:; BB(0x00889e4f);
    /* 00889e4f: mov dword ptr [esp + eax*4 + 0x268], ebp */ W32((u32)(r_esp+r_eax*4+0x268u), r_ebp);
    /* 00889e56: add eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889e59: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889e5c: jge 0x889e06 */ if ((fS==fO)) goto L_00889e06;
L_00889e5e:; BB(0x00889e5e);
    /* 00889e5e: cmp edi, dword ptr [esp + eax*4 + 0x278] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_eax*4+0x278u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889e65: jne 0x889e73 */ if (!fZ) goto L_00889e73;
L_00889e67:; BB(0x00889e67);
    /* 00889e67: mov dword ptr [esp + eax*4 + 0x278], ebp */ W32((u32)(r_esp+r_eax*4+0x278u), r_ebp);
    /* 00889e6e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00889e6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00889e71: jge 0x889e5e */ if ((fS==fO)) goto L_00889e5e;
L_00889e73:; BB(0x00889e73);
    /* 00889e73: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00889e74: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00889e78: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889e7a: jge 0x889f13 */ if ((fS==fO)) goto L_00889f13;
L_00889e80:; BB(0x00889e80);
    /* 00889e80: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00889e82: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889e85: jl 0x889efa */ if ((fS!=fO)) goto L_00889efa;
L_00889e87:; BB(0x00889e87);
    /* 00889e87: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
L_00889e8b:; BB(0x00889e8b);
    /* 00889e8b: cmp esi, dword ptr [esp + ebx*4 + 0x174] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+r_ebx*4+0x174u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889e92: jne 0x88a0ad */ if (!fZ) goto L_0088a0ad;
L_00889e98:; BB(0x00889e98);
    /* 00889e98: mov dword ptr [esp + ebx*4 + 0x174], ebp */ W32((u32)(r_esp+r_ebx*4+0x174u), r_ebp);
    /* 00889e9f: cmp esi, dword ptr [esp + ebx*4 + 0x178] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+r_ebx*4+0x178u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889ea6: jne 0x88a0a4 */ if (!fZ) goto L_0088a0a4;
L_00889eac:; BB(0x00889eac);
    /* 00889eac: mov dword ptr [esp + ebx*4 + 0x178], ebp */ W32((u32)(r_esp+r_ebx*4+0x178u), r_ebp);
    /* 00889eb3: cmp esi, dword ptr [esp + ebx*4 + 0x17c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+r_ebx*4+0x17cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889eba: jne 0x88a0f1 */ if (!fZ) goto L_0088a0f1;
L_00889ec0:; BB(0x00889ec0);
    /* 00889ec0: mov dword ptr [esp + ebx*4 + 0x17c], ebp */ W32((u32)(r_esp+r_ebx*4+0x17cu), r_ebp);
    /* 00889ec7: cmp esi, dword ptr [esp + ebx*4 + 0x180] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+r_ebx*4+0x180u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889ece: jne 0x88a0e8 */ if (!fZ) goto L_0088a0e8;
L_00889ed4:; BB(0x00889ed4);
    /* 00889ed4: mov dword ptr [esp + ebx*4 + 0x180], ebp */ W32((u32)(r_esp+r_ebx*4+0x180u), r_ebp);
    /* 00889edb: cmp esi, dword ptr [esp + ebx*4 + 0x184] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+r_ebx*4+0x184u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889ee2: jne 0x88a0df */ if (!fZ) goto L_0088a0df;
L_00889ee8:; BB(0x00889ee8);
    /* 00889ee8: mov dword ptr [esp + ebx*4 + 0x184], ebp */ W32((u32)(r_esp+r_ebx*4+0x184u), r_ebp);
    /* 00889eef: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00889ef2: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889ef4: jle 0x889e8b */ if ((fZ||fS!=fO)) goto L_00889e8b;
L_00889ef6:; BB(0x00889ef6);
    /* 00889ef6: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
L_00889efa:; BB(0x00889efa);
    /* 00889efa: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00889efe:; BB(0x00889efe);
    /* 00889efe: cmp esi, dword ptr [esp + ebx*4 + 0x174] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+r_ebx*4+0x174u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00889f05: jne 0x889f13 */ if (!fZ) goto L_00889f13;
L_00889f07:; BB(0x00889f07);
    /* 00889f07: mov dword ptr [esp + ebx*4 + 0x174], ebp */ W32((u32)(r_esp+r_ebx*4+0x174u), r_ebp);
    /* 00889f0e: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00889f0f: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889f11: jl 0x889efe */ if ((fS!=fO)) goto L_00889efe;
L_00889f13:; BB(0x00889f13);
    /* 00889f13: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00889f14: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00889f18: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889f1a: jl 0x889740 */ if ((fS!=fO)) goto L_00889740;
L_00889f20:; BB(0x00889f20);
    /* 00889f20: mov ebx, eax */ r_ebx = r_eax;
L_00889f22:; BB(0x00889f22);
    /* 00889f22: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00889f25: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00889f27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00889f28: push dword ptr [esp + 0xd9c] */ { u32 v = R32((u32)(r_esp+0xd9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00889f2f: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x889f34u); f_0087421c();
    /* 00889f34: mov edi, eax */ r_edi = r_eax;
    /* 00889f36: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00889f39: cmp dword ptr [esp + 0xc80], 0 */ {  u32 a = R32((u32)(r_esp+0xc80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889f41: jl 0x88a09b */ if ((fS!=fO)) goto L_0088a09b;
L_00889f47:; BB(0x00889f47);
    /* 00889f47: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00889f4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00889f4d: jl 0x88a08f */ if ((fS!=fO)) goto L_0088a08f;
L_00889f53:; BB(0x00889f53);
    /* 00889f53: mov ecx, dword ptr [esp + 0xc80] */ r_ecx = R32((u32)(r_esp+0xc80u));
    /* 00889f5a: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889f5c: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
L_00889f5e:; BB(0x00889f5e);
    /* 00889f5e: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 00889f60: cmp dword ptr [esp + 0xc84], 0 */ {  u32 a = R32((u32)(r_esp+0xc84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889f68: jl 0x88a086 */ if ((fS!=fO)) goto L_0088a086;
L_00889f6e:; BB(0x00889f6e);
    /* 00889f6e: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00889f72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00889f74: jl 0x88a07a */ if ((fS!=fO)) goto L_0088a07a;
L_00889f7a:; BB(0x00889f7a);
    /* 00889f7a: mov ecx, dword ptr [esp + 0xc84] */ r_ecx = R32((u32)(r_esp+0xc84u));
    /* 00889f81: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00889f83: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
L_00889f85:; BB(0x00889f85);
    /* 00889f85: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 00889f88: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00889f8d: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00889f90: jle 0x88a055 */ if ((fZ||fS!=fO)) goto L_0088a055;
L_00889f96:; BB(0x00889f96);
    /* 00889f96: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00889f9a: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
L_00889f9e:; BB(0x00889f9e);
    /* 00889f9e: mov eax, dword ptr [esp + 0xd9c] */ r_eax = R32((u32)(r_esp+0xd9cu));
    /* 00889fa5: mov ebp, dword ptr [eax + ecx*4 + 0x400] */ r_ebp = R32((u32)(r_eax+r_ecx*4+0x400u));
    /* 00889fac: mov esi, dword ptr [eax + ecx*4 + 0x304] */ r_esi = R32((u32)(r_eax+r_ecx*4+0x304u));
    /* 00889fb3: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00889fb7: mov edi, dword ptr [ebx + esi*4 + 0x344] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x344u));
    /* 00889fbe: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00889fc2: mov edx, dword ptr [eax + ebp*4] */ r_edx = R32((u32)(r_eax+r_ebp*4));
    /* 00889fc5: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 00889fc8: mov esi, dword ptr [ebx + ecx*4 + 0x344] */ r_esi = R32((u32)(r_ebx+r_ecx*4+0x344u));
    /* 00889fcf: and edx, 0x7fff */ {  u32 a = r_edx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00889fd5: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00889fd9: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00889fde: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00889fe0: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00889fe4: sub edi, dword ptr [ebx + ebp*4 + 0x344] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+r_ebp*4+0x344u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00889feb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00889fec: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00889fee: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00889ff0: sub esi, dword ptr [ebx + ebp*4 + 0x344] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+r_ebp*4+0x344u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00889ff7: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00889ffa: mov eax, esi */ r_eax = r_esi;
    /* 00889ffc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00889ffd: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x00889ffd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00889ffd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00889fff: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a000: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0088a004: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a006: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 0088a00a: jl 0x88a076 */ if ((fS!=fO)) goto L_0088a076;
L_0088a00c:; BB(0x0088a00c);
    /* 0088a00c: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0088a00e:; BB(0x0088a00e);
    /* 0088a00e: mov edx, dword ptr [esp + ecx*4 + 0xc7c] */ r_edx = R32((u32)(r_esp+r_ecx*4+0xc7cu));
    /* 0088a015: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a017: jl 0x88a070 */ if ((fS!=fO)) goto L_0088a070;
L_0088a019:; BB(0x0088a019);
    /* 0088a019: mov eax, dword ptr [esp + ecx*4 + 0x6c] */ r_eax = R32((u32)(r_esp+r_ecx*4+0x6cu));
    /* 0088a01d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a01f: jl 0x88a025 */ if ((fS!=fO)) goto L_0088a025;
L_0088a021:; BB(0x0088a021);
    /* 0088a021: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a023: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
L_0088a025:; BB(0x0088a025);
    /* 0088a025: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a027: jl 0x88a037 */ if ((fS!=fO)) goto L_0088a037;
L_0088a029:; BB(0x0088a029);
    /* 0088a029: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a02b: je 0x88a037 */ if (fZ) goto L_0088a037;
L_0088a02d:; BB(0x0088a02d);
    /* 0088a02d: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0088a031: mov dword ptr [eax + ecx*4 - 4], edx */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_edx);
    /* 0088a035: jmp 0x88a045 */ goto L_0088a045;
L_0088a037:; BB(0x0088a037);
    /* 0088a037: or ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a03d: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0088a041: mov dword ptr [eax + ecx*4 - 4], ebx */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_ebx);
L_0088a045:; BB(0x0088a045);
    /* 0088a045: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0088a049: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a04b: jl 0x889f9e */ if ((fS!=fO)) goto L_00889f9e;
L_0088a051:; BB(0x0088a051);
    /* 0088a051: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_0088a055:; BB(0x0088a055);
    /* 0088a055: mov eax, edi */ r_eax = r_edi;
    /* 0088a057: add esp, 0xd84 */ {  u32 a = r_esp; u32 b = 0xd84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088a05d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088a05e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088a05f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088a060: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088a061: ret  */ FN_RET(0x00887a24); r_esp += 4; return;
L_0088a062:; BB(0x0088a062);
    /* 0088a062: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a064: jmp 0x889193 */ goto L_00889193;
L_0088a069:; BB(0x0088a069);
    /* 0088a069: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a06b: jmp 0x8893fc */ goto L_008893fc;
L_0088a070:; BB(0x0088a070);
    /* 0088a070: mov edx, dword ptr [esp + ecx*4 + 0x6c] */ r_edx = R32((u32)(r_esp+r_ecx*4+0x6cu));
    /* 0088a074: jmp 0x88a025 */ goto L_0088a025;
L_0088a076:; BB(0x0088a076);
    /* 0088a076: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a078: jmp 0x88a00e */ goto L_0088a00e;
L_0088a07a:; BB(0x0088a07a);
    /* 0088a07a: mov ecx, dword ptr [esp + 0xc84] */ r_ecx = R32((u32)(r_esp+0xc84u));
    /* 0088a081: jmp 0x889f85 */ goto L_00889f85;
L_0088a086:; BB(0x0088a086);
    /* 0088a086: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 0088a08a: jmp 0x889f85 */ goto L_00889f85;
L_0088a08f:; BB(0x0088a08f);
    /* 0088a08f: mov ecx, dword ptr [esp + 0xc80] */ r_ecx = R32((u32)(r_esp+0xc80u));
    /* 0088a096: jmp 0x889f5e */ goto L_00889f5e;
L_0088a09b:; BB(0x0088a09b);
    /* 0088a09b: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 0088a09f: jmp 0x889f5e */ goto L_00889f5e;
L_0088a0a4:; BB(0x0088a0a4);
    /* 0088a0a4: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0088a0a8: jmp 0x889f13 */ goto L_00889f13;
L_0088a0ad:; BB(0x0088a0ad);
    /* 0088a0ad: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0088a0b1: jmp 0x889f13 */ goto L_00889f13;
L_0088a0b6:; BB(0x0088a0b6);
    /* 0088a0b6: mov eax, edx */ r_eax = r_edx;
    /* 0088a0b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a0ba: jge 0x889df7 */ if ((fS==fO)) goto L_00889df7;
L_0088a0c0:; BB(0x0088a0c0);
    /* 0088a0c0: jmp 0x889f13 */ goto L_00889f13;
L_0088a0c5:; BB(0x0088a0c5);
    /* 0088a0c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088a0c7: call 0x85a032 */ r_esp -= 4; W32(r_esp, 0x88a0ccu); f_0085a032();
    /* 0088a0cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0088a0cd:; BB(0x0088a0cd);
    /* 0088a0cd: mov eax, dword ptr [esp + edi*4 + 0x70] */ r_eax = R32((u32)(r_esp+r_edi*4+0x70u));
    /* 0088a0d1: jmp 0x8897e3 */ goto L_008897e3;
L_0088a0d6:; BB(0x0088a0d6);
    /* 0088a0d6: mov edx, dword ptr [esp + esi*4 + 0x70] */ r_edx = R32((u32)(r_esp+r_esi*4+0x70u));
    /* 0088a0da: jmp 0x8897c2 */ goto L_008897c2;
L_0088a0df:; BB(0x0088a0df);
    /* 0088a0df: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0088a0e3: jmp 0x889f13 */ goto L_00889f13;
L_0088a0e8:; BB(0x0088a0e8);
    /* 0088a0e8: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0088a0ec: jmp 0x889f13 */ goto L_00889f13;
L_0088a0f1:; BB(0x0088a0f1);
    /* 0088a0f1: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0088a0f5: jmp 0x889f13 */ goto L_00889f13;
}

