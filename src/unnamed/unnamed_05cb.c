#include "protos.h"

void f_005cb0c8(void) /* sub_5CB0C8 */
{
    FN_ENTER(0x005cb0c8);
    /* 005cb0c8: mov ecx, dword ptr [0xa8d8e8] */ r_ecx = R32((u32)(0xa8d8e8u));
    /* 005cb0ce: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005cb0d4: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005cb0d6: mov eax, dword ptr [0xa8d8e8] */ r_eax = R32((u32)(0xa8d8e8u));
    /* 005cb0db: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 005cb0e1: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005cb0e4: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 005cb0ea: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 005cb0ed: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 005cb0f3: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 005cb0f6: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 005cb0fc: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005cb0ff: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 005cb105: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005cb108: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 005cb10e: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005cb111: ret  */ FN_RET(0x005cb0c8); r_esp += 4; return;
}

void f_005cb114(void) /* sub_5CB114 */
{
    FN_ENTER(0x005cb114);
    /* 005cb114: mov eax, dword ptr [0xa8d8e8] */ r_eax = R32((u32)(0xa8d8e8u));
    /* 005cb119: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb11b: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005cb11e: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005cb124: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005cb127: mov dword ptr [0xaf0370], ecx */ W32((u32)(0xaf0370u), r_ecx);
    /* 005cb12d: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 005cb133: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005cb136: mov dword ptr [0xaf0378], edx */ W32((u32)(0xaf0378u), r_edx);
    /* 005cb13c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005cb13f: mov dword ptr [0xaf037c], edx */ W32((u32)(0xaf037cu), r_edx);
    /* 005cb145: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005cb148: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005cb14b: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 005cb151: mov dword ptr [0xaf0364], eax */ W32((u32)(0xaf0364u), r_eax);
    /* 005cb156: ret  */ FN_RET(0x005cb114); r_esp += 4; return;
}

void f_005cb158(void) /* sub_5CB158 */
{
    FN_ENTER(0x005cb158);
    /* 005cb158: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb15b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005cb15f: fcomp dword ptr [0x92bda8] */ fx_compare(ST(0), R_F32((u32)(0x92bda8u))); FPOP();
    /* 005cb165: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cb167: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005cb168: jae 0x5cb1bf */ if (!fC) goto L_005cb1bf;
L_005cb16a:; BB(0x005cb16a);
    /* 005cb16a: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005cb16f: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb174: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb176: or eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cb179: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005cb17e: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x5cb183u); f_0082d6fc();
    /* 005cb183: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb186: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 005cb18b: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x5cb190u); f_0082e1c4();
    /* 005cb190: fld dword ptr [0x92bda4] */ FPUSH(R_F32((u32)(0x92bda4u)));
    /* 005cb196: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 005cb19a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005cb19e: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005cb1a6: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005cb1aa: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005cb1b2: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005cb1ba: call 0x5cb1d4 */ r_esp -= 4; W32(r_esp, 0x5cb1bfu); f_005cb1d4();
L_005cb1bf:; BB(0x005cb1bf);
    /* 005cb1bf: mov edx, dword ptr [0xa8d8e8] */ r_edx = R32((u32)(0xa8d8e8u));
    /* 005cb1c5: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005cb1c9: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005cb1cc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cb1cf: ret  */ FN_RET(0x005cb158); r_esp += 4; return;
}

void f_005cb1d4(void) /* sub_5CB1D4 */
{
    FN_ENTER(0x005cb1d4);
    /* 005cb1d4: mov edx, dword ptr [0xa8d8e8] */ r_edx = R32((u32)(0xa8d8e8u));
    /* 005cb1da: mov ecx, dword ptr [0xaf0370] */ r_ecx = R32((u32)(0xaf0370u));
    /* 005cb1e0: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 005cb1e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cb1e5: mov ecx, dword ptr [0xaf0374] */ r_ecx = R32((u32)(0xaf0374u));
    /* 005cb1eb: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 005cb1ee: mov ecx, dword ptr [0xaf0378] */ r_ecx = R32((u32)(0xaf0378u));
    /* 005cb1f4: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 005cb1f7: mov ecx, dword ptr [0xaf037c] */ r_ecx = R32((u32)(0xaf037cu));
    /* 005cb1fd: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 005cb200: je 0x5cb224 */ if (fZ) goto L_005cb224;
L_005cb202:; BB(0x005cb202);
    /* 005cb202: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb204: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 005cb20a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005cb20d: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 005cb213: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005cb216: mov dword ptr [0xaf0378], edx */ W32((u32)(0xaf0378u), r_edx);
    /* 005cb21c: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005cb21f: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
L_005cb224:; BB(0x005cb224);
    /* 005cb224: ret  */ FN_RET(0x005cb1d4); r_esp += 4; return;
}

void f_005cb228(void) /* sub_5CB228 */
{
    FN_ENTER(0x005cb228);
    /* 005cb228: mov edx, dword ptr [0xa8d8e8] */ r_edx = R32((u32)(0xa8d8e8u));
    /* 005cb22e: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 005cb231: fcomp dword ptr [0x92bda0] */ fx_compare(ST(0), R_F32((u32)(0x92bda0u))); FPOP();
    /* 005cb237: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cb239: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005cb23a: jae 0x5cb24b */ if (!fC) goto L_005cb24b;
L_005cb23c:; BB(0x005cb23c);
    /* 005cb23c: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 005cb241: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x5cb246u); f_0082e1c4();
    /* 005cb246: call 0x5cb24c */ r_esp -= 4; W32(r_esp, 0x5cb24bu); f_005cb24c();
L_005cb24b:; BB(0x005cb24b);
    /* 005cb24b: ret  */ FN_RET(0x005cb228); r_esp += 4; return;
}

void f_005cb24c(void) /* sub_5CB24C */
{
    FN_ENTER(0x005cb24c);
    /* 005cb24c: mov eax, dword ptr [0xa8d8e8] */ r_eax = R32((u32)(0xa8d8e8u));
    /* 005cb251: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005cb254: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005cb257: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 005cb25d: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005cb260: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 005cb263: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 005cb269: mov dword ptr [0xaf0378], edx */ W32((u32)(0xaf0378u), r_edx);
    /* 005cb26f: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 005cb274: ret  */ FN_RET(0x005cb24c); r_esp += 4; return;
}

void f_005cb278(void) /* sub_5CB278 */
{
    FN_ENTER(0x005cb278);
    /* 005cb278: mov ecx, dword ptr [0xa8d8e8] */ r_ecx = R32((u32)(0xa8d8e8u));
    /* 005cb27e: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 005cb284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb286: jne 0x5cb325 */ if (!fZ) goto L_005cb325;
L_005cb28c:; BB(0x005cb28c);
    /* 005cb28c: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 005cb296: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005cb29b: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005cb29e: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 005cb2a1: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 005cb2a4: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 005cb2a7: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 005cb2aa: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 005cb2ad: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 005cb2b0: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 005cb2b3: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 005cb2b6: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 005cb2b9: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 005cb2bc: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 005cb2bf: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 005cb2c2: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 005cb2c5: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 005cb2c8: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 005cb2cb: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 005cb2ce: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 005cb2d1: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 005cb2d4: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 005cb2d7: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 005cb2dd: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 005cb2e3: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 005cb2e9: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 005cb2ef: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 005cb2f5: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 005cb2fb: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
    /* 005cb301: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 005cb307: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 005cb30d: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 005cb313: mov dword ptr [ecx + 0xa8], eax */ W32((u32)(r_ecx+0xa8u), r_eax);
    /* 005cb319: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 005cb31f: mov ecx, dword ptr [0xa8d8e8] */ r_ecx = R32((u32)(0xa8d8e8u));
L_005cb325:; BB(0x005cb325);
    /* 005cb325: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cb329: call 0x5cb330 */ r_esp -= 4; W32(r_esp, 0x5cb32eu); f_005cb330();
    /* 005cb32e: ret  */ FN_RET(0x005cb278); r_esp += 4; return;
}

void f_005cb330(void) /* sub_5CB330 */
{
    FN_ENTER(0x005cb330);
    /* 005cb330: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 005cb336: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005cb339: jge 0x5cb34a */ if ((fS==fO)) goto L_005cb34a;
L_005cb33b:; BB(0x005cb33b);
    /* 005cb33b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005cb33f: mov dword ptr [ecx + edx*4 + 0x30], eax */ W32((u32)(r_ecx+r_edx*4+0x30u), r_eax);
    /* 005cb343: add dword ptr [ecx + 0xb0], 1 */ { u32 ad = (u32)(r_ecx+0xb0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005cb34a:; BB(0x005cb34a);
    /* 005cb34a: ret 4 */ FN_RET(0x005cb330); r_esp += 8; return;
}

void f_005cb350(void) /* sub_5CB350 */
{
    FN_ENTER(0x005cb350);
    /* 005cb350: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb351: mov ebx, esp */ r_ebx = r_esp;
    /* 005cb353: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005cb356: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cb357: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb35a: movzx edi, word ptr [ebx + 0xc] */ r_edi = (u32)R16((u32)(r_ebx+0xcu));
    /* 005cb35e: mov eax, dword ptr [0xa8d8e8] */ r_eax = R32((u32)(0xa8d8e8u));
    /* 005cb363: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb365: je 0x5cb48c */ if (fZ) goto L_005cb48c;
L_005cb36b:; BB(0x005cb36b);
    /* 005cb36b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cb36d: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x5cb372u); f_00835f78();
    /* 005cb372: mov ecx, dword ptr [0xa8d8e8] */ r_ecx = R32((u32)(0xa8d8e8u));
    /* 005cb378: fld dword ptr [0x92bd9c] */ FPUSH(R_F32((u32)(0x92bd9cu)));
    /* 005cb37e: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 005cb382: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 005cb388: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005cb38b: mov eax, dword ptr [ecx + 0xc4] */ r_eax = R32((u32)(r_ecx+0xc4u));
    /* 005cb391: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005cb395: mov eax, dword ptr [ecx + 0xc8] */ r_eax = R32((u32)(r_ecx+0xc8u));
    /* 005cb39b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005cb39f: mov eax, dword ptr [ecx + 0xcc] */ r_eax = R32((u32)(r_ecx+0xccu));
    /* 005cb3a5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005cb3a9: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 005cb3af: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005cb3b3: mov eax, dword ptr [ecx + 0xd4] */ r_eax = R32((u32)(r_ecx+0xd4u));
    /* 005cb3b9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005cb3bd: mov eax, dword ptr [ecx + 0xd8] */ r_eax = R32((u32)(r_ecx+0xd8u));
    /* 005cb3c3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005cb3c7: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 005cb3cd: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005cb3d1: mov eax, dword ptr [ecx + 0xe0] */ r_eax = R32((u32)(r_ecx+0xe0u));
    /* 005cb3d7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005cb3db: mov eax, dword ptr [ecx + 0xe4] */ r_eax = R32((u32)(r_ecx+0xe4u));
    /* 005cb3e1: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005cb3e5: mov eax, dword ptr [ecx + 0xe8] */ r_eax = R32((u32)(r_ecx+0xe8u));
    /* 005cb3eb: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005cb3ef: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 005cb3f5: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005cb3f9: mov eax, dword ptr [ecx + 0xf0] */ r_eax = R32((u32)(r_ecx+0xf0u));
    /* 005cb3ff: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005cb403: mov eax, dword ptr [ecx + 0xf4] */ r_eax = R32((u32)(r_ecx+0xf4u));
    /* 005cb409: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 005cb40d: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005cb413: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005cb417: mov eax, dword ptr [ecx + 0xfc] */ r_eax = R32((u32)(r_ecx+0xfcu));
    /* 005cb41d: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005cb421: movzx eax, word ptr [ecx + 0x100] */ r_eax = (u32)R16((u32)(r_ecx+0x100u));
    /* 005cb428: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cb42b: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005cb42f: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 005cb433: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cb434: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb436: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cb438: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005cb43d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb43f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cb441: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005cb445: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 005cb449: movzx eax, word ptr [ecx + 0x102] */ r_eax = (u32)R16((u32)(r_ecx+0x102u));
    /* 005cb450: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 005cb453: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cb456: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005cb458: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005cb45a: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005cb45e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cb45f: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 005cb463: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 005cb467: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb469: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cb46b: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005cb470: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb472: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cb474: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005cb478: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 005cb47c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005cb47f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005cb481: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005cb483: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005cb487: call 0x835f88 */ r_esp -= 4; W32(r_esp, 0x5cb48cu); f_00835f88();
L_005cb48c:; BB(0x005cb48c);
    /* 005cb48c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cb48f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cb490: mov esp, ebx */ r_esp = r_ebx;
    /* 005cb492: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cb493: ret  */ FN_RET(0x005cb350); r_esp += 4; return;
}

void f_005cb494(void) /* sub_5CB494 */
{
    FN_ENTER(0x005cb494);
    /* 005cb494: mov eax, dword ptr [0xa8d8e4] */ r_eax = R32((u32)(0xa8d8e4u));
    /* 005cb499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cb49b: je 0x5cb4ae */ if (fZ) goto L_005cb4ae;
L_005cb49d:; BB(0x005cb49d);
    /* 005cb49d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb49e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5cb4a3u); f_00857e98();
    /* 005cb4a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cb4a4: mov dword ptr [0xa8d8e4], 0 */ W32((u32)(0xa8d8e4u), 0x0u);
L_005cb4ae:; BB(0x005cb4ae);
    /* 005cb4ae: ret  */ FN_RET(0x005cb494); r_esp += 4; return;
}

void f_005cb4b0(void) /* sub_5CB4B0 */
{
    FN_ENTER(0x005cb4b0);
    /* 005cb4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb4b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb4b5: push 0x8d9acc */ { u32 v = 0x8d9accu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb4ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cb4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb4c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cb4c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb4cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cb4ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cb4d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cb4d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cb4d7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb4d9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005cb4e0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cb4e5u); f_005caba4();
    /* 005cb4e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cb4e6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cb4e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cb4eb: je 0x5cb50d */ if (fZ) goto L_005cb50d;
L_005cb4ed:; BB(0x005cb4ed);
    /* 005cb4ed: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005cb4f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb4fb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cb4fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb501: call 0x5cb51c */ r_esp -= 4; W32(r_esp, 0x5cb506u); f_005cb51c();
    /* 005cb506: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005cb50d:; BB(0x005cb50d);
    /* 005cb50d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb510: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cb517: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb519: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb51a: ret  */ FN_RET(0x005cb4b0); r_esp += 4; return;
}

void f_005cb51c(void) /* sub_5CB51C */
{
    FN_ENTER(0x005cb51c);
    /* 005cb51c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cb51d: mov edi, ecx */ r_edi = r_ecx;
    /* 005cb51f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cb523: mov ecx, edi */ r_ecx = r_edi;
    /* 005cb525: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cb52au); f_008193cc();
    /* 005cb52a: mov dword ptr [edi], 0xb0c400 */ W32((u32)(r_edi), 0xb0c400u);
    /* 005cb530: mov eax, dword ptr [0xa8d8e4] */ r_eax = R32((u32)(0xa8d8e4u));
    /* 005cb535: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005cb53a: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005cb53d: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 005cb547: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 005cb54a: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005cb54d: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 005cb550: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 005cb553: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 005cb556: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 005cb559: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 005cb55c: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 005cb55f: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 005cb562: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 005cb565: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 005cb568: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 005cb56b: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 005cb56e: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 005cb571: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 005cb574: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 005cb577: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 005cb57a: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 005cb57d: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 005cb580: mov dword ptr [eax + 0x80], edx */ W32((u32)(r_eax+0x80u), r_edx);
    /* 005cb586: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 005cb58c: mov dword ptr [eax + 0x88], edx */ W32((u32)(r_eax+0x88u), r_edx);
    /* 005cb592: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
    /* 005cb598: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 005cb59e: mov dword ptr [eax + 0x94], edx */ W32((u32)(r_eax+0x94u), r_edx);
    /* 005cb5a4: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
    /* 005cb5aa: mov dword ptr [eax + 0x9c], edx */ W32((u32)(r_eax+0x9cu), r_edx);
    /* 005cb5b0: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 005cb5b6: mov dword ptr [eax + 0xa4], edx */ W32((u32)(r_eax+0xa4u), r_edx);
    /* 005cb5bc: mov dword ptr [eax + 0xa8], edx */ W32((u32)(r_eax+0xa8u), r_edx);
    /* 005cb5c2: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 005cb5c8: mov eax, edi */ r_eax = r_edi;
    /* 005cb5ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cb5cb: ret 4 */ FN_RET(0x005cb51c); r_esp += 8; return;
}

void f_005cb5d0(void) /* sub_5CB5D0 */
{
    FN_ENTER(0x005cb5d0);
    /* 005cb5d0: mov edx, dword ptr [0xa8d8e4] */ r_edx = R32((u32)(0xa8d8e4u));
    /* 005cb5d6: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 005cb5e0: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005cb5e5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 005cb5e8: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 005cb5eb: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005cb5ee: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 005cb5f1: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005cb5f4: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 005cb5f7: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 005cb5fa: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 005cb5fd: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 005cb600: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 005cb603: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 005cb606: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 005cb609: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 005cb60c: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 005cb60f: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 005cb612: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 005cb615: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 005cb618: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 005cb61b: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 005cb61e: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 005cb621: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 005cb627: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 005cb62d: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 005cb633: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 005cb639: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 005cb63f: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 005cb645: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 005cb64b: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 005cb651: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 005cb657: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 005cb65d: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 005cb663: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 005cb669: ret  */ FN_RET(0x005cb5d0); r_esp += 4; return;
}

void f_005cb66c(void) /* sub_5CB66C */
{
    FN_ENTER(0x005cb66c);
    /* 005cb66c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb66f: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5cb674u); f_007a9044();
    /* 005cb674: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005cb67a: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 005cb67f: mov ecx, dword ptr [0xaf0364] */ r_ecx = R32((u32)(0xaf0364u));
    /* 005cb685: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 005cb68b: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 005cb690: mov eax, dword ptr [0xaf0370] */ r_eax = R32((u32)(0xaf0370u));
    /* 005cb695: mov dword ptr [0xaab500], ecx */ W32((u32)(0xaab500u), r_ecx);
    /* 005cb69b: mov dword ptr [0xaab508], eax */ W32((u32)(0xaab508u), r_eax);
    /* 005cb6a0: mov eax, dword ptr [0xaf0374] */ r_eax = R32((u32)(0xaf0374u));
    /* 005cb6a5: mov dword ptr [0xaab50c], eax */ W32((u32)(0xaab50cu), r_eax);
    /* 005cb6aa: mov eax, dword ptr [0xaf0378] */ r_eax = R32((u32)(0xaf0378u));
    /* 005cb6af: mov dword ptr [0xaab510], eax */ W32((u32)(0xaab510u), r_eax);
    /* 005cb6b4: mov eax, dword ptr [0xaf037c] */ r_eax = R32((u32)(0xaf037cu));
    /* 005cb6b9: mov dword ptr [0xaab514], eax */ W32((u32)(0xaab514u), r_eax);
    /* 005cb6be: mov eax, dword ptr [0xa8d8e4] */ r_eax = R32((u32)(0xa8d8e4u));
    /* 005cb6c3: lea edx, [eax + 0x30] */ r_edx = (u32)(r_eax+0x30u);
    /* 005cb6c6: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 005cb6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb6ce: je 0x5cb77e */ if (fZ) goto L_005cb77e;
L_005cb6d4:; BB(0x005cb6d4);
    /* 005cb6d4: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005cb6d8: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005cb6dc: mov esi, eax */ r_esi = r_eax;
    /* 005cb6de: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005cb6e1: mov edi, edx */ r_edi = r_edx;
L_005cb6e3:; BB(0x005cb6e3);
    /* 005cb6e3: mov ecx, edi */ r_ecx = r_edi;
    /* 005cb6e5: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 005cb6e7: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005cb6ea: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5cb6efu); f_005c57ac();
    /* 005cb6ef: mov ebx, eax */ r_ebx = r_eax;
    /* 005cb6f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb6f4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb6f6: je 0x5cb76a */ if (fZ) goto L_005cb76a;
L_005cb6f8:; BB(0x005cb6f8);
    /* 005cb6f8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005cb6fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cb6fc: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5cb6ffu); call_ind(t); }
    /* 005cb6ff: movzx eax, byte ptr [ebx + 0xf2] */ r_eax = (u32)R8((u32)(r_ebx+0xf2u));
    /* 005cb706: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb708: jne 0x5cb711 */ if (!fZ) goto L_005cb711;
L_005cb70a:; BB(0x005cb70a);
    /* 005cb70a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cb70c: call 0x5e87ec */ r_esp -= 4; W32(r_esp, 0x5cb711u); f_005e87ec();
L_005cb711:; BB(0x005cb711);
    /* 005cb711: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5cb716u); f_007a9044();
    /* 005cb716: mov ecx, dword ptr [0xaab508] */ r_ecx = R32((u32)(0xaab508u));
    /* 005cb71c: mov ebx, dword ptr [0xaab50c] */ r_ebx = R32((u32)(0xaab50cu));
    /* 005cb722: mov dword ptr [0xaf0370], ecx */ W32((u32)(0xaf0370u), r_ecx);
    /* 005cb728: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 005cb72e: mov dword ptr [0xaf0374], ebx */ W32((u32)(0xaf0374u), r_ebx);
    /* 005cb734: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 005cb73a: mov ecx, dword ptr [0xaab514] */ r_ecx = R32((u32)(0xaab514u));
    /* 005cb740: mov dword ptr [0xaf037c], ecx */ W32((u32)(0xaf037cu), r_ecx);
    /* 005cb746: mov ecx, dword ptr [0xaab504] */ r_ecx = R32((u32)(0xaab504u));
    /* 005cb74c: mov dword ptr [0xaf0360], ecx */ W32((u32)(0xaf0360u), r_ecx);
    /* 005cb752: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 005cb758: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 005cb75e: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 005cb764: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
L_005cb76a:; BB(0x005cb76a);
    /* 005cb76a: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 005cb76d: jne 0x5cb6e3 */ if (!fZ) goto L_005cb6e3;
L_005cb773:; BB(0x005cb773);
    /* 005cb773: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005cb777: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005cb77b: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_005cb77e:; BB(0x005cb77e);
    /* 005cb77e: call 0x605998 */ r_esp -= 4; W32(r_esp, 0x5cb783u); f_00605998();
    /* 005cb783: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cb786: ret  */ FN_RET(0x005cb66c); r_esp += 4; return;
}

void f_005cb788(void) /* sub_5CB788 */
{
    FN_ENTER(0x005cb788);
    /* 005cb788: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cb78c: mov ecx, dword ptr [0xa8d8e4] */ r_ecx = R32((u32)(0xa8d8e4u));
    /* 005cb792: call 0x5cb330 */ r_esp -= 4; W32(r_esp, 0x5cb797u); f_005cb330();
    /* 005cb797: ret  */ FN_RET(0x005cb788); r_esp += 4; return;
}

void f_005cb798(void) /* sub_5CB798 */
{
    FN_ENTER(0x005cb798);
    /* 005cb798: mov dword ptr [0xa8d8d8], 0x3f800000 */ W32((u32)(0xa8d8d8u), 0x3f800000u);
    /* 005cb7a2: mov dword ptr [0xa8d8dc], 0x41000000 */ W32((u32)(0xa8d8dcu), 0x41000000u);
    /* 005cb7ac: mov dword ptr [0xa8d8e0], 0x3fc00000 */ W32((u32)(0xa8d8e0u), 0x3fc00000u);
    /* 005cb7b6: ret  */ FN_RET(0x005cb798); r_esp += 4; return;
}

void f_005cb7b8(void) /* sub_5CB7B8 */
{
    FN_ENTER(0x005cb7b8);
    /* 005cb7b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cb7b9: mov edi, ecx */ r_edi = r_ecx;
    /* 005cb7bb: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005cb7c0: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005cb7c3: mov dword ptr [edi + 0xb0], 0 */ W32((u32)(r_edi+0xb0u), 0x0u);
    /* 005cb7cd: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 005cb7d0: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005cb7d3: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 005cb7d6: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 005cb7d9: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 005cb7dc: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 005cb7df: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 005cb7e2: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 005cb7e5: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 005cb7e8: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 005cb7eb: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 005cb7ee: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 005cb7f1: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 005cb7f4: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 005cb7f7: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 005cb7fa: mov dword ptr [edi + 0x70], eax */ W32((u32)(r_edi+0x70u), r_eax);
    /* 005cb7fd: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 005cb800: mov dword ptr [edi + 0x78], eax */ W32((u32)(r_edi+0x78u), r_eax);
    /* 005cb803: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 005cb806: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 005cb80c: mov dword ptr [edi + 0x84], eax */ W32((u32)(r_edi+0x84u), r_eax);
    /* 005cb812: mov dword ptr [edi + 0x88], eax */ W32((u32)(r_edi+0x88u), r_eax);
    /* 005cb818: mov dword ptr [edi + 0x8c], eax */ W32((u32)(r_edi+0x8cu), r_eax);
    /* 005cb81e: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 005cb824: mov dword ptr [edi + 0x94], eax */ W32((u32)(r_edi+0x94u), r_eax);
    /* 005cb82a: mov dword ptr [edi + 0x98], eax */ W32((u32)(r_edi+0x98u), r_eax);
    /* 005cb830: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
    /* 005cb836: mov dword ptr [edi + 0xa0], eax */ W32((u32)(r_edi+0xa0u), r_eax);
    /* 005cb83c: mov dword ptr [edi + 0xa4], eax */ W32((u32)(r_edi+0xa4u), r_eax);
    /* 005cb842: mov dword ptr [edi + 0xa8], eax */ W32((u32)(r_edi+0xa8u), r_eax);
    /* 005cb848: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 005cb84e: lea ecx, [edi + 0xc0] */ r_ecx = (u32)(r_edi+0xc0u);
    /* 005cb854: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5cb859u); f_00830cd8();
    /* 005cb859: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cb85b: mov word ptr [edi + 0x100], dx */ W16((u32)(r_edi+0x100u), (u16)r_edx);
    /* 005cb862: mov word ptr [edi + 0x102], dx */ W16((u32)(r_edi+0x102u), (u16)r_edx);
    /* 005cb869: mov eax, edi */ r_eax = r_edi;
    /* 005cb86b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cb86c: ret  */ FN_RET(0x005cb7b8); r_esp += 4; return;
}

void f_005cb870(void) /* sub_5CB870 */
{
    FN_ENTER(0x005cb870);
    /* 005cb870: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cb871: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb876: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5cb87bu); f_008581c5();
    /* 005cb87b: mov edi, eax */ r_edi = r_eax;
    /* 005cb87d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb880: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb882: je 0x5cb893 */ if (fZ) goto L_005cb893;
L_005cb884:; BB(0x005cb884);
    /* 005cb884: mov ecx, edi */ r_ecx = r_edi;
    /* 005cb886: call 0x5cb7b8 */ r_esp -= 4; W32(r_esp, 0x5cb88bu); f_005cb7b8();
L_005cb88b:; BB(0x005cb88b);
    /* 005cb88b: mov dword ptr [0xa8d8e4], edi */ W32((u32)(0xa8d8e4u), r_edi);
    /* 005cb891: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cb892: ret  */ FN_RET(0x005cb870); r_esp += 4; return;
L_005cb893:; BB(0x005cb893);
    /* 005cb893: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cb895: jmp 0x5cb88b */ goto L_005cb88b;
}

void f_005cb898(void) /* sub_5CB898 */
{
    FN_ENTER(0x005cb898);
    /* 005cb898: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cb899: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb89e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5cb8a3u); f_008581c5();
    /* 005cb8a3: mov edi, eax */ r_edi = r_eax;
    /* 005cb8a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb8a8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb8aa: je 0x5cb8bb */ if (fZ) goto L_005cb8bb;
L_005cb8ac:; BB(0x005cb8ac);
    /* 005cb8ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005cb8ae: call 0x5cb7b8 */ r_esp -= 4; W32(r_esp, 0x5cb8b3u); f_005cb7b8();
L_005cb8b3:; BB(0x005cb8b3);
    /* 005cb8b3: mov dword ptr [0xa8d8e8], edi */ W32((u32)(0xa8d8e8u), r_edi);
    /* 005cb8b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cb8ba: ret  */ FN_RET(0x005cb898); r_esp += 4; return;
L_005cb8bb:; BB(0x005cb8bb);
    /* 005cb8bb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cb8bd: jmp 0x5cb8b3 */ goto L_005cb8b3;
}

void f_005cb8c0(void) /* sub_5CB8C0 */
{
    FN_ENTER(0x005cb8c0);
    /* 005cb8c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb8c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cb8c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cb8c5: call 0x5cb8e4 */ r_esp -= 4; W32(r_esp, 0x5cb8cau); f_005cb8e4();
    /* 005cb8ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cb8ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cb8d0: jne 0x5cb8d6 */ if (!fZ) goto L_005cb8d6;
L_005cb8d2:; BB(0x005cb8d2);
    /* 005cb8d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cb8d3: ret 4 */ FN_RET(0x005cb8c0); r_esp += 8; return;
L_005cb8d6:; BB(0x005cb8d6);
    /* 005cb8d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb8d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cb8dcu); f_005c2f74();
    /* 005cb8dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cb8dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cb8de: ret 4 */ FN_RET(0x005cb8c0); r_esp += 8; return;
}

void f_005cb8e4(void) /* sub_5CB8E4 */
{
    FN_ENTER(0x005cb8e4);
    /* 005cb8e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb8e5: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb8e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb8e9: push 0x8d9ae8 */ { u32 v = 0x8d9ae8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb8ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cb8f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb8f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cb8fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb8ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cb902: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cb905: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cb908: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cb90b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cb90e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb911: mov dword ptr [ecx], 0xb0c460 */ W32((u32)(r_ecx), 0xb0c460u);
    /* 005cb917: mov dword ptr [0xa8d8f4], 0 */ W32((u32)(0xa8d8f4u), 0x0u);
    /* 005cb921: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cb928: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cb92du); f_008171e8();
    /* 005cb92d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb930: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cb937: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb939: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb93a: ret  */ FN_RET(0x005cb8e4); r_esp += 4; return;
}

void f_005cb93c(void) /* sub_5CB93C */
{
    FN_ENTER(0x005cb93c);
    /* 005cb93c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb93d: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb93f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb941: push 0x8d9b10 */ { u32 v = 0x8d9b10u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb946: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cb94c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb94d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cb954: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb957: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cb95a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cb95d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cb960: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cb963: mov edx, dword ptr [0xa8d8f4] */ r_edx = R32((u32)(0xa8d8f4u));
    /* 005cb969: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb96b: je 0x5cb985 */ if (fZ) goto L_005cb985;
L_005cb96d:; BB(0x005cb96d);
    /* 005cb96d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cb96f: je 0x5cb977 */ if (fZ) goto L_005cb977;
L_005cb971:; BB(0x005cb971);
    /* 005cb971: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cb974: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
L_005cb977:; BB(0x005cb977);
    /* 005cb977: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb97a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cb981: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb983: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb984: ret  */ FN_RET(0x005cb93c); r_esp += 4; return;
L_005cb985:; BB(0x005cb985);
    /* 005cb985: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005cb98c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb98e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cb993u); f_005caba4();
    /* 005cb993: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cb994: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cb997: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb999: je 0x5cb9be */ if (fZ) goto L_005cb9be;
L_005cb99b:; BB(0x005cb99b);
    /* 005cb99b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005cb9a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb9a9: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cb9af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb9b2: call 0x5cb9c8 */ r_esp -= 4; W32(r_esp, 0x5cb9b7u); f_005cb9c8();
    /* 005cb9b7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005cb9be:; BB(0x005cb9be);
    /* 005cb9be: mov edx, dword ptr [0xa8d8f4] */ r_edx = R32((u32)(0xa8d8f4u));
    /* 005cb9c4: jmp 0x5cb96d */ goto L_005cb96d;
}

void f_005cb9c8(void) /* sub_5CB9C8 */
{
    FN_ENTER(0x005cb9c8);
    /* 005cb9c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb9c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cb9cb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cb9cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cb9d1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cb9d6u); f_008193cc();
    /* 005cb9d6: mov dword ptr [ebx], 0xb0c460 */ W32((u32)(r_ebx), 0xb0c460u);
    /* 005cb9dc: mov edx, dword ptr [0x9c260c] */ r_edx = R32((u32)(0x9c260cu));
    /* 005cb9e2: mov dword ptr [0xa8d8f4], ebx */ W32((u32)(0xa8d8f4u), r_ebx);
    /* 005cb9e8: mov dword ptr [ebx + 0x1c], 0xa */ W32((u32)(r_ebx+0x1cu), 0xau);
    /* 005cb9ef: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 005cb9f2: mov eax, ebx */ r_eax = r_ebx;
    /* 005cb9f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cb9f5: ret 4 */ FN_RET(0x005cb9c8); r_esp += 8; return;
}

void f_005cb9f8(void) /* sub_5CB9F8 */
{
    FN_ENTER(0x005cb9f8);
    /* 005cb9f8: mov eax, dword ptr [0xa8d8f4] */ r_eax = R32((u32)(0xa8d8f4u));
    /* 005cb9fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cb9ff: je 0x5cba05 */ if (fZ) goto L_005cba05;
L_005cba01:; BB(0x005cba01);
    /* 005cba01: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 005cba04: ret  */ FN_RET(0x005cb9f8); r_esp += 4; return;
L_005cba05:; BB(0x005cba05);
    /* 005cba05: mov eax, 0xa */ r_eax = 0xau;
    /* 005cba0a: ret  */ FN_RET(0x005cb9f8); r_esp += 4; return;
}

void f_005cba0c(void) /* sub_5CBA0C */
{
    FN_ENTER(0x005cba0c);
    /* 005cba0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cba0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cba0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cba11: call 0x5cba30 */ r_esp -= 4; W32(r_esp, 0x5cba16u); f_005cba30();
    /* 005cba16: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cba1a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cba1c: jne 0x5cba22 */ if (!fZ) goto L_005cba22;
L_005cba1e:; BB(0x005cba1e);
    /* 005cba1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cba1f: ret 4 */ FN_RET(0x005cba0c); r_esp += 8; return;
L_005cba22:; BB(0x005cba22);
    /* 005cba22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cba23: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cba28u); f_005c2f74();
    /* 005cba28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cba29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cba2a: ret 4 */ FN_RET(0x005cba0c); r_esp += 8; return;
}

void f_005cba30(void) /* sub_5CBA30 */
{
    FN_ENTER(0x005cba30);
    /* 005cba30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cba31: mov ebp, esp */ r_ebp = r_esp;
    /* 005cba33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cba35: push 0x8d9b2c */ { u32 v = 0x8d9b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cba3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cba40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cba41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cba48: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cba4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cba4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cba51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cba54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cba57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cba5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cba61: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cba64: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cba67: mov dword ptr [eax], 0xb0c518 */ W32((u32)(r_eax), 0xb0c518u);
    /* 005cba6d: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5cba72u); f_005cdcc0();
    /* 005cba72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cba73: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cba7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cba7d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cba82u); f_008171e8();
    /* 005cba82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cba85: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cba8c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cba8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cba8f: ret  */ FN_RET(0x005cba30); r_esp += 4; return;
}

void f_005cba90(void) /* sub_5CBA90 */
{
    FN_ENTER(0x005cba90);
    /* 005cba90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cba91: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cba93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cba95: call 0x5cbab4 */ r_esp -= 4; W32(r_esp, 0x5cba9au); f_005cbab4();
    /* 005cba9a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cba9e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cbaa0: jne 0x5cbaa6 */ if (!fZ) goto L_005cbaa6;
L_005cbaa2:; BB(0x005cbaa2);
    /* 005cbaa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cbaa3: ret 4 */ FN_RET(0x005cba90); r_esp += 8; return;
L_005cbaa6:; BB(0x005cbaa6);
    /* 005cbaa6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbaa7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cbaacu); f_005c2f74();
    /* 005cbaac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cbaad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cbaae: ret 4 */ FN_RET(0x005cba90); r_esp += 8; return;
}

void f_005cbab4(void) /* sub_5CBAB4 */
{
    FN_ENTER(0x005cbab4);
    /* 005cbab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cbab5: mov ebp, esp */ r_ebp = r_esp;
    /* 005cbab7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbab9: push 0x8d9b48 */ { u32 v = 0x8d9b48u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbabe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cbac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbac5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cbacc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cbacf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cbad2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cbad5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cbad8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cbadb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cbade: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbae1: mov dword ptr [ecx], 0xb0c528 */ W32((u32)(r_ecx), 0xb0c528u);
    /* 005cbae7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cbaee: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cbaf3u); f_008171e8();
    /* 005cbaf3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cbaf6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cbafd: mov esp, ebp */ r_esp = r_ebp;
    /* 005cbaff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cbb00: ret  */ FN_RET(0x005cbab4); r_esp += 4; return;
}

void f_005cbb04(void) /* sub_5CBB04 */
{
    FN_ENTER(0x005cbb04);
    /* 005cbb04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb05: mov ebp, esp */ r_ebp = r_esp;
    /* 005cbb07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb09: push 0x8d9b70 */ { u32 v = 0x8d9b70u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cbb14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cbb1c: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cbb1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cbb22: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005cbb25: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005cbb28: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005cbb2b: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005cbb2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb30: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5cbb35u); f_0068d5a8();
    /* 005cbb35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cbb38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbb3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cbb3d: je 0x5cbc02 */ if (fZ) goto L_005cbc02;
L_005cbb43:; BB(0x005cbb43);
    /* 005cbb43: mov eax, dword ptr [eax + 0x2b4] */ r_eax = R32((u32)(r_eax+0x2b4u));
    /* 005cbb49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cbb4b: je 0x5cbc02 */ if (fZ) goto L_005cbc02;
L_005cbb51:; BB(0x005cbb51);
    /* 005cbb51: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cbb54: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 005cbb57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb58: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 005cbb5b: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005cbb5d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cbb60: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb62: call dword ptr [ebx + 0x10c] */ { u32 t = R32((u32)(r_ebx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5cbb68u); call_ind(t); }
    /* 005cbb68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cbb6b: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 005cbb6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb6f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cbb71: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb73: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5cbb79u); call_ind(t); }
    /* 005cbb79: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 005cbb7c: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 005cbb7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb81: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5cbb86u); f_00836208();
    /* 005cbb86: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005cbb89: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 005cbb8c: fdiv dword ptr [0x92bdf8] */ ST(0) = ST(0) / R_F32((u32)(0x92bdf8u));
    /* 005cbb92: fmul dword ptr [0x92bdf4] */ ST(0) = ST(0) * R_F32((u32)(0x92bdf4u));
    /* 005cbb98: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005cbb9b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005cbba2: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbba4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cbba9u); f_005caba4();
    /* 005cbba9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbbac: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005cbbaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbbb1: je 0x5cbbe6 */ if (fZ) goto L_005cbbe6;
L_005cbbb3:; BB(0x005cbbb3);
    /* 005cbbb3: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005cbbba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cbbc1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cbbc4: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 005cbbc7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cbbca: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbbcd: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005cbbd1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005cbbd4: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005cbbd8: mov ecx, eax */ r_ecx = r_eax;
    /* 005cbbda: call 0x5cbc14 */ r_esp -= 4; W32(r_esp, 0x5cbbdfu); f_005cbc14();
    /* 005cbbdf: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005cbbe6:; BB(0x005cbbe6);
    /* 005cbbe6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cbbed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cbbf0: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cbbf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cbbf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbbf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbbf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbbf8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbbfa: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5cbbffu); f_00814298();
    /* 005cbbff: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005cbc02:; BB(0x005cbc02);
    /* 005cbc02: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbc05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cbc08: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cbc0f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cbc11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cbc12: ret  */ FN_RET(0x005cbb04); r_esp += 4; return;
}

void f_005cbc14(void) /* sub_5CBC14 */
{
    FN_ENTER(0x005cbc14);
    /* 005cbc14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc15: mov ebp, esp */ r_ebp = r_esp;
    /* 005cbc17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc19: push 0x8d9ba6 */ { u32 v = 0x8d9ba6u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cbc24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cbc2c: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cbc2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cbc32: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005cbc35: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005cbc38: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005cbc3b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cbc3e: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cbc44: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cbc47: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005cbc4a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cbc4d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005cbc50: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005cbc53: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cbc56: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cbc5bu); f_008193cc();
    /* 005cbc5b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cbc62: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cbc65: mov dword ptr [edx], 0xb0c518 */ W32((u32)(r_edx), 0xb0c518u);
    /* 005cbc6b: mov eax, dword ptr [0x9c2610] */ r_eax = R32((u32)(0x9c2610u));
    /* 005cbc70: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 005cbc77: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005cbc7a: lea ebx, [edx + 0x70] */ r_ebx = (u32)(r_edx+0x70u);
    /* 005cbc7d: lea ecx, [edx + 0x78] */ r_ecx = (u32)(r_edx+0x78u);
    /* 005cbc80: add edx, 0x74 */ {  u32 a = r_edx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cbc83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbc86: call 0x5d7a68 */ r_esp -= 4; W32(r_esp, 0x5cbc8bu); f_005d7a68();
    /* 005cbc8b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cbc8e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cbc91: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cbc94: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005cbc97: fld dword ptr [0x92bdec] */ FPUSH(R_F32((u32)(0x92bdecu)));
    /* 005cbc9d: mov dword ptr [esi + 0x68], 0 */ W32((u32)(r_esi+0x68u), 0x0u);
    /* 005cbca4: push 0x1ba */ { u32 v = 0x1bau; r_esp -= 4; W32(r_esp, v); }
    /* 005cbca9: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005cbcac: fsub dword ptr [0x9ff440] */ ST(0) = ST(0) - R_F32((u32)(0x9ff440u));
    /* 005cbcb2: fdiv dword ptr [0x92bde8] */ ST(0) = ST(0) / R_F32((u32)(0x92bde8u));
    /* 005cbcb8: mov ecx, dword ptr [0x9ff440] */ r_ecx = R32((u32)(0x9ff440u));
    /* 005cbcbe: mov ebx, dword ptr [0x9ff43c] */ r_ebx = R32((u32)(0x9ff43cu));
    /* 005cbcc4: fstp dword ptr [esi + 0x64] */ W_F32((u32)(r_esi+0x64u), ST(0)); FPOP();
    /* 005cbcc7: mov dword ptr [esi + 0x58], edx */ W32((u32)(r_esi+0x58u), r_edx);
    /* 005cbcca: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 005cbccd: mov dword ptr [esi + 0x5c], ecx */ W32((u32)(r_esi+0x5cu), r_ecx);
    /* 005cbcd0: mov dword ptr [esi + 0x60], ebx */ W32((u32)(r_esi+0x60u), r_ebx);
    /* 005cbcd3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005cbcd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbcd7: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5cbcdcu); f_00509590();
    /* 005cbcdc: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cbcdf: mov dword ptr [edx + 0x38], 0x3f800000 */ W32((u32)(r_edx+0x38u), 0x3f800000u);
    /* 005cbce6: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005cbce9: mov dword ptr [edx + 0x3c], 0x3f000000 */ W32((u32)(r_edx+0x3cu), 0x3f000000u);
    /* 005cbcf0: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbcf2: mov dword ptr [edx + 0x40], 0x3f800000 */ W32((u32)(r_edx+0x40u), 0x3f800000u);
    /* 005cbcf9: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 005cbd00: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005cbd07: mov dword ptr [ebp - 0x3c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffc4u), 0x3f800000u);
    /* 005cbd0e: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005cbd15: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005cbd1c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cbd21u); f_005caba4();
    /* 005cbd21: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbd24: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cbd27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cbd29: je 0x5cbd61 */ if (fZ) goto L_005cbd61;
L_005cbd2b:; BB(0x005cbd2b);
    /* 005cbd2b: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005cbd32: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005cbd39: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cbd3f: mov eax, edi */ r_eax = r_edi;
    /* 005cbd41: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cbd44: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005cbd47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd48: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd4d: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd50: push 0x92bdd4 */ { u32 v = 0x92bdd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd55: call 0x6eb52c */ r_esp -= 4; W32(r_esp, 0x5cbd5au); f_006eb52c();
    /* 005cbd5a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005cbd61:; BB(0x005cbd61);
    /* 005cbd61: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cbd64: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cbd67: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cbd6a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cbd6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cbd70: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cbd77: mov esp, ebp */ r_esp = r_ebp;
    /* 005cbd79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cbd7a: ret 0xc */ FN_RET(0x005cbc14); r_esp += 16; return;
}

void f_005cbd80(void) /* sub_5CBD80 */
{
    FN_ENTER(0x005cbd80);
    /* 005cbd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd81: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005cbd83: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 005cbd86: add eax, 0x139d */ {  u32 a = r_eax; u32 b = 0x139du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cbd8b: mov dword ptr [ebp + 0x68], eax */ W32((u32)(r_ebp+0x68u), r_eax);
    /* 005cbd8e: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 005cbd91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbd93: je 0x5cbe57 */ if (fZ) goto L_005cbe57;
L_005cbd99:; BB(0x005cbd99);
    /* 005cbd99: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005cbd9c: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 005cbd9f: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 005cbda2: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005cbda5: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 005cbda8: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005cbdab: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
L_005cbdae:; BB(0x005cbdae);
    /* 005cbdae: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 005cbdb1: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 005cbdb4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005cbdb6: fdiv dword ptr [0x92bdc8] */ ST(0) = ST(0) / R_F32((u32)(0x92bdc8u));
    /* 005cbdbc: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005cbdbe: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005cbdc1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005cbdc3: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 005cbdc6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbdc8: je 0x5cbddb */ if (fZ) goto L_005cbddb;
L_005cbdca:; BB(0x005cbdca);
    /* 005cbdca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005cbdcc: lea eax, [ebp + 0x2c] */ r_eax = (u32)(r_ebp+0x2cu);
    /* 005cbdcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbdd0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5cbdd5u); f_00508db8();
    /* 005cbdd5: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 005cbdd8: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
L_005cbddb:; BB(0x005cbddb);
    /* 005cbddb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005cbddd: fdiv dword ptr [0x92bdcc] */ ST(0) = ST(0) / R_F32((u32)(0x92bdccu));
    /* 005cbde3: fld dword ptr [0x92bdd0] */ FPUSH(R_F32((u32)(0x92bdd0u)));
    /* 005cbde9: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 005cbdeb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005cbded: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 005cbdf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 005cbdf2: je 0x5cbe16 */ if (fZ) goto L_005cbe16;
L_005cbdf4:; BB(0x005cbdf4);
    /* 005cbdf4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005cbdf6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005cbdf8: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cbdfb: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cbdfe: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 005cbe02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe03: call 0x794984 */ r_esp -= 4; W32(r_esp, 0x5cbe08u); f_00794984();
    /* 005cbe08: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005cbe0b: fld dword ptr [0x92bdd0] */ FPUSH(R_F32((u32)(0x92bdd0u)));
    /* 005cbe11: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 005cbe14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_005cbe16:; BB(0x005cbe16);
    /* 005cbe16: fld dword ptr [ebp + 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0x5cu)));
    /* 005cbe19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005cbe1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cbe1d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005cbe1e: jb 0x5cbe2a */ if (fC) goto L_005cbe2a;
L_005cbe20:; BB(0x005cbe20);
    /* 005cbe20: fld dword ptr [ebp + 0x64] */ FPUSH(R_F32((u32)(r_ebp+0x64u)));
    /* 005cbe23: fchs  */ ST(0) = -ST(0);
    /* 005cbe25: fst dword ptr [ebp + 0x64] */ W_F32((u32)(r_ebp+0x64u), ST(0));
    /* 005cbe28: jmp 0x5cbe2d */ goto L_005cbe2d;
L_005cbe2a:; BB(0x005cbe2a);
    /* 005cbe2a: fld dword ptr [ebp + 0x64] */ FPUSH(R_F32((u32)(r_ebp+0x64u)));
L_005cbe2d:; BB(0x005cbe2d);
    /* 005cbe2d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005cbe2f: fcom dword ptr [0x92bdc8] */ fx_compare(ST(0), R_F32((u32)(0x92bdc8u))); 
    /* 005cbe35: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cbe37: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005cbe39: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005cbe3b: fstp dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0)); FPOP();
    /* 005cbe3e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005cbe3f: je 0x5cbe48 */ if (fZ) goto L_005cbe48;
L_005cbe41:; BB(0x005cbe41);
    /* 005cbe41: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005cbe43: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 005cbe46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cbe47: ret  */ FN_RET(0x005cbd80); r_esp += 4; return;
L_005cbe48:; BB(0x005cbe48);
    /* 005cbe48: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005cbe4c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cbe51: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005cbe55: jmp 0x5cbe41 */ goto L_005cbe41;
L_005cbe57:; BB(0x005cbe57);
    /* 005cbe57: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 005cbe5a: jmp 0x5cbdae */ goto L_005cbdae;
}

void f_005cbe60(void) /* sub_5CBE60 */
{
    FN_ENTER(0x005cbe60);
    /* 005cbe60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe61: mov esi, ecx */ r_esi = r_ecx;
    /* 005cbe63: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5cbe68u); f_0082d7b0();
    /* 005cbe68: lea ecx, [esi + 0x2c] */ r_ecx = (u32)(r_esi+0x2cu);
    /* 005cbe6b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5cbe70u); f_0082d838();
    /* 005cbe70: mov edx, dword ptr [esi + 0x68] */ r_edx = R32((u32)(r_esi+0x68u));
    /* 005cbe73: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cbe75: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5cbe7au); f_0082d8bc();
    /* 005cbe7a: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 005cbe7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe7e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cbe80: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe86: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5cbe8bu); f_0082fa0c();
    /* 005cbe8b: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005cbe90: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 005cbe96: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005cbe9b: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 005cbea1: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cbea4: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005cbea9: mov eax, dword ptr [0xaf0374] */ r_eax = R32((u32)(0xaf0374u));
    /* 005cbeae: mov dword ptr [0xaab50c], eax */ W32((u32)(0xaab50cu), r_eax);
    /* 005cbeb3: mov eax, dword ptr [0xaf0378] */ r_eax = R32((u32)(0xaf0378u));
    /* 005cbeb8: mov dword ptr [0xaab510], eax */ W32((u32)(0xaab510u), r_eax);
    /* 005cbebd: mov eax, dword ptr [0xaf037c] */ r_eax = R32((u32)(0xaf037cu));
    /* 005cbec2: mov dword ptr [0xaab514], eax */ W32((u32)(0xaab514u), r_eax);
    /* 005cbec7: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005cbeca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbecb: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5cbed0u); f_0082d710();
    /* 005cbed0: push dword ptr [esi + 0x78] */ { u32 v = R32((u32)(r_esi+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cbed3: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5cbed8u); f_0081a9b8();
    /* 005cbed8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbedb: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cbede: mov ecx, dword ptr [esi + 0x70] */ r_ecx = R32((u32)(r_esi+0x70u));
    /* 005cbee1: mov edx, dword ptr [esi + 0x74] */ r_edx = R32((u32)(r_esi+0x74u));
    /* 005cbee4: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x5cbee9u); f_0083bd00();
    /* 005cbee9: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 005cbeee: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 005cbef4: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 005cbefa: mov esi, dword ptr [0xaab514] */ r_esi = R32((u32)(0xaab514u));
    /* 005cbf00: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 005cbf05: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005cbf0a: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 005cbf10: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 005cbf16: mov dword ptr [0xaf037c], esi */ W32((u32)(0xaf037cu), r_esi);
    /* 005cbf1c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005cbf21: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5cbf26u); f_0082da80();
    /* 005cbf26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cbf27: ret  */ FN_RET(0x005cbe60); r_esp += 4; return;
}

void f_005cbf28(void) /* sub_5CBF28 */
{
    FN_ENTER(0x005cbf28);
    /* 005cbf28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cbf2b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cbf2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cbf31: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cbf36u); f_008193cc();
    /* 005cbf36: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 005cbf3b: mov dword ptr [ebx], 0xb0c528 */ W32((u32)(r_ebx), 0xb0c528u);
    /* 005cbf41: mov word ptr [ebx + 0x20], dx */ W16((u32)(r_ebx+0x20u), (u16)r_edx);
    /* 005cbf45: mov eax, ebx */ r_eax = r_ebx;
    /* 005cbf47: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 005cbf4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cbf4f: ret 8 */ FN_RET(0x005cbf28); r_esp += 12; return;
}

void f_005cbf54(void) /* sub_5CBF54 */
{
    FN_ENTER(0x005cbf54);
    /* 005cbf54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf56: mov edi, ecx */ r_edi = r_ecx;
    /* 005cbf58: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005cbf5b: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cbf5e: jl 0x5cbf86 */ if ((fS!=fO)) goto L_005cbf86;
L_005cbf60:; BB(0x005cbf60);
    /* 005cbf60: movzx eax, word ptr [edi + 0x20] */ r_eax = (u32)R16((u32)(r_edi+0x20u));
    /* 005cbf64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf65: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5cbf6au); f_0068d5a8();
    /* 005cbf6a: mov esi, eax */ r_esi = r_eax;
    /* 005cbf6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbf6f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbf71: je 0x5cbf84 */ if (fZ) goto L_005cbf84;
L_005cbf73:; BB(0x005cbf73);
    /* 005cbf73: push dword ptr [esi + 0x3ec] */ { u32 v = R32((u32)(r_esi+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cbf79: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5cbf7eu); f_00807d8c();
    /* 005cbf7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cbf7f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbf82: je 0x5cbf8f */ if (fZ) goto L_005cbf8f;
L_005cbf84:; BB(0x005cbf84);
    /* 005cbf84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005cbf86:; BB(0x005cbf86);
    /* 005cbf86: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cbf89: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 005cbf8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cbf8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cbf8e: ret  */ FN_RET(0x005cbf54); r_esp += 4; return;
L_005cbf8f:; BB(0x005cbf8f);
    /* 005cbf8f: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 005cbf95: cmp edx, dword ptr [esi + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbf9b: jne 0x5cbf84 */ if (!fZ) goto L_005cbf84;
L_005cbf9d:; BB(0x005cbf9d);
    /* 005cbf9d: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 005cbfa1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbfa2: call 0x5e27a8 */ r_esp -= 4; W32(r_esp, 0x5cbfa7u); f_005e27a8();
    /* 005cbfa7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cbfa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbfaa: je 0x5cbf84 */ if (fZ) goto L_005cbf84;
L_005cbfac:; BB(0x005cbfac);
    /* 005cbfac: push 0x1be */ { u32 v = 0x1beu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbfb1: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cbfb7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cbfb8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cbfbdu); f_0050b510();
    /* 005cbfbd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbfc0: jmp 0x5cbf84 */ goto L_005cbf84;
}

void f_005cbfc4(void) /* sub_5CBFC4 */
{
    FN_ENTER(0x005cbfc4);
    /* 005cbfc4: mov dword ptr [0xa8d8fc], 0x3f800000 */ W32((u32)(0xa8d8fcu), 0x3f800000u);
    /* 005cbfce: mov dword ptr [0xa8d900], 0x41000000 */ W32((u32)(0xa8d900u), 0x41000000u);
    /* 005cbfd8: mov dword ptr [0xa8d904], 0x3fc00000 */ W32((u32)(0xa8d904u), 0x3fc00000u);
    /* 005cbfe2: ret  */ FN_RET(0x005cbfc4); r_esp += 4; return;
}

void f_005cbfe4(void) /* sub_5CBFE4 */
{
    FN_ENTER(0x005cbfe4);
    /* 005cbfe4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cbfe5: mov ebp, esp */ r_ebp = r_esp;
    /* 005cbfe7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbfe9: push 0x8d9bc0 */ { u32 v = 0x8d9bc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbfee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cbff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbff5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cbffc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cbfff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cc002: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cc005: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cc008: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cc00b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cc00e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005cc011: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc018: mov eax, ecx */ r_eax = r_ecx;
    /* 005cc01a: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005cc020: mov dword ptr [eax], 0xb0c588 */ W32((u32)(r_eax), 0xb0c588u);
    /* 005cc026: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005cc028: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc02a: je 0x5cc047 */ if (fZ) goto L_005cc047;
L_005cc02c:; BB(0x005cc02c);
    /* 005cc02c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc02f: push dword ptr [eax + ebx*4 + 0x58] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cc033: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5cc038u); f_005cdcc0();
    /* 005cc038: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc039: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc03c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005cc03f: cmp ebx, dword ptr [eax + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc045: jne 0x5cc02c */ if (!fZ) goto L_005cc02c;
L_005cc047:; BB(0x005cc047);
    /* 005cc047: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cc04e: mov ecx, eax */ r_ecx = r_eax;
    /* 005cc050: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x5cc055u); f_005e3e40();
    /* 005cc055: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc058: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc05a: jne 0x5cc075 */ if (!fZ) goto L_005cc075;
L_005cc05c:; BB(0x005cc05c);
    /* 005cc05c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc05f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cc062: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc065: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc068: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cc06f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc071: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc072: ret 4 */ FN_RET(0x005cbfe4); r_esp += 8; return;
L_005cc075:; BB(0x005cc075);
    /* 005cc075: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc079: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cc07eu); f_005c2f74();
    /* 005cc07e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc07f: jmp 0x5cc05c */ goto L_005cc05c;
}

