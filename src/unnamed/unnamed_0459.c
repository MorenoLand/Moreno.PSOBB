#include "protos.h"

void f_00459158(void) /* sub_459158 */
{
    FN_ENTER(0x00459158);
    /* 00459158: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0045915c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045915f: je 0x459184 */ if (fZ) goto L_00459184;
L_00459161:; BB(0x00459161);
    /* 00459161: mov dword ptr [ecx + 0x3d8], 0 */ W32((u32)(r_ecx+0x3d8u), 0x0u);
    /* 0045916b: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 00459171: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00459174: mov edx, dword ptr [eax*8 + 0x9a61e0] */ r_edx = R32((u32)(r_eax*8+0x9a61e0u));
    /* 0045917b: mov dword ptr [ecx + 0x3e4], edx */ W32((u32)(r_ecx+0x3e4u), r_edx);
    /* 00459181: ret 4 */ FN_RET(0x00459158); r_esp += 8; return;
L_00459184:; BB(0x00459184);
    /* 00459184: ret 4 */ FN_RET(0x00459158); r_esp += 8; return;
}

void f_00459188(void) /* sub_459188 */
{
    FN_ENTER(0x00459188);
    /* 00459188: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459189: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045918c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045918e: mov eax, dword ptr [ebp + 0x458] */ r_eax = R32((u32)(r_ebp+0x458u));
    /* 00459194: mov edx, dword ptr [ebp + 0x45c] */ r_edx = R32((u32)(r_ebp+0x45cu));
    /* 0045919a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045919d: mov eax, dword ptr [ebp + 0x460] */ r_eax = R32((u32)(r_ebp+0x460u));
    /* 004591a3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004591a7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004591ab: mov eax, dword ptr [ebp + 0x464] */ r_eax = R32((u32)(r_ebp+0x464u));
    /* 004591b1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004591b5: mov eax, dword ptr [ebp + 0x468] */ r_eax = R32((u32)(r_ebp+0x468u));
    /* 004591bb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004591bf: mov eax, dword ptr [ebp + 0x46c] */ r_eax = R32((u32)(r_ebp+0x46cu));
    /* 004591c5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004591c9: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 004591cf: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004591d2: je 0x4595bb */ if (fZ) goto L_004595bb;
L_004591d8:; BB(0x004591d8);
    /* 004591d8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004591db: je 0x4595af */ if (fZ) goto L_004595af;
L_004591e1:; BB(0x004591e1);
    /* 004591e1: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 004591e7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004591ea: je 0x459492 */ if (fZ) goto L_00459492;
L_004591f0:; BB(0x004591f0);
    /* 004591f0: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004591f3: je 0x4592bb */ if (fZ) goto L_004592bb;
L_004591f9:; BB(0x004591f9);
    /* 004591f9: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 004591ff: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459202: jle 0x459220 */ if ((fZ||fS!=fO)) goto L_00459220;
L_00459204:; BB(0x00459204);
    /* 00459204: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00459206: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459208: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0045920b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045920c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045920d: push 0x373 */ { u32 v = 0x373u; r_esp -= 4; W32(r_esp, v); }
    /* 00459212: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x459217u); f_008144b0();
    /* 00459217: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045921a: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
L_00459220:; BB(0x00459220);
    /* 00459220: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459223: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 00459229: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045922b: jl 0x459232 */ if ((fS!=fO)) goto L_00459232;
L_0045922d:; BB(0x0045922d);
    /* 0045922d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00459230: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459231: ret  */ FN_RET(0x00459188); r_esp += 4; return;
L_00459232:; BB(0x00459232);
    /* 00459232: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 00459238: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0045923c: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00459240: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 00459246: lea edx, [ebp + 0x43c] */ r_edx = (u32)(r_ebp+0x43cu);
    /* 0045924c: lea eax, [ebp + 0x454] */ r_eax = (u32)(r_ebp+0x454u);
    /* 00459252: mov esi, eax */ r_esi = r_eax;
    /* 00459254: mov edi, edx */ r_edi = r_edx;
L_00459256:; BB(0x00459256);
    /* 00459256: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00459258: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045925a: je 0x459269 */ if (fZ) goto L_00459269;
L_0045925c:; BB(0x0045925c);
    /* 0045925c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045925d: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x459262u); f_005cdcc0();
    /* 00459262: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459263: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00459269:; BB(0x00459269);
    /* 00459269: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045926c: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045926e: ja 0x459256 */ if ((!fC&&!fZ)) goto L_00459256;
L_00459270:; BB(0x00459270);
    /* 00459270: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00459274: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00459278: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045927e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459281: je 0x45928d */ if (fZ) goto L_0045928d;
L_00459283:; BB(0x00459283);
    /* 00459283: mov dword ptr [ebp + 0x3e8], 0 */ W32((u32)(r_ebp+0x3e8u), 0x0u);
L_0045928d:; BB(0x0045928d);
    /* 0045928d: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00459290: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00459297: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00459299: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x45929eu); f_00459158();
    /* 0045929e: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 004592a4: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004592a7: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 004592ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004592b0: je 0x4592b6 */ if (fZ) goto L_004592b6;
L_004592b2:; BB(0x004592b2);
    /* 004592b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004592b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4592b6u); call_ind(t); }
L_004592b6:; BB(0x004592b6);
    /* 004592b6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004592b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004592ba: ret  */ FN_RET(0x00459188); r_esp += 4; return;
L_004592bb:; BB(0x004592bb);
    /* 004592bb: fld dword ptr [ebp + 0x3d8] */ FPUSH(R_F32((u32)(r_ebp+0x3d8u)));
    /* 004592c1: fcom dword ptr [0x900024] */ fx_compare(ST(0), R_F32((u32)(0x900024u))); 
    /* 004592c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004592c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004592ca: jbe 0x45933c */ if ((fC||fZ)) goto L_0045933c;
L_004592cc:; BB(0x004592cc);
    /* 004592cc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004592ce: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 004592d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004592d6: je 0x4592e9 */ if (fZ) goto L_004592e9;
L_004592d8:; BB(0x004592d8);
    /* 004592d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004592d9: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4592deu); f_005cdcc0();
    /* 004592de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004592df: mov dword ptr [ebp + 0x440], 0 */ W32((u32)(r_ebp+0x440u), 0x0u);
L_004592e9:; BB(0x004592e9);
    /* 004592e9: mov eax, dword ptr [ebp + 0x444] */ r_eax = R32((u32)(r_ebp+0x444u));
    /* 004592ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004592f1: je 0x459304 */ if (fZ) goto L_00459304;
L_004592f3:; BB(0x004592f3);
    /* 004592f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004592f4: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4592f9u); f_005cdcc0();
    /* 004592f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004592fa: mov dword ptr [ebp + 0x444], 0 */ W32((u32)(r_ebp+0x444u), 0x0u);
L_00459304:; BB(0x00459304);
    /* 00459304: mov eax, dword ptr [ebp + 0x448] */ r_eax = R32((u32)(r_ebp+0x448u));
    /* 0045930a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045930c: je 0x45931f */ if (fZ) goto L_0045931f;
L_0045930e:; BB(0x0045930e);
    /* 0045930e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045930f: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x459314u); f_005cdcc0();
    /* 00459314: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459315: mov dword ptr [ebp + 0x448], 0 */ W32((u32)(r_ebp+0x448u), 0x0u);
L_0045931f:; BB(0x0045931f);
    /* 0045931f: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 00459325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459327: je 0x45937b */ if (fZ) goto L_0045937b;
L_00459329:; BB(0x00459329);
    /* 00459329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045932a: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45932fu); f_005cdcc0();
    /* 0045932f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459330: mov dword ptr [ebp + 0x44c], 0 */ W32((u32)(r_ebp+0x44cu), 0x0u);
    /* 0045933a: jmp 0x45937b */ goto L_0045937b;
L_0045933c:; BB(0x0045933c);
    /* 0045933c: fcomp dword ptr [0x900020] */ fx_compare(ST(0), R_F32((u32)(0x900020u))); FPOP();
    /* 00459342: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00459344: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00459345: jb 0x45937b */ if (fC) goto L_0045937b;
L_00459347:; BB(0x00459347);
    /* 00459347: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 0045934d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045934f: je 0x459454 */ if (fZ) goto L_00459454;
L_00459355:; BB(0x00459355);
    /* 00459355: mov eax, dword ptr [ebp + 0x444] */ r_eax = R32((u32)(r_ebp+0x444u));
    /* 0045935b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045935d: je 0x459427 */ if (fZ) goto L_00459427;
L_00459363:; BB(0x00459363);
    /* 00459363: mov eax, dword ptr [ebp + 0x448] */ r_eax = R32((u32)(r_ebp+0x448u));
    /* 00459369: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045936b: je 0x4593f9 */ if (fZ) goto L_004593f9;
L_00459371:; BB(0x00459371);
    /* 00459371: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 00459377: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459379: je 0x4593d2 */ if (fZ) goto L_004593d2;
L_0045937b:; BB(0x0045937b);
    /* 0045937b: mov ecx, dword ptr [ebp + 0x440] */ r_ecx = R32((u32)(r_ebp+0x440u));
    /* 00459381: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459383: je 0x45938e */ if (fZ) goto L_0045938e;
L_00459385:; BB(0x00459385);
    /* 00459385: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00459388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459389: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45938eu); f_00508db8();
L_0045938e:; BB(0x0045938e);
    /* 0045938e: mov ecx, dword ptr [ebp + 0x444] */ r_ecx = R32((u32)(r_ebp+0x444u));
    /* 00459394: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459396: je 0x4593a1 */ if (fZ) goto L_004593a1;
L_00459398:; BB(0x00459398);
    /* 00459398: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045939b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045939c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4593a1u); f_00508db8();
L_004593a1:; BB(0x004593a1);
    /* 004593a1: mov ecx, dword ptr [ebp + 0x448] */ r_ecx = R32((u32)(r_ebp+0x448u));
    /* 004593a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004593a9: je 0x4593b5 */ if (fZ) goto L_004593b5;
L_004593ab:; BB(0x004593ab);
    /* 004593ab: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004593af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004593b0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4593b5u); f_00508db8();
L_004593b5:; BB(0x004593b5);
    /* 004593b5: mov ecx, dword ptr [ebp + 0x44c] */ r_ecx = R32((u32)(r_ebp+0x44cu));
    /* 004593bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004593bd: je 0x4591f9 */ if (fZ) goto L_004591f9;
L_004593c3:; BB(0x004593c3);
    /* 004593c3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004593c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004593c8: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4593cdu); f_00508db8();
    /* 004593cd: jmp 0x4591f9 */ goto L_004591f9;
L_004593d2:; BB(0x004593d2);
    /* 004593d2: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004593d6: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 004593db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004593dc: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4593e1u); f_00509590();
    /* 004593e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004593e4: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 004593ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004593ec: je 0x45937b */ if (fZ) goto L_0045937b;
L_004593ee:; BB(0x004593ee);
    /* 004593ee: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004593f0: mov ecx, eax */ r_ecx = r_eax;
    /* 004593f2: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4593f7u); f_00508efc();
    /* 004593f7: jmp 0x45937b */ goto L_0045937b;
L_004593f9:; BB(0x004593f9);
    /* 004593f9: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004593fd: push 0x13a */ { u32 v = 0x13au; r_esp -= 4; W32(r_esp, v); }
    /* 00459402: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459403: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x459408u); f_00509590();
    /* 00459408: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045940b: mov dword ptr [ebp + 0x448], eax */ W32((u32)(r_ebp+0x448u), r_eax);
    /* 00459411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459413: je 0x459371 */ if (fZ) goto L_00459371;
L_00459419:; BB(0x00459419);
    /* 00459419: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045941b: mov ecx, eax */ r_ecx = r_eax;
    /* 0045941d: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x459422u); f_00508efc();
    /* 00459422: jmp 0x459371 */ goto L_00459371;
L_00459427:; BB(0x00459427);
    /* 00459427: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045942a: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045942f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459430: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x459435u); f_00509590();
    /* 00459435: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459438: mov dword ptr [ebp + 0x444], eax */ W32((u32)(r_ebp+0x444u), r_eax);
    /* 0045943e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459440: je 0x459363 */ if (fZ) goto L_00459363;
L_00459446:; BB(0x00459446);
    /* 00459446: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00459448: mov ecx, eax */ r_ecx = r_eax;
    /* 0045944a: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45944fu); f_00508efc();
    /* 0045944f: jmp 0x459363 */ goto L_00459363;
L_00459454:; BB(0x00459454);
    /* 00459454: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00459457: push 0x13a */ { u32 v = 0x13au; r_esp -= 4; W32(r_esp, v); }
    /* 0045945c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045945d: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x459462u); f_00509590();
    /* 00459462: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459465: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 0045946b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045946d: je 0x459478 */ if (fZ) goto L_00459478;
L_0045946f:; BB(0x0045946f);
    /* 0045946f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00459471: mov ecx, eax */ r_ecx = r_eax;
    /* 00459473: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x459478u); f_00508efc();
L_00459478:; BB(0x00459478);
    /* 00459478: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045947a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045947c: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0045947f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459480: push 0x374 */ { u32 v = 0x374u; r_esp -= 4; W32(r_esp, v); }
    /* 00459485: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45948au); f_00814298();
    /* 0045948a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045948d: jmp 0x459355 */ goto L_00459355;
L_00459492:; BB(0x00459492);
    /* 00459492: fld dword ptr [ebp + 0x3d8] */ FPUSH(R_F32((u32)(r_ebp+0x3d8u)));
    /* 00459498: fcom dword ptr [0x90002c] */ fx_compare(ST(0), R_F32((u32)(0x90002cu))); 
    /* 0045949e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004594a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004594a1: jbe 0x4594e5 */ if ((fC||fZ)) goto L_004594e5;
L_004594a3:; BB(0x004594a3);
    /* 004594a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004594a5: mov ecx, dword ptr [ebp + 0x440] */ r_ecx = R32((u32)(r_ebp+0x440u));
    /* 004594ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004594ad: je 0x4594c2 */ if (fZ) goto L_004594c2;
L_004594af:; BB(0x004594af);
    /* 004594af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004594b0: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4594b5u); f_005cdcc0();
    /* 004594b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004594b6: mov dword ptr [ebp + 0x440], 0 */ W32((u32)(r_ebp+0x440u), 0x0u);
    /* 004594c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004594c2:; BB(0x004594c2);
    /* 004594c2: mov eax, dword ptr [ebp + 0x448] */ r_eax = R32((u32)(r_ebp+0x448u));
    /* 004594c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004594ca: je 0x459516 */ if (fZ) goto L_00459516;
L_004594cc:; BB(0x004594cc);
    /* 004594cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004594cd: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4594d2u); f_005cdcc0();
    /* 004594d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004594d3: mov ecx, dword ptr [ebp + 0x440] */ r_ecx = R32((u32)(r_ebp+0x440u));
    /* 004594d9: mov dword ptr [ebp + 0x448], 0 */ W32((u32)(r_ebp+0x448u), 0x0u);
    /* 004594e3: jmp 0x459516 */ goto L_00459516;
L_004594e5:; BB(0x004594e5);
    /* 004594e5: fcomp dword ptr [0x900028] */ fx_compare(ST(0), R_F32((u32)(0x900028u))); FPOP();
    /* 004594eb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004594ed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004594ee: jb 0x459510 */ if (fC) goto L_00459510;
L_004594f0:; BB(0x004594f0);
    /* 004594f0: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 004594f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004594f8: je 0x459582 */ if (fZ) goto L_00459582;
L_004594fe:; BB(0x004594fe);
    /* 004594fe: mov eax, dword ptr [ebp + 0x448] */ r_eax = R32((u32)(r_ebp+0x448u));
    /* 00459504: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459506: je 0x45954d */ if (fZ) goto L_0045954d;
L_00459508:; BB(0x00459508);
    /* 00459508: mov ecx, dword ptr [ebp + 0x440] */ r_ecx = R32((u32)(r_ebp+0x440u));
    /* 0045950e: jmp 0x459516 */ goto L_00459516;
L_00459510:; BB(0x00459510);
    /* 00459510: mov ecx, dword ptr [ebp + 0x440] */ r_ecx = R32((u32)(r_ebp+0x440u));
L_00459516:; BB(0x00459516);
    /* 00459516: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459518: je 0x459523 */ if (fZ) goto L_00459523;
L_0045951a:; BB(0x0045951a);
    /* 0045951a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045951d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045951e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x459523u); f_00508db8();
L_00459523:; BB(0x00459523);
    /* 00459523: mov ecx, dword ptr [ebp + 0x448] */ r_ecx = R32((u32)(r_ebp+0x448u));
    /* 00459529: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045952b: je 0x459542 */ if (fZ) goto L_00459542;
L_0045952d:; BB(0x0045952d);
    /* 0045952d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00459531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459532: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x459537u); f_00508db8();
    /* 00459537: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0045953d: jmp 0x4591f0 */ goto L_004591f0;
L_00459542:; BB(0x00459542);
    /* 00459542: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 00459548: jmp 0x4591f0 */ goto L_004591f0;
L_0045954d:; BB(0x0045954d);
    /* 0045954d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00459551: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 00459556: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459557: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45955cu); f_00509590();
    /* 0045955c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045955f: mov dword ptr [ebp + 0x448], eax */ W32((u32)(r_ebp+0x448u), r_eax);
    /* 00459565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459567: je 0x45957a */ if (fZ) goto L_0045957a;
L_00459569:; BB(0x00459569);
    /* 00459569: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045956b: mov ecx, eax */ r_ecx = r_eax;
    /* 0045956d: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x459572u); f_00508efc();
    /* 00459572: mov ecx, dword ptr [ebp + 0x440] */ r_ecx = R32((u32)(r_ebp+0x440u));
    /* 00459578: jmp 0x459516 */ goto L_00459516;
L_0045957a:; BB(0x0045957a);
    /* 0045957a: mov ecx, dword ptr [ebp + 0x440] */ r_ecx = R32((u32)(r_ebp+0x440u));
    /* 00459580: jmp 0x459516 */ goto L_00459516;
L_00459582:; BB(0x00459582);
    /* 00459582: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00459585: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 0045958a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045958b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x459590u); f_00509590();
    /* 00459590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459593: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 00459599: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045959b: je 0x4594fe */ if (fZ) goto L_004594fe;
L_004595a1:; BB(0x004595a1);
    /* 004595a1: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004595a3: mov ecx, eax */ r_ecx = r_eax;
    /* 004595a5: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4595aau); f_00508efc();
    /* 004595aa: jmp 0x4594fe */ goto L_004594fe;
L_004595af:; BB(0x004595af);
    /* 004595af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004595b0: call 0x4545f4 */ r_esp -= 4; W32(r_esp, 0x4595b5u); f_004545f4();
    /* 004595b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004595b6: jmp 0x4591e1 */ goto L_004591e1;
L_004595bb:; BB(0x004595bb);
    /* 004595bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004595bc: call 0x4545cc */ r_esp -= 4; W32(r_esp, 0x4595c1u); f_004545cc();
    /* 004595c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004595c2: jmp 0x4591e1 */ goto L_004591e1;
}

void f_004595c8(void) /* sub_4595C8 */
{
    FN_ENTER(0x004595c8);
    /* 004595c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004595c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004595ca: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004595cd: mov edi, ecx */ r_edi = r_ecx;
    /* 004595cf: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 004595d5: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004595d8: je 0x459779 */ if (fZ) goto L_00459779;
L_004595de:; BB(0x004595de);
    /* 004595de: mov eax, dword ptr [edi + 0x450] */ r_eax = R32((u32)(r_edi+0x450u));
    /* 004595e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004595e6: je 0x459749 */ if (fZ) goto L_00459749;
L_004595ec:; BB(0x004595ec);
    /* 004595ec: mov eax, dword ptr [edi + 0x3a0] */ r_eax = R32((u32)(r_edi+0x3a0u));
    /* 004595f2: cmp eax, dword ptr [0xa457a4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa457a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004595f8: jne 0x459694 */ if (!fZ) goto L_00459694;
L_004595fe:; BB(0x004595fe);
    /* 004595fe: push 0x13e */ { u32 v = 0x13eu; r_esp -= 4; W32(r_esp, v); }
    /* 00459603: lea ebp, [edi + 0x470] */ r_ebp = (u32)(r_edi+0x470u);
    /* 00459609: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045960a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x45960fu); f_0050b510();
    /* 0045960f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459612: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459614: je 0x45961f */ if (fZ) goto L_0045961f;
L_00459616:; BB(0x00459616);
    /* 00459616: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00459618: mov ecx, eax */ r_ecx = r_eax;
    /* 0045961a: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45961fu); f_00508efc();
L_0045961f:; BB(0x0045961f);
    /* 0045961f: movzx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)R16((u32)(r_edi+0x3ccu));
    /* 00459626: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045962b: je 0x459675 */ if (fZ) goto L_00459675;
L_0045962d:; BB(0x0045962d);
    /* 0045962d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045962e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x459633u); f_0068d5a8();
    /* 00459633: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459634: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459636: je 0x459675 */ if (fZ) goto L_00459675;
L_00459638:; BB(0x00459638);
    /* 00459638: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0045963b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0045963e: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00459641: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00459645: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00459649: fadd dword ptr [0x9001d8] */ ST(0) = ST(0) + R_F32((u32)(0x9001d8u));
    /* 0045964f: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00459652: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00459656: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045965a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045965d: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045965f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459660: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x459665u); f_0050b510();
    /* 00459665: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045966a: je 0x459675 */ if (fZ) goto L_00459675;
L_0045966c:; BB(0x0045966c);
    /* 0045966c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045966e: mov ecx, eax */ r_ecx = r_eax;
    /* 00459670: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x459675u); f_00508efc();
L_00459675:; BB(0x00459675);
    /* 00459675: mov ecx, edi */ r_ecx = r_edi;
    /* 00459677: call 0x4597b4 */ r_esp -= 4; W32(r_esp, 0x45967cu); f_004597b4();
    /* 0045967c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045967d: movzx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)R16((u32)(r_edi+0x3ccu));
    /* 00459684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459685: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00459686: call 0x452568 */ r_esp -= 4; W32(r_esp, 0x45968bu); f_00452568();
    /* 0045968b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045968e: mov eax, dword ptr [edi + 0x3a0] */ r_eax = R32((u32)(r_edi+0x3a0u));
L_00459694:; BB(0x00459694);
    /* 00459694: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459697: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 0045969d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045969f: jl 0x4596a7 */ if ((fS!=fO)) goto L_004596a7;
L_004596a1:; BB(0x004596a1);
    /* 004596a1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004596a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004596a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004596a6: ret  */ FN_RET(0x004595c8); r_esp += 4; return;
L_004596a7:; BB(0x004596a7);
    /* 004596a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004596a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004596ab: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 004596ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004596af: push 0x377 */ { u32 v = 0x377u; r_esp -= 4; W32(r_esp, v); }
    /* 004596b4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4596b9u); f_00814298();
    /* 004596b9: push dword ptr [edi + 0x430] */ { u32 v = R32((u32)(r_edi+0x430u)); r_esp -= 4; W32(r_esp, v); }
    /* 004596bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004596c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004596c1: call 0x6eeeb4 */ r_esp -= 4; W32(r_esp, 0x4596c6u); f_006eeeb4();
    /* 004596c6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004596c9: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 004596cf: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004596d3: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 004596d9: lea eax, [edi + 0x43c] */ r_eax = (u32)(r_edi+0x43cu);
    /* 004596df: lea ebp, [edi + 0x454] */ r_ebp = (u32)(r_edi+0x454u);
    /* 004596e5: mov esi, eax */ r_esi = r_eax;
L_004596e7:; BB(0x004596e7);
    /* 004596e7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004596e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004596eb: je 0x4596fa */ if (fZ) goto L_004596fa;
L_004596ed:; BB(0x004596ed);
    /* 004596ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004596ee: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4596f3u); f_005cdcc0();
    /* 004596f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004596f4: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_004596fa:; BB(0x004596fa);
    /* 004596fa: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004596fd: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004596ff: ja 0x4596e7 */ if ((!fC&&!fZ)) goto L_004596e7;
L_00459701:; BB(0x00459701);
    /* 00459701: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00459705: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0045970b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045970e: je 0x45971a */ if (fZ) goto L_0045971a;
L_00459710:; BB(0x00459710);
    /* 00459710: mov dword ptr [edi + 0x3e8], 0 */ W32((u32)(r_edi+0x3e8u), 0x0u);
L_0045971a:; BB(0x0045971a);
    /* 0045971a: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0045971d: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00459724: mov ecx, edi */ r_ecx = r_edi;
    /* 00459726: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x45972bu); f_00459158();
    /* 0045972b: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00459731: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00459734: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 0045973b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045973d: je 0x459743 */ if (fZ) goto L_00459743;
L_0045973f:; BB(0x0045973f);
    /* 0045973f: mov ecx, edi */ r_ecx = r_edi;
    /* 00459741: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x459743u); call_ind(t); }
L_00459743:; BB(0x00459743);
    /* 00459743: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00459746: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459747: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00459748: ret  */ FN_RET(0x004595c8); r_esp += 4; return;
L_00459749:; BB(0x00459749);
    /* 00459749: push 0x143 */ { u32 v = 0x143u; r_esp -= 4; W32(r_esp, v); }
    /* 0045974e: lea eax, [edi + 0x470] */ r_eax = (u32)(r_edi+0x470u);
    /* 00459754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459755: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45975au); f_00509590();
    /* 0045975a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045975d: mov dword ptr [edi + 0x450], eax */ W32((u32)(r_edi+0x450u), r_eax);
    /* 00459763: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459765: je 0x4595ec */ if (fZ) goto L_004595ec;
L_0045976b:; BB(0x0045976b);
    /* 0045976b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045976d: mov ecx, eax */ r_ecx = r_eax;
    /* 0045976f: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x459774u); f_00508efc();
    /* 00459774: jmp 0x4595ec */ goto L_004595ec;
L_00459779:; BB(0x00459779);
    /* 00459779: fld dword ptr [edi + 0x3d8] */ FPUSH(R_F32((u32)(r_edi+0x3d8u)));
    /* 0045977f: fcomp dword ptr [0x900030] */ fx_compare(ST(0), R_F32((u32)(0x900030u))); FPOP();
    /* 00459785: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00459787: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00459788: jbe 0x4595de */ if ((fC||fZ)) goto L_004595de;
L_0045978e:; BB(0x0045978e);
    /* 0045978e: mov eax, dword ptr [edi + 0x450] */ r_eax = R32((u32)(r_edi+0x450u));
    /* 00459794: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459796: je 0x4595ec */ if (fZ) goto L_004595ec;
L_0045979c:; BB(0x0045979c);
    /* 0045979c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045979d: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4597a2u); f_005cdcc0();
    /* 004597a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004597a3: mov dword ptr [edi + 0x450], 0 */ W32((u32)(r_edi+0x450u), 0x0u);
    /* 004597ad: jmp 0x4595ec */ goto L_004595ec;
}

void f_004597b4(void) /* sub_4597B4 */
{
    FN_ENTER(0x004597b4);
    /* 004597b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004597b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004597b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004597b7: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004597ba: mov esi, ecx */ r_esi = r_ecx;
    /* 004597bc: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 004597be: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 004597c4: movsx ebx, word ptr [eax + 2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 004597c8: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4597cdu); f_0077a6cc();
    /* 004597cd: mov ecx, eax */ r_ecx = r_eax;
    /* 004597cf: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004597d2: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004597d7: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004597d9: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 004597dc: mov ebp, edx */ r_ebp = r_edx;
    /* 004597de: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004597e0: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004597e2: call 0x6ef36c */ r_esp -= 4; W32(r_esp, 0x4597e7u); f_006ef36c();
    /* 004597e7: movzx ecx, word ptr [esi + 0x3cc] */ r_ecx = (u32)R16((u32)(r_esi+0x3ccu));
    /* 004597ee: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004597f2: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004597f7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004597fc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00459800: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00459804: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00459808: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045980c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00459810: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00459812: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459814: call 0x453a2c */ r_esp -= 4; W32(r_esp, 0x459819u); f_00453a2c();
    /* 00459819: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045981c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045981d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045981e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045981f: ret  */ FN_RET(0x004597b4); r_esp += 4; return;
}

void f_00459820(void) /* sub_459820 */
{
    FN_ENTER(0x00459820);
    /* 00459820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459821: mov ebp, esp */ r_ebp = r_esp;
    /* 00459823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00459825: push 0x8cf3ba */ { u32 v = 0x8cf3bau; r_esp -= 4; W32(r_esp, v); }
    /* 0045982a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00459830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459831: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00459838: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045983b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045983e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00459841: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00459844: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00459847: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00459849: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045984c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045984f: push 0x47c */ { u32 v = 0x47cu; r_esp -= 4; W32(r_esp, v); }
    /* 00459854: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x459859u); f_005caba4();
    /* 00459859: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045985a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045985d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045985f: je 0x4598cc */ if (fZ) goto L_004598cc;
L_00459861:; BB(0x00459861);
    /* 00459861: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00459868: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045986f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00459871: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x459876u); f_005caba4();
    /* 00459876: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459877: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045987a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045987c: je 0x4598c8 */ if (fZ) goto L_004598c8;
L_0045987e:; BB(0x0045987e);
    /* 0045987e: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00459885: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045988c: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00459892: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00459895: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x45989au); f_00787a4c();
    /* 0045989a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045989d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004598a4:; BB(0x004598a4);
    /* 004598a4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004598a7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004598aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004598ab: call 0x4598d0 */ r_esp -= 4; W32(r_esp, 0x4598b0u); f_004598d0();
    /* 004598b0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004598b3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004598ba:; BB(0x004598ba);
    /* 004598ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004598bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004598c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004598c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004598c7: ret  */ FN_RET(0x00459820); r_esp += 4; return;
L_004598c8:; BB(0x004598c8);
    /* 004598c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004598ca: jmp 0x4598a4 */ goto L_004598a4;
L_004598cc:; BB(0x004598cc);
    /* 004598cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004598ce: jmp 0x4598ba */ goto L_004598ba;
}

void f_004598d0(void) /* sub_4598D0 */
{
    FN_ENTER(0x004598d0);
    /* 004598d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004598d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004598d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004598d5: push 0x8cf3d4 */ { u32 v = 0x8cf3d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004598da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004598e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004598e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004598e8: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004598eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004598ee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004598f1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004598f4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004598f7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004598fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004598fd: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00459900: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00459903: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x459908u); f_007865e8();
    /* 00459908: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045990f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459912: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00459915: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0045991b: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045991e: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 00459924: mov dword ptr [ecx], 0xaf77e0 */ W32((u32)(r_ecx), 0xaf77e0u);
    /* 0045992a: mov eax, dword ptr [0x9a63e0] */ r_eax = R32((u32)(0x9a63e0u));
    /* 0045992f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00459932: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 00459934: mov dword ptr [ecx + 0x394], ebx */ W32((u32)(r_ecx+0x394u), r_ebx);
    /* 0045993a: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045993d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045993e: call dword ptr [0xaf792c] */ { u32 t = R32((u32)(0xaf792cu)); r_esp -= 4; W32(r_esp, 0x459944u); call_ind(t); }
    /* 00459944: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459947: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00459949: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x45994fu); call_ind(t); }
    /* 0045994f: mov edx, dword ptr [0xa44d58] */ r_edx = R32((u32)(0xa44d58u));
    /* 00459955: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459958: movzx ebx, byte ptr [0xa4575c] */ r_ebx = (u32)R8((u32)(0xa4575cu));
    /* 0045995f: mov dword ptr [eax + 0x398], edx */ W32((u32)(r_eax+0x398u), r_edx);
    /* 00459965: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00459967: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0045996a: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 0045996d: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00459970: jne 0x4599a0 */ if (!fZ) goto L_004599a0;
L_00459972:; BB(0x00459972);
    /* 00459972: mov edx, dword ptr [0xa45764] */ r_edx = R32((u32)(0xa45764u));
    /* 00459978: mov ecx, dword ptr [0xa457c0] */ r_ecx = R32((u32)(0xa457c0u));
    /* 0045997e: mov dword ptr [0xa457b4], 0 */ W32((u32)(0xa457b4u), 0x0u);
    /* 00459988: or ebx, 0xffffff01 */ {  u32 a = r_ebx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0045998e: mov dword ptr [0xa457b8], edx */ W32((u32)(0xa457b8u), r_edx);
    /* 00459994: mov dword ptr [0xa457bc], ecx */ W32((u32)(0xa457bcu), r_ecx);
    /* 0045999a: mov byte ptr [0xa4575c], bl */ W8((u32)(0xa4575cu), (u8)r_ebx);
L_004599a0:; BB(0x004599a0);
    /* 004599a0: mov edx, dword ptr [0xa457b4] */ r_edx = R32((u32)(0xa457b4u));
    /* 004599a6: mov ebx, dword ptr [0xa457b8] */ r_ebx = R32((u32)(0xa457b8u));
    /* 004599ac: mov esi, dword ptr [0xa457bc] */ r_esi = R32((u32)(0xa457bcu));
    /* 004599b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004599b4: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 004599b7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004599ba: push 0x9a63e8 */ { u32 v = 0x9a63e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004599bf: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 004599c2: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 004599c5: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004599c8: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 004599cb: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004599ce: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 004599d1: mov dword ptr [edx + 0x78], edi */ W32((u32)(r_edx+0x78u), r_edi);
    /* 004599d4: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 004599d7: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
    /* 004599de: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 004599e1: mov dword ptr [edx + 0x54], edi */ W32((u32)(r_edx+0x54u), r_edi);
    /* 004599e4: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 004599e7: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004599ea: mov dword ptr [edx + 0x48], edi */ W32((u32)(r_edx+0x48u), r_edi);
    /* 004599ed: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 004599f0: mov ecx, edx */ r_ecx = r_edx;
    /* 004599f2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x4599f7u); f_007b9a88();
    /* 004599f7: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004599fa: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004599fd: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 00459a00: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00459a02: mov dword ptr [ebx + 0x39c], eax */ W32((u32)(r_ebx+0x39cu), r_eax);
    /* 00459a08: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00459a0b: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 00459a15: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 00459a1b: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 00459a21: mov dword ptr [ebx + 0x310], 0 */ W32((u32)(r_ebx+0x310u), 0x0u);
    /* 00459a2b: mov dword ptr [ebx + 0x308], ecx */ W32((u32)(r_ebx+0x308u), r_ecx);
    /* 00459a31: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 00459a3b: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x459a40u); f_0077a684();
    /* 00459a40: mov esi, eax */ r_esi = r_eax;
    /* 00459a42: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00459a44: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x459a49u); f_0077a698();
    /* 00459a49: mov ebx, eax */ r_ebx = r_eax;
    /* 00459a4b: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00459a4d: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x459a52u); f_0077a6b4();
    /* 00459a52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459a55: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459a58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459a59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00459a5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00459a5b: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x459a60u); f_007868f8();
    /* 00459a60: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459a63: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 00459a6a: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 00459a71: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x459a76u); f_007b4f54();
    /* 00459a76: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459a79: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00459a7b: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x459a80u); f_00787550();
    /* 00459a80: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459a83: mov dword ptr [edx + 0x3dc], 0x3ecccccd */ W32((u32)(r_edx+0x3dcu), 0x3ecccccdu);
    /* 00459a8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00459a8f: mov dword ptr [edx + 0x3d4], eax */ W32((u32)(r_edx+0x3d4u), r_eax);
    /* 00459a95: mov dword ptr [edx + 0x3d8], 0 */ W32((u32)(r_edx+0x3d8u), 0x0u);
    /* 00459a9f: mov dword ptr [edx + 0x3d0], eax */ W32((u32)(r_edx+0x3d0u), r_eax);
    /* 00459aa5: mov dword ptr [edx + 0x3e0], eax */ W32((u32)(r_edx+0x3e0u), r_eax);
    /* 00459aab: add edx, 0x458 */ {  u32 a = r_edx; u32 b = 0x458u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459ab1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459ab2: push 0x9a63a0 */ { u32 v = 0x9a63a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00459ab7: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x459abcu); f_0058836c();
    /* 00459abc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459abf: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459ac2: mov dword ptr [ecx + 0x454], eax */ W32((u32)(r_ecx+0x454u), r_eax);
    /* 00459ac8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00459aca:; BB(0x00459aca);
    /* 00459aca: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00459acd: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00459ad0: push dword ptr [eax + 0x900184] */ { u32 v = R32((u32)(r_eax+0x900184u)); r_esp -= 4; W32(r_esp, v); }
    /* 00459ad6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459ad9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459ada: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x459adfu); f_00509590();
    /* 00459adf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459ae2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459ae5: mov dword ptr [ecx + ebx*2 + 0x434], eax */ W32((u32)(r_ecx+r_ebx*2+0x434u), r_eax);
    /* 00459aec: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00459aef: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459af2: jl 0x459aca */ if ((fS!=fO)) goto L_00459aca;
L_00459af4:; BB(0x00459af4);
    /* 00459af4: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459af7: jge 0x459b45 */ if ((fS==fO)) goto L_00459b45;
L_00459af9:; BB(0x00459af9);
    /* 00459af9: mov eax, esi */ r_eax = r_esi;
    /* 00459afb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00459afd: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459b00: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459b03: jl 0x459b32 */ if ((fS!=fO)) goto L_00459b32;
L_00459b05:; BB(0x00459b05);
    /* 00459b05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00459b07: mov dword ptr [ecx + esi*4 + 0x434], eax */ W32((u32)(r_ecx+r_esi*4+0x434u), r_eax);
    /* 00459b0e: mov dword ptr [ecx + esi*4 + 0x438], eax */ W32((u32)(r_ecx+r_esi*4+0x438u), r_eax);
    /* 00459b15: mov dword ptr [ecx + esi*4 + 0x43c], eax */ W32((u32)(r_ecx+r_esi*4+0x43cu), r_eax);
    /* 00459b1c: mov dword ptr [ecx + esi*4 + 0x440], eax */ W32((u32)(r_ecx+r_esi*4+0x440u), r_eax);
    /* 00459b23: mov dword ptr [ecx + esi*4 + 0x444], eax */ W32((u32)(r_ecx+r_esi*4+0x444u), r_eax);
    /* 00459b2a: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00459b2d: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459b30: jl 0x459b05 */ if ((fS!=fO)) goto L_00459b05;
L_00459b32:; BB(0x00459b32);
    /* 00459b32: mov dword ptr [ecx + esi*4 + 0x434], 0 */ W32((u32)(r_ecx+r_esi*4+0x434u), 0x0u);
    /* 00459b3d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00459b40: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459b43: jl 0x459b32 */ if ((fS!=fO)) goto L_00459b32;
L_00459b45:; BB(0x00459b45);
    /* 00459b45: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00459b47: push 0x900060 */ { u32 v = 0x900060u; r_esp -= 4; W32(r_esp, v); }
    /* 00459b4c: add ecx, 0x380 */ {  u32 a = r_ecx; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459b52: call 0x44d268 */ r_esp -= 4; W32(r_esp, 0x459b57u); f_0044d268();
    /* 00459b57: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459b5a: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00459b5f: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00459b61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00459b63: mov dword ptr [ecx + 0x3a8], eax */ W32((u32)(r_ecx+0x3a8u), r_eax);
    /* 00459b69: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 00459b6f: mov word ptr [ecx + 0x3cc], dx */ W16((u32)(r_ecx+0x3ccu), (u16)r_edx);
    /* 00459b76: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x459b7bu); f_0077a6cc();
    /* 00459b7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459b7c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459b7f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00459b81: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 00459b84: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00459b88: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00459b8d: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00459b92: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00459b95: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00459b98: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00459b9b: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00459b9e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00459ba1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00459ba3: jle 0x459baa */ if ((fZ||fS!=fO)) goto L_00459baa;
L_00459ba5:; BB(0x00459ba5);
    /* 00459ba5: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459ba8: jle 0x459baf */ if ((fZ||fS!=fO)) goto L_00459baf;
L_00459baa:; BB(0x00459baa);
    /* 00459baa: mov eax, 4 */ r_eax = 0x4u;
L_00459baf:; BB(0x00459baf);
    /* 00459baf: imul eax, dword ptr [0xa45774] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0xa45774u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00459bb6: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00459bb8: mov dword ptr [edx + 0x424], eax */ W32((u32)(r_edx+0x424u), r_eax);
    /* 00459bbe: add eax, -7 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459bc1: mov dword ptr [edx + 0x428], eax */ W32((u32)(r_edx+0x428u), r_eax);
    /* 00459bc7: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x459bccu); f_0077a6cc();
    /* 00459bcc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459bcd: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00459bd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00459bd2: jle 0x459bd9 */ if ((fZ||fS!=fO)) goto L_00459bd9;
L_00459bd4:; BB(0x00459bd4);
    /* 00459bd4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459bd7: jle 0x459bde */ if ((fZ||fS!=fO)) goto L_00459bde;
L_00459bd9:; BB(0x00459bd9);
    /* 00459bd9: mov eax, 1 */ r_eax = 0x1u;
L_00459bde:; BB(0x00459bde);
    /* 00459bde: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459be1: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00459be3: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459be6: mov dword ptr [edx + 0x42c], eax */ W32((u32)(r_edx+0x42cu), r_eax);
    /* 00459bec: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x459bf1u); f_0077a6cc();
    /* 00459bf1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459bf2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459bf5: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00459bf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00459bfa: jl 0x459c01 */ if ((fS!=fO)) goto L_00459c01;
L_00459bfc:; BB(0x00459bfc);
    /* 00459bfc: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459bff: jle 0x459c0d */ if ((fZ||fS!=fO)) goto L_00459c0d;
L_00459c01:; BB(0x00459c01);
    /* 00459c01: mov dword ptr [ecx + 0x430], 0 */ W32((u32)(r_ecx+0x430u), 0x0u);
    /* 00459c0b: jmp 0x459c13 */ goto L_00459c13;
L_00459c0d:; BB(0x00459c0d);
    /* 00459c0d: mov dword ptr [ecx + 0x430], eax */ W32((u32)(r_ecx+0x430u), r_eax);
L_00459c13:; BB(0x00459c13);
    /* 00459c13: movsx edx, word ptr [ecx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 00459c1a: mov dword ptr [ecx + 0x3c8], 0 */ W32((u32)(r_ecx+0x3c8u), 0x0u);
    /* 00459c24: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00459c26: mov dword ptr [ecx + 0x3ec], ebx */ W32((u32)(r_ecx+0x3ecu), r_ebx);
    /* 00459c2c: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 00459c36: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 00459c38: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00459c3b: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00459c3d: mov dword ptr [ecx + 0x3f8], 0 */ W32((u32)(r_ecx+0x3f8u), 0x0u);
    /* 00459c47: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00459c49: mov dword ptr [ecx + 0x3f4], edx */ W32((u32)(r_ecx+0x3f4u), r_edx);
    /* 00459c4f: mov dword ptr [ecx + 0x37c], ebx */ W32((u32)(r_ecx+0x37cu), r_ebx);
    /* 00459c55: mov dword ptr [ecx + 0x3fc], 0x3f800000 */ W32((u32)(r_ecx+0x3fcu), 0x3f800000u);
    /* 00459c5f: mov esi, 2 */ r_esi = 0x2u;
L_00459c64:; BB(0x00459c64);
    /* 00459c64: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00459c67: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00459c69: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00459c6b: mov eax, dword ptr [ebx + 0x434] */ r_eax = R32((u32)(r_ebx+0x434u));
    /* 00459c71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459c73: je 0x459c89 */ if (fZ) goto L_00459c89;
L_00459c75:; BB(0x00459c75);
    /* 00459c75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459c76: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x459c7bu); f_005cdcc0();
    /* 00459c7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459c7c: mov dword ptr [ebx + 0x434], 0 */ W32((u32)(r_ebx+0x434u), 0x0u);
    /* 00459c86: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
L_00459c89:; BB(0x00459c89);
    /* 00459c89: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00459c8c: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459c8f: jl 0x459c64 */ if ((fS!=fO)) goto L_00459c64;
L_00459c91:; BB(0x00459c91);
    /* 00459c91: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00459c97: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459c9a: je 0x459ca6 */ if (fZ) goto L_00459ca6;
L_00459c9c:; BB(0x00459c9c);
    /* 00459c9c: mov dword ptr [ecx + 0x3e8], 0 */ W32((u32)(r_ecx+0x3e8u), 0x0u);
L_00459ca6:; BB(0x00459ca6);
    /* 00459ca6: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00459ca9: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00459cb0: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x459cb5u); f_00459158();
    /* 00459cb5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00459cb8: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00459cbe: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00459cc1: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 00459cc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00459cca: je 0x459cd1 */ if (fZ) goto L_00459cd1;
L_00459ccc:; BB(0x00459ccc);
    /* 00459ccc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x459cceu); call_ind(t); }
    /* 00459cce: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
L_00459cd1:; BB(0x00459cd1);
    /* 00459cd1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00459cd4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459cd7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459cda: mov eax, ecx */ r_eax = r_ecx;
    /* 00459cdc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00459cdf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00459ce6: mov esp, ebp */ r_esp = r_ebp;
    /* 00459ce8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459ce9: ret 8 */ FN_RET(0x004598d0); r_esp += 12; return;
}

void f_00459cec(void) /* sub_459CEC */
{
    FN_ENTER(0x00459cec);
    /* 00459cec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00459ced: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459cee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00459cef: mov edi, ecx */ r_edi = r_ecx;
    /* 00459cf1: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00459cf5: mov eax, ebp */ r_eax = r_ebp;
    /* 00459cf7: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00459cfa: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00459cfd: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00459d00: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
    /* 00459d06: mov dword ptr [edi + 0x3a8], eax */ W32((u32)(r_edi+0x3a8u), r_eax);
    /* 00459d0c: mov edx, ebp */ r_edx = r_ebp;
    /* 00459d0e: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00459d11: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00459d14: shl edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00459d17: mov dword ptr [edi + 0x3b0], edx */ W32((u32)(r_edi+0x3b0u), r_edx);
    /* 00459d1d: mov eax, ebp */ r_eax = r_ebp;
    /* 00459d1f: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00459d22: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00459d25: mov dword ptr [edi + 0x3b4], eax */ W32((u32)(r_edi+0x3b4u), r_eax);
    /* 00459d2b: mov eax, ebp */ r_eax = r_ebp;
    /* 00459d2d: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00459d30: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00459d33: mov dword ptr [edi + 0x3b8], eax */ W32((u32)(r_edi+0x3b8u), r_eax);
    /* 00459d39: mov eax, ebp */ r_eax = r_ebp;
    /* 00459d3b: sar eax, 0x14 */ { u32 c = (20u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00459d3e: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00459d41: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459d44: je 0x459dde */ if (fZ) goto L_00459dde;
L_00459d4a:; BB(0x00459d4a);
    /* 00459d4a: mov word ptr [edi + 0x3cc], ax */ W16((u32)(r_edi+0x3ccu), (u16)r_eax);
L_00459d51:; BB(0x00459d51);
    /* 00459d51: mov ecx, edi */ r_ecx = r_edi;
    /* 00459d53: call 0x459df0 */ r_esp -= 4; W32(r_esp, 0x459d58u); f_00459df0();
    /* 00459d58: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00459d5b: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00459d5e: jl 0x459d66 */ if ((fS!=fO)) goto L_00459d66;
L_00459d60:; BB(0x00459d60);
    /* 00459d60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459d61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459d62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00459d63: ret 4 */ FN_RET(0x00459cec); r_esp += 8; return;
L_00459d66:; BB(0x00459d66);
    /* 00459d66: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00459d69: mov dword ptr [edi + 0x37c], ebp */ W32((u32)(r_edi+0x37cu), r_ebp);
    /* 00459d6f: lea eax, [edi + 0x43c] */ r_eax = (u32)(r_edi+0x43cu);
    /* 00459d75: lea ebp, [edi + 0x454] */ r_ebp = (u32)(r_edi+0x454u);
    /* 00459d7b: mov esi, eax */ r_esi = r_eax;
L_00459d7d:; BB(0x00459d7d);
    /* 00459d7d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00459d7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459d81: je 0x459d90 */ if (fZ) goto L_00459d90;
L_00459d83:; BB(0x00459d83);
    /* 00459d83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459d84: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x459d89u); f_005cdcc0();
    /* 00459d89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459d8a: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00459d90:; BB(0x00459d90);
    /* 00459d90: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00459d93: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00459d95: ja 0x459d7d */ if ((!fC&&!fZ)) goto L_00459d7d;
L_00459d97:; BB(0x00459d97);
    /* 00459d97: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00459d9a: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00459da0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459da3: je 0x459daf */ if (fZ) goto L_00459daf;
L_00459da5:; BB(0x00459da5);
    /* 00459da5: mov dword ptr [edi + 0x3e8], 0 */ W32((u32)(r_edi+0x3e8u), 0x0u);
L_00459daf:; BB(0x00459daf);
    /* 00459daf: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00459db2: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00459db9: mov ecx, edi */ r_ecx = r_edi;
    /* 00459dbb: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x459dc0u); f_00459158();
    /* 00459dc0: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00459dc6: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00459dc9: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 00459dd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00459dd2: je 0x459dd8 */ if (fZ) goto L_00459dd8;
L_00459dd4:; BB(0x00459dd4);
    /* 00459dd4: mov ecx, edi */ r_ecx = r_edi;
    /* 00459dd6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x459dd8u); call_ind(t); }
L_00459dd8:; BB(0x00459dd8);
    /* 00459dd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459dd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459dda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00459ddb: ret 4 */ FN_RET(0x00459cec); r_esp += 8; return;
L_00459dde:; BB(0x00459dde);
    /* 00459dde: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00459de3: mov word ptr [edi + 0x3cc], ax */ W16((u32)(r_edi+0x3ccu), (u16)r_eax);
    /* 00459dea: jmp 0x459d51 */ goto L_00459d51;
}

void f_00459df0(void) /* sub_459DF0 */
{
    FN_ENTER(0x00459df0);
    /* 00459df0: fild dword ptr [ecx + 0x3b4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x3b4u)));
    /* 00459df6: fild dword ptr [ecx + 0x3b8] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x3b8u)));
    /* 00459dfc: fld dword ptr [0x900180] */ FPUSH(R_F32((u32)(0x900180u)));
    /* 00459e02: fld dword ptr [0xa457c4] */ FPUSH(R_F32((u32)(0xa457c4u)));
    /* 00459e08: fld dword ptr [0xa457b0] */ FPUSH(R_F32((u32)(0xa457b0u)));
    /* 00459e0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00459e10: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00459e12: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00459e14: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00459e16: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00459e18: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00459e1a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00459e1c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00459e1e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00459e20: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00459e22: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00459e24: fstp dword ptr [ecx + 0x3bc] */ W_F32((u32)(r_ecx+0x3bcu), ST(0)); FPOP();
    /* 00459e2a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00459e2c: fstp dword ptr [ecx + 0x3c4] */ W_F32((u32)(r_ecx+0x3c4u), ST(0)); FPOP();
    /* 00459e32: mov dword ptr [ecx + 0x3c0], 0 */ W32((u32)(r_ecx+0x3c0u), 0x0u);
    /* 00459e3c: ret  */ FN_RET(0x00459df0); r_esp += 4; return;
}

void f_00459e40(void) /* sub_459E40 */
{
    FN_ENTER(0x00459e40);
    /* 00459e40: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 00459e43: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00459e46: cmp eax, dword ptr [ecx + 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x44u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00459e49: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 00459e4c: jl 0x459e5c */ if ((fS!=fO)) goto L_00459e5c;
L_00459e4e:; BB(0x00459e4e);
    /* 00459e4e: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00459e52: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00459e57: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00459e5b: ret  */ FN_RET(0x00459e40); r_esp += 4; return;
L_00459e5c:; BB(0x00459e5c);
    /* 00459e5c: ret  */ FN_RET(0x00459e40); r_esp += 4; return;
}

void f_00459e60(void) /* sub_459E60 */
{
    FN_ENTER(0x00459e60);
    /* 00459e60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00459e61: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459e64: mov edi, ecx */ r_edi = r_ecx;
    /* 00459e66: fild dword ptr [edi + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x48u)));
    /* 00459e69: fild dword ptr [edi + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x44u)));
    /* 00459e6c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00459e6e: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00459e71: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 00459e74: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00459e76: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00459e78: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00459e7a: fcom dword ptr [0x900178] */ fx_compare(ST(0), R_F32((u32)(0x900178u))); 
    /* 00459e80: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00459e82: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00459e86: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00459e87: ja 0x459e8e */ if ((!fC&&!fZ)) goto L_00459e8e;
L_00459e89:; BB(0x00459e89);
    /* 00459e89: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00459e8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00459e8d: ret  */ FN_RET(0x00459e60); r_esp += 4; return;
L_00459e8e:; BB(0x00459e8e);
    /* 00459e8e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x459e93u); f_0082d7b0();
    /* 00459e93: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x459e98u); f_0082fa9c();
    /* 00459e98: lea ecx, [edi + 0x1c] */ r_ecx = (u32)(r_edi+0x1cu);
    /* 00459e9b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x459ea0u); f_0082d838();
    /* 00459ea0: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00459ea3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00459ea5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x459eaau); f_0082d8bc();
    /* 00459eaa: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00459ead: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x459eb2u); f_00829cc8();
    /* 00459eb2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00459eb6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00459eb9: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x459ebeu); f_00453af4();
    /* 00459ebe: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00459ec1: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00459ec4: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00459ec7: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x459eccu); f_0083046c();
    /* 00459ecc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459ecf: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x459ed4u); f_005963d0();
    /* 00459ed4: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x459ed9u); f_0082faac();
    /* 00459ed9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x459edeu); f_0082da80();
    /* 00459ede: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00459ee1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00459ee2: ret  */ FN_RET(0x00459e60); r_esp += 4; return;
}

void f_00459ee4(void)
{
    FN_ENTER(0x00459ee4);
    /* 00459ee4: fld dword ptr [0x900154] */ FPUSH(R_F32((u32)(0x900154u)));
    /* 00459eea: fld dword ptr [0x900150] */ FPUSH(R_F32((u32)(0x900150u)));
    /* 00459ef0: fld dword ptr [0x900148] */ FPUSH(R_F32((u32)(0x900148u)));
    /* 00459ef6: mov eax, 0x4b */ r_eax = 0x4bu;
    /* 00459efb: mov edx, 0x96 */ r_edx = 0x96u;
    /* 00459f00: mov dword ptr [0xa457c8], 0x3f800000 */ W32((u32)(0xa457c8u), 0x3f800000u);
    /* 00459f0a: mov dword ptr [0xa45774], eax */ W32((u32)(0xa45774u), r_eax);
    /* 00459f0f: mov dword ptr [0xa457e0], eax */ W32((u32)(0xa457e0u), r_eax);
    /* 00459f14: mov dword ptr [0xa457cc], 0x41000000 */ W32((u32)(0xa457ccu), 0x41000000u);
    /* 00459f1e: mov dword ptr [0xa457d0], 0x3fc00000 */ W32((u32)(0xa457d0u), 0x3fc00000u);
    /* 00459f28: mov dword ptr [0xa457e4], eax */ W32((u32)(0xa457e4u), r_eax);
    /* 00459f2d: mov dword ptr [0xa45778], edx */ W32((u32)(0xa45778u), r_edx);
    /* 00459f33: mov dword ptr [0xa45760], 0x43960000 */ W32((u32)(0xa45760u), 0x43960000u);
    /* 00459f3d: mov dword ptr [0xa45768], 0x43a50000 */ W32((u32)(0xa45768u), 0x43a50000u);
    /* 00459f47: mov dword ptr [0xa457e8], edx */ W32((u32)(0xa457e8u), r_edx);
    /* 00459f4d: mov dword ptr [0xa457ec], eax */ W32((u32)(0xa457ecu), r_eax);
    /* 00459f52: mov dword ptr [0xa45764], 0xc2480000 */ W32((u32)(0xa45764u), 0xc2480000u);
    /* 00459f5c: mov dword ptr [0xa4576c], 0xc2be0000 */ W32((u32)(0xa4576cu), 0xc2be0000u);
    /* 00459f66: mov dword ptr [0xa457f0], edx */ W32((u32)(0xa457f0u), r_edx);
    /* 00459f6c: mov dword ptr [0xa457fc], edx */ W32((u32)(0xa457fcu), r_edx);
    /* 00459f72: mov dword ptr [0xa457c0], 0xc3960000 */ W32((u32)(0xa457c0u), 0xc3960000u);
    /* 00459f7c: mov dword ptr [0xa457d4], 0x42700000 */ W32((u32)(0xa457d4u), 0x42700000u);
    /* 00459f86: mov dword ptr [0xa457d8], 0x42200000 */ W32((u32)(0xa457d8u), 0x42200000u);
    /* 00459f90: mov dword ptr [0x9a63ec], 0x42700000 */ W32((u32)(0x9a63ecu), 0x42700000u);
    /* 00459f9a: mov dword ptr [0x9a63f4], 0x42200000 */ W32((u32)(0x9a63f4u), 0x42200000u);
    /* 00459fa4: mov dword ptr [0xa457dc], 0x41200000 */ W32((u32)(0xa457dcu), 0x41200000u);
    /* 00459fae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00459fb0: fadd dword ptr [0xa457dc] */ ST(0) = ST(0) + R_F32((u32)(0xa457dcu));
    /* 00459fb6: fst dword ptr [0xa457c4] */ W_F32((u32)(0xa457c4u), ST(0));
    /* 00459fbc: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00459fbe: fstp dword ptr [0xa457b0] */ W_F32((u32)(0xa457b0u), ST(0)); FPOP();
    /* 00459fc4: mov dword ptr [0xa45770], 0x1e */ W32((u32)(0xa45770u), 0x1eu);
    /* 00459fce: mov dword ptr [0xa45780], 0x42480000 */ W32((u32)(0xa45780u), 0x42480000u);
    /* 00459fd8: fadd dword ptr [0xa45780] */ ST(0) = ST(0) + R_F32((u32)(0xa45780u));
    /* 00459fde: fstp dword ptr [0xa4577c] */ W_F32((u32)(0xa4577cu), ST(0)); FPOP();
    /* 00459fe4: mov dword ptr [0xa457f4], 0xe1 */ W32((u32)(0xa457f4u), 0xe1u);
    /* 00459fee: mov dword ptr [0xa457f8], 0x12c */ W32((u32)(0xa457f8u), 0x12cu);
    /* 00459ff8: mov dword ptr [0xa45800], 0x50 */ W32((u32)(0xa45800u), 0x50u);
    /* 0045a002: mov dword ptr [0xa457a4], 0x46 */ W32((u32)(0xa457a4u), 0x46u);
    /* 0045a00c: ret  */ FN_RET(0x00459ee4); r_esp += 4; return;
}

