#include "protos.h"

void f_00527154(void) /* sub_527154 */
{
    FN_ENTER(0x00527154);
    /* 00527154: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00527155: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527156: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527159: mov edi, ecx */ r_edi = r_ecx;
    /* 0052715b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052715d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052715f: mov ecx, edi */ r_ecx = r_edi;
    /* 00527161: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x527164u); call_ind(t); }
    /* 00527164: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527166: je 0x527316 */ if (fZ) goto L_00527316;
L_0052716c:; BB(0x0052716c);
    /* 0052716c: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0052716f: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527174: je 0x5271cb */ if (fZ) goto L_005271cb;
L_00527176:; BB(0x00527176);
    /* 00527176: fld dword ptr [0x921b78] */ FPUSH(R_F32((u32)(0x921b78u)));
    /* 0052717c: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 00527182: fcom dword ptr [0x921b74] */ fx_compare(ST(0), R_F32((u32)(0x921b74u))); 
    /* 00527188: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052718a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052718b: jae 0x5271a8 */ if (!fC) goto L_005271a8;
L_0052718d:; BB(0x0052718d);
    /* 0052718d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052718f: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00527194: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 0052719b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052719d: mov dword ptr [edi + 0x2b8], edx */ W32((u32)(r_edi+0x2b8u), r_edx);
    /* 005271a3: jmp 0x527316 */ goto L_00527316;
L_005271a8:; BB(0x005271a8);
    /* 005271a8: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 005271ae: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 005271b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005271b6: mov ecx, edi */ r_ecx = r_edi;
    /* 005271b8: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005271ba: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x5271bfu); f_007714cc();
    /* 005271bf: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 005271c6: jmp 0x527316 */ goto L_00527316;
L_005271cb:; BB(0x005271cb);
    /* 005271cb: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005271cd: je 0x5272fe */ if (fZ) goto L_005272fe;
L_005271d3:; BB(0x005271d3);
    /* 005271d3: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 005271d9: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005271df: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 005271e5: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005271e7: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 005271ec: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005271f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005271f6: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 005271fe: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00527206: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00527208: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052720a: jle 0x5273b4 */ if ((fZ||fS!=fO)) goto L_005273b4;
L_00527210:; BB(0x00527210);
    /* 00527210: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00527214: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00527218: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0052721c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0052721f:; BB(0x0052721f);
    /* 0052721f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00527226: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527228: je 0x527377 */ if (fZ) goto L_00527377;
L_0052722e:; BB(0x0052722e);
    /* 0052722e: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00527232: cmp esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527238: jge 0x5272df */ if ((fS==fO)) goto L_005272df;
L_0052723e:; BB(0x0052723e);
    /* 0052723e: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00527242: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527244: je 0x5272df */ if (fZ) goto L_005272df;
L_0052724a:; BB(0x0052724a);
    /* 0052724a: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0052724d: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527252: jne 0x5272df */ if (!fZ) goto L_005272df;
L_00527258:; BB(0x00527258);
    /* 00527258: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0052725c: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 00527262: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00527266: mov eax, dword ptr [ebx + 0x304] */ r_eax = R32((u32)(r_ebx+0x304u));
    /* 0052726c: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00527272: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00527276: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0052727c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00527280: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x527285u); f_0082f9c4();
    /* 00527285: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00527289: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052728b: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0052728f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00527291: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00527293: fcom dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); 
    /* 00527297: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00527299: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0052729d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052729e: jb 0x5272ae */ if (fC) goto L_005272ae;
L_005272a0:; BB(0x005272a0);
    /* 005272a0: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 005272a6: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005272ac: jmp 0x5272df */ goto L_005272df;
L_005272ae:; BB(0x005272ae);
    /* 005272ae: add ebx, 0x300 */ {  u32 a = r_ebx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005272b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005272b5: mov ecx, edi */ r_ecx = r_edi;
    /* 005272b7: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x5272bcu); f_00771e14();
    /* 005272bc: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 005272c2: mov ebx, dword ptr [0xaae164] */ r_ebx = R32((u32)(0xaae164u));
    /* 005272c8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005272cb: je 0x527370 */ if (fZ) goto L_00527370;
L_005272d1:; BB(0x005272d1);
    /* 005272d1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005272d5: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005272d9: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005272db: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_005272df:; BB(0x005272df);
    /* 005272df: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005272e2: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005272e4: jl 0x52721f */ if ((fS!=fO)) goto L_0052721f;
L_005272ea:; BB(0x005272ea);
    /* 005272ea: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005272ee: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005272f2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005272f5:; BB(0x005272f5);
    /* 005272f5: mov word ptr [edi + 0x340], cx */ W16((u32)(r_edi+0x340u), (u16)r_ecx);
    /* 005272fc: jmp 0x527316 */ goto L_00527316;
L_005272fe:; BB(0x005272fe);
    /* 005272fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00527300: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 00527306: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00527308: mov ecx, edi */ r_ecx = r_edi;
    /* 0052730a: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x52730fu); f_007714cc();
    /* 0052730f: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
L_00527316:; BB(0x00527316);
    /* 00527316: movsx eax, word ptr [edi + 0x38c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x38cu));
    /* 0052731d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527320: jle 0x52736a */ if ((fZ||fS!=fO)) goto L_0052736a;
L_00527322:; BB(0x00527322);
    /* 00527322: movsx ecx, word ptr [edi + 0x38a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x38au));
    /* 00527329: movzx eax, word ptr [edi + 0x340] */ r_eax = (u32)R16((u32)(r_edi+0x340u));
    /* 00527330: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527332: jne 0x52736a */ if (!fZ) goto L_0052736a;
L_00527334:; BB(0x00527334);
    /* 00527334: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00527339: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0052733b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052733d: jle 0x52736a */ if ((fZ||fS!=fO)) goto L_0052736a;
L_0052733f:; BB(0x0052733f);
    /* 0052733f: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_00527342:; BB(0x00527342);
    /* 00527342: mov edx, dword ptr [ebp*4 + 0xaad720] */ r_edx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00527349: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052734b: je 0x527360 */ if (fZ) goto L_00527360;
L_0052734d:; BB(0x0052734d);
    /* 0052734d: movzx esi, word ptr [edx + 0x1c] */ r_esi = (u32)R16((u32)(r_edx+0x1cu));
    /* 00527351: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527353: je 0x527360 */ if (fZ) goto L_00527360;
L_00527355:; BB(0x00527355);
    /* 00527355: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 00527358: test esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052735e: je 0x527387 */ if (fZ) goto L_00527387;
L_00527360:; BB(0x00527360);
    /* 00527360: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00527363: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527365: jl 0x527342 */ if ((fS!=fO)) goto L_00527342;
L_00527367:; BB(0x00527367);
    /* 00527367: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0052736a:; BB(0x0052736a);
    /* 0052736a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052736d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052736e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052736f: ret  */ FN_RET(0x00527154); r_esp += 4; return;
L_00527370:; BB(0x00527370);
    /* 00527370: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00527372: jmp 0x5272df */ goto L_005272df;
L_00527377:; BB(0x00527377);
    /* 00527377: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0052737b: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0052737f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00527382: jmp 0x5272f5 */ goto L_005272f5;
L_00527387:; BB(0x00527387);
    /* 00527387: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0052738a: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00527390: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00527396: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527397: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527398: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x52739du); f_0078ea50();
    /* 0052739d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005273a0: fcomp dword ptr [0x921b70] */ fx_compare(ST(0), R_F32((u32)(0x921b70u))); FPOP();
    /* 005273a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005273a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005273a9: jae 0x52736a */ if (!fC) goto L_0052736a;
L_005273ab:; BB(0x005273ab);
    /* 005273ab: mov word ptr [edi + 0x340], bp */ W16((u32)(r_edi+0x340u), (u16)r_ebp);
    /* 005273b2: jmp 0x52736a */ goto L_0052736a;
L_005273b4:; BB(0x005273b4);
    /* 005273b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005273b6: jmp 0x5272f5 */ goto L_005272f5;
}

void f_005273bc(void) /* sub_5273BC */
{
    FN_ENTER(0x005273bc);
    /* 005273bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005273bd: mov edi, ecx */ r_edi = r_ecx;
    /* 005273bf: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 005273c2: movzx eax, word ptr [edi + 0x37c] */ r_eax = (u32)R16((u32)(r_edi+0x37cu));
    /* 005273c9: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005273cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005273d1: jne 0x527499 */ if (!fZ) goto L_00527499;
L_005273d7:; BB(0x005273d7);
    /* 005273d7: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005273de: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 005273e1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005273e4: je 0x527497 */ if (fZ) goto L_00527497;
L_005273ea:; BB(0x005273ea);
    /* 005273ea: mov eax, 4 */ r_eax = 0x4u;
    /* 005273ef: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 005273f6: movzx eax, word ptr [edi + 0x2d8] */ r_eax = (u32)R16((u32)(r_edi+0x2d8u));
    /* 005273fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005273fe: mov edx, 6 */ r_edx = 0x6u;
    /* 00527403: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 0052740a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x52740fu); f_0068d5a8();
    /* 0052740f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00527410: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527412: je 0x527449 */ if (fZ) goto L_00527449;
L_00527414:; BB(0x00527414);
    /* 00527414: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00527417: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052741a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052741b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052741c: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x527421u); f_0078ea2c();
    /* 00527421: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527424: fcomp dword ptr [0x921b6c] */ fx_compare(ST(0), R_F32((u32)(0x921b6cu))); FPOP();
    /* 0052742a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052742c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052742d: jb 0x527449 */ if (fC) goto L_00527449;
L_0052742f:; BB(0x0052742f);
    /* 0052742f: movzx eax, word ptr [edi + 0x37c] */ r_eax = (u32)R16((u32)(r_edi+0x37cu));
    /* 00527436: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052743b: mov word ptr [edi + 0x37c], ax */ W16((u32)(r_edi+0x37cu), (u16)r_eax);
    /* 00527442: mov ecx, edi */ r_ecx = r_edi;
    /* 00527444: call 0x5274a4 */ r_esp -= 4; W32(r_esp, 0x527449u); f_005274a4();
L_00527449:; BB(0x00527449);
    /* 00527449: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0052744e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00527450: jl 0x527497 */ if ((fS!=fO)) goto L_00527497;
L_00527452:; BB(0x00527452);
    /* 00527452: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527455: jle 0x52747a */ if ((fZ||fS!=fO)) goto L_0052747a;
L_00527457:; BB(0x00527457);
    /* 00527457: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052745a: jne 0x527497 */ if (!fZ) goto L_00527497;
L_0052745c:; BB(0x0052745c);
    /* 0052745c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x527461u); f_00807ac0();
    /* 00527461: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00527464: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00527466: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527467: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527468: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00527469: push dword ptr [eax*4 + 0x9bbc9c] */ { u32 v = R32((u32)(r_eax*4+0x9bbc9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00527470: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x527475u); f_00814298();
    /* 00527475: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00527478: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00527479: ret  */ FN_RET(0x005273bc); r_esp += 4; return;
L_0052747a:; BB(0x0052747a);
    /* 0052747a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052747c: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00527481: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x527486u); f_0052d204();
    /* 00527486: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00527489: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052748b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052748c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052748d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052748e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052748f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x527494u); f_00814298();
    /* 00527494: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00527497:; BB(0x00527497);
    /* 00527497: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00527498: ret  */ FN_RET(0x005273bc); r_esp += 4; return;
L_00527499:; BB(0x00527499);
    /* 00527499: and edx, 0xfffffdc0 */ {  u32 a = r_edx; u32 b = 0xfffffdc0u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052749f: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 005274a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005274a3: ret  */ FN_RET(0x005273bc); r_esp += 4; return;
}

void f_00527400(void)
{
    FN_ENTER(0x00527400);
    /* 00527400: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00527402: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00527405: xchg edi, eax */ { u32 x = r_edi; u32 y = r_eax; r_edi = y; r_eax = x; }
    /* 00527406: mov eax, 0xe8000000 */ r_eax = 0xe8000000u;
    /* 0052740b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052740c: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0052740d: push ss */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0052740e: add byte ptr [ecx - 0x7b], bl */ { u32 ad = (u32)(r_ecx+0xffffff85u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00527411: sal byte ptr [ebp + esi - 0x73], 0x57 */ { u32 ad = (u32)(r_ebp+r_esi+0xffffff8du); u32 c = (23u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00527416: cmp byte ptr [ebx + 0x525038c0], al */ {  u32 a = R8((u32)(r_ebx+0x525038c0u)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;   }
    /* 0052741c: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x527421u); f_0078ea2c();
    /* 00527421: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527424: fcomp dword ptr [0x921b6c] */ fx_compare(ST(0), R_F32((u32)(0x921b6cu))); FPOP();
    /* 0052742a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052742c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052742d: jb 0x527449 */ if (fC) goto L_00527449;
L_0052742f:; BB(0x0052742f);
    /* 0052742f: movzx eax, word ptr [edi + 0x37c] */ r_eax = (u32)R16((u32)(r_edi+0x37cu));
    /* 00527436: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052743b: mov word ptr [edi + 0x37c], ax */ W16((u32)(r_edi+0x37cu), (u16)r_eax);
    /* 00527442: mov ecx, edi */ r_ecx = r_edi;
    /* 00527444: call 0x5274a4 */ r_esp -= 4; W32(r_esp, 0x527449u); f_005274a4();
L_00527449:; BB(0x00527449);
    /* 00527449: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0052744e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00527450: jl 0x527497 */ if ((fS!=fO)) goto L_00527497;
L_00527452:; BB(0x00527452);
    /* 00527452: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527455: jle 0x52747a */ if ((fZ||fS!=fO)) goto L_0052747a;
L_00527457:; BB(0x00527457);
    /* 00527457: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052745a: jne 0x527497 */ if (!fZ) goto L_00527497;
L_0052745c:; BB(0x0052745c);
    /* 0052745c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x527461u); f_00807ac0();
    /* 00527461: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00527464: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00527466: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527467: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527468: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00527469: push dword ptr [eax*4 + 0x9bbc9c] */ { u32 v = R32((u32)(r_eax*4+0x9bbc9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00527470: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x527475u); f_00814298();
    /* 00527475: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00527478: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00527479: ret  */ FN_RET(0x00527400); r_esp += 4; return;
L_0052747a:; BB(0x0052747a);
    /* 0052747a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052747c: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00527481: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x527486u); f_0052d204();
    /* 00527486: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00527489: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052748b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052748c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052748d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052748e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052748f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x527494u); f_00814298();
    /* 00527494: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00527497:; BB(0x00527497);
    /* 00527497: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00527498: ret  */ FN_RET(0x00527400); r_esp += 4; return;
}

void f_005274a4(void) /* sub_5274A4 */
{
    FN_ENTER(0x005274a4);
    /* 005274a4: movsx eax, word ptr [ecx + 0x37c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x37cu));
    /* 005274ab: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005274b0: jne 0x5274c5 */ if (!fZ) goto L_005274c5;
L_005274b2:; BB(0x005274b2);
    /* 005274b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005274b3: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005274b8: mov word ptr [ecx + 0x37c], ax */ W16((u32)(r_ecx+0x37cu), (u16)r_eax);
    /* 005274bf: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x5274c4u); f_008113e4();
    /* 005274c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005274c5:; BB(0x005274c5);
    /* 005274c5: ret  */ FN_RET(0x005274a4); r_esp += 4; return;
}

void f_005274c8(void) /* sub_5274C8 */
{
    FN_ENTER(0x005274c8);
    /* 005274c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005274c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005274cb: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005274ce: and eax, 0xffffffc0 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005274d1: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005274d4: movsx eax, word ptr [ebx + 0x37c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x37cu));
    /* 005274db: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005274dd: je 0x527556 */ if (fZ) goto L_00527556;
L_005274df:; BB(0x005274df);
    /* 005274df: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005274e1: jne 0x527554 */ if (!fZ) goto L_00527554;
L_005274e3:; BB(0x005274e3);
    /* 005274e3: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005274e8: mov word ptr [ebx + 0x37c], ax */ W16((u32)(r_ebx+0x37cu), (u16)r_eax);
    /* 005274ef: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 005274f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005274f6: jl 0x527541 */ if ((fS!=fO)) goto L_00527541;
L_005274f8:; BB(0x005274f8);
    /* 005274f8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005274fb: jle 0x527522 */ if ((fZ||fS!=fO)) goto L_00527522;
L_005274fd:; BB(0x005274fd);
    /* 005274fd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527500: jne 0x527541 */ if (!fZ) goto L_00527541;
L_00527502:; BB(0x00527502);
    /* 00527502: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x527507u); f_00807ac0();
    /* 00527507: mov ecx, eax */ r_ecx = r_eax;
    /* 00527509: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0052750c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052750e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052750f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527511: push dword ptr [ecx*4 + 0x9bbd2c] */ { u32 v = R32((u32)(r_ecx*4+0x9bbd2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00527518: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52751du); f_00814298();
    /* 0052751d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527520: jmp 0x527541 */ goto L_00527541;
L_00527522:; BB(0x00527522);
    /* 00527522: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00527524: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00527529: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x52752eu); f_0052d204();
    /* 0052752e: mov ecx, eax */ r_ecx = r_eax;
    /* 00527530: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00527533: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00527535: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527536: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527537: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527538: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527539: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52753eu); f_00814298();
    /* 0052753e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00527541:; BB(0x00527541);
    /* 00527541: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00527543: call 0x78752c */ r_esp -= 4; W32(r_esp, 0x527548u); f_0078752c();
    /* 00527548: mov eax, 8 */ r_eax = 0x8u;
    /* 0052754d: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_00527554:; BB(0x00527554);
    /* 00527554: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00527555: ret  */ FN_RET(0x005274c8); r_esp += 4; return;
L_00527556:; BB(0x00527556);
    /* 00527556: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0052755d: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00527560: je 0x5275c2 */ if (fZ) goto L_005275c2;
L_00527562:; BB(0x00527562);
    /* 00527562: mov edx, 5 */ r_edx = 0x5u;
    /* 00527567: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
    /* 0052756e: mov edx, 7 */ r_edx = 0x7u;
    /* 00527573: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 0052757a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0052757c: jne 0x5275b9 */ if (!fZ) goto L_005275b9;
L_0052757e:; BB(0x0052757e);
    /* 0052757e: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 00527583: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00527585: jl 0x5275ab */ if ((fS!=fO)) goto L_005275ab;
L_00527587:; BB(0x00527587);
    /* 00527587: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052758a: jg 0x5275c4 */ if ((!fZ&&fS==fO)) goto L_005275c4;
L_0052758c:; BB(0x0052758c);
    /* 0052758c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052758e: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 00527593: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x527598u); f_0052d204();
    /* 00527598: mov ecx, eax */ r_ecx = r_eax;
    /* 0052759a: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0052759d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052759f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005275a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005275a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005275a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005275a3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5275a8u); f_00814298();
    /* 005275a8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005275ab:; BB(0x005275ab);
    /* 005275ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005275ad: call 0x787348 */ r_esp -= 4; W32(r_esp, 0x5275b2u); f_00787348();
    /* 005275b2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005275b4: call 0x5274a4 */ r_esp -= 4; W32(r_esp, 0x5275b9u); f_005274a4();
L_005275b9:; BB(0x005275b9);
    /* 005275b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005275bb: mov word ptr [ebx + 0x388], ax */ W16((u32)(r_ebx+0x388u), (u16)r_eax);
L_005275c2:; BB(0x005275c2);
    /* 005275c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005275c3: ret  */ FN_RET(0x005274c8); r_esp += 4; return;
L_005275c4:; BB(0x005275c4);
    /* 005275c4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005275c7: jne 0x5275ab */ if (!fZ) goto L_005275ab;
L_005275c9:; BB(0x005275c9);
    /* 005275c9: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5275ceu); f_00807ac0();
    /* 005275ce: mov ecx, eax */ r_ecx = r_eax;
    /* 005275d0: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005275d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005275d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005275d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005275d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005275d8: push dword ptr [ecx*4 + 0x9bbcc0] */ { u32 v = R32((u32)(r_ecx*4+0x9bbcc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005275df: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5275e4u); f_00814298();
    /* 005275e4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005275e7: jmp 0x5275ab */ goto L_005275ab;
}

void f_005275ec(void) /* sub_5275EC */
{
    FN_ENTER(0x005275ec);
    /* 005275ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005275ed: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005275f0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005275f2: movsx eax, word ptr [ebp + 0x37c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x37cu));
    /* 005275f9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005275fb: jne 0x527651 */ if (!fZ) goto L_00527651;
L_005275fd:; BB(0x005275fd);
    /* 005275fd: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00527600: test edx, 0xa00 */ {  u32 a = r_edx; u32 b = 0xa00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527606: jne 0x527651 */ if (!fZ) goto L_00527651;
L_00527608:; BB(0x00527608);
    /* 00527608: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0052760a: jne 0x527656 */ if (!fZ) goto L_00527656;
L_0052760c:; BB(0x0052760c);
    /* 0052760c: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00527613: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527615: je 0x527651 */ if (fZ) goto L_00527651;
L_00527617:; BB(0x00527617);
    /* 00527617: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00527619: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00527620: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00527627: movsx eax, byte ptr [ebp + 0x380] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x380u));
    /* 0052762e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527630: jne 0x527643 */ if (!fZ) goto L_00527643;
L_00527632:; BB(0x00527632);
    /* 00527632: mov eax, 3 */ r_eax = 0x3u;
    /* 00527637: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0052763e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00527641: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527642: ret  */ FN_RET(0x005275ec); r_esp += 4; return;
L_00527643:; BB(0x00527643);
    /* 00527643: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527646: jne 0x527651 */ if (!fZ) goto L_00527651;
L_00527648:; BB(0x00527648);
    /* 00527648: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052764a: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_00527651:; BB(0x00527651);
    /* 00527651: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00527654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527655: ret  */ FN_RET(0x005275ec); r_esp += 4; return;
L_00527656:; BB(0x00527656);
    /* 00527656: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052765b: mov word ptr [ebp + 0x37c], ax */ W16((u32)(r_ebp+0x37cu), (u16)r_eax);
    /* 00527662: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00527665: and edx, 0xfdffffff */ {  u32 a = r_edx; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052766b: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0052766e: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00527671: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00527674: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00527677: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00527679: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0052767d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00527681: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00527684: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00527686: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527687: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x52768cu); f_007b4c58();
    /* 0052768c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052768f: jne 0x52760c */ if (!fZ) goto L_0052760c;
L_00527695:; BB(0x00527695);
    /* 00527695: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00527699: fadd dword ptr [0x921b68] */ ST(0) = ST(0) + R_F32((u32)(0x921b68u));
    /* 0052769f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 005276a2: jmp 0x52760c */ goto L_0052760c;
}

void f_00527618(void)
{
    FN_ENTER(0x00527618);
    /* 00527618: shl byte ptr [esi - 0x77], 0x85 */ { u32 ad = (u32)(r_esi+0xffffff89u); u32 c = (5u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0052761c: add eax, dword ptr cs:[eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052761f: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00527622: test dword ptr [eax], esi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;   }
    /* 00527624: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00527626: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00527628: mov esi, 0x38085 */ r_esi = 0x38085u;
    /* 0052762d: add byte ptr [ebp - 0x47ee8a40], al */ { u32 ad = (u32)(r_ebp+0xb81175c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00527633: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00527635: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00527637: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0052763e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00527641: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527642: ret  */ FN_RET(0x00527618); r_esp += 4; return;
}

void f_0052769a(void)
{
    FN_ENTER(0x0052769a);
    goto L_0052769a;
L_0052760c:; BB(0x0052760c);
    /* 0052760c: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00527613: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527615: je 0x527651 */ if (fZ) goto L_00527651;
L_00527617:; BB(0x00527617);
    /* 00527617: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00527619: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00527620: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00527627: movsx eax, byte ptr [ebp + 0x380] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x380u));
    /* 0052762e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527630: jne 0x527643 */ if (!fZ) goto L_00527643;
L_00527632:; BB(0x00527632);
    /* 00527632: mov eax, 3 */ r_eax = 0x3u;
    /* 00527637: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0052763e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00527641: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527642: ret  */ FN_RET(0x0052769a); r_esp += 4; return;
L_00527643:; BB(0x00527643);
    /* 00527643: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527646: jne 0x527651 */ if (!fZ) goto L_00527651;
L_00527648:; BB(0x00527648);
    /* 00527648: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052764a: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_00527651:; BB(0x00527651);
    /* 00527651: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00527654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527655: ret  */ FN_RET(0x0052769a); r_esp += 4; return;
L_0052769a:; BB(0x0052769a);
    /* 0052769a: add eax, 0x921b68 */ {  u32 a = r_eax; u32 b = 0x921b68u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052769f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 005276a2: jmp 0x52760c */ goto L_0052760c;
}

void f_005276a8(void) /* sub_5276A8 */
{
    FN_ENTER(0x005276a8);
    /* 005276a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005276a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005276ab: movzx eax, word ptr [ebx + 0x37c] */ r_eax = (u32)R16((u32)(r_ebx+0x37cu));
    /* 005276b2: test al, 0x42 */ {  u32 a = (u8)r_eax; u32 b = 0x42u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005276b4: jne 0x527708 */ if (!fZ) goto L_00527708;
L_005276b6:; BB(0x005276b6);
    /* 005276b6: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005276b9: test eax, 0xa00 */ {  u32 a = r_eax; u32 b = 0xa00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005276be: jne 0x527708 */ if (!fZ) goto L_00527708;
L_005276c0:; BB(0x005276c0);
    /* 005276c0: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005276c7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005276ca: je 0x5276f7 */ if (fZ) goto L_005276f7;
L_005276cc:; BB(0x005276cc);
    /* 005276cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005276ce: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5276d3u); f_00770738();
    /* 005276d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005276d5: je 0x5276f7 */ if (fZ) goto L_005276f7;
L_005276d7:; BB(0x005276d7);
    /* 005276d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005276d9: push dword ptr [eax + 0x308] */ { u32 v = R32((u32)(r_eax+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005276df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005276e1: push dword ptr [eax + 0x304] */ { u32 v = R32((u32)(r_eax+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005276e7: push dword ptr [eax + 0x300] */ { u32 v = R32((u32)(r_eax+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005276ed: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5276f2u); f_00771c8c();
    /* 005276f2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005276f5: je 0x52770a */ if (fZ) goto L_0052770a;
L_005276f7:; BB(0x005276f7);
    /* 005276f7: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 005276fd: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00527700: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00527703: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00527706: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00527707: ret  */ FN_RET(0x005276a8); r_esp += 4; return;
L_00527708:; BB(0x00527708);
    /* 00527708: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00527709: ret  */ FN_RET(0x005276a8); r_esp += 4; return;
L_0052770a:; BB(0x0052770a);
    /* 0052770a: movsx eax, byte ptr [ebx + 0x380] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x380u));
    /* 00527711: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527713: jne 0x527723 */ if (!fZ) goto L_00527723;
L_00527715:; BB(0x00527715);
    /* 00527715: mov eax, 3 */ r_eax = 0x3u;
    /* 0052771a: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00527721: jmp 0x527734 */ goto L_00527734;
L_00527723:; BB(0x00527723);
    /* 00527723: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527726: jne 0x527734 */ if (!fZ) goto L_00527734;
L_00527728:; BB(0x00527728);
    /* 00527728: mov eax, 2 */ r_eax = 0x2u;
    /* 0052772d: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_00527734:; BB(0x00527734);
    /* 00527734: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00527736: mov word ptr [ebx + 0x382], ax */ W16((u32)(r_ebx+0x382u), (u16)r_eax);
    /* 0052773d: mov word ptr [ebx + 0x388], ax */ W16((u32)(r_ebx+0x388u), (u16)r_eax);
    /* 00527744: mov byte ptr [ebx + 0x380], al */ W8((u32)(r_ebx+0x380u), (u8)r_eax);
    /* 0052774a: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0052774d: mov edx, 1 */ r_edx = 0x1u;
    /* 00527752: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
    /* 00527759: and eax, 0xffdbffff */ {  u32 a = r_eax; u32 b = 0xffdbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052775e: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00527761: jmp 0x5276f7 */ goto L_005276f7;
}

void f_00527764(void) /* sub_527764 */
{
    FN_ENTER(0x00527764);
    /* 00527764: movzx eax, word ptr [ecx + 0x37c] */ r_eax = (u32)R16((u32)(r_ecx+0x37cu));
    /* 0052776b: test al, 0x42 */ {  u32 a = (u8)r_eax; u32 b = 0x42u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052776d: je 0x527770 */ if (fZ) goto L_00527770;
L_0052776f:; BB(0x0052776f);
    /* 0052776f: ret  */ FN_RET(0x00527764); r_esp += 4; return;
L_00527770:; BB(0x00527770);
    /* 00527770: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00527773: test eax, 0xa02 */ {  u32 a = r_eax; u32 b = 0xa02u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00527778: jne 0x5277e5 */ if (!fZ) goto L_005277e5;
L_0052777a:; BB(0x0052777a);
    /* 0052777a: movsx edx, word ptr [ecx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00527781: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00527784: je 0x5277e5 */ if (fZ) goto L_005277e5;
L_00527786:; BB(0x00527786);
    /* 00527786: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052778b: mov edx, 2 */ r_edx = 0x2u;
    /* 00527790: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00527797: mov edx, 5 */ r_edx = 0x5u;
    /* 0052779c: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 005277a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005277a5: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 005277ac: movzx edx, word ptr [ecx + 0x340] */ r_edx = (u32)R16((u32)(r_ecx+0x340u));
    /* 005277b3: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005277b6: movsx eax, word ptr [ecx + 0x38a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x38au));
    /* 005277bd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005277bf: je 0x5277d3 */ if (fZ) goto L_005277d3;
L_005277c1:; BB(0x005277c1);
    /* 005277c1: mov word ptr [ecx + 0x38a], dx */ W16((u32)(r_ecx+0x38au), (u16)r_edx);
    /* 005277c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005277ca: mov word ptr [ecx + 0x38c], ax */ W16((u32)(r_ecx+0x38cu), (u16)r_eax);
    /* 005277d1: jmp 0x5277db */ goto L_005277db;
L_005277d3:; BB(0x005277d3);
    /* 005277d3: add word ptr [ecx + 0x38c], 1 */ { u32 ad = (u32)(r_ecx+0x38cu);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_005277db:; BB(0x005277db);
    /* 005277db: mov dword ptr [ecx + 0x390], 0 */ W32((u32)(r_ecx+0x390u), 0x0u);
L_005277e5:; BB(0x005277e5);
    /* 005277e5: ret  */ FN_RET(0x00527764); r_esp += 4; return;
}

void f_005277e8(void) /* sub_5277E8 */
{
    FN_ENTER(0x005277e8);
    /* 005277e8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005277ef: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005277f2: je 0x527818 */ if (fZ) goto L_00527818;
L_005277f4:; BB(0x005277f4);
    /* 005277f4: mov eax, 3 */ r_eax = 0x3u;
    /* 005277f9: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00527800: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00527803: mov edx, 1 */ r_edx = 0x1u;
    /* 00527808: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0052780f: and eax, 0xff9fffff */ {  u32 a = r_eax; u32 b = 0xff9fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00527814: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00527817: ret  */ FN_RET(0x005277e8); r_esp += 4; return;
L_00527818:; BB(0x00527818);
    /* 00527818: ret  */ FN_RET(0x005277e8); r_esp += 4; return;
}

void f_0052781c(void) /* sub_52781C */
{
    FN_ENTER(0x0052781c);
    /* 0052781c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052781d: mov esi, ecx */ r_esi = r_ecx;
    /* 0052781f: mov ecx, esi */ r_ecx = r_esi;
    /* 00527821: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x527826u); f_00777d10();
    /* 00527826: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527828: je 0x527838 */ if (fZ) goto L_00527838;
L_0052782a:; BB(0x0052782a);
    /* 0052782a: mov ecx, esi */ r_ecx = r_esi;
    /* 0052782c: call 0x52783c */ r_esp -= 4; W32(r_esp, 0x527831u); f_0052783c();
    /* 00527831: mov eax, 1 */ r_eax = 0x1u;
    /* 00527836: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00527837: ret  */ FN_RET(0x0052781c); r_esp += 4; return;
L_00527838:; BB(0x00527838);
    /* 00527838: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052783a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052783b: ret  */ FN_RET(0x0052781c); r_esp += 4; return;
}

void f_0052783c(void) /* sub_52783C */
{
    FN_ENTER(0x0052783c);
    /* 0052783c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052783d: mov edi, ecx */ r_edi = r_ecx;
    /* 0052783f: movsx eax, word ptr [edi + 0x37c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x37cu));
    /* 00527846: test al, 0x60 */ {  u32 a = (u8)r_eax; u32 b = 0x60u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00527848: je 0x52786e */ if (fZ) goto L_0052786e;
L_0052784a:; BB(0x0052784a);
    /* 0052784a: and eax, 0xff9f */ {  u32 a = r_eax; u32 b = 0xff9fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052784f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00527851: mov word ptr [edi + 0x37c], ax */ W16((u32)(r_edi+0x37cu), (u16)r_eax);
    /* 00527858: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0052785b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052785c: mov ecx, edi */ r_ecx = r_edi;
    /* 0052785e: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x527863u); f_007b4c58();
    /* 00527863: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00527866: or eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052786b: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
L_0052786e:; BB(0x0052786e);
    /* 0052786e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052786f: ret  */ FN_RET(0x0052783c); r_esp += 4; return;
}

void f_00527870(void) /* sub_527870 */
{
    FN_ENTER(0x00527870);
    /* 00527870: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00527871: mov esi, ecx */ r_esi = r_ecx;
    /* 00527873: mov ecx, esi */ r_ecx = r_esi;
    /* 00527875: call 0x7780a8 */ r_esp -= 4; W32(r_esp, 0x52787au); f_007780a8();
    /* 0052787a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052787c: je 0x52788c */ if (fZ) goto L_0052788c;
L_0052787e:; BB(0x0052787e);
    /* 0052787e: mov ecx, esi */ r_ecx = r_esi;
    /* 00527880: call 0x52783c */ r_esp -= 4; W32(r_esp, 0x527885u); f_0052783c();
    /* 00527885: mov eax, 1 */ r_eax = 0x1u;
    /* 0052788a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052788b: ret  */ FN_RET(0x00527870); r_esp += 4; return;
L_0052788c:; BB(0x0052788c);
    /* 0052788c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052788e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052788f: ret  */ FN_RET(0x00527870); r_esp += 4; return;
}

void f_00527934(void) /* sub_527934 */
{
    FN_ENTER(0x00527934);
    /* 00527934: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00527935: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00527936: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527937: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00527938: mov ebx, dword ptr [0xaafdb8] */ r_ebx = R32((u32)(0xaafdb8u));
    /* 0052793e: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x527943u); f_007a61a4();
    /* 00527943: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527946: je 0x527984 */ if (fZ) goto L_00527984;
L_00527948:; BB(0x00527948);
    /* 00527948: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0052794a:; BB(0x0052794a);
    /* 0052794a: mov ebp, dword ptr [0xa9cd68] */ r_ebp = R32((u32)(0xa9cd68u));
    /* 00527950: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527953: je 0x52797d */ if (fZ) goto L_0052797d;
L_00527955:; BB(0x00527955);
    /* 00527955: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00527957:; BB(0x00527957);
    /* 00527957: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00527958: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00527959: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052795a: call 0x5279e8 */ r_esp -= 4; W32(r_esp, 0x52795fu); f_005279e8();
    /* 0052795f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527962: call 0x527b90 */ r_esp -= 4; W32(r_esp, 0x527967u); f_00527b90();
    /* 00527967: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00527968: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527969: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052796a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052796b: call 0x527c10 */ r_esp -= 4; W32(r_esp, 0x527970u); f_00527c10();
    /* 00527970: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527973: call 0x527994 */ r_esp -= 4; W32(r_esp, 0x527978u); f_00527994();
    /* 00527978: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00527979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052797a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052797b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052797c: ret  */ FN_RET(0x00527934); r_esp += 4; return;
L_0052797d:; BB(0x0052797d);
    /* 0052797d: mov esi, 1 */ r_esi = 0x1u;
    /* 00527982: jmp 0x527957 */ goto L_00527957;
L_00527984:; BB(0x00527984);
    /* 00527984: mov eax, dword ptr [0xaab210] */ r_eax = R32((u32)(0xaab210u));
    /* 00527989: mov edi, dword ptr [eax*4 + 0x921ae0] */ r_edi = R32((u32)(r_eax*4+0x921ae0u));
    /* 00527990: jmp 0x52794a */ goto L_0052794a;
}

void f_00527994(void) /* sub_527994 */
{
    FN_ENTER(0x00527994);
    /* 00527994: mov edx, dword ptr [0xa72f4c] */ r_edx = R32((u32)(0xa72f4cu));
    /* 0052799a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052799c: mov dword ptr [0xa72f40], eax */ W32((u32)(0xa72f40u), r_eax);
    /* 005279a1: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005279a4: mov dword ptr [0xa72f38], eax */ W32((u32)(0xa72f38u), r_eax);
    /* 005279a9: jne 0x5279bc */ if (!fZ) goto L_005279bc;
L_005279ab:; BB(0x005279ab);
    /* 005279ab: mov eax, dword ptr [0xa72f6c] */ r_eax = R32((u32)(0xa72f6cu));
    /* 005279b0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005279b3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005279b6: mov dword ptr [0xa72f40], ecx */ W32((u32)(0xa72f40u), r_ecx);
L_005279bc:; BB(0x005279bc);
    /* 005279bc: mov edx, dword ptr [0xa72f50] */ r_edx = R32((u32)(0xa72f50u));
    /* 005279c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005279c4: mov dword ptr [0xa72f44], eax */ W32((u32)(0xa72f44u), r_eax);
    /* 005279c9: mov dword ptr [0xa72f3c], eax */ W32((u32)(0xa72f3cu), r_eax);
    /* 005279ce: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005279d1: jne 0x5279e4 */ if (!fZ) goto L_005279e4;
L_005279d3:; BB(0x005279d3);
    /* 005279d3: mov eax, dword ptr [0xa72f70] */ r_eax = R32((u32)(0xa72f70u));
    /* 005279d8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005279db: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005279de: mov dword ptr [0xa72f44], ecx */ W32((u32)(0xa72f44u), r_ecx);
L_005279e4:; BB(0x005279e4);
    /* 005279e4: ret  */ FN_RET(0x00527994); r_esp += 4; return;
}

void f_005279e8(void) /* sub_5279E8 */
{
    FN_ENTER(0x005279e8);
    /* 005279e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005279e9: mov ebp, esp */ r_ebp = r_esp;
    /* 005279eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005279ed: push 0x8d4a58 */ { u32 v = 0x8d4a58u; r_esp -= 4; W32(r_esp, v); }
    /* 005279f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005279f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005279f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00527a00: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527a03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00527a06: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00527a09: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00527a0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00527a0f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00527a14: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00527a1b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x527a20u); f_008581c5();
    /* 00527a20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00527a21: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00527a24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527a26: je 0x527b88 */ if (fZ) goto L_00527b88;
L_00527a2c:; BB(0x00527a2c);
    /* 00527a2c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00527a33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00527a3a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00527a3d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00527a40: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00527a43: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00527a46: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00527a48: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00527a4a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00527a4c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00527a4e: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00527a51: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00527a53: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00527a55: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00527a57: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00527a59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00527a5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00527a5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00527a5c: push dword ptr [edi + ecx*4 + 0x9bbbc0] */ { u32 v = R32((u32)(r_edi+r_ecx*4+0x9bbbc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00527a63: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00527a66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00527a68: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x527a6du); f_005b7a84();
    /* 00527a6d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00527a70: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00527a77:; BB(0x00527a77);
    /* 00527a77: mov dword ptr [0xa72f48], edx */ W32((u32)(0xa72f48u), r_edx);
    /* 00527a7d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00527a84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00527a87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527a89: je 0x527b02 */ if (fZ) goto L_00527b02;
L_00527a8b:; BB(0x00527a8b);
    /* 00527a8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00527a8e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527a91: jne 0x527ac2 */ if (!fZ) goto L_00527ac2;
L_00527a93:; BB(0x00527a93);
    /* 00527a93: mov esi, dword ptr [edx + 0x42c] */ r_esi = R32((u32)(r_edx+0x42cu));
    /* 00527a99: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00527a9c: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00527a9f: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00527aa2: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 00527aa5: mov ebx, 0xa72f70 */ r_ebx = 0xa72f70u;
    /* 00527aaa: mov dword ptr [0xa72f6c], eax */ W32((u32)(0xa72f6cu), r_eax);
    /* 00527aaf: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00527ab1: mov dword ptr [0xa72f64], ecx */ W32((u32)(0xa72f64u), r_ecx);
    /* 00527ab7: mov dword ptr [0xa72f68], edi */ W32((u32)(0xa72f68u), r_edi);
    /* 00527abd: jmp 0x527b53 */ goto L_00527b53;
L_00527ac2:; BB(0x00527ac2);
    /* 00527ac2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00527ac5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527ac8: jne 0x527af6 */ if (!fZ) goto L_00527af6;
L_00527aca:; BB(0x00527aca);
    /* 00527aca: mov esi, dword ptr [edx + 0x42c] */ r_esi = R32((u32)(r_edx+0x42cu));
    /* 00527ad0: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00527ad3: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00527ad6: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00527ad9: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 00527adc: mov ebx, 0xa72f70 */ r_ebx = 0xa72f70u;
    /* 00527ae1: mov dword ptr [0xa72f6c], eax */ W32((u32)(0xa72f6cu), r_eax);
    /* 00527ae6: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00527ae8: mov dword ptr [0xa72f64], ecx */ W32((u32)(0xa72f64u), r_ecx);
    /* 00527aee: mov dword ptr [0xa72f68], edi */ W32((u32)(0xa72f68u), r_edi);
    /* 00527af4: jmp 0x527b53 */ goto L_00527b53;
L_00527af6:; BB(0x00527af6);
    /* 00527af6: mov eax, dword ptr [0xa72f6c] */ r_eax = R32((u32)(0xa72f6cu));
    /* 00527afb: mov ebx, 0xa72f70 */ r_ebx = 0xa72f70u;
    /* 00527b00: jmp 0x527b53 */ goto L_00527b53;
L_00527b02:; BB(0x00527b02);
    /* 00527b02: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 00527b05: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00527b0b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00527b0e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00527b11: mov ebx, 0xa72f70 */ r_ebx = 0xa72f70u;
    /* 00527b16: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00527b18: mov dword ptr [0xa72f6c], eax */ W32((u32)(0xa72f6cu), r_eax);
    /* 00527b1d: mov dword ptr [0xa72f64], ecx */ W32((u32)(0xa72f64u), r_ecx);
    /* 00527b23: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527b25: je 0x527b3e */ if (fZ) goto L_00527b3e;
L_00527b27:; BB(0x00527b27);
    /* 00527b27: push 0x921ec0 */ { u32 v = 0x921ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 00527b2c: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x527b31u); f_008009dc();
    /* 00527b31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00527b32: mov dword ptr [0xa72f68], eax */ W32((u32)(0xa72f68u), r_eax);
    /* 00527b37: mov eax, dword ptr [0xa72f6c] */ r_eax = R32((u32)(0xa72f6cu));
    /* 00527b3c: jmp 0x527b53 */ goto L_00527b53;
L_00527b3e:; BB(0x00527b3e);
    /* 00527b3e: push 0x921edc */ { u32 v = 0x921edcu; r_esp -= 4; W32(r_esp, v); }
    /* 00527b43: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x527b48u); f_008009dc();
    /* 00527b48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00527b49: mov dword ptr [0xa72f68], eax */ W32((u32)(0xa72f68u), r_eax);
    /* 00527b4e: mov eax, dword ptr [0xa72f6c] */ r_eax = R32((u32)(0xa72f6cu));
L_00527b53:; BB(0x00527b53);
    /* 00527b53: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00527b55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527b56: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x527b5bu); f_0078e934();
    /* 00527b5b: mov dword ptr [0xa72f5c], eax */ W32((u32)(0xa72f5cu), r_eax);
    /* 00527b60: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00527b62: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 00527b64: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x527b69u); f_0078e934();
    /* 00527b69: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00527b6c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00527b6f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00527b72: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00527b75: mov dword ptr [0xa72f60], eax */ W32((u32)(0xa72f60u), r_eax);
    /* 00527b7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00527b7d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00527b84: mov esp, ebp */ r_esp = r_ebp;
    /* 00527b86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527b87: ret  */ FN_RET(0x005279e8); r_esp += 4; return;
L_00527b88:; BB(0x00527b88);
    /* 00527b88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00527b8a: jmp 0x527a77 */ goto L_00527a77;
}

void f_00527b90(void) /* sub_527B90 */
{
    FN_ENTER(0x00527b90);
    /* 00527b90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00527b91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00527b92: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527b95: mov eax, dword ptr [0x921990] */ r_eax = R32((u32)(0x921990u));
    /* 00527b9a: movzx edx, word ptr [0x921994] */ r_edx = (u32)R16((u32)(0x921994u));
    /* 00527ba1: movzx ecx, word ptr [0x921996] */ r_ecx = (u32)R16((u32)(0x921996u));
    /* 00527ba8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00527bac: movzx eax, word ptr [0x921998] */ r_eax = (u32)R16((u32)(0x921998u));
    /* 00527bb3: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 00527bb8: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 00527bbd: mov edx, 5 */ r_edx = 0x5u;
    /* 00527bc2: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00527bc7: mov eax, dword ptr [0xa72f48] */ r_eax = R32((u32)(0xa72f48u));
    /* 00527bcc: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 00527bd2: mov esi, edx */ r_esi = r_edx;
    /* 00527bd4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00527bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00527bd9: mov ebx, eax */ r_ebx = r_eax;
L_00527bdb:; BB(0x00527bdb);
    /* 00527bdb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00527bde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527bdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00527be1: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 00527be4: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00527be9: push dword ptr [ebx + 0xa72f64] */ { u32 v = R32((u32)(r_ebx+0xa72f64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00527bef: push dword ptr [ebx + 0xa72f6c] */ { u32 v = R32((u32)(r_ebx+0xa72f6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00527bf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527bf6: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x527bfbu); f_00608470();
    /* 00527bfb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527bfe: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00527c01: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00527c04: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527c07: jl 0x527bdb */ if ((fS!=fO)) goto L_00527bdb;
L_00527c09:; BB(0x00527c09);
    /* 00527c09: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00527c0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00527c0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00527c0e: ret  */ FN_RET(0x00527b90); r_esp += 4; return;
}

void f_00527c10(void) /* sub_527C10 */
{
    FN_ENTER(0x00527c10);
    /* 00527c10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00527c11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00527c12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00527c13: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00527c17: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527c19: je 0x527c45 */ if (fZ) goto L_00527c45;
L_00527c1b:; BB(0x00527c1b);
    /* 00527c1b: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527c1e: jne 0x527c27 */ if (!fZ) goto L_00527c27;
L_00527c20:; BB(0x00527c20);
    /* 00527c20: mov eax, 2 */ r_eax = 0x2u;
    /* 00527c25: jmp 0x527c47 */ goto L_00527c47;
L_00527c27:; BB(0x00527c27);
    /* 00527c27: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527c2a: jne 0x527c41 */ if (!fZ) goto L_00527c41;
L_00527c2c:; BB(0x00527c2c);
    /* 00527c2c: call 0x807e68 */ r_esp -= 4; W32(r_esp, 0x527c31u); f_00807e68();
    /* 00527c31: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527c34: je 0x527ce6 */ if (fZ) goto L_00527ce6;
L_00527c3a:; BB(0x00527c3a);
    /* 00527c3a: mov eax, 4 */ r_eax = 0x4u;
    /* 00527c3f: jmp 0x527c47 */ goto L_00527c47;
L_00527c41:; BB(0x00527c41);
    /* 00527c41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00527c43: jmp 0x527c47 */ goto L_00527c47;
L_00527c45:; BB(0x00527c45);
    /* 00527c45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00527c47:; BB(0x00527c47);
    /* 00527c47: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00527c4b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00527c4d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00527c4f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00527c51: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00527c53: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 00527c56: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00527c58: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00527c5a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00527c5c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00527c5e: lea ecx, [ecx + ecx] */ r_ecx = (u32)(r_ecx+r_ecx);
    /* 00527c61: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00527c63: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00527c65: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00527c67: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00527c6a: mov esi, eax */ r_esi = r_eax;
    /* 00527c6c: mov edi, ebx */ r_edi = r_ebx;
    /* 00527c6e: mov ebx, edx */ r_ebx = r_edx;
L_00527c70:; BB(0x00527c70);
    /* 00527c70: push dword ptr [esi + 0x921a60] */ { u32 v = R32((u32)(r_esi+0x921a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00527c76: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x527c7bu); f_0077a684();
    /* 00527c7b: push dword ptr [esi + 0x921a64] */ { u32 v = R32((u32)(r_esi+0x921a64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00527c81: mov dword ptr [ebx*4 + 0xa72f8c], eax */ W32((u32)(r_ebx*4+0xa72f8cu), r_eax);
    /* 00527c88: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x527c8du); f_0077a698();
    /* 00527c8d: push dword ptr [esi + 0x921a68] */ { u32 v = R32((u32)(r_esi+0x921a68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00527c93: mov dword ptr [ebx*4 + 0xa72f84], eax */ W32((u32)(r_ebx*4+0xa72f84u), r_eax);
    /* 00527c9a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x527c9fu); f_0077a6b4();
    /* 00527c9f: push dword ptr [esi + 0x921a6c] */ { u32 v = R32((u32)(r_esi+0x921a6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00527ca5: mov dword ptr [ebx*4 + 0xa72f7c], eax */ W32((u32)(r_ebx*4+0xa72f7cu), r_eax);
    /* 00527cac: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x527cb1u); f_0077a6cc();
    /* 00527cb1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527cb4: mov ecx, dword ptr [edi + ebx*4 + 0x921a00] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x921a00u));
    /* 00527cbb: mov dword ptr [ebx*4 + 0xa72f74], eax */ W32((u32)(r_ebx*4+0xa72f74u), r_eax);
    /* 00527cc2: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00527cc5: mov dword ptr [ebx*4 + 0xa72f54], ecx */ W32((u32)(r_ebx*4+0xa72f54u), r_ecx);
    /* 00527ccc: mov ecx, dword ptr [edi + ebx*4 + 0x9219a0] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x9219a0u));
    /* 00527cd3: mov dword ptr [ebx*4 + 0xa72f4c], ecx */ W32((u32)(r_ebx*4+0xa72f4cu), r_ecx);
    /* 00527cda: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00527cdd: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00527ce0: jl 0x527c70 */ if ((fS!=fO)) goto L_00527c70;
L_00527ce2:; BB(0x00527ce2);
    /* 00527ce2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00527ce3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00527ce4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00527ce5: ret  */ FN_RET(0x00527c10); r_esp += 4; return;
L_00527ce6:; BB(0x00527ce6);
    /* 00527ce6: mov eax, 6 */ r_eax = 0x6u;
    /* 00527ceb: jmp 0x527c47 */ goto L_00527c47;
}

void f_00527cf0(void) /* sub_527CF0 */
{
    FN_ENTER(0x00527cf0);
    /* 00527cf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00527cf1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00527cf3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00527cf5: call 0x527d14 */ r_esp -= 4; W32(r_esp, 0x527cfau); f_00527d14();
    /* 00527cfa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527cfe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00527d00: jne 0x527d06 */ if (!fZ) goto L_00527d06;
L_00527d02:; BB(0x00527d02);
    /* 00527d02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00527d03: ret 4 */ FN_RET(0x00527cf0); r_esp += 8; return;
L_00527d06:; BB(0x00527d06);
    /* 00527d06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00527d07: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x527d0cu); f_005c2f74();
    /* 00527d0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00527d0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00527d0e: ret 4 */ FN_RET(0x00527cf0); r_esp += 8; return;
}

void f_00527d14(void) /* sub_527D14 */
{
    FN_ENTER(0x00527d14);
    /* 00527d14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527d15: mov ebp, esp */ r_ebp = r_esp;
    /* 00527d17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527d19: push 0x8d4a98 */ { u32 v = 0x8d4a98u; r_esp -= 4; W32(r_esp, v); }
    /* 00527d1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00527d24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527d25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00527d2c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527d2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00527d32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00527d35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00527d38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00527d3b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00527d3e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00527d45: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00527d48: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 00527d4e: mov dword ptr [ecx], 0xb00fe0 */ W32((u32)(r_ecx), 0xb00fe0u);
    /* 00527d54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527d56: je 0x527d72 */ if (fZ) goto L_00527d72;
L_00527d58:; BB(0x00527d58);
    /* 00527d58: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00527d5b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00527d5f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00527d64: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00527d68: mov dword ptr [ecx + 0x430], 0 */ W32((u32)(r_ecx+0x430u), 0x0u);
L_00527d72:; BB(0x00527d72);
    /* 00527d72: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x527d77u); f_007b9c8c();
    /* 00527d77: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00527d7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00527d81: add ecx, 0x3fc */ {  u32 a = r_ecx; u32 b = 0x3fcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00527d87: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x527d8cu); f_005769f8();
    /* 00527d8c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00527d93: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00527d96: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x527d9bu); f_0051f4fc();
    /* 00527d9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00527d9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00527da5: mov esp, ebp */ r_esp = r_ebp;
    /* 00527da7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527da8: ret  */ FN_RET(0x00527d14); r_esp += 4; return;
}

void f_00527dd2(void)
{
    FN_ENTER(0x00527dd2);
    /* 00527dd2: mov eax, 0x2cd */ r_eax = 0x2cdu;
    /* 00527dd7: ret 4 */ FN_RET(0x00527dd2); r_esp += 8; return;
}

void f_00527dda(void)
{
    FN_ENTER(0x00527dda);
    /* 00527dda: mov eax, 0x2cc */ r_eax = 0x2ccu;
    /* 00527ddf: ret 4 */ FN_RET(0x00527dda); r_esp += 8; return;
}

void f_00527de2(void)
{
    FN_ENTER(0x00527de2);
    /* 00527de2: mov eax, 0x2ca */ r_eax = 0x2cau;
    /* 00527de7: ret 4 */ FN_RET(0x00527de2); r_esp += 8; return;
}

void f_00527dea(void)
{
    FN_ENTER(0x00527dea);
    /* 00527dea: mov eax, 0x2c9 */ r_eax = 0x2c9u;
    /* 00527def: ret 4 */ FN_RET(0x00527dea); r_esp += 8; return;
}

void f_00527df2(void)
{
    FN_ENTER(0x00527df2);
    /* 00527df2: mov eax, 0x2c8 */ r_eax = 0x2c8u;
    /* 00527df7: ret 4 */ FN_RET(0x00527df2); r_esp += 8; return;
}

void f_00527dfa(void)
{
    FN_ENTER(0x00527dfa);
    /* 00527dfa: mov eax, 0x2c7 */ r_eax = 0x2c7u;
    /* 00527dff: ret 4 */ FN_RET(0x00527dfa); r_esp += 8; return;
}

void f_00527e02(void)
{
    FN_ENTER(0x00527e02);
    /* 00527e02: mov eax, 0x2c6 */ r_eax = 0x2c6u;
    /* 00527e07: ret 4 */ FN_RET(0x00527e02); r_esp += 8; return;
}

void f_00527e0a(void)
{
    FN_ENTER(0x00527e0a);
    /* 00527e0a: mov eax, 0x2c5 */ r_eax = 0x2c5u;
    /* 00527e0f: ret 4 */ FN_RET(0x00527e0a); r_esp += 8; return;
}

void f_00527e12(void)
{
    FN_ENTER(0x00527e12);
    /* 00527e12: mov eax, 0x2c4 */ r_eax = 0x2c4u;
    /* 00527e17: ret 4 */ FN_RET(0x00527e12); r_esp += 8; return;
}

void f_00527e24(void) /* sub_527E24 */
{
    FN_ENTER(0x00527e24);
    /* 00527e24: mov eax, dword ptr [0xa72fd0] */ r_eax = R32((u32)(0xa72fd0u));
    /* 00527e29: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527e2c: jne 0x527e42 */ if (!fZ) goto L_00527e42;
L_00527e2e:; BB(0x00527e2e);
    /* 00527e2e: mov edx, dword ptr [0xa72fcc] */ r_edx = R32((u32)(0xa72fccu));
    /* 00527e34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00527e36: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x527e3bu); f_0082d8bc();
    /* 00527e3b: mov eax, dword ptr [0xa72fd0] */ r_eax = R32((u32)(0xa72fd0u));
    /* 00527e40: jmp 0x527e6b */ goto L_00527e6b;
L_00527e42:; BB(0x00527e42);
    /* 00527e42: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527e45: jne 0x527e6b */ if (!fZ) goto L_00527e6b;
L_00527e47:; BB(0x00527e47);
    /* 00527e47: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x527e4cu); f_0082d7b0();
    /* 00527e4c: call 0x520c54 */ r_esp -= 4; W32(r_esp, 0x527e51u); f_00520c54();
    /* 00527e51: mov edx, dword ptr [0xa72fc8] */ r_edx = R32((u32)(0xa72fc8u));
    /* 00527e57: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00527e59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527e5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00527e5c: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x527e61u); f_0082f940();
    /* 00527e61: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x527e66u); f_0082da80();
    /* 00527e66: mov eax, dword ptr [0xa72fd0] */ r_eax = R32((u32)(0xa72fd0u));
L_00527e6b:; BB(0x00527e6b);
    /* 00527e6b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00527e6e: mov dword ptr [0xa72fd0], eax */ W32((u32)(0xa72fd0u), r_eax);
    /* 00527e73: ret  */ FN_RET(0x00527e24); r_esp += 4; return;
}

void f_00527e3d(void)
{
    FN_ENTER(0x00527e3d);
    /* 00527e3d: das  */ UNSUP(0x00527e3d, "das ");
    /* 00527e3e: cmpsd dword ptr [esi], dword ptr es:[edi] */ { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;  }
    /* 00527e3f: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00527e41: sub dword ptr [ebx + 0x24750ef8], eax */ { u32 ad = (u32)(r_ebx+0x24750ef8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00527e47: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x527e4cu); f_0082d7b0();
    /* 00527e4c: call 0x520c54 */ r_esp -= 4; W32(r_esp, 0x527e51u); f_00520c54();
    /* 00527e51: mov edx, dword ptr [0xa72fc8] */ r_edx = R32((u32)(0xa72fc8u));
    /* 00527e57: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00527e59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527e5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00527e5c: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x527e61u); f_0082f940();
    /* 00527e61: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x527e66u); f_0082da80();
    /* 00527e66: mov eax, dword ptr [0xa72fd0] */ r_eax = R32((u32)(0xa72fd0u));
    /* 00527e6b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00527e6e: mov dword ptr [0xa72fd0], eax */ W32((u32)(0xa72fd0u), r_eax);
    /* 00527e73: ret  */ FN_RET(0x00527e3d); r_esp += 4; return;
}

void f_00527e74(void) /* sub_527E74 */
{
    FN_ENTER(0x00527e74);
    /* 00527e74: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00527e78: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00527e7b: ja 0x527f1b */ if ((!fC&&!fZ)) goto L_00527f1b;
L_00527e81:; BB(0x00527e81);
    /* 00527e81: mov eax, dword ptr [eax*4 + 0x921f1c] */ r_eax = R32((u32)(r_eax*4+0x921f1cu));
    /* 00527e88: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527e74); r_esp += 12; return;
}

void f_00527e8a(void)
{
    FN_ENTER(0x00527e8a);
    /* 00527e8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527e8f: call 0x571174 */ r_esp -= 4; W32(r_esp, 0x527e94u); f_00571174();
    /* 00527e94: jmp 0x527f1b */ goto L_00527f1b;
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527e8a); r_esp += 12; return;
}

void f_00527e99(void)
{
    FN_ENTER(0x00527e99);
    /* 00527e99: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527e9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527e9e: call 0x527f20 */ r_esp -= 4; W32(r_esp, 0x527ea3u); f_00527f20();
    /* 00527ea3: jmp 0x527f1b */ goto L_00527f1b;
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527e99); r_esp += 12; return;
}

void f_00527ea5(void)
{
    FN_ENTER(0x00527ea5);
    /* 00527ea5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527ea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527eaa: call 0x528174 */ r_esp -= 4; W32(r_esp, 0x527eafu); f_00528174();
    /* 00527eaf: jmp 0x527f1b */ goto L_00527f1b;
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527ea5); r_esp += 12; return;
}

void f_00527eb1(void)
{
    FN_ENTER(0x00527eb1);
    /* 00527eb1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527eb6: call 0x5282d0 */ r_esp -= 4; W32(r_esp, 0x527ebbu); f_005282d0();
    /* 00527ebb: jmp 0x527f1b */ goto L_00527f1b;
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527eb1); r_esp += 12; return;
}

void f_00527ebd(void)
{
    FN_ENTER(0x00527ebd);
    /* 00527ebd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527ec1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527ec2: call 0x5285f4 */ r_esp -= 4; W32(r_esp, 0x527ec7u); f_005285f4();
    /* 00527ec7: jmp 0x527f1b */ goto L_00527f1b;
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527ebd); r_esp += 12; return;
}

void f_00527ec9(void)
{
    FN_ENTER(0x00527ec9);
    /* 00527ec9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527ecd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527ece: call 0x5286f4 */ r_esp -= 4; W32(r_esp, 0x527ed3u); f_005286f4();
    /* 00527ed3: jmp 0x527f1b */ goto L_00527f1b;
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527ec9); r_esp += 12; return;
}

void f_00527ed5(void)
{
    FN_ENTER(0x00527ed5);
    /* 00527ed5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527ed9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527eda: call 0x528a24 */ r_esp -= 4; W32(r_esp, 0x527edfu); f_00528a24();
    /* 00527edf: jmp 0x527f1b */ goto L_00527f1b;
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527ed5); r_esp += 12; return;
}

void f_00527ee1(void)
{
    FN_ENTER(0x00527ee1);
    /* 00527ee1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527ee5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527ee6: call 0x528c38 */ r_esp -= 4; W32(r_esp, 0x527eebu); f_00528c38();
    /* 00527eeb: jmp 0x527f1b */ goto L_00527f1b;
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527ee1); r_esp += 12; return;
}

void f_00527eed(void)
{
    FN_ENTER(0x00527eed);
    /* 00527eed: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527ef2: call 0x528efc */ r_esp -= 4; W32(r_esp, 0x527ef7u); f_00528efc();
    /* 00527ef7: jmp 0x527f1b */ goto L_00527f1b;
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527eed); r_esp += 12; return;
}

void f_00527ef9(void)
{
    FN_ENTER(0x00527ef9);
    /* 00527ef9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527efd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527efe: call 0x529184 */ r_esp -= 4; W32(r_esp, 0x527f03u); f_00529184();
    /* 00527f03: jmp 0x527f1b */ goto L_00527f1b;
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527ef9); r_esp += 12; return;
}

void f_00527f05(void)
{
    FN_ENTER(0x00527f05);
    /* 00527f05: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527f09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527f0a: call 0x529228 */ r_esp -= 4; W32(r_esp, 0x527f0fu); f_00529228();
    /* 00527f0f: jmp 0x527f1b */ goto L_00527f1b;
L_00527f1b:; BB(0x00527f1b);
    /* 00527f1b: ret 8 */ FN_RET(0x00527f05); r_esp += 12; return;
}

void f_00527f11(void)
{
    FN_ENTER(0x00527f11);
    /* 00527f11: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00527f15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527f16: call 0x5738b0 */ r_esp -= 4; W32(r_esp, 0x527f1bu); f_005738b0();
    /* 00527f1b: ret 8 */ FN_RET(0x00527f11); r_esp += 12; return;
}

void f_00527f20(void) /* sub_527F20 */
{
    FN_ENTER(0x00527f20);
    /* 00527f20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00527f21: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527f24: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00527f26: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00527f2a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527f2d: je 0x5280b4 */ if (fZ) goto L_005280b4;
L_00527f33:; BB(0x00527f33);
    /* 00527f33: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527f36: je 0x528099 */ if (fZ) goto L_00528099;
L_00527f3c:; BB(0x00527f3c);
    /* 00527f3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527f3e: jne 0x5280ad */ if (!fZ) goto L_005280ad;
L_00527f44:; BB(0x00527f44);
    /* 00527f44: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 00527f4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527f4c: jne 0x528025 */ if (!fZ) goto L_00528025;
L_00527f52:; BB(0x00527f52);
    /* 00527f52: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00527f54: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x527f59u); f_007aa094();
    /* 00527f59: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00527f5f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00527f61: je 0x528014 */ if (fZ) goto L_00528014;
L_00527f67:; BB(0x00527f67);
    /* 00527f67: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00527f6a: mov dword ptr [ebx + 0x418], 1 */ W32((u32)(r_ebx+0x418u), 0x1u);
    /* 00527f74: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x527f79u); f_0082dcbc();
    /* 00527f79: fld dword ptr [0x922088] */ FPUSH(R_F32((u32)(0x922088u)));
    /* 00527f7f: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00527f82: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00527f84: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00527f87: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00527f8f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x527f94u); f_0082ddd8();
    /* 00527f94: fld dword ptr [0x922088] */ FPUSH(R_F32((u32)(0x922088u)));
    /* 00527f9a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00527f9c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00527fa0: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00527fa3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00527fa6: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x527fabu); f_0082ebac();
    /* 00527fab: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00527fb1: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527fb6: je 0x527ffa */ if (fZ) goto L_00527ffa;
L_00527fb8:; BB(0x00527fb8);
    /* 00527fb8: push 0x2e3 */ { u32 v = 0x2e3u; r_esp -= 4; W32(r_esp, v); }
    /* 00527fbd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00527fbf: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x527fc4u); f_007879b8();
    /* 00527fc4: mov ecx, eax */ r_ecx = r_eax;
    /* 00527fc6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00527fc9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00527fcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527fcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527fcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527fce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527fcf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x527fd4u); f_00814298();
    /* 00527fd4: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00527fd8: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00527fda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527fdb: call 0x5786e8 */ r_esp -= 4; W32(r_esp, 0x527fe0u); f_005786e8();
    /* 00527fe0: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00527fe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527fe5: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x527feau); f_005787fc();
    /* 00527fea: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527fed: lea ecx, [ebx + 0x3fc] */ r_ecx = (u32)(r_ebx+0x3fcu);
    /* 00527ff3: call 0x576c0c */ r_esp -= 4; W32(r_esp, 0x527ff8u); f_00576c0c();
    /* 00527ff8: jmp 0x528014 */ goto L_00528014;
L_00527ffa:; BB(0x00527ffa);
    /* 00527ffa: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00527ffd: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00527fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528000: call 0x5784a8 */ r_esp -= 4; W32(r_esp, 0x528005u); f_005784a8();
    /* 00528005: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00528009: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052800b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052800c: call 0x5787a4 */ r_esp -= 4; W32(r_esp, 0x528011u); f_005787a4();
    /* 00528011: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00528014:; BB(0x00528014);
    /* 00528014: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00528016: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00528018: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x52801eu); call_ind(t); }
    /* 0052801e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00528021: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00528022: ret 4 */ FN_RET(0x00527f20); r_esp += 8; return;
L_00528025:; BB(0x00528025);
    /* 00528025: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528028: jne 0x5280ad */ if (!fZ) goto L_005280ad;
L_0052802e:; BB(0x0052802e);
    /* 0052802e: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00528034: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528039: je 0x52805f */ if (fZ) goto L_0052805f;
L_0052803b:; BB(0x0052803b);
    /* 0052803b: mov eax, dword ptr [ebx + 0x3fc] */ r_eax = R32((u32)(r_ebx+0x3fcu));
    /* 00528041: lea ecx, [ebx + 0x3fc] */ r_ecx = (u32)(r_ebx+0x3fcu);
    /* 00528047: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x52804au); call_ind(t); }
    /* 0052804a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052804c: je 0x5280ad */ if (fZ) goto L_005280ad;
L_0052804e:; BB(0x0052804e);
    /* 0052804e: mov dword ptr [ebx + 0x418], 2 */ W32((u32)(r_ebx+0x418u), 0x2u);
    /* 00528058: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052805b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052805c: ret 4 */ FN_RET(0x00527f20); r_esp += 8; return;
L_0052805f:; BB(0x0052805f);
    /* 0052805f: fld dword ptr [0x922090] */ FPUSH(R_F32((u32)(0x922090u)));
    /* 00528065: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00528068: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0052806a: fld dword ptr [ebx + 0x42c] */ FPUSH(R_F32((u32)(r_ebx+0x42cu)));
    /* 00528070: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00528072: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 00528075: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00528077: fcom dword ptr [0x92208c] */ fx_compare(ST(0), R_F32((u32)(0x92208cu))); 
    /* 0052807d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052807f: fstp dword ptr [ebx + 0x42c] */ W_F32((u32)(r_ebx+0x42cu), ST(0)); FPOP();
    /* 00528085: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00528086: jbe 0x5280ad */ if ((fC||fZ)) goto L_005280ad;
L_00528088:; BB(0x00528088);
    /* 00528088: mov dword ptr [ebx + 0x418], 2 */ W32((u32)(r_ebx+0x418u), 0x2u);
    /* 00528092: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00528095: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00528096: ret 4 */ FN_RET(0x00527f20); r_esp += 8; return;
L_00528099:; BB(0x00528099);
    /* 00528099: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 0052809f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005280a2: jne 0x5280ad */ if (!fZ) goto L_005280ad;
L_005280a4:; BB(0x005280a4);
    /* 005280a4: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005280a6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005280a8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5280adu); f_0051f62c();
L_005280ad:; BB(0x005280ad);
    /* 005280ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005280b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005280b1: ret 4 */ FN_RET(0x00527f20); r_esp += 8; return;
L_005280b4:; BB(0x005280b4);
    /* 005280b4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005280b6: mov eax, 5 */ r_eax = 0x5u;
    /* 005280bb: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005280c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005280c4: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5280cau); call_ind(t); }
    /* 005280ca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005280cc: call 0x52814c */ r_esp -= 4; W32(r_esp, 0x5280d1u); f_0052814c();
    /* 005280d1: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 005280d7: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005280da: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 005280e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005280e2: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x5280e7u); f_0051f894();
    /* 005280e7: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 005280ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005280ee: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x5280f3u); f_00779df0();
    /* 005280f3: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 005280f9: mov dword ptr [ebx + 0x418], 0 */ W32((u32)(r_ebx+0x418u), 0x0u);
    /* 00528103: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528108: mov dword ptr [ebx + 0x42c], 0 */ W32((u32)(r_ebx+0x42cu), 0x0u);
    /* 00528112: je 0x52811b */ if (fZ) goto L_0052811b;
L_00528114:; BB(0x00528114);
    /* 00528114: mov eax, 0x2c8 */ r_eax = 0x2c8u;
    /* 00528119: jmp 0x528127 */ goto L_00528127;
L_0052811b:; BB(0x0052811b);
    /* 0052811b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00528120: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00528122: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x528127u); f_007879b8();
L_00528127:; BB(0x00528127);
    /* 00528127: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0052812a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052812c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052812d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052812e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052812f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528130: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x528135u); f_00814298();
    /* 00528135: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 0052813a: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x52813fu); f_00814680();
    /* 0052813f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528142: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00528145: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00528146: ret 4 */ FN_RET(0x00527f20); r_esp += 8; return;
}

