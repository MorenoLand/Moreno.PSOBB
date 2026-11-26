#include "protos.h"

void f_008111b4(void) /* sub_8111B4 */
{
    FN_ENTER(0x008111b4);
    /* 008111b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008111b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008111b6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008111b9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008111bb: mov eax, dword ptr [0xab0280] */ r_eax = R32((u32)(0xab0280u));
    /* 008111c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008111c2: jl 0x811372 */ if ((fS!=fO)) goto L_00811372;
L_008111c8:; BB(0x008111c8);
    /* 008111c8: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008111cb: jg 0x81122c */ if ((!fZ&&fS==fO)) goto L_0081122c;
L_008111cd:; BB(0x008111cd);
    /* 008111cd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008111cf: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008111d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008111d3: jle 0x81121b */ if ((fZ||fS!=fO)) goto L_0081121b;
L_008111d5:; BB(0x008111d5);
    /* 008111d5: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008111d8: jl 0x81120d */ if ((fS!=fO)) goto L_0081120d;
L_008111da:; BB(0x008111da);
    /* 008111da: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 008111dd: lea ecx, [eax - 6] */ r_ecx = (u32)(r_eax+0xfffffffau);
L_008111e0:; BB(0x008111e0);
    /* 008111e0: add edi, dword ptr [ebp*4 + 0xaaff60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008111e7: add edi, dword ptr [ebp*4 + 0xaaff64] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008111ee: add edi, dword ptr [ebp*4 + 0xaaff68] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008111f5: add edi, dword ptr [ebp*4 + 0xaaff6c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008111fc: add edi, dword ptr [ebp*4 + 0xaaff70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00811203: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00811206: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811208: jle 0x8111e0 */ if ((fZ||fS!=fO)) goto L_008111e0;
L_0081120a:; BB(0x0081120a);
    /* 0081120a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0081120d:; BB(0x0081120d);
    /* 0081120d: add edi, dword ptr [ebp*4 + 0xaaff60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00811214: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00811217: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811219: jl 0x81120d */ if ((fS!=fO)) goto L_0081120d;
L_0081121b:; BB(0x0081121b);
    /* 0081121b: lea ecx, [edi + edi*8] */ r_ecx = (u32)(r_edi+r_edi*8);
    /* 0081121e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811220: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811222: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811224: add ecx, dword ptr [0xab0214] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081122a: jmp 0x81122e */ goto L_0081122e;
L_0081122c:; BB(0x0081122c);
    /* 0081122c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0081122e:; BB(0x0081122e);
    /* 0081122e: mov edi, dword ptr [eax*4 + 0xaaff60] */ r_edi = R32((u32)(r_eax*4+0xaaff60u));
    /* 00811235: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00811237: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00811239: jle 0x811346 */ if ((fZ||fS!=fO)) goto L_00811346;
L_0081123f:; BB(0x0081123f);
    /* 0081123f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00811243: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00811247: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00811249: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0081124c:; BB(0x0081124c);
    /* 0081124c: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00811250: test al, 0xa */ {  u32 a = (u8)r_eax; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00811252: jne 0x81132d */ if (!fZ) goto L_0081132d;
L_00811258:; BB(0x00811258);
    /* 00811258: movsx eax, word ptr [ebx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 0081125c: cmp ax, word ptr [esp + 0x18] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00811261: jne 0x81132d */ if (!fZ) goto L_0081132d;
L_00811267:; BB(0x00811267);
    /* 00811267: movsx eax, word ptr [ebx + 0xe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xeu));
    /* 0081126b: cmp ax, word ptr [esp + 0x1c] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00811270: jne 0x81132d */ if (!fZ) goto L_0081132d;
L_00811276:; BB(0x00811276);
    /* 00811276: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00811278: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x81127du); f_00807ac0();
    /* 0081127d: mov edx, dword ptr [eax*4 + 0x9fba60] */ r_edx = R32((u32)(r_eax*4+0x9fba60u));
    /* 00811284: mov eax, edx */ r_eax = r_edx;
    /* 00811286: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811288: je 0x8112a5 */ if (fZ) goto L_008112a5;
L_0081128a:; BB(0x0081128a);
    /* 0081128a: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0081128d: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811290: je 0x8112a5 */ if (fZ) goto L_008112a5;
L_00811292:; BB(0x00811292);
    /* 00811292: cmp cx, word ptr [ebx] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00811295: je 0x811357 */ if (fZ) goto L_00811357;
L_0081129b:; BB(0x0081129b);
    /* 0081129b: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081129e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008112a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008112a3: jne 0x81128a */ if (!fZ) goto L_0081128a;
L_008112a5:; BB(0x008112a5);
    /* 008112a5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008112a7:; BB(0x008112a7);
    /* 008112a7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008112a9: je 0x81134e */ if (fZ) goto L_0081134e;
L_008112af:; BB(0x008112af);
    /* 008112af: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 008112b3: mov dword ptr [ebx + 0x44], esi */ W32((u32)(r_ebx+0x44u), r_esi);
    /* 008112b6: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008112bc: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 008112c0: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 008112c4: mov word ptr [esi + 0x28], dx */ W16((u32)(r_esi+0x28u), (u16)r_edx);
    /* 008112c8: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 008112cc: mov word ptr [esi + 0x2a], dx */ W16((u32)(r_esi+0x2au), (u16)r_edx);
    /* 008112d0: movsx eax, word ptr [ebx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 008112d4: mov word ptr [esi + 0x2c], ax */ W16((u32)(r_esi+0x2cu), (u16)r_eax);
    /* 008112d8: mov dword ptr [esi + 0x80], ebx */ W32((u32)(r_esi+0x80u), r_ebx);
    /* 008112de: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008112e1: je 0x8112fd */ if (fZ) goto L_008112fd;
L_008112e3:; BB(0x008112e3);
    /* 008112e3: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008112e5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008112e7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008112e9: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008112ec: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008112ee: add ecx, dword ptr [0xab02b8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xab02b8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008112f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008112f5: mov ecx, esi */ r_ecx = r_esi;
    /* 008112f7: call dword ptr [edx + 0x144] */ { u32 t = R32((u32)(r_edx+0x144u)); r_esp -= 4; W32(r_esp, 0x8112fdu); call_ind(t); }
L_008112fd:; BB(0x008112fd);
    /* 008112fd: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00811301: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00811304: cmp eax, dword ptr [edx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811307: jge 0x811328 */ if ((fS==fO)) goto L_00811328;
L_00811309:; BB(0x00811309);
    /* 00811309: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0081130d: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00811310: mov dword ptr [ecx + eax*4], esi */ W32((u32)(r_ecx+r_eax*4), r_esi);
    /* 00811313: mov esi, dword ptr [esi + 0x80] */ r_esi = R32((u32)(r_esi+0x80u));
    /* 00811319: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0081131c: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 0081131f: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00811322: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 00811325: mov dword ptr [edx + eax*4], esi */ W32((u32)(r_edx+r_eax*4), r_esi);
L_00811328:; BB(0x00811328);
    /* 00811328: add dword ptr [esp + 8], 1 */ { u32 ad = (u32)(r_esp+0x8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0081132d:; BB(0x0081132d);
    /* 0081132d: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811330: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00811333: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811335: jl 0x81124c */ if ((fS!=fO)) goto L_0081124c;
L_0081133b:; BB(0x0081133b);
    /* 0081133b: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0081133f: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00811343: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00811346:; BB(0x00811346);
    /* 00811346: mov eax, edx */ r_eax = r_edx;
    /* 00811348: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081134b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081134c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081134d: ret  */ FN_RET(0x008111b4); r_esp += 4; return;
L_0081134e:; BB(0x0081134e);
    /* 0081134e: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
    /* 00811355: jmp 0x81132d */ goto L_0081132d;
L_00811357:; BB(0x00811357);
    /* 00811357: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0081135a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0081135c: jl 0x8112a5 */ if ((fS!=fO)) goto L_008112a5;
L_00811362:; BB(0x00811362);
    /* 00811362: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 00811365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00811366: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x811368u); call_ind(t); }
    /* 00811368: mov esi, eax */ r_esi = r_eax;
    /* 0081136a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081136d: jmp 0x8112a7 */ goto L_008112a7;
L_00811372:; BB(0x00811372);
    /* 00811372: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00811374: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00811377: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00811378: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00811379: ret  */ FN_RET(0x008111b4); r_esp += 4; return;
}

void f_0081137c(void) /* sub_81137C */
{
    FN_ENTER(0x0081137c);
    /* 0081137c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00811380: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 00811386: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811388: je 0x811399 */ if (fZ) goto L_00811399;
L_0081138a:; BB(0x0081138a);
    /* 0081138a: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 0081138f: or word ptr [eax + 2], dx */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a | b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00811393: mov eax, 1 */ r_eax = 0x1u;
    /* 00811398: ret  */ FN_RET(0x0081137c); r_esp += 4; return;
L_00811399:; BB(0x00811399);
    /* 00811399: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081139b: ret  */ FN_RET(0x0081137c); r_esp += 4; return;
}

void f_0081139c(void) /* sub_81139C */
{
    FN_ENTER(0x0081139c);
    /* 0081139c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008113a0: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 008113a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008113a8: je 0x8113b9 */ if (fZ) goto L_008113b9;
L_008113aa:; BB(0x008113aa);
    /* 008113aa: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 008113af: and word ptr [eax + 2], dx */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008113b3: mov eax, 1 */ r_eax = 0x1u;
    /* 008113b8: ret  */ FN_RET(0x0081139c); r_esp += 4; return;
L_008113b9:; BB(0x008113b9);
    /* 008113b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008113bb: ret  */ FN_RET(0x0081139c); r_esp += 4; return;
}

void f_008113bc(void) /* sub_8113BC */
{
    FN_ENTER(0x008113bc);
    /* 008113bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008113c0: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 008113c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008113c8: je 0x8113de */ if (fZ) goto L_008113de;
L_008113ca:; BB(0x008113ca);
    /* 008113ca: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 008113ce: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008113d4: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 008113d8: mov eax, 1 */ r_eax = 0x1u;
    /* 008113dd: ret  */ FN_RET(0x008113bc); r_esp += 4; return;
L_008113de:; BB(0x008113de);
    /* 008113de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008113e0: ret  */ FN_RET(0x008113bc); r_esp += 4; return;
}

void f_008113e4(void) /* sub_8113E4 */
{
    FN_ENTER(0x008113e4);
    /* 008113e4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008113e7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008113eb: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 008113f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008113f3: je 0x81142d */ if (fZ) goto L_0081142d;
L_008113f5:; BB(0x008113f5);
    /* 008113f5: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 008113f9: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 008113ff: mov byte ptr [esp], 0x76 */ W8((u32)(r_esp), 0x76u);
    /* 00811403: mov ecx, 8 */ r_ecx = 0x8u;
    /* 00811408: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0081140d: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00811412: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00811417: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 0081141c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0081141f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x811424u); f_008003e0();
    /* 00811424: mov eax, 1 */ r_eax = 0x1u;
    /* 00811429: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081142c: ret  */ FN_RET(0x008113e4); r_esp += 4; return;
L_0081142d:; BB(0x0081142d);
    /* 0081142d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081142f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00811432: ret  */ FN_RET(0x008113e4); r_esp += 4; return;
}

void f_00811434(void) /* sub_811434 */
{
    FN_ENTER(0x00811434);
    /* 00811434: mov edx, dword ptr [0xab0210] */ r_edx = R32((u32)(0xab0210u));
    /* 0081143a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0081143c:; BB(0x0081143c);
    /* 0081143c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0081143e: mov word ptr [edx + 2], cx */ W16((u32)(r_edx+0x2u), (u16)r_ecx);
    /* 00811442: mov word ptr [edx + 0x46], cx */ W16((u32)(r_edx+0x46u), (u16)r_ecx);
    /* 00811446: mov word ptr [edx + 0x8a], cx */ W16((u32)(r_edx+0x8au), (u16)r_ecx);
    /* 0081144d: mov word ptr [edx + 0xce], cx */ W16((u32)(r_edx+0xceu), (u16)r_ecx);
    /* 00811454: mov word ptr [edx + 0x112], cx */ W16((u32)(r_edx+0x112u), (u16)r_ecx);
    /* 0081145b: mov word ptr [edx + 0x156], cx */ W16((u32)(r_edx+0x156u), (u16)r_ecx);
    /* 00811462: add edx, 0x198 */ {  u32 a = r_edx; u32 b = 0x198u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811468: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081146b: cmp eax, 0xba0 */ {  u32 a = r_eax; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00811470: jl 0x81143c */ if ((fS!=fO)) goto L_0081143c;
L_00811472:; BB(0x00811472);
    /* 00811472: mov eax, 1 */ r_eax = 0x1u;
    /* 00811477: ret  */ FN_RET(0x00811434); r_esp += 4; return;
}

void f_00811478(void) /* sub_811478 */
{
    FN_ENTER(0x00811478);
    /* 00811478: mov edx, dword ptr [0xab0214] */ r_edx = R32((u32)(0xab0214u));
    /* 0081147e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00811480:; BB(0x00811480);
    /* 00811480: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00811482: mov word ptr [edx + 2], cx */ W16((u32)(r_edx+0x2u), (u16)r_ecx);
    /* 00811486: mov word ptr [edx + 0x4a], cx */ W16((u32)(r_edx+0x4au), (u16)r_ecx);
    /* 0081148a: mov word ptr [edx + 0x92], cx */ W16((u32)(r_edx+0x92u), (u16)r_ecx);
    /* 00811491: mov word ptr [edx + 0xda], cx */ W16((u32)(r_edx+0xdau), (u16)r_ecx);
    /* 00811498: add edx, 0x120 */ {  u32 a = r_edx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081149e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008114a1: cmp eax, 0x5a8 */ {  u32 a = r_eax; u32 b = 0x5a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008114a6: jl 0x811480 */ if ((fS!=fO)) goto L_00811480;
L_008114a8:; BB(0x008114a8);
    /* 008114a8: mov eax, 1 */ r_eax = 0x1u;
    /* 008114ad: ret  */ FN_RET(0x00811478); r_esp += 4; return;
}

void f_008114b0(void) /* sub_8114B0 */
{
    FN_ENTER(0x008114b0);
    /* 008114b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008114b1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008114b5: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008114b8: jg 0x811513 */ if ((!fZ&&fS==fO)) goto L_00811513;
L_008114ba:; BB(0x008114ba);
    /* 008114ba: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008114bc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008114be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008114c0: jle 0x811502 */ if ((fZ||fS!=fO)) goto L_00811502;
L_008114c2:; BB(0x008114c2);
    /* 008114c2: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008114c5: jl 0x8114f4 */ if ((fS!=fO)) goto L_008114f4;
L_008114c7:; BB(0x008114c7);
    /* 008114c7: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
L_008114ca:; BB(0x008114ca);
    /* 008114ca: add ebx, dword ptr [ecx*4 + 0xaaff60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008114d1: add ebx, dword ptr [ecx*4 + 0xaaff64] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008114d8: add ebx, dword ptr [ecx*4 + 0xaaff68] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008114df: add ebx, dword ptr [ecx*4 + 0xaaff6c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008114e6: add ebx, dword ptr [ecx*4 + 0xaaff70] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008114ed: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008114f0: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008114f2: jle 0x8114ca */ if ((fZ||fS!=fO)) goto L_008114ca;
L_008114f4:; BB(0x008114f4);
    /* 008114f4: add ebx, dword ptr [ecx*4 + 0xaaff60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008114fb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008114fe: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811500: jl 0x8114f4 */ if ((fS!=fO)) goto L_008114f4;
L_00811502:; BB(0x00811502);
    /* 00811502: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 00811505: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811507: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811509: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081150b: add ecx, dword ptr [0xab0214] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811511: jmp 0x811515 */ goto L_00811515;
L_00811513:; BB(0x00811513);
    /* 00811513: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00811515:; BB(0x00811515);
    /* 00811515: mov edx, dword ptr [eax*4 + 0xaaff60] */ r_edx = R32((u32)(r_eax*4+0xaaff60u));
    /* 0081151c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081151e: je 0x811549 */ if (fZ) goto L_00811549;
L_00811520:; BB(0x00811520);
    /* 00811520: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00811522: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00811524: jle 0x811549 */ if ((fZ||fS!=fO)) goto L_00811549;
L_00811526:; BB(0x00811526);
    /* 00811526: movsx ebx, word ptr [ecx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 0081152a: cmp bx, word ptr [esp + 0xc] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0081152f: jne 0x81153f */ if (!fZ) goto L_0081153f;
L_00811531:; BB(0x00811531);
    /* 00811531: movsx ebx, word ptr [ecx + 2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 00811535: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00811538: jne 0x81153f */ if (!fZ) goto L_0081153f;
L_0081153a:; BB(0x0081153a);
    /* 0081153a: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0081153d: jne 0x811550 */ if (!fZ) goto L_00811550;
L_0081153f:; BB(0x0081153f);
    /* 0081153f: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811542: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00811545: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00811547: jl 0x811526 */ if ((fS!=fO)) goto L_00811526;
L_00811549:; BB(0x00811549);
    /* 00811549: mov eax, 1 */ r_eax = 0x1u;
    /* 0081154e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081154f: ret  */ FN_RET(0x008114b0); r_esp += 4; return;
L_00811550:; BB(0x00811550);
    /* 00811550: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00811552: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00811553: ret  */ FN_RET(0x008114b0); r_esp += 4; return;
}

void f_00811554(void) /* sub_811554 */
{
    FN_ENTER(0x00811554);
    /* 00811554: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00811555: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00811559: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081155c: jg 0x8115b7 */ if ((!fZ&&fS==fO)) goto L_008115b7;
L_0081155e:; BB(0x0081155e);
    /* 0081155e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00811560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00811562: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00811564: jle 0x8115a6 */ if ((fZ||fS!=fO)) goto L_008115a6;
L_00811566:; BB(0x00811566);
    /* 00811566: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811569: jl 0x811598 */ if ((fS!=fO)) goto L_00811598;
L_0081156b:; BB(0x0081156b);
    /* 0081156b: lea eax, [edx - 6] */ r_eax = (u32)(r_edx+0xfffffffau);
L_0081156e:; BB(0x0081156e);
    /* 0081156e: add ebx, dword ptr [ecx*4 + 0xaaff60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811575: add ebx, dword ptr [ecx*4 + 0xaaff64] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081157c: add ebx, dword ptr [ecx*4 + 0xaaff68] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811583: add ebx, dword ptr [ecx*4 + 0xaaff6c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081158a: add ebx, dword ptr [ecx*4 + 0xaaff70] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811591: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811594: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811596: jle 0x81156e */ if ((fZ||fS!=fO)) goto L_0081156e;
L_00811598:; BB(0x00811598);
    /* 00811598: add ebx, dword ptr [ecx*4 + 0xaaff60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081159f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008115a2: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008115a4: jl 0x811598 */ if ((fS!=fO)) goto L_00811598;
L_008115a6:; BB(0x008115a6);
    /* 008115a6: lea eax, [ebx + ebx*8] */ r_eax = (u32)(r_ebx+r_ebx*8);
    /* 008115a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008115ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008115ad: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008115af: add eax, dword ptr [0xab0214] */ {  u32 a = r_eax; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008115b5: jmp 0x8115b9 */ goto L_008115b9;
L_008115b7:; BB(0x008115b7);
    /* 008115b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008115b9:; BB(0x008115b9);
    /* 008115b9: mov ecx, dword ptr [edx*4 + 0xaaff60] */ r_ecx = R32((u32)(r_edx*4+0xaaff60u));
    /* 008115c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008115c2: je 0x8115e2 */ if (fZ) goto L_008115e2;
L_008115c4:; BB(0x008115c4);
    /* 008115c4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008115c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008115c8: jle 0x8115e2 */ if ((fZ||fS!=fO)) goto L_008115e2;
L_008115ca:; BB(0x008115ca);
    /* 008115ca: movsx ebx, word ptr [eax + 2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 008115ce: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008115d1: jne 0x8115d8 */ if (!fZ) goto L_008115d8;
L_008115d3:; BB(0x008115d3);
    /* 008115d3: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008115d6: jne 0x8115e9 */ if (!fZ) goto L_008115e9;
L_008115d8:; BB(0x008115d8);
    /* 008115d8: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008115db: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008115de: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008115e0: jl 0x8115ca */ if ((fS!=fO)) goto L_008115ca;
L_008115e2:; BB(0x008115e2);
    /* 008115e2: mov eax, 1 */ r_eax = 0x1u;
    /* 008115e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008115e8: ret  */ FN_RET(0x00811554); r_esp += 4; return;
L_008115e9:; BB(0x008115e9);
    /* 008115e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008115eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008115ec: ret  */ FN_RET(0x00811554); r_esp += 4; return;
}

void f_008115f0(void) /* sub_8115F0 */
{
    FN_ENTER(0x008115f0);
    /* 008115f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008115f1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008115f5: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008115f8: jg 0x811653 */ if ((!fZ&&fS==fO)) goto L_00811653;
L_008115fa:; BB(0x008115fa);
    /* 008115fa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008115fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008115fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00811600: jle 0x811642 */ if ((fZ||fS!=fO)) goto L_00811642;
L_00811602:; BB(0x00811602);
    /* 00811602: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811605: jl 0x811634 */ if ((fS!=fO)) goto L_00811634;
L_00811607:; BB(0x00811607);
    /* 00811607: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
L_0081160a:; BB(0x0081160a);
    /* 0081160a: add ebx, dword ptr [ecx*4 + 0xaaff60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811611: add ebx, dword ptr [ecx*4 + 0xaaff64] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811618: add ebx, dword ptr [ecx*4 + 0xaaff68] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081161f: add ebx, dword ptr [ecx*4 + 0xaaff6c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811626: add ebx, dword ptr [ecx*4 + 0xaaff70] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081162d: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811630: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811632: jle 0x81160a */ if ((fZ||fS!=fO)) goto L_0081160a;
L_00811634:; BB(0x00811634);
    /* 00811634: add ebx, dword ptr [ecx*4 + 0xaaff60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081163b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081163e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811640: jl 0x811634 */ if ((fS!=fO)) goto L_00811634;
L_00811642:; BB(0x00811642);
    /* 00811642: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 00811645: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811647: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811649: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081164b: add ecx, dword ptr [0xab0214] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811651: jmp 0x811655 */ goto L_00811655;
L_00811653:; BB(0x00811653);
    /* 00811653: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00811655:; BB(0x00811655);
    /* 00811655: mov edx, dword ptr [eax*4 + 0xaaff60] */ r_edx = R32((u32)(r_eax*4+0xaaff60u));
    /* 0081165c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081165e: je 0x811684 */ if (fZ) goto L_00811684;
L_00811660:; BB(0x00811660);
    /* 00811660: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00811662: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00811664: jle 0x811684 */ if ((fZ||fS!=fO)) goto L_00811684;
L_00811666:; BB(0x00811666);
    /* 00811666: movsx ebx, word ptr [ecx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 0081166a: cmp bx, word ptr [esp + 0xc] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0081166f: jne 0x81167a */ if (!fZ) goto L_0081167a;
L_00811671:; BB(0x00811671);
    /* 00811671: movzx ebx, word ptr [ecx + 2] */ r_ebx = (u32)R16((u32)(r_ecx+0x2u));
    /* 00811675: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00811678: je 0x81168b */ if (fZ) goto L_0081168b;
L_0081167a:; BB(0x0081167a);
    /* 0081167a: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081167d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00811680: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00811682: jl 0x811666 */ if ((fS!=fO)) goto L_00811666;
L_00811684:; BB(0x00811684);
    /* 00811684: mov eax, 1 */ r_eax = 0x1u;
    /* 00811689: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081168a: ret  */ FN_RET(0x008115f0); r_esp += 4; return;
L_0081168b:; BB(0x0081168b);
    /* 0081168b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081168d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081168e: ret  */ FN_RET(0x008115f0); r_esp += 4; return;
}

void f_00811690(void) /* sub_811690 */
{
    FN_ENTER(0x00811690);
    /* 00811690: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00811691: mov edx, dword ptr [0xab0214] */ r_edx = R32((u32)(0xab0214u));
    /* 00811697: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00811699: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081169b: je 0x8116ee */ if (fZ) goto L_008116ee;
L_0081169d:; BB(0x0081169d);
    /* 0081169d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008116a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008116a2:; BB(0x008116a2);
    /* 008116a2: movsx ebx, word ptr [edx] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 008116a5: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008116a8: je 0x8116be */ if (fZ) goto L_008116be;
L_008116aa:; BB(0x008116aa);
    /* 008116aa: cmp ebx, 0x85 */ {  u32 a = r_ebx; u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008116b0: je 0x8116be */ if (fZ) goto L_008116be;
L_008116b2:; BB(0x008116b2);
    /* 008116b2: movzx ebx, word ptr [edx + 2] */ r_ebx = (u32)R16((u32)(r_edx+0x2u));
    /* 008116b6: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008116b9: je 0x8116be */ if (fZ) goto L_008116be;
L_008116bb:; BB(0x008116bb);
    /* 008116bb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008116be:; BB(0x008116be);
    /* 008116be: lea ebx, [edx + 0x48] */ r_ebx = (u32)(r_edx+0x48u);
    /* 008116c1: movsx edx, word ptr [edx + 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x48u));
    /* 008116c5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008116c8: je 0x8116de */ if (fZ) goto L_008116de;
L_008116ca:; BB(0x008116ca);
    /* 008116ca: cmp edx, 0x85 */ {  u32 a = r_edx; u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008116d0: je 0x8116de */ if (fZ) goto L_008116de;
L_008116d2:; BB(0x008116d2);
    /* 008116d2: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 008116d6: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008116d9: je 0x8116de */ if (fZ) goto L_008116de;
L_008116db:; BB(0x008116db);
    /* 008116db: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008116de:; BB(0x008116de);
    /* 008116de: lea edx, [ebx + 0x48] */ r_edx = (u32)(r_ebx+0x48u);
    /* 008116e1: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008116e4: cmp eax, 0x5a8 */ {  u32 a = r_eax; u32 b = 0x5a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008116e9: jl 0x8116a2 */ if ((fS!=fO)) goto L_008116a2;
L_008116eb:; BB(0x008116eb);
    /* 008116eb: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_008116ee:; BB(0x008116ee);
    /* 008116ee: mov eax, ecx */ r_eax = r_ecx;
    /* 008116f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008116f1: ret  */ FN_RET(0x00811690); r_esp += 4; return;
}

void f_008116f4(void) /* sub_8116F4 */
{
    FN_ENTER(0x008116f4);
    /* 008116f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008116f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008116f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008116f7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008116fb: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008116fe: jg 0x81175f */ if ((!fZ&&fS==fO)) goto L_0081175f;
L_00811700:; BB(0x00811700);
    /* 00811700: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00811702: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00811704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00811706: jle 0x811748 */ if ((fZ||fS!=fO)) goto L_00811748;
L_00811708:; BB(0x00811708);
    /* 00811708: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081170b: jl 0x81173a */ if ((fS!=fO)) goto L_0081173a;
L_0081170d:; BB(0x0081170d);
    /* 0081170d: lea ecx, [eax - 6] */ r_ecx = (u32)(r_eax+0xfffffffau);
L_00811710:; BB(0x00811710);
    /* 00811710: add edx, dword ptr [ebx*4 + 0xaaff00] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811717: add edx, dword ptr [ebx*4 + 0xaaff04] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081171e: add edx, dword ptr [ebx*4 + 0xaaff08] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811725: add edx, dword ptr [ebx*4 + 0xaaff0c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081172c: add edx, dword ptr [ebx*4 + 0xaaff10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811733: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811736: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811738: jle 0x811710 */ if ((fZ||fS!=fO)) goto L_00811710;
L_0081173a:; BB(0x0081173a);
    /* 0081173a: add edx, dword ptr [ebx*4 + 0xaaff00] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811741: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811744: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811746: jl 0x81173a */ if ((fS!=fO)) goto L_0081173a;
L_00811748:; BB(0x00811748);
    /* 00811748: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081174a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081174c: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0081174f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811751: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811753: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811755: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811757: add ecx, dword ptr [0xab0210] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xab0210u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081175d: jmp 0x811761 */ goto L_00811761;
L_0081175f:; BB(0x0081175f);
    /* 0081175f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00811761:; BB(0x00811761);
    /* 00811761: mov edx, dword ptr [eax*4 + 0xaaff00] */ r_edx = R32((u32)(r_eax*4+0xaaff00u));
    /* 00811768: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081176a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081176c: jle 0x8117a4 */ if ((fZ||fS!=fO)) goto L_008117a4;
L_0081176e:; BB(0x0081176e);
    /* 0081176e: movzx ebx, word ptr [esp + 0x20] */ r_ebx = (u32)R16((u32)(r_esp+0x20u));
    /* 00811773: movzx esi, word ptr [esp + 0x1c] */ r_esi = (u32)R16((u32)(r_esp+0x1cu));
L_00811778:; BB(0x00811778);
    /* 00811778: movsx edi, word ptr [ecx + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 0081177c: cmp di, word ptr [esp + 0x14] */ {  u32 a = (u16)r_edi; u32 b = R16((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00811781: jne 0x81179a */ if (!fZ) goto L_0081179a;
L_00811783:; BB(0x00811783);
    /* 00811783: movsx edi, word ptr [ecx + 0xa] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xau));
    /* 00811787: cmp di, word ptr [esp + 0x18] */ {  u32 a = (u16)r_edi; u32 b = R16((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0081178c: jne 0x81179a */ if (!fZ) goto L_0081179a;
L_0081178e:; BB(0x0081178e);
    /* 0081178e: movzx edi, word ptr [ecx + 2] */ r_edi = (u32)R16((u32)(r_ecx+0x2u));
    /* 00811792: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00811794: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00811796: mov word ptr [ecx + 2], di */ W16((u32)(r_ecx+0x2u), (u16)r_edi);
L_0081179a:; BB(0x0081179a);
    /* 0081179a: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081179d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008117a0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008117a2: jl 0x811778 */ if ((fS!=fO)) goto L_00811778;
L_008117a4:; BB(0x008117a4);
    /* 008117a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008117a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008117a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008117a7: ret  */ FN_RET(0x008116f4); r_esp += 4; return;
}

void f_008117a8(void) /* sub_8117A8 */
{
    FN_ENTER(0x008117a8);
    /* 008117a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008117a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008117aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008117ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008117ac: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008117b0: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 008117b4: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008117b9: jl 0x811859 */ if ((fS!=fO)) goto L_00811859;
L_008117bf:; BB(0x008117bf);
    /* 008117bf: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008117c4: jge 0x811859 */ if ((fS==fO)) goto L_00811859;
L_008117ca:; BB(0x008117ca);
    /* 008117ca: movsx ecx, word ptr [edx + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 008117ce: cmp ecx, 0x11 */ {  u32 a = r_ecx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008117d1: jg 0x81182c */ if ((!fZ&&fS==fO)) goto L_0081182c;
L_008117d3:; BB(0x008117d3);
    /* 008117d3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008117d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008117d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008117d9: jle 0x81181b */ if ((fZ||fS!=fO)) goto L_0081181b;
L_008117db:; BB(0x008117db);
    /* 008117db: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008117de: jl 0x81180d */ if ((fS!=fO)) goto L_0081180d;
L_008117e0:; BB(0x008117e0);
    /* 008117e0: lea ebx, [ecx - 6] */ r_ebx = (u32)(r_ecx+0xfffffffau);
L_008117e3:; BB(0x008117e3);
    /* 008117e3: add edi, dword ptr [esi*4 + 0xaaff60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008117ea: add edi, dword ptr [esi*4 + 0xaaff64] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008117f1: add edi, dword ptr [esi*4 + 0xaaff68] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008117f8: add edi, dword ptr [esi*4 + 0xaaff6c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008117ff: add edi, dword ptr [esi*4 + 0xaaff70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00811806: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00811809: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081180b: jle 0x8117e3 */ if ((fZ||fS!=fO)) goto L_008117e3;
L_0081180d:; BB(0x0081180d);
    /* 0081180d: add edi, dword ptr [esi*4 + 0xaaff60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00811814: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00811817: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811819: jl 0x81180d */ if ((fS!=fO)) goto L_0081180d;
L_0081181b:; BB(0x0081181b);
    /* 0081181b: lea esi, [edi + edi*8] */ r_esi = (u32)(r_edi+r_edi*8);
    /* 0081181e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00811820: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00811822: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00811824: add esi, dword ptr [0xab0214] */ {  u32 a = r_esi; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081182a: jmp 0x81182e */ goto L_0081182e;
L_0081182c:; BB(0x0081182c);
    /* 0081182c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0081182e:; BB(0x0081182e);
    /* 0081182e: mov ebx, dword ptr [ecx*4 + 0xaaff60] */ r_ebx = R32((u32)(r_ecx*4+0xaaff60u));
    /* 00811835: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00811837: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00811839: jle 0x811859 */ if ((fZ||fS!=fO)) goto L_00811859;
L_0081183b:; BB(0x0081183b);
    /* 0081183b: movzx edi, word ptr [esi + 0xa] */ r_edi = (u32)R16((u32)(r_esi+0xau));
    /* 0081183f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811841: jne 0x81184f */ if (!fZ) goto L_0081184f;
L_00811843:; BB(0x00811843);
    /* 00811843: movzx eax, word ptr [edx + 6] */ r_eax = (u32)R16((u32)(r_edx+0x6u));
    /* 00811847: or word ptr [esi + 2], ax */ { u32 ad = (u32)(r_esi+0x2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 0081184b: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
L_0081184f:; BB(0x0081184f);
    /* 0081184f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00811852: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811855: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811857: jl 0x81183b */ if ((fS!=fO)) goto L_0081183b;
L_00811859:; BB(0x00811859);
    /* 00811859: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0081185e: jl 0x811867 */ if ((fS!=fO)) goto L_00811867;
L_00811860:; BB(0x00811860);
    /* 00811860: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00811865: jl 0x81186c */ if ((fS!=fO)) goto L_0081186c;
L_00811867:; BB(0x00811867);
    /* 00811867: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00811868: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00811869: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081186a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081186b: ret  */ FN_RET(0x008117a8); r_esp += 4; return;
L_0081186c:; BB(0x0081186c);
    /* 0081186c: movsx ebx, word ptr [edx + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 00811870: cmp ebx, 0x11 */ {  u32 a = r_ebx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811873: jg 0x8118d7 */ if ((!fZ&&fS==fO)) goto L_008118d7;
L_00811875:; BB(0x00811875);
    /* 00811875: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00811877: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00811879: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081187b: jle 0x8118bd */ if ((fZ||fS!=fO)) goto L_008118bd;
L_0081187d:; BB(0x0081187d);
    /* 0081187d: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811880: jl 0x8118af */ if ((fS!=fO)) goto L_008118af;
L_00811882:; BB(0x00811882);
    /* 00811882: lea esi, [ebx - 6] */ r_esi = (u32)(r_ebx+0xfffffffau);
L_00811885:; BB(0x00811885);
    /* 00811885: add ecx, dword ptr [edi*4 + 0xaaff00] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081188c: add ecx, dword ptr [edi*4 + 0xaaff04] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi*4+0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811893: add ecx, dword ptr [edi*4 + 0xaaff08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi*4+0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081189a: add ecx, dword ptr [edi*4 + 0xaaff0c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi*4+0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008118a1: add ecx, dword ptr [edi*4 + 0xaaff10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi*4+0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008118a8: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008118ab: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008118ad: jle 0x811885 */ if ((fZ||fS!=fO)) goto L_00811885;
L_008118af:; BB(0x008118af);
    /* 008118af: add ecx, dword ptr [edi*4 + 0xaaff00] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008118b6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008118b9: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008118bb: jl 0x8118af */ if ((fS!=fO)) goto L_008118af;
L_008118bd:; BB(0x008118bd);
    /* 008118bd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008118bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008118c1: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 008118c4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008118c6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008118c8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008118ca: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008118cc: add esi, dword ptr [0xab0210] */ {  u32 a = r_esi; u32 b = R32((u32)(0xab0210u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008118d2: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 008118d5: jmp 0x8118dc */ goto L_008118dc;
L_008118d7:; BB(0x008118d7);
    /* 008118d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008118d9: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_008118dc:; BB(0x008118dc);
    /* 008118dc: mov ebx, dword ptr [ebx*4 + 0xaaff00] */ r_ebx = R32((u32)(r_ebx*4+0xaaff00u));
    /* 008118e3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008118e5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008118e7: jle 0x811867 */ if ((fZ||fS!=fO)) goto L_00811867;
L_008118ed:; BB(0x008118ed);
    /* 008118ed: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 008118f0: jmp 0x8118f6 */ goto L_008118f6;
L_008118f2:; BB(0x008118f2);
    /* 008118f2: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
L_008118f6:; BB(0x008118f6);
    /* 008118f6: movzx edi, word ptr [esi + 8] */ r_edi = (u32)R16((u32)(r_esi+0x8u));
    /* 008118fa: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008118fc: jne 0x811906 */ if (!fZ) goto L_00811906;
L_008118fe:; BB(0x008118fe);
    /* 008118fe: movzx eax, word ptr [edx + 6] */ r_eax = (u32)R16((u32)(r_edx+0x6u));
    /* 00811902: or word ptr [esi + 2], ax */ { u32 ad = (u32)(r_esi+0x2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
L_00811906:; BB(0x00811906);
    /* 00811906: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811909: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081190c: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0081190e: jl 0x8118f2 */ if ((fS!=fO)) goto L_008118f2;
L_00811910:; BB(0x00811910);
    /* 00811910: jmp 0x811867 */ goto L_00811867;
}

void f_00811918(void) /* sub_811918 */
{
    FN_ENTER(0x00811918);
    /* 00811918: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00811919: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 0081191e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00811920: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811922: je 0x811987 */ if (fZ) goto L_00811987;
L_00811924:; BB(0x00811924);
    /* 00811924: push 0x2e80 */ { u32 v = 0x2e80u; r_esp -= 4; W32(r_esp, v); }
    /* 00811929: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081192b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081192c: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x811931u); f_0086b688();
    /* 00811931: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00811934: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00811936:; BB(0x00811936);
    /* 00811936: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0081193c: lea edx, [ebx + 0x100] */ r_edx = (u32)(r_ebx+0x100u);
    /* 00811942: mov word ptr [ecx + eax*4 + 2], dx */ W16((u32)(r_ecx+r_eax*4+0x2u), (u16)r_edx);
    /* 00811947: lea edx, [ebx + 0x101] */ r_edx = (u32)(r_ebx+0x101u);
    /* 0081194d: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00811953: mov word ptr [ecx + eax*4 + 6], dx */ W16((u32)(r_ecx+r_eax*4+0x6u), (u16)r_edx);
    /* 00811958: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0081195e: lea edx, [ebx + 0x102] */ r_edx = (u32)(r_ebx+0x102u);
    /* 00811964: mov word ptr [ecx + eax*4 + 0xa], dx */ W16((u32)(r_ecx+r_eax*4+0xau), (u16)r_edx);
    /* 00811969: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0081196f: lea edx, [ebx + 0x103] */ r_edx = (u32)(r_ebx+0x103u);
    /* 00811975: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811978: mov word ptr [ecx + eax*4 + 0xe], dx */ W16((u32)(r_ecx+r_eax*4+0xeu), (u16)r_edx);
    /* 0081197d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00811980: cmp eax, 0xba0 */ {  u32 a = r_eax; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811985: jl 0x811936 */ if ((fS!=fO)) goto L_00811936;
L_00811987:; BB(0x00811987);
    /* 00811987: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 0081198c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081198e: je 0x8119de */ if (fZ) goto L_008119de;
L_00811990:; BB(0x00811990);
    /* 00811990: push 0x87c0 */ { u32 v = 0x87c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00811995: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00811997: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00811998: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x81199du); f_0086b5cc();
    /* 0081199d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008119a0: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 008119a5: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 008119a8: add eax, 0x87c4 */ {  u32 a = r_eax; u32 b = 0x87c4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008119ad:; BB(0x008119ad);
    /* 008119ad: lea ecx, [ebx + 0x100] */ r_ecx = (u32)(r_ebx+0x100u);
    /* 008119b3: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 008119b6: lea ecx, [ebx + 0x101] */ r_ecx = (u32)(r_ebx+0x101u);
    /* 008119bc: mov word ptr [edx + 0xc], cx */ W16((u32)(r_edx+0xcu), (u16)r_ecx);
    /* 008119c0: lea ecx, [ebx + 0x102] */ r_ecx = (u32)(r_ebx+0x102u);
    /* 008119c6: mov word ptr [edx + 0x18], cx */ W16((u32)(r_edx+0x18u), (u16)r_ecx);
    /* 008119ca: lea ecx, [ebx + 0x103] */ r_ecx = (u32)(r_ebx+0x103u);
    /* 008119d0: mov word ptr [edx + 0x24], cx */ W16((u32)(r_edx+0x24u), (u16)r_ecx);
    /* 008119d4: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008119d7: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008119da: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008119dc: ja 0x8119ad */ if ((!fC&&!fZ)) goto L_008119ad;
L_008119de:; BB(0x008119de);
    /* 008119de: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 008119e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008119e6: je 0x811a8a */ if (fZ) goto L_00811a8a;
L_008119ec:; BB(0x008119ec);
    /* 008119ec: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008119f1: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 008119f4: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 008119fa: mov word ptr [edx + 2], ax */ W16((u32)(r_edx+0x2u), (u16)r_eax);
    /* 008119fe: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 00811a04: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 00811a08: mov ebx, dword ptr [0xab0248] */ r_ebx = R32((u32)(0xab0248u));
    /* 00811a0e: mov word ptr [ebx + 6], ax */ W16((u32)(r_ebx+0x6u), (u16)r_eax);
    /* 00811a12: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a18: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00811a1c: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a22: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 00811a26: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a2c: mov word ptr [edx + 0xc], ax */ W16((u32)(r_edx+0xcu), (u16)r_eax);
    /* 00811a30: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a36: mov word ptr [edx + 0xe], ax */ W16((u32)(r_edx+0xeu), (u16)r_eax);
    /* 00811a3a: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a40: mov word ptr [edx + 0x10], ax */ W16((u32)(r_edx+0x10u), (u16)r_eax);
    /* 00811a44: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a4a: mov word ptr [edx + 0x12], ax */ W16((u32)(r_edx+0x12u), (u16)r_eax);
    /* 00811a4e: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a54: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00811a58: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a5e: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00811a62: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a68: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00811a6c: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a72: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00811a76: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a7c: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 00811a80: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811a86: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_00811a8a:; BB(0x00811a8a);
    /* 00811a8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00811a8b: ret  */ FN_RET(0x00811918); r_esp += 4; return;
}

void f_00811a8c(void) /* sub_811A8C */
{
    FN_ENTER(0x00811a8c);
    /* 00811a8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00811a8d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00811a90: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 00811a95: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811a98: jg 0x811af3 */ if ((!fZ&&fS==fO)) goto L_00811af3;
L_00811a9a:; BB(0x00811a9a);
    /* 00811a9a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00811a9c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00811a9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00811aa0: jle 0x811ae2 */ if ((fZ||fS!=fO)) goto L_00811ae2;
L_00811aa2:; BB(0x00811aa2);
    /* 00811aa2: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811aa5: jl 0x811ad4 */ if ((fS!=fO)) goto L_00811ad4;
L_00811aa7:; BB(0x00811aa7);
    /* 00811aa7: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
L_00811aaa:; BB(0x00811aaa);
    /* 00811aaa: add ebx, dword ptr [ecx*4 + 0xaaff60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811ab1: add ebx, dword ptr [ecx*4 + 0xaaff64] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811ab8: add ebx, dword ptr [ecx*4 + 0xaaff68] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811abf: add ebx, dword ptr [ecx*4 + 0xaaff6c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811ac6: add ebx, dword ptr [ecx*4 + 0xaaff70] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811acd: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811ad0: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811ad2: jle 0x811aaa */ if ((fZ||fS!=fO)) goto L_00811aaa;
L_00811ad4:; BB(0x00811ad4);
    /* 00811ad4: add ebx, dword ptr [ecx*4 + 0xaaff60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811adb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811ade: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811ae0: jl 0x811ad4 */ if ((fS!=fO)) goto L_00811ad4;
L_00811ae2:; BB(0x00811ae2);
    /* 00811ae2: lea edx, [ebx + ebx*8] */ r_edx = (u32)(r_ebx+r_ebx*8);
    /* 00811ae5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811ae7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811ae9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811aeb: add edx, dword ptr [0xab0214] */ {  u32 a = r_edx; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811af1: jmp 0x811af5 */ goto L_00811af5;
L_00811af3:; BB(0x00811af3);
    /* 00811af3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00811af5:; BB(0x00811af5);
    /* 00811af5: mov eax, dword ptr [eax*4 + 0xaaff60] */ r_eax = R32((u32)(r_eax*4+0xaaff60u));
    /* 00811afc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00811afe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00811b00: jle 0x811b39 */ if ((fZ||fS!=fO)) goto L_00811b39;
L_00811b02:; BB(0x00811b02);
    /* 00811b02: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00811b06: mov esi, eax */ r_esi = r_eax;
    /* 00811b08: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00811b0b: mov edi, edx */ r_edi = r_edx;
L_00811b0d:; BB(0x00811b0d);
    /* 00811b0d: movzx ecx, word ptr [edi + 0xa] */ r_ecx = (u32)R16((u32)(r_edi+0xau));
    /* 00811b11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00811b12: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x811b17u); f_007b4d18();
    /* 00811b17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00811b18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811b1a: je 0x811b28 */ if (fZ) goto L_00811b28;
L_00811b1c:; BB(0x00811b1c);
    /* 00811b1c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00811b1f: or ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00811b25: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
L_00811b28:; BB(0x00811b28);
    /* 00811b28: add edi, 0x48 */ {  u32 a = r_edi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00811b2b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811b2e: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811b30: jl 0x811b0d */ if ((fS!=fO)) goto L_00811b0d;
L_00811b32:; BB(0x00811b32);
    /* 00811b32: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00811b36: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00811b39:; BB(0x00811b39);
    /* 00811b39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00811b3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00811b3d: ret  */ FN_RET(0x00811a8c); r_esp += 4; return;
}

void f_00811b40(void) /* sub_811B40 */
{
    FN_ENTER(0x00811b40);
    /* 00811b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00811b41: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00811b44: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 00811b49: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811b4c: jg 0x811bad */ if ((!fZ&&fS==fO)) goto L_00811bad;
L_00811b4e:; BB(0x00811b4e);
    /* 00811b4e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00811b50: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00811b52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00811b54: jle 0x811b96 */ if ((fZ||fS!=fO)) goto L_00811b96;
L_00811b56:; BB(0x00811b56);
    /* 00811b56: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811b59: jl 0x811b88 */ if ((fS!=fO)) goto L_00811b88;
L_00811b5b:; BB(0x00811b5b);
    /* 00811b5b: lea ecx, [eax - 6] */ r_ecx = (u32)(r_eax+0xfffffffau);
L_00811b5e:; BB(0x00811b5e);
    /* 00811b5e: add edx, dword ptr [ebp*4 + 0xaaff00] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811b65: add edx, dword ptr [ebp*4 + 0xaaff04] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp*4+0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811b6c: add edx, dword ptr [ebp*4 + 0xaaff08] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp*4+0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811b73: add edx, dword ptr [ebp*4 + 0xaaff0c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp*4+0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811b7a: add edx, dword ptr [ebp*4 + 0xaaff10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp*4+0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811b81: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00811b84: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811b86: jle 0x811b5e */ if ((fZ||fS!=fO)) goto L_00811b5e;
L_00811b88:; BB(0x00811b88);
    /* 00811b88: add edx, dword ptr [ebp*4 + 0xaaff00] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811b8f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00811b92: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811b94: jl 0x811b88 */ if ((fS!=fO)) goto L_00811b88;
L_00811b96:; BB(0x00811b96);
    /* 00811b96: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811b98: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811b9a: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00811b9d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811b9f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811ba1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811ba3: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811ba5: add ecx, dword ptr [0xab0210] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xab0210u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811bab: jmp 0x811baf */ goto L_00811baf;
L_00811bad:; BB(0x00811bad);
    /* 00811bad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00811baf:; BB(0x00811baf);
    /* 00811baf: mov eax, dword ptr [eax*4 + 0xaaff00] */ r_eax = R32((u32)(r_eax*4+0xaaff00u));
    /* 00811bb6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00811bb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00811bba: jle 0x811d7f */ if ((fZ||fS!=fO)) goto L_00811d7f;
L_00811bc0:; BB(0x00811bc0);
    /* 00811bc0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00811bc4: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00811bc8: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
L_00811bcc:; BB(0x00811bcc);
    /* 00811bcc: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00811bcf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811bd1: je 0x811d65 */ if (fZ) goto L_00811d65;
L_00811bd7:; BB(0x00811bd7);
    /* 00811bd7: mov edi, dword ptr [0xaca378] */ r_edi = R32((u32)(0xaca378u));
    /* 00811bdd: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00811be0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811be2: je 0x811c1a */ if (fZ) goto L_00811c1a;
L_00811be4:; BB(0x00811be4);
    /* 00811be4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00811be8: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_00811bec:; BB(0x00811bec);
    /* 00811bec: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811bee: je 0x811e3d */ if (fZ) goto L_00811e3d;
L_00811bf4:; BB(0x00811bf4);
    /* 00811bf4: mov eax, esi */ r_eax = r_esi;
    /* 00811bf6: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 00811bf9: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811bfb: je 0x811e2a */ if (fZ) goto L_00811e2a;
L_00811c01:; BB(0x00811c01);
    /* 00811c01: mov edx, ebx */ r_edx = r_ebx;
    /* 00811c03: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x811c08u); f_00812328();
L_00811c08:; BB(0x00811c08);
    /* 00811c08: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00811c0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811c0d: jne 0x811bec */ if (!fZ) goto L_00811bec;
L_00811c0f:; BB(0x00811c0f);
    /* 00811c0f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811c13: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00811c17: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
L_00811c1a:; BB(0x00811c1a);
    /* 00811c1a: mov edi, dword ptr [0xaca354] */ r_edi = R32((u32)(0xaca354u));
    /* 00811c20: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00811c23: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811c25: je 0x811c5d */ if (fZ) goto L_00811c5d;
L_00811c27:; BB(0x00811c27);
    /* 00811c27: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00811c2b: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_00811c2f:; BB(0x00811c2f);
    /* 00811c2f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811c31: je 0x811e1a */ if (fZ) goto L_00811e1a;
L_00811c37:; BB(0x00811c37);
    /* 00811c37: mov eax, esi */ r_eax = r_esi;
    /* 00811c39: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 00811c3c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811c3e: je 0x811e07 */ if (fZ) goto L_00811e07;
L_00811c44:; BB(0x00811c44);
    /* 00811c44: mov edx, ebx */ r_edx = r_ebx;
    /* 00811c46: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x811c4bu); f_00812328();
L_00811c4b:; BB(0x00811c4b);
    /* 00811c4b: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00811c4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811c50: jne 0x811c2f */ if (!fZ) goto L_00811c2f;
L_00811c52:; BB(0x00811c52);
    /* 00811c52: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811c56: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00811c5a: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
L_00811c5d:; BB(0x00811c5d);
    /* 00811c5d: mov edi, dword ptr [0xaca350] */ r_edi = R32((u32)(0xaca350u));
    /* 00811c63: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00811c66: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811c68: je 0x811ca0 */ if (fZ) goto L_00811ca0;
L_00811c6a:; BB(0x00811c6a);
    /* 00811c6a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00811c6e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_00811c72:; BB(0x00811c72);
    /* 00811c72: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811c74: je 0x811df7 */ if (fZ) goto L_00811df7;
L_00811c7a:; BB(0x00811c7a);
    /* 00811c7a: mov eax, esi */ r_eax = r_esi;
    /* 00811c7c: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 00811c7f: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811c81: je 0x811de4 */ if (fZ) goto L_00811de4;
L_00811c87:; BB(0x00811c87);
    /* 00811c87: mov edx, ebx */ r_edx = r_ebx;
    /* 00811c89: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x811c8eu); f_00812328();
L_00811c8e:; BB(0x00811c8e);
    /* 00811c8e: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00811c91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811c93: jne 0x811c72 */ if (!fZ) goto L_00811c72;
L_00811c95:; BB(0x00811c95);
    /* 00811c95: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811c99: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00811c9d: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
L_00811ca0:; BB(0x00811ca0);
    /* 00811ca0: mov edi, dword ptr [0xaca34c] */ r_edi = R32((u32)(0xaca34cu));
    /* 00811ca6: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00811ca9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811cab: je 0x811ce3 */ if (fZ) goto L_00811ce3;
L_00811cad:; BB(0x00811cad);
    /* 00811cad: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00811cb1: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_00811cb5:; BB(0x00811cb5);
    /* 00811cb5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811cb7: je 0x811dd4 */ if (fZ) goto L_00811dd4;
L_00811cbd:; BB(0x00811cbd);
    /* 00811cbd: mov eax, esi */ r_eax = r_esi;
    /* 00811cbf: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 00811cc2: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811cc4: je 0x811dc1 */ if (fZ) goto L_00811dc1;
L_00811cca:; BB(0x00811cca);
    /* 00811cca: mov edx, ebx */ r_edx = r_ebx;
    /* 00811ccc: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x811cd1u); f_00812328();
L_00811cd1:; BB(0x00811cd1);
    /* 00811cd1: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00811cd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811cd6: jne 0x811cb5 */ if (!fZ) goto L_00811cb5;
L_00811cd8:; BB(0x00811cd8);
    /* 00811cd8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811cdc: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00811ce0: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
L_00811ce3:; BB(0x00811ce3);
    /* 00811ce3: mov edi, dword ptr [0xaca348] */ r_edi = R32((u32)(0xaca348u));
    /* 00811ce9: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00811cec: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811cee: je 0x811d26 */ if (fZ) goto L_00811d26;
L_00811cf0:; BB(0x00811cf0);
    /* 00811cf0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00811cf4: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_00811cf8:; BB(0x00811cf8);
    /* 00811cf8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811cfa: je 0x811db1 */ if (fZ) goto L_00811db1;
L_00811d00:; BB(0x00811d00);
    /* 00811d00: mov eax, esi */ r_eax = r_esi;
    /* 00811d02: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 00811d05: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811d07: je 0x811d9e */ if (fZ) goto L_00811d9e;
L_00811d0d:; BB(0x00811d0d);
    /* 00811d0d: mov edx, ebx */ r_edx = r_ebx;
    /* 00811d0f: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x811d14u); f_00812328();
L_00811d14:; BB(0x00811d14);
    /* 00811d14: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00811d17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811d19: jne 0x811cf8 */ if (!fZ) goto L_00811cf8;
L_00811d1b:; BB(0x00811d1b);
    /* 00811d1b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811d1f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00811d23: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
L_00811d26:; BB(0x00811d26);
    /* 00811d26: mov edi, dword ptr [0xaca344] */ r_edi = R32((u32)(0xaca344u));
    /* 00811d2c: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00811d2f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811d31: je 0x811d5e */ if (fZ) goto L_00811d5e;
L_00811d33:; BB(0x00811d33);
    /* 00811d33: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00811d37: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_00811d3b:; BB(0x00811d3b);
    /* 00811d3b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811d3d: je 0x811d94 */ if (fZ) goto L_00811d94;
L_00811d3f:; BB(0x00811d3f);
    /* 00811d3f: mov eax, esi */ r_eax = r_esi;
    /* 00811d41: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 00811d44: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811d46: je 0x811d84 */ if (fZ) goto L_00811d84;
L_00811d48:; BB(0x00811d48);
    /* 00811d48: mov edx, ebx */ r_edx = r_ebx;
    /* 00811d4a: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x811d4fu); f_00812328();
L_00811d4f:; BB(0x00811d4f);
    /* 00811d4f: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00811d52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811d54: jne 0x811d3b */ if (!fZ) goto L_00811d3b;
L_00811d56:; BB(0x00811d56);
    /* 00811d56: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811d5a: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_00811d5e:; BB(0x00811d5e);
    /* 00811d5e: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_00811d65:; BB(0x00811d65);
    /* 00811d65: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811d68: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00811d6b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811d6d: jl 0x811bcc */ if ((fS!=fO)) goto L_00811bcc;
L_00811d73:; BB(0x00811d73);
    /* 00811d73: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00811d77: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00811d7b: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_00811d7f:; BB(0x00811d7f);
    /* 00811d7f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00811d82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00811d83: ret  */ FN_RET(0x00811b40); r_esp += 4; return;
L_00811d84:; BB(0x00811d84);
    /* 00811d84: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00811d88: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00811d8e: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 00811d92: jmp 0x811d4f */ goto L_00811d4f;
L_00811d94:; BB(0x00811d94);
    /* 00811d94: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811d98: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00811d9c: jmp 0x811d5e */ goto L_00811d5e;
L_00811d9e:; BB(0x00811d9e);
    /* 00811d9e: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00811da2: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00811da8: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 00811dac: jmp 0x811d14 */ goto L_00811d14;
L_00811db1:; BB(0x00811db1);
    /* 00811db1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811db5: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00811db9: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00811dbc: jmp 0x811d26 */ goto L_00811d26;
L_00811dc1:; BB(0x00811dc1);
    /* 00811dc1: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00811dc5: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00811dcb: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 00811dcf: jmp 0x811cd1 */ goto L_00811cd1;
L_00811dd4:; BB(0x00811dd4);
    /* 00811dd4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811dd8: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00811ddc: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00811ddf: jmp 0x811ce3 */ goto L_00811ce3;
L_00811de4:; BB(0x00811de4);
    /* 00811de4: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00811de8: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00811dee: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 00811df2: jmp 0x811c8e */ goto L_00811c8e;
L_00811df7:; BB(0x00811df7);
    /* 00811df7: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811dfb: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00811dff: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00811e02: jmp 0x811ca0 */ goto L_00811ca0;
L_00811e07:; BB(0x00811e07);
    /* 00811e07: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00811e0b: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00811e11: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 00811e15: jmp 0x811c4b */ goto L_00811c4b;
L_00811e1a:; BB(0x00811e1a);
    /* 00811e1a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811e1e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00811e22: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00811e25: jmp 0x811c5d */ goto L_00811c5d;
L_00811e2a:; BB(0x00811e2a);
    /* 00811e2a: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00811e2e: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00811e34: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 00811e38: jmp 0x811c08 */ goto L_00811c08;
L_00811e3d:; BB(0x00811e3d);
    /* 00811e3d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00811e41: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00811e45: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00811e48: jmp 0x811c1a */ goto L_00811c1a;
}

void f_00811e50(void) /* sub_811E50 */
{
    FN_ENTER(0x00811e50);
    /* 00811e50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00811e51: call 0x80ed84 */ r_esp -= 4; W32(r_esp, 0x811e56u); f_0080ed84();
    /* 00811e56: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 00811e5b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00811e5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811e5f: je 0x811ec4 */ if (fZ) goto L_00811ec4;
L_00811e61:; BB(0x00811e61);
    /* 00811e61: push 0x2e80 */ { u32 v = 0x2e80u; r_esp -= 4; W32(r_esp, v); }
    /* 00811e66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00811e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00811e69: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x811e6eu); f_0086b688();
    /* 00811e6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00811e71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00811e73:; BB(0x00811e73);
    /* 00811e73: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00811e79: lea edx, [ebx + 0x100] */ r_edx = (u32)(r_ebx+0x100u);
    /* 00811e7f: mov word ptr [ecx + eax*4 + 2], dx */ W16((u32)(r_ecx+r_eax*4+0x2u), (u16)r_edx);
    /* 00811e84: lea edx, [ebx + 0x101] */ r_edx = (u32)(r_ebx+0x101u);
    /* 00811e8a: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00811e90: mov word ptr [ecx + eax*4 + 6], dx */ W16((u32)(r_ecx+r_eax*4+0x6u), (u16)r_edx);
    /* 00811e95: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00811e9b: lea edx, [ebx + 0x102] */ r_edx = (u32)(r_ebx+0x102u);
    /* 00811ea1: mov word ptr [ecx + eax*4 + 0xa], dx */ W16((u32)(r_ecx+r_eax*4+0xau), (u16)r_edx);
    /* 00811ea6: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00811eac: lea edx, [ebx + 0x103] */ r_edx = (u32)(r_ebx+0x103u);
    /* 00811eb2: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811eb5: mov word ptr [ecx + eax*4 + 0xe], dx */ W16((u32)(r_ecx+r_eax*4+0xeu), (u16)r_edx);
    /* 00811eba: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00811ebd: cmp eax, 0xba0 */ {  u32 a = r_eax; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811ec2: jl 0x811e73 */ if ((fS!=fO)) goto L_00811e73;
L_00811ec4:; BB(0x00811ec4);
    /* 00811ec4: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 00811ec9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811ecb: je 0x811f1b */ if (fZ) goto L_00811f1b;
L_00811ecd:; BB(0x00811ecd);
    /* 00811ecd: push 0x87c0 */ { u32 v = 0x87c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00811ed2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00811ed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00811ed5: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x811edau); f_0086b5cc();
    /* 00811eda: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00811edd: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 00811ee2: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 00811ee5: add eax, 0x87c4 */ {  u32 a = r_eax; u32 b = 0x87c4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00811eea:; BB(0x00811eea);
    /* 00811eea: lea ecx, [ebx + 0x100] */ r_ecx = (u32)(r_ebx+0x100u);
    /* 00811ef0: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00811ef3: lea ecx, [ebx + 0x101] */ r_ecx = (u32)(r_ebx+0x101u);
    /* 00811ef9: mov word ptr [edx + 0xc], cx */ W16((u32)(r_edx+0xcu), (u16)r_ecx);
    /* 00811efd: lea ecx, [ebx + 0x102] */ r_ecx = (u32)(r_ebx+0x102u);
    /* 00811f03: mov word ptr [edx + 0x18], cx */ W16((u32)(r_edx+0x18u), (u16)r_ecx);
    /* 00811f07: lea ecx, [ebx + 0x103] */ r_ecx = (u32)(r_ebx+0x103u);
    /* 00811f0d: mov word ptr [edx + 0x24], cx */ W16((u32)(r_edx+0x24u), (u16)r_ecx);
    /* 00811f11: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811f14: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00811f17: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00811f19: ja 0x811eea */ if ((!fC&&!fZ)) goto L_00811eea;
L_00811f1b:; BB(0x00811f1b);
    /* 00811f1b: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811f21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811f23: je 0x811fc7 */ if (fZ) goto L_00811fc7;
L_00811f29:; BB(0x00811f29);
    /* 00811f29: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00811f2e: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00811f31: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811f37: mov word ptr [edx + 2], ax */ W16((u32)(r_edx+0x2u), (u16)r_eax);
    /* 00811f3b: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 00811f41: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 00811f45: mov ebx, dword ptr [0xab0248] */ r_ebx = R32((u32)(0xab0248u));
    /* 00811f4b: mov word ptr [ebx + 6], ax */ W16((u32)(r_ebx+0x6u), (u16)r_eax);
    /* 00811f4f: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811f55: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00811f59: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811f5f: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 00811f63: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811f69: mov word ptr [edx + 0xc], ax */ W16((u32)(r_edx+0xcu), (u16)r_eax);
    /* 00811f6d: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811f73: mov word ptr [edx + 0xe], ax */ W16((u32)(r_edx+0xeu), (u16)r_eax);
    /* 00811f77: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811f7d: mov word ptr [edx + 0x10], ax */ W16((u32)(r_edx+0x10u), (u16)r_eax);
    /* 00811f81: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811f87: mov word ptr [edx + 0x12], ax */ W16((u32)(r_edx+0x12u), (u16)r_eax);
    /* 00811f8b: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811f91: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00811f95: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811f9b: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00811f9f: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811fa5: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00811fa9: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811faf: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00811fb3: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811fb9: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 00811fbd: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00811fc3: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_00811fc7:; BB(0x00811fc7);
    /* 00811fc7: call 0x80d2cc */ r_esp -= 4; W32(r_esp, 0x811fccu); f_0080d2cc();
    /* 00811fcc: call 0x816fe0 */ r_esp -= 4; W32(r_esp, 0x811fd1u); f_00816fe0();
    /* 00811fd1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00811fd3: call 0x804d58 */ r_esp -= 4; W32(r_esp, 0x811fd8u); f_00804d58();
    /* 00811fd8: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00811fde: call 0x8129b0 */ r_esp -= 4; W32(r_esp, 0x811fe3u); f_008129b0();
    /* 00811fe3: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00811fe9: call 0x812824 */ r_esp -= 4; W32(r_esp, 0x811feeu); f_00812824();
    /* 00811fee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00811ff1: call 0x6bc920 */ r_esp -= 4; W32(r_esp, 0x811ff6u); f_006bc920();
    /* 00811ff6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00811ff7: ret  */ FN_RET(0x00811e50); r_esp += 4; return;
}

void f_00811ff8(void) /* sub_811FF8 */
{
    FN_ENTER(0x00811ff8);
    /* 00811ff8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00811ffb: mov edx, dword ptr [0xab0258] */ r_edx = R32((u32)(0xab0258u));
    /* 00812001: mov ecx, dword ptr [0xab0254] */ r_ecx = R32((u32)(0xab0254u));
    /* 00812007: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00812009: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081200b: jle 0x81222a */ if ((fZ||fS!=fO)) goto L_0081222a;
L_00812011:; BB(0x00812011);
    /* 00812011: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00812015: mov ebx, eax */ r_ebx = r_eax;
    /* 00812017: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0081201b: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0081201f: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00812023: mov eax, edx */ r_eax = r_edx;
L_00812025:; BB(0x00812025);
    /* 00812025: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
    /* 00812028: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081202a: je 0x81220c */ if (fZ) goto L_0081220c;
L_00812030:; BB(0x00812030);
    /* 00812030: mov edi, dword ptr [0xaca378] */ r_edi = R32((u32)(0xaca378u));
    /* 00812036: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00812039: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081203b: je 0x81206b */ if (fZ) goto L_0081206b;
L_0081203d:; BB(0x0081203d);
    /* 0081203d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_00812041:; BB(0x00812041);
    /* 00812041: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812043: je 0x812311 */ if (fZ) goto L_00812311;
L_00812049:; BB(0x00812049);
    /* 00812049: mov eax, esi */ r_eax = r_esi;
    /* 0081204b: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 0081204e: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812050: je 0x8122fe */ if (fZ) goto L_008122fe;
L_00812056:; BB(0x00812056);
    /* 00812056: mov edx, ebp */ r_edx = r_ebp;
    /* 00812058: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x81205du); f_00812328();
L_0081205d:; BB(0x0081205d);
    /* 0081205d: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 00812060: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812062: jne 0x812041 */ if (!fZ) goto L_00812041;
L_00812064:; BB(0x00812064);
    /* 00812064: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00812068: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
L_0081206b:; BB(0x0081206b);
    /* 0081206b: mov edi, dword ptr [0xaca354] */ r_edi = R32((u32)(0xaca354u));
    /* 00812071: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00812074: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812076: je 0x8120a6 */ if (fZ) goto L_008120a6;
L_00812078:; BB(0x00812078);
    /* 00812078: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_0081207c:; BB(0x0081207c);
    /* 0081207c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081207e: je 0x8122f2 */ if (fZ) goto L_008122f2;
L_00812084:; BB(0x00812084);
    /* 00812084: mov eax, esi */ r_eax = r_esi;
    /* 00812086: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 00812089: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081208b: je 0x8122df */ if (fZ) goto L_008122df;
L_00812091:; BB(0x00812091);
    /* 00812091: mov edx, ebp */ r_edx = r_ebp;
    /* 00812093: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x812098u); f_00812328();
L_00812098:; BB(0x00812098);
    /* 00812098: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 0081209b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081209d: jne 0x81207c */ if (!fZ) goto L_0081207c;
L_0081209f:; BB(0x0081209f);
    /* 0081209f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008120a3: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
L_008120a6:; BB(0x008120a6);
    /* 008120a6: mov edi, dword ptr [0xaca350] */ r_edi = R32((u32)(0xaca350u));
    /* 008120ac: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 008120af: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008120b1: je 0x8120e1 */ if (fZ) goto L_008120e1;
L_008120b3:; BB(0x008120b3);
    /* 008120b3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_008120b7:; BB(0x008120b7);
    /* 008120b7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008120b9: je 0x8122d3 */ if (fZ) goto L_008122d3;
L_008120bf:; BB(0x008120bf);
    /* 008120bf: mov eax, esi */ r_eax = r_esi;
    /* 008120c1: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 008120c4: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008120c6: je 0x8122c0 */ if (fZ) goto L_008122c0;
L_008120cc:; BB(0x008120cc);
    /* 008120cc: mov edx, ebp */ r_edx = r_ebp;
    /* 008120ce: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x8120d3u); f_00812328();
L_008120d3:; BB(0x008120d3);
    /* 008120d3: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 008120d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008120d8: jne 0x8120b7 */ if (!fZ) goto L_008120b7;
L_008120da:; BB(0x008120da);
    /* 008120da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008120de: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
L_008120e1:; BB(0x008120e1);
    /* 008120e1: mov edi, dword ptr [0xaca34c] */ r_edi = R32((u32)(0xaca34cu));
    /* 008120e7: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 008120ea: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008120ec: je 0x81211c */ if (fZ) goto L_0081211c;
L_008120ee:; BB(0x008120ee);
    /* 008120ee: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_008120f2:; BB(0x008120f2);
    /* 008120f2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008120f4: je 0x8122b4 */ if (fZ) goto L_008122b4;
L_008120fa:; BB(0x008120fa);
    /* 008120fa: mov eax, esi */ r_eax = r_esi;
    /* 008120fc: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 008120ff: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812101: je 0x8122a1 */ if (fZ) goto L_008122a1;
L_00812107:; BB(0x00812107);
    /* 00812107: mov edx, ebp */ r_edx = r_ebp;
    /* 00812109: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x81210eu); f_00812328();
L_0081210e:; BB(0x0081210e);
    /* 0081210e: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 00812111: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812113: jne 0x8120f2 */ if (!fZ) goto L_008120f2;
L_00812115:; BB(0x00812115);
    /* 00812115: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00812119: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
L_0081211c:; BB(0x0081211c);
    /* 0081211c: mov edi, dword ptr [0xaca348] */ r_edi = R32((u32)(0xaca348u));
    /* 00812122: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00812125: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812127: je 0x812157 */ if (fZ) goto L_00812157;
L_00812129:; BB(0x00812129);
    /* 00812129: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_0081212d:; BB(0x0081212d);
    /* 0081212d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081212f: je 0x812295 */ if (fZ) goto L_00812295;
L_00812135:; BB(0x00812135);
    /* 00812135: mov eax, esi */ r_eax = r_esi;
    /* 00812137: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 0081213a: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081213c: je 0x812282 */ if (fZ) goto L_00812282;
L_00812142:; BB(0x00812142);
    /* 00812142: mov edx, ebp */ r_edx = r_ebp;
    /* 00812144: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x812149u); f_00812328();
L_00812149:; BB(0x00812149);
    /* 00812149: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 0081214c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081214e: jne 0x81212d */ if (!fZ) goto L_0081212d;
L_00812150:; BB(0x00812150);
    /* 00812150: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00812154: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
L_00812157:; BB(0x00812157);
    /* 00812157: mov edi, dword ptr [0xaca344] */ r_edi = R32((u32)(0xaca344u));
    /* 0081215d: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00812160: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812162: je 0x812192 */ if (fZ) goto L_00812192;
L_00812164:; BB(0x00812164);
    /* 00812164: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_00812168:; BB(0x00812168);
    /* 00812168: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081216a: je 0x812276 */ if (fZ) goto L_00812276;
L_00812170:; BB(0x00812170);
    /* 00812170: mov eax, esi */ r_eax = r_esi;
    /* 00812172: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 00812175: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812177: je 0x812263 */ if (fZ) goto L_00812263;
L_0081217d:; BB(0x0081217d);
    /* 0081217d: mov edx, ebp */ r_edx = r_ebp;
    /* 0081217f: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x812184u); f_00812328();
L_00812184:; BB(0x00812184);
    /* 00812184: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 00812187: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00812189: jne 0x812168 */ if (!fZ) goto L_00812168;
L_0081218b:; BB(0x0081218b);
    /* 0081218b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0081218f: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
L_00812192:; BB(0x00812192);
    /* 00812192: mov edi, dword ptr [0xaca334] */ r_edi = R32((u32)(0xaca334u));
    /* 00812198: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 0081219b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081219d: je 0x8121cd */ if (fZ) goto L_008121cd;
L_0081219f:; BB(0x0081219f);
    /* 0081219f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_008121a3:; BB(0x008121a3);
    /* 008121a3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008121a5: je 0x812257 */ if (fZ) goto L_00812257;
L_008121ab:; BB(0x008121ab);
    /* 008121ab: mov eax, esi */ r_eax = r_esi;
    /* 008121ad: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 008121b0: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008121b2: je 0x812244 */ if (fZ) goto L_00812244;
L_008121b8:; BB(0x008121b8);
    /* 008121b8: mov edx, ebp */ r_edx = r_ebp;
    /* 008121ba: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x8121bfu); f_00812328();
L_008121bf:; BB(0x008121bf);
    /* 008121bf: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 008121c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008121c4: jne 0x8121a3 */ if (!fZ) goto L_008121a3;
L_008121c6:; BB(0x008121c6);
    /* 008121c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008121ca: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
L_008121cd:; BB(0x008121cd);
    /* 008121cd: mov edi, dword ptr [0xaca330] */ r_edi = R32((u32)(0xaca330u));
    /* 008121d3: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 008121d6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008121d8: je 0x8121fd */ if (fZ) goto L_008121fd;
L_008121da:; BB(0x008121da);
    /* 008121da: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_008121de:; BB(0x008121de);
    /* 008121de: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008121e0: je 0x81223e */ if (fZ) goto L_0081223e;
L_008121e2:; BB(0x008121e2);
    /* 008121e2: mov eax, esi */ r_eax = r_esi;
    /* 008121e4: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 008121e7: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008121e9: je 0x81222e */ if (fZ) goto L_0081222e;
L_008121eb:; BB(0x008121eb);
    /* 008121eb: mov edx, ebp */ r_edx = r_ebp;
    /* 008121ed: call 0x812328 */ r_esp -= 4; W32(r_esp, 0x8121f2u); f_00812328();
L_008121f2:; BB(0x008121f2);
    /* 008121f2: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 008121f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008121f7: jne 0x8121de */ if (!fZ) goto L_008121de;
L_008121f9:; BB(0x008121f9);
    /* 008121f9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
L_008121fd:; BB(0x008121fd);
    /* 008121fd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008121ff: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 00812203: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 00812206: mov ecx, dword ptr [0xab0254] */ r_ecx = R32((u32)(0xab0254u));
L_0081220c:; BB(0x0081220c);
    /* 0081220c: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081220f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00812212: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00812214: jl 0x812025 */ if ((fS!=fO)) goto L_00812025;
L_0081221a:; BB(0x0081221a);
    /* 0081221a: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0081221e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00812222: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00812226: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_0081222a:; BB(0x0081222a);
    /* 0081222a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081222d: ret  */ FN_RET(0x00811ff8); r_esp += 4; return;
L_0081222e:; BB(0x0081222e);
    /* 0081222e: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00812232: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00812238: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 0081223c: jmp 0x8121f2 */ goto L_008121f2;
L_0081223e:; BB(0x0081223e);
    /* 0081223e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00812242: jmp 0x8121fd */ goto L_008121fd;
L_00812244:; BB(0x00812244);
    /* 00812244: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00812248: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0081224e: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 00812252: jmp 0x8121bf */ goto L_008121bf;
L_00812257:; BB(0x00812257);
    /* 00812257: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0081225b: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
    /* 0081225e: jmp 0x8121cd */ goto L_008121cd;
L_00812263:; BB(0x00812263);
    /* 00812263: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00812267: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0081226d: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 00812271: jmp 0x812184 */ goto L_00812184;
L_00812276:; BB(0x00812276);
    /* 00812276: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0081227a: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
    /* 0081227d: jmp 0x812192 */ goto L_00812192;
L_00812282:; BB(0x00812282);
    /* 00812282: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00812286: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0081228c: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 00812290: jmp 0x812149 */ goto L_00812149;
L_00812295:; BB(0x00812295);
    /* 00812295: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00812299: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
    /* 0081229c: jmp 0x812157 */ goto L_00812157;
L_008122a1:; BB(0x008122a1);
    /* 008122a1: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 008122a5: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008122ab: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 008122af: jmp 0x81210e */ goto L_0081210e;
L_008122b4:; BB(0x008122b4);
    /* 008122b4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008122b8: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
    /* 008122bb: jmp 0x81211c */ goto L_0081211c;
L_008122c0:; BB(0x008122c0);
    /* 008122c0: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 008122c4: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008122ca: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 008122ce: jmp 0x8120d3 */ goto L_008120d3;
L_008122d3:; BB(0x008122d3);
    /* 008122d3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008122d7: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
    /* 008122da: jmp 0x8120e1 */ goto L_008120e1;
L_008122df:; BB(0x008122df);
    /* 008122df: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 008122e3: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008122e9: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 008122ed: jmp 0x812098 */ goto L_00812098;
L_008122f2:; BB(0x008122f2);
    /* 008122f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008122f6: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
    /* 008122f9: jmp 0x8120a6 */ goto L_008120a6;
L_008122fe:; BB(0x008122fe);
    /* 008122fe: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00812302: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00812308: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 0081230c: jmp 0x81205d */ goto L_0081205d;
L_00812311:; BB(0x00812311);
    /* 00812311: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00812315: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
    /* 00812318: jmp 0x81206b */ goto L_0081206b;
}

