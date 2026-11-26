#include "protos.h"

void f_0083f484(void) /* sub_83F484 */
{
    FN_ENTER(0x0083f484);
    /* 0083f484: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f486: mov dword ptr [0xadaf80], eax */ W32((u32)(0xadaf80u), r_eax);
    /* 0083f48b: mov dword ptr [0xadb0a0], eax */ W32((u32)(0xadb0a0u), r_eax);
    /* 0083f490: mov dword ptr [0xadb1c0], eax */ W32((u32)(0xadb1c0u), r_eax);
    /* 0083f495: ret  */ FN_RET(0x0083f484); r_esp += 4; return;
}

void f_0083f498(void) /* sub_83F498 */
{
    FN_ENTER(0x0083f498);
    /* 0083f498: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083f49b: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0083f49e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f4a0: jne 0x83f4a8 */ if (!fZ) goto L_0083f4a8;
L_0083f4a2:; BB(0x0083f4a2);
    /* 0083f4a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083f4a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083f4a7: ret  */ FN_RET(0x0083f498); r_esp += 4; return;
L_0083f4a8:; BB(0x0083f4a8);
    /* 0083f4a8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083f4ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083f4ad: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0083f4b0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0083f4b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f4b5: push 0xadb1c0 */ { u32 v = 0xadb1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f4ba: push 0xadb0a0 */ { u32 v = 0xadb0a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f4bf: push 0xadaf80 */ { u32 v = 0xadaf80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f4c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f4c5: call dword ptr [0x8f8414] */ { u32 t = R32((u32)(0x8f8414u)); r_esp -= 4; W32(r_esp, 0x83f4cbu); call_ind(t); }
    /* 0083f4cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083f4ce: ret  */ FN_RET(0x0083f498); r_esp += 4; return;
}

void f_0083f4d0(void) /* sub_83F4D0 */
{
    FN_ENTER(0x0083f4d0);
    /* 0083f4d0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0083f4d4: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083f4d6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0083f4d9: mov dword ptr [0xadb2d0], ecx */ W32((u32)(0xadb2d0u), r_ecx);
    /* 0083f4df: mov dword ptr [0xadb2d4], eax */ W32((u32)(0xadb2d4u), r_eax);
    /* 0083f4e4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0083f4e7: mov dword ptr [0xadb2d8], eax */ W32((u32)(0xadb2d8u), r_eax);
    /* 0083f4ec: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0083f4ef: mov dword ptr [0xadb2dc], eax */ W32((u32)(0xadb2dcu), r_eax);
    /* 0083f4f4: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0083f4f7: mov dword ptr [0xadb2e0], eax */ W32((u32)(0xadb2e0u), r_eax);
    /* 0083f4fc: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0083f4ff: mov dword ptr [0xadb2e4], eax */ W32((u32)(0xadb2e4u), r_eax);
    /* 0083f504: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0083f507: mov dword ptr [0xadb2e8], eax */ W32((u32)(0xadb2e8u), r_eax);
    /* 0083f50c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f50e: ret  */ FN_RET(0x0083f4d0); r_esp += 4; return;
}

void f_0083f510(void) /* sub_83F510 */
{
    FN_ENTER(0x0083f510);
    /* 0083f510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083f511: movsx edx, word ptr [0xadac94] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadac94u));
    /* 0083f518: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083f51a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f51c: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f522:; BB(0x0083f522);
    /* 0083f522: movsx edx, word ptr [0xadacc4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadacc4u));
    /* 0083f529: mov eax, 1 */ r_eax = 0x1u;
    /* 0083f52e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f530: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f536:; BB(0x0083f536);
    /* 0083f536: movsx edx, word ptr [0xadacf4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadacf4u));
    /* 0083f53d: mov eax, 2 */ r_eax = 0x2u;
    /* 0083f542: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f544: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f54a:; BB(0x0083f54a);
    /* 0083f54a: movsx edx, word ptr [0xadad24] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadad24u));
    /* 0083f551: mov eax, 3 */ r_eax = 0x3u;
    /* 0083f556: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f558: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f55e:; BB(0x0083f55e);
    /* 0083f55e: movsx edx, word ptr [0xadad54] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadad54u));
    /* 0083f565: mov eax, 4 */ r_eax = 0x4u;
    /* 0083f56a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f56c: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f572:; BB(0x0083f572);
    /* 0083f572: movsx edx, word ptr [0xadad84] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadad84u));
    /* 0083f579: mov eax, 5 */ r_eax = 0x5u;
    /* 0083f57e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f580: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f586:; BB(0x0083f586);
    /* 0083f586: movsx edx, word ptr [0xadadb4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadadb4u));
    /* 0083f58d: mov eax, 6 */ r_eax = 0x6u;
    /* 0083f592: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f594: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f59a:; BB(0x0083f59a);
    /* 0083f59a: movsx edx, word ptr [0xadade4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadade4u));
    /* 0083f5a1: mov eax, 7 */ r_eax = 0x7u;
    /* 0083f5a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f5a8: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f5ae:; BB(0x0083f5ae);
    /* 0083f5ae: movsx edx, word ptr [0xadae14] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadae14u));
    /* 0083f5b5: mov eax, 8 */ r_eax = 0x8u;
    /* 0083f5ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f5bc: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f5c2:; BB(0x0083f5c2);
    /* 0083f5c2: movsx edx, word ptr [0xadae44] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadae44u));
    /* 0083f5c9: mov eax, 9 */ r_eax = 0x9u;
    /* 0083f5ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f5d0: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f5d6:; BB(0x0083f5d6);
    /* 0083f5d6: movsx edx, word ptr [0xadae74] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadae74u));
    /* 0083f5dd: mov eax, 0xa */ r_eax = 0xau;
    /* 0083f5e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f5e4: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f5ea:; BB(0x0083f5ea);
    /* 0083f5ea: movsx edx, word ptr [0xadaea4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadaea4u));
    /* 0083f5f1: mov eax, 0xb */ r_eax = 0xbu;
    /* 0083f5f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f5f8: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f5fe:; BB(0x0083f5fe);
    /* 0083f5fe: movsx edx, word ptr [0xadaed4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadaed4u));
    /* 0083f605: mov eax, 0xc */ r_eax = 0xcu;
    /* 0083f60a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f60c: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f60e:; BB(0x0083f60e);
    /* 0083f60e: movsx edx, word ptr [0xadaf04] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadaf04u));
    /* 0083f615: mov eax, 0xd */ r_eax = 0xdu;
    /* 0083f61a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f61c: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f61e:; BB(0x0083f61e);
    /* 0083f61e: movsx edx, word ptr [0xadaf34] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadaf34u));
    /* 0083f625: mov eax, 0xe */ r_eax = 0xeu;
    /* 0083f62a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f62c: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f62e:; BB(0x0083f62e);
    /* 0083f62e: movsx edx, word ptr [0xadaf64] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadaf64u));
    /* 0083f635: mov eax, 0xf */ r_eax = 0xfu;
    /* 0083f63a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f63c: je 0x83f68a */ if (fZ) goto L_0083f68a;
L_0083f63e:; BB(0x0083f63e);
    /* 0083f63e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0083f640:; BB(0x0083f640);
    /* 0083f640: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f642: je 0x83f67c */ if (fZ) goto L_0083f67c;
L_0083f644:; BB(0x0083f644);
    /* 0083f644: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f646: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f648: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f64a: call dword ptr [0x8f83e0] */ { u32 t = R32((u32)(0x8f83e0u)); r_esp -= 4; W32(r_esp, 0x83f650u); call_ind(t); }
    /* 0083f650: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0083f653: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f656: jne 0x83f666 */ if (!fZ) goto L_0083f666;
L_0083f658:; BB(0x0083f658);
    /* 0083f658: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0083f65a: call 0x83f954 */ r_esp -= 4; W32(r_esp, 0x83f65fu); f_0083f954();
    /* 0083f65f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083f664: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083f665: ret  */ FN_RET(0x0083f510); r_esp += 4; return;
L_0083f666:; BB(0x0083f666);
    /* 0083f666: mov eax, 1 */ r_eax = 0x1u;
    /* 0083f66b: mov word ptr [ebp + 0x14], ax */ W16((u32)(r_ebp+0x14u), (u16)r_eax);
    /* 0083f66f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0083f671: call 0x83f6a0 */ r_esp -= 4; W32(r_esp, 0x83f676u); f_0083f6a0();
    /* 0083f676: movsx eax, word ptr [ebp + 0x16] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x16u));
    /* 0083f67a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083f67b: ret  */ FN_RET(0x0083f510); r_esp += 4; return;
L_0083f67c:; BB(0x0083f67c);
    /* 0083f67c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0083f67e: call 0x83f954 */ r_esp -= 4; W32(r_esp, 0x83f683u); f_0083f954();
    /* 0083f683: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083f688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083f689: ret  */ FN_RET(0x0083f510); r_esp += 4; return;
L_0083f68a:; BB(0x0083f68a);
    /* 0083f68a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0083f68d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083f68f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0083f691: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083f693: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083f695: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083f697: lea ebp, [edx + edx + 0xadac80] */ r_ebp = (u32)(r_edx+r_edx+0xadac80u);
    /* 0083f69e: jmp 0x83f640 */ goto L_0083f640;
}

void f_0083f6a0(void) /* sub_83F6A0 */
{
    FN_ENTER(0x0083f6a0);
    /* 0083f6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083f6a1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083f6a4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0083f6a6: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0083f6aa: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0083f6b1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083f6b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f6b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f6b6: push 0x1002 */ { u32 v = 0x1002u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f6bb: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0083f6c0: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f6c3: call dword ptr [0x8f8410] */ { u32 t = R32((u32)(0x8f8410u)); r_esp -= 4; W32(r_esp, 0x83f6c9u); call_ind(t); }
    /* 0083f6c9: mov dword ptr [esp + 4], 0x10000 */ W32((u32)(r_esp+0x4u), 0x10000u);
    /* 0083f6d1: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0083f6d5: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f6d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f6d9: push 0x1002 */ { u32 v = 0x1002u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f6de: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0083f6e3: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f6e6: call dword ptr [0x8f8404] */ { u32 t = R32((u32)(0x8f8404u)); r_esp -= 4; W32(r_esp, 0x83f6ecu); call_ind(t); }
    /* 0083f6ec: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0083f6f3: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0083f6f7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083f6fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f6fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f6fc: push 0x1001 */ { u32 v = 0x1001u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f701: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0083f706: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f709: call dword ptr [0x8f8410] */ { u32 t = R32((u32)(0x8f8410u)); r_esp -= 4; W32(r_esp, 0x83f70fu); call_ind(t); }
    /* 0083f70f: mov dword ptr [esp + 8], 0x10000 */ W32((u32)(r_esp+0x8u), 0x10000u);
    /* 0083f717: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0083f71b: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f71e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f71f: push 0x1001 */ { u32 v = 0x1001u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f724: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0083f729: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f72c: call dword ptr [0x8f8404] */ { u32 t = R32((u32)(0x8f8404u)); r_esp -= 4; W32(r_esp, 0x83f732u); call_ind(t); }
    /* 0083f732: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083f735: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083f736: ret  */ FN_RET(0x0083f6a0); r_esp += 4; return;
}

void f_0083f738(void) /* sub_83F738 */
{
    FN_ENTER(0x0083f738);
    /* 0083f738: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f739: movsx edx, word ptr [esp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0083f73e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0083f741: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f743: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0083f745: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f747: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0083f74a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f74c: lea ebx, [ecx + ecx + 0xadac80] */ r_ebx = (u32)(r_ecx+r_ecx+0xadac80u);
    /* 0083f753: movsx edx, word ptr [ebx + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x14u));
    /* 0083f757: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f759: je 0x83f7b3 */ if (fZ) goto L_0083f7b3;
L_0083f75b:; BB(0x0083f75b);
    /* 0083f75b: movzx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)R16((u32)(r_esp+0x10u));
    /* 0083f760: mov word ptr [eax*8 + 0xadac82], cx */ W16((u32)(r_eax*8+0xadac82u), (u16)r_ecx);
    /* 0083f768: mov edx, 2 */ r_edx = 0x2u;
    /* 0083f76d: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0083f770: mov word ptr [eax*8 + 0xadac80], dx */ W16((u32)(r_eax*8+0xadac80u), (u16)r_edx);
    /* 0083f778: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0083f77c: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0083f77f: mov dword ptr [eax*8 + 0xadac84], edx */ W32((u32)(r_eax*8+0xadac84u), r_edx);
    /* 0083f786: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083f788: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0083f78a: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0083f78d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f78f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f790: push dword ptr [eax*8 + 0xadac90] */ { u32 v = R32((u32)(r_eax*8+0xadac90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f797: call dword ptr [0x8f83dc] */ { u32 t = R32((u32)(0x8f83dcu)); r_esp -= 4; W32(r_esp, 0x83f79du); call_ind(t); }
    /* 0083f79d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f7a0: je 0x83f7a6 */ if (fZ) goto L_0083f7a6;
L_0083f7a2:; BB(0x0083f7a2);
    /* 0083f7a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f7a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083f7a5: ret  */ FN_RET(0x0083f738); r_esp += 4; return;
L_0083f7a6:; BB(0x0083f7a6);
    /* 0083f7a6: call dword ptr [0x8f83cc] */ { u32 t = R32((u32)(0x8f83ccu)); r_esp -= 4; W32(r_esp, 0x83f7acu); call_ind(t); }
    /* 0083f7ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083f7ae: call 0x83f954 */ r_esp -= 4; W32(r_esp, 0x83f7b3u); f_0083f954();
L_0083f7b3:; BB(0x0083f7b3);
    /* 0083f7b3: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083f7b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083f7b9: ret  */ FN_RET(0x0083f738); r_esp += 4; return;
}

void f_0083f7bc(void) /* sub_83F7BC */
{
    FN_ENTER(0x0083f7bc);
    /* 0083f7bc: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0083f7c1: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0083f7c5: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0083f7c8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f7ca: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f7cc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f7ce: movsx eax, word ptr [ecx*8 + 0xadac94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xadac94u));
    /* 0083f7d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f7d8: je 0x83f7f8 */ if (fZ) goto L_0083f7f8;
L_0083f7da:; BB(0x0083f7da);
    /* 0083f7da: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0083f7de: mov eax, 4 */ r_eax = 0x4u;
    /* 0083f7e3: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 0083f7e6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0083f7ea: mov dword ptr [eax], 0x1000 */ W32((u32)(r_eax), 0x1000u);
    /* 0083f7f0: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0083f7f6: jmp 0x83f809 */ goto L_0083f809;
L_0083f7f8:; BB(0x0083f7f8);
    /* 0083f7f8: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0083f7fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083f7fe: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 0083f801: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0083f805: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0083f807: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0083f809:; BB(0x0083f809);
    /* 0083f809: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f80b: ret  */ FN_RET(0x0083f7bc); r_esp += 4; return;
}

void f_0083f80c(void) /* sub_83F80C */
{
    FN_ENTER(0x0083f80c);
    /* 0083f80c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083f80d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083f80e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083f80f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f810: movsx ecx, word ptr [esp + 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 0083f815: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0083f818: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083f81a: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0083f81c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083f81e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0083f821: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f823: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f825: movsx eax, word ptr [eax + 0xadac94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xadac94u));
    /* 0083f82c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f82e: je 0x83f89d */ if (fZ) goto L_0083f89d;
L_0083f830:; BB(0x0083f830);
    /* 0083f830: movsx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x1cu));
    /* 0083f835: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0083f837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f839: je 0x83f889 */ if (fZ) goto L_0083f889;
L_0083f83b:; BB(0x0083f83b);
    /* 0083f83b: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0083f83f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083f841: mov ebx, edx */ r_ebx = r_edx;
    /* 0083f843: movsx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x1cu));
L_0083f848:; BB(0x0083f848);
    /* 0083f848: mov esi, dword ptr [ecx + eax*8] */ r_esi = R32((u32)(r_ecx+r_eax*8));
    /* 0083f84b: mov edi, dword ptr [ecx + eax*8 + 4] */ r_edi = R32((u32)(r_ecx+r_eax*8+0x4u));
L_0083f84f:; BB(0x0083f84f);
    /* 0083f84f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f851: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083f852: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083f853: push dword ptr [ebx*8 + 0xadac90] */ { u32 v = R32((u32)(r_ebx*8+0xadac90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f85a: call dword ptr [0x8f83d8] */ { u32 t = R32((u32)(0x8f83d8u)); r_esp -= 4; W32(r_esp, 0x83f860u); call_ind(t); }
    /* 0083f860: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f863: je 0x83f8a4 */ if (fZ) goto L_0083f8a4;
L_0083f865:; BB(0x0083f865);
    /* 0083f865: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083f867: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0083f869: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0083f86b: jg 0x83f84f */ if ((!fZ&&fS==fO)) goto L_0083f84f;
L_0083f86d:; BB(0x0083f86d);
    /* 0083f86d: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0083f871: movsx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x1cu));
    /* 0083f876: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083f879: mov eax, ebp */ r_eax = r_ebp;
    /* 0083f87b: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083f880: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f882: jne 0x83f848 */ if (!fZ) goto L_0083f848;
L_0083f884:; BB(0x0083f884);
    /* 0083f884: movsx ecx, word ptr [esp + 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
L_0083f889:; BB(0x0083f889);
    /* 0083f889: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0083f88d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f88f: je 0x83f89d */ if (fZ) goto L_0083f89d;
L_0083f891:; BB(0x0083f891);
    /* 0083f891: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f892: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f894: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0083f898: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x83f89au); call_ind(t); }
    /* 0083f89a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0083f89d:; BB(0x0083f89d);
    /* 0083f89d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f89f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083f8a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083f8a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083f8a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083f8a3: ret  */ FN_RET(0x0083f80c); r_esp += 4; return;
L_0083f8a4:; BB(0x0083f8a4);
    /* 0083f8a4: call dword ptr [0x8f83cc] */ { u32 t = R32((u32)(0x8f83ccu)); r_esp -= 4; W32(r_esp, 0x83f8aau); call_ind(t); }
    /* 0083f8aa: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083f8af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083f8b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083f8b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083f8b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083f8b3: ret  */ FN_RET(0x0083f80c); r_esp += 4; return;
}

void f_0083f8b4(void) /* sub_83F8B4 */
{
    FN_ENTER(0x0083f8b4);
    /* 0083f8b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083f8b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083f8b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083f8b7: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0083f8bc: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0083f8bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f8c1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f8c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f8c5: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0083f8c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083f8ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083f8cc: movsx eax, word ptr [edx + 0xadac94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0xadac94u));
    /* 0083f8d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f8d5: je 0x83f94d */ if (fZ) goto L_0083f94d;
L_0083f8d7:; BB(0x0083f8d7);
    /* 0083f8d7: movsx edx, word ptr [0xadb2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(0xadb2c8u));
    /* 0083f8de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f8e0: je 0x83f92c */ if (fZ) goto L_0083f92c;
L_0083f8e2:; BB(0x0083f8e2);
    /* 0083f8e2: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0083f8e6: mov eax, 0xadb2cc */ r_eax = 0xadb2ccu;
    /* 0083f8eb: mov ebp, 0 */ r_ebp = 0x0u;
    /* 0083f8f0: je 0x83f90f */ if (fZ) goto L_0083f90f;
L_0083f8f2:; BB(0x0083f8f2);
    /* 0083f8f2: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0083f8f5: mov esi, eax */ r_esi = r_eax;
L_0083f8f7:; BB(0x0083f8f7);
    /* 0083f8f7: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 0083f8fa: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0083f8fc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083f8ff: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083f902: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083f905: movsx eax, bp */ r_eax = (u32)(i32)(i16)(u16)r_ebp;
    /* 0083f908: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f90a: jne 0x83f8f7 */ if (!fZ) goto L_0083f8f7;
L_0083f90c:; BB(0x0083f90c);
    /* 0083f90c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0083f90f:; BB(0x0083f90f);
    /* 0083f90f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0083f913: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0083f917: lea ebp, [eax + edx] */ r_ebp = (u32)(r_eax+r_edx);
    /* 0083f91a: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0083f91c: mov dword ptr [ecx*8 + 0xadac9c], ebp */ W32((u32)(r_ecx*8+0xadac9cu), r_ebp);
    /* 0083f923: mov dword ptr [ecx*8 + 0xadac98], edi */ W32((u32)(r_ecx*8+0xadac98u), r_edi);
    /* 0083f92a: jmp 0x83f942 */ goto L_0083f942;
L_0083f92c:; BB(0x0083f92c);
    /* 0083f92c: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0083f930: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0083f934: mov dword ptr [ecx*8 + 0xadac9c], eax */ W32((u32)(r_ecx*8+0xadac9cu), r_eax);
    /* 0083f93b: mov dword ptr [ecx*8 + 0xadac98], edx */ W32((u32)(r_ecx*8+0xadac98u), r_edx);
L_0083f942:; BB(0x0083f942);
    /* 0083f942: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0083f946: mov dword ptr [ecx*8 + 0xadaca8], eax */ W32((u32)(r_ecx*8+0xadaca8u), r_eax);
L_0083f94d:; BB(0x0083f94d);
    /* 0083f94d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f94f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083f950: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083f951: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083f952: ret  */ FN_RET(0x0083f8b4); r_esp += 4; return;
}

void f_0083f954(void) /* sub_83F954 */
{
    FN_ENTER(0x0083f954);
    /* 0083f954: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f956: je 0x83f975 */ if (fZ) goto L_0083f975;
L_0083f958:; BB(0x0083f958);
    /* 0083f958: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f95a: mov word ptr [ecx + 0x14], ax */ W16((u32)(r_ecx+0x14u), (u16)r_eax);
    /* 0083f95e: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 0083f961: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0083f964: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0083f967: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0083f96a: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0083f96d: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 0083f971: mov word ptr [ecx + 0x2e], ax */ W16((u32)(r_ecx+0x2eu), (u16)r_eax);
L_0083f975:; BB(0x0083f975);
    /* 0083f975: ret  */ FN_RET(0x0083f954); r_esp += 4; return;
}

void f_0083f97d(void) /* sub_83F97D */
{
    FN_ENTER(0x0083f97d);
    /* 0083f97d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083f97e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0083f981: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0083f984: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083f986: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0083f988: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083f98a: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0083f98d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f98f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f991: movsx eax, word ptr [ecx + 0xadac94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xadac94u));
    /* 0083f998: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f99a: je 0x83f9ba */ if (fZ) goto L_0083f9ba;
L_0083f99c:; BB(0x0083f99c);
    /* 0083f99c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f99e: push dword ptr [edi*8 + 0xadac90] */ { u32 v = R32((u32)(r_edi*8+0xadac90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f9a5: call dword ptr [0x8f83e8] */ { u32 t = R32((u32)(0x8f83e8u)); r_esp -= 4; W32(r_esp, 0x83f9abu); call_ind(t); }
    /* 0083f9ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f9ad: push dword ptr [edi*8 + 0xadac90] */ { u32 v = R32((u32)(r_edi*8+0xadac90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f9b4: call dword ptr [0x8f83e8] */ { u32 t = R32((u32)(0x8f83e8u)); r_esp -= 4; W32(r_esp, 0x83f9bau); call_ind(t); }
L_0083f9ba:; BB(0x0083f9ba);
    /* 0083f9ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f9bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083f9bd: ret  */ FN_RET(0x0083f97d); r_esp += 4; return;
}

void f_0083f9c0(void) /* sub_83F9C0 */
{
    FN_ENTER(0x0083f9c0);
    /* 0083f9c0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0083f9c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083f9c6: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0083f9c9: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0083f9cc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f9ce: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0083f9d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f9d2: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0083f9d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f9d7: lea esi, [ecx + ecx + 0xadac80] */ r_esi = (u32)(r_ecx+r_ecx+0xadac80u);
    /* 0083f9de: movsx edx, word ptr [esi + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x14u));
    /* 0083f9e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f9e4: je 0x83f9fa */ if (fZ) goto L_0083f9fa;
L_0083f9e6:; BB(0x0083f9e6);
    /* 0083f9e6: push dword ptr [eax*8 + 0xadac90] */ { u32 v = R32((u32)(r_eax*8+0xadac90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f9ed: call dword ptr [0x8f83e4] */ { u32 t = R32((u32)(0x8f83e4u)); r_esp -= 4; W32(r_esp, 0x83f9f3u); call_ind(t); }
    /* 0083f9f3: mov ecx, esi */ r_ecx = r_esi;
    /* 0083f9f5: call 0x83f954 */ r_esp -= 4; W32(r_esp, 0x83f9fau); f_0083f954();
L_0083f9fa:; BB(0x0083f9fa);
    /* 0083f9fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f9fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083f9fd: ret  */ FN_RET(0x0083f9c0); r_esp += 4; return;
}

void f_0083f9c5(void) /* sub_83F9C5 */
{
    FN_ENTER(0x0083f9c5);
    /* 0083f9c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083f9c6: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0083f9c9: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0083f9cc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f9ce: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0083f9d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f9d2: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0083f9d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f9d7: lea esi, [ecx + ecx + 0xadac80] */ r_esi = (u32)(r_ecx+r_ecx+0xadac80u);
    /* 0083f9de: movsx edx, word ptr [esi + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x14u));
    /* 0083f9e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f9e4: je 0x83f9fa */ if (fZ) goto L_0083f9fa;
L_0083f9e6:; BB(0x0083f9e6);
    /* 0083f9e6: push dword ptr [eax*8 + 0xadac90] */ { u32 v = R32((u32)(r_eax*8+0xadac90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f9ed: call dword ptr [0x8f83e4] */ { u32 t = R32((u32)(0x8f83e4u)); r_esp -= 4; W32(r_esp, 0x83f9f3u); call_ind(t); }
    /* 0083f9f3: mov ecx, esi */ r_ecx = r_esi;
    /* 0083f9f5: call 0x83f954 */ r_esp -= 4; W32(r_esp, 0x83f9fau); f_0083f954();
L_0083f9fa:; BB(0x0083f9fa);
    /* 0083f9fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083f9fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083f9fd: ret  */ FN_RET(0x0083f9c5); r_esp += 4; return;
}

void f_0083fa00(void) /* sub_83FA00 */
{
    FN_ENTER(0x0083fa00);
    /* 0083fa00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083fa01: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0083fa06: call 0x83f97d */ r_esp -= 4; W32(r_esp, 0x83fa0bu); f_0083f97d();
    /* 0083fa0b: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0083fa10: call 0x83f9c5 */ r_esp -= 4; W32(r_esp, 0x83fa15u); f_0083f9c5();
    /* 0083fa15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083fa17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083fa18: ret  */ FN_RET(0x0083fa00); r_esp += 4; return;
}

void f_0083fa1c(void) /* sub_83FA1C */
{
    FN_ENTER(0x0083fa1c);
    /* 0083fa1c: sub esp, 0x190 */ {  u32 a = r_esp; u32 b = 0x190u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083fa22: mov eax, dword ptr [0xadb2c4] */ r_eax = R32((u32)(0xadb2c4u));
    /* 0083fa27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083fa29: jne 0x83fdd8 */ if (!fZ) goto L_0083fdd8;
L_0083fa2f:; BB(0x0083fa2f);
    /* 0083fa2f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083fa32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083fa33: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0083fa35: call dword ptr [0x8f83f0] */ { u32 t = R32((u32)(0x8f83f0u)); r_esp -= 4; W32(r_esp, 0x83fa3bu); call_ind(t); }
    /* 0083fa3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083fa3d: jne 0x83fdcc */ if (!fZ) goto L_0083fdcc;
L_0083fa43:; BB(0x0083fa43);
    /* 0083fa43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083fa45: mov word ptr [0xadac94], ax */ W16((u32)(0xadac94u), (u16)r_eax);
    /* 0083fa4b: mov word ptr [0xadac96], ax */ W16((u32)(0xadac96u), (u16)r_eax);
    /* 0083fa51: mov edx, 1 */ r_edx = 0x1u;
    /* 0083fa56: mov dword ptr [0xadac98], eax */ W32((u32)(0xadac98u), r_eax);
    /* 0083fa5b: mov dword ptr [0xadac9c], eax */ W32((u32)(0xadac9cu), r_eax);
    /* 0083fa60: mov dword ptr [0xadaca0], eax */ W32((u32)(0xadaca0u), r_eax);
    /* 0083fa65: mov dword ptr [0xadaca4], eax */ W32((u32)(0xadaca4u), r_eax);
    /* 0083fa6a: mov dword ptr [0xadaca8], eax */ W32((u32)(0xadaca8u), r_eax);
    /* 0083fa6f: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0083fa74: mov word ptr [0xadacac], ax */ W16((u32)(0xadacacu), (u16)r_eax);
    /* 0083fa7a: mov word ptr [0xadacae], ax */ W16((u32)(0xadacaeu), (u16)r_eax);
    /* 0083fa80: mov word ptr [0xadacc4], ax */ W16((u32)(0xadacc4u), (u16)r_eax);
    /* 0083fa86: mov word ptr [0xadacc6], dx */ W16((u32)(0xadacc6u), (u16)r_edx);
    /* 0083fa8d: mov dword ptr [0xadacc8], eax */ W32((u32)(0xadacc8u), r_eax);
    /* 0083fa92: mov edx, 3 */ r_edx = 0x3u;
    /* 0083fa97: mov dword ptr [0xadaccc], eax */ W32((u32)(0xadacccu), r_eax);
    /* 0083fa9c: mov dword ptr [0xadacd0], eax */ W32((u32)(0xadacd0u), r_eax);
    /* 0083faa1: mov dword ptr [0xadacd4], eax */ W32((u32)(0xadacd4u), r_eax);
    /* 0083faa6: mov dword ptr [0xadacd8], eax */ W32((u32)(0xadacd8u), r_eax);
    /* 0083faab: mov word ptr [0xadacdc], ax */ W16((u32)(0xadacdcu), (u16)r_eax);
    /* 0083fab1: mov word ptr [0xadacde], ax */ W16((u32)(0xadacdeu), (u16)r_eax);
    /* 0083fab7: mov word ptr [0xadacf4], ax */ W16((u32)(0xadacf4u), (u16)r_eax);
    /* 0083fabd: mov word ptr [0xadacf6], cx */ W16((u32)(0xadacf6u), (u16)r_ecx);
    /* 0083fac4: mov dword ptr [0xadacf8], eax */ W32((u32)(0xadacf8u), r_eax);
    /* 0083fac9: mov dword ptr [0xadacfc], eax */ W32((u32)(0xadacfcu), r_eax);
    /* 0083face: mov dword ptr [0xadad00], eax */ W32((u32)(0xadad00u), r_eax);
    /* 0083fad3: mov dword ptr [0xadad04], eax */ W32((u32)(0xadad04u), r_eax);
    /* 0083fad8: mov dword ptr [0xadad08], eax */ W32((u32)(0xadad08u), r_eax);
    /* 0083fadd: mov word ptr [0xadad0c], ax */ W16((u32)(0xadad0cu), (u16)r_eax);
    /* 0083fae3: mov word ptr [0xadad0e], ax */ W16((u32)(0xadad0eu), (u16)r_eax);
    /* 0083fae9: mov word ptr [0xadad24], ax */ W16((u32)(0xadad24u), (u16)r_eax);
    /* 0083faef: mov word ptr [0xadad26], dx */ W16((u32)(0xadad26u), (u16)r_edx);
    /* 0083faf6: mov dword ptr [0xadad28], eax */ W32((u32)(0xadad28u), r_eax);
    /* 0083fafb: mov dword ptr [0xadad2c], eax */ W32((u32)(0xadad2cu), r_eax);
    /* 0083fb00: mov dword ptr [0xadad30], eax */ W32((u32)(0xadad30u), r_eax);
    /* 0083fb05: mov edx, 4 */ r_edx = 0x4u;
    /* 0083fb0a: mov dword ptr [0xadad34], eax */ W32((u32)(0xadad34u), r_eax);
    /* 0083fb0f: mov dword ptr [0xadad38], eax */ W32((u32)(0xadad38u), r_eax);
    /* 0083fb14: mov word ptr [0xadad3c], ax */ W16((u32)(0xadad3cu), (u16)r_eax);
    /* 0083fb1a: mov word ptr [0xadad3e], ax */ W16((u32)(0xadad3eu), (u16)r_eax);
    /* 0083fb20: mov word ptr [0xadad54], ax */ W16((u32)(0xadad54u), (u16)r_eax);
    /* 0083fb26: mov word ptr [0xadad56], dx */ W16((u32)(0xadad56u), (u16)r_edx);
    /* 0083fb2d: mov dword ptr [0xadad58], eax */ W32((u32)(0xadad58u), r_eax);
    /* 0083fb32: mov dword ptr [0xadad5c], eax */ W32((u32)(0xadad5cu), r_eax);
    /* 0083fb37: mov dword ptr [0xadad60], eax */ W32((u32)(0xadad60u), r_eax);
    /* 0083fb3c: mov dword ptr [0xadad64], eax */ W32((u32)(0xadad64u), r_eax);
    /* 0083fb41: mov edx, 5 */ r_edx = 0x5u;
    /* 0083fb46: mov dword ptr [0xadad68], eax */ W32((u32)(0xadad68u), r_eax);
    /* 0083fb4b: mov word ptr [0xadad6c], ax */ W16((u32)(0xadad6cu), (u16)r_eax);
    /* 0083fb51: mov word ptr [0xadad6e], ax */ W16((u32)(0xadad6eu), (u16)r_eax);
    /* 0083fb57: mov word ptr [0xadad84], ax */ W16((u32)(0xadad84u), (u16)r_eax);
    /* 0083fb5d: mov word ptr [0xadad86], dx */ W16((u32)(0xadad86u), (u16)r_edx);
    /* 0083fb64: mov edx, 6 */ r_edx = 0x6u;
    /* 0083fb69: mov dword ptr [0xadad88], eax */ W32((u32)(0xadad88u), r_eax);
    /* 0083fb6e: mov dword ptr [0xadad8c], eax */ W32((u32)(0xadad8cu), r_eax);
    /* 0083fb73: mov dword ptr [0xadad90], eax */ W32((u32)(0xadad90u), r_eax);
    /* 0083fb78: mov dword ptr [0xadad94], eax */ W32((u32)(0xadad94u), r_eax);
    /* 0083fb7d: mov dword ptr [0xadad98], eax */ W32((u32)(0xadad98u), r_eax);
    /* 0083fb82: mov word ptr [0xadad9c], ax */ W16((u32)(0xadad9cu), (u16)r_eax);
    /* 0083fb88: mov word ptr [0xadad9e], ax */ W16((u32)(0xadad9eu), (u16)r_eax);
    /* 0083fb8e: mov word ptr [0xadadb4], ax */ W16((u32)(0xadadb4u), (u16)r_eax);
    /* 0083fb94: mov word ptr [0xadadb6], dx */ W16((u32)(0xadadb6u), (u16)r_edx);
    /* 0083fb9b: mov dword ptr [0xadadb8], eax */ W32((u32)(0xadadb8u), r_eax);
    /* 0083fba0: mov edx, 7 */ r_edx = 0x7u;
    /* 0083fba5: mov dword ptr [0xadadbc], eax */ W32((u32)(0xadadbcu), r_eax);
    /* 0083fbaa: mov dword ptr [0xadadc0], eax */ W32((u32)(0xadadc0u), r_eax);
    /* 0083fbaf: mov dword ptr [0xadadc4], eax */ W32((u32)(0xadadc4u), r_eax);
    /* 0083fbb4: mov dword ptr [0xadadc8], eax */ W32((u32)(0xadadc8u), r_eax);
    /* 0083fbb9: mov word ptr [0xadadcc], ax */ W16((u32)(0xadadccu), (u16)r_eax);
    /* 0083fbbf: mov word ptr [0xadadce], ax */ W16((u32)(0xadadceu), (u16)r_eax);
    /* 0083fbc5: mov word ptr [0xadade4], ax */ W16((u32)(0xadade4u), (u16)r_eax);
    /* 0083fbcb: mov word ptr [0xadade6], dx */ W16((u32)(0xadade6u), (u16)r_edx);
    /* 0083fbd2: mov dword ptr [0xadade8], eax */ W32((u32)(0xadade8u), r_eax);
    /* 0083fbd7: mov dword ptr [0xadadec], eax */ W32((u32)(0xadadecu), r_eax);
    /* 0083fbdc: mov edx, 8 */ r_edx = 0x8u;
    /* 0083fbe1: mov dword ptr [0xadadf0], eax */ W32((u32)(0xadadf0u), r_eax);
    /* 0083fbe6: mov dword ptr [0xadadf4], eax */ W32((u32)(0xadadf4u), r_eax);
    /* 0083fbeb: mov dword ptr [0xadadf8], eax */ W32((u32)(0xadadf8u), r_eax);
    /* 0083fbf0: mov word ptr [0xadadfc], ax */ W16((u32)(0xadadfcu), (u16)r_eax);
    /* 0083fbf6: mov word ptr [0xadadfe], ax */ W16((u32)(0xadadfeu), (u16)r_eax);
    /* 0083fbfc: mov word ptr [0xadae14], ax */ W16((u32)(0xadae14u), (u16)r_eax);
    /* 0083fc02: mov word ptr [0xadae16], dx */ W16((u32)(0xadae16u), (u16)r_edx);
    /* 0083fc09: mov dword ptr [0xadae18], eax */ W32((u32)(0xadae18u), r_eax);
    /* 0083fc0e: mov dword ptr [0xadae1c], eax */ W32((u32)(0xadae1cu), r_eax);
    /* 0083fc13: mov dword ptr [0xadae20], eax */ W32((u32)(0xadae20u), r_eax);
    /* 0083fc18: mov edx, 9 */ r_edx = 0x9u;
    /* 0083fc1d: mov dword ptr [0xadae24], eax */ W32((u32)(0xadae24u), r_eax);
    /* 0083fc22: mov dword ptr [0xadae28], eax */ W32((u32)(0xadae28u), r_eax);
    /* 0083fc27: mov word ptr [0xadae2c], ax */ W16((u32)(0xadae2cu), (u16)r_eax);
    /* 0083fc2d: mov word ptr [0xadae2e], ax */ W16((u32)(0xadae2eu), (u16)r_eax);
    /* 0083fc33: mov word ptr [0xadae44], ax */ W16((u32)(0xadae44u), (u16)r_eax);
    /* 0083fc39: mov word ptr [0xadae46], dx */ W16((u32)(0xadae46u), (u16)r_edx);
    /* 0083fc40: mov dword ptr [0xadae48], eax */ W32((u32)(0xadae48u), r_eax);
    /* 0083fc45: mov dword ptr [0xadae4c], eax */ W32((u32)(0xadae4cu), r_eax);
    /* 0083fc4a: mov dword ptr [0xadae50], eax */ W32((u32)(0xadae50u), r_eax);
    /* 0083fc4f: mov dword ptr [0xadae54], eax */ W32((u32)(0xadae54u), r_eax);
    /* 0083fc54: mov edx, 0xa */ r_edx = 0xau;
    /* 0083fc59: mov dword ptr [0xadae58], eax */ W32((u32)(0xadae58u), r_eax);
    /* 0083fc5e: mov word ptr [0xadae5c], ax */ W16((u32)(0xadae5cu), (u16)r_eax);
    /* 0083fc64: mov word ptr [0xadae5e], ax */ W16((u32)(0xadae5eu), (u16)r_eax);
    /* 0083fc6a: mov word ptr [0xadae74], ax */ W16((u32)(0xadae74u), (u16)r_eax);
    /* 0083fc70: mov word ptr [0xadae76], dx */ W16((u32)(0xadae76u), (u16)r_edx);
    /* 0083fc77: mov edx, 0xb */ r_edx = 0xbu;
    /* 0083fc7c: mov dword ptr [0xadae78], eax */ W32((u32)(0xadae78u), r_eax);
    /* 0083fc81: mov dword ptr [0xadae7c], eax */ W32((u32)(0xadae7cu), r_eax);
    /* 0083fc86: mov dword ptr [0xadae80], eax */ W32((u32)(0xadae80u), r_eax);
    /* 0083fc8b: mov dword ptr [0xadae84], eax */ W32((u32)(0xadae84u), r_eax);
    /* 0083fc90: mov dword ptr [0xadae88], eax */ W32((u32)(0xadae88u), r_eax);
    /* 0083fc95: mov word ptr [0xadae8c], ax */ W16((u32)(0xadae8cu), (u16)r_eax);
    /* 0083fc9b: mov word ptr [0xadae8e], ax */ W16((u32)(0xadae8eu), (u16)r_eax);
    /* 0083fca1: mov word ptr [0xadaea4], ax */ W16((u32)(0xadaea4u), (u16)r_eax);
    /* 0083fca7: mov word ptr [0xadaea6], dx */ W16((u32)(0xadaea6u), (u16)r_edx);
    /* 0083fcae: mov dword ptr [0xadaea8], eax */ W32((u32)(0xadaea8u), r_eax);
    /* 0083fcb3: mov edx, 0xc */ r_edx = 0xcu;
    /* 0083fcb8: mov dword ptr [0xadaeac], eax */ W32((u32)(0xadaeacu), r_eax);
    /* 0083fcbd: mov dword ptr [0xadaeb0], eax */ W32((u32)(0xadaeb0u), r_eax);
    /* 0083fcc2: mov dword ptr [0xadaeb4], eax */ W32((u32)(0xadaeb4u), r_eax);
    /* 0083fcc7: mov dword ptr [0xadaeb8], eax */ W32((u32)(0xadaeb8u), r_eax);
    /* 0083fccc: mov word ptr [0xadaebc], ax */ W16((u32)(0xadaebcu), (u16)r_eax);
    /* 0083fcd2: mov word ptr [0xadaebe], ax */ W16((u32)(0xadaebeu), (u16)r_eax);
    /* 0083fcd8: mov word ptr [0xadaed4], ax */ W16((u32)(0xadaed4u), (u16)r_eax);
    /* 0083fcde: mov word ptr [0xadaed6], dx */ W16((u32)(0xadaed6u), (u16)r_edx);
    /* 0083fce5: mov dword ptr [0xadaed8], eax */ W32((u32)(0xadaed8u), r_eax);
    /* 0083fcea: mov dword ptr [0xadaedc], eax */ W32((u32)(0xadaedcu), r_eax);
    /* 0083fcef: mov edx, 0xd */ r_edx = 0xdu;
    /* 0083fcf4: mov dword ptr [0xadaee0], eax */ W32((u32)(0xadaee0u), r_eax);
    /* 0083fcf9: mov dword ptr [0xadaee4], eax */ W32((u32)(0xadaee4u), r_eax);
    /* 0083fcfe: mov dword ptr [0xadaee8], eax */ W32((u32)(0xadaee8u), r_eax);
    /* 0083fd03: mov word ptr [0xadaeec], ax */ W16((u32)(0xadaeecu), (u16)r_eax);
    /* 0083fd09: mov word ptr [0xadaeee], ax */ W16((u32)(0xadaeeeu), (u16)r_eax);
    /* 0083fd0f: mov word ptr [0xadaf04], ax */ W16((u32)(0xadaf04u), (u16)r_eax);
    /* 0083fd15: mov word ptr [0xadaf06], dx */ W16((u32)(0xadaf06u), (u16)r_edx);
    /* 0083fd1c: mov dword ptr [0xadaf08], eax */ W32((u32)(0xadaf08u), r_eax);
    /* 0083fd21: mov dword ptr [0xadaf0c], eax */ W32((u32)(0xadaf0cu), r_eax);
    /* 0083fd26: mov dword ptr [0xadaf10], eax */ W32((u32)(0xadaf10u), r_eax);
    /* 0083fd2b: mov edx, 0xe */ r_edx = 0xeu;
    /* 0083fd30: mov dword ptr [0xadaf14], eax */ W32((u32)(0xadaf14u), r_eax);
    /* 0083fd35: mov dword ptr [0xadaf18], eax */ W32((u32)(0xadaf18u), r_eax);
    /* 0083fd3a: mov word ptr [0xadaf1c], ax */ W16((u32)(0xadaf1cu), (u16)r_eax);
    /* 0083fd40: mov word ptr [0xadaf1e], ax */ W16((u32)(0xadaf1eu), (u16)r_eax);
    /* 0083fd46: mov word ptr [0xadaf34], ax */ W16((u32)(0xadaf34u), (u16)r_eax);
    /* 0083fd4c: mov word ptr [0xadaf36], dx */ W16((u32)(0xadaf36u), (u16)r_edx);
    /* 0083fd53: mov dword ptr [0xadaf38], eax */ W32((u32)(0xadaf38u), r_eax);
    /* 0083fd58: mov dword ptr [0xadaf3c], eax */ W32((u32)(0xadaf3cu), r_eax);
    /* 0083fd5d: mov dword ptr [0xadaf40], eax */ W32((u32)(0xadaf40u), r_eax);
    /* 0083fd62: mov dword ptr [0xadaf44], eax */ W32((u32)(0xadaf44u), r_eax);
    /* 0083fd67: mov edx, 0xf */ r_edx = 0xfu;
    /* 0083fd6c: mov dword ptr [0xadaf48], eax */ W32((u32)(0xadaf48u), r_eax);
    /* 0083fd71: mov word ptr [0xadaf4c], ax */ W16((u32)(0xadaf4cu), (u16)r_eax);
    /* 0083fd77: mov word ptr [0xadaf4e], ax */ W16((u32)(0xadaf4eu), (u16)r_eax);
    /* 0083fd7d: mov word ptr [0xadaf64], ax */ W16((u32)(0xadaf64u), (u16)r_eax);
    /* 0083fd83: mov word ptr [0xadaf66], dx */ W16((u32)(0xadaf66u), (u16)r_edx);
    /* 0083fd8a: mov dword ptr [0xadaf68], eax */ W32((u32)(0xadaf68u), r_eax);
    /* 0083fd8f: mov dword ptr [0xadaf6c], eax */ W32((u32)(0xadaf6cu), r_eax);
    /* 0083fd94: mov dword ptr [0xadaf70], eax */ W32((u32)(0xadaf70u), r_eax);
    /* 0083fd99: mov dword ptr [0xadaf74], eax */ W32((u32)(0xadaf74u), r_eax);
    /* 0083fd9e: mov dword ptr [0xadaf78], eax */ W32((u32)(0xadaf78u), r_eax);
    /* 0083fda3: mov word ptr [0xadaf7c], ax */ W16((u32)(0xadaf7cu), (u16)r_eax);
    /* 0083fda9: mov word ptr [0xadaf7e], ax */ W16((u32)(0xadaf7eu), (u16)r_eax);
    /* 0083fdaf: mov word ptr [0xadb2c8], ax */ W16((u32)(0xadb2c8u), (u16)r_eax);
    /* 0083fdb5: mov eax, 0xadb2cc */ r_eax = 0xadb2ccu;
    /* 0083fdba: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0083fdc0: mov dword ptr [0xadb2c4], 1 */ W32((u32)(0xadb2c4u), 0x1u);
    /* 0083fdca: jmp 0x83fdd8 */ goto L_0083fdd8;
L_0083fdcc:; BB(0x0083fdcc);
    /* 0083fdcc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083fdd1: add esp, 0x190 */ {  u32 a = r_esp; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083fdd7: ret  */ FN_RET(0x0083fa1c); r_esp += 4; return;
L_0083fdd8:; BB(0x0083fdd8);
    /* 0083fdd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083fdda: add esp, 0x190 */ {  u32 a = r_esp; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083fde0: ret  */ FN_RET(0x0083fa1c); r_esp += 4; return;
}

void f_0083fc4d(void)
{
    FN_ENTER(0x0083fc4d);
    /* 0083fc4d: lodsd eax, dword ptr [esi] */ r_eax = R32(r_esi); r_esi += rt_df ? -4 : 4;
    /* 0083fc4e: add byte ptr [ebx + 0xadae54], ah */ { u32 ad = (u32)(r_ebx+0xadae54u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0083fc54: mov edx, 0xa */ r_edx = 0xau;
    /* 0083fc59: mov dword ptr [0xadae58], eax */ W32((u32)(0xadae58u), r_eax);
    /* 0083fc5e: mov word ptr [0xadae5c], ax */ W16((u32)(0xadae5cu), (u16)r_eax);
    /* 0083fc64: mov word ptr [0xadae5e], ax */ W16((u32)(0xadae5eu), (u16)r_eax);
    /* 0083fc6a: mov word ptr [0xadae74], ax */ W16((u32)(0xadae74u), (u16)r_eax);
    /* 0083fc70: mov word ptr [0xadae76], dx */ W16((u32)(0xadae76u), (u16)r_edx);
    /* 0083fc77: mov edx, 0xb */ r_edx = 0xbu;
    /* 0083fc7c: mov dword ptr [0xadae78], eax */ W32((u32)(0xadae78u), r_eax);
    /* 0083fc81: mov dword ptr [0xadae7c], eax */ W32((u32)(0xadae7cu), r_eax);
    /* 0083fc86: mov dword ptr [0xadae80], eax */ W32((u32)(0xadae80u), r_eax);
    /* 0083fc8b: mov dword ptr [0xadae84], eax */ W32((u32)(0xadae84u), r_eax);
    /* 0083fc90: mov dword ptr [0xadae88], eax */ W32((u32)(0xadae88u), r_eax);
    /* 0083fc95: mov word ptr [0xadae8c], ax */ W16((u32)(0xadae8cu), (u16)r_eax);
    /* 0083fc9b: mov word ptr [0xadae8e], ax */ W16((u32)(0xadae8eu), (u16)r_eax);
    /* 0083fca1: mov word ptr [0xadaea4], ax */ W16((u32)(0xadaea4u), (u16)r_eax);
    /* 0083fca7: mov word ptr [0xadaea6], dx */ W16((u32)(0xadaea6u), (u16)r_edx);
    /* 0083fcae: mov dword ptr [0xadaea8], eax */ W32((u32)(0xadaea8u), r_eax);
    /* 0083fcb3: mov edx, 0xc */ r_edx = 0xcu;
    /* 0083fcb8: mov dword ptr [0xadaeac], eax */ W32((u32)(0xadaeacu), r_eax);
    /* 0083fcbd: mov dword ptr [0xadaeb0], eax */ W32((u32)(0xadaeb0u), r_eax);
    /* 0083fcc2: mov dword ptr [0xadaeb4], eax */ W32((u32)(0xadaeb4u), r_eax);
    /* 0083fcc7: mov dword ptr [0xadaeb8], eax */ W32((u32)(0xadaeb8u), r_eax);
    /* 0083fccc: mov word ptr [0xadaebc], ax */ W16((u32)(0xadaebcu), (u16)r_eax);
    /* 0083fcd2: mov word ptr [0xadaebe], ax */ W16((u32)(0xadaebeu), (u16)r_eax);
    /* 0083fcd8: mov word ptr [0xadaed4], ax */ W16((u32)(0xadaed4u), (u16)r_eax);
    /* 0083fcde: mov word ptr [0xadaed6], dx */ W16((u32)(0xadaed6u), (u16)r_edx);
    /* 0083fce5: mov dword ptr [0xadaed8], eax */ W32((u32)(0xadaed8u), r_eax);
    /* 0083fcea: mov dword ptr [0xadaedc], eax */ W32((u32)(0xadaedcu), r_eax);
    /* 0083fcef: mov edx, 0xd */ r_edx = 0xdu;
    /* 0083fcf4: mov dword ptr [0xadaee0], eax */ W32((u32)(0xadaee0u), r_eax);
    /* 0083fcf9: mov dword ptr [0xadaee4], eax */ W32((u32)(0xadaee4u), r_eax);
    /* 0083fcfe: mov dword ptr [0xadaee8], eax */ W32((u32)(0xadaee8u), r_eax);
    /* 0083fd03: mov word ptr [0xadaeec], ax */ W16((u32)(0xadaeecu), (u16)r_eax);
    /* 0083fd09: mov word ptr [0xadaeee], ax */ W16((u32)(0xadaeeeu), (u16)r_eax);
    /* 0083fd0f: mov word ptr [0xadaf04], ax */ W16((u32)(0xadaf04u), (u16)r_eax);
    /* 0083fd15: mov word ptr [0xadaf06], dx */ W16((u32)(0xadaf06u), (u16)r_edx);
    /* 0083fd1c: mov dword ptr [0xadaf08], eax */ W32((u32)(0xadaf08u), r_eax);
    /* 0083fd21: mov dword ptr [0xadaf0c], eax */ W32((u32)(0xadaf0cu), r_eax);
    /* 0083fd26: mov dword ptr [0xadaf10], eax */ W32((u32)(0xadaf10u), r_eax);
    /* 0083fd2b: mov edx, 0xe */ r_edx = 0xeu;
    /* 0083fd30: mov dword ptr [0xadaf14], eax */ W32((u32)(0xadaf14u), r_eax);
    /* 0083fd35: mov dword ptr [0xadaf18], eax */ W32((u32)(0xadaf18u), r_eax);
    /* 0083fd3a: mov word ptr [0xadaf1c], ax */ W16((u32)(0xadaf1cu), (u16)r_eax);
    /* 0083fd40: mov word ptr [0xadaf1e], ax */ W16((u32)(0xadaf1eu), (u16)r_eax);
    /* 0083fd46: mov word ptr [0xadaf34], ax */ W16((u32)(0xadaf34u), (u16)r_eax);
    /* 0083fd4c: mov word ptr [0xadaf36], dx */ W16((u32)(0xadaf36u), (u16)r_edx);
    /* 0083fd53: mov dword ptr [0xadaf38], eax */ W32((u32)(0xadaf38u), r_eax);
    /* 0083fd58: mov dword ptr [0xadaf3c], eax */ W32((u32)(0xadaf3cu), r_eax);
    /* 0083fd5d: mov dword ptr [0xadaf40], eax */ W32((u32)(0xadaf40u), r_eax);
    /* 0083fd62: mov dword ptr [0xadaf44], eax */ W32((u32)(0xadaf44u), r_eax);
    /* 0083fd67: mov edx, 0xf */ r_edx = 0xfu;
    /* 0083fd6c: mov dword ptr [0xadaf48], eax */ W32((u32)(0xadaf48u), r_eax);
    /* 0083fd71: mov word ptr [0xadaf4c], ax */ W16((u32)(0xadaf4cu), (u16)r_eax);
    /* 0083fd77: mov word ptr [0xadaf4e], ax */ W16((u32)(0xadaf4eu), (u16)r_eax);
    /* 0083fd7d: mov word ptr [0xadaf64], ax */ W16((u32)(0xadaf64u), (u16)r_eax);
    /* 0083fd83: mov word ptr [0xadaf66], dx */ W16((u32)(0xadaf66u), (u16)r_edx);
    /* 0083fd8a: mov dword ptr [0xadaf68], eax */ W32((u32)(0xadaf68u), r_eax);
    /* 0083fd8f: mov dword ptr [0xadaf6c], eax */ W32((u32)(0xadaf6cu), r_eax);
    /* 0083fd94: mov dword ptr [0xadaf70], eax */ W32((u32)(0xadaf70u), r_eax);
    /* 0083fd99: mov dword ptr [0xadaf74], eax */ W32((u32)(0xadaf74u), r_eax);
    /* 0083fd9e: mov dword ptr [0xadaf78], eax */ W32((u32)(0xadaf78u), r_eax);
    /* 0083fda3: mov word ptr [0xadaf7c], ax */ W16((u32)(0xadaf7cu), (u16)r_eax);
    /* 0083fda9: mov word ptr [0xadaf7e], ax */ W16((u32)(0xadaf7eu), (u16)r_eax);
    /* 0083fdaf: mov word ptr [0xadb2c8], ax */ W16((u32)(0xadb2c8u), (u16)r_eax);
    /* 0083fdb5: mov eax, 0xadb2cc */ r_eax = 0xadb2ccu;
    /* 0083fdba: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0083fdc0: mov dword ptr [0xadb2c4], 1 */ W32((u32)(0xadb2c4u), 0x1u);
    /* 0083fdca: jmp 0x83fdd8 */ goto L_0083fdd8;
L_0083fdd8:; BB(0x0083fdd8);
    /* 0083fdd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083fdda: add esp, 0x190 */ {  u32 a = r_esp; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083fde0: ret  */ FN_RET(0x0083fc4d); r_esp += 4; return;
}

void f_0083fde4(void) /* sub_83FDE4 */
{
    FN_ENTER(0x0083fde4);
    /* 0083fde4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083fde8: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0083fdeb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083fded: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0083fdef: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083fdf1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083fdf3: lea eax, [ecx + ecx + 0xadb300] */ r_eax = (u32)(r_ecx+r_ecx+0xadb300u);
    /* 0083fdfa: ret  */ FN_RET(0x0083fde4); r_esp += 4; return;
}

void f_0083fdfc(void) /* sub_83FDFC */
{
    FN_ENTER(0x0083fdfc);
    /* 0083fdfc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083fe00: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0083fe03: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083fe05: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083fe07: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083fe09: lea eax, [ecx + ecx + 0xadb360] */ r_eax = (u32)(r_ecx+r_ecx+0xadb360u);
    /* 0083fe10: ret  */ FN_RET(0x0083fdfc); r_esp += 4; return;
}

void f_0083fe14(void)
{
    FN_ENTER(0x0083fe14);
    /* 0083fe14: call 0x84ab10 */ r_esp -= 4; W32(r_esp, 0x83fe19u); f_0084ab10();
    /* 0083fe19: ret  */ FN_RET(0x0083fe14); r_esp += 4; return;
}

void f_0083fe1c(void) /* sub_83FE1C */
{
    FN_ENTER(0x0083fe1c);
    /* 0083fe1c: call 0x84ac5c */ r_esp -= 4; W32(r_esp, 0x83fe21u); f_0084ac5c();
    /* 0083fe21: ret  */ FN_RET(0x0083fe1c); r_esp += 4; return;
}

void f_0083fe24(void) /* sub_83FE24 */
{
    FN_ENTER(0x0083fe24);
    /* 0083fe24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083fe25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083fe26: mov ecx, 0xadb360 */ r_ecx = 0xadb360u;
    /* 0083fe2b: mov edx, 0xadb300 */ r_edx = 0xadb300u;
    /* 0083fe30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0083fe32:; BB(0x0083fe32);
    /* 0083fe32: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083fe34: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 0083fe36: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 0083fe39: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 0083fe3c: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 0083fe3f: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 0083fe42: mov byte ptr [edx + 0x14], bl */ W8((u32)(r_edx+0x14u), (u8)r_ebx);
    /* 0083fe45: mov byte ptr [edx + 0x15], bl */ W8((u32)(r_edx+0x15u), (u8)r_ebx);
    /* 0083fe48: lea ebx, [edx + 0x16] */ r_ebx = (u32)(r_edx+0x16u);
    /* 0083fe4b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0083fe4d: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 0083fe50: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083fe52: mov byte ptr [edx + 0x17], bl */ W8((u32)(r_edx+0x17u), (u8)r_ebx);
    /* 0083fe55: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 0083fe57: mov byte ptr [ecx + 1], bl */ W8((u32)(r_ecx+0x1u), (u8)r_ebx);
    /* 0083fe5a: mov word ptr [ecx + 2], bx */ W16((u32)(r_ecx+0x2u), (u16)r_ebx);
    /* 0083fe5e: mov word ptr [ecx + 4], bx */ W16((u32)(r_ecx+0x4u), (u16)r_ebx);
    /* 0083fe62: mov word ptr [ecx + 6], bx */ W16((u32)(r_ecx+0x6u), (u16)r_ebx);
    /* 0083fe66: lea ebx, [ecx + 8] */ r_ebx = (u32)(r_ecx+0x8u);
    /* 0083fe69: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0083fe6b: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
    /* 0083fe6d: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 0083fe70: mov word ptr [ebx + 8], si */ W16((u32)(r_ebx+0x8u), (u16)r_esi);
    /* 0083fe74: add ecx, 0x12 */ {  u32 a = r_ecx; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083fe77: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083fe7a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083fe7d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083fe80: jl 0x83fe32 */ if ((fS!=fO)) goto L_0083fe32;
L_0083fe82:; BB(0x0083fe82);
    /* 0083fe82: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0083fe84: push 0xadb360 */ { u32 v = 0xadb360u; r_esp -= 4; W32(r_esp, v); }
    /* 0083fe89: push 0xadb300 */ { u32 v = 0xadb300u; r_esp -= 4; W32(r_esp, v); }
    /* 0083fe8e: push 0xadb3a8 */ { u32 v = 0xadb3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0083fe93: call 0x84ac84 */ r_esp -= 4; W32(r_esp, 0x83fe98u); f_0084ac84();
    /* 0083fe98: push 0x83fe14 */ { u32 v = 0x83fe14u; r_esp -= 4; W32(r_esp, v); }
    /* 0083fe9d: call 0x82d73c */ r_esp -= 4; W32(r_esp, 0x83fea2u); f_0082d73c();
    /* 0083fea2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083fea5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083fea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083fea7: ret  */ FN_RET(0x0083fe24); r_esp += 4; return;
}

void f_0083fea8(void) /* sub_83FEA8 */
{
    FN_ENTER(0x0083fea8);
    /* 0083fea8: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x83feadu); f_0082d2a4();
    /* 0083fead: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083feaf: je 0x83febc */ if (fZ) goto L_0083febc;
L_0083feb1:; BB(0x0083feb1);
    /* 0083feb1: push 0xadc8e0 */ { u32 v = 0xadc8e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083feb6: call dword ptr [0x8f81b0] */ { u32 t = R32((u32)(0x8f81b0u)); r_esp -= 4; W32(r_esp, 0x83febcu); call_ind(t); }
L_0083febc:; BB(0x0083febc);
    /* 0083febc: call 0x83fed0 */ r_esp -= 4; W32(r_esp, 0x83fec1u); f_0083fed0();
    /* 0083fec1: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083fec7: call 0x8c0b0c */ r_esp -= 4; W32(r_esp, 0x83feccu); f_008c0b0c();
    /* 0083fecc: ret  */ FN_RET(0x0083fea8); r_esp += 4; return;
}

void f_0083fed0(void) /* sub_83FED0 */
{
    FN_ENTER(0x0083fed0);
    /* 0083fed0: mov eax, dword ptr [0xadc8f8] */ r_eax = R32((u32)(0xadc8f8u));
    /* 0083fed5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083fed7: je 0x83ff38 */ if (fZ) goto L_0083ff38;
L_0083fed9:; BB(0x0083fed9);
    /* 0083fed9: mov eax, dword ptr [0xadc8fc] */ r_eax = R32((u32)(0xadc8fcu));
    /* 0083fede: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083fee0: je 0x83ff48 */ if (fZ) goto L_0083ff48;
L_0083fee2:; BB(0x0083fee2);
    /* 0083fee2: push dword ptr [0xadc958] */ { u32 v = R32((u32)(0xadc958u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083fee8: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 0083feea: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083fef0: call dword ptr [0x8f83a0] */ { u32 t = R32((u32)(0x8f83a0u)); r_esp -= 4; W32(r_esp, 0x83fef6u); call_ind(t); }
    /* 0083fef6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083fef8: mov dword ptr [0xadc958], eax */ W32((u32)(0xadc958u), r_eax);
    /* 0083fefd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083fefe: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083ff04: call 0x8c0b12 */ r_esp -= 4; W32(r_esp, 0x83ff09u); f_008c0b12();
    /* 0083ff09: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083ff0f: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083ff15: call 0x8c0b18 */ r_esp -= 4; W32(r_esp, 0x83ff1au); f_008c0b18();
    /* 0083ff1a: mov dword ptr [0xa21ccc], 1 */ W32((u32)(0xa21cccu), 0x1u);
    /* 0083ff24: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083ff26: mov eax, 1 */ r_eax = 0x1u;
    /* 0083ff2b: mov dword ptr [0xadc900], edx */ W32((u32)(0xadc900u), r_edx);
    /* 0083ff31: mov dword ptr [0xadc8fc], edx */ W32((u32)(0xadc8fcu), r_edx);
    /* 0083ff37: ret  */ FN_RET(0x0083fed0); r_esp += 4; return;
L_0083ff38:; BB(0x0083ff38);
    /* 0083ff38: mov dword ptr [0xa21ccc], 1 */ W32((u32)(0xa21cccu), 0x1u);
    /* 0083ff42: mov eax, 1 */ r_eax = 0x1u;
    /* 0083ff47: ret  */ FN_RET(0x0083fed0); r_esp += 4; return;
L_0083ff48:; BB(0x0083ff48);
    /* 0083ff48: mov ecx, 0x98b170 */ r_ecx = 0x98b170u;
    /* 0083ff4d: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x83ff52u); f_0083c070();
    /* 0083ff52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083ff54: ret  */ FN_RET(0x0083fed0); r_esp += 4; return;
}

void f_0083ff58(void) /* sub_83FF58 */
{
    FN_ENTER(0x0083ff58);
    /* 0083ff58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083ff59: mov ebp, esp */ r_ebp = r_esp;
    /* 0083ff5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0083ff5d: push 0x98b100 */ { u32 v = 0x98b100u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ff62: push 0x85b6a4 */ { u32 v = 0x85b6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ff67: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0083ff6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ff6e: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0083ff75: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083ff78: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0083ff7b: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0083ff7e: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0083ff81: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0083ff84: mov eax, dword ptr [0xa21ccc] */ r_eax = R32((u32)(0xa21cccu));
    /* 0083ff89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ff8b: je 0x83ffab */ if (fZ) goto L_0083ffab;
L_0083ff8d:; BB(0x0083ff8d);
    /* 0083ff8d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0083ff90: cmp eax, 0x281 */ {  u32 a = r_eax; u32 b = 0x281u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ff95: jne 0x840044 */ if (!fZ) goto L_00840044;
L_0083ff9b:; BB(0x0083ff9b);
    /* 0083ff9b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0083ff9e: and eax, 0x3ffffff0 */ {  u32 a = r_eax; u32 b = 0x3ffffff0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083ffa3: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 0083ffa6: jmp 0x840044 */ goto L_00840044;
L_0083ffab:; BB(0x0083ffab);
    /* 0083ffab: call 0x8400e8 */ r_esp -= 4; W32(r_esp, 0x83ffb0u); f_008400e8();
    /* 0083ffb0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0083ffb3: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 0083ffba: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083ffbf: cmp edx, 0x10f */ {  u32 a = r_edx; u32 b = 0x10fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ffc5: je 0x8400aa */ if (fZ) goto L_008400aa;
L_0083ffcb:; BB(0x0083ffcb);
    /* 0083ffcb: cmp edx, 0x282 */ {  u32 a = r_edx; u32 b = 0x282u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ffd1: je 0x84009b */ if (fZ) goto L_0084009b;
L_0083ffd7:; BB(0x0083ffd7);
    /* 0083ffd7: cmp edx, 0x10d */ {  u32 a = r_edx; u32 b = 0x10du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ffdd: je 0x84001b */ if (fZ) goto L_0084001b;
L_0083ffdf:; BB(0x0083ffdf);
    /* 0083ffdf: cmp edx, 0x10e */ {  u32 a = r_edx; u32 b = 0x10eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ffe5: jne 0x840005 */ if (!fZ) goto L_00840005;
L_0083ffe7:; BB(0x0083ffe7);
    /* 0083ffe7: call 0x840214 */ r_esp -= 4; W32(r_esp, 0x83ffecu); f_00840214();
    /* 0083ffec: mov dword ptr [0xadc904], 0 */ W32((u32)(0xadc904u), 0x0u);
    /* 0083fff6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0083fff9: mov dword ptr [0xadc908], 1 */ W32((u32)(0xadc908u), 0x1u);
    /* 00840003: jmp 0x84002c */ goto L_0084002c;
L_00840005:; BB(0x00840005);
    /* 00840005: cmp edx, 0x281 */ {  u32 a = r_edx; u32 b = 0x281u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084000b: jne 0x84002c */ if (!fZ) goto L_0084002c;
L_0084000d:; BB(0x0084000d);
    /* 0084000d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00840010: and edx, 0x3ffffff0 */ {  u32 a = r_edx; u32 b = 0x3ffffff0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00840016: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00840019: jmp 0x84002c */ goto L_0084002c;
L_0084001b:; BB(0x0084001b);
    /* 0084001b: mov edx, 1 */ r_edx = 0x1u;
    /* 00840020: mov dword ptr [0xadc904], edx */ W32((u32)(0xadc904u), r_edx);
    /* 00840026: mov dword ptr [0xadc908], edx */ W32((u32)(0xadc908u), r_edx);
L_0084002c:; BB(0x0084002c);
    /* 0084002c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084002f: je 0x840044 */ if (fZ) goto L_00840044;
L_00840031:; BB(0x00840031);
    /* 00840031: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00840034: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00840037: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0084003e: mov esp, ebp */ r_esp = r_ebp;
    /* 00840040: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840041: ret 0x10 */ FN_RET(0x0083ff58); r_esp += 20; return;
L_00840044:; BB(0x00840044);
    /* 00840044: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0084004b: jmp 0x840070 */ goto L_00840070;
L_00840070:; BB(0x00840070);
    /* 00840070: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840073: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840076: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00840079: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084007c: push dword ptr [0xadc958] */ { u32 v = R32((u32)(0xadc958u)); r_esp -= 4; W32(r_esp, v); }
    /* 00840082: call dword ptr [0x8f83a4] */ { u32 t = R32((u32)(0x8f83a4u)); r_esp -= 4; W32(r_esp, 0x840088u); call_ind(t); }
    /* 00840088: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0084008b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0084008e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00840095: mov esp, ebp */ r_esp = r_ebp;
    /* 00840097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00840098: ret 0x10 */ FN_RET(0x0083ff58); r_esp += 20; return;
L_0084009b:; BB(0x0084009b);
    /* 0084009b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0084009e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084009f: call 0x840284 */ r_esp -= 4; W32(r_esp, 0x8400a4u); f_00840284();
    /* 008400a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008400a5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008400a8: jmp 0x84002c */ goto L_0084002c;
L_008400aa:; BB(0x008400aa);
    /* 008400aa: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008400ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008400ae: call 0x84096c */ r_esp -= 4; W32(r_esp, 0x8400b3u); f_0084096c();
    /* 008400b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008400b4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008400b7: jmp 0x84002c */ goto L_0084002c;
}

