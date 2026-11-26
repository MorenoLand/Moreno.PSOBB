#include "protos.h"

void f_004d91f4(void) /* sub_4D91F4 */
{
    FN_ENTER(0x004d91f4);
    /* 004d91f4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004d91f8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d91fb: je 0x4d91fe */ if (fZ) goto L_004d91fe;
L_004d91fd:; BB(0x004d91fd);
    /* 004d91fd: ret  */ FN_RET(0x004d91f4); r_esp += 4; return;
L_004d91fe:; BB(0x004d91fe);
    /* 004d91fe: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 004d9203: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d9205: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d9208: jne 0x4d920f */ if (!fZ) goto L_004d920f;
L_004d920a:; BB(0x004d920a);
    /* 004d920a: mov edx, 1 */ r_edx = 0x1u;
L_004d920f:; BB(0x004d920f);
    /* 004d920f: mov eax, edx */ r_eax = r_edx;
    /* 004d9211: ret  */ FN_RET(0x004d91f4); r_esp += 4; return;
}

void f_004d91f8(void) /* sub_4D91F8 */
{
    FN_ENTER(0x004d91f8);
    /* 004d91f8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d91fb: je 0x4d91fe */ if (fZ) goto L_004d91fe;
L_004d91fd:; BB(0x004d91fd);
    /* 004d91fd: ret  */ FN_RET(0x004d91f8); r_esp += 4; return;
L_004d91fe:; BB(0x004d91fe);
    /* 004d91fe: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 004d9203: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d9205: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d9208: jne 0x4d920f */ if (!fZ) goto L_004d920f;
L_004d920a:; BB(0x004d920a);
    /* 004d920a: mov edx, 1 */ r_edx = 0x1u;
L_004d920f:; BB(0x004d920f);
    /* 004d920f: mov eax, edx */ r_eax = r_edx;
    /* 004d9211: ret  */ FN_RET(0x004d91f8); r_esp += 4; return;
}

void f_004d9218(void) /* sub_4D9218 */
{
    FN_ENTER(0x004d9218);
    /* 004d9218: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9219: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d921a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d921b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d921c: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d921f: mov esi, eax */ r_esi = r_eax;
    /* 004d9221: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9226: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4d922bu); f_006c1bd4();
    /* 004d922b: mov ebx, eax */ r_ebx = r_eax;
    /* 004d922d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d9230: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d9235: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4d923au); f_004d91f8();
    /* 004d923a: mov edx, dword ptr [eax*4 + 0x909844] */ r_edx = R32((u32)(r_eax*4+0x909844u));
    /* 004d9241: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9243: je 0x4d9253 */ if (fZ) goto L_004d9253;
L_004d9245:; BB(0x004d9245);
    /* 004d9245: mov ebp, dword ptr [0xa48be0] */ r_ebp = R32((u32)(0xa48be0u));
    /* 004d924b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004d924d: jl 0x4d9253 */ if ((fS!=fO)) goto L_004d9253;
L_004d924f:; BB(0x004d924f);
    /* 004d924f: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9251: jl 0x4d925d */ if ((fS!=fO)) goto L_004d925d;
L_004d9253:; BB(0x004d9253);
    /* 004d9253: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9255: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d9258: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9259: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d925a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d925b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d925c: ret  */ FN_RET(0x004d9218); r_esp += 4; return;
L_004d925d:; BB(0x004d925d);
    /* 004d925d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d9262: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4d9267u); f_004d91f8();
    /* 004d9267: mov edx, dword ptr [eax*4 + 0x909838] */ r_edx = R32((u32)(r_eax*4+0x909838u));
    /* 004d926e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d9270: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d9272: lea ebx, [edx + ebx + 0x27dc] */ r_ebx = (u32)(r_edx+r_ebx+0x27dcu);
    /* 004d9279: mov eax, dword ptr [ebx + ebp*4 + 4] */ r_eax = R32((u32)(r_ebx+r_ebp*4+0x4u));
    /* 004d927d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d927f: jne 0x4d93cb */ if (!fZ) goto L_004d93cb;
L_004d9285:; BB(0x004d9285);
    /* 004d9285: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 004d928b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d928d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9290: jne 0x4d9297 */ if (!fZ) goto L_004d9297;
L_004d9292:; BB(0x004d9292);
    /* 004d9292: mov ecx, 1 */ r_ecx = 0x1u;
L_004d9297:; BB(0x004d9297);
    /* 004d9297: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9299: jne 0x4d93e5 */ if (!fZ) goto L_004d93e5;
L_004d929f:; BB(0x004d929f);
    /* 004d929f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d92a4: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4d92a9u); f_006c1bd4();
    /* 004d92a9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004d92ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d92b0: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 004d92b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d92b8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d92bb: jne 0x4d92c2 */ if (!fZ) goto L_004d92c2;
L_004d92bd:; BB(0x004d92bd);
    /* 004d92bd: mov ecx, 1 */ r_ecx = 0x1u;
L_004d92c2:; BB(0x004d92c2);
    /* 004d92c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d92c4: jne 0x4d93e5 */ if (!fZ) goto L_004d93e5;
L_004d92ca:; BB(0x004d92ca);
    /* 004d92ca: movzx edx, word ptr [0xa48c30] */ r_edx = (u32)R16((u32)(0xa48c30u));
    /* 004d92d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d92d3: je 0x4d93e5 */ if (fZ) goto L_004d93e5;
L_004d92d9:; BB(0x004d92d9);
    /* 004d92d9: mov edx, dword ptr [0xa48bfc] */ r_edx = R32((u32)(0xa48bfcu));
    /* 004d92df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d92e1: jle 0x4d952a */ if ((fZ||fS!=fO)) goto L_004d952a;
L_004d92e7:; BB(0x004d92e7);
    /* 004d92e7: mov edi, eax */ r_edi = r_eax;
    /* 004d92e9: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004d92ed: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 004d92f1: lea ecx, [edi + 0x28e8] */ r_ecx = (u32)(r_edi+0x28e8u);
    /* 004d92f7: mov edi, ecx */ r_edi = r_ecx;
    /* 004d92f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d92fb: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004d92ff: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 004d9302: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9304: jne 0x4d94af */ if (!fZ) goto L_004d94af;
L_004d930a:; BB(0x004d930a);
    /* 004d930a: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 004d930e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d9310: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
L_004d9313:; BB(0x004d9313);
    /* 004d9313: mov edx, dword ptr [0xa48bfc] */ r_edx = R32((u32)(0xa48bfcu));
    /* 004d9319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d931b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d931d: jle 0x4d9396 */ if ((fZ||fS!=fO)) goto L_004d9396;
L_004d931f:; BB(0x004d931f);
    /* 004d931f: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 004d9323: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 004d9327: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 004d932b: mov ebp, eax */ r_ebp = r_eax;
    /* 004d932d: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
L_004d9331:; BB(0x004d9331);
    /* 004d9331: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004d9335: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 004d9339: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d933b: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004d933d: lea ebx, [ebp + ebx*4] */ r_ebx = (u32)(r_ebp+r_ebx*4);
    /* 004d9341: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 004d9344: lea edi, [edx + edx + 0xa48c48] */ r_edi = (u32)(r_edx+r_edx+0xa48c48u);
    /* 004d934b: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 004d934e: mov edx, edi */ r_edx = r_edi;
    /* 004d9350: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d9352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9354: jne 0x4d945c */ if (!fZ) goto L_004d945c;
L_004d935a:; BB(0x004d935a);
    /* 004d935a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d935c: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
L_004d935f:; BB(0x004d935f);
    /* 004d935f: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004d9363: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004d9367: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9369: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d936a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d936b: call 0x858643 */ r_esp -= 4; W32(r_esp, 0x4d9370u); f_00858643();
    /* 004d9370: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d9373: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9375: je 0x4d940f */ if (fZ) goto L_004d940f;
L_004d937b:; BB(0x004d937b);
    /* 004d937b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d937e: cmp ebp, dword ptr [0xa48bfc] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa48bfcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9384: jl 0x4d9331 */ if ((fS!=fO)) goto L_004d9331;
L_004d9386:; BB(0x004d9386);
    /* 004d9386: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 004d938a: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 004d938e: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 004d9392: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_004d9396:; BB(0x004d9396);
    /* 004d9396: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9398: push 0xa48c30 */ { u32 v = 0xa48c30u; r_esp -= 4; W32(r_esp, v); }
    /* 004d939d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d939e: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4d93a3u); f_00857dec();
    /* 004d93a3: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004d93a7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d93a9: mov word ptr [ecx + 0x28fe], dx */ W16((u32)(r_ecx+0x28feu), (u16)r_edx);
    /* 004d93b0: push dword ptr [0xa48bf8] */ { u32 v = R32((u32)(0xa48bf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d93b6: call 0x4da6c8 */ r_esp -= 4; W32(r_esp, 0x4d93bbu); f_004da6c8();
    /* 004d93bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d93be: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 004d93c2: mov word ptr [edx + 0x27dc], ax */ W16((u32)(r_edx+0x27dcu), (u16)r_eax);
    /* 004d93c9: jmp 0x4d93e5 */ goto L_004d93e5;
L_004d93cb:; BB(0x004d93cb);
    /* 004d93cb: call 0x4d9608 */ r_esp -= 4; W32(r_esp, 0x4d93d0u); f_004d9608();
    /* 004d93d0: mov edi, eax */ r_edi = r_eax;
    /* 004d93d2: mov eax, edi */ r_eax = r_edi;
    /* 004d93d4: call 0x4d953c */ r_esp -= 4; W32(r_esp, 0x4d93d9u); f_004d953c();
    /* 004d93d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d93db: jne 0x4d93fd */ if (!fZ) goto L_004d93fd;
L_004d93dd:; BB(0x004d93dd);
    /* 004d93dd: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d93df: jge 0x4d9253 */ if ((fS==fO)) goto L_004d9253;
L_004d93e5:; BB(0x004d93e5);
    /* 004d93e5: mov eax, esi */ r_eax = r_esi;
    /* 004d93e7: call 0x4d9558 */ r_esp -= 4; W32(r_esp, 0x4d93ecu); f_004d9558();
    /* 004d93ec: mov dword ptr [ebx + ebp*4 + 4], eax */ W32((u32)(r_ebx+r_ebp*4+0x4u), r_eax);
    /* 004d93f0: mov eax, 1 */ r_eax = 0x1u;
    /* 004d93f5: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d93f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d93f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d93fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d93fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d93fc: ret  */ FN_RET(0x004d9218); r_esp += 4; return;
L_004d93fd:; BB(0x004d93fd);
    /* 004d93fd: mov dword ptr [ebx + ebp*4 + 4], 0 */ W32((u32)(r_ebx+r_ebp*4+0x4u), 0x0u);
    /* 004d9405: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9407: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d940a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d940b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d940c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d940d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d940e: ret  */ FN_RET(0x004d9218); r_esp += 4; return;
L_004d940f:; BB(0x004d940f);
    /* 004d940f: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 004d9413: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 004d9417: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 004d941b: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 004d941f: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d9422: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 004d9426: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9428: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9429: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d942a: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4d942fu); f_00857dec();
    /* 004d942f: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004d9433: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 004d9437: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d9439: mov word ptr [ecx + 0x28fe], dx */ W16((u32)(r_ecx+0x28feu), (u16)r_edx);
    /* 004d9440: push dword ptr [edi*4 + 0xa48c78] */ { u32 v = R32((u32)(r_edi*4+0xa48c78u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9447: call 0x4da6c8 */ r_esp -= 4; W32(r_esp, 0x4d944cu); f_004da6c8();
    /* 004d944c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d944f: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 004d9453: mov word ptr [edx + 0x27dc], ax */ W16((u32)(r_edx+0x27dcu), (u16)r_eax);
    /* 004d945a: jmp 0x4d93e5 */ goto L_004d93e5;
L_004d945c:; BB(0x004d945c);
    /* 004d945c: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004d9460: mov ebp, edx */ r_ebp = r_edx;
L_004d9462:; BB(0x004d9462);
    /* 004d9462: xor eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9465: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 004d9468: jmp 0x4d947c */ goto L_004d947c;
L_004d946a:; BB(0x004d946a);
    /* 004d946a: movzx edx, word ptr [ecx - 2] */ r_edx = (u32)R16((u32)(r_ecx+0xfffffffeu));
    /* 004d946e: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 004d9471: xor eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9474: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004d9477: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d9479: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
L_004d947c:; BB(0x004d947c);
    /* 004d947c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d947f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d9482: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d9485: cmp esi, 0xb */ {  u32 a = r_esi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9488: jge 0x4d94a1 */ if ((fS==fO)) goto L_004d94a1;
L_004d948a:; BB(0x004d948a);
    /* 004d948a: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 004d948e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9490: je 0x4d9498 */ if (fZ) goto L_004d9498;
L_004d9492:; BB(0x004d9492);
    /* 004d9492: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9494: je 0x4d9462 */ if (fZ) goto L_004d9462;
L_004d9496:; BB(0x004d9496);
    /* 004d9496: jmp 0x4d946a */ goto L_004d946a;
L_004d9498:; BB(0x004d9498);
    /* 004d9498: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 004d949c: jmp 0x4d935a */ goto L_004d935a;
L_004d94a1:; BB(0x004d94a1);
    /* 004d94a1: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 004d94a5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d94a7: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 004d94aa: jmp 0x4d935f */ goto L_004d935f;
L_004d94af:; BB(0x004d94af);
    /* 004d94af: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 004d94b2: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004d94b6: mov eax, edx */ r_eax = r_edx;
    /* 004d94b8: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 004d94bc: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 004d94c0: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 004d94c4: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
L_004d94c8:; BB(0x004d94c8);
    /* 004d94c8: xor eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d94cb: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 004d94cf: jmp 0x4d94e4 */ goto L_004d94e4;
L_004d94d1:; BB(0x004d94d1);
    /* 004d94d1: movzx edx, word ptr [ebp - 2] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffffeu));
    /* 004d94d5: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 004d94d8: xor eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d94db: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004d94de: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d94e0: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
L_004d94e4:; BB(0x004d94e4);
    /* 004d94e4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d94e7: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d94ea: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d94ed: cmp esi, 0xb */ {  u32 a = r_esi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d94f0: jge 0x4d9510 */ if ((fS==fO)) goto L_004d9510;
L_004d94f2:; BB(0x004d94f2);
    /* 004d94f2: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 004d94f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d94f7: je 0x4d94ff */ if (fZ) goto L_004d94ff;
L_004d94f9:; BB(0x004d94f9);
    /* 004d94f9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d94fb: je 0x4d94c8 */ if (fZ) goto L_004d94c8;
L_004d94fd:; BB(0x004d94fd);
    /* 004d94fd: jmp 0x4d94d1 */ goto L_004d94d1;
L_004d94ff:; BB(0x004d94ff);
    /* 004d94ff: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 004d9503: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 004d9507: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 004d950b: jmp 0x4d930a */ goto L_004d930a;
L_004d9510:; BB(0x004d9510);
    /* 004d9510: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 004d9514: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 004d9518: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 004d951c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d951e: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 004d9522: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 004d9525: jmp 0x4d9313 */ goto L_004d9313;
L_004d952a:; BB(0x004d952a);
    /* 004d952a: mov edx, eax */ r_edx = r_eax;
    /* 004d952c: lea ecx, [edx + 0x28e8] */ r_ecx = (u32)(r_edx+0x28e8u);
    /* 004d9532: jmp 0x4d9396 */ goto L_004d9396;
}

void f_004d953c(void) /* sub_4D953C */
{
    FN_ENTER(0x004d953c);
    /* 004d953c: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d953f: jl 0x4d954b */ if ((fS!=fO)) goto L_004d954b;
L_004d9541:; BB(0x004d9541);
    /* 004d9541: cmp eax, 0x8c9f */ {  u32 a = r_eax; u32 b = 0x8c9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d9546: jg 0x4d954b */ if ((!fZ&&fS==fO)) goto L_004d954b;
L_004d9548:; BB(0x004d9548);
    /* 004d9548: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d954a: ret  */ FN_RET(0x004d953c); r_esp += 4; return;
L_004d954b:; BB(0x004d954b);
    /* 004d954b: mov eax, 1 */ r_eax = 0x1u;
    /* 004d9550: ret  */ FN_RET(0x004d953c); r_esp += 4; return;
}

void f_004d9554(void) /* sub_4D9554 */
{
    FN_ENTER(0x004d9554);
    /* 004d9554: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004d9558: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9559: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d955a: mov ebx, eax */ r_ebx = r_eax;
    /* 004d955c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d955e: je 0x4d956b */ if (fZ) goto L_004d956b;
L_004d9560:; BB(0x004d9560);
    /* 004d9560: mov eax, ebx */ r_eax = r_ebx;
    /* 004d9562: call 0x4d953c */ r_esp -= 4; W32(r_esp, 0x4d9567u); f_004d953c();
    /* 004d9567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9569: je 0x4d9570 */ if (fZ) goto L_004d9570;
L_004d956b:; BB(0x004d956b);
    /* 004d956b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d956d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d956e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d956f: ret  */ FN_RET(0x004d9554); r_esp += 4; return;
L_004d9570:; BB(0x004d9570);
    /* 004d9570: mov eax, ebx */ r_eax = r_ebx;
    /* 004d9572: call 0x4d9580 */ r_esp -= 4; W32(r_esp, 0x4d9577u); f_004d9580();
    /* 004d9577: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9578: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9579: ret  */ FN_RET(0x004d9554); r_esp += 4; return;
}

void f_004d9558(void) /* sub_4D9558 */
{
    FN_ENTER(0x004d9558);
    /* 004d9558: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9559: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d955a: mov ebx, eax */ r_ebx = r_eax;
    /* 004d955c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d955e: je 0x4d956b */ if (fZ) goto L_004d956b;
L_004d9560:; BB(0x004d9560);
    /* 004d9560: mov eax, ebx */ r_eax = r_ebx;
    /* 004d9562: call 0x4d953c */ r_esp -= 4; W32(r_esp, 0x4d9567u); f_004d953c();
    /* 004d9567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9569: je 0x4d9570 */ if (fZ) goto L_004d9570;
L_004d956b:; BB(0x004d956b);
    /* 004d956b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d956d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d956e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d956f: ret  */ FN_RET(0x004d9558); r_esp += 4; return;
L_004d9570:; BB(0x004d9570);
    /* 004d9570: mov eax, ebx */ r_eax = r_ebx;
    /* 004d9572: call 0x4d9580 */ r_esp -= 4; W32(r_esp, 0x4d9577u); f_004d9580();
    /* 004d9577: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9578: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9579: ret  */ FN_RET(0x004d9558); r_esp += 4; return;
}

void f_004d9580(void) /* sub_4D9580 */
{
    FN_ENTER(0x004d9580);
    /* 004d9580: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9581: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9582: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9583: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d9586: mov ecx, eax */ r_ecx = r_eax;
    /* 004d9588: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d958a: mov edi, eax */ r_edi = r_eax;
    /* 004d958c: mov esi, ecx */ r_esi = r_ecx;
L_004d958e:; BB(0x004d958e);
    /* 004d958e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4d9593u); f_008587a5();
    /* 004d9593: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d9596: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d9599: fdiv dword ptr [0x9098e8] */ ST(0) = ST(0) / R_F32((u32)(0x9098e8u));
    /* 004d959f: fmul dword ptr [0x9098ec] */ ST(0) = ST(0) * R_F32((u32)(0x9098ecu));
    /* 004d95a5: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004d95a9: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004d95ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d95b3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d95b7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d95bb: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d95bf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004d95c3: movzx ebp, word ptr [esp + 0x18] */ r_ebp = (u32)R16((u32)(r_esp+0x18u));
    /* 004d95c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d95c9: call 0x4da2e8 */ r_esp -= 4; W32(r_esp, 0x4d95ceu); f_004da2e8();
    /* 004d95ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d95cf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d95d2: jl 0x4d95d9 */ if ((fS!=fO)) goto L_004d95d9;
L_004d95d4:; BB(0x004d95d4);
    /* 004d95d4: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d95d7: jle 0x4d95fd */ if ((fZ||fS!=fO)) goto L_004d95fd;
L_004d95d9:; BB(0x004d95d9);
    /* 004d95d9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d95dc: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d95df: jl 0x4d958e */ if ((fS!=fO)) goto L_004d958e;
L_004d95e1:; BB(0x004d95e1);
    /* 004d95e1: mov ecx, esi */ r_ecx = r_esi;
    /* 004d95e3: mov eax, 0x3938 */ r_eax = 0x3938u;
L_004d95e8:; BB(0x004d95e8);
    /* 004d95e8: mov edx, eax */ r_edx = r_eax;
    /* 004d95ea: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004d95ed: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 004d95f0: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d95f2: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004d95f4: mov eax, edx */ r_eax = r_edx;
    /* 004d95f6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d95f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d95fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d95fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d95fc: ret  */ FN_RET(0x004d9580); r_esp += 4; return;
L_004d95fd:; BB(0x004d95fd);
    /* 004d95fd: mov eax, ebp */ r_eax = r_ebp;
    /* 004d95ff: mov ecx, esi */ r_ecx = r_esi;
    /* 004d9601: jmp 0x4d95e8 */ goto L_004d95e8;
}

void f_004d9604(void) /* sub_4D9604 */
{
    FN_ENTER(0x004d9604);
    /* 004d9604: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004d9608: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d960a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d960c: jne 0x4d9613 */ if (!fZ) goto L_004d9613;
L_004d960e:; BB(0x004d960e);
    /* 004d960e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9610: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9612: ret  */ FN_RET(0x004d9604); r_esp += 4; return;
L_004d9613:; BB(0x004d9613);
    /* 004d9613: call 0x4d9634 */ r_esp -= 4; W32(r_esp, 0x4d9618u); f_004d9634();
    /* 004d9618: mov ebp, eax */ r_ebp = r_eax;
    /* 004d961a: mov eax, ebp */ r_eax = r_ebp;
    /* 004d961c: call 0x4d953c */ r_esp -= 4; W32(r_esp, 0x4d9621u); f_004d953c();
    /* 004d9621: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9623: je 0x4d962a */ if (fZ) goto L_004d962a;
L_004d9625:; BB(0x004d9625);
    /* 004d9625: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9627: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9628: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9629: ret  */ FN_RET(0x004d9604); r_esp += 4; return;
L_004d962a:; BB(0x004d962a);
    /* 004d962a: mov eax, ebp */ r_eax = r_ebp;
    /* 004d962c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d962d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d962e: ret  */ FN_RET(0x004d9604); r_esp += 4; return;
}

void f_004d9608(void)
{
    FN_ENTER(0x004d9608);
    /* 004d9608: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d960a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d960c: jne 0x4d9613 */ if (!fZ) goto L_004d9613;
L_004d960e:; BB(0x004d960e);
    /* 004d960e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9610: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9612: ret  */ FN_RET(0x004d9608); r_esp += 4; return;
L_004d9613:; BB(0x004d9613);
    /* 004d9613: call 0x4d9634 */ r_esp -= 4; W32(r_esp, 0x4d9618u); f_004d9634();
    /* 004d9618: mov ebp, eax */ r_ebp = r_eax;
    /* 004d961a: mov eax, ebp */ r_eax = r_ebp;
    /* 004d961c: call 0x4d953c */ r_esp -= 4; W32(r_esp, 0x4d9621u); f_004d953c();
    /* 004d9621: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9623: je 0x4d962a */ if (fZ) goto L_004d962a;
L_004d9625:; BB(0x004d9625);
    /* 004d9625: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9627: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9628: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9629: ret  */ FN_RET(0x004d9608); r_esp += 4; return;
L_004d962a:; BB(0x004d962a);
    /* 004d962a: mov eax, ebp */ r_eax = r_ebp;
    /* 004d962c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d962d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d962e: ret  */ FN_RET(0x004d9608); r_esp += 4; return;
}

void f_004d961d(void)
{
    FN_ENTER(0x004d961d);
    /* 004d961d: sbb edi, edi */ { u32 c = fC; u32 a = r_edi; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    UNSUP(0x004d961f, "falls out of decoded code");
}

void f_004d9634(void) /* sub_4D9634 */
{
    FN_ENTER(0x004d9634);
    /* 004d9634: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9635: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9636: mov esi, eax */ r_esi = r_eax;
    /* 004d9638: mov edx, esi */ r_edx = r_esi;
    /* 004d963a: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004d963d: movzx ebp, dx */ r_ebp = (u32)(u16)r_edx;
    /* 004d9640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9641: call 0x4da2e8 */ r_esp -= 4; W32(r_esp, 0x4d9646u); f_004da2e8();
    /* 004d9646: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9647: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d964a: jl 0x4d9659 */ if ((fS!=fO)) goto L_004d9659;
L_004d964c:; BB(0x004d964c);
    /* 004d964c: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d964f: jg 0x4d9659 */ if ((!fZ&&fS==fO)) goto L_004d9659;
L_004d9651:; BB(0x004d9651);
    /* 004d9651: xor ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9653: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 004d9656: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9657: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d9658: ret  */ FN_RET(0x004d9634); r_esp += 4; return;
L_004d9659:; BB(0x004d9659);
    /* 004d9659: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d965e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d965f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d9660: ret  */ FN_RET(0x004d9634); r_esp += 4; return;
}

void f_004d9664(void) /* sub_4D9664 */
{
    FN_ENTER(0x004d9664);
    /* 004d9664: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004d9668: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9669: call 0x4d9634 */ r_esp -= 4; W32(r_esp, 0x4d966eu); f_004d9634();
    /* 004d966e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d9670: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9672: jge 0x4d9676 */ if ((fS==fO)) goto L_004d9676;
L_004d9674:; BB(0x004d9674);
    /* 004d9674: mov eax, edx */ r_eax = r_edx;
L_004d9676:; BB(0x004d9676);
    /* 004d9676: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9677: ret  */ FN_RET(0x004d9664); r_esp += 4; return;
}

void f_004d9668(void)
{
    FN_ENTER(0x004d9668);
    /* 004d9668: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9669: call 0x4d9634 */ r_esp -= 4; W32(r_esp, 0x4d966eu); f_004d9634();
    /* 004d966e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d9670: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9672: jge 0x4d9676 */ if ((fS==fO)) goto L_004d9676;
L_004d9674:; BB(0x004d9674);
    /* 004d9674: mov eax, edx */ r_eax = r_edx;
L_004d9676:; BB(0x004d9676);
    /* 004d9676: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9677: ret  */ FN_RET(0x004d9668); r_esp += 4; return;
}

void f_004d9678(void) /* sub_4D9678 */
{
    FN_ENTER(0x004d9678);
    /* 004d9678: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9679: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d967c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d967e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4d9683u); f_006dc358();
    /* 004d9683: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9686: jne 0x4d968d */ if (!fZ) goto L_004d968d;
L_004d9688:; BB(0x004d9688);
    /* 004d9688: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d968b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d968c: ret  */ FN_RET(0x004d9678); r_esp += 4; return;
L_004d968d:; BB(0x004d968d);
    /* 004d968d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004d9690: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 004d9694: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004d9698: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d969a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d969c: mov edi, ebp */ r_edi = r_ebp;
    /* 004d969e: mov ebp, eax */ r_ebp = r_eax;
    /* 004d96a0: mov esi, edx */ r_esi = r_edx;
L_004d96a2:; BB(0x004d96a2);
    /* 004d96a2: cmp esi, dword ptr [0xa9c4f4] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d96a8: je 0x4d96d1 */ if (fZ) goto L_004d96d1;
L_004d96aa:; BB(0x004d96aa);
    /* 004d96aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d96ab: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004d96ae: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d96b0: lea ebx, [ebx + ebx*8] */ r_ebx = (u32)(r_ebx+r_ebx*8);
    /* 004d96b3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d96b8u); f_0068d5a8();
    /* 004d96b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d96b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d96bb: je 0x4d974c */ if (fZ) goto L_004d974c;
L_004d96c1:; BB(0x004d96c1);
    /* 004d96c1: mov ebx, dword ptr [ebx + ebx*8 + 0xa48fdc] */ r_ebx = R32((u32)(r_ebx+r_ebx*8+0xa48fdcu));
    /* 004d96c8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d96ca: jne 0x4d96d1 */ if (!fZ) goto L_004d96d1;
L_004d96cc:; BB(0x004d96cc);
    /* 004d96cc: mov ebp, 1 */ r_ebp = 0x1u;
L_004d96d1:; BB(0x004d96d1);
    /* 004d96d1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d96d4: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d96d7: jl 0x4d96a2 */ if ((fS!=fO)) goto L_004d96a2;
L_004d96d9:; BB(0x004d96d9);
    /* 004d96d9: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004d96dc: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 004d96e0: mov eax, ebp */ r_eax = r_ebp;
    /* 004d96e2: mov ebp, edi */ r_ebp = r_edi;
    /* 004d96e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d96e6: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 004d96ea: je 0x4d9726 */ if (fZ) goto L_004d9726;
L_004d96ec:; BB(0x004d96ec);
    /* 004d96ec: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 004d96ef: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d96f2: mov dword ptr [ebp + 0x24], ecx */ W32((u32)(r_ebp+0x24u), r_ecx);
    /* 004d96f5: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 004d96fa: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004d96fc: mov eax, ecx */ r_eax = r_ecx;
    /* 004d96fe: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004d9701: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d9703: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004d9706: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d9708: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d970b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d970d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d970f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d9711: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d9713: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d9715: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d9717: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004d9719: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d971b: jne 0x4d972d */ if (!fZ) goto L_004d972d;
L_004d971d:; BB(0x004d971d);
    /* 004d971d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d971f: call 0x4db968 */ r_esp -= 4; W32(r_esp, 0x4d9724u); f_004db968();
    /* 004d9724: jmp 0x4d972d */ goto L_004d972d;
L_004d9726:; BB(0x004d9726);
    /* 004d9726: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
L_004d972d:; BB(0x004d972d);
    /* 004d972d: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004d9730: mov eax, dword ptr [eax*4 + 0x9b06a0] */ r_eax = R32((u32)(r_eax*4+0x9b06a0u));
    /* 004d9737: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9739: je 0x4d9688 */ if (fZ) goto L_004d9688;
L_004d973f:; BB(0x004d973f);
    /* 004d973f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d9741: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4d9743u); call_ind(t); }
    /* 004d9743: add dword ptr [ebp + 0x20], 1 */ { u32 ad = (u32)(r_ebp+0x20u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004d9747: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d974a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d974b: ret  */ FN_RET(0x004d9678); r_esp += 4; return;
L_004d974c:; BB(0x004d974c);
    /* 004d974c: mov eax, dword ptr [ebx + ebx*8 + 0xa48fdc] */ r_eax = R32((u32)(r_ebx+r_ebx*8+0xa48fdcu));
    /* 004d9753: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9755: je 0x4d96d1 */ if (fZ) goto L_004d96d1;
L_004d975b:; BB(0x004d975b);
    /* 004d975b: mov dword ptr [ebx + ebx*8 + 0xa48fdc], 0 */ W32((u32)(r_ebx+r_ebx*8+0xa48fdcu), 0x0u);
    /* 004d9766: jmp 0x4d96d1 */ goto L_004d96d1;
}

void f_004d976c(void) /* sub_4D976C */
{
    FN_ENTER(0x004d976c);
    /* 004d976c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d976d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d976f: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x4d9774u); f_007a61a4();
    /* 004d9774: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9777: jne 0x4d9782 */ if (!fZ) goto L_004d9782;
L_004d9779:; BB(0x004d9779);
    /* 004d9779: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x4d977eu); f_0080a640();
    /* 004d977e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9780: jne 0x4d97a2 */ if (!fZ) goto L_004d97a2;
L_004d9782:; BB(0x004d9782);
    /* 004d9782: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9788: call 0x4dd914 */ r_esp -= 4; W32(r_esp, 0x4d978du); f_004dd914();
    /* 004d978d: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9793: call 0x4d89e4 */ r_esp -= 4; W32(r_esp, 0x4d9798u); f_004d89e4();
    /* 004d9798: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d979b: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
L_004d97a2:; BB(0x004d97a2);
    /* 004d97a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d97a3: ret  */ FN_RET(0x004d976c); r_esp += 4; return;
}

void f_004d97a4(void) /* sub_4D97A4 */
{
    FN_ENTER(0x004d97a4);
    /* 004d97a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d97a5: mov esi, ecx */ r_esi = r_ecx;
    /* 004d97a7: mov ecx, esi */ r_ecx = r_esi;
    /* 004d97a9: call 0x4d97e8 */ r_esp -= 4; W32(r_esp, 0x4d97aeu); f_004d97e8();
    /* 004d97ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d97b0: je 0x4d97b4 */ if (fZ) goto L_004d97b4;
L_004d97b2:; BB(0x004d97b2);
    /* 004d97b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d97b3: ret  */ FN_RET(0x004d97a4); r_esp += 4; return;
L_004d97b4:; BB(0x004d97b4);
    /* 004d97b4: mov ecx, esi */ r_ecx = r_esi;
    /* 004d97b6: call 0x4d9848 */ r_esp -= 4; W32(r_esp, 0x4d97bbu); f_004d9848();
    /* 004d97bb: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 004d97c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d97c2: je 0x4d97b2 */ if (fZ) goto L_004d97b2;
L_004d97c4:; BB(0x004d97c4);
    /* 004d97c4: call 0x6c2f54 */ r_esp -= 4; W32(r_esp, 0x4d97c9u); f_006c2f54();
    /* 004d97c9: mov ecx, esi */ r_ecx = r_esi;
    /* 004d97cb: call 0x4dc970 */ r_esp -= 4; W32(r_esp, 0x4d97d0u); f_004dc970();
    /* 004d97d0: call 0x73c250 */ r_esp -= 4; W32(r_esp, 0x4d97d5u); f_0073c250();
    /* 004d97d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d97d6: call 0x4df5f8 */ r_esp -= 4; W32(r_esp, 0x4d97dbu); f_004df5f8();
    /* 004d97db: mov dword ptr [esi + 0x1c], 2 */ W32((u32)(r_esi+0x1cu), 0x2u);
    /* 004d97e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d97e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d97e4: ret  */ FN_RET(0x004d97a4); r_esp += 4; return;
}

void f_004d97e8(void) /* sub_4D97E8 */
{
    FN_ENTER(0x004d97e8);
    /* 004d97e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d97e9: mov edi, ecx */ r_edi = r_ecx;
    /* 004d97eb: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x4d97f0u); f_007a61a4();
    /* 004d97f0: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d97f3: jne 0x4d9817 */ if (!fZ) goto L_004d9817;
L_004d97f5:; BB(0x004d97f5);
    /* 004d97f5: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x4d97fau); f_0080a640();
    /* 004d97fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d97fc: jne 0x4d9802 */ if (!fZ) goto L_004d9802;
L_004d97fe:; BB(0x004d97fe);
    /* 004d97fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9800: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d9801: ret  */ FN_RET(0x004d97e8); r_esp += 4; return;
L_004d9802:; BB(0x004d9802);
    /* 004d9802: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 004d9806: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d980c: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 004d9810: mov eax, 1 */ r_eax = 0x1u;
    /* 004d9815: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d9816: ret  */ FN_RET(0x004d97e8); r_esp += 4; return;
L_004d9817:; BB(0x004d9817);
    /* 004d9817: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d981a: jne 0x4d9831 */ if (!fZ) goto L_004d9831;
L_004d981c:; BB(0x004d981c);
    /* 004d981c: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 004d9820: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9826: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 004d982a: mov eax, 1 */ r_eax = 0x1u;
    /* 004d982f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d9830: ret  */ FN_RET(0x004d97e8); r_esp += 4; return;
L_004d9831:; BB(0x004d9831);
    /* 004d9831: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 004d9835: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d983b: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 004d983f: mov eax, 1 */ r_eax = 0x1u;
    /* 004d9844: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d9845: ret  */ FN_RET(0x004d97e8); r_esp += 4; return;
}

void f_004d9848(void) /* sub_4D9848 */
{
    FN_ENTER(0x004d9848);
    /* 004d9848: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9849: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d984a: mov edi, ecx */ r_edi = r_ecx;
    /* 004d984c: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 004d9851: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d9857: mov ebp, 0 */ r_ebp = 0x0u;
    /* 004d985c: je 0x4d9861 */ if (fZ) goto L_004d9861;
L_004d985e:; BB(0x004d985e);
    /* 004d985e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d985f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d9860: ret  */ FN_RET(0x004d9848); r_esp += 4; return;
L_004d9861:; BB(0x004d9861);
    /* 004d9861: call 0x6d0584 */ r_esp -= 4; W32(r_esp, 0x4d9866u); f_006d0584();
    /* 004d9866: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9869: jne 0x4d9884 */ if (!fZ) goto L_004d9884;
L_004d986b:; BB(0x004d986b);
    /* 004d986b: call 0x6cb310 */ r_esp -= 4; W32(r_esp, 0x4d9870u); f_006cb310();
    /* 004d9870: mov ebp, 1 */ r_ebp = 0x1u;
    /* 004d9875: cmp eax, 0x33 */ {  u32 a = r_eax; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9878: jl 0x4d98a4 */ if ((fS!=fO)) goto L_004d98a4;
L_004d987a:; BB(0x004d987a);
    /* 004d987a: cmp eax, 0x3b */ {  u32 a = r_eax; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d987d: jg 0x4d98a4 */ if ((!fZ&&fS==fO)) goto L_004d98a4;
L_004d987f:; BB(0x004d987f);
    /* 004d987f: lea ebp, [eax - 0x30] */ r_ebp = (u32)(r_eax+0xffffffd0u);
    /* 004d9882: jmp 0x4d98a0 */ goto L_004d98a0;
L_004d9884:; BB(0x004d9884);
    /* 004d9884: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9887: jne 0x4d98b2 */ if (!fZ) goto L_004d98b2;
L_004d9889:; BB(0x004d9889);
    /* 004d9889: call 0x6cb310 */ r_esp -= 4; W32(r_esp, 0x4d988eu); f_006cb310();
    /* 004d988e: mov ebp, 2 */ r_ebp = 0x2u;
    /* 004d9893: cmp eax, 0x3d */ {  u32 a = r_eax; u32 b = 0x3du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9896: jl 0x4d98a4 */ if ((fS!=fO)) goto L_004d98a4;
L_004d9898:; BB(0x004d9898);
    /* 004d9898: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d989b: jg 0x4d98a4 */ if ((!fZ&&fS==fO)) goto L_004d98a4;
L_004d989d:; BB(0x004d989d);
    /* 004d989d: lea ebp, [eax - 0x31] */ r_ebp = (u32)(r_eax+0xffffffcfu);
L_004d98a0:; BB(0x004d98a0);
    /* 004d98a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d98a2: je 0x4d98b2 */ if (fZ) goto L_004d98b2;
L_004d98a4:; BB(0x004d98a4);
    /* 004d98a4: mov dword ptr [edi + 0x2c], 0x1e */ W32((u32)(r_edi+0x2cu), 0x1eu);
    /* 004d98ab: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 004d98b0: jmp 0x4d98bf */ goto L_004d98bf;
L_004d98b2:; BB(0x004d98b2);
    /* 004d98b2: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 004d98b5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d98b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004d98ba: jl 0x4d98da */ if ((fS!=fO)) goto L_004d98da;
L_004d98bc:; BB(0x004d98bc);
    /* 004d98bc: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
L_004d98bf:; BB(0x004d98bf);
    /* 004d98bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d98c1: jle 0x4d98c7 */ if ((fZ||fS!=fO)) goto L_004d98c7;
L_004d98c3:; BB(0x004d98c3);
    /* 004d98c3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d98c5: je 0x4d98d7 */ if (fZ) goto L_004d98d7;
L_004d98c7:; BB(0x004d98c7);
    /* 004d98c7: cmp ebp, dword ptr [0xa48c28] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa48c28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d98cd: je 0x4d98d7 */ if (fZ) goto L_004d98d7;
L_004d98cf:; BB(0x004d98cf);
    /* 004d98cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d98d0: mov ecx, edi */ r_ecx = r_edi;
    /* 004d98d2: call 0x4db990 */ r_esp -= 4; W32(r_esp, 0x4d98d7u); f_004db990();
L_004d98d7:; BB(0x004d98d7);
    /* 004d98d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d98d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d98d9: ret  */ FN_RET(0x004d9848); r_esp += 4; return;
L_004d98da:; BB(0x004d98da);
    /* 004d98da: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
    /* 004d98e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d98e3: jmp 0x4d98bf */ goto L_004d98bf;
}

void f_004d98e8(void) /* sub_4D98E8 */
{
    FN_ENTER(0x004d98e8);
    /* 004d98e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d98e9: mov esi, ecx */ r_esi = r_ecx;
    /* 004d98eb: mov ecx, esi */ r_ecx = r_esi;
    /* 004d98ed: call 0x4d97e8 */ r_esp -= 4; W32(r_esp, 0x4d98f2u); f_004d97e8();
    /* 004d98f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d98f4: je 0x4d98f8 */ if (fZ) goto L_004d98f8;
L_004d98f6:; BB(0x004d98f6);
    /* 004d98f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d98f7: ret  */ FN_RET(0x004d98e8); r_esp += 4; return;
L_004d98f8:; BB(0x004d98f8);
    /* 004d98f8: mov ecx, esi */ r_ecx = r_esi;
    /* 004d98fa: call 0x4d9908 */ r_esp -= 4; W32(r_esp, 0x4d98ffu); f_004d9908();
    /* 004d98ff: mov ecx, esi */ r_ecx = r_esi;
    /* 004d9901: call 0x4d9a60 */ r_esp -= 4; W32(r_esp, 0x4d9906u); f_004d9a60();
    /* 004d9906: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d9907: ret  */ FN_RET(0x004d98e8); r_esp += 4; return;
}

void f_004d9908(void) /* sub_4D9908 */
{
    FN_ENTER(0x004d9908);
    /* 004d9908: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9909: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d990a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d990c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4d9911u); f_00807ac0();
    /* 004d9911: mov ebx, eax */ r_ebx = r_eax;
    /* 004d9913: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x4d9918u); f_00807e10();
    /* 004d9918: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d991a: je 0x4d9954 */ if (fZ) goto L_004d9954;
L_004d991c:; BB(0x004d991c);
    /* 004d991c: mov eax, dword ptr [0xa48be8] */ r_eax = R32((u32)(0xa48be8u));
    /* 004d9921: mov dword ptr [0xa48be8], 0xffffffff */ W32((u32)(0xa48be8u), 0xffffffffu);
    /* 004d992b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d992e: je 0x4d9951 */ if (fZ) goto L_004d9951;
L_004d9930:; BB(0x004d9930);
    /* 004d9930: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9936: call 0x4dd914 */ r_esp -= 4; W32(r_esp, 0x4d993bu); f_004dd914();
    /* 004d993b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d993c: mov eax, dword ptr [0xa48c00] */ r_eax = R32((u32)(0xa48c00u));
    /* 004d9941: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9943: jne 0x4d9951 */ if (!fZ) goto L_004d9951;
L_004d9945:; BB(0x004d9945);
    /* 004d9945: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d994b: call 0x4ddba8 */ r_esp -= 4; W32(r_esp, 0x4d9950u); f_004ddba8();
    /* 004d9950: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004d9951:; BB(0x004d9951);
    /* 004d9951: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9952: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9953: ret  */ FN_RET(0x004d9908); r_esp += 4; return;
L_004d9954:; BB(0x004d9954);
    /* 004d9954: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x4d9959u); f_0080a640();
    /* 004d9959: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d995b: jne 0x4d9990 */ if (!fZ) goto L_004d9990;
L_004d995d:; BB(0x004d995d);
    /* 004d995d: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9960: jl 0x4d9974 */ if ((fS!=fO)) goto L_004d9974;
L_004d9962:; BB(0x004d9962);
    /* 004d9962: cmp ebx, 0x11 */ {  u32 a = r_ebx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d9965: jg 0x4d9974 */ if ((!fZ&&fS==fO)) goto L_004d9974;
L_004d9967:; BB(0x004d9967);
    /* 004d9967: mov dword ptr [0xa48be8], 0xffffffff */ W32((u32)(0xa48be8u), 0xffffffffu);
    /* 004d9971: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9972: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9973: ret  */ FN_RET(0x004d9908); r_esp += 4; return;
L_004d9974:; BB(0x004d9974);
    /* 004d9974: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 004d9979: cmp eax, dword ptr [0xa48be8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa48be8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d997f: je 0x4d998d */ if (fZ) goto L_004d998d;
L_004d9981:; BB(0x004d9981);
    /* 004d9981: mov dword ptr [0xa48be8], eax */ W32((u32)(0xa48be8u), r_eax);
    /* 004d9986: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d9988: call 0x4d99a0 */ r_esp -= 4; W32(r_esp, 0x4d998du); f_004d99a0();
L_004d998d:; BB(0x004d998d);
    /* 004d998d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d998e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d998f: ret  */ FN_RET(0x004d9908); r_esp += 4; return;
L_004d9990:; BB(0x004d9990);
    /* 004d9990: mov dword ptr [0xa48be8], 0xffffffff */ W32((u32)(0xa48be8u), 0xffffffffu);
    /* 004d999a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d999b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d999c: ret  */ FN_RET(0x004d9908); r_esp += 4; return;
}

void f_004d99a0(void) /* sub_4D99A0 */
{
    FN_ENTER(0x004d99a0);
    /* 004d99a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d99a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d99a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d99a3: call 0x4def68 */ r_esp -= 4; W32(r_esp, 0x4d99a8u); f_004def68();
    /* 004d99a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d99aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d99ac: mov ebx, eax */ r_ebx = r_eax;
    /* 004d99ae: mov esi, edx */ r_esi = r_edx;
L_004d99b0:; BB(0x004d99b0);
    /* 004d99b0: mov ecx, dword ptr [ebx + 0xa48fdc] */ r_ecx = R32((u32)(r_ebx+0xa48fdcu));
    /* 004d99b6: lea edi, [ebx + 0xa49040] */ r_edi = (u32)(r_ebx+0xa49040u);
    /* 004d99bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d99be: je 0x4d9a1e */ if (fZ) goto L_004d9a1e;
L_004d99c0:; BB(0x004d99c0);
    /* 004d99c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d99c1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d99c6u); f_0068d5a8();
    /* 004d99c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d99c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d99c9: je 0x4d9a1e */ if (fZ) goto L_004d9a1e;
L_004d99cb:; BB(0x004d99cb);
    /* 004d99cb: movsx ecx, word ptr [ebx + 0xa49044] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xa49044u));
    /* 004d99d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d99d4: jle 0x4d9a1e */ if ((fZ||fS!=fO)) goto L_004d9a1e;
L_004d99d6:; BB(0x004d99d6);
    /* 004d99d6: mov ecx, dword ptr [0xaafdb8] */ r_ecx = R32((u32)(0xaafdb8u));
    /* 004d99dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d99de: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d99e1: jne 0x4d99e8 */ if (!fZ) goto L_004d99e8;
L_004d99e3:; BB(0x004d99e3);
    /* 004d99e3: mov eax, 1 */ r_eax = 0x1u;
L_004d99e8:; BB(0x004d99e8);
    /* 004d99e8: cmp al, byte ptr [ebx + 0xa49040] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebx+0xa49040u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004d99ee: jne 0x4d9a1e */ if (!fZ) goto L_004d9a1e;
L_004d99f0:; BB(0x004d99f0);
    /* 004d99f0: movsx ecx, byte ptr [ebx + 0xa49041] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0xa49041u));
    /* 004d99f7: cmp ecx, dword ptr [0xa48be0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa48be0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d99fd: jne 0x4d9a1e */ if (!fZ) goto L_004d9a1e;
L_004d99ff:; BB(0x004d99ff);
    /* 004d99ff: movsx ecx, byte ptr [ebx + 0xa49042] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0xa49042u));
    /* 004d9a06: cmp ecx, dword ptr [0xa48be8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa48be8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9a0c: jne 0x4d9a1e */ if (!fZ) goto L_004d9a1e;
L_004d9a0e:; BB(0x004d9a0e);
    /* 004d9a0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9a0f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9a10: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9a16: call 0x4ded80 */ r_esp -= 4; W32(r_esp, 0x4d9a1bu); f_004ded80();
    /* 004d9a1b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004d9a1e:; BB(0x004d9a1e);
    /* 004d9a1e: add ebx, 0x144 */ {  u32 a = r_ebx; u32 b = 0x144u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d9a24: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d9a27: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9a2a: jl 0x4d99b0 */ if ((fS!=fO)) goto L_004d99b0;
L_004d9a2c:; BB(0x004d9a2c);
    /* 004d9a2c: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9a32: call 0x4ddba8 */ r_esp -= 4; W32(r_esp, 0x4d9a37u); f_004ddba8();
    /* 004d9a37: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9a3d: call 0x4dceec */ r_esp -= 4; W32(r_esp, 0x4d9a42u); f_004dceec();
    /* 004d9a42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d9a45: mov eax, dword ptr [0xa48c10] */ r_eax = R32((u32)(0xa48c10u));
    /* 004d9a4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9a4c: jne 0x4d9a5a */ if (!fZ) goto L_004d9a5a;
L_004d9a4e:; BB(0x004d9a4e);
    /* 004d9a4e: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9a54: call 0x4dd7b4 */ r_esp -= 4; W32(r_esp, 0x4d9a59u); f_004dd7b4();
    /* 004d9a59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004d9a5a:; BB(0x004d9a5a);
    /* 004d9a5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9a5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d9a5c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d9a5d: ret  */ FN_RET(0x004d99a0); r_esp += 4; return;
}

void f_004d9a60(void) /* sub_4D9A60 */
{
    FN_ENTER(0x004d9a60);
    /* 004d9a60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9a61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9a62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9a63: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9a64: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d9a6a: mov esi, ecx */ r_esi = r_ecx;
    /* 004d9a6c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9a72: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d9a77u); f_0068d5a8();
    /* 004d9a77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9a78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9a7a: je 0x4d9d07 */ if (fZ) goto L_004d9d07;
L_004d9a80:; BB(0x004d9a80);
    /* 004d9a80: mov ecx, eax */ r_ecx = r_eax;
    /* 004d9a82: call 0x6926bc */ r_esp -= 4; W32(r_esp, 0x4d9a87u); f_006926bc();
    /* 004d9a87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9a89: je 0x4d9cc8 */ if (fZ) goto L_004d9cc8;
L_004d9a8f:; BB(0x004d9a8f);
    /* 004d9a8f: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 004d9a92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9a94: je 0x4d9cc1 */ if (fZ) goto L_004d9cc1;
L_004d9a9a:; BB(0x004d9a9a);
    /* 004d9a9a: mov eax, dword ptr [0xa48c14] */ r_eax = R32((u32)(0xa48c14u));
    /* 004d9a9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9aa1: jne 0x4d9cc1 */ if (!fZ) goto L_004d9cc1;
L_004d9aa7:; BB(0x004d9aa7);
    /* 004d9aa7: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9aac: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4d9ab1u); f_006c1bd4();
    /* 004d9ab1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9ab2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9ab4: je 0x4d9cb0 */ if (fZ) goto L_004d9cb0;
L_004d9aba:; BB(0x004d9aba);
    /* 004d9aba: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9abf: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4d9ac4u); f_006c1bd4();
    /* 004d9ac4: mov ebp, eax */ r_ebp = r_eax;
    /* 004d9ac6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9acc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d9ad1u); f_0068d5a8();
    /* 004d9ad1: mov ebx, eax */ r_ebx = r_eax;
    /* 004d9ad3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d9ad6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9ad8: je 0x4d9cb0 */ if (fZ) goto L_004d9cb0;
L_004d9ade:; BB(0x004d9ade);
    /* 004d9ade: mov edi, dword ptr [0xaafdb8] */ r_edi = R32((u32)(0xaafdb8u));
    /* 004d9ae4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d9ae6: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9ae9: jne 0x4d9af0 */ if (!fZ) goto L_004d9af0;
L_004d9aeb:; BB(0x004d9aeb);
    /* 004d9aeb: mov edx, 1 */ r_edx = 0x1u;
L_004d9af0:; BB(0x004d9af0);
    /* 004d9af0: movsx edi, word ptr [ebp + 0x2840] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2840u));
    /* 004d9af7: mov byte ptr [ebp + 0x283c], dl */ W8((u32)(r_ebp+0x283cu), (u8)r_edx);
    /* 004d9afd: mov edx, dword ptr [0xa48be0] */ r_edx = R32((u32)(0xa48be0u));
    /* 004d9b03: mov byte ptr [ebp + 0x283d], dl */ W8((u32)(r_ebp+0x283du), (u8)r_edx);
    /* 004d9b09: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004d9b0b: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 004d9b11: mov byte ptr [ebp + 0x283e], dl */ W8((u32)(r_ebp+0x283eu), (u8)r_edx);
    /* 004d9b17: jge 0x4d9b1e */ if ((fS==fO)) goto L_004d9b1e;
L_004d9b19:; BB(0x004d9b19);
    /* 004d9b19: mov edi, 0x270f */ r_edi = 0x270fu;
L_004d9b1e:; BB(0x004d9b1e);
    /* 004d9b1e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d9b21: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 004d9b24: cmp edx, 0x270f */ {  u32 a = r_edx; u32 b = 0x270fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9b2a: jle 0x4d9b3a */ if ((fZ||fS!=fO)) goto L_004d9b3a;
L_004d9b2c:; BB(0x004d9b2c);
    /* 004d9b2c: mov edx, 0x270f */ r_edx = 0x270fu;
    /* 004d9b31: mov word ptr [ebp + 0x2840], dx */ W16((u32)(r_ebp+0x2840u), (u16)r_edx);
    /* 004d9b38: jmp 0x4d9b41 */ goto L_004d9b41;
L_004d9b3a:; BB(0x004d9b3a);
    /* 004d9b3a: mov word ptr [ebp + 0x2840], di */ W16((u32)(r_ebp+0x2840u), (u16)r_edi);
L_004d9b41:; BB(0x004d9b41);
    /* 004d9b41: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004d9b44: mov dword ptr [ebp + 0x284c], edx */ W32((u32)(r_ebp+0x284cu), r_edx);
    /* 004d9b4a: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 004d9b4d: mov dword ptr [ebp + 0x2850], edi */ W32((u32)(r_ebp+0x2850u), r_edi);
    /* 004d9b53: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004d9b56: mov dword ptr [ebp + 0x2854], edx */ W32((u32)(r_ebp+0x2854u), r_edx);
    /* 004d9b5c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004d9b5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9b60: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x4d9b65u); f_0083ace8();
    /* 004d9b65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9b66: movzx edi, word ptr [esp] */ r_edi = (u32)R16((u32)(r_esp));
    /* 004d9b6a: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 004d9b6f: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004d9b71: mov eax, edi */ r_eax = r_edi;
    /* 004d9b73: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004d9b76: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004d9b79: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d9b7b: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9b7e: je 0x4d9cd3 */ if (fZ) goto L_004d9cd3;
L_004d9b84:; BB(0x004d9b84);
    /* 004d9b84: mov edi, 0xf */ r_edi = 0xfu;
L_004d9b89:; BB(0x004d9b89);
    /* 004d9b89: movzx edx, byte ptr [esp + 2] */ r_edx = (u32)R8((u32)(r_esp+0x2u));
    /* 004d9b8e: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004d9b91: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 004d9b93: movzx edx, byte ptr [esp + 3] */ r_edx = (u32)R8((u32)(r_esp+0x3u));
    /* 004d9b98: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004d9b9b: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 004d9b9d: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 004d9ba2: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004d9ba5: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 004d9ba7: movzx edx, byte ptr [esp + 5] */ r_edx = (u32)R8((u32)(r_esp+0x5u));
    /* 004d9bac: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004d9baf: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 004d9bb1: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004d9bb3: push 0xa49870 */ { u32 v = 0xa49870u; r_esp -= 4; W32(r_esp, v); }
    /* 004d9bb8: mov dword ptr [ebp + 0x2844], edi */ W32((u32)(r_ebp+0x2844u), r_edi);
    /* 004d9bbe: lea edi, [ebp + 0x2858] */ r_edi = (u32)(r_ebp+0x2858u);
    /* 004d9bc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9bc5: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4d9bcau); f_00857dec();
    /* 004d9bca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d9bcd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d9bcf: mov word ptr [ebp + 0x287e], dx */ W16((u32)(r_ebp+0x287eu), (u16)r_edx);
    /* 004d9bd6: lea edi, [ebp + 0x2880] */ r_edi = (u32)(r_ebp+0x2880u);
    /* 004d9bdc: mov word ptr [ebp + 0x2880], dx */ W16((u32)(r_ebp+0x2880u), (u16)r_edx);
    /* 004d9be3: mov edx, dword ptr [0xa9a9a4] */ r_edx = R32((u32)(0xa9a9a4u));
    /* 004d9be9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9beb: je 0x4d9c7d */ if (fZ) goto L_004d9c7d;
L_004d9bf1:; BB(0x004d9bf1);
    /* 004d9bf1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004d9bf5: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9bf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9bf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d9bf9: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4d9bfeu); f_00857dec();
    /* 004d9bfe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d9c00: mov word ptr [esp + 0xd6], dx */ W16((u32)(r_esp+0xd6u), (u16)r_edx);
    /* 004d9c08: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004d9c0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c0d: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x4d9c12u); f_00858009();
    /* 004d9c12: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d9c15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9c17: je 0x4d9c7d */ if (fZ) goto L_004d9c7d;
L_004d9c19:; BB(0x004d9c19);
    /* 004d9c19: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9c1c: jg 0x4d9c37 */ if ((!fZ&&fS==fO)) goto L_004d9c37;
L_004d9c1e:; BB(0x004d9c1e);
    /* 004d9c1e: lea eax, [esp + 0xcc] */ r_eax = (u32)(r_esp+0xccu);
    /* 004d9c25: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004d9c29: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c2d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4d9c32u); f_00857dec();
    /* 004d9c32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d9c35: jmp 0x4d9c62 */ goto L_004d9c62;
L_004d9c37:; BB(0x004d9c37);
    /* 004d9c37: lea edx, [esp + 0xcc] */ r_edx = (u32)(r_esp+0xccu);
    /* 004d9c3e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c40: push 0x909850 */ { u32 v = 0x909850u; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c46: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4d9c4bu); f_00857dec();
    /* 004d9c4b: lea eax, [esp + 0xe0] */ r_eax = (u32)(r_esp+0xe0u);
    /* 004d9c52: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004d9c56: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c5a: call 0x73c270 */ r_esp -= 4; W32(r_esp, 0x4d9c5fu); f_0073c270();
    /* 004d9c5f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004d9c62:; BB(0x004d9c62);
    /* 004d9c62: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d9c64: mov word ptr [esp + 0x10a], dx */ W16((u32)(r_esp+0x10au), (u16)r_edx);
    /* 004d9c6c: lea edx, [esp + 0xcc] */ r_edx = (u32)(r_esp+0xccu);
    /* 004d9c73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c75: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x4d9c7au); f_00857fed();
    /* 004d9c7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004d9c7d:; BB(0x004d9c7d);
    /* 004d9c7d: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 004d9c82: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d9c84: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x4d9c89u); f_007778d8();
    /* 004d9c89: mov edx, eax */ r_edx = r_eax;
    /* 004d9c8b: and edx, 0xf000 */ {  u32 a = r_edx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004d9c91: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9c97: jne 0x4d9caa */ if (!fZ) goto L_004d9caa;
L_004d9c99:; BB(0x004d9c99);
    /* 004d9c99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d9c9a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x4d9c9fu); f_007b4d18();
    /* 004d9c9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9ca0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9ca2: je 0x4d9caa */ if (fZ) goto L_004d9caa;
L_004d9ca4:; BB(0x004d9ca4);
    /* 004d9ca4: mov edi, dword ptr [eax + 0x378] */ r_edi = R32((u32)(r_eax+0x378u));
L_004d9caa:; BB(0x004d9caa);
    /* 004d9caa: mov dword ptr [ebp + 0x2848], edi */ W32((u32)(r_ebp+0x2848u), r_edi);
L_004d9cb0:; BB(0x004d9cb0);
    /* 004d9cb0: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9cb6: call 0x4dbbe8 */ r_esp -= 4; W32(r_esp, 0x4d9cbbu); f_004dbbe8();
    /* 004d9cbb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9cbc: call 0x4db9f0 */ r_esp -= 4; W32(r_esp, 0x4d9cc1u); f_004db9f0();
L_004d9cc1:; BB(0x004d9cc1);
    /* 004d9cc1: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
L_004d9cc8:; BB(0x004d9cc8);
    /* 004d9cc8: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d9cce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9ccf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9cd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d9cd1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d9cd2: ret  */ FN_RET(0x004d9a60); r_esp += 4; return;
L_004d9cd3:; BB(0x004d9cd3);
    /* 004d9cd3: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 004d9cd8: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004d9cda: mov eax, edi */ r_eax = r_edi;
    /* 004d9cdc: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004d9cdf: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004d9ce2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d9ce4: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d9ce7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d9ce9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d9ceb: lea edx, [edx + eax*8] */ r_edx = (u32)(r_edx+r_eax*8);
    /* 004d9cee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d9cf0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d9cf2: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004d9cf4: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9cf7: jle 0x4d9b89 */ if ((fZ||fS!=fO)) goto L_004d9b89;
L_004d9cfd:; BB(0x004d9cfd);
    /* 004d9cfd: mov edi, 0xf */ r_edi = 0xfu;
    /* 004d9d02: jmp 0x4d9b89 */ goto L_004d9b89;
L_004d9d07:; BB(0x004d9d07);
    /* 004d9d07: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 004d9d0e: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d9d14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9d15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9d16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d9d17: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d9d18: ret  */ FN_RET(0x004d9a60); r_esp += 4; return;
}

void f_004d9d1c(void) /* sub_4D9D1C */
{
    FN_ENTER(0x004d9d1c);
    /* 004d9d1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9d1d: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 004d9d21: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9d23: jl 0x4d9d32 */ if ((fS!=fO)) goto L_004d9d32;
L_004d9d25:; BB(0x004d9d25);
    /* 004d9d25: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d9d28: jge 0x4d9d32 */ if ((fS==fO)) goto L_004d9d32;
L_004d9d2a:; BB(0x004d9d2a);
    /* 004d9d2a: cmp ebp, dword ptr [0xa48c28] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa48c28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d9d30: jne 0x4d9d36 */ if (!fZ) goto L_004d9d36;
L_004d9d32:; BB(0x004d9d32);
    /* 004d9d32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9d33: ret 4 */ FN_RET(0x004d9d1c); r_esp += 8; return;
L_004d9d36:; BB(0x004d9d36);
    /* 004d9d36: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9d37: call 0x4dc350 */ r_esp -= 4; W32(r_esp, 0x4d9d3cu); f_004dc350();
    /* 004d9d3c: mov dword ptr [0xa48c28], ebp */ W32((u32)(0xa48c28u), r_ebp);
    /* 004d9d42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9d43: ret 4 */ FN_RET(0x004d9d1c); r_esp += 8; return;
}

void f_004d9d48(void) /* sub_4D9D48 */
{
    FN_ENTER(0x004d9d48);
    /* 004d9d48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9d49: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004d9d4e: mov dword ptr [0xa4950c], 0 */ W32((u32)(0xa4950cu), 0x0u);
    /* 004d9d58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9d5a: je 0x4d9d5e */ if (fZ) goto L_004d9d5e;
L_004d9d5c:; BB(0x004d9d5c);
    /* 004d9d5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9d5d: ret  */ FN_RET(0x004d9d48); r_esp += 4; return;
L_004d9d5e:; BB(0x004d9d5e);
    /* 004d9d5e: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x4d9d63u); f_007a61a4();
    /* 004d9d63: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d9d66: je 0x4d9d74 */ if (fZ) goto L_004d9d74;
L_004d9d68:; BB(0x004d9d68);
    /* 004d9d68: mov dword ptr [0xa49508], 0 */ W32((u32)(0xa49508u), 0x0u);
    /* 004d9d72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9d73: ret  */ FN_RET(0x004d9d48); r_esp += 4; return;
L_004d9d74:; BB(0x004d9d74);
    /* 004d9d74: call 0x4dda50 */ r_esp -= 4; W32(r_esp, 0x4d9d79u); f_004dda50();
    /* 004d9d79: mov eax, dword ptr [0xa49508] */ r_eax = R32((u32)(0xa49508u));
    /* 004d9d7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9d80: jne 0x4d9d84 */ if (!fZ) goto L_004d9d84;
L_004d9d82:; BB(0x004d9d82);
    /* 004d9d82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9d83: ret  */ FN_RET(0x004d9d48); r_esp += 4; return;
L_004d9d84:; BB(0x004d9d84);
    /* 004d9d84: call 0x4d9dac */ r_esp -= 4; W32(r_esp, 0x4d9d89u); f_004d9dac();
    /* 004d9d89: mov dword ptr [0xa4950c], 1 */ W32((u32)(0xa4950cu), 0x1u);
    /* 004d9d93: mov dword ptr [0xa49510], eax */ W32((u32)(0xa49510u), r_eax);
    /* 004d9d98: call 0x4df33c */ r_esp -= 4; W32(r_esp, 0x4d9d9du); f_004df33c();
    /* 004d9d9d: mov eax, 0x9098fc */ r_eax = 0x9098fcu;
    /* 004d9da2: call 0x4d9ed0 */ r_esp -= 4; W32(r_esp, 0x4d9da7u); f_004d9ed0();
    /* 004d9da7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9da8: ret  */ FN_RET(0x004d9d48); r_esp += 4; return;
}

void f_004d9dac(void) /* sub_4D9DAC */
{
    FN_ENTER(0x004d9dac);
    /* 004d9dac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9dad: mov ebp, esp */ r_ebp = r_esp;
    /* 004d9daf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9db1: push 0x8d2168 */ { u32 v = 0x8d2168u; r_esp -= 4; W32(r_esp, v); }
    /* 004d9db6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d9dbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d9dbd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d9dc4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d9dc7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d9dca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d9dcd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d9dd0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d9dd3: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 004d9dd5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d9ddc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d9de1u); f_005caba4();
    /* 004d9de1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9de2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d9de5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9de7: je 0x4d9e1d */ if (fZ) goto L_004d9e1d;
L_004d9de9:; BB(0x004d9de9);
    /* 004d9de9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d9df0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d9df7: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9dfd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d9e00: call 0x4d9e24 */ r_esp -= 4; W32(r_esp, 0x4d9e05u); f_004d9e24();
    /* 004d9e05: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d9e08: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d9e0f:; BB(0x004d9e0f);
    /* 004d9e0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d9e12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d9e19: mov esp, ebp */ r_esp = r_ebp;
    /* 004d9e1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9e1c: ret  */ FN_RET(0x004d9dac); r_esp += 4; return;
L_004d9e1d:; BB(0x004d9e1d);
    /* 004d9e1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9e1f: jmp 0x4d9e0f */ goto L_004d9e0f;
}

void f_004d9e24(void) /* sub_4D9E24 */
{
    FN_ENTER(0x004d9e24);
    /* 004d9e24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9e25: mov ebp, esp */ r_ebp = r_esp;
    /* 004d9e27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9e29: push 0x8d2184 */ { u32 v = 0x8d2184u; r_esp -= 4; W32(r_esp, v); }
    /* 004d9e2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d9e34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d9e35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d9e3c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d9e3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d9e42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d9e45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d9e48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d9e4b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d9e4e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d9e51: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d9e56u); f_008193cc();
    /* 004d9e56: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d9e5d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d9e60: mov dword ptr [edx], 0xafcba0 */ W32((u32)(r_edx), 0xafcba0u);
    /* 004d9e66: mov edi, 0xa48be0 */ r_edi = 0xa48be0u;
    /* 004d9e6b: mov esi, 0x9b06c0 */ r_esi = 0x9b06c0u;
    /* 004d9e70: mov eax, dword ptr [0x9b0fdc] */ r_eax = R32((u32)(0x9b0fdcu));
    /* 004d9e75: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004d9e78: mov ecx, 0x91c */ r_ecx = 0x91cu;
    /* 004d9e7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9e7e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004d9e81: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 004d9e83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9e84: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004d9e87: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 004d9e89: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d9e8c: call 0x4da21c */ r_esp -= 4; W32(r_esp, 0x4d9e91u); f_004da21c();
    /* 004d9e91: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d9e94: call 0x4dbacc */ r_esp -= 4; W32(r_esp, 0x4d9e99u); f_004dbacc();
    /* 004d9e99: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d9e9c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d9e9f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d9ea2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d9ea5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d9ea7: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 004d9eaa: mov dword ptr [eax + 0x28], 1 */ W32((u32)(r_eax+0x28u), 0x1u);
    /* 004d9eb1: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 004d9eb4: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 004d9eb7: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004d9eba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d9ebd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d9ec4: mov esp, ebp */ r_esp = r_ebp;
    /* 004d9ec6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9ec7: ret 4 */ FN_RET(0x004d9e24); r_esp += 8; return;
}

void f_004d9ecc(void) /* sub_4D9ECC */
{
    FN_ENTER(0x004d9ecc);
    /* 004d9ecc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004d9ed0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9ed2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d9ed3: push 0xa48ba0 */ { u32 v = 0xa48ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d9ed8: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4d9eddu); f_00857dec();
    /* 004d9edd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9edf: mov word ptr [0xa48bde], ax */ W16((u32)(0xa48bdeu), (u16)r_eax);
    /* 004d9ee5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d9ee8: ret  */ FN_RET(0x004d9ecc); r_esp += 4; return;
}

void f_004d9ed0(void) /* sub_4D9ED0 */
{
    FN_ENTER(0x004d9ed0);
    /* 004d9ed0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004d9ed2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d9ed3: push 0xa48ba0 */ { u32 v = 0xa48ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d9ed8: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4d9eddu); f_00857dec();
    /* 004d9edd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9edf: mov word ptr [0xa48bde], ax */ W16((u32)(0xa48bdeu), (u16)r_eax);
    /* 004d9ee5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d9ee8: ret  */ FN_RET(0x004d9ed0); r_esp += 4; return;
}

void f_004d9eec(void) /* sub_4D9EEC */
{
    FN_ENTER(0x004d9eec);
    /* 004d9eec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9eed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9eee: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d9ef1: mov edx, 0x20 */ r_edx = 0x20u;
    /* 004d9ef6: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004d9efa: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004d9efe: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004d9f02: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9f05: jg 0x4d9f09 */ if ((!fZ&&fS==fO)) goto L_004d9f09;
L_004d9f07:; BB(0x004d9f07);
    /* 004d9f07: mov edx, eax */ r_edx = r_eax;
L_004d9f09:; BB(0x004d9f09);
    /* 004d9f09: mov eax, 1 */ r_eax = 0x1u;
    /* 004d9f0e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9f11: jg 0x4d9f15 */ if ((!fZ&&fS==fO)) goto L_004d9f15;
L_004d9f13:; BB(0x004d9f13);
    /* 004d9f13: mov edx, eax */ r_edx = r_eax;
L_004d9f15:; BB(0x004d9f15);
    /* 004d9f15: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d9f18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9f1a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d9f1c: jle 0x4d9f6d */ if ((fZ||fS!=fO)) goto L_004d9f6d;
L_004d9f1e:; BB(0x004d9f1e);
    /* 004d9f1e: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 004d9f21: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 004d9f25: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9f27: jne 0x4d9f34 */ if (!fZ) goto L_004d9f34;
L_004d9f29:; BB(0x004d9f29);
    /* 004d9f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9f2b: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 004d9f2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d9f31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9f32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d9f33: ret  */ FN_RET(0x004d9eec); r_esp += 4; return;
L_004d9f34:; BB(0x004d9f34);
    /* 004d9f34: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_004d9f37:; BB(0x004d9f37);
    /* 004d9f37: xor esi, 0x7f */ {  u32 a = r_esi; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d9f3a: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 004d9f3d: jmp 0x4d9f4b */ goto L_004d9f4b;
L_004d9f3f:; BB(0x004d9f3f);
    /* 004d9f3f: movzx edi, word ptr [ecx - 2] */ r_edi = (u32)R16((u32)(r_ecx+0xfffffffeu));
    /* 004d9f43: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004d9f45: xor esi, 0x7f */ {  u32 a = r_esi; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d9f48: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
L_004d9f4b:; BB(0x004d9f4b);
    /* 004d9f4b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d9f4e: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d9f51: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d9f54: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9f56: jge 0x4d9f6a */ if ((fS==fO)) goto L_004d9f6a;
L_004d9f58:; BB(0x004d9f58);
    /* 004d9f58: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 004d9f5b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9f5d: je 0x4d9f65 */ if (fZ) goto L_004d9f65;
L_004d9f5f:; BB(0x004d9f5f);
    /* 004d9f5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9f61: je 0x4d9f37 */ if (fZ) goto L_004d9f37;
L_004d9f63:; BB(0x004d9f63);
    /* 004d9f63: jmp 0x4d9f3f */ goto L_004d9f3f;
L_004d9f65:; BB(0x004d9f65);
    /* 004d9f65: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004d9f68: jmp 0x4d9f29 */ goto L_004d9f29;
L_004d9f6a:; BB(0x004d9f6a);
    /* 004d9f6a: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_004d9f6d:; BB(0x004d9f6d);
    /* 004d9f6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9f6f: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 004d9f72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d9f75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9f76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d9f77: ret  */ FN_RET(0x004d9eec); r_esp += 4; return;
}

void f_004d9f78(void) /* sub_4D9F78 */
{
    FN_ENTER(0x004d9f78);
    /* 004d9f78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d9f79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9f7a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d9f7d: mov ebx, 0x20 */ r_ebx = 0x20u;
    /* 004d9f82: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 004d9f86: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 004d9f8a: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004d9f8e: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9f91: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004d9f96: jg 0x4d9f9a */ if ((!fZ&&fS==fO)) goto L_004d9f9a;
L_004d9f98:; BB(0x004d9f98);
    /* 004d9f98: mov ebx, eax */ r_ebx = r_eax;
L_004d9f9a:; BB(0x004d9f9a);
    /* 004d9f9a: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9f9d: jg 0x4d9fa1 */ if ((!fZ&&fS==fO)) goto L_004d9fa1;
L_004d9f9f:; BB(0x004d9f9f);
    /* 004d9f9f: mov ebx, ecx */ r_ebx = r_ecx;
L_004d9fa1:; BB(0x004d9fa1);
    /* 004d9fa1: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d9fa4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d9fa6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d9fa8: jle 0x4da00e */ if ((fZ||fS!=fO)) goto L_004da00e;
L_004d9faa:; BB(0x004d9faa);
    /* 004d9faa: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 004d9fad: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d9fb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9fb3: jne 0x4d9fc0 */ if (!fZ) goto L_004d9fc0;
L_004d9fb5:; BB(0x004d9fb5);
    /* 004d9fb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9fb7: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 004d9fba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d9fbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9fbe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d9fbf: ret  */ FN_RET(0x004d9f78); r_esp += 4; return;
L_004d9fc0:; BB(0x004d9fc0);
    /* 004d9fc0: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004d9fc4: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004d9fc7: mov ebp, edx */ r_ebp = r_edx;
L_004d9fc9:; BB(0x004d9fc9);
    /* 004d9fc9: xor eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9fcc: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 004d9fcf: jmp 0x4d9fe3 */ goto L_004d9fe3;
L_004d9fd1:; BB(0x004d9fd1);
    /* 004d9fd1: movzx edx, word ptr [esi - 2] */ r_edx = (u32)R16((u32)(r_esi+0xfffffffeu));
    /* 004d9fd5: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 004d9fd8: xor eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9fdb: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004d9fde: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d9fe0: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
L_004d9fe3:; BB(0x004d9fe3);
    /* 004d9fe3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d9fe6: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d9fe9: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d9fec: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9fee: jge 0x4da007 */ if ((fS==fO)) goto L_004da007;
L_004d9ff0:; BB(0x004d9ff0);
    /* 004d9ff0: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 004d9ff4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9ff6: je 0x4d9ffe */ if (fZ) goto L_004d9ffe;
L_004d9ff8:; BB(0x004d9ff8);
    /* 004d9ff8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9ffa: je 0x4d9fc9 */ if (fZ) goto L_004d9fc9;
L_004d9ffc:; BB(0x004d9ffc);
    /* 004d9ffc: jmp 0x4d9fd1 */ goto L_004d9fd1;
L_004d9ffe:; BB(0x004d9ffe);
    /* 004d9ffe: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004da002: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 004da005: jmp 0x4d9fb5 */ goto L_004d9fb5;
L_004da007:; BB(0x004da007);
    /* 004da007: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004da00b: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_004da00e:; BB(0x004da00e);
    /* 004da00e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004da010: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 004da013: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da016: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da017: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da018: ret  */ FN_RET(0x004d9f78); r_esp += 4; return;
}

