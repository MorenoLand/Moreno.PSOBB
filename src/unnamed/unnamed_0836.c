#include "protos.h"

void f_0083603c(void) /* sub_83603C */
{
    FN_ENTER(0x0083603c);
    /* 0083603c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083603d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083603e: call 0x839bf4 */ r_esp -= 4; W32(r_esp, 0x836043u); f_00839bf4();
    /* 00836043: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00836045: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00836047: mov ebx, eax */ r_ebx = r_eax;
    /* 00836049: mov esi, edx */ r_esi = r_edx;
L_0083604b:; BB(0x0083604b);
    /* 0083604b: mov ecx, dword ptr [ebx + 0xacc1c0] */ r_ecx = R32((u32)(r_ebx+0xacc1c0u));
    /* 00836051: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836053: je 0x83606a */ if (fZ) goto L_0083606a;
L_00836055:; BB(0x00836055);
    /* 00836055: lea ecx, [esi + 0xacc240] */ r_ecx = (u32)(r_esi+0xacc240u);
    /* 0083605b: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x836060u); f_00830cd8();
    /* 00836060: mov dword ptr [ebx + 0xacc1c0], 0 */ W32((u32)(r_ebx+0xacc1c0u), 0x0u);
L_0083606a:; BB(0x0083606a);
    /* 0083606a: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083606d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00836070: cmp ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00836076: jb 0x83604b */ if (fC) goto L_0083604b;
L_00836078:; BB(0x00836078);
    /* 00836078: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00836079: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083607a: ret  */ FN_RET(0x0083603c); r_esp += 4; return;
}

void f_0083607c(void) /* sub_83607C */
{
    FN_ENTER(0x0083607c);
    /* 0083607c: mov eax, dword ptr [0x98a5a0] */ r_eax = R32((u32)(0x98a5a0u));
    /* 00836081: mov edx, dword ptr [0x98a5a4] */ r_edx = R32((u32)(0x98a5a4u));
    /* 00836087: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00836089: mov eax, dword ptr [0x98a5a8] */ r_eax = R32((u32)(0x98a5a8u));
    /* 0083608e: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00836091: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00836094: mov eax, dword ptr [0x98a5ac] */ r_eax = R32((u32)(0x98a5acu));
    /* 00836099: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0083609c: mov eax, dword ptr [0x98a5b0] */ r_eax = R32((u32)(0x98a5b0u));
    /* 008360a1: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 008360a4: mov eax, dword ptr [0x98a5b4] */ r_eax = R32((u32)(0x98a5b4u));
    /* 008360a9: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 008360ac: mov eax, dword ptr [0x98a5b8] */ r_eax = R32((u32)(0x98a5b8u));
    /* 008360b1: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008360b4: mov eax, dword ptr [0x98a5bc] */ r_eax = R32((u32)(0x98a5bcu));
    /* 008360b9: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 008360bc: mov eax, dword ptr [0x98a5c0] */ r_eax = R32((u32)(0x98a5c0u));
    /* 008360c1: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 008360c4: mov eax, dword ptr [0x98a5c4] */ r_eax = R32((u32)(0x98a5c4u));
    /* 008360c9: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 008360cc: mov eax, dword ptr [0x98a5c8] */ r_eax = R32((u32)(0x98a5c8u));
    /* 008360d1: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 008360d4: mov eax, dword ptr [0x98a5cc] */ r_eax = R32((u32)(0x98a5ccu));
    /* 008360d9: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 008360dc: mov eax, dword ptr [0x98a5d0] */ r_eax = R32((u32)(0x98a5d0u));
    /* 008360e1: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 008360e4: mov eax, dword ptr [0x98a5d4] */ r_eax = R32((u32)(0x98a5d4u));
    /* 008360e9: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 008360ec: mov eax, dword ptr [0x98a5d8] */ r_eax = R32((u32)(0x98a5d8u));
    /* 008360f1: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 008360f4: mov eax, dword ptr [0x98a5dc] */ r_eax = R32((u32)(0x98a5dcu));
    /* 008360f9: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 008360fc: ret  */ FN_RET(0x0083607c); r_esp += 4; return;
}

void f_00836100(void) /* sub_836100 */
{
    FN_ENTER(0x00836100);
    /* 00836100: mov eax, dword ptr [0x98a5a0] */ r_eax = R32((u32)(0x98a5a0u));
    /* 00836105: mov ecx, dword ptr [0x98a5a4] */ r_ecx = R32((u32)(0x98a5a4u));
    /* 0083610b: mov edx, dword ptr [0x98a5a8] */ r_edx = R32((u32)(0x98a5a8u));
    /* 00836111: mov dword ptr [0xacca40], eax */ W32((u32)(0xacca40u), r_eax);
    /* 00836116: mov eax, dword ptr [0x98a5ac] */ r_eax = R32((u32)(0x98a5acu));
    /* 0083611b: mov dword ptr [0xacca44], ecx */ W32((u32)(0xacca44u), r_ecx);
    /* 00836121: mov dword ptr [0xacca48], edx */ W32((u32)(0xacca48u), r_edx);
    /* 00836127: mov dword ptr [0xacca4c], eax */ W32((u32)(0xacca4cu), r_eax);
    /* 0083612c: mov eax, dword ptr [0x98a5b0] */ r_eax = R32((u32)(0x98a5b0u));
    /* 00836131: mov ecx, 0xacca40 */ r_ecx = 0xacca40u;
    /* 00836136: mov edx, 0xacc040 */ r_edx = 0xacc040u;
    /* 0083613b: mov dword ptr [0xacca50], eax */ W32((u32)(0xacca50u), r_eax);
    /* 00836140: mov eax, dword ptr [0x98a5b4] */ r_eax = R32((u32)(0x98a5b4u));
    /* 00836145: mov dword ptr [0xacca54], eax */ W32((u32)(0xacca54u), r_eax);
    /* 0083614a: mov eax, dword ptr [0x98a5b8] */ r_eax = R32((u32)(0x98a5b8u));
    /* 0083614f: mov dword ptr [0xacca58], eax */ W32((u32)(0xacca58u), r_eax);
    /* 00836154: mov eax, dword ptr [0x98a5bc] */ r_eax = R32((u32)(0x98a5bcu));
    /* 00836159: mov dword ptr [0xacca5c], eax */ W32((u32)(0xacca5cu), r_eax);
    /* 0083615e: mov eax, dword ptr [0x98a5c0] */ r_eax = R32((u32)(0x98a5c0u));
    /* 00836163: mov dword ptr [0xacca60], eax */ W32((u32)(0xacca60u), r_eax);
    /* 00836168: mov eax, dword ptr [0x98a5c4] */ r_eax = R32((u32)(0x98a5c4u));
    /* 0083616d: mov dword ptr [0xacca64], eax */ W32((u32)(0xacca64u), r_eax);
    /* 00836172: mov eax, dword ptr [0x98a5c8] */ r_eax = R32((u32)(0x98a5c8u));
    /* 00836177: mov dword ptr [0xacca68], eax */ W32((u32)(0xacca68u), r_eax);
    /* 0083617c: mov eax, dword ptr [0x98a5cc] */ r_eax = R32((u32)(0x98a5ccu));
    /* 00836181: mov dword ptr [0xacca6c], eax */ W32((u32)(0xacca6cu), r_eax);
    /* 00836186: mov eax, dword ptr [0x98a5d0] */ r_eax = R32((u32)(0x98a5d0u));
    /* 0083618b: mov dword ptr [0xacca70], eax */ W32((u32)(0xacca70u), r_eax);
    /* 00836190: mov eax, dword ptr [0x98a5d4] */ r_eax = R32((u32)(0x98a5d4u));
    /* 00836195: mov dword ptr [0xacca74], eax */ W32((u32)(0xacca74u), r_eax);
    /* 0083619a: mov eax, dword ptr [0x98a5d8] */ r_eax = R32((u32)(0x98a5d8u));
    /* 0083619f: mov dword ptr [0xacca78], eax */ W32((u32)(0xacca78u), r_eax);
    /* 008361a4: mov eax, dword ptr [0x98a5dc] */ r_eax = R32((u32)(0x98a5dcu));
    /* 008361a9: mov dword ptr [0xacca7c], eax */ W32((u32)(0xacca7cu), r_eax);
    /* 008361ae: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x8361b3u); f_00831308();
    /* 008361b3: ret  */ FN_RET(0x00836100); r_esp += 4; return;
}

void f_008361b4(void) /* sub_8361B4 */
{
    FN_ENTER(0x008361b4);
    /* 008361b4: call 0x839c18 */ r_esp -= 4; W32(r_esp, 0x8361b9u); f_00839c18();
    /* 008361b9: ret  */ FN_RET(0x008361b4); r_esp += 4; return;
}

void f_008361bc(void) /* sub_8361BC */
{
    FN_ENTER(0x008361bc);
    /* 008361bc: call 0x839c3c */ r_esp -= 4; W32(r_esp, 0x8361c1u); f_00839c3c();
    /* 008361c1: ret  */ FN_RET(0x008361bc); r_esp += 4; return;
}

void f_008361c4(void) /* sub_8361C4 */
{
    FN_ENTER(0x008361c4);
    /* 008361c4: mov dword ptr [0xacca80], ecx */ W32((u32)(0xacca80u), r_ecx);
    /* 008361ca: ret  */ FN_RET(0x008361c4); r_esp += 4; return;
}

void f_008361cc(void) /* sub_8361CC */
{
    FN_ENTER(0x008361cc);
    /* 008361cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008361cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008361ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008361d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008361d2: mov ebx, eax */ r_ebx = r_eax;
    /* 008361d4: mov esi, edx */ r_esi = r_edx;
L_008361d6:; BB(0x008361d6);
    /* 008361d6: lea ecx, [esi + 0xacc240] */ r_ecx = (u32)(r_esi+0xacc240u);
    /* 008361dc: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x8361e1u); f_00830cd8();
    /* 008361e1: mov dword ptr [ebx + 0xacc1c0], 0 */ W32((u32)(r_ebx+0xacc1c0u), 0x0u);
    /* 008361eb: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008361ee: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008361f1: cmp ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008361f7: jb 0x8361d6 */ if (fC) goto L_008361d6;
L_008361f9:; BB(0x008361f9);
    /* 008361f9: mov dword ptr [0xacca80], 0 */ W32((u32)(0xacca80u), 0x0u);
    /* 00836203: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00836204: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00836205: ret  */ FN_RET(0x008361cc); r_esp += 4; return;
}

void f_00836208(void) /* sub_836208 */
{
    FN_ENTER(0x00836208);
    /* 00836208: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083620c: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00836210: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00836212: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 00836214: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00836216: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00836219: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 0083621c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083621e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00836220: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00836223: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 00836226: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00836228: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083622a: fcom dword ptr [0x98a604] */ fx_compare(ST(0), R_F32((u32)(0x98a604u))); 
    /* 00836230: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00836232: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00836233: jae 0x83623e */ if (!fC) goto L_0083623e;
L_00836235:; BB(0x00836235);
    /* 00836235: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00836237: fld dword ptr [0x98a600] */ FPUSH(R_F32((u32)(0x98a600u)));
    /* 0083623d: ret  */ FN_RET(0x00836208); r_esp += 4; return;
L_0083623e:; BB(0x0083623e);
    /* 0083623e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083623f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00836242: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x836247u); f_0082dc9c();
    /* 00836247: ret  */ FN_RET(0x00836208); r_esp += 4; return;
}

void f_00836248(void) /* sub_836248 */
{
    FN_ENTER(0x00836248);
    /* 00836248: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00836249: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0083624d: push dword ptr [edx*4 + 0xa219f8] */ { u32 v = R32((u32)(r_edx*4+0xa219f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836254: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836259: mov dword ptr [0xaccaa8], edx */ W32((u32)(0xaccaa8u), r_edx);
    /* 0083625f: mov dword ptr [0xaccaa4], edi */ W32((u32)(0xaccaa4u), r_edi);
    /* 00836265: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00836267: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00836269: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083626a: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x836270u); call_ind(t); }
    /* 00836270: push dword ptr [edi*4 + 0xa219f8] */ { u32 v = R32((u32)(r_edi*4+0xa219f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836277: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083627c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083627e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00836280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836281: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x836287u); call_ind(t); }
    /* 00836287: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00836288: ret 8 */ FN_RET(0x00836248); r_esp += 12; return;
}

void f_0083628c(void) /* sub_83628C */
{
    FN_ENTER(0x0083628c);
    /* 0083628c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083628e: je 0x8362bb */ if (fZ) goto L_008362bb;
L_00836290:; BB(0x00836290);
    /* 00836290: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836295: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00836297: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00836299: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083629b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083629c: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8362a2u); call_ind(t); }
    /* 008362a2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008362a8: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008362aa: mov eax, 4 */ r_eax = 0x4u;
    /* 008362af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008362b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008362b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008362b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008362b4: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x8362bau); call_ind(t); }
    /* 008362ba: ret  */ FN_RET(0x0083628c); r_esp += 4; return;
L_008362bb:; BB(0x008362bb);
    /* 008362bb: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008362c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008362c2: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 008362c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008362c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008362c7: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8362cdu); call_ind(t); }
    /* 008362cd: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008362d2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008362d4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008362d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008362d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008362da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008362db: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x8362e1u); call_ind(t); }
    /* 008362e1: ret  */ FN_RET(0x0083628c); r_esp += 4; return;
}

void f_008362e4(void) /* sub_8362E4 */
{
    FN_ENTER(0x008362e4);
    /* 008362e4: mov dword ptr [0xaccaa0], 3 */ W32((u32)(0xaccaa0u), 0x3u);
    /* 008362ee: ret  */ FN_RET(0x008362e4); r_esp += 4; return;
}

void f_008362f0(void) /* sub_8362F0 */
{
    FN_ENTER(0x008362f0);
    /* 008362f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008362f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008362f3: mov eax, dword ptr [0xaccaa0] */ r_eax = R32((u32)(0xaccaa0u));
    /* 008362f8: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008362fa: je 0x8363ba */ if (fZ) goto L_008363ba;
L_00836300:; BB(0x00836300);
    /* 00836300: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836302: je 0x8363a8 */ if (fZ) goto L_008363a8;
L_00836308:; BB(0x00836308);
    /* 00836308: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083630b: jne 0x836363 */ if (!fZ) goto L_00836363;
L_0083630d:; BB(0x0083630d);
    /* 0083630d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083630f: jne 0x83633d */ if (!fZ) goto L_0083633d;
L_00836311:; BB(0x00836311);
    /* 00836311: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836316: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00836318: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0083631a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083631c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083631d: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x836323u); call_ind(t); }
    /* 00836323: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836328: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0083632a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0083632c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083632e: push dword ptr [0xacca80] */ { u32 v = R32((u32)(0xacca80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836335: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x83633bu); call_ind(t); }
    /* 0083633b: jmp 0x8363b4 */ goto L_008363b4;
L_0083633d:; BB(0x0083633d);
    /* 0083633d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836342: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00836344: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00836346: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836349: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83634fu); call_ind(t); }
    /* 0083634f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836354: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00836356: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00836358: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083635a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083635b: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x836361u); call_ind(t); }
    /* 00836361: jmp 0x8363b4 */ goto L_008363b4;
L_00836363:; BB(0x00836363);
    /* 00836363: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836366: jne 0x83639f */ if (!fZ) goto L_0083639f;
L_00836368:; BB(0x00836368);
    /* 00836368: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083636a: jne 0x836375 */ if (!fZ) goto L_00836375;
L_0083636c:; BB(0x0083636c);
    /* 0083636c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083636e: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x836373u); f_008363ec();
    /* 00836373: jmp 0x8363b4 */ goto L_008363b4;
L_00836375:; BB(0x00836375);
    /* 00836375: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083637a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083637c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0083637e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836381: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x836387u); call_ind(t); }
    /* 00836387: push dword ptr [0xacc100] */ { u32 v = R32((u32)(0xacc100u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083638d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836392: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836394: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00836396: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836397: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83639du); call_ind(t); }
    /* 0083639d: jmp 0x8363b4 */ goto L_008363b4;
L_0083639f:; BB(0x0083639f);
    /* 0083639f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008363a1: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x8363a6u); f_008363ec();
    /* 008363a6: jmp 0x8363b4 */ goto L_008363b4;
L_008363a8:; BB(0x008363a8);
    /* 008363a8: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008363ab: je 0x8363bc */ if (fZ) goto L_008363bc;
L_008363ad:; BB(0x008363ad);
    /* 008363ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008363af: call 0x8363ec */ r_esp -= 4; W32(r_esp, 0x8363b4u); f_008363ec();
L_008363b4:; BB(0x008363b4);
    /* 008363b4: mov dword ptr [0xaccaa0], ebx */ W32((u32)(0xaccaa0u), r_ebx);
L_008363ba:; BB(0x008363ba);
    /* 008363ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008363bb: ret  */ FN_RET(0x008362f0); r_esp += 4; return;
L_008363bc:; BB(0x008363bc);
    /* 008363bc: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008363c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008363c3: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 008363c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008363c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008363c8: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8363ceu); call_ind(t); }
    /* 008363ce: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008363d4: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008363d6: mov eax, 4 */ r_eax = 0x4u;
    /* 008363db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008363dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008363dd: push dword ptr [0xacca80] */ { u32 v = R32((u32)(0xacca80u)); r_esp -= 4; W32(r_esp, v); }
    /* 008363e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008363e4: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x8363eau); call_ind(t); }
    /* 008363ea: jmp 0x8363b4 */ goto L_008363b4;
}

void f_008363ec(void) /* sub_8363EC */
{
    FN_ENTER(0x008363ec);
    /* 008363ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008363ee: je 0x8364ac */ if (fZ) goto L_008364ac;
L_008363f4:; BB(0x008363f4);
    /* 008363f4: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008363f7: jne 0x836450 */ if (!fZ) goto L_00836450;
L_008363f9:; BB(0x008363f9);
    /* 008363f9: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008363fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00836400: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00836402: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836405: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83640bu); call_ind(t); }
    /* 0083640b: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00836411: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00836413: mov eax, 4 */ r_eax = 0x4u;
    /* 00836418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083641a: push dword ptr [0xacca80] */ { u32 v = R32((u32)(0xacca80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836420: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00836421: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x836427u); call_ind(t); }
    /* 00836427: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083642c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083642e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00836430: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836433: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x836439u); call_ind(t); }
    /* 00836439: push dword ptr [0xacc100] */ { u32 v = R32((u32)(0xacc100u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083643f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836444: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836446: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00836448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836449: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83644fu); call_ind(t); }
    /* 0083644f: ret  */ FN_RET(0x008363ec); r_esp += 4; return;
L_00836450:; BB(0x00836450);
    /* 00836450: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00836453: jne 0x8364fe */ if (!fZ) goto L_008364fe;
L_00836459:; BB(0x00836459);
    /* 00836459: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083645e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00836460: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00836462: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836465: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83646bu); call_ind(t); }
    /* 0083646b: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00836471: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00836473: mov eax, 4 */ r_eax = 0x4u;
    /* 00836478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836479: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083647a: push dword ptr [0xacca80] */ { u32 v = R32((u32)(0xacca80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836480: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00836481: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x836487u); call_ind(t); }
    /* 00836487: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083648c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083648e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00836490: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836493: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x836499u); call_ind(t); }
    /* 00836499: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083649e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008364a0: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008364a2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008364a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008364a5: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8364abu); call_ind(t); }
    /* 008364ab: ret  */ FN_RET(0x008363ec); r_esp += 4; return;
L_008364ac:; BB(0x008364ac);
    /* 008364ac: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008364b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008364b3: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 008364b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008364b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008364b8: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8364beu); call_ind(t); }
    /* 008364be: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008364c3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008364c5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008364c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008364c9: push dword ptr [0xacca80] */ { u32 v = R32((u32)(0xacca80u)); r_esp -= 4; W32(r_esp, v); }
    /* 008364cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008364d0: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x8364d6u); call_ind(t); }
    /* 008364d6: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008364db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008364dd: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 008364df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008364e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008364e2: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8364e8u); call_ind(t); }
    /* 008364e8: push dword ptr [0xacc100] */ { u32 v = R32((u32)(0xacc100u)); r_esp -= 4; W32(r_esp, v); }
    /* 008364ee: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008364f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008364f5: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008364f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008364f8: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8364feu); call_ind(t); }
L_008364fe:; BB(0x008364fe);
    /* 008364fe: ret  */ FN_RET(0x008363ec); r_esp += 4; return;
}

void f_00836500(void) /* sub_836500 */
{
    FN_ENTER(0x00836500);
    /* 00836500: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00836501: mov esi, ecx */ r_esi = r_ecx;
    /* 00836503: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00836505: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083650b: push dword ptr [eax*4 + 0xa219d8] */ { u32 v = R32((u32)(r_eax*4+0xa219d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836512: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00836514: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00836515: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00836517: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83651du); call_ind(t); }
    /* 0083651d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836522: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836525: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00836527: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836529: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083652a: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x836530u); call_ind(t); }
    /* 00836530: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836535: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836538: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0083653a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083653c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083653d: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x836543u); call_ind(t); }
    /* 00836543: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00836546: mov dword ptr [0xacc100], eax */ W32((u32)(0xacc100u), r_eax);
    /* 0083654b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083654c: ret  */ FN_RET(0x00836500); r_esp += 4; return;
}

void f_00836550(void) /* sub_836550 */
{
    FN_ENTER(0x00836550);
    /* 00836550: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836555: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00836557: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836559: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0083655b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083655d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083655e: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x836564u); call_ind(t); }
    /* 00836564: ret  */ FN_RET(0x00836550); r_esp += 4; return;
}

void f_00836568(void)
{
    FN_ENTER(0x00836568);
    /* 00836568: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083656c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083656e: mov dword ptr [ecx], 0xb47c20 */ W32((u32)(r_ecx), 0xb47c20u);
    /* 00836574: jne 0x836579 */ if (!fZ) goto L_00836579;
L_00836576:; BB(0x00836576);
    /* 00836576: ret 4 */ FN_RET(0x00836568); r_esp += 8; return;
L_00836579:; BB(0x00836579);
    /* 00836579: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083657a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x83657fu); f_00857e98();
    /* 0083657f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00836580: ret 4 */ FN_RET(0x00836568); r_esp += 8; return;
}

void f_00836584(void) /* sub_836584 */
{
    FN_ENTER(0x00836584);
    /* 00836584: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00836585: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00836587: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00836589: call 0x83685c */ r_esp -= 4; W32(r_esp, 0x83658eu); f_0083685c();
    /* 0083658e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00836592: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00836594: jne 0x83659a */ if (!fZ) goto L_0083659a;
L_00836596:; BB(0x00836596);
    /* 00836596: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00836597: ret 4 */ FN_RET(0x00836584); r_esp += 8; return;
L_0083659a:; BB(0x0083659a);
    /* 0083659a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083659b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8365a0u); f_00857e98();
    /* 008365a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008365a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008365a2: ret 4 */ FN_RET(0x00836584); r_esp += 8; return;
}

void f_008365a8(void) /* sub_8365A8 */
{
    FN_ENTER(0x008365a8);
    /* 008365a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008365a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008365ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008365ad: call 0x8365cc */ r_esp -= 4; W32(r_esp, 0x8365b2u); f_008365cc();
    /* 008365b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008365b6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008365b8: jne 0x8365be */ if (!fZ) goto L_008365be;
L_008365ba:; BB(0x008365ba);
    /* 008365ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008365bb: ret 4 */ FN_RET(0x008365a8); r_esp += 8; return;
L_008365be:; BB(0x008365be);
    /* 008365be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008365bf: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8365c4u); f_00857e98();
    /* 008365c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008365c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008365c6: ret 4 */ FN_RET(0x008365a8); r_esp += 8; return;
}

void f_008365cc(void) /* sub_8365CC */
{
    FN_ENTER(0x008365cc);
    /* 008365cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008365cd: mov ebp, esp */ r_ebp = r_esp;
    /* 008365cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008365d1: push 0x8f79b8 */ { u32 v = 0x8f79b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008365d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008365dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008365dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008365e4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008365e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 008365ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008365ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008365f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 008365f3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008365f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 008365fd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00836600: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00836603: mov dword ptr [edx], 0xb47c30 */ W32((u32)(r_edx), 0xb47c30u);
    /* 00836609: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083660b: je 0x836617 */ if (fZ) goto L_00836617;
L_0083660d:; BB(0x0083660d);
    /* 0083660d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083660e: call dword ptr [0x8f8134] */ { u32 t = R32((u32)(0x8f8134u)); r_esp -= 4; W32(r_esp, 0x836614u); call_ind(t); }
    /* 00836614: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_00836617:; BB(0x00836617);
    /* 00836617: mov dword ptr [edx], 0xb47c20 */ W32((u32)(r_edx), 0xb47c20u);
    /* 0083661d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00836620: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00836627: mov esp, ebp */ r_esp = r_ebp;
    /* 00836629: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083662a: ret  */ FN_RET(0x008365cc); r_esp += 4; return;
}

void f_0083662c(void) /* sub_83662C */
{
    FN_ENTER(0x0083662c);
    /* 0083662c: mov dword ptr [ecx], 0xb47c20 */ W32((u32)(r_ecx), 0xb47c20u);
    /* 00836632: ret  */ FN_RET(0x0083662c); r_esp += 4; return;
}

void f_00836634(void) /* sub_836634 */
{
    FN_ENTER(0x00836634);
    /* 00836634: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836635: mov ebp, esp */ r_ebp = r_esp;
    /* 00836637: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00836639: push 0x8f79d4 */ { u32 v = 0x8f79d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0083663e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00836644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836645: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0083664c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083664f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00836652: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00836655: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00836658: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0083665b: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0083665e: call 0x83669c */ r_esp -= 4; W32(r_esp, 0x836663u); f_0083669c();
    /* 00836663: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0083666a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083666d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836670: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 00836673: call 0x836840 */ r_esp -= 4; W32(r_esp, 0x836678u); f_00836840();
    /* 00836678: mov ebx, eax */ r_ebx = r_eax;
    /* 0083667a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00836681: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 00836684: call 0x83685c */ r_esp -= 4; W32(r_esp, 0x836689u); f_0083685c();
    /* 00836689: mov eax, ebx */ r_eax = r_ebx;
    /* 0083668b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0083668e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00836691: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00836698: mov esp, ebp */ r_esp = r_ebp;
    /* 0083669a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083669b: ret  */ FN_RET(0x00836634); r_esp += 4; return;
}

void f_0083669c(void) /* sub_83669C */
{
    FN_ENTER(0x0083669c);
    /* 0083669c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083669d: mov ebp, esp */ r_ebp = r_esp;
    /* 0083669f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008366a1: push 0x8f7a0a */ { u32 v = 0x8f7a0au; r_esp -= 4; W32(r_esp, v); }
    /* 008366a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008366ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008366ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008366b4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008366b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 008366ba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 008366bd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 008366c0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 008366c3: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 008366c6: mov dword ptr [ecx], 0xb47c20 */ W32((u32)(r_ecx), 0xb47c20u);
    /* 008366cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 008366d3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 008366d6: mov dword ptr [eax], 0xb47c28 */ W32((u32)(r_eax), 0xb47c28u);
    /* 008366dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008366de: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 008366e1: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 008366e4: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008366e6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8366ebu); f_008581c5();
    /* 008366eb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008366ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008366f1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008366f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008366f6: je 0x83672b */ if (fZ) goto L_0083672b;
L_008366f8:; BB(0x008366f8);
    /* 008366f8: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 008366ff: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00836706: mov ecx, eax */ r_ecx = r_eax;
    /* 00836708: call 0x836734 */ r_esp -= 4; W32(r_esp, 0x83670du); f_00836734();
    /* 0083670d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00836714:; BB(0x00836714);
    /* 00836714: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00836717: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0083671a: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0083671d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00836720: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00836727: mov esp, ebp */ r_esp = r_ebp;
    /* 00836729: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083672a: ret  */ FN_RET(0x0083669c); r_esp += 4; return;
L_0083672b:; BB(0x0083672b);
    /* 0083672b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083672d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00836730: jmp 0x836714 */ goto L_00836714;
}

void f_00836734(void) /* sub_836734 */
{
    FN_ENTER(0x00836734);
    /* 00836734: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836735: mov ebp, esp */ r_ebp = r_esp;
    /* 00836737: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00836739: push 0x8f7a24 */ { u32 v = 0x8f7a24u; r_esp -= 4; W32(r_esp, v); }
    /* 0083673e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00836744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836745: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0083674c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083674f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00836752: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00836755: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00836758: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0083675b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0083675e: mov dword ptr [ecx], 0xb47c20 */ W32((u32)(r_ecx), 0xb47c20u);
    /* 00836764: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0083676b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0083676e: mov dword ptr [ecx], 0xb47c30 */ W32((u32)(r_ecx), 0xb47c30u);
    /* 00836774: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00836776: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00836779: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0083677c: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0083677f: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00836782: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00836785: call 0x83679c */ r_esp -= 4; W32(r_esp, 0x83678au); f_0083679c();
    /* 0083678a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0083678d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00836790: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00836797: mov esp, ebp */ r_esp = r_ebp;
    /* 00836799: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083679a: ret  */ FN_RET(0x00836734); r_esp += 4; return;
}

void f_0083679c(void) /* sub_83679C */
{
    FN_ENTER(0x0083679c);
    /* 0083679c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083679d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008367a0: mov esi, ecx */ r_esi = r_ecx;
    /* 008367a2: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008367a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008367a7: je 0x8367ae */ if (fZ) goto L_008367ae;
L_008367a9:; BB(0x008367a9);
    /* 008367a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008367ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008367ad: ret  */ FN_RET(0x0083679c); r_esp += 4; return;
L_008367ae:; BB(0x008367ae);
    /* 008367ae: push 0x98a678 */ { u32 v = 0x98a678u; r_esp -= 4; W32(r_esp, v); }
    /* 008367b3: call dword ptr [0x8f8130] */ { u32 t = R32((u32)(0x8f8130u)); r_esp -= 4; W32(r_esp, 0x8367b9u); call_ind(t); }
    /* 008367b9: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008367bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008367be: je 0x8367a9 */ if (fZ) goto L_008367a9;
L_008367c0:; BB(0x008367c0);
    /* 008367c0: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008367c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008367c5: je 0x83682f */ if (fZ) goto L_0083682f;
L_008367c7:; BB(0x008367c7);
    /* 008367c7: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008367ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008367cc: je 0x83681c */ if (fZ) goto L_0083681c;
L_008367ce:; BB(0x008367ce);
    /* 008367ce: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008367d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008367d3: je 0x836809 */ if (fZ) goto L_00836809;
L_008367d5:; BB(0x008367d5);
    /* 008367d5: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008367d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008367da: je 0x8367f6 */ if (fZ) goto L_008367f6;
L_008367dc:; BB(0x008367dc);
    /* 008367dc: call dword ptr [0x8f8184] */ { u32 t = R32((u32)(0x8f8184u)); r_esp -= 4; W32(r_esp, 0x8367e2u); call_ind(t); }
    /* 008367e2: mov ecx, eax */ r_ecx = r_eax;
    /* 008367e4: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 008367e8: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 008367eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008367ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008367ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008367ee: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x8367f1u); call_ind(t); }
    /* 008367f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008367f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008367f5: ret  */ FN_RET(0x0083679c); r_esp += 4; return;
L_008367f6:; BB(0x008367f6);
    /* 008367f6: push 0x98a6c4 */ { u32 v = 0x98a6c4u; r_esp -= 4; W32(r_esp, v); }
    /* 008367fb: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008367fe: call dword ptr [0x8f812c] */ { u32 t = R32((u32)(0x8f812cu)); r_esp -= 4; W32(r_esp, 0x836804u); call_ind(t); }
    /* 00836804: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00836807: jmp 0x8367dc */ goto L_008367dc;
L_00836809:; BB(0x00836809);
    /* 00836809: push 0x98a6b0 */ { u32 v = 0x98a6b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083680e: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836811: call dword ptr [0x8f812c] */ { u32 t = R32((u32)(0x8f812cu)); r_esp -= 4; W32(r_esp, 0x836817u); call_ind(t); }
    /* 00836817: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0083681a: jmp 0x8367d5 */ goto L_008367d5;
L_0083681c:; BB(0x0083681c);
    /* 0083681c: push 0x98a69c */ { u32 v = 0x98a69cu; r_esp -= 4; W32(r_esp, v); }
    /* 00836821: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836824: call dword ptr [0x8f812c] */ { u32 t = R32((u32)(0x8f812cu)); r_esp -= 4; W32(r_esp, 0x83682au); call_ind(t); }
    /* 0083682a: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0083682d: jmp 0x8367ce */ goto L_008367ce;
L_0083682f:; BB(0x0083682f);
    /* 0083682f: push 0x98a688 */ { u32 v = 0x98a688u; r_esp -= 4; W32(r_esp, v); }
    /* 00836834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836835: call dword ptr [0x8f812c] */ { u32 t = R32((u32)(0x8f812cu)); r_esp -= 4; W32(r_esp, 0x83683bu); call_ind(t); }
    /* 0083683b: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0083683e: jmp 0x8367c7 */ goto L_008367c7;
}

void f_00836840(void) /* sub_836840 */
{
    FN_ENTER(0x00836840);
    /* 00836840: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00836843: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836845: je 0x836857 */ if (fZ) goto L_00836857;
L_00836847:; BB(0x00836847);
    /* 00836847: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083684b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083684f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00836851: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x836854u); call_ind(t); }
    /* 00836854: ret 8 */ FN_RET(0x00836840); r_esp += 12; return;
L_00836857:; BB(0x00836857);
    /* 00836857: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00836859: ret 8 */ FN_RET(0x00836840); r_esp += 12; return;
}

void f_0083685c(void) /* sub_83685C */
{
    FN_ENTER(0x0083685c);
    /* 0083685c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083685d: mov ebp, esp */ r_ebp = r_esp;
    /* 0083685f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00836861: push 0x8f7a40 */ { u32 v = 0x8f7a40u; r_esp -= 4; W32(r_esp, v); }
    /* 00836866: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0083686c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083686d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00836874: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00836877: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0083687a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0083687d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00836880: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00836883: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00836886: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0083688d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00836890: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00836893: mov dword ptr [eax], 0xb47c28 */ W32((u32)(r_eax), 0xb47c28u);
    /* 00836899: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083689b: je 0x8368a6 */ if (fZ) goto L_008368a6;
L_0083689d:; BB(0x0083689d);
    /* 0083689d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083689f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008368a1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8368a3u); call_ind(t); }
    /* 008368a3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_008368a6:; BB(0x008368a6);
    /* 008368a6: mov dword ptr [eax], 0xb47c20 */ W32((u32)(r_eax), 0xb47c20u);
    /* 008368ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008368af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008368b6: mov esp, ebp */ r_esp = r_ebp;
    /* 008368b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008368b9: ret  */ FN_RET(0x0083685c); r_esp += 4; return;
}

void f_008368bc(void) /* sub_8368BC */
{
    FN_ENTER(0x008368bc);
    /* 008368bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008368bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008368be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008368bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008368c0: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008368c6: mov edi, ecx */ r_edi = r_ecx;
    /* 008368c8: mov esi, dword ptr [esp + 0xdc] */ r_esi = R32((u32)(r_esp+0xdcu));
    /* 008368cf: mov ebp, dword ptr [esp + 0xe0] */ r_ebp = R32((u32)(r_esp+0xe0u));
    /* 008368d6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008368d8: je 0x836bb1 */ if (fZ) goto L_00836bb1;
L_008368de:; BB(0x008368de);
    /* 008368de: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008368e0: je 0x836bb1 */ if (fZ) goto L_00836bb1;
L_008368e6:; BB(0x008368e6);
    /* 008368e6: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 008368e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008368eb: jle 0x836bb1 */ if ((fZ||fS!=fO)) goto L_00836bb1;
L_008368f1:; BB(0x008368f1);
    /* 008368f1: mov eax, 0x98a650 */ r_eax = 0x98a650u;
    /* 008368f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008368f8: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 008368fb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 008368fe: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00836901: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00836905: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00836909: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0083690c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00836910: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00836913: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00836917: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0083691a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0083691e: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00836921: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00836925: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00836928: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0083692c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0083692f: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 00836932: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00836936: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0083693a: mov dword ptr [esp + 0x2c], 3 */ W32((u32)(r_esp+0x2cu), 0x3u);
    /* 00836942: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00836947: mov edx, 2 */ r_edx = 0x2u;
    /* 0083694c: mov eax, 0x98a628 */ r_eax = 0x98a628u;
    /* 00836951: mov dword ptr [esp + 0x30], 6 */ W32((u32)(r_esp+0x30u), 0x6u);
    /* 00836959: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0083695d: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 00836961: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00836965: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 00836969: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0083696d: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 00836971: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836973: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00836977: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0083697a: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0083697e: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00836981: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00836985: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00836988: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0083698c: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0083698f: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00836993: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00836996: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0083699a: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0083699d: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 008369a1: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 008369a4: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 008369a8: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 008369ab: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 008369ae: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008369b2: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008369b6: mov ebx, dword ptr [0x98a620] */ r_ebx = R32((u32)(0x98a620u));
    /* 008369bc: mov edx, dword ptr [0x98a618] */ r_edx = R32((u32)(0x98a618u));
    /* 008369c2: mov dword ptr [esp + 0x8c], 1 */ W32((u32)(r_esp+0x8cu), 0x1u);
    /* 008369cd: mov dword ptr [esp + 0x70], ebx */ W32((u32)(r_esp+0x70u), r_ebx);
    /* 008369d1: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 008369d5: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 008369d9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008369db: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 008369df: mov edx, dword ptr [0x98a60c] */ r_edx = R32((u32)(0x98a60cu));
    /* 008369e5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008369e8: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 008369ec: mov eax, dword ptr [0x98a610] */ r_eax = R32((u32)(0x98a610u));
    /* 008369f1: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 008369f8: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 008369fc: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 00836a03: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 00836a0a: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 00836a11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00836a13: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 00836a1a: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 00836a21: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 00836a28: mov dword ptr [esp + 0xac], edx */ W32((u32)(r_esp+0xacu), r_edx);
    /* 00836a2f: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 00836a36: lea eax, [esp + 0x80] */ r_eax = (u32)(r_esp+0x80u);
    /* 00836a3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836a3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00836a3f: call 0x8c9b0e */ r_esp -= 4; W32(r_esp, 0x836a44u); f_008c9b0e();
    /* 00836a44: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 00836a4b: lea edx, [esp + 0xc4] */ r_edx = (u32)(r_esp+0xc4u);
    /* 00836a52: lea eax, [esp + 0xc0] */ r_eax = (u32)(r_esp+0xc0u);
    /* 00836a59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836a5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00836a5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00836a5c: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00836a61: call dword ptr [edi + 0x10] */ { u32 t = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, 0x836a64u); call_ind(t); }
    /* 00836a64: mov dword ptr [esp + 0x8c], 2 */ W32((u32)(r_esp+0x8cu), 0x2u);
    /* 00836a6f: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 00836a76: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00836a7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836a7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00836a7c: call 0x8c9b0e */ r_esp -= 4; W32(r_esp, 0x836a81u); f_008c9b0e();
    /* 00836a81: lea edx, [esp + 0xa8] */ r_edx = (u32)(r_esp+0xa8u);
    /* 00836a88: lea eax, [esp + 0x70] */ r_eax = (u32)(r_esp+0x70u);
    /* 00836a8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836a8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00836a8e: call 0x8c9b0e */ r_esp -= 4; W32(r_esp, 0x836a93u); f_008c9b0e();
L_00836a93:; BB(0x00836a93);
    /* 00836a93: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 00836a9a: lea edx, [esp + 0xc4] */ r_edx = (u32)(r_esp+0xc4u);
    /* 00836aa1: lea eax, [esp + 0xc0] */ r_eax = (u32)(r_esp+0xc0u);
    /* 00836aa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836aa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00836aaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00836aab: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00836ab0: call dword ptr [edi + 0x10] */ { u32 t = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, 0x836ab3u); call_ind(t); }
    /* 00836ab3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836ab5: je 0x836ae2 */ if (fZ) goto L_00836ae2;
L_00836ab7:; BB(0x00836ab7);
    /* 00836ab7: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 00836abe: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00836ac2: push dword ptr [esp + 0x78] */ { u32 v = R32((u32)(r_esp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836ac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836ac7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00836ac8: call 0x8c9b14 */ r_esp -= 4; W32(r_esp, 0x836acdu); f_008c9b14();
    /* 00836acd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836acf: jne 0x836ae2 */ if (!fZ) goto L_00836ae2;
L_00836ad1:; BB(0x00836ad1);
    /* 00836ad1: mov eax, dword ptr [esp + 0x9c] */ r_eax = R32((u32)(r_esp+0x9cu));
    /* 00836ad8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836adb: je 0x836b11 */ if (fZ) goto L_00836b11;
L_00836add:; BB(0x00836add);
    /* 00836add: cmp ebx, dword ptr [ebp] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00836ae0: jl 0x836a93 */ if ((fS!=fO)) goto L_00836a93;
L_00836ae2:; BB(0x00836ae2);
    /* 00836ae2: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 00836ae9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836aea: call 0x8c9b1a */ r_esp -= 4; W32(r_esp, 0x836aefu); f_008c9b1a();
    /* 00836aef: lea eax, [esp + 0xa8] */ r_eax = (u32)(r_esp+0xa8u);
    /* 00836af6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836af7: call 0x8c9b1a */ r_esp -= 4; W32(r_esp, 0x836afcu); f_008c9b1a();
    /* 00836afc: mov dword ptr [ebp], ebx */ W32((u32)(r_ebp), r_ebx);
    /* 00836aff: mov eax, 1 */ r_eax = 0x1u;
    /* 00836b04: add esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00836b0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00836b0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00836b0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00836b0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00836b0e: ret 8 */ FN_RET(0x008368bc); r_esp += 12; return;
L_00836b11:; BB(0x00836b11);
    /* 00836b11: lea eax, [esp + 0x70] */ r_eax = (u32)(r_esp+0x70u);
    /* 00836b15: push dword ptr [esp + 0x70] */ { u32 v = R32((u32)(r_esp+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00836b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836b1a: lea edx, [esp + 0xb0] */ r_edx = (u32)(r_esp+0xb0u);
    /* 00836b21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00836b22: call 0x8c9b14 */ r_esp -= 4; W32(r_esp, 0x836b27u); f_008c9b14();
    /* 00836b27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836b29: jne 0x836ae2 */ if (!fZ) goto L_00836ae2;
L_00836b2b:; BB(0x00836b2b);
    /* 00836b2b: mov edx, dword ptr [esp + 0xb4] */ r_edx = R32((u32)(r_esp+0xb4u));
    /* 00836b32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836b34: je 0x836add */ if (fZ) goto L_00836add;
L_00836b36:; BB(0x00836b36);
    /* 00836b36: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00836b39: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836b3c: je 0x836b88 */ if (fZ) goto L_00836b88;
L_00836b3e:; BB(0x00836b3e);
    /* 00836b3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836b40: jne 0x836b6e */ if (!fZ) goto L_00836b6e;
L_00836b42:; BB(0x00836b42);
    /* 00836b42: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00836b46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836b48: jne 0x836b6e */ if (!fZ) goto L_00836b6e;
L_00836b4a:; BB(0x00836b4a);
    /* 00836b4a: movzx eax, byte ptr [edx + 2] */ r_eax = (u32)R8((u32)(r_edx+0x2u));
    /* 00836b4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836b50: jne 0x836b6e */ if (!fZ) goto L_00836b6e;
L_00836b52:; BB(0x00836b52);
    /* 00836b52: movzx eax, byte ptr [edx + 3] */ r_eax = (u32)R8((u32)(r_edx+0x3u));
    /* 00836b56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836b58: jne 0x836b6e */ if (!fZ) goto L_00836b6e;
L_00836b5a:; BB(0x00836b5a);
    /* 00836b5a: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 00836b5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836b60: jne 0x836b6e */ if (!fZ) goto L_00836b6e;
L_00836b62:; BB(0x00836b62);
    /* 00836b62: movzx eax, byte ptr [edx + 5] */ r_eax = (u32)R8((u32)(r_edx+0x5u));
    /* 00836b66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836b68: je 0x836add */ if (fZ) goto L_00836add;
L_00836b6e:; BB(0x00836b6e);
    /* 00836b6e: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00836b70: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 00836b74: lea eax, [esi + 2] */ r_eax = (u32)(r_esi+0x2u);
    /* 00836b77: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00836b79: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00836b7d: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00836b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00836b83: jmp 0x836add */ goto L_00836add;
L_00836b88:; BB(0x00836b88);
    /* 00836b88: movzx ecx, byte ptr [edx + 1] */ r_ecx = (u32)R8((u32)(r_edx+0x1u));
    /* 00836b8c: cmp ecx, 0x45 */ {  u32 a = r_ecx; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836b8f: jne 0x836b3e */ if (!fZ) goto L_00836b3e;
L_00836b91:; BB(0x00836b91);
    /* 00836b91: movzx ecx, byte ptr [edx + 2] */ r_ecx = (u32)R8((u32)(r_edx+0x2u));
    /* 00836b95: cmp ecx, 0x53 */ {  u32 a = r_ecx; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836b98: jne 0x836b3e */ if (!fZ) goto L_00836b3e;
L_00836b9a:; BB(0x00836b9a);
    /* 00836b9a: movzx ecx, byte ptr [edx + 3] */ r_ecx = (u32)R8((u32)(r_edx+0x3u));
    /* 00836b9e: cmp ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836ba1: jne 0x836b3e */ if (!fZ) goto L_00836b3e;
L_00836ba3:; BB(0x00836ba3);
    /* 00836ba3: movzx ecx, byte ptr [edx + 4] */ r_ecx = (u32)R8((u32)(r_edx+0x4u));
    /* 00836ba7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836ba9: je 0x836add */ if (fZ) goto L_00836add;
L_00836baf:; BB(0x00836baf);
    /* 00836baf: jmp 0x836b3e */ goto L_00836b3e;
L_00836bb1:; BB(0x00836bb1);
    /* 00836bb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00836bb3: add esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00836bb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00836bba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00836bbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00836bbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00836bbd: ret 8 */ FN_RET(0x008368bc); r_esp += 12; return;
}

void f_00836bc0(void) /* sub_836BC0 */
{
    FN_ENTER(0x00836bc0);
    /* 00836bc0: mov dword ptr [0xa21a80], 0 */ W32((u32)(0xa21a80u), 0x0u);
    /* 00836bca: ret  */ FN_RET(0x00836bc0); r_esp += 4; return;
}

void f_00836bcc(void) /* sub_836BCC */
{
    FN_ENTER(0x00836bcc);
    /* 00836bcc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x836bd1u); f_0061cdb0();
    /* 00836bd1: call 0x8390ec */ r_esp -= 4; W32(r_esp, 0x836bd6u); f_008390ec();
    /* 00836bd6: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836bdc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836bde: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x836be4u); call_ind(t); }
    /* 00836be4: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836be9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836beb: je 0x836bfd */ if (fZ) goto L_00836bfd;
L_00836bed:; BB(0x00836bed);
    /* 00836bed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836bee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836bf0: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x836bf3u); call_ind(t); }
    /* 00836bf3: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
L_00836bfd:; BB(0x00836bfd);
    /* 00836bfd: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 00836c02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00836c04: je 0x836c16 */ if (fZ) goto L_00836c16;
L_00836c06:; BB(0x00836c06);
    /* 00836c06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836c07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836c09: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x836c0cu); call_ind(t); }
    /* 00836c0c: mov dword ptr [0xacd4a0], 0 */ W32((u32)(0xacd4a0u), 0x0u);
L_00836c16:; BB(0x00836c16);
    /* 00836c16: ret  */ FN_RET(0x00836bcc); r_esp += 4; return;
}

void f_00836c18(void) /* sub_836C18 */
{
    FN_ENTER(0x00836c18);
    /* 00836c18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00836c1a:; BB(0x00836c1a);
    /* 00836c1a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00836c1c: mov dword ptr [eax + 0xaccac0], edx */ W32((u32)(r_eax+0xaccac0u), r_edx);
    /* 00836c22: mov dword ptr [eax + 0xaccac4], edx */ W32((u32)(r_eax+0xaccac4u), r_edx);
    /* 00836c28: mov dword ptr [eax + 0xaccac8], edx */ W32((u32)(r_eax+0xaccac8u), r_edx);
    /* 00836c2e: mov dword ptr [eax + 0xaccacc], edx */ W32((u32)(r_eax+0xaccaccu), r_edx);
    /* 00836c34: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00836c37: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00836c3c: jl 0x836c1a */ if ((fS!=fO)) goto L_00836c1a;
L_00836c3e:; BB(0x00836c3e);
    /* 00836c3e: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00836c44: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x836c49u); f_00858882();
    /* 00836c49: mov dword ptr [0xacd52c], 0 */ W32((u32)(0xacd52cu), 0x0u);
    /* 00836c53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00836c54: ret  */ FN_RET(0x00836c18); r_esp += 4; return;
}

void f_00836c58(void) /* sub_836C58 */
{
    FN_ENTER(0x00836c58);
    /* 00836c58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836c59: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00836c5c: mov ebp, edx */ r_ebp = r_edx;
    /* 00836c5e: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00836c61: jle 0x836cfc */ if ((fZ||fS!=fO)) goto L_00836cfc;
L_00836c67:; BB(0x00836c67);
    /* 00836c67: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 00836c6d: mov eax, ebp */ r_eax = r_ebp;
    /* 00836c6f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836c71: je 0x836cd0 */ if (fZ) goto L_00836cd0;
L_00836c73:; BB(0x00836c73);
    /* 00836c73: fld dword ptr [0x98a874] */ FPUSH(R_F32((u32)(0x98a874u)));
    /* 00836c79: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00836c7c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00836c80: mov edi, 0x3f800000 */ r_edi = 0x3f800000u;
L_00836c85:; BB(0x00836c85);
    /* 00836c85: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00836c88: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00836c8a: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00836c8c: fmul dword ptr [0xacc0e8] */ ST(0) = ST(0) * R_F32((u32)(0xacc0e8u));
    /* 00836c92: fadd dword ptr [0xacc0f0] */ ST(0) = ST(0) + R_F32((u32)(0xacc0f0u));
    /* 00836c98: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00836c9a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00836c9d: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00836ca0: fmul dword ptr [0xacc0ec] */ ST(0) = ST(0) * R_F32((u32)(0xacc0ecu));
    /* 00836ca6: fadd dword ptr [0xacc0f4] */ ST(0) = ST(0) + R_F32((u32)(0xacc0f4u));
    /* 00836cac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00836cae: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00836cb1: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 00836cb4: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 00836cb7: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 00836cba: mov dword ptr [edx + 0x10], esi */ W32((u32)(r_edx+0x10u), r_esi);
    /* 00836cbd: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00836cc0: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00836cc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836cc5: jne 0x836c85 */ if (!fZ) goto L_00836c85;
L_00836cc7:; BB(0x00836cc7);
    /* 00836cc7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00836cc9: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00836ccc: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00836cd0:; BB(0x00836cd0);
    /* 00836cd0: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836cd5: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00836cd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836cd8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00836cda: call dword ptr [ecx + 0x130] */ { u32 t = R32((u32)(r_ecx+0x130u)); r_esp -= 4; W32(r_esp, 0x836ce0u); call_ind(t); }
    /* 00836ce0: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836ce5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00836ce7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00836ce9: add ebp, -2 */ {  u32 a = r_ebp; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00836cec: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00836cf2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836cf3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00836cf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836cf6: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x836cfcu); call_ind(t); }
L_00836cfc:; BB(0x00836cfc);
    /* 00836cfc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00836cff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00836d00: ret  */ FN_RET(0x00836c58); r_esp += 4; return;
}

void f_00836d04(void) /* sub_836D04 */
{
    FN_ENTER(0x00836d04);
    /* 00836d04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836d05: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00836d08: mov ebp, edx */ r_ebp = r_edx;
    /* 00836d0a: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00836d0d: jle 0x836dc1 */ if ((fZ||fS!=fO)) goto L_00836dc1;
L_00836d13:; BB(0x00836d13);
    /* 00836d13: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 00836d19: mov eax, ebp */ r_eax = r_ebp;
    /* 00836d1b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836d1d: je 0x836d88 */ if (fZ) goto L_00836d88;
L_00836d1f:; BB(0x00836d1f);
    /* 00836d1f: fld dword ptr [0x98a870] */ FPUSH(R_F32((u32)(0x98a870u)));
    /* 00836d25: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00836d28: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00836d2c: mov esi, 0x3f800000 */ r_esi = 0x3f800000u;
L_00836d31:; BB(0x00836d31);
    /* 00836d31: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00836d34: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00836d36: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00836d38: fmul dword ptr [0xacc0e8] */ ST(0) = ST(0) * R_F32((u32)(0xacc0e8u));
    /* 00836d3e: fadd dword ptr [0xacc0f0] */ ST(0) = ST(0) + R_F32((u32)(0xacc0f0u));
    /* 00836d44: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00836d46: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00836d49: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00836d4c: fmul dword ptr [0xacc0ec] */ ST(0) = ST(0) * R_F32((u32)(0xacc0ecu));
    /* 00836d52: fadd dword ptr [0xacc0f4] */ ST(0) = ST(0) + R_F32((u32)(0xacc0f4u));
    /* 00836d58: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00836d5a: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00836d5d: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 00836d60: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
    /* 00836d63: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 00836d66: mov dword ptr [edx + 0x14], edi */ W32((u32)(r_edx+0x14u), r_edi);
    /* 00836d69: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 00836d6c: mov dword ptr [edx + 0x18], edi */ W32((u32)(r_edx+0x18u), r_edi);
    /* 00836d6f: mov edi, dword ptr [ecx + 0x14] */ r_edi = R32((u32)(r_ecx+0x14u));
    /* 00836d72: mov dword ptr [edx + 0x10], edi */ W32((u32)(r_edx+0x10u), r_edi);
    /* 00836d75: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00836d78: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00836d7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836d7d: jne 0x836d31 */ if (!fZ) goto L_00836d31;
L_00836d7f:; BB(0x00836d7f);
    /* 00836d7f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00836d81: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00836d84: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00836d88:; BB(0x00836d88);
    /* 00836d88: mov ecx, 0x3000 */ r_ecx = 0x3000u;
    /* 00836d8d: call 0x839a60 */ r_esp -= 4; W32(r_esp, 0x836d92u); f_00839a60();
    /* 00836d92: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836d97: push 0x144 */ { u32 v = 0x144u; r_esp -= 4; W32(r_esp, v); }
    /* 00836d9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836d9d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00836d9f: call dword ptr [ecx + 0x130] */ { u32 t = R32((u32)(r_ecx+0x130u)); r_esp -= 4; W32(r_esp, 0x836da5u); call_ind(t); }
    /* 00836da5: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836daa: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00836dac: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00836dae: add ebp, -2 */ {  u32 a = r_ebp; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00836db1: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00836db7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836db8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00836dba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836dbb: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x836dc1u); call_ind(t); }
L_00836dc1:; BB(0x00836dc1);
    /* 00836dc1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00836dc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00836dc5: ret  */ FN_RET(0x00836d04); r_esp += 4; return;
}

void f_00836dc8(void) /* sub_836DC8 */
{
    FN_ENTER(0x00836dc8);
    /* 00836dc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00836dc9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836dca: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00836dcd: mov eax, ecx */ r_eax = r_ecx;
    /* 00836dcf: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 00836dd2: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00836dd5: jle 0x836e78 */ if ((fZ||fS!=fO)) goto L_00836e78;
L_00836ddb:; BB(0x00836ddb);
    /* 00836ddb: mov edi, dword ptr [0xacd52c] */ r_edi = R32((u32)(0xacd52cu));
    /* 00836de1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00836de3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00836de6: mov eax, ebp */ r_eax = r_ebp;
    /* 00836de8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836dea: je 0x836e4c */ if (fZ) goto L_00836e4c;
L_00836dec:; BB(0x00836dec);
    /* 00836dec: fld dword ptr [0x98a864] */ FPUSH(R_F32((u32)(0x98a864u)));
    /* 00836df2: fsub dword ptr [esp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x14u));
    /* 00836df6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00836df9: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00836dfd: mov esi, 0x3f800000 */ r_esi = 0x3f800000u;
L_00836e02:; BB(0x00836e02);
    /* 00836e02: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00836e04: fmul dword ptr [0xacc0e8] */ ST(0) = ST(0) * R_F32((u32)(0xacc0e8u));
    /* 00836e0a: fadd dword ptr [0xacc0f0] */ ST(0) = ST(0) + R_F32((u32)(0xacc0f0u));
    /* 00836e10: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00836e12: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00836e15: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00836e18: fmul dword ptr [0xacc0ec] */ ST(0) = ST(0) * R_F32((u32)(0xacc0ecu));
    /* 00836e1e: fadd dword ptr [0xacc0f4] */ ST(0) = ST(0) + R_F32((u32)(0xacc0f4u));
    /* 00836e24: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00836e26: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 00836e29: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00836e2b: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 00836e2e: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 00836e31: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00836e33: mov dword ptr [edi + 0x10], ebx */ W32((u32)(r_edi+0x10u), r_ebx);
    /* 00836e36: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00836e39: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00836e3c: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00836e3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836e41: jne 0x836e02 */ if (!fZ) goto L_00836e02;
L_00836e43:; BB(0x00836e43);
    /* 00836e43: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00836e45: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00836e48: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_00836e4c:; BB(0x00836e4c);
    /* 00836e4c: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836e51: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00836e53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836e54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836e56: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x836e5cu); call_ind(t); }
    /* 00836e5c: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836e61: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00836e63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836e65: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00836e68: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00836e6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836e6f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00836e71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836e72: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x836e78u); call_ind(t); }
L_00836e78:; BB(0x00836e78);
    /* 00836e78: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00836e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00836e7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00836e7d: ret 4 */ FN_RET(0x00836dc8); r_esp += 8; return;
}

void f_00836e80(void) /* sub_836E80 */
{
    FN_ENTER(0x00836e80);
    /* 00836e80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00836e81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836e82: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00836e83: mov edi, ecx */ r_edi = r_ecx;
    /* 00836e85: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x836e8au); f_00844ad0();
    /* 00836e8a: call 0x844b38 */ r_esp -= 4; W32(r_esp, 0x836e8fu); f_00844b38();
    /* 00836e8f: mov ebp, dword ptr [edi + 0xc] */ r_ebp = R32((u32)(r_edi+0xcu));
    /* 00836e92: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00836e95: jle 0x836efe */ if ((fZ||fS!=fO)) goto L_00836efe;
L_00836e97:; BB(0x00836e97);
    /* 00836e97: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 00836e9d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00836e9f: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 00836ea2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00836ea4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836ea6: je 0x836ed3 */ if (fZ) goto L_00836ed3;
L_00836ea8:; BB(0x00836ea8);
    /* 00836ea8: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_00836eab:; BB(0x00836eab);
    /* 00836eab: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00836ead: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 00836eaf: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00836eb2: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 00836eb5: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00836eb8: mov dword ptr [edx + 8], esi */ W32((u32)(r_edx+0x8u), r_esi);
    /* 00836ebb: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 00836ebd: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
    /* 00836ec0: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00836ec3: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00836ec6: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00836ec9: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00836ecc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836ece: jne 0x836eab */ if (!fZ) goto L_00836eab;
L_00836ed0:; BB(0x00836ed0);
    /* 00836ed0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00836ed3:; BB(0x00836ed3);
    /* 00836ed3: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836ed8: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00836eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836edb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836edd: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x836ee3u); call_ind(t); }
    /* 00836ee3: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836ee8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00836eea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836eec: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00836eee: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00836ef4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836ef5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00836ef7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836ef8: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x836efeu); call_ind(t); }
L_00836efe:; BB(0x00836efe);
    /* 00836efe: call 0x844b54 */ r_esp -= 4; W32(r_esp, 0x836f03u); f_00844b54();
    /* 00836f03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00836f04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00836f05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00836f06: ret  */ FN_RET(0x00836e80); r_esp += 4; return;
}

void f_00836f08(void) /* sub_836F08 */
{
    FN_ENTER(0x00836f08);
    /* 00836f08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00836f09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836f0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00836f0b: mov edi, ecx */ r_edi = r_ecx;
    /* 00836f0d: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x836f12u); f_00844ad0();
    /* 00836f12: call 0x844b38 */ r_esp -= 4; W32(r_esp, 0x836f17u); f_00844b38();
    /* 00836f17: mov ebp, dword ptr [edi + 0xc] */ r_ebp = R32((u32)(r_edi+0xcu));
    /* 00836f1a: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00836f1d: jle 0x836f87 */ if ((fZ||fS!=fO)) goto L_00836f87;
L_00836f1f:; BB(0x00836f1f);
    /* 00836f1f: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 00836f25: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00836f27: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 00836f2a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00836f2c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836f2e: je 0x836f5b */ if (fZ) goto L_00836f5b;
L_00836f30:; BB(0x00836f30);
    /* 00836f30: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_00836f33:; BB(0x00836f33);
    /* 00836f33: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00836f35: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 00836f37: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00836f3a: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 00836f3d: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00836f40: mov dword ptr [edx + 8], esi */ W32((u32)(r_edx+0x8u), r_esi);
    /* 00836f43: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 00836f45: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
    /* 00836f48: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00836f4b: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00836f4e: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00836f51: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00836f54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836f56: jne 0x836f33 */ if (!fZ) goto L_00836f33;
L_00836f58:; BB(0x00836f58);
    /* 00836f58: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00836f5b:; BB(0x00836f5b);
    /* 00836f5b: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836f60: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00836f62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836f63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836f65: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x836f6bu); call_ind(t); }
    /* 00836f6b: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00836f70: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00836f72: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00836f74: add ebp, -2 */ {  u32 a = r_ebp; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00836f77: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00836f7d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836f7e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00836f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00836f81: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x836f87u); call_ind(t); }
L_00836f87:; BB(0x00836f87);
    /* 00836f87: call 0x844b54 */ r_esp -= 4; W32(r_esp, 0x836f8cu); f_00844b54();
    /* 00836f8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00836f8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00836f8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00836f8f: ret  */ FN_RET(0x00836f08); r_esp += 4; return;
}

void f_00836f90(void) /* sub_836F90 */
{
    FN_ENTER(0x00836f90);
    /* 00836f90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00836f91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00836f92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00836f93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00836f94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00836f95: mov eax, ecx */ r_eax = r_ecx;
    /* 00836f97: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00836f9c: mov esi, ecx */ r_esi = r_ecx;
    /* 00836f9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00836fa1: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00836fa4: movzx edx, bl */ r_edx = (u32)(u8)r_ebx;
    /* 00836fa7: mov ebp, edx */ r_ebp = r_edx;
L_00836fa9:; BB(0x00836fa9);
    /* 00836fa9: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00836faf: je 0x8370a8 */ if (fZ) goto L_008370a8;
L_00836fb5:; BB(0x00836fb5);
    /* 00836fb5: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00836fb8: jae 0x837025 */ if (!fC) goto L_00837025;
L_00836fba:; BB(0x00836fba);
    /* 00836fba: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00836fbd: jae 0x837005 */ if (!fC) goto L_00837005;
L_00836fbf:; BB(0x00836fbf);
    /* 00836fbf: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836fc2: jne 0x836fe2 */ if (!fZ) goto L_00836fe2;
L_00836fc4:; BB(0x00836fc4);
    /* 00836fc4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00836fc7: call 0x8370b0 */ r_esp -= 4; W32(r_esp, 0x836fccu); f_008370b0();
    /* 00836fcc: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00836fcf: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00836fd2: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00836fd5: mov dword ptr [ebx*4 + 0xaccac0], eax */ W32((u32)(r_ebx*4+0xaccac0u), r_eax);
    /* 00836fdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00836fdd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00836fde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00836fdf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00836fe0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00836fe1: ret  */ FN_RET(0x00836f90); r_esp += 4; return;
L_00836fe2:; BB(0x00836fe2);
    /* 00836fe2: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00836fe5: jne 0x837076 */ if (!fZ) goto L_00837076;
L_00836feb:; BB(0x00836feb);
    /* 00836feb: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00836fee: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00836ff1: mov ecx, dword ptr [ebx*4 + 0xaccac0] */ r_ecx = R32((u32)(r_ebx*4+0xaccac0u));
    /* 00836ff8: call 0x836f90 */ r_esp -= 4; W32(r_esp, 0x836ffdu); f_00836f90();
    /* 00836ffd: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00837000: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00837003: jmp 0x837076 */ goto L_00837076;
L_00837005:; BB(0x00837005);
    /* 00837005: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 00837009: and edx, 0x1fff */ {  u32 a = r_edx; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0083700f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00837011: call 0x839838 */ r_esp -= 4; W32(r_esp, 0x837016u); f_00839838();
    /* 00837016: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00837018: call 0x839a60 */ r_esp -= 4; W32(r_esp, 0x83701du); f_00839a60();
    /* 0083701d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00837020: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00837023: jmp 0x837076 */ goto L_00837076;
L_00837025:; BB(0x00837025);
    /* 00837025: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00837028: jb 0x837076 */ if (fC) goto L_00837076;
L_0083702a:; BB(0x0083702a);
    /* 0083702a: test ebx, 0x800 */ {  u32 a = r_ebx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837030: je 0x837039 */ if (fZ) goto L_00837039;
L_00837032:; BB(0x00837032);
    /* 00837032: call 0x839ad0 */ r_esp -= 4; W32(r_esp, 0x837037u); f_00839ad0();
    /* 00837037: jmp 0x83703e */ goto L_0083703e;
L_00837039:; BB(0x00837039);
    /* 00837039: call 0x836550 */ r_esp -= 4; W32(r_esp, 0x83703eu); f_00836550();
L_0083703e:; BB(0x0083703e);
    /* 0083703e: mov ebx, dword ptr [0xa23090] */ r_ebx = R32((u32)(0xa23090u));
    /* 00837044: mov eax, dword ptr [ebx + ebp*8 - 0x1fc] */ r_eax = R32((u32)(r_ebx+r_ebp*8+0xfffffe04u));
    /* 0083704b: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0083704f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837051: je 0x837065 */ if (fZ) goto L_00837065;
L_00837053:; BB(0x00837053);
    /* 00837053: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00837059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083705a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083705b: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0083705d: mov esi, eax */ r_esi = r_eax;
    /* 0083705f: call dword ptr [ebp + 0x130] */ { u32 t = R32((u32)(r_ebp+0x130u)); r_esp -= 4; W32(r_esp, 0x837065u); call_ind(t); }
L_00837065:; BB(0x00837065);
    /* 00837065: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 00837068: call dword ptr [ebx + edi*4 - 0x200] */ { u32 t = R32((u32)(r_ebx+r_edi*4+0xfffffe00u)); r_esp -= 4; W32(r_esp, 0x83706fu); call_ind(t); }
    /* 0083706f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00837070: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00837073: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
L_00837076:; BB(0x00837076);
    /* 00837076: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00837079: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083707c: jl 0x83708f */ if ((fS!=fO)) goto L_0083708f;
L_0083707e:; BB(0x0083707e);
    /* 0083707e: je 0x8370a0 */ if (fZ) goto L_008370a0;
L_00837080:; BB(0x00837080);
    /* 00837080: movsx edx, word ptr [eax + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 00837084: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00837086: lea eax, [eax + edx + 4] */ r_eax = (u32)(r_eax+r_edx+0x4u);
    /* 0083708a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083708d: jmp 0x837095 */ goto L_00837095;
L_0083708f:; BB(0x0083708f);
    /* 0083708f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00837092: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_00837095:; BB(0x00837095);
    /* 00837095: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00837098: movzx ebp, bl */ r_ebp = (u32)(u8)r_ebx;
    /* 0083709b: jmp 0x836fa9 */ goto L_00836fa9;
L_008370a0:; BB(0x008370a0);
    /* 008370a0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008370a3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008370a6: jmp 0x837095 */ goto L_00837095;
L_008370a8:; BB(0x008370a8);
    /* 008370a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008370a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008370aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008370ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008370ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008370ad: ret  */ FN_RET(0x00836f90); r_esp += 4; return;
}

