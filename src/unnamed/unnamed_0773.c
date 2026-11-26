#include "protos.h"

void f_007730ec(void) /* sub_7730EC */
{
    FN_ENTER(0x007730ec);
    /* 007730ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007730ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007730ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007730ef: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007730f2: mov edi, ecx */ r_edi = r_ecx;
    /* 007730f4: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007730f8: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 007730fc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007730fe: je 0x773248 */ if (fZ) goto L_00773248;
L_00773104:; BB(0x00773104);
    /* 00773104: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773106: je 0x773248 */ if (fZ) goto L_00773248;
L_0077310c:; BB(0x0077310c);
    /* 0077310c: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0077310f: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773114: jne 0x773248 */ if (!fZ) goto L_00773248;
L_0077311a:; BB(0x0077311a);
    /* 0077311a: movsx eax, word ptr [ebp + 0x2d4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2d4u));
    /* 00773121: movsx edx, word ptr [edi + 0x2d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 00773128: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0077312c: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00773130: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00773134: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00773137: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0077313b: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0077313f: fmul dword ptr [0x9782c8] */ ST(0) = ST(0) * R_F32((u32)(0x9782c8u));
    /* 00773145: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00773147: fmul dword ptr [0x9782c4] */ ST(0) = ST(0) * R_F32((u32)(0x9782c4u));
    /* 0077314d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00773150: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00773153: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00773157: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0077315b: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 0077315e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00773162: mov eax, dword ptr [ebp + 0x2e8] */ r_eax = R32((u32)(r_ebp+0x2e8u));
    /* 00773168: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077316a: je 0x773173 */ if (fZ) goto L_00773173;
L_0077316c:; BB(0x0077316c);
    /* 0077316c: mov edx, 1 */ r_edx = 0x1u;
    /* 00773171: jmp 0x773175 */ goto L_00773175;
L_00773173:; BB(0x00773173);
    /* 00773173: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00773175:; BB(0x00773175);
    /* 00773175: mov eax, dword ptr [ebp + 0x324] */ r_eax = R32((u32)(r_ebp+0x324u));
    /* 0077317b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077317d: je 0x773187 */ if (fZ) goto L_00773187;
L_0077317f:; BB(0x0077317f);
    /* 0077317f: movsx eax, word ptr [eax + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 00773183: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773185: jne 0x7731cf */ if (!fZ) goto L_007731cf;
L_00773187:; BB(0x00773187);
    /* 00773187: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773189: jne 0x7731cf */ if (!fZ) goto L_007731cf;
L_0077318b:; BB(0x0077318b);
    /* 0077318b: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0077318f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773191: je 0x773253 */ if (fZ) goto L_00773253;
L_00773197:; BB(0x00773197);
    /* 00773197: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0077319b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0077319e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7731a3u); f_0082f9c4();
L_007731a3:; BB(0x007731a3);
    /* 007731a3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007731a6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007731a8: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007731ac: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007731ae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007731b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007731b1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007731b4: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x7731b9u); f_0082dc9c();
    /* 007731b9: fmul dword ptr [0x9782c4] */ ST(0) = ST(0) * R_F32((u32)(0x9782c4u));
    /* 007731bf: fmul dword ptr [0x9782c0] */ ST(0) = ST(0) * R_F32((u32)(0x9782c0u));
    /* 007731c5: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007731c9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007731cb: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
L_007731cf:; BB(0x007731cf);
    /* 007731cf: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007731d3: fcomp dword ptr [0x9782bc] */ fx_compare(ST(0), R_F32((u32)(0x9782bcu))); FPOP();
    /* 007731d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007731db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007731dc: jbe 0x77321e */ if ((fC||fZ)) goto L_0077321e;
L_007731de:; BB(0x007731de);
    /* 007731de: mov ecx, edi */ r_ecx = r_edi;
    /* 007731e0: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x7731e5u); f_007751b0();
    /* 007731e5: fcomp dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); FPOP();
    /* 007731e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007731eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007731ec: ja 0x77321e */ if ((!fC&&!fZ)) goto L_0077321e;
L_007731ee:; BB(0x007731ee);
    /* 007731ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007731ef: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 007731f2: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007731f7: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 007731fa: mov ecx, edi */ r_ecx = r_edi;
    /* 007731fc: call 0x773264 */ r_esp -= 4; W32(r_esp, 0x773201u); f_00773264();
    /* 00773201: mov edx, dword ptr [edi + 0x2e0] */ r_edx = R32((u32)(r_edi+0x2e0u));
    /* 00773207: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077320a: mov dword ptr [edi + 0x2e0], edx */ W32((u32)(r_edi+0x2e0u), r_edx);
    /* 00773210: mov eax, 1 */ r_eax = 0x1u;
    /* 00773215: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00773218: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00773219: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077321a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077321b: ret 0x10 */ FN_RET(0x007730ec); r_esp += 20; return;
L_0077321e:; BB(0x0077321e);
    /* 0077321e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00773221: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00773226: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00773229: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0077322c: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0077322f: mov ebp, dword ptr [ebx + 0x20] */ r_ebp = R32((u32)(r_ebx+0x20u));
    /* 00773232: mov ebx, dword ptr [ebx + 0x24] */ r_ebx = R32((u32)(r_ebx+0x24u));
    /* 00773235: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00773238: mov ecx, edi */ r_ecx = r_edi;
    /* 0077323a: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0077323e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00773242: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773243: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x773248u); f_00777450();
L_00773248:; BB(0x00773248);
    /* 00773248: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077324a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077324d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077324e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077324f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00773250: ret 0x10 */ FN_RET(0x007730ec); r_esp += 20; return;
L_00773253:; BB(0x00773253);
    /* 00773253: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00773256: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00773259: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x77325eu); f_0082f9c4();
    /* 0077325e: jmp 0x7731a3 */ goto L_007731a3;
}

void f_00773264(void) /* sub_773264 */
{
    FN_ENTER(0x00773264);
    /* 00773264: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00773268: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077326a: je 0x773276 */ if (fZ) goto L_00773276;
L_0077326c:; BB(0x0077326c);
    /* 0077326c: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 00773270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773271: call 0x77327c */ r_esp -= 4; W32(r_esp, 0x773276u); f_0077327c();
L_00773276:; BB(0x00773276);
    /* 00773276: ret 4 */ FN_RET(0x00773264); r_esp += 8; return;
}

void f_0077327c(void) /* sub_77327C */
{
    FN_ENTER(0x0077327c);
    /* 0077327c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077327d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077327e: mov edi, ecx */ r_edi = r_ecx;
    /* 00773280: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00773285: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077328a: je 0x7732b1 */ if (fZ) goto L_007732b1;
L_0077328c:; BB(0x0077328c);
    /* 0077328c: mov word ptr [edi + 0x2d8], ax */ W16((u32)(r_edi+0x2d8u), (u16)r_eax);
    /* 00773293: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00773298: jge 0x7732b1 */ if ((fS==fO)) goto L_007732b1;
L_0077329a:; BB(0x0077329a);
    /* 0077329a: call 0x77a045 */ r_esp -= 4; W32(r_esp, 0x77329fu); f_0077a045();
    /* 0077329f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007732a1: je 0x7732b1 */ if (fZ) goto L_007732b1;
L_007732a3:; BB(0x007732a3);
    /* 007732a3: movzx eax, word ptr [edi + 0x2d8] */ r_eax = (u32)R16((u32)(r_edi+0x2d8u));
    /* 007732aa: mov word ptr [edi + 0x2da], ax */ W16((u32)(r_edi+0x2dau), (u16)r_eax);
L_007732b1:; BB(0x007732b1);
    /* 007732b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007732b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007732b3: ret 4 */ FN_RET(0x0077327c); r_esp += 8; return;
}

void f_007732b8(void) /* sub_7732B8 */
{
    FN_ENTER(0x007732b8);
    /* 007732b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007732b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007732ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007732bb: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007732be: mov esi, ecx */ r_esi = r_ecx;
    /* 007732c0: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 007732c4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007732c6: je 0x7739c2 */ if (fZ) goto L_007739c2;
L_007732cc:; BB(0x007732cc);
    /* 007732cc: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007732d0: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007732d5: je 0x7739c2 */ if (fZ) goto L_007739c2;
L_007732db:; BB(0x007732db);
    /* 007732db: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 007732de: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007732e3: jne 0x7739c2 */ if (!fZ) goto L_007739c2;
L_007732e9:; BB(0x007732e9);
    /* 007732e9: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007732ee: je 0x773343 */ if (fZ) goto L_00773343;
L_007732f0:; BB(0x007732f0);
    /* 007732f0: and eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007732f5: jne 0x773343 */ if (!fZ) goto L_00773343;
L_007732f7:; BB(0x007732f7);
    /* 007732f7: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 007732fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007732ff: jne 0x773334 */ if (!fZ) goto L_00773334;
L_00773301:; BB(0x00773301);
    /* 00773301: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00773308: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077330b: je 0x773334 */ if (fZ) goto L_00773334;
L_0077330d:; BB(0x0077330d);
    /* 0077330d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077330f: je 0x773334 */ if (fZ) goto L_00773334;
L_00773311:; BB(0x00773311);
    /* 00773311: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 00773316: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773318: je 0x773325 */ if (fZ) goto L_00773325;
L_0077331a:; BB(0x0077331a);
    /* 0077331a: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0077331e: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773323: jl 0x773334 */ if ((fS!=fO)) goto L_00773334;
L_00773325:; BB(0x00773325);
    /* 00773325: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00773327: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00773329: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077332b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077332c: call 0x78a5e8 */ r_esp -= 4; W32(r_esp, 0x773331u); f_0078a5e8();
    /* 00773331: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00773334:; BB(0x00773334);
    /* 00773334: fld dword ptr [0x9782b8] */ FPUSH(R_F32((u32)(0x9782b8u)));
    /* 0077333a: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077333d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077333e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077333f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00773340: ret 8 */ FN_RET(0x007732b8); r_esp += 12; return;
L_00773343:; BB(0x00773343);
    /* 00773343: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00773347: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077334c: jge 0x7733a9 */ if ((fS==fO)) goto L_007733a9;
L_0077334e:; BB(0x0077334e);
    /* 0077334e: mov ecx, esi */ r_ecx = r_esi;
    /* 00773350: call 0x773a44 */ r_esp -= 4; W32(r_esp, 0x773355u); f_00773a44();
    /* 00773355: fcom dword ptr [0x9782b8] */ fx_compare(ST(0), R_F32((u32)(0x9782b8u))); 
    /* 0077335b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077335d: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00773361: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00773362: jbe 0x7733a9 */ if ((fC||fZ)) goto L_007733a9;
L_00773364:; BB(0x00773364);
    /* 00773364: mov ecx, esi */ r_ecx = r_esi;
    /* 00773366: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x77336bu); f_007751b0();
    /* 0077336b: fcomp dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); FPOP();
    /* 0077336f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00773371: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00773372: jae 0x7733a9 */ if (!fC) goto L_007733a9;
L_00773374:; BB(0x00773374);
    /* 00773374: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0077337b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077337e: je 0x77338e */ if (fZ) goto L_0077338e;
L_00773380:; BB(0x00773380);
    /* 00773380: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00773386: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773387: mov ecx, esi */ r_ecx = r_esi;
    /* 00773389: call 0x773a84 */ r_esp -= 4; W32(r_esp, 0x77338eu); f_00773a84();
L_0077338e:; BB(0x0077338e);
    /* 0077338e: fld dword ptr [0x9782b8] */ FPUSH(R_F32((u32)(0x9782b8u)));
    /* 00773394: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00773397: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077339d: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 007733a0: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007733a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007733a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007733a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007733a6: ret 8 */ FN_RET(0x007732b8); r_esp += 12; return;
L_007733a9:; BB(0x007733a9);
    /* 007733a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007733aa: mov ecx, esi */ r_ecx = r_esi;
    /* 007733ac: call 0x773264 */ r_esp -= 4; W32(r_esp, 0x7733b1u); f_00773264();
    /* 007733b1: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 007733b8: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007733bb: jne 0x7733c8 */ if (!fZ) goto L_007733c8;
L_007733bd:; BB(0x007733bd);
    /* 007733bd: mov eax, 1 */ r_eax = 0x1u;
    /* 007733c2: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007733c6: jmp 0x7733fc */ goto L_007733fc;
L_007733c8:; BB(0x007733c8);
    /* 007733c8: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 007733cf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007733d2: jne 0x7733f6 */ if (!fZ) goto L_007733f6;
L_007733d4:; BB(0x007733d4);
    /* 007733d4: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007733d7: jne 0x7733eb */ if (!fZ) goto L_007733eb;
L_007733d9:; BB(0x007733d9);
    /* 007733d9: mov eax, dword ptr [ebp + 0x8fc] */ r_eax = R32((u32)(r_ebp+0x8fcu));
    /* 007733df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007733e1: je 0x7733eb */ if (fZ) goto L_007733eb;
L_007733e3:; BB(0x007733e3);
    /* 007733e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007733e5: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007733e9: jmp 0x7733fc */ goto L_007733fc;
L_007733eb:; BB(0x007733eb);
    /* 007733eb: mov eax, 1 */ r_eax = 0x1u;
    /* 007733f0: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007733f4: jmp 0x7733fc */ goto L_007733fc;
L_007733f6:; BB(0x007733f6);
    /* 007733f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007733f8: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_007733fc:; BB(0x007733fc);
    /* 007733fc: mov ecx, esi */ r_ecx = r_esi;
    /* 007733fe: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x773403u); f_007751b0();
    /* 00773403: fld dword ptr [0x9782b4] */ FPUSH(R_F32((u32)(0x9782b4u)));
    /* 00773409: movsx edx, word ptr [ebp + 0x2cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2ccu));
    /* 00773410: movsx eax, word ptr [ebp + 0x2ce] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2ceu));
    /* 00773417: mov edi, dword ptr [ebp + 0x31c] */ r_edi = R32((u32)(r_ebp+0x31cu));
    /* 0077341d: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00773421: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00773425: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00773429: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0077342d: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0077342f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00773431: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 00773434: fld dword ptr [0x9782ac] */ FPUSH(R_F32((u32)(0x9782acu)));
    /* 0077343a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077343c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0077343e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00773442: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00773446: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00773448: mov eax, dword ptr [esi + 0x2e8] */ r_eax = R32((u32)(r_esi+0x2e8u));
    /* 0077344e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00773450:; BB(0x00773450);
    /* 00773450: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00773453: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773456: je 0x773a0a */ if (fZ) goto L_00773a0a;
L_0077345c:; BB(0x0077345c);
    /* 0077345c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077345f: je 0x7734bd */ if (fZ) goto L_007734bd;
L_00773461:; BB(0x00773461);
    /* 00773461: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773464: jne 0x77348f */ if (!fZ) goto L_0077348f;
L_00773466:; BB(0x00773466);
    /* 00773466: movzx edi, byte ptr [ebp + edx*2 + 0x10e] */ r_edi = (u32)R8((u32)(r_ebp+r_edx*2+0x10eu));
    /* 0077346e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773471: jne 0x7734e4 */ if (!fZ) goto L_007734e4;
L_00773473:; BB(0x00773473);
    /* 00773473: movsx edi, byte ptr [ebp + edx*2 + 0x10f] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebp+r_edx*2+0x10fu));
    /* 0077347b: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0077347f: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00773483: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00773485: fadd dword ptr [0x9782b0] */ ST(0) = ST(0) + R_F32((u32)(0x9782b0u));
    /* 0077348b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077348d: jmp 0x7734e4 */ goto L_007734e4;
L_0077348f:; BB(0x0077348f);
    /* 0077348f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773492: jne 0x7734e4 */ if (!fZ) goto L_007734e4;
L_00773494:; BB(0x00773494);
    /* 00773494: movzx edi, byte ptr [ebp + edx*2 + 0x10e] */ r_edi = (u32)R8((u32)(r_ebp+r_edx*2+0x10eu));
    /* 0077349c: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077349f: jne 0x7734e4 */ if (!fZ) goto L_007734e4;
L_007734a1:; BB(0x007734a1);
    /* 007734a1: movsx edi, byte ptr [ebp + edx*2 + 0x10f] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebp+r_edx*2+0x10fu));
    /* 007734a9: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 007734ad: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 007734b1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007734b3: fadd dword ptr [0x9782b0] */ ST(0) = ST(0) + R_F32((u32)(0x9782b0u));
    /* 007734b9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007734bb: jmp 0x7734e4 */ goto L_007734e4;
L_007734bd:; BB(0x007734bd);
    /* 007734bd: movzx edi, byte ptr [ebp + edx*2 + 0x10e] */ r_edi = (u32)R8((u32)(r_ebp+r_edx*2+0x10eu));
    /* 007734c5: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007734c8: jne 0x7734e4 */ if (!fZ) goto L_007734e4;
L_007734ca:; BB(0x007734ca);
    /* 007734ca: movsx edi, byte ptr [ebp + edx*2 + 0x10f] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebp+r_edx*2+0x10fu));
    /* 007734d2: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 007734d6: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 007734da: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007734dc: fadd dword ptr [0x9782b0] */ ST(0) = ST(0) + R_F32((u32)(0x9782b0u));
    /* 007734e2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
L_007734e4:; BB(0x007734e4);
    /* 007734e4: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007734e7: jl 0x773450 */ if ((fS!=fO)) goto L_00773450;
L_007734ed:; BB(0x007734ed);
    /* 007734ed: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007734ef: movsx edx, word ptr [ebp + 0x2ec] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2ecu));
    /* 007734f6: movsx eax, word ptr [esi + 0x2f6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2f6u));
    /* 007734fd: movsx edi, word ptr [ebp + 0x2ee] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2eeu));
    /* 00773504: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00773506: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00773509: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0077350d: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00773511: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00773513: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00773517: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0077351b: movsx eax, word ptr [esi + 0x2f8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2f8u));
    /* 00773522: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00773524: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00773526: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00773528: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0077352c: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00773530: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00773532: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00773535: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00773539: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0077353d: movsx eax, word ptr [ebp + 0x2f0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2f0u));
    /* 00773544: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00773546: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00773548: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0077354a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0077354e: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00773552: movsx eax, word ptr [esi + 0x2fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2fau));
    /* 00773559: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077355b: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077355e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00773562: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00773566: movsx eax, word ptr [ebp + 0x2f2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2f2u));
    /* 0077356d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0077356f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00773571: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00773573: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00773577: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0077357b: movsx eax, word ptr [esi + 0x2fc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2fcu));
    /* 00773582: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00773584: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00773587: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0077358b: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0077358f: movsx eax, word ptr [ebp + 0x2f4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2f4u));
    /* 00773596: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00773598: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077359a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0077359c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007735a0: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 007735a4: movsx eax, word ptr [esi + 0x2fe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2feu));
    /* 007735ab: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007735ad: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007735b0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007735b4: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 007735b8: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 007735be: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007735c0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007735c2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007735c4: fld dword ptr [0x9782b8] */ FPUSH(R_F32((u32)(0x9782b8u)));
    /* 007735ca: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007735ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007735d0: jle 0x773a3a */ if ((fZ||fS!=fO)) goto L_00773a3a;
L_007735d6:; BB(0x007735d6);
    /* 007735d6: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007735da: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 007735de: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007735e1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007735e3: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007735e5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007735e7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007735e9: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007735eb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007735ed: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007735ef: mov ebx, edx */ r_ebx = r_edx;
L_007735f1:; BB(0x007735f1);
    /* 007735f1: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 007735f7: mov edx, dword ptr [ecx + edi + 0x18] */ r_edx = R32((u32)(r_ecx+r_edi+0x18u));
    /* 007735fb: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773601: je 0x77387d */ if (fZ) goto L_0077387d;
L_00773607:; BB(0x00773607);
    /* 00773607: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0077360d: mov dword ptr [ecx + edi + 0x18], edx */ W32((u32)(r_ecx+r_edi+0x18u), r_edx);
    /* 00773611: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00773617: mov eax, dword ptr [edx + edi + 0x1c] */ r_eax = R32((u32)(r_edx+r_edi+0x1cu));
    /* 0077361b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0077361e: mov eax, dword ptr [edx + edi + 0x20] */ r_eax = R32((u32)(r_edx+r_edi+0x20u));
    /* 00773622: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00773626: mov eax, dword ptr [edx + edi + 0x24] */ r_eax = R32((u32)(r_edx+r_edi+0x24u));
    /* 0077362a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0077362e: movsx eax, word ptr [esi + 0x2d2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2d2u));
    /* 00773635: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00773639: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0077363d: fmul dword ptr [0x9782a8] */ ST(0) = ST(0) * R_F32((u32)(0x9782a8u));
    /* 00773643: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 00773647: fsub dword ptr [edx + edi + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_edi+0x28u));
    /* 0077364b: fcom dword ptr [0x9782b8] */ fx_compare(ST(0), R_F32((u32)(0x9782b8u))); 
    /* 00773651: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00773653: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00773657: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00773658: jae 0x7736c2 */ if (!fC) goto L_007736c2;
L_0077365a:; BB(0x0077365a);
    /* 0077365a: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0077365d: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773662: je 0x77366f */ if (fZ) goto L_0077366f;
L_00773664:; BB(0x00773664);
    /* 00773664: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 0077366a: jmp 0x77387d */ goto L_0077387d;
L_0077366f:; BB(0x0077366f);
    /* 0077366f: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00773676: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773679: jne 0x773686 */ if (!fZ) goto L_00773686;
L_0077367b:; BB(0x0077367b);
    /* 0077367b: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 00773681: jmp 0x77387d */ goto L_0077387d;
L_00773686:; BB(0x00773686);
    /* 00773686: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 0077368b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077368d: je 0x7736a5 */ if (fZ) goto L_007736a5;
L_0077368f:; BB(0x0077368f);
    /* 0077368f: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00773693: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773698: jge 0x7736a5 */ if ((fS==fO)) goto L_007736a5;
L_0077369a:; BB(0x0077369a);
    /* 0077369a: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 007736a0: jmp 0x77387d */ goto L_0077387d;
L_007736a5:; BB(0x007736a5);
    /* 007736a5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007736a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007736aa: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 007736ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007736ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007736af: call 0x78a5e8 */ r_esp -= 4; W32(r_esp, 0x7736b4u); f_0078a5e8();
    /* 007736b4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007736b7: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 007736bd: jmp 0x77387d */ goto L_0077387d;
L_007736c2:; BB(0x007736c2);
    /* 007736c2: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007736c6: fmul dword ptr [esp + 0x5c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x5cu));
    /* 007736ca: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 007736cd: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007736d1: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007736d6: jne 0x77386b */ if (!fZ) goto L_0077386b;
L_007736dc:; BB(0x007736dc);
    /* 007736dc: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7736e1u); f_007a61a4();
    /* 007736e1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007736e4: je 0x7739f2 */ if (fZ) goto L_007739f2;
L_007736ea:; BB(0x007736ea);
    /* 007736ea: lea ecx, [esi + 0x168] */ r_ecx = (u32)(r_esi+0x168u);
    /* 007736f0: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x7736f5u); f_00763498();
    /* 007736f5: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007736f8: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007736fc: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00773700: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00773703: fadd dword ptr [eax*4 + 0x977fa0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x977fa0u));
    /* 0077370a: fdiv dword ptr [0x9782a4] */ ST(0) = ST(0) / R_F32((u32)(0x9782a4u));
L_00773710:; BB(0x00773710);
    /* 00773710: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00773714: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773719: jge 0x773723 */ if ((fS==fO)) goto L_00773723;
L_0077371b:; BB(0x0077371b);
    /* 0077371b: fmul dword ptr [0x978298] */ ST(0) = ST(0) * R_F32((u32)(0x978298u));
    /* 00773721: jmp 0x773729 */ goto L_00773729;
L_00773723:; BB(0x00773723);
    /* 00773723: fmul dword ptr [0x97829c] */ ST(0) = ST(0) * R_F32((u32)(0x97829cu));
L_00773729:; BB(0x00773729);
    /* 00773729: fld dword ptr [0x97828c] */ FPUSH(R_F32((u32)(0x97828cu)));
    /* 0077372f: movsx eax, word ptr [ebp + 0x2d6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2d6u));
    /* 00773736: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0077373a: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0077373e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00773740: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00773742: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00773743: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00773745: jbe 0x773749 */ if ((fC||fZ)) goto L_00773749;
L_00773747:; BB(0x00773747);
    /* 00773747: fst st(1) */ ST(1) = ST(0);
L_00773749:; BB(0x00773749);
    /* 00773749: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077374b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0077374d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077374f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00773750: jb 0x77377e */ if (fC) goto L_0077377e;
L_00773752:; BB(0x00773752);
    /* 00773752: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00773755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773756: call 0x50140c */ r_esp -= 4; W32(r_esp, 0x77375bu); f_0050140c();
    /* 0077375b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0077375f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00773761: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773762: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773763: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00773764: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00773766: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x77376bu); f_00814298();
    /* 0077376b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077376e: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00773772: fmul dword ptr [0x978294] */ ST(0) = ST(0) * R_F32((u32)(0x978294u));
    /* 00773778: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0077377c: jmp 0x773788 */ goto L_00773788;
L_0077377e:; BB(0x0077377e);
    /* 0077377e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00773781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773782: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x773787u); f_0050325c();
    /* 00773787: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00773788:; BB(0x00773788);
    /* 00773788: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0077378b: and edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00773791: jne 0x773809 */ if (!fZ) goto L_00773809;
L_00773793:; BB(0x00773793);
    /* 00773793: mov eax, dword ptr [esi + 0x2e8] */ r_eax = R32((u32)(r_esi+0x2e8u));
    /* 00773799: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077379c: je 0x7739d1 */ if (fZ) goto L_007739d1;
L_007737a2:; BB(0x007737a2);
    /* 007737a2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007737a5: je 0x7737ed */ if (fZ) goto L_007737ed;
L_007737a7:; BB(0x007737a7);
    /* 007737a7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007737aa: jne 0x7737ca */ if (!fZ) goto L_007737ca;
L_007737ac:; BB(0x007737ac);
    /* 007737ac: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007737af: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007737b1: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 007737b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007737b7: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x7737bcu); f_0050b7a4();
    /* 007737bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007737bf: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 007737c2: and edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007737c8: jmp 0x773809 */ goto L_00773809;
L_007737ca:; BB(0x007737ca);
    /* 007737ca: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007737cd: jne 0x773809 */ if (!fZ) goto L_00773809;
L_007737cf:; BB(0x007737cf);
    /* 007737cf: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007737d2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007737d4: push 0x10d */ { u32 v = 0x10du; r_esp -= 4; W32(r_esp, v); }
    /* 007737d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007737da: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x7737dfu); f_0050b7a4();
    /* 007737df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007737e2: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 007737e5: and edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007737eb: jmp 0x773809 */ goto L_00773809;
L_007737ed:; BB(0x007737ed);
    /* 007737ed: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007737f0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007737f2: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 007737f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007737f8: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x7737fdu); f_0050b7a4();
    /* 007737fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00773800: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00773803: and edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
L_00773809:; BB(0x00773809);
    /* 00773809: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0077380d: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 00773811: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 00773816: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077381b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0077381f: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00773823: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00773827: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0077382b: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 00773830: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773832: jne 0x77386b */ if (!fZ) goto L_0077386b;
L_00773834:; BB(0x00773834);
    /* 00773834: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0077383b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077383e: je 0x77386b */ if (fZ) goto L_0077386b;
L_00773840:; BB(0x00773840);
    /* 00773840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00773842: jl 0x77386b */ if ((fS!=fO)) goto L_0077386b;
L_00773844:; BB(0x00773844);
    /* 00773844: mov edx, dword ptr [0xa942c0] */ r_edx = R32((u32)(0xa942c0u));
    /* 0077384a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077384c: je 0x77385a */ if (fZ) goto L_0077385a;
L_0077384e:; BB(0x0077384e);
    /* 0077384e: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00773852: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773858: jl 0x77386b */ if ((fS!=fO)) goto L_0077386b;
L_0077385a:; BB(0x0077385a);
    /* 0077385a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0077385d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077385e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00773860: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00773862: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00773863: call 0x78a5e8 */ r_esp -= 4; W32(r_esp, 0x773868u); f_0078a5e8();
    /* 00773868: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077386b:; BB(0x0077386b);
    /* 0077386b: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0077386f: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 00773873: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 00773879: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_0077387d:; BB(0x0077387d);
    /* 0077387d: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00773880: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00773883: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773885: jl 0x7735f1 */ if ((fS!=fO)) goto L_007735f1;
L_0077388b:; BB(0x0077388b);
    /* 0077388b: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0077388f: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00773893: fcomp dword ptr [0x9782b0] */ fx_compare(ST(0), R_F32((u32)(0x9782b0u))); FPOP();
    /* 00773899: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077389b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077389c: jae 0x7738c1 */ if (!fC) goto L_007738c1;
L_0077389e:; BB(0x0077389e);
    /* 0077389e: fld dword ptr [0x9782b8] */ FPUSH(R_F32((u32)(0x9782b8u)));
    /* 007738a4: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_007738a8:; BB(0x007738a8);
    /* 007738a8: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007738ac: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 007738af: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007738b5: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 007738b8: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007738bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007738bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007738bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007738be: ret 8 */ FN_RET(0x007732b8); r_esp += 12; return;
L_007738c1:; BB(0x007738c1);
    /* 007738c1: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 007738c4: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007738c9: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 007738cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007738cd: mov ecx, esi */ r_ecx = r_esi;
    /* 007738cf: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007738d3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007738d6: call 0x77529c */ r_esp -= 4; W32(r_esp, 0x7738dbu); f_0077529c();
    /* 007738db: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007738df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007738e1: je 0x77390b */ if (fZ) goto L_0077390b;
L_007738e3:; BB(0x007738e3);
    /* 007738e3: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007738e7: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 007738eb: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 007738f0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007738f5: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007738f9: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 007738fd: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00773901: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00773905: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00773909: jmp 0x77395e */ goto L_0077395e;
L_0077390b:; BB(0x0077390b);
    /* 0077390b: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0077390f: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 00773913: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 00773918: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077391d: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00773921: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00773925: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00773929: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0077392d: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00773931: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 00773934: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773935: mov ecx, esi */ r_ecx = r_esi;
    /* 00773937: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x77393cu); f_00777414();
    /* 0077393c: movsx eax, word ptr [esi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00773943: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00773945: jg 0x773952 */ if ((!fZ&&fS==fO)) goto L_00773952;
L_00773947:; BB(0x00773947);
    /* 00773947: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0077394a: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077394f: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_00773952:; BB(0x00773952);
    /* 00773952: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00773954: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00773956: mov ecx, esi */ r_ecx = r_esi;
    /* 00773958: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x77395eu); call_ind(t); }
L_0077395e:; BB(0x0077395e);
    /* 0077395e: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00773965: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773968: jne 0x7739ac */ if (!fZ) goto L_007739ac;
L_0077396a:; BB(0x0077396a);
    /* 0077396a: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0077396e: fmul dword ptr [0x978290] */ ST(0) = ST(0) * R_F32((u32)(0x978290u));
    /* 00773974: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 00773978: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 0077397d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00773982: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00773986: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0077398a: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0077398e: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00773992: mov ecx, esi */ r_ecx = r_esi;
    /* 00773994: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00773998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773999: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x77399eu); f_0069b4f0();
    /* 0077399e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007739a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007739a1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007739a4: mov ecx, esi */ r_ecx = r_esi;
    /* 007739a6: call dword ptr [eax + 0x134] */ { u32 t = R32((u32)(r_eax+0x134u)); r_esp -= 4; W32(r_esp, 0x7739acu); call_ind(t); }
L_007739ac:; BB(0x007739ac);
    /* 007739ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007739ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007739ae: mov ecx, esi */ r_ecx = r_esi;
    /* 007739b0: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x7739b5u); f_00773ab0();
    /* 007739b5: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007739b9: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007739bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007739bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007739be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007739bf: ret 8 */ FN_RET(0x007732b8); r_esp += 12; return;
L_007739c2:; BB(0x007739c2);
    /* 007739c2: fld dword ptr [0x9782b8] */ FPUSH(R_F32((u32)(0x9782b8u)));
    /* 007739c8: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007739cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007739cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007739cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007739ce: ret 8 */ FN_RET(0x007732b8); r_esp += 12; return;
L_007739d1:; BB(0x007739d1);
    /* 007739d1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007739d4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007739d6: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 007739db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007739dc: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x7739e1u); f_0050b7a4();
    /* 007739e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007739e4: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 007739e7: and edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007739ed: jmp 0x773809 */ goto L_00773809;
L_007739f2:; BB(0x007739f2);
    /* 007739f2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x7739f7u); f_008587a5();
    /* 007739f7: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007739fb: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 007739ff: fdiv dword ptr [0x9782a0] */ ST(0) = ST(0) / R_F32((u32)(0x9782a0u));
    /* 00773a05: jmp 0x773710 */ goto L_00773710;
L_00773a0a:; BB(0x00773a0a);
    /* 00773a0a: movzx edi, byte ptr [ebp + edx*2 + 0x10e] */ r_edi = (u32)R8((u32)(r_ebp+r_edx*2+0x10eu));
    /* 00773a12: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773a15: jne 0x7734e4 */ if (!fZ) goto L_007734e4;
L_00773a1b:; BB(0x00773a1b);
    /* 00773a1b: movsx edi, byte ptr [ebp + edx*2 + 0x10f] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebp+r_edx*2+0x10fu));
    /* 00773a23: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00773a27: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00773a2b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00773a2d: fadd dword ptr [0x9782b0] */ ST(0) = ST(0) + R_F32((u32)(0x9782b0u));
    /* 00773a33: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00773a35: jmp 0x7734e4 */ goto L_007734e4;
L_00773a3a:; BB(0x00773a3a);
    /* 00773a3a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00773a3c: jmp 0x7738a8 */ goto L_007738a8;
}

void f_00773a44(void) /* sub_773A44 */
{
    FN_ENTER(0x00773a44);
    /* 00773a44: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00773a47: fld dword ptr [0x978288] */ FPUSH(R_F32((u32)(0x978288u)));
    /* 00773a4d: mov eax, dword ptr [ecx + 0x324] */ r_eax = R32((u32)(r_ecx+0x324u));
    /* 00773a53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773a55: je 0x773a80 */ if (fZ) goto L_00773a80;
L_00773a57:; BB(0x00773a57);
    /* 00773a57: movsx eax, word ptr [eax + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 00773a5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00773a5d: jle 0x773a80 */ if ((fZ||fS!=fO)) goto L_00773a80;
L_00773a5f:; BB(0x00773a5f);
    /* 00773a5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00773a61: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00773a64: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00773a67: fmul dword ptr [0x978284] */ ST(0) = ST(0) * R_F32((u32)(0x978284u));
    /* 00773a6d: fcom dword ptr [0x978280] */ fx_compare(ST(0), R_F32((u32)(0x978280u))); 
    /* 00773a73: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00773a75: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00773a76: jbe 0x773a80 */ if ((fC||fZ)) goto L_00773a80;
L_00773a78:; BB(0x00773a78);
    /* 00773a78: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00773a7a: fld dword ptr [0x978280] */ FPUSH(R_F32((u32)(0x978280u)));
L_00773a80:; BB(0x00773a80);
    /* 00773a80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00773a83: ret  */ FN_RET(0x00773a44); r_esp += 4; return;
}

void f_00773a84(void) /* sub_773A84 */
{
    FN_ENTER(0x00773a84);
    /* 00773a84: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00773a88: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00773a8b: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00773a90: jne 0x773aab */ if (!fZ) goto L_00773aab;
L_00773a92:; BB(0x00773a92);
    /* 00773a92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00773a94: je 0x773aab */ if (fZ) goto L_00773aab;
L_00773a96:; BB(0x00773a96);
    /* 00773a96: push 0x978380 */ { u32 v = 0x978380u; r_esp -= 4; W32(r_esp, v); }
    /* 00773a9b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00773a9d: push 0xff00ffff */ { u32 v = 0xff00ffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00773aa2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00773aa3: call 0x78a468 */ r_esp -= 4; W32(r_esp, 0x773aa8u); f_0078a468();
    /* 00773aa8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00773aab:; BB(0x00773aab);
    /* 00773aab: ret 4 */ FN_RET(0x00773a84); r_esp += 8; return;
}

void f_00773ab0(void) /* sub_773AB0 */
{
    FN_ENTER(0x00773ab0);
    /* 00773ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00773ab1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00773ab3: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00773ab8: call 0x6a8eb0 */ r_esp -= 4; W32(r_esp, 0x773abdu); f_006a8eb0();
    /* 00773abd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00773ac0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00773ac3: je 0x773ac9 */ if (fZ) goto L_00773ac9;
L_00773ac5:; BB(0x00773ac5);
    /* 00773ac5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00773ac6: ret 8 */ FN_RET(0x00773ab0); r_esp += 12; return;
L_00773ac9:; BB(0x00773ac9);
    /* 00773ac9: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00773ad0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00773ad3: jne 0x773ac5 */ if (!fZ) goto L_00773ac5;
L_00773ad5:; BB(0x00773ad5);
    /* 00773ad5: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00773ad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00773adb: jle 0x773ac5 */ if ((fZ||fS!=fO)) goto L_00773ac5;
L_00773add:; BB(0x00773add);
    /* 00773add: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00773ae1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00773ae3: je 0x773ac5 */ if (fZ) goto L_00773ac5;
L_00773ae5:; BB(0x00773ae5);
    /* 00773ae5: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00773ae9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773aea: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00773aee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773af0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00773af1: call 0x6917a4 */ r_esp -= 4; W32(r_esp, 0x773af6u); f_006917a4();
    /* 00773af6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00773af7: ret 8 */ FN_RET(0x00773ab0); r_esp += 12; return;
}

void f_00773afc(void) /* sub_773AFC */
{
    FN_ENTER(0x00773afc);
    /* 00773afc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00773afd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00773afe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00773aff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00773b00: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00773b03: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00773b05: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
    /* 00773b09: mov edi, dword ptr [esp + 0x70] */ r_edi = R32((u32)(r_esp+0x70u));
    /* 00773b0d: mov ecx, dword ptr [0xaafdb8] */ r_ecx = R32((u32)(0xaafdb8u));
    /* 00773b13: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00773b17: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773b1a: jl 0x773b21 */ if ((fS!=fO)) goto L_00773b21;
L_00773b1c:; BB(0x00773b1c);
    /* 00773b1c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773b1f: jle 0x773b40 */ if ((fZ||fS!=fO)) goto L_00773b40;
L_00773b21:; BB(0x00773b21);
    /* 00773b21: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773b24: jne 0x773b40 */ if (!fZ) goto L_00773b40;
L_00773b26:; BB(0x00773b26);
    /* 00773b26: movsx esi, word ptr [ebp + 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x28u));
    /* 00773b2a: cmp si, word ptr [ebx + 0x28] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_ebx+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00773b2e: je 0x773b40 */ if (fZ) goto L_00773b40;
L_00773b30:; BB(0x00773b30);
    /* 00773b30: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00773b36: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00773b39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00773b3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00773b3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00773b3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00773b3d: ret 0x18 */ FN_RET(0x00773afc); r_esp += 28; return;
L_00773b40:; BB(0x00773b40);
    /* 00773b40: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00773b46: fcom dword ptr [esp + 0x6c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x6cu))); 
    /* 00773b4a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00773b4c: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00773b50: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00773b51: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00773b53: jbe 0x773b57 */ if ((fC||fZ)) goto L_00773b57;
L_00773b55:; BB(0x00773b55);
    /* 00773b55: fst st(1) */ ST(1) = ST(0);
L_00773b57:; BB(0x00773b57);
    /* 00773b57: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00773b59: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00773b5d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773b5f: je 0x775158 */ if (fZ) goto L_00775158;
L_00773b65:; BB(0x00773b65);
    /* 00773b65: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00773b68: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 00773b6b: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
L_00773b6e:; BB(0x00773b6e);
    /* 00773b6e: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773b71: jne 0x773b97 */ if (!fZ) goto L_00773b97;
L_00773b73:; BB(0x00773b73);
    /* 00773b73: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773b75: je 0x773b87 */ if (fZ) goto L_00773b87;
L_00773b77:; BB(0x00773b77);
    /* 00773b77: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773b7a: je 0x773bc3 */ if (fZ) goto L_00773bc3;
L_00773b7c:; BB(0x00773b7c);
    /* 00773b7c: mov esi, dword ptr [ebp + 0x30] */ r_esi = R32((u32)(r_ebp+0x30u));
    /* 00773b7f: test esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773b85: je 0x773bc3 */ if (fZ) goto L_00773bc3;
L_00773b87:; BB(0x00773b87);
    /* 00773b87: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00773b89: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00773b8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00773b8d: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00773b90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00773b91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00773b92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00773b93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00773b94: ret 0x18 */ FN_RET(0x00773afc); r_esp += 28; return;
L_00773b97:; BB(0x00773b97);
    /* 00773b97: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773b99: je 0x774f34 */ if (fZ) goto L_00774f34;
L_00773b9f:; BB(0x00773b9f);
    /* 00773b9f: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00773ba3: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773ba9: je 0x774f34 */ if (fZ) goto L_00774f34;
L_00773baf:; BB(0x00773baf);
    /* 00773baf: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773bb2: je 0x773bc3 */ if (fZ) goto L_00773bc3;
L_00773bb4:; BB(0x00773bb4);
    /* 00773bb4: mov esi, dword ptr [ebp + 0x30] */ r_esi = R32((u32)(r_ebp+0x30u));
    /* 00773bb7: test esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773bbd: jne 0x774f34 */ if (!fZ) goto L_00774f34;
L_00773bc3:; BB(0x00773bc3);
    /* 00773bc3: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773bc6: je 0x77513d */ if (fZ) goto L_0077513d;
L_00773bcc:; BB(0x00773bcc);
    /* 00773bcc: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773bcf: je 0x775122 */ if (fZ) goto L_00775122;
L_00773bd5:; BB(0x00773bd5);
    /* 00773bd5: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773bd8: je 0x775107 */ if (fZ) goto L_00775107;
L_00773bde:; BB(0x00773bde);
    /* 00773bde: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773be1: je 0x7750ec */ if (fZ) goto L_007750ec;
L_00773be7:; BB(0x00773be7);
    /* 00773be7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773bea: je 0x7750d1 */ if (fZ) goto L_007750d1;
L_00773bf0:; BB(0x00773bf0);
    /* 00773bf0: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773bf3: je 0x7750b6 */ if (fZ) goto L_007750b6;
L_00773bf9:; BB(0x00773bf9);
    /* 00773bf9: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00773bfc: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773c01: jne 0x774e7f */ if (!fZ) goto L_00774e7f;
L_00773c07:; BB(0x00773c07);
    /* 00773c07: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773c09: je 0x77509b */ if (fZ) goto L_0077509b;
L_00773c0f:; BB(0x00773c0f);
    /* 00773c0f: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00773c12: test esi, 0x2000080 */ {  u32 a = r_esi; u32 b = 0x2000080u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773c18: jne 0x774e7f */ if (!fZ) goto L_00774e7f;
L_00773c1e:; BB(0x00773c1e);
    /* 00773c1e: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00773c20: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00773c22: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00773c26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00773c28: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00773c2c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00773c30: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_00773c34:; BB(0x00773c34);
    /* 00773c34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773c36: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x773c3bu); f_007751b0();
    /* 00773c3b: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00773c3f: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00773c43: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773c49: jge 0x773d0e */ if ((fS==fO)) goto L_00773d0e;
L_00773c4f:; BB(0x00773c4f);
    /* 00773c4f: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00773c53: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773c56: je 0x774f44 */ if (fZ) goto L_00774f44;
L_00773c5c:; BB(0x00773c5c);
    /* 00773c5c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00773c60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00773c62: jle 0x773d04 */ if ((fZ||fS!=fO)) goto L_00773d04;
L_00773c68:; BB(0x00773c68);
    /* 00773c68: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773c6b: jle 0x773c88 */ if ((fZ||fS!=fO)) goto L_00773c88;
L_00773c6d:; BB(0x00773c6d);
    /* 00773c6d: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773c70: jl 0x773cfa */ if ((fS!=fO)) goto L_00773cfa;
L_00773c76:; BB(0x00773c76);
    /* 00773c76: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773c79: jle 0x773c88 */ if ((fZ||fS!=fO)) goto L_00773c88;
L_00773c7b:; BB(0x00773c7b);
    /* 00773c7b: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773c7f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00773c83: jmp 0x773d16 */ goto L_00773d16;
L_00773c88:; BB(0x00773c88);
    /* 00773c88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773c8a: call 0x775170 */ r_esp -= 4; W32(r_esp, 0x773c8fu); f_00775170();
    /* 00773c8f: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00773c95: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00773c97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00773c99: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00773c9a: jae 0x773cec */ if (!fC) goto L_00773cec;
L_00773c9c:; BB(0x00773c9c);
    /* 00773c9c: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00773ca0: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00773ca2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00773ca4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00773ca6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00773ca8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00773ca9: jae 0x773cd5 */ if (!fC) goto L_00773cd5;
L_00773cab:; BB(0x00773cab);
    /* 00773cab: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00773cb2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773cb5: je 0x773ccb */ if (fZ) goto L_00773ccb;
L_00773cb7:; BB(0x00773cb7);
    /* 00773cb7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00773cb9: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00773cbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773cbe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773cc0: call 0x773a84 */ r_esp -= 4; W32(r_esp, 0x773cc5u); f_00773a84();
    /* 00773cc5: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
L_00773ccb:; BB(0x00773ccb);
    /* 00773ccb: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00773cce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00773ccf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00773cd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00773cd1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00773cd2: ret 0x18 */ FN_RET(0x00773afc); r_esp += 28; return;
L_00773cd5:; BB(0x00773cd5);
    /* 00773cd5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00773cd7: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773cdb: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00773cdf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773ce1: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x773ce6u); f_007751b0();
    /* 00773ce6: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00773cea: jmp 0x773d16 */ goto L_00773d16;
L_00773cec:; BB(0x00773cec);
    /* 00773cec: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00773cee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00773cf0: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773cf4: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00773cf8: jmp 0x773d16 */ goto L_00773d16;
L_00773cfa:; BB(0x00773cfa);
    /* 00773cfa: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773cfe: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00773d02: jmp 0x773d16 */ goto L_00773d16;
L_00773d04:; BB(0x00773d04);
    /* 00773d04: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773d08: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00773d0c: jmp 0x773d16 */ goto L_00773d16;
L_00773d0e:; BB(0x00773d0e);
    /* 00773d0e: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773d12: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_00773d16:; BB(0x00773d16);
    /* 00773d16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00773d17: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773d19: call 0x773264 */ r_esp -= 4; W32(r_esp, 0x773d1eu); f_00773264();
    /* 00773d1e: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00773d25: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773d28: jne 0x773d69 */ if (!fZ) goto L_00773d69;
L_00773d2a:; BB(0x00773d2a);
    /* 00773d2a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00773d2e: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773d31: je 0x774f51 */ if (fZ) goto L_00774f51;
L_00773d37:; BB(0x00773d37);
    /* 00773d37: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773d3a: je 0x774f51 */ if (fZ) goto L_00774f51;
L_00773d40:; BB(0x00773d40);
    /* 00773d40: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773d43: je 0x774f51 */ if (fZ) goto L_00774f51;
L_00773d49:; BB(0x00773d49);
    /* 00773d49: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773d4c: je 0x774f51 */ if (fZ) goto L_00774f51;
L_00773d52:; BB(0x00773d52);
    /* 00773d52: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773d55: je 0x774f51 */ if (fZ) goto L_00774f51;
L_00773d5b:; BB(0x00773d5b);
    /* 00773d5b: movzx edx, word ptr [ebp + 0x2d8] */ r_edx = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00773d62: mov esi, 1 */ r_esi = 0x1u;
    /* 00773d67: jmp 0x773d8f */ goto L_00773d8f;
L_00773d69:; BB(0x00773d69);
    /* 00773d69: movzx edx, word ptr [ebp + 0x2d8] */ r_edx = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00773d70: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773d76: jge 0x773d8d */ if ((fS==fO)) goto L_00773d8d;
L_00773d78:; BB(0x00773d78);
    /* 00773d78: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x773d7du); f_007a61a4();
    /* 00773d7d: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773d80: je 0x775019 */ if (fZ) goto L_00775019;
L_00773d86:; BB(0x00773d86);
    /* 00773d86: movzx edx, word ptr [ebp + 0x2d8] */ r_edx = (u32)R16((u32)(r_ebp+0x2d8u));
L_00773d8d:; BB(0x00773d8d);
    /* 00773d8d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00773d8f:; BB(0x00773d8f);
    /* 00773d8f: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773d95: jge 0x773dd8 */ if ((fS==fO)) goto L_00773dd8;
L_00773d97:; BB(0x00773d97);
    /* 00773d97: mov edx, dword ptr [ebx + 0x2b4] */ r_edx = R32((u32)(r_ebx+0x2b4u));
    /* 00773d9d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773d9f: je 0x774f5f */ if (fZ) goto L_00774f5f;
L_00773da5:; BB(0x00773da5);
    /* 00773da5: movsx edx, word ptr [edx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00773da9: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00773dad: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00773db1: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00773db5:; BB(0x00773db5);
    /* 00773db5: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00773dbb: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00773dbf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00773dc1: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00773dc3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00773dc5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00773dc6: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00773dcc: jbe 0x773dd0 */ if ((fC||fZ)) goto L_00773dd0;
L_00773dce:; BB(0x00773dce);
    /* 00773dce: fst st(1) */ ST(1) = ST(0);
L_00773dd0:; BB(0x00773dd0);
    /* 00773dd0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00773dd2: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00773dd6: jmp 0x773de2 */ goto L_00773de2;
L_00773dd8:; BB(0x00773dd8);
    /* 00773dd8: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00773dde: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00773de2:; BB(0x00773de2);
    /* 00773de2: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00773de6: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00773de9: jge 0x773e20 */ if ((fS==fO)) goto L_00773e20;
L_00773deb:; BB(0x00773deb);
    /* 00773deb: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00773def: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 00773df3: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00773df7: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00773dfb: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773dfe: je 0x773e32 */ if (fZ) goto L_00773e32;
L_00773e00:; BB(0x00773e00);
    /* 00773e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773e01: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 00773e05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00773e06: call 0x6e1d98 */ r_esp -= 4; W32(r_esp, 0x773e0bu); f_006e1d98();
    /* 00773e0b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00773e0e: fadd dword ptr [0x978274] */ ST(0) = ST(0) + R_F32((u32)(0x978274u));
    /* 00773e14: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773e18: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00773e1a: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00773e1e: jmp 0x773e32 */ goto L_00773e32;
L_00773e20:; BB(0x00773e20);
    /* 00773e20: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00773e24: fmul dword ptr [0x978278] */ ST(0) = ST(0) * R_F32((u32)(0x978278u));
    /* 00773e2a: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 00773e2e: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
L_00773e32:; BB(0x00773e32);
    /* 00773e32: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00773e36: cmp edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00773e39: ja 0x774df4 */ if ((!fC&&!fZ)) goto L_00774df4;
L_00773e3f:; BB(0x00773e3f);
    /* 00773e3f: mov edx, dword ptr [edx*4 + 0x977ea0] */ r_edx = R32((u32)(r_edx*4+0x977ea0u));
    /* 00773e46: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00774df4:; BB(0x00774df4);
    /* 00774df4: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774dfa: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774dfe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774e00: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00773afc); r_esp += 28; return;
L_00774e7f:; BB(0x00774e7f);
    /* 00774e7f: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e86: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e89: jne 0x774e9b */ if (!fZ) goto L_00774e9b;
L_00774e8b:; BB(0x00774e8b);
    /* 00774e8b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00774e8d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00774e8f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00774e91: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e98: ret 0x18 */ FN_RET(0x00773afc); r_esp += 28; return;
L_00774e9b:; BB(0x00774e9b);
    /* 00774e9b: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774ea0: je 0x774eb2 */ if (fZ) goto L_00774eb2;
L_00774ea2:; BB(0x00774ea2);
    /* 00774ea2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00774ea4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00774ea6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00774ea8: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774eab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774eac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774ead: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774eae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774eaf: ret 0x18 */ FN_RET(0x00773afc); r_esp += 28; return;
L_00774eb2:; BB(0x00774eb2);
    /* 00774eb2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774eb5: jne 0x774ec7 */ if (!fZ) goto L_00774ec7;
L_00774eb7:; BB(0x00774eb7);
    /* 00774eb7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00774eb9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00774ebb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00774ebd: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774ec0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774ec1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774ec2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774ec3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774ec4: ret 0x18 */ FN_RET(0x00773afc); r_esp += 28; return;
L_00774ec7:; BB(0x00774ec7);
    /* 00774ec7: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 00774ecc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774ece: je 0x774eff */ if (fZ) goto L_00774eff;
L_00774ed0:; BB(0x00774ed0);
    /* 00774ed0: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00774ed4: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00774ed9: jge 0x774eeb */ if ((fS==fO)) goto L_00774eeb;
L_00774edb:; BB(0x00774edb);
    /* 00774edb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00774edd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00774edf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00774ee1: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774ee4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774ee5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774ee6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774ee7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774ee8: ret 0x18 */ FN_RET(0x00773afc); r_esp += 28; return;
L_00774eeb:; BB(0x00774eeb);
    /* 00774eeb: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00774eed: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00774eef: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00774ef3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00774ef5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00774ef9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00774efd: jmp 0x774f11 */ goto L_00774f11;
L_00774eff:; BB(0x00774eff);
    /* 00774eff: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00774f01: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00774f03: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00774f07: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00774f09: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00774f0d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_00774f11:; BB(0x00774f11);
    /* 00774f11: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00774f15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774f17: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00774f19: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00774f1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00774f1c: call 0x78a5e8 */ r_esp -= 4; W32(r_esp, 0x774f21u); f_0078a5e8();
    /* 00774f21: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00774f24: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774f2a: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774f2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774f2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774f2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774f30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774f31: ret 0x18 */ FN_RET(0x00773afc); r_esp += 28; return;
L_00774f34:; BB(0x00774f34);
    /* 00774f34: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00774f36: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00774f38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00774f3a: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774f3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774f3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774f3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774f40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774f41: ret 0x18 */ FN_RET(0x00773afc); r_esp += 28; return;
L_00774f44:; BB(0x00774f44);
    /* 00774f44: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774f48: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00774f4c: jmp 0x773d16 */ goto L_00773d16;
L_00774f51:; BB(0x00774f51);
    /* 00774f51: movzx edx, word ptr [ebp + 0x2d8] */ r_edx = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00774f58: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00774f5a: jmp 0x773d8f */ goto L_00773d8f;
L_00774f5f:; BB(0x00774f5f);
    /* 00774f5f: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774f65: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00774f69: jmp 0x773db5 */ goto L_00773db5;
L_00775019:; BB(0x00775019);
    /* 00775019: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00775020: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775023: jne 0x77508d */ if (!fZ) goto L_0077508d;
L_00775025:; BB(0x00775025);
    /* 00775025: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0077502c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077502f: je 0x775036 */ if (fZ) goto L_00775036;
L_00775031:; BB(0x00775031);
    /* 00775031: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775034: jne 0x77507c */ if (!fZ) goto L_0077507c;
L_00775036:; BB(0x00775036);
    /* 00775036: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0077503a: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077503d: je 0x77505d */ if (fZ) goto L_0077505d;
L_0077503f:; BB(0x0077503f);
    /* 0077503f: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775042: je 0x77505d */ if (fZ) goto L_0077505d;
L_00775044:; BB(0x00775044);
    /* 00775044: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775047: je 0x77505d */ if (fZ) goto L_0077505d;
L_00775049:; BB(0x00775049);
    /* 00775049: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077504c: je 0x77505d */ if (fZ) goto L_0077505d;
L_0077504e:; BB(0x0077504e);
    /* 0077504e: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775051: je 0x77505d */ if (fZ) goto L_0077505d;
L_00775053:; BB(0x00775053);
    /* 00775053: mov edx, dword ptr [ebx + 0x8fc] */ r_edx = R32((u32)(r_ebx+0x8fcu));
    /* 00775059: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077505b: je 0x77506b */ if (fZ) goto L_0077506b;
L_0077505d:; BB(0x0077505d);
    /* 0077505d: movzx edx, word ptr [ebp + 0x2d8] */ r_edx = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00775064: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00775066: jmp 0x773d8f */ goto L_00773d8f;
L_0077506b:; BB(0x0077506b);
    /* 0077506b: movzx edx, word ptr [ebp + 0x2d8] */ r_edx = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00775072: mov esi, 1 */ r_esi = 0x1u;
    /* 00775077: jmp 0x773d8f */ goto L_00773d8f;
L_0077507c:; BB(0x0077507c);
    /* 0077507c: movzx edx, word ptr [ebp + 0x2d8] */ r_edx = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00775083: mov esi, 1 */ r_esi = 0x1u;
    /* 00775088: jmp 0x773d8f */ goto L_00773d8f;
L_0077508d:; BB(0x0077508d);
    /* 0077508d: movzx edx, word ptr [ebp + 0x2d8] */ r_edx = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00775094: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00775096: jmp 0x773d8f */ goto L_00773d8f;
L_0077509b:; BB(0x0077509b);
    /* 0077509b: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0077509d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0077509f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007750a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007750a5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007750a9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007750ad: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007750b1: jmp 0x773c34 */ goto L_00773c34;
L_007750b6:; BB(0x007750b6);
    /* 007750b6: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 007750b8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007750ba: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007750be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007750c0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007750c4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007750c8: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007750cc: jmp 0x773c34 */ goto L_00773c34;
L_007750d1:; BB(0x007750d1);
    /* 007750d1: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 007750d3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007750d5: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007750d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007750db: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007750df: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007750e3: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007750e7: jmp 0x773c34 */ goto L_00773c34;
L_007750ec:; BB(0x007750ec);
    /* 007750ec: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 007750ee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007750f0: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007750f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007750f6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007750fa: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007750fe: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00775102: jmp 0x773c34 */ goto L_00773c34;
L_00775107:; BB(0x00775107);
    /* 00775107: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00775109: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0077510b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0077510f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00775111: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00775115: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00775119: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0077511d: jmp 0x773c34 */ goto L_00773c34;
L_00775122:; BB(0x00775122);
    /* 00775122: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00775124: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00775126: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0077512a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077512c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00775130: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00775134: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00775138: jmp 0x773c34 */ goto L_00773c34;
L_0077513d:; BB(0x0077513d);
    /* 0077513d: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0077513f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00775141: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00775145: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00775147: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0077514b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0077514f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00775153: jmp 0x773c34 */ goto L_00773c34;
L_00775158:; BB(0x00775158);
    /* 00775158: fld dword ptr [ebp + 0x300] */ FPUSH(R_F32((u32)(r_ebp+0x300u)));
    /* 0077515e: fld dword ptr [ebp + 0x304] */ FPUSH(R_F32((u32)(r_ebp+0x304u)));
    /* 00775164: fld dword ptr [ebp + 0x308] */ FPUSH(R_F32((u32)(r_ebp+0x308u)));
    /* 0077516a: jmp 0x773b6e */ goto L_00773b6e;
}

void f_00773e48(void)
{
    FN_ENTER(0x00773e48);
    /* 00773e48: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00773e4b: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773e51: je 0x773e8e */ if (fZ) goto L_00773e8e;
L_00773e53:; BB(0x00773e53);
    /* 00773e53: movsx edi, word ptr [ebp + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00773e5a: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773e5d: jne 0x773e8e */ if (!fZ) goto L_00773e8e;
L_00773e5f:; BB(0x00773e5f);
    /* 00773e5f: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773e63: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00773e67: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00773e6c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00773e71: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00773e75: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00773e79: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00773e7d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00773e81: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00773e85: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00773e89: jmp 0x774e04 */ goto L_00774e04;
L_00773e8e:; BB(0x00773e8e);
    /* 00773e8e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00773e92: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00773e96: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00773e9a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773e9c: je 0x773eca */ if (fZ) goto L_00773eca;
L_00773e9e:; BB(0x00773e9e);
    /* 00773e9e: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773ea2: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00773ea6: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00773eab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00773eb0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00773eb4: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00773eb8: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00773ebc: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00773ec0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00773ec4: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00773ec8: jmp 0x773f14 */ goto L_00773f14;
L_00773eca:; BB(0x00773eca);
    /* 00773eca: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773ece: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00773ed2: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00773ed7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00773edc: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00773ee0: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00773ee4: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00773ee8: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00773eec: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00773ef0: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00773ef4: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00773ef7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00773ef8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773efa: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x773effu); f_00777414();
    /* 00773eff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773f01: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x773f06u); f_00775270();
    /* 00773f06: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00773f09: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00773f0b: jle 0x774f6e */ if ((fZ||fS!=fO)) goto L_00774f6e;
L_00773f11:; BB(0x00773f11);
    /* 00773f11: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
L_00773f14:; BB(0x00773f14);
    /* 00773f14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00773f15: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00773f1b: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00773f1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773f20: call 0x77529c */ r_esp -= 4; W32(r_esp, 0x773f25u); f_0077529c();
    /* 00773f25: mov edx, dword ptr [ebp + 0x2e0] */ r_edx = R32((u32)(r_ebp+0x2e0u));
    /* 00773f2b: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 00773f2e: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00773f31: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773f37: mov dword ptr [ebp + 0x2e0], edx */ W32((u32)(r_ebp+0x2e0u), r_edx);
    /* 00773f3d: jne 0x774e04 */ if (!fZ) goto L_00774e04;
L_00773f43:; BB(0x00773f43);
    /* 00773f43: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00773f47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00773f48: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x773f4du); f_0050325c();
    /* 00773f4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00773f4e: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00773f52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00773f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773f55: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x773f5au); f_007752dc();
    /* 00773f5a: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00773f5e: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00773f62: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 00773f65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00773f66: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00773f69: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x773f6eu); f_0077535c();
    /* 00773f6e: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00773e48); r_esp += 28; return;
L_00774f6e:; BB(0x00774f6e);
    /* 00774f6e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774f71: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774f77: jmp 0x773f14 */ goto L_00773f14;
}

void f_00773f73(void)
{
    FN_ENTER(0x00773f73);
    /* 00773f73: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00773f79: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00773f7c: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00773f80: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773f82: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00773f86: call dword ptr [edx + 0xe8] */ { u32 t = R32((u32)(r_edx+0xe8u)); r_esp -= 4; W32(r_esp, 0x773f8cu); call_ind(t); }
    /* 00773f8c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00773f8e: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00773f92: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00773f73); r_esp += 28; return;
}

void f_00773f97(void)
{
    FN_ENTER(0x00773f97);
    /* 00773f97: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00773f9a: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773fa0: je 0x773fdd */ if (fZ) goto L_00773fdd;
L_00773fa2:; BB(0x00773fa2);
    /* 00773fa2: movsx edi, word ptr [ebp + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00773fa9: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773fac: jne 0x773fdd */ if (!fZ) goto L_00773fdd;
L_00773fae:; BB(0x00773fae);
    /* 00773fae: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773fb2: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00773fb6: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00773fbb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00773fc0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00773fc4: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00773fc8: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00773fcc: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00773fd0: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00773fd4: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00773fd8: jmp 0x774e04 */ goto L_00774e04;
L_00773fdd:; BB(0x00773fdd);
    /* 00773fdd: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00773fe1: movsx edi, word ptr [ebp + 0x2fa] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2fau));
    /* 00773fe8: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00773fea: add edi, 0x64 */ {  u32 a = r_edi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00773fed: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00773fef: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00773ff3: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00773ff7: fmul dword ptr [0x978270] */ ST(0) = ST(0) * R_F32((u32)(0x978270u));
    /* 00773ffd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00773fff: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774003: je 0x774031 */ if (fZ) goto L_00774031;
L_00774005:; BB(0x00774005);
    /* 00774005: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774009: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0077400d: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774012: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774017: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0077401b: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0077401f: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774023: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774027: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0077402b: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 0077402f: jmp 0x77407b */ goto L_0077407b;
L_00774031:; BB(0x00774031);
    /* 00774031: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774035: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774039: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0077403e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774043: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774047: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0077404b: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077404f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774053: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774057: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0077405b: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 0077405e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077405f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774061: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x774066u); f_00777414();
    /* 00774066: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774068: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x77406du); f_00775270();
    /* 0077406d: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00774070: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00774072: jle 0x774f7c */ if ((fZ||fS!=fO)) goto L_00774f7c;
L_00774078:; BB(0x00774078);
    /* 00774078: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
L_0077407b:; BB(0x0077407b);
    /* 0077407b: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774081: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00774084: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774085: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00774089: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0077408c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077408e: call 0x77529c */ r_esp -= 4; W32(r_esp, 0x774093u); f_0077529c();
    /* 00774093: mov edx, dword ptr [ebp + 0x2e0] */ r_edx = R32((u32)(r_ebp+0x2e0u));
    /* 00774099: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 0077409c: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077409f: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007740a5: mov dword ptr [ebp + 0x2e0], edx */ W32((u32)(r_ebp+0x2e0u), r_edx);
    /* 007740ab: jne 0x774e04 */ if (!fZ) goto L_00774e04;
L_007740b1:; BB(0x007740b1);
    /* 007740b1: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007740b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007740b6: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x7740bbu); f_0050325c();
    /* 007740bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007740bc: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007740c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007740c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007740c3: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x7740c8u); f_007752dc();
    /* 007740c8: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007740cc: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 007740d0: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 007740d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007740d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007740d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007740d7: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x7740dcu); f_0077535c();
    /* 007740dc: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00773f97); r_esp += 28; return;
L_00774f7c:; BB(0x00774f7c);
    /* 00774f7c: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774f7f: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774f85: jmp 0x77407b */ goto L_0077407b;
}

