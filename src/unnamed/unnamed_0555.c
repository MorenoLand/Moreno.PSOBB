#include "protos.h"

void f_00555160(void) /* sub_555160 */
{
    FN_ENTER(0x00555160);
    /* 00555160: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00555161: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555162: mov esi, ecx */ r_esi = r_ecx;
    /* 00555164: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0055516a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055516c: je 0x5551c9 */ if (fZ) goto L_005551c9;
L_0055516e:; BB(0x0055516e);
    /* 0055516e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555171: je 0x5551c1 */ if (fZ) goto L_005551c1;
L_00555173:; BB(0x00555173);
    /* 00555173: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00555176: jne 0x555231 */ if (!fZ) goto L_00555231;
L_0055517c:; BB(0x0055517c);
    /* 0055517c: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00555182: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00555185: and edx, 0xfffffffa */ {  u32 a = r_edx; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00555188: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 0055518e: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555193: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00555196: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00555199: jne 0x555231 */ if (!fZ) goto L_00555231;
L_0055519f:; BB(0x0055519f);
    /* 0055519f: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005551a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005551a8: je 0x555231 */ if (fZ) goto L_00555231;
L_005551ae:; BB(0x005551ae);
    /* 005551ae: mov dword ptr [esi + 0x37c], 0 */ W32((u32)(r_esi+0x37cu), 0x0u);
    /* 005551b8: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 005551be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005551bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005551c0: ret  */ FN_RET(0x00555160); r_esp += 4; return;
L_005551c1:; BB(0x005551c1);
    /* 005551c1: lea ebx, [esi + 0x3b8] */ r_ebx = (u32)(r_esi+0x3b8u);
    /* 005551c7: jmp 0x55521b */ goto L_0055521b;
L_005551c9:; BB(0x005551c9);
    /* 005551c9: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 005551cf: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005551d2: or edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005551d8: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005551db: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 005551e1: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 005551e4: mov ebx, 5 */ r_ebx = 0x5u;
    /* 005551e9: mov word ptr [esi + 0xb8], bx */ W16((u32)(r_esi+0xb8u), (u16)r_ebx);
    /* 005551f0: mov ecx, esi */ r_ecx = r_esi;
    /* 005551f2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5551f7u); f_007aa094();
    /* 005551f7: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005551fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005551fe: call 0x5789e4 */ r_esp -= 4; W32(r_esp, 0x555203u); f_005789e4();
    /* 00555203: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00555204: lea ebx, [esi + 0x3b8] */ r_ebx = (u32)(r_esi+0x3b8u);
    /* 0055520a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055520c: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x555211u); f_00576c48();
    /* 00555211: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
L_0055521b:; BB(0x0055521b);
    /* 0055521b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0055521d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055521f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x555222u); call_ind(t); }
    /* 00555222: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00555225: jne 0x555231 */ if (!fZ) goto L_00555231;
L_00555227:; BB(0x00555227);
    /* 00555227: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
L_00555231:; BB(0x00555231);
    /* 00555231: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00555232: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00555233: ret  */ FN_RET(0x00555160); r_esp += 4; return;
}

void f_00555234(void) /* sub_555234 */
{
    FN_ENTER(0x00555234);
    /* 00555234: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555235: mov ebp, esp */ r_ebp = r_esp;
    /* 00555237: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555239: push 0x8d61dc */ { u32 v = 0x8d61dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055523e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00555244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555245: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055524c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055524f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00555252: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00555255: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00555258: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0055525b: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00555261: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00555264: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055526a: jne 0x5558a9 */ if (!fZ) goto L_005558a9;
L_00555270:; BB(0x00555270);
    /* 00555270: mov eax, ecx */ r_eax = r_ecx;
    /* 00555272: mov eax, dword ptr [eax + 0x384] */ r_eax = R32((u32)(r_eax+0x384u));
    /* 00555278: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055527a: je 0x555718 */ if (fZ) goto L_00555718;
L_00555280:; BB(0x00555280);
    /* 00555280: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555283: je 0x5555e1 */ if (fZ) goto L_005555e1;
L_00555289:; BB(0x00555289);
    /* 00555289: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055528c: je 0x5554c3 */ if (fZ) goto L_005554c3;
L_00555292:; BB(0x00555292);
    /* 00555292: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555295: je 0x5553b2 */ if (fZ) goto L_005553b2;
L_0055529b:; BB(0x0055529b);
    /* 0055529b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055529e: jne 0x55538a */ if (!fZ) goto L_0055538a;
L_005552a4:; BB(0x005552a4);
    /* 005552a4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5552a9u); f_007aa094();
    /* 005552a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005552ac: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005552af: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005552b5: jne 0x5552e8 */ if (!fZ) goto L_005552e8;
L_005552b7:; BB(0x005552b7);
    /* 005552b7: mov ecx, eax */ r_ecx = r_eax;
    /* 005552b9: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 005552bf: fcomp dword ptr [0x924c68] */ fx_compare(ST(0), R_F32((u32)(0x924c68u))); FPOP();
    /* 005552c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005552c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005552c8: jb 0x5552e8 */ if (fC) goto L_005552e8;
L_005552ca:; BB(0x005552ca);
    /* 005552ca: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005552d0: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005552d3: and edx, 0xf5ffffff */ {  u32 a = r_edx; u32 b = 0xf5ffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005552d9: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005552dc: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005552df: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005552e5: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
L_005552e8:; BB(0x005552e8);
    /* 005552e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005552eb: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 005552f1: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005552f4: jne 0x555301 */ if (!fZ) goto L_00555301;
L_005552f6:; BB(0x005552f6);
    /* 005552f6: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005552fc: jmp 0x555486 */ goto L_00555486;
L_00555301:; BB(0x00555301);
    /* 00555301: mov ecx, eax */ r_ecx = r_eax;
    /* 00555303: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00555305: and edx, 0xfffff5ff */ {  u32 a = r_edx; u32 b = 0xfffff5ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0055530b: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0055530e: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 00555315: mov word ptr [ecx + 0x346], dx */ W16((u32)(r_ecx+0x346u), (u16)r_edx);
    /* 0055531c: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 00555323: call dword ptr [eax + 0xd0] */ { u32 t = R32((u32)(r_eax+0xd0u)); r_esp -= 4; W32(r_esp, 0x555329u); call_ind(t); }
    /* 00555329: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055532c: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00555332: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00555335: mov dword ptr [eax + 0x390], edx */ W32((u32)(r_eax+0x390u), r_edx);
    /* 0055533b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055533e: jne 0x55535f */ if (!fZ) goto L_0055535f;
L_00555340:; BB(0x00555340);
    /* 00555340: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00555347: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055534a: je 0x55535f */ if (fZ) goto L_0055535f;
L_0055534c:; BB(0x0055534c);
    /* 0055534c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055534f: mov dword ptr [edx + 0x37c], 1 */ W32((u32)(r_edx+0x37cu), 0x1u);
    /* 00555359: mov dword ptr [edx + 0x388], eax */ W32((u32)(r_edx+0x388u), r_eax);
L_0055535f:; BB(0x0055535f);
    /* 0055535f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555362: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555368: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0055536e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00555371: and eax, 0xf5ffffff */ {  u32 a = r_eax; u32 b = 0xf5ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555376: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00555379: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0055537c: and ecx, 0xfbffffff */ {  u32 a = r_ecx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00555382: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00555385: jmp 0x555486 */ goto L_00555486;
L_0055538a:; BB(0x0055538a);
    /* 0055538a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055538d: jne 0x5553a7 */ if (!fZ) goto L_005553a7;
L_0055538f:; BB(0x0055538f);
    /* 0055538f: mov edx, ecx */ r_edx = r_ecx;
    /* 00555391: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555397: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0055539a: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055539f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 005553a2: jmp 0x555486 */ goto L_00555486;
L_005553a7:; BB(0x005553a7);
    /* 005553a7: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005553ad: jmp 0x555486 */ goto L_00555486;
L_005553b2:; BB(0x005553b2);
    /* 005553b2: call 0x555994 */ r_esp -= 4; W32(r_esp, 0x5553b7u); f_00555994();
    /* 005553b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005553ba: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005553bf: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5553c4u); f_007879b8();
    /* 005553c4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005553c7: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 005553ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005553cd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005553cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005553d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005553d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005553d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005553d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005553d4: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5553d9u); f_008144b0();
    /* 005553d9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005553dc: mov esi, 1 */ r_esi = 0x1u;
    /* 005553e1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005553e3:; BB(0x005553e3);
    /* 005553e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005553e6: movsx edx, byte ptr [edi + eax + 0x3a8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+r_eax+0x3a8u));
    /* 005553ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005553f0: je 0x555441 */ if (fZ) goto L_00555441;
L_005553f2:; BB(0x005553f2);
    /* 005553f2: mov ecx, dword ptr [eax + edi*4 + 0x39c] */ r_ecx = R32((u32)(r_eax+r_edi*4+0x39cu));
    /* 005553f9: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 005553fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005553fe: je 0x555441 */ if (fZ) goto L_00555441;
L_00555400:; BB(0x00555400);
    /* 00555400: call 0x5578ac */ r_esp -= 4; W32(r_esp, 0x555405u); f_005578ac();
    /* 00555405: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555407: jne 0x55540d */ if (!fZ) goto L_0055540d;
L_00555409:; BB(0x00555409);
    /* 00555409: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0055540b: jmp 0x555441 */ goto L_00555441;
L_0055540d:; BB(0x0055540d);
    /* 0055540d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555410: mov ecx, dword ptr [eax + ebx*2 + 0x39c] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x39cu));
    /* 00555417: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0055541b: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00555421: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00555425: mov ecx, edi */ r_ecx = r_edi;
    /* 00555427: mov dword ptr [eax + ebx*2 + 0x39c], 0 */ W32((u32)(r_eax+r_ebx*2+0x39cu), 0x0u);
    /* 00555432: mov ebx, 0x20000 */ r_ebx = 0x20000u;
    /* 00555437: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00555439: not ebx */ r_ebx = ~r_ebx;
    /* 0055543b: and dword ptr [eax + 0x390], ebx */ { u32 ad = (u32)(r_eax+0x390u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00555441:; BB(0x00555441);
    /* 00555441: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00555444: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00555447: jl 0x5553e3 */ if ((fS!=fO)) goto L_005553e3;
L_00555449:; BB(0x00555449);
    /* 00555449: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055544b: jne 0x555455 */ if (!fZ) goto L_00555455;
L_0055544d:; BB(0x0055544d);
    /* 0055544d: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555453: jmp 0x555486 */ goto L_00555486;
L_00555455:; BB(0x00555455);
    /* 00555455: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555458: push 0x12d */ { u32 v = 0x12du; r_esp -= 4; W32(r_esp, v); }
    /* 0055545d: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x555462u); f_007879b8();
    /* 00555462: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555465: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00555467: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555468: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555469: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055546a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055546b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x555470u); f_00814298();
    /* 00555470: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555473: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555476: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 0055547c: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
L_00555486:; BB(0x00555486);
    /* 00555486: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555489: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055548c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055548f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00555497: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x55549cu); f_00772b44();
    /* 0055549c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055549f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5554a4u); f_007b6894();
    /* 005554a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005554a7: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5554acu); f_007b798c();
    /* 005554ac: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005554af: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005554b2: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005554b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005554b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005554bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005554c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005554c2: ret  */ FN_RET(0x00555234); r_esp += 4; return;
L_005554c3:; BB(0x005554c3);
    /* 005554c3: mov eax, ecx */ r_eax = r_ecx;
    /* 005554c5: mov edx, dword ptr [eax + 0x38c] */ r_edx = R32((u32)(r_eax+0x38cu));
    /* 005554cb: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005554ce: mov dword ptr [eax + 0x38c], edx */ W32((u32)(r_eax+0x38cu), r_edx);
    /* 005554d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005554d6: jle 0x5554e0 */ if ((fZ||fS!=fO)) goto L_005554e0;
L_005554d8:; BB(0x005554d8);
    /* 005554d8: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005554de: jmp 0x555486 */ goto L_00555486;
L_005554e0:; BB(0x005554e0);
    /* 005554e0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005554e2:; BB(0x005554e2);
    /* 005554e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005554e5: mov edx, dword ptr [eax + esi*4 + 0x39c] */ r_edx = R32((u32)(r_eax+r_esi*4+0x39cu));
    /* 005554ec: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 005554ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005554f1: je 0x555529 */ if (fZ) goto L_00555529;
L_005554f3:; BB(0x005554f3);
    /* 005554f3: mov ecx, eax */ r_ecx = r_eax;
    /* 005554f5: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5554fau); f_007751b0();
    /* 005554fa: fcomp dword ptr [0x924c64] */ fx_compare(ST(0), R_F32((u32)(0x924c64u))); FPOP();
    /* 00555500: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00555502: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555503: jae 0x555512 */ if (!fC) goto L_00555512;
L_00555505:; BB(0x00555505);
    /* 00555505: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555508: mov byte ptr [esi + eax + 0x3a8], 0 */ W8((u32)(r_esi+r_eax+0x3a8u), 0x0u);
    /* 00555510: jmp 0x555529 */ goto L_00555529;
L_00555512:; BB(0x00555512);
    /* 00555512: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555515: mov byte ptr [esi + eax + 0x3a8], 1 */ W8((u32)(r_esi+r_eax+0x3a8u), 0x1u);
    /* 0055551d: mov ecx, dword ptr [eax + ebx*2 + 0x39c] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x39cu));
    /* 00555524: call 0x557878 */ r_esp -= 4; W32(r_esp, 0x555529u); f_00557878();
L_00555529:; BB(0x00555529);
    /* 00555529: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0055552c: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055552f: jl 0x5554e2 */ if ((fS!=fO)) goto L_005554e2;
L_00555531:; BB(0x00555531);
    /* 00555531: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555534: mov eax, dword ptr [eax + 0x3a0] */ r_eax = R32((u32)(r_eax+0x3a0u));
    /* 0055553a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055553c: je 0x5555b8 */ if (fZ) goto L_005555b8;
L_0055553e:; BB(0x0055553e);
    /* 0055553e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555541: mov ecx, dword ptr [edx + 0x3a4] */ r_ecx = R32((u32)(r_edx+0x3a4u));
    /* 00555547: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555549: je 0x5555b8 */ if (fZ) goto L_005555b8;
L_0055554b:; BB(0x0055554b);
    /* 0055554b: movsx ebx, byte ptr [edx + 0x3a9] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+0x3a9u));
    /* 00555552: movsx ecx, byte ptr [edx + 0x3aa] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x3aau));
    /* 00555559: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0055555b: jne 0x5555b8 */ if (!fZ) goto L_005555b8;
L_0055555d:; BB(0x0055555d);
    /* 0055555d: lea ebx, [edx + 0x300] */ r_ebx = (u32)(r_edx+0x300u);
    /* 00555563: add eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555568: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555569: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055556a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x55556fu); f_0078ea50();
    /* 0055556f: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00555572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555575: mov edx, dword ptr [eax + 0x3a4] */ r_edx = R32((u32)(r_eax+0x3a4u));
    /* 0055557b: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00555581: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555582: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555583: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x555588u); f_0078ea50();
    /* 00555588: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055558b: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0055558e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00555590: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00555592: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555593: jae 0x55559c */ if (!fC) goto L_0055559c;
L_00555595:; BB(0x00555595);
    /* 00555595: mov edx, 1 */ r_edx = 0x1u;
    /* 0055559a: jmp 0x5555a1 */ goto L_005555a1;
L_0055559c:; BB(0x0055559c);
    /* 0055559c: mov edx, 2 */ r_edx = 0x2u;
L_005555a1:; BB(0x005555a1);
    /* 005555a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005555a4: mov byte ptr [edx + eax + 0x3a8], 1 */ W8((u32)(r_edx+r_eax+0x3a8u), 0x1u);
    /* 005555ac: mov ecx, dword ptr [eax + edx*4 + 0x39c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x39cu));
    /* 005555b3: call 0x557878 */ r_esp -= 4; W32(r_esp, 0x5555b8u); f_00557878();
L_005555b8:; BB(0x005555b8);
    /* 005555b8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005555bb: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005555c1: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 005555c7: or eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005555cc: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 005555d2: mov dword ptr [edx + 0x384], 3 */ W32((u32)(r_edx+0x384u), 0x3u);
    /* 005555dc: jmp 0x555486 */ goto L_00555486;
L_005555e1:; BB(0x005555e1);
    /* 005555e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005555e4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5555e9u); f_007aa094();
    /* 005555e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005555ec: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 005555ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005555f0: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 005555f6: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 005555fc: mov ebx, dword ptr [ecx + 0x308] */ r_ebx = R32((u32)(r_ecx+0x308u));
    /* 00555602: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00555605: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 00555608: fadd dword ptr [ecx + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30cu));
    /* 0055560e: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 00555611: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00555614: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 00555617: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0055561a: fadd dword ptr [ecx + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x314u));
    /* 00555620: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00555623: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x555628u); f_00771e14();
    /* 00555628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055562a: je 0x55563c */ if (fZ) goto L_0055563c;
L_0055562c:; BB(0x0055562c);
    /* 0055562c: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555632: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555638: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055563a: jmp 0x555653 */ goto L_00555653;
L_0055563c:; BB(0x0055563c);
    /* 0055563c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055563f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00555641: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x555644u); call_ind(t); }
    /* 00555644: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555647: fld dword ptr [eax + 0x30c] */ FPUSH(R_F32((u32)(r_eax+0x30cu)));
    /* 0055564d: fld dword ptr [eax + 0x314] */ FPUSH(R_F32((u32)(r_eax+0x314u)));
L_00555653:; BB(0x00555653);
    /* 00555653: fld dword ptr [0x924c58] */ FPUSH(R_F32((u32)(0x924c58u)));
    /* 00555659: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0055565b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0055565d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555660: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00555667: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055566a: je 0x555687 */ if (fZ) goto L_00555687;
L_0055566c:; BB(0x0055566c);
    /* 0055566c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055566e: fstp dword ptr [eax + 0x30c] */ W_F32((u32)(r_eax+0x30cu), ST(0)); FPOP();
    /* 00555674: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 0055567a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055567c: fstp dword ptr [eax + 0x314] */ W_F32((u32)(r_eax+0x314u), ST(0)); FPOP();
    /* 00555682: jmp 0x555486 */ goto L_00555486;
L_00555687:; BB(0x00555687);
    /* 00555687: mov ecx, dword ptr [eax + 0x370] */ r_ecx = R32((u32)(r_eax+0x370u));
    /* 0055568d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055568f: je 0x5556a1 */ if (fZ) goto L_005556a1;
L_00555691:; BB(0x00555691);
    /* 00555691: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00555693: fstp dword ptr [eax + 0x30c] */ W_F32((u32)(r_eax+0x30cu), ST(0)); FPOP();
    /* 00555699: fstp dword ptr [eax + 0x314] */ W_F32((u32)(r_eax+0x314u), ST(0)); FPOP();
    /* 0055569f: jmp 0x5556bb */ goto L_005556bb;
L_005556a1:; BB(0x005556a1);
    /* 005556a1: movsx edx, word ptr [eax + 0x394] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x394u));
    /* 005556a8: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005556ab: jl 0x5556cd */ if ((fS!=fO)) goto L_005556cd;
L_005556ad:; BB(0x005556ad);
    /* 005556ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005556af: fstp dword ptr [eax + 0x30c] */ W_F32((u32)(r_eax+0x30cu), ST(0)); FPOP();
    /* 005556b5: fstp dword ptr [eax + 0x314] */ W_F32((u32)(r_eax+0x314u), ST(0)); FPOP();
L_005556bb:; BB(0x005556bb);
    /* 005556bb: mov ecx, eax */ r_ecx = r_eax;
    /* 005556bd: call 0x555974 */ r_esp -= 4; W32(r_esp, 0x5556c2u); f_00555974();
    /* 005556c2: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005556c8: jmp 0x555486 */ goto L_00555486;
L_005556cd:; BB(0x005556cd);
    /* 005556cd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005556cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005556d1: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005556d7: mov ebx, eax */ r_ebx = r_eax;
    /* 005556d9: mov ecx, dword ptr [ecx*4 + 0xa73af4] */ r_ecx = R32((u32)(r_ecx*4+0xa73af4u));
    /* 005556e0: mov eax, 1 */ r_eax = 0x1u;
    /* 005556e5: mov word ptr [ebx + 0x39a], ax */ W16((u32)(r_ebx+0x39au), (u16)r_eax);
    /* 005556ec: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 005556f6: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 00555700: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00555703: mov dword ptr [ebx + 0x384], 2 */ W32((u32)(r_ebx+0x384u), 0x2u);
    /* 0055570d: mov dword ptr [ebx + 0x38c], edx */ W32((u32)(r_ebx+0x38cu), r_edx);
    /* 00555713: jmp 0x555486 */ goto L_00555486;
L_00555718:; BB(0x00555718);
    /* 00555718: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0055571b: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 00555721: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555726: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00555729: and edx, 0xff7fffff */ {  u32 a = r_edx; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0055572f: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 00555735: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 00555738: or edx, 0xa000000 */ {  u32 a = r_edx; u32 b = 0xa000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055573e: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 00555741: mov esi, dword ptr [ecx + 0x30] */ r_esi = R32((u32)(r_ecx+0x30u));
    /* 00555744: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555747: or esi, 0x4000000 */ {  u32 a = r_esi; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0055574d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055574f: mov dword ptr [ecx + 0x30], esi */ W32((u32)(r_ecx+0x30u), r_esi);
    /* 00555752: push 0xc0e00000 */ { u32 v = 0xc0e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00555757: mov edi, 4 */ r_edi = 0x4u;
    /* 0055575c: mov word ptr [ecx + 0xb8], di */ W16((u32)(r_ecx+0xb8u), (u16)r_edi);
    /* 00555763: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x555766u); call_ind(t); }
    /* 00555766: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555769: call 0x555994 */ r_esp -= 4; W32(r_esp, 0x55576eu); f_00555994();
    /* 0055576e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00555770: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00555773:; BB(0x00555773);
    /* 00555773: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555776: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555779: mov ebx, dword ptr [edx + ecx*4 + 0x39c] */ r_ebx = R32((u32)(r_edx+r_ecx*4+0x39cu));
    /* 00555780: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00555783: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555785: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00555788: je 0x5557f0 */ if (fZ) goto L_005557f0;
L_0055578a:; BB(0x0055578a);
    /* 0055578a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055578d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555790: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00555793: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00555796: jl 0x555773 */ if ((fS!=fO)) goto L_00555773;
L_00555798:; BB(0x00555798);
    /* 00555798: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055579b: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 005557a0: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5557a5u); f_007879b8();
    /* 005557a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005557a8: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 005557ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005557ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005557ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005557af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005557b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005557b1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5557b6u); f_00814298();
    /* 005557b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005557b9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005557bc: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 005557c2: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005557c5: or eax, 0xa000000 */ {  u32 a = r_eax; u32 b = 0xa000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005557ca: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005557cd: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005557d0: add word ptr [ebx + 0x394], 1 */ { u32 ad = (u32)(r_ebx+0x394u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005557d8: or ecx, 0x4000000 */ {  u32 a = r_ecx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005557de: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 005557e8: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 005557eb: jmp 0x5555e1 */ goto L_005555e1;
L_005557f0:; BB(0x005557f0);
    /* 005557f0: mov ecx, edx */ r_ecx = r_edx;
    /* 005557f2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5557f7u); f_007751b0();
    /* 005557f7: fcomp dword ptr [0x924c64] */ fx_compare(ST(0), R_F32((u32)(0x924c64u))); FPOP();
    /* 005557fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005557ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555800: jb 0x55578a */ if (fC) goto L_0055578a;
L_00555802:; BB(0x00555802);
    /* 00555802: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00555809: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055580e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x555813u); f_005caba4();
    /* 00555813: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00555816: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555819: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0055581c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055581e: je 0x5558a2 */ if (fZ) goto L_005558a2;
L_00555824:; BB(0x00555824);
    /* 00555824: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0055582b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00555832: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555835: mov edx, dword ptr [eax + 0x370] */ r_edx = R32((u32)(r_eax+0x370u));
    /* 0055583b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055583d: je 0x555847 */ if (fZ) goto L_00555847;
L_0055583f:; BB(0x0055583f);
    /* 0055583f: mov ecx, dword ptr [0xa73b1c] */ r_ecx = R32((u32)(0xa73b1cu));
    /* 00555845: jmp 0x55584d */ goto L_0055584d;
L_00555847:; BB(0x00555847);
    /* 00555847: mov ecx, dword ptr [0xa73b14] */ r_ecx = R32((u32)(0xa73b14u));
L_0055584d:; BB(0x0055584d);
    /* 0055584d: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555850: mov esi, eax */ r_esi = r_eax;
    /* 00555852: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00555855: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555857: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0055585a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055585c: lea ebx, [esi + edx + 0x3dc] */ r_ebx = (u32)(r_esi+r_edx+0x3dcu);
    /* 00555863: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555864: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555865: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555868: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00555869: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055586a: call 0x5572e4 */ r_esp -= 4; W32(r_esp, 0x55586fu); f_005572e4();
    /* 0055586f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00555876:; BB(0x00555876);
    /* 00555876: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555879: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055587c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055587f: mov dword ptr [edx + ecx*2 + 0x39c], eax */ W32((u32)(r_edx+r_ecx*2+0x39cu), r_eax);
    /* 00555886: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055588d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555890: mov eax, 0x20000 */ r_eax = 0x20000u;
    /* 00555895: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00555897: or dword ptr [edx + 0x390], eax */ { u32 ad = (u32)(r_edx+0x390u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0055589d: jmp 0x55578a */ goto L_0055578a;
L_005558a2:; BB(0x005558a2);
    /* 005558a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005558a4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005558a7: jmp 0x555876 */ goto L_00555876;
L_005558a9:; BB(0x005558a9);
    /* 005558a9: call 0x5558bc */ r_esp -= 4; W32(r_esp, 0x5558aeu); f_005558bc();
    /* 005558ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005558b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005558b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005558ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005558bb: ret  */ FN_RET(0x00555234); r_esp += 4; return;
}

void f_00555245(void)
{
    FN_ENTER(0x00555245);
    /* 00555245: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055524c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055524f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00555252: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00555255: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00555258: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0055525b: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00555261: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00555264: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055526a: jne 0x5558a9 */ if (!fZ) goto L_005558a9;
L_00555270:; BB(0x00555270);
    /* 00555270: mov eax, ecx */ r_eax = r_ecx;
    /* 00555272: mov eax, dword ptr [eax + 0x384] */ r_eax = R32((u32)(r_eax+0x384u));
    /* 00555278: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055527a: je 0x555718 */ if (fZ) goto L_00555718;
L_00555280:; BB(0x00555280);
    /* 00555280: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555283: je 0x5555e1 */ if (fZ) goto L_005555e1;
L_00555289:; BB(0x00555289);
    /* 00555289: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055528c: je 0x5554c3 */ if (fZ) goto L_005554c3;
L_00555292:; BB(0x00555292);
    /* 00555292: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555295: je 0x5553b2 */ if (fZ) goto L_005553b2;
L_0055529b:; BB(0x0055529b);
    /* 0055529b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055529e: jne 0x55538a */ if (!fZ) goto L_0055538a;
L_005552a4:; BB(0x005552a4);
    /* 005552a4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5552a9u); f_007aa094();
    /* 005552a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005552ac: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005552af: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005552b5: jne 0x5552e8 */ if (!fZ) goto L_005552e8;
L_005552b7:; BB(0x005552b7);
    /* 005552b7: mov ecx, eax */ r_ecx = r_eax;
    /* 005552b9: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 005552bf: fcomp dword ptr [0x924c68] */ fx_compare(ST(0), R_F32((u32)(0x924c68u))); FPOP();
    /* 005552c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005552c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005552c8: jb 0x5552e8 */ if (fC) goto L_005552e8;
L_005552ca:; BB(0x005552ca);
    /* 005552ca: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005552d0: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005552d3: and edx, 0xf5ffffff */ {  u32 a = r_edx; u32 b = 0xf5ffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005552d9: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005552dc: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005552df: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005552e5: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
L_005552e8:; BB(0x005552e8);
    /* 005552e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005552eb: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 005552f1: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005552f4: jne 0x555301 */ if (!fZ) goto L_00555301;
L_005552f6:; BB(0x005552f6);
    /* 005552f6: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005552fc: jmp 0x555486 */ goto L_00555486;
L_00555301:; BB(0x00555301);
    /* 00555301: mov ecx, eax */ r_ecx = r_eax;
    /* 00555303: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00555305: and edx, 0xfffff5ff */ {  u32 a = r_edx; u32 b = 0xfffff5ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0055530b: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0055530e: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 00555315: mov word ptr [ecx + 0x346], dx */ W16((u32)(r_ecx+0x346u), (u16)r_edx);
    /* 0055531c: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 00555323: call dword ptr [eax + 0xd0] */ { u32 t = R32((u32)(r_eax+0xd0u)); r_esp -= 4; W32(r_esp, 0x555329u); call_ind(t); }
    /* 00555329: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055532c: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00555332: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00555335: mov dword ptr [eax + 0x390], edx */ W32((u32)(r_eax+0x390u), r_edx);
    /* 0055533b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055533e: jne 0x55535f */ if (!fZ) goto L_0055535f;
L_00555340:; BB(0x00555340);
    /* 00555340: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00555347: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055534a: je 0x55535f */ if (fZ) goto L_0055535f;
L_0055534c:; BB(0x0055534c);
    /* 0055534c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055534f: mov dword ptr [edx + 0x37c], 1 */ W32((u32)(r_edx+0x37cu), 0x1u);
    /* 00555359: mov dword ptr [edx + 0x388], eax */ W32((u32)(r_edx+0x388u), r_eax);
L_0055535f:; BB(0x0055535f);
    /* 0055535f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555362: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555368: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0055536e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00555371: and eax, 0xf5ffffff */ {  u32 a = r_eax; u32 b = 0xf5ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555376: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00555379: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0055537c: and ecx, 0xfbffffff */ {  u32 a = r_ecx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00555382: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00555385: jmp 0x555486 */ goto L_00555486;
L_0055538a:; BB(0x0055538a);
    /* 0055538a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055538d: jne 0x5553a7 */ if (!fZ) goto L_005553a7;
L_0055538f:; BB(0x0055538f);
    /* 0055538f: mov edx, ecx */ r_edx = r_ecx;
    /* 00555391: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555397: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0055539a: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055539f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 005553a2: jmp 0x555486 */ goto L_00555486;
L_005553a7:; BB(0x005553a7);
    /* 005553a7: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005553ad: jmp 0x555486 */ goto L_00555486;
L_005553b2:; BB(0x005553b2);
    /* 005553b2: call 0x555994 */ r_esp -= 4; W32(r_esp, 0x5553b7u); f_00555994();
    /* 005553b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005553ba: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005553bf: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5553c4u); f_007879b8();
    /* 005553c4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005553c7: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 005553ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005553cd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005553cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005553d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005553d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005553d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005553d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005553d4: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5553d9u); f_008144b0();
    /* 005553d9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005553dc: mov esi, 1 */ r_esi = 0x1u;
    /* 005553e1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005553e3:; BB(0x005553e3);
    /* 005553e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005553e6: movsx edx, byte ptr [edi + eax + 0x3a8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+r_eax+0x3a8u));
    /* 005553ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005553f0: je 0x555441 */ if (fZ) goto L_00555441;
L_005553f2:; BB(0x005553f2);
    /* 005553f2: mov ecx, dword ptr [eax + edi*4 + 0x39c] */ r_ecx = R32((u32)(r_eax+r_edi*4+0x39cu));
    /* 005553f9: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 005553fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005553fe: je 0x555441 */ if (fZ) goto L_00555441;
L_00555400:; BB(0x00555400);
    /* 00555400: call 0x5578ac */ r_esp -= 4; W32(r_esp, 0x555405u); f_005578ac();
    /* 00555405: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555407: jne 0x55540d */ if (!fZ) goto L_0055540d;
L_00555409:; BB(0x00555409);
    /* 00555409: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0055540b: jmp 0x555441 */ goto L_00555441;
L_0055540d:; BB(0x0055540d);
    /* 0055540d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555410: mov ecx, dword ptr [eax + ebx*2 + 0x39c] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x39cu));
    /* 00555417: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0055541b: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00555421: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00555425: mov ecx, edi */ r_ecx = r_edi;
    /* 00555427: mov dword ptr [eax + ebx*2 + 0x39c], 0 */ W32((u32)(r_eax+r_ebx*2+0x39cu), 0x0u);
    /* 00555432: mov ebx, 0x20000 */ r_ebx = 0x20000u;
    /* 00555437: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00555439: not ebx */ r_ebx = ~r_ebx;
    /* 0055543b: and dword ptr [eax + 0x390], ebx */ { u32 ad = (u32)(r_eax+0x390u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00555441:; BB(0x00555441);
    /* 00555441: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00555444: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00555447: jl 0x5553e3 */ if ((fS!=fO)) goto L_005553e3;
L_00555449:; BB(0x00555449);
    /* 00555449: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055544b: jne 0x555455 */ if (!fZ) goto L_00555455;
L_0055544d:; BB(0x0055544d);
    /* 0055544d: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555453: jmp 0x555486 */ goto L_00555486;
L_00555455:; BB(0x00555455);
    /* 00555455: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555458: push 0x12d */ { u32 v = 0x12du; r_esp -= 4; W32(r_esp, v); }
    /* 0055545d: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x555462u); f_007879b8();
    /* 00555462: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555465: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00555467: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555468: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555469: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055546a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055546b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x555470u); f_00814298();
    /* 00555470: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555473: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555476: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 0055547c: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
L_00555486:; BB(0x00555486);
    /* 00555486: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555489: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055548c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055548f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00555497: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x55549cu); f_00772b44();
    /* 0055549c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055549f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5554a4u); f_007b6894();
    /* 005554a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005554a7: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5554acu); f_007b798c();
    /* 005554ac: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005554af: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005554b2: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005554b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005554b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005554bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005554c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005554c2: ret  */ FN_RET(0x00555245); r_esp += 4; return;
L_005554c3:; BB(0x005554c3);
    /* 005554c3: mov eax, ecx */ r_eax = r_ecx;
    /* 005554c5: mov edx, dword ptr [eax + 0x38c] */ r_edx = R32((u32)(r_eax+0x38cu));
    /* 005554cb: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005554ce: mov dword ptr [eax + 0x38c], edx */ W32((u32)(r_eax+0x38cu), r_edx);
    /* 005554d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005554d6: jle 0x5554e0 */ if ((fZ||fS!=fO)) goto L_005554e0;
L_005554d8:; BB(0x005554d8);
    /* 005554d8: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005554de: jmp 0x555486 */ goto L_00555486;
L_005554e0:; BB(0x005554e0);
    /* 005554e0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005554e2:; BB(0x005554e2);
    /* 005554e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005554e5: mov edx, dword ptr [eax + esi*4 + 0x39c] */ r_edx = R32((u32)(r_eax+r_esi*4+0x39cu));
    /* 005554ec: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 005554ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005554f1: je 0x555529 */ if (fZ) goto L_00555529;
L_005554f3:; BB(0x005554f3);
    /* 005554f3: mov ecx, eax */ r_ecx = r_eax;
    /* 005554f5: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5554fau); f_007751b0();
    /* 005554fa: fcomp dword ptr [0x924c64] */ fx_compare(ST(0), R_F32((u32)(0x924c64u))); FPOP();
    /* 00555500: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00555502: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555503: jae 0x555512 */ if (!fC) goto L_00555512;
L_00555505:; BB(0x00555505);
    /* 00555505: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555508: mov byte ptr [esi + eax + 0x3a8], 0 */ W8((u32)(r_esi+r_eax+0x3a8u), 0x0u);
    /* 00555510: jmp 0x555529 */ goto L_00555529;
L_00555512:; BB(0x00555512);
    /* 00555512: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555515: mov byte ptr [esi + eax + 0x3a8], 1 */ W8((u32)(r_esi+r_eax+0x3a8u), 0x1u);
    /* 0055551d: mov ecx, dword ptr [eax + ebx*2 + 0x39c] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x39cu));
    /* 00555524: call 0x557878 */ r_esp -= 4; W32(r_esp, 0x555529u); f_00557878();
L_00555529:; BB(0x00555529);
    /* 00555529: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0055552c: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055552f: jl 0x5554e2 */ if ((fS!=fO)) goto L_005554e2;
L_00555531:; BB(0x00555531);
    /* 00555531: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555534: mov eax, dword ptr [eax + 0x3a0] */ r_eax = R32((u32)(r_eax+0x3a0u));
    /* 0055553a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055553c: je 0x5555b8 */ if (fZ) goto L_005555b8;
L_0055553e:; BB(0x0055553e);
    /* 0055553e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555541: mov ecx, dword ptr [edx + 0x3a4] */ r_ecx = R32((u32)(r_edx+0x3a4u));
    /* 00555547: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555549: je 0x5555b8 */ if (fZ) goto L_005555b8;
L_0055554b:; BB(0x0055554b);
    /* 0055554b: movsx ebx, byte ptr [edx + 0x3a9] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+0x3a9u));
    /* 00555552: movsx ecx, byte ptr [edx + 0x3aa] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x3aau));
    /* 00555559: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0055555b: jne 0x5555b8 */ if (!fZ) goto L_005555b8;
L_0055555d:; BB(0x0055555d);
    /* 0055555d: lea ebx, [edx + 0x300] */ r_ebx = (u32)(r_edx+0x300u);
    /* 00555563: add eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555568: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555569: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055556a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x55556fu); f_0078ea50();
    /* 0055556f: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00555572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555575: mov edx, dword ptr [eax + 0x3a4] */ r_edx = R32((u32)(r_eax+0x3a4u));
    /* 0055557b: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00555581: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555582: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555583: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x555588u); f_0078ea50();
    /* 00555588: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055558b: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0055558e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00555590: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00555592: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555593: jae 0x55559c */ if (!fC) goto L_0055559c;
L_00555595:; BB(0x00555595);
    /* 00555595: mov edx, 1 */ r_edx = 0x1u;
    /* 0055559a: jmp 0x5555a1 */ goto L_005555a1;
L_0055559c:; BB(0x0055559c);
    /* 0055559c: mov edx, 2 */ r_edx = 0x2u;
L_005555a1:; BB(0x005555a1);
    /* 005555a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005555a4: mov byte ptr [edx + eax + 0x3a8], 1 */ W8((u32)(r_edx+r_eax+0x3a8u), 0x1u);
    /* 005555ac: mov ecx, dword ptr [eax + edx*4 + 0x39c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x39cu));
    /* 005555b3: call 0x557878 */ r_esp -= 4; W32(r_esp, 0x5555b8u); f_00557878();
L_005555b8:; BB(0x005555b8);
    /* 005555b8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005555bb: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005555c1: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 005555c7: or eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005555cc: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 005555d2: mov dword ptr [edx + 0x384], 3 */ W32((u32)(r_edx+0x384u), 0x3u);
    /* 005555dc: jmp 0x555486 */ goto L_00555486;
L_005555e1:; BB(0x005555e1);
    /* 005555e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005555e4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5555e9u); f_007aa094();
    /* 005555e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005555ec: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 005555ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005555f0: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 005555f6: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 005555fc: mov ebx, dword ptr [ecx + 0x308] */ r_ebx = R32((u32)(r_ecx+0x308u));
    /* 00555602: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00555605: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 00555608: fadd dword ptr [ecx + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30cu));
    /* 0055560e: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 00555611: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00555614: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 00555617: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0055561a: fadd dword ptr [ecx + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x314u));
    /* 00555620: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00555623: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x555628u); f_00771e14();
    /* 00555628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055562a: je 0x55563c */ if (fZ) goto L_0055563c;
L_0055562c:; BB(0x0055562c);
    /* 0055562c: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555632: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555638: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055563a: jmp 0x555653 */ goto L_00555653;
L_0055563c:; BB(0x0055563c);
    /* 0055563c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055563f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00555641: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x555644u); call_ind(t); }
    /* 00555644: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555647: fld dword ptr [eax + 0x30c] */ FPUSH(R_F32((u32)(r_eax+0x30cu)));
    /* 0055564d: fld dword ptr [eax + 0x314] */ FPUSH(R_F32((u32)(r_eax+0x314u)));
L_00555653:; BB(0x00555653);
    /* 00555653: fld dword ptr [0x924c58] */ FPUSH(R_F32((u32)(0x924c58u)));
    /* 00555659: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0055565b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0055565d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555660: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00555667: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055566a: je 0x555687 */ if (fZ) goto L_00555687;
L_0055566c:; BB(0x0055566c);
    /* 0055566c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055566e: fstp dword ptr [eax + 0x30c] */ W_F32((u32)(r_eax+0x30cu), ST(0)); FPOP();
    /* 00555674: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 0055567a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055567c: fstp dword ptr [eax + 0x314] */ W_F32((u32)(r_eax+0x314u), ST(0)); FPOP();
    /* 00555682: jmp 0x555486 */ goto L_00555486;
L_00555687:; BB(0x00555687);
    /* 00555687: mov ecx, dword ptr [eax + 0x370] */ r_ecx = R32((u32)(r_eax+0x370u));
    /* 0055568d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055568f: je 0x5556a1 */ if (fZ) goto L_005556a1;
L_00555691:; BB(0x00555691);
    /* 00555691: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00555693: fstp dword ptr [eax + 0x30c] */ W_F32((u32)(r_eax+0x30cu), ST(0)); FPOP();
    /* 00555699: fstp dword ptr [eax + 0x314] */ W_F32((u32)(r_eax+0x314u), ST(0)); FPOP();
    /* 0055569f: jmp 0x5556bb */ goto L_005556bb;
L_005556a1:; BB(0x005556a1);
    /* 005556a1: movsx edx, word ptr [eax + 0x394] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x394u));
    /* 005556a8: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005556ab: jl 0x5556cd */ if ((fS!=fO)) goto L_005556cd;
L_005556ad:; BB(0x005556ad);
    /* 005556ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005556af: fstp dword ptr [eax + 0x30c] */ W_F32((u32)(r_eax+0x30cu), ST(0)); FPOP();
    /* 005556b5: fstp dword ptr [eax + 0x314] */ W_F32((u32)(r_eax+0x314u), ST(0)); FPOP();
L_005556bb:; BB(0x005556bb);
    /* 005556bb: mov ecx, eax */ r_ecx = r_eax;
    /* 005556bd: call 0x555974 */ r_esp -= 4; W32(r_esp, 0x5556c2u); f_00555974();
    /* 005556c2: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005556c8: jmp 0x555486 */ goto L_00555486;
L_005556cd:; BB(0x005556cd);
    /* 005556cd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005556cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005556d1: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005556d7: mov ebx, eax */ r_ebx = r_eax;
    /* 005556d9: mov ecx, dword ptr [ecx*4 + 0xa73af4] */ r_ecx = R32((u32)(r_ecx*4+0xa73af4u));
    /* 005556e0: mov eax, 1 */ r_eax = 0x1u;
    /* 005556e5: mov word ptr [ebx + 0x39a], ax */ W16((u32)(r_ebx+0x39au), (u16)r_eax);
    /* 005556ec: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 005556f6: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 00555700: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00555703: mov dword ptr [ebx + 0x384], 2 */ W32((u32)(r_ebx+0x384u), 0x2u);
    /* 0055570d: mov dword ptr [ebx + 0x38c], edx */ W32((u32)(r_ebx+0x38cu), r_edx);
    /* 00555713: jmp 0x555486 */ goto L_00555486;
L_00555718:; BB(0x00555718);
    /* 00555718: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0055571b: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 00555721: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555726: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00555729: and edx, 0xff7fffff */ {  u32 a = r_edx; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0055572f: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 00555735: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 00555738: or edx, 0xa000000 */ {  u32 a = r_edx; u32 b = 0xa000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055573e: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 00555741: mov esi, dword ptr [ecx + 0x30] */ r_esi = R32((u32)(r_ecx+0x30u));
    /* 00555744: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555747: or esi, 0x4000000 */ {  u32 a = r_esi; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0055574d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055574f: mov dword ptr [ecx + 0x30], esi */ W32((u32)(r_ecx+0x30u), r_esi);
    /* 00555752: push 0xc0e00000 */ { u32 v = 0xc0e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00555757: mov edi, 4 */ r_edi = 0x4u;
    /* 0055575c: mov word ptr [ecx + 0xb8], di */ W16((u32)(r_ecx+0xb8u), (u16)r_edi);
    /* 00555763: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x555766u); call_ind(t); }
    /* 00555766: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555769: call 0x555994 */ r_esp -= 4; W32(r_esp, 0x55576eu); f_00555994();
    /* 0055576e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00555770: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00555773:; BB(0x00555773);
    /* 00555773: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555776: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555779: mov ebx, dword ptr [edx + ecx*4 + 0x39c] */ r_ebx = R32((u32)(r_edx+r_ecx*4+0x39cu));
    /* 00555780: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00555783: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555785: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00555788: je 0x5557f0 */ if (fZ) goto L_005557f0;
L_0055578a:; BB(0x0055578a);
    /* 0055578a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055578d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555790: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00555793: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00555796: jl 0x555773 */ if ((fS!=fO)) goto L_00555773;
L_00555798:; BB(0x00555798);
    /* 00555798: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055579b: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 005557a0: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5557a5u); f_007879b8();
    /* 005557a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005557a8: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 005557ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005557ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005557ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005557af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005557b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005557b1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5557b6u); f_00814298();
    /* 005557b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005557b9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005557bc: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 005557c2: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005557c5: or eax, 0xa000000 */ {  u32 a = r_eax; u32 b = 0xa000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005557ca: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005557cd: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005557d0: add word ptr [ebx + 0x394], 1 */ { u32 ad = (u32)(r_ebx+0x394u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005557d8: or ecx, 0x4000000 */ {  u32 a = r_ecx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005557de: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 005557e8: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 005557eb: jmp 0x5555e1 */ goto L_005555e1;
L_005557f0:; BB(0x005557f0);
    /* 005557f0: mov ecx, edx */ r_ecx = r_edx;
    /* 005557f2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5557f7u); f_007751b0();
    /* 005557f7: fcomp dword ptr [0x924c64] */ fx_compare(ST(0), R_F32((u32)(0x924c64u))); FPOP();
    /* 005557fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005557ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555800: jb 0x55578a */ if (fC) goto L_0055578a;
L_00555802:; BB(0x00555802);
    /* 00555802: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00555809: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055580e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x555813u); f_005caba4();
    /* 00555813: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00555816: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555819: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0055581c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055581e: je 0x5558a2 */ if (fZ) goto L_005558a2;
L_00555824:; BB(0x00555824);
    /* 00555824: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0055582b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00555832: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555835: mov edx, dword ptr [eax + 0x370] */ r_edx = R32((u32)(r_eax+0x370u));
    /* 0055583b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055583d: je 0x555847 */ if (fZ) goto L_00555847;
L_0055583f:; BB(0x0055583f);
    /* 0055583f: mov ecx, dword ptr [0xa73b1c] */ r_ecx = R32((u32)(0xa73b1cu));
    /* 00555845: jmp 0x55584d */ goto L_0055584d;
L_00555847:; BB(0x00555847);
    /* 00555847: mov ecx, dword ptr [0xa73b14] */ r_ecx = R32((u32)(0xa73b14u));
L_0055584d:; BB(0x0055584d);
    /* 0055584d: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555850: mov esi, eax */ r_esi = r_eax;
    /* 00555852: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00555855: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555857: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0055585a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055585c: lea ebx, [esi + edx + 0x3dc] */ r_ebx = (u32)(r_esi+r_edx+0x3dcu);
    /* 00555863: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555864: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555865: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555868: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00555869: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055586a: call 0x5572e4 */ r_esp -= 4; W32(r_esp, 0x55586fu); f_005572e4();
    /* 0055586f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00555876:; BB(0x00555876);
    /* 00555876: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555879: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055587c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055587f: mov dword ptr [edx + ecx*2 + 0x39c], eax */ W32((u32)(r_edx+r_ecx*2+0x39cu), r_eax);
    /* 00555886: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055588d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555890: mov eax, 0x20000 */ r_eax = 0x20000u;
    /* 00555895: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00555897: or dword ptr [edx + 0x390], eax */ { u32 ad = (u32)(r_edx+0x390u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0055589d: jmp 0x55578a */ goto L_0055578a;
L_005558a2:; BB(0x005558a2);
    /* 005558a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005558a4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005558a7: jmp 0x555876 */ goto L_00555876;
L_005558a9:; BB(0x005558a9);
    /* 005558a9: call 0x5558bc */ r_esp -= 4; W32(r_esp, 0x5558aeu); f_005558bc();
    /* 005558ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005558b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005558b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005558ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005558bb: ret  */ FN_RET(0x00555245); r_esp += 4; return;
}

void f_00555345(void)
{
    FN_ENTER(0x00555345);
    /* 00555345: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00555347: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055534a: je 0x55535f */ if (fZ) goto L_0055535f;
L_0055534c:; BB(0x0055534c);
    /* 0055534c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055534f: mov dword ptr [edx + 0x37c], 1 */ W32((u32)(r_edx+0x37cu), 0x1u);
    /* 00555359: mov dword ptr [edx + 0x388], eax */ W32((u32)(r_edx+0x388u), r_eax);
L_0055535f:; BB(0x0055535f);
    /* 0055535f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555362: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555368: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0055536e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00555371: and eax, 0xf5ffffff */ {  u32 a = r_eax; u32 b = 0xf5ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555376: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00555379: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0055537c: and ecx, 0xfbffffff */ {  u32 a = r_ecx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00555382: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00555385: jmp 0x555486 */ goto L_00555486;
L_00555486:; BB(0x00555486);
    /* 00555486: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555489: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055548c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055548f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00555497: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x55549cu); f_00772b44();
    /* 0055549c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055549f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5554a4u); f_007b6894();
    /* 005554a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005554a7: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5554acu); f_007b798c();
    /* 005554ac: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005554af: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005554b2: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005554b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005554b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005554bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005554c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005554c2: ret  */ FN_RET(0x00555345); r_esp += 4; return;
}

void f_00555441(void)
{
    FN_ENTER(0x00555441);
    goto L_00555441;
L_005553e3:; BB(0x005553e3);
    /* 005553e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005553e6: movsx edx, byte ptr [edi + eax + 0x3a8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+r_eax+0x3a8u));
    /* 005553ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005553f0: je 0x555441 */ if (fZ) goto L_00555441;
L_005553f2:; BB(0x005553f2);
    /* 005553f2: mov ecx, dword ptr [eax + edi*4 + 0x39c] */ r_ecx = R32((u32)(r_eax+r_edi*4+0x39cu));
    /* 005553f9: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 005553fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005553fe: je 0x555441 */ if (fZ) goto L_00555441;
L_00555400:; BB(0x00555400);
    /* 00555400: call 0x5578ac */ r_esp -= 4; W32(r_esp, 0x555405u); f_005578ac();
    /* 00555405: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555407: jne 0x55540d */ if (!fZ) goto L_0055540d;
L_00555409:; BB(0x00555409);
    /* 00555409: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0055540b: jmp 0x555441 */ goto L_00555441;
L_0055540d:; BB(0x0055540d);
    /* 0055540d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555410: mov ecx, dword ptr [eax + ebx*2 + 0x39c] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x39cu));
    /* 00555417: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0055541b: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00555421: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00555425: mov ecx, edi */ r_ecx = r_edi;
    /* 00555427: mov dword ptr [eax + ebx*2 + 0x39c], 0 */ W32((u32)(r_eax+r_ebx*2+0x39cu), 0x0u);
    /* 00555432: mov ebx, 0x20000 */ r_ebx = 0x20000u;
    /* 00555437: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00555439: not ebx */ r_ebx = ~r_ebx;
    /* 0055543b: and dword ptr [eax + 0x390], ebx */ { u32 ad = (u32)(r_eax+0x390u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00555441:; BB(0x00555441);
    /* 00555441: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00555444: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00555447: jl 0x5553e3 */ if ((fS!=fO)) goto L_005553e3;
L_00555449:; BB(0x00555449);
    /* 00555449: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055544b: jne 0x555455 */ if (!fZ) goto L_00555455;
L_0055544d:; BB(0x0055544d);
    /* 0055544d: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555453: jmp 0x555486 */ goto L_00555486;
L_00555455:; BB(0x00555455);
    /* 00555455: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555458: push 0x12d */ { u32 v = 0x12du; r_esp -= 4; W32(r_esp, v); }
    /* 0055545d: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x555462u); f_007879b8();
    /* 00555462: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555465: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00555467: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555468: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555469: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055546a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055546b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x555470u); f_00814298();
    /* 00555470: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555473: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555476: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 0055547c: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
L_00555486:; BB(0x00555486);
    /* 00555486: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555489: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055548c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055548f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00555497: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x55549cu); f_00772b44();
    /* 0055549c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055549f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5554a4u); f_007b6894();
    /* 005554a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005554a7: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5554acu); f_007b798c();
    /* 005554ac: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005554af: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005554b2: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005554b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005554b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005554bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005554c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005554c2: ret  */ FN_RET(0x00555441); r_esp += 4; return;
}

void f_00555555(void)
{
    FN_ENTER(0x00555555);
    goto L_00555555;
L_00555486:; BB(0x00555486);
    /* 00555486: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555489: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055548c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055548f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00555497: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x55549cu); f_00772b44();
    /* 0055549c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055549f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5554a4u); f_007b6894();
    /* 005554a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005554a7: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5554acu); f_007b798c();
    /* 005554ac: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005554af: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005554b2: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005554b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005554b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005554bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005554c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005554c2: ret  */ FN_RET(0x00555555); r_esp += 4; return;
L_00555555:; BB(0x00555555);
    /* 00555555: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 00555556: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555558: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0055555a: fnstenv [ebp + 0x5b] */ UNSUP(0x0055555a, "fnstenv [ebp + 0x5b]");
    /* 0055555d: lea ebx, [edx + 0x300] */ r_ebx = (u32)(r_edx+0x300u);
    /* 00555563: add eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555568: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555569: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055556a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x55556fu); f_0078ea50();
    /* 0055556f: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00555572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555575: mov edx, dword ptr [eax + 0x3a4] */ r_edx = R32((u32)(r_eax+0x3a4u));
    /* 0055557b: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00555581: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555582: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555583: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x555588u); f_0078ea50();
    /* 00555588: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055558b: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0055558e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00555590: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00555592: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555593: jae 0x55559c */ if (!fC) goto L_0055559c;
L_00555595:; BB(0x00555595);
    /* 00555595: mov edx, 1 */ r_edx = 0x1u;
    /* 0055559a: jmp 0x5555a1 */ goto L_005555a1;
L_0055559c:; BB(0x0055559c);
    /* 0055559c: mov edx, 2 */ r_edx = 0x2u;
L_005555a1:; BB(0x005555a1);
    /* 005555a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005555a4: mov byte ptr [edx + eax + 0x3a8], 1 */ W8((u32)(r_edx+r_eax+0x3a8u), 0x1u);
    /* 005555ac: mov ecx, dword ptr [eax + edx*4 + 0x39c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x39cu));
    /* 005555b3: call 0x557878 */ r_esp -= 4; W32(r_esp, 0x5555b8u); f_00557878();
    /* 005555b8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005555bb: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005555c1: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 005555c7: or eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005555cc: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 005555d2: mov dword ptr [edx + 0x384], 3 */ W32((u32)(r_edx+0x384u), 0x3u);
    /* 005555dc: jmp 0x555486 */ goto L_00555486;
}

void f_00555856(void)
{
    FN_ENTER(0x00555856);
    goto L_00555856;
L_00555486:; BB(0x00555486);
    /* 00555486: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555489: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055548c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055548f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00555497: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x55549cu); f_00772b44();
    /* 0055549c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055549f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5554a4u); f_007b6894();
    /* 005554a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005554a7: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5554acu); f_007b798c();
    /* 005554ac: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005554af: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005554b2: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005554b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005554b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005554bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005554c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005554c2: ret  */ FN_RET(0x00555856); r_esp += 4; return;
L_005555e1:; BB(0x005555e1);
    /* 005555e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005555e4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5555e9u); f_007aa094();
    /* 005555e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005555ec: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 005555ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005555f0: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 005555f6: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 005555fc: mov ebx, dword ptr [ecx + 0x308] */ r_ebx = R32((u32)(r_ecx+0x308u));
    /* 00555602: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00555605: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 00555608: fadd dword ptr [ecx + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30cu));
    /* 0055560e: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 00555611: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00555614: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 00555617: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0055561a: fadd dword ptr [ecx + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x314u));
    /* 00555620: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00555623: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x555628u); f_00771e14();
    /* 00555628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055562a: je 0x55563c */ if (fZ) goto L_0055563c;
L_0055562c:; BB(0x0055562c);
    /* 0055562c: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555632: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 00555638: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055563a: jmp 0x555653 */ goto L_00555653;
L_0055563c:; BB(0x0055563c);
    /* 0055563c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055563f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00555641: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x555644u); call_ind(t); }
    /* 00555644: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555647: fld dword ptr [eax + 0x30c] */ FPUSH(R_F32((u32)(r_eax+0x30cu)));
    /* 0055564d: fld dword ptr [eax + 0x314] */ FPUSH(R_F32((u32)(r_eax+0x314u)));
L_00555653:; BB(0x00555653);
    /* 00555653: fld dword ptr [0x924c58] */ FPUSH(R_F32((u32)(0x924c58u)));
    /* 00555659: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0055565b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0055565d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555660: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00555667: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055566a: je 0x555687 */ if (fZ) goto L_00555687;
L_0055566c:; BB(0x0055566c);
    /* 0055566c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055566e: fstp dword ptr [eax + 0x30c] */ W_F32((u32)(r_eax+0x30cu), ST(0)); FPOP();
    /* 00555674: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 0055567a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055567c: fstp dword ptr [eax + 0x314] */ W_F32((u32)(r_eax+0x314u), ST(0)); FPOP();
    /* 00555682: jmp 0x555486 */ goto L_00555486;
L_00555687:; BB(0x00555687);
    /* 00555687: mov ecx, dword ptr [eax + 0x370] */ r_ecx = R32((u32)(r_eax+0x370u));
    /* 0055568d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055568f: je 0x5556a1 */ if (fZ) goto L_005556a1;
L_00555691:; BB(0x00555691);
    /* 00555691: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00555693: fstp dword ptr [eax + 0x30c] */ W_F32((u32)(r_eax+0x30cu), ST(0)); FPOP();
    /* 00555699: fstp dword ptr [eax + 0x314] */ W_F32((u32)(r_eax+0x314u), ST(0)); FPOP();
    /* 0055569f: jmp 0x5556bb */ goto L_005556bb;
L_005556a1:; BB(0x005556a1);
    /* 005556a1: movsx edx, word ptr [eax + 0x394] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x394u));
    /* 005556a8: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005556ab: jl 0x5556cd */ if ((fS!=fO)) goto L_005556cd;
L_005556ad:; BB(0x005556ad);
    /* 005556ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005556af: fstp dword ptr [eax + 0x30c] */ W_F32((u32)(r_eax+0x30cu), ST(0)); FPOP();
    /* 005556b5: fstp dword ptr [eax + 0x314] */ W_F32((u32)(r_eax+0x314u), ST(0)); FPOP();
L_005556bb:; BB(0x005556bb);
    /* 005556bb: mov ecx, eax */ r_ecx = r_eax;
    /* 005556bd: call 0x555974 */ r_esp -= 4; W32(r_esp, 0x5556c2u); f_00555974();
    /* 005556c2: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005556c8: jmp 0x555486 */ goto L_00555486;
L_005556cd:; BB(0x005556cd);
    /* 005556cd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005556cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005556d1: fld dword ptr [0x924c60] */ FPUSH(R_F32((u32)(0x924c60u)));
    /* 005556d7: mov ebx, eax */ r_ebx = r_eax;
    /* 005556d9: mov ecx, dword ptr [ecx*4 + 0xa73af4] */ r_ecx = R32((u32)(r_ecx*4+0xa73af4u));
    /* 005556e0: mov eax, 1 */ r_eax = 0x1u;
    /* 005556e5: mov word ptr [ebx + 0x39a], ax */ W16((u32)(r_ebx+0x39au), (u16)r_eax);
    /* 005556ec: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 005556f6: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 00555700: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00555703: mov dword ptr [ebx + 0x384], 2 */ W32((u32)(r_ebx+0x384u), 0x2u);
    /* 0055570d: mov dword ptr [ebx + 0x38c], edx */ W32((u32)(r_ebx+0x38cu), r_edx);
    /* 00555713: jmp 0x555486 */ goto L_00555486;
L_00555773:; BB(0x00555773);
    /* 00555773: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555776: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555779: mov ebx, dword ptr [edx + ecx*4 + 0x39c] */ r_ebx = R32((u32)(r_edx+r_ecx*4+0x39cu));
    /* 00555780: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00555783: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555785: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00555788: je 0x5557f0 */ if (fZ) goto L_005557f0;
L_0055578a:; BB(0x0055578a);
    /* 0055578a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055578d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555790: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00555793: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00555796: jl 0x555773 */ if ((fS!=fO)) goto L_00555773;
L_00555798:; BB(0x00555798);
    /* 00555798: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055579b: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 005557a0: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5557a5u); f_007879b8();
    /* 005557a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005557a8: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 005557ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005557ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005557ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005557af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005557b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005557b1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5557b6u); f_00814298();
    /* 005557b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005557b9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005557bc: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 005557c2: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005557c5: or eax, 0xa000000 */ {  u32 a = r_eax; u32 b = 0xa000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005557ca: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005557cd: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005557d0: add word ptr [ebx + 0x394], 1 */ { u32 ad = (u32)(r_ebx+0x394u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005557d8: or ecx, 0x4000000 */ {  u32 a = r_ecx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005557de: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 005557e8: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 005557eb: jmp 0x5555e1 */ goto L_005555e1;
L_005557f0:; BB(0x005557f0);
    /* 005557f0: mov ecx, edx */ r_ecx = r_edx;
    /* 005557f2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5557f7u); f_007751b0();
    /* 005557f7: fcomp dword ptr [0x924c64] */ fx_compare(ST(0), R_F32((u32)(0x924c64u))); FPOP();
    /* 005557fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005557ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555800: jb 0x55578a */ if (fC) goto L_0055578a;
L_00555802:; BB(0x00555802);
    /* 00555802: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00555809: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055580e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x555813u); f_005caba4();
    /* 00555813: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00555816: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555819: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0055581c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055581e: je 0x5558a2 */ if (fZ) goto L_005558a2;
L_00555824:; BB(0x00555824);
    /* 00555824: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0055582b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00555832: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555835: mov edx, dword ptr [eax + 0x370] */ r_edx = R32((u32)(r_eax+0x370u));
    /* 0055583b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055583d: je 0x555847 */ if (fZ) goto L_00555847;
L_0055583f:; BB(0x0055583f);
    /* 0055583f: mov ecx, dword ptr [0xa73b1c] */ r_ecx = R32((u32)(0xa73b1cu));
    /* 00555845: jmp 0x55584d */ goto L_0055584d;
L_00555847:; BB(0x00555847);
    /* 00555847: mov ecx, dword ptr [0xa73b14] */ r_ecx = R32((u32)(0xa73b14u));
L_0055584d:; BB(0x0055584d);
    /* 0055584d: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555850: mov esi, eax */ r_esi = r_eax;
    /* 00555852: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00555855: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00555856:; BB(0x00555856);
    /* 00555856: ror byte ptr [ebp - 0x2ffcffec], 0x8d */ { u32 ad = (u32)(r_ebp+0xd0030014u); u32 c = (13u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r); fC = (r >> 7) & 1; fO = ((r >> 7) ^ (r >> 6)) & 1; } }
    /* 00555857: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0055585a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055585c: lea ebx, [esi + edx + 0x3dc] */ r_ebx = (u32)(r_esi+r_edx+0x3dcu);
    /* 0055585d: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 0055585e: push ss */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0055585f: fadd qword ptr [ebx] */ ST(0) = ST(0) + R_F64((u32)(r_ebx));
    /* 00555861: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00555863: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555864: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555865: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555868: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00555869: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055586a: call 0x5572e4 */ r_esp -= 4; W32(r_esp, 0x55586fu); f_005572e4();
    /* 0055586f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00555876:; BB(0x00555876);
    /* 00555876: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555879: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055587c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055587f: mov dword ptr [edx + ecx*2 + 0x39c], eax */ W32((u32)(r_edx+r_ecx*2+0x39cu), r_eax);
    /* 00555886: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055588d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555890: mov eax, 0x20000 */ r_eax = 0x20000u;
    /* 00555895: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00555897: or dword ptr [edx + 0x390], eax */ { u32 ad = (u32)(r_edx+0x390u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0055589d: jmp 0x55578a */ goto L_0055578a;
L_005558a2:; BB(0x005558a2);
    /* 005558a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005558a4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005558a7: jmp 0x555876 */ goto L_00555876;
}

void f_005558bc(void) /* sub_5558BC */
{
    FN_ENTER(0x005558bc);
    /* 005558bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005558bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005558be: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005558c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005558c2: call 0x556ed0 */ r_esp -= 4; W32(r_esp, 0x5558c7u); f_00556ed0();
    /* 005558c7: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 005558ce: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005558d1: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 005558d8: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005558db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005558dd: jle 0x5558e2 */ if ((fZ||fS!=fO)) goto L_005558e2;
L_005558df:; BB(0x005558df);
    /* 005558df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005558e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005558e1: ret  */ FN_RET(0x005558bc); r_esp += 4; return;
L_005558e2:; BB(0x005558e2);
    /* 005558e2: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 005558e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005558e9: je 0x555902 */ if (fZ) goto L_00555902;
L_005558eb:; BB(0x005558eb);
    /* 005558eb: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 005558ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005558f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005558f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005558f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005558f3: push 0x156 */ { u32 v = 0x156u; r_esp -= 4; W32(r_esp, v); }
    /* 005558f8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5558fdu); f_00814298();
    /* 005558fd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555900: jmp 0x55591f */ goto L_0055591f;
L_00555902:; BB(0x00555902);
    /* 00555902: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 00555907: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00555909: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x55590eu); f_007879b8();
    /* 0055590e: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 00555911: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00555913: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555914: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555915: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555917: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x55591cu); f_00814298();
    /* 0055591c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055591f:; BB(0x0055591f);
    /* 0055591f: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555922: lea ebp, [ebx + 0x300] */ r_ebp = (u32)(r_ebx+0x300u);
    /* 00555928: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555929: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055592c: push 0x9bdd88 */ { u32 v = 0x9bdd88u; r_esp -= 4; W32(r_esp, v); }
    /* 00555931: push dword ptr [0xa73b20] */ { u32 v = R32((u32)(0xa73b20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555937: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x55593cu); f_00578aa0();
    /* 0055593c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055593f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00555941: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x555946u); f_00787534();
    /* 00555946: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555947: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x55594cu); f_008113e4();
    /* 0055594c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055594d: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x555952u); f_005787d0();
    /* 00555952: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00555955: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00555959: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055595e: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00555961: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00555967: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 0055596b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055596e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055596f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555970: ret  */ FN_RET(0x005558bc); r_esp += 4; return;
}

void f_00555953(void)
{
    FN_ENTER(0x00555953);
    /* 00555953: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00555954: xor byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00555956: mov bh, 0x53 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x53u) & 0xffu) << 8);
    /* 00555958: or byte ptr [0x800], cl */ { u32 ad = (u32)(0x800u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0055595e: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00555961: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00555967: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 0055596b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055596e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055596f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555970: ret  */ FN_RET(0x00555953); r_esp += 4; return;
}

void f_00555974(void) /* sub_555974 */
{
    FN_ENTER(0x00555974);
    /* 00555974: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0055597a: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055597f: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00555982: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00555988: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055598e: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00555991: ret  */ FN_RET(0x00555974); r_esp += 4; return;
}

void f_00555994(void) /* sub_555994 */
{
    FN_ENTER(0x00555994);
    /* 00555994: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00555995: mov esi, ecx */ r_esi = r_ecx;
    /* 00555997: mov ecx, esi */ r_ecx = r_esi;
    /* 00555999: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x55599eu); f_0052cac0();
    /* 0055599e: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005559a0: lea eax, [esi + 0x3dc] */ r_eax = (u32)(r_esi+0x3dcu);
    /* 005559a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005559a7: mov ecx, esi */ r_ecx = r_esi;
    /* 005559a9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005559ab: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5559b1u); call_ind(t); }
    /* 005559b1: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005559b3: lea eax, [esi + 0x3e8] */ r_eax = (u32)(r_esi+0x3e8u);
    /* 005559b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005559ba: mov ecx, esi */ r_ecx = r_esi;
    /* 005559bc: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005559be: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5559c4u); call_ind(t); }
    /* 005559c4: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005559c6: lea eax, [esi + 0x3f4] */ r_eax = (u32)(r_esi+0x3f4u);
    /* 005559cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005559cd: mov ecx, esi */ r_ecx = r_esi;
    /* 005559cf: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 005559d1: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5559d7u); call_ind(t); }
    /* 005559d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005559d8: ret  */ FN_RET(0x00555994); r_esp += 4; return;
}

void f_005559dc(void) /* sub_5559DC */
{
    FN_ENTER(0x005559dc);
    /* 005559dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005559dd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005559e0: mov esi, ecx */ r_esi = r_ecx;
    /* 005559e2: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 005559e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005559ea: je 0x555c3e */ if (fZ) goto L_00555c3e;
L_005559f0:; BB(0x005559f0);
    /* 005559f0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005559f3: je 0x555b26 */ if (fZ) goto L_00555b26;
L_005559f9:; BB(0x005559f9);
    /* 005559f9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005559fc: je 0x555a95 */ if (fZ) goto L_00555a95;
L_00555a02:; BB(0x00555a02);
    /* 00555a02: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555a05: jne 0x555a29 */ if (!fZ) goto L_00555a29;
L_00555a07:; BB(0x00555a07);
    /* 00555a07: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 00555a0d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555a10: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 00555a16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00555a18: jle 0x555b14 */ if ((fZ||fS!=fO)) goto L_00555b14;
L_00555a1e:; BB(0x00555a1e);
    /* 00555a1e: fld dword ptr [0x924c50] */ FPUSH(R_F32((u32)(0x924c50u)));
    /* 00555a24: jmp 0x555aec */ goto L_00555aec;
L_00555a29:; BB(0x00555a29);
    /* 00555a29: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555a2c: jne 0x555a8d */ if (!fZ) goto L_00555a8d;
L_00555a2e:; BB(0x00555a2e);
    /* 00555a2e: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00555a34: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00555a37: and eax, 0xf5ffffff */ {  u32 a = r_eax; u32 b = 0xf5ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555a3c: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00555a3f: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00555a42: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00555a48: and eax, 0xfbfffdff */ {  u32 a = r_eax; u32 b = 0xfbfffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555a4d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00555a50: movzx eax, word ptr [esi + 0x334] */ r_eax = (u32)R16((u32)(r_esi+0x334u));
    /* 00555a57: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00555a5a: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 00555a60: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 00555a67: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00555a6a: jne 0x555a88 */ if (!fZ) goto L_00555a88;
L_00555a6c:; BB(0x00555a6c);
    /* 00555a6c: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00555a73: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555a76: je 0x555a88 */ if (fZ) goto L_00555a88;
L_00555a78:; BB(0x00555a78);
    /* 00555a78: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 00555a82: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
L_00555a88:; BB(0x00555a88);
    /* 00555a88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00555a8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00555a8c: ret  */ FN_RET(0x005559dc); r_esp += 4; return;
L_00555a8d:; BB(0x00555a8d);
    /* 00555a8d: fld dword ptr [0x924c50] */ FPUSH(R_F32((u32)(0x924c50u)));
    /* 00555a93: jmp 0x555aec */ goto L_00555aec;
L_00555a95:; BB(0x00555a95);
    /* 00555a95: mov ecx, esi */ r_ecx = r_esi;
    /* 00555a97: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x555a9cu); f_007aa094();
    /* 00555a9c: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00555aa2: fcomp dword ptr [0x924c54] */ fx_compare(ST(0), R_F32((u32)(0x924c54u))); FPOP();
    /* 00555aa8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00555aaa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555aab: jb 0x555ac9 */ if (fC) goto L_00555ac9;
L_00555aad:; BB(0x00555aad);
    /* 00555aad: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00555ab3: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00555ab6: and eax, 0xf5ffffff */ {  u32 a = r_eax; u32 b = 0xf5ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555abb: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00555abe: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00555ac1: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555ac6: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_00555ac9:; BB(0x00555ac9);
    /* 00555ac9: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00555acf: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555ad2: je 0x555ae6 */ if (fZ) goto L_00555ae6;
L_00555ad4:; BB(0x00555ad4);
    /* 00555ad4: fld dword ptr [0x924c50] */ FPUSH(R_F32((u32)(0x924c50u)));
    /* 00555ada: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 00555ae4: jmp 0x555aec */ goto L_00555aec;
L_00555ae6:; BB(0x00555ae6);
    /* 00555ae6: fld dword ptr [0x924c50] */ FPUSH(R_F32((u32)(0x924c50u)));
L_00555aec:; BB(0x00555aec);
    /* 00555aec: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555aef: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00555af2: mov ecx, esi */ r_ecx = r_esi;
    /* 00555af4: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00555afc: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x555b01u); f_00772b44();
    /* 00555b01: mov ecx, esi */ r_ecx = r_esi;
    /* 00555b03: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x555b08u); f_007b6894();
    /* 00555b08: mov ecx, esi */ r_ecx = r_esi;
    /* 00555b0a: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x555b0fu); f_007b798c();
    /* 00555b0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00555b12: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00555b13: ret  */ FN_RET(0x005559dc); r_esp += 4; return;
L_00555b14:; BB(0x00555b14);
    /* 00555b14: fld dword ptr [0x924c50] */ FPUSH(R_F32((u32)(0x924c50u)));
    /* 00555b1a: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 00555b24: jmp 0x555aec */ goto L_00555aec;
L_00555b26:; BB(0x00555b26);
    /* 00555b26: mov ecx, esi */ r_ecx = r_esi;
    /* 00555b28: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x555b2du); f_007aa094();
    /* 00555b2d: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 00555b33: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555b36: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 00555b3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00555b3e: jle 0x555c1d */ if ((fZ||fS!=fO)) goto L_00555c1d;
L_00555b44:; BB(0x00555b44);
    /* 00555b44: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00555b4a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00555b50: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00555b53: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00555b56: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 00555b5c: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00555b62: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00555b65: mov ecx, esi */ r_ecx = r_esi;
    /* 00555b67: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00555b6b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00555b6f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00555b73: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 00555b79: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00555b7d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00555b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555b81: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x555b86u); f_00771e14();
    /* 00555b86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555b88: je 0x555ba0 */ if (fZ) goto L_00555ba0;
L_00555b8a:; BB(0x00555b8a);
    /* 00555b8a: fld dword ptr [0x924c50] */ FPUSH(R_F32((u32)(0x924c50u)));
    /* 00555b90: fld dword ptr [0x924c50] */ FPUSH(R_F32((u32)(0x924c50u)));
    /* 00555b96: fld dword ptr [0x924c50] */ FPUSH(R_F32((u32)(0x924c50u)));
    /* 00555b9c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00555b9e: jmp 0x555bb9 */ goto L_00555bb9;
L_00555ba0:; BB(0x00555ba0);
    /* 00555ba0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00555ba2: mov ecx, esi */ r_ecx = r_esi;
    /* 00555ba4: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x555ba7u); call_ind(t); }
    /* 00555ba7: fld dword ptr [0x924c50] */ FPUSH(R_F32((u32)(0x924c50u)));
    /* 00555bad: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 00555bb3: fld dword ptr [esi + 0x314] */ FPUSH(R_F32((u32)(r_esi+0x314u)));
L_00555bb9:; BB(0x00555bb9);
    /* 00555bb9: fld dword ptr [0x924c58] */ FPUSH(R_F32((u32)(0x924c58u)));
    /* 00555bbf: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00555bc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00555bc3: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 00555bca: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555bcd: je 0x555be2 */ if (fZ) goto L_00555be2;
L_00555bcf:; BB(0x00555bcf);
    /* 00555bcf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00555bd1: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 00555bd7: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
    /* 00555bdd: jmp 0x555aec */ goto L_00555aec;
L_00555be2:; BB(0x00555be2);
    /* 00555be2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00555be4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00555be6: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00555bec: fst dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0));
    /* 00555bf2: fst dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0));
    /* 00555bf8: mov dword ptr [esi + 0x384], 3 */ W32((u32)(r_esi+0x384u), 0x3u);
    /* 00555c02: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00555c05: or eax, 0xa000000 */ {  u32 a = r_eax; u32 b = 0xa000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00555c0a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00555c0d: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00555c10: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00555c15: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00555c18: jmp 0x555aec */ goto L_00555aec;
L_00555c1d:; BB(0x00555c1d);
    /* 00555c1d: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00555c23: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00555c26: or eax, 0xa000000 */ {  u32 a = r_eax; u32 b = 0xa000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00555c2b: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00555c2e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00555c31: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00555c36: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00555c39: jmp 0x555b44 */ goto L_00555b44;
L_00555c3e:; BB(0x00555c3e);
    /* 00555c3e: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x555c43u); f_00520e6c();
    /* 00555c43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555c45: je 0x555c65 */ if (fZ) goto L_00555c65;
L_00555c47:; BB(0x00555c47);
    /* 00555c47: mov ecx, esi */ r_ecx = r_esi;
    /* 00555c49: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x555c4eu); f_007751b0();
    /* 00555c4e: fcomp dword ptr [0x924c48] */ fx_compare(ST(0), R_F32((u32)(0x924c48u))); FPOP();
    /* 00555c54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00555c56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555c57: jbe 0x555c65 */ if ((fC||fZ)) goto L_00555c65;
L_00555c59:; BB(0x00555c59);
    /* 00555c59: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 00555c63: jmp 0x555cbf */ goto L_00555cbf;
L_00555c65:; BB(0x00555c65);
    /* 00555c65: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555c68: push 0xc0e00000 */ { u32 v = 0xc0e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00555c6d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00555c6f: mov eax, 3 */ r_eax = 0x3u;
    /* 00555c74: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00555c7b: mov ecx, esi */ r_ecx = r_esi;
    /* 00555c7d: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x555c80u); call_ind(t); }
    /* 00555c80: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 00555c8a: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 00555c8f: mov ecx, esi */ r_ecx = r_esi;
    /* 00555c91: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x555c96u); f_007879b8();
    /* 00555c96: mov ecx, eax */ r_ecx = r_eax;
    /* 00555c98: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00555c9b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00555c9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555c9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555c9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555ca0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555ca1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x555ca6u); f_00814298();
    /* 00555ca6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555ca9: mov eax, dword ptr [esi + 0x370] */ r_eax = R32((u32)(r_esi+0x370u));
    /* 00555caf: mov edx, dword ptr [eax*4 + 0xa73af4] */ r_edx = R32((u32)(r_eax*4+0xa73af4u));
    /* 00555cb6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00555cb9: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
L_00555cbf:; BB(0x00555cbf);
    /* 00555cbf: fld dword ptr [0x924c50] */ FPUSH(R_F32((u32)(0x924c50u)));
    /* 00555cc5: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00555cc8: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555ccd: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00555cd0: jmp 0x555aec */ goto L_00555aec;
}

void f_00555cd8(void) /* sub_555CD8 */
{
    FN_ENTER(0x00555cd8);
    /* 00555cd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00555cd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00555cda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555cdb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555cdc: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00555cdf: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00555ce1: movzx eax, byte ptr [0xa73a34] */ r_eax = (u32)R8((u32)(0xa73a34u));
    /* 00555ce8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00555cea: jne 0x555d32 */ if (!fZ) goto L_00555d32;
L_00555cec:; BB(0x00555cec);
    /* 00555cec: mov dword ptr [0xa73ab0], 0x41a00000 */ W32((u32)(0xa73ab0u), 0x41a00000u);
    /* 00555cf6: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00555cfb: mov byte ptr [0xa73a34], al */ W8((u32)(0xa73a34u), (u8)r_eax);
    /* 00555d00: mov dword ptr [0xa73ab4], 0x42080000 */ W32((u32)(0xa73ab4u), 0x42080000u);
    /* 00555d0a: mov dword ptr [0xa73ab8], 0x41e00000 */ W32((u32)(0xa73ab8u), 0x41e00000u);
    /* 00555d14: mov dword ptr [0xa73abc], 0x42580000 */ W32((u32)(0xa73abcu), 0x42580000u);
    /* 00555d1e: mov dword ptr [0xa73ac0], 0x3f333333 */ W32((u32)(0xa73ac0u), 0x3f333333u);
    /* 00555d28: mov dword ptr [0xa73ac4], 0x3f4ccccd */ W32((u32)(0xa73ac4u), 0x3f4ccccdu);
L_00555d32:; BB(0x00555d32);
    /* 00555d32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555d34: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x555d39u); f_00770738();
    /* 00555d39: mov esi, eax */ r_esi = r_eax;
    /* 00555d3b: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 00555d41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555d43: je 0x555d66 */ if (fZ) goto L_00555d66;
L_00555d45:; BB(0x00555d45);
    /* 00555d45: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555d48: je 0x555da5 */ if (fZ) goto L_00555da5;
L_00555d4a:; BB(0x00555d4a);
    /* 00555d4a: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555d4d: jne 0x555f2e */ if (!fZ) goto L_00555f2e;
L_00555d53:; BB(0x00555d53);
    /* 00555d53: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00555d56: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00555d5b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00555d5e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00555d61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00555d62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555d63: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00555d64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00555d65: ret  */ FN_RET(0x00555cd8); r_esp += 4; return;
L_00555d66:; BB(0x00555d66);
    /* 00555d66: movsx edx, word ptr [ebp + 0x39a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x39au));
    /* 00555d6d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555d6f: je 0x555d78 */ if (fZ) goto L_00555d78;
L_00555d71:; BB(0x00555d71);
    /* 00555d71: mov edx, 0xc */ r_edx = 0xcu;
    /* 00555d76: jmp 0x555d7d */ goto L_00555d7d;
L_00555d78:; BB(0x00555d78);
    /* 00555d78: mov edx, 2 */ r_edx = 0x2u;
L_00555d7d:; BB(0x00555d7d);
    /* 00555d7d: mov ecx, dword ptr [ebp + 0x3b4] */ r_ecx = R32((u32)(r_ebp+0x3b4u));
    /* 00555d83: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00555d8a: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00555d8d: or edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00555d93: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00555d96: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x555d9bu); f_007a7d3c();
    /* 00555d9b: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
L_00555da5:; BB(0x00555da5);
    /* 00555da5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555da7: je 0x555ddd */ if (fZ) goto L_00555ddd;
L_00555da9:; BB(0x00555da9);
    /* 00555da9: mov edx, dword ptr [esi + 0x300] */ r_edx = R32((u32)(r_esi+0x300u));
    /* 00555daf: mov dword ptr [ebp + 0x2a4], edx */ W32((u32)(r_ebp+0x2a4u), r_edx);
    /* 00555db5: mov ebx, dword ptr [esi + 0x304] */ r_ebx = R32((u32)(r_esi+0x304u));
    /* 00555dbb: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 00555dc1: mov dword ptr [ebp + 0x2a8], ebx */ W32((u32)(r_ebp+0x2a8u), r_ebx);
    /* 00555dc7: mov edi, dword ptr [esi + 0x308] */ r_edi = R32((u32)(r_esi+0x308u));
    /* 00555dcd: mov dword ptr [ebp + 0x2ac], edi */ W32((u32)(r_ebp+0x2acu), r_edi);
    /* 00555dd3: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555dd6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555dd8: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x555dddu); f_00772358();
L_00555ddd:; BB(0x00555ddd);
    /* 00555ddd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555ddf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x555de4u); f_007aa094();
    /* 00555de4: movzx edx, word ptr [ebp + 0x39a] */ r_edx = (u32)R16((u32)(r_ebp+0x39au));
    /* 00555deb: push dword ptr [edx*4 + 0xa73ab0] */ { u32 v = R32((u32)(r_edx*4+0xa73ab0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555df2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555df4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x555df9u); f_007aaa30();
    /* 00555df9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555dfb: je 0x555e10 */ if (fZ) goto L_00555e10;
L_00555dfd:; BB(0x00555dfd);
    /* 00555dfd: mov edx, dword ptr [ebp + 0x3a4] */ r_edx = R32((u32)(r_ebp+0x3a4u));
    /* 00555e03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555e05: je 0x555f36 */ if (fZ) goto L_00555f36;
L_00555e0b:; BB(0x00555e0b);
    /* 00555e0b: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00555e0e: jmp 0x555e3f */ goto L_00555e3f;
L_00555e10:; BB(0x00555e10);
    /* 00555e10: movsx edx, word ptr [ebp + 0x39a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x39au));
    /* 00555e17: push dword ptr [edx*4 + 0xa73ab8] */ { u32 v = R32((u32)(r_edx*4+0xa73ab8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555e1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555e20: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x555e25u); f_007aaa30();
    /* 00555e25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555e27: je 0x555e3c */ if (fZ) goto L_00555e3c;
L_00555e29:; BB(0x00555e29);
    /* 00555e29: mov edx, dword ptr [ebp + 0x3a0] */ r_edx = R32((u32)(r_ebp+0x3a0u));
    /* 00555e2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555e31: je 0x555f36 */ if (fZ) goto L_00555f36;
L_00555e37:; BB(0x00555e37);
    /* 00555e37: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00555e3a: jmp 0x555e3f */ goto L_00555e3f;
L_00555e3c:; BB(0x00555e3c);
    /* 00555e3c: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
L_00555e3f:; BB(0x00555e3f);
    /* 00555e3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555e41: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x555e46u); f_007b6894();
    /* 00555e46: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555e48: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x555e4du); f_007b798c();
    /* 00555e4d: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555e53: movzx eax, word ptr [ebp + 0x39a] */ r_eax = (u32)R16((u32)(r_ebp+0x39au));
    /* 00555e5a: mov ecx, dword ptr [eax*4 + 0xa73ac8] */ r_ecx = R32((u32)(r_eax*4+0xa73ac8u));
    /* 00555e61: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x555e66u); f_00579de0();
    /* 00555e66: mov edi, eax */ r_edi = r_eax;
    /* 00555e68: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555e6e: movzx esi, word ptr [ebp + 0x39a] */ r_esi = (u32)R16((u32)(r_ebp+0x39au));
    /* 00555e75: mov ecx, dword ptr [esi*4 + 0xa73ad0] */ r_ecx = R32((u32)(r_esi*4+0xa73ad0u));
    /* 00555e7c: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x555e81u); f_00579de0();
    /* 00555e81: mov esi, eax */ r_esi = r_eax;
    /* 00555e83: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x555e88u); f_0082d7b0();
    /* 00555e88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00555e8a: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x555e8fu); f_00830cd8();
    /* 00555e8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00555e91: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x555e96u); f_0082d838();
    /* 00555e96: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00555e99: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00555e9b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x555ea0u); f_0082d8bc();
    /* 00555ea0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555ea2: je 0x555ec9 */ if (fZ) goto L_00555ec9;
L_00555ea4:; BB(0x00555ea4);
    /* 00555ea4: lea ebx, [esp + 8] */ r_ebx = (u32)(r_esp+0x8u);
    /* 00555ea8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00555eaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555eab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00555ead: mov edx, edi */ r_edx = r_edi;
    /* 00555eaf: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x555eb4u); f_0082f940();
    /* 00555eb4: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 00555eb8: lea ebx, [esp + 0x14] */ r_ebx = (u32)(r_esp+0x14u);
    /* 00555ebc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555ebd: mov ecx, dword ptr [ebp + 0x3b4] */ r_ecx = R32((u32)(r_ebp+0x3b4u));
    /* 00555ec3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00555ec5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00555ec6: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x555ec9u); call_ind(t); }
L_00555ec9:; BB(0x00555ec9);
    /* 00555ec9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555ecb: je 0x555eee */ if (fZ) goto L_00555eee;
L_00555ecd:; BB(0x00555ecd);
    /* 00555ecd: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 00555ed1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00555ed3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555ed4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00555ed6: mov edx, esi */ r_edx = r_esi;
    /* 00555ed8: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x555eddu); f_0082f940();
    /* 00555edd: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00555ee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555ee2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555ee3: mov ecx, dword ptr [ebp + 0x3b4] */ r_ecx = R32((u32)(r_ebp+0x3b4u));
    /* 00555ee9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00555eeb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x555eeeu); call_ind(t); }
L_00555eee:; BB(0x00555eee);
    /* 00555eee: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x555ef3u); f_0082da80();
    /* 00555ef3: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 00555ef9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555efc: je 0x555f2e */ if (fZ) goto L_00555f2e;
L_00555efe:; BB(0x00555efe);
    /* 00555efe: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00555f04: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00555f06: jne 0x555f24 */ if (!fZ) goto L_00555f24;
L_00555f08:; BB(0x00555f08);
    /* 00555f08: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00555f0f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555f12: je 0x555f24 */ if (fZ) goto L_00555f24;
L_00555f14:; BB(0x00555f14);
    /* 00555f14: mov dword ptr [ebp + 0x37c], 1 */ W32((u32)(r_ebp+0x37cu), 0x1u);
    /* 00555f1e: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
L_00555f24:; BB(0x00555f24);
    /* 00555f24: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
L_00555f2e:; BB(0x00555f2e);
    /* 00555f2e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00555f31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00555f32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555f33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00555f34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00555f35: ret  */ FN_RET(0x00555cd8); r_esp += 4; return;
L_00555f36:; BB(0x00555f36);
    /* 00555f36: push 0x128 */ { u32 v = 0x128u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f3b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555f3d: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x555f42u); f_007879b8();
    /* 00555f42: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00555f45: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00555f47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555f48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555f49: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555f4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555f4b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x555f50u); f_00814298();
    /* 00555f50: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555f53: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555f55: je 0x555e3f */ if (fZ) goto L_00555e3f;
L_00555f5b:; BB(0x00555f5b);
    /* 00555f5b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555f61: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00555f63: mov ecx, esi */ r_ecx = r_esi;
    /* 00555f65: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x555f68u); call_ind(t); }
    /* 00555f68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555f6a: je 0x555e3f */ if (fZ) goto L_00555e3f;
L_00555f70:; BB(0x00555f70);
    /* 00555f70: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555f76: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00555f78: mov ecx, esi */ r_ecx = r_esi;
    /* 00555f7a: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x555f7du); call_ind(t); }
    /* 00555f7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00555f7f: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555f85: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00555f87: mov ecx, esi */ r_ecx = r_esi;
    /* 00555f89: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x555f8cu); call_ind(t); }
    /* 00555f8c: mov edx, dword ptr [ebp + 0x370] */ r_edx = R32((u32)(r_ebp+0x370u));
    /* 00555f92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555f94: je 0x555e3f */ if (fZ) goto L_00555e3f;
L_00555f9a:; BB(0x00555f9a);
    /* 00555f9a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555f9c: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x555fa1u); f_007751b0();
    /* 00555fa1: fcomp dword ptr [0x924c24] */ fx_compare(ST(0), R_F32((u32)(0x924c24u))); FPOP();
    /* 00555fa7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00555fa9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555faa: ja 0x555e3f */ if ((!fC&&!fZ)) goto L_00555e3f;
L_00555fb0:; BB(0x00555fb0);
    /* 00555fb0: mov edi, dword ptr [0x924b94] */ r_edi = R32((u32)(0x924b94u));
    /* 00555fb6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00555fb8: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00555fbb: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00555fc0: mov ecx, esi */ r_ecx = r_esi;
    /* 00555fc2: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00555fca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555fcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555fcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555fce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555fd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00555fd1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555fd2: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x555fd5u); call_ind(t); }
    /* 00555fd5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00555fd7: jmp 0x555e3f */ goto L_00555e3f;
}

void f_00555f44(void)
{
    FN_ENTER(0x00555f44);
    goto L_00555f44;
L_00555e3f:; BB(0x00555e3f);
    /* 00555e3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555e41: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x555e46u); f_007b6894();
    /* 00555e46: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555e48: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x555e4du); f_007b798c();
    /* 00555e4d: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555e53: movzx eax, word ptr [ebp + 0x39a] */ r_eax = (u32)R16((u32)(r_ebp+0x39au));
    /* 00555e5a: mov ecx, dword ptr [eax*4 + 0xa73ac8] */ r_ecx = R32((u32)(r_eax*4+0xa73ac8u));
    /* 00555e61: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x555e66u); f_00579de0();
    /* 00555e66: mov edi, eax */ r_edi = r_eax;
    /* 00555e68: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00555e6e: movzx esi, word ptr [ebp + 0x39a] */ r_esi = (u32)R16((u32)(r_ebp+0x39au));
    /* 00555e75: mov ecx, dword ptr [esi*4 + 0xa73ad0] */ r_ecx = R32((u32)(r_esi*4+0xa73ad0u));
    /* 00555e7c: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x555e81u); f_00579de0();
    /* 00555e81: mov esi, eax */ r_esi = r_eax;
    /* 00555e83: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x555e88u); f_0082d7b0();
    /* 00555e88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00555e8a: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x555e8fu); f_00830cd8();
    /* 00555e8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00555e91: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x555e96u); f_0082d838();
    /* 00555e96: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00555e99: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00555e9b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x555ea0u); f_0082d8bc();
    /* 00555ea0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555ea2: je 0x555ec9 */ if (fZ) goto L_00555ec9;
L_00555ea4:; BB(0x00555ea4);
    /* 00555ea4: lea ebx, [esp + 8] */ r_ebx = (u32)(r_esp+0x8u);
    /* 00555ea8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00555eaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555eab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00555ead: mov edx, edi */ r_edx = r_edi;
    /* 00555eaf: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x555eb4u); f_0082f940();
    /* 00555eb4: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 00555eb8: lea ebx, [esp + 0x14] */ r_ebx = (u32)(r_esp+0x14u);
    /* 00555ebc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555ebd: mov ecx, dword ptr [ebp + 0x3b4] */ r_ecx = R32((u32)(r_ebp+0x3b4u));
    /* 00555ec3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00555ec5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00555ec6: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x555ec9u); call_ind(t); }
L_00555ec9:; BB(0x00555ec9);
    /* 00555ec9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555ecb: je 0x555eee */ if (fZ) goto L_00555eee;
L_00555ecd:; BB(0x00555ecd);
    /* 00555ecd: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 00555ed1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00555ed3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555ed4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00555ed6: mov edx, esi */ r_edx = r_esi;
    /* 00555ed8: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x555eddu); f_0082f940();
    /* 00555edd: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00555ee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555ee2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555ee3: mov ecx, dword ptr [ebp + 0x3b4] */ r_ecx = R32((u32)(r_ebp+0x3b4u));
    /* 00555ee9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00555eeb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x555eeeu); call_ind(t); }
L_00555eee:; BB(0x00555eee);
    /* 00555eee: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x555ef3u); f_0082da80();
    /* 00555ef3: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 00555ef9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555efc: je 0x555f2e */ if (fZ) goto L_00555f2e;
L_00555efe:; BB(0x00555efe);
    /* 00555efe: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00555f04: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00555f06: jne 0x555f24 */ if (!fZ) goto L_00555f24;
L_00555f08:; BB(0x00555f08);
    /* 00555f08: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00555f0f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555f12: je 0x555f24 */ if (fZ) goto L_00555f24;
L_00555f14:; BB(0x00555f14);
    /* 00555f14: mov dword ptr [ebp + 0x37c], 1 */ W32((u32)(r_ebp+0x37cu), 0x1u);
    /* 00555f1e: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
L_00555f24:; BB(0x00555f24);
    /* 00555f24: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
L_00555f2e:; BB(0x00555f2e);
    /* 00555f2e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00555f31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00555f32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555f33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00555f34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00555f35: ret  */ FN_RET(0x00555f44); r_esp += 4; return;
L_00555f44:; BB(0x00555f44);
    /* 00555f44: cmp byte ptr [ebx], dh */ {  u32 a = R8((u32)(r_ebx)); u32 b = (u8)(r_edx>>8); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00555f46: rcl byte ptr [edx + 0x52], cl */ UNSUP(0x00555f46, "rcl byte ptr [edx + 0x52], cl");
    /* 00555f49: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00555f4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555f4b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x555f50u); f_00814298();
    /* 00555f50: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555f53: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555f55: je 0x555e3f */ if (fZ) goto L_00555e3f;
L_00555f5b:; BB(0x00555f5b);
    /* 00555f5b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555f61: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00555f63: mov ecx, esi */ r_ecx = r_esi;
    /* 00555f65: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x555f68u); call_ind(t); }
    /* 00555f68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555f6a: je 0x555e3f */ if (fZ) goto L_00555e3f;
L_00555f70:; BB(0x00555f70);
    /* 00555f70: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555f76: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00555f78: mov ecx, esi */ r_ecx = r_esi;
    /* 00555f7a: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x555f7du); call_ind(t); }
    /* 00555f7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00555f7f: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555f85: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00555f87: mov ecx, esi */ r_ecx = r_esi;
    /* 00555f89: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x555f8cu); call_ind(t); }
    /* 00555f8c: mov edx, dword ptr [ebp + 0x370] */ r_edx = R32((u32)(r_ebp+0x370u));
    /* 00555f92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555f94: je 0x555e3f */ if (fZ) goto L_00555e3f;
L_00555f9a:; BB(0x00555f9a);
    /* 00555f9a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00555f9c: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x555fa1u); f_007751b0();
    /* 00555fa1: fcomp dword ptr [0x924c24] */ fx_compare(ST(0), R_F32((u32)(0x924c24u))); FPOP();
    /* 00555fa7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00555fa9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00555faa: ja 0x555e3f */ if ((!fC&&!fZ)) goto L_00555e3f;
L_00555fb0:; BB(0x00555fb0);
    /* 00555fb0: mov edi, dword ptr [0x924b94] */ r_edi = R32((u32)(0x924b94u));
    /* 00555fb6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00555fb8: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00555fbb: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00555fc0: mov ecx, esi */ r_ecx = r_esi;
    /* 00555fc2: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00555fca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555fcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555fcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555fce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555fd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00555fd1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555fd2: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x555fd5u); call_ind(t); }
    /* 00555fd5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00555fd7: jmp 0x555e3f */ goto L_00555e3f;
}

void f_00555fdc(void) /* sub_555FDC */
{
    FN_ENTER(0x00555fdc);
    /* 00555fdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00555fdd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00555fde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00555fdf: mov edi, ecx */ r_edi = r_ecx;
    /* 00555fe1: mov ecx, edi */ r_ecx = r_edi;
    /* 00555fe3: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x555fe8u); f_00770738();
    /* 00555fe8: mov esi, eax */ r_esi = r_eax;
    /* 00555fea: mov edx, dword ptr [edi + 0x384] */ r_edx = R32((u32)(r_edi+0x384u));
    /* 00555ff0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555ff2: je 0x556177 */ if (fZ) goto L_00556177;
L_00555ff8:; BB(0x00555ff8);
    /* 00555ff8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555ffb: je 0x5560fa */ if (fZ) goto L_005560fa;
L_00556001:; BB(0x00556001);
    /* 00556001: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00556004: jne 0x556145 */ if (!fZ) goto L_00556145;
L_0055600a:; BB(0x0055600a);
    /* 0055600a: mov ecx, edi */ r_ecx = r_edi;
    /* 0055600c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x556011u); f_007aa094();
    /* 00556011: movsx edx, word ptr [edi + 0x39a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x39au));
    /* 00556018: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055601a: je 0x55602c */ if (fZ) goto L_0055602c;
L_0055601c:; BB(0x0055601c);
    /* 0055601c: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 00556021: mov ecx, edi */ r_ecx = r_edi;
    /* 00556023: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x556028u); f_007879b8();
    /* 00556028: mov ecx, eax */ r_ecx = r_eax;
    /* 0055602a: jmp 0x55603a */ goto L_0055603a;
L_0055602c:; BB(0x0055602c);
    /* 0055602c: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 00556031: mov ecx, edi */ r_ecx = r_edi;
    /* 00556033: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x556038u); f_007879b8();
    /* 00556038: mov ecx, eax */ r_ecx = r_eax;
L_0055603a:; BB(0x0055603a);
    /* 0055603a: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0055603d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055603f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00556040: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00556041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556042: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00556043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556044: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x556049u); f_008144b0();
    /* 00556049: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055604c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055604e: je 0x556149 */ if (fZ) goto L_00556149;
L_00556054:; BB(0x00556054);
    /* 00556054: mov eax, dword ptr [edi + 0x370] */ r_eax = R32((u32)(r_edi+0x370u));
    /* 0055605a: movsx edx, word ptr [edi + 0x39a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x39au));
    /* 00556061: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556063: jne 0x556071 */ if (!fZ) goto L_00556071;
L_00556065:; BB(0x00556065);
    /* 00556065: fld dword ptr [eax*4 + 0xa73aa8] */ FPUSH(R_F32((u32)(r_eax*4+0xa73aa8u)));
    /* 0055606c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055606f: jmp 0x55607e */ goto L_0055607e;
L_00556071:; BB(0x00556071);
    /* 00556071: mov edx, dword ptr [eax*4 + 0xa73af4] */ r_edx = R32((u32)(r_eax*4+0xa73af4u));
    /* 00556078: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0055607b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0055607e:; BB(0x0055607e);
    /* 0055607e: mov edx, dword ptr [esi + 0x300] */ r_edx = R32((u32)(r_esi+0x300u));
    /* 00556084: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556087: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0055608b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055608e: mov ecx, edi */ r_ecx = r_edi;
    /* 00556090: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 00556098: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0055609c: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005560a2: mov esi, dword ptr [esi + 0x308] */ r_esi = R32((u32)(r_esi+0x308u));
    /* 005560a8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005560ac: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 005560b0: call 0x771bf4 */ r_esp -= 4; W32(r_esp, 0x5560b5u); f_00771bf4();
    /* 005560b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005560b7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005560ba: fadd dword ptr [edi + 0x3ac] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3acu));
    /* 005560c0: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 005560c6: fstp dword ptr [edi + 0x3ac] */ W_F32((u32)(r_edi+0x3acu), ST(0)); FPOP();
    /* 005560cc: lea eax, [edi + 0x30c] */ r_eax = (u32)(r_edi+0x30cu);
    /* 005560d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005560d3: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005560d6: mov ecx, edi */ r_ecx = r_edi;
    /* 005560d8: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x5560ddu); f_00771858();
L_005560dd:; BB(0x005560dd);
    /* 005560dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005560df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005560e1: mov ecx, edi */ r_ecx = r_edi;
    /* 005560e3: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5560e8u); f_00772b44();
    /* 005560e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005560ea: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5560efu); f_007b6894();
    /* 005560ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005560f1: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5560f6u); f_007b798c();
    /* 005560f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005560f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005560f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005560f9: ret  */ FN_RET(0x00555fdc); r_esp += 4; return;
L_005560fa:; BB(0x005560fa);
    /* 005560fa: mov ecx, edi */ r_ecx = r_edi;
    /* 005560fc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x556101u); f_007aa094();
    /* 00556101: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 00556108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055610a: jne 0x556145 */ if (!fZ) goto L_00556145;
L_0055610c:; BB(0x0055610c);
    /* 0055610c: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x556111u); f_00520e6c();
    /* 00556111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00556113: jne 0x55613b */ if (!fZ) goto L_0055613b;
L_00556115:; BB(0x00556115);
    /* 00556115: movsx eax, word ptr [edi + 0x39a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x39au));
    /* 0055611c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055611e: je 0x556127 */ if (fZ) goto L_00556127;
L_00556120:; BB(0x00556120);
    /* 00556120: mov eax, 7 */ r_eax = 0x7u;
    /* 00556125: jmp 0x556134 */ goto L_00556134;
L_00556127:; BB(0x00556127);
    /* 00556127: mov eax, dword ptr [edi + 0x370] */ r_eax = R32((u32)(r_edi+0x370u));
    /* 0055612d: mov eax, dword ptr [eax*4 + 0x9bdda4] */ r_eax = R32((u32)(r_eax*4+0x9bdda4u));
L_00556134:; BB(0x00556134);
    /* 00556134: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_0055613b:; BB(0x0055613b);
    /* 0055613b: mov dword ptr [edi + 0x384], 2 */ W32((u32)(r_edi+0x384u), 0x2u);
L_00556145:; BB(0x00556145);
    /* 00556145: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556146: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00556147: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00556148: ret  */ FN_RET(0x00555fdc); r_esp += 4; return;
L_00556149:; BB(0x00556149);
    /* 00556149: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0055614f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00556151: jne 0x5560dd */ if (!fZ) goto L_005560dd;
L_00556153:; BB(0x00556153);
    /* 00556153: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055615a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055615c: je 0x5560dd */ if (fZ) goto L_005560dd;
L_00556162:; BB(0x00556162);
    /* 00556162: mov dword ptr [edi + 0x37c], 0 */ W32((u32)(r_edi+0x37cu), 0x0u);
    /* 0055616c: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 00556172: jmp 0x5560dd */ goto L_005560dd;
L_00556177:; BB(0x00556177);
    /* 00556177: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0055617d: or edx, 0x1800000 */ {  u32 a = r_edx; u32 b = 0x1800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00556183: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 00556189: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0055618c: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00556192: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00556195: mov edx, dword ptr [edi + 0x388] */ r_edx = R32((u32)(r_edi+0x388u));
    /* 0055619b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055619d: je 0x5561e5 */ if (fZ) goto L_005561e5;
L_0055619f:; BB(0x0055619f);
    /* 0055619f: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5561a4u); f_00520e6c();
    /* 005561a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005561a6: jne 0x5561d0 */ if (!fZ) goto L_005561d0;
L_005561a8:; BB(0x005561a8);
    /* 005561a8: movsx edx, word ptr [edi + 0x39a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x39au));
    /* 005561af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005561b1: je 0x5561ba */ if (fZ) goto L_005561ba;
L_005561b3:; BB(0x005561b3);
    /* 005561b3: mov edx, 7 */ r_edx = 0x7u;
    /* 005561b8: jmp 0x5561c7 */ goto L_005561c7;
L_005561ba:; BB(0x005561ba);
    /* 005561ba: mov edx, dword ptr [edi + 0x370] */ r_edx = R32((u32)(r_edi+0x370u));
    /* 005561c0: mov edx, dword ptr [edx*4 + 0x9bdda4] */ r_edx = R32((u32)(r_edx*4+0x9bdda4u));
L_005561c7:; BB(0x005561c7);
    /* 005561c7: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005561ce: jmp 0x5561d9 */ goto L_005561d9;
L_005561d0:; BB(0x005561d0);
    /* 005561d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005561d2: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
L_005561d9:; BB(0x005561d9);
    /* 005561d9: mov dword ptr [edi + 0x384], 2 */ W32((u32)(r_edi+0x384u), 0x2u);
    /* 005561e3: jmp 0x55620e */ goto L_0055620e;
L_005561e5:; BB(0x005561e5);
    /* 005561e5: push 0x12a */ { u32 v = 0x12au; r_esp -= 4; W32(r_esp, v); }
    /* 005561ea: mov ecx, edi */ r_ecx = r_edi;
    /* 005561ec: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5561f1u); f_007879b8();
    /* 005561f1: mov ecx, eax */ r_ecx = r_eax;
    /* 005561f3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005561f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005561f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005561f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005561fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005561fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005561fc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x556201u); f_00814298();
    /* 00556201: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556204: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
L_0055620e:; BB(0x0055620e);
    /* 0055620e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00556210: je 0x556145 */ if (fZ) goto L_00556145;
L_00556216:; BB(0x00556216);
    /* 00556216: mov edx, dword ptr [esi + 0x300] */ r_edx = R32((u32)(r_esi+0x300u));
    /* 0055621c: mov dword ptr [edi + 0x2a4], edx */ W32((u32)(r_edi+0x2a4u), r_edx);
    /* 00556222: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00556228: mov dword ptr [edi + 0x2a8], edx */ W32((u32)(r_edi+0x2a8u), r_edx);
    /* 0055622e: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00556234: mov dword ptr [edi + 0x2ac], eax */ W32((u32)(r_edi+0x2acu), r_eax);
    /* 0055623a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055623b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055623c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055623d: ret  */ FN_RET(0x00555fdc); r_esp += 4; return;
}

