#include "protos.h"

void f_00582040(void) /* sub_582040 */
{
    FN_ENTER(0x00582040);
    /* 00582040: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582043: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 00582049: fcomp dword ptr [0x927d24] */ fx_compare(ST(0), R_F32((u32)(0x927d24u))); FPOP();
    /* 0058204f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00582051: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00582052: jb 0x582083 */ if (fC) goto L_00582083;
L_00582054:; BB(0x00582054);
    /* 00582054: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00582058: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058205a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0058205e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00582060: mov esi, eax */ r_esi = r_eax;
L_00582062:; BB(0x00582062);
    /* 00582062: mov edx, dword ptr [ebx + esi*4 + 0x39c] */ r_edx = R32((u32)(r_ebx+r_esi*4+0x39cu));
    /* 00582069: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0058206c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058206e: je 0x5820f8 */ if (fZ) goto L_005820f8;
L_00582074:; BB(0x00582074);
    /* 00582074: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00582077: jl 0x582062 */ if ((fS!=fO)) goto L_00582062;
L_00582079:; BB(0x00582079);
    /* 00582079: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0058207d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058207f: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00582083:; BB(0x00582083);
    /* 00582083: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00582089: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058208b: jne 0x582091 */ if (!fZ) goto L_00582091;
L_0058208d:; BB(0x0058208d);
    /* 0058208d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582090: ret  */ FN_RET(0x00582040); r_esp += 4; return;
L_00582091:; BB(0x00582091);
    /* 00582091: mov dword ptr [ecx + 0x37c], 8 */ W32((u32)(r_ecx+0x37cu), 0x8u);
    /* 0058209b: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0058209f: lea edx, [ecx + 0x39c] */ r_edx = (u32)(r_ecx+0x39cu);
    /* 005820a5: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005820a9: mov esi, ecx */ r_esi = r_ecx;
    /* 005820ab: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005820ae: lea eax, [ecx + 0x3a4] */ r_eax = (u32)(r_ecx+0x3a4u);
    /* 005820b4: mov ebx, eax */ r_ebx = r_eax;
    /* 005820b6: mov ebp, edx */ r_ebp = r_edx;
L_005820b8:; BB(0x005820b8);
    /* 005820b8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005820bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005820bd: je 0x5820cd */ if (fZ) goto L_005820cd;
L_005820bf:; BB(0x005820bf);
    /* 005820bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005820c0: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5820c5u); f_005cdcc0();
    /* 005820c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005820c6: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
L_005820cd:; BB(0x005820cd);
    /* 005820cd: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005820d0: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005820d2: ja 0x5820b8 */ if ((!fC&&!fZ)) goto L_005820b8;
L_005820d4:; BB(0x005820d4);
    /* 005820d4: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005820d8: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005820db: mov ecx, esi */ r_ecx = r_esi;
    /* 005820dd: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005820e1: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 005820e7: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 005820ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005820f0: je 0x5820f4 */ if (fZ) goto L_005820f4;
L_005820f2:; BB(0x005820f2);
    /* 005820f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5820f4u); call_ind(t); }
L_005820f4:; BB(0x005820f4);
    /* 005820f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005820f7: ret  */ FN_RET(0x00582040); r_esp += 4; return;
L_005820f8:; BB(0x005820f8);
    /* 005820f8: push dword ptr [esi*4 + 0x927d18] */ { u32 v = R32((u32)(r_esi*4+0x927d18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005820ff: mov edx, dword ptr [esi*4 + 0x927d10] */ r_edx = R32((u32)(r_esi*4+0x927d10u));
    /* 00582106: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00582108: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058210a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0058210d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058210f: lea edx, [ebx + eax + 0x3a8] */ r_edx = (u32)(r_ebx+r_eax+0x3a8u);
    /* 00582116: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00582117: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x58211cu); f_00509590();
    /* 0058211c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058211f: mov dword ptr [ebx + esi*4 + 0x398], eax */ W32((u32)(r_ebx+r_esi*4+0x398u), r_eax);
    /* 00582126: jmp 0x582074 */ goto L_00582074;
}

void f_0058212c(void) /* sub_58212C */
{
    FN_ENTER(0x0058212c);
    /* 0058212c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058212d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582130: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00582132: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00582138: fcomp dword ptr [0x927d28] */ fx_compare(ST(0), R_F32((u32)(0x927d28u))); FPOP();
    /* 0058213e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00582140: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00582141: jb 0x58215e */ if (fC) goto L_0058215e;
L_00582143:; BB(0x00582143);
    /* 00582143: mov eax, dword ptr [ebx + 0x39c] */ r_eax = R32((u32)(r_ebx+0x39cu));
    /* 00582149: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058214b: je 0x58215e */ if (fZ) goto L_0058215e;
L_0058214d:; BB(0x0058214d);
    /* 0058214d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058214e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x582153u); f_005cdcc0();
    /* 00582153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582154: mov dword ptr [ebx + 0x39c], 0 */ W32((u32)(r_ebx+0x39cu), 0x0u);
L_0058215e:; BB(0x0058215e);
    /* 0058215e: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00582164: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00582167: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 0058216d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058216f: jg 0x5821dd */ if ((!fZ&&fS==fO)) goto L_005821dd;
L_00582171:; BB(0x00582171);
    /* 00582171: mov eax, dword ptr [ebx + 0x3f4] */ r_eax = R32((u32)(r_ebx+0x3f4u));
    /* 00582177: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00582179: jne 0x5821e2 */ if (!fZ) goto L_005821e2;
L_0058217b:; BB(0x0058217b);
    /* 0058217b: mov eax, dword ptr [ebx + 0x3f8] */ r_eax = R32((u32)(r_ebx+0x3f8u));
    /* 00582181: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00582184: jge 0x5821e2 */ if ((fS==fO)) goto L_005821e2;
L_00582186:; BB(0x00582186);
    /* 00582186: mov dword ptr [ebx + 0x37c], 0xd */ W32((u32)(r_ebx+0x37cu), 0xdu);
    /* 00582190: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00582193: lea edx, [ebx + 0x39c] */ r_edx = (u32)(r_ebx+0x39cu);
    /* 00582199: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0058219d: lea eax, [ebx + 0x3a4] */ r_eax = (u32)(r_ebx+0x3a4u);
    /* 005821a3: mov ebp, eax */ r_ebp = r_eax;
    /* 005821a5: mov edi, edx */ r_edi = r_edx;
L_005821a7:; BB(0x005821a7);
    /* 005821a7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005821a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005821ab: je 0x5821ba */ if (fZ) goto L_005821ba;
L_005821ad:; BB(0x005821ad);
    /* 005821ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005821ae: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5821b3u); f_005cdcc0();
    /* 005821b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005821b4: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_005821ba:; BB(0x005821ba);
    /* 005821ba: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005821bd: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005821bf: ja 0x5821a7 */ if ((!fC&&!fZ)) goto L_005821a7;
L_005821c1:; BB(0x005821c1);
    /* 005821c1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 005821c4: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 005821c8: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 005821ce: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 005821d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005821d7: je 0x5821dd */ if (fZ) goto L_005821dd;
L_005821d9:; BB(0x005821d9);
    /* 005821d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005821db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5821ddu); call_ind(t); }
L_005821dd:; BB(0x005821dd);
    /* 005821dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005821e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005821e1: ret  */ FN_RET(0x0058212c); r_esp += 4; return;
L_005821e2:; BB(0x005821e2);
    /* 005821e2: mov dword ptr [ebx + 0x37c], 3 */ W32((u32)(r_ebx+0x37cu), 0x3u);
    /* 005821ec: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005821ef: lea edx, [ebx + 0x39c] */ r_edx = (u32)(r_ebx+0x39cu);
    /* 005821f5: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 005821f9: lea eax, [ebx + 0x3a4] */ r_eax = (u32)(r_ebx+0x3a4u);
    /* 005821ff: mov ebp, eax */ r_ebp = r_eax;
    /* 00582201: mov edi, edx */ r_edi = r_edx;
L_00582203:; BB(0x00582203);
    /* 00582203: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00582205: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582207: je 0x582216 */ if (fZ) goto L_00582216;
L_00582209:; BB(0x00582209);
    /* 00582209: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058220a: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x58220fu); f_005cdcc0();
    /* 0058220f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582210: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00582216:; BB(0x00582216);
    /* 00582216: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00582219: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0058221b: ja 0x582203 */ if ((!fC&&!fZ)) goto L_00582203;
L_0058221d:; BB(0x0058221d);
    /* 0058221d: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00582220: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00582224: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0058222a: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00582231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582233: je 0x582239 */ if (fZ) goto L_00582239;
L_00582235:; BB(0x00582235);
    /* 00582235: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00582237: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582239u); call_ind(t); }
L_00582239:; BB(0x00582239);
    /* 00582239: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058223c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058223d: ret  */ FN_RET(0x0058212c); r_esp += 4; return;
}

void f_00582240(void) /* sub_582240 */
{
    FN_ENTER(0x00582240);
    /* 00582240: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00582241: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582244: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00582246: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0058224c: fcom dword ptr [0x927d2c] */ fx_compare(ST(0), R_F32((u32)(0x927d2cu))); 
    /* 00582252: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00582254: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00582255: jb 0x582275 */ if (fC) goto L_00582275;
L_00582257:; BB(0x00582257);
    /* 00582257: fcomp dword ptr [0x927e2c] */ fx_compare(ST(0), R_F32((u32)(0x927e2cu))); FPOP();
    /* 0058225d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058225f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00582260: jae 0x582277 */ if (!fC) goto L_00582277;
L_00582262:; BB(0x00582262);
    /* 00582262: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582267: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0058226a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058226b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x582270u); f_0050b510();
    /* 00582270: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00582273: jmp 0x582277 */ goto L_00582277;
L_00582275:; BB(0x00582275);
    /* 00582275: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00582277:; BB(0x00582277);
    /* 00582277: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0058227d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058227f: jne 0x582286 */ if (!fZ) goto L_00582286;
L_00582281:; BB(0x00582281);
    /* 00582281: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582284: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00582285: ret  */ FN_RET(0x00582240); r_esp += 4; return;
L_00582286:; BB(0x00582286);
    /* 00582286: mov dword ptr [ebx + 0x37c], 0xa */ W32((u32)(r_ebx+0x37cu), 0xau);
    /* 00582290: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00582293: lea edx, [ebx + 0x39c] */ r_edx = (u32)(r_ebx+0x39cu);
    /* 00582299: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0058229d: lea eax, [ebx + 0x3a4] */ r_eax = (u32)(r_ebx+0x3a4u);
    /* 005822a3: mov ebp, eax */ r_ebp = r_eax;
    /* 005822a5: mov edi, edx */ r_edi = r_edx;
L_005822a7:; BB(0x005822a7);
    /* 005822a7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005822a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005822ab: je 0x5822ba */ if (fZ) goto L_005822ba;
L_005822ad:; BB(0x005822ad);
    /* 005822ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005822ae: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5822b3u); f_005cdcc0();
    /* 005822b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005822b4: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_005822ba:; BB(0x005822ba);
    /* 005822ba: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005822bd: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005822bf: ja 0x5822a7 */ if ((!fC&&!fZ)) goto L_005822a7;
L_005822c1:; BB(0x005822c1);
    /* 005822c1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 005822c4: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 005822c8: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 005822ce: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 005822d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005822d7: je 0x5822dd */ if (fZ) goto L_005822dd;
L_005822d9:; BB(0x005822d9);
    /* 005822d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005822db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5822ddu); call_ind(t); }
L_005822dd:; BB(0x005822dd);
    /* 005822dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005822e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005822e1: ret  */ FN_RET(0x00582240); r_esp += 4; return;
}

void f_005822e4(void) /* sub_5822E4 */
{
    FN_ENTER(0x005822e4);
    /* 005822e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005822e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005822e6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005822e9: mov esi, ecx */ r_esi = r_ecx;
    /* 005822eb: mov ecx, dword ptr [esi + 0x3ec] */ r_ecx = R32((u32)(r_esi+0x3ecu));
    /* 005822f1: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 005822f7: movzx ebp, word ptr [ecx + 0x334] */ r_ebp = (u32)R16((u32)(r_ecx+0x334u));
    /* 005822fe: movzx eax, word ptr [edx + 0x334] */ r_eax = (u32)R16((u32)(r_edx+0x334u));
    /* 00582305: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00582307: mov word ptr [esi + 0x334], bp */ W16((u32)(r_esi+0x334u), (u16)r_ebp);
    /* 0058230e: mov ebp, dword ptr [ecx + 0x380] */ r_ebp = R32((u32)(r_ecx+0x380u));
    /* 00582314: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582317: jne 0x58233d */ if (!fZ) goto L_0058233d;
L_00582319:; BB(0x00582319);
    /* 00582319: mov eax, dword ptr [edx + 0x380] */ r_eax = R32((u32)(r_edx+0x380u));
    /* 0058231f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582322: jne 0x58233d */ if (!fZ) goto L_0058233d;
L_00582324:; BB(0x00582324);
    /* 00582324: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00582325: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x58232au); f_008113e4();
    /* 0058232a: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0058232e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00582333: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00582337: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058233a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058233b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058233c: ret  */ FN_RET(0x005822e4); r_esp += 4; return;
L_0058233d:; BB(0x0058233d);
    /* 0058233d: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582340: je 0x582515 */ if (fZ) goto L_00582515;
L_00582346:; BB(0x00582346);
    /* 00582346: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582349: je 0x582515 */ if (fZ) goto L_00582515;
L_0058234f:; BB(0x0058234f);
    /* 0058234f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00582351:; BB(0x00582351);
    /* 00582351: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582353: jne 0x5824d5 */ if (!fZ) goto L_005824d5;
L_00582359:; BB(0x00582359);
    /* 00582359: mov eax, dword ptr [edx + 0x380] */ r_eax = R32((u32)(r_edx+0x380u));
    /* 0058235f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582362: je 0x58250b */ if (fZ) goto L_0058250b;
L_00582368:; BB(0x00582368);
    /* 00582368: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058236b: je 0x58250b */ if (fZ) goto L_0058250b;
L_00582371:; BB(0x00582371);
    /* 00582371: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00582373:; BB(0x00582373);
    /* 00582373: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582375: jne 0x5824d5 */ if (!fZ) goto L_005824d5;
L_0058237b:; BB(0x0058237b);
    /* 0058237b: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00582381: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00582384: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 0058238a: je 0x582392 */ if (fZ) goto L_00582392;
L_0058238c:; BB(0x0058238c);
    /* 0058238c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0058238e: jge 0x582404 */ if ((fS==fO)) goto L_00582404;
L_00582390:; BB(0x00582390);
    /* 00582390: jmp 0x58240a */ goto L_0058240a;
L_00582392:; BB(0x00582392);
    /* 00582392: mov ebp, dword ptr [ecx + 0x380] */ r_ebp = R32((u32)(r_ecx+0x380u));
    /* 00582398: cmp ebp, 0xb */ {  u32 a = r_ebp; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058239b: je 0x5823b5 */ if (fZ) goto L_005823b5;
L_0058239d:; BB(0x0058239d);
    /* 0058239d: mov edx, dword ptr [edx + 0x380] */ r_edx = R32((u32)(r_edx+0x380u));
    /* 005823a3: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005823a6: jne 0x5823af */ if (!fZ) goto L_005823af;
L_005823a8:; BB(0x005823a8);
    /* 005823a8: mov edx, 1 */ r_edx = 0x1u;
    /* 005823ad: jmp 0x5823b1 */ goto L_005823b1;
L_005823af:; BB(0x005823af);
    /* 005823af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005823b1:; BB(0x005823b1);
    /* 005823b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005823b3: je 0x5823e7 */ if (fZ) goto L_005823e7;
L_005823b5:; BB(0x005823b5);
    /* 005823b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005823b8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005823bb: fadd dword ptr [0x927e28] */ ST(0) = ST(0) + R_F32((u32)(0x927e28u));
    /* 005823c1: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005823c5: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005823ca: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005823cf: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005823d3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005823d7: fistp dword ptr [esi + 0x390] */ W32((u32)(r_esi+0x390u), (u32)fx_int32(ST(0))); FPOP();
    /* 005823dd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005823e1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005823e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005823e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005823e6: ret  */ FN_RET(0x005822e4); r_esp += 4; return;
L_005823e7:; BB(0x005823e7);
    /* 005823e7: mov ecx, esi */ r_ecx = r_esi;
    /* 005823e9: call 0x582520 */ r_esp -= 4; W32(r_esp, 0x5823eeu); f_00582520();
    /* 005823ee: mov ecx, dword ptr [esi + 0x3ec] */ r_ecx = R32((u32)(r_esi+0x3ecu));
    /* 005823f4: call 0x587098 */ r_esp -= 4; W32(r_esp, 0x5823f9u); f_00587098();
    /* 005823f9: mov ecx, dword ptr [esi + 0x3f0] */ r_ecx = R32((u32)(r_esi+0x3f0u));
    /* 005823ff: call 0x587098 */ r_esp -= 4; W32(r_esp, 0x582404u); f_00587098();
L_00582404:; BB(0x00582404);
    /* 00582404: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582407: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582408: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00582409: ret  */ FN_RET(0x005822e4); r_esp += 4; return;
L_0058240a:; BB(0x0058240a);
    /* 0058240a: mov ebp, dword ptr [ecx + 0x380] */ r_ebp = R32((u32)(r_ecx+0x380u));
    /* 00582410: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582413: je 0x5824f3 */ if (fZ) goto L_005824f3;
L_00582419:; BB(0x00582419);
    /* 00582419: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0058241b:; BB(0x0058241b);
    /* 0058241b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058241d: je 0x582434 */ if (fZ) goto L_00582434;
L_0058241f:; BB(0x0058241f);
    /* 0058241f: mov ebp, dword ptr [edx + 0x380] */ r_ebp = R32((u32)(r_edx+0x380u));
    /* 00582425: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582428: je 0x5824db */ if (fZ) goto L_005824db;
L_0058242e:; BB(0x0058242e);
    /* 0058242e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00582430:; BB(0x00582430);
    /* 00582430: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582432: jne 0x58245b */ if (!fZ) goto L_0058245b;
L_00582434:; BB(0x00582434);
    /* 00582434: cmp eax, 0xfffffed4 */ {  u32 a = r_eax; u32 b = 0xfffffed4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00582439: jge 0x582404 */ if ((fS==fO)) goto L_00582404;
L_0058243b:; BB(0x0058243b);
    /* 0058243b: call 0x58718c */ r_esp -= 4; W32(r_esp, 0x582440u); f_0058718c();
    /* 00582440: mov ecx, dword ptr [esi + 0x3f0] */ r_ecx = R32((u32)(r_esi+0x3f0u));
    /* 00582446: call 0x58718c */ r_esp -= 4; W32(r_esp, 0x58244bu); f_0058718c();
    /* 0058244b: mov dword ptr [esi + 0x390], 0x384 */ W32((u32)(r_esi+0x390u), 0x384u);
    /* 00582455: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582459: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058245a: ret  */ FN_RET(0x005822e4); r_esp += 4; return;
L_0058245b:; BB(0x0058245b);
    /* 0058245b: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0058245e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00582460: jne 0x582476 */ if (!fZ) goto L_00582476;
L_00582462:; BB(0x00582462);
    /* 00582462: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00582465: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00582467: je 0x582470 */ if (fZ) goto L_00582470;
L_00582469:; BB(0x00582469);
    /* 00582469: mov eax, 1 */ r_eax = 0x1u;
    /* 0058246e: jmp 0x582472 */ goto L_00582472;
L_00582470:; BB(0x00582470);
    /* 00582470: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00582472:; BB(0x00582472);
    /* 00582472: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582474: je 0x582486 */ if (fZ) goto L_00582486;
L_00582476:; BB(0x00582476);
    /* 00582476: mov dword ptr [esi + 0x390], 0xffffffff */ W32((u32)(r_esi+0x390u), 0xffffffffu);
    /* 00582480: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582483: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582484: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00582485: ret  */ FN_RET(0x005822e4); r_esp += 4; return;
L_00582486:; BB(0x00582486);
    /* 00582486: mov dword ptr [esi + 0x37c], 0xb */ W32((u32)(r_esi+0x37cu), 0xbu);
    /* 00582490: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00582494: lea eax, [esi + 0x39c] */ r_eax = (u32)(r_esi+0x39cu);
    /* 0058249a: lea ebp, [esi + 0x3a4] */ r_ebp = (u32)(r_esi+0x3a4u);
    /* 005824a0: mov edi, eax */ r_edi = r_eax;
L_005824a2:; BB(0x005824a2);
    /* 005824a2: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005824a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005824a6: je 0x5824b5 */ if (fZ) goto L_005824b5;
L_005824a8:; BB(0x005824a8);
    /* 005824a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005824a9: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5824aeu); f_005cdcc0();
    /* 005824ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005824af: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_005824b5:; BB(0x005824b5);
    /* 005824b5: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005824b8: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005824ba: ja 0x5824a2 */ if ((!fC&&!fZ)) goto L_005824a2;
L_005824bc:; BB(0x005824bc);
    /* 005824bc: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 005824c0: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 005824c6: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 005824cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005824cf: je 0x5824d5 */ if (fZ) goto L_005824d5;
L_005824d1:; BB(0x005824d1);
    /* 005824d1: mov ecx, esi */ r_ecx = r_esi;
    /* 005824d3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5824d5u); call_ind(t); }
L_005824d5:; BB(0x005824d5);
    /* 005824d5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005824d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005824d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005824da: ret  */ FN_RET(0x005822e4); r_esp += 4; return;
L_005824db:; BB(0x005824db);
    /* 005824db: mov ebp, dword ptr [edx + 0x3bc] */ r_ebp = R32((u32)(r_edx+0x3bcu));
    /* 005824e1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005824e3: jge 0x58242e */ if ((fS==fO)) goto L_0058242e;
L_005824e9:; BB(0x005824e9);
    /* 005824e9: mov ebp, 1 */ r_ebp = 0x1u;
    /* 005824ee: jmp 0x582430 */ goto L_00582430;
L_005824f3:; BB(0x005824f3);
    /* 005824f3: mov ebp, dword ptr [ecx + 0x3bc] */ r_ebp = R32((u32)(r_ecx+0x3bcu));
    /* 005824f9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005824fb: jge 0x582419 */ if ((fS==fO)) goto L_00582419;
L_00582501:; BB(0x00582501);
    /* 00582501: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00582506: jmp 0x58241b */ goto L_0058241b;
L_0058250b:; BB(0x0058250b);
    /* 0058250b: mov eax, 1 */ r_eax = 0x1u;
    /* 00582510: jmp 0x582373 */ goto L_00582373;
L_00582515:; BB(0x00582515);
    /* 00582515: mov eax, 1 */ r_eax = 0x1u;
    /* 0058251a: jmp 0x582351 */ goto L_00582351;
}

void f_00582520(void) /* sub_582520 */
{
    FN_ENTER(0x00582520);
    /* 00582520: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00582521: mov ebx, esp */ r_ebx = r_esp;
    /* 00582523: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00582526: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00582527: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00582528: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582529: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058252f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00582531: movzx eax, byte ptr [0xa74210] */ r_eax = (u32)R8((u32)(0xa74210u));
    /* 00582538: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058253a: jne 0x58254e */ if (!fZ) goto L_0058254e;
L_0058253c:; BB(0x0058253c);
    /* 0058253c: mov dword ptr [0xa74214], 0x41200000 */ W32((u32)(0xa74214u), 0x41200000u);
    /* 00582546: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00582549: mov byte ptr [0xa74210], al */ W8((u32)(0xa74210u), (u8)r_eax);
L_0058254e:; BB(0x0058254e);
    /* 0058254e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00582550: jne 0x582566 */ if (!fZ) goto L_00582566;
L_00582552:; BB(0x00582552);
    /* 00582552: mov dword ptr [0xa74218], 0x41200000 */ W32((u32)(0xa74218u), 0x41200000u);
    /* 0058255c: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00582561: mov byte ptr [0xa74210], al */ W8((u32)(0xa74210u), (u8)r_eax);
L_00582566:; BB(0x00582566);
    /* 00582566: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0058256a: mov edx, dword ptr [ebp + 0x3ec] */ r_edx = R32((u32)(r_ebp+0x3ecu));
    /* 00582570: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00582573: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00582577: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0058257a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0058257e: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00582581: mov edx, dword ptr [ebp + 0x3f0] */ r_edx = R32((u32)(r_ebp+0x3f0u));
    /* 00582587: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058258a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0058258e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x582593u); f_0082ebac();
    /* 00582593: fld dword ptr [0x927e24] */ FPUSH(R_F32((u32)(0x927e24u)));
    /* 00582599: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0058259d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0058259f: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005825a3: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005825a6: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 005825aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005825ac: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005825ae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005825b0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005825b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005825b4: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005825b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005825ba: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005825be: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 005825c2: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005825c6: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 005825c9: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 005825cd: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 005825d1: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 005825d5: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005825d8: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005825dc: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5825e1u); f_0082f9c4();
    /* 005825e1: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 005825e5: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5825eau); f_0083173c();
    /* 005825ea: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005825ee: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005825f2: fcomp dword ptr [0xa74218] */ fx_compare(ST(0), R_F32((u32)(0xa74218u))); FPOP();
    /* 005825f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005825fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005825fb: jb 0x582634 */ if (fC) goto L_00582634;
L_005825fd:; BB(0x005825fd);
    /* 005825fd: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00582601: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x582606u); f_0082df08();
    /* 00582606: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00582608: fld dword ptr [0xa74218] */ FPUSH(R_F32((u32)(0xa74218u)));
    /* 0058260e: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00582612: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00582614: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00582618: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0058261c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058261e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00582620: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00582622: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00582624: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00582626: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0058262a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058262c: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00582630: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00582634:; BB(0x00582634);
    /* 00582634: fld dword ptr [0x927e20] */ FPUSH(R_F32((u32)(0x927e20u)));
    /* 0058263a: fcom dword ptr [esp + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x2cu))); 
    /* 0058263e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00582640: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00582641: jae 0x582aa3 */ if (!fC) goto L_00582aa3;
L_00582647:; BB(0x00582647);
    /* 00582647: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_0058264b:; BB(0x0058264b);
    /* 0058264b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0058264f: fadd dword ptr [0xa74214] */ ST(0) = ST(0) + R_F32((u32)(0xa74214u));
    /* 00582655: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00582659: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0058265d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058265f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00582661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582662: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x582667u); f_007b4c58();
    /* 00582667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582669: je 0x582a5b */ if (fZ) goto L_00582a5b;
L_0058266f:; BB(0x0058266f);
    /* 0058266f: movzx eax, byte ptr [0xa74278] */ r_eax = (u32)R8((u32)(0xa74278u));
    /* 00582676: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00582678: jne 0x58268c */ if (!fZ) goto L_0058268c;
L_0058267a:; BB(0x0058267a);
    /* 0058267a: mov dword ptr [0xa7427c], 0x41a00000 */ W32((u32)(0xa7427cu), 0x41a00000u);
    /* 00582684: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00582687: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
L_0058268c:; BB(0x0058268c);
    /* 0058268c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058268e: jne 0x5826a2 */ if (!fZ) goto L_005826a2;
L_00582690:; BB(0x00582690);
    /* 00582690: mov dword ptr [0xa74280], 0x41200000 */ W32((u32)(0xa74280u), 0x41200000u);
    /* 0058269a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058269d: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
L_005826a2:; BB(0x005826a2);
    /* 005826a2: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005826a4: jne 0x5826c2 */ if (!fZ) goto L_005826c2;
L_005826a6:; BB(0x005826a6);
    /* 005826a6: fld dword ptr [0x927e3c] */ FPUSH(R_F32((u32)(0x927e3cu)));
    /* 005826ac: mov dword ptr [0xa7425c], 0x41200000 */ W32((u32)(0xa7425cu), 0x41200000u);
    /* 005826b6: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005826bb: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
    /* 005826c0: jmp 0x5826c8 */ goto L_005826c8;
L_005826c2:; BB(0x005826c2);
    /* 005826c2: fld dword ptr [0xa7425c] */ FPUSH(R_F32((u32)(0xa7425cu)));
L_005826c8:; BB(0x005826c8);
    /* 005826c8: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 005826cc: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005826d0: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005826d4: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 005826d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005826da: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005826de: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 005826e2: lea esi, [esp + 0x48] */ r_esi = (u32)(r_esp+0x48u);
    /* 005826e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005826e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005826e9: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5826eeu); f_007b4c58();
    /* 005826ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005826f0: je 0x582a5b */ if (fZ) goto L_00582a5b;
L_005826f6:; BB(0x005826f6);
    /* 005826f6: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 005826fc: fcom dword ptr [0xa7427c] */ fx_compare(ST(0), R_F32((u32)(0xa7427cu))); 
    /* 00582702: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00582704: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 0058270a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058270b: ja 0x582aa7 */ if ((!fC&&!fZ)) goto L_00582aa7;
L_00582711:; BB(0x00582711);
    /* 00582711: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00582713: fmul dword ptr [0x927e18] */ ST(0) = ST(0) * R_F32((u32)(0x927e18u));
    /* 00582719: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058271b: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0058271f: fmul dword ptr [0x927e14] */ ST(0) = ST(0) * R_F32((u32)(0x927e14u));
    /* 00582725: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00582727: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0058272a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0058272e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00582733: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00582737: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0058273b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058273f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00582742: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00582744: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_00582748:; BB(0x00582748);
    /* 00582748: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0058274c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00582750: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00582754: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00582758: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0058275c: mov ecx, esi */ r_ecx = r_esi;
    /* 0058275e: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00582762: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x582767u); f_0082dcbc();
    /* 00582767: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 0058276b: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 0058276f: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00582773: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00582777: fadd dword ptr [0xa7425c] */ ST(0) = ST(0) + R_F32((u32)(0xa7425cu));
    /* 0058277d: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00582781: mov ecx, esi */ r_ecx = r_esi;
    /* 00582783: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x582788u); f_0082ddd8();
    /* 00582788: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 0058278c: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 00582790: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00582794: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 00582798: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058279a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058279c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058279d: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5827a2u); f_007b4c58();
    /* 005827a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005827a4: je 0x582a5b */ if (fZ) goto L_00582a5b;
L_005827aa:; BB(0x005827aa);
    /* 005827aa: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005827ac: cmp esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005827b2: jl 0x582748 */ if ((fS!=fO)) goto L_00582748;
L_005827b4:; BB(0x005827b4);
    /* 005827b4: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005827b8: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 005827be: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 005827c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005827c2: fcom dword ptr [0xa7427c] */ fx_compare(ST(0), R_F32((u32)(0xa7427cu))); 
    /* 005827c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005827ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005827cb: jbe 0x582711 */ if ((fC||fZ)) goto L_00582711;
L_005827d1:; BB(0x005827d1);
    /* 005827d1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005827d3: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005827d5:; BB(0x005827d5);
    /* 005827d5: fld dword ptr [0xa74218] */ FPUSH(R_F32((u32)(0xa74218u)));
    /* 005827db: fld dword ptr [0xa74214] */ FPUSH(R_F32((u32)(0xa74214u)));
    /* 005827e1: mov edi, dword ptr [ebp + 0x3ec] */ r_edi = R32((u32)(r_ebp+0x3ecu));
    /* 005827e7: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005827ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005827ec: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005827f0: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005827f4: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 005827f8: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 005827fc: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 005827ff: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00582803: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00582807: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0058280a: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 0058280e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00582812: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00582816: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0058281a: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0058281e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00582822: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00582826: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x58282bu); f_0082f9c4();
    /* 0058282b: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0058282f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x582834u); f_0083173c();
    /* 00582834: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00582838: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0058283c: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 00582840: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00582842: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00582843: jb 0x5828df */ if (fC) goto L_005828df;
L_00582849:; BB(0x00582849);
    /* 00582849: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0058284d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x582852u); f_0082df08();
    /* 00582852: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00582854: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00582858: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0058285c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0058285e: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00582862: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00582866: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00582868: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0058286a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058286c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058286e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00582870: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00582874: fld dword ptr [0x927e20] */ FPUSH(R_F32((u32)(0x927e20u)));
    /* 0058287a: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 0058287e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00582880: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00582882: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00582886: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00582888: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0058288c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058288d: jae 0x582ab0 */ if (!fC) goto L_00582ab0;
L_00582893:; BB(0x00582893);
    /* 00582893: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_00582897:; BB(0x00582897);
    /* 00582897: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0058289b: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 0058289f: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 005828a3: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 005828a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005828a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005828ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005828ac: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5828b1u); f_007b4c58();
    /* 005828b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005828b3: je 0x582a5b */ if (fZ) goto L_00582a5b;
L_005828b9:; BB(0x005828b9);
    /* 005828b9: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 005828bd: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 005828c1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005828c5: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 005828c9: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 005828cd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5828d2u); f_0082ebac();
    /* 005828d2: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 005828d6: fcomp dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); FPOP();
    /* 005828da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005828dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005828dd: jb 0x582897 */ if (fC) goto L_00582897;
L_005828df:; BB(0x005828df);
    /* 005828df: fld dword ptr [0xa74218] */ FPUSH(R_F32((u32)(0xa74218u)));
    /* 005828e5: fld dword ptr [0xa74214] */ FPUSH(R_F32((u32)(0xa74214u)));
    /* 005828eb: mov edi, dword ptr [ebp + 0x3f0] */ r_edi = R32((u32)(r_ebp+0x3f0u));
    /* 005828f1: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005828f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005828f6: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005828fa: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 005828fe: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 00582902: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 00582906: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 00582909: mov dword ptr [esp + 0x7c], esi */ W32((u32)(r_esp+0x7cu), r_esi);
    /* 0058290d: lea edx, [esp + 0x78] */ r_edx = (u32)(r_esp+0x78u);
    /* 00582911: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00582914: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0058291b: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0058291f: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00582923: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00582927: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0058292b: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0058292f: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00582933: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x582938u); f_0082f9c4();
    /* 00582938: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 0058293c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x582941u); f_0083173c();
    /* 00582941: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00582945: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00582949: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 0058294d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058294f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00582950: jb 0x5829e6 */ if (fC) goto L_005829e6;
L_00582956:; BB(0x00582956);
    /* 00582956: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 0058295a: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x58295fu); f_0082df08();
    /* 0058295f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00582961: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00582965: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00582969: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0058296b: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0058296f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00582971: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00582975: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00582977: fld dword ptr [0x927e20] */ FPUSH(R_F32((u32)(0x927e20u)));
    /* 0058297d: fcom dword ptr [esp + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x24u))); 
    /* 00582981: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00582983: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00582984: jae 0x582a96 */ if (!fC) goto L_00582a96;
L_0058298a:; BB(0x0058298a);
    /* 0058298a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058298c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00582990: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00582994: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00582996: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0058299a: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_0058299e:; BB(0x0058299e);
    /* 0058299e: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 005829a2: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 005829a6: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 005829aa: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 005829ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005829b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005829b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005829b3: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5829b8u); f_007b4c58();
    /* 005829b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005829ba: je 0x582a5b */ if (fZ) goto L_00582a5b;
L_005829c0:; BB(0x005829c0);
    /* 005829c0: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 005829c4: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 005829c8: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005829cc: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 005829d0: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 005829d4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5829d9u); f_0082ebac();
    /* 005829d9: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 005829dd: fcomp dword ptr [esp + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x24u))); FPOP();
    /* 005829e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005829e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005829e4: jb 0x58299e */ if (fC) goto L_0058299e;
L_005829e6:; BB(0x005829e6);
    /* 005829e6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005829ea: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 005829ee: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 005829f1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005829f5: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 005829f8: mov edx, dword ptr [ebp + 0x3ec] */ r_edx = R32((u32)(r_ebp+0x3ecu));
    /* 005829fe: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 00582a01: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 00582a07: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00582a0a: fsub dword ptr [edx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x38u));
    /* 00582a0d: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00582a10: fsub dword ptr [edx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x40u));
    /* 00582a13: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00582a15: fmul qword ptr [0x927d70] */ ST(0) = ST(0) * R_F64((u32)(0x927d70u));
    /* 00582a1b: fdiv qword ptr [0x927d68] */ ST(0) = ST(0) / R_F64((u32)(0x927d68u));
    /* 00582a21: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00582a24: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00582a28: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00582a2d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00582a31: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00582a35: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00582a39: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00582a3c: mov eax, 1 */ r_eax = 0x1u;
    /* 00582a41: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00582a45: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00582a4b: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 00582a4e: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582a54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582a55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00582a56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00582a57: mov esp, ebx */ r_esp = r_ebx;
    /* 00582a59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00582a5a: ret  */ FN_RET(0x00582520); r_esp += 4; return;
L_00582a5b:; BB(0x00582a5b);
    /* 00582a5b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00582a5f: fadd dword ptr [0xa74218] */ ST(0) = ST(0) + R_F32((u32)(0xa74218u));
    /* 00582a65: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00582a69: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 00582a6d: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00582a71: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x582a76u); f_0082ebac();
    /* 00582a76: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00582a7a: fcomp dword ptr [esp + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x2cu))); FPOP();
    /* 00582a7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00582a80: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00582a81: jb 0x58264b */ if (fC) goto L_0058264b;
L_00582a87:; BB(0x00582a87);
    /* 00582a87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00582a89: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582a8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582a90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00582a91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00582a92: mov esp, ebx */ r_esp = r_ebx;
    /* 00582a94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00582a95: ret  */ FN_RET(0x00582520); r_esp += 4; return;
L_00582a96:; BB(0x00582a96);
    /* 00582a96: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00582a98: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00582a9a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00582a9c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00582a9e: jmp 0x5829e6 */ goto L_005829e6;
L_00582aa3:; BB(0x00582aa3);
    /* 00582aa3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00582aa5: jmp 0x582a87 */ goto L_00582a87;
L_00582aa7:; BB(0x00582aa7);
    /* 00582aa7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00582aa9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00582aab: jmp 0x5827d5 */ goto L_005827d5;
L_00582ab0:; BB(0x00582ab0);
    /* 00582ab0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00582ab2: jmp 0x5828df */ goto L_005828df;
}

void f_00582ab8(void) /* sub_582AB8 */
{
    FN_ENTER(0x00582ab8);
    /* 00582ab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582ab9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582abc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00582abe: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 00582ac4: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00582aca: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582acd: je 0x582c0e */ if (fZ) goto L_00582c0e;
L_00582ad3:; BB(0x00582ad3);
    /* 00582ad3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582ad6: je 0x582c0e */ if (fZ) goto L_00582c0e;
L_00582adc:; BB(0x00582adc);
    /* 00582adc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00582ade:; BB(0x00582ade);
    /* 00582ade: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582ae0: jne 0x582b4c */ if (!fZ) goto L_00582b4c;
L_00582ae2:; BB(0x00582ae2);
    /* 00582ae2: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 00582ae8: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00582aee: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582af1: je 0x582c04 */ if (fZ) goto L_00582c04;
L_00582af7:; BB(0x00582af7);
    /* 00582af7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582afa: je 0x582c04 */ if (fZ) goto L_00582c04;
L_00582b00:; BB(0x00582b00);
    /* 00582b00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00582b02:; BB(0x00582b02);
    /* 00582b02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582b04: jne 0x582b4c */ if (!fZ) goto L_00582b4c;
L_00582b06:; BB(0x00582b06);
    /* 00582b06: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00582b0c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00582b0f: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 00582b15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00582b17: jle 0x582ba8 */ if ((fZ||fS!=fO)) goto L_00582ba8;
L_00582b1d:; BB(0x00582b1d);
    /* 00582b1d: mov edx, dword ptr [0xa74288] */ r_edx = R32((u32)(0xa74288u));
    /* 00582b23: add edx, -0x2d */ {  u32 a = r_edx; u32 b = 0xffffffd3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00582b26: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582b28: jne 0x582b47 */ if (!fZ) goto L_00582b47;
L_00582b2a:; BB(0x00582b2a);
    /* 00582b2a: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 00582b2f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00582b31: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x582b36u); f_007879b8();
    /* 00582b36: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00582b39: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00582b3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00582b3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00582b3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582b3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582b3f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x582b44u); f_00814298();
    /* 00582b44: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00582b47:; BB(0x00582b47);
    /* 00582b47: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582b4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582b4b: ret  */ FN_RET(0x00582ab8); r_esp += 4; return;
L_00582b4c:; BB(0x00582b4c);
    /* 00582b4c: mov dword ptr [ebp + 0x37c], 0xa */ W32((u32)(r_ebp+0x37cu), 0xau);
    /* 00582b56: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00582b59: lea edx, [ebp + 0x39c] */ r_edx = (u32)(r_ebp+0x39cu);
    /* 00582b5f: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00582b63: lea eax, [ebp + 0x3a4] */ r_eax = (u32)(r_ebp+0x3a4u);
    /* 00582b69: mov esi, eax */ r_esi = r_eax;
    /* 00582b6b: mov edi, edx */ r_edi = r_edx;
L_00582b6d:; BB(0x00582b6d);
    /* 00582b6d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00582b6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582b71: je 0x582b80 */ if (fZ) goto L_00582b80;
L_00582b73:; BB(0x00582b73);
    /* 00582b73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582b74: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x582b79u); f_005cdcc0();
    /* 00582b79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582b7a: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00582b80:; BB(0x00582b80);
    /* 00582b80: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00582b83: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00582b85: ja 0x582b6d */ if ((!fC&&!fZ)) goto L_00582b6d;
L_00582b87:; BB(0x00582b87);
    /* 00582b87: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00582b8a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00582b8e: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00582b94: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00582b9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582b9d: je 0x582ba3 */ if (fZ) goto L_00582ba3;
L_00582b9f:; BB(0x00582b9f);
    /* 00582b9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00582ba1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582ba3u); call_ind(t); }
L_00582ba3:; BB(0x00582ba3);
    /* 00582ba3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582ba6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582ba7: ret  */ FN_RET(0x00582ab8); r_esp += 4; return;
L_00582ba8:; BB(0x00582ba8);
    /* 00582ba8: mov dword ptr [ebp + 0x37c], 0xc */ W32((u32)(r_ebp+0x37cu), 0xcu);
    /* 00582bb2: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00582bb5: lea edx, [ebp + 0x39c] */ r_edx = (u32)(r_ebp+0x39cu);
    /* 00582bbb: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00582bbf: lea eax, [ebp + 0x3a4] */ r_eax = (u32)(r_ebp+0x3a4u);
    /* 00582bc5: mov esi, eax */ r_esi = r_eax;
    /* 00582bc7: mov edi, edx */ r_edi = r_edx;
L_00582bc9:; BB(0x00582bc9);
    /* 00582bc9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00582bcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582bcd: je 0x582bdc */ if (fZ) goto L_00582bdc;
L_00582bcf:; BB(0x00582bcf);
    /* 00582bcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582bd0: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x582bd5u); f_005cdcc0();
    /* 00582bd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582bd6: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00582bdc:; BB(0x00582bdc);
    /* 00582bdc: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00582bdf: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00582be1: ja 0x582bc9 */ if ((!fC&&!fZ)) goto L_00582bc9;
L_00582be3:; BB(0x00582be3);
    /* 00582be3: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00582be6: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00582bea: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00582bf0: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00582bf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582bf9: je 0x582bff */ if (fZ) goto L_00582bff;
L_00582bfb:; BB(0x00582bfb);
    /* 00582bfb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00582bfd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582bffu); call_ind(t); }
L_00582bff:; BB(0x00582bff);
    /* 00582bff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582c02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582c03: ret  */ FN_RET(0x00582ab8); r_esp += 4; return;
L_00582c04:; BB(0x00582c04);
    /* 00582c04: mov eax, 1 */ r_eax = 0x1u;
    /* 00582c09: jmp 0x582b02 */ goto L_00582b02;
L_00582c0e:; BB(0x00582c0e);
    /* 00582c0e: mov eax, 1 */ r_eax = 0x1u;
    /* 00582c13: jmp 0x582ade */ goto L_00582ade;
}

void f_00582c18(void) /* sub_582C18 */
{
    FN_ENTER(0x00582c18);
    /* 00582c18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00582c19: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582c1c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00582c1e: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00582c24: fcom dword ptr [0x927d30] */ fx_compare(ST(0), R_F32((u32)(0x927d30u))); 
    /* 00582c2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00582c2c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00582c2d: jb 0x582c4d */ if (fC) goto L_00582c4d;
L_00582c2f:; BB(0x00582c2f);
    /* 00582c2f: fcomp dword ptr [0x927e10] */ fx_compare(ST(0), R_F32((u32)(0x927e10u))); FPOP();
    /* 00582c35: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00582c37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00582c38: jae 0x582c4f */ if (!fC) goto L_00582c4f;
L_00582c3a:; BB(0x00582c3a);
    /* 00582c3a: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582c3f: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00582c42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582c43: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x582c48u); f_0050b510();
    /* 00582c48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00582c4b: jmp 0x582c4f */ goto L_00582c4f;
L_00582c4d:; BB(0x00582c4d);
    /* 00582c4d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00582c4f:; BB(0x00582c4f);
    /* 00582c4f: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00582c55: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00582c57: jne 0x582c5e */ if (!fZ) goto L_00582c5e;
L_00582c59:; BB(0x00582c59);
    /* 00582c59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582c5c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00582c5d: ret  */ FN_RET(0x00582c18); r_esp += 4; return;
L_00582c5e:; BB(0x00582c5e);
    /* 00582c5e: mov dword ptr [ebx + 0x37c], 3 */ W32((u32)(r_ebx+0x37cu), 0x3u);
    /* 00582c68: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00582c6b: lea edx, [ebx + 0x39c] */ r_edx = (u32)(r_ebx+0x39cu);
    /* 00582c71: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00582c75: lea eax, [ebx + 0x3a4] */ r_eax = (u32)(r_ebx+0x3a4u);
    /* 00582c7b: mov ebp, eax */ r_ebp = r_eax;
    /* 00582c7d: mov edi, edx */ r_edi = r_edx;
L_00582c7f:; BB(0x00582c7f);
    /* 00582c7f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00582c81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582c83: je 0x582c92 */ if (fZ) goto L_00582c92;
L_00582c85:; BB(0x00582c85);
    /* 00582c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582c86: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x582c8bu); f_005cdcc0();
    /* 00582c8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582c8c: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00582c92:; BB(0x00582c92);
    /* 00582c92: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00582c95: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00582c97: ja 0x582c7f */ if ((!fC&&!fZ)) goto L_00582c7f;
L_00582c99:; BB(0x00582c99);
    /* 00582c99: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00582c9c: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00582ca0: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00582ca6: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00582cad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582caf: je 0x582cb5 */ if (fZ) goto L_00582cb5;
L_00582cb1:; BB(0x00582cb1);
    /* 00582cb1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00582cb3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582cb5u); call_ind(t); }
L_00582cb5:; BB(0x00582cb5);
    /* 00582cb5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582cb8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00582cb9: ret  */ FN_RET(0x00582c18); r_esp += 4; return;
}

void f_00582cbc(void) /* sub_582CBC */
{
    FN_ENTER(0x00582cbc);
    /* 00582cbc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582cbf: mov eax, dword ptr [ecx + 0x3f4] */ r_eax = R32((u32)(r_ecx+0x3f4u));
    /* 00582cc5: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00582cc7: je 0x582cd6 */ if (fZ) goto L_00582cd6;
L_00582cc9:; BB(0x00582cc9);
    /* 00582cc9: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00582ccc: add eax, 0x111 */ {  u32 a = r_eax; u32 b = 0x111u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00582cd1: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00582cd4: jmp 0x582ce1 */ goto L_00582ce1;
L_00582cd6:; BB(0x00582cd6);
    /* 00582cd6: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00582cd9: add eax, 0xfffffeef */ {  u32 a = r_eax; u32 b = 0xfffffeefu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00582cde: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_00582ce1:; BB(0x00582ce1);
    /* 00582ce1: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00582ce7: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00582cea: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00582cf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00582cf2: jl 0x582cf8 */ if ((fS!=fO)) goto L_00582cf8;
L_00582cf4:; BB(0x00582cf4);
    /* 00582cf4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582cf7: ret  */ FN_RET(0x00582cbc); r_esp += 4; return;
L_00582cf8:; BB(0x00582cf8);
    /* 00582cf8: mov dword ptr [ecx + 0x37c], 7 */ W32((u32)(r_ecx+0x37cu), 0x7u);
    /* 00582d02: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00582d05: lea edx, [ecx + 0x39c] */ r_edx = (u32)(r_ecx+0x39cu);
    /* 00582d0b: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00582d0f: mov esi, edx */ r_esi = r_edx;
    /* 00582d11: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00582d15: lea eax, [ecx + 0x3a4] */ r_eax = (u32)(r_ecx+0x3a4u);
    /* 00582d1b: mov ebp, eax */ r_ebp = r_eax;
    /* 00582d1d: mov edi, ecx */ r_edi = r_ecx;
L_00582d1f:; BB(0x00582d1f);
    /* 00582d1f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00582d21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582d23: je 0x582d32 */ if (fZ) goto L_00582d32;
L_00582d25:; BB(0x00582d25);
    /* 00582d25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582d26: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x582d2bu); f_005cdcc0();
    /* 00582d2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582d2c: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00582d32:; BB(0x00582d32);
    /* 00582d32: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00582d35: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00582d37: ja 0x582d1f */ if ((!fC&&!fZ)) goto L_00582d1f;
L_00582d39:; BB(0x00582d39);
    /* 00582d39: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00582d3c: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00582d40: mov ecx, edi */ r_ecx = r_edi;
    /* 00582d42: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00582d46: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00582d4c: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00582d53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582d55: je 0x582d59 */ if (fZ) goto L_00582d59;
L_00582d57:; BB(0x00582d57);
    /* 00582d57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582d59u); call_ind(t); }
L_00582d59:; BB(0x00582d59);
    /* 00582d59: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582d5c: ret  */ FN_RET(0x00582cbc); r_esp += 4; return;
}

void f_00582d60(void) /* sub_582D60 */
{
    FN_ENTER(0x00582d60);
    /* 00582d60: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582d63: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00582d69: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582d6c: je 0x582dcf */ if (fZ) goto L_00582dcf;
L_00582d6e:; BB(0x00582d6e);
    /* 00582d6e: mov dword ptr [ecx + 0x37c], 4 */ W32((u32)(r_ecx+0x37cu), 0x4u);
    /* 00582d78: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00582d7b: lea edx, [ecx + 0x39c] */ r_edx = (u32)(r_ecx+0x39cu);
    /* 00582d81: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00582d85: mov esi, edx */ r_esi = r_edx;
    /* 00582d87: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00582d8b: lea eax, [ecx + 0x3a4] */ r_eax = (u32)(r_ecx+0x3a4u);
    /* 00582d91: mov ebp, eax */ r_ebp = r_eax;
    /* 00582d93: mov edi, ecx */ r_edi = r_ecx;
L_00582d95:; BB(0x00582d95);
    /* 00582d95: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00582d97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582d99: je 0x582da8 */ if (fZ) goto L_00582da8;
L_00582d9b:; BB(0x00582d9b);
    /* 00582d9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582d9c: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x582da1u); f_005cdcc0();
    /* 00582da1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582da2: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00582da8:; BB(0x00582da8);
    /* 00582da8: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00582dab: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00582dad: ja 0x582d95 */ if ((!fC&&!fZ)) goto L_00582d95;
L_00582daf:; BB(0x00582daf);
    /* 00582daf: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00582db2: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00582db6: mov ecx, edi */ r_ecx = r_edi;
    /* 00582db8: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00582dbc: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00582dc2: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00582dc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582dcb: je 0x582dcf */ if (fZ) goto L_00582dcf;
L_00582dcd:; BB(0x00582dcd);
    /* 00582dcd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582dcfu); call_ind(t); }
L_00582dcf:; BB(0x00582dcf);
    /* 00582dcf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582dd2: ret  */ FN_RET(0x00582d60); r_esp += 4; return;
}

void f_00582dd4(void) /* sub_582DD4 */
{
    FN_ENTER(0x00582dd4);
    /* 00582dd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582dd5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00582dd7: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00582ddd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00582ddf: jle 0x582de8 */ if ((fZ||fS!=fO)) goto L_00582de8;
L_00582de1:; BB(0x00582de1);
    /* 00582de1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00582de4: jg 0x582de8 */ if ((!fZ&&fS==fO)) goto L_00582de8;
L_00582de6:; BB(0x00582de6);
    /* 00582de6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582de7: ret  */ FN_RET(0x00582dd4); r_esp += 4; return;
L_00582de8:; BB(0x00582de8);
    /* 00582de8: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 00582ded: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00582df0: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00582df5: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00582df8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00582dfa: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x582dffu); f_007879b8();
    /* 00582dff: mov ecx, eax */ r_ecx = r_eax;
    /* 00582e01: lea eax, [ebp + 0x3b4] */ r_eax = (u32)(r_ebp+0x3b4u);
    /* 00582e07: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00582e09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00582e0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00582e0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582e0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00582e0d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x582e12u); f_00814298();
    /* 00582e12: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00582e15: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 00582e1a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00582e1c: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x582e21u); f_007879b8();
    /* 00582e21: add ebp, 0x3cc */ {  u32 a = r_ebp; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00582e27: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00582e29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00582e2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00582e2b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582e2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582e2d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x582e32u); f_00814298();
    /* 00582e32: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00582e35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582e36: ret  */ FN_RET(0x00582dd4); r_esp += 4; return;
}

void f_00582e38(void) /* sub_582E38 */
{
    FN_ENTER(0x00582e38);
    /* 00582e38: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00582e3b: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00582e40: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00582e43: ret  */ FN_RET(0x00582e38); r_esp += 4; return;
}

void f_00582e44(void)
{
    FN_ENTER(0x00582e44);
    /* 00582e44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582e45: mov ebp, esp */ r_ebp = r_esp;
    /* 00582e47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00582e49: push 0x8d7c66 */ { u32 v = 0x8d7c66u; r_esp -= 4; W32(r_esp, v); }
    /* 00582e4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00582e54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582e55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00582e5c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582e5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00582e62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00582e65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00582e68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00582e6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00582e6d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00582e70: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00582e73: push 0x484 */ { u32 v = 0x484u; r_esp -= 4; W32(r_esp, v); }
    /* 00582e78: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x582e7du); f_005caba4();
    /* 00582e7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582e7e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00582e81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582e83: je 0x582ef0 */ if (fZ) goto L_00582ef0;
L_00582e85:; BB(0x00582e85);
    /* 00582e85: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00582e8c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00582e93: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00582e95: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x582e9au); f_005caba4();
    /* 00582e9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582e9b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00582e9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582ea0: je 0x582eec */ if (fZ) goto L_00582eec;
L_00582ea2:; BB(0x00582ea2);
    /* 00582ea2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00582ea9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00582eb0: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00582eb6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00582eb9: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x582ebeu); f_00787a4c();
    /* 00582ebe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00582ec1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00582ec8:; BB(0x00582ec8);
    /* 00582ec8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00582ecb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582ece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582ecf: call 0x582ef4 */ r_esp -= 4; W32(r_esp, 0x582ed4u); f_00582ef4();
    /* 00582ed4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582ed7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00582ede:; BB(0x00582ede);
    /* 00582ede: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00582ee1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00582ee8: mov esp, ebp */ r_esp = r_ebp;
    /* 00582eea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582eeb: ret  */ FN_RET(0x00582e44); r_esp += 4; return;
L_00582eec:; BB(0x00582eec);
    /* 00582eec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00582eee: jmp 0x582ec8 */ goto L_00582ec8;
L_00582ef0:; BB(0x00582ef0);
    /* 00582ef0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00582ef2: jmp 0x582ede */ goto L_00582ede;
}

void f_00582ef4(void) /* sub_582EF4 */
{
    FN_ENTER(0x00582ef4);
    /* 00582ef4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582ef5: mov ebp, esp */ r_ebp = r_esp;
    /* 00582ef7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00582ef9: push 0x8d7c9e */ { u32 v = 0x8d7c9eu; r_esp -= 4; W32(r_esp, v); }
    /* 00582efe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00582f04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582f05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00582f0c: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582f0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00582f12: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00582f15: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00582f18: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00582f1b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00582f1e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00582f21: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00582f24: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00582f27: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x582f2cu); f_007865e8();
    /* 00582f2c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00582f33: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00582f38: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00582f3d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582f40: mov dword ptr [eax], 0xb07860 */ W32((u32)(r_eax), 0xb07860u);
    /* 00582f46: add eax, 0x408 */ {  u32 a = r_eax; u32 b = 0x408u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00582f4b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00582f4d: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00582f4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582f50: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x582f55u); f_00858736();
    /* 00582f55: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00582f5c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582f5f: mov eax, dword ptr [0x9bf3e0] */ r_eax = R32((u32)(0x9bf3e0u));
    /* 00582f64: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00582f67: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 00582f6d: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00582f6f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00582f72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00582f73: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00582f76: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 00582f7c: call dword ptr [esi + 0x14c] */ { u32 t = R32((u32)(r_esi+0x14cu)); r_esp -= 4; W32(r_esp, 0x582f82u); call_ind(t); }
    /* 00582f82: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582f85: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00582f87: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x582f8du); call_ind(t); }
    /* 00582f8d: mov ecx, dword ptr [0xa742a4] */ r_ecx = R32((u32)(0xa742a4u));
    /* 00582f93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582f95: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x582f9au); f_005b8624();
    /* 00582f9a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582f9d: mov ecx, dword ptr [0xa742a4] */ r_ecx = R32((u32)(0xa742a4u));
    /* 00582fa3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582fa5: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00582fa8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x582fadu); f_005b8610();
    /* 00582fad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582fb0: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00582fb3: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00582fb6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00582fb8: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00582fbb: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00582fbe: push 0x9bf3e4 */ { u32 v = 0x9bf3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00582fc3: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 00582fc6: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00582fc9: mov dword ptr [ecx + 0x7c], ebx */ W32((u32)(r_ecx+0x7cu), r_ebx);
    /* 00582fcc: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00582fcf: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00582fd2: mov dword ptr [ecx + 0x58], ebx */ W32((u32)(r_ecx+0x58u), r_ebx);
    /* 00582fd5: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 00582fd8: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00582fdb: mov dword ptr [ecx + 0x4c], ebx */ W32((u32)(r_ecx+0x4cu), r_ebx);
    /* 00582fde: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x582fe3u); f_007b9a88();
    /* 00582fe3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582fe6: mov dword ptr [ecx + 0xd8], 0x9bf220 */ W32((u32)(r_ecx+0xd8u), 0x9bf220u);
    /* 00582ff0: mov dword ptr [ecx + 0x398], eax */ W32((u32)(r_ecx+0x398u), r_eax);
    /* 00582ff6: mov eax, dword ptr [0xa742a4] */ r_eax = R32((u32)(0xa742a4u));
    /* 00582ffb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582ffd: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00583003: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00583009: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x58300eu); f_007aa4c8();
    /* 0058300e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583011: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583014: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00583016: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00583019: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0058301c: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0058301f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00583021: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00583028: mov dword ptr [esi + 0x300], edx */ W32((u32)(r_esi+0x300u), r_edx);
    /* 0058302e: mov dword ptr [esi + 0x304], ecx */ W32((u32)(r_esi+0x304u), r_ecx);
    /* 00583034: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 0058303a: mov dword ptr [edi + 0x314], 0 */ W32((u32)(r_edi+0x314u), 0x0u);
    /* 00583044: mov dword ptr [edi + 0x310], 0 */ W32((u32)(r_edi+0x310u), 0x0u);
    /* 0058304e: mov dword ptr [edi + 0x30c], 0 */ W32((u32)(r_edi+0x30cu), 0x0u);
    /* 00583058: mov dword ptr [edi + 0x388], 0 */ W32((u32)(r_edi+0x388u), 0x0u);
    /* 00583062: mov dword ptr [edi + 0x384], 0 */ W32((u32)(r_edi+0x384u), 0x0u);
    /* 0058306c: mov dword ptr [edi + 0x380], 0 */ W32((u32)(r_edi+0x380u), 0x0u);
    /* 00583076: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x58307bu); f_0077a684();
    /* 0058307b: mov esi, eax */ r_esi = r_eax;
    /* 0058307d: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0058307f: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x583084u); f_0077a698();
    /* 00583084: mov ebx, eax */ r_ebx = r_eax;
    /* 00583086: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00583088: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x58308du); f_0077a6b4();
    /* 0058308d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583090: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583093: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583094: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00583095: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00583096: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x58309bu); f_007868f8();
    /* 0058309b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058309e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058309f: movzx eax, word ptr [edx + 0x334] */ r_eax = (u32)R16((u32)(r_edx+0x334u));
    /* 005830a6: mov word ptr [edx + 0x346], ax */ W16((u32)(r_edx+0x346u), (u16)r_eax);
    /* 005830ad: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x5830b2u); f_007b4d98();
    /* 005830b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005830b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005830b6: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005830b8: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5830bdu); f_00787550();
    /* 005830bd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005830c0: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 005830c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005830c8: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 005830ce: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 005830d4: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005830d7: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 005830dd: add ecx, 0x3a8 */ {  u32 a = r_ecx; u32 b = 0x3a8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005830e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005830e4: push 0x9bf360 */ { u32 v = 0x9bf360u; r_esp -= 4; W32(r_esp, v); }
    /* 005830e9: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x5830eeu); f_0058836c();
    /* 005830ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005830f1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005830f4: mov dword ptr [ecx + 0x394], 1 */ W32((u32)(r_ecx+0x394u), 0x1u);
    /* 005830fe: mov dword ptr [ecx + 0x3a4], eax */ W32((u32)(r_ecx+0x3a4u), r_eax);
    /* 00583104: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0058310b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058310d: mov dword ptr [ecx + 0x3f4], edx */ W32((u32)(r_ecx+0x3f4u), r_edx);
    /* 00583113: mov dword ptr [ecx + 0x3fc], eax */ W32((u32)(r_ecx+0x3fcu), r_eax);
    /* 00583119: movzx eax, byte ptr [0xa7421c] */ r_eax = (u32)R8((u32)(0xa7421cu));
    /* 00583120: mov dword ptr [ecx + 0x400], edx */ W32((u32)(r_ecx+0x400u), r_edx);
    /* 00583126: mov dword ptr [ecx + 0x404], edx */ W32((u32)(r_ecx+0x404u), r_edx);
    /* 0058312c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058312e: jne 0x583144 */ if (!fZ) goto L_00583144;
L_00583130:; BB(0x00583130);
    /* 00583130: mov dword ptr [0xa74220], 5 */ W32((u32)(0xa74220u), 0x5u);
    /* 0058313a: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058313f: mov byte ptr [0xa7421c], al */ W8((u32)(0xa7421cu), (u8)r_eax);
L_00583144:; BB(0x00583144);
    /* 00583144: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00583146: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x58314bu); f_0077a6cc();
    /* 0058314b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058314e: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00583150: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00583152: mov dword ptr [edx + 0x478], eax */ W32((u32)(r_edx+0x478u), r_eax);
    /* 00583158: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x58315du); f_0077a6cc();
    /* 0058315d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583160: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00583162: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00583165: mov eax, dword ptr [0xa74220] */ r_eax = R32((u32)(0xa74220u));
    /* 0058316a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058316c: jg 0x583170 */ if ((!fZ&&fS==fO)) goto L_00583170;
L_0058316e:; BB(0x0058316e);
    /* 0058316e: mov edx, eax */ r_edx = r_eax;
L_00583170:; BB(0x00583170);
    /* 00583170: mov dword ptr [ecx + 0x47c], edx */ W32((u32)(r_ecx+0x47cu), r_edx);
    /* 00583176: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x58317bu); f_0077a6cc();
    /* 0058317b: mov edx, eax */ r_edx = r_eax;
    /* 0058317d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583180: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583183: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00583186: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00583188: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058318a: mov ebx, 0 */ r_ebx = 0x0u;
    /* 0058318f: jg 0x583193 */ if ((!fZ&&fS==fO)) goto L_00583193;
L_00583191:; BB(0x00583191);
    /* 00583191: mov ecx, edx */ r_ecx = r_edx;
L_00583193:; BB(0x00583193);
    /* 00583193: mov dword ptr [eax + 0x480], ecx */ W32((u32)(r_eax+0x480u), r_ecx);
L_00583199:; BB(0x00583199);
    /* 00583199: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0058319c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058319e: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 005831a1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005831a3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005831a5: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005831a7: lea ecx, [eax + esi + 0x408] */ r_ecx = (u32)(r_eax+r_esi+0x408u);
    /* 005831ae: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5831b3u); f_0057739c();
    /* 005831b3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005831b6: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005831b9: jge 0x5831c0 */ if ((fS==fO)) goto L_005831c0;
L_005831bb:; BB(0x005831bb);
    /* 005831bb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005831be: jmp 0x583199 */ goto L_00583199;
L_005831c0:; BB(0x005831c0);
    /* 005831c0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005831c3: mov dword ptr [ecx + 0x37c], 1 */ W32((u32)(r_ecx+0x37cu), 0x1u);
    /* 005831cd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005831cf:; BB(0x005831cf);
    /* 005831cf: mov eax, dword ptr [ecx + esi*4 + 0x39c] */ r_eax = R32((u32)(r_ecx+r_esi*4+0x39cu));
    /* 005831d6: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 005831d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005831db: je 0x5831f2 */ if (fZ) goto L_005831f2;
L_005831dd:; BB(0x005831dd);
    /* 005831dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005831de: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5831e3u); f_005cdcc0();
    /* 005831e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005831e4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005831e7: mov dword ptr [ecx + ebx*2 + 0x39c], 0 */ W32((u32)(r_ecx+r_ebx*2+0x39cu), 0x0u);
L_005831f2:; BB(0x005831f2);
    /* 005831f2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005831f5: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005831f8: jl 0x5831cf */ if ((fS!=fO)) goto L_005831cf;
L_005831fa:; BB(0x005831fa);
    /* 005831fa: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00583200: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00583207: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583209: je 0x583210 */ if (fZ) goto L_00583210;
L_0058320b:; BB(0x0058320b);
    /* 0058320b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58320du); call_ind(t); }
    /* 0058320d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_00583210:; BB(0x00583210);
    /* 00583210: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00583213: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583215: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00583218: mov word ptr [ebp - 0x64], dx */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_edx);
    /* 0058321c: movzx ebx, word ptr [eax + 2] */ r_ebx = (u32)R16((u32)(r_eax+0x2u));
    /* 00583220: mov word ptr [ebp - 0x62], bx */ W16((u32)(r_ebp+0xffffff9eu), (u16)r_ebx);
    /* 00583224: movzx esi, word ptr [eax + 4] */ r_esi = (u32)R16((u32)(r_eax+0x4u));
    /* 00583228: mov word ptr [ebp - 0x60], si */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_esi);
    /* 0058322c: movzx edi, word ptr [eax + 6] */ r_edi = (u32)R16((u32)(r_eax+0x6u));
    /* 00583230: mov word ptr [ebp - 0x5e], di */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_edi);
    /* 00583234: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00583238: mov word ptr [ebp - 0x5c], dx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_edx);
    /* 0058323c: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 00583240: mov word ptr [ebp - 0x5a], dx */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_edx);
    /* 00583244: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 00583248: mov word ptr [ebp - 0x58], dx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edx);
    /* 0058324c: movzx edx, word ptr [eax + 0xe] */ r_edx = (u32)R16((u32)(r_eax+0xeu));
    /* 00583250: mov word ptr [ebp - 0x56], dx */ W16((u32)(r_ebp+0xffffffaau), (u16)r_edx);
    /* 00583254: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00583257: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0058325a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0058325d: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00583260: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00583263: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00583266: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00583269: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0058326c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0058326f: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00583272: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00583275: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00583278: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0058327b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0058327e: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00583281: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00583284: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00583287: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0058328a: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0058328d: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00583290: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00583293: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00583296: movzx edx, word ptr [eax + 0x3c] */ r_edx = (u32)R16((u32)(r_eax+0x3cu));
    /* 0058329a: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
    /* 0058329e: movzx eax, word ptr [eax + 0x3e] */ r_eax = (u32)R16((u32)(r_eax+0x3eu));
    /* 005832a2: mov word ptr [ebp - 0x26], ax */ W16((u32)(r_ebp+0xffffffdau), (u16)r_eax);
    /* 005832a6: movzx eax, word ptr [ecx + 0x2c] */ r_eax = (u32)R16((u32)(r_ecx+0x2cu));
    /* 005832aa: movzx ecx, word ptr [ecx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005832ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005832b1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005832b4: mov word ptr [ebp - 0x64], ax */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_eax);
    /* 005832b8: mov word ptr [ebp - 0x5e], cx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_ecx);
    /* 005832bc: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005832bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005832c0: call 0x586b44 */ r_esp -= 4; W32(r_esp, 0x5832c5u); f_00586b44();
    /* 005832c5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005832c8: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 005832cc: lea ebx, [ebp - 0x64] */ r_ebx = (u32)(r_ebp+0xffffff9cu);
    /* 005832cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005832d1: mov dword ptr [edx + 0x3ec], eax */ W32((u32)(r_edx+0x3ecu), r_eax);
    /* 005832d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005832d8: movzx eax, word ptr [edx + 0x2c] */ r_eax = (u32)R16((u32)(r_edx+0x2cu));
    /* 005832dc: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005832df: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005832e2: mov word ptr [ebp - 0x64], ax */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_eax);
    /* 005832e6: mov word ptr [ebp - 0x5e], cx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_ecx);
    /* 005832ea: call 0x586b44 */ r_esp -= 4; W32(r_esp, 0x5832efu); f_00586b44();
    /* 005832ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005832f2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005832f5: mov ecx, dword ptr [edx + 0x3ec] */ r_ecx = R32((u32)(r_edx+0x3ecu));
    /* 005832fb: mov dword ptr [edx + 0x3f0], eax */ W32((u32)(r_edx+0x3f0u), r_eax);
    /* 00583301: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00583303: je 0x583309 */ if (fZ) goto L_00583309;
L_00583305:; BB(0x00583305);
    /* 00583305: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00583307: jne 0x583324 */ if (!fZ) goto L_00583324;
L_00583309:; BB(0x00583309);
    /* 00583309: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058330c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058330f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00583312: mov eax, edx */ r_eax = r_edx;
    /* 00583314: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00583317: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058331e: mov esp, ebp */ r_esp = r_ebp;
    /* 00583320: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583321: ret 8 */ FN_RET(0x00582ef4); r_esp += 12; return;
L_00583324:; BB(0x00583324);
    /* 00583324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583325: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583326: call 0x587038 */ r_esp -= 4; W32(r_esp, 0x58332bu); f_00587038();
    /* 0058332b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058332e: push dword ptr [eax + 0x3ec] */ { u32 v = R32((u32)(r_eax+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00583334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583335: mov ecx, dword ptr [eax + 0x3f0] */ r_ecx = R32((u32)(r_eax+0x3f0u));
    /* 0058333b: call 0x587038 */ r_esp -= 4; W32(r_esp, 0x583340u); f_00587038();
    /* 00583340: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583343: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00583346: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00583349: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058334c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058334f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00583356: mov esp, ebp */ r_esp = r_ebp;
    /* 00583358: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583359: ret 8 */ FN_RET(0x00582ef4); r_esp += 12; return;
}

void f_00582f00(void)
{
    FN_ENTER(0x00582f00);
    /* 00582f00: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00582f02: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00582f04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582f05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00582f0c: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582f0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00582f12: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00582f15: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00582f18: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00582f1b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00582f1e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00582f21: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00582f24: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00582f27: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x582f2cu); f_007865e8();
    /* 00582f2c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00582f33: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00582f38: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00582f3d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582f40: mov dword ptr [eax], 0xb07860 */ W32((u32)(r_eax), 0xb07860u);
    /* 00582f46: add eax, 0x408 */ {  u32 a = r_eax; u32 b = 0x408u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00582f4b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00582f4d: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00582f4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582f50: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x582f55u); f_00858736();
    /* 00582f55: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00582f5c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582f5f: mov eax, dword ptr [0x9bf3e0] */ r_eax = R32((u32)(0x9bf3e0u));
    /* 00582f64: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00582f67: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 00582f6d: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00582f6f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00582f72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00582f73: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00582f76: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 00582f7c: call dword ptr [esi + 0x14c] */ { u32 t = R32((u32)(r_esi+0x14cu)); r_esp -= 4; W32(r_esp, 0x582f82u); call_ind(t); }
    /* 00582f82: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582f85: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00582f87: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x582f8du); call_ind(t); }
    /* 00582f8d: mov ecx, dword ptr [0xa742a4] */ r_ecx = R32((u32)(0xa742a4u));
    /* 00582f93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582f95: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x582f9au); f_005b8624();
    /* 00582f9a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582f9d: mov ecx, dword ptr [0xa742a4] */ r_ecx = R32((u32)(0xa742a4u));
    /* 00582fa3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582fa5: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00582fa8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x582fadu); f_005b8610();
    /* 00582fad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582fb0: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00582fb3: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00582fb6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00582fb8: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00582fbb: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00582fbe: push 0x9bf3e4 */ { u32 v = 0x9bf3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00582fc3: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 00582fc6: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00582fc9: mov dword ptr [ecx + 0x7c], ebx */ W32((u32)(r_ecx+0x7cu), r_ebx);
    /* 00582fcc: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00582fcf: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00582fd2: mov dword ptr [ecx + 0x58], ebx */ W32((u32)(r_ecx+0x58u), r_ebx);
    /* 00582fd5: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 00582fd8: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00582fdb: mov dword ptr [ecx + 0x4c], ebx */ W32((u32)(r_ecx+0x4cu), r_ebx);
    /* 00582fde: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x582fe3u); f_007b9a88();
    /* 00582fe3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582fe6: mov dword ptr [ecx + 0xd8], 0x9bf220 */ W32((u32)(r_ecx+0xd8u), 0x9bf220u);
    /* 00582ff0: mov dword ptr [ecx + 0x398], eax */ W32((u32)(r_ecx+0x398u), r_eax);
    /* 00582ff6: mov eax, dword ptr [0xa742a4] */ r_eax = R32((u32)(0xa742a4u));
    /* 00582ffb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582ffd: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00583003: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00583009: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x58300eu); f_007aa4c8();
    /* 0058300e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583011: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583014: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00583016: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00583019: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0058301c: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0058301f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00583021: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00583028: mov dword ptr [esi + 0x300], edx */ W32((u32)(r_esi+0x300u), r_edx);
    /* 0058302e: mov dword ptr [esi + 0x304], ecx */ W32((u32)(r_esi+0x304u), r_ecx);
    /* 00583034: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 0058303a: mov dword ptr [edi + 0x314], 0 */ W32((u32)(r_edi+0x314u), 0x0u);
    /* 00583044: mov dword ptr [edi + 0x310], 0 */ W32((u32)(r_edi+0x310u), 0x0u);
    /* 0058304e: mov dword ptr [edi + 0x30c], 0 */ W32((u32)(r_edi+0x30cu), 0x0u);
    /* 00583058: mov dword ptr [edi + 0x388], 0 */ W32((u32)(r_edi+0x388u), 0x0u);
    /* 00583062: mov dword ptr [edi + 0x384], 0 */ W32((u32)(r_edi+0x384u), 0x0u);
    /* 0058306c: mov dword ptr [edi + 0x380], 0 */ W32((u32)(r_edi+0x380u), 0x0u);
    /* 00583076: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x58307bu); f_0077a684();
    /* 0058307b: mov esi, eax */ r_esi = r_eax;
    /* 0058307d: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0058307f: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x583084u); f_0077a698();
    /* 00583084: mov ebx, eax */ r_ebx = r_eax;
    /* 00583086: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00583088: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x58308du); f_0077a6b4();
    /* 0058308d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583090: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583093: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583094: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00583095: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00583096: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x58309bu); f_007868f8();
    /* 0058309b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058309e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058309f: movzx eax, word ptr [edx + 0x334] */ r_eax = (u32)R16((u32)(r_edx+0x334u));
    /* 005830a6: mov word ptr [edx + 0x346], ax */ W16((u32)(r_edx+0x346u), (u16)r_eax);
    /* 005830ad: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x5830b2u); f_007b4d98();
    /* 005830b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005830b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005830b6: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005830b8: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5830bdu); f_00787550();
    /* 005830bd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005830c0: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 005830c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005830c8: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 005830ce: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 005830d4: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005830d7: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 005830dd: add ecx, 0x3a8 */ {  u32 a = r_ecx; u32 b = 0x3a8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005830e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005830e4: push 0x9bf360 */ { u32 v = 0x9bf360u; r_esp -= 4; W32(r_esp, v); }
    /* 005830e9: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x5830eeu); f_0058836c();
    /* 005830ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005830f1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005830f4: mov dword ptr [ecx + 0x394], 1 */ W32((u32)(r_ecx+0x394u), 0x1u);
    /* 005830fe: mov dword ptr [ecx + 0x3a4], eax */ W32((u32)(r_ecx+0x3a4u), r_eax);
    /* 00583104: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0058310b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058310d: mov dword ptr [ecx + 0x3f4], edx */ W32((u32)(r_ecx+0x3f4u), r_edx);
    /* 00583113: mov dword ptr [ecx + 0x3fc], eax */ W32((u32)(r_ecx+0x3fcu), r_eax);
    /* 00583119: movzx eax, byte ptr [0xa7421c] */ r_eax = (u32)R8((u32)(0xa7421cu));
    /* 00583120: mov dword ptr [ecx + 0x400], edx */ W32((u32)(r_ecx+0x400u), r_edx);
    /* 00583126: mov dword ptr [ecx + 0x404], edx */ W32((u32)(r_ecx+0x404u), r_edx);
    /* 0058312c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058312e: jne 0x583144 */ if (!fZ) goto L_00583144;
L_00583130:; BB(0x00583130);
    /* 00583130: mov dword ptr [0xa74220], 5 */ W32((u32)(0xa74220u), 0x5u);
    /* 0058313a: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058313f: mov byte ptr [0xa7421c], al */ W8((u32)(0xa7421cu), (u8)r_eax);
L_00583144:; BB(0x00583144);
    /* 00583144: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00583146: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x58314bu); f_0077a6cc();
    /* 0058314b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058314e: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00583150: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00583152: mov dword ptr [edx + 0x478], eax */ W32((u32)(r_edx+0x478u), r_eax);
    /* 00583158: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x58315du); f_0077a6cc();
    /* 0058315d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583160: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00583162: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00583165: mov eax, dword ptr [0xa74220] */ r_eax = R32((u32)(0xa74220u));
    /* 0058316a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058316c: jg 0x583170 */ if ((!fZ&&fS==fO)) goto L_00583170;
L_0058316e:; BB(0x0058316e);
    /* 0058316e: mov edx, eax */ r_edx = r_eax;
L_00583170:; BB(0x00583170);
    /* 00583170: mov dword ptr [ecx + 0x47c], edx */ W32((u32)(r_ecx+0x47cu), r_edx);
    /* 00583176: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x58317bu); f_0077a6cc();
    /* 0058317b: mov edx, eax */ r_edx = r_eax;
    /* 0058317d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583180: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583183: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00583186: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00583188: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058318a: mov ebx, 0 */ r_ebx = 0x0u;
    /* 0058318f: jg 0x583193 */ if ((!fZ&&fS==fO)) goto L_00583193;
L_00583191:; BB(0x00583191);
    /* 00583191: mov ecx, edx */ r_ecx = r_edx;
L_00583193:; BB(0x00583193);
    /* 00583193: mov dword ptr [eax + 0x480], ecx */ W32((u32)(r_eax+0x480u), r_ecx);
L_00583199:; BB(0x00583199);
    /* 00583199: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0058319c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058319e: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 005831a1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005831a3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005831a5: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005831a7: lea ecx, [eax + esi + 0x408] */ r_ecx = (u32)(r_eax+r_esi+0x408u);
    /* 005831ae: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5831b3u); f_0057739c();
    /* 005831b3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005831b6: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005831b9: jge 0x5831c0 */ if ((fS==fO)) goto L_005831c0;
L_005831bb:; BB(0x005831bb);
    /* 005831bb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005831be: jmp 0x583199 */ goto L_00583199;
L_005831c0:; BB(0x005831c0);
    /* 005831c0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005831c3: mov dword ptr [ecx + 0x37c], 1 */ W32((u32)(r_ecx+0x37cu), 0x1u);
    /* 005831cd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005831cf:; BB(0x005831cf);
    /* 005831cf: mov eax, dword ptr [ecx + esi*4 + 0x39c] */ r_eax = R32((u32)(r_ecx+r_esi*4+0x39cu));
    /* 005831d6: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 005831d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005831db: je 0x5831f2 */ if (fZ) goto L_005831f2;
L_005831dd:; BB(0x005831dd);
    /* 005831dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005831de: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5831e3u); f_005cdcc0();
    /* 005831e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005831e4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005831e7: mov dword ptr [ecx + ebx*2 + 0x39c], 0 */ W32((u32)(r_ecx+r_ebx*2+0x39cu), 0x0u);
L_005831f2:; BB(0x005831f2);
    /* 005831f2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005831f5: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005831f8: jl 0x5831cf */ if ((fS!=fO)) goto L_005831cf;
L_005831fa:; BB(0x005831fa);
    /* 005831fa: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00583200: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00583207: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583209: je 0x583210 */ if (fZ) goto L_00583210;
L_0058320b:; BB(0x0058320b);
    /* 0058320b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58320du); call_ind(t); }
    /* 0058320d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_00583210:; BB(0x00583210);
    /* 00583210: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00583213: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583215: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00583218: mov word ptr [ebp - 0x64], dx */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_edx);
    /* 0058321c: movzx ebx, word ptr [eax + 2] */ r_ebx = (u32)R16((u32)(r_eax+0x2u));
    /* 00583220: mov word ptr [ebp - 0x62], bx */ W16((u32)(r_ebp+0xffffff9eu), (u16)r_ebx);
    /* 00583224: movzx esi, word ptr [eax + 4] */ r_esi = (u32)R16((u32)(r_eax+0x4u));
    /* 00583228: mov word ptr [ebp - 0x60], si */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_esi);
    /* 0058322c: movzx edi, word ptr [eax + 6] */ r_edi = (u32)R16((u32)(r_eax+0x6u));
    /* 00583230: mov word ptr [ebp - 0x5e], di */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_edi);
    /* 00583234: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00583238: mov word ptr [ebp - 0x5c], dx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_edx);
    /* 0058323c: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 00583240: mov word ptr [ebp - 0x5a], dx */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_edx);
    /* 00583244: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 00583248: mov word ptr [ebp - 0x58], dx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edx);
    /* 0058324c: movzx edx, word ptr [eax + 0xe] */ r_edx = (u32)R16((u32)(r_eax+0xeu));
    /* 00583250: mov word ptr [ebp - 0x56], dx */ W16((u32)(r_ebp+0xffffffaau), (u16)r_edx);
    /* 00583254: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00583257: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0058325a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0058325d: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00583260: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00583263: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00583266: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00583269: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0058326c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0058326f: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00583272: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00583275: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00583278: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0058327b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0058327e: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00583281: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00583284: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00583287: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0058328a: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0058328d: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00583290: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00583293: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00583296: movzx edx, word ptr [eax + 0x3c] */ r_edx = (u32)R16((u32)(r_eax+0x3cu));
    /* 0058329a: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
    /* 0058329e: movzx eax, word ptr [eax + 0x3e] */ r_eax = (u32)R16((u32)(r_eax+0x3eu));
    /* 005832a2: mov word ptr [ebp - 0x26], ax */ W16((u32)(r_ebp+0xffffffdau), (u16)r_eax);
    /* 005832a6: movzx eax, word ptr [ecx + 0x2c] */ r_eax = (u32)R16((u32)(r_ecx+0x2cu));
    /* 005832aa: movzx ecx, word ptr [ecx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005832ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005832b1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005832b4: mov word ptr [ebp - 0x64], ax */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_eax);
    /* 005832b8: mov word ptr [ebp - 0x5e], cx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_ecx);
    /* 005832bc: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005832bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005832c0: call 0x586b44 */ r_esp -= 4; W32(r_esp, 0x5832c5u); f_00586b44();
    /* 005832c5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005832c8: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 005832cc: lea ebx, [ebp - 0x64] */ r_ebx = (u32)(r_ebp+0xffffff9cu);
    /* 005832cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005832d1: mov dword ptr [edx + 0x3ec], eax */ W32((u32)(r_edx+0x3ecu), r_eax);
    /* 005832d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005832d8: movzx eax, word ptr [edx + 0x2c] */ r_eax = (u32)R16((u32)(r_edx+0x2cu));
    /* 005832dc: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005832df: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005832e2: mov word ptr [ebp - 0x64], ax */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_eax);
    /* 005832e6: mov word ptr [ebp - 0x5e], cx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_ecx);
    /* 005832ea: call 0x586b44 */ r_esp -= 4; W32(r_esp, 0x5832efu); f_00586b44();
    /* 005832ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005832f2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005832f5: mov ecx, dword ptr [edx + 0x3ec] */ r_ecx = R32((u32)(r_edx+0x3ecu));
    /* 005832fb: mov dword ptr [edx + 0x3f0], eax */ W32((u32)(r_edx+0x3f0u), r_eax);
    /* 00583301: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00583303: je 0x583309 */ if (fZ) goto L_00583309;
L_00583305:; BB(0x00583305);
    /* 00583305: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00583307: jne 0x583324 */ if (!fZ) goto L_00583324;
L_00583309:; BB(0x00583309);
    /* 00583309: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058330c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058330f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00583312: mov eax, edx */ r_eax = r_edx;
    /* 00583314: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00583317: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058331e: mov esp, ebp */ r_esp = r_ebp;
    /* 00583320: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583321: ret 8 */ FN_RET(0x00582f00); r_esp += 12; return;
L_00583324:; BB(0x00583324);
    /* 00583324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583325: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583326: call 0x587038 */ r_esp -= 4; W32(r_esp, 0x58332bu); f_00587038();
    /* 0058332b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058332e: push dword ptr [eax + 0x3ec] */ { u32 v = R32((u32)(r_eax+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00583334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583335: mov ecx, dword ptr [eax + 0x3f0] */ r_ecx = R32((u32)(r_eax+0x3f0u));
    /* 0058333b: call 0x587038 */ r_esp -= 4; W32(r_esp, 0x583340u); f_00587038();
    /* 00583340: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00583343: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00583346: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00583349: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058334c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058334f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00583356: mov esp, ebp */ r_esp = r_ebp;
    /* 00583358: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583359: ret 8 */ FN_RET(0x00582f00); r_esp += 12; return;
}

