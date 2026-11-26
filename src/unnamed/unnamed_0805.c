#include "protos.h"

void f_0080539c(void) /* sub_80539C */
{
    FN_ENTER(0x0080539c);
    /* 0080539c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080539d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080539e: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 008053a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008053a5: je 0x8053d4 */ if (fZ) goto L_008053d4;
L_008053a7:; BB(0x008053a7);
    /* 008053a7: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008053aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008053ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008053ae: jle 0x8053d4 */ if ((fZ||fS!=fO)) goto L_008053d4;
L_008053b0:; BB(0x008053b0);
    /* 008053b0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
L_008053b2:; BB(0x008053b2);
    /* 008053b2: lea ebx, [ecx + ecx*4] */ r_ebx = (u32)(r_ecx+r_ecx*4);
    /* 008053b5: movsx esi, word ptr [eax + ebx*8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+r_ebx*8));
    /* 008053b9: cmp si, word ptr [esp + 0xc] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008053be: jne 0x8053cd */ if (!fZ) goto L_008053cd;
L_008053c0:; BB(0x008053c0);
    /* 008053c0: movsx esi, word ptr [eax + ebx*8 + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+r_ebx*8+0x2u));
    /* 008053c5: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008053cb: jne 0x8053d9 */ if (!fZ) goto L_008053d9;
L_008053cd:; BB(0x008053cd);
    /* 008053cd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008053d0: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008053d2: jl 0x8053b2 */ if ((fS!=fO)) goto L_008053b2;
L_008053d4:; BB(0x008053d4);
    /* 008053d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008053d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008053d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008053d8: ret  */ FN_RET(0x0080539c); r_esp += 4; return;
L_008053d9:; BB(0x008053d9);
    /* 008053d9: mov edx, ebx */ r_edx = r_ebx;
    /* 008053db: mov ecx, esi */ r_ecx = r_esi;
    /* 008053dd: and ecx, 0xfffe */ {  u32 a = r_ecx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008053e3: mov word ptr [eax + edx*8 + 2], cx */ W16((u32)(r_eax+r_edx*8+0x2u), (u16)r_ecx);
    /* 008053e8: mov ecx, dword ptr [0xaafbdc] */ r_ecx = R32((u32)(0xaafbdcu));
    /* 008053ee: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008053f0: mov dword ptr [eax + edx*8 + 0x1c], 0 */ W32((u32)(r_eax+r_edx*8+0x1cu), 0x0u);
    /* 008053f8: mov eax, 1 */ r_eax = 0x1u;
    /* 008053fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008053fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008053ff: ret  */ FN_RET(0x0080539c); r_esp += 4; return;
}

void f_00805400(void) /* sub_805400 */
{
    FN_ENTER(0x00805400);
    /* 00805400: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805401: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805402: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805403: movsx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00805408: mov ebx, dword ptr [0xaafbdc] */ r_ebx = R32((u32)(0xaafbdcu));
    /* 0080540e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805410: je 0x8054b2 */ if (fZ) goto L_008054b2;
L_00805416:; BB(0x00805416);
    /* 00805416: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00805419: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080541b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080541d: jle 0x8054b2 */ if ((fZ||fS!=fO)) goto L_008054b2;
L_00805423:; BB(0x00805423);
    /* 00805423: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00805426: jl 0x8054da */ if ((fS!=fO)) goto L_008054da;
L_0080542c:; BB(0x0080542c);
    /* 0080542c: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 0080542e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_00805431:; BB(0x00805431);
    /* 00805431: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 00805434: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805436: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805438: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080543a: cmp cx, word ptr [esi + ebx] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0080543e: je 0x8054d3 */ if (fZ) goto L_008054d3;
L_00805444:; BB(0x00805444);
    /* 00805444: lea edi, [edx + 1] */ r_edi = (u32)(r_edx+0x1u);
    /* 00805447: lea esi, [edx + edx*4 + 5] */ r_esi = (u32)(r_edx+r_edx*4+0x5u);
    /* 0080544b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080544d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080544f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805451: cmp cx, word ptr [esi + ebx] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00805455: je 0x8054f3 */ if (fZ) goto L_008054f3;
L_0080545b:; BB(0x0080545b);
    /* 0080545b: lea esi, [edi + edi*4 + 5] */ r_esi = (u32)(r_edi+r_edi*4+0x5u);
    /* 0080545f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805461: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805463: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805465: cmp cx, word ptr [esi + ebx] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00805469: je 0x8054ec */ if (fZ) goto L_008054ec;
L_0080546f:; BB(0x0080546f);
    /* 0080546f: lea esi, [edi + edi*4 + 0xa] */ r_esi = (u32)(r_edi+r_edi*4+0xau);
    /* 00805473: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805475: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805477: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805479: cmp cx, word ptr [esi + ebx] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0080547d: je 0x8054e5 */ if (fZ) goto L_008054e5;
L_0080547f:; BB(0x0080547f);
    /* 0080547f: lea esi, [edi + edi*4 + 0xf] */ r_esi = (u32)(r_edi+r_edi*4+0xfu);
    /* 00805483: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805485: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805487: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00805489: cmp cx, word ptr [esi + ebx] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0080548d: je 0x8054de */ if (fZ) goto L_008054de;
L_0080548f:; BB(0x0080548f);
    /* 0080548f: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 00805492: lea esi, [eax - 6] */ r_esi = (u32)(r_eax+0xfffffffau);
    /* 00805495: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00805497: jle 0x805431 */ if ((fZ||fS!=fO)) goto L_00805431;
L_00805499:; BB(0x00805499);
    /* 00805499: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0080549c:; BB(0x0080549c);
    /* 0080549c: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 0080549f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008054a1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008054a3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008054a5: cmp cx, word ptr [esi + ebx] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008054a9: je 0x8054b8 */ if (fZ) goto L_008054b8;
L_008054ab:; BB(0x008054ab);
    /* 008054ab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008054ae: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008054b0: jl 0x80549c */ if ((fS!=fO)) goto L_0080549c;
L_008054b2:; BB(0x008054b2);
    /* 008054b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008054b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008054b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008054b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008054b7: ret  */ FN_RET(0x00805400); r_esp += 4; return;
L_008054b8:; BB(0x008054b8);
    /* 008054b8: mov eax, esi */ r_eax = r_esi;
L_008054ba:; BB(0x008054ba);
    /* 008054ba: movzx edx, word ptr [eax + ebx + 2] */ r_edx = (u32)R16((u32)(r_eax+r_ebx+0x2u));
    /* 008054bf: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008054c5: mov word ptr [eax + ebx + 2], dx */ W16((u32)(r_eax+r_ebx+0x2u), (u16)r_edx);
    /* 008054ca: mov eax, 1 */ r_eax = 0x1u;
    /* 008054cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008054d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008054d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008054d2: ret  */ FN_RET(0x00805400); r_esp += 4; return;
L_008054d3:; BB(0x008054d3);
    /* 008054d3: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 008054d6: mov eax, esi */ r_eax = r_esi;
    /* 008054d8: jmp 0x8054ba */ goto L_008054ba;
L_008054da:; BB(0x008054da);
    /* 008054da: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 008054dc: jmp 0x80549c */ goto L_0080549c;
L_008054de:; BB(0x008054de);
    /* 008054de: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 008054e1: mov eax, esi */ r_eax = r_esi;
    /* 008054e3: jmp 0x8054ba */ goto L_008054ba;
L_008054e5:; BB(0x008054e5);
    /* 008054e5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 008054e8: mov eax, esi */ r_eax = r_esi;
    /* 008054ea: jmp 0x8054ba */ goto L_008054ba;
L_008054ec:; BB(0x008054ec);
    /* 008054ec: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 008054ef: mov eax, esi */ r_eax = r_esi;
    /* 008054f1: jmp 0x8054ba */ goto L_008054ba;
L_008054f3:; BB(0x008054f3);
    /* 008054f3: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 008054f6: mov eax, esi */ r_eax = r_esi;
    /* 008054f8: jmp 0x8054ba */ goto L_008054ba;
}

void f_008054fc(void) /* sub_8054FC */
{
    FN_ENTER(0x008054fc);
    /* 008054fc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008054ff: mov ecx, dword ptr [0xaafbe0] */ r_ecx = R32((u32)(0xaafbe0u));
    /* 00805505: mov dword ptr [0xaafbe4], 1 */ W32((u32)(0xaafbe4u), 0x1u);
    /* 0080550f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00805512: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805513: call 0x805530 */ r_esp -= 4; W32(r_esp, 0x805518u); f_00805530();
    /* 00805518: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0080551b: mov dword ptr [0xaafb40], eax */ W32((u32)(0xaafb40u), r_eax);
    /* 00805520: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00805524: mov dword ptr [0xaafb48], edx */ W32((u32)(0xaafb48u), r_edx);
    /* 0080552a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080552d: ret  */ FN_RET(0x008054fc); r_esp += 4; return;
}

void f_00805530(void) /* sub_805530 */
{
    FN_ENTER(0x00805530);
    /* 00805530: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805531: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00805535: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0080553b: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 00805542: mov edx, dword ptr [ecx + 0x134] */ r_edx = R32((u32)(r_ecx+0x134u));
    /* 00805548: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080554a: jl 0x805562 */ if ((fS!=fO)) goto L_00805562;
L_0080554c:; BB(0x0080554c);
    /* 0080554c: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 0080554f: mov edx, dword ptr [ecx + ebx*8 + 0x94] */ r_edx = R32((u32)(r_ecx+r_ebx*8+0x94u));
    /* 00805556: mov ecx, dword ptr [ecx + ebx*8 + 0x9c] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x9cu));
    /* 0080555d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0080555f: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_00805562:; BB(0x00805562);
    /* 00805562: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805563: ret 4 */ FN_RET(0x00805530); r_esp += 8; return;
}

void f_00805568(void) /* sub_805568 */
{
    FN_ENTER(0x00805568);
    /* 00805568: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805569: mov eax, dword ptr [0xaafbe4] */ r_eax = R32((u32)(0xaafbe4u));
    /* 0080556e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805571: je 0x805578 */ if (fZ) goto L_00805578;
L_00805573:; BB(0x00805573);
    /* 00805573: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00805576: jne 0x805596 */ if (!fZ) goto L_00805596;
L_00805578:; BB(0x00805578);
    /* 00805578: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0080557c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00805580: mov dword ptr [0xaafb40], edx */ W32((u32)(0xaafb40u), r_edx);
    /* 00805586: mov dword ptr [0xaafb48], ecx */ W32((u32)(0xaafb48u), r_ecx);
    /* 0080558c: mov eax, 0xaafb40 */ r_eax = 0xaafb40u;
    /* 00805591: call 0x8058b4 */ r_esp -= 4; W32(r_esp, 0x805596u); f_008058b4();
L_00805596:; BB(0x00805596);
    /* 00805596: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805597: ret  */ FN_RET(0x00805568); r_esp += 4; return;
}

void f_00805598(void) /* sub_805598 */
{
    FN_ENTER(0x00805598);
    /* 00805598: mov eax, dword ptr [0xaafbe4] */ r_eax = R32((u32)(0xaafbe4u));
    /* 0080559d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008055a0: je 0x8055a7 */ if (fZ) goto L_008055a7;
L_008055a2:; BB(0x008055a2);
    /* 008055a2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008055a5: jne 0x8055bf */ if (!fZ) goto L_008055bf;
L_008055a7:; BB(0x008055a7);
    /* 008055a7: mov eax, dword ptr [0xaafb40] */ r_eax = R32((u32)(0xaafb40u));
    /* 008055ac: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008055b0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008055b2: mov ecx, dword ptr [0xaafb48] */ r_ecx = R32((u32)(0xaafb48u));
    /* 008055b8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008055bc: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_008055bf:; BB(0x008055bf);
    /* 008055bf: ret  */ FN_RET(0x00805598); r_esp += 4; return;
}

void f_008055c0(void) /* sub_8055C0 */
{
    FN_ENTER(0x008055c0);
    /* 008055c0: mov edx, dword ptr [0xaafbe0] */ r_edx = R32((u32)(0xaafbe0u));
    /* 008055c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008055c8: je 0x8055e1 */ if (fZ) goto L_008055e1;
L_008055ca:; BB(0x008055ca);
    /* 008055ca: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 008055ce: mov dword ptr [edx + 0x184], 0 */ W32((u32)(r_edx+0x184u), 0x0u);
    /* 008055d8: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008055dd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_008055e1:; BB(0x008055e1);
    /* 008055e1: ret  */ FN_RET(0x008055c0); r_esp += 4; return;
}

void f_008055e4(void) /* sub_8055E4 */
{
    FN_ENTER(0x008055e4);
    /* 008055e4: mov edx, dword ptr [0xaafbe0] */ r_edx = R32((u32)(0xaafbe0u));
    /* 008055ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008055ec: je 0x805605 */ if (fZ) goto L_00805605;
L_008055ee:; BB(0x008055ee);
    /* 008055ee: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 008055f2: mov dword ptr [edx + 0x184], 0 */ W32((u32)(r_edx+0x184u), 0x0u);
    /* 008055fc: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805601: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00805605:; BB(0x00805605);
    /* 00805605: ret  */ FN_RET(0x008055e4); r_esp += 4; return;
}

void f_00805608(void) /* sub_805608 */
{
    FN_ENTER(0x00805608);
    /* 00805608: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00805609: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080560c: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00805610: mov eax, dword ptr [0xaafbd4] */ r_eax = R32((u32)(0xaafbd4u));
    /* 00805615: cmp eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00805618: jg 0x80564e */ if ((!fZ&&fS==fO)) goto L_0080564e;
L_0080561a:; BB(0x0080561a);
    /* 0080561a: movzx edx, word ptr [esp + 0x20] */ r_edx = (u32)R16((u32)(r_esp+0x20u));
    /* 0080561f: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00805622: jne 0x80565a */ if (!fZ) goto L_0080565a;
L_00805624:; BB(0x00805624);
    /* 00805624: mov eax, dword ptr [0xaafb00] */ r_eax = R32((u32)(0xaafb00u));
    /* 00805629: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0080562c: mov edx, dword ptr [0xaafb08] */ r_edx = R32((u32)(0xaafb08u));
    /* 00805632: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00805636: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00805639: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080563a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080563b: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x805640u); f_0078ea50();
    /* 00805640: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00805643: fcomp dword ptr [0x97ecf8] */ fx_compare(ST(0), R_F32((u32)(0x97ecf8u))); FPOP();
    /* 00805649: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080564b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080564c: jbe 0x805655 */ if ((fC||fZ)) goto L_00805655;
L_0080564e:; BB(0x0080564e);
    /* 0080564e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805650: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00805653: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00805654: ret  */ FN_RET(0x00805608); r_esp += 4; return;
L_00805655:; BB(0x00805655);
    /* 00805655: mov eax, dword ptr [0xaafbd4] */ r_eax = R32((u32)(0xaafbd4u));
L_0080565a:; BB(0x0080565a);
    /* 0080565a: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0080565c: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080565f: mov dword ptr [edx*4 + 0xaaf060], ecx */ W32((u32)(r_edx*4+0xaaf060u), r_ecx);
    /* 00805666: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 00805669: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0080566d: mov dword ptr [edx*4 + 0xaaf064], edi */ W32((u32)(r_edx*4+0xaaf064u), r_edi);
    /* 00805674: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00805677: mov dword ptr [edx*4 + 0xaaf068], 0x3f800000 */ W32((u32)(r_edx*4+0xaaf068u), 0x3f800000u);
    /* 00805682: mov dword ptr [0xaafbd4], eax */ W32((u32)(0xaafbd4u), r_eax);
    /* 00805687: mov eax, 1 */ r_eax = 0x1u;
    /* 0080568c: mov dword ptr [edx*4 + 0xaaf070], ecx */ W32((u32)(r_edx*4+0xaaf070u), r_ecx);
    /* 00805693: movzx ecx, word ptr [esp + 0x1c] */ r_ecx = (u32)R16((u32)(r_esp+0x1cu));
    /* 00805698: mov word ptr [edx*4 + 0xaaf06e], cx */ W16((u32)(r_edx*4+0xaaf06eu), (u16)r_ecx);
    /* 008056a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008056a2: mov word ptr [edx*4 + 0xaaf06c], cx */ W16((u32)(r_edx*4+0xaaf06cu), (u16)r_ecx);
    /* 008056aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008056ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008056ae: ret  */ FN_RET(0x00805608); r_esp += 4; return;
}

void f_008056b0(void) /* sub_8056B0 */
{
    FN_ENTER(0x008056b0);
    /* 008056b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008056b1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008056b4: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 008056b8: mov eax, dword ptr [0xaafbd4] */ r_eax = R32((u32)(0xaafbd4u));
    /* 008056bd: cmp eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008056c0: jg 0x8056f6 */ if ((!fZ&&fS==fO)) goto L_008056f6;
L_008056c2:; BB(0x008056c2);
    /* 008056c2: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 008056c7: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008056ca: jne 0x805702 */ if (!fZ) goto L_00805702;
L_008056cc:; BB(0x008056cc);
    /* 008056cc: mov eax, dword ptr [0xaafb00] */ r_eax = R32((u32)(0xaafb00u));
    /* 008056d1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008056d4: mov edx, dword ptr [0xaafb08] */ r_edx = R32((u32)(0xaafb08u));
    /* 008056da: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008056de: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008056e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008056e2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008056e3: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x8056e8u); f_0078ea50();
    /* 008056e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008056eb: fcomp dword ptr [0x97ecf8] */ fx_compare(ST(0), R_F32((u32)(0x97ecf8u))); FPOP();
    /* 008056f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008056f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008056f4: jbe 0x8056fd */ if ((fC||fZ)) goto L_008056fd;
L_008056f6:; BB(0x008056f6);
    /* 008056f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008056f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008056fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008056fc: ret  */ FN_RET(0x008056b0); r_esp += 4; return;
L_008056fd:; BB(0x008056fd);
    /* 008056fd: mov eax, dword ptr [0xaafbd4] */ r_eax = R32((u32)(0xaafbd4u));
L_00805702:; BB(0x00805702);
    /* 00805702: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00805704: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00805707: mov dword ptr [edx*4 + 0xaaf060], ecx */ W32((u32)(r_edx*4+0xaaf060u), r_ecx);
    /* 0080570e: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 00805711: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00805715: mov dword ptr [edx*4 + 0xaaf064], edi */ W32((u32)(r_edx*4+0xaaf064u), r_edi);
    /* 0080571c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080571f: mov dword ptr [edx*4 + 0xaaf068], 0x3f800000 */ W32((u32)(r_edx*4+0xaaf068u), 0x3f800000u);
    /* 0080572a: mov dword ptr [0xaafbd4], eax */ W32((u32)(0xaafbd4u), r_eax);
    /* 0080572f: mov eax, 1 */ r_eax = 0x1u;
    /* 00805734: mov dword ptr [edx*4 + 0xaaf070], ecx */ W32((u32)(r_edx*4+0xaaf070u), r_ecx);
    /* 0080573b: movzx ecx, word ptr [esp + 0x20] */ r_ecx = (u32)R16((u32)(r_esp+0x20u));
    /* 00805740: mov word ptr [edx*4 + 0xaaf06e], cx */ W16((u32)(r_edx*4+0xaaf06eu), (u16)r_ecx);
    /* 00805748: movzx ecx, word ptr [esp + 0x1c] */ r_ecx = (u32)R16((u32)(r_esp+0x1cu));
    /* 0080574d: mov word ptr [edx*4 + 0xaaf06c], cx */ W16((u32)(r_edx*4+0xaaf06cu), (u16)r_ecx);
    /* 00805755: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00805758: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00805759: ret  */ FN_RET(0x008056b0); r_esp += 4; return;
}

void f_0080575c(void) /* sub_80575C */
{
    FN_ENTER(0x0080575c);
    /* 0080575c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080575d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00805760: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00805764: mov eax, dword ptr [0xaafbd4] */ r_eax = R32((u32)(0xaafbd4u));
    /* 00805769: cmp eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080576c: jg 0x8057a2 */ if ((!fZ&&fS==fO)) goto L_008057a2;
L_0080576e:; BB(0x0080576e);
    /* 0080576e: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00805773: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00805776: jne 0x8057ae */ if (!fZ) goto L_008057ae;
L_00805778:; BB(0x00805778);
    /* 00805778: mov eax, dword ptr [0xaafb00] */ r_eax = R32((u32)(0xaafb00u));
    /* 0080577d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00805780: mov edx, dword ptr [0xaafb08] */ r_edx = R32((u32)(0xaafb08u));
    /* 00805786: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0080578a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0080578d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080578e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080578f: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x805794u); f_0078ea50();
    /* 00805794: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00805797: fcomp dword ptr [0x97ecf8] */ fx_compare(ST(0), R_F32((u32)(0x97ecf8u))); FPOP();
    /* 0080579d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080579f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008057a0: jbe 0x8057a9 */ if ((fC||fZ)) goto L_008057a9;
L_008057a2:; BB(0x008057a2);
    /* 008057a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008057a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008057a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008057a8: ret  */ FN_RET(0x0080575c); r_esp += 4; return;
L_008057a9:; BB(0x008057a9);
    /* 008057a9: mov eax, dword ptr [0xaafbd4] */ r_eax = R32((u32)(0xaafbd4u));
L_008057ae:; BB(0x008057ae);
    /* 008057ae: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008057b0: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 008057b3: mov dword ptr [edx*4 + 0xaaf060], ecx */ W32((u32)(r_edx*4+0xaaf060u), r_ecx);
    /* 008057ba: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 008057bd: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008057c1: mov dword ptr [edx*4 + 0xaaf064], edi */ W32((u32)(r_edx*4+0xaaf064u), r_edi);
    /* 008057c8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008057cb: mov dword ptr [edx*4 + 0xaaf068], ecx */ W32((u32)(r_edx*4+0xaaf068u), r_ecx);
    /* 008057d2: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008057d6: mov dword ptr [0xaafbd4], eax */ W32((u32)(0xaafbd4u), r_eax);
    /* 008057db: mov dword ptr [edx*4 + 0xaaf070], ecx */ W32((u32)(r_edx*4+0xaaf070u), r_ecx);
    /* 008057e2: movzx ecx, word ptr [esp + 0x20] */ r_ecx = (u32)R16((u32)(r_esp+0x20u));
    /* 008057e7: mov word ptr [edx*4 + 0xaaf06e], cx */ W16((u32)(r_edx*4+0xaaf06eu), (u16)r_ecx);
    /* 008057ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008057f1: mov eax, 1 */ r_eax = 0x1u;
    /* 008057f6: mov word ptr [edx*4 + 0xaaf06c], cx */ W16((u32)(r_edx*4+0xaaf06cu), (u16)r_ecx);
    /* 008057fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00805801: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00805802: ret  */ FN_RET(0x0080575c); r_esp += 4; return;
}

void f_00805804(void) /* sub_805804 */
{
    FN_ENTER(0x00805804);
    /* 00805804: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00805805: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00805808: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0080580c: mov eax, dword ptr [0xaafbd4] */ r_eax = R32((u32)(0xaafbd4u));
    /* 00805811: cmp eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00805814: jg 0x80584a */ if ((!fZ&&fS==fO)) goto L_0080584a;
L_00805816:; BB(0x00805816);
    /* 00805816: movzx edx, word ptr [esp + 0x28] */ r_edx = (u32)R16((u32)(r_esp+0x28u));
    /* 0080581b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080581e: jne 0x805856 */ if (!fZ) goto L_00805856;
L_00805820:; BB(0x00805820);
    /* 00805820: mov eax, dword ptr [0xaafb00] */ r_eax = R32((u32)(0xaafb00u));
    /* 00805825: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00805828: mov edx, dword ptr [0xaafb08] */ r_edx = R32((u32)(0xaafb08u));
    /* 0080582e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00805832: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00805835: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00805836: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00805837: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x80583cu); f_0078ea50();
    /* 0080583c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080583f: fcomp dword ptr [0x97ecf8] */ fx_compare(ST(0), R_F32((u32)(0x97ecf8u))); FPOP();
    /* 00805845: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00805847: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00805848: jbe 0x805851 */ if ((fC||fZ)) goto L_00805851;
L_0080584a:; BB(0x0080584a);
    /* 0080584a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080584c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080584f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00805850: ret  */ FN_RET(0x00805804); r_esp += 4; return;
L_00805851:; BB(0x00805851);
    /* 00805851: mov eax, dword ptr [0xaafbd4] */ r_eax = R32((u32)(0xaafbd4u));
L_00805856:; BB(0x00805856);
    /* 00805856: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00805858: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080585b: mov dword ptr [edx*4 + 0xaaf060], ecx */ W32((u32)(r_edx*4+0xaaf060u), r_ecx);
    /* 00805862: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 00805865: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00805869: mov dword ptr [edx*4 + 0xaaf064], edi */ W32((u32)(r_edx*4+0xaaf064u), r_edi);
    /* 00805870: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00805873: mov dword ptr [edx*4 + 0xaaf068], ecx */ W32((u32)(r_edx*4+0xaaf068u), r_ecx);
    /* 0080587a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0080587e: mov dword ptr [0xaafbd4], eax */ W32((u32)(0xaafbd4u), r_eax);
    /* 00805883: mov dword ptr [edx*4 + 0xaaf070], ecx */ W32((u32)(r_edx*4+0xaaf070u), r_ecx);
    /* 0080588a: movzx ecx, word ptr [esp + 0x24] */ r_ecx = (u32)R16((u32)(r_esp+0x24u));
    /* 0080588f: mov word ptr [edx*4 + 0xaaf06e], cx */ W16((u32)(r_edx*4+0xaaf06eu), (u16)r_ecx);
    /* 00805897: movzx ecx, word ptr [esp + 0x1c] */ r_ecx = (u32)R16((u32)(r_esp+0x1cu));
    /* 0080589c: mov eax, 1 */ r_eax = 0x1u;
    /* 008058a1: mov word ptr [edx*4 + 0xaaf06c], cx */ W16((u32)(r_edx*4+0xaaf06cu), (u16)r_ecx);
    /* 008058a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008058ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008058ad: ret  */ FN_RET(0x00805804); r_esp += 4; return;
}

void f_008058b4(void) /* sub_8058B4 */
{
    FN_ENTER(0x008058b4);
    /* 008058b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008058b5: mov ebp, eax */ r_ebp = r_eax;
    /* 008058b7: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x8058bcu); f_00807ac0();
    /* 008058bc: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008058bf: jl 0x8058d2 */ if ((fS!=fO)) goto L_008058d2;
L_008058c1:; BB(0x008058c1);
    /* 008058c1: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008058c4: jle 0x8058d0 */ if ((fZ||fS!=fO)) goto L_008058d0;
L_008058c6:; BB(0x008058c6);
    /* 008058c6: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008058c9: je 0x8058d0 */ if (fZ) goto L_008058d0;
L_008058cb:; BB(0x008058cb);
    /* 008058cb: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008058ce: jne 0x8058d2 */ if (!fZ) goto L_008058d2;
L_008058d0:; BB(0x008058d0);
    /* 008058d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008058d1: ret  */ FN_RET(0x008058b4); r_esp += 4; return;
L_008058d2:; BB(0x008058d2);
    /* 008058d2: call 0x805978 */ r_esp -= 4; W32(r_esp, 0x8058d7u); f_00805978();
    /* 008058d7: mov edx, eax */ r_edx = r_eax;
    /* 008058d9: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 008058dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008058de: fcomp dword ptr [edx*8 + 0xa11424] */ fx_compare(ST(0), R_F32((u32)(r_edx*8+0xa11424u))); FPOP();
    /* 008058e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008058e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008058e8: jae 0x8058fb */ if (!fC) goto L_008058fb;
L_008058ea:; BB(0x008058ea);
    /* 008058ea: call 0x805978 */ r_esp -= 4; W32(r_esp, 0x8058efu); f_00805978();
    /* 008058ef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008058f1: mov edx, dword ptr [eax*8 + 0xa11424] */ r_edx = R32((u32)(r_eax*8+0xa11424u));
    /* 008058f8: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
L_008058fb:; BB(0x008058fb);
    /* 008058fb: call 0x805978 */ r_esp -= 4; W32(r_esp, 0x805900u); f_00805978();
    /* 00805900: mov edx, eax */ r_edx = r_eax;
    /* 00805902: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00805905: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00805907: fcomp dword ptr [edx*8 + 0xa11428] */ fx_compare(ST(0), R_F32((u32)(r_edx*8+0xa11428u))); FPOP();
    /* 0080590e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00805910: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00805911: jbe 0x805924 */ if ((fC||fZ)) goto L_00805924;
L_00805913:; BB(0x00805913);
    /* 00805913: call 0x805978 */ r_esp -= 4; W32(r_esp, 0x805918u); f_00805978();
    /* 00805918: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080591a: mov edx, dword ptr [eax*8 + 0xa11428] */ r_edx = R32((u32)(r_eax*8+0xa11428u));
    /* 00805921: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
L_00805924:; BB(0x00805924);
    /* 00805924: call 0x805978 */ r_esp -= 4; W32(r_esp, 0x805929u); f_00805978();
    /* 00805929: mov edx, eax */ r_edx = r_eax;
    /* 0080592b: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0080592e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00805930: fcomp dword ptr [edx*8 + 0xa1142c] */ fx_compare(ST(0), R_F32((u32)(r_edx*8+0xa1142cu))); FPOP();
    /* 00805937: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00805939: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080593a: jae 0x80594d */ if (!fC) goto L_0080594d;
L_0080593c:; BB(0x0080593c);
    /* 0080593c: call 0x805978 */ r_esp -= 4; W32(r_esp, 0x805941u); f_00805978();
    /* 00805941: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00805943: mov edx, dword ptr [eax*8 + 0xa1142c] */ r_edx = R32((u32)(r_eax*8+0xa1142cu));
    /* 0080594a: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_0080594d:; BB(0x0080594d);
    /* 0080594d: call 0x805978 */ r_esp -= 4; W32(r_esp, 0x805952u); f_00805978();
    /* 00805952: mov edx, eax */ r_edx = r_eax;
    /* 00805954: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00805957: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00805959: fcomp dword ptr [edx*8 + 0xa11430] */ fx_compare(ST(0), R_F32((u32)(r_edx*8+0xa11430u))); FPOP();
    /* 00805960: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00805962: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00805963: jbe 0x805976 */ if ((fC||fZ)) goto L_00805976;
L_00805965:; BB(0x00805965);
    /* 00805965: call 0x805978 */ r_esp -= 4; W32(r_esp, 0x80596au); f_00805978();
    /* 0080596a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080596c: mov edx, dword ptr [eax*8 + 0xa11430] */ r_edx = R32((u32)(r_eax*8+0xa11430u));
    /* 00805973: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_00805976:; BB(0x00805976);
    /* 00805976: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00805977: ret  */ FN_RET(0x008058b4); r_esp += 4; return;
}

void f_00805978(void) /* sub_805978 */
{
    FN_ENTER(0x00805978);
    /* 00805978: call 0x807e3c */ r_esp -= 4; W32(r_esp, 0x80597du); f_00807e3c();
    /* 0080597d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080597f: jne 0x805984 */ if (!fZ) goto L_00805984;
L_00805981:; BB(0x00805981);
    /* 00805981: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805983: ret  */ FN_RET(0x00805978); r_esp += 4; return;
L_00805984:; BB(0x00805984);
    /* 00805984: mov eax, 1 */ r_eax = 0x1u;
    /* 00805989: ret  */ FN_RET(0x00805978); r_esp += 4; return;
}

void f_0080598c(void) /* sub_80598C */
{
    FN_ENTER(0x0080598c);
    /* 0080598c: mov ecx, dword ptr [0xaafbcc] */ r_ecx = R32((u32)(0xaafbccu));
    /* 00805992: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805994: je 0x80599d */ if (fZ) goto L_0080599d;
L_00805996:; BB(0x00805996);
    /* 00805996: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00805998: call 0x508320 */ r_esp -= 4; W32(r_esp, 0x80599du); f_00508320();
L_0080599d:; BB(0x0080599d);
    /* 0080599d: mov dword ptr [0xaafbcc], 0 */ W32((u32)(0xaafbccu), 0x0u);
    /* 008059a7: ret  */ FN_RET(0x0080598c); r_esp += 4; return;
}

void f_008059a8(void) /* sub_8059A8 */
{
    FN_ENTER(0x008059a8);
    /* 008059a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008059a9: mov eax, 0x44 */ r_eax = 0x44u;
    /* 008059ae: mov ebx, eax */ r_ebx = r_eax;
L_008059b0:; BB(0x008059b0);
    /* 008059b0: mov edx, dword ptr [ebx + 0xaaf000] */ r_edx = R32((u32)(r_ebx+0xaaf000u));
    /* 008059b6: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008059b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008059bb: je 0x8059d3 */ if (fZ) goto L_008059d3;
L_008059bd:; BB(0x008059bd);
    /* 008059bd: mov ecx, dword ptr [0xaafbcc] */ r_ecx = R32((u32)(0xaafbccu));
    /* 008059c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008059c4: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x8059c9u); f_007a8b04();
    /* 008059c9: mov dword ptr [ebx + 0xaaf004], 0 */ W32((u32)(r_ebx+0xaaf004u), 0x0u);
L_008059d3:; BB(0x008059d3);
    /* 008059d3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008059d5: jge 0x8059b0 */ if ((fS==fO)) goto L_008059b0;
L_008059d7:; BB(0x008059d7);
    /* 008059d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008059d8: ret  */ FN_RET(0x008059a8); r_esp += 4; return;
}

void f_00805a24(void) /* sub_805A24 */
{
    FN_ENTER(0x00805a24);
    /* 00805a24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00805a25: mov ebp, esp */ r_ebp = r_esp;
    /* 00805a27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00805a29: push 0x8f713c */ { u32 v = 0x8f713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00805a2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00805a34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805a35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00805a3c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00805a3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00805a42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00805a45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00805a48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00805a4b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00805a4d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00805a54: call 0x7a8b68 */ r_esp -= 4; W32(r_esp, 0x805a59u); f_007a8b68();
    /* 00805a59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805a5a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00805a5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805a5f: je 0x805afb */ if (fZ) goto L_00805afb;
L_00805a65:; BB(0x00805a65);
    /* 00805a65: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00805a6c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00805a73: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00805a76: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00805a78: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 00805a7d: call 0x7a89dc */ r_esp -= 4; W32(r_esp, 0x805a82u); f_007a89dc();
    /* 00805a82: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00805a85: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00805a8c:; BB(0x00805a8c);
    /* 00805a8c: mov dword ptr [0xaafbcc], eax */ W32((u32)(0xaafbccu), r_eax);
    /* 00805a91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805a93: mov dword ptr [0xaaf000], eax */ W32((u32)(0xaaf000u), r_eax);
    /* 00805a98: mov dword ptr [0xaaf004], eax */ W32((u32)(0xaaf004u), r_eax);
    /* 00805a9d: mov dword ptr [0xaaf008], eax */ W32((u32)(0xaaf008u), r_eax);
    /* 00805aa2: mov dword ptr [0xaaf00c], eax */ W32((u32)(0xaaf00cu), r_eax);
    /* 00805aa7: mov dword ptr [0xaaf010], eax */ W32((u32)(0xaaf010u), r_eax);
    /* 00805aac: mov dword ptr [0xaaf014], eax */ W32((u32)(0xaaf014u), r_eax);
    /* 00805ab1: mov dword ptr [0xaaf018], eax */ W32((u32)(0xaaf018u), r_eax);
    /* 00805ab6: mov dword ptr [0xaaf01c], eax */ W32((u32)(0xaaf01cu), r_eax);
    /* 00805abb: mov dword ptr [0xaaf020], eax */ W32((u32)(0xaaf020u), r_eax);
    /* 00805ac0: mov dword ptr [0xaaf024], eax */ W32((u32)(0xaaf024u), r_eax);
    /* 00805ac5: mov dword ptr [0xaaf028], eax */ W32((u32)(0xaaf028u), r_eax);
    /* 00805aca: mov dword ptr [0xaaf02c], eax */ W32((u32)(0xaaf02cu), r_eax);
    /* 00805acf: mov dword ptr [0xaaf030], eax */ W32((u32)(0xaaf030u), r_eax);
    /* 00805ad4: mov dword ptr [0xaaf034], eax */ W32((u32)(0xaaf034u), r_eax);
    /* 00805ad9: mov dword ptr [0xaaf038], eax */ W32((u32)(0xaaf038u), r_eax);
    /* 00805ade: mov dword ptr [0xaaf03c], eax */ W32((u32)(0xaaf03cu), r_eax);
    /* 00805ae3: mov dword ptr [0xaaf040], eax */ W32((u32)(0xaaf040u), r_eax);
    /* 00805ae8: mov dword ptr [0xaaf044], eax */ W32((u32)(0xaaf044u), r_eax);
    /* 00805aed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00805af0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00805af7: mov esp, ebp */ r_esp = r_ebp;
    /* 00805af9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00805afa: ret  */ FN_RET(0x00805a24); r_esp += 4; return;
L_00805afb:; BB(0x00805afb);
    /* 00805afb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805afd: jmp 0x805a8c */ goto L_00805a8c;
}

void f_00805b00(void) /* sub_805B00 */
{
    FN_ENTER(0x00805b00);
    /* 00805b00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805b01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805b02: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00805b05: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x805b0au); f_00807ac0();
    /* 00805b0a: mov esi, dword ptr [0xaafc98] */ r_esi = R32((u32)(0xaafc98u));
    /* 00805b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805b11: call 0x80bee8 */ r_esp -= 4; W32(r_esp, 0x805b16u); f_0080bee8();
    /* 00805b16: mov ebx, eax */ r_ebx = r_eax;
    /* 00805b18: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00805b1c: push 0x97edbc */ { u32 v = 0x97edbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00805b21: push dword ptr [ebx + esi*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00805b25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00805b26: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x805b2bu); f_0078e574();
    /* 00805b2b: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00805b2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00805b30: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x805b35u); f_005b938c();
    /* 00805b35: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00805b38: mov dword ptr [0xaafbdc], eax */ W32((u32)(0xaafbdcu), r_eax);
    /* 00805b3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805b3f: je 0x805b6f */ if (fZ) goto L_00805b6f;
L_00805b41:; BB(0x00805b41);
    /* 00805b41: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00805b44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805b46: je 0x805b6f */ if (fZ) goto L_00805b6f;
L_00805b48:; BB(0x00805b48);
    /* 00805b48: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00805b4b: push 0x97edc4 */ { u32 v = 0x97edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00805b50: push dword ptr [ebx + esi*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00805b54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00805b55: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x805b5au); f_0078e574();
    /* 00805b5a: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 00805b5f: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00805b63: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00805b66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00805b67: call 0x81a7d8 */ r_esp -= 4; W32(r_esp, 0x805b6cu); f_0081a7d8();
    /* 00805b6c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00805b6f:; BB(0x00805b6f);
    /* 00805b6f: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 00805b74: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x805b79u); f_005ba214();
    /* 00805b79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805b7a: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
    /* 00805b84: call 0x805c28 */ r_esp -= 4; W32(r_esp, 0x805b89u); f_00805c28();
    /* 00805b89: mov esi, dword ptr [0xaafbdc] */ r_esi = R32((u32)(0xaafbdcu));
    /* 00805b8f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805b91: je 0x805bc4 */ if (fZ) goto L_00805bc4;
L_00805b93:; BB(0x00805b93);
    /* 00805b93: mov ebx, dword ptr [0xaafca0] */ r_ebx = R32((u32)(0xaafca0u));
    /* 00805b99: mov ecx, dword ptr [ebx*4 + 0xaaf000] */ r_ecx = R32((u32)(r_ebx*4+0xaaf000u));
    /* 00805ba0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805ba2: je 0x805be5 */ if (fZ) goto L_00805be5;
L_00805ba4:; BB(0x00805ba4);
    /* 00805ba4: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00805ba6: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00805ba9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805bab: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00805bad: jle 0x805bc4 */ if ((fZ||fS!=fO)) goto L_00805bc4;
L_00805baf:; BB(0x00805baf);
    /* 00805baf: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 00805bb2: mov word ptr [edx + 2], bx */ W16((u32)(r_edx+0x2u), (u16)r_ebx);
    /* 00805bb6: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00805bb9: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00805bbc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00805bbf: cmp eax, dword ptr [esi + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00805bc2: jl 0x805baf */ if ((fS!=fO)) goto L_00805baf;
L_00805bc4:; BB(0x00805bc4);
    /* 00805bc4: mov dword ptr [0xaafbd0], 1 */ W32((u32)(0xaafbd0u), 0x1u);
    /* 00805bce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805bd0: mov dword ptr [0xaafbd4], eax */ W32((u32)(0xaafbd4u), r_eax);
    /* 00805bd5: mov byte ptr [0xaafbec], al */ W8((u32)(0xaafbecu), (u8)r_eax);
    /* 00805bda: mov dword ptr [0xaafbe8], eax */ W32((u32)(0xaafbe8u), r_eax);
    /* 00805bdf: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00805be2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805be3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00805be4: ret  */ FN_RET(0x00805b00); r_esp += 4; return;
L_00805be5:; BB(0x00805be5);
    /* 00805be5: mov ecx, dword ptr [0xaafbcc] */ r_ecx = R32((u32)(0xaafbccu));
    /* 00805beb: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00805bee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00805bf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805bf1: call 0x7a8a94 */ r_esp -= 4; W32(r_esp, 0x805bf6u); f_007a8a94();
    /* 00805bf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805bf8: je 0x805bc4 */ if (fZ) goto L_00805bc4;
L_00805bfa:; BB(0x00805bfa);
    /* 00805bfa: mov dword ptr [ebx*4 + 0xaaf000], eax */ W32((u32)(r_ebx*4+0xaaf000u), r_eax);
    /* 00805c01: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00805c03: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00805c06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805c08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00805c0a: jle 0x805bc4 */ if ((fZ||fS!=fO)) goto L_00805bc4;
L_00805c0c:; BB(0x00805c0c);
    /* 00805c0c: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00805c10: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00805c16: mov word ptr [edx + 2], cx */ W16((u32)(r_edx+0x2u), (u16)r_ecx);
    /* 00805c1a: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00805c1d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00805c20: cmp eax, dword ptr [esi + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00805c23: jl 0x805c0c */ if ((fS!=fO)) goto L_00805c0c;
L_00805c25:; BB(0x00805c25);
    /* 00805c25: jmp 0x805bc4 */ goto L_00805bc4;
}

void f_00805c28(void) /* sub_805C28 */
{
    FN_ENTER(0x00805c28);
    /* 00805c28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00805c29: mov ebp, esp */ r_ebp = r_esp;
    /* 00805c2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00805c2d: push 0x8f7164 */ { u32 v = 0x8f7164u; r_esp -= 4; W32(r_esp, v); }
    /* 00805c32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00805c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805c39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00805c40: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00805c43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00805c46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00805c49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00805c4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00805c4f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00805c54: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00805c5b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x805c60u); f_008581c5();
    /* 00805c60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805c61: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00805c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805c66: je 0x805cbe */ if (fZ) goto L_00805cbe;
L_00805c68:; BB(0x00805c68);
    /* 00805c68: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00805c6f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00805c76: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00805c79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805c7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805c7e: push 0xa1130c */ { u32 v = 0xa1130cu; r_esp -= 4; W32(r_esp, v); }
    /* 00805c83: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00805c85: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x805c8au); f_005b7a84();
    /* 00805c8a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00805c8d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00805c94:; BB(0x00805c94);
    /* 00805c94: mov dword ptr [0xaafbf4], eax */ W32((u32)(0xaafbf4u), r_eax);
    /* 00805c99: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00805ca0: push 0x97eda8 */ { u32 v = 0x97eda8u; r_esp -= 4; W32(r_esp, v); }
    /* 00805ca5: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x805caau); f_008009dc();
    /* 00805caa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805cab: mov dword ptr [0xaafbf0], eax */ W32((u32)(0xaafbf0u), r_eax);
    /* 00805cb0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00805cb3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00805cba: mov esp, ebp */ r_esp = r_ebp;
    /* 00805cbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00805cbd: ret  */ FN_RET(0x00805c28); r_esp += 4; return;
L_00805cbe:; BB(0x00805cbe);
    /* 00805cbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805cc0: jmp 0x805c94 */ goto L_00805c94;
}

void f_00805cc4(void) /* sub_805CC4 */
{
    FN_ENTER(0x00805cc4);
    /* 00805cc4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00805cc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805cc9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805cca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805ccb: mov ebx, eax */ r_ebx = r_eax;
L_00805ccd:; BB(0x00805ccd);
    /* 00805ccd: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00805ccf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x805cd4u); f_0082d7b0();
    /* 00805cd4: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805cda: jne 0x805ce4 */ if (!fZ) goto L_00805ce4;
L_00805cdc:; BB(0x00805cdc);
    /* 00805cdc: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00805cdf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x805ce4u); f_0082d838();
L_00805ce4:; BB(0x00805ce4);
    /* 00805ce4: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805cea: jne 0x805cf9 */ if (!fZ) goto L_00805cf9;
L_00805cec:; BB(0x00805cec);
    /* 00805cec: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 00805cef: mov edx, esi */ r_edx = r_esi;
    /* 00805cf1: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00805cf4: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x805cf9u); f_00830df8();
L_00805cf9:; BB(0x00805cf9);
    /* 00805cf9: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805cff: jne 0x805d09 */ if (!fZ) goto L_00805d09;
L_00805d01:; BB(0x00805d01);
    /* 00805d01: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00805d04: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x805d09u); f_00831290();
L_00805d09:; BB(0x00805d09);
    /* 00805d09: test esi, 0x100000 */ {  u32 a = r_esi; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805d0f: jne 0x805d18 */ if (!fZ) goto L_00805d18;
L_00805d11:; BB(0x00805d11);
    /* 00805d11: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x805d16u); f_0082dab0();
    /* 00805d16: jmp 0x805d1d */ goto L_00805d1d;
L_00805d18:; BB(0x00805d18);
    /* 00805d18: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x805d1du); f_0082dbac();
L_00805d1d:; BB(0x00805d1d);
    /* 00805d1d: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805d23: jne 0x805d2e */ if (!fZ) goto L_00805d2e;
L_00805d25:; BB(0x00805d25);
    /* 00805d25: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00805d28: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x805d2du); f_008321d8();
    /* 00805d2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00805d2e:; BB(0x00805d2e);
    /* 00805d2e: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805d34: jne 0x805d42 */ if (!fZ) goto L_00805d42;
L_00805d36:; BB(0x00805d36);
    /* 00805d36: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00805d39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805d3b: je 0x805d42 */ if (fZ) goto L_00805d42;
L_00805d3d:; BB(0x00805d3d);
    /* 00805d3d: call 0x805cc8 */ r_esp -= 4; W32(r_esp, 0x805d42u); f_00805cc8();
L_00805d42:; BB(0x00805d42);
    /* 00805d42: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x805d47u); f_0082da80();
    /* 00805d47: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00805d4a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805d4c: jne 0x805ccd */ if (!fZ) goto L_00805ccd;
L_00805d52:; BB(0x00805d52);
    /* 00805d52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805d54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00805d55: ret  */ FN_RET(0x00805cc4); r_esp += 4; return;
}

void f_00805cc8(void) /* sub_805CC8 */
{
    FN_ENTER(0x00805cc8);
    /* 00805cc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805cc9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805cca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805ccb: mov ebx, eax */ r_ebx = r_eax;
L_00805ccd:; BB(0x00805ccd);
    /* 00805ccd: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00805ccf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x805cd4u); f_0082d7b0();
    /* 00805cd4: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805cda: jne 0x805ce4 */ if (!fZ) goto L_00805ce4;
L_00805cdc:; BB(0x00805cdc);
    /* 00805cdc: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00805cdf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x805ce4u); f_0082d838();
L_00805ce4:; BB(0x00805ce4);
    /* 00805ce4: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805cea: jne 0x805cf9 */ if (!fZ) goto L_00805cf9;
L_00805cec:; BB(0x00805cec);
    /* 00805cec: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 00805cef: mov edx, esi */ r_edx = r_esi;
    /* 00805cf1: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00805cf4: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x805cf9u); f_00830df8();
L_00805cf9:; BB(0x00805cf9);
    /* 00805cf9: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805cff: jne 0x805d09 */ if (!fZ) goto L_00805d09;
L_00805d01:; BB(0x00805d01);
    /* 00805d01: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00805d04: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x805d09u); f_00831290();
L_00805d09:; BB(0x00805d09);
    /* 00805d09: test esi, 0x100000 */ {  u32 a = r_esi; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805d0f: jne 0x805d18 */ if (!fZ) goto L_00805d18;
L_00805d11:; BB(0x00805d11);
    /* 00805d11: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x805d16u); f_0082dab0();
    /* 00805d16: jmp 0x805d1d */ goto L_00805d1d;
L_00805d18:; BB(0x00805d18);
    /* 00805d18: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x805d1du); f_0082dbac();
L_00805d1d:; BB(0x00805d1d);
    /* 00805d1d: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805d23: jne 0x805d2e */ if (!fZ) goto L_00805d2e;
L_00805d25:; BB(0x00805d25);
    /* 00805d25: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00805d28: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x805d2du); f_008321d8();
    /* 00805d2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00805d2e:; BB(0x00805d2e);
    /* 00805d2e: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805d34: jne 0x805d42 */ if (!fZ) goto L_00805d42;
L_00805d36:; BB(0x00805d36);
    /* 00805d36: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00805d39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805d3b: je 0x805d42 */ if (fZ) goto L_00805d42;
L_00805d3d:; BB(0x00805d3d);
    /* 00805d3d: call 0x805cc8 */ r_esp -= 4; W32(r_esp, 0x805d42u); f_00805cc8();
L_00805d42:; BB(0x00805d42);
    /* 00805d42: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x805d47u); f_0082da80();
    /* 00805d47: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00805d4a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805d4c: jne 0x805ccd */ if (!fZ) goto L_00805ccd;
L_00805d52:; BB(0x00805d52);
    /* 00805d52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805d54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00805d55: ret  */ FN_RET(0x00805cc8); r_esp += 4; return;
}

void f_00805d58(void) /* sub_805D58 */
{
    FN_ENTER(0x00805d58);
    /* 00805d58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805d59: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00805d5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00805d5d: call 0x805d7c */ r_esp -= 4; W32(r_esp, 0x805d62u); f_00805d7c();
    /* 00805d62: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00805d66: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805d68: jne 0x805d6e */ if (!fZ) goto L_00805d6e;
L_00805d6a:; BB(0x00805d6a);
    /* 00805d6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805d6b: ret 4 */ FN_RET(0x00805d58); r_esp += 8; return;
L_00805d6e:; BB(0x00805d6e);
    /* 00805d6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805d6f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x805d74u); f_00857e98();
    /* 00805d74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805d75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805d76: ret 4 */ FN_RET(0x00805d58); r_esp += 8; return;
}

void f_00805d7c(void) /* sub_805D7C */
{
    FN_ENTER(0x00805d7c);
    /* 00805d7c: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00805d7f: mov dword ptr [ecx], 0xb474e4 */ W32((u32)(r_ecx), 0xb474e4u);
    /* 00805d85: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x805d8au); f_00857e98();
    /* 00805d8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805d8b: ret  */ FN_RET(0x00805d7c); r_esp += 4; return;
}

void f_00805d8c(void) /* sub_805D8C */
{
    FN_ENTER(0x00805d8c);
    /* 00805d8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805d8d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00805d8f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00805d93: mov dword ptr [ebx], 0xb474e4 */ W32((u32)(r_ebx), 0xb474e4u);
    /* 00805d99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805d9a: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00805d9d: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 00805da4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00805da6: call 0x805db4 */ r_esp -= 4; W32(r_esp, 0x805dabu); f_00805db4();
    /* 00805dab: mov eax, ebx */ r_eax = r_ebx;
    /* 00805dad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805dae: ret 4 */ FN_RET(0x00805d8c); r_esp += 8; return;
}

void f_00805db4(void) /* sub_805DB4 */
{
    FN_ENTER(0x00805db4);
    /* 00805db4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00805db5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805db6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00805db7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805db8: mov edi, ecx */ r_edi = r_ecx;
    /* 00805dba: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 00805dbf: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00805dc3: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x805dc8u); f_0085957c();
    /* 00805dc8: mov esi, eax */ r_esi = r_eax;
    /* 00805dca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00805dcd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805dcf: je 0x805e1f */ if (fZ) goto L_00805e1f;
L_00805dd1:; BB(0x00805dd1);
    /* 00805dd1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00805dd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00805dd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805dd6: call 0x85a8a9 */ r_esp -= 4; W32(r_esp, 0x805ddbu); f_0085a8a9();
    /* 00805ddb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805ddc: call 0x85aa54 */ r_esp -= 4; W32(r_esp, 0x805de1u); f_0085aa54();
    /* 00805de1: mov ebp, eax */ r_ebp = r_eax;
    /* 00805de3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00805de6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00805de8: jle 0x805e18 */ if ((fZ||fS!=fO)) goto L_00805e18;
L_00805dea:; BB(0x00805dea);
    /* 00805dea: lea ebx, [ebp + 1] */ r_ebx = (u32)(r_ebp+0x1u);
    /* 00805ded: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805dee: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x805df3u); f_008581c5();
    /* 00805df3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805df4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00805df6: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 00805df9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805dfa: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x805dffu); f_0086b688();
    /* 00805dff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00805e01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00805e02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00805e03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805e04: call 0x85a8a9 */ r_esp -= 4; W32(r_esp, 0x805e09u); f_0085a8a9();
    /* 00805e09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805e0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00805e0b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00805e0d: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00805e10: call 0x859678 */ r_esp -= 4; W32(r_esp, 0x805e15u); f_00859678();
    /* 00805e15: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00805e18:; BB(0x00805e18);
    /* 00805e18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805e19: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x805e1eu); f_00859710();
    /* 00805e1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00805e1f:; BB(0x00805e1f);
    /* 00805e1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805e20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00805e21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00805e22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00805e23: ret 4 */ FN_RET(0x00805db4); r_esp += 8; return;
}

void f_00805e28(void) /* sub_805E28 */
{
    FN_ENTER(0x00805e28);
    /* 00805e28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00805e29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805e2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00805e2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805e2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805e2d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00805e2f: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00805e32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805e34: je 0x805ee2 */ if (fZ) goto L_00805ee2;
L_00805e3a:; BB(0x00805e3a);
    /* 00805e3a: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00805e3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805e3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00805e41: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00805e45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00805e46: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x805e4bu); f_0086b688();
    /* 00805e4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00805e4e: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00805e52: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00805e55: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00805e59: movsx eax, byte ptr [ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00805e5c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00805e5e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00805e60: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00805e63: lea ebp, [ebp + ebx] */ r_ebp = (u32)(r_ebp+r_ebx);
    /* 00805e67: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00805e69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805e6b: je 0x805eb8 */ if (fZ) goto L_00805eb8;
L_00805e6d:; BB(0x00805e6d);
    /* 00805e6d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00805e71: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00805e73: je 0x805eb8 */ if (fZ) goto L_00805eb8;
L_00805e75:; BB(0x00805e75);
    /* 00805e75: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_00805e78:; BB(0x00805e78);
    /* 00805e78: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805e7b: je 0x805ed5 */ if (fZ) goto L_00805ed5;
L_00805e7d:; BB(0x00805e7d);
    /* 00805e7d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805e80: je 0x805ed5 */ if (fZ) goto L_00805ed5;
L_00805e82:; BB(0x00805e82);
    /* 00805e82: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805e85: je 0x805ec4 */ if (fZ) goto L_00805ec4;
L_00805e87:; BB(0x00805e87);
    /* 00805e87: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805e8a: je 0x805ec4 */ if (fZ) goto L_00805ec4;
L_00805e8c:; BB(0x00805e8c);
    /* 00805e8c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00805e90: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805e92: jne 0x805ea4 */ if (!fZ) goto L_00805ea4;
L_00805e94:; BB(0x00805e94);
    /* 00805e94: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805e96: jne 0x805e9d */ if (!fZ) goto L_00805e9d;
L_00805e98:; BB(0x00805e98);
    /* 00805e98: mov esi, 1 */ r_esi = 0x1u;
L_00805e9d:; BB(0x00805e9d);
    /* 00805e9d: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 00805e9f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00805ea2: jmp 0x805ea8 */ goto L_00805ea8;
L_00805ea4:; BB(0x00805ea4);
    /* 00805ea4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805ea6: jne 0x805e9d */ if (!fZ) goto L_00805e9d;
L_00805ea8:; BB(0x00805ea8);
    /* 00805ea8: mov edx, eax */ r_edx = r_eax;
    /* 00805eaa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00805ead: movsx eax, byte ptr [ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00805eb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805eb2: je 0x805eb8 */ if (fZ) goto L_00805eb8;
L_00805eb4:; BB(0x00805eb4);
    /* 00805eb4: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00805eb6: jne 0x805e78 */ if (!fZ) goto L_00805e78;
L_00805eb8:; BB(0x00805eb8);
    /* 00805eb8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00805ebc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805ebd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805ebe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00805ebf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00805ec0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00805ec1: ret 0xc */ FN_RET(0x00805e28); r_esp += 16; return;
L_00805ec4:; BB(0x00805ec4);
    /* 00805ec4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805ec6: jne 0x805eb8 */ if (!fZ) goto L_00805eb8;
L_00805ec8:; BB(0x00805ec8);
    /* 00805ec8: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00805ecc: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00805ecf: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805ed1: je 0x805e98 */ if (fZ) goto L_00805e98;
L_00805ed3:; BB(0x00805ed3);
    /* 00805ed3: jmp 0x805ea8 */ goto L_00805ea8;
L_00805ed5:; BB(0x00805ed5);
    /* 00805ed5: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805ed7: jne 0x805ea8 */ if (!fZ) goto L_00805ea8;
L_00805ed9:; BB(0x00805ed9);
    /* 00805ed9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805edb: jne 0x805eb8 */ if (!fZ) goto L_00805eb8;
L_00805edd:; BB(0x00805edd);
    /* 00805edd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00805ee0: jmp 0x805ea8 */ goto L_00805ea8;
L_00805ee2:; BB(0x00805ee2);
    /* 00805ee2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805ee4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805ee5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805ee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00805ee7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00805ee8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00805ee9: ret 0xc */ FN_RET(0x00805e28); r_esp += 16; return;
}

void f_00805eec(void) /* sub_805EEC */
{
    FN_ENTER(0x00805eec);
    /* 00805eec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805eed: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00805ef0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805ef2: je 0x805f3c */ if (fZ) goto L_00805f3c;
L_00805ef4:; BB(0x00805ef4);
    /* 00805ef4: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00805ef7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00805ef9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00805efb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805efd: je 0x805f22 */ if (fZ) goto L_00805f22;
L_00805eff:; BB(0x00805eff);
    /* 00805eff: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805f02: je 0x805f33 */ if (fZ) goto L_00805f33;
L_00805f04:; BB(0x00805f04);
    /* 00805f04: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805f07: je 0x805f33 */ if (fZ) goto L_00805f33;
L_00805f09:; BB(0x00805f09);
    /* 00805f09: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805f0c: je 0x805f13 */ if (fZ) goto L_00805f13;
L_00805f0e:; BB(0x00805f0e);
    /* 00805f0e: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805f11: jne 0x805f16 */ if (!fZ) goto L_00805f16;
L_00805f13:; BB(0x00805f13);
    /* 00805f13: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00805f16:; BB(0x00805f16);
    /* 00805f16: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00805f19: mov ebx, eax */ r_ebx = r_eax;
    /* 00805f1b: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00805f1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805f20: jne 0x805eff */ if (!fZ) goto L_00805eff;
L_00805f22:; BB(0x00805f22);
    /* 00805f22: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805f25: je 0x805f2c */ if (fZ) goto L_00805f2c;
L_00805f27:; BB(0x00805f27);
    /* 00805f27: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00805f2a: jne 0x805f2f */ if (!fZ) goto L_00805f2f;
L_00805f2c:; BB(0x00805f2c);
    /* 00805f2c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00805f2f:; BB(0x00805f2f);
    /* 00805f2f: mov eax, ecx */ r_eax = r_ecx;
    /* 00805f31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805f32: ret  */ FN_RET(0x00805eec); r_esp += 4; return;
L_00805f33:; BB(0x00805f33);
    /* 00805f33: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805f35: jne 0x805f16 */ if (!fZ) goto L_00805f16;
L_00805f37:; BB(0x00805f37);
    /* 00805f37: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00805f3a: jmp 0x805f16 */ goto L_00805f16;
L_00805f3c:; BB(0x00805f3c);
    /* 00805f3c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805f3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805f3f: ret  */ FN_RET(0x00805eec); r_esp += 4; return;
}

void f_00805f40(void) /* sub_805F40 */
{
    FN_ENTER(0x00805f40);
    /* 00805f40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805f41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00805f43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00805f45: call 0x805f64 */ r_esp -= 4; W32(r_esp, 0x805f4au); f_00805f64();
    /* 00805f4a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00805f4e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00805f50: jne 0x805f56 */ if (!fZ) goto L_00805f56;
L_00805f52:; BB(0x00805f52);
    /* 00805f52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805f53: ret 4 */ FN_RET(0x00805f40); r_esp += 8; return;
L_00805f56:; BB(0x00805f56);
    /* 00805f56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805f57: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x805f5cu); f_005c2f74();
    /* 00805f5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00805f5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00805f5e: ret 4 */ FN_RET(0x00805f40); r_esp += 8; return;
}

void f_00805f64(void) /* sub_805F64 */
{
    FN_ENTER(0x00805f64);
    /* 00805f64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00805f65: mov ebp, esp */ r_ebp = r_esp;
    /* 00805f67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00805f69: push 0x8f7180 */ { u32 v = 0x8f7180u; r_esp -= 4; W32(r_esp, v); }
    /* 00805f6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00805f74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00805f75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00805f7c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00805f7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00805f82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00805f85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00805f88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00805f8b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00805f8e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00805f95: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00805f98: mov dword ptr [ecx], 0xb475f0 */ W32((u32)(r_ecx), 0xb475f0u);
    /* 00805f9e: call 0x80b464 */ r_esp -= 4; W32(r_esp, 0x805fa3u); f_0080b464();
    /* 00805fa3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00805fa5: mov dword ptr [0xaafc3c], eax */ W32((u32)(0xaafc3cu), r_eax);
    /* 00805faa: mov dword ptr [0xaafc38], eax */ W32((u32)(0xaafc38u), r_eax);
    /* 00805faf: mov dword ptr [0xaafc34], eax */ W32((u32)(0xaafc34u), r_eax);
    /* 00805fb4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00805fbb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00805fbe: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x805fc3u); f_008171e8();
    /* 00805fc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00805fc6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00805fcd: mov esp, ebp */ r_esp = r_ebp;
    /* 00805fcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00805fd0: ret  */ FN_RET(0x00805f64); r_esp += 4; return;
}

void f_00805fd4(void) /* sub_805FD4 */
{
    FN_ENTER(0x00805fd4);
    /* 00805fd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00805fd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00805fd6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00805fd7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00805fd8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00805fdb: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00805fdd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00805fdf: call 0x8060d8 */ r_esp -= 4; W32(r_esp, 0x805fe4u); f_008060d8();
    /* 00805fe4: mov edi, dword ptr [0xaafca4] */ r_edi = R32((u32)(0xaafca4u));
    /* 00805fea: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00805fec: je 0x8060c5 */ if (fZ) goto L_008060c5;
L_00805ff2:; BB(0x00805ff2);
    /* 00805ff2: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00805ff5: movsx eax, word ptr [edi + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x8u));
    /* 00805ff9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00805ffb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00805ffd: jle 0x80603a */ if ((fZ||fS!=fO)) goto L_0080603a;
L_00805fff:; BB(0x00805fff);
    /* 00805fff: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_00806003:; BB(0x00806003);
    /* 00806003: mov ebp, dword ptr [edx + 0x24] */ r_ebp = R32((u32)(r_edx+0x24u));
    /* 00806006: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 00806009: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080600b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080600d: jle 0x806029 */ if ((fZ||fS!=fO)) goto L_00806029;
L_0080600f:; BB(0x0080600f);
    /* 0080600f: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00806012: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00806017: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0080601a: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080601d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00806020: cmp ebx, dword ptr [edx + 0x2c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00806023: jl 0x80600f */ if ((fS!=fO)) goto L_0080600f;
L_00806025:; BB(0x00806025);
    /* 00806025: movsx eax, word ptr [edi + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x8u));
L_00806029:; BB(0x00806029);
    /* 00806029: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080602c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080602f: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00806031: jl 0x806003 */ if ((fS!=fO)) goto L_00806003;
L_00806033:; BB(0x00806033);
    /* 00806033: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00806037: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
L_0080603a:; BB(0x0080603a);
    /* 0080603a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080603c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080603e: jle 0x8060c5 */ if ((fZ||fS!=fO)) goto L_008060c5;
L_00806044:; BB(0x00806044);
    /* 00806044: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00806048: mov ebx, eax */ r_ebx = r_eax;
    /* 0080604a: mov ebp, edi */ r_ebp = r_edi;
L_0080604c:; BB(0x0080604c);
    /* 0080604c: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 0080604f: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00806052: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00806054: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00806056: jle 0x8060b7 */ if ((fZ||fS!=fO)) goto L_008060b7;
L_00806058:; BB(0x00806058);
    /* 00806058: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0080605c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0080605e:; BB(0x0080605e);
    /* 0080605e: mov ebx, dword ptr [edi + 0x1c] */ r_ebx = R32((u32)(r_edi+0x1cu));
    /* 00806061: test ebx, 0x40000 */ {  u32 a = r_ebx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806067: jne 0x8060a5 */ if (!fZ) goto L_008060a5;
L_00806069:; BB(0x00806069);
    /* 00806069: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0080606c: fadd dword ptr [edi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x10u));
    /* 0080606f: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00806072: fst dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0));
    /* 00806075: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806077: je 0x8060d4 */ if (fZ) goto L_008060d4;
L_00806079:; BB(0x00806079);
    /* 00806079: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0080607c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080607f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00806082: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00806085: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00806088: fadd dword ptr [eax*4 + 0x97f108] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97f108u));
    /* 0080608f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00806091: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00806093: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00806094: jae 0x806099 */ if (!fC) goto L_00806099;
L_00806096:; BB(0x00806096);
    /* 00806096: mov dword ptr [edi + 0xc], ebp */ W32((u32)(r_edi+0xcu), r_ebp);
L_00806099:; BB(0x00806099);
    /* 00806099: or ebx, 0x40000 */ {  u32 a = r_ebx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0080609f: mov dword ptr [edi + 0x1c], ebx */ W32((u32)(r_edi+0x1cu), r_ebx);
    /* 008060a2: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
L_008060a5:; BB(0x008060a5);
    /* 008060a5: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008060a8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008060ab: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008060ad: jl 0x80605e */ if ((fS!=fO)) goto L_0080605e;
L_008060af:; BB(0x008060af);
    /* 008060af: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 008060b3: movsx ebx, word ptr [ebp + 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
L_008060b7:; BB(0x008060b7);
    /* 008060b7: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008060ba: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008060bd: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008060bf: jl 0x80604c */ if ((fS!=fO)) goto L_0080604c;
L_008060c1:; BB(0x008060c1);
    /* 008060c1: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_008060c5:; BB(0x008060c5);
    /* 008060c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008060c7: call 0x8060ec */ r_esp -= 4; W32(r_esp, 0x8060ccu); f_008060ec();
    /* 008060cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008060cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008060d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008060d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008060d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008060d3: ret  */ FN_RET(0x00805fd4); r_esp += 4; return;
L_008060d4:; BB(0x008060d4);
    /* 008060d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008060d6: jmp 0x806099 */ goto L_00806099;
}

