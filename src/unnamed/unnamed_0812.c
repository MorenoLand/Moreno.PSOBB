#include "protos.h"

void f_00812328(void) /* sub_812328 */
{
    FN_ENTER(0x00812328);
    /* 00812328: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00812329: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081232a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081232b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081232e: mov ecx, eax */ r_ecx = r_eax;
    /* 00812330: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00812333: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812335: je 0x81235a */ if (fZ) goto L_0081235a;
L_00812337:; BB(0x00812337);
    /* 00812337: mov ebx, eax */ r_ebx = r_eax;
    /* 00812339: mov edi, edx */ r_edi = r_edx;
    /* 0081233b: mov esi, ecx */ r_esi = r_ecx;
L_0081233d:; BB(0x0081233d);
    /* 0081233d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081233f: je 0x81235a */ if (fZ) goto L_0081235a;
L_00812341:; BB(0x00812341);
    /* 00812341: mov edx, ebx */ r_edx = r_ebx;
    /* 00812343: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00812346: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812348: je 0x812361 */ if (fZ) goto L_00812361;
L_0081234a:; BB(0x0081234a);
    /* 0081234a: mov eax, edx */ r_eax = r_edx;
    /* 0081234c: mov edx, edi */ r_edx = r_edi;
    /* 0081234e: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x812353u); f_00812328();
L_00812353:; BB(0x00812353);
    /* 00812353: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00812356: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812358: jne 0x81233d */ if (!fZ) goto L_0081233d;
L_0081235a:; BB(0x0081235a);
    /* 0081235a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081235d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081235e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081235f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00812360: ret  */ FN_RET(0x00812328); r_esp += 4; return;
L_00812361:; BB(0x00812361);
    /* 00812361: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00812365: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0081236a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0081236e: jmp 0x812353 */ goto L_00812353;
}

void f_00812370(void) /* sub_812370 */
{
    FN_ENTER(0x00812370);
    /* 00812370: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00812371: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00812375: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00812379: mov edx, dword ptr [eax*4 + 0xa06be0] */ r_edx = R32((u32)(r_eax*4+0xa06be0u));
    /* 00812380: mov eax, edx */ r_eax = r_edx;
    /* 00812382: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812384: je 0x81239a */ if (fZ) goto L_0081239a;
L_00812386:; BB(0x00812386);
    /* 00812386: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00812389: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081238c: je 0x81239a */ if (fZ) goto L_0081239a;
L_0081238e:; BB(0x0081238e);
    /* 0081238e: cmp bx, word ptr [ecx] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_ecx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00812391: je 0x81239e */ if (fZ) goto L_0081239e;
L_00812393:; BB(0x00812393);
    /* 00812393: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812396: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812398: jne 0x812386 */ if (!fZ) goto L_00812386;
L_0081239a:; BB(0x0081239a);
    /* 0081239a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081239c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081239d: ret  */ FN_RET(0x00812370); r_esp += 4; return;
L_0081239e:; BB(0x0081239e);
    /* 0081239e: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 008123a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008123a2: ret  */ FN_RET(0x00812370); r_esp += 4; return;
}

void f_008123a4(void) /* sub_8123A4 */
{
    FN_ENTER(0x008123a4);
    /* 008123a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008123a5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008123a9: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008123ad: mov edx, dword ptr [eax*4 + 0x9fba60] */ r_edx = R32((u32)(r_eax*4+0x9fba60u));
    /* 008123b4: mov eax, edx */ r_eax = r_edx;
    /* 008123b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008123b8: je 0x8123ce */ if (fZ) goto L_008123ce;
L_008123ba:; BB(0x008123ba);
    /* 008123ba: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008123bd: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008123c0: je 0x8123ce */ if (fZ) goto L_008123ce;
L_008123c2:; BB(0x008123c2);
    /* 008123c2: cmp bx, word ptr [ecx] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_ecx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 008123c5: je 0x8123d2 */ if (fZ) goto L_008123d2;
L_008123c7:; BB(0x008123c7);
    /* 008123c7: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008123ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008123cc: jne 0x8123ba */ if (!fZ) goto L_008123ba;
L_008123ce:; BB(0x008123ce);
    /* 008123ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008123d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008123d1: ret  */ FN_RET(0x008123a4); r_esp += 4; return;
L_008123d2:; BB(0x008123d2);
    /* 008123d2: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 008123d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008123d6: ret  */ FN_RET(0x008123a4); r_esp += 4; return;
}

void f_008123d8(void) /* sub_8123D8 */
{
    FN_ENTER(0x008123d8);
    /* 008123d8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008123dc: mov eax, dword ptr [edx*4 + 0xaaff00] */ r_eax = R32((u32)(r_edx*4+0xaaff00u));
    /* 008123e3: ret  */ FN_RET(0x008123d8); r_esp += 4; return;
}

void f_008123e4(void) /* sub_8123E4 */
{
    FN_ENTER(0x008123e4);
    /* 008123e4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008123e8: mov eax, dword ptr [edx*4 + 0xaaff60] */ r_eax = R32((u32)(r_edx*4+0xaaff60u));
    /* 008123ef: ret  */ FN_RET(0x008123e4); r_esp += 4; return;
}

void f_008123f0(void) /* sub_8123F0 */
{
    FN_ENTER(0x008123f0);
    /* 008123f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008123f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008123f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008123f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008123f4: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 008123f8: call 0x812480 */ r_esp -= 4; W32(r_esp, 0x8123fdu); f_00812480();
    /* 008123fd: mov ebp, dword ptr [0xab0210] */ r_ebp = R32((u32)(0xab0210u));
    /* 00812403: mov dword ptr [ebx], 0x10 */ W32((u32)(r_ebx), 0x10u);
    /* 00812409: lea edx, [ebx + 0x10] */ r_edx = (u32)(r_ebx+0x10u);
    /* 0081240c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0081240e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00812410:; BB(0x00812410);
    /* 00812410: movsx edi, word ptr [ebp] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00812414: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812417: je 0x81242c */ if (fZ) goto L_0081242c;
L_00812419:; BB(0x00812419);
    /* 00812419: movzx edi, word ptr [ebp + 2] */ r_edi = (u32)R16((u32)(r_ebp+0x2u));
    /* 0081241d: and edi, 0xfffd */ {  u32 a = r_edi; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00812423: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 00812426: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00812429: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0081242c:; BB(0x0081242c);
    /* 0081242c: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081242f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00812432: cmp ecx, 0xba0 */ {  u32 a = r_ecx; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812438: jl 0x812410 */ if ((fS!=fO)) goto L_00812410;
L_0081243a:; BB(0x0081243a);
    /* 0081243a: mov ebp, dword ptr [0xab0214] */ r_ebp = R32((u32)(0xab0214u));
    /* 00812440: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 00812443: lea ecx, [esi + esi + 0x10] */ r_ecx = (u32)(r_esi+r_esi+0x10u);
    /* 00812447: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0081244a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0081244c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0081244e:; BB(0x0081244e);
    /* 0081244e: movsx edi, word ptr [ebp] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00812452: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812455: je 0x81246a */ if (fZ) goto L_0081246a;
L_00812457:; BB(0x00812457);
    /* 00812457: movzx edi, word ptr [ebp + 2] */ r_edi = (u32)R16((u32)(r_ebp+0x2u));
    /* 0081245b: and edi, 0xfffd */ {  u32 a = r_edi; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00812461: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 00812464: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00812467: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0081246a:; BB(0x0081246a);
    /* 0081246a: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081246d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00812470: cmp ecx, 0x5a8 */ {  u32 a = r_ecx; u32 b = 0x5a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00812476: jl 0x81244e */ if ((fS!=fO)) goto L_0081244e;
L_00812478:; BB(0x00812478);
    /* 00812478: mov dword ptr [ebx + 0xc], esi */ W32((u32)(r_ebx+0xcu), r_esi);
    /* 0081247b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081247c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081247d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081247e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081247f: ret  */ FN_RET(0x008123f0); r_esp += 4; return;
}

void f_00812480(void) /* sub_812480 */
{
    FN_ENTER(0x00812480);
    /* 00812480: mov edx, dword ptr [0xaaff00] */ r_edx = R32((u32)(0xaaff00u));
    /* 00812486: add edx, dword ptr [0xaaff04] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081248c: mov ecx, dword ptr [0xaaff44] */ r_ecx = R32((u32)(0xaaff44u));
    /* 00812492: add edx, dword ptr [0xaaff08] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00812498: mov eax, dword ptr [0xaaff60] */ r_eax = R32((u32)(0xaaff60u));
    /* 0081249d: add edx, dword ptr [0xaaff0c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124a3: add edx, dword ptr [0xaaff10] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124a9: add edx, dword ptr [0xaaff14] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124af: add edx, dword ptr [0xaaff18] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124b5: add edx, dword ptr [0xaaff1c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124bb: add edx, dword ptr [0xaaff20] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124c1: add edx, dword ptr [0xaaff24] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff24u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124c7: add edx, dword ptr [0xaaff28] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124cd: add edx, dword ptr [0xaaff2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff2cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124d3: add edx, dword ptr [0xaaff30] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff30u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124d9: add edx, dword ptr [0xaaff34] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff34u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124df: add edx, dword ptr [0xaaff38] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff38u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124e5: add edx, dword ptr [0xaaff3c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff3cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124eb: add edx, dword ptr [0xaaff40] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff40u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008124f1: add eax, dword ptr [0xaaff64] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008124f7: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 008124fa: add eax, dword ptr [0xaaff68] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812500: add eax, dword ptr [0xaaff6c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812506: add eax, dword ptr [0xaaff70] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081250c: add eax, dword ptr [0xaaff74] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff74u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812512: add eax, dword ptr [0xaaff78] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff78u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812518: add eax, dword ptr [0xaaff7c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff7cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081251e: add eax, dword ptr [0xaaff80] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff80u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812524: add eax, dword ptr [0xaaff84] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff84u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081252a: add eax, dword ptr [0xaaff88] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff88u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812530: add eax, dword ptr [0xaaff8c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff8cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812536: add eax, dword ptr [0xaaff90] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff90u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081253c: add eax, dword ptr [0xaaff94] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff94u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812542: add eax, dword ptr [0xaaff98] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff98u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812548: add eax, dword ptr [0xaaff9c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff9cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081254e: add eax, dword ptr [0xaaffa0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaffa0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812554: add eax, dword ptr [0xaaffa4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaffa4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081255a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081255c: lea eax, [edx + edx + 0x10] */ r_eax = (u32)(r_edx+r_edx+0x10u);
    /* 00812560: ret  */ FN_RET(0x00812480); r_esp += 4; return;
}

void f_00812564(void) /* sub_812564 */
{
    FN_ENTER(0x00812564);
    /* 00812564: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00812565: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00812566: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00812568: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0081256c: mov ecx, dword ptr [0xab0210] */ r_ecx = R32((u32)(0xab0210u));
    /* 00812572: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00812574: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_00812576:; BB(0x00812576);
    /* 00812576: movsx edi, word ptr [ecx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 00812579: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081257c: je 0x812589 */ if (fZ) goto L_00812589;
L_0081257e:; BB(0x0081257e);
    /* 0081257e: movzx edi, word ptr [ebp] */ r_edi = (u32)R16((u32)(r_ebp));
    /* 00812582: mov word ptr [ecx + 2], di */ W16((u32)(r_ecx+0x2u), (u16)r_edi);
    /* 00812586: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_00812589:; BB(0x00812589);
    /* 00812589: lea edi, [ecx + 0x44] */ r_edi = (u32)(r_ecx+0x44u);
    /* 0081258c: movsx ecx, word ptr [ecx + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 00812590: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812593: je 0x8125a0 */ if (fZ) goto L_008125a0;
L_00812595:; BB(0x00812595);
    /* 00812595: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 00812599: mov word ptr [edi + 2], cx */ W16((u32)(r_edi+0x2u), (u16)r_ecx);
    /* 0081259d: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_008125a0:; BB(0x008125a0);
    /* 008125a0: movsx ecx, word ptr [edi + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x44u));
    /* 008125a4: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008125a7: je 0x8125b4 */ if (fZ) goto L_008125b4;
L_008125a9:; BB(0x008125a9);
    /* 008125a9: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 008125ad: mov word ptr [edi + 0x46], cx */ W16((u32)(r_edi+0x46u), (u16)r_ecx);
    /* 008125b1: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_008125b4:; BB(0x008125b4);
    /* 008125b4: lea ecx, [edi + 0x88] */ r_ecx = (u32)(r_edi+0x88u);
    /* 008125ba: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008125bd: cmp edx, 0xba0 */ {  u32 a = r_edx; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008125c3: jl 0x812576 */ if ((fS!=fO)) goto L_00812576;
L_008125c5:; BB(0x008125c5);
    /* 008125c5: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008125c8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008125ca: mov eax, dword ptr [0xab0214] */ r_eax = R32((u32)(0xab0214u));
    /* 008125cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_008125d1:; BB(0x008125d1);
    /* 008125d1: movsx ebp, word ptr [eax] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008125d4: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008125d7: je 0x8125e3 */ if (fZ) goto L_008125e3;
L_008125d9:; BB(0x008125d9);
    /* 008125d9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008125dc: mov word ptr [eax + 2], bp */ W16((u32)(r_eax+0x2u), (u16)r_ebp);
    /* 008125e0: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008125e3:; BB(0x008125e3);
    /* 008125e3: lea ebp, [eax + 0x48] */ r_ebp = (u32)(r_eax+0x48u);
    /* 008125e6: movsx eax, word ptr [eax + 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x48u));
    /* 008125ea: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008125ed: je 0x8125f9 */ if (fZ) goto L_008125f9;
L_008125ef:; BB(0x008125ef);
    /* 008125ef: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 008125f2: mov word ptr [ebp + 2], ax */ W16((u32)(r_ebp+0x2u), (u16)r_eax);
    /* 008125f6: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008125f9:; BB(0x008125f9);
    /* 008125f9: lea eax, [ebp + 0x48] */ r_eax = (u32)(r_ebp+0x48u);
    /* 008125fc: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008125ff: cmp ecx, 0x5a8 */ {  u32 a = r_ecx; u32 b = 0x5a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00812605: jl 0x8125d1 */ if ((fS!=fO)) goto L_008125d1;
L_00812607:; BB(0x00812607);
    /* 00812607: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00812608: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00812609: ret  */ FN_RET(0x00812564); r_esp += 4; return;
}

void f_0081260c(void) /* sub_81260C */
{
    FN_ENTER(0x0081260c);
    /* 0081260c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081260d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00812610: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x812615u); f_00807ac0();
    /* 00812615: mov ebx, dword ptr [eax*4 + 0xa06be0] */ r_ebx = R32((u32)(r_eax*4+0xa06be0u));
    /* 0081261c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081261e: je 0x812752 */ if (fZ) goto L_00812752;
L_00812624:; BB(0x00812624);
    /* 00812624: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 00812629: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081262b: je 0x812643 */ if (fZ) goto L_00812643;
L_0081262d:; BB(0x0081262d);
    /* 0081262d: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 00812632: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812634: je 0x812643 */ if (fZ) goto L_00812643;
L_00812636:; BB(0x00812636);
    /* 00812636: call 0x6afae4 */ r_esp -= 4; W32(r_esp, 0x81263bu); f_006afae4();
    /* 0081263b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081263d: je 0x812752 */ if (fZ) goto L_00812752;
L_00812643:; BB(0x00812643);
    /* 00812643: mov ecx, dword ptr [0xab0258] */ r_ecx = R32((u32)(0xab0258u));
    /* 00812649: mov eax, dword ptr [0xab0254] */ r_eax = R32((u32)(0xab0254u));
    /* 0081264e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00812650: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00812652: jle 0x812752 */ if ((fZ||fS!=fO)) goto L_00812752;
L_00812658:; BB(0x00812658);
    /* 00812658: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0081265c: mov esi, ebx */ r_esi = r_ebx;
    /* 0081265e: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00812662: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00812666: mov ebx, edx */ r_ebx = r_edx;
    /* 00812668: mov ebp, ecx */ r_ebp = r_ecx;
L_0081266a:; BB(0x0081266a);
    /* 0081266a: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0081266e: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812671: je 0x812738 */ if (fZ) goto L_00812738;
L_00812677:; BB(0x00812677);
    /* 00812677: movsx edi, word ptr [ebp + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0081267b: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812681: jne 0x812738 */ if (!fZ) goto L_00812738;
L_00812687:; BB(0x00812687);
    /* 00812687: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081268d: jne 0x812738 */ if (!fZ) goto L_00812738;
L_00812693:; BB(0x00812693);
    /* 00812693: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00812695: fld dword ptr [esi + edx*8 + 8] */ FPUSH(R_F32((u32)(r_esi+r_edx*8+0x8u)));
    /* 00812699: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0081269d: lea edi, [ebp + 0x10] */ r_edi = (u32)(r_ebp+0x10u);
    /* 008126a0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x8126a5u); f_006dc358();
    /* 008126a5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008126a8: je 0x812779 */ if (fZ) goto L_00812779;
L_008126ae:; BB(0x008126ae);
    /* 008126ae: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 008126b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008126b5: je 0x812772 */ if (fZ) goto L_00812772;
L_008126bb:; BB(0x008126bb);
    /* 008126bb: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008126c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008126c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008126c2: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x8126c7u); f_0078ea2c();
    /* 008126c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008126ca: fcomp dword ptr [esp + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x14u))); FPOP();
    /* 008126ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008126d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008126d1: jae 0x812733 */ if (!fC) goto L_00812733;
L_008126d3:; BB(0x008126d3);
    /* 008126d3: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 008126d8: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 008126dc: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 008126e1: mov word ptr [ebp + 4], di */ W16((u32)(r_ebp+0x4u), (u16)r_edi);
    /* 008126e5: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x8126eau); f_00807ac0();
    /* 008126ea: mov eax, dword ptr [eax*4 + 0xa06be0] */ r_eax = R32((u32)(r_eax*4+0xa06be0u));
    /* 008126f1: movsx edi, word ptr [ebp] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008126f5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008126f7: mov edi, dword ptr [eax + edi*8 + 4] */ r_edi = R32((u32)(r_eax+r_edi*8+0x4u));
    /* 008126fb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008126fd: je 0x8127fd */ if (fZ) goto L_008127fd;
L_00812703:; BB(0x00812703);
    /* 00812703: lea eax, [ebp + 4] */ r_eax = (u32)(r_ebp+0x4u);
    /* 00812706: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00812707: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x812709u); call_ind(t); }
    /* 00812709: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0081270a:; BB(0x0081270a);
    /* 0081270a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081270c: je 0x812757 */ if (fZ) goto L_00812757;
L_0081270e:; BB(0x0081270e);
    /* 0081270e: movzx edi, word ptr [ebp + 0xc] */ r_edi = (u32)R16((u32)(r_ebp+0xcu));
    /* 00812712: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 00812715: mov word ptr [eax + 0x28], di */ W16((u32)(r_eax+0x28u), (u16)r_edi);
    /* 00812719: mov dword ptr [eax + 0x80], ebp */ W32((u32)(r_eax+0x80u), r_ebp);
    /* 0081271f: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 00812723: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00812728: mov word ptr [ebp + 2], ax */ W16((u32)(r_ebp+0x2u), (u16)r_eax);
    /* 0081272c: mov eax, dword ptr [0xab0254] */ r_eax = R32((u32)(0xab0254u));
    /* 00812731: jmp 0x812738 */ goto L_00812738;
L_00812733:; BB(0x00812733);
    /* 00812733: mov eax, dword ptr [0xab0254] */ r_eax = R32((u32)(0xab0254u));
L_00812738:; BB(0x00812738);
    /* 00812738: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081273b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081273e: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812740: jl 0x81266a */ if ((fS!=fO)) goto L_0081266a;
L_00812746:; BB(0x00812746);
    /* 00812746: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0081274a: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0081274e: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00812752:; BB(0x00812752);
    /* 00812752: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00812755: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00812756: ret  */ FN_RET(0x0081260c); r_esp += 4; return;
L_00812757:; BB(0x00812757);
    /* 00812757: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 0081275b: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
    /* 00812762: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00812767: mov word ptr [ebp + 2], ax */ W16((u32)(r_ebp+0x2u), (u16)r_eax);
    /* 0081276b: mov eax, dword ptr [0xab0254] */ r_eax = R32((u32)(0xab0254u));
    /* 00812770: jmp 0x812738 */ goto L_00812738;
L_00812772:; BB(0x00812772);
    /* 00812772: mov eax, dword ptr [0xab0254] */ r_eax = R32((u32)(0xab0254u));
    /* 00812777: jmp 0x812738 */ goto L_00812738;
L_00812779:; BB(0x00812779);
    /* 00812779: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0081277e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812780: je 0x8127f3 */ if (fZ) goto L_008127f3;
L_00812782:; BB(0x00812782);
    /* 00812782: mov ecx, dword ptr [0xa0f45c] */ r_ecx = R32((u32)(0xa0f45cu));
    /* 00812788: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0081278a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081278c: jle 0x8127e9 */ if ((fZ||fS!=fO)) goto L_008127e9;
L_0081278e:; BB(0x0081278e);
    /* 0081278e: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00812792: mov ebp, edx */ r_ebp = r_edx;
    /* 00812794: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00812797: mov esi, ecx */ r_esi = r_ecx;
    /* 00812799: jmp 0x8127a0 */ goto L_008127a0;
L_0081279b:; BB(0x0081279b);
    /* 0081279b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_008127a0:; BB(0x008127a0);
    /* 008127a0: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 008127a4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008127a6: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 008127a9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008127ab: lea eax, [eax + ecx + 0xd4] */ r_eax = (u32)(r_eax+r_ecx+0xd4u);
    /* 008127b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008127b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008127b4: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x8127b9u); f_0078ea2c();
    /* 008127b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008127bc: fcomp dword ptr [esp + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x14u))); FPOP();
    /* 008127c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008127c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008127c3: jb 0x8127dd */ if (fC) goto L_008127dd;
L_008127c5:; BB(0x008127c5);
    /* 008127c5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008127c8: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008127ca: jl 0x81279b */ if ((fS!=fO)) goto L_0081279b;
L_008127cc:; BB(0x008127cc);
    /* 008127cc: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 008127d0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 008127d3: mov eax, dword ptr [0xab0254] */ r_eax = R32((u32)(0xab0254u));
    /* 008127d8: jmp 0x812738 */ goto L_00812738;
L_008127dd:; BB(0x008127dd);
    /* 008127dd: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 008127e1: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 008127e4: jmp 0x8126d3 */ goto L_008126d3;
L_008127e9:; BB(0x008127e9);
    /* 008127e9: mov eax, dword ptr [0xab0254] */ r_eax = R32((u32)(0xab0254u));
    /* 008127ee: jmp 0x812738 */ goto L_00812738;
L_008127f3:; BB(0x008127f3);
    /* 008127f3: mov eax, dword ptr [0xab0254] */ r_eax = R32((u32)(0xab0254u));
    /* 008127f8: jmp 0x812738 */ goto L_00812738;
L_008127fd:; BB(0x008127fd);
    /* 008127fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008127ff: jmp 0x81270a */ goto L_0081270a;
}

void f_00812804(void) /* sub_812804 */
{
    FN_ENTER(0x00812804);
    /* 00812804: mov dword ptr [0xab023c], 0x3f800000 */ W32((u32)(0xab023cu), 0x3f800000u);
    /* 0081280e: mov dword ptr [0xab0240], 0x41000000 */ W32((u32)(0xab0240u), 0x41000000u);
    /* 00812818: mov dword ptr [0xab0244], 0x3fc00000 */ W32((u32)(0xab0244u), 0x3fc00000u);
    /* 00812822: ret  */ FN_RET(0x00812804); r_esp += 4; return;
}

void f_00812824(void) /* sub_812824 */
{
    FN_ENTER(0x00812824);
    /* 00812824: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00812825: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00812828: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0081282c: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081282f: jg 0x81288b */ if ((!fZ&&fS==fO)) goto L_0081288b;
L_00812831:; BB(0x00812831);
    /* 00812831: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00812833: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812835: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00812837: jle 0x812879 */ if ((fZ||fS!=fO)) goto L_00812879;
L_00812839:; BB(0x00812839);
    /* 00812839: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081283c: jl 0x81286b */ if ((fS!=fO)) goto L_0081286b;
L_0081283e:; BB(0x0081283e);
    /* 0081283e: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
L_00812841:; BB(0x00812841);
    /* 00812841: add ebp, dword ptr [ecx*4 + 0xaaff60] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812848: add ebp, dword ptr [ecx*4 + 0xaaff64] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx*4+0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081284f: add ebp, dword ptr [ecx*4 + 0xaaff68] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx*4+0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812856: add ebp, dword ptr [ecx*4 + 0xaaff6c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx*4+0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0081285d: add ebp, dword ptr [ecx*4 + 0xaaff70] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx*4+0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812864: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00812867: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812869: jle 0x812841 */ if ((fZ||fS!=fO)) goto L_00812841;
L_0081286b:; BB(0x0081286b);
    /* 0081286b: add ebp, dword ptr [ecx*4 + 0xaaff60] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812872: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00812875: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812877: jl 0x81286b */ if ((fS!=fO)) goto L_0081286b;
L_00812879:; BB(0x00812879);
    /* 00812879: lea edx, [ebp + ebp*8] */ r_edx = (u32)(r_ebp+r_ebp*8);
    /* 0081287d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081287f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00812881: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00812883: add edx, dword ptr [0xab0214] */ {  u32 a = r_edx; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00812889: jmp 0x81288d */ goto L_0081288d;
L_0081288b:; BB(0x0081288b);
    /* 0081288b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0081288d:; BB(0x0081288d);
    /* 0081288d: mov eax, dword ptr [eax*4 + 0xaaff60] */ r_eax = R32((u32)(r_eax*4+0xaaff60u));
    /* 00812894: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00812896: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00812898: jle 0x812985 */ if ((fZ||fS!=fO)) goto L_00812985;
L_0081289e:; BB(0x0081289e);
    /* 0081289e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008128a1: mov ebx, eax */ r_ebx = r_eax;
    /* 008128a3: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008128a7: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008128ab: mov esi, edx */ r_esi = r_edx;
L_008128ad:; BB(0x008128ad);
    /* 008128ad: movsx edi, word ptr [esi + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 008128b1: test edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008128b7: jne 0x81296c */ if (!fZ) goto L_0081296c;
L_008128bd:; BB(0x008128bd);
    /* 008128bd: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 008128c0: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008128c3: je 0x81296c */ if (fZ) goto L_0081296c;
L_008128c9:; BB(0x008128c9);
    /* 008128c9: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008128cf: jne 0x8128dd */ if (!fZ) goto L_008128dd;
L_008128d1:; BB(0x008128d1);
    /* 008128d1: movsx ecx, word ptr [esi + 0xe] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xeu));
    /* 008128d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008128d7: jne 0x81296c */ if (!fZ) goto L_0081296c;
L_008128dd:; BB(0x008128dd);
    /* 008128dd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008128df: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x8128e4u); f_00807ac0();
    /* 008128e4: mov eax, dword ptr [eax*4 + 0x9fba60] */ r_eax = R32((u32)(r_eax*4+0x9fba60u));
    /* 008128eb: mov ecx, eax */ r_ecx = r_eax;
    /* 008128ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008128ef: je 0x81290c */ if (fZ) goto L_0081290c;
L_008128f1:; BB(0x008128f1);
    /* 008128f1: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 008128f4: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008128f7: je 0x81290c */ if (fZ) goto L_0081290c;
L_008128f9:; BB(0x008128f9);
    /* 008128f9: cmp dx, word ptr [esi] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esi)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008128fc: je 0x812993 */ if (fZ) goto L_00812993;
L_00812902:; BB(0x00812902);
    /* 00812902: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00812905: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812908: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081290a: jne 0x8128f1 */ if (!fZ) goto L_008128f1;
L_0081290c:; BB(0x0081290c);
    /* 0081290c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0081290e:; BB(0x0081290e);
    /* 0081290e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812910: je 0x81298a */ if (fZ) goto L_0081298a;
L_00812912:; BB(0x00812912);
    /* 00812912: movzx edi, word ptr [esi + 2] */ r_edi = (u32)R16((u32)(r_esi+0x2u));
    /* 00812916: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 00812919: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0081291f: mov word ptr [esi + 2], di */ W16((u32)(r_esi+0x2u), (u16)r_edi);
    /* 00812923: movzx edi, word ptr [esi + 0xc] */ r_edi = (u32)R16((u32)(r_esi+0xcu));
    /* 00812927: mov word ptr [ecx + 0x28], di */ W16((u32)(r_ecx+0x28u), (u16)r_edi);
    /* 0081292b: movzx edi, word ptr [esi + 0xe] */ r_edi = (u32)R16((u32)(r_esi+0xeu));
    /* 0081292f: mov word ptr [ecx + 0x2a], di */ W16((u32)(r_ecx+0x2au), (u16)r_edi);
    /* 00812933: movsx edi, word ptr [esi + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00812937: mov word ptr [ecx + 0x2c], di */ W16((u32)(r_ecx+0x2cu), (u16)r_edi);
    /* 0081293b: mov dword ptr [ecx + 0x80], esi */ W32((u32)(r_ecx+0x80u), r_esi);
    /* 00812941: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812944: je 0x81295e */ if (fZ) goto L_0081295e;
L_00812946:; BB(0x00812946);
    /* 00812946: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00812948: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081294a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081294c: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0081294f: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812951: add eax, dword ptr [0xab02b8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xab02b8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812957: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00812958: call dword ptr [edx + 0x144] */ { u32 t = R32((u32)(r_edx+0x144u)); r_esp -= 4; W32(r_esp, 0x81295eu); call_ind(t); }
L_0081295e:; BB(0x0081295e);
    /* 0081295e: movzx ecx, word ptr [esi + 2] */ r_ecx = (u32)R16((u32)(r_esi+0x2u));
    /* 00812962: and ecx, 0xfffe */ {  u32 a = r_ecx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00812968: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
L_0081296c:; BB(0x0081296c);
    /* 0081296c: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081296f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812972: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812974: jl 0x8128ad */ if ((fS!=fO)) goto L_008128ad;
L_0081297a:; BB(0x0081297a);
    /* 0081297a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0081297d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00812981: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
L_00812985:; BB(0x00812985);
    /* 00812985: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00812988: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00812989: ret  */ FN_RET(0x00812824); r_esp += 4; return;
L_0081298a:; BB(0x0081298a);
    /* 0081298a: mov dword ptr [esi + 0x44], 0 */ W32((u32)(r_esi+0x44u), 0x0u);
    /* 00812991: jmp 0x81295e */ goto L_0081295e;
L_00812993:; BB(0x00812993);
    /* 00812993: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00812996: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00812998: jl 0x81290c */ if ((fS!=fO)) goto L_0081290c;
L_0081299e:; BB(0x0081299e);
    /* 0081299e: lea ecx, [esi + 4] */ r_ecx = (u32)(r_esi+0x4u);
    /* 008129a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008129a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8129a4u); call_ind(t); }
    /* 008129a4: mov ecx, eax */ r_ecx = r_eax;
    /* 008129a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008129a9: jmp 0x81290e */ goto L_0081290e;
}

void f_008129b0(void) /* sub_8129B0 */
{
    FN_ENTER(0x008129b0);
    /* 008129b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008129b1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008129b4: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008129b8: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008129bb: jg 0x812a1c */ if ((!fZ&&fS==fO)) goto L_00812a1c;
L_008129bd:; BB(0x008129bd);
    /* 008129bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008129bf: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008129c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008129c3: jle 0x812a05 */ if ((fZ||fS!=fO)) goto L_00812a05;
L_008129c5:; BB(0x008129c5);
    /* 008129c5: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008129c8: jl 0x8129f7 */ if ((fS!=fO)) goto L_008129f7;
L_008129ca:; BB(0x008129ca);
    /* 008129ca: lea eax, [edx - 6] */ r_eax = (u32)(r_edx+0xfffffffau);
L_008129cd:; BB(0x008129cd);
    /* 008129cd: add ecx, dword ptr [ebp*4 + 0xaaff00] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008129d4: add ecx, dword ptr [ebp*4 + 0xaaff04] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp*4+0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008129db: add ecx, dword ptr [ebp*4 + 0xaaff08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp*4+0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008129e2: add ecx, dword ptr [ebp*4 + 0xaaff0c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp*4+0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008129e9: add ecx, dword ptr [ebp*4 + 0xaaff10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp*4+0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008129f0: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008129f3: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008129f5: jle 0x8129cd */ if ((fZ||fS!=fO)) goto L_008129cd;
L_008129f7:; BB(0x008129f7);
    /* 008129f7: add ecx, dword ptr [ebp*4 + 0xaaff00] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008129fe: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812a01: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812a03: jl 0x8129f7 */ if ((fS!=fO)) goto L_008129f7;
L_00812a05:; BB(0x00812a05);
    /* 00812a05: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00812a07: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00812a09: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00812a0c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812a0e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812a10: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812a12: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812a14: add eax, dword ptr [0xab0210] */ {  u32 a = r_eax; u32 b = R32((u32)(0xab0210u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812a1a: jmp 0x812a1e */ goto L_00812a1e;
L_00812a1c:; BB(0x00812a1c);
    /* 00812a1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00812a1e:; BB(0x00812a1e);
    /* 00812a1e: mov edx, dword ptr [edx*4 + 0xaaff00] */ r_edx = R32((u32)(r_edx*4+0xaaff00u));
    /* 00812a25: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00812a27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00812a29: jle 0x812b15 */ if ((fZ||fS!=fO)) goto L_00812b15;
L_00812a2f:; BB(0x00812a2f);
    /* 00812a2f: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00812a32: mov ebx, edx */ r_ebx = r_edx;
    /* 00812a34: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00812a38: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00812a3c: mov esi, eax */ r_esi = r_eax;
L_00812a3e:; BB(0x00812a3e);
    /* 00812a3e: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00812a42: test al, 0xa */ {  u32 a = (u8)r_eax; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00812a44: jne 0x812afc */ if (!fZ) goto L_00812afc;
L_00812a4a:; BB(0x00812a4a);
    /* 00812a4a: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 00812a4d: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812a50: je 0x812afc */ if (fZ) goto L_00812afc;
L_00812a56:; BB(0x00812a56);
    /* 00812a56: test al, 0x11 */ {  u32 a = (u8)r_eax; u32 b = 0x11u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00812a58: jne 0x812a66 */ if (!fZ) goto L_00812a66;
L_00812a5a:; BB(0x00812a5a);
    /* 00812a5a: movsx ecx, word ptr [esi + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xau));
    /* 00812a5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812a60: jne 0x812afc */ if (!fZ) goto L_00812afc;
L_00812a66:; BB(0x00812a66);
    /* 00812a66: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812a69: je 0x812aa6 */ if (fZ) goto L_00812aa6;
L_00812a6b:; BB(0x00812a6b);
    /* 00812a6b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00812a6d: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x812a72u); f_00807ac0();
    /* 00812a72: mov eax, dword ptr [eax*4 + 0xa06be0] */ r_eax = R32((u32)(r_eax*4+0xa06be0u));
    /* 00812a79: mov ecx, eax */ r_ecx = r_eax;
    /* 00812a7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812a7d: je 0x812b47 */ if (fZ) goto L_00812b47;
L_00812a83:; BB(0x00812a83);
    /* 00812a83: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 00812a86: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812a89: je 0x812b3e */ if (fZ) goto L_00812b3e;
L_00812a8f:; BB(0x00812a8f);
    /* 00812a8f: cmp dx, word ptr [esi] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esi)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00812a92: je 0x812b1a */ if (fZ) goto L_00812b1a;
L_00812a98:; BB(0x00812a98);
    /* 00812a98: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00812a9b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812a9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812aa0: jne 0x812a83 */ if (!fZ) goto L_00812a83;
L_00812aa2:; BB(0x00812aa2);
    /* 00812aa2: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
L_00812aa6:; BB(0x00812aa6);
    /* 00812aa6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00812aa8:; BB(0x00812aa8);
    /* 00812aa8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812aaa: je 0x812b50 */ if (fZ) goto L_00812b50;
L_00812ab0:; BB(0x00812ab0);
    /* 00812ab0: movzx edi, word ptr [esi + 0xc] */ r_edi = (u32)R16((u32)(r_esi+0xcu));
    /* 00812ab4: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 00812ab7: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00812abc: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 00812ac0: mov word ptr [ecx + 0x28], di */ W16((u32)(r_ecx+0x28u), (u16)r_edi);
    /* 00812ac4: movsx edi, word ptr [esi + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00812ac8: mov word ptr [ecx + 0x2c], di */ W16((u32)(r_ecx+0x2cu), (u16)r_edi);
    /* 00812acc: mov dword ptr [ecx + 0x80], esi */ W32((u32)(r_ecx+0x80u), r_esi);
    /* 00812ad2: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812ad5: je 0x812aef */ if (fZ) goto L_00812aef;
L_00812ad7:; BB(0x00812ad7);
    /* 00812ad7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00812ad9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00812adb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812add: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812adf: add edi, dword ptr [0xab02bc] */ {  u32 a = r_edi; u32 b = R32((u32)(0xab02bcu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812ae5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00812ae6: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x812ae9u); call_ind(t); }
    /* 00812ae9: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00812aed: jmp 0x812af3 */ goto L_00812af3;
L_00812aef:; BB(0x00812aef);
    /* 00812aef: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
L_00812af3:; BB(0x00812af3);
    /* 00812af3: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00812af8: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
L_00812afc:; BB(0x00812afc);
    /* 00812afc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812aff: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812b02: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812b04: jl 0x812a3e */ if ((fS!=fO)) goto L_00812a3e;
L_00812b0a:; BB(0x00812b0a);
    /* 00812b0a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00812b0d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00812b11: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
L_00812b15:; BB(0x00812b15);
    /* 00812b15: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00812b18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00812b19: ret  */ FN_RET(0x008129b0); r_esp += 4; return;
L_00812b1a:; BB(0x00812b1a);
    /* 00812b1a: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00812b1d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00812b1f: jl 0x812b35 */ if ((fS!=fO)) goto L_00812b35;
L_00812b21:; BB(0x00812b21);
    /* 00812b21: lea ecx, [esi + 4] */ r_ecx = (u32)(r_esi+0x4u);
    /* 00812b24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00812b25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x812b27u); call_ind(t); }
    /* 00812b27: mov ecx, eax */ r_ecx = r_eax;
    /* 00812b29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00812b2c: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00812b30: jmp 0x812aa8 */ goto L_00812aa8;
L_00812b35:; BB(0x00812b35);
    /* 00812b35: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00812b39: jmp 0x812aa6 */ goto L_00812aa6;
L_00812b3e:; BB(0x00812b3e);
    /* 00812b3e: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00812b42: jmp 0x812aa6 */ goto L_00812aa6;
L_00812b47:; BB(0x00812b47);
    /* 00812b47: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00812b4b: jmp 0x812aa6 */ goto L_00812aa6;
L_00812b50:; BB(0x00812b50);
    /* 00812b50: mov dword ptr [esi + 0x40], 0 */ W32((u32)(r_esi+0x40u), 0x0u);
    /* 00812b57: jmp 0x812af3 */ goto L_00812af3;
}

void f_00812b5c(void) /* sub_812B5C */
{
    FN_ENTER(0x00812b5c);
    /* 00812b5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00812b5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00812b5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00812b5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00812b60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00812b63: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00812b65: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 00812b6b: movsx eax, word ptr [0xab02c0] */ r_eax = (u32)(i32)(i16)R16((u32)(0xab02c0u));
    /* 00812b72: mov dword ptr [0xab0280], edx */ W32((u32)(0xab0280u), r_edx);
    /* 00812b78: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00812b7a: jne 0x812d20 */ if (!fZ) goto L_00812d20;
L_00812b80:; BB(0x00812b80);
    /* 00812b80: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00812b82: jne 0x812c90 */ if (!fZ) goto L_00812c90;
L_00812b88:; BB(0x00812b88);
    /* 00812b88: mov edx, dword ptr [0xab0258] */ r_edx = R32((u32)(0xab0258u));
    /* 00812b8e: mov edi, dword ptr [0xab0254] */ r_edi = R32((u32)(0xab0254u));
    /* 00812b94: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00812b99: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00812b9b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00812b9d: jle 0x812c82 */ if ((fZ||fS!=fO)) goto L_00812c82;
L_00812ba3:; BB(0x00812ba3);
    /* 00812ba3: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00812ba7: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00812bab: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00812baf: mov edi, ebp */ r_edi = r_ebp;
    /* 00812bb1: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00812bb4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812bb6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00812bb9: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 00812bbc: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812bbe: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812bc0: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812bc2: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812bc4: lea eax, [edx + ebp + 0xc] */ r_eax = (u32)(r_edx+r_ebp+0xcu);
    /* 00812bc8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00812bcc: mov ebx, eax */ r_ebx = r_eax;
    /* 00812bce: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00812bd1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812bd3: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 00812bd6: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812bd8: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812bda: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812bdc: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812bde: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_00812be0:; BB(0x00812be0);
    /* 00812be0: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00812be4: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00812be7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812be9: je 0x812bfd */ if (fZ) goto L_00812bfd;
L_00812beb:; BB(0x00812beb);
    /* 00812beb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00812bec: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x812bf1u); f_00807ac8();
    /* 00812bf1: mov edi, eax */ r_edi = r_eax;
    /* 00812bf3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00812bf6: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00812bf9: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_00812bfd:; BB(0x00812bfd);
    /* 00812bfd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812bff: je 0x812c63 */ if (fZ) goto L_00812c63;
L_00812c01:; BB(0x00812c01);
    /* 00812c01: lea edx, [ebp + 0x10] */ r_edx = (u32)(r_ebp+0x10u);
    /* 00812c04: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00812c08: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00812c0d: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x812c12u); f_0082d990();
    /* 00812c12: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00812c15: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00812c18: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812c1a: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00812c1d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x812c22u); f_00830b74();
    /* 00812c22: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00812c25: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812c27: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x812c2cu); f_00830c04();
    /* 00812c2c: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00812c2f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812c31: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x812c36u); f_0082e9e4();
    /* 00812c36: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 00812c39: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812c3b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x812c40u); f_0082d8bc();
    /* 00812c40: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00812c44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00812c45: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812c47: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x812c4cu); f_00830aa0();
    /* 00812c4c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x812c51u); f_0082da80();
    /* 00812c51: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00812c54: add dword ptr [ebx + 0x10], edx */ { u32 ad = (u32)(r_ebx+0x10u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00812c57: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 00812c5a: add dword ptr [ebx + 0x14], ecx */ { u32 ad = (u32)(r_ebx+0x14u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00812c5d: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00812c60: add dword ptr [ebx + 0x18], edx */ { u32 ad = (u32)(r_ebx+0x18u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00812c63:; BB(0x00812c63);
    /* 00812c63: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00812c67: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00812c6a: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812c6d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812c70: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812c72: jl 0x812be0 */ if ((fS!=fO)) goto L_00812be0;
L_00812c78:; BB(0x00812c78);
    /* 00812c78: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00812c7b: movsx eax, word ptr [0xab02c0] */ r_eax = (u32)(i32)(i16)R16((u32)(0xab02c0u));
L_00812c82:; BB(0x00812c82);
    /* 00812c82: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00812c87: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00812c8a: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
L_00812c90:; BB(0x00812c90);
    /* 00812c90: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00812c92: jne 0x812d07 */ if (!fZ) goto L_00812d07;
L_00812c94:; BB(0x00812c94);
    /* 00812c94: mov edi, dword ptr [0xab0258] */ r_edi = R32((u32)(0xab0258u));
    /* 00812c9a: mov esi, dword ptr [0xab0254] */ r_esi = R32((u32)(0xab0254u));
    /* 00812ca0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00812ca2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00812ca4: jle 0x812cfc */ if ((fZ||fS!=fO)) goto L_00812cfc;
L_00812ca6:; BB(0x00812ca6);
    /* 00812ca6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_00812ca9:; BB(0x00812ca9);
    /* 00812ca9: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 00812cac: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812caf: je 0x812ce8 */ if (fZ) goto L_00812ce8;
L_00812cb1:; BB(0x00812cb1);
    /* 00812cb1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00812cb3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x812cb8u); f_00807ac0();
    /* 00812cb8: mov edx, dword ptr [eax*4 + 0xa06be0] */ r_edx = R32((u32)(r_eax*4+0xa06be0u));
    /* 00812cbf: mov eax, edx */ r_eax = r_edx;
    /* 00812cc1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812cc3: je 0x812cdc */ if (fZ) goto L_00812cdc;
L_00812cc5:; BB(0x00812cc5);
    /* 00812cc5: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00812cc8: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812ccb: je 0x812cdc */ if (fZ) goto L_00812cdc;
L_00812ccd:; BB(0x00812ccd);
    /* 00812ccd: cmp cx, word ptr [edi] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_edi)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00812cd0: je 0x812ce1 */ if (fZ) goto L_00812ce1;
L_00812cd2:; BB(0x00812cd2);
    /* 00812cd2: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812cd5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00812cd8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812cda: jne 0x812cc5 */ if (!fZ) goto L_00812cc5;
L_00812cdc:; BB(0x00812cdc);
    /* 00812cdc: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_00812ce1:; BB(0x00812ce1);
    /* 00812ce1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00812ce3: jl 0x812d16 */ if ((fS!=fO)) goto L_00812d16;
L_00812ce5:; BB(0x00812ce5);
    /* 00812ce5: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
L_00812ce8:; BB(0x00812ce8);
    /* 00812ce8: add edi, 0x44 */ {  u32 a = r_edi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812ceb: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812cee: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812cf0: jl 0x812ca9 */ if ((fS!=fO)) goto L_00812ca9;
L_00812cf2:; BB(0x00812cf2);
    /* 00812cf2: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00812cf5: movsx eax, word ptr [0xab02c0] */ r_eax = (u32)(i32)(i16)R16((u32)(0xab02c0u));
L_00812cfc:; BB(0x00812cfc);
    /* 00812cfc: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00812d01: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
L_00812d07:; BB(0x00812d07);
    /* 00812d07: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
    /* 00812d0e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00812d11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00812d12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00812d13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00812d14: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00812d15: ret  */ FN_RET(0x00812b5c); r_esp += 4; return;
L_00812d16:; BB(0x00812d16);
    /* 00812d16: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00812d1b: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 00812d1e: jmp 0x812ce8 */ goto L_00812ce8;
L_00812d20:; BB(0x00812d20);
    /* 00812d20: movsx eax, word ptr [edx*2 + 0xab0218] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0xab0218u));
    /* 00812d28: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00812d2d: mov ecx, edx */ r_ecx = r_edx;
    /* 00812d2f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00812d31: jne 0x812e8e */ if (!fZ) goto L_00812e8e;
L_00812d37:; BB(0x00812d37);
    /* 00812d37: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812d3a: jg 0x812d9f */ if ((!fZ&&fS==fO)) goto L_00812d9f;
L_00812d3c:; BB(0x00812d3c);
    /* 00812d3c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00812d3e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00812d40: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00812d42: jle 0x812d84 */ if ((fZ||fS!=fO)) goto L_00812d84;
L_00812d44:; BB(0x00812d44);
    /* 00812d44: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812d47: jl 0x812d76 */ if ((fS!=fO)) goto L_00812d76;
L_00812d49:; BB(0x00812d49);
    /* 00812d49: lea ebp, [edx - 6] */ r_ebp = (u32)(r_edx+0xfffffffau);
L_00812d4c:; BB(0x00812d4c);
    /* 00812d4c: add eax, dword ptr [esi*4 + 0xaaff00] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812d53: add eax, dword ptr [esi*4 + 0xaaff04] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi*4+0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812d5a: add eax, dword ptr [esi*4 + 0xaaff08] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi*4+0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812d61: add eax, dword ptr [esi*4 + 0xaaff0c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi*4+0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812d68: add eax, dword ptr [esi*4 + 0xaaff10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi*4+0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812d6f: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812d72: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812d74: jle 0x812d4c */ if ((fZ||fS!=fO)) goto L_00812d4c;
L_00812d76:; BB(0x00812d76);
    /* 00812d76: add eax, dword ptr [esi*4 + 0xaaff00] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812d7d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812d80: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812d82: jl 0x812d76 */ if ((fS!=fO)) goto L_00812d76;
L_00812d84:; BB(0x00812d84);
    /* 00812d84: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812d86: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00812d88: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 00812d8b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812d8d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812d8f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812d91: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812d93: add ebp, dword ptr [0xab0210] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xab0210u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812d99: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00812d9d: jmp 0x812da5 */ goto L_00812da5;
L_00812d9f:; BB(0x00812d9f);
    /* 00812d9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00812da1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_00812da5:; BB(0x00812da5);
    /* 00812da5: mov eax, dword ptr [edx*4 + 0xaaff00] */ r_eax = R32((u32)(r_edx*4+0xaaff00u));
    /* 00812dac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00812dae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00812db0: jle 0x812e71 */ if ((fZ||fS!=fO)) goto L_00812e71;
L_00812db6:; BB(0x00812db6);
    /* 00812db6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00812dba: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00812dbe: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00812dc2: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00812dc6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_00812dc9:; BB(0x00812dc9);
    /* 00812dc9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00812dcd: movsx ecx, word ptr [edi + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 00812dd1: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812dd3: je 0x812de8 */ if (fZ) goto L_00812de8;
L_00812dd5:; BB(0x00812dd5);
    /* 00812dd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00812dd6: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x812ddbu); f_00807ac8();
    /* 00812ddb: mov ebp, eax */ r_ebp = r_eax;
    /* 00812ddd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00812de0: movsx edx, word ptr [edi + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 00812de4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_00812de8:; BB(0x00812de8);
    /* 00812de8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812dea: je 0x812e52 */ if (fZ) goto L_00812e52;
L_00812dec:; BB(0x00812dec);
    /* 00812dec: lea ebx, [edi + 0x10] */ r_ebx = (u32)(r_edi+0x10u);
    /* 00812def: lea ecx, [edi + 0x1c] */ r_ecx = (u32)(r_edi+0x1cu);
    /* 00812df2: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00812df6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00812dfb: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x812e00u); f_0082d990();
    /* 00812e00: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00812e03: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00812e06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812e08: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00812e0b: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x812e10u); f_00830b74();
    /* 00812e10: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00812e13: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812e15: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x812e1au); f_00830c04();
    /* 00812e1a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00812e1d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812e1f: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x812e24u); f_0082e9e4();
    /* 00812e24: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00812e27: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812e29: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x812e2eu); f_0082d8bc();
    /* 00812e2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00812e2f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812e31: mov edx, ebx */ r_edx = r_ebx;
    /* 00812e33: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x812e38u); f_00830aa0();
    /* 00812e38: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x812e3du); f_0082da80();
    /* 00812e3d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00812e41: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00812e44: add dword ptr [eax], edx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00812e46: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00812e49: add dword ptr [eax + 4], ecx */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00812e4c: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 00812e4f: add dword ptr [eax + 8], ebx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00812e52:; BB(0x00812e52);
    /* 00812e52: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00812e56: add edi, 0x44 */ {  u32 a = r_edi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812e59: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812e5c: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812e5e: jl 0x812dc9 */ if ((fS!=fO)) goto L_00812dc9;
L_00812e64:; BB(0x00812e64);
    /* 00812e64: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00812e68: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00812e6b: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
L_00812e71:; BB(0x00812e71);
    /* 00812e71: movzx eax, word ptr [ecx*2 + 0xab0218] */ r_eax = (u32)R16((u32)(r_ecx*2+0xab0218u));
    /* 00812e79: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00812e7e: mov word ptr [ecx*2 + 0xab0218], ax */ W16((u32)(r_ecx*2+0xab0218u), (u16)r_eax);
    /* 00812e86: movsx eax, word ptr [edx*2 + 0xab0218] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0xab0218u));
L_00812e8e:; BB(0x00812e8e);
    /* 00812e8e: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00812e93: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00812e95: jne 0x812fd2 */ if (!fZ) goto L_00812fd2;
L_00812e9b:; BB(0x00812e9b);
    /* 00812e9b: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812e9e: jg 0x812ef9 */ if ((!fZ&&fS==fO)) goto L_00812ef9;
L_00812ea0:; BB(0x00812ea0);
    /* 00812ea0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00812ea2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00812ea4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00812ea6: jle 0x812ee8 */ if ((fZ||fS!=fO)) goto L_00812ee8;
L_00812ea8:; BB(0x00812ea8);
    /* 00812ea8: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812eab: jl 0x812eda */ if ((fS!=fO)) goto L_00812eda;
L_00812ead:; BB(0x00812ead);
    /* 00812ead: lea eax, [edx - 6] */ r_eax = (u32)(r_edx+0xfffffffau);
L_00812eb0:; BB(0x00812eb0);
    /* 00812eb0: add esi, dword ptr [ebp*4 + 0xaaff60] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812eb7: add esi, dword ptr [ebp*4 + 0xaaff64] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp*4+0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812ebe: add esi, dword ptr [ebp*4 + 0xaaff68] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp*4+0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812ec5: add esi, dword ptr [ebp*4 + 0xaaff6c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp*4+0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812ecc: add esi, dword ptr [ebp*4 + 0xaaff70] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp*4+0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812ed3: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812ed6: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812ed8: jle 0x812eb0 */ if ((fZ||fS!=fO)) goto L_00812eb0;
L_00812eda:; BB(0x00812eda);
    /* 00812eda: add esi, dword ptr [ebp*4 + 0xaaff60] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812ee1: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00812ee4: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812ee6: jl 0x812eda */ if ((fS!=fO)) goto L_00812eda;
L_00812ee8:; BB(0x00812ee8);
    /* 00812ee8: lea edi, [esi + esi*8] */ r_edi = (u32)(r_esi+r_esi*8);
    /* 00812eeb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812eed: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812eef: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812ef1: add edi, dword ptr [0xab0214] */ {  u32 a = r_edi; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812ef7: jmp 0x812efb */ goto L_00812efb;
L_00812ef9:; BB(0x00812ef9);
    /* 00812ef9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00812efb:; BB(0x00812efb);
    /* 00812efb: mov eax, dword ptr [edx*4 + 0xaaff60] */ r_eax = R32((u32)(r_edx*4+0xaaff60u));
    /* 00812f02: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00812f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00812f06: jle 0x812fbd */ if ((fZ||fS!=fO)) goto L_00812fbd;
L_00812f0c:; BB(0x00812f0c);
    /* 00812f0c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00812f10: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00812f14: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00812f18: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_00812f1b:; BB(0x00812f1b);
    /* 00812f1b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00812f1f: movsx ecx, word ptr [edi + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 00812f23: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812f25: je 0x812f3a */ if (fZ) goto L_00812f3a;
L_00812f27:; BB(0x00812f27);
    /* 00812f27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00812f28: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x812f2du); f_00807ac8();
    /* 00812f2d: mov ebp, eax */ r_ebp = r_eax;
    /* 00812f2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00812f32: movsx edx, word ptr [edi + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 00812f36: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
L_00812f3a:; BB(0x00812f3a);
    /* 00812f3a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812f3c: je 0x812fa4 */ if (fZ) goto L_00812fa4;
L_00812f3e:; BB(0x00812f3e);
    /* 00812f3e: lea ebx, [edi + 0x14] */ r_ebx = (u32)(r_edi+0x14u);
    /* 00812f41: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 00812f44: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00812f48: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00812f4d: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x812f52u); f_0082d990();
    /* 00812f52: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00812f55: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00812f58: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812f5a: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00812f5d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x812f62u); f_00830b74();
    /* 00812f62: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00812f65: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812f67: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x812f6cu); f_00830c04();
    /* 00812f6c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00812f6f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812f71: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x812f76u); f_0082e9e4();
    /* 00812f76: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00812f79: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812f7b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x812f80u); f_0082d8bc();
    /* 00812f80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00812f81: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00812f83: mov edx, ebx */ r_edx = r_ebx;
    /* 00812f85: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x812f8au); f_00830aa0();
    /* 00812f8a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x812f8fu); f_0082da80();
    /* 00812f8f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00812f93: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00812f96: add dword ptr [eax], edx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00812f98: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00812f9b: add dword ptr [eax + 4], ecx */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00812f9e: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 00812fa1: add dword ptr [eax + 8], ebx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00812fa4:; BB(0x00812fa4);
    /* 00812fa4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00812fa8: add edi, 0x48 */ {  u32 a = r_edi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00812fab: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00812fae: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812fb0: jl 0x812f1b */ if ((fS!=fO)) goto L_00812f1b;
L_00812fb6:; BB(0x00812fb6);
    /* 00812fb6: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00812fba: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00812fbd:; BB(0x00812fbd);
    /* 00812fbd: movzx eax, word ptr [edx*2 + 0xab0218] */ r_eax = (u32)R16((u32)(r_edx*2+0xab0218u));
    /* 00812fc5: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00812fca: mov word ptr [edx*2 + 0xab0218], ax */ W16((u32)(r_edx*2+0xab0218u), (u16)r_eax);
L_00812fd2:; BB(0x00812fd2);
    /* 00812fd2: push dword ptr [0xab0280] */ { u32 v = R32((u32)(0xab0280u)); r_esp -= 4; W32(r_esp, v); }
    /* 00812fd8: call 0x8129b0 */ r_esp -= 4; W32(r_esp, 0x812fddu); f_008129b0();
    /* 00812fdd: push dword ptr [0xab0280] */ { u32 v = R32((u32)(0xab0280u)); r_esp -= 4; W32(r_esp, v); }
    /* 00812fe3: call 0x812824 */ r_esp -= 4; W32(r_esp, 0x812fe8u); f_00812824();
    /* 00812fe8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00812feb: movsx eax, word ptr [0xab02c0] */ r_eax = (u32)(i32)(i16)R16((u32)(0xab02c0u));
    /* 00812ff2: jmp 0x812b80 */ goto L_00812b80;
}

void f_00812d11(void)
{
    FN_ENTER(0x00812d11);
    /* 00812d11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00812d12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00812d13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00812d14: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00812d15: ret  */ FN_RET(0x00812d11); r_esp += 4; return;
}

void f_00812ff8(void) /* sub_812FF8 */
{
    FN_ENTER(0x00812ff8);
    /* 00812ff8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00812ffc: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00813002: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00813004: je 0x813035 */ if (fZ) goto L_00813035;
L_00813006:; BB(0x00813006);
    /* 00813006: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00813008: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0081300a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0081300d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00813010: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00813013: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00813016: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00813019: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0081301c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0081301f: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00813022: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00813025: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00813028: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0081302b: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0081302e: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00813031: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00813034: ret  */ FN_RET(0x00812ff8); r_esp += 4; return;
L_00813035:; BB(0x00813035);
    /* 00813035: ret  */ FN_RET(0x00812ff8); r_esp += 4; return;
}

