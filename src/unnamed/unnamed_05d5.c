#include "protos.h"

void f_005d53ac(void) /* sub_5D53AC */
{
    FN_ENTER(0x005d53ac);
    /* 005d53ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d53ad: sub esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d53b3: movzx edx, byte ptr [ecx + 2] */ r_edx = (u32)R8((u32)(r_ecx+0x2u));
    /* 005d53b7: lea eax, [edx - 0x37] */ r_eax = (u32)(r_edx+0xffffffc9u);
    /* 005d53ba: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d53bd: ja 0x5d5785 */ if ((!fC&&!fZ)) goto L_005d5785;
L_005d53c3:; BB(0x005d53c3);
    /* 005d53c3: mov eax, dword ptr [edx*4 + 0x92c204] */ r_eax = R32((u32)(r_edx*4+0x92c204u));
    /* 005d53ca: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d5785:; BB(0x005d5785);
    /* 005d5785: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d578b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d578c: ret 0x14 */ FN_RET(0x005d53ac); r_esp += 24; return;
}

void f_005d53cc(void)
{
    FN_ENTER(0x005d53cc);
    /* 005d53cc: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d53d3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d53d5: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d53db: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d53e0u); f_0069792c();
    /* 005d53e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d53e2: je 0x5d5785 */ if (fZ) goto L_005d5785;
L_005d53e8:; BB(0x005d53e8);
    /* 005d53e8: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d53ef: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d53f2: jne 0x5d5785 */ if (!fZ) goto L_005d5785;
L_005d53f8:; BB(0x005d53f8);
    /* 005d53f8: jmp 0x5d578f */ goto L_005d578f;
L_005d5785:; BB(0x005d5785);
    /* 005d5785: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d578b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d578c: ret 0x14 */ FN_RET(0x005d53cc); r_esp += 24; return;
L_005d578f:; BB(0x005d578f);
    /* 005d578f: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d5796: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d5798: jl 0x5d5785 */ if ((fS!=fO)) goto L_005d5785;
L_005d579a:; BB(0x005d579a);
    /* 005d579a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d579d: jg 0x5d5785 */ if ((!fZ&&fS==fO)) goto L_005d5785;
L_005d579f:; BB(0x005d579f);
    /* 005d579f: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d57a6: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d57ad: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d57b1: add edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d57b7: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d57bb: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d57c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d57c2: ret 0x14 */ FN_RET(0x005d53cc); r_esp += 24; return;
}

void f_005d53fd(void)
{
    FN_ENTER(0x005d53fd);
    /* 005d53fd: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d5404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5406: je 0x5d5785 */ if (fZ) goto L_005d5785;
L_005d540c:; BB(0x005d540c);
    /* 005d540c: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 005d5410: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d5412: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d5414: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d5418: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005d541c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005d5420: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005d5424: mov dword ptr [esp + 0x58], 0xffffffff */ W32((u32)(r_esp+0x58u), 0xffffffffu);
    /* 005d542c: mov byte ptr [esp + 0x30], al */ W8((u32)(r_esp+0x30u), (u8)r_eax);
    /* 005d5430: mov byte ptr [esp + 0x31], al */ W8((u32)(r_esp+0x31u), (u8)r_eax);
    /* 005d5434: mov byte ptr [esp + 0x32], al */ W8((u32)(r_esp+0x32u), (u8)r_eax);
    /* 005d5438: mov byte ptr [esp + 0x33], al */ W8((u32)(r_esp+0x33u), (u8)r_eax);
    /* 005d543c: mov word ptr [esp + 0x34], ax */ W16((u32)(r_esp+0x34u), (u16)r_eax);
    /* 005d5441: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 005d5445: mov word ptr [esp + 0x5c], ax */ W16((u32)(r_esp+0x5cu), (u16)r_eax);
    /* 005d544a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d544b: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d5452: push dword ptr [ecx + 0xeb4] */ { u32 v = R32((u32)(r_ecx+0xeb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d5458: call 0x797790 */ r_esp -= 4; W32(r_esp, 0x5d545du); f_00797790();
    /* 005d545d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d5460: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005d5464: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5466: jne 0x5d5484 */ if (!fZ) goto L_005d5484;
L_005d5468:; BB(0x005d5468);
    /* 005d5468: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005d546c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d546e: jne 0x5d5484 */ if (!fZ) goto L_005d5484;
L_005d5470:; BB(0x005d5470);
    /* 005d5470: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005d5474: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5476: jne 0x5d5484 */ if (!fZ) goto L_005d5484;
L_005d5478:; BB(0x005d5478);
    /* 005d5478: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005d547c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d547e: jne 0x5d5484 */ if (!fZ) goto L_005d5484;
L_005d5480:; BB(0x005d5480);
    /* 005d5480: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d5482: jmp 0x5d5489 */ goto L_005d5489;
L_005d5484:; BB(0x005d5484);
    /* 005d5484: mov eax, 1 */ r_eax = 0x1u;
L_005d5489:; BB(0x005d5489);
    /* 005d5489: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d548b: je 0x5d5492 */ if (fZ) goto L_005d5492;
L_005d548d:; BB(0x005d548d);
    /* 005d548d: movzx ebx, byte ptr [esp + 0x31] */ r_ebx = (u32)R8((u32)(r_esp+0x31u));
L_005d5492:; BB(0x005d5492);
    /* 005d5492: mov ecx, dword ptr [esp + 0x88c] */ r_ecx = R32((u32)(r_esp+0x88cu));
    /* 005d5499: mov edx, 0x64 */ r_edx = 0x64u;
    /* 005d549e: cmp ebx, 0x64 */ {  u32 a = r_ebx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d54a1: jle 0x5d54a5 */ if ((fZ||fS!=fO)) goto L_005d54a5;
L_005d54a3:; BB(0x005d54a3);
    /* 005d54a3: mov ebx, edx */ r_ebx = r_edx;
L_005d54a5:; BB(0x005d54a5);
    /* 005d54a5: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005d54a8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005d54ab: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005d54ad: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d54b1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d54b6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d54bb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d54bf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d54c3: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d54c7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d54cb: movsx eax, word ptr [esp + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 005d54d0: add dword ptr [ecx + 0x1c], eax */ { u32 ad = (u32)(r_ecx+0x1cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005d54d3: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d54d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d54da: ret 0x14 */ FN_RET(0x005d53fd); r_esp += 24; return;
L_005d5785:; BB(0x005d5785);
    /* 005d5785: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d578b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d578c: ret 0x14 */ FN_RET(0x005d53fd); r_esp += 24; return;
}

void f_005d54dd(void)
{
    FN_ENTER(0x005d54dd);
    /* 005d54dd: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d54e4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d54e6: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d54ec: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d54f1u); f_0069792c();
    /* 005d54f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d54f3: je 0x5d5785 */ if (fZ) goto L_005d5785;
L_005d54f9:; BB(0x005d54f9);
    /* 005d54f9: movzx eax, byte ptr [eax + 0xf3] */ r_eax = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d5500: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5503: je 0x5d5513 */ if (fZ) goto L_005d5513;
L_005d5505:; BB(0x005d5505);
    /* 005d5505: cmp eax, 0x39 */ {  u32 a = r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5508: je 0x5d5513 */ if (fZ) goto L_005d5513;
L_005d550a:; BB(0x005d550a);
    /* 005d550a: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d550d: jne 0x5d5785 */ if (!fZ) goto L_005d5785;
L_005d5513:; BB(0x005d5513);
    /* 005d5513: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d551a: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d5521: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d5525: add edx, 0xdc */ {  u32 a = r_edx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d552b: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d552f: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5535: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d5536: ret 0x14 */ FN_RET(0x005d54dd); r_esp += 24; return;
L_005d5785:; BB(0x005d5785);
    /* 005d5785: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d578b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d578c: ret 0x14 */ FN_RET(0x005d54dd); r_esp += 24; return;
}

void f_005d5539(void)
{
    FN_ENTER(0x005d5539);
    /* 005d5539: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d5540: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5542: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d5548: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d554du); f_0069792c();
    /* 005d554d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d554f: je 0x5d5785 */ if (fZ) goto L_005d5785;
L_005d5555:; BB(0x005d5555);
    /* 005d5555: movzx eax, byte ptr [eax + 0xf3] */ r_eax = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d555c: cmp eax, 0x99 */ {  u32 a = r_eax; u32 b = 0x99u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5561: jne 0x5d5785 */ if (!fZ) goto L_005d5785;
L_005d5567:; BB(0x005d5567);
    /* 005d5567: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d556e: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d5575: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d5579: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d557c: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d5580: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5586: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d5587: ret 0x14 */ FN_RET(0x005d5539); r_esp += 24; return;
L_005d5785:; BB(0x005d5785);
    /* 005d5785: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d578b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d578c: ret 0x14 */ FN_RET(0x005d5539); r_esp += 24; return;
}

void f_005d558a(void)
{
    FN_ENTER(0x005d558a);
    /* 005d558a: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d5591: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5593: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d5599: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d559eu); f_0069792c();
    /* 005d559e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d55a0: je 0x5d5785 */ if (fZ) goto L_005d5785;
L_005d55a6:; BB(0x005d55a6);
    /* 005d55a6: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d55ad: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d55b0: jne 0x5d5785 */ if (!fZ) goto L_005d5785;
L_005d55b6:; BB(0x005d55b6);
    /* 005d55b6: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d55bd: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d55c0: jl 0x5d5785 */ if ((fS!=fO)) goto L_005d5785;
L_005d55c6:; BB(0x005d55c6);
    /* 005d55c6: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d55c9: jg 0x5d5785 */ if ((!fZ&&fS==fO)) goto L_005d5785;
L_005d55cf:; BB(0x005d55cf);
    /* 005d55cf: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d55d6: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d55dd: mov ebx, dword ptr [esp + 0x894] */ r_ebx = R32((u32)(r_esp+0x894u));
    /* 005d55e4: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d55e8: add edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d55ee: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d55f2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d55f4: je 0x5d5785 */ if (fZ) goto L_005d5785;
L_005d55fa:; BB(0x005d55fa);
    /* 005d55fa: fld dword ptr [0x92c43c] */ FPUSH(R_F32((u32)(0x92c43cu)));
    /* 005d5600: mov eax, dword ptr [esp + 0x894] */ r_eax = R32((u32)(r_esp+0x894u));
    /* 005d5607: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 005d560a: mov edx, dword ptr [esp + 0x894] */ r_edx = R32((u32)(r_esp+0x894u));
    /* 005d5611: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 005d5614: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d561a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d561b: ret 0x14 */ FN_RET(0x005d558a); r_esp += 24; return;
L_005d5785:; BB(0x005d5785);
    /* 005d5785: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d578b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d578c: ret 0x14 */ FN_RET(0x005d558a); r_esp += 24; return;
}

void f_005d561e(void)
{
    FN_ENTER(0x005d561e);
    /* 005d561e: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d5625: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5627: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d562d: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d5632u); f_0069792c();
    /* 005d5632: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5634: je 0x5d5785 */ if (fZ) goto L_005d5785;
L_005d563a:; BB(0x005d563a);
    /* 005d563a: movzx eax, byte ptr [eax + 0xf3] */ r_eax = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d5641: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5644: je 0x5d5654 */ if (fZ) goto L_005d5654;
L_005d5646:; BB(0x005d5646);
    /* 005d5646: cmp eax, 0x39 */ {  u32 a = r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5649: je 0x5d5654 */ if (fZ) goto L_005d5654;
L_005d564b:; BB(0x005d564b);
    /* 005d564b: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d564e: jne 0x5d5785 */ if (!fZ) goto L_005d5785;
L_005d5654:; BB(0x005d5654);
    /* 005d5654: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d565b: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d5662: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d5666: add edx, 0x96 */ {  u32 a = r_edx; u32 b = 0x96u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d566c: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d5670: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5676: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d5677: ret 0x14 */ FN_RET(0x005d561e); r_esp += 24; return;
L_005d5785:; BB(0x005d5785);
    /* 005d5785: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d578b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d578c: ret 0x14 */ FN_RET(0x005d561e); r_esp += 24; return;
}

void f_005d567a(void)
{
    FN_ENTER(0x005d567a);
    /* 005d567a: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d5681: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5683: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d5689: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d568eu); f_0069792c();
    /* 005d568e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5690: je 0x5d5785 */ if (fZ) goto L_005d5785;
L_005d5696:; BB(0x005d5696);
    /* 005d5696: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d569d: cmp edx, 0x89 */ {  u32 a = r_edx; u32 b = 0x89u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d56a3: jne 0x5d56fc */ if (!fZ) goto L_005d56fc;
L_005d56a5:; BB(0x005d56a5);
    /* 005d56a5: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d56ac: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d56af: jne 0x5d5785 */ if (!fZ) goto L_005d5785;
L_005d56b5:; BB(0x005d56b5);
    /* 005d56b5: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d56bc: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d56c3: mov ebx, dword ptr [esp + 0x888] */ r_ebx = R32((u32)(r_esp+0x888u));
    /* 005d56ca: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d56ce: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d56d5: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 005d56d9: add word ptr [ebx], 0x64 */ { u32 ad = (u32)(r_ebx);  u32 a = R16(ad); u32 b = 0x64u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d56dd: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d56e0: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 005d56e4: mov edx, dword ptr [esp + 0x888] */ r_edx = R32((u32)(r_esp+0x888u));
    /* 005d56eb: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d56ee: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005d56f2: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d56f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d56f9: ret 0x14 */ FN_RET(0x005d567a); r_esp += 24; return;
L_005d56fc:; BB(0x005d56fc);
    /* 005d56fc: cmp edx, 0x8a */ {  u32 a = r_edx; u32 b = 0x8au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5702: jne 0x5d5785 */ if (!fZ) goto L_005d5785;
L_005d5708:; BB(0x005d5708);
    /* 005d5708: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d570f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d5711: jl 0x5d5785 */ if ((fS!=fO)) goto L_005d5785;
L_005d5713:; BB(0x005d5713);
    /* 005d5713: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5716: jg 0x5d5785 */ if ((!fZ&&fS==fO)) goto L_005d5785;
L_005d5718:; BB(0x005d5718);
    /* 005d5718: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d571f: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d5726: mov ebx, dword ptr [esp + 0x888] */ r_ebx = R32((u32)(r_esp+0x888u));
    /* 005d572d: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d5731: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d5738: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 005d573c: add word ptr [ebx], 0x64 */ { u32 ad = (u32)(r_ebx);  u32 a = R16(ad); u32 b = 0x64u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d5740: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d5743: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 005d5747: mov edx, dword ptr [esp + 0x888] */ r_edx = R32((u32)(r_esp+0x888u));
    /* 005d574e: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5751: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005d5755: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d575b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d575c: ret 0x14 */ FN_RET(0x005d567a); r_esp += 24; return;
L_005d5785:; BB(0x005d5785);
    /* 005d5785: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d578b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d578c: ret 0x14 */ FN_RET(0x005d567a); r_esp += 24; return;
}

void f_005d575f(void)
{
    FN_ENTER(0x005d575f);
    /* 005d575f: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d5766: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5768: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d576e: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d5773u); f_0069792c();
    /* 005d5773: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5775: je 0x5d5785 */ if (fZ) goto L_005d5785;
L_005d5777:; BB(0x005d5777);
    /* 005d5777: movzx eax, byte ptr [eax + 0xf3] */ r_eax = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d577e: cmp eax, 0x94 */ {  u32 a = r_eax; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5783: je 0x5d57c5 */ if (fZ) goto L_005d57c5;
L_005d5785:; BB(0x005d5785);
    /* 005d5785: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d578b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d578c: ret 0x14 */ FN_RET(0x005d575f); r_esp += 24; return;
L_005d57c5:; BB(0x005d57c5);
    /* 005d57c5: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d57cc: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d57d3: mov ebx, dword ptr [esp + 0x888] */ r_ebx = R32((u32)(r_esp+0x888u));
    /* 005d57da: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d57de: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d57e5: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 005d57e9: add word ptr [ebx], 0x96 */ { u32 ad = (u32)(r_ebx);  u32 a = R16(ad); u32 b = 0x96u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d57ee: add edx, 0x96 */ {  u32 a = r_edx; u32 b = 0x96u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d57f4: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 005d57f8: mov edx, dword ptr [esp + 0x888] */ r_edx = R32((u32)(r_esp+0x888u));
    /* 005d57ff: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5802: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005d5806: mov eax, dword ptr [esp + 0x894] */ r_eax = R32((u32)(r_esp+0x894u));
    /* 005d580d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d580f: je 0x5d5785 */ if (fZ) goto L_005d5785;
L_005d5815:; BB(0x005d5815);
    /* 005d5815: fld dword ptr [0x92c438] */ FPUSH(R_F32((u32)(0x92c438u)));
    /* 005d581b: mov eax, dword ptr [esp + 0x894] */ r_eax = R32((u32)(r_esp+0x894u));
    /* 005d5822: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 005d5825: mov edx, dword ptr [esp + 0x894] */ r_edx = R32((u32)(r_esp+0x894u));
    /* 005d582c: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 005d582f: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5835: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d5836: ret 0x14 */ FN_RET(0x005d575f); r_esp += 24; return;
}

void f_005d5785(void)
{
    FN_ENTER(0x005d5785);
    /* 005d5785: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d578b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d578c: ret 0x14 */ FN_RET(0x005d5785); r_esp += 24; return;
}

void f_005d583c(void) /* sub_5D583C */
{
    FN_ENTER(0x005d583c);
    /* 005d583c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d583d: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5840: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d5842: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 005d5846: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5849: je 0x5d5e92 */ if (fZ) goto L_005d5e92;
L_005d584f:; BB(0x005d584f);
    /* 005d584f: cmp eax, 0xb3 */ {  u32 a = r_eax; u32 b = 0xb3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5854: je 0x5d5e1a */ if (fZ) goto L_005d5e1a;
L_005d585a:; BB(0x005d585a);
    /* 005d585a: cmp eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d585f: je 0x5d5d13 */ if (fZ) goto L_005d5d13;
L_005d5865:; BB(0x005d5865);
    /* 005d5865: cmp eax, 0xbf */ {  u32 a = r_eax; u32 b = 0xbfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d586a: je 0x5d5911 */ if (fZ) goto L_005d5911;
L_005d5870:; BB(0x005d5870);
    /* 005d5870: cmp eax, 0xac */ {  u32 a = r_eax; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5875: jne 0x5d58a5 */ if (!fZ) goto L_005d58a5;
L_005d5877:; BB(0x005d5877);
    /* 005d5877: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005d587b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d587d: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d5883: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d5888u); f_0069792c();
    /* 005d5888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d588a: je 0x5d5936 */ if (fZ) goto L_005d5936;
L_005d5890:; BB(0x005d5890);
    /* 005d5890: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 005d5897: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d589a: je 0x5d5a22 */ if (fZ) goto L_005d5a22;
L_005d58a0:; BB(0x005d58a0);
    /* 005d58a0: jmp 0x5d5936 */ goto L_005d5936;
L_005d58a5:; BB(0x005d58a5);
    /* 005d58a5: cmp eax, 0xc5 */ {  u32 a = r_eax; u32 b = 0xc5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d58aa: jne 0x5d5936 */ if (!fZ) goto L_005d5936;
L_005d58b0:; BB(0x005d58b0);
    /* 005d58b0: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005d58b4: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d58b8: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005d58bc: add edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d58bf: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 005d58c3: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005d58c7: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005d58cb: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 005d58cf: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d58d2: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005d58d6: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005d58da: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005d58de: movzx eax, word ptr [eax + 6] */ r_eax = (u32)R16((u32)(r_eax+0x6u));
    /* 005d58e2: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d58e5: mov word ptr [edx + 6], ax */ W16((u32)(r_edx+0x6u), (u16)r_eax);
    /* 005d58e9: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005d58ed: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005d58f1: movzx eax, word ptr [eax + 0xa] */ r_eax = (u32)R16((u32)(r_eax+0xau));
    /* 005d58f5: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d58f8: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 005d58fc: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005d5900: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005d5904: movzx eax, word ptr [eax + 8] */ r_eax = (u32)R16((u32)(r_eax+0x8u));
    /* 005d5908: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d590b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005d590f: jmp 0x5d5936 */ goto L_005d5936;
L_005d5911:; BB(0x005d5911);
    /* 005d5911: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005d5915: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5917: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d591d: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d5922u); f_0069792c();
    /* 005d5922: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5924: je 0x5d5936 */ if (fZ) goto L_005d5936;
L_005d5926:; BB(0x005d5926);
    /* 005d5926: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 005d592d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5930: je 0x5d5a7d */ if (fZ) goto L_005d5a7d;
L_005d5936:; BB(0x005d5936);
    /* 005d5936: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x5d593bu); f_0080a640();
    /* 005d593b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d593d: jne 0x5d5a1b */ if (!fZ) goto L_005d5a1b;
L_005d5943:; BB(0x005d5943);
    /* 005d5943: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 005d5949: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005d594d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d594f: je 0x5d5a1b */ if (fZ) goto L_005d5a1b;
L_005d5955:; BB(0x005d5955);
    /* 005d5955: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5957: je 0x5d5a1b */ if (fZ) goto L_005d5a1b;
L_005d595d:; BB(0x005d595d);
    /* 005d595d: mov eax, dword ptr [edx + 0x2b8] */ r_eax = R32((u32)(r_edx+0x2b8u));
    /* 005d5963: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5965: jne 0x5d5989 */ if (!fZ) goto L_005d5989;
L_005d5967:; BB(0x005d5967);
    /* 005d5967: mov eax, dword ptr [edx + 0x2bc] */ r_eax = R32((u32)(r_edx+0x2bcu));
    /* 005d596d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d596f: jne 0x5d5989 */ if (!fZ) goto L_005d5989;
L_005d5971:; BB(0x005d5971);
    /* 005d5971: mov eax, dword ptr [edx + 0x2c0] */ r_eax = R32((u32)(r_edx+0x2c0u));
    /* 005d5977: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5979: jne 0x5d5989 */ if (!fZ) goto L_005d5989;
L_005d597b:; BB(0x005d597b);
    /* 005d597b: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005d5981: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5983: jne 0x5d5989 */ if (!fZ) goto L_005d5989;
L_005d5985:; BB(0x005d5985);
    /* 005d5985: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d5987: jmp 0x5d598e */ goto L_005d598e;
L_005d5989:; BB(0x005d5989);
    /* 005d5989: mov eax, 1 */ r_eax = 0x1u;
L_005d598e:; BB(0x005d598e);
    /* 005d598e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5990: je 0x5d5a1b */ if (fZ) goto L_005d5a1b;
L_005d5996:; BB(0x005d5996);
    /* 005d5996: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005d599a: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005d599e: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 005d59a2: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005d59a6: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005d59a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d59ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d59ad: mov ebp, edx */ r_ebp = r_edx;
    /* 005d59af: mov ebx, ecx */ r_ebx = r_ecx;
L_005d59b1:; BB(0x005d59b1);
    /* 005d59b1: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 005d59b5: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d59b7: je 0x5d5a06 */ if (fZ) goto L_005d5a06;
L_005d59b9:; BB(0x005d59b9);
    /* 005d59b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d59ba: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5d59bfu); f_0068d5a8();
    /* 005d59bf: mov edi, eax */ r_edi = r_eax;
    /* 005d59c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d59c4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d59c6: je 0x5d5a06 */ if (fZ) goto L_005d5a06;
L_005d59c8:; BB(0x005d59c8);
    /* 005d59c8: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 005d59ce: cmp eax, dword ptr [esi + 0x3f0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d59d4: jne 0x5d5a06 */ if (!fZ) goto L_005d5a06;
L_005d59d6:; BB(0x005d59d6);
    /* 005d59d6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d59d8: lea ecx, [edi + 0xdf8] */ r_ecx = (u32)(r_edi+0xdf8u);
    /* 005d59de: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d59e3u); f_0069792c();
    /* 005d59e3: mov edx, eax */ r_edx = r_eax;
    /* 005d59e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d59e7: je 0x5d5a06 */ if (fZ) goto L_005d5a06;
L_005d59e9:; BB(0x005d59e9);
    /* 005d59e9: movzx eax, byte ptr [edx + 0xf2] */ r_eax = (u32)R8((u32)(r_edx+0xf2u));
    /* 005d59f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d59f2: jne 0x5d5a06 */ if (!fZ) goto L_005d5a06;
L_005d59f4:; BB(0x005d59f4);
    /* 005d59f4: movzx eax, byte ptr [edx + 0xf3] */ r_eax = (u32)R8((u32)(r_edx+0xf3u));
    /* 005d59fb: cmp eax, 0xb2 */ {  u32 a = r_eax; u32 b = 0xb2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5a00: je 0x5d5abf */ if (fZ) goto L_005d5abf;
L_005d5a06:; BB(0x005d5a06);
    /* 005d5a06: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d5a09: mov eax, ebx */ r_eax = r_ebx;
    /* 005d5a0b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5a0e: jl 0x5d59b1 */ if ((fS!=fO)) goto L_005d59b1;
L_005d5a10:; BB(0x005d5a10);
    /* 005d5a10: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5a14: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5a18: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005d5a1b:; BB(0x005d5a1b);
    /* 005d5a1b: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5a1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d5a1f: ret 0x14 */ FN_RET(0x005d583c); r_esp += 24; return;
L_005d5a22:; BB(0x005d5a22);
    /* 005d5a22: movzx eax, byte ptr [eax + 0xf3] */ r_eax = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d5a29: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5a2c: jne 0x5d5936 */ if (!fZ) goto L_005d5936;
L_005d5a32:; BB(0x005d5a32);
    /* 005d5a32: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005d5a36: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 005d5a3a: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005d5a3e: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d5a41: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 005d5a45: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005d5a49: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005d5a4d: movzx eax, word ptr [eax + 0xa] */ r_eax = (u32)R16((u32)(r_eax+0xau));
    /* 005d5a51: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5a54: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 005d5a58: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005d5a5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5a5e: je 0x5d5936 */ if (fZ) goto L_005d5936;
L_005d5a64:; BB(0x005d5a64);
    /* 005d5a64: fld dword ptr [0x92c434] */ FPUSH(R_F32((u32)(0x92c434u)));
    /* 005d5a6a: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005d5a6e: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 005d5a71: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 005d5a75: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 005d5a78: jmp 0x5d5936 */ goto L_005d5936;
L_005d5a7d:; BB(0x005d5a7d);
    /* 005d5a7d: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d5a84: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5a87: jne 0x5d5936 */ if (!fZ) goto L_005d5936;
L_005d5a8d:; BB(0x005d5a8d);
    /* 005d5a8d: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d5a94: cmp eax, 0x87 */ {  u32 a = r_eax; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5a99: jne 0x5d5936 */ if (!fZ) goto L_005d5936;
L_005d5a9f:; BB(0x005d5a9f);
    /* 005d5a9f: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005d5aa3: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d5aa7: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005d5aab: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d5aae: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 005d5ab2: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005d5ab6: add word ptr [eax], 0x1e */ { u32 ad = (u32)(r_eax);  u32 a = R16(ad); u32 b = 0x1eu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d5aba: jmp 0x5d5936 */ goto L_005d5936;
L_005d5abf:; BB(0x005d5abf);
    /* 005d5abf: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005d5ac3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d5ac7: mov eax, dword ptr [edi + 0xeb4] */ r_eax = R32((u32)(r_edi+0xeb4u));
    /* 005d5acd: cmp eax, dword ptr [0xaaacc4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaacc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5ad3: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005d5ad7: mov edi, dword ptr [ebp + 0x2b8] */ r_edi = R32((u32)(r_ebp+0x2b8u));
    /* 005d5add: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 005d5ae1: mov edi, dword ptr [ebp + 0x2bc] */ r_edi = R32((u32)(r_ebp+0x2bcu));
    /* 005d5ae7: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 005d5aeb: mov edi, dword ptr [ebp + 0x2c0] */ r_edi = R32((u32)(r_ebp+0x2c0u));
    /* 005d5af1: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 005d5af5: mov edi, dword ptr [ebp + 0x2c4] */ r_edi = R32((u32)(r_ebp+0x2c4u));
    /* 005d5afb: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 005d5aff: jne 0x5d5b1d */ if (!fZ) goto L_005d5b1d;
L_005d5b01:; BB(0x005d5b01);
    /* 005d5b01: mov edx, dword ptr [0xaaacc8] */ r_edx = R32((u32)(0xaaacc8u));
    /* 005d5b07: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d5b0b: mov edi, dword ptr [0xaaaccc] */ r_edi = R32((u32)(0xaaacccu));
    /* 005d5b11: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5b15: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d5b17: je 0x5d5cf9 */ if (fZ) goto L_005d5cf9;
L_005d5b1d:; BB(0x005d5b1d);
    /* 005d5b1d: cmp eax, dword ptr [0xaaad08] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaad08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b23: jne 0x5d5b41 */ if (!fZ) goto L_005d5b41;
L_005d5b25:; BB(0x005d5b25);
    /* 005d5b25: mov edx, dword ptr [0xaaad0c] */ r_edx = R32((u32)(0xaaad0cu));
    /* 005d5b2b: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d5b2f: mov edi, dword ptr [0xaaad10] */ r_edi = R32((u32)(0xaaad10u));
    /* 005d5b35: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5b39: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d5b3b: je 0x5d5d06 */ if (fZ) goto L_005d5d06;
L_005d5b41:; BB(0x005d5b41);
    /* 005d5b41: cmp eax, dword ptr [0xaaad4c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaad4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b47: jne 0x5d5b65 */ if (!fZ) goto L_005d5b65;
L_005d5b49:; BB(0x005d5b49);
    /* 005d5b49: mov edx, dword ptr [0xaaad50] */ r_edx = R32((u32)(0xaaad50u));
    /* 005d5b4f: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d5b53: mov edi, dword ptr [0xaaad54] */ r_edi = R32((u32)(0xaaad54u));
    /* 005d5b59: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5b5d: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d5b5f: je 0x5d5f30 */ if (fZ) goto L_005d5f30;
L_005d5b65:; BB(0x005d5b65);
    /* 005d5b65: cmp eax, dword ptr [0xaaad90] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaad90u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b6b: jne 0x5d5b89 */ if (!fZ) goto L_005d5b89;
L_005d5b6d:; BB(0x005d5b6d);
    /* 005d5b6d: mov edx, dword ptr [0xaaad94] */ r_edx = R32((u32)(0xaaad94u));
    /* 005d5b73: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d5b77: mov edi, dword ptr [0xaaad98] */ r_edi = R32((u32)(0xaaad98u));
    /* 005d5b7d: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5b81: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d5b83: je 0x5d5cd2 */ if (fZ) goto L_005d5cd2;
L_005d5b89:; BB(0x005d5b89);
    /* 005d5b89: cmp eax, dword ptr [0xaaadd4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaadd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b8f: jne 0x5d5bad */ if (!fZ) goto L_005d5bad;
L_005d5b91:; BB(0x005d5b91);
    /* 005d5b91: mov edx, dword ptr [0xaaadd8] */ r_edx = R32((u32)(0xaaadd8u));
    /* 005d5b97: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d5b9b: mov edi, dword ptr [0xaaaddc] */ r_edi = R32((u32)(0xaaaddcu));
    /* 005d5ba1: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5ba5: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d5ba7: je 0x5d5f20 */ if (fZ) goto L_005d5f20;
L_005d5bad:; BB(0x005d5bad);
    /* 005d5bad: cmp eax, dword ptr [0xaaae18] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaae18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5bb3: jne 0x5d5bd1 */ if (!fZ) goto L_005d5bd1;
L_005d5bb5:; BB(0x005d5bb5);
    /* 005d5bb5: mov edx, dword ptr [0xaaae1c] */ r_edx = R32((u32)(0xaaae1cu));
    /* 005d5bbb: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d5bbf: mov edi, dword ptr [0xaaae20] */ r_edi = R32((u32)(0xaaae20u));
    /* 005d5bc5: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5bc9: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d5bcb: je 0x5d5cdf */ if (fZ) goto L_005d5cdf;
L_005d5bd1:; BB(0x005d5bd1);
    /* 005d5bd1: cmp eax, dword ptr [0xaaae5c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaae5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5bd7: jne 0x5d5bf5 */ if (!fZ) goto L_005d5bf5;
L_005d5bd9:; BB(0x005d5bd9);
    /* 005d5bd9: mov edx, dword ptr [0xaaae60] */ r_edx = R32((u32)(0xaaae60u));
    /* 005d5bdf: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d5be3: mov edi, dword ptr [0xaaae64] */ r_edi = R32((u32)(0xaaae64u));
    /* 005d5be9: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5bed: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d5bef: je 0x5d5f10 */ if (fZ) goto L_005d5f10;
L_005d5bf5:; BB(0x005d5bf5);
    /* 005d5bf5: cmp eax, dword ptr [0xaaaea0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaaea0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5bfb: jne 0x5d5c19 */ if (!fZ) goto L_005d5c19;
L_005d5bfd:; BB(0x005d5bfd);
    /* 005d5bfd: mov edx, dword ptr [0xaaaea4] */ r_edx = R32((u32)(0xaaaea4u));
    /* 005d5c03: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d5c07: mov edi, dword ptr [0xaaaea8] */ r_edi = R32((u32)(0xaaaea8u));
    /* 005d5c0d: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5c11: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d5c13: je 0x5d5cec */ if (fZ) goto L_005d5cec;
L_005d5c19:; BB(0x005d5c19);
    /* 005d5c19: cmp eax, dword ptr [0xaaaee4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaaee4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5c1f: jne 0x5d5c3d */ if (!fZ) goto L_005d5c3d;
L_005d5c21:; BB(0x005d5c21);
    /* 005d5c21: mov edx, dword ptr [0xaaaee8] */ r_edx = R32((u32)(0xaaaee8u));
    /* 005d5c27: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d5c2b: mov edi, dword ptr [0xaaaeec] */ r_edi = R32((u32)(0xaaaeecu));
    /* 005d5c31: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5c35: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d5c37: je 0x5d5f00 */ if (fZ) goto L_005d5f00;
L_005d5c3d:; BB(0x005d5c3d);
    /* 005d5c3d: cmp eax, dword ptr [0xaaaf28] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaaf28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5c43: jne 0x5d5c61 */ if (!fZ) goto L_005d5c61;
L_005d5c45:; BB(0x005d5c45);
    /* 005d5c45: mov edx, dword ptr [0xaaaf2c] */ r_edx = R32((u32)(0xaaaf2cu));
    /* 005d5c4b: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d5c4f: mov edi, dword ptr [0xaaaf30] */ r_edi = R32((u32)(0xaaaf30u));
    /* 005d5c55: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5c59: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d5c5b: je 0x5d5ef0 */ if (fZ) goto L_005d5ef0;
L_005d5c61:; BB(0x005d5c61);
    /* 005d5c61: cmp eax, dword ptr [0xaaaf6c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaaf6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5c67: jne 0x5d5c85 */ if (!fZ) goto L_005d5c85;
L_005d5c69:; BB(0x005d5c69);
    /* 005d5c69: mov edx, dword ptr [0xaaaf70] */ r_edx = R32((u32)(0xaaaf70u));
    /* 005d5c6f: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d5c73: mov edi, dword ptr [0xaaaf74] */ r_edi = R32((u32)(0xaaaf74u));
    /* 005d5c79: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5c7d: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d5c7f: je 0x5d5ee0 */ if (fZ) goto L_005d5ee0;
L_005d5c85:; BB(0x005d5c85);
    /* 005d5c85: cmp eax, dword ptr [0xaaafb0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaafb0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5c8b: jne 0x5d5a06 */ if (!fZ) goto L_005d5a06;
L_005d5c91:; BB(0x005d5c91);
    /* 005d5c91: mov edi, dword ptr [0xaaafb4] */ r_edi = R32((u32)(0xaaafb4u));
    /* 005d5c97: sub edi, dword ptr [esp + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005d5c9b: mov eax, dword ptr [0xaaafb8] */ r_eax = R32((u32)(0xaaafb8u));
    /* 005d5ca0: sub eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d5ca4: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 005d5ca6: jne 0x5d5a06 */ if (!fZ) goto L_005d5a06;
L_005d5cac:; BB(0x005d5cac);
    /* 005d5cac: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5cb0: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5cb4: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005d5cb7:; BB(0x005d5cb7);
    /* 005d5cb7: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005d5cbb: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 005d5cbf: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d5cc3: add edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d5cc9: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d5ccd: jmp 0x5d5a1b */ goto L_005d5a1b;
L_005d5cd2:; BB(0x005d5cd2);
    /* 005d5cd2: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5cd6: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5cda: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5cdd: jmp 0x5d5cb7 */ goto L_005d5cb7;
L_005d5cdf:; BB(0x005d5cdf);
    /* 005d5cdf: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5ce3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5ce7: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5cea: jmp 0x5d5cb7 */ goto L_005d5cb7;
L_005d5cec:; BB(0x005d5cec);
    /* 005d5cec: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5cf0: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5cf4: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5cf7: jmp 0x5d5cb7 */ goto L_005d5cb7;
L_005d5cf9:; BB(0x005d5cf9);
    /* 005d5cf9: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5cfd: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5d01: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5d04: jmp 0x5d5cb7 */ goto L_005d5cb7;
L_005d5d06:; BB(0x005d5d06);
    /* 005d5d06: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5d0a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5d0e: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5d11: jmp 0x5d5cb7 */ goto L_005d5cb7;
L_005d5d13:; BB(0x005d5d13);
    /* 005d5d13: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005d5d17: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005d5d1b: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005d5d1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d5d21: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005d5d24: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d5d2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d5d2c: mov esi, edx */ r_esi = r_edx;
    /* 005d5d2e: mov ebp, ebx */ r_ebp = r_ebx;
    /* 005d5d30: mov ebx, ecx */ r_ebx = r_ecx;
L_005d5d32:; BB(0x005d5d32);
    /* 005d5d32: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5d35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d36: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d5d38: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d5d3du); f_0069792c();
    /* 005d5d3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5d3f: je 0x5d5d51 */ if (fZ) goto L_005d5d51;
L_005d5d41:; BB(0x005d5d41);
    /* 005d5d41: movzx edi, byte ptr [eax + 0xf2] */ r_edi = (u32)R8((u32)(r_eax+0xf2u));
    /* 005d5d48: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5d4b: je 0x5d5dd0 */ if (fZ) goto L_005d5dd0;
L_005d5d51:; BB(0x005d5d51);
    /* 005d5d51: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d5d54: mov eax, esi */ r_eax = r_esi;
    /* 005d5d56: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5d59: jl 0x5d5d32 */ if ((fS!=fO)) goto L_005d5d32;
L_005d5d5b:; BB(0x005d5d5b);
    /* 005d5d5b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5d5f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5d63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d5d65: mov ebx, ebp */ r_ebx = r_ebp;
    /* 005d5d67: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005d5d6a:; BB(0x005d5d6a);
    /* 005d5d6a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d6c: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d5d71u); f_0069792c();
    /* 005d5d71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5d73: je 0x5d5936 */ if (fZ) goto L_005d5936;
L_005d5d79:; BB(0x005d5d79);
    /* 005d5d79: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 005d5d80: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5d83: jne 0x5d5936 */ if (!fZ) goto L_005d5936;
L_005d5d89:; BB(0x005d5d89);
    /* 005d5d89: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d5d90: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5d93: jne 0x5d5936 */ if (!fZ) goto L_005d5936;
L_005d5d99:; BB(0x005d5d99);
    /* 005d5d99: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d5da0: cmp eax, 0x8a */ {  u32 a = r_eax; u32 b = 0x8au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5da5: jne 0x5d5936 */ if (!fZ) goto L_005d5936;
L_005d5dab:; BB(0x005d5dab);
    /* 005d5dab: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005d5daf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5db1: je 0x5d5936 */ if (fZ) goto L_005d5936;
L_005d5db7:; BB(0x005d5db7);
    /* 005d5db7: fld dword ptr [0x92c434] */ FPUSH(R_F32((u32)(0x92c434u)));
    /* 005d5dbd: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005d5dc1: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 005d5dc4: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 005d5dc8: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 005d5dcb: jmp 0x5d5936 */ goto L_005d5936;
L_005d5dd0:; BB(0x005d5dd0);
    /* 005d5dd0: movzx edi, byte ptr [eax + 0xf3] */ r_edi = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d5dd7: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5dda: jne 0x5d5d51 */ if (!fZ) goto L_005d5d51;
L_005d5de0:; BB(0x005d5de0);
    /* 005d5de0: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d5de7: cmp eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5dea: jne 0x5d5d51 */ if (!fZ) goto L_005d5d51;
L_005d5df0:; BB(0x005d5df0);
    /* 005d5df0: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5df4: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5df8: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005d5dfc: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d5e00: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d5e02: mov ebx, ebp */ r_ebx = r_ebp;
    /* 005d5e04: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5e07: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005d5e0b: add edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d5e11: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 005d5e15: jmp 0x5d5d6a */ goto L_005d5d6a;
L_005d5e1a:; BB(0x005d5e1a);
    /* 005d5e1a: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005d5e1e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5e20: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d5e26: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d5e2bu); f_0069792c();
    /* 005d5e2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e2d: je 0x5d5936 */ if (fZ) goto L_005d5936;
L_005d5e33:; BB(0x005d5e33);
    /* 005d5e33: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d5e3a: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e3d: jne 0x5d5e64 */ if (!fZ) goto L_005d5e64;
L_005d5e3f:; BB(0x005d5e3f);
    /* 005d5e3f: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005d5e43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e45: je 0x5d5936 */ if (fZ) goto L_005d5936;
L_005d5e4b:; BB(0x005d5e4b);
    /* 005d5e4b: fld dword ptr [0x92c42c] */ FPUSH(R_F32((u32)(0x92c42cu)));
    /* 005d5e51: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005d5e55: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 005d5e58: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 005d5e5c: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 005d5e5f: jmp 0x5d5936 */ goto L_005d5936;
L_005d5e64:; BB(0x005d5e64);
    /* 005d5e64: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e67: jne 0x5d5936 */ if (!fZ) goto L_005d5936;
L_005d5e6d:; BB(0x005d5e6d);
    /* 005d5e6d: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005d5e71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e73: je 0x5d5936 */ if (fZ) goto L_005d5936;
L_005d5e79:; BB(0x005d5e79);
    /* 005d5e79: fld dword ptr [0x92c430] */ FPUSH(R_F32((u32)(0x92c430u)));
    /* 005d5e7f: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005d5e83: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 005d5e86: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 005d5e8a: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 005d5e8d: jmp 0x5d5936 */ goto L_005d5936;
L_005d5e92:; BB(0x005d5e92);
    /* 005d5e92: movzx eax, byte ptr [ebx + 2] */ r_eax = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d5e96: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5e99: jne 0x5d5936 */ if (!fZ) goto L_005d5936;
L_005d5e9f:; BB(0x005d5e9f);
    /* 005d5e9f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005d5ea3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5ea5: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d5eab: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d5eb0u); f_0069792c();
    /* 005d5eb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5eb2: je 0x5d5936 */ if (fZ) goto L_005d5936;
L_005d5eb8:; BB(0x005d5eb8);
    /* 005d5eb8: movzx eax, byte ptr [eax + 0xf3] */ r_eax = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d5ebf: cmp eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5ec2: jne 0x5d5936 */ if (!fZ) goto L_005d5936;
L_005d5ec8:; BB(0x005d5ec8);
    /* 005d5ec8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 005d5ecc: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 005d5ed0: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 005d5ed4: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d5ed7: mov word ptr [eax + 0xc], dx */ W16((u32)(r_eax+0xcu), (u16)r_edx);
    /* 005d5edb: jmp 0x5d5936 */ goto L_005d5936;
L_005d5ee0:; BB(0x005d5ee0);
    /* 005d5ee0: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5ee4: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5ee8: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5eeb: jmp 0x5d5cb7 */ goto L_005d5cb7;
L_005d5ef0:; BB(0x005d5ef0);
    /* 005d5ef0: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5ef4: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5ef8: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5efb: jmp 0x5d5cb7 */ goto L_005d5cb7;
L_005d5f00:; BB(0x005d5f00);
    /* 005d5f00: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5f04: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5f08: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5f0b: jmp 0x5d5cb7 */ goto L_005d5cb7;
L_005d5f10:; BB(0x005d5f10);
    /* 005d5f10: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5f14: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5f18: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5f1b: jmp 0x5d5cb7 */ goto L_005d5cb7;
L_005d5f20:; BB(0x005d5f20);
    /* 005d5f20: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5f24: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5f28: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5f2b: jmp 0x5d5cb7 */ goto L_005d5cb7;
L_005d5f30:; BB(0x005d5f30);
    /* 005d5f30: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005d5f34: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d5f38: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d5f3b: jmp 0x5d5cb7 */ goto L_005d5cb7;
}

void f_005d5f40(void) /* sub_5D5F40 */
{
    FN_ENTER(0x005d5f40);
    /* 005d5f40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5f47: mov esi, ecx */ r_esi = r_ecx;
    /* 005d5f49: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005d5f4b: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 005d5f4f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5f51: je 0x5d63d0 */ if (fZ) goto L_005d63d0;
L_005d5f57:; BB(0x005d5f57);
    /* 005d5f57: movzx ebx, word ptr [ebp + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebp+0x1cu));
L_005d5f5b:; BB(0x005d5f5b);
    /* 005d5f5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f5d: call 0x5c9bf8 */ r_esp -= 4; W32(r_esp, 0x5d5f62u); f_005c9bf8();
    /* 005d5f62: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d5f65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5f67: je 0x5d5f6e */ if (fZ) goto L_005d5f6e;
L_005d5f69:; BB(0x005d5f69);
    /* 005d5f69: mov edi, 2 */ r_edi = 0x2u;
L_005d5f6e:; BB(0x005d5f6e);
    /* 005d5f6e: mov ecx, esi */ r_ecx = r_esi;
    /* 005d5f70: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x5d5f75u); f_005d281c();
    /* 005d5f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5f77: jne 0x5d5fbb */ if (!fZ) goto L_005d5fbb;
L_005d5f79:; BB(0x005d5f79);
    /* 005d5f79: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 005d5f7c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5f7f: je 0x5d5ff3 */ if (fZ) goto L_005d5ff3;
L_005d5f81:; BB(0x005d5f81);
    /* 005d5f81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f84: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d5f87: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f88: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x5d5f8du); f_005c9e40();
    /* 005d5f8d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d5f90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5f92: jne 0x5d5f9a */ if (!fZ) goto L_005d5f9a;
L_005d5f94:; BB(0x005d5f94);
    /* 005d5f94: or edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005d5f9a:; BB(0x005d5f9a);
    /* 005d5f9a: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 005d5f9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5fa1: je 0x5d5fab */ if (fZ) goto L_005d5fab;
L_005d5fa3:; BB(0x005d5fa3);
    /* 005d5fa3: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 005d5fa6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5fa9: je 0x5d5fcb */ if (fZ) goto L_005d5fcb;
L_005d5fab:; BB(0x005d5fab);
    /* 005d5fab: and edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005d5faf: mov eax, edi */ r_eax = r_edi;
    /* 005d5fb1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5fb4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d5fb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5fb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d5fb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d5fb8: ret 8 */ FN_RET(0x005d5f40); r_esp += 12; return;
L_005d5fbb:; BB(0x005d5fbb);
    /* 005d5fbb: and edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005d5fbf: mov eax, edi */ r_eax = r_edi;
    /* 005d5fc1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5fc4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d5fc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5fc6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d5fc7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d5fc8: ret 8 */ FN_RET(0x005d5f40); r_esp += 12; return;
L_005d5fcb:; BB(0x005d5fcb);
    /* 005d5fcb: mov edx, dword ptr [0xa8dafc] */ r_edx = R32((u32)(0xa8dafcu));
    /* 005d5fd1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5fd3: je 0x5d5fab */ if (fZ) goto L_005d5fab;
L_005d5fd5:; BB(0x005d5fd5);
    /* 005d5fd5: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 005d5fd8: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d5fdb: je 0x5d5fe4 */ if (fZ) goto L_005d5fe4;
L_005d5fdd:; BB(0x005d5fdd);
    /* 005d5fdd: mov edx, 1 */ r_edx = 0x1u;
    /* 005d5fe2: jmp 0x5d5fe6 */ goto L_005d5fe6;
L_005d5fe4:; BB(0x005d5fe4);
    /* 005d5fe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005d5fe6:; BB(0x005d5fe6);
    /* 005d5fe6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5fe9: jne 0x5d5fab */ if (!fZ) goto L_005d5fab;
L_005d5feb:; BB(0x005d5feb);
    /* 005d5feb: or edi, 0x10001 */ {  u32 a = r_edi; u32 b = 0x10001u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d5ff1: jmp 0x5d5fab */ goto L_005d5fab;
L_005d5ff3:; BB(0x005d5ff3);
    /* 005d5ff3: mov ecx, esi */ r_ecx = r_esi;
    /* 005d5ff5: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d5ffau); f_005d2890();
    /* 005d5ffa: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005d5ffd: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6002: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6003: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5d6008u); f_005ca3d0();
    /* 005d6008: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d600b: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005d600e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6010: je 0x5d6071 */ if (fZ) goto L_005d6071;
L_005d6012:; BB(0x005d6012);
    /* 005d6012: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 005d6015: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005d6018: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d601b: jne 0x5d6020 */ if (!fZ) goto L_005d6020;
L_005d601d:; BB(0x005d601d);
    /* 005d601d: or edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005d6020:; BB(0x005d6020);
    /* 005d6020: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d6023: je 0x5d6028 */ if (fZ) goto L_005d6028;
L_005d6025:; BB(0x005d6025);
    /* 005d6025: or edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005d6028:; BB(0x005d6028);
    /* 005d6028: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d602b: jne 0x5d6037 */ if (!fZ) goto L_005d6037;
L_005d602d:; BB(0x005d602d);
    /* 005d602d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d602f: je 0x5d6037 */ if (fZ) goto L_005d6037;
L_005d6031:; BB(0x005d6031);
    /* 005d6031: or edi, 0x10001 */ {  u32 a = r_edi; u32 b = 0x10001u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005d6037:; BB(0x005d6037);
    /* 005d6037: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d603a: jne 0x5d6048 */ if (!fZ) goto L_005d6048;
L_005d603c:; BB(0x005d603c);
    /* 005d603c: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5d6041u); f_00807d60();
    /* 005d6041: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6043: jne 0x5d6048 */ if (!fZ) goto L_005d6048;
L_005d6045:; BB(0x005d6045);
    /* 005d6045: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005d6048:; BB(0x005d6048);
    /* 005d6048: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005d604b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d604e: jne 0x5d605c */ if (!fZ) goto L_005d605c;
L_005d6050:; BB(0x005d6050);
    /* 005d6050: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x5d6055u); f_00807db8();
    /* 005d6055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6057: je 0x5d605c */ if (fZ) goto L_005d605c;
L_005d6059:; BB(0x005d6059);
    /* 005d6059: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005d605c:; BB(0x005d605c);
    /* 005d605c: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005d605f: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d6062: jne 0x5d6071 */ if (!fZ) goto L_005d6071;
L_005d6064:; BB(0x005d6064);
    /* 005d6064: mov edx, dword ptr [0xa49510] */ r_edx = R32((u32)(0xa49510u));
    /* 005d606a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d606c: je 0x5d6071 */ if (fZ) goto L_005d6071;
L_005d606e:; BB(0x005d606e);
    /* 005d606e: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005d6071:; BB(0x005d6071);
    /* 005d6071: movzx edx, byte ptr [esi + 1] */ r_edx = (u32)R8((u32)(r_esi+0x1u));
    /* 005d6075: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6078: je 0x5d6391 */ if (fZ) goto L_005d6391;
L_005d607e:; BB(0x005d607e);
    /* 005d607e: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6081: je 0x5d637a */ if (fZ) goto L_005d637a;
L_005d6087:; BB(0x005d6087);
    /* 005d6087: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d608a: je 0x5d62df */ if (fZ) goto L_005d62df;
L_005d6090:; BB(0x005d6090);
    /* 005d6090: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6093: je 0x5d628e */ if (fZ) goto L_005d628e;
L_005d6099:; BB(0x005d6099);
    /* 005d6099: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d609c: je 0x5d6103 */ if (fZ) goto L_005d6103;
L_005d609e:; BB(0x005d609e);
    /* 005d609e: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d60a1: jne 0x5d60c1 */ if (!fZ) goto L_005d60c1;
L_005d60a3:; BB(0x005d60a3);
    /* 005d60a3: movzx edx, byte ptr [esi + 2] */ r_edx = (u32)R8((u32)(r_esi+0x2u));
    /* 005d60a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d60a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d60a9: call 0x5db470 */ r_esp -= 4; W32(r_esp, 0x5d60aeu); f_005db470();
    /* 005d60ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d60b3: jne 0x5d5f9a */ if (!fZ) goto L_005d5f9a;
L_005d60b9:; BB(0x005d60b9);
    /* 005d60b9: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d60bc: jmp 0x5d5f9a */ goto L_005d5f9a;
L_005d60c1:; BB(0x005d60c1);
    /* 005d60c1: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d60c4: jne 0x5d5f9a */ if (!fZ) goto L_005d5f9a;
L_005d60ca:; BB(0x005d60ca);
    /* 005d60ca: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d60cc: add ebp, 0xdf8 */ {  u32 a = r_ebp; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d60d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d60d4: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d60d9u); f_0069792c();
    /* 005d60d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d60db: je 0x5d60fb */ if (fZ) goto L_005d60fb;
L_005d60dd:; BB(0x005d60dd);
    /* 005d60dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d60df: mov ecx, eax */ r_ecx = r_eax;
    /* 005d60e1: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x5d60e7u); call_ind(t); }
    /* 005d60e7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d60ea: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d60ed: jl 0x5d5f9a */ if ((fS!=fO)) goto L_005d5f9a;
L_005d60f3:; BB(0x005d60f3);
    /* 005d60f3: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d60f6: jmp 0x5d5f9a */ goto L_005d5f9a;
L_005d60fb:; BB(0x005d60fb);
    /* 005d60fb: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d60fe: jmp 0x5d5f9a */ goto L_005d5f9a;
L_005d6103:; BB(0x005d6103);
    /* 005d6103: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 005d6109: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005d610c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d610e: je 0x5d5f9a */ if (fZ) goto L_005d5f9a;
L_005d6114:; BB(0x005d6114);
    /* 005d6114: movzx edx, byte ptr [esi + 2] */ r_edx = (u32)R8((u32)(r_esi+0x2u));
    /* 005d6118: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d611a: je 0x5d623b */ if (fZ) goto L_005d623b;
L_005d6120:; BB(0x005d6120);
    /* 005d6120: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6123: je 0x5d6208 */ if (fZ) goto L_005d6208;
L_005d6129:; BB(0x005d6129);
    /* 005d6129: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d612c: je 0x5d61d5 */ if (fZ) goto L_005d61d5;
L_005d6132:; BB(0x005d6132);
    /* 005d6132: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6135: je 0x5d6273 */ if (fZ) goto L_005d6273;
L_005d613b:; BB(0x005d613b);
    /* 005d613b: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d613e: je 0x5d61b4 */ if (fZ) goto L_005d61b4;
L_005d6140:; BB(0x005d6140);
    /* 005d6140: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6143: jne 0x5d6178 */ if (!fZ) goto L_005d6178;
L_005d6145:; BB(0x005d6145);
    /* 005d6145: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6146: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x5d614bu); f_006ac458();
    /* 005d614b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d614c: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005d614f: movsx edx, word ptr [eax + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 005d6153: cmp dx, word ptr [ebx + 8] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 005d6157: jle 0x5d61ca */ if ((fZ||fS!=fO)) goto L_005d61ca;
L_005d6159:; BB(0x005d6159);
    /* 005d6159: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d615b: call 0x68c454 */ r_esp -= 4; W32(r_esp, 0x5d6160u); f_0068c454();
    /* 005d6160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6161: add ebp, 0x380 */ {  u32 a = r_ebp; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d6167: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d6169: call 0x6a6e74 */ r_esp -= 4; W32(r_esp, 0x5d616eu); f_006a6e74();
    /* 005d616e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6170: je 0x5d5f9a */ if (fZ) goto L_005d5f9a;
L_005d6176:; BB(0x005d6176);
    /* 005d6176: jmp 0x5d61ca */ goto L_005d61ca;
L_005d6178:; BB(0x005d6178);
    /* 005d6178: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d617b: jne 0x5d5f9a */ if (!fZ) goto L_005d5f9a;
L_005d6181:; BB(0x005d6181);
    /* 005d6181: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6182: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x5d6187u); f_006ac458();
    /* 005d6187: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6188: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005d618b: movsx edx, word ptr [eax + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 005d618f: cmp dx, word ptr [ebx + 0xc] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 005d6193: jle 0x5d61ca */ if ((fZ||fS!=fO)) goto L_005d61ca;
L_005d6195:; BB(0x005d6195);
    /* 005d6195: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d6197: call 0x68c454 */ r_esp -= 4; W32(r_esp, 0x5d619cu); f_0068c454();
    /* 005d619c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d619d: add ebp, 0x380 */ {  u32 a = r_ebp; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d61a3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d61a5: call 0x6a6e74 */ r_esp -= 4; W32(r_esp, 0x5d61aau); f_006a6e74();
    /* 005d61aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d61ac: je 0x5d5f9a */ if (fZ) goto L_005d5f9a;
L_005d61b2:; BB(0x005d61b2);
    /* 005d61b2: jmp 0x5d61ca */ goto L_005d61ca;
L_005d61b4:; BB(0x005d61b4);
    /* 005d61b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d61b5: call 0x5c5630 */ r_esp -= 4; W32(r_esp, 0x5d61bau); f_005c5630();
    /* 005d61ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d61bb: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d61be: cmp edx, 0xfa */ {  u32 a = r_edx; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d61c4: jl 0x5d5f9a */ if ((fS!=fO)) goto L_005d5f9a;
L_005d61ca:; BB(0x005d61ca);
    /* 005d61ca: or edi, 0x10001 */ {  u32 a = r_edi; u32 b = 0x10001u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d61d0: jmp 0x5d5f9a */ goto L_005d5f9a;
L_005d61d5:; BB(0x005d61d5);
    /* 005d61d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d61d6: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x5d61dbu); f_006ac458();
    /* 005d61db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d61dc: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005d61df: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 005d61e3: cmp dx, word ptr [ebx + 4] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 005d61e7: jle 0x5d61ca */ if ((fZ||fS!=fO)) goto L_005d61ca;
L_005d61e9:; BB(0x005d61e9);
    /* 005d61e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d61eb: call 0x68c454 */ r_esp -= 4; W32(r_esp, 0x5d61f0u); f_0068c454();
    /* 005d61f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d61f1: add ebp, 0x380 */ {  u32 a = r_ebp; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d61f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d61f9: call 0x6a6e74 */ r_esp -= 4; W32(r_esp, 0x5d61feu); f_006a6e74();
    /* 005d61fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6200: je 0x5d5f9a */ if (fZ) goto L_005d5f9a;
L_005d6206:; BB(0x005d6206);
    /* 005d6206: jmp 0x5d61ca */ goto L_005d61ca;
L_005d6208:; BB(0x005d6208);
    /* 005d6208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6209: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x5d620eu); f_006ac458();
    /* 005d620e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d620f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005d6212: movsx edx, word ptr [eax + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 005d6216: cmp dx, word ptr [ebx + 2] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x2u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 005d621a: jle 0x5d61ca */ if ((fZ||fS!=fO)) goto L_005d61ca;
L_005d621c:; BB(0x005d621c);
    /* 005d621c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d621e: call 0x68c454 */ r_esp -= 4; W32(r_esp, 0x5d6223u); f_0068c454();
    /* 005d6223: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6224: add ebp, 0x380 */ {  u32 a = r_ebp; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d622a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d622c: call 0x6a6e74 */ r_esp -= 4; W32(r_esp, 0x5d6231u); f_006a6e74();
    /* 005d6231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6233: je 0x5d5f9a */ if (fZ) goto L_005d5f9a;
L_005d6239:; BB(0x005d6239);
    /* 005d6239: jmp 0x5d61ca */ goto L_005d61ca;
L_005d623b:; BB(0x005d623b);
    /* 005d623b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d623c: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x5d6241u); f_006ac458();
    /* 005d6241: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6242: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005d6245: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 005d6248: cmp dx, word ptr [ebx] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 005d624b: jle 0x5d61ca */ if ((fZ||fS!=fO)) goto L_005d61ca;
L_005d6251:; BB(0x005d6251);
    /* 005d6251: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d6253: call 0x68c454 */ r_esp -= 4; W32(r_esp, 0x5d6258u); f_0068c454();
    /* 005d6258: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6259: add ebp, 0x380 */ {  u32 a = r_ebp; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d625f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d6261: call 0x6a6e74 */ r_esp -= 4; W32(r_esp, 0x5d6266u); f_006a6e74();
    /* 005d6266: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6268: je 0x5d5f9a */ if (fZ) goto L_005d5f9a;
L_005d626e:; BB(0x005d626e);
    /* 005d626e: jmp 0x5d61ca */ goto L_005d61ca;
L_005d6273:; BB(0x005d6273);
    /* 005d6273: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6274: call 0x5c55b0 */ r_esp -= 4; W32(r_esp, 0x5d6279u); f_005c55b0();
    /* 005d6279: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d627a: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d627d: cmp edx, 0xfa */ {  u32 a = r_edx; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6283: jge 0x5d61ca */ if ((fS==fO)) goto L_005d61ca;
L_005d6289:; BB(0x005d6289);
    /* 005d6289: jmp 0x5d5f9a */ goto L_005d5f9a;
L_005d628e:; BB(0x005d628e);
    /* 005d628e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6290: add ebp, 0xdf8 */ {  u32 a = r_ebp; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d6296: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d6298: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d629du); f_0069792c();
    /* 005d629d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d629f: je 0x5d62d7 */ if (fZ) goto L_005d62d7;
L_005d62a1:; BB(0x005d62a1);
    /* 005d62a1: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005d62a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d62a6: mov ecx, eax */ r_ecx = r_eax;
    /* 005d62a8: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5d62adu); f_005c425c();
    /* 005d62ad: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005d62b1: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d62b6u); f_005d2890();
    /* 005d62b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d62b8: je 0x5d5f9a */ if (fZ) goto L_005d5f9a;
L_005d62be:; BB(0x005d62be);
    /* 005d62be: movzx ebx, byte ptr [esp + 7] */ r_ebx = (u32)R8((u32)(r_esp+0x7u));
    /* 005d62c3: movzx edx, byte ptr [eax + 0x1a] */ r_edx = (u32)R8((u32)(r_eax+0x1au));
    /* 005d62c7: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d62c9: jg 0x5d5f9a */ if ((!fZ&&fS==fO)) goto L_005d5f9a;
L_005d62cf:; BB(0x005d62cf);
    /* 005d62cf: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d62d2: jmp 0x5d5f9a */ goto L_005d5f9a;
L_005d62d7:; BB(0x005d62d7);
    /* 005d62d7: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d62da: jmp 0x5d5f9a */ goto L_005d5f9a;
L_005d62df:; BB(0x005d62df);
    /* 005d62df: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d62e4: movzx ebx, byte ptr [esi + 2] */ r_ebx = (u32)R8((u32)(r_esi+0x2u));
    /* 005d62e8: movzx edx, byte ptr [esi + 4] */ r_edx = (u32)R8((u32)(r_esi+0x4u));
    /* 005d62ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d62ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d62ee: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x5d62f3u); f_006ded14();
    /* 005d62f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d62f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d62f8: je 0x5d5f9a */ if (fZ) goto L_005d5f9a;
L_005d62fe:; BB(0x005d62fe);
    /* 005d62fe: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 005d6304: movsx edx, word ptr [edx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 005d6308: cmp dx, word ptr [eax + 0x14] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 005d630c: jge 0x5d6314 */ if ((fS==fO)) goto L_005d6314;
L_005d630e:; BB(0x005d630e);
    /* 005d630e: or edi, 0x10001 */ {  u32 a = r_edi; u32 b = 0x10001u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005d6314:; BB(0x005d6314);
    /* 005d6314: movzx edx, byte ptr [esi + 4] */ r_edx = (u32)R8((u32)(r_esi+0x4u));
    /* 005d6318: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6319: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 005d631f: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x5d6324u); f_006ad17c();
    /* 005d6324: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005d6327: mov edx, eax */ r_edx = r_eax;
    /* 005d6329: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d632a: call 0x6ad1cc */ r_esp -= 4; W32(r_esp, 0x5d632fu); f_006ad1cc();
    /* 005d632f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6330: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6332: jne 0x5d6348 */ if (!fZ) goto L_005d6348;
L_005d6334:; BB(0x005d6334);
    /* 005d6334: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005d6337: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 005d633b: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 005d633e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6340: jg 0x5d6348 */ if ((!fZ&&fS==fO)) goto L_005d6348;
L_005d6342:; BB(0x005d6342);
    /* 005d6342: or edi, 0x10001 */ {  u32 a = r_edi; u32 b = 0x10001u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005d6348:; BB(0x005d6348);
    /* 005d6348: movsx ebp, byte ptr [ebp + 0x961] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_ebp+0x961u));
    /* 005d634f: movzx edx, byte ptr [esi + 4] */ r_edx = (u32)R8((u32)(r_esi+0x4u));
    /* 005d6353: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6354: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6355: call 0x5e5260 */ r_esp -= 4; W32(r_esp, 0x5d635au); f_005e5260();
    /* 005d635a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d635d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d6360: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6365: je 0x5d636f */ if (fZ) goto L_005d636f;
L_005d6367:; BB(0x005d6367);
    /* 005d6367: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6369: jle 0x5d5f9a */ if ((fZ||fS!=fO)) goto L_005d5f9a;
L_005d636f:; BB(0x005d636f);
    /* 005d636f: or edi, 0x10001 */ {  u32 a = r_edi; u32 b = 0x10001u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d6375: jmp 0x5d5f9a */ goto L_005d5f9a;
L_005d637a:; BB(0x005d637a);
    /* 005d637a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d637c: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x5d6381u); f_0068bfa0();
    /* 005d6381: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6383: jne 0x5d5f9a */ if (!fZ) goto L_005d5f9a;
L_005d6389:; BB(0x005d6389);
    /* 005d6389: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d638c: jmp 0x5d5f9a */ goto L_005d5f9a;
L_005d6391:; BB(0x005d6391);
    /* 005d6391: movzx edx, byte ptr [esi + 2] */ r_edx = (u32)R8((u32)(r_esi+0x2u));
    /* 005d6395: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6397: jne 0x5d63b0 */ if (!fZ) goto L_005d63b0;
L_005d6399:; BB(0x005d6399);
    /* 005d6399: mov edx, dword ptr [ebp + 0x25c] */ r_edx = R32((u32)(r_ebp+0x25cu));
    /* 005d639f: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d63a2: je 0x5d5f9a */ if (fZ) goto L_005d5f9a;
L_005d63a8:; BB(0x005d63a8);
    /* 005d63a8: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d63ab: jmp 0x5d5f9a */ goto L_005d5f9a;
L_005d63b0:; BB(0x005d63b0);
    /* 005d63b0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d63b3: jne 0x5d5f9a */ if (!fZ) goto L_005d5f9a;
L_005d63b9:; BB(0x005d63b9);
    /* 005d63b9: mov edx, dword ptr [ebp + 0x25c] */ r_edx = R32((u32)(r_ebp+0x25cu));
    /* 005d63bf: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d63c2: je 0x5d5f9a */ if (fZ) goto L_005d5f9a;
L_005d63c8:; BB(0x005d63c8);
    /* 005d63c8: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d63cb: jmp 0x5d5f9a */ goto L_005d5f9a;
L_005d63d0:; BB(0x005d63d0);
    /* 005d63d0: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d63d6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5d63dbu); f_0068d5a8();
    /* 005d63db: mov ebp, eax */ r_ebp = r_eax;
    /* 005d63dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d63e0: movzx ebx, word ptr [0xa9c4f4] */ r_ebx = (u32)R16((u32)(0xa9c4f4u));
    /* 005d63e7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d63e9: jne 0x5d5f5b */ if (!fZ) goto L_005d5f5b;
L_005d63ef:; BB(0x005d63ef);
    /* 005d63ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d63f1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d63f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d63f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d63f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d63f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d63f8: ret 8 */ FN_RET(0x005d5f40); r_esp += 12; return;
}

