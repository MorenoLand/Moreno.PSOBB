#include "protos.h"

void f_00744010(void) /* sub_744010 */
{
    FN_ENTER(0x00744010);
    /* 00744010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00744011: mov ebp, esp */ r_ebp = r_esp;
    /* 00744013: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00744015: push 0x8f2462 */ { u32 v = 0x8f2462u; r_esp -= 4; W32(r_esp, v); }
    /* 0074401a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00744020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744021: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00744028: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074402b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074402e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00744031: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00744034: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00744037: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0074403a: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074403c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x744041u); f_0073ec50();
    /* 00744041: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744042: movsx edx, word ptr [0xa9c4f4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa9c4f4u));
    /* 00744049: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074404c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074404d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074404e: push 0x9f3c64 */ { u32 v = 0x9f3c64u; r_esp -= 4; W32(r_esp, v); }
    /* 00744053: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x744058u); f_00710d30();
    /* 00744058: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074405f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00744062: mov dword ptr [edx], 0xb41870 */ W32((u32)(r_edx), 0xb41870u);
    /* 00744068: mov eax, dword ptr [0x9f3c60] */ r_eax = R32((u32)(0x9f3c60u));
    /* 0074406d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00744070: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x744075u); f_0078b1c4();
    /* 00744075: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744078: je 0x744142 */ if (fZ) goto L_00744142;
L_0074407e:; BB(0x0074407e);
    /* 0074407e: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x744083u); f_00807ac0();
    /* 00744083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744084: call 0x79313c */ r_esp -= 4; W32(r_esp, 0x744089u); f_0079313c();
    /* 00744089: mov esi, eax */ r_esi = r_eax;
    /* 0074408b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0074408e:; BB(0x0074408e);
    /* 0074408e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074408f: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x744094u); f_00858009();
    /* 00744094: lea ebx, [eax + 1] */ r_ebx = (u32)(r_eax+0x1u);
    /* 00744097: lea edx, [eax + eax + 2] */ r_edx = (u32)(r_eax+r_eax+0x2u);
    /* 0074409b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074409c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7440a1u); f_008581c5();
    /* 007440a1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007440a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007440a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007440a6: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 007440a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007440aa: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7440afu); f_00857dec();
    /* 007440af: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007440b6: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007440b8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7440bdu); f_008581c5();
    /* 007440bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007440c0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007440c3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007440c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007440c8: je 0x74413b */ if (fZ) goto L_0074413b;
L_007440ca:; BB(0x007440ca);
    /* 007440ca: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007440d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007440d8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007440db: mov ecx, eax */ r_ecx = r_eax;
    /* 007440dd: movsx eax, word ptr [edx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 007440e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007440e2: push dword ptr [edx + 0x74] */ { u32 v = R32((u32)(r_edx+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 007440e5: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x7440eau); f_00761320();
    /* 007440ea: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007440f1:; BB(0x007440f1);
    /* 007440f1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007440f4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007440f7: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007440fa: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007440fd: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 00744104: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 00744107: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744109: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 0074410c: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 00744113: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
    /* 00744119: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 00744123: mov dword ptr [eax + 0x88], 0 */ W32((u32)(r_eax+0x88u), 0x0u);
    /* 0074412d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744130: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744137: mov esp, ebp */ r_esp = r_ebp;
    /* 00744139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074413a: ret  */ FN_RET(0x00744010); r_esp += 4; return;
L_0074413b:; BB(0x0074413b);
    /* 0074413b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074413d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00744140: jmp 0x7440f1 */ goto L_007440f1;
L_00744142:; BB(0x00744142);
    /* 00744142: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x744147u); f_00816d30();
    /* 00744147: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00744149: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x74414eu); f_007930dc();
    /* 0074414e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074414f: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x744154u); f_00816cb8();
    /* 00744154: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00744157: call 0x816994 */ r_esp -= 4; W32(r_esp, 0x74415cu); f_00816994();
    /* 0074415c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074415e: push dword ptr [0xa983d0] */ { u32 v = R32((u32)(0xa983d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00744164: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x744169u); f_00816684();
    /* 00744169: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074416c: mov esi, 0xac9d80 */ r_esi = 0xac9d80u;
    /* 00744171: jmp 0x74408e */ goto L_0074408e;
}

void f_00744178(void) /* sub_744178 */
{
    FN_ENTER(0x00744178);
    /* 00744178: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00744179: mov edi, ecx */ r_edi = r_ecx;
    /* 0074417b: mov ecx, edi */ r_ecx = r_edi;
    /* 0074417d: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x744182u); f_00710db4();
    /* 00744182: mov ecx, edi */ r_ecx = r_edi;
    /* 00744184: call 0x7441a8 */ r_esp -= 4; W32(r_esp, 0x744189u); f_007441a8();
    /* 00744189: mov ecx, edi */ r_ecx = r_edi;
    /* 0074418b: call 0x744230 */ r_esp -= 4; W32(r_esp, 0x744190u); f_00744230();
    /* 00744190: fild dword ptr [edi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x5cu)));
    /* 00744193: fcomp dword ptr [0x973288] */ fx_compare(ST(0), R_F32((u32)(0x973288u))); FPOP();
    /* 00744199: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0074419b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0074419c: jb 0x7441a6 */ if (fC) goto L_007441a6;
L_0074419e:; BB(0x0074419e);
    /* 0074419e: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 007441a1: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x7441a6u); f_00761388();
L_007441a6:; BB(0x007441a6);
    /* 007441a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007441a7: ret  */ FN_RET(0x00744178); r_esp += 4; return;
}

void f_007441a8(void) /* sub_7441A8 */
{
    FN_ENTER(0x007441a8);
    /* 007441a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007441a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007441ab: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 007441ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007441b0: jne 0x7441fc */ if (!fZ) goto L_007441fc;
L_007441b2:; BB(0x007441b2);
    /* 007441b2: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 007441b5: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007441b7: jne 0x74422b */ if (!fZ) goto L_0074422b;
L_007441b9:; BB(0x007441b9);
    /* 007441b9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007441bb: je 0x74422b */ if (fZ) goto L_0074422b;
L_007441bd:; BB(0x007441bd);
    /* 007441bd: mov dword ptr [ebx + 0x6c], 1 */ W32((u32)(r_ebx+0x6cu), 0x1u);
    /* 007441c4: call 0x8054fc */ r_esp -= 4; W32(r_esp, 0x7441c9u); f_008054fc();
    /* 007441c9: call 0x8055c0 */ r_esp -= 4; W32(r_esp, 0x7441ceu); f_008055c0();
    /* 007441ce: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007441d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007441d6: je 0x7441e5 */ if (fZ) goto L_007441e5;
L_007441d8:; BB(0x007441d8);
    /* 007441d8: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 007441dc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007441e1: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_007441e5:; BB(0x007441e5);
    /* 007441e5: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 007441ec: mov dword ptr [ebx + 0x64], 0 */ W32((u32)(r_ebx+0x64u), 0x0u);
    /* 007441f3: mov dword ptr [ebx + 0x68], 0 */ W32((u32)(r_ebx+0x68u), 0x0u);
    /* 007441fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007441fb: ret  */ FN_RET(0x007441a8); r_esp += 4; return;
L_007441fc:; BB(0x007441fc);
    /* 007441fc: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 007441ff: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744201: jne 0x74422b */ if (!fZ) goto L_0074422b;
L_00744203:; BB(0x00744203);
    /* 00744203: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00744209: mov dword ptr [ebx + 0x6c], 0 */ W32((u32)(r_ebx+0x6cu), 0x0u);
    /* 00744210: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744212: je 0x744221 */ if (fZ) goto L_00744221;
L_00744214:; BB(0x00744214);
    /* 00744214: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00744218: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074421d: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_00744221:; BB(0x00744221);
    /* 00744221: mov dword ptr [0xaafbe4], 0 */ W32((u32)(0xaafbe4u), 0x0u);
L_0074422b:; BB(0x0074422b);
    /* 0074422b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074422c: ret  */ FN_RET(0x007441a8); r_esp += 4; return;
}

void f_00744230(void) /* sub_744230 */
{
    FN_ENTER(0x00744230);
    /* 00744230: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00744231: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00744234: mov esi, ecx */ r_esi = r_ecx;
    /* 00744236: mov eax, dword ptr [esi + 0x6c] */ r_eax = R32((u32)(r_esi+0x6cu));
    /* 00744239: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074423b: je 0x7444b1 */ if (fZ) goto L_007444b1;
L_00744241:; BB(0x00744241);
    /* 00744241: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 00744247: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744249: jne 0x74442b */ if (!fZ) goto L_0074442b;
L_0074424f:; BB(0x0074424f);
    /* 0074424f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00744251: call 0x7c00e8 */ r_esp -= 4; W32(r_esp, 0x744256u); f_007c00e8();
    /* 00744256: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744259: je 0x7442c8 */ if (fZ) goto L_007442c8;
L_0074425b:; BB(0x0074425b);
    /* 0074425b: lea eax, [esi + 0x78] */ r_eax = (u32)(r_esi+0x78u);
    /* 0074425e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074425f: call 0x70a024 */ r_esp -= 4; W32(r_esp, 0x744264u); f_0070a024();
    /* 00744264: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744265: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 00744268: mov edx, dword ptr [esi + 0x7c] */ r_edx = R32((u32)(r_esi+0x7cu));
    /* 0074426b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0074426f: mov ecx, esi */ r_ecx = r_esi;
    /* 00744271: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00744275: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0074427d: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00744281: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 00744289: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0074428d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074428e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074428f: call 0x7125c4 */ r_esp -= 4; W32(r_esp, 0x744294u); f_007125c4();
    /* 00744294: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744296: je 0x7442c8 */ if (fZ) goto L_007442c8;
L_00744298:; BB(0x00744298);
    /* 00744298: mov dword ptr [esi + 0x8c], 1 */ W32((u32)(r_esi+0x8cu), 0x1u);
    /* 007442a2: lea eax, [esi + 0x84] */ r_eax = (u32)(r_esi+0x84u);
    /* 007442a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007442a9: call 0x805598 */ r_esp -= 4; W32(r_esp, 0x7442aeu); f_00805598();
    /* 007442ae: mov dword ptr [esi + 0x68], 0 */ W32((u32)(r_esi+0x68u), 0x0u);
    /* 007442b5: mov dword ptr [esi + 0x64], 0 */ W32((u32)(r_esi+0x64u), 0x0u);
    /* 007442bc: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 007442c3: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007442c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007442c7: ret  */ FN_RET(0x00744230); r_esp += 4; return;
L_007442c8:; BB(0x007442c8);
    /* 007442c8: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7442cdu); f_00694c6c();
    /* 007442cd: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 007442d3: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007442d6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007442d8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007442da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007442dc: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007442e3: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x7442e8u); f_007c1100();
    /* 007442e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007442ea: je 0x7442f8 */ if (fZ) goto L_007442f8;
L_007442ec:; BB(0x007442ec);
    /* 007442ec: fld dword ptr [0x973278] */ FPUSH(R_F32((u32)(0x973278u)));
    /* 007442f2: fadd dword ptr [esi + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x64u));
    /* 007442f5: fstp dword ptr [esi + 0x64] */ W_F32((u32)(r_esi+0x64u), ST(0)); FPOP();
L_007442f8:; BB(0x007442f8);
    /* 007442f8: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7442fdu); f_00694c6c();
    /* 007442fd: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00744303: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00744306: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00744308: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074430a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074430c: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00744313: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x744318u); f_007c1100();
    /* 00744318: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074431a: je 0x744328 */ if (fZ) goto L_00744328;
L_0074431c:; BB(0x0074431c);
    /* 0074431c: fld dword ptr [0x973274] */ FPUSH(R_F32((u32)(0x973274u)));
    /* 00744322: fadd dword ptr [esi + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x64u));
    /* 00744325: fstp dword ptr [esi + 0x64] */ W_F32((u32)(r_esi+0x64u), ST(0)); FPOP();
L_00744328:; BB(0x00744328);
    /* 00744328: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x74432du); f_00694c6c();
    /* 0074432d: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00744333: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00744336: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00744338: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074433a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074433c: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00744343: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x744348u); f_007c1100();
    /* 00744348: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074434a: je 0x744358 */ if (fZ) goto L_00744358;
L_0074434c:; BB(0x0074434c);
    /* 0074434c: fld dword ptr [0x973278] */ FPUSH(R_F32((u32)(0x973278u)));
    /* 00744352: fadd dword ptr [esi + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x60u));
    /* 00744355: fstp dword ptr [esi + 0x60] */ W_F32((u32)(r_esi+0x60u), ST(0)); FPOP();
L_00744358:; BB(0x00744358);
    /* 00744358: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x74435du); f_00694c6c();
    /* 0074435d: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00744363: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00744366: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00744368: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074436a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074436c: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00744373: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x744378u); f_007c1100();
    /* 00744378: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074437a: je 0x744388 */ if (fZ) goto L_00744388;
L_0074437c:; BB(0x0074437c);
    /* 0074437c: fld dword ptr [0x973274] */ FPUSH(R_F32((u32)(0x973274u)));
    /* 00744382: fadd dword ptr [esi + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x60u));
    /* 00744385: fstp dword ptr [esi + 0x60] */ W_F32((u32)(r_esi+0x60u), ST(0)); FPOP();
L_00744388:; BB(0x00744388);
    /* 00744388: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x74438du); f_00694c6c();
    /* 0074438d: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 00744393: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00744396: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00744398: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074439a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074439c: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007443a3: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x7443a8u); f_007c1100();
    /* 007443a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007443aa: je 0x7443b8 */ if (fZ) goto L_007443b8;
L_007443ac:; BB(0x007443ac);
    /* 007443ac: fld dword ptr [0x973274] */ FPUSH(R_F32((u32)(0x973274u)));
    /* 007443b2: fadd dword ptr [esi + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x68u));
    /* 007443b5: fstp dword ptr [esi + 0x68] */ W_F32((u32)(r_esi+0x68u), ST(0)); FPOP();
L_007443b8:; BB(0x007443b8);
    /* 007443b8: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7443bdu); f_00694c6c();
    /* 007443bd: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 007443c3: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007443c6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007443c8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007443ca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007443cc: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007443d3: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x7443d8u); f_007c1100();
    /* 007443d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007443da: je 0x7443e8 */ if (fZ) goto L_007443e8;
L_007443dc:; BB(0x007443dc);
    /* 007443dc: fld dword ptr [0x973278] */ FPUSH(R_F32((u32)(0x973278u)));
    /* 007443e2: fadd dword ptr [esi + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x68u));
    /* 007443e5: fstp dword ptr [esi + 0x68] */ W_F32((u32)(r_esi+0x68u), ST(0)); FPOP();
L_007443e8:; BB(0x007443e8);
    /* 007443e8: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 007443eb: call 0x802b44 */ r_esp -= 4; W32(r_esp, 0x7443f0u); f_00802b44();
    /* 007443f0: push dword ptr [esi + 0x64] */ { u32 v = R32((u32)(r_esi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 007443f3: call 0x802b78 */ r_esp -= 4; W32(r_esp, 0x7443f8u); f_00802b78();
    /* 007443f8: push dword ptr [esi + 0x68] */ { u32 v = R32((u32)(r_esi+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 007443fb: call 0x802bac */ r_esp -= 4; W32(r_esp, 0x744400u); f_00802bac();
    /* 00744400: fld dword ptr [0x973270] */ FPUSH(R_F32((u32)(0x973270u)));
    /* 00744406: fld dword ptr [esi + 0x60] */ FPUSH(R_F32((u32)(r_esi+0x60u)));
    /* 00744409: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0074440b: fld dword ptr [esi + 0x64] */ FPUSH(R_F32((u32)(r_esi+0x64u)));
    /* 0074440e: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 00744411: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00744413: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00744415: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00744417: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00744419: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074441b: fstp dword ptr [esi + 0x60] */ W_F32((u32)(r_esi+0x60u), ST(0)); FPOP();
    /* 0074441e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00744420: fstp dword ptr [esi + 0x64] */ W_F32((u32)(r_esi+0x64u), ST(0)); FPOP();
    /* 00744423: fstp dword ptr [esi + 0x68] */ W_F32((u32)(r_esi+0x68u), ST(0)); FPOP();
    /* 00744426: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00744429: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074442a: ret  */ FN_RET(0x00744230); r_esp += 4; return;
L_0074442b:; BB(0x0074442b);
    /* 0074442b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074442d: call 0x7c00e8 */ r_esp -= 4; W32(r_esp, 0x744432u); f_007c00e8();
    /* 00744432: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744435: jne 0x744468 */ if (!fZ) goto L_00744468;
L_00744437:; BB(0x00744437);
    /* 00744437: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
    /* 00744441: mov dword ptr [esi + 0x7c], 0 */ W32((u32)(r_esi+0x7cu), 0x0u);
    /* 00744448: mov dword ptr [esi + 0x78], 0 */ W32((u32)(r_esi+0x78u), 0x0u);
    /* 0074444f: mov dword ptr [esi + 0x88], 0 */ W32((u32)(r_esi+0x88u), 0x0u);
    /* 00744459: mov dword ptr [esi + 0x84], 0 */ W32((u32)(r_esi+0x84u), 0x0u);
    /* 00744463: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00744466: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00744467: ret  */ FN_RET(0x00744230); r_esp += 4; return;
L_00744468:; BB(0x00744468);
    /* 00744468: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0074446b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074446c: call 0x70a024 */ r_esp -= 4; W32(r_esp, 0x744471u); f_0070a024();
    /* 00744471: fld dword ptr [0x97327c] */ FPUSH(R_F32((u32)(0x97327cu)));
    /* 00744477: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0074447b: fsub dword ptr [esi + 0x78] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x78u));
    /* 0074447e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00744480: fsubr dword ptr [esi + 0x84] */ ST(0) = R_F32((u32)(r_esi+0x84u)) - ST(0);
    /* 00744486: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0074448a: fsub dword ptr [esi + 0x7c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x7cu));
    /* 0074448d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0074448f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00744491: fsubr dword ptr [esi + 0x88] */ ST(0) = R_F32((u32)(r_esi+0x88u)) - ST(0);
    /* 00744497: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00744499: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0074449d: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007444a1: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007444a5: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007444a9: call 0x805568 */ r_esp -= 4; W32(r_esp, 0x7444aeu); f_00805568();
    /* 007444ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007444b1:; BB(0x007444b1);
    /* 007444b1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007444b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007444b5: ret  */ FN_RET(0x00744230); r_esp += 4; return;
}

void f_007444b8(void) /* sub_7444B8 */
{
    FN_ENTER(0x007444b8);
    /* 007444b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007444b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007444ba: mov edi, ecx */ r_edi = r_ecx;
    /* 007444bc: mov ecx, edi */ r_ecx = r_edi;
    /* 007444be: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x7444c3u); f_00712644();
    /* 007444c3: mov esi, eax */ r_esi = r_eax;
    /* 007444c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007444c6: mov ecx, edi */ r_ecx = r_edi;
    /* 007444c8: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x7444cdu); f_00710f80();
    /* 007444cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007444ce: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 007444d1: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x7444d6u); f_00761390();
    /* 007444d6: mov edx, dword ptr [edi + 0x6c] */ r_edx = R32((u32)(r_edi+0x6cu));
    /* 007444d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007444db: je 0x7444ed */ if (fZ) goto L_007444ed;
L_007444dd:; BB(0x007444dd);
    /* 007444dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007444de: mov ecx, edi */ r_ecx = r_edi;
    /* 007444e0: call 0x7444f0 */ r_esp -= 4; W32(r_esp, 0x7444e5u); f_007444f0();
    /* 007444e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007444e6: mov ecx, edi */ r_ecx = r_edi;
    /* 007444e8: call 0x7445e4 */ r_esp -= 4; W32(r_esp, 0x7444edu); f_007445e4();
L_007444ed:; BB(0x007444ed);
    /* 007444ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007444ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007444ef: ret  */ FN_RET(0x007444b8); r_esp += 4; return;
}

void f_007444f0(void) /* sub_7444F0 */
{
    FN_ENTER(0x007444f0);
    /* 007444f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007444f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007444f2: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007444f5: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 007444f9: fld dword ptr [0x973268] */ FPUSH(R_F32((u32)(0x973268u)));
    /* 007444ff: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 00744502: fdivr dword ptr [0x97326c] */ ST(0) = R_F32((u32)(0x97326cu)) / ST(0);
    /* 00744508: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0074450b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074450e: jge 0x744552 */ if ((fS==fO)) goto L_00744552;
L_00744510:; BB(0x00744510);
    /* 00744510: mov edx, eax */ r_edx = r_eax;
    /* 00744512: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00744515: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00744517: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0074451b: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0074451f: fmul dword ptr [0x973264] */ ST(0) = ST(0) * R_F32((u32)(0x973264u));
    /* 00744525: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00744529: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0074452e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00744533: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00744537: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0074453b: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 0074453f: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00744543: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00744547: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0074454a: or esi, 0xffffff */ {  u32 a = r_esi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00744550: jmp 0x744557 */ goto L_00744557;
L_00744552:; BB(0x00744552);
    /* 00744552: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
L_00744557:; BB(0x00744557);
    /* 00744557: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0074455b: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 00744563: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00744565: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00744568: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0074456c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00744570: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00744574: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x744579u); f_0071d484();
    /* 00744579: fld dword ptr [0x97325c] */ FPUSH(R_F32((u32)(0x97325cu)));
    /* 0074457f: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 00744582: fld dword ptr [0x973258] */ FPUSH(R_F32((u32)(0x973258u)));
    /* 00744588: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 0074458b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074458d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00744591: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00744595: push 0x145 */ { u32 v = 0x145u; r_esp -= 4; W32(r_esp, v); }
    /* 0074459a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74459fu); f_0079317c();
    /* 0074459f: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 007445a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007445a5: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 007445aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007445ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007445ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007445ad: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x7445b2u); f_0071d58c();
    /* 007445b2: fld dword ptr [0x973250] */ FPUSH(R_F32((u32)(0x973250u)));
    /* 007445b8: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 007445bb: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007445bf: push 0x146 */ { u32 v = 0x146u; r_esp -= 4; W32(r_esp, v); }
    /* 007445c4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7445c9u); f_0079317c();
    /* 007445c9: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 007445cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007445cf: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 007445d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007445d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007445d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007445d7: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x7445dcu); f_0071d58c();
    /* 007445dc: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007445df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007445e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007445e1: ret 4 */ FN_RET(0x007444f0); r_esp += 8; return;
}

void f_007445e4(void) /* sub_7445E4 */
{
    FN_ENTER(0x007445e4);
    /* 007445e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007445e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007445e6: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007445e9: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 007445ed: fld dword ptr [0x973248] */ FPUSH(R_F32((u32)(0x973248u)));
    /* 007445f3: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 007445f6: fdivr dword ptr [0x97324c] */ ST(0) = R_F32((u32)(0x97324cu)) / ST(0);
    /* 007445fc: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 007445ff: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00744603: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00744606: jge 0x74464a */ if ((fS==fO)) goto L_0074464a;
L_00744608:; BB(0x00744608);
    /* 00744608: mov edx, eax */ r_edx = r_eax;
    /* 0074460a: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0074460d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0074460f: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00744613: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00744617: fmul dword ptr [0x973244] */ ST(0) = ST(0) * R_F32((u32)(0x973244u));
    /* 0074461d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00744621: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00744626: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074462b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0074462f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00744633: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 00744637: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0074463b: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0074463f: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00744642: or esi, 0xffffff */ {  u32 a = r_esi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00744648: jmp 0x74464f */ goto L_0074464f;
L_0074464a:; BB(0x0074464a);
    /* 0074464a: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
L_0074464f:; BB(0x0074464f);
    /* 0074464f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00744654: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x744659u); f_0082bb30();
    /* 00744659: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0074465f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x744664u); f_00829cc8();
    /* 00744664: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00744666: mov edx, esi */ r_edx = r_esi;
    /* 00744668: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x74466du); f_0082bb60();
    /* 0074466d: mov dword ptr [esp], 0x41800000 */ W32((u32)(r_esp), 0x41800000u);
    /* 00744674: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00744677: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00744679: mov dword ptr [esp + 4], 0x43ad0000 */ W32((u32)(r_esp+0x4u), 0x43ad0000u);
    /* 00744681: mov dword ptr [esp + 8], 0x41e00000 */ W32((u32)(r_esp+0x8u), 0x41e00000u);
    /* 00744689: mov dword ptr [esp + 0xc], 0x43b40000 */ W32((u32)(r_esp+0xcu), 0x43b40000u);
    /* 00744691: mov dword ptr [esp + 0x10], 0x3f5f0000 */ W32((u32)(r_esp+0x10u), 0x3f5f0000u);
    /* 00744699: mov dword ptr [esp + 0x14], 0x3e280000 */ W32((u32)(r_esp+0x14u), 0x3e280000u);
    /* 007446a1: mov dword ptr [esp + 0x18], 0x3f6b0000 */ W32((u32)(r_esp+0x18u), 0x3f6b0000u);
    /* 007446a9: mov dword ptr [esp + 0x1c], 0x3e600000 */ W32((u32)(r_esp+0x1cu), 0x3e600000u);
    /* 007446b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007446b2: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7446b7u); f_0071bbb4();
    /* 007446b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007446b8: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007446bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007446bf: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007446c3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7446c8u); f_0082b440();
    /* 007446c8: mov dword ptr [esp], 0x43f20000 */ W32((u32)(r_esp), 0x43f20000u);
    /* 007446cf: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007446d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007446d4: mov dword ptr [esp + 4], 0x43ad0000 */ W32((u32)(r_esp+0x4u), 0x43ad0000u);
    /* 007446dc: mov dword ptr [esp + 8], 0x43f80000 */ W32((u32)(r_esp+0x8u), 0x43f80000u);
    /* 007446e4: mov dword ptr [esp + 0xc], 0x43b40000 */ W32((u32)(r_esp+0xcu), 0x43b40000u);
    /* 007446ec: mov dword ptr [esp + 0x10], 0x3f6e0000 */ W32((u32)(r_esp+0x10u), 0x3f6e0000u);
    /* 007446f4: mov dword ptr [esp + 0x18], 0x3f7a0000 */ W32((u32)(r_esp+0x18u), 0x3f7a0000u);
    /* 007446fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007446fd: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x744702u); f_0071bbb4();
    /* 00744702: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00744703: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00744707: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074470a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0074470e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x744713u); f_0082b440();
    /* 00744713: mov dword ptr [esp], 0x43790000 */ W32((u32)(r_esp), 0x43790000u);
    /* 0074471a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0074471d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074471f: mov dword ptr [esp + 4], 0x43880000 */ W32((u32)(r_esp+0x4u), 0x43880000u);
    /* 00744727: mov dword ptr [esp + 8], 0x43838000 */ W32((u32)(r_esp+0x8u), 0x43838000u);
    /* 0074472f: mov dword ptr [esp + 0xc], 0x438e0000 */ W32((u32)(r_esp+0xcu), 0x438e0000u);
    /* 00744737: mov dword ptr [esp + 0x10], 0x3f700000 */ W32((u32)(r_esp+0x10u), 0x3f700000u);
    /* 0074473f: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00744747: mov dword ptr [esp + 0x18], 0x3f7e0000 */ W32((u32)(r_esp+0x18u), 0x3f7e0000u);
    /* 0074474f: mov dword ptr [esp + 0x1c], 0x3d400000 */ W32((u32)(r_esp+0x1cu), 0x3d400000u);
    /* 00744757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744758: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x74475du); f_0071bbb4();
    /* 0074475d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074475e: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00744762: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00744765: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00744769: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x74476eu); f_0082b440();
    /* 0074476e: mov dword ptr [esp], 0x43790000 */ W32((u32)(r_esp), 0x43790000u);
    /* 00744775: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00744778: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074477a: mov dword ptr [esp + 4], 0x43d20000 */ W32((u32)(r_esp+0x4u), 0x43d20000u);
    /* 00744782: mov dword ptr [esp + 8], 0x43838000 */ W32((u32)(r_esp+0x8u), 0x43838000u);
    /* 0074478a: mov dword ptr [esp + 0xc], 0x43d80000 */ W32((u32)(r_esp+0xcu), 0x43d80000u);
    /* 00744792: mov dword ptr [esp + 0x14], 0x3de00000 */ W32((u32)(r_esp+0x14u), 0x3de00000u);
    /* 0074479a: mov dword ptr [esp + 0x1c], 0x3e200000 */ W32((u32)(r_esp+0x1cu), 0x3e200000u);
    /* 007447a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007447a3: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7447a8u); f_0071bbb4();
    /* 007447a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007447a9: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007447ad: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007447b0: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007447b4: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7447b9u); f_0082b440();
    /* 007447b9: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7447beu); f_004ac444();
    /* 007447be: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007447c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007447c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007447c3: ret 4 */ FN_RET(0x007445e4); r_esp += 8; return;
}

void f_007447c8(void) /* sub_7447C8 */
{
    FN_ENTER(0x007447c8);
    /* 007447c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007447c9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007447cc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007447ce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007447d0: call 0x7c0108 */ r_esp -= 4; W32(r_esp, 0x7447d5u); f_007c0108();
    /* 007447d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007447d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007447d8: je 0x744822 */ if (fZ) goto L_00744822;
L_007447da:; BB(0x007447da);
    /* 007447da: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007447dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007447de: call 0x70a024 */ r_esp -= 4; W32(r_esp, 0x7447e3u); f_0070a024();
    /* 007447e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007447e4: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007447e7: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007447eb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007447ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007447f1: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007447f5: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 007447fd: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00744801: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00744809: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0074480d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074480e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074480f: call 0x7125c4 */ r_esp -= 4; W32(r_esp, 0x744814u); f_007125c4();
    /* 00744814: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744816: je 0x744822 */ if (fZ) goto L_00744822;
L_00744818:; BB(0x00744818);
    /* 00744818: mov eax, 1 */ r_eax = 0x1u;
    /* 0074481d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00744820: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744821: ret  */ FN_RET(0x007447c8); r_esp += 4; return;
L_00744822:; BB(0x00744822);
    /* 00744822: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00744824: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00744827: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744828: ret  */ FN_RET(0x007447c8); r_esp += 4; return;
}

void f_0074482c(void) /* sub_74482C */
{
    FN_ENTER(0x0074482c);
    /* 0074482c: mov dword ptr [0xa9aa9c], 0x3f800000 */ W32((u32)(0xa9aa9cu), 0x3f800000u);
    /* 00744836: mov dword ptr [0xa9aaa0], 0x41000000 */ W32((u32)(0xa9aaa0u), 0x41000000u);
    /* 00744840: mov dword ptr [0xa9aaa4], 0x3fc00000 */ W32((u32)(0xa9aaa4u), 0x3fc00000u);
    /* 0074484a: ret  */ FN_RET(0x0074482c); r_esp += 4; return;
}

void f_0074484c(void) /* sub_74484C */
{
    FN_ENTER(0x0074484c);
    /* 0074484c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074484d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074484f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00744851: call 0x744870 */ r_esp -= 4; W32(r_esp, 0x744856u); f_00744870();
    /* 00744856: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074485a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074485c: jne 0x744862 */ if (!fZ) goto L_00744862;
L_0074485e:; BB(0x0074485e);
    /* 0074485e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074485f: ret 4 */ FN_RET(0x0074484c); r_esp += 8; return;
L_00744862:; BB(0x00744862);
    /* 00744862: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00744863: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x744868u); f_005c2f74();
    /* 00744868: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744869: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074486a: ret 4 */ FN_RET(0x0074484c); r_esp += 8; return;
}

void f_00744870(void) /* sub_744870 */
{
    FN_ENTER(0x00744870);
    /* 00744870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00744871: mov ebp, esp */ r_ebp = r_esp;
    /* 00744873: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00744875: push 0x8f247c */ { u32 v = 0x8f247cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074487a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00744880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744881: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00744888: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074488b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074488e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00744891: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00744894: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00744897: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074489a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007448a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007448a4: mov dword ptr [ecx], 0xb41948 */ W32((u32)(r_ecx), 0xb41948u);
    /* 007448aa: call 0x744a20 */ r_esp -= 4; W32(r_esp, 0x7448afu); f_00744a20();
    /* 007448af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007448b2: call 0x744a40 */ r_esp -= 4; W32(r_esp, 0x7448b7u); f_00744a40();
    /* 007448b7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007448ba: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 007448bd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007448c0: je 0x7449fa */ if (fZ) goto L_007449fa;
L_007448c6:; BB(0x007448c6);
    /* 007448c6: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007448c9: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x7448ceu); f_00718138();
    /* 007448ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007448cf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007448d2: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 007448d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007448da: je 0x7448f0 */ if (fZ) goto L_007448f0;
L_007448dc:; BB(0x007448dc);
    /* 007448dc: mov ecx, eax */ r_ecx = r_eax;
    /* 007448de: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7448e3u); f_007127b0();
    /* 007448e3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007448e6: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
L_007448f0:; BB(0x007448f0);
    /* 007448f0: mov eax, dword ptr [ecx + 0x78] */ r_eax = R32((u32)(r_ecx+0x78u));
    /* 007448f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007448f5: je 0x744908 */ if (fZ) goto L_00744908;
L_007448f7:; BB(0x007448f7);
    /* 007448f7: mov ecx, eax */ r_ecx = r_eax;
    /* 007448f9: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7448feu); f_0073d160();
    /* 007448fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00744901: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_00744908:; BB(0x00744908);
    /* 00744908: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0074490e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744910: je 0x744926 */ if (fZ) goto L_00744926;
L_00744912:; BB(0x00744912);
    /* 00744912: mov ecx, eax */ r_ecx = r_eax;
    /* 00744914: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744919u); f_007127b0();
    /* 00744919: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074491c: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
L_00744926:; BB(0x00744926);
    /* 00744926: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 0074492c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074492e: je 0x74494a */ if (fZ) goto L_0074494a;
L_00744930:; BB(0x00744930);
    /* 00744930: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00744933: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00744937: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074493c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00744940: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
L_0074494a:; BB(0x0074494a);
    /* 0074494a: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 0074494d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074494f: je 0x744962 */ if (fZ) goto L_00744962;
L_00744951:; BB(0x00744951);
    /* 00744951: mov ecx, eax */ r_ecx = r_eax;
    /* 00744953: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744958u); f_007127b0();
    /* 00744958: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074495b: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
L_00744962:; BB(0x00744962);
    /* 00744962: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 00744965: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744967: je 0x74497a */ if (fZ) goto L_0074497a;
L_00744969:; BB(0x00744969);
    /* 00744969: mov ecx, eax */ r_ecx = r_eax;
    /* 0074496b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744970u); f_007127b0();
    /* 00744970: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00744973: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
L_0074497a:; BB(0x0074497a);
    /* 0074497a: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 00744980: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744982: je 0x744998 */ if (fZ) goto L_00744998;
L_00744984:; BB(0x00744984);
    /* 00744984: mov ecx, eax */ r_ecx = r_eax;
    /* 00744986: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74498bu); f_007127b0();
    /* 0074498b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074498e: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
L_00744998:; BB(0x00744998);
    /* 00744998: mov eax, dword ptr [ecx + 0x7c] */ r_eax = R32((u32)(r_ecx+0x7cu));
    /* 0074499b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074499d: je 0x7449b0 */ if (fZ) goto L_007449b0;
L_0074499f:; BB(0x0074499f);
    /* 0074499f: mov ecx, eax */ r_ecx = r_eax;
    /* 007449a1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7449a6u); f_007127b0();
    /* 007449a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007449a9: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
L_007449b0:; BB(0x007449b0);
    /* 007449b0: mov eax, dword ptr [ecx + 0x74] */ r_eax = R32((u32)(r_ecx+0x74u));
    /* 007449b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007449b5: je 0x7449c8 */ if (fZ) goto L_007449c8;
L_007449b7:; BB(0x007449b7);
    /* 007449b7: mov ecx, eax */ r_ecx = r_eax;
    /* 007449b9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7449beu); f_007127b0();
    /* 007449be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007449c1: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
L_007449c8:; BB(0x007449c8);
    /* 007449c8: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 007449cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007449cd: je 0x7449e0 */ if (fZ) goto L_007449e0;
L_007449cf:; BB(0x007449cf);
    /* 007449cf: mov ecx, eax */ r_ecx = r_eax;
    /* 007449d1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7449d6u); f_007127b0();
    /* 007449d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007449d9: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
L_007449e0:; BB(0x007449e0);
    /* 007449e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007449e7: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7449ecu); f_008171e8();
    /* 007449ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007449ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007449f6: mov esp, ebp */ r_esp = r_ebp;
    /* 007449f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007449f9: ret  */ FN_RET(0x00744870); r_esp += 4; return;
L_007449fa:; BB(0x007449fa);
    /* 007449fa: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007449fd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x744a02u); f_0068d5a8();
    /* 00744a02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744a03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744a05: je 0x744a16 */ if (fZ) goto L_00744a16;
L_00744a07:; BB(0x00744a07);
    /* 00744a07: mov ecx, eax */ r_ecx = r_eax;
    /* 00744a09: call 0x691e2c */ r_esp -= 4; W32(r_esp, 0x744a0eu); f_00691e2c();
    /* 00744a0e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00744a11: jmp 0x7448c6 */ goto L_007448c6;
L_00744a16:; BB(0x00744a16);
    /* 00744a16: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00744a19: jmp 0x7448c6 */ goto L_007448c6;
}

void f_00744a20(void) /* sub_744A20 */
{
    FN_ENTER(0x00744a20);
    /* 00744a20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00744a21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00744a23: movzx eax, byte ptr [ebx + 0x24] */ r_eax = (u32)R8((u32)(r_ebx+0x24u));
    /* 00744a27: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744a29: jne 0x744a2d */ if (!fZ) goto L_00744a2d;
L_00744a2b:; BB(0x00744a2b);
    /* 00744a2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00744a2c: ret  */ FN_RET(0x00744a20); r_esp += 4; return;
L_00744a2d:; BB(0x00744a2d);
    /* 00744a2d: call 0x782658 */ r_esp -= 4; W32(r_esp, 0x744a32u); f_00782658();
    /* 00744a32: movzx eax, byte ptr [ebx + 0x24] */ r_eax = (u32)R8((u32)(r_ebx+0x24u));
    /* 00744a36: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744a3b: mov byte ptr [ebx + 0x24], al */ W8((u32)(r_ebx+0x24u), (u8)r_eax);
    /* 00744a3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00744a3f: ret  */ FN_RET(0x00744a20); r_esp += 4; return;
}

void f_00744a40(void) /* sub_744A40 */
{
    FN_ENTER(0x00744a40);
    /* 00744a40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00744a41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00744a43: movzx eax, byte ptr [ebx + 0x24] */ r_eax = (u32)R8((u32)(r_ebx+0x24u));
    /* 00744a47: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744a49: jne 0x744a4d */ if (!fZ) goto L_00744a4d;
L_00744a4b:; BB(0x00744a4b);
    /* 00744a4b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00744a4c: ret  */ FN_RET(0x00744a40); r_esp += 4; return;
L_00744a4d:; BB(0x00744a4d);
    /* 00744a4d: call 0x7190e0 */ r_esp -= 4; W32(r_esp, 0x744a52u); f_007190e0();
    /* 00744a52: movzx eax, byte ptr [ebx + 0x24] */ r_eax = (u32)R8((u32)(r_ebx+0x24u));
    /* 00744a56: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744a5b: mov byte ptr [ebx + 0x24], al */ W8((u32)(r_ebx+0x24u), (u8)r_eax);
    /* 00744a5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00744a5f: ret  */ FN_RET(0x00744a40); r_esp += 4; return;
}

void f_00744a60(void) /* sub_744A60 */
{
    FN_ENTER(0x00744a60);
    /* 00744a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00744a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00744a63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00744a65: push 0x8f2498 */ { u32 v = 0x8f2498u; r_esp -= 4; W32(r_esp, v); }
    /* 00744a6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00744a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744a71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00744a78: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00744a7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00744a7e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00744a81: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00744a84: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00744a87: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00744a8a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00744a8d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00744a90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00744a91: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00744a94: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00744a97: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x744a9cu); f_008193cc();
    /* 00744a9c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00744aa3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00744aa6: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00744aa9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744aac: mov dword ptr [ecx + 0x64], edi */ W32((u32)(r_ecx+0x64u), r_edi);
    /* 00744aaf: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00744ab2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00744ab4: mov dword ptr [ecx], 0xb41948 */ W32((u32)(r_ecx), 0xb41948u);
    /* 00744aba: mov esi, dword ptr [0x9f3c78] */ r_esi = R32((u32)(0x9f3c78u));
    /* 00744ac0: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00744ac3: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 00744ac6: mov dword ptr [ecx + 0x2c], 0xffffffff */ W32((u32)(r_ecx+0x2cu), 0xffffffffu);
    /* 00744acd: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 00744ad0: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00744ad3: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 00744ad9: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 00744adc: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 00744adf: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00744ae2: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 00744ae8: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 00744aee: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 00744af4: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00744af7: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 00744afa: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00744afd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00744afe: call 0x77ee28 */ r_esp -= 4; W32(r_esp, 0x744b03u); f_0077ee28();
    /* 00744b03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744b04: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00744b07: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00744b0a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00744b0d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744b0f: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00744b12: mov byte ptr [eax + 0x1c], dl */ W8((u32)(r_eax+0x1cu), (u8)r_edx);
    /* 00744b15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744b18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744b1f: mov esp, ebp */ r_esp = r_ebp;
    /* 00744b21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744b22: ret 8 */ FN_RET(0x00744a60); r_esp += 12; return;
}

void f_00744b28(void) /* sub_744B28 */
{
    FN_ENTER(0x00744b28);
    /* 00744b28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00744b29: mov ebp, esp */ r_ebp = r_esp;
    /* 00744b2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00744b2d: push 0x8f24c0 */ { u32 v = 0x8f24c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00744b32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00744b38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744b39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00744b40: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00744b43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00744b46: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00744b49: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 00744b4c: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 00744b4f: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 00744b53: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00744b56: cmp eax, 0x4e */ {  u32 a = r_eax; u32 b = 0x4eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00744b59: ja 0x7469c9 */ if ((!fC&&!fZ)) goto L_007469c9;
L_00744b5f:; BB(0x00744b5f);
    /* 00744b5f: mov eax, dword ptr [eax*4 + 0x9732c0] */ r_eax = R32((u32)(r_eax*4+0x9732c0u));
    /* 00744b66: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744b28); r_esp += 4; return;
}

void f_00744b68(void)
{
    FN_ENTER(0x00744b68);
    /* 00744b68: mov eax, ecx */ r_eax = r_ecx;
    /* 00744b6a: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744b6d: jmp 0x744b83 */ goto L_00744b83;
L_00744b83:; BB(0x00744b83);
    /* 00744b83: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x744b88u); f_0073d114();
    /* 00744b88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744b8a: je 0x744ba1 */ if (fZ) goto L_00744ba1;
L_00744b8c:; BB(0x00744b8c);
    /* 00744b8c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744b8f: mov byte ptr [eax + 0x1c], 0x4b */ W8((u32)(r_eax+0x1cu), 0x4bu);
    /* 00744b93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744b96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744b9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00744b9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744ba0: ret  */ FN_RET(0x00744b68); r_esp += 4; return;
L_00744ba1:; BB(0x00744ba1);
    /* 00744ba1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744ba4: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744ba7: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x744bacu); f_0073ce50();
    /* 00744bac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744bae: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744bb4:; BB(0x00744bb4);
    /* 00744bb4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744bb7: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744bba: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x744bbfu); f_0073d134();
    /* 00744bbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744bc1: je 0x744bcf */ if (fZ) goto L_00744bcf;
L_00744bc3:; BB(0x00744bc3);
    /* 00744bc3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744bc6: mov byte ptr [eax + 0x1c], 0x4b */ W8((u32)(r_eax+0x1cu), 0x4bu);
    /* 00744bca: jmp 0x7469c9 */ goto L_007469c9;
L_00744bcf:; BB(0x00744bcf);
    /* 00744bcf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744bd2: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00744bd5: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x744bdau); f_007365f4();
    /* 00744bda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744bdb: call 0x782594 */ r_esp -= 4; W32(r_esp, 0x744be0u); f_00782594();
    /* 00744be0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744be1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744be4: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00744be8: mov byte ptr [edx + 0x1c], 1 */ W8((u32)(r_edx+0x1cu), 0x1u);
    /* 00744bec: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744bf1: mov byte ptr [edx + 0x24], al */ W8((u32)(r_edx+0x24u), (u8)r_eax);
    /* 00744bf4: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744b68); r_esp += 4; return;
}

void f_00744b6f(void)
{
    FN_ENTER(0x00744b6f);
    /* 00744b6f: mov eax, ecx */ r_eax = r_ecx;
    /* 00744b71: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744b74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744b76: je 0x7469e0 */ if (fZ) goto L_007469e0;
L_00744b7c:; BB(0x00744b7c);
    /* 00744b7c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744b7f: mov byte ptr [eax + 0x1c], 0x4e */ W8((u32)(r_eax+0x1cu), 0x4eu);
    /* 00744b83: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x744b88u); f_0073d114();
    /* 00744b88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744b8a: je 0x744ba1 */ if (fZ) goto L_00744ba1;
L_00744b8c:; BB(0x00744b8c);
    /* 00744b8c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744b8f: mov byte ptr [eax + 0x1c], 0x4b */ W8((u32)(r_eax+0x1cu), 0x4bu);
    /* 00744b93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744b96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744b9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00744b9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744ba0: ret  */ FN_RET(0x00744b6f); r_esp += 4; return;
L_00744ba1:; BB(0x00744ba1);
    /* 00744ba1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744ba4: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744ba7: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x744bacu); f_0073ce50();
    /* 00744bac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744bae: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744bb4:; BB(0x00744bb4);
    /* 00744bb4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744bb7: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744bba: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x744bbfu); f_0073d134();
    /* 00744bbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744bc1: je 0x744bcf */ if (fZ) goto L_00744bcf;
L_00744bc3:; BB(0x00744bc3);
    /* 00744bc3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744bc6: mov byte ptr [eax + 0x1c], 0x4b */ W8((u32)(r_eax+0x1cu), 0x4bu);
    /* 00744bca: jmp 0x7469c9 */ goto L_007469c9;
L_00744bcf:; BB(0x00744bcf);
    /* 00744bcf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744bd2: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00744bd5: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x744bdau); f_007365f4();
    /* 00744bda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744bdb: call 0x782594 */ r_esp -= 4; W32(r_esp, 0x744be0u); f_00782594();
    /* 00744be0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744be1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744be4: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00744be8: mov byte ptr [edx + 0x1c], 1 */ W8((u32)(r_edx+0x1cu), 0x1u);
    /* 00744bec: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744bf1: mov byte ptr [edx + 0x24], al */ W8((u32)(r_edx+0x24u), (u8)r_eax);
    /* 00744bf4: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744b6f); r_esp += 4; return;
L_007469e0:; BB(0x007469e0);
    /* 007469e0: mov ecx, eax */ r_ecx = r_eax;
    /* 007469e2: call 0x747dec */ r_esp -= 4; W32(r_esp, 0x7469e7u); f_00747dec();
    /* 007469e7: mov ecx, eax */ r_ecx = r_eax;
    /* 007469e9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007469ec: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 007469ef: jmp 0x744b7c */ goto L_00744b7c;
}

void f_00744bf9(void)
{
    FN_ENTER(0x00744bf9);
    /* 00744bf9: mov eax, ecx */ r_eax = r_ecx;
    /* 00744bfb: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00744bfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744c00: je 0x744c11 */ if (fZ) goto L_00744c11;
L_00744c02:; BB(0x00744c02);
    /* 00744c02: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744c07u); f_007127b0();
    /* 00744c07: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c0a: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_00744c11:; BB(0x00744c11);
    /* 00744c11: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c14: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744c17: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744c19: je 0x744c2a */ if (fZ) goto L_00744c2a;
L_00744c1b:; BB(0x00744c1b);
    /* 00744c1b: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x744c20u); f_0073d160();
    /* 00744c20: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c23: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
L_00744c2a:; BB(0x00744c2a);
    /* 00744c2a: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00744c2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744c2f: je 0x744c40 */ if (fZ) goto L_00744c40;
L_00744c31:; BB(0x00744c31);
    /* 00744c31: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744c36u); f_007127b0();
    /* 00744c36: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c39: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_00744c40:; BB(0x00744c40);
    /* 00744c40: mov edi, dword ptr [eax + 0x6c] */ r_edi = R32((u32)(r_eax+0x6cu));
    /* 00744c43: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744c45: je 0x7469f4 */ if (fZ) goto L_007469f4;
L_00744c4b:; BB(0x00744c4b);
    /* 00744c4b: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 00744c52: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00744c57: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00744c5a: mov word ptr [edi + 0x84], ax */ W16((u32)(r_edi+0x84u), (u16)r_eax);
    /* 00744c61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744c63: je 0x744c6c */ if (fZ) goto L_00744c6c;
L_00744c65:; BB(0x00744c65);
    /* 00744c65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00744c67: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x744c6cu); f_00760acc();
L_00744c6c:; BB(0x00744c6c);
    /* 00744c6c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c6f: mov byte ptr [eax + 0x1c], 0x4c */ W8((u32)(r_eax+0x1cu), 0x4cu);
    /* 00744c73: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c76: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00744c79: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00744c80: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744c82: je 0x744ca2 */ if (fZ) goto L_00744ca2;
L_00744c84:; BB(0x00744c84);
    /* 00744c84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c87: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00744c8a: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00744c8d: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00744c90: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00744c94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744c97: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744c9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00744ca0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744ca1: ret  */ FN_RET(0x00744bf9); r_esp += 4; return;
L_00744ca2:; BB(0x00744ca2);
    /* 00744ca2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744ca4: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744caa:; BB(0x00744caa);
    /* 00744caa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744cad: mov byte ptr [eax + 0x1c], 0x4d */ W8((u32)(r_eax+0x1cu), 0x4du);
    /* 00744cb1: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744bf9); r_esp += 4; return;
L_007469f4:; BB(0x007469f4);
    /* 007469f4: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 007469f9: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7469feu); f_0073ec50();
    /* 007469fe: mov ebx, eax */ r_ebx = r_eax;
    /* 00746a00: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a02: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746a07u); f_0079317c();
    /* 00746a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746a08: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746a0b: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x746a10u); f_00735460();
    /* 00746a10: mov edi, eax */ r_edi = r_eax;
    /* 00746a12: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746a15: mov esi, dword ptr [0xab59b8] */ r_esi = R32((u32)(0xab59b8u));
    /* 00746a1b: lea ebx, [esi - 1] */ r_ebx = (u32)(r_esi+0xffffffffu);
    /* 00746a1e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00746a20: jl 0x746a40 */ if ((fS!=fO)) goto L_00746a40;
L_00746a22:; BB(0x00746a22);
    /* 00746a22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746a23: call 0x81364c */ r_esp -= 4; W32(r_esp, 0x746a28u); f_0081364c();
    /* 00746a28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746a29: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00746a2c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a2e: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 00746a31: mov ecx, edi */ r_ecx = r_edi;
    /* 00746a33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00746a34: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x746a39u); f_00735c90();
    /* 00746a39: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00746a3c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00746a3e: jge 0x746a22 */ if ((fS==fO)) goto L_00746a22;
L_00746a40:; BB(0x00746a40);
    /* 00746a40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746a42: jle 0x746a74 */ if ((fZ||fS!=fO)) goto L_00746a74;
L_00746a44:; BB(0x00746a44);
    /* 00746a44: push 0x43380000 */ { u32 v = 0x43380000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a49: mov ecx, edi */ r_ecx = r_edi;
    /* 00746a4b: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 00746a52: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00746a58: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 00746a5f: push 0x435f0000 */ { u32 v = 0x435f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a64: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x746a69u); f_007361d0();
    /* 00746a69: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746a6c: mov dword ptr [edx + 0x6c], edi */ W32((u32)(r_edx+0x6cu), r_edi);
    /* 00746a6f: jmp 0x744c4b */ goto L_00744c4b;
L_00746a74:; BB(0x00746a74);
    /* 00746a74: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a79: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746a7eu); f_0079317c();
    /* 00746a7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746a7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a81: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a83: mov ecx, edi */ r_ecx = r_edi;
    /* 00746a85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746a86: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x746a8bu); f_00735ee0();
    /* 00746a8b: jmp 0x746a44 */ goto L_00746a44;
}

void f_00744c11(void)
{
    FN_ENTER(0x00744c11);
    /* 00744c11: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c14: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744c17: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744c19: je 0x744c2a */ if (fZ) goto L_00744c2a;
L_00744c1b:; BB(0x00744c1b);
    /* 00744c1b: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x744c20u); f_0073d160();
    /* 00744c20: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c23: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
L_00744c2a:; BB(0x00744c2a);
    /* 00744c2a: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00744c2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744c2f: je 0x744c40 */ if (fZ) goto L_00744c40;
L_00744c31:; BB(0x00744c31);
    /* 00744c31: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744c36u); f_007127b0();
    /* 00744c36: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c39: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_00744c40:; BB(0x00744c40);
    /* 00744c40: mov edi, dword ptr [eax + 0x6c] */ r_edi = R32((u32)(r_eax+0x6cu));
    /* 00744c43: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744c45: je 0x7469f4 */ if (fZ) goto L_007469f4;
L_00744c4b:; BB(0x00744c4b);
    /* 00744c4b: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 00744c52: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00744c57: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00744c5a: mov word ptr [edi + 0x84], ax */ W16((u32)(r_edi+0x84u), (u16)r_eax);
    /* 00744c61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744c63: je 0x744c6c */ if (fZ) goto L_00744c6c;
L_00744c65:; BB(0x00744c65);
    /* 00744c65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00744c67: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x744c6cu); f_00760acc();
L_00744c6c:; BB(0x00744c6c);
    /* 00744c6c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c6f: mov byte ptr [eax + 0x1c], 0x4c */ W8((u32)(r_eax+0x1cu), 0x4cu);
    /* 00744c73: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c76: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00744c79: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00744c80: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744c82: je 0x744ca2 */ if (fZ) goto L_00744ca2;
L_00744c84:; BB(0x00744c84);
    /* 00744c84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c87: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00744c8a: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00744c8d: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00744c90: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00744c94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744c97: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744c9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00744ca0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744ca1: ret  */ FN_RET(0x00744c11); r_esp += 4; return;
L_00744ca2:; BB(0x00744ca2);
    /* 00744ca2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744ca4: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744caa:; BB(0x00744caa);
    /* 00744caa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744cad: mov byte ptr [eax + 0x1c], 0x4d */ W8((u32)(r_eax+0x1cu), 0x4du);
    /* 00744cb1: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744c11); r_esp += 4; return;
L_007469f4:; BB(0x007469f4);
    /* 007469f4: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 007469f9: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7469feu); f_0073ec50();
    /* 007469fe: mov ebx, eax */ r_ebx = r_eax;
    /* 00746a00: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a02: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746a07u); f_0079317c();
    /* 00746a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746a08: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746a0b: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x746a10u); f_00735460();
    /* 00746a10: mov edi, eax */ r_edi = r_eax;
    /* 00746a12: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746a15: mov esi, dword ptr [0xab59b8] */ r_esi = R32((u32)(0xab59b8u));
    /* 00746a1b: lea ebx, [esi - 1] */ r_ebx = (u32)(r_esi+0xffffffffu);
    /* 00746a1e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00746a20: jl 0x746a40 */ if ((fS!=fO)) goto L_00746a40;
L_00746a22:; BB(0x00746a22);
    /* 00746a22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746a23: call 0x81364c */ r_esp -= 4; W32(r_esp, 0x746a28u); f_0081364c();
    /* 00746a28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746a29: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00746a2c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a2e: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 00746a31: mov ecx, edi */ r_ecx = r_edi;
    /* 00746a33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00746a34: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x746a39u); f_00735c90();
    /* 00746a39: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00746a3c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00746a3e: jge 0x746a22 */ if ((fS==fO)) goto L_00746a22;
L_00746a40:; BB(0x00746a40);
    /* 00746a40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746a42: jle 0x746a74 */ if ((fZ||fS!=fO)) goto L_00746a74;
L_00746a44:; BB(0x00746a44);
    /* 00746a44: push 0x43380000 */ { u32 v = 0x43380000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a49: mov ecx, edi */ r_ecx = r_edi;
    /* 00746a4b: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 00746a52: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00746a58: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 00746a5f: push 0x435f0000 */ { u32 v = 0x435f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a64: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x746a69u); f_007361d0();
    /* 00746a69: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746a6c: mov dword ptr [edx + 0x6c], edi */ W32((u32)(r_edx+0x6cu), r_edi);
    /* 00746a6f: jmp 0x744c4b */ goto L_00744c4b;
L_00746a74:; BB(0x00746a74);
    /* 00746a74: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a79: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746a7eu); f_0079317c();
    /* 00746a7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746a7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a81: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00746a83: mov ecx, edi */ r_ecx = r_edi;
    /* 00746a85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746a86: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x746a8bu); f_00735ee0();
    /* 00746a8b: jmp 0x746a44 */ goto L_00746a44;
}

void f_00744c73(void)
{
    FN_ENTER(0x00744c73);
    /* 00744c73: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c76: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00744c79: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00744c80: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744c82: je 0x744ca2 */ if (fZ) goto L_00744ca2;
L_00744c84:; BB(0x00744c84);
    /* 00744c84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744c87: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00744c8a: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00744c8d: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00744c90: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00744c94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744c97: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744c9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00744ca0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744ca1: ret  */ FN_RET(0x00744c73); r_esp += 4; return;
L_00744ca2:; BB(0x00744ca2);
    /* 00744ca2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744ca4: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744caa:; BB(0x00744caa);
    /* 00744caa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744cad: mov byte ptr [eax + 0x1c], 0x4d */ W8((u32)(r_eax+0x1cu), 0x4du);
    /* 00744cb1: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744c73); r_esp += 4; return;
}

void f_00744cb6(void)
{
    FN_ENTER(0x00744cb6);
    /* 00744cb6: mov eax, ecx */ r_eax = r_ecx;
    /* 00744cb8: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744cbb: jmp 0x744cd1 */ goto L_00744cd1;
L_00744cd1:; BB(0x00744cd1);
    /* 00744cd1: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x744cd6u); f_0073d114();
    /* 00744cd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744cd8: je 0x744cef */ if (fZ) goto L_00744cef;
L_00744cda:; BB(0x00744cda);
    /* 00744cda: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744cdd: mov byte ptr [eax + 0x1c], 0x46 */ W8((u32)(r_eax+0x1cu), 0x46u);
    /* 00744ce1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744ce4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744ceb: mov esp, ebp */ r_esp = r_ebp;
    /* 00744ced: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744cee: ret  */ FN_RET(0x00744cb6); r_esp += 4; return;
L_00744cef:; BB(0x00744cef);
    /* 00744cef: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744cf2: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744cf5: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x744cfau); f_0073ce50();
    /* 00744cfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744cfc: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744d02:; BB(0x00744d02);
    /* 00744d02: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d05: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744d08: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x744d0du); f_0073d134();
    /* 00744d0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744d0f: je 0x744d1d */ if (fZ) goto L_00744d1d;
L_00744d11:; BB(0x00744d11);
    /* 00744d11: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d14: mov byte ptr [eax + 0x1c], 0x46 */ W8((u32)(r_eax+0x1cu), 0x46u);
    /* 00744d18: jmp 0x7469c9 */ goto L_007469c9;
L_00744d1d:; BB(0x00744d1d);
    /* 00744d1d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d20: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00744d23: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x744d28u); f_007365f4();
    /* 00744d28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744d29: call 0x78253c */ r_esp -= 4; W32(r_esp, 0x744d2eu); f_0078253c();
    /* 00744d2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744d2f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d32: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00744d36: mov byte ptr [edx + 0x1c], 1 */ W8((u32)(r_edx+0x1cu), 0x1u);
    /* 00744d3a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744d3f: mov byte ptr [edx + 0x24], al */ W8((u32)(r_edx+0x24u), (u8)r_eax);
    /* 00744d42: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744cb6); r_esp += 4; return;
}

void f_00744cbd(void)
{
    FN_ENTER(0x00744cbd);
    /* 00744cbd: mov eax, ecx */ r_eax = r_ecx;
    /* 00744cbf: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744cc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744cc4: je 0x746a8d */ if (fZ) goto L_00746a8d;
L_00744cca:; BB(0x00744cca);
    /* 00744cca: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744ccd: mov byte ptr [eax + 0x1c], 0x49 */ W8((u32)(r_eax+0x1cu), 0x49u);
    /* 00744cd1: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x744cd6u); f_0073d114();
    /* 00744cd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744cd8: je 0x744cef */ if (fZ) goto L_00744cef;
L_00744cda:; BB(0x00744cda);
    /* 00744cda: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744cdd: mov byte ptr [eax + 0x1c], 0x46 */ W8((u32)(r_eax+0x1cu), 0x46u);
    /* 00744ce1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744ce4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744ceb: mov esp, ebp */ r_esp = r_ebp;
    /* 00744ced: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744cee: ret  */ FN_RET(0x00744cbd); r_esp += 4; return;
L_00744cef:; BB(0x00744cef);
    /* 00744cef: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744cf2: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744cf5: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x744cfau); f_0073ce50();
    /* 00744cfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744cfc: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744d02:; BB(0x00744d02);
    /* 00744d02: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d05: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744d08: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x744d0du); f_0073d134();
    /* 00744d0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744d0f: je 0x744d1d */ if (fZ) goto L_00744d1d;
L_00744d11:; BB(0x00744d11);
    /* 00744d11: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d14: mov byte ptr [eax + 0x1c], 0x46 */ W8((u32)(r_eax+0x1cu), 0x46u);
    /* 00744d18: jmp 0x7469c9 */ goto L_007469c9;
L_00744d1d:; BB(0x00744d1d);
    /* 00744d1d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d20: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00744d23: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x744d28u); f_007365f4();
    /* 00744d28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744d29: call 0x78253c */ r_esp -= 4; W32(r_esp, 0x744d2eu); f_0078253c();
    /* 00744d2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744d2f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d32: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00744d36: mov byte ptr [edx + 0x1c], 1 */ W8((u32)(r_edx+0x1cu), 0x1u);
    /* 00744d3a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744d3f: mov byte ptr [edx + 0x24], al */ W8((u32)(r_edx+0x24u), (u8)r_eax);
    /* 00744d42: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744cbd); r_esp += 4; return;
L_00746a8d:; BB(0x00746a8d);
    /* 00746a8d: mov ecx, eax */ r_ecx = r_eax;
    /* 00746a8f: call 0x747dec */ r_esp -= 4; W32(r_esp, 0x746a94u); f_00747dec();
    /* 00746a94: mov ecx, eax */ r_ecx = r_eax;
    /* 00746a96: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746a99: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 00746a9c: jmp 0x744cca */ goto L_00744cca;
}

void f_00744d47(void)
{
    FN_ENTER(0x00744d47);
    /* 00744d47: mov eax, ecx */ r_eax = r_ecx;
    /* 00744d49: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00744d4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744d4e: je 0x744d5f */ if (fZ) goto L_00744d5f;
L_00744d50:; BB(0x00744d50);
    /* 00744d50: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744d55u); f_007127b0();
    /* 00744d55: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d58: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_00744d5f:; BB(0x00744d5f);
    /* 00744d5f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d62: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744d65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744d67: je 0x744d78 */ if (fZ) goto L_00744d78;
L_00744d69:; BB(0x00744d69);
    /* 00744d69: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x744d6eu); f_0073d160();
    /* 00744d6e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d71: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
L_00744d78:; BB(0x00744d78);
    /* 00744d78: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00744d7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744d7d: je 0x744d8e */ if (fZ) goto L_00744d8e;
L_00744d7f:; BB(0x00744d7f);
    /* 00744d7f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744d84u); f_007127b0();
    /* 00744d84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d87: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_00744d8e:; BB(0x00744d8e);
    /* 00744d8e: mov esi, dword ptr [eax + 0x6c] */ r_esi = R32((u32)(r_eax+0x6cu));
    /* 00744d91: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744d93: je 0x746aa1 */ if (fZ) goto L_00746aa1;
L_00744d99:; BB(0x00744d99);
    /* 00744d99: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 00744da0: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00744da5: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00744da8: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 00744daf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744db1: je 0x744dba */ if (fZ) goto L_00744dba;
L_00744db3:; BB(0x00744db3);
    /* 00744db3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00744db5: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x744dbau); f_00760acc();
L_00744dba:; BB(0x00744dba);
    /* 00744dba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744dbd: mov byte ptr [eax + 0x1c], 0x47 */ W8((u32)(r_eax+0x1cu), 0x47u);
    /* 00744dc1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744dc4: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00744dc7: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00744dce: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744dd0: je 0x744df0 */ if (fZ) goto L_00744df0;
L_00744dd2:; BB(0x00744dd2);
    /* 00744dd2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744dd5: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00744dd8: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00744ddb: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00744dde: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00744de2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744de5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744dec: mov esp, ebp */ r_esp = r_ebp;
    /* 00744dee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744def: ret  */ FN_RET(0x00744d47); r_esp += 4; return;
L_00744df0:; BB(0x00744df0);
    /* 00744df0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744df2: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744df8:; BB(0x00744df8);
    /* 00744df8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744dfb: mov byte ptr [eax + 0x1c], 0x48 */ W8((u32)(r_eax+0x1cu), 0x48u);
    /* 00744dff: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744d47); r_esp += 4; return;
L_00746aa1:; BB(0x00746aa1);
    /* 00746aa1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 00746aa6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x746aabu); f_0073ec50();
    /* 00746aab: mov ebx, eax */ r_ebx = r_eax;
    /* 00746aad: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00746aaf: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746ab4u); f_0079317c();
    /* 00746ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746ab5: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00746ab7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746ab8: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x746abdu); f_00735460();
    /* 00746abd: mov esi, eax */ r_esi = r_eax;
    /* 00746abf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746ac2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00746ac4:; BB(0x00746ac4);
    /* 00746ac4: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746aca: je 0x746b14 */ if (fZ) goto L_00746b14;
L_00746acc:; BB(0x00746acc);
    /* 00746acc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746acd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x746ad2u); f_0068d5a8();
    /* 00746ad2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746ad3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746ad5: je 0x746b14 */ if (fZ) goto L_00746b14;
L_00746ad7:; BB(0x00746ad7);
    /* 00746ad7: movsx edi, word ptr [eax + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00746ade: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746ae1: jne 0x746aea */ if (!fZ) goto L_00746aea;
L_00746ae3:; BB(0x00746ae3);
    /* 00746ae3: mov edx, 1 */ r_edx = 0x1u;
    /* 00746ae8: jmp 0x746aec */ goto L_00746aec;
L_00746aea:; BB(0x00746aea);
    /* 00746aea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00746aec:; BB(0x00746aec);
    /* 00746aec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746aee: jne 0x746b14 */ if (!fZ) goto L_00746b14;
L_00746af0:; BB(0x00746af0);
    /* 00746af0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746af3: jne 0x746afc */ if (!fZ) goto L_00746afc;
L_00746af5:; BB(0x00746af5);
    /* 00746af5: mov edx, 1 */ r_edx = 0x1u;
    /* 00746afa: jmp 0x746afe */ goto L_00746afe;
L_00746afc:; BB(0x00746afc);
    /* 00746afc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00746afe:; BB(0x00746afe);
    /* 00746afe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746b00: jne 0x746b14 */ if (!fZ) goto L_00746b14;
L_00746b02:; BB(0x00746b02);
    /* 00746b02: mov ecx, eax */ r_ecx = r_eax;
    /* 00746b04: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x746b09u); f_006936b4();
    /* 00746b09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746b0a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b0c: mov ecx, esi */ r_ecx = r_esi;
    /* 00746b0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746b0f: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x746b14u); f_00735c90();
L_00746b14:; BB(0x00746b14);
    /* 00746b14: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00746b17: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00746b1a: jl 0x746ac4 */ if ((fS!=fO)) goto L_00746ac4;
L_00746b1c:; BB(0x00746b1c);
    /* 00746b1c: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 00746b23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746b25: jle 0x746b57 */ if ((fZ||fS!=fO)) goto L_00746b57;
L_00746b27:; BB(0x00746b27);
    /* 00746b27: push 0x43380000 */ { u32 v = 0x43380000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b2c: mov ecx, esi */ r_ecx = r_esi;
    /* 00746b2e: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00746b35: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00746b3b: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00746b42: push 0x435f0000 */ { u32 v = 0x435f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b47: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x746b4cu); f_007361d0();
    /* 00746b4c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746b4f: mov dword ptr [edx + 0x6c], esi */ W32((u32)(r_edx+0x6cu), r_esi);
    /* 00746b52: jmp 0x744d99 */ goto L_00744d99;
L_00746b57:; BB(0x00746b57);
    /* 00746b57: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b5c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746b61u); f_0079317c();
    /* 00746b61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746b62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b64: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b66: mov ecx, esi */ r_ecx = r_esi;
    /* 00746b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746b69: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x746b6eu); f_00735ee0();
    /* 00746b6e: jmp 0x746b27 */ goto L_00746b27;
}

void f_00744d5f(void)
{
    FN_ENTER(0x00744d5f);
    /* 00744d5f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d62: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744d65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744d67: je 0x744d78 */ if (fZ) goto L_00744d78;
L_00744d69:; BB(0x00744d69);
    /* 00744d69: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x744d6eu); f_0073d160();
    /* 00744d6e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d71: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
L_00744d78:; BB(0x00744d78);
    /* 00744d78: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00744d7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744d7d: je 0x744d8e */ if (fZ) goto L_00744d8e;
L_00744d7f:; BB(0x00744d7f);
    /* 00744d7f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744d84u); f_007127b0();
    /* 00744d84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744d87: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_00744d8e:; BB(0x00744d8e);
    /* 00744d8e: mov esi, dword ptr [eax + 0x6c] */ r_esi = R32((u32)(r_eax+0x6cu));
    /* 00744d91: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744d93: je 0x746aa1 */ if (fZ) goto L_00746aa1;
L_00744d99:; BB(0x00744d99);
    /* 00744d99: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 00744da0: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00744da5: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00744da8: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 00744daf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744db1: je 0x744dba */ if (fZ) goto L_00744dba;
L_00744db3:; BB(0x00744db3);
    /* 00744db3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00744db5: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x744dbau); f_00760acc();
L_00744dba:; BB(0x00744dba);
    /* 00744dba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744dbd: mov byte ptr [eax + 0x1c], 0x47 */ W8((u32)(r_eax+0x1cu), 0x47u);
    /* 00744dc1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744dc4: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00744dc7: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00744dce: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744dd0: je 0x744df0 */ if (fZ) goto L_00744df0;
L_00744dd2:; BB(0x00744dd2);
    /* 00744dd2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744dd5: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00744dd8: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00744ddb: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00744dde: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00744de2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744de5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744dec: mov esp, ebp */ r_esp = r_ebp;
    /* 00744dee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744def: ret  */ FN_RET(0x00744d5f); r_esp += 4; return;
L_00744df0:; BB(0x00744df0);
    /* 00744df0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744df2: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744df8:; BB(0x00744df8);
    /* 00744df8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744dfb: mov byte ptr [eax + 0x1c], 0x48 */ W8((u32)(r_eax+0x1cu), 0x48u);
    /* 00744dff: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744d5f); r_esp += 4; return;
L_00746aa1:; BB(0x00746aa1);
    /* 00746aa1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 00746aa6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x746aabu); f_0073ec50();
    /* 00746aab: mov ebx, eax */ r_ebx = r_eax;
    /* 00746aad: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00746aaf: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746ab4u); f_0079317c();
    /* 00746ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746ab5: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00746ab7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746ab8: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x746abdu); f_00735460();
    /* 00746abd: mov esi, eax */ r_esi = r_eax;
    /* 00746abf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746ac2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00746ac4:; BB(0x00746ac4);
    /* 00746ac4: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746aca: je 0x746b14 */ if (fZ) goto L_00746b14;
L_00746acc:; BB(0x00746acc);
    /* 00746acc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746acd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x746ad2u); f_0068d5a8();
    /* 00746ad2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746ad3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746ad5: je 0x746b14 */ if (fZ) goto L_00746b14;
L_00746ad7:; BB(0x00746ad7);
    /* 00746ad7: movsx edi, word ptr [eax + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00746ade: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746ae1: jne 0x746aea */ if (!fZ) goto L_00746aea;
L_00746ae3:; BB(0x00746ae3);
    /* 00746ae3: mov edx, 1 */ r_edx = 0x1u;
    /* 00746ae8: jmp 0x746aec */ goto L_00746aec;
L_00746aea:; BB(0x00746aea);
    /* 00746aea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00746aec:; BB(0x00746aec);
    /* 00746aec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746aee: jne 0x746b14 */ if (!fZ) goto L_00746b14;
L_00746af0:; BB(0x00746af0);
    /* 00746af0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746af3: jne 0x746afc */ if (!fZ) goto L_00746afc;
L_00746af5:; BB(0x00746af5);
    /* 00746af5: mov edx, 1 */ r_edx = 0x1u;
    /* 00746afa: jmp 0x746afe */ goto L_00746afe;
L_00746afc:; BB(0x00746afc);
    /* 00746afc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00746afe:; BB(0x00746afe);
    /* 00746afe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746b00: jne 0x746b14 */ if (!fZ) goto L_00746b14;
L_00746b02:; BB(0x00746b02);
    /* 00746b02: mov ecx, eax */ r_ecx = r_eax;
    /* 00746b04: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x746b09u); f_006936b4();
    /* 00746b09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746b0a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b0c: mov ecx, esi */ r_ecx = r_esi;
    /* 00746b0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746b0f: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x746b14u); f_00735c90();
L_00746b14:; BB(0x00746b14);
    /* 00746b14: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00746b17: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00746b1a: jl 0x746ac4 */ if ((fS!=fO)) goto L_00746ac4;
L_00746b1c:; BB(0x00746b1c);
    /* 00746b1c: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 00746b23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746b25: jle 0x746b57 */ if ((fZ||fS!=fO)) goto L_00746b57;
L_00746b27:; BB(0x00746b27);
    /* 00746b27: push 0x43380000 */ { u32 v = 0x43380000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b2c: mov ecx, esi */ r_ecx = r_esi;
    /* 00746b2e: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00746b35: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00746b3b: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00746b42: push 0x435f0000 */ { u32 v = 0x435f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b47: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x746b4cu); f_007361d0();
    /* 00746b4c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746b4f: mov dword ptr [edx + 0x6c], esi */ W32((u32)(r_edx+0x6cu), r_esi);
    /* 00746b52: jmp 0x744d99 */ goto L_00744d99;
L_00746b57:; BB(0x00746b57);
    /* 00746b57: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b5c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746b61u); f_0079317c();
    /* 00746b61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746b62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b64: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00746b66: mov ecx, esi */ r_ecx = r_esi;
    /* 00746b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746b69: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x746b6eu); f_00735ee0();
    /* 00746b6e: jmp 0x746b27 */ goto L_00746b27;
}

void f_00744dc1(void)
{
    FN_ENTER(0x00744dc1);
    /* 00744dc1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744dc4: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00744dc7: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00744dce: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744dd0: je 0x744df0 */ if (fZ) goto L_00744df0;
L_00744dd2:; BB(0x00744dd2);
    /* 00744dd2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744dd5: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00744dd8: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00744ddb: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00744dde: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00744de2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744de5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744dec: mov esp, ebp */ r_esp = r_ebp;
    /* 00744dee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744def: ret  */ FN_RET(0x00744dc1); r_esp += 4; return;
L_00744df0:; BB(0x00744df0);
    /* 00744df0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744df2: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744df8:; BB(0x00744df8);
    /* 00744df8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744dfb: mov byte ptr [eax + 0x1c], 0x48 */ W8((u32)(r_eax+0x1cu), 0x48u);
    /* 00744dff: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744dc1); r_esp += 4; return;
}

void f_00744e04(void)
{
    FN_ENTER(0x00744e04);
    /* 00744e04: mov eax, ecx */ r_eax = r_ecx;
    /* 00744e06: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744e09: jmp 0x744e35 */ goto L_00744e35;
L_00744e35:; BB(0x00744e35);
    /* 00744e35: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x744e3au); f_0073d114();
    /* 00744e3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744e3c: je 0x744e53 */ if (fZ) goto L_00744e53;
L_00744e3e:; BB(0x00744e3e);
    /* 00744e3e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e41: mov byte ptr [eax + 0x1c], 0x41 */ W8((u32)(r_eax+0x1cu), 0x41u);
    /* 00744e45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744e48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744e4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00744e51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744e52: ret  */ FN_RET(0x00744e04); r_esp += 4; return;
L_00744e53:; BB(0x00744e53);
    /* 00744e53: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e56: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744e59: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x744e5eu); f_0073ce50();
    /* 00744e5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744e60: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744e66:; BB(0x00744e66);
    /* 00744e66: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e69: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744e6c: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x744e71u); f_0073d134();
    /* 00744e71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744e73: je 0x744e81 */ if (fZ) goto L_00744e81;
L_00744e75:; BB(0x00744e75);
    /* 00744e75: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e78: mov byte ptr [eax + 0x1c], 0x41 */ W8((u32)(r_eax+0x1cu), 0x41u);
    /* 00744e7c: jmp 0x7469c9 */ goto L_007469c9;
L_00744e81:; BB(0x00744e81);
    /* 00744e81: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e84: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00744e8a: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x744e8fu); f_007365f4();
    /* 00744e8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744e90: call 0x7824d4 */ r_esp -= 4; W32(r_esp, 0x744e95u); f_007824d4();
    /* 00744e95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744e96: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e99: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00744e9d: mov byte ptr [edx + 0x1c], 1 */ W8((u32)(r_edx+0x1cu), 0x1u);
    /* 00744ea1: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744ea6: mov byte ptr [edx + 0x24], al */ W8((u32)(r_edx+0x24u), (u8)r_eax);
    /* 00744ea9: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744e04); r_esp += 4; return;
}

void f_00744e0b(void)
{
    FN_ENTER(0x00744e0b);
    /* 00744e0b: mov eax, ecx */ r_eax = r_ecx;
    /* 00744e0d: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00744e10: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744e12: je 0x744e23 */ if (fZ) goto L_00744e23;
L_00744e14:; BB(0x00744e14);
    /* 00744e14: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744e19u); f_007127b0();
    /* 00744e19: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e1c: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
L_00744e23:; BB(0x00744e23);
    /* 00744e23: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744e26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744e28: je 0x746b70 */ if (fZ) goto L_00746b70;
L_00744e2e:; BB(0x00744e2e);
    /* 00744e2e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e31: mov byte ptr [eax + 0x1c], 0x44 */ W8((u32)(r_eax+0x1cu), 0x44u);
    /* 00744e35: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x744e3au); f_0073d114();
    /* 00744e3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744e3c: je 0x744e53 */ if (fZ) goto L_00744e53;
L_00744e3e:; BB(0x00744e3e);
    /* 00744e3e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e41: mov byte ptr [eax + 0x1c], 0x41 */ W8((u32)(r_eax+0x1cu), 0x41u);
    /* 00744e45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744e48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744e4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00744e51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744e52: ret  */ FN_RET(0x00744e0b); r_esp += 4; return;
L_00744e53:; BB(0x00744e53);
    /* 00744e53: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e56: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744e59: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x744e5eu); f_0073ce50();
    /* 00744e5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744e60: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744e66:; BB(0x00744e66);
    /* 00744e66: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e69: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744e6c: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x744e71u); f_0073d134();
    /* 00744e71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744e73: je 0x744e81 */ if (fZ) goto L_00744e81;
L_00744e75:; BB(0x00744e75);
    /* 00744e75: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e78: mov byte ptr [eax + 0x1c], 0x41 */ W8((u32)(r_eax+0x1cu), 0x41u);
    /* 00744e7c: jmp 0x7469c9 */ goto L_007469c9;
L_00744e81:; BB(0x00744e81);
    /* 00744e81: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e84: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00744e8a: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x744e8fu); f_007365f4();
    /* 00744e8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00744e90: call 0x7824d4 */ r_esp -= 4; W32(r_esp, 0x744e95u); f_007824d4();
    /* 00744e95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00744e96: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744e99: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00744e9d: mov byte ptr [edx + 0x1c], 1 */ W8((u32)(r_edx+0x1cu), 0x1u);
    /* 00744ea1: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744ea6: mov byte ptr [edx + 0x24], al */ W8((u32)(r_edx+0x24u), (u8)r_eax);
    /* 00744ea9: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744e0b); r_esp += 4; return;
L_00746b70:; BB(0x00746b70);
    /* 00746b70: mov ecx, eax */ r_ecx = r_eax;
    /* 00746b72: call 0x747dec */ r_esp -= 4; W32(r_esp, 0x746b77u); f_00747dec();
    /* 00746b77: mov ecx, eax */ r_ecx = r_eax;
    /* 00746b79: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746b7c: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 00746b7f: jmp 0x744e2e */ goto L_00744e2e;
}

void f_00744eae(void)
{
    FN_ENTER(0x00744eae);
    /* 00744eae: mov eax, ecx */ r_eax = r_ecx;
    /* 00744eb0: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744eb3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744eb5: je 0x744ec6 */ if (fZ) goto L_00744ec6;
L_00744eb7:; BB(0x00744eb7);
    /* 00744eb7: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x744ebcu); f_0073d160();
    /* 00744ebc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744ebf: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
L_00744ec6:; BB(0x00744ec6);
    /* 00744ec6: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00744ec9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744ecb: je 0x744edc */ if (fZ) goto L_00744edc;
L_00744ecd:; BB(0x00744ecd);
    /* 00744ecd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744ed2u); f_007127b0();
    /* 00744ed2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744ed5: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_00744edc:; BB(0x00744edc);
    /* 00744edc: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00744edf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744ee1: je 0x744ef2 */ if (fZ) goto L_00744ef2;
L_00744ee3:; BB(0x00744ee3);
    /* 00744ee3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744ee8u); f_007127b0();
    /* 00744ee8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744eeb: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_00744ef2:; BB(0x00744ef2);
    /* 00744ef2: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00744ef8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744efa: je 0x746ba7 */ if (fZ) goto L_00746ba7;
L_00744f00:; BB(0x00744f00);
    /* 00744f00: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744f03: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 00744f06: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744f08: je 0x746b84 */ if (fZ) goto L_00746b84;
L_00744f0e:; BB(0x00744f0e);
    /* 00744f0e: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00744f15: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00744f1a: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 00744f21: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00744f24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744f26: je 0x744f2f */ if (fZ) goto L_00744f2f;
L_00744f28:; BB(0x00744f28);
    /* 00744f28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00744f2a: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x744f2fu); f_00760acc();
L_00744f2f:; BB(0x00744f2f);
    /* 00744f2f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744f32: mov byte ptr [eax + 0x1c], 0x42 */ W8((u32)(r_eax+0x1cu), 0x42u);
    /* 00744f36: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744f39: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00744f3f: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 00744f42: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00744f45: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 00744f48: call 0x747dac */ r_esp -= 4; W32(r_esp, 0x744f4du); f_00747dac();
    /* 00744f4d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00744f50: mov eax, ebx */ r_eax = r_ebx;
    /* 00744f52: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00744f58: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00744f5f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744f61: je 0x744f7a */ if (fZ) goto L_00744f7a;
L_00744f63:; BB(0x00744f63);
    /* 00744f63: mov eax, ebx */ r_eax = r_ebx;
    /* 00744f65: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00744f68: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00744f6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744f6f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744f76: mov esp, ebp */ r_esp = r_ebp;
    /* 00744f78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744f79: ret  */ FN_RET(0x00744eae); r_esp += 4; return;
L_00744f7a:; BB(0x00744f7a);
    /* 00744f7a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744f7c: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744f82:; BB(0x00744f82);
    /* 00744f82: mov eax, ebx */ r_eax = r_ebx;
    /* 00744f84: mov byte ptr [eax + 0x1c], 0x43 */ W8((u32)(r_eax+0x1cu), 0x43u);
    /* 00744f88: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744eae); r_esp += 4; return;
L_00746b84:; BB(0x00746b84);
    /* 00746b84: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x746b89u); f_007365f4();
    /* 00746b89: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746b8c: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00746b8f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00746b90: call 0x747d84 */ r_esp -= 4; W32(r_esp, 0x746b95u); f_00747d84();
    /* 00746b95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746b96: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746b99: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 00746b9f: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 00746ba2: jmp 0x744f0e */ goto L_00744f0e;
L_00746ba7:; BB(0x00746ba7);
    /* 00746ba7: call 0x747d6c */ r_esp -= 4; W32(r_esp, 0x746bacu); f_00747d6c();
    /* 00746bac: mov ecx, eax */ r_ecx = r_eax;
    /* 00746bae: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746bb1: mov dword ptr [edx + 0x8c], ecx */ W32((u32)(r_edx+0x8cu), r_ecx);
    /* 00746bb7: jmp 0x744f00 */ goto L_00744f00;
}

void f_00744f36(void)
{
    FN_ENTER(0x00744f36);
    /* 00744f36: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744f39: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00744f3f: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 00744f42: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00744f45: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 00744f48: call 0x747dac */ r_esp -= 4; W32(r_esp, 0x744f4du); f_00747dac();
    /* 00744f4d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00744f50: mov eax, ebx */ r_eax = r_ebx;
    /* 00744f52: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00744f58: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00744f5f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744f61: je 0x744f7a */ if (fZ) goto L_00744f7a;
L_00744f63:; BB(0x00744f63);
    /* 00744f63: mov eax, ebx */ r_eax = r_ebx;
    /* 00744f65: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00744f68: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00744f6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744f6f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744f76: mov esp, ebp */ r_esp = r_ebp;
    /* 00744f78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744f79: ret  */ FN_RET(0x00744f36); r_esp += 4; return;
L_00744f7a:; BB(0x00744f7a);
    /* 00744f7a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744f7c: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744f82:; BB(0x00744f82);
    /* 00744f82: mov eax, ebx */ r_eax = r_ebx;
    /* 00744f84: mov byte ptr [eax + 0x1c], 0x43 */ W8((u32)(r_eax+0x1cu), 0x43u);
    /* 00744f88: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744f36); r_esp += 4; return;
}

void f_00744f8d(void)
{
    FN_ENTER(0x00744f8d);
    /* 00744f8d: mov eax, ecx */ r_eax = r_ecx;
    /* 00744f8f: mov eax, dword ptr [eax + 0x70] */ r_eax = R32((u32)(r_eax+0x70u));
    /* 00744f92: jmp 0x744fa3 */ goto L_00744fa3;
L_00744fa3:; BB(0x00744fa3);
    /* 00744fa3: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00744faa: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744fad: je 0x744fc4 */ if (fZ) goto L_00744fc4;
L_00744faf:; BB(0x00744faf);
    /* 00744faf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744fb2: mov byte ptr [eax + 0x1c], 0x39 */ W8((u32)(r_eax+0x1cu), 0x39u);
    /* 00744fb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744fb9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744fc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00744fc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744fc3: ret  */ FN_RET(0x00744f8d); r_esp += 4; return;
L_00744fc4:; BB(0x00744fc4);
    /* 00744fc4: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744fc7: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744fcd:; BB(0x00744fcd);
    /* 00744fcd: mov ecx, eax */ r_ecx = r_eax;
    /* 00744fcf: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x744fd4u); f_007365f4();
    /* 00744fd4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744fd7: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00744fda: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744f8d); r_esp += 4; return;
}

void f_00744f94(void)
{
    FN_ENTER(0x00744f94);
    /* 00744f94: call 0x747ce0 */ r_esp -= 4; W32(r_esp, 0x744f99u); f_00747ce0();
    /* 00744f99: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744f9c: mov byte ptr [edx + 0x1c], 0x40 */ W8((u32)(r_edx+0x1cu), 0x40u);
    /* 00744fa0: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 00744fa3: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00744faa: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744fad: je 0x744fc4 */ if (fZ) goto L_00744fc4;
L_00744faf:; BB(0x00744faf);
    /* 00744faf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744fb2: mov byte ptr [eax + 0x1c], 0x39 */ W8((u32)(r_eax+0x1cu), 0x39u);
    /* 00744fb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00744fb9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00744fc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00744fc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00744fc3: ret  */ FN_RET(0x00744f94); r_esp += 4; return;
L_00744fc4:; BB(0x00744fc4);
    /* 00744fc4: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00744fc7: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00744fcd:; BB(0x00744fcd);
    /* 00744fcd: mov ecx, eax */ r_ecx = r_eax;
    /* 00744fcf: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x744fd4u); f_007365f4();
    /* 00744fd4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744fd7: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00744fda: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744f94); r_esp += 4; return;
}

void f_00744fdf(void)
{
    FN_ENTER(0x00744fdf);
    /* 00744fdf: mov eax, ecx */ r_eax = r_ecx;
    /* 00744fe1: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00744fe4: jmp 0x745010 */ goto L_00745010;
L_00745010:; BB(0x00745010);
    /* 00745010: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x745015u); f_0073d114();
    /* 00745015: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745017: je 0x74502e */ if (fZ) goto L_0074502e;
L_00745019:; BB(0x00745019);
    /* 00745019: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074501c: mov byte ptr [eax + 0x1c], 0x3b */ W8((u32)(r_eax+0x1cu), 0x3bu);
    /* 00745020: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745023: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074502a: mov esp, ebp */ r_esp = r_ebp;
    /* 0074502c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074502d: ret  */ FN_RET(0x00744fdf); r_esp += 4; return;
L_0074502e:; BB(0x0074502e);
    /* 0074502e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745031: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00745034: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x745039u); f_0073ce50();
    /* 00745039: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074503b: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745041:; BB(0x00745041);
    /* 00745041: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745044: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00745047: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x74504cu); f_0073d134();
    /* 0074504c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074504e: je 0x74505c */ if (fZ) goto L_0074505c;
L_00745050:; BB(0x00745050);
    /* 00745050: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745053: mov byte ptr [eax + 0x1c], 0x3b */ W8((u32)(r_eax+0x1cu), 0x3bu);
    /* 00745057: jmp 0x7469c9 */ goto L_007469c9;
L_0074505c:; BB(0x0074505c);
    /* 0074505c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074505f: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00745065: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74506au); f_007365f4();
    /* 0074506a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074506b: call 0x7825ec */ r_esp -= 4; W32(r_esp, 0x745070u); f_007825ec();
    /* 00745070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745071: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745074: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00745078: mov byte ptr [edx + 0x1c], 1 */ W8((u32)(r_edx+0x1cu), 0x1u);
    /* 0074507c: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745081: mov byte ptr [edx + 0x24], al */ W8((u32)(r_edx+0x24u), (u8)r_eax);
    /* 00745084: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744fdf); r_esp += 4; return;
}

void f_00744fe6(void)
{
    FN_ENTER(0x00744fe6);
    /* 00744fe6: mov eax, ecx */ r_eax = r_ecx;
    /* 00744fe8: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00744feb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00744fed: je 0x744ffe */ if (fZ) goto L_00744ffe;
L_00744fef:; BB(0x00744fef);
    /* 00744fef: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x744ff4u); f_007127b0();
    /* 00744ff4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00744ff7: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
L_00744ffe:; BB(0x00744ffe);
    /* 00744ffe: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00745001: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745003: je 0x746bbc */ if (fZ) goto L_00746bbc;
L_00745009:; BB(0x00745009);
    /* 00745009: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074500c: mov byte ptr [eax + 0x1c], 0x3e */ W8((u32)(r_eax+0x1cu), 0x3eu);
    /* 00745010: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x745015u); f_0073d114();
    /* 00745015: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745017: je 0x74502e */ if (fZ) goto L_0074502e;
L_00745019:; BB(0x00745019);
    /* 00745019: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074501c: mov byte ptr [eax + 0x1c], 0x3b */ W8((u32)(r_eax+0x1cu), 0x3bu);
    /* 00745020: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745023: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074502a: mov esp, ebp */ r_esp = r_ebp;
    /* 0074502c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074502d: ret  */ FN_RET(0x00744fe6); r_esp += 4; return;
L_0074502e:; BB(0x0074502e);
    /* 0074502e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745031: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00745034: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x745039u); f_0073ce50();
    /* 00745039: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074503b: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745041:; BB(0x00745041);
    /* 00745041: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745044: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00745047: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x74504cu); f_0073d134();
    /* 0074504c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074504e: je 0x74505c */ if (fZ) goto L_0074505c;
L_00745050:; BB(0x00745050);
    /* 00745050: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745053: mov byte ptr [eax + 0x1c], 0x3b */ W8((u32)(r_eax+0x1cu), 0x3bu);
    /* 00745057: jmp 0x7469c9 */ goto L_007469c9;
L_0074505c:; BB(0x0074505c);
    /* 0074505c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074505f: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00745065: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74506au); f_007365f4();
    /* 0074506a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074506b: call 0x7825ec */ r_esp -= 4; W32(r_esp, 0x745070u); f_007825ec();
    /* 00745070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745071: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745074: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00745078: mov byte ptr [edx + 0x1c], 1 */ W8((u32)(r_edx+0x1cu), 0x1u);
    /* 0074507c: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745081: mov byte ptr [edx + 0x24], al */ W8((u32)(r_edx+0x24u), (u8)r_eax);
    /* 00745084: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00744fe6); r_esp += 4; return;
L_00746bbc:; BB(0x00746bbc);
    /* 00746bbc: mov ecx, eax */ r_ecx = r_eax;
    /* 00746bbe: call 0x747c94 */ r_esp -= 4; W32(r_esp, 0x746bc3u); f_00747c94();
    /* 00746bc3: mov ecx, eax */ r_ecx = r_eax;
    /* 00746bc5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746bc8: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 00746bcb: jmp 0x745009 */ goto L_00745009;
}

