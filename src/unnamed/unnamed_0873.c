#include "protos.h"

void f_00873318(void) /* sub_873318 */
{
    FN_ENTER(0x00873318);
    /* 00873318: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00873319: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087331a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087331d: mov ecx, eax */ r_ecx = r_eax;
    /* 0087331f: mov ebx, dword ptr [ecx + 0x58] */ r_ebx = R32((u32)(r_ecx+0x58u));
    /* 00873322: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873325: jl 0x87339d */ if ((fS!=fO)) goto L_0087339d;
L_00873327:; BB(0x00873327);
    /* 00873327: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087332b: je 0x87338d */ if (fZ) goto L_0087338d;
L_0087332d:; BB(0x0087332d);
    /* 0087332d: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 00873330: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873332: jge 0x87338d */ if ((fS==fO)) goto L_0087338d;
L_00873334:; BB(0x00873334);
    /* 00873334: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00873336: jge 0x87337a */ if ((fS==fO)) goto L_0087337a;
L_00873338:; BB(0x00873338);
    /* 00873338: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087333a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0087333c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087333e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873340: jle 0x873370 */ if ((fZ||fS!=fO)) goto L_00873370;
L_00873342:; BB(0x00873342);
    /* 00873342: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00873346: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0087334a: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0087334e: mov esi, eax */ r_esi = r_eax;
    /* 00873350: mov ebp, edx */ r_ebp = r_edx;
L_00873352:; BB(0x00873352);
    /* 00873352: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00873356: mov edx, edi */ r_edx = r_edi;
    /* 00873358: call 0x873318 */ r_esp -= 4; W32(r_esp, 0x87335du); f_00873318();
    /* 0087335d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087335e: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fC = (r < a); }
    /* 00873360: adc ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 00873362: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873364: jl 0x873352 */ if ((fS!=fO)) goto L_00873352;
L_00873366:; BB(0x00873366);
    /* 00873366: mov edx, ebp */ r_edx = r_ebp;
    /* 00873368: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0087336c: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00873370:; BB(0x00873370);
    /* 00873370: mov eax, edx */ r_eax = r_edx;
    /* 00873372: mov edx, ebx */ r_edx = r_ebx;
    /* 00873374: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00873377: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00873378: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00873379: ret  */ FN_RET(0x00873318); r_esp += 4; return;
L_0087337a:; BB(0x0087337a);
    /* 0087337a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087337c: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 0087337f: mov eax, dword ptr [ecx + edx*8 + 8] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x8u));
    /* 00873383: mov edx, dword ptr [ecx + edx*8 + 0xc] */ r_edx = R32((u32)(r_ecx+r_edx*8+0xcu));
    /* 00873387: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087338a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087338b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087338c: ret  */ FN_RET(0x00873318); r_esp += 4; return;
L_0087338d:; BB(0x0087338d);
    /* 0087338d: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00873392: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00873397: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087339a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087339b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087339c: ret  */ FN_RET(0x00873318); r_esp += 4; return;
L_0087339d:; BB(0x0087339d);
    /* 0087339d: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 008733a2: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008733a7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008733aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008733ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008733ac: ret  */ FN_RET(0x00873318); r_esp += 4; return;
}

void f_008733b0(void) /* sub_8733B0 */
{
    FN_ENTER(0x008733b0);
    /* 008733b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008733b1: mov ebx, eax */ r_ebx = r_eax;
    /* 008733b3: lea edx, [ebx + 0x1e0] */ r_edx = (u32)(r_ebx+0x1e0u);
    /* 008733b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008733ba: call 0x873fc4 */ r_esp -= 4; W32(r_esp, 0x8733bfu); f_00873fc4();
    /* 008733bf: lea edx, [ebx + 0x250] */ r_edx = (u32)(r_ebx+0x250u);
    /* 008733c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008733c6: call 0x873ec4 */ r_esp -= 4; W32(r_esp, 0x8733cbu); f_00873ec4();
    /* 008733cb: mov dword ptr [ebx + 0x58], 2 */ W32((u32)(r_ebx+0x58u), 0x2u);
    /* 008733d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008733d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008733d6: ret  */ FN_RET(0x008733b0); r_esp += 4; return;
}

void f_008733d8(void) /* sub_8733D8 */
{
    FN_ENTER(0x008733d8);
    /* 008733d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008733d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008733da: mov edi, eax */ r_edi = r_eax;
    /* 008733dc: mov edx, dword ptr [edi + 0x58] */ r_edx = R32((u32)(r_edi+0x58u));
    /* 008733df: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008733e2: jg 0x873412 */ if ((!fZ&&fS==fO)) goto L_00873412;
L_008733e4:; BB(0x008733e4);
    /* 008733e4: jl 0x87340a */ if ((fS!=fO)) goto L_0087340a;
L_008733e6:; BB(0x008733e6);
    /* 008733e6: cmp dword ptr [edi + 4], 0 */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008733ea: jne 0x87343f */ if (!fZ) goto L_0087343f;
L_008733ec:; BB(0x008733ec);
    /* 008733ec: lea esi, [edi + 0x1e0] */ r_esi = (u32)(r_edi+0x1e0u);
    /* 008733f2: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 008733f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008733f6: call 0x875b2c */ r_esp -= 4; W32(r_esp, 0x8733fbu); f_00875b2c();
    /* 008733fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008733fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00873400: je 0x873417 */ if (fZ) goto L_00873417;
L_00873402:; BB(0x00873402);
    /* 00873402: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 00873407: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00873408: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00873409: ret  */ FN_RET(0x008733d8); r_esp += 4; return;
L_0087340a:; BB(0x0087340a);
    /* 0087340a: mov eax, 0xffffff7f */ r_eax = 0xffffff7fu;
    /* 0087340f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00873410: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00873411: ret  */ FN_RET(0x008733d8); r_esp += 4; return;
L_00873412:; BB(0x00873412);
    /* 00873412: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00873414: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00873415: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00873416: ret  */ FN_RET(0x008733d8); r_esp += 4; return;
L_00873417:; BB(0x00873417);
    /* 00873417: lea edx, [edi + 0x250] */ r_edx = (u32)(r_edi+0x250u);
    /* 0087341d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087341e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087341f: call 0x875f44 */ r_esp -= 4; W32(r_esp, 0x873424u); f_00875f44();
    /* 00873424: mov dword ptr [edi + 0x58], 4 */ W32((u32)(r_edi+0x58u), 0x4u);
    /* 0087342b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087342d: fld qword ptr [0x99a5e8] */ FPUSH(R_F64((u32)(0x99a5e8u)));
    /* 00873433: fst qword ptr [edi + 0x68] */ W_F64((u32)(r_edi+0x68u), ST(0));
    /* 00873436: fstp qword ptr [edi + 0x70] */ W_F64((u32)(r_edi+0x70u), ST(0)); FPOP();
    /* 00873439: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087343c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087343d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087343e: ret  */ FN_RET(0x008733d8); r_esp += 4; return;
L_0087343f:; BB(0x0087343f);
    /* 0087343f: lea esi, [edi + 0x1e0] */ r_esi = (u32)(r_edi+0x1e0u);
    /* 00873445: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00873448: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087344a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087344c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087344e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873450: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873452: add edx, dword ptr [edi + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873455: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00873456: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00873457: call 0x875b2c */ r_esp -= 4; W32(r_esp, 0x87345cu); f_00875b2c();
    /* 0087345c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087345f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00873461: je 0x873417 */ if (fZ) goto L_00873417;
L_00873463:; BB(0x00873463);
    /* 00873463: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 00873468: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00873469: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087346a: ret  */ FN_RET(0x008733d8); r_esp += 4; return;
}

void f_0087346c(void) /* sub_87346C */
{
    FN_ENTER(0x0087346c);
    /* 0087346c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00873470: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00873474: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00873478: je 0x873497 */ if (fZ) goto L_00873497;
L_0087347a:; BB(0x0087347a);
    /* 0087347a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087347c: jl 0x87349b */ if ((fS!=fO)) goto L_0087349b;
L_0087347e:; BB(0x0087347e);
    /* 0087347e: cmp edx, dword ptr [eax + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x34u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873481: jl 0x873486 */ if ((fS!=fO)) goto L_00873486;
L_00873483:; BB(0x00873483);
    /* 00873483: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00873485: ret  */ FN_RET(0x0087346c); r_esp += 4; return;
L_00873486:; BB(0x00873486);
    /* 00873486: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00873489: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087348b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087348d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087348f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873491: add edx, dword ptr [eax + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00873494: mov eax, edx */ r_eax = r_edx;
    /* 00873496: ret  */ FN_RET(0x0087346c); r_esp += 4; return;
L_00873497:; BB(0x00873497);
    /* 00873497: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0087349a: ret  */ FN_RET(0x0087346c); r_esp += 4; return;
L_0087349b:; BB(0x0087349b);
    /* 0087349b: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0087349e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008734a1: jl 0x8734b6 */ if ((fS!=fO)) goto L_008734b6;
L_008734a3:; BB(0x008734a3);
    /* 008734a3: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 008734a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734b0: add edx, dword ptr [eax + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008734b3: mov eax, edx */ r_eax = r_edx;
    /* 008734b5: ret  */ FN_RET(0x0087346c); r_esp += 4; return;
L_008734b6:; BB(0x008734b6);
    /* 008734b6: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 008734b9: ret  */ FN_RET(0x0087346c); r_esp += 4; return;
}

void f_008734bc(void) /* sub_8734BC */
{
    FN_ENTER(0x008734bc);
    /* 008734bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008734c0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008734c4: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008734c8: je 0x8734e5 */ if (fZ) goto L_008734e5;
L_008734ca:; BB(0x008734ca);
    /* 008734ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008734cc: jl 0x8734e9 */ if ((fS!=fO)) goto L_008734e9;
L_008734ce:; BB(0x008734ce);
    /* 008734ce: cmp edx, dword ptr [eax + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x34u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008734d1: jl 0x8734d6 */ if ((fS!=fO)) goto L_008734d6;
L_008734d3:; BB(0x008734d3);
    /* 008734d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008734d5: ret  */ FN_RET(0x008734bc); r_esp += 4; return;
L_008734d6:; BB(0x008734d6);
    /* 008734d6: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 008734d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734dd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734df: add edx, dword ptr [eax + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008734e2: mov eax, edx */ r_eax = r_edx;
    /* 008734e4: ret  */ FN_RET(0x008734bc); r_esp += 4; return;
L_008734e5:; BB(0x008734e5);
    /* 008734e5: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 008734e8: ret  */ FN_RET(0x008734bc); r_esp += 4; return;
L_008734e9:; BB(0x008734e9);
    /* 008734e9: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 008734ec: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008734ef: jl 0x873502 */ if ((fS!=fO)) goto L_00873502;
L_008734f1:; BB(0x008734f1);
    /* 008734f1: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 008734f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008734fc: add edx, dword ptr [eax + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008734ff: mov eax, edx */ r_eax = r_edx;
    /* 00873501: ret  */ FN_RET(0x008734bc); r_esp += 4; return;
L_00873502:; BB(0x00873502);
    /* 00873502: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 00873505: ret  */ FN_RET(0x008734bc); r_esp += 4; return;
}

void f_00873508(void) /* sub_873508 */
{
    FN_ENTER(0x00873508);
L_00873508:; BB(0x00873508);
    /* 00873508: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873512: jne 0x873530 */ if (!fZ) goto L_00873530;
L_00873518:; BB(0x00873518);
    /* 00873518: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873522: jne 0x8739e4 */ if (!fZ) goto L_008739e4;
L_00873528:; BB(0x00873528);
    /* 00873528: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x87352du); f_0086b8a0();
    /* 0087352d: jmp 0x873508 */ goto L_00873508;
L_00873530:; BB(0x00873530);
    /* 00873530: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00873531: mov ebx, esp */ r_ebx = r_esp;
    /* 00873533: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00873536: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00873537: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00873538: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0087353b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0087353f: mov ebp, esp */ r_ebp = r_esp;
    /* 00873541: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00873544: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00873547: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0087354a: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0087354d: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00873550: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00873553: call 0x873e44 */ r_esp -= 4; W32(r_esp, 0x873558u); f_00873e44();
    /* 00873558: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0087355b: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 0087355e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00873561: jl 0x8735a3 */ if ((fS!=fO)) goto L_008735a3;
L_00873563:; BB(0x00873563);
    /* 00873563: emms  */ ; /* the MMX tag state is not modelled */
L_00873565:; BB(0x00873565);
    /* 00873565: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 00873568: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087356b: je 0x8735b5 */ if (fZ) goto L_008735b5;
L_0087356d:; BB(0x0087356d);
    /* 0087356d: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873570: mov eax, edi */ r_eax = r_edi;
    /* 00873572: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00873574: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0087357c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00873581: call 0x87227c */ r_esp -= 4; W32(r_esp, 0x873586u); f_0087227c();
    /* 00873586: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873589: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087358c: je 0x8739d5 */ if (fZ) goto L_008739d5;
L_00873592:; BB(0x00873592);
    /* 00873592: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00873594: jg 0x873565 */ if ((!fZ&&fS==fO)) goto L_00873565;
L_00873596:; BB(0x00873596);
    /* 00873596: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00873599: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087359c: mov esp, ebp */ r_esp = r_ebp;
    /* 0087359e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087359f: mov esp, ebx */ r_esp = r_ebx;
    /* 008735a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008735a2: ret  */ FN_RET(0x00873508); r_esp += 4; return;
L_008735a3:; BB(0x008735a3);
    /* 008735a3: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 008735a8: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008735ab: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 008735ae: mov esp, ebp */ r_esp = r_ebp;
    /* 008735b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008735b1: mov esp, ebx */ r_esp = r_ebx;
    /* 008735b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008735b4: ret  */ FN_RET(0x00873508); r_esp += 4; return;
L_008735b5:; BB(0x008735b5);
    /* 008735b5: lea esi, [edi + 0x1e0] */ r_esi = (u32)(r_edi+0x1e0u);
    /* 008735bb: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008735be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008735bf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008735c0: call 0x875a30 */ r_esp -= 4; W32(r_esp, 0x8735c5u); f_00875a30();
    /* 008735c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008735c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008735ca: je 0x87356d */ if (fZ) goto L_0087356d;
L_008735cc:; BB(0x008735cc);
    /* 008735cc: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 008735cf: mov esi, eax */ r_esi = r_eax;
    /* 008735d1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008735d3: jle 0x873877 */ if ((fZ||fS!=fO)) goto L_00873877;
L_008735d9:; BB(0x008735d9);
    /* 008735d9: cmp dword ptr [edi + 4], 0 */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008735dd: je 0x8735fb */ if (fZ) goto L_008735fb;
L_008735df:; BB(0x008735df);
    /* 008735df: mov ecx, dword ptr [edi + 0x48] */ r_ecx = R32((u32)(r_edi+0x48u));
    /* 008735e2: mov edx, dword ptr [edi + 0x58] */ r_edx = R32((u32)(r_edi+0x58u));
    /* 008735e5: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008735e8: jl 0x8735fe */ if ((fS!=fO)) goto L_008735fe;
L_008735ea:; BB(0x008735ea);
    /* 008735ea: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 008735ed: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008735ef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008735f1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008735f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008735f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008735f7: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008735f9: jmp 0x8735fe */ goto L_008735fe;
L_008735fb:; BB(0x008735fb);
    /* 008735fb: mov ecx, dword ptr [edi + 0x48] */ r_ecx = R32((u32)(r_edi+0x48u));
L_008735fe:; BB(0x008735fe);
    /* 008735fe: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00873601: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 00873604: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00873607: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0087360a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0087360d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00873610: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00873611: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00873611, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00873611, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00873613: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873615: cmovl esi, eax */ if ((fS!=fO)) { r_esi = r_eax; }
    /* 00873618: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0087361a: jle 0x8735a3 */ if ((fZ||fS!=fO)) goto L_008735a3;
L_0087361c:; BB(0x0087361c);
    /* 0087361c: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0087361f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873622: je 0x873936 */ if (fZ) goto L_00873936;
L_00873628:; BB(0x00873628);
    /* 00873628: mov ecx, 0x8000 */ r_ecx = 0x8000u;
    /* 0087362d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00873630: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873633: mov edx, 0 */ r_edx = 0x0u;
    /* 00873638: cmove edx, ecx */ if (fZ) { r_edx = r_ecx; }
    /* 0087363b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0087363e: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 00873641: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00873644: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873646: jne 0x873778 */ if (!fZ) goto L_00873778;
L_0087364c:; BB(0x0087364c);
    /* 0087364c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087364e: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00873651: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873653: je 0x8736ea */ if (fZ) goto L_008736ea;
L_00873659:; BB(0x00873659);
    /* 00873659: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087365c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087365e: jle 0x87388c */ if ((fZ||fS!=fO)) goto L_0087388c;
L_00873664:; BB(0x00873664);
    /* 00873664: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00873667: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0087366a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087366d: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00873670: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00873673: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00873676: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00873679: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_0087367c:; BB(0x0087367c);
    /* 0087367c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087367f: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 00873682: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00873685: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00873688: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087368a: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087368d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087368f: jle 0x8738cc */ if ((fZ||fS!=fO)) goto L_008738cc;
L_00873695:; BB(0x00873695);
    /* 00873695: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 00873698: fmul dword ptr [0x99a664] */ ST(0) = ST(0) * R_F32((u32)(0x99a664u));
    /* 0087369e: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 008736a1: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 008736a4: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 008736a7: mov edi, 0xffff8000 */ r_edi = 0xffff8000u;
    /* 008736ac: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008736af: cmp eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008736b4: jge 0x8736b8 */ if ((fS==fO)) goto L_008736b8;
L_008736b6:; BB(0x008736b6);
    /* 008736b6: mov eax, edi */ r_eax = r_edi;
L_008736b8:; BB(0x008736b8);
    /* 008736b8: mov edi, 0x7fff */ r_edi = 0x7fffu;
    /* 008736bd: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008736c2: cmovge eax, edi */ if ((fS==fO)) { r_eax = r_edi; }
    /* 008736c5: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008736c6: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 008736c9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008736cc: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008736cf: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008736d1: jl 0x873695 */ if ((fS!=fO)) goto L_00873695;
L_008736d3:; BB(0x008736d3);
    /* 008736d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008736d6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008736d7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008736da: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008736dd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008736df: jge 0x873886 */ if ((fS==fO)) goto L_00873886;
L_008736e5:; BB(0x008736e5);
    /* 008736e5: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 008736e8: jmp 0x87367c */ goto L_0087367c;
L_008736ea:; BB(0x008736ea);
    /* 008736ea: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008736ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008736ef: jle 0x87388c */ if ((fZ||fS!=fO)) goto L_0087388c;
L_008736f5:; BB(0x008736f5);
    /* 008736f5: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 008736f8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008736fb: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 008736fe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00873701: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00873704: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_00873707:; BB(0x00873707);
    /* 00873707: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087370a: mov edi, dword ptr [edx + ecx*4] */ r_edi = R32((u32)(r_edx+r_ecx*4));
    /* 0087370d: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00873710: add esi, dword ptr [ebp - 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00873713: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00873715: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00873718: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087371a: jle 0x8738ed */ if ((fZ||fS!=fO)) goto L_008738ed;
L_00873720:; BB(0x00873720);
    /* 00873720: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 00873723: fmul dword ptr [0x99a664] */ ST(0) = ST(0) * R_F32((u32)(0x99a664u));
    /* 00873729: fstp qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0087372c: fld qword ptr [ebp - 0x58] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa8u)));
    /* 0087372f: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 00873732: mov edx, 0xffff8000 */ r_edx = 0xffff8000u;
    /* 00873737: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0087373a: cmp eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087373f: jge 0x873743 */ if ((fS==fO)) goto L_00873743;
L_00873741:; BB(0x00873741);
    /* 00873741: mov eax, edx */ r_eax = r_edx;
L_00873743:; BB(0x00873743);
    /* 00873743: mov edx, 0x7fff */ r_edx = 0x7fffu;
    /* 00873748: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087374d: cmovge eax, edx */ if ((fS==fO)) { r_eax = r_edx; }
    /* 00873750: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00873751: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873754: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00873757: add esi, dword ptr [ebp - 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087375a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087375d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087375f: jl 0x873720 */ if ((fS!=fO)) goto L_00873720;
L_00873761:; BB(0x00873761);
    /* 00873761: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00873764: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873765: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00873768: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0087376b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087376d: jge 0x8738e5 */ if ((fS==fO)) goto L_008738e5;
L_00873773:; BB(0x00873773);
    /* 00873773: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00873776: jmp 0x873707 */ goto L_00873707;
L_00873778:; BB(0x00873778);
    /* 00873778: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087377a: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0087377d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087377f: jne 0x8737fb */ if (!fZ) goto L_008737fb;
L_00873781:; BB(0x00873781);
    /* 00873781: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
L_00873784:; BB(0x00873784);
    /* 00873784: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00873786: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873788: jle 0x87390c */ if ((fZ||fS!=fO)) goto L_0087390c;
L_0087378e:; BB(0x0087378e);
    /* 0087378e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00873791: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00873794: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00873797: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
L_0087379a:; BB(0x0087379a);
    /* 0087379a: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0087379d: mov esi, dword ptr [eax + edi*4] */ r_esi = R32((u32)(r_eax+r_edi*4));
    /* 008737a0: fld dword ptr [esi + ecx*2] */ FPUSH(R_F32((u32)(r_esi+r_ecx*2)));
    /* 008737a3: fmul dword ptr [0x99a664] */ ST(0) = ST(0) * R_F32((u32)(0x99a664u));
    /* 008737a9: fstp qword ptr [ebp - 0x68] */ W_F64((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 008737ac: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 008737af: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 008737b2: mov esi, 0xffff8000 */ r_esi = 0xffff8000u;
    /* 008737b7: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 008737ba: cmp eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008737bf: jge 0x8737c3 */ if ((fS==fO)) goto L_008737c3;
L_008737c1:; BB(0x008737c1);
    /* 008737c1: mov eax, esi */ r_eax = r_esi;
L_008737c3:; BB(0x008737c3);
    /* 008737c3: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 008737c8: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008737cd: cmovge eax, esi */ if ((fS==fO)) { r_eax = r_esi; }
    /* 008737d0: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 008737d3: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008737d4: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008737d7: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 008737d9: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008737dc: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008737df: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 008737e1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008737e4: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008737e6: jl 0x87379a */ if ((fS!=fO)) goto L_0087379a;
L_008737e8:; BB(0x008737e8);
    /* 008737e8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008737eb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008737ee: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008737f1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008737f2: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008737f4: jl 0x873784 */ if ((fS!=fO)) goto L_00873784;
L_008737f6:; BB(0x008737f6);
    /* 008737f6: jmp 0x873907 */ goto L_00873907;
L_008737fb:; BB(0x008737fb);
    /* 008737fb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
L_008737fe:; BB(0x008737fe);
    /* 008737fe: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00873800: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873802: jle 0x873925 */ if ((fZ||fS!=fO)) goto L_00873925;
L_00873808:; BB(0x00873808);
    /* 00873808: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0087380b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0087380e: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00873811: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
L_00873814:; BB(0x00873814);
    /* 00873814: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00873817: mov edx, dword ptr [eax + edi*4] */ r_edx = R32((u32)(r_eax+r_edi*4));
    /* 0087381a: fld dword ptr [edx + ecx*2] */ FPUSH(R_F32((u32)(r_edx+r_ecx*2)));
    /* 0087381d: fmul dword ptr [0x99a664] */ ST(0) = ST(0) * R_F32((u32)(0x99a664u));
    /* 00873823: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 00873826: fld qword ptr [ebp - 0x60] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa0u)));
    /* 00873829: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087382c: mov edx, 0xffff8000 */ r_edx = 0xffff8000u;
    /* 00873831: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00873834: cmp eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873839: jge 0x87383d */ if ((fS==fO)) goto L_0087383d;
L_0087383b:; BB(0x0087383b);
    /* 0087383b: mov eax, edx */ r_eax = r_edx;
L_0087383d:; BB(0x0087383d);
    /* 0087383d: mov edx, 0x7fff */ r_edx = 0x7fffu;
    /* 00873842: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873847: cmovge eax, edx */ if ((fS==fO)) { r_eax = r_edx; }
    /* 0087384a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087384b: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087384e: mov edx, eax */ r_edx = r_eax;
    /* 00873850: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00873853: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00873855: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 00873858: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087385b: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0087385d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00873860: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873862: jl 0x873814 */ if ((fS!=fO)) goto L_00873814;
L_00873864:; BB(0x00873864);
    /* 00873864: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 00873867: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087386a: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087386d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087386e: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873870: jl 0x8737fe */ if ((fS!=fO)) goto L_008737fe;
L_00873872:; BB(0x00873872);
    /* 00873872: jmp 0x87391d */ goto L_0087391d;
L_00873877:; BB(0x00873877);
    /* 00873877: mov eax, esi */ r_eax = r_esi;
    /* 00873879: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087387c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087387f: mov esp, ebp */ r_esp = r_ebp;
    /* 00873881: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00873882: mov esp, ebx */ r_esp = r_ebx;
    /* 00873884: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00873885: ret  */ FN_RET(0x00873508); r_esp += 4; return;
L_00873886:; BB(0x00873886);
    /* 00873886: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00873889: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
L_0087388c:; BB(0x0087388c);
    /* 0087388c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087388d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00873890: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00873891: call 0x875a98 */ r_esp -= 4; W32(r_esp, 0x873896u); f_00875a98();
    /* 00873896: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873899: mov eax, esi */ r_eax = r_esi;
    /* 0087389b: mov ecx, dword ptr [edi + 0x50] */ r_ecx = R32((u32)(r_edi+0x50u));
    /* 0087389e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087389f: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 008738a1: adc edx, dword ptr [edi + 0x54] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 008738a4: mov dword ptr [edi + 0x50], ecx */ W32((u32)(r_edi+0x50u), r_ecx);
    /* 008738a7: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 008738aa: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 008738ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008738af: je 0x8738b9 */ if (fZ) goto L_008738b9;
L_008738b1:; BB(0x008738b1);
    /* 008738b1: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 008738b4: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 008738b7: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_008738b9:; BB(0x008738b9);
    /* 008738b9: imul esi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008738bd: mov eax, esi */ r_eax = r_esi;
    /* 008738bf: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008738c2: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 008738c5: mov esp, ebp */ r_esp = r_ebp;
    /* 008738c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008738c8: mov esp, ebx */ r_esp = r_ebx;
    /* 008738ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008738cb: ret  */ FN_RET(0x00873508); r_esp += 4; return;
L_008738cc:; BB(0x008738cc);
    /* 008738cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008738cf: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008738d0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008738d3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008738d6: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008738d8: jl 0x87367c */ if ((fS!=fO)) goto L_0087367c;
L_008738de:; BB(0x008738de);
    /* 008738de: mov esi, edi */ r_esi = r_edi;
    /* 008738e0: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 008738e3: jmp 0x87388c */ goto L_0087388c;
L_008738e5:; BB(0x008738e5);
    /* 008738e5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008738e8: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 008738eb: jmp 0x87388c */ goto L_0087388c;
L_008738ed:; BB(0x008738ed);
    /* 008738ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008738f0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008738f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008738f4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008738f7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008738f9: jl 0x873707 */ if ((fS!=fO)) goto L_00873707;
L_008738ff:; BB(0x008738ff);
    /* 008738ff: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00873902: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00873905: jmp 0x87388c */ goto L_0087388c;
L_00873907:; BB(0x00873907);
    /* 00873907: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0087390a: jmp 0x87388c */ goto L_0087388c;
L_0087390c:; BB(0x0087390c);
    /* 0087390c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087390d: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087390f: jl 0x873784 */ if ((fS!=fO)) goto L_00873784;
L_00873915:; BB(0x00873915);
    /* 00873915: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00873918: jmp 0x87388c */ goto L_0087388c;
L_0087391d:; BB(0x0087391d);
    /* 0087391d: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00873920: jmp 0x87388c */ goto L_0087388c;
L_00873925:; BB(0x00873925);
    /* 00873925: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873926: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873928: jl 0x8737fe */ if ((fS!=fO)) goto L_008737fe;
L_0087392e:; BB(0x0087392e);
    /* 0087392e: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00873931: jmp 0x87388c */ goto L_0087388c;
L_00873936:; BB(0x00873936);
    /* 00873936: mov ecx, 0x80 */ r_ecx = 0x80u;
    /* 0087393b: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0087393e: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873941: mov edx, 0 */ r_edx = 0x0u;
    /* 00873946: mov eax, 0 */ r_eax = 0x0u;
    /* 0087394b: cmove edx, ecx */ if (fZ) { r_edx = r_ecx; }
    /* 0087394e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873950: jle 0x87388c */ if ((fZ||fS!=fO)) goto L_0087388c;
L_00873956:; BB(0x00873956);
    /* 00873956: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00873959: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
L_0087395c:; BB(0x0087395c);
    /* 0087395c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087395e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873960: jle 0x8739c8 */ if ((fZ||fS!=fO)) goto L_008739c8;
L_00873962:; BB(0x00873962);
    /* 00873962: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00873965: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00873968: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0087396b: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
L_0087396e:; BB(0x0087396e);
    /* 0087396e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00873971: mov edi, dword ptr [eax + ecx*4] */ r_edi = R32((u32)(r_eax+r_ecx*4));
    /* 00873974: fld dword ptr [edi + edx*2] */ FPUSH(R_F32((u32)(r_edi+r_edx*2)));
    /* 00873977: fmul dword ptr [0x99a660] */ ST(0) = ST(0) * R_F32((u32)(0x99a660u));
    /* 0087397d: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 00873980: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 00873983: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00873986: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00873987: mov edi, 0xffffff80 */ r_edi = 0xffffff80u;
    /* 0087398c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087398f: cmp eax, -0x80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873992: jge 0x873996 */ if ((fS==fO)) goto L_00873996;
L_00873994:; BB(0x00873994);
    /* 00873994: mov eax, edi */ r_eax = r_edi;
L_00873996:; BB(0x00873996);
    /* 00873996: mov edi, 0x7f */ r_edi = 0x7fu;
    /* 0087399b: cmp eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087399e: cmovge eax, edi */ if ((fS==fO)) { r_eax = r_edi; }
    /* 008739a1: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008739a2: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008739a5: mov byte ptr [esi - 1], al */ W8((u32)(r_esi+0xffffffffu), (u8)r_eax);
    /* 008739a8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008739ab: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008739ad: jl 0x87396e */ if ((fS!=fO)) goto L_0087396e;
L_008739af:; BB(0x008739af);
    /* 008739af: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 008739b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008739b5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008739b8: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008739bb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008739bc: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008739be: jl 0x87395c */ if ((fS!=fO)) goto L_0087395c;
L_008739c0:; BB(0x008739c0);
    /* 008739c0: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 008739c3: jmp 0x87388c */ goto L_0087388c;
L_008739c8:; BB(0x008739c8);
    /* 008739c8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008739c9: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008739cb: jl 0x87395c */ if ((fS!=fO)) goto L_0087395c;
L_008739cd:; BB(0x008739cd);
    /* 008739cd: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 008739d0: jmp 0x87388c */ goto L_0087388c;
L_008739d5:; BB(0x008739d5);
    /* 008739d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008739d7: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008739da: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 008739dd: mov esp, ebp */ r_esp = r_ebp;
    /* 008739df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008739e0: mov esp, ebx */ r_esp = r_ebx;
    /* 008739e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008739e3: ret  */ FN_RET(0x00873508); r_esp += 4; return;
L_008739e4:; BB(0x008739e4);
    /* 008739e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008739e5: mov ebx, esp */ r_ebx = r_esp;
    /* 008739e7: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008739ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008739eb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008739ec: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 008739ef: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008739f3: mov ebp, esp */ r_ebp = r_esp;
    /* 008739f5: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008739f8: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 008739fb: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 008739fe: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00873a01: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00873a04: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00873a07: call 0x873e44 */ r_esp -= 4; W32(r_esp, 0x873a0cu); f_00873e44();
    /* 00873a0c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00873a0f: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 00873a12: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00873a15: jge 0x873a2c */ if ((fS==fO)) goto L_00873a2c;
L_00873a17:; BB(0x00873a17);
    /* 00873a17: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00873a1c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00873a1f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00873a22: mov esp, ebp */ r_esp = r_ebp;
    /* 00873a24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00873a25: mov esp, ebx */ r_esp = r_ebx;
    /* 00873a27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00873a28: ret  */ FN_RET(0x00873508); r_esp += 4; return;
L_00873a29:; BB(0x00873a29);
    /* 00873a29: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
L_00873a2c:; BB(0x00873a2c);
    /* 00873a2c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873a2f: je 0x873a60 */ if (fZ) goto L_00873a60;
L_00873a31:; BB(0x00873a31);
    /* 00873a31: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873a34: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 00873a3c: mov eax, edi */ r_eax = r_edi;
    /* 00873a3e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00873a40: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00873a45: call 0x87227c */ r_esp -= 4; W32(r_esp, 0x873a4au); f_0087227c();
    /* 00873a4a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873a4d: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873a50: je 0x873e28 */ if (fZ) goto L_00873e28;
L_00873a56:; BB(0x00873a56);
    /* 00873a56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00873a58: jle 0x873e37 */ if ((fZ||fS!=fO)) goto L_00873e37;
L_00873a5e:; BB(0x00873a5e);
    /* 00873a5e: jmp 0x873a29 */ goto L_00873a29;
L_00873a60:; BB(0x00873a60);
    /* 00873a60: lea esi, [edi + 0x1e0] */ r_esi = (u32)(r_edi+0x1e0u);
    /* 00873a66: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00873a69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00873a6a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00873a6b: call 0x875a30 */ r_esp -= 4; W32(r_esp, 0x873a70u); f_00875a30();
    /* 00873a70: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873a75: je 0x873a31 */ if (fZ) goto L_00873a31;
L_00873a77:; BB(0x00873a77);
    /* 00873a77: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00873a7a: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00873a7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00873a7f: jle 0x873d92 */ if ((fZ||fS!=fO)) goto L_00873d92;
L_00873a85:; BB(0x00873a85);
    /* 00873a85: cmp dword ptr [edi + 4], 0 */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873a89: je 0x873aa7 */ if (fZ) goto L_00873aa7;
L_00873a8b:; BB(0x00873a8b);
    /* 00873a8b: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 00873a8e: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 00873a91: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873a94: jl 0x873aaa */ if ((fS!=fO)) goto L_00873aaa;
L_00873a96:; BB(0x00873a96);
    /* 00873a96: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 00873a99: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873a9b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873a9d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873a9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873aa1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873aa3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873aa5: jmp 0x873aaa */ goto L_00873aaa;
L_00873aa7:; BB(0x00873aa7);
    /* 00873aa7: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
L_00873aaa:; BB(0x00873aaa);
    /* 00873aaa: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00873aad: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 00873ab0: imul esi, ecx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_ecx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00873ab3: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00873ab6: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00873ab9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00873aba: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x00873aba, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00873aba, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00873abc: mov esi, eax */ r_esi = r_eax;
    /* 00873abe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00873ac1: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873ac3: jl 0x873ac7 */ if ((fS!=fO)) goto L_00873ac7;
L_00873ac5:; BB(0x00873ac5);
    /* 00873ac5: mov esi, edx */ r_esi = r_edx;
L_00873ac7:; BB(0x00873ac7);
    /* 00873ac7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00873ac9: jle 0x873a17 */ if ((fZ||fS!=fO)) goto L_00873a17;
L_00873acf:; BB(0x00873acf);
    /* 00873acf: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 00873ad2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873ad5: je 0x873d9f */ if (fZ) goto L_00873d9f;
L_00873adb:; BB(0x00873adb);
    /* 00873adb: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00873ade: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873ae0: je 0x873ae9 */ if (fZ) goto L_00873ae9;
L_00873ae2:; BB(0x00873ae2);
    /* 00873ae2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00873ae4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00873ae7: jmp 0x873af1 */ goto L_00873af1;
L_00873ae9:; BB(0x00873ae9);
    /* 00873ae9: mov edx, 0x8000 */ r_edx = 0x8000u;
    /* 00873aee: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00873af1:; BB(0x00873af1);
    /* 00873af1: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00873af4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00873af7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873af9: jne 0x873c3e */ if (!fZ) goto L_00873c3e;
L_00873aff:; BB(0x00873aff);
    /* 00873aff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00873b01: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00873b04: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00873b07: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873b09: je 0x873ba5 */ if (fZ) goto L_00873ba5;
L_00873b0f:; BB(0x00873b0f);
    /* 00873b0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873b11: jle 0x873d52 */ if ((fZ||fS!=fO)) goto L_00873d52;
L_00873b17:; BB(0x00873b17);
    /* 00873b17: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00873b1a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00873b1d: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00873b20: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00873b23: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00873b26: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00873b29: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00873b2c: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
L_00873b2f:; BB(0x00873b2f);
    /* 00873b2f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00873b32: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 00873b35: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00873b38: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00873b3b: lea edx, [eax + edx] */ r_edx = (u32)(r_eax+r_edx);
    /* 00873b3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00873b40: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00873b43: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873b45: jle 0x873b8e */ if ((fZ||fS!=fO)) goto L_00873b8e;
L_00873b47:; BB(0x00873b47);
    /* 00873b47: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
L_00873b4a:; BB(0x00873b4a);
    /* 00873b4a: fld dword ptr [ecx + eax*4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4)));
    /* 00873b4d: fmul dword ptr [0x99a65c] */ ST(0) = ST(0) * R_F32((u32)(0x99a65cu));
    /* 00873b53: fstp qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 00873b56: fld qword ptr [ebp - 0x58] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa8u)));
    /* 00873b59: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00873b5c: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00873b5f: cmp edi, 0x7fff */ {  u32 a = r_edi; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873b65: jle 0x873b6e */ if ((fZ||fS!=fO)) goto L_00873b6e;
L_00873b67:; BB(0x00873b67);
    /* 00873b67: mov edi, 0x7fff */ r_edi = 0x7fffu;
    /* 00873b6c: jmp 0x873b7d */ goto L_00873b7d;
L_00873b6e:; BB(0x00873b6e);
    /* 00873b6e: mov esi, 0xffff8000 */ r_esi = 0xffff8000u;
    /* 00873b73: cmp edi, 0xffff8000 */ {  u32 a = r_edi; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873b79: jge 0x873b7d */ if ((fS==fO)) goto L_00873b7d;
L_00873b7b:; BB(0x00873b7b);
    /* 00873b7b: mov edi, esi */ r_edi = r_esi;
L_00873b7d:; BB(0x00873b7d);
    /* 00873b7d: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 00873b80: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873b83: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873b84: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00873b87: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873b89: jl 0x873b4a */ if ((fS!=fO)) goto L_00873b4a;
L_00873b8b:; BB(0x00873b8b);
    /* 00873b8b: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
L_00873b8e:; BB(0x00873b8e);
    /* 00873b8e: add dword ptr [ebp - 0x14], 2 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00873b92: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00873b93: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00873b96: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873b98: jl 0x873b2f */ if ((fS!=fO)) goto L_00873b2f;
L_00873b9a:; BB(0x00873b9a);
    /* 00873b9a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00873b9d: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00873ba0: jmp 0x873d52 */ goto L_00873d52;
L_00873ba5:; BB(0x00873ba5);
    /* 00873ba5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873ba7: jle 0x873d52 */ if ((fZ||fS!=fO)) goto L_00873d52;
L_00873bad:; BB(0x00873bad);
    /* 00873bad: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00873bb0: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00873bb3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00873bb6: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00873bb9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00873bbc: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00873bbf: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00873bc2: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
L_00873bc5:; BB(0x00873bc5);
    /* 00873bc5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00873bc8: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 00873bcb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00873bce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00873bd1: lea edx, [eax + edx] */ r_edx = (u32)(r_eax+r_edx);
    /* 00873bd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00873bd6: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00873bd9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873bdb: jle 0x873c27 */ if ((fZ||fS!=fO)) goto L_00873c27;
L_00873bdd:; BB(0x00873bdd);
    /* 00873bdd: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
L_00873be0:; BB(0x00873be0);
    /* 00873be0: fld dword ptr [ecx + eax*4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4)));
    /* 00873be3: fmul dword ptr [0x99a65c] */ ST(0) = ST(0) * R_F32((u32)(0x99a65cu));
    /* 00873be9: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 00873bec: fld qword ptr [ebp - 0x60] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa0u)));
    /* 00873bef: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00873bf2: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00873bf5: cmp edi, 0x7fff */ {  u32 a = r_edi; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873bfb: jle 0x873c04 */ if ((fZ||fS!=fO)) goto L_00873c04;
L_00873bfd:; BB(0x00873bfd);
    /* 00873bfd: mov edi, 0x7fff */ r_edi = 0x7fffu;
    /* 00873c02: jmp 0x873c13 */ goto L_00873c13;
L_00873c04:; BB(0x00873c04);
    /* 00873c04: mov esi, 0xffff8000 */ r_esi = 0xffff8000u;
    /* 00873c09: cmp edi, 0xffff8000 */ {  u32 a = r_edi; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873c0f: jge 0x873c13 */ if ((fS==fO)) goto L_00873c13;
L_00873c11:; BB(0x00873c11);
    /* 00873c11: mov edi, esi */ r_edi = r_esi;
L_00873c13:; BB(0x00873c13);
    /* 00873c13: add edi, dword ptr [ebp - 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00873c16: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 00873c19: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873c1c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873c1d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00873c20: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873c22: jl 0x873be0 */ if ((fS!=fO)) goto L_00873be0;
L_00873c24:; BB(0x00873c24);
    /* 00873c24: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
L_00873c27:; BB(0x00873c27);
    /* 00873c27: add dword ptr [ebp - 0x14], 2 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00873c2b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00873c2c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00873c2f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873c31: jl 0x873bc5 */ if ((fS!=fO)) goto L_00873bc5;
L_00873c33:; BB(0x00873c33);
    /* 00873c33: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00873c36: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00873c39: jmp 0x873d52 */ goto L_00873d52;
L_00873c3e:; BB(0x00873c3e);
    /* 00873c3e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00873c40: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00873c43: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00873c46: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873c48: je 0x873cd5 */ if (fZ) goto L_00873cd5;
L_00873c4e:; BB(0x00873c4e);
    /* 00873c4e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873c50: jle 0x873d52 */ if ((fZ||fS!=fO)) goto L_00873d52;
L_00873c56:; BB(0x00873c56);
    /* 00873c56: mov eax, ecx */ r_eax = r_ecx;
    /* 00873c58: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
L_00873c5b:; BB(0x00873c5b);
    /* 00873c5b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00873c5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873c5f: jle 0x873cc8 */ if ((fZ||fS!=fO)) goto L_00873cc8;
L_00873c61:; BB(0x00873c61);
    /* 00873c61: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00873c64: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00873c67: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00873c6a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00873c6d: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
L_00873c70:; BB(0x00873c70);
    /* 00873c70: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00873c73: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00873c76: fld dword ptr [edx + edi*2] */ FPUSH(R_F32((u32)(r_edx+r_edi*2)));
    /* 00873c79: fmul dword ptr [0x99a65c] */ ST(0) = ST(0) * R_F32((u32)(0x99a65cu));
    /* 00873c7f: fstp qword ptr [ebp - 0x68] */ W_F64((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 00873c82: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 00873c85: fistp dword ptr [ebp - 0x40] */ W32((u32)(r_ebp+0xffffffc0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00873c88: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00873c8b: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873c90: jle 0x873c99 */ if ((fZ||fS!=fO)) goto L_00873c99;
L_00873c92:; BB(0x00873c92);
    /* 00873c92: mov eax, 0x7fff */ r_eax = 0x7fffu;
    /* 00873c97: jmp 0x873ca7 */ goto L_00873ca7;
L_00873c99:; BB(0x00873c99);
    /* 00873c99: mov edx, 0xffff8000 */ r_edx = 0xffff8000u;
    /* 00873c9e: cmp eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873ca3: jge 0x873ca7 */ if ((fS==fO)) goto L_00873ca7;
L_00873ca5:; BB(0x00873ca5);
    /* 00873ca5: mov eax, edx */ r_eax = r_edx;
L_00873ca7:; BB(0x00873ca7);
    /* 00873ca7: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873caa: mov edx, eax */ r_edx = r_eax;
    /* 00873cac: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00873caf: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00873cb1: mov byte ptr [esi + 1], al */ W8((u32)(r_esi+0x1u), (u8)r_eax);
    /* 00873cb4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00873cb5: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00873cb8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00873cbb: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873cbd: jl 0x873c70 */ if ((fS!=fO)) goto L_00873c70;
L_00873cbf:; BB(0x00873cbf);
    /* 00873cbf: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 00873cc2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00873cc5: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
L_00873cc8:; BB(0x00873cc8);
    /* 00873cc8: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873cc9: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873ccb: jl 0x873c5b */ if ((fS!=fO)) goto L_00873c5b;
L_00873ccd:; BB(0x00873ccd);
    /* 00873ccd: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00873cd0: jmp 0x873d52 */ goto L_00873d52;
L_00873cd5:; BB(0x00873cd5);
    /* 00873cd5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873cd7: jle 0x873d52 */ if ((fZ||fS!=fO)) goto L_00873d52;
L_00873cd9:; BB(0x00873cd9);
    /* 00873cd9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
L_00873cdc:; BB(0x00873cdc);
    /* 00873cdc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00873cde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873ce0: jle 0x873d4a */ if ((fZ||fS!=fO)) goto L_00873d4a;
L_00873ce2:; BB(0x00873ce2);
    /* 00873ce2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00873ce5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00873ce8: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00873ceb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00873cee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
L_00873cf1:; BB(0x00873cf1);
    /* 00873cf1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00873cf4: mov esi, dword ptr [eax + edi*4] */ r_esi = R32((u32)(r_eax+r_edi*4));
    /* 00873cf7: fld dword ptr [esi + edx*2] */ FPUSH(R_F32((u32)(r_esi+r_edx*2)));
    /* 00873cfa: fmul dword ptr [0x99a65c] */ ST(0) = ST(0) * R_F32((u32)(0x99a65cu));
    /* 00873d00: fstp qword ptr [ebp - 0x70] */ W_F64((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 00873d03: fld qword ptr [ebp - 0x70] */ FPUSH(R_F64((u32)(r_ebp+0xffffff90u)));
    /* 00873d06: fistp dword ptr [ebp - 0x44] */ W32((u32)(r_ebp+0xffffffbcu), (u32)fx_int32(ST(0))); FPOP();
    /* 00873d09: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00873d0c: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873d11: jle 0x873d1a */ if ((fZ||fS!=fO)) goto L_00873d1a;
L_00873d13:; BB(0x00873d13);
    /* 00873d13: mov eax, 0x7fff */ r_eax = 0x7fffu;
    /* 00873d18: jmp 0x873d28 */ goto L_00873d28;
L_00873d1a:; BB(0x00873d1a);
    /* 00873d1a: mov esi, 0xffff8000 */ r_esi = 0xffff8000u;
    /* 00873d1f: cmp eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873d24: jge 0x873d28 */ if ((fS==fO)) goto L_00873d28;
L_00873d26:; BB(0x00873d26);
    /* 00873d26: mov eax, esi */ r_eax = r_esi;
L_00873d28:; BB(0x00873d28);
    /* 00873d28: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873d2b: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 00873d2d: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00873d30: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 00873d33: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00873d34: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00873d37: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00873d3a: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873d3c: jl 0x873cf1 */ if ((fS!=fO)) goto L_00873cf1;
L_00873d3e:; BB(0x00873d3e);
    /* 00873d3e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00873d41: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00873d44: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00873d47: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
L_00873d4a:; BB(0x00873d4a);
    /* 00873d4a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873d4b: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873d4d: jl 0x873cdc */ if ((fS!=fO)) goto L_00873cdc;
L_00873d4f:; BB(0x00873d4f);
    /* 00873d4f: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
L_00873d52:; BB(0x00873d52);
    /* 00873d52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00873d53: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00873d56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00873d57: call 0x875a98 */ r_esp -= 4; W32(r_esp, 0x873d5cu); f_00875a98();
    /* 00873d5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873d5f: mov eax, esi */ r_eax = r_esi;
    /* 00873d61: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00873d62: mov ecx, dword ptr [edi + 0x50] */ r_ecx = R32((u32)(r_edi+0x50u));
    /* 00873d65: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00873d67: adc edx, dword ptr [edi + 0x54] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00873d6a: mov dword ptr [edi + 0x50], ecx */ W32((u32)(r_edi+0x50u), r_ecx);
    /* 00873d6d: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 00873d70: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00873d73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 00873d75: je 0x873d7f */ if (fZ) goto L_00873d7f;
L_00873d77:; BB(0x00873d77);
    /* 00873d77: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00873d7a: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 00873d7d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_00873d7f:; BB(0x00873d7f);
    /* 00873d7f: imul esi, dword ptr [ebp - 0x2c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffd4u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00873d83: mov eax, esi */ r_eax = r_esi;
    /* 00873d85: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00873d88: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00873d8b: mov esp, ebp */ r_esp = r_ebp;
    /* 00873d8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00873d8e: mov esp, ebx */ r_esp = r_ebx;
    /* 00873d90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00873d91: ret  */ FN_RET(0x00873508); r_esp += 4; return;
L_00873d92:; BB(0x00873d92);
    /* 00873d92: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00873d95: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00873d98: mov esp, ebp */ r_esp = r_ebp;
    /* 00873d9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00873d9b: mov esp, ebx */ r_esp = r_ebx;
    /* 00873d9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00873d9e: ret  */ FN_RET(0x00873508); r_esp += 4; return;
L_00873d9f:; BB(0x00873d9f);
    /* 00873d9f: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00873da2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873da4: je 0x873daa */ if (fZ) goto L_00873daa;
L_00873da6:; BB(0x00873da6);
    /* 00873da6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00873da8: jmp 0x873daf */ goto L_00873daf;
L_00873daa:; BB(0x00873daa);
    /* 00873daa: mov eax, 0x80 */ r_eax = 0x80u;
L_00873daf:; BB(0x00873daf);
    /* 00873daf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00873db1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873db3: jle 0x873d52 */ if ((fZ||fS!=fO)) goto L_00873d52;
L_00873db5:; BB(0x00873db5);
    /* 00873db5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00873db8:; BB(0x00873db8);
    /* 00873db8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00873dba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00873dbc: jle 0x873e1b */ if ((fZ||fS!=fO)) goto L_00873e1b;
L_00873dbe:; BB(0x00873dbe);
    /* 00873dbe: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00873dc1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00873dc4: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00873dc7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00873dca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
L_00873dcd:; BB(0x00873dcd);
    /* 00873dcd: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00873dd0: mov esi, dword ptr [edx + eax*4] */ r_esi = R32((u32)(r_edx+r_eax*4));
    /* 00873dd3: fld dword ptr [esi + edi*2] */ FPUSH(R_F32((u32)(r_esi+r_edi*2)));
    /* 00873dd6: fmul dword ptr [0x99a658] */ ST(0) = ST(0) * R_F32((u32)(0x99a658u));
    /* 00873ddc: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00873ddf: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 00873de2: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 00873de5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00873de6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00873de9: mov esi, 0xffffff80 */ r_esi = 0xffffff80u;
    /* 00873dee: cmp edx, -0x80 */ {  u32 a = r_edx; u32 b = 0xffffff80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873df1: jge 0x873df5 */ if ((fS==fO)) goto L_00873df5;
L_00873df3:; BB(0x00873df3);
    /* 00873df3: mov edx, esi */ r_edx = r_esi;
L_00873df5:; BB(0x00873df5);
    /* 00873df5: mov esi, 0x7f */ r_esi = 0x7fu;
    /* 00873dfa: cmp edx, 0x7f */ {  u32 a = r_edx; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873dfd: jl 0x873e01 */ if ((fS!=fO)) goto L_00873e01;
L_00873dff:; BB(0x00873dff);
    /* 00873dff: mov edx, esi */ r_edx = r_esi;
L_00873e01:; BB(0x00873e01);
    /* 00873e01: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873e04: mov byte ptr [ecx - 1], dl */ W8((u32)(r_ecx+0xffffffffu), (u8)r_edx);
    /* 00873e07: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00873e08: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00873e0b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873e0d: jl 0x873dcd */ if ((fS!=fO)) goto L_00873dcd;
L_00873e0f:; BB(0x00873e0f);
    /* 00873e0f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00873e12: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00873e15: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00873e18: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
L_00873e1b:; BB(0x00873e1b);
    /* 00873e1b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873e1c: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873e1e: jl 0x873db8 */ if ((fS!=fO)) goto L_00873db8;
L_00873e20:; BB(0x00873e20);
    /* 00873e20: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00873e23: jmp 0x873d52 */ goto L_00873d52;
L_00873e28:; BB(0x00873e28);
    /* 00873e28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00873e2a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00873e2d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00873e30: mov esp, ebp */ r_esp = r_ebp;
    /* 00873e32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00873e33: mov esp, ebx */ r_esp = r_ebx;
    /* 00873e35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00873e36: ret  */ FN_RET(0x00873508); r_esp += 4; return;
L_00873e37:; BB(0x00873e37);
    /* 00873e37: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00873e3a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00873e3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00873e3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00873e40: mov esp, ebx */ r_esp = r_ebx;
    /* 00873e42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00873e43: ret  */ FN_RET(0x00873508); r_esp += 4; return;
}

void f_00873e44(void) /* sub_873E44 */
{
    FN_ENTER(0x00873e44);
    /* 00873e44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00873e45: mov dword ptr [esp], 0xfeedface */ W32((u32)(r_esp), 0xfeedfaceu);
    /* 00873e4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00873e4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00873e4f: ret  */ FN_RET(0x00873e44); r_esp += 4; return;
}

void f_00873e50(void) /* sub_873E50 */
{
    FN_ENTER(0x00873e50);
    /* 00873e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00873e51: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00873e54: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00873e58: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 00873e5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873e5d: je 0x873e8f */ if (fZ) goto L_00873e8f;
L_00873e5f:; BB(0x00873e5f);
    /* 00873e5f: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00873e62: mov esi, eax */ r_esi = r_eax;
    /* 00873e64: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_00873e68:; BB(0x00873e68);
    /* 00873e68: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00873e6b: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00873e6d: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x873e72u); f_00858882();
    /* 00873e72: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00873e74: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00873e76: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00873e79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00873e7a: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x873e7fu); f_00858882();
    /* 00873e7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873e82: mov esi, edi */ r_esi = r_edi;
    /* 00873e84: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873e86: jne 0x873e68 */ if (!fZ) goto L_00873e68;
L_00873e88:; BB(0x00873e88);
    /* 00873e88: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00873e8b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00873e8f:; BB(0x00873e8f);
    /* 00873e8f: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 00873e92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873e94: je 0x873eb7 */ if (fZ) goto L_00873eb7;
L_00873e96:; BB(0x00873e96);
    /* 00873e96: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 00873e99: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873e9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00873e9c: push dword ptr [ebp + 0x44] */ { u32 v = R32((u32)(r_ebp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00873e9f: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x873ea4u); f_00860f6c();
    /* 00873ea4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873ea7: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 00873eaa: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 00873ead: add dword ptr [ebp + 0x4c], eax */ { u32 ad = (u32)(r_ebp+0x4cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00873eb0: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
L_00873eb7:; BB(0x00873eb7);
    /* 00873eb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00873eb9: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 00873ebc: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 00873ebf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00873ec2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00873ec3: ret  */ FN_RET(0x00873e50); r_esp += 4; return;
}

void f_00873ec4(void) /* sub_873EC4 */
{
    FN_ENTER(0x00873ec4);
    /* 00873ec4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00873ec5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00873ec8: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00873ecc: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00873ecf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873ed1: je 0x873ee2 */ if (fZ) goto L_00873ee2;
L_00873ed3:; BB(0x00873ed3);
    /* 00873ed3: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873ed6: je 0x873ee2 */ if (fZ) goto L_00873ee2;
L_00873ed8:; BB(0x00873ed8);
    /* 00873ed8: lea eax, [ebp + 4] */ r_eax = (u32)(r_ebp+0x4u);
    /* 00873edb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00873edc: call 0x877ba8 */ r_esp -= 4; W32(r_esp, 0x873ee1u); f_00877ba8();
    /* 00873ee1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00873ee2:; BB(0x00873ee2);
    /* 00873ee2: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 00873ee5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873ee7: je 0x873f19 */ if (fZ) goto L_00873f19;
L_00873ee9:; BB(0x00873ee9);
    /* 00873ee9: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00873eec: mov esi, eax */ r_esi = r_eax;
    /* 00873eee: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_00873ef2:; BB(0x00873ef2);
    /* 00873ef2: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00873ef5: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00873ef7: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x873efcu); f_00858882();
    /* 00873efc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00873efe: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00873f00: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00873f03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00873f04: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x873f09u); f_00858882();
    /* 00873f09: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873f0c: mov esi, edi */ r_esi = r_edi;
    /* 00873f0e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873f10: jne 0x873ef2 */ if (!fZ) goto L_00873ef2;
L_00873f12:; BB(0x00873f12);
    /* 00873f12: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00873f15: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00873f19:; BB(0x00873f19);
    /* 00873f19: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 00873f1c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873f1e: jne 0x873f25 */ if (!fZ) goto L_00873f25;
L_00873f20:; BB(0x00873f20);
    /* 00873f20: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00873f23: jmp 0x873f46 */ goto L_00873f46;
L_00873f25:; BB(0x00873f25);
    /* 00873f25: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 00873f28: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00873f2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00873f2b: push dword ptr [ebp + 0x44] */ { u32 v = R32((u32)(r_ebp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00873f2e: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x873f33u); f_00860f6c();
    /* 00873f33: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873f36: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 00873f39: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 00873f3c: add dword ptr [ebp + 0x4c], edx */ { u32 ad = (u32)(r_ebp+0x4cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00873f3f: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
L_00873f46:; BB(0x00873f46);
    /* 00873f46: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00873f48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873f4a: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 00873f4d: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 00873f50: je 0x873f59 */ if (fZ) goto L_00873f59;
L_00873f52:; BB(0x00873f52);
    /* 00873f52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00873f53: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x873f58u); f_00858882();
    /* 00873f58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00873f59:; BB(0x00873f59);
    /* 00873f59: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 00873f5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873f5e: je 0x873f67 */ if (fZ) goto L_00873f67;
L_00873f60:; BB(0x00873f60);
    /* 00873f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00873f61: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x873f66u); f_00858882();
    /* 00873f66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00873f67:; BB(0x00873f67);
    /* 00873f67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00873f69: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00873f6c: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00873f6f: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00873f72: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00873f75: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00873f78: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 00873f7b: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 00873f7e: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00873f81: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00873f84: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 00873f87: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 00873f8a: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 00873f8d: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00873f90: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 00873f93: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 00873f96: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 00873f99: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 00873f9c: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 00873f9f: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 00873fa2: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 00873fa5: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 00873fa8: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 00873fab: mov dword ptr [ebp + 0x58], eax */ W32((u32)(r_ebp+0x58u), r_eax);
    /* 00873fae: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 00873fb1: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 00873fb4: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 00873fb7: mov dword ptr [ebp + 0x68], eax */ W32((u32)(r_ebp+0x68u), r_eax);
    /* 00873fba: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 00873fbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00873fbf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00873fc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00873fc3: ret  */ FN_RET(0x00873ec4); r_esp += 4; return;
}

void f_00873fc4(void) /* sub_873FC4 */
{
    FN_ENTER(0x00873fc4);
    /* 00873fc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00873fc5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00873fc6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00873fc7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00873fc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00873fc9: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00873fcd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00873fcf: je 0x87420d */ if (fZ) goto L_0087420d;
L_00873fd5:; BB(0x00873fd5);
    /* 00873fd5: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00873fd8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873fda: je 0x874213 */ if (fZ) goto L_00874213;
L_00873fe0:; BB(0x00873fe0);
    /* 00873fe0: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
L_00873fe3:; BB(0x00873fe3);
    /* 00873fe3: mov ebp, dword ptr [edi + 0x68] */ r_ebp = R32((u32)(r_edi+0x68u));
    /* 00873fe6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873fe8: je 0x874145 */ if (fZ) goto L_00874145;
L_00873fee:; BB(0x00873fee);
    /* 00873fee: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00873ff1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00873ff3: je 0x874006 */ if (fZ) goto L_00874006;
L_00873ff5:; BB(0x00873ff5);
    /* 00873ff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00873ff6: call 0x877e00 */ r_esp -= 4; W32(r_esp, 0x873ffbu); f_00877e00();
    /* 00873ffb: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 00873ffe: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x874003u); f_00858882();
    /* 00874003: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00874006:; BB(0x00874006);
    /* 00874006: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00874009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087400b: je 0x874029 */ if (fZ) goto L_00874029;
L_0087400d:; BB(0x0087400d);
    /* 0087400d: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0087400f: call 0x877e58 */ r_esp -= 4; W32(r_esp, 0x874014u); f_00877e58();
    /* 00874014: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00874017: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00874019: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x87401eu); f_00858882();
    /* 0087401e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00874021: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x874026u); f_00858882();
    /* 00874026: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00874029:; BB(0x00874029);
    /* 00874029: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0087402c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087402e: je 0x87404c */ if (fZ) goto L_0087404c;
L_00874030:; BB(0x00874030);
    /* 00874030: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00874032: call 0x877e58 */ r_esp -= 4; W32(r_esp, 0x874037u); f_00877e58();
    /* 00874037: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0087403a: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0087403c: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x874041u); f_00858882();
    /* 00874041: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00874044: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x874049u); f_00858882();
    /* 00874049: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0087404c:; BB(0x0087404c);
    /* 0087404c: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0087404f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874051: je 0x87408b */ if (fZ) goto L_0087408b;
L_00874053:; BB(0x00874053);
    /* 00874053: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00874055: cmp dword ptr [ebx + 0x10], 0 */ {  u32 a = R32((u32)(r_ebx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874059: jle 0x874084 */ if ((fZ||fS!=fO)) goto L_00874084;
L_0087405b:; BB(0x0087405b);
    /* 0087405b: mov edi, edx */ r_edi = r_edx;
    /* 0087405d: jmp 0x874062 */ goto L_00874062;
L_0087405f:; BB(0x0087405f);
    /* 0087405f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
L_00874062:; BB(0x00874062);
    /* 00874062: mov ecx, dword ptr [ebx + edi*4 + 0x320] */ r_ecx = R32((u32)(r_ebx+r_edi*4+0x320u));
    /* 00874069: mov ecx, dword ptr [ecx*4 + 0xa25340] */ r_ecx = R32((u32)(r_ecx*4+0xa25340u));
    /* 00874070: push dword ptr [eax + edi*4] */ { u32 v = R32((u32)(r_eax+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00874073: call dword ptr [ecx + 0x10] */ { u32 t = R32((u32)(r_ecx+0x10u)); r_esp -= 4; W32(r_esp, 0x874076u); call_ind(t); }
    /* 00874076: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00874077: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00874078: cmp edi, dword ptr [ebx + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087407b: jl 0x87405f */ if ((fS!=fO)) goto L_0087405f;
L_0087407d:; BB(0x0087407d);
    /* 0087407d: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00874081: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
L_00874084:; BB(0x00874084);
    /* 00874084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00874085: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x87408au); f_00858882();
    /* 0087408a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0087408b:; BB(0x0087408b);
    /* 0087408b: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 0087408e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874090: je 0x8740ca */ if (fZ) goto L_008740ca;
L_00874092:; BB(0x00874092);
    /* 00874092: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00874094: cmp dword ptr [ebx + 0x14], 0 */ {  u32 a = R32((u32)(r_ebx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874098: jle 0x8740c3 */ if ((fZ||fS!=fO)) goto L_008740c3;
L_0087409a:; BB(0x0087409a);
    /* 0087409a: mov edi, edx */ r_edi = r_edx;
    /* 0087409c: jmp 0x8740a1 */ goto L_008740a1;
L_0087409e:; BB(0x0087409e);
    /* 0087409e: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
L_008740a1:; BB(0x008740a1);
    /* 008740a1: mov ecx, dword ptr [ebx + edi*4 + 0x520] */ r_ecx = R32((u32)(r_ebx+r_edi*4+0x520u));
    /* 008740a8: mov ecx, dword ptr [ecx*4 + 0xa25348] */ r_ecx = R32((u32)(r_ecx*4+0xa25348u));
    /* 008740af: push dword ptr [eax + edi*4] */ { u32 v = R32((u32)(r_eax+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 008740b2: call dword ptr [ecx + 0x10] */ { u32 t = R32((u32)(r_ecx+0x10u)); r_esp -= 4; W32(r_esp, 0x8740b5u); call_ind(t); }
    /* 008740b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008740b6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008740b7: cmp edi, dword ptr [ebx + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008740ba: jl 0x87409e */ if ((fS!=fO)) goto L_0087409e;
L_008740bc:; BB(0x008740bc);
    /* 008740bc: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008740c0: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
L_008740c3:; BB(0x008740c3);
    /* 008740c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008740c4: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8740c9u); f_00858882();
    /* 008740c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008740ca:; BB(0x008740ca);
    /* 008740ca: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 008740cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008740cf: je 0x874119 */ if (fZ) goto L_00874119;
L_008740d1:; BB(0x008740d1);
    /* 008740d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008740d3: cmp dword ptr [ebx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008740d7: jle 0x874112 */ if ((fZ||fS!=fO)) goto L_00874112;
L_008740d9:; BB(0x008740d9);
    /* 008740d9: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 008740dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008740de: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008740e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008740e2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008740e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008740e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008740e8: mov edi, ebx */ r_edi = r_ebx;
    /* 008740ea: mov ebx, edx */ r_ebx = r_edx;
    /* 008740ec: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 008740ef: mov esi, ecx */ r_esi = r_ecx;
    /* 008740f1: jmp 0x8740f6 */ goto L_008740f6;
L_008740f3:; BB(0x008740f3);
    /* 008740f3: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
L_008740f6:; BB(0x008740f6);
    /* 008740f6: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008740f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008740f9: call 0x8790bc */ r_esp -= 4; W32(r_esp, 0x8740feu); f_008790bc();
    /* 008740fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008740ff: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00874102: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00874103: cmp esi, dword ptr [edi + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874106: jl 0x8740f3 */ if ((fS!=fO)) goto L_008740f3;
L_00874108:; BB(0x00874108);
    /* 00874108: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0087410b: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0087410f: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
L_00874112:; BB(0x00874112);
    /* 00874112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00874113: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x874118u); f_00858882();
    /* 00874118: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00874119:; BB(0x00874119);
    /* 00874119: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0087411c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087411e: je 0x874127 */ if (fZ) goto L_00874127;
L_00874120:; BB(0x00874120);
    /* 00874120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00874121: call 0x87906c */ r_esp -= 4; W32(r_esp, 0x874126u); f_0087906c();
    /* 00874126: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00874127:; BB(0x00874127);
    /* 00874127: lea eax, [ebp + 0x50] */ r_eax = (u32)(r_ebp+0x50u);
    /* 0087412a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087412b: call 0x8805ac */ r_esp -= 4; W32(r_esp, 0x874130u); f_008805ac();
    /* 00874130: lea eax, [ebp + 0x14] */ r_eax = (u32)(r_ebp+0x14u);
    /* 00874133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00874134: call 0x883ee0 */ r_esp -= 4; W32(r_esp, 0x874139u); f_00883ee0();
    /* 00874139: lea eax, [ebp + 0x20] */ r_eax = (u32)(r_ebp+0x20u);
    /* 0087413c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087413d: call 0x883ee0 */ r_esp -= 4; W32(r_esp, 0x874142u); f_00883ee0();
    /* 00874142: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00874145:; BB(0x00874145);
    /* 00874145: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00874148: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087414a: je 0x874183 */ if (fZ) goto L_00874183;
L_0087414c:; BB(0x0087414c);
    /* 0087414c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0087414e: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00874151: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00874153: jle 0x87416e */ if ((fZ||fS!=fO)) goto L_0087416e;
L_00874155:; BB(0x00874155);
    /* 00874155: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 00874158: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087415a: je 0x874169 */ if (fZ) goto L_00874169;
L_0087415c:; BB(0x0087415c);
    /* 0087415c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0087415d: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x874162u); f_00858882();
    /* 00874162: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00874163: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00874166: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
L_00874169:; BB(0x00874169);
    /* 00874169: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087416a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087416c: jl 0x874155 */ if ((fS!=fO)) goto L_00874155;
L_0087416e:; BB(0x0087416e);
    /* 0087416e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087416f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x874174u); f_00858882();
    /* 00874174: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00874175: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00874178: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087417a: je 0x874183 */ if (fZ) goto L_00874183;
L_0087417c:; BB(0x0087417c);
    /* 0087417c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087417d: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x874182u); f_00858882();
    /* 00874182: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00874183:; BB(0x00874183);
    /* 00874183: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874185: je 0x8741b8 */ if (fZ) goto L_008741b8;
L_00874187:; BB(0x00874187);
    /* 00874187: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0087418a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087418c: je 0x874195 */ if (fZ) goto L_00874195;
L_0087418e:; BB(0x0087418e);
    /* 0087418e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087418f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x874194u); f_00858882();
    /* 00874194: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00874195:; BB(0x00874195);
    /* 00874195: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00874198: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087419a: je 0x8741a3 */ if (fZ) goto L_008741a3;
L_0087419c:; BB(0x0087419c);
    /* 0087419c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087419d: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8741a2u); f_00858882();
    /* 008741a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008741a3:; BB(0x008741a3);
    /* 008741a3: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 008741a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008741a8: je 0x8741b1 */ if (fZ) goto L_008741b1;
L_008741aa:; BB(0x008741aa);
    /* 008741aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008741ab: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8741b0u); f_00858882();
    /* 008741b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008741b1:; BB(0x008741b1);
    /* 008741b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008741b2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8741b7u); f_00858882();
    /* 008741b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008741b8:; BB(0x008741b8);
    /* 008741b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008741ba: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 008741bc: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 008741bf: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 008741c2: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 008741c5: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 008741c8: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 008741cb: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 008741ce: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 008741d1: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 008741d4: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 008741d7: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 008741da: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 008741dd: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 008741e0: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 008741e3: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 008741e6: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 008741e9: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 008741ec: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 008741ef: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 008741f2: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 008741f5: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 008741f8: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 008741fb: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 008741fe: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 00874201: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 00874204: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 00874207: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 0087420a: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
L_0087420d:; BB(0x0087420d);
    /* 0087420d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087420e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087420f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00874210: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00874211: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00874212: ret  */ FN_RET(0x00873fc4); r_esp += 4; return;
L_00874213:; BB(0x00874213);
    /* 00874213: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00874215: jmp 0x873fe3 */ goto L_00873fe3;
}

