#include "protos.h"

void f_0073c1fd(void) /* sub_73C1FD */
{
    FN_ENTER(0x0073c1fd);
    /* 0073c1fd: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0073c200: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c201: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x73c206u); f_0068d5a8();
    /* 0073c206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073c207: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c209: je 0x73c224 */ if (fZ) goto L_0073c224;
L_0073c20b:; BB(0x0073c20b);
    /* 0073c20b: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0073c212: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c215: je 0x73c21c */ if (fZ) goto L_0073c21c;
L_0073c217:; BB(0x0073c217);
    /* 0073c217: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c21a: jne 0x73c224 */ if (!fZ) goto L_0073c224;
L_0073c21c:; BB(0x0073c21c);
    /* 0073c21c: mov ecx, eax */ r_ecx = r_eax;
    /* 0073c21e: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x73c223u); f_006936b4();
    /* 0073c223: ret  */ FN_RET(0x0073c1fd); r_esp += 4; return;
L_0073c224:; BB(0x0073c224);
    /* 0073c224: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c226: ret  */ FN_RET(0x0073c1fd); r_esp += 4; return;
}

void f_0073c228(void) /* sub_73C228 */
{
    FN_ENTER(0x0073c228);
    /* 0073c228: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c229: mov edi, ecx */ r_edi = r_ecx;
    /* 0073c22b: mov ecx, edi */ r_ecx = r_edi;
    /* 0073c22d: push 0x502 */ { u32 v = 0x502u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c232: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c236: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x73c23bu); f_0073ae38();
    /* 0073c23b: mov ecx, edi */ r_ecx = r_edi;
    /* 0073c23d: call 0x73b558 */ r_esp -= 4; W32(r_esp, 0x73c242u); f_0073b558();
    /* 0073c242: mov ecx, edi */ r_ecx = r_edi;
    /* 0073c244: call 0x73b5e0 */ r_esp -= 4; W32(r_esp, 0x73c249u); f_0073b5e0();
    /* 0073c249: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073c24a: ret 4 */ FN_RET(0x0073c228); r_esp += 8; return;
}

void f_0073c250(void) /* sub_73C250 */
{
    FN_ENTER(0x0073c250);
    /* 0073c250: mov eax, dword ptr [0xa9a9a4] */ r_eax = R32((u32)(0xa9a9a4u));
    /* 0073c255: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c257: je 0x73c26f */ if (fZ) goto L_0073c26f;
L_0073c259:; BB(0x0073c259);
    /* 0073c259: mov ecx, dword ptr [0xa9a9a8] */ r_ecx = R32((u32)(0xa9a9a8u));
    /* 0073c25f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c260: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x73c265u); f_007a8b04();
    /* 0073c265: mov dword ptr [0xa9a9a4], 0 */ W32((u32)(0xa9a9a4u), 0x0u);
L_0073c26f:; BB(0x0073c26f);
    /* 0073c26f: ret  */ FN_RET(0x0073c250); r_esp += 4; return;
}

void f_0073c270(void) /* sub_73C270 */
{
    FN_ENTER(0x0073c270);
    /* 0073c270: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c271: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c272: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073c273: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073c276: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0073c27a: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0073c27e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c280: je 0x73c332 */ if (fZ) goto L_0073c332;
L_0073c286:; BB(0x0073c286);
    /* 0073c286: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c288: je 0x73c293 */ if (fZ) goto L_0073c293;
L_0073c28a:; BB(0x0073c28a);
    /* 0073c28a: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0073c28e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073c291: jg 0x73c2a0 */ if ((!fZ&&fS==fO)) goto L_0073c2a0;
L_0073c293:; BB(0x0073c293);
    /* 0073c293: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073c295: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0073c299: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073c29c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073c29d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073c29e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073c29f: ret  */ FN_RET(0x0073c270); r_esp += 4; return;
L_0073c2a0:; BB(0x0073c2a0);
    /* 0073c2a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c2a1: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x73c2a6u); f_00858009();
    /* 0073c2a6: mov edi, eax */ r_edi = r_eax;
    /* 0073c2a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073c2ab: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073c2ae: jl 0x73c2b8 */ if ((fS!=fO)) goto L_0073c2b8;
L_0073c2b0:; BB(0x0073c2b0);
    /* 0073c2b0: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073c2b3: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c2b6: je 0x73c2c5 */ if (fZ) goto L_0073c2c5;
L_0073c2b8:; BB(0x0073c2b8);
    /* 0073c2b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073c2ba: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0073c2be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073c2c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073c2c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073c2c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073c2c4: ret  */ FN_RET(0x0073c270); r_esp += 4; return;
L_0073c2c5:; BB(0x0073c2c5);
    /* 0073c2c5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0073c2c9: lea ecx, [edx + edx + 2] */ r_ecx = (u32)(r_edx+r_edx+0x2u);
    /* 0073c2cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c2ce: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x73c2d3u); f_008581c5();
    /* 0073c2d3: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0073c2d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073c2da: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0073c2de: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073c2e0: jg 0x73c339 */ if ((!fZ&&fS==fO)) goto L_0073c339;
L_0073c2e2:; BB(0x0073c2e2);
    /* 0073c2e2: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0073c2e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c2e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c2e8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0073c2ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c2ed: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x73c2f2u); f_00857dec();
    /* 0073c2f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0073c2f5:; BB(0x0073c2f5);
    /* 0073c2f5: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0073c2f9: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0073c2fc: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0073c2ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073c301: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073c303: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0073c305: mov word ptr [edx + esi*2], cx */ W16((u32)(r_edx+r_esi*2), (u16)r_ecx);
    /* 0073c309: jae 0x73c328 */ if (!fC) goto L_0073c328;
L_0073c30b:; BB(0x0073c30b);
    /* 0073c30b: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0073c30e: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c311: je 0x73c321 */ if (fZ) goto L_0073c321;
L_0073c313:; BB(0x0073c313);
    /* 0073c313: mov word ptr [ebp], cx */ W16((u32)(r_ebp), (u16)r_ecx);
    /* 0073c317: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0073c31a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c31c: je 0x73c328 */ if (fZ) goto L_0073c328;
L_0073c31e:; BB(0x0073c31e);
    /* 0073c31e: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0073c321:; BB(0x0073c321);
    /* 0073c321: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073c324: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0073c326: jb 0x73c30b */ if (fC) goto L_0073c30b;
L_0073c328:; BB(0x0073c328);
    /* 0073c328: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0073c32b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c32c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x73c331u); f_00857e98();
    /* 0073c331: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073c332:; BB(0x0073c332);
    /* 0073c332: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073c335: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073c336: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073c337: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073c338: ret  */ FN_RET(0x0073c270); r_esp += 4; return;
L_0073c339:; BB(0x0073c339);
    /* 0073c339: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0073c33d: mov eax, esi */ r_eax = r_esi;
    /* 0073c33f: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0073c343: mov ebp, eax */ r_ebp = r_eax;
L_0073c345:; BB(0x0073c345);
    /* 0073c345: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c347: lea ebx, [ebp + 2] */ r_ebx = (u32)(r_ebp+0x2u);
    /* 0073c34a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c34b: call 0x85a55f */ r_esp -= 4; W32(r_esp, 0x73c350u); f_0085a55f();
    /* 0073c350: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073c353: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c355: je 0x73c3d0 */ if (fZ) goto L_0073c3d0;
L_0073c357:; BB(0x0073c357);
    /* 0073c357: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c358: mov esi, ebp */ r_esi = r_ebp;
    /* 0073c35a: mov ebp, eax */ r_ebp = r_eax;
    /* 0073c35c: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x73c361u); f_00858009();
    /* 0073c361: mov edi, eax */ r_edi = r_eax;
    /* 0073c363: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073c366: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0073c36a: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073c36c: jg 0x73c345 */ if ((!fZ&&fS==fO)) goto L_0073c345;
L_0073c36e:; BB(0x0073c36e);
    /* 0073c36e: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0073c372: mov eax, ebp */ r_eax = r_ebp;
    /* 0073c374: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_0073c378:; BB(0x0073c378);
    /* 0073c378: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0073c37c: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0073c37e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073c381: jge 0x73c3a0 */ if ((fS==fO)) goto L_0073c3a0;
L_0073c383:; BB(0x0073c383);
    /* 0073c383: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c385: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0073c389: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c38a: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x73c38fu); f_00857dec();
    /* 0073c38f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073c392: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0073c395: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0073c397: mov word ptr [ecx + edi*2], dx */ W16((u32)(r_ecx+r_edi*2), (u16)r_edx);
    /* 0073c39b: jmp 0x73c2f5 */ goto L_0073c2f5;
L_0073c3a0:; BB(0x0073c3a0);
    /* 0073c3a0: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0073c3a4: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073c3a7: movzx esi, word ptr [esi + 2] */ r_esi = (u32)R16((u32)(r_esi+0x2u));
    /* 0073c3ab: lea ecx, [ecx + ecx] */ r_ecx = (u32)(r_ecx+r_ecx);
    /* 0073c3ae: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0073c3b0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0073c3b2: lea eax, [eax + edi + 4] */ r_eax = (u32)(r_eax+r_edi+0x4u);
    /* 0073c3b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c3b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c3b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c3b9: push 0x971d00 */ { u32 v = 0x971d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c3be: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0073c3c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c3c3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x73c3c8u); f_00857e29();
    /* 0073c3c8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073c3cb: jmp 0x73c2f5 */ goto L_0073c2f5;
L_0073c3d0:; BB(0x0073c3d0);
    /* 0073c3d0: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0073c3d4: mov edx, ebx */ r_edx = r_ebx;
    /* 0073c3d6: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0073c3da: mov eax, ebp */ r_eax = r_ebp;
    /* 0073c3dc: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073c3de: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0073c3e2: jle 0x73c378 */ if ((fZ||fS!=fO)) goto L_0073c378;
L_0073c3e4:; BB(0x0073c3e4);
    /* 0073c3e4: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0073c3e8: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0073c3eb: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 0073c3ee: lea esi, [esi + esi] */ r_esi = (u32)(r_esi+r_esi);
    /* 0073c3f1: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0073c3f3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0073c3f5: lea eax, [eax + edi + 4] */ r_eax = (u32)(r_eax+r_edi+0x4u);
    /* 0073c3f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c3fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c3fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c3fc: push 0x971d00 */ { u32 v = 0x971d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c401: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0073c405: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c406: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x73c40bu); f_00857e29();
    /* 0073c40b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073c40e: jmp 0x73c2f5 */ goto L_0073c2f5;
}

void f_0073c414(void) /* sub_73C414 */
{
    FN_ENTER(0x0073c414);
    /* 0073c414: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c415: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073c418: mov esi, ecx */ r_esi = r_ecx;
    /* 0073c41a: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0073c41d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073c41f: jne 0x73c42f */ if (!fZ) goto L_0073c42f;
L_0073c421:; BB(0x0073c421);
    /* 0073c421: mov dword ptr [esi + 0x5c], 0x1000000 */ W32((u32)(r_esi+0x5cu), 0x1000000u);
    /* 0073c428: mov eax, 0x1000000 */ r_eax = 0x1000000u;
    /* 0073c42d: jmp 0x73c432 */ goto L_0073c432;
L_0073c42f:; BB(0x0073c42f);
    /* 0073c42f: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
L_0073c432:; BB(0x0073c432);
    /* 0073c432: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0073c435: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0073c438: fcomp dword ptr [0x971ce0] */ fx_compare(ST(0), R_F32((u32)(0x971ce0u))); FPOP();
    /* 0073c43e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073c440: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073c441: jb 0x73c44b */ if (fC) goto L_0073c44b;
L_0073c443:; BB(0x0073c443);
    /* 0073c443: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0073c446: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x73c44bu); f_0073f68c();
L_0073c44b:; BB(0x0073c44b);
    /* 0073c44b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073c44d: call 0x73c478 */ r_esp -= 4; W32(r_esp, 0x73c452u); f_0073c478();
    /* 0073c452: mov ecx, esi */ r_ecx = r_esi;
    /* 0073c454: call 0x73adcc */ r_esp -= 4; W32(r_esp, 0x73c459u); f_0073adcc();
    /* 0073c459: mov ecx, esi */ r_ecx = r_esi;
    /* 0073c45b: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73c460u); f_00710db4();
    /* 0073c460: mov ecx, esi */ r_ecx = r_esi;
    /* 0073c462: call 0x73c4b4 */ r_esp -= 4; W32(r_esp, 0x73c467u); f_0073c4b4();
    /* 0073c467: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0073c46a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c46b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073c46d: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x73c472u); f_0072a5ec();
    /* 0073c472: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073c475: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073c476: ret  */ FN_RET(0x0073c414); r_esp += 4; return;
}

void f_0073c478(void) /* sub_73C478 */
{
    FN_ENTER(0x0073c478);
    /* 0073c478: fld dword ptr [ecx + 0xa4] */ FPUSH(R_F32((u32)(r_ecx+0xa4u)));
    /* 0073c47e: fcom dword ptr [0x971cdc] */ fx_compare(ST(0), R_F32((u32)(0x971cdcu))); 
    /* 0073c484: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073c486: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073c487: je 0x73c4af */ if (fZ) goto L_0073c4af;
L_0073c489:; BB(0x0073c489);
    /* 0073c489: fld dword ptr [ecx + 0x98] */ FPUSH(R_F32((u32)(r_ecx+0x98u)));
    /* 0073c48f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0073c491: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 0073c494: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073c496: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 0073c49c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073c49e: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 0073c4a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073c4a3: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 0073c4a9: call 0x73b59c */ r_esp -= 4; W32(r_esp, 0x73c4aeu); f_0073b59c();
    /* 0073c4ae: ret  */ FN_RET(0x0073c478); r_esp += 4; return;
L_0073c4af:; BB(0x0073c4af);
    /* 0073c4af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073c4b1: ret  */ FN_RET(0x0073c478); r_esp += 4; return;
}

void f_0073c4b4(void) /* sub_73C4B4 */
{
    FN_ENTER(0x0073c4b4);
    /* 0073c4b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c4b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c4b6: mov edi, ecx */ r_edi = r_ecx;
    /* 0073c4b8: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 0073c4bb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073c4be: mov ecx, edi */ r_ecx = r_edi;
    /* 0073c4c0: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x73c4c5u); f_00710ee4();
    /* 0073c4c5: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 0073c4c8: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 0073c4cb: fcom dword ptr [0x971cd8] */ fx_compare(ST(0), R_F32((u32)(0x971cd8u))); 
    /* 0073c4d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073c4d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073c4d4: je 0x73c4f8 */ if (fZ) goto L_0073c4f8;
L_0073c4d6:; BB(0x0073c4d6);
    /* 0073c4d6: fld dword ptr [edi + 0x98] */ FPUSH(R_F32((u32)(r_edi+0x98u)));
    /* 0073c4dc: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0073c4de: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 0073c4e1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073c4e3: fstp dword ptr [edi + 0x98] */ W_F32((u32)(r_edi+0x98u), ST(0)); FPOP();
    /* 0073c4e9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0073c4eb: fstp dword ptr [edi + 0x74] */ W_F32((u32)(r_edi+0x74u), ST(0)); FPOP();
    /* 0073c4ee: mov ecx, edi */ r_ecx = r_edi;
    /* 0073c4f0: call 0x73b59c */ r_esp -= 4; W32(r_esp, 0x73c4f5u); f_0073b59c();
    /* 0073c4f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073c4f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073c4f7: ret  */ FN_RET(0x0073c4b4); r_esp += 4; return;
L_0073c4f8:; BB(0x0073c4f8);
    /* 0073c4f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073c4fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073c4fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073c4fc: ret  */ FN_RET(0x0073c4b4); r_esp += 4; return;
}

void f_0073c500(void) /* sub_73C500 */
{
    FN_ENTER(0x0073c500);
    /* 0073c500: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c501: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073c502: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073c504: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073c506: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x73c50bu); f_007108f4();
    /* 0073c50b: mov esi, eax */ r_esi = r_eax;
    /* 0073c50d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c50e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073c510: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x73c515u); f_00710f80();
    /* 0073c515: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c516: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 0073c519: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c51a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073c51c: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x73c521u); f_0072a648();
    /* 0073c521: mov ecx, dword ptr [ebp + 0x64] */ r_ecx = R32((u32)(r_ebp+0x64u));
    /* 0073c524: lea edx, [ebp + 0x70] */ r_edx = (u32)(r_ebp+0x70u);
    /* 0073c527: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c528: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c529: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x73c52eu); f_0073f694();
    /* 0073c52e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073c52f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073c530: ret  */ FN_RET(0x0073c500); r_esp += 4; return;
}

void f_0073c534(void) /* sub_73C534 */
{
    FN_ENTER(0x0073c534);
    /* 0073c534: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0073c538: fcomp dword ptr [ecx + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x3cu))); FPOP();
    /* 0073c53b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073c53d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073c53e: je 0x73c551 */ if (fZ) goto L_0073c551;
L_0073c540:; BB(0x0073c540);
    /* 0073c540: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073c544: mov dword ptr [ecx + 0x50], 3 */ W32((u32)(r_ecx+0x50u), 0x3u);
    /* 0073c54b: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0073c54e: ret 4 */ FN_RET(0x0073c534); r_esp += 8; return;
L_0073c551:; BB(0x0073c551);
    /* 0073c551: ret 4 */ FN_RET(0x0073c534); r_esp += 8; return;
}

void f_0073c554(void) /* sub_73C554 */
{
    FN_ENTER(0x0073c554);
    /* 0073c554: fld dword ptr [ecx + 0xa4] */ FPUSH(R_F32((u32)(r_ecx+0xa4u)));
    /* 0073c55a: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0073c55e: fstp dword ptr [ecx + 0xa4] */ W_F32((u32)(r_ecx+0xa4u), ST(0)); FPOP();
    /* 0073c564: ret 4 */ FN_RET(0x0073c554); r_esp += 8; return;
}

void f_0073c568(void) /* sub_73C568 */
{
    FN_ENTER(0x0073c568);
    /* 0073c568: mov dword ptr [0xa9a998], 0x3f800000 */ W32((u32)(0xa9a998u), 0x3f800000u);
    /* 0073c572: mov dword ptr [0xa9a99c], 0x41000000 */ W32((u32)(0xa9a99cu), 0x41000000u);
    /* 0073c57c: mov dword ptr [0xa9a9a0], 0x3fc00000 */ W32((u32)(0xa9a9a0u), 0x3fc00000u);
    /* 0073c586: ret  */ FN_RET(0x0073c568); r_esp += 4; return;
}

void f_0073c588(void) /* sub_73C588 */
{
    FN_ENTER(0x0073c588);
    /* 0073c588: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073c589: mov ebp, esp */ r_ebp = r_esp;
    /* 0073c58b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073c58d: push 0x8f1d88 */ { u32 v = 0x8f1d88u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c592: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073c598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c599: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073c5a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073c5a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073c5a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073c5a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073c5ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073c5af: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c5b1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073c5b8: call 0x7a8b68 */ r_esp -= 4; W32(r_esp, 0x73c5bdu); f_007a8b68();
    /* 0073c5bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073c5be: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073c5c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c5c3: je 0x73c6a0 */ if (fZ) goto L_0073c6a0;
L_0073c5c9:; BB(0x0073c5c9);
    /* 0073c5c9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073c5d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073c5d7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073c5da: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c5dc: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c5e1: call 0x7a89dc */ r_esp -= 4; W32(r_esp, 0x73c5e6u); f_007a89dc();
    /* 0073c5e6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073c5e9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073c5f0:; BB(0x0073c5f0);
    /* 0073c5f0: mov dword ptr [0xa9a9a8], eax */ W32((u32)(0xa9a9a8u), r_eax);
    /* 0073c5f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c5f7: mov dword ptr [0xa9a9a4], eax */ W32((u32)(0xa9a9a4u), r_eax);
    /* 0073c5fc: mov dword ptr [0xa9a920], eax */ W32((u32)(0xa9a920u), r_eax);
    /* 0073c601: mov dword ptr [0xa9a924], eax */ W32((u32)(0xa9a924u), r_eax);
    /* 0073c606: mov dword ptr [0xa9a928], eax */ W32((u32)(0xa9a928u), r_eax);
    /* 0073c60b: mov dword ptr [0xa9a92c], eax */ W32((u32)(0xa9a92cu), r_eax);
    /* 0073c610: mov dword ptr [0xa9a930], eax */ W32((u32)(0xa9a930u), r_eax);
    /* 0073c615: mov dword ptr [0xa9a934], eax */ W32((u32)(0xa9a934u), r_eax);
    /* 0073c61a: mov dword ptr [0xa9a938], eax */ W32((u32)(0xa9a938u), r_eax);
    /* 0073c61f: mov dword ptr [0xa9a93c], eax */ W32((u32)(0xa9a93cu), r_eax);
    /* 0073c624: mov dword ptr [0xa9a940], eax */ W32((u32)(0xa9a940u), r_eax);
    /* 0073c629: mov dword ptr [0xa9a944], eax */ W32((u32)(0xa9a944u), r_eax);
    /* 0073c62e: mov dword ptr [0xa9a948], eax */ W32((u32)(0xa9a948u), r_eax);
    /* 0073c633: mov dword ptr [0xa9a94c], eax */ W32((u32)(0xa9a94cu), r_eax);
    /* 0073c638: mov dword ptr [0xa9a950], eax */ W32((u32)(0xa9a950u), r_eax);
    /* 0073c63d: mov dword ptr [0xa9a954], eax */ W32((u32)(0xa9a954u), r_eax);
    /* 0073c642: mov dword ptr [0xa9a958], eax */ W32((u32)(0xa9a958u), r_eax);
    /* 0073c647: mov dword ptr [0xa9a95c], eax */ W32((u32)(0xa9a95cu), r_eax);
    /* 0073c64c: mov dword ptr [0xa9a960], eax */ W32((u32)(0xa9a960u), r_eax);
    /* 0073c651: mov dword ptr [0xa9a964], eax */ W32((u32)(0xa9a964u), r_eax);
    /* 0073c656: mov dword ptr [0xa9a968], eax */ W32((u32)(0xa9a968u), r_eax);
    /* 0073c65b: mov dword ptr [0xa9a96c], eax */ W32((u32)(0xa9a96cu), r_eax);
    /* 0073c660: mov dword ptr [0xa9a970], eax */ W32((u32)(0xa9a970u), r_eax);
    /* 0073c665: mov dword ptr [0xa9a974], eax */ W32((u32)(0xa9a974u), r_eax);
    /* 0073c66a: mov dword ptr [0xa9a978], eax */ W32((u32)(0xa9a978u), r_eax);
    /* 0073c66f: mov dword ptr [0xa9a97c], eax */ W32((u32)(0xa9a97cu), r_eax);
    /* 0073c674: mov dword ptr [0xa9a980], eax */ W32((u32)(0xa9a980u), r_eax);
    /* 0073c679: mov dword ptr [0xa9a984], eax */ W32((u32)(0xa9a984u), r_eax);
    /* 0073c67e: mov dword ptr [0xa9a988], eax */ W32((u32)(0xa9a988u), r_eax);
    /* 0073c683: mov dword ptr [0xa9a98c], eax */ W32((u32)(0xa9a98cu), r_eax);
    /* 0073c688: mov dword ptr [0xa9a990], eax */ W32((u32)(0xa9a990u), r_eax);
    /* 0073c68d: mov dword ptr [0xa9a994], eax */ W32((u32)(0xa9a994u), r_eax);
    /* 0073c692: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073c695: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073c69c: mov esp, ebp */ r_esp = r_ebp;
    /* 0073c69e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073c69f: ret  */ FN_RET(0x0073c588); r_esp += 4; return;
L_0073c6a0:; BB(0x0073c6a0);
    /* 0073c6a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073c6a2: jmp 0x73c5f0 */ goto L_0073c5f0;
}

void f_0073c6a8(void) /* sub_73C6A8 */
{
    FN_ENTER(0x0073c6a8);
    /* 0073c6a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c6a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073c6ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073c6ad: call 0x73c6cc */ r_esp -= 4; W32(r_esp, 0x73c6b2u); f_0073c6cc();
    /* 0073c6b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073c6b6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c6b8: jne 0x73c6be */ if (!fZ) goto L_0073c6be;
L_0073c6ba:; BB(0x0073c6ba);
    /* 0073c6ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073c6bb: ret 4 */ FN_RET(0x0073c6a8); r_esp += 8; return;
L_0073c6be:; BB(0x0073c6be);
    /* 0073c6be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c6bf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73c6c4u); f_005c2f74();
    /* 0073c6c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073c6c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073c6c6: ret 4 */ FN_RET(0x0073c6a8); r_esp += 8; return;
}

void f_0073c6cc(void) /* sub_73C6CC */
{
    FN_ENTER(0x0073c6cc);
    /* 0073c6cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073c6cd: mov ebp, esp */ r_ebp = r_esp;
    /* 0073c6cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073c6d1: push 0x8f1da4 */ { u32 v = 0x8f1da4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c6d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073c6dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c6dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073c6e4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073c6e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073c6ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073c6ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073c6f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073c6f3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073c6f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073c6f9: mov dword ptr [ecx], 0xb40f58 */ W32((u32)(r_ecx), 0xb40f58u);
    /* 0073c6ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073c706: call 0x73a5a8 */ r_esp -= 4; W32(r_esp, 0x73c70bu); f_0073a5a8();
    /* 0073c70b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073c70e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073c715: mov esp, ebp */ r_esp = r_ebp;
    /* 0073c717: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073c718: ret  */ FN_RET(0x0073c6cc); r_esp += 4; return;
}

void f_0073c71c(void) /* sub_73C71C */
{
    FN_ENTER(0x0073c71c);
    /* 0073c71c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073c71d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073c71f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073c721: push 0x8f1dcc */ { u32 v = 0x8f1dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0073c726: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073c72c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c72d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073c734: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073c737: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073c73a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073c73d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073c740: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073c743: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0073c746: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c747: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c74a: call 0x73b1e8 */ r_esp -= 4; W32(r_esp, 0x73c74fu); f_0073b1e8();
    /* 0073c74f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073c756: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0073c75b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73c760u); f_005caba4();
    /* 0073c760: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073c763: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073c766: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c768: je 0x73c7a2 */ if (fZ) goto L_0073c7a2;
L_0073c76a:; BB(0x0073c76a);
    /* 0073c76a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073c771: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073c778: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c77b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0073c77e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073c781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c782: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c785: call 0x73c7a8 */ r_esp -= 4; W32(r_esp, 0x73c78au); f_0073c7a8();
    /* 0073c78a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073c78d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073c794:; BB(0x0073c794);
    /* 0073c794: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073c797: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073c79e: mov esp, ebp */ r_esp = r_ebp;
    /* 0073c7a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073c7a1: ret  */ FN_RET(0x0073c71c); r_esp += 4; return;
L_0073c7a2:; BB(0x0073c7a2);
    /* 0073c7a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c7a4: jmp 0x73c794 */ goto L_0073c794;
}

void f_0073c7a8(void) /* sub_73C7A8 */
{
    FN_ENTER(0x0073c7a8);
    /* 0073c7a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c7a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c7aa: mov edi, ecx */ r_edi = r_ecx;
    /* 0073c7ac: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0073c7b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c7b1: mov ecx, edi */ r_ecx = r_edi;
    /* 0073c7b3: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c7b7: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c7bb: call 0x73a610 */ r_esp -= 4; W32(r_esp, 0x73c7c0u); f_0073a610();
    /* 0073c7c0: mov dword ptr [edi], 0xb40f58 */ W32((u32)(r_edi), 0xb40f58u);
    /* 0073c7c6: mov edx, dword ptr [0x9f3284] */ r_edx = R32((u32)(0x9f3284u));
    /* 0073c7cc: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0073c7cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c7d1: mov dword ptr [edi + 0xa4], eax */ W32((u32)(r_edi+0xa4u), r_eax);
    /* 0073c7d7: mov word ptr [edi + 0x20], bx */ W16((u32)(r_edi+0x20u), (u16)r_ebx);
    /* 0073c7db: mov dword ptr [edi + 0xa8], eax */ W32((u32)(r_edi+0xa8u), r_eax);
    /* 0073c7e1: mov eax, edi */ r_eax = r_edi;
    /* 0073c7e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073c7e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073c7e5: ret 0xc */ FN_RET(0x0073c7a8); r_esp += 16; return;
}

void f_0073c7e8(void) /* sub_73C7E8 */
{
    FN_ENTER(0x0073c7e8);
    /* 0073c7e8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c7ee: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c7f2: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c7f6: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c7fa: call 0x73c71c */ r_esp -= 4; W32(r_esp, 0x73c7ffu); f_0073c71c();
    /* 0073c7ff: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073c802: ret  */ FN_RET(0x0073c7e8); r_esp += 4; return;
}

void f_0073c804(void) /* sub_73C804 */
{
    FN_ENTER(0x0073c804);
    /* 0073c804: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c805: mov esi, ecx */ r_esi = r_ecx;
    /* 0073c807: mov ecx, esi */ r_ecx = r_esi;
    /* 0073c809: call 0x73abb0 */ r_esp -= 4; W32(r_esp, 0x73c80eu); f_0073abb0();
    /* 0073c80e: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0073c812: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c813: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x73c818u); f_00719140();
    /* 0073c818: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073c819: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0073c81f: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0073c825: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c826: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0073c829: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073c82b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073c82d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073c82f: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0073c836: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x73c83bu); f_007c1160();
    /* 0073c83b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c83d: je 0x73c85a */ if (fZ) goto L_0073c85a;
L_0073c83f:; BB(0x0073c83f);
    /* 0073c83f: mov ecx, esi */ r_ecx = r_esi;
    /* 0073c841: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x73c846u); f_0073b170();
    /* 0073c846: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c848: je 0x73c853 */ if (fZ) goto L_0073c853;
L_0073c84a:; BB(0x0073c84a);
    /* 0073c84a: mov ecx, esi */ r_ecx = r_esi;
    /* 0073c84c: call 0x73c85c */ r_esp -= 4; W32(r_esp, 0x73c851u); f_0073c85c();
    /* 0073c851: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073c852: ret  */ FN_RET(0x0073c804); r_esp += 4; return;
L_0073c853:; BB(0x0073c853);
    /* 0073c853: mov ecx, esi */ r_ecx = r_esi;
    /* 0073c855: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x73c85au); f_0073b0f0();
L_0073c85a:; BB(0x0073c85a);
    /* 0073c85a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073c85b: ret  */ FN_RET(0x0073c804); r_esp += 4; return;
}

void f_0073c85c(void) /* sub_73C85C */
{
    FN_ENTER(0x0073c85c);
    /* 0073c85c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073c85d: mov edi, ecx */ r_edi = r_ecx;
    /* 0073c85f: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 0073c865: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c867: jne 0x73c86b */ if (!fZ) goto L_0073c86b;
L_0073c869:; BB(0x0073c869);
    /* 0073c869: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073c86a: ret  */ FN_RET(0x0073c85c); r_esp += 4; return;
L_0073c86b:; BB(0x0073c86b);
    /* 0073c86b: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x73c870u); f_00816d30();
    /* 0073c870: push dword ptr [edi + 0xa8] */ { u32 v = R32((u32)(r_edi+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c876: call 0x815ea4 */ r_esp -= 4; W32(r_esp, 0x73c87bu); f_00815ea4();
    /* 0073c87b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073c87c: push dword ptr [edi + 0xa4] */ { u32 v = R32((u32)(r_edi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c882: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c887: mov dword ptr [edi + 0xa8], eax */ W32((u32)(r_edi+0xa8u), r_eax);
    /* 0073c88d: mov ecx, edi */ r_ecx = r_edi;
    /* 0073c88f: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x73c894u); f_0073ae38();
    /* 0073c894: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073c895: ret  */ FN_RET(0x0073c85c); r_esp += 4; return;
}

void f_0073c898(void) /* sub_73C898 */
{
    FN_ENTER(0x0073c898);
    /* 0073c898: call 0x73ae14 */ r_esp -= 4; W32(r_esp, 0x73c89du); f_0073ae14();
    /* 0073c89d: ret  */ FN_RET(0x0073c898); r_esp += 4; return;
}

void f_0073c8a0(void) /* sub_73C8A0 */
{
    FN_ENTER(0x0073c8a0);
    /* 0073c8a0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073c8a3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0073c8a7: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 0073c8ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c8af: je 0x73c8fe */ if (fZ) goto L_0073c8fe;
L_0073c8b1:; BB(0x0073c8b1);
    /* 0073c8b1: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0073c8b4: mov edi, ecx */ r_edi = r_ecx;
    /* 0073c8b6: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0073c8ba: mov ebp, edx */ r_ebp = r_edx;
L_0073c8bc:; BB(0x0073c8bc);
    /* 0073c8bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c8be: je 0x73c8ef */ if (fZ) goto L_0073c8ef;
L_0073c8c0:; BB(0x0073c8c0);
    /* 0073c8c0: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x73c8c5u); f_00816d30();
    /* 0073c8c5: push dword ptr [edi + 0xa8] */ { u32 v = R32((u32)(r_edi+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c8cb: call 0x815ea4 */ r_esp -= 4; W32(r_esp, 0x73c8d0u); f_00815ea4();
    /* 0073c8d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073c8d1: push dword ptr [edi + 0xa4] */ { u32 v = R32((u32)(r_edi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c8d7: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c8dc: mov dword ptr [edi + 0xa8], eax */ W32((u32)(r_edi+0xa8u), r_eax);
    /* 0073c8e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0073c8e4: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x73c8e9u); f_0073ae38();
    /* 0073c8e9: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
L_0073c8ef:; BB(0x0073c8ef);
    /* 0073c8ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c8f1: jne 0x73c8bc */ if (!fZ) goto L_0073c8bc;
L_0073c8f3:; BB(0x0073c8f3);
    /* 0073c8f3: mov edx, ebp */ r_edx = r_ebp;
    /* 0073c8f5: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0073c8f9: mov ecx, edi */ r_ecx = r_edi;
    /* 0073c8fb: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0073c8fe:; BB(0x0073c8fe);
    /* 0073c8fe: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0073c902: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073c905: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 0073c90b: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 0073c911: call 0x73c85c */ r_esp -= 4; W32(r_esp, 0x73c916u); f_0073c85c();
    /* 0073c916: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073c919: ret 8 */ FN_RET(0x0073c8a0); r_esp += 12; return;
}

void f_0073c91c(void) /* sub_73C91C */
{
    FN_ENTER(0x0073c91c);
    /* 0073c91c: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 0073c922: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073c924: je 0x73c929 */ if (fZ) goto L_0073c929;
L_0073c926:; BB(0x0073c926);
    /* 0073c926: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c928: ret  */ FN_RET(0x0073c91c); r_esp += 4; return;
L_0073c929:; BB(0x0073c929);
    /* 0073c929: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x73c92eu); f_0073b170();
    /* 0073c92e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c930: jne 0x73c935 */ if (!fZ) goto L_0073c935;
L_0073c932:; BB(0x0073c932);
    /* 0073c932: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c934: ret  */ FN_RET(0x0073c91c); r_esp += 4; return;
L_0073c935:; BB(0x0073c935);
    /* 0073c935: mov eax, 1 */ r_eax = 0x1u;
    /* 0073c93a: ret  */ FN_RET(0x0073c91c); r_esp += 4; return;
}

void f_0073c93c(void) /* sub_73C93C */
{
    FN_ENTER(0x0073c93c);
    /* 0073c93c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c93d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073c93f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073c941: call 0x73c960 */ r_esp -= 4; W32(r_esp, 0x73c946u); f_0073c960();
    /* 0073c946: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073c94a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073c94c: jne 0x73c952 */ if (!fZ) goto L_0073c952;
L_0073c94e:; BB(0x0073c94e);
    /* 0073c94e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073c94f: ret 4 */ FN_RET(0x0073c93c); r_esp += 8; return;
L_0073c952:; BB(0x0073c952);
    /* 0073c952: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073c953: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73c958u); f_005c2f74();
    /* 0073c958: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073c959: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073c95a: ret 4 */ FN_RET(0x0073c93c); r_esp += 8; return;
}

void f_0073c960(void) /* sub_73C960 */
{
    FN_ENTER(0x0073c960);
    /* 0073c960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073c961: mov ebp, esp */ r_ebp = r_esp;
    /* 0073c963: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073c965: push 0x8f1de8 */ { u32 v = 0x8f1de8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c96a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073c970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c971: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073c978: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073c97b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073c97e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073c981: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073c984: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073c987: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073c98a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073c98d: mov dword ptr [ecx], 0xb40fb8 */ W32((u32)(r_ecx), 0xb40fb8u);
    /* 0073c993: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073c99a: call 0x73a5a8 */ r_esp -= 4; W32(r_esp, 0x73c99fu); f_0073a5a8();
    /* 0073c99f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073c9a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073c9a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0073c9ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073c9ac: ret  */ FN_RET(0x0073c960); r_esp += 4; return;
}

void f_0073c9b0(void) /* sub_73C9B0 */
{
    FN_ENTER(0x0073c9b0);
    /* 0073c9b0: push 0xbe */ { u32 v = 0xbeu; r_esp -= 4; W32(r_esp, v); }
    /* 0073c9b5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x73c9bau); f_0073ec50();
    /* 0073c9ba: push 0x971d18 */ { u32 v = 0x971d18u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c9bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c9c0: call 0x73c9cc */ r_esp -= 4; W32(r_esp, 0x73c9c5u); f_0073c9cc();
    /* 0073c9c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073c9c8: ret  */ FN_RET(0x0073c9b0); r_esp += 4; return;
}

void f_0073c9cc(void) /* sub_73C9CC */
{
    FN_ENTER(0x0073c9cc);
    /* 0073c9cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073c9cd: mov ebp, esp */ r_ebp = r_esp;
    /* 0073c9cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073c9d1: push 0x8f1e10 */ { u32 v = 0x8f1e10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c9d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073c9dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073c9dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073c9e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073c9e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073c9ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073c9ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073c9f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073c9f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073c9f5: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073c9f8: call 0x73b1e8 */ r_esp -= 4; W32(r_esp, 0x73c9fdu); f_0073b1e8();
    /* 0073c9fd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073ca04: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ca09: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73ca0eu); f_005caba4();
    /* 0073ca0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073ca11: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073ca14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ca16: je 0x73ca49 */ if (fZ) goto L_0073ca49;
L_0073ca18:; BB(0x0073ca18);
    /* 0073ca18: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073ca1f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073ca26: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ca29: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073ca2c: call 0x73ca50 */ r_esp -= 4; W32(r_esp, 0x73ca31u); f_0073ca50();
    /* 0073ca31: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073ca34: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073ca3b:; BB(0x0073ca3b);
    /* 0073ca3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073ca3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073ca45: mov esp, ebp */ r_esp = r_ebp;
    /* 0073ca47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073ca48: ret  */ FN_RET(0x0073c9cc); r_esp += 4; return;
L_0073ca49:; BB(0x0073ca49);
    /* 0073ca49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ca4b: jmp 0x73ca3b */ goto L_0073ca3b;
}

void f_0073ca50(void) /* sub_73CA50 */
{
    FN_ENTER(0x0073ca50);
    /* 0073ca50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ca51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073ca53: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ca59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ca5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073ca5d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ca61: call 0x73a610 */ r_esp -= 4; W32(r_esp, 0x73ca66u); f_0073a610();
    /* 0073ca66: mov dword ptr [ebx], 0xb40fb8 */ W32((u32)(r_ebx), 0xb40fb8u);
    /* 0073ca6c: mov edx, dword ptr [0x9f3288] */ r_edx = R32((u32)(0x9f3288u));
    /* 0073ca72: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0073ca75: mov eax, ebx */ r_eax = r_ebx;
    /* 0073ca77: mov dword ptr [ebx + 0xa4], 0 */ W32((u32)(r_ebx+0xa4u), 0x0u);
    /* 0073ca81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073ca82: ret 4 */ FN_RET(0x0073ca50); r_esp += 8; return;
}

void f_0073ca88(void) /* sub_73CA88 */
{
    FN_ENTER(0x0073ca88);
    /* 0073ca88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073ca89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ca8a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073ca8c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073ca8e: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x73ca93u); f_007108f4();
    /* 0073ca93: mov ebx, eax */ r_ebx = r_eax;
    /* 0073ca95: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0073ca9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ca9d: je 0x73caae */ if (fZ) goto L_0073caae;
L_0073ca9f:; BB(0x0073ca9f);
    /* 0073ca9f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073caa2: jne 0x73cacc */ if (!fZ) goto L_0073cacc;
L_0073caa4:; BB(0x0073caa4);
    /* 0073caa4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073caa5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073caa7: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x73caacu); f_00710f80();
    /* 0073caac: jmp 0x73cacc */ goto L_0073cacc;
L_0073caae:; BB(0x0073caae);
    /* 0073caae: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0073cab1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0073cab3: jge 0x73cac4 */ if ((fS==fO)) goto L_0073cac4;
L_0073cab5:; BB(0x0073cab5);
    /* 0073cab5: fild dword ptr [ebp + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x5cu)));
    /* 0073cab8: fdiv dword ptr [0x971d20] */ ST(0) = ST(0) / R_F32((u32)(0x971d20u));
    /* 0073cabe: fst dword ptr [ebx + 0x28] */ W_F32((u32)(r_ebx+0x28u), ST(0));
    /* 0073cac1: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
L_0073cac4:; BB(0x0073cac4);
    /* 0073cac4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073cac5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073cac7: call 0x7119d4 */ r_esp -= 4; W32(r_esp, 0x73caccu); f_007119d4();
L_0073cacc:; BB(0x0073cacc);
    /* 0073cacc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073cacd: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 0073cad0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073cad1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073cad3: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x73cad8u); f_0072a648();
    /* 0073cad8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073cad9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073cada: ret  */ FN_RET(0x0073ca88); r_esp += 4; return;
}

void f_0073cadc(void) /* sub_73CADC */
{
    FN_ENTER(0x0073cadc);
    /* 0073cadc: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0073cae2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073cae4: jne 0x73cafd */ if (!fZ) goto L_0073cafd;
L_0073cae6:; BB(0x0073cae6);
    /* 0073cae6: push 0xff000000 */ { u32 v = 0xff000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073caeb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0073caef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073caf0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0073caf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073caf5: call 0x73ae4c */ r_esp -= 4; W32(r_esp, 0x73cafau); f_0073ae4c();
    /* 0073cafa: ret 8 */ FN_RET(0x0073cadc); r_esp += 12; return;
L_0073cafd:; BB(0x0073cafd);
    /* 0073cafd: jle 0x73cb16 */ if ((fZ||fS!=fO)) goto L_0073cb16;
L_0073caff:; BB(0x0073caff);
    /* 0073caff: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073cb02: jg 0x73cb16 */ if ((!fZ&&fS==fO)) goto L_0073cb16;
L_0073cb04:; BB(0x0073cb04);
    /* 0073cb04: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073cb08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073cb09: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0073cb0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073cb0e: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x73cb13u); f_0073ae38();
    /* 0073cb13: ret 8 */ FN_RET(0x0073cadc); r_esp += 12; return;
L_0073cb16:; BB(0x0073cb16);
    /* 0073cb16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073cb18: ret 8 */ FN_RET(0x0073cadc); r_esp += 12; return;
}

void f_0073cb2c(void) /* sub_73CB2C */
{
    FN_ENTER(0x0073cb2c);
    /* 0073cb2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073cb2d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073cb2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073cb31: call 0x73cb50 */ r_esp -= 4; W32(r_esp, 0x73cb36u); f_0073cb50();
    /* 0073cb36: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073cb3a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073cb3c: jne 0x73cb42 */ if (!fZ) goto L_0073cb42;
L_0073cb3e:; BB(0x0073cb3e);
    /* 0073cb3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073cb3f: ret 4 */ FN_RET(0x0073cb2c); r_esp += 8; return;
L_0073cb42:; BB(0x0073cb42);
    /* 0073cb42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073cb43: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73cb48u); f_005c2f74();
    /* 0073cb48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073cb49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073cb4a: ret 4 */ FN_RET(0x0073cb2c); r_esp += 8; return;
}

void f_0073cb50(void) /* sub_73CB50 */
{
    FN_ENTER(0x0073cb50);
    /* 0073cb50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073cb51: mov ebp, esp */ r_ebp = r_esp;
    /* 0073cb53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073cb55: push 0x8f1e2c */ { u32 v = 0x8f1e2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073cb5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073cb60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073cb61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073cb68: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073cb6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073cb6e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073cb71: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073cb74: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073cb77: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073cb7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073cb7d: mov dword ptr [ecx], 0xb41018 */ W32((u32)(r_ecx), 0xb41018u);
    /* 0073cb83: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073cb8a: call 0x73c960 */ r_esp -= 4; W32(r_esp, 0x73cb8fu); f_0073c960();
    /* 0073cb8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073cb92: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073cb99: mov esp, ebp */ r_esp = r_ebp;
    /* 0073cb9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073cb9c: ret  */ FN_RET(0x0073cb50); r_esp += 4; return;
}

void f_0073cba0(void) /* sub_73CBA0 */
{
    FN_ENTER(0x0073cba0);
    /* 0073cba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073cba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0073cba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073cba5: push 0x8f1e54 */ { u32 v = 0x8f1e54u; r_esp -= 4; W32(r_esp, v); }
    /* 0073cbaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073cbb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073cbb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073cbb8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073cbbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073cbbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073cbc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073cbc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073cbc7: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0073cbc9: call 0x73aba4 */ r_esp -= 4; W32(r_esp, 0x73cbceu); f_0073aba4();
    /* 0073cbce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073cbd0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cbd3: call 0x73b1e8 */ r_esp -= 4; W32(r_esp, 0x73cbd8u); f_0073b1e8();
    /* 0073cbd8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073cbdf: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073cbe4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73cbe9u); f_005caba4();
    /* 0073cbe9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073cbec: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073cbef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073cbf1: je 0x73cc38 */ if (fZ) goto L_0073cc38;
L_0073cbf3:; BB(0x0073cbf3);
    /* 0073cbf3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073cbfa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073cc01: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cc04: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cc07: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073cc0a: call 0x73cc3c */ r_esp -= 4; W32(r_esp, 0x73cc0fu); f_0073cc3c();
    /* 0073cc0f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073cc12: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073cc19:; BB(0x0073cc19);
    /* 0073cc19: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073cc20: call 0x73b1d4 */ r_esp -= 4; W32(r_esp, 0x73cc25u); f_0073b1d4();
    /* 0073cc25: mov eax, ebx */ r_eax = r_ebx;
    /* 0073cc27: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073cc2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073cc2d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073cc34: mov esp, ebp */ r_esp = r_ebp;
    /* 0073cc36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073cc37: ret  */ FN_RET(0x0073cba0); r_esp += 4; return;
L_0073cc38:; BB(0x0073cc38);
    /* 0073cc38: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0073cc3a: jmp 0x73cc19 */ goto L_0073cc19;
}

void f_0073cc3c(void) /* sub_73CC3C */
{
    FN_ENTER(0x0073cc3c);
    /* 0073cc3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073cc3d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073cc3f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cc43: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073cc45: call 0x73ca50 */ r_esp -= 4; W32(r_esp, 0x73cc4au); f_0073ca50();
    /* 0073cc4a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0073cc4e: mov dword ptr [ebp], 0xb41018 */ W32((u32)(r_ebp), 0xb41018u);
    /* 0073cc55: mov edx, dword ptr [0x9f328c] */ r_edx = R32((u32)(0x9f328cu));
    /* 0073cc5b: mov dword ptr [ebp + 0xa8], 0 */ W32((u32)(r_ebp+0xa8u), 0x0u);
    /* 0073cc65: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0073cc68: mov dword ptr [ebp + 0xac], eax */ W32((u32)(r_ebp+0xacu), r_eax);
    /* 0073cc6e: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0073cc74: mov eax, ebp */ r_eax = r_ebp;
    /* 0073cc76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073cc77: ret 8 */ FN_RET(0x0073cc3c); r_esp += 12; return;
}

void f_0073cc7c(void) /* sub_73CC7C */
{
    FN_ENTER(0x0073cc7c);
    /* 0073cc7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073cc7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073cc7f: fld dword ptr [ebx + 0x74] */ FPUSH(R_F32((u32)(r_ebx+0x74u)));
    /* 0073cc82: fadd dword ptr [ebx + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xa8u));
    /* 0073cc88: fstp dword ptr [ebx + 0x74] */ W_F32((u32)(r_ebx+0x74u), ST(0)); FPOP();
    /* 0073cc8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073cc8d: call 0x73a728 */ r_esp -= 4; W32(r_esp, 0x73cc92u); f_0073a728();
    /* 0073cc92: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073cc94: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73cc99u); f_00710db4();
    /* 0073cc99: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073cc9b: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x73cca0u); f_00710ee4();
    /* 0073cca0: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 0073cca3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073cca4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073cca6: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x73ccabu); f_0072a5ec();
    /* 0073ccab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073ccad: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x73ccb2u); f_00712480();
    /* 0073ccb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ccb4: je 0x73ccd0 */ if (fZ) goto L_0073ccd0;
L_0073ccb6:; BB(0x0073ccb6);
    /* 0073ccb6: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 0073ccbc: fcomp dword ptr [ebx + 0x74] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x74u))); FPOP();
    /* 0073ccbf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073ccc1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073ccc2: ja 0x73ccd0 */ if ((!fC&&!fZ)) goto L_0073ccd0;
L_0073ccc4:; BB(0x0073ccc4);
    /* 0073ccc4: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 0073ccca: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
L_0073ccd0:; BB(0x0073ccd0);
    /* 0073ccd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073ccd1: ret  */ FN_RET(0x0073cc7c); r_esp += 4; return;
}

void f_0073ccd4(void) /* sub_73CCD4 */
{
    FN_ENTER(0x0073ccd4);
    /* 0073ccd4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073ccd8: mov dword ptr [ecx + 0xa8], eax */ W32((u32)(r_ecx+0xa8u), r_eax);
    /* 0073ccde: ret 4 */ FN_RET(0x0073ccd4); r_esp += 8; return;
}

void f_0073cce4(void) /* sub_73CCE4 */
{
    FN_ENTER(0x0073cce4);
    /* 0073cce4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073cce5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073cce7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073cce9: call 0x73cd08 */ r_esp -= 4; W32(r_esp, 0x73cceeu); f_0073cd08();
    /* 0073ccee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073ccf2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ccf4: jne 0x73ccfa */ if (!fZ) goto L_0073ccfa;
L_0073ccf6:; BB(0x0073ccf6);
    /* 0073ccf6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073ccf7: ret 4 */ FN_RET(0x0073cce4); r_esp += 8; return;
L_0073ccfa:; BB(0x0073ccfa);
    /* 0073ccfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ccfb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73cd00u); f_005c2f74();
    /* 0073cd00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073cd01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073cd02: ret 4 */ FN_RET(0x0073cce4); r_esp += 8; return;
}

void f_0073cd08(void) /* sub_73CD08 */
{
    FN_ENTER(0x0073cd08);
    /* 0073cd08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073cd09: mov ebp, esp */ r_ebp = r_esp;
    /* 0073cd0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073cd0d: push 0x8f1e70 */ { u32 v = 0x8f1e70u; r_esp -= 4; W32(r_esp, v); }
    /* 0073cd12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073cd18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073cd19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073cd20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073cd23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073cd26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073cd29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073cd2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073cd2f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073cd32: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073cd39: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073cd3c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0073cd3f: mov dword ptr [eax], 0xb41078 */ W32((u32)(r_eax), 0xb41078u);
    /* 0073cd45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073cd47: je 0x73cd58 */ if (fZ) goto L_0073cd58;
L_0073cd49:; BB(0x0073cd49);
    /* 0073cd49: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73cd4eu); f_007127b0();
    /* 0073cd4e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073cd51: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0073cd58:; BB(0x0073cd58);
    /* 0073cd58: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0073cd5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073cd5d: je 0x73cd6e */ if (fZ) goto L_0073cd6e;
L_0073cd5f:; BB(0x0073cd5f);
    /* 0073cd5f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73cd64u); f_007127b0();
    /* 0073cd64: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073cd67: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_0073cd6e:; BB(0x0073cd6e);
    /* 0073cd6e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073cd75: mov ecx, eax */ r_ecx = r_eax;
    /* 0073cd77: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x73cd7cu); f_008171e8();
    /* 0073cd7c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073cd7f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073cd86: mov esp, ebp */ r_esp = r_ebp;
    /* 0073cd88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073cd89: ret  */ FN_RET(0x0073cd08); r_esp += 4; return;
}

void f_0073cd8c(void) /* sub_73CD8C */
{
    FN_ENTER(0x0073cd8c);
    /* 0073cd8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073cd8d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073cd8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073cd91: push 0x8f1e98 */ { u32 v = 0x8f1e98u; r_esp -= 4; W32(r_esp, v); }
    /* 0073cd96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073cd9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073cd9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073cda4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073cda7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073cdaa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073cdad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073cdb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073cdb3: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0073cdb5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073cdbc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73cdc1u); f_005caba4();
    /* 0073cdc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073cdc2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073cdc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073cdc7: je 0x73cdfd */ if (fZ) goto L_0073cdfd;
L_0073cdc9:; BB(0x0073cdc9);
    /* 0073cdc9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073cdd0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073cdd7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cdda: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cddd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073cde0: call 0x73ce04 */ r_esp -= 4; W32(r_esp, 0x73cde5u); f_0073ce04();
    /* 0073cde5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073cde8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073cdef:; BB(0x0073cdef);
    /* 0073cdef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073cdf2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073cdf9: mov esp, ebp */ r_esp = r_ebp;
    /* 0073cdfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073cdfc: ret  */ FN_RET(0x0073cd8c); r_esp += 4; return;
L_0073cdfd:; BB(0x0073cdfd);
    /* 0073cdfd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073cdff: jmp 0x73cdef */ goto L_0073cdef;
}

void f_0073ce04(void) /* sub_73CE04 */
{
    FN_ENTER(0x0073ce04);
    /* 0073ce04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ce05: mov edi, ecx */ r_edi = r_ecx;
    /* 0073ce07: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ce0b: mov ecx, edi */ r_ecx = r_edi;
    /* 0073ce0d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x73ce12u); f_008193cc();
    /* 0073ce12: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0073ce16: mov dword ptr [edi], 0xb41078 */ W32((u32)(r_edi), 0xb41078u);
    /* 0073ce1c: mov edx, dword ptr [0x9f3290] */ r_edx = R32((u32)(0x9f3290u));
    /* 0073ce22: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0073ce25: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0073ce28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ce2a: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0073ce2d: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0073ce30: mov eax, edi */ r_eax = r_edi;
    /* 0073ce32: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073ce33: ret 8 */ FN_RET(0x0073ce04); r_esp += 12; return;
}

void f_0073ce38(void) /* sub_73CE38 */
{
    FN_ENTER(0x0073ce38);
    /* 0073ce38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ce39: mov edi, ecx */ r_edi = r_ecx;
    /* 0073ce3b: mov ecx, edi */ r_ecx = r_edi;
    /* 0073ce3d: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x73ce42u); f_0073ce50();
    /* 0073ce42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ce44: je 0x73ce4e */ if (fZ) goto L_0073ce4e;
L_0073ce46:; BB(0x0073ce46);
    /* 0073ce46: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 0073ce49: call 0x735178 */ r_esp -= 4; W32(r_esp, 0x73ce4eu); f_00735178();
L_0073ce4e:; BB(0x0073ce4e);
    /* 0073ce4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073ce4f: ret  */ FN_RET(0x0073ce38); r_esp += 4; return;
}

void f_0073ce50(void) /* sub_73CE50 */
{
    FN_ENTER(0x0073ce50);
    /* 0073ce50: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0073ce53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ce55: je 0x73ce6b */ if (fZ) goto L_0073ce6b;
L_0073ce57:; BB(0x0073ce57);
    /* 0073ce57: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0073ce5e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ce60: je 0x73ce68 */ if (fZ) goto L_0073ce68;
L_0073ce62:; BB(0x0073ce62);
    /* 0073ce62: mov eax, 1 */ r_eax = 0x1u;
    /* 0073ce67: ret  */ FN_RET(0x0073ce50); r_esp += 4; return;
L_0073ce68:; BB(0x0073ce68);
    /* 0073ce68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ce6a: ret  */ FN_RET(0x0073ce50); r_esp += 4; return;
L_0073ce6b:; BB(0x0073ce6b);
    /* 0073ce6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ce6d: ret  */ FN_RET(0x0073ce50); r_esp += 4; return;
}

void f_0073ce70(void) /* sub_73CE70 */
{
    FN_ENTER(0x0073ce70);
    /* 0073ce70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ce71: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073ce74: mov esi, ecx */ r_esi = r_ecx;
    /* 0073ce76: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ce79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ce7b: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ce7f: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x73ce84u); f_007354fc();
    /* 0073ce84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073ce87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ce89: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ce8b: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ce8f: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0073ce92: mov ecx, eax */ r_ecx = r_eax;
    /* 0073ce94: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73ce99u); f_00735c90();
    /* 0073ce99: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ce9d: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0073cea0: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073cea7: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073ceac: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0073ceb3: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0073ceb6: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073cebd: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073cec2: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0073cec9: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0073cecc: call 0x736390 */ r_esp -= 4; W32(r_esp, 0x73ced1u); f_00736390();
    /* 0073ced1: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ced6: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0073ced9: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x73cedeu); f_00712624();
    /* 0073cede: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073cee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073cee2: mov ecx, esi */ r_ecx = r_esi;
    /* 0073cee4: call 0x73cf10 */ r_esp -= 4; W32(r_esp, 0x73cee9u); f_0073cf10();
    /* 0073cee9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073ceec: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ceef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073cef0: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x73cef5u); f_00735884();
    /* 0073cef5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073cef8: push 0x3ee66666 */ { u32 v = 0x3ee66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0073cefd: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 0073cf00: mov ecx, eax */ r_ecx = r_eax;
    /* 0073cf02: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x73cf07u); f_00712624();
    /* 0073cf07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073cf0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073cf0b: ret 0xc */ FN_RET(0x0073ce70); r_esp += 16; return;
}

void f_0073cf10(void) /* sub_73CF10 */
{
    FN_ENTER(0x0073cf10);
    /* 0073cf10: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073cf14: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0073cf17: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073cf19: je 0x73cf40 */ if (fZ) goto L_0073cf40;
L_0073cf1b:; BB(0x0073cf1b);
    /* 0073cf1b: fld dword ptr [0x971d44] */ FPUSH(R_F32((u32)(0x971d44u)));
    /* 0073cf21: fadd dword ptr [edx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x30u));
    /* 0073cf24: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 0073cf27: fld dword ptr [0x971d40] */ FPUSH(R_F32((u32)(0x971d40u)));
    /* 0073cf2d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073cf2f: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0073cf31: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0073cf34: fadd dword ptr [edx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x34u));
    /* 0073cf37: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 0073cf3a: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0073cf3d: ret 4 */ FN_RET(0x0073cf10); r_esp += 8; return;
L_0073cf40:; BB(0x0073cf40);
    /* 0073cf40: ret 4 */ FN_RET(0x0073cf10); r_esp += 8; return;
}

void f_0073cf44(void) /* sub_73CF44 */
{
    FN_ENTER(0x0073cf44);
    /* 0073cf44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073cf45: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073cf48: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073cf4a: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cf4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073cf4f: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cf53: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x73cf58u); f_007354fc();
    /* 0073cf58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073cf5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073cf5d: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0073cf5f: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cf63: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 0073cf66: mov ecx, eax */ r_ecx = r_eax;
    /* 0073cf68: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73cf6du); f_00735c90();
    /* 0073cf6d: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cf71: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0073cf74: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073cf7b: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073cf80: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0073cf87: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0073cf8a: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073cf91: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073cf96: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0073cf9d: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0073cfa0: call 0x736390 */ r_esp -= 4; W32(r_esp, 0x73cfa5u); f_00736390();
    /* 0073cfa5: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cfa9: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0073cfac: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x73cfb1u); f_00712624();
    /* 0073cfb1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073cfb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073cfb5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073cfb7: call 0x73cf10 */ r_esp -= 4; W32(r_esp, 0x73cfbcu); f_0073cf10();
    /* 0073cfbc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073cfbf: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073cfc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073cfc3: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x73cfc8u); f_00735884();
    /* 0073cfc8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073cfcb: fld dword ptr [0x971d3c] */ FPUSH(R_F32((u32)(0x971d3cu)));
    /* 0073cfd1: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0073cfd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073cfd5: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0073cfd9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073cfdc: mov ecx, eax */ r_ecx = r_eax;
    /* 0073cfde: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x73cfe3u); f_00712624();
    /* 0073cfe3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073cfe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073cfe7: ret 0x10 */ FN_RET(0x0073cf44); r_esp += 20; return;
}

void f_0073cfec(void) /* sub_73CFEC */
{
    FN_ENTER(0x0073cfec);
    /* 0073cfec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073cfed: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073cff0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073cff2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0073cff6: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0073cffa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073cffc: je 0x73d098 */ if (fZ) goto L_0073d098;
L_0073d002:; BB(0x0073d002);
    /* 0073d002: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d005: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d006: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d009: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x73d00eu); f_0073566c();
    /* 0073d00e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073d011: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
L_0073d014:; BB(0x0073d014);
    /* 0073d014: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d016: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d018: mov ecx, eax */ r_ecx = r_eax;
    /* 0073d01a: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d01e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73d023u); f_00735c90();
    /* 0073d023: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d027: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0073d02a: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073d031: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073d036: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0073d03d: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0073d040: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073d047: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073d04c: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0073d053: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0073d056: call 0x736390 */ r_esp -= 4; W32(r_esp, 0x73d05bu); f_00736390();
    /* 0073d05b: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d060: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0073d063: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x73d068u); f_00712624();
    /* 0073d068: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073d06b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d06c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073d06e: call 0x73cf10 */ r_esp -= 4; W32(r_esp, 0x73d073u); f_0073cf10();
    /* 0073d073: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073d076: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d07a: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x73d07fu); f_00735884();
    /* 0073d07f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073d082: push 0x3ee66666 */ { u32 v = 0x3ee66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d087: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0073d08a: mov ecx, eax */ r_ecx = r_eax;
    /* 0073d08c: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x73d091u); f_00712624();
    /* 0073d091: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073d094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d095: ret 0x10 */ FN_RET(0x0073cfec); r_esp += 20; return;
L_0073d098:; BB(0x0073d098);
    /* 0073d098: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d09b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d09d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d09e: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x73d0a3u); f_007354fc();
    /* 0073d0a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073d0a6: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 0073d0a9: jmp 0x73d014 */ goto L_0073d014;
}

