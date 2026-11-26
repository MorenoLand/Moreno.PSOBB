#include "protos.h"

void f_005c81f0(void) /* sub_5C81F0 */
{
    FN_ENTER(0x005c81f0);
    /* 005c81f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c81f2: jl 0x5c820a */ if ((fS!=fO)) goto L_005c820a;
L_005c81f4:; BB(0x005c81f4);
    /* 005c81f4: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c81f7: jge 0x5c820a */ if ((fS==fO)) goto L_005c820a;
L_005c81f9:; BB(0x005c81f9);
    /* 005c81f9: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c81ff: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005c8202: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c8205: jge 0x5c820a */ if ((fS==fO)) goto L_005c820a;
L_005c8207:; BB(0x005c8207);
    /* 005c8207: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c8209: ret  */ FN_RET(0x005c81f0); r_esp += 4; return;
L_005c820a:; BB(0x005c820a);
    /* 005c820a: mov eax, 1 */ r_eax = 0x1u;
    /* 005c820f: ret  */ FN_RET(0x005c81f0); r_esp += 4; return;
}

void f_005c8214(void) /* sub_5C8214 */
{
    FN_ENTER(0x005c8214);
    /* 005c8214: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c821a: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005c821d: cmp ecx, 0xc0 */ {  u32 a = r_ecx; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8223: jge 0x5c8230 */ if ((fS==fO)) goto L_005c8230;
L_005c8225:; BB(0x005c8225);
    /* 005c8225: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c8228: jge 0x5c8230 */ if ((fS==fO)) goto L_005c8230;
L_005c822a:; BB(0x005c822a);
    /* 005c822a: mov eax, 1 */ r_eax = 0x1u;
    /* 005c822f: ret  */ FN_RET(0x005c8214); r_esp += 4; return;
L_005c8230:; BB(0x005c8230);
    /* 005c8230: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c8232: ret  */ FN_RET(0x005c8214); r_esp += 4; return;
}

void f_005c8234(void) /* sub_5C8234 */
{
    FN_ENTER(0x005c8234);
    /* 005c8234: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8237: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005c823b: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c823e: jge 0x5c82c2 */ if ((fS==fO)) goto L_005c82c2;
L_005c8244:; BB(0x005c8244);
    /* 005c8244: mov edx, dword ptr [0xa8d8a0] */ r_edx = R32((u32)(0xa8d8a0u));
    /* 005c824a: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005c824d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c824f: je 0x5c82b7 */ if (fZ) goto L_005c82b7;
L_005c8251:; BB(0x005c8251);
    /* 005c8251: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8257: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005c825a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c825c: je 0x5c82c2 */ if (fZ) goto L_005c82c2;
L_005c825e:; BB(0x005c825e);
    /* 005c825e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c8260: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8263: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c8265: jle 0x5c829f */ if ((fZ||fS!=fO)) goto L_005c829f;
L_005c8267:; BB(0x005c8267);
    /* 005c8267: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005c826b: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005c826f: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005c8273: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_005c8276:; BB(0x005c8276);
    /* 005c8276: lea ebx, [edx + eax] */ r_ebx = (u32)(r_edx+r_eax);
    /* 005c8279: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 005c827b: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 005c827e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c8280: lea edi, [edi + edi*8] */ r_edi = (u32)(r_edi+r_edi*8);
    /* 005c8283: cmp esi, dword ptr [edi + ecx + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8287: jle 0x5c828e */ if ((fZ||fS!=fO)) goto L_005c828e;
L_005c8289:; BB(0x005c8289);
    /* 005c8289: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 005c828c: jmp 0x5c8290 */ goto L_005c8290;
L_005c828e:; BB(0x005c828e);
    /* 005c828e: mov eax, ebx */ r_eax = r_ebx;
L_005c8290:; BB(0x005c8290);
    /* 005c8290: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8292: jl 0x5c8276 */ if ((fS!=fO)) goto L_005c8276;
L_005c8294:; BB(0x005c8294);
    /* 005c8294: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005c8298: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005c829c: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_005c829f:; BB(0x005c829f);
    /* 005c829f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c82a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c82a3: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 005c82a6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005c82aa: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c82ac: cmp edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c82af: jne 0x5c82c2 */ if (!fZ) goto L_005c82c2;
L_005c82b1:; BB(0x005c82b1);
    /* 005c82b1: mov eax, ecx */ r_eax = r_ecx;
    /* 005c82b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c82b6: ret  */ FN_RET(0x005c8234); r_esp += 4; return;
L_005c82b7:; BB(0x005c82b7);
    /* 005c82b7: push 0x92bcdc */ { u32 v = 0x92bcdcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c82bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c82c1u); f_0061cdb0();
    /* 005c82c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c82c2:; BB(0x005c82c2);
    /* 005c82c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c82c4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c82c7: ret  */ FN_RET(0x005c8234); r_esp += 4; return;
}

void f_005c82c8(void) /* sub_5C82C8 */
{
    FN_ENTER(0x005c82c8);
    /* 005c82c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c82c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c82ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c82cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c82cc: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005c82d0: cmp esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c82d3: jge 0x5c83dd */ if ((fS==fO)) goto L_005c83dd;
L_005c82d9:; BB(0x005c82d9);
    /* 005c82d9: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
    /* 005c82de: mov ebp, dword ptr [eax + esi*4] */ r_ebp = R32((u32)(r_eax+r_esi*4));
    /* 005c82e1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c82e3: je 0x5c83d2 */ if (fZ) goto L_005c83d2;
L_005c82e9:; BB(0x005c82e9);
    /* 005c82e9: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c82ee: mov edi, dword ptr [eax + esi*4] */ r_edi = R32((u32)(r_eax+r_esi*4));
    /* 005c82f1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c82f3: je 0x5c83dd */ if (fZ) goto L_005c83dd;
L_005c82f9:; BB(0x005c82f9);
    /* 005c82f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c82fb: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 005c82fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c8300: jle 0x5c8335 */ if ((fZ||fS!=fO)) goto L_005c8335;
L_005c8302:; BB(0x005c8302);
    /* 005c8302: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005c8305: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_005c8309:; BB(0x005c8309);
    /* 005c8309: lea edx, [ecx + eax] */ r_edx = (u32)(r_ecx+r_eax);
    /* 005c830c: mov esi, edx */ r_esi = r_edx;
    /* 005c830e: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 005c8311: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8313: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c8315: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 005c8318: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c831a: lea esi, [esi + esi*8] */ r_esi = (u32)(r_esi+r_esi*8);
    /* 005c831d: cmp ebx, dword ptr [esi + ebp + 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8321: jle 0x5c8328 */ if ((fZ||fS!=fO)) goto L_005c8328;
L_005c8323:; BB(0x005c8323);
    /* 005c8323: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 005c8326: jmp 0x5c832a */ goto L_005c832a;
L_005c8328:; BB(0x005c8328);
    /* 005c8328: mov eax, edx */ r_eax = r_edx;
L_005c832a:; BB(0x005c832a);
    /* 005c832a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c832c: jl 0x5c8309 */ if ((fS!=fO)) goto L_005c8309;
L_005c832e:; BB(0x005c832e);
    /* 005c832e: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005c8332: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_005c8335:; BB(0x005c8335);
    /* 005c8335: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005c8339: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005c833c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c833e: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 005c8341: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8343: cmp edx, dword ptr [eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8346: jne 0x5c83dd */ if (!fZ) goto L_005c83dd;
L_005c834c:; BB(0x005c834c);
    /* 005c834c: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 005c834f: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 005c8353: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8355: lea ecx, [ecx + ecx*8] */ r_ecx = (u32)(r_ecx+r_ecx*8);
    /* 005c8358: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c835a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c835c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c835e: lea edi, [edi + edi*8] */ r_edi = (u32)(r_edi+r_edi*8);
    /* 005c8361: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c8363: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8365: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8367: lea edx, [edx + edx*8] */ r_edx = (u32)(r_edx+r_edx*8);
    /* 005c836a: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c836c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c836d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c836e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c836f: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x5c8374u); f_00858c80();
    /* 005c8374: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8377: mov edi, dword ptr [0xa8d89c] */ r_edi = R32((u32)(0xa8d89cu));
    /* 005c837d: add dword ptr [edi + esi*4], -1 */ { u32 ad = (u32)(r_edi+r_esi*4);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c8381: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c8383: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005c8388: mov ecx, dword ptr [0xa8d89c] */ r_ecx = R32((u32)(0xa8d89cu));
    /* 005c838e: mov esi, dword ptr [ecx + esi*4] */ r_esi = R32((u32)(r_ecx+r_esi*4));
    /* 005c8391: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c8393: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c8395: lea ecx, [esi + esi*8] */ r_ecx = (u32)(r_esi+r_esi*8);
    /* 005c8398: mov byte ptr [ebp + ecx + 1], al */ W8((u32)(r_ebp+r_ecx+0x1u), (u8)r_eax);
    /* 005c839c: mov dword ptr [ebp + ecx + 4], 0 */ W32((u32)(r_ebp+r_ecx+0x4u), 0x0u);
    /* 005c83a4: mov byte ptr [ebp + ecx], dl */ W8((u32)(r_ebp+r_ecx), (u8)r_edx);
    /* 005c83a8: mov dword ptr [ebp + ecx + 8], 0 */ W32((u32)(r_ebp+r_ecx+0x8u), 0x0u);
    /* 005c83b0: mov word ptr [ebp + ecx + 2], dx */ W16((u32)(r_ebp+r_ecx+0x2u), (u16)r_edx);
    /* 005c83b5: mov word ptr [ebp + ecx + 0xc], dx */ W16((u32)(r_ebp+r_ecx+0xcu), (u16)r_edx);
    /* 005c83ba: mov word ptr [ebp + ecx + 0xe], ax */ W16((u32)(r_ebp+r_ecx+0xeu), (u16)r_eax);
    /* 005c83bf: lea ecx, [ecx + ebp + 0x10] */ r_ecx = (u32)(r_ecx+r_ebp+0x10u);
    /* 005c83c3: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c83c8u); f_005d6a3c();
    /* 005c83c8: mov eax, 1 */ r_eax = 0x1u;
    /* 005c83cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c83ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c83cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c83d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c83d1: ret  */ FN_RET(0x005c82c8); r_esp += 4; return;
L_005c83d2:; BB(0x005c83d2);
    /* 005c83d2: push 0x92bcdc */ { u32 v = 0x92bcdcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c83d7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c83dcu); f_0061cdb0();
    /* 005c83dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c83dd:; BB(0x005c83dd);
    /* 005c83dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c83df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c83e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c83e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c83e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c83e3: ret  */ FN_RET(0x005c82c8); r_esp += 4; return;
}

void f_005c83e4(void) /* sub_5C83E4 */
{
    FN_ENTER(0x005c83e4);
    /* 005c83e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c83e5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c83e8: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005c83ec: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c83ef: jge 0x5c8449 */ if ((fS==fO)) goto L_005c8449;
L_005c83f1:; BB(0x005c83f1);
    /* 005c83f1: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
    /* 005c83f6: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 005c83f9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c83fb: je 0x5c8449 */ if (fZ) goto L_005c8449;
L_005c83fd:; BB(0x005c83fd);
    /* 005c83fd: mov ecx, dword ptr [0xa8d89c] */ r_ecx = R32((u32)(0xa8d89cu));
    /* 005c8403: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 005c8406: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c8408: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c840a: je 0x5c8449 */ if (fZ) goto L_005c8449;
L_005c840c:; BB(0x005c840c);
    /* 005c840c: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005c8410: mov esi, eax */ r_esi = r_eax;
    /* 005c8412: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005c8415: mov edi, edx */ r_edi = r_edx;
    /* 005c8417: jmp 0x5c8422 */ goto L_005c8422;
L_005c8419:; BB(0x005c8419);
    /* 005c8419: mov ecx, dword ptr [0xa8d8a0] */ r_ecx = R32((u32)(0xa8d8a0u));
    /* 005c841f: mov ebx, dword ptr [ecx + edi*4] */ r_ebx = R32((u32)(r_ecx+r_edi*4));
L_005c8422:; BB(0x005c8422);
    /* 005c8422: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005c8425: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8427: lea ecx, [ecx + ecx*8] */ r_ecx = (u32)(r_ecx+r_ecx*8);
    /* 005c842a: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c842c: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c842f: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5c8434u); f_005c5528();
    /* 005c8434: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c8435: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8437: je 0x5c8457 */ if (fZ) goto L_005c8457;
L_005c8439:; BB(0x005c8439);
    /* 005c8439: mov ecx, dword ptr [0xa8d89c] */ r_ecx = R32((u32)(0xa8d89cu));
    /* 005c843f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c8442: cmp esi, dword ptr [ecx + edi*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+r_edi*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8445: jne 0x5c8419 */ if (!fZ) goto L_005c8419;
L_005c8447:; BB(0x005c8447);
    /* 005c8447: jmp 0x5c844e */ goto L_005c844e;
L_005c8449:; BB(0x005c8449);
    /* 005c8449: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c844c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c844d: ret  */ FN_RET(0x005c83e4); r_esp += 4; return;
L_005c844e:; BB(0x005c844e);
    /* 005c844e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005c8452: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 005c8455: jmp 0x5c8449 */ goto L_005c8449;
L_005c8457:; BB(0x005c8457);
    /* 005c8457: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8459: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c845a: call 0x5c9998 */ r_esp -= 4; W32(r_esp, 0x5c845fu); f_005c9998();
    /* 005c845f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8462: jmp 0x5c8439 */ goto L_005c8439;
}

void f_005c8464(void) /* sub_5C8464 */
{
    FN_ENTER(0x005c8464);
    /* 005c8464: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005c8469: mov ecx, dword ptr [0xa8d894] */ r_ecx = R32((u32)(0xa8d894u));
    /* 005c846f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8472: jge 0x5c8492 */ if ((fS==fO)) goto L_005c8492;
L_005c8474:; BB(0x005c8474);
    /* 005c8474: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8479: je 0x5c8492 */ if (fZ) goto L_005c8492;
L_005c847b:; BB(0x005c847b);
    /* 005c847b: mov edx, dword ptr [0xa8d898] */ r_edx = R32((u32)(0xa8d898u));
    /* 005c8481: mov word ptr [edx + ecx*2], ax */ W16((u32)(r_edx+r_ecx*2), (u16)r_eax);
    /* 005c8485: mov eax, 1 */ r_eax = 0x1u;
    /* 005c848a: add dword ptr [0xa8d894], 1 */ { u32 ad = (u32)(0xa8d894u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c8491: ret  */ FN_RET(0x005c8464); r_esp += 4; return;
L_005c8492:; BB(0x005c8492);
    /* 005c8492: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c8494: ret  */ FN_RET(0x005c8464); r_esp += 4; return;
}

void f_005c8498(void) /* sub_5C8498 */
{
    FN_ENTER(0x005c8498);
    /* 005c8498: mov eax, dword ptr [0xa8d894] */ r_eax = R32((u32)(0xa8d894u));
    /* 005c849d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c849f: je 0x5c84b6 */ if (fZ) goto L_005c84b6;
L_005c84a1:; BB(0x005c84a1);
    /* 005c84a1: mov ecx, dword ptr [0xa8d898] */ r_ecx = R32((u32)(0xa8d898u));
    /* 005c84a7: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 005c84aa: mov dword ptr [0xa8d894], edx */ W32((u32)(0xa8d894u), r_edx);
    /* 005c84b0: movzx eax, word ptr [ecx + eax*2 - 2] */ r_eax = (u32)R16((u32)(r_ecx+r_eax*2+0xfffffffeu));
    /* 005c84b5: ret  */ FN_RET(0x005c8498); r_esp += 4; return;
L_005c84b6:; BB(0x005c84b6);
    /* 005c84b6: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005c84bb: ret  */ FN_RET(0x005c8498); r_esp += 4; return;
}

void f_005c84bc(void) /* sub_5C84BC */
{
    FN_ENTER(0x005c84bc);
    /* 005c84bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c84bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c84be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c84bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c84c0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c84c3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005c84c7: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c84cd: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 005c84d0: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005c84d3: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c84d9: movzx edx, word ptr [edx + 2] */ r_edx = (u32)R16((u32)(r_edx+0x2u));
    /* 005c84dd: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 005c84e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c84e3: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c84e9: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 005c84ed: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 005c84f1: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c84f7: movzx edx, word ptr [edx + 6] */ r_edx = (u32)R16((u32)(r_edx+0x6u));
    /* 005c84fb: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
    /* 005c84ff: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8505: movzx edx, word ptr [edx + 8] */ r_edx = (u32)R16((u32)(r_edx+0x8u));
    /* 005c8509: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 005c850d: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8513: movzx edx, word ptr [edx + 0xa] */ r_edx = (u32)R16((u32)(r_edx+0xau));
    /* 005c8517: mov word ptr [eax + 0xa], dx */ W16((u32)(r_eax+0xau), (u16)r_edx);
    /* 005c851b: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8521: movzx edx, word ptr [edx + 0xc] */ r_edx = (u32)R16((u32)(r_edx+0xcu));
    /* 005c8525: mov word ptr [eax + 0xc], dx */ W16((u32)(r_eax+0xcu), (u16)r_edx);
    /* 005c8529: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c852f: movzx edx, word ptr [edx + 0xe] */ r_edx = (u32)R16((u32)(r_edx+0xeu));
    /* 005c8533: mov word ptr [eax + 0xe], dx */ W16((u32)(r_eax+0xeu), (u16)r_edx);
    /* 005c8537: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c853d: movzx edx, word ptr [edx + 0x10] */ r_edx = (u32)R16((u32)(r_edx+0x10u));
    /* 005c8541: mov word ptr [eax + 0x10], dx */ W16((u32)(r_eax+0x10u), (u16)r_edx);
    /* 005c8545: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c854b: movzx edx, word ptr [edx + 0x12] */ r_edx = (u32)R16((u32)(r_edx+0x12u));
    /* 005c854f: mov word ptr [eax + 0x12], dx */ W16((u32)(r_eax+0x12u), (u16)r_edx);
    /* 005c8553: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8559: movzx edx, word ptr [edx + 0x14] */ r_edx = (u32)R16((u32)(r_edx+0x14u));
    /* 005c855d: mov word ptr [eax + 0x14], dx */ W16((u32)(r_eax+0x14u), (u16)r_edx);
    /* 005c8561: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8567: movzx edx, word ptr [edx + 0x16] */ r_edx = (u32)R16((u32)(r_edx+0x16u));
    /* 005c856b: mov word ptr [eax + 0x16], dx */ W16((u32)(r_eax+0x16u), (u16)r_edx);
    /* 005c856f: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8575: movzx edx, word ptr [edx + 0x18] */ r_edx = (u32)R16((u32)(r_edx+0x18u));
    /* 005c8579: mov word ptr [eax + 0x18], dx */ W16((u32)(r_eax+0x18u), (u16)r_edx);
    /* 005c857d: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8583: movzx edx, word ptr [edx + 0x1a] */ r_edx = (u32)R16((u32)(r_edx+0x1au));
    /* 005c8587: mov word ptr [eax + 0x1a], dx */ W16((u32)(r_eax+0x1au), (u16)r_edx);
    /* 005c858b: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8591: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 005c8595: mov word ptr [eax + 0x1c], dx */ W16((u32)(r_eax+0x1cu), (u16)r_edx);
    /* 005c8599: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c859f: movzx edx, word ptr [edx + 0x1e] */ r_edx = (u32)R16((u32)(r_edx+0x1eu));
    /* 005c85a3: mov word ptr [eax + 0x1e], dx */ W16((u32)(r_eax+0x1eu), (u16)r_edx);
    /* 005c85a7: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c85ad: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c85af: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 005c85b2: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c85b8: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 005c85bb: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 005c85be: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c85c4: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 005c85c7: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 005c85ca: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c85d0: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 005c85d3: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005c85d6: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c85dc: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 005c85df: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005c85e2: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c85e8: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 005c85eb: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 005c85ee: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c85f4: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 005c85f7: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005c85fa: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8600: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 005c8603: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 005c8606: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c860c: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 005c860f: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 005c8612: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8618: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 005c861b: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 005c861e: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8624: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 005c8627: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 005c862a: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8630: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 005c8633: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 005c8636: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c863c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c863e: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 005c8641: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8647: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 005c864a: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 005c864d: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8653: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 005c8656: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 005c8659: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c865f: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 005c8662: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 005c8665: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c866b: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 005c866e: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 005c8671: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8677: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 005c867a: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 005c867d: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8683: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 005c8686: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 005c8689: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c868f: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 005c8692: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 005c8695: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c869b: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 005c869e: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 005c86a1: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c86a7: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 005c86aa: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 005c86ad: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c86b3: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 005c86b6: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 005c86b9: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c86bf: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 005c86c2: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 005c86c5: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c86cb: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 005c86ce: mov dword ptr [eax + 0x80], edx */ W32((u32)(r_eax+0x80u), r_edx);
    /* 005c86d4: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c86da: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 005c86dd: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 005c86e3: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c86e9: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 005c86ec: mov dword ptr [eax + 0x88], edx */ W32((u32)(r_eax+0x88u), r_edx);
    /* 005c86f2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c86f4: lea eax, [eax + 0x8c] */ r_eax = (u32)(r_eax+0x8cu);
    /* 005c86fa: mov ebx, eax */ r_ebx = r_eax;
    /* 005c86fc: mov eax, ecx */ r_eax = r_ecx;
    /* 005c86fe: mov ebp, edx */ r_ebp = r_edx;
L_005c8700:; BB(0x005c8700);
    /* 005c8700: mov esi, dword ptr [0xa8d89c] */ r_esi = R32((u32)(0xa8d89cu));
    /* 005c8706: mov edi, dword ptr [0xa8d8a0] */ r_edi = R32((u32)(0xa8d8a0u));
    /* 005c870c: mov edx, dword ptr [esi + eax*4] */ r_edx = R32((u32)(r_esi+r_eax*4));
    /* 005c870f: mov edi, dword ptr [edi + eax*4] */ r_edi = R32((u32)(r_edi+r_eax*4));
    /* 005c8712: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005c8714: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8719: je 0x5c8782 */ if (fZ) goto L_005c8782;
L_005c871b:; BB(0x005c871b);
    /* 005c871b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005c871f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_005c8722:; BB(0x005c8722);
    /* 005c8722: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005c8724: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 005c8726: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 005c8729: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 005c872c: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 005c872f: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 005c8732: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 005c8735: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 005c8738: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 005c873b: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 005c873e: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 005c8741: mov dword ptr [ebx + 0x14], ecx */ W32((u32)(r_ebx+0x14u), r_ecx);
    /* 005c8744: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 005c8747: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 005c874a: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005c874d: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 005c8750: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 005c8753: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 005c8756: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 005c8759: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005c875d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c8762u); f_0061cdb0();
    /* 005c8762: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005c8766: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c876bu); f_0061cdb0();
    /* 005c876b: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005c876f: add ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c8772: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c8775: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c8778: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c877b: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c877d: jne 0x5c8722 */ if (!fZ) goto L_005c8722;
L_005c877f:; BB(0x005c877f);
    /* 005c877f: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_005c8782:; BB(0x005c8782);
    /* 005c8782: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8785: jl 0x5c8700 */ if ((fS!=fO)) goto L_005c8700;
L_005c878b:; BB(0x005c878b);
    /* 005c878b: mov edx, ebp */ r_edx = r_ebp;
    /* 005c878d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c878f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8791: lea eax, [edx + edx*8 + 0x8c] */ r_eax = (u32)(r_edx+r_edx*8+0x8cu);
    /* 005c8798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c879b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c879c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c879d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c879e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c879f: ret  */ FN_RET(0x005c84bc); r_esp += 4; return;
}

void f_005c8740(void)
{
    FN_ENTER(0x005c8740);
    /* 005c8740: adc al, 0x89 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 005c8742: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005c8743: adc al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 005c8745: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005c8746: sbb byte ptr [ecx + 0x4f8b184b], cl */ { u32 ad = (u32)(r_ecx+0x4f8b184bu); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b - c) & 0xffu; W8(ad, r); fC = ((u64)a < (u64)b + c); }
    /* 005c874c: sbb al, 0x89 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = ((u64)a < (u64)b + c); }
    /* 005c874e: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005c874f: sbb al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c8751: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005c8752: and byte ptr [ecx + 0x4b8d204b], cl */ { u32 ad = (u32)(r_ecx+0x4b8d204bu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu; W8(ad, r); fC = 0; }
    /* 005c8758: adc byte ptr [ecx - 0x17f7dbb4], cl */ { u32 ad = (u32)(r_ecx+0xe808244cu); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 005c875e: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005c875f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c8760: add eax, 0x244c8b00 */ {  u32 a = r_eax; u32 b = 0x244c8b00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8765: or al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c8767: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c8768: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c8769: add eax, 0x244c8b00 */ {  u32 a = r_eax; u32 b = 0x244c8b00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c876e: add al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 005c8770: ret  */ FN_RET(0x005c8740); r_esp += 4; return;
}

void f_005c87a0(void) /* sub_5C87A0 */
{
    FN_ENTER(0x005c87a0);
    /* 005c87a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c87a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c87a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c87a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c87a4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c87a7: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 005c87ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c87ad: mov ebp, eax */ r_ebp = r_eax;
L_005c87af:; BB(0x005c87af);
    /* 005c87af: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c87b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c87b7: je 0x5c87f0 */ if (fZ) goto L_005c87f0;
L_005c87b9:; BB(0x005c87b9);
    /* 005c87b9: mov dword ptr [ebp + ecx + 4], 0 */ W32((u32)(r_ebp+r_ecx+0x4u), 0x0u);
    /* 005c87c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c87c3: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005c87c8: mov byte ptr [ebp + ecx + 1], al */ W8((u32)(r_ebp+r_ecx+0x1u), (u8)r_eax);
    /* 005c87cc: mov dword ptr [ebp + ecx + 8], 0 */ W32((u32)(r_ebp+r_ecx+0x8u), 0x0u);
    /* 005c87d4: mov byte ptr [ebp + ecx], dl */ W8((u32)(r_ebp+r_ecx), (u8)r_edx);
    /* 005c87d8: mov word ptr [ebp + ecx + 2], dx */ W16((u32)(r_ebp+r_ecx+0x2u), (u16)r_edx);
    /* 005c87dd: mov word ptr [ebp + ecx + 0xc], dx */ W16((u32)(r_ebp+r_ecx+0xcu), (u16)r_edx);
    /* 005c87e2: mov word ptr [ebp + ecx + 0xe], ax */ W16((u32)(r_ebp+r_ecx+0xeu), (u16)r_eax);
    /* 005c87e7: lea ecx, [ecx + ebp + 0x10] */ r_ecx = (u32)(r_ecx+r_ebp+0x10u);
    /* 005c87eb: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c87f0u); f_005d6a3c();
L_005c87f0:; BB(0x005c87f0);
    /* 005c87f0: add ebp, 0x24 */ {  u32 a = r_ebp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c87f3: cmp ebp, 0x1e600 */ {  u32 a = r_ebp; u32 b = 0x1e600u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c87f9: jl 0x5c87af */ if ((fS!=fO)) goto L_005c87af;
L_005c87fb:; BB(0x005c87fb);
    /* 005c87fb: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
    /* 005c8800: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8802: je 0x5c880e */ if (fZ) goto L_005c880e;
L_005c8804:; BB(0x005c8804);
    /* 005c8804: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c8806: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 005c8809: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c880e:; BB(0x005c880e);
    /* 005c880e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8810: je 0x5c881d */ if (fZ) goto L_005c881d;
L_005c8812:; BB(0x005c8812);
    /* 005c8812: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c8814: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 005c8818: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c881d:; BB(0x005c881d);
    /* 005c881d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c881f: je 0x5c882c */ if (fZ) goto L_005c882c;
L_005c8821:; BB(0x005c8821);
    /* 005c8821: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c8823: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 005c8827: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c882c:; BB(0x005c882c);
    /* 005c882c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c882e: je 0x5c883b */ if (fZ) goto L_005c883b;
L_005c8830:; BB(0x005c8830);
    /* 005c8830: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c8832: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
    /* 005c8836: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c883b:; BB(0x005c883b);
    /* 005c883b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c883d: je 0x5c884a */ if (fZ) goto L_005c884a;
L_005c883f:; BB(0x005c883f);
    /* 005c883f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c8841: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 005c8845: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c884a:; BB(0x005c884a);
    /* 005c884a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c884c: je 0x5c8859 */ if (fZ) goto L_005c8859;
L_005c884e:; BB(0x005c884e);
    /* 005c884e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c8850: mov word ptr [eax + 0xa], dx */ W16((u32)(r_eax+0xau), (u16)r_edx);
    /* 005c8854: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c8859:; BB(0x005c8859);
    /* 005c8859: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c885b: je 0x5c8868 */ if (fZ) goto L_005c8868;
L_005c885d:; BB(0x005c885d);
    /* 005c885d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c885f: mov word ptr [eax + 0xc], dx */ W16((u32)(r_eax+0xcu), (u16)r_edx);
    /* 005c8863: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c8868:; BB(0x005c8868);
    /* 005c8868: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c886a: je 0x5c8877 */ if (fZ) goto L_005c8877;
L_005c886c:; BB(0x005c886c);
    /* 005c886c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c886e: mov word ptr [eax + 0xe], dx */ W16((u32)(r_eax+0xeu), (u16)r_edx);
    /* 005c8872: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c8877:; BB(0x005c8877);
    /* 005c8877: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8879: je 0x5c8886 */ if (fZ) goto L_005c8886;
L_005c887b:; BB(0x005c887b);
    /* 005c887b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c887d: mov word ptr [eax + 0x10], dx */ W16((u32)(r_eax+0x10u), (u16)r_edx);
    /* 005c8881: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c8886:; BB(0x005c8886);
    /* 005c8886: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8888: je 0x5c8895 */ if (fZ) goto L_005c8895;
L_005c888a:; BB(0x005c888a);
    /* 005c888a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c888c: mov word ptr [eax + 0x12], dx */ W16((u32)(r_eax+0x12u), (u16)r_edx);
    /* 005c8890: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c8895:; BB(0x005c8895);
    /* 005c8895: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8897: je 0x5c88a4 */ if (fZ) goto L_005c88a4;
L_005c8899:; BB(0x005c8899);
    /* 005c8899: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c889b: mov word ptr [eax + 0x14], dx */ W16((u32)(r_eax+0x14u), (u16)r_edx);
    /* 005c889f: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c88a4:; BB(0x005c88a4);
    /* 005c88a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c88a6: je 0x5c88b3 */ if (fZ) goto L_005c88b3;
L_005c88a8:; BB(0x005c88a8);
    /* 005c88a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c88aa: mov word ptr [eax + 0x16], dx */ W16((u32)(r_eax+0x16u), (u16)r_edx);
    /* 005c88ae: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c88b3:; BB(0x005c88b3);
    /* 005c88b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c88b5: je 0x5c88c2 */ if (fZ) goto L_005c88c2;
L_005c88b7:; BB(0x005c88b7);
    /* 005c88b7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c88b9: mov word ptr [eax + 0x18], dx */ W16((u32)(r_eax+0x18u), (u16)r_edx);
    /* 005c88bd: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c88c2:; BB(0x005c88c2);
    /* 005c88c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c88c4: je 0x5c88d1 */ if (fZ) goto L_005c88d1;
L_005c88c6:; BB(0x005c88c6);
    /* 005c88c6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c88c8: mov word ptr [eax + 0x1a], dx */ W16((u32)(r_eax+0x1au), (u16)r_edx);
    /* 005c88cc: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c88d1:; BB(0x005c88d1);
    /* 005c88d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c88d3: je 0x5c88e0 */ if (fZ) goto L_005c88e0;
L_005c88d5:; BB(0x005c88d5);
    /* 005c88d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c88d7: mov word ptr [eax + 0x1c], dx */ W16((u32)(r_eax+0x1cu), (u16)r_edx);
    /* 005c88db: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c88e0:; BB(0x005c88e0);
    /* 005c88e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c88e2: je 0x5c88ef */ if (fZ) goto L_005c88ef;
L_005c88e4:; BB(0x005c88e4);
    /* 005c88e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c88e6: mov word ptr [eax + 0x1e], dx */ W16((u32)(r_eax+0x1eu), (u16)r_edx);
    /* 005c88ea: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c88ef:; BB(0x005c88ef);
    /* 005c88ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c88f1: je 0x5c88fe */ if (fZ) goto L_005c88fe;
L_005c88f3:; BB(0x005c88f3);
    /* 005c88f3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c88f5: mov word ptr [eax + 0x20], dx */ W16((u32)(r_eax+0x20u), (u16)r_edx);
    /* 005c88f9: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c88fe:; BB(0x005c88fe);
    /* 005c88fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8900: je 0x5c8908 */ if (fZ) goto L_005c8908;
L_005c8902:; BB(0x005c8902);
    /* 005c8902: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c8904: mov word ptr [eax + 0x22], dx */ W16((u32)(r_eax+0x22u), (u16)r_edx);
L_005c8908:; BB(0x005c8908);
    /* 005c8908: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
    /* 005c890d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c890f: je 0x5c8937 */ if (fZ) goto L_005c8937;
L_005c8911:; BB(0x005c8911);
    /* 005c8911: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8917: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8919: je 0x5c8937 */ if (fZ) goto L_005c8937;
L_005c891b:; BB(0x005c891b);
    /* 005c891b: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8921: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8923: je 0x5c8937 */ if (fZ) goto L_005c8937;
L_005c8925:; BB(0x005c8925);
    /* 005c8925: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005c8927: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c892c: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005c8932: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8937:; BB(0x005c8937);
    /* 005c8937: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8939: je 0x5c8969 */ if (fZ) goto L_005c8969;
L_005c893b:; BB(0x005c893b);
    /* 005c893b: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8941: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8943: je 0x5c8969 */ if (fZ) goto L_005c8969;
L_005c8945:; BB(0x005c8945);
    /* 005c8945: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c894b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c894d: je 0x5c8969 */ if (fZ) goto L_005c8969;
L_005c894f:; BB(0x005c894f);
    /* 005c894f: add ecx, 0x1b00 */ {  u32 a = r_ecx; u32 b = 0x1b00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8955: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005c8958: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c895d: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005c8964: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8969:; BB(0x005c8969);
    /* 005c8969: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c896b: je 0x5c899b */ if (fZ) goto L_005c899b;
L_005c896d:; BB(0x005c896d);
    /* 005c896d: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8973: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8975: je 0x5c899b */ if (fZ) goto L_005c899b;
L_005c8977:; BB(0x005c8977);
    /* 005c8977: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c897d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c897f: je 0x5c899b */ if (fZ) goto L_005c899b;
L_005c8981:; BB(0x005c8981);
    /* 005c8981: add ecx, 0x3600 */ {  u32 a = r_ecx; u32 b = 0x3600u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8987: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005c898a: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c898f: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005c8996: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c899b:; BB(0x005c899b);
    /* 005c899b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c899d: je 0x5c89cd */ if (fZ) goto L_005c89cd;
L_005c899f:; BB(0x005c899f);
    /* 005c899f: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c89a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c89a7: je 0x5c89cd */ if (fZ) goto L_005c89cd;
L_005c89a9:; BB(0x005c89a9);
    /* 005c89a9: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c89af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c89b1: je 0x5c89cd */ if (fZ) goto L_005c89cd;
L_005c89b3:; BB(0x005c89b3);
    /* 005c89b3: add ecx, 0x5100 */ {  u32 a = r_ecx; u32 b = 0x5100u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c89b9: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005c89bc: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c89c1: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 005c89c8: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c89cd:; BB(0x005c89cd);
    /* 005c89cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c89cf: je 0x5c89ff */ if (fZ) goto L_005c89ff;
L_005c89d1:; BB(0x005c89d1);
    /* 005c89d1: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c89d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c89d9: je 0x5c89ff */ if (fZ) goto L_005c89ff;
L_005c89db:; BB(0x005c89db);
    /* 005c89db: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c89e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c89e3: je 0x5c89ff */ if (fZ) goto L_005c89ff;
L_005c89e5:; BB(0x005c89e5);
    /* 005c89e5: add ecx, 0x6c00 */ {  u32 a = r_ecx; u32 b = 0x6c00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c89eb: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005c89ee: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c89f3: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005c89fa: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c89ff:; BB(0x005c89ff);
    /* 005c89ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8a01: je 0x5c8a31 */ if (fZ) goto L_005c8a31;
L_005c8a03:; BB(0x005c8a03);
    /* 005c8a03: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8a09: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8a0b: je 0x5c8a31 */ if (fZ) goto L_005c8a31;
L_005c8a0d:; BB(0x005c8a0d);
    /* 005c8a0d: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8a13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8a15: je 0x5c8a31 */ if (fZ) goto L_005c8a31;
L_005c8a17:; BB(0x005c8a17);
    /* 005c8a17: add ecx, 0x8700 */ {  u32 a = r_ecx; u32 b = 0x8700u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8a1d: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 005c8a20: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8a25: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 005c8a2c: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8a31:; BB(0x005c8a31);
    /* 005c8a31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8a33: je 0x5c8a63 */ if (fZ) goto L_005c8a63;
L_005c8a35:; BB(0x005c8a35);
    /* 005c8a35: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8a3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8a3d: je 0x5c8a63 */ if (fZ) goto L_005c8a63;
L_005c8a3f:; BB(0x005c8a3f);
    /* 005c8a3f: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8a45: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8a47: je 0x5c8a63 */ if (fZ) goto L_005c8a63;
L_005c8a49:; BB(0x005c8a49);
    /* 005c8a49: add ecx, 0xa200 */ {  u32 a = r_ecx; u32 b = 0xa200u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8a4f: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 005c8a52: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8a57: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 005c8a5e: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8a63:; BB(0x005c8a63);
    /* 005c8a63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8a65: je 0x5c8a95 */ if (fZ) goto L_005c8a95;
L_005c8a67:; BB(0x005c8a67);
    /* 005c8a67: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8a6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8a6f: je 0x5c8a95 */ if (fZ) goto L_005c8a95;
L_005c8a71:; BB(0x005c8a71);
    /* 005c8a71: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8a77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8a79: je 0x5c8a95 */ if (fZ) goto L_005c8a95;
L_005c8a7b:; BB(0x005c8a7b);
    /* 005c8a7b: add ecx, 0xbd00 */ {  u32 a = r_ecx; u32 b = 0xbd00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8a81: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 005c8a84: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8a89: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 005c8a90: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8a95:; BB(0x005c8a95);
    /* 005c8a95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8a97: je 0x5c8ac7 */ if (fZ) goto L_005c8ac7;
L_005c8a99:; BB(0x005c8a99);
    /* 005c8a99: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8a9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8aa1: je 0x5c8ac7 */ if (fZ) goto L_005c8ac7;
L_005c8aa3:; BB(0x005c8aa3);
    /* 005c8aa3: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8aa9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8aab: je 0x5c8ac7 */ if (fZ) goto L_005c8ac7;
L_005c8aad:; BB(0x005c8aad);
    /* 005c8aad: add ecx, 0xd800 */ {  u32 a = r_ecx; u32 b = 0xd800u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8ab3: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005c8ab6: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8abb: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 005c8ac2: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8ac7:; BB(0x005c8ac7);
    /* 005c8ac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8ac9: je 0x5c8af9 */ if (fZ) goto L_005c8af9;
L_005c8acb:; BB(0x005c8acb);
    /* 005c8acb: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8ad1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8ad3: je 0x5c8af9 */ if (fZ) goto L_005c8af9;
L_005c8ad5:; BB(0x005c8ad5);
    /* 005c8ad5: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8adb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8add: je 0x5c8af9 */ if (fZ) goto L_005c8af9;
L_005c8adf:; BB(0x005c8adf);
    /* 005c8adf: add ecx, 0xf300 */ {  u32 a = r_ecx; u32 b = 0xf300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8ae5: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 005c8ae8: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8aed: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 005c8af4: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8af9:; BB(0x005c8af9);
    /* 005c8af9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8afb: je 0x5c8b2b */ if (fZ) goto L_005c8b2b;
L_005c8afd:; BB(0x005c8afd);
    /* 005c8afd: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8b03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8b05: je 0x5c8b2b */ if (fZ) goto L_005c8b2b;
L_005c8b07:; BB(0x005c8b07);
    /* 005c8b07: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8b0d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8b0f: je 0x5c8b2b */ if (fZ) goto L_005c8b2b;
L_005c8b11:; BB(0x005c8b11);
    /* 005c8b11: add ecx, 0x10e00 */ {  u32 a = r_ecx; u32 b = 0x10e00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8b17: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 005c8b1a: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8b1f: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 005c8b26: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8b2b:; BB(0x005c8b2b);
    /* 005c8b2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8b2d: je 0x5c8b5d */ if (fZ) goto L_005c8b5d;
L_005c8b2f:; BB(0x005c8b2f);
    /* 005c8b2f: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8b35: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8b37: je 0x5c8b5d */ if (fZ) goto L_005c8b5d;
L_005c8b39:; BB(0x005c8b39);
    /* 005c8b39: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8b3f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8b41: je 0x5c8b5d */ if (fZ) goto L_005c8b5d;
L_005c8b43:; BB(0x005c8b43);
    /* 005c8b43: add ecx, 0x12900 */ {  u32 a = r_ecx; u32 b = 0x12900u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8b49: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 005c8b4c: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8b51: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 005c8b58: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8b5d:; BB(0x005c8b5d);
    /* 005c8b5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8b5f: je 0x5c8b8f */ if (fZ) goto L_005c8b8f;
L_005c8b61:; BB(0x005c8b61);
    /* 005c8b61: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8b67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8b69: je 0x5c8b8f */ if (fZ) goto L_005c8b8f;
L_005c8b6b:; BB(0x005c8b6b);
    /* 005c8b6b: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8b71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8b73: je 0x5c8b8f */ if (fZ) goto L_005c8b8f;
L_005c8b75:; BB(0x005c8b75);
    /* 005c8b75: add ecx, 0x14400 */ {  u32 a = r_ecx; u32 b = 0x14400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8b7b: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 005c8b7e: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8b83: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 005c8b8a: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8b8f:; BB(0x005c8b8f);
    /* 005c8b8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8b91: je 0x5c8bc1 */ if (fZ) goto L_005c8bc1;
L_005c8b93:; BB(0x005c8b93);
    /* 005c8b93: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8b99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8b9b: je 0x5c8bc1 */ if (fZ) goto L_005c8bc1;
L_005c8b9d:; BB(0x005c8b9d);
    /* 005c8b9d: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8ba3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8ba5: je 0x5c8bc1 */ if (fZ) goto L_005c8bc1;
L_005c8ba7:; BB(0x005c8ba7);
    /* 005c8ba7: add ecx, 0x15f00 */ {  u32 a = r_ecx; u32 b = 0x15f00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8bad: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 005c8bb0: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8bb5: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 005c8bbc: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8bc1:; BB(0x005c8bc1);
    /* 005c8bc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8bc3: je 0x5c8bf3 */ if (fZ) goto L_005c8bf3;
L_005c8bc5:; BB(0x005c8bc5);
    /* 005c8bc5: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8bcb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8bcd: je 0x5c8bf3 */ if (fZ) goto L_005c8bf3;
L_005c8bcf:; BB(0x005c8bcf);
    /* 005c8bcf: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8bd5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8bd7: je 0x5c8bf3 */ if (fZ) goto L_005c8bf3;
L_005c8bd9:; BB(0x005c8bd9);
    /* 005c8bd9: add ecx, 0x17a00 */ {  u32 a = r_ecx; u32 b = 0x17a00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8bdf: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 005c8be2: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8be7: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 005c8bee: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8bf3:; BB(0x005c8bf3);
    /* 005c8bf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8bf5: je 0x5c8c25 */ if (fZ) goto L_005c8c25;
L_005c8bf7:; BB(0x005c8bf7);
    /* 005c8bf7: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8bfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8bff: je 0x5c8c25 */ if (fZ) goto L_005c8c25;
L_005c8c01:; BB(0x005c8c01);
    /* 005c8c01: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8c07: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8c09: je 0x5c8c25 */ if (fZ) goto L_005c8c25;
L_005c8c0b:; BB(0x005c8c0b);
    /* 005c8c0b: add ecx, 0x19500 */ {  u32 a = r_ecx; u32 b = 0x19500u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8c11: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 005c8c14: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8c19: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 005c8c20: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8c25:; BB(0x005c8c25);
    /* 005c8c25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8c27: je 0x5c8c57 */ if (fZ) goto L_005c8c57;
L_005c8c29:; BB(0x005c8c29);
    /* 005c8c29: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8c2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8c31: je 0x5c8c57 */ if (fZ) goto L_005c8c57;
L_005c8c33:; BB(0x005c8c33);
    /* 005c8c33: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8c39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8c3b: je 0x5c8c57 */ if (fZ) goto L_005c8c57;
L_005c8c3d:; BB(0x005c8c3d);
    /* 005c8c3d: add ecx, 0x1b000 */ {  u32 a = r_ecx; u32 b = 0x1b000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8c43: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 005c8c46: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8c4b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 005c8c52: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8c57:; BB(0x005c8c57);
    /* 005c8c57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8c59: je 0x5c8c84 */ if (fZ) goto L_005c8c84;
L_005c8c5b:; BB(0x005c8c5b);
    /* 005c8c5b: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c8c61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8c63: je 0x5c8c84 */ if (fZ) goto L_005c8c84;
L_005c8c65:; BB(0x005c8c65);
    /* 005c8c65: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8c6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8c6d: je 0x5c8c84 */ if (fZ) goto L_005c8c84;
L_005c8c6f:; BB(0x005c8c6f);
    /* 005c8c6f: add ecx, 0x1cb00 */ {  u32 a = r_ecx; u32 b = 0x1cb00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8c75: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 005c8c78: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8c7d: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_005c8c84:; BB(0x005c8c84);
    /* 005c8c84: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8c8a: mov dword ptr [0xa8d894], 0 */ W32((u32)(0xa8d894u), 0x0u);
    /* 005c8c94: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 005c8c97: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 005c8c9a: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
    /* 005c8c9f: movzx ecx, word ptr [ebx + 2] */ r_ecx = (u32)R16((u32)(r_ebx+0x2u));
    /* 005c8ca3: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 005c8ca7: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8cad: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 005c8cb1: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005c8cb5: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8cbb: movzx eax, word ptr [ebx + 6] */ r_eax = (u32)R16((u32)(r_ebx+0x6u));
    /* 005c8cbf: mov word ptr [edx + 6], ax */ W16((u32)(r_edx+0x6u), (u16)r_eax);
    /* 005c8cc3: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8cc9: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005c8ccd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005c8cd1: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8cd7: movzx eax, word ptr [ebx + 0xa] */ r_eax = (u32)R16((u32)(r_ebx+0xau));
    /* 005c8cdb: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 005c8cdf: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8ce5: movzx eax, word ptr [ebx + 0xc] */ r_eax = (u32)R16((u32)(r_ebx+0xcu));
    /* 005c8ce9: mov word ptr [edx + 0xc], ax */ W16((u32)(r_edx+0xcu), (u16)r_eax);
    /* 005c8ced: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8cf3: movzx eax, word ptr [ebx + 0xe] */ r_eax = (u32)R16((u32)(r_ebx+0xeu));
    /* 005c8cf7: mov word ptr [edx + 0xe], ax */ W16((u32)(r_edx+0xeu), (u16)r_eax);
    /* 005c8cfb: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8d01: movzx eax, word ptr [ebx + 0x10] */ r_eax = (u32)R16((u32)(r_ebx+0x10u));
    /* 005c8d05: mov word ptr [edx + 0x10], ax */ W16((u32)(r_edx+0x10u), (u16)r_eax);
    /* 005c8d09: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8d0f: movzx eax, word ptr [ebx + 0x12] */ r_eax = (u32)R16((u32)(r_ebx+0x12u));
    /* 005c8d13: mov word ptr [edx + 0x12], ax */ W16((u32)(r_edx+0x12u), (u16)r_eax);
    /* 005c8d17: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8d1d: movzx eax, word ptr [ebx + 0x14] */ r_eax = (u32)R16((u32)(r_ebx+0x14u));
    /* 005c8d21: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 005c8d25: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8d2b: movzx eax, word ptr [ebx + 0x16] */ r_eax = (u32)R16((u32)(r_ebx+0x16u));
    /* 005c8d2f: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 005c8d33: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8d39: movzx eax, word ptr [ebx + 0x18] */ r_eax = (u32)R16((u32)(r_ebx+0x18u));
    /* 005c8d3d: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 005c8d41: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8d47: movzx eax, word ptr [ebx + 0x1a] */ r_eax = (u32)R16((u32)(r_ebx+0x1au));
    /* 005c8d4b: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 005c8d4f: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8d55: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 005c8d59: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 005c8d5d: mov edx, dword ptr [0xa8d890] */ r_edx = R32((u32)(0xa8d890u));
    /* 005c8d63: movzx eax, word ptr [ebx + 0x1e] */ r_eax = (u32)R16((u32)(r_ebx+0x1eu));
    /* 005c8d67: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 005c8d6b: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8d71: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 005c8d74: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005c8d76: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8d7c: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 005c8d7f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005c8d82: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8d88: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 005c8d8b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005c8d8e: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8d94: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 005c8d97: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005c8d9a: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8da0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005c8da3: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005c8da6: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8dac: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 005c8daf: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005c8db2: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8db8: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005c8dbb: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005c8dbe: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8dc4: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 005c8dc7: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005c8dca: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8dd0: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005c8dd3: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005c8dd6: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8ddc: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 005c8ddf: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005c8de2: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8de8: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 005c8deb: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005c8dee: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005c8df4: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 005c8df7: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005c8dfa: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e00: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 005c8e03: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005c8e05: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e0b: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 005c8e0e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005c8e11: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e17: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 005c8e1a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005c8e1d: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e23: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 005c8e26: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005c8e29: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e2f: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 005c8e32: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005c8e35: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e3b: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 005c8e3e: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005c8e41: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e47: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 005c8e4a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005c8e4d: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e53: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 005c8e56: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005c8e59: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e5f: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 005c8e62: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005c8e65: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e6b: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 005c8e6e: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005c8e71: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e77: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 005c8e7a: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005c8e7d: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e83: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 005c8e86: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005c8e89: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e8f: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 005c8e95: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 005c8e98: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8e9e: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 005c8ea4: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 005c8ea7: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8ead: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 005c8eb3: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005c8eb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c8eb8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c8eba: mov ebp, ebx */ r_ebp = r_ebx;
    /* 005c8ebc: mov ebx, eax */ r_ebx = r_eax;
    /* 005c8ebe: mov eax, edx */ r_eax = r_edx;
L_005c8ec0:; BB(0x005c8ec0);
    /* 005c8ec0: mov ecx, dword ptr [0xa8d89c] */ r_ecx = R32((u32)(0xa8d89cu));
    /* 005c8ec6: mov esi, dword ptr [0xa8d8a0] */ r_esi = R32((u32)(0xa8d8a0u));
    /* 005c8ecc: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005c8ecf: mov edi, dword ptr [esi + eax*4] */ r_edi = R32((u32)(r_esi+r_eax*4));
    /* 005c8ed2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005c8ed4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8ed7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8ed9: je 0x5c8f74 */ if (fZ) goto L_005c8f74;
L_005c8edf:; BB(0x005c8edf);
    /* 005c8edf: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005c8ee3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_005c8ee6:; BB(0x005c8ee6);
    /* 005c8ee6: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005c8ee9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8eeb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 005c8eee: mov edx, dword ptr [eax + ebp + 0x8c] */ r_edx = R32((u32)(r_eax+r_ebp+0x8cu));
    /* 005c8ef5: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005c8ef7: mov edx, dword ptr [eax + ebp + 0x90] */ r_edx = R32((u32)(r_eax+r_ebp+0x90u));
    /* 005c8efe: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005c8f01: mov edx, dword ptr [eax + ebp + 0x94] */ r_edx = R32((u32)(r_eax+r_ebp+0x94u));
    /* 005c8f08: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 005c8f0b: mov edx, dword ptr [eax + ebp + 0x98] */ r_edx = R32((u32)(r_eax+r_ebp+0x98u));
    /* 005c8f12: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 005c8f15: mov edx, dword ptr [eax + ebp + 0x9c] */ r_edx = R32((u32)(r_eax+r_ebp+0x9cu));
    /* 005c8f1c: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 005c8f1f: mov edx, dword ptr [eax + ebp + 0xa0] */ r_edx = R32((u32)(r_eax+r_ebp+0xa0u));
    /* 005c8f26: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 005c8f29: mov edx, dword ptr [eax + ebp + 0xa4] */ r_edx = R32((u32)(r_eax+r_ebp+0xa4u));
    /* 005c8f30: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 005c8f33: mov edx, dword ptr [eax + ebp + 0xa8] */ r_edx = R32((u32)(r_eax+r_ebp+0xa8u));
    /* 005c8f3a: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 005c8f3d: mov edx, dword ptr [eax + ebp + 0xac] */ r_edx = R32((u32)(r_eax+r_ebp+0xacu));
    /* 005c8f44: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 005c8f47: lea ecx, [edi + 0x10] */ r_ecx = (u32)(r_edi+0x10u);
    /* 005c8f4a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c8f4d: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005c8f51: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c8f56u); f_0061cdb0();
    /* 005c8f56: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005c8f5a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c8f5fu); f_0061cdb0();
    /* 005c8f5f: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005c8f63: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c8f66: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c8f69: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8f6b: jne 0x5c8ee6 */ if (!fZ) goto L_005c8ee6;
L_005c8f71:; BB(0x005c8f71);
    /* 005c8f71: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_005c8f74:; BB(0x005c8f74);
    /* 005c8f74: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8f77: jl 0x5c8ec0 */ if ((fS!=fO)) goto L_005c8ec0;
L_005c8f7d:; BB(0x005c8f7d);
    /* 005c8f7d: mov eax, dword ptr [0xa8d8cc] */ r_eax = R32((u32)(0xa8d8ccu));
    /* 005c8f82: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c8f84: je 0x5c8fc9 */ if (fZ) goto L_005c8fc9;
L_005c8f86:; BB(0x005c8f86);
    /* 005c8f86: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
    /* 005c8f8b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c8f8d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8f8f: je 0x5c8fc9 */ if (fZ) goto L_005c8fc9;
L_005c8f91:; BB(0x005c8f91);
    /* 005c8f91: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c8f97: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005c8f99: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c8f9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8f9d: je 0x5c8fc9 */ if (fZ) goto L_005c8fc9;
L_005c8f9f:; BB(0x005c8f9f);
    /* 005c8f9f: jmp 0x5c8fa6 */ goto L_005c8fa6;
L_005c8fa1:; BB(0x005c8fa1);
    /* 005c8fa1: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c8fa6:; BB(0x005c8fa6);
    /* 005c8fa6: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005c8fa9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8fab: lea ebp, [edx + edx*8] */ r_ebp = (u32)(r_edx+r_edx*8);
    /* 005c8fae: add ebp, dword ptr [eax] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c8fb0: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c8fb3: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5c8fb8u); f_005c5528();
    /* 005c8fb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c8fb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8fbb: je 0x5c8fde */ if (fZ) goto L_005c8fde;
L_005c8fbd:; BB(0x005c8fbd);
    /* 005c8fbd: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c8fc2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c8fc5: cmp ebx, dword ptr [eax] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8fc7: jne 0x5c8fa1 */ if (!fZ) goto L_005c8fa1;
L_005c8fc9:; BB(0x005c8fc9);
    /* 005c8fc9: mov eax, dword ptr [0xa8d88c] */ r_eax = R32((u32)(0xa8d88cu));
    /* 005c8fce: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c8fd1: mov dword ptr [0xa8d88c], eax */ W32((u32)(0xa8d88cu), r_eax);
    /* 005c8fd6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c8fd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c8fda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8fdb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c8fdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c8fdd: ret  */ FN_RET(0x005c87a0); r_esp += 4; return;
L_005c8fde:; BB(0x005c8fde);
    /* 005c8fde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8fe1: call 0x5c9998 */ r_esp -= 4; W32(r_esp, 0x5c8fe6u); f_005c9998();
    /* 005c8fe6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8fe9: jmp 0x5c8fbd */ goto L_005c8fbd;
}

void f_005c8fec(void) /* sub_5C8FEC */
{
    FN_ENTER(0x005c8fec);
    /* 005c8fec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c8fed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c8fee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8fef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ff0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ff1: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 005c8ff5: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005c8ff8: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 005c8ffb: cmp ebx, 0x12 */ {  u32 a = r_ebx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8ffe: jge 0x5c90ee */ if ((fS==fO)) goto L_005c90ee;
L_005c9004:; BB(0x005c9004);
    /* 005c9004: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
    /* 005c9009: mov esi, dword ptr [eax + ebx*4] */ r_esi = R32((u32)(r_eax+r_ebx*4));
    /* 005c900c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c900e: je 0x5c9106 */ if (fZ) goto L_005c9106;
L_005c9014:; BB(0x005c9014);
    /* 005c9014: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c9019: mov edx, dword ptr [eax + ebx*4] */ r_edx = R32((u32)(r_eax+r_ebx*4));
    /* 005c901c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c901e: je 0x5c90ee */ if (fZ) goto L_005c90ee;
L_005c9024:; BB(0x005c9024);
    /* 005c9024: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9026: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 005c9029: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c902b: jle 0x5c905d */ if ((fZ||fS!=fO)) goto L_005c905d;
L_005c902d:; BB(0x005c902d);
    /* 005c902d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_005c9030:; BB(0x005c9030);
    /* 005c9030: lea ebx, [ecx + eax] */ r_ebx = (u32)(r_ecx+r_eax);
    /* 005c9033: mov ebp, ebx */ r_ebp = r_ebx;
    /* 005c9035: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 005c9038: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c903a: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 005c903c: lea ebp, [ebx + ebx] */ r_ebp = (u32)(r_ebx+r_ebx);
    /* 005c903f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c9041: lea ebp, [ebp + ebp*8] */ r_ebp = (u32)(r_ebp+r_ebp*8);
    /* 005c9045: cmp edi, dword ptr [ebp + esi + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+r_esi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9049: jle 0x5c9050 */ if ((fZ||fS!=fO)) goto L_005c9050;
L_005c904b:; BB(0x005c904b);
    /* 005c904b: lea ecx, [ebx + 1] */ r_ecx = (u32)(r_ebx+0x1u);
    /* 005c904e: jmp 0x5c9052 */ goto L_005c9052;
L_005c9050:; BB(0x005c9050);
    /* 005c9050: mov eax, ebx */ r_eax = r_ebx;
L_005c9052:; BB(0x005c9052);
    /* 005c9052: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9054: jl 0x5c9030 */ if ((fS!=fO)) goto L_005c9030;
L_005c9056:; BB(0x005c9056);
    /* 005c9056: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005c9059: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
L_005c905d:; BB(0x005c905d);
    /* 005c905d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005c9060: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9062: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 005c9065: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9067: cmp edi, dword ptr [eax + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c906a: jne 0x5c90ee */ if (!fZ) goto L_005c90ee;
L_005c9070:; BB(0x005c9070);
    /* 005c9070: lea edi, [ecx + 1] */ r_edi = (u32)(r_ecx+0x1u);
    /* 005c9073: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 005c9077: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9079: lea ecx, [ecx + ecx*8] */ r_ecx = (u32)(r_ecx+r_ecx*8);
    /* 005c907c: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c907e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c9080: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c9082: lea edx, [edx + edx*8] */ r_edx = (u32)(r_edx+r_edx*8);
    /* 005c9085: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005c9087: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c9089: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c908b: lea edi, [edi + edi*8] */ r_edi = (u32)(r_edi+r_edi*8);
    /* 005c908e: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c9090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9091: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9092: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9093: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x5c9098u); f_00858c80();
    /* 005c9098: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c909b: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c90a1: add dword ptr [edx + ebx*4], -1 */ { u32 ad = (u32)(r_edx+r_ebx*4);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c90a5: mov edi, dword ptr [0xa8d89c] */ r_edi = R32((u32)(0xa8d89cu));
    /* 005c90ab: mov eax, dword ptr [edi + ebx*4] */ r_eax = R32((u32)(r_edi+r_ebx*4));
    /* 005c90ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c90b0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c90b2: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 005c90b5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c90b7: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005c90bc: mov dword ptr [esi + edx + 4], 0 */ W32((u32)(r_esi+r_edx+0x4u), 0x0u);
    /* 005c90c4: mov byte ptr [esi + edx + 1], bl */ W8((u32)(r_esi+r_edx+0x1u), (u8)r_ebx);
    /* 005c90c8: lea ecx, [edx + esi + 0x10] */ r_ecx = (u32)(r_edx+r_esi+0x10u);
    /* 005c90cc: mov dword ptr [esi + edx + 8], 0 */ W32((u32)(r_esi+r_edx+0x8u), 0x0u);
    /* 005c90d4: mov byte ptr [esi + edx], al */ W8((u32)(r_esi+r_edx), (u8)r_eax);
    /* 005c90d7: mov word ptr [esi + edx + 2], ax */ W16((u32)(r_esi+r_edx+0x2u), (u16)r_eax);
    /* 005c90dc: mov word ptr [esi + edx + 0xc], ax */ W16((u32)(r_esi+r_edx+0xcu), (u16)r_eax);
    /* 005c90e1: mov word ptr [esi + edx + 0xe], bx */ W16((u32)(r_esi+r_edx+0xeu), (u16)r_ebx);
    /* 005c90e6: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c90ebu); f_005d6a3c();
    /* 005c90eb: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
L_005c90ee:; BB(0x005c90ee);
    /* 005c90ee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c90ef: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5c90f4u); f_005c5528();
    /* 005c90f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c90f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c90f7: je 0x5c9100 */ if (fZ) goto L_005c9100;
L_005c90f9:; BB(0x005c90f9);
    /* 005c90f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c90fb: mov ecx, eax */ r_ecx = r_eax;
    /* 005c90fd: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x5c9100u); call_ind(t); }
L_005c9100:; BB(0x005c9100);
    /* 005c9100: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c9101: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c9102: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9103: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9104: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9105: ret  */ FN_RET(0x005c8fec); r_esp += 4; return;
L_005c9106:; BB(0x005c9106);
    /* 005c9106: push 0x92bcdc */ { u32 v = 0x92bcdcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c910b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c9110u); f_0061cdb0();
    /* 005c9110: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c9111: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 005c9114: jmp 0x5c90ee */ goto L_005c90ee;
}

