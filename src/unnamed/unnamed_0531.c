#include "protos.h"

void f_0053105c(void) /* sub_53105C */
{
    FN_ENTER(0x0053105c);
    /* 0053105c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053105d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053105f: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 00531066: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531069: je 0x5310a8 */ if (fZ) goto L_005310a8;
L_0053106b:; BB(0x0053106b);
    /* 0053106b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053106e: je 0x5310a8 */ if (fZ) goto L_005310a8;
L_00531070:; BB(0x00531070);
    /* 00531070: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00531077: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053107a: je 0x53109b */ if (fZ) goto L_0053109b;
L_0053107c:; BB(0x0053107c);
    /* 0053107c: mov eax, 7 */ r_eax = 0x7u;
    /* 00531081: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00531088: mov edx, 5 */ r_edx = 0x5u;
    /* 0053108d: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00531094: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531096: call 0x53140c */ r_esp -= 4; W32(r_esp, 0x53109bu); f_0053140c();
L_0053109b:; BB(0x0053109b);
    /* 0053109b: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0053109e: and eax, 0xffdbffff */ {  u32 a = r_eax; u32 b = 0xffdbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005310a3: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005310a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005310a7: ret  */ FN_RET(0x0053105c); r_esp += 4; return;
L_005310a8:; BB(0x005310a8);
    /* 005310a8: movzx eax, word ptr [ebp + 0x334] */ r_eax = (u32)R16((u32)(r_ebp+0x334u));
    /* 005310af: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005310b2: mov dword ptr [ebp + 0x2e0], 0 */ W32((u32)(r_ebp+0x2e0u), 0x0u);
    /* 005310bc: mov word ptr [ebp + 0x346], ax */ W16((u32)(r_ebp+0x346u), (u16)r_eax);
    /* 005310c3: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005310c9: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 005310cc: mov ebp, dword ptr [ebp + 0xa4] */ r_ebp = R32((u32)(r_ebp+0xa4u));
    /* 005310d2: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005310d5: and ecx, 0xfbffffff */ {  u32 a = r_ecx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005310db: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 005310de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005310df: ret  */ FN_RET(0x0053105c); r_esp += 4; return;
}

void f_005310e0(void) /* sub_5310E0 */
{
    FN_ENTER(0x005310e0);
    /* 005310e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005310e1: mov edi, ecx */ r_edi = r_ecx;
    /* 005310e3: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005310ea: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005310ed: je 0x53114a */ if (fZ) goto L_0053114a;
L_005310ef:; BB(0x005310ef);
    /* 005310ef: mov eax, 8 */ r_eax = 0x8u;
    /* 005310f4: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 005310fb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005310fd: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 00531104: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 0053110a: mov eax, 6 */ r_eax = 0x6u;
    /* 0053110f: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00531116: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00531119: and eax, 0xffff7ffe */ {  u32 a = r_eax; u32 b = 0xffff7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053111e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00531121: mov ecx, edi */ r_ecx = r_edi;
    /* 00531123: call 0x53140c */ r_esp -= 4; W32(r_esp, 0x531128u); f_0053140c();
    /* 00531128: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053112d: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00531133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531134: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x531139u); f_0050b510();
    /* 00531139: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053113c: mov ecx, edi */ r_ecx = r_edi;
    /* 0053113e: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x531143u); f_00787534();
    /* 00531143: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00531144: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x531149u); f_008113e4();
    /* 00531149: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0053114a:; BB(0x0053114a);
    /* 0053114a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053114b: ret  */ FN_RET(0x005310e0); r_esp += 4; return;
}

void f_0053114c(void) /* sub_53114C */
{
    FN_ENTER(0x0053114c);
    /* 0053114c: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 00531152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531154: jne 0x53115c */ if (!fZ) goto L_0053115c;
L_00531156:; BB(0x00531156);
    /* 00531156: call 0x5311e8 */ r_esp -= 4; W32(r_esp, 0x53115bu); f_005311e8();
    /* 0053115b: ret  */ FN_RET(0x0053114c); r_esp += 4; return;
L_0053115c:; BB(0x0053115c);
    /* 0053115c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053115f: jne 0x531167 */ if (!fZ) goto L_00531167;
L_00531161:; BB(0x00531161);
    /* 00531161: call 0x531170 */ r_esp -= 4; W32(r_esp, 0x531166u); f_00531170();
    /* 00531166: ret  */ FN_RET(0x0053114c); r_esp += 4; return;
L_00531167:; BB(0x00531167);
    /* 00531167: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x53116cu); f_0073d160();
    /* 0053116c: ret  */ FN_RET(0x0053114c); r_esp += 4; return;
}

void f_00531170(void) /* sub_531170 */
{
    FN_ENTER(0x00531170);
    /* 00531170: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00531171: mov edi, ecx */ r_edi = r_ecx;
    /* 00531173: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00531176: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00531178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531179: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053117a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053117b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053117c: push 0x2e2 */ { u32 v = 0x2e2u; r_esp -= 4; W32(r_esp, v); }
    /* 00531181: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x531186u); f_008144b0();
    /* 00531186: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531189: mov edx, dword ptr [edi + 0x94] */ r_edx = R32((u32)(r_edi+0x94u));
    /* 0053118f: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00531192: mov dword ptr [edi + 0x94], eax */ W32((u32)(r_edi+0x94u), r_eax);
    /* 00531198: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053119a: jge 0x5311a6 */ if ((fS==fO)) goto L_005311a6;
L_0053119c:; BB(0x0053119c);
    /* 0053119c: mov dword ptr [edi + 0x90], 2 */ W32((u32)(r_edi+0x90u), 0x2u);
L_005311a6:; BB(0x005311a6);
    /* 005311a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005311a7: ret  */ FN_RET(0x00531170); r_esp += 4; return;
}

void f_005311e8(void) /* sub_5311E8 */
{
    FN_ENTER(0x005311e8);
    /* 005311e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005311e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005311ea: mov esi, ecx */ r_esi = r_ecx;
    /* 005311ec: movzx eax, word ptr [esi + 0x98] */ r_eax = (u32)R16((u32)(r_esi+0x98u));
    /* 005311f3: mov dword ptr [esi + 0x90], 1 */ W32((u32)(r_esi+0x90u), 0x1u);
    /* 005311fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005311fe: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x531203u); f_0068d5a8();
    /* 00531203: mov ebp, eax */ r_ebp = r_eax;
    /* 00531205: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531208: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053120a: je 0x53123d */ if (fZ) goto L_0053123d;
L_0053120c:; BB(0x0053120c);
    /* 0053120c: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00531213: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00531216: jne 0x53123d */ if (!fZ) goto L_0053123d;
L_00531218:; BB(0x00531218);
    /* 00531218: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053121a: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x53121fu); f_008173b4();
    /* 0053121f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00531221: je 0x53123d */ if (fZ) goto L_0053123d;
L_00531223:; BB(0x00531223);
    /* 00531223: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00531226: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053122c: jne 0x53123d */ if (!fZ) goto L_0053123d;
L_0053122e:; BB(0x0053122e);
    /* 0053122e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00531230: push dword ptr [esi + 0x94] */ { u32 v = R32((u32)(r_esi+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 00531236: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531238: call 0x69375c */ r_esp -= 4; W32(r_esp, 0x53123du); f_0069375c();
L_0053123d:; BB(0x0053123d);
    /* 0053123d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053123e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053123f: ret  */ FN_RET(0x005311e8); r_esp += 4; return;
}

void f_00531240(void)
{
    FN_ENTER(0x00531240);
    /* 00531240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531241: mov ebp, esp */ r_ebp = r_esp;
    /* 00531243: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00531245: push 0x8d4ce8 */ { u32 v = 0x8d4ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053124a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00531250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531251: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00531258: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053125b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053125e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00531261: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00531264: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00531267: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0053126c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00531273: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x531278u); f_008581c5();
    /* 00531278: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531279: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0053127c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053127e: je 0x531403 */ if (fZ) goto L_00531403;
L_00531284:; BB(0x00531284);
    /* 00531284: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0053128b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00531292: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00531295: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00531297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531298: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053129a: push 0x9bc4b4 */ { u32 v = 0x9bc4b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053129f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005312a1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5312a6u); f_005b7a84();
    /* 005312a6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005312a9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005312b0: mov dword ptr [0xa7337c], eax */ W32((u32)(0xa7337cu), r_eax);
    /* 005312b5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005312bc: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005312be: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5312c3u); f_0077a684();
    /* 005312c3: mov dword ptr [0xa73368], eax */ W32((u32)(0xa73368u), r_eax);
    /* 005312c8: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005312ca: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5312cfu); f_0077a698();
    /* 005312cf: mov dword ptr [0xa73358], eax */ W32((u32)(0xa73358u), r_eax);
    /* 005312d4: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 005312d6: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5312dbu); f_0077a698();
    /* 005312db: mov dword ptr [0xa7335c], eax */ W32((u32)(0xa7335cu), r_eax);
    /* 005312e0: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005312e2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5312e7u); f_0077a698();
    /* 005312e7: mov dword ptr [0xa73360], eax */ W32((u32)(0xa73360u), r_eax);
    /* 005312ec: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 005312ee: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5312f3u); f_0077a698();
    /* 005312f3: mov dword ptr [0xa73364], eax */ W32((u32)(0xa73364u), r_eax);
    /* 005312f8: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005312fa: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5312ffu); f_0077a6b4();
    /* 005312ff: mov dword ptr [0xa73354], eax */ W32((u32)(0xa73354u), r_eax);
    /* 00531304: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00531306: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x53130bu); f_0077a6cc();
    /* 0053130b: movzx edx, word ptr [0x9224bc] */ r_edx = (u32)R16((u32)(0x9224bcu));
    /* 00531312: movzx ecx, word ptr [0x9224be] */ r_ecx = (u32)R16((u32)(0x9224beu));
    /* 00531319: movzx ebx, word ptr [0x9224c0] */ r_ebx = (u32)R16((u32)(0x9224c0u));
    /* 00531320: mov edi, dword ptr [0xa7337c] */ r_edi = R32((u32)(0xa7337cu));
    /* 00531326: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0053132c: mov dword ptr [0xa7336c], eax */ W32((u32)(0xa7336cu), r_eax);
    /* 00531331: mov eax, dword ptr [0x9224b8] */ r_eax = R32((u32)(0x9224b8u));
    /* 00531336: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00531339: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0053133d: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00531343: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 00531347: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0053134b: mov dword ptr [0xa733b0], 0 */ W32((u32)(0xa733b0u), 0x0u);
    /* 00531355: mov dword ptr [0xa733ac], 0 */ W32((u32)(0xa733acu), 0x0u);
    /* 0053135f: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00531362: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00531365: mov dword ptr [0xa733a8], 0 */ W32((u32)(0xa733a8u), 0x0u);
    /* 0053136f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531370: mov dword ptr [0xa733a4], 0 */ W32((u32)(0xa733a4u), 0x0u);
    /* 0053137a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053137c: push dword ptr [0x9bc4f4] */ { u32 v = R32((u32)(0x9bc4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00531382: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00531385: mov dword ptr [0xa733a0], 0 */ W32((u32)(0xa733a0u), 0x0u);
    /* 0053138f: mov dword ptr [0xa7339c], 0 */ W32((u32)(0xa7339cu), 0x0u);
    /* 00531399: mov dword ptr [0xa73398], 0 */ W32((u32)(0xa73398u), 0x0u);
    /* 005313a3: mov dword ptr [0xa73394], 0 */ W32((u32)(0xa73394u), 0x0u);
    /* 005313ad: mov dword ptr [0xa73390], 0 */ W32((u32)(0xa73390u), 0x0u);
    /* 005313b7: mov dword ptr [0xa7338c], 0 */ W32((u32)(0xa7338cu), 0x0u);
    /* 005313c1: mov dword ptr [0xa73388], 0 */ W32((u32)(0xa73388u), 0x0u);
    /* 005313cb: mov dword ptr [0xa73384], 0 */ W32((u32)(0xa73384u), 0x0u);
    /* 005313d5: mov dword ptr [0xa73380], 0 */ W32((u32)(0xa73380u), 0x0u);
    /* 005313df: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005313e2: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 005313e4: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5313e9u); f_00608470();
    /* 005313e9: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005313ec: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005313ef: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005313f2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005313f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005313f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005313ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00531401: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531402: ret  */ FN_RET(0x00531240); r_esp += 4; return;
L_00531403:; BB(0x00531403);
    /* 00531403: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00531405: jmp 0x5312b0 */ f_005312b0(); return;
}

void f_0053140c(void) /* sub_53140C */
{
    FN_ENTER(0x0053140c);
    /* 0053140c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053140d: mov edi, ecx */ r_edi = r_ecx;
    /* 0053140f: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 00531415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531417: je 0x53142a */ if (fZ) goto L_0053142a;
L_00531419:; BB(0x00531419);
    /* 00531419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053141a: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x53141fu); f_005cdcc0();
    /* 0053141f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531420: mov dword ptr [edi + 0x41c], 0 */ W32((u32)(r_edi+0x41cu), 0x0u);
L_0053142a:; BB(0x0053142a);
    /* 0053142a: mov eax, dword ptr [edi + 0x420] */ r_eax = R32((u32)(r_edi+0x420u));
    /* 00531430: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531432: je 0x531445 */ if (fZ) goto L_00531445;
L_00531434:; BB(0x00531434);
    /* 00531434: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531435: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x53143au); f_005cdcc0();
    /* 0053143a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053143b: mov dword ptr [edi + 0x420], 0 */ W32((u32)(r_edi+0x420u), 0x0u);
L_00531445:; BB(0x00531445);
    /* 00531445: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 0053144b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053144d: je 0x531460 */ if (fZ) goto L_00531460;
L_0053144f:; BB(0x0053144f);
    /* 0053144f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531450: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x531455u); f_005cdcc0();
    /* 00531455: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531456: mov dword ptr [edi + 0x424], 0 */ W32((u32)(r_edi+0x424u), 0x0u);
L_00531460:; BB(0x00531460);
    /* 00531460: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531461: ret  */ FN_RET(0x0053140c); r_esp += 4; return;
}

void f_00531464(void) /* sub_531464 */
{
    FN_ENTER(0x00531464);
    /* 00531464: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00531465: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00531467: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00531469: call 0x531488 */ r_esp -= 4; W32(r_esp, 0x53146eu); f_00531488();
    /* 0053146e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00531472: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00531474: jne 0x53147a */ if (!fZ) goto L_0053147a;
L_00531476:; BB(0x00531476);
    /* 00531476: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00531477: ret 4 */ FN_RET(0x00531464); r_esp += 8; return;
L_0053147a:; BB(0x0053147a);
    /* 0053147a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053147b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x531480u); f_005c2f74();
    /* 00531480: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531481: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00531482: ret 4 */ FN_RET(0x00531464); r_esp += 8; return;
}

void f_00531488(void) /* sub_531488 */
{
    FN_ENTER(0x00531488);
    /* 00531488: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531489: mov ebp, esp */ r_ebp = r_esp;
    /* 0053148b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053148d: push 0x8d4d04 */ { u32 v = 0x8d4d04u; r_esp -= 4; W32(r_esp, v); }
    /* 00531492: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00531498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531499: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005314a0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005314a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005314a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005314a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005314ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005314af: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005314b2: mov dword ptr [ecx], 0xb01980 */ W32((u32)(r_ecx), 0xb01980u);
    /* 005314b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005314bf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005314c2: add ecx, 0x398 */ {  u32 a = r_ecx; u32 b = 0x398u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005314c8: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x5314cdu); f_005122a8();
    /* 005314cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005314d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005314d7: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x5314dcu); f_0052bf84();
    /* 005314dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005314df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005314e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005314e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005314e9: ret  */ FN_RET(0x00531488); r_esp += 4; return;
}

void f_005314ec(void) /* sub_5314EC */
{
    FN_ENTER(0x005314ec);
    /* 005314ec: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005314ef: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005314f4: jne 0x531591 */ if (!fZ) goto L_00531591;
L_005314fa:; BB(0x005314fa);
    /* 005314fa: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 00531500: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00531503: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00531506: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00531509: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0053150f: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00531514: je 0x531554 */ if (fZ) goto L_00531554;
L_00531516:; BB(0x00531516);
    /* 00531516: fld dword ptr [ecx + 0x3bc] */ FPUSH(R_F32((u32)(r_ecx+0x3bcu)));
    /* 0053151c: fcom dword ptr [ecx + 0x3b8] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x3b8u))); 
    /* 00531522: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00531524: mov edx, dword ptr [ecx + 0x3b8] */ r_edx = R32((u32)(r_ecx+0x3b8u));
    /* 0053152a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053152b: jae 0x53153c */ if (!fC) goto L_0053153c;
L_0053152d:; BB(0x0053152d);
    /* 0053152d: fld dword ptr [0x922754] */ FPUSH(R_F32((u32)(0x922754u)));
    /* 00531533: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00531535: fstp dword ptr [ecx + 0x3bc] */ W_F32((u32)(r_ecx+0x3bcu), ST(0)); FPOP();
    /* 0053153b: ret  */ FN_RET(0x005314ec); r_esp += 4; return;
L_0053153c:; BB(0x0053153c);
    /* 0053153c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053153e: mov dword ptr [ecx + 0x3bc], edx */ W32((u32)(r_ecx+0x3bcu), r_edx);
    /* 00531544: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0053154a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0053154d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00531550: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00531553: ret  */ FN_RET(0x005314ec); r_esp += 4; return;
L_00531554:; BB(0x00531554);
    /* 00531554: fld dword ptr [ecx + 0x3bc] */ FPUSH(R_F32((u32)(r_ecx+0x3bcu)));
    /* 0053155a: fcom dword ptr [ecx + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x3b4u))); 
    /* 00531560: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00531562: mov edx, dword ptr [ecx + 0x3b4] */ r_edx = R32((u32)(r_ecx+0x3b4u));
    /* 00531568: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00531569: jbe 0x53157a */ if ((fC||fZ)) goto L_0053157a;
L_0053156b:; BB(0x0053156b);
    /* 0053156b: fld dword ptr [0x922754] */ FPUSH(R_F32((u32)(0x922754u)));
    /* 00531571: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00531573: fstp dword ptr [ecx + 0x3bc] */ W_F32((u32)(r_ecx+0x3bcu), ST(0)); FPOP();
    /* 00531579: ret  */ FN_RET(0x005314ec); r_esp += 4; return;
L_0053157a:; BB(0x0053157a);
    /* 0053157a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053157c: mov dword ptr [ecx + 0x3bc], edx */ W32((u32)(r_ecx+0x3bcu), r_edx);
    /* 00531582: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 00531588: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0053158b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053158e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_00531591:; BB(0x00531591);
    /* 00531591: ret  */ FN_RET(0x005314ec); r_esp += 4; return;
}

void f_00531594(void) /* sub_531594 */
{
    FN_ENTER(0x00531594);
    /* 00531594: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531595: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00531597: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0053159d: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 005315a2: jne 0x5315c9 */ if (!fZ) goto L_005315c9;
L_005315a4:; BB(0x005315a4);
    /* 005315a4: fld dword ptr [0x922750] */ FPUSH(R_F32((u32)(0x922750u)));
    /* 005315aa: fadd dword ptr [ebp + 0x3c4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3c4u));
    /* 005315b0: fld dword ptr [0x92274c] */ FPUSH(R_F32((u32)(0x92274cu)));
    /* 005315b6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005315b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005315ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005315bb: jb 0x5315bf */ if (fC) goto L_005315bf;
L_005315bd:; BB(0x005315bd);
    /* 005315bd: fst st(1) */ ST(1) = ST(0);
L_005315bf:; BB(0x005315bf);
    /* 005315bf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005315c1: fstp dword ptr [ebp + 0x3c4] */ W_F32((u32)(r_ebp+0x3c4u), ST(0)); FPOP();
    /* 005315c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005315c8: ret  */ FN_RET(0x00531594); r_esp += 4; return;
L_005315c9:; BB(0x005315c9);
    /* 005315c9: mov ecx, dword ptr [ebp + 0x3c0] */ r_ecx = R32((u32)(r_ebp+0x3c0u));
    /* 005315cf: add ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005315d5: mov dword ptr [ebp + 0x3c0], ecx */ W32((u32)(r_ebp+0x3c0u), r_ecx);
    /* 005315db: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5315e0u); f_0082dcbc();
    /* 005315e0: fld dword ptr [0x922748] */ FPUSH(R_F32((u32)(0x922748u)));
    /* 005315e6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005315e8: fstp dword ptr [ebp + 0x3c4] */ W_F32((u32)(r_ebp+0x3c4u), ST(0)); FPOP();
    /* 005315ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005315ef: ret  */ FN_RET(0x00531594); r_esp += 4; return;
}

void f_005315f0(void) /* sub_5315F0 */
{
    FN_ENTER(0x005315f0);
    /* 005315f0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005315f3: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005315f7: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005315fa: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005315ff: jne 0x53164b */ if (!fZ) goto L_0053164b;
L_00531601:; BB(0x00531601);
    /* 00531601: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531603: je 0x53164b */ if (fZ) goto L_0053164b;
L_00531605:; BB(0x00531605);
    /* 00531605: fld dword ptr [0x922744] */ FPUSH(R_F32((u32)(0x922744u)));
    /* 0053160b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0053160e: fld dword ptr [ecx + 0x3b4] */ FPUSH(R_F32((u32)(r_ecx+0x3b4u)));
    /* 00531614: fld dword ptr [ecx + 0x3bc] */ FPUSH(R_F32((u32)(r_ecx+0x3bcu)));
    /* 0053161a: fadd dword ptr [ecx + 0x3c4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3c4u));
    /* 00531620: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00531622: fmul dword ptr [0x922740] */ ST(0) = ST(0) * R_F32((u32)(0x922740u));
    /* 00531628: fld dword ptr [ecx + 0x3b8] */ FPUSH(R_F32((u32)(r_ecx+0x3b8u)));
    /* 0053162e: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00531630: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00531632: fdivr st(2) */ ST(0) = ST(2) / ST(0);
    /* 00531634: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00531636: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00531638: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0053163b: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0053163f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00531643: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00531645: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531646: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x53164bu); f_00779d4c();
L_0053164b:; BB(0x0053164b);
    /* 0053164b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053164e: ret 4 */ FN_RET(0x005315f0); r_esp += 8; return;
}

void f_00531654(void) /* sub_531654 */
{
    FN_ENTER(0x00531654);
    /* 00531654: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00531655: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0053165a: cmp eax, dword ptr [0xa73484] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa73484u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00531660: je 0x53169f */ if (fZ) goto L_0053169f;
L_00531662:; BB(0x00531662);
    /* 00531662: mov dword ptr [0xa73484], eax */ W32((u32)(0xa73484u), r_eax);
    /* 00531667: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0053166a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053166c: mov ebx, eax */ r_ebx = r_eax;
L_0053166e:; BB(0x0053166e);
    /* 0053166e: movsx eax, word ptr [ebx + 0x9bc588] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x9bc588u));
    /* 00531675: movsx ecx, word ptr [ebx + 0x9bc58a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x9bc58au));
    /* 0053167c: movzx edx, word ptr [ebx + 0x9bc58c] */ r_edx = (u32)R16((u32)(r_ebx+0x9bc58cu));
    /* 00531683: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00531684: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531685: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531686: push dword ptr [ebx + 0x9bc580] */ { u32 v = R32((u32)(r_ebx+0x9bc580u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053168c: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x531691u); f_0081a2b0();
    /* 00531691: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531694: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00531697: cmp ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053169a: jl 0x53166e */ if ((fS!=fO)) goto L_0053166e;
L_0053169c:; BB(0x0053169c);
    /* 0053169c: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0053169f:; BB(0x0053169f);
    /* 0053169f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005316a0: ret  */ FN_RET(0x00531654); r_esp += 4; return;
}

void f_005316a4(void) /* sub_5316A4 */
{
    FN_ENTER(0x005316a4);
    /* 005316a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005316a5: mov ebp, esp */ r_ebp = r_esp;
    /* 005316a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005316a9: push 0x8d4d20 */ { u32 v = 0x8d4d20u; r_esp -= 4; W32(r_esp, v); }
    /* 005316ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005316b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005316b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005316bc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005316bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005316c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005316c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005316c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005316cb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005316ce: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005316d1: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x5316d6u); f_0052c3fc();
    /* 005316d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005316dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005316e0: mov dword ptr [ecx], 0xb01980 */ W32((u32)(r_ecx), 0xb01980u);
    /* 005316e6: add ecx, 0x398 */ {  u32 a = r_ecx; u32 b = 0x398u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005316ec: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x5316f1u); f_005122f8();
    /* 005316f1: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005316f4: mov edx, dword ptr [0x9bc660] */ r_edx = R32((u32)(0x9bc660u));
    /* 005316fa: mov ecx, dword ptr [ebx + 0x2e8] */ r_ecx = R32((u32)(r_ebx+0x2e8u));
    /* 00531700: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00531703: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 00531709: mov dword ptr [ebx + 0x3c0], 0 */ W32((u32)(r_ebx+0x3c0u), 0x0u);
    /* 00531713: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00531718: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0053171b: mov dword ptr [ebx + 0x3c4], 0 */ W32((u32)(r_ebx+0x3c4u), 0x0u);
    /* 00531725: or ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00531728: mov dword ptr [ebx + 0x2e8], ecx */ W32((u32)(r_ebx+0x2e8u), r_ecx);
    /* 0053172e: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00531731: and edi, 0xfffeffff */ {  u32 a = r_edi; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00531737: or edi, 0x20000 */ {  u32 a = r_edi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053173d: mov dword ptr [ebx + 0x390], edi */ W32((u32)(r_ebx+0x390u), r_edi);
    /* 00531743: mov eax, ebx */ r_eax = r_ebx;
    /* 00531745: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00531748: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053174b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053174e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00531755: mov esp, ebp */ r_esp = r_ebp;
    /* 00531757: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531758: ret 4 */ FN_RET(0x005316a4); r_esp += 8; return;
}

void f_0053175c(void) /* sub_53175C */
{
    FN_ENTER(0x0053175c);
    /* 0053175c: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00531763: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531766: je 0x531778 */ if (fZ) goto L_00531778;
L_00531768:; BB(0x00531768);
    /* 00531768: mov dword ptr [ecx + 0x37c], 4 */ W32((u32)(r_ecx+0x37cu), 0x4u);
    /* 00531772: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_00531778:; BB(0x00531778);
    /* 00531778: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0053177e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00531781: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00531787: ret  */ FN_RET(0x0053175c); r_esp += 4; return;
}

void f_00531788(void) /* sub_531788 */
{
    FN_ENTER(0x00531788);
    /* 00531788: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00531789: mov esi, ecx */ r_esi = r_ecx;
    /* 0053178b: mov ecx, esi */ r_ecx = r_esi;
    /* 0053178d: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x531792u); f_00777d10();
    /* 00531792: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531794: je 0x5317a4 */ if (fZ) goto L_005317a4;
L_00531796:; BB(0x00531796);
    /* 00531796: mov ecx, esi */ r_ecx = r_esi;
    /* 00531798: call 0x56f87c */ r_esp -= 4; W32(r_esp, 0x53179du); f_0056f87c();
    /* 0053179d: mov eax, 1 */ r_eax = 0x1u;
    /* 005317a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005317a3: ret  */ FN_RET(0x00531788); r_esp += 4; return;
L_005317a4:; BB(0x005317a4);
    /* 005317a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005317a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005317a7: ret  */ FN_RET(0x00531788); r_esp += 4; return;
}

void f_005317a8(void) /* sub_5317A8 */
{
    FN_ENTER(0x005317a8);
    /* 005317a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005317a9: mov esi, ecx */ r_esi = r_ecx;
    /* 005317ab: mov ecx, esi */ r_ecx = r_esi;
    /* 005317ad: call 0x7780a8 */ r_esp -= 4; W32(r_esp, 0x5317b2u); f_007780a8();
    /* 005317b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005317b4: je 0x5317c4 */ if (fZ) goto L_005317c4;
L_005317b6:; BB(0x005317b6);
    /* 005317b6: mov ecx, esi */ r_ecx = r_esi;
    /* 005317b8: call 0x56f87c */ r_esp -= 4; W32(r_esp, 0x5317bdu); f_0056f87c();
    /* 005317bd: mov eax, 1 */ r_eax = 0x1u;
    /* 005317c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005317c3: ret  */ FN_RET(0x005317a8); r_esp += 4; return;
L_005317c4:; BB(0x005317c4);
    /* 005317c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005317c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005317c7: ret  */ FN_RET(0x005317a8); r_esp += 4; return;
}

void f_005317c8(void)
{
    FN_ENTER(0x005317c8);
    /* 005317c8: mov ecx, dword ptr [0xa73480] */ r_ecx = R32((u32)(0xa73480u));
    /* 005317ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005317d0: je 0x5317e5 */ if (fZ) goto L_005317e5;
L_005317d2:; BB(0x005317d2);
    /* 005317d2: je 0x5317db */ if (fZ) goto L_005317db;
L_005317d4:; BB(0x005317d4);
    /* 005317d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005317d6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5317dbu); f_004066a8();
L_005317db:; BB(0x005317db);
    /* 005317db: mov dword ptr [0xa73480], 0 */ W32((u32)(0xa73480u), 0x0u);
L_005317e5:; BB(0x005317e5);
    /* 005317e5: ret  */ FN_RET(0x005317c8); r_esp += 4; return;
}

void f_005317e8(void) /* sub_5317E8 */
{
    FN_ENTER(0x005317e8);
    /* 005317e8: mov dword ptr [0xa73470], 0x3f800000 */ W32((u32)(0xa73470u), 0x3f800000u);
    /* 005317f2: mov dword ptr [0xa73474], 0x41000000 */ W32((u32)(0xa73474u), 0x41000000u);
    /* 005317fc: mov dword ptr [0xa73478], 0x3fc00000 */ W32((u32)(0xa73478u), 0x3fc00000u);
    /* 00531806: ret  */ FN_RET(0x005317e8); r_esp += 4; return;
}

void f_00531808(void)
{
    FN_ENTER(0x00531808);
    /* 00531808: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531809: mov ebp, esp */ r_ebp = r_esp;
    /* 0053180b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053180d: push 0x8d4d48 */ { u32 v = 0x8d4d48u; r_esp -= 4; W32(r_esp, v); }
    /* 00531812: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00531818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531819: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00531820: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00531823: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00531826: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00531829: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0053182c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0053182f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00531834: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0053183b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x531840u); f_008581c5();
    /* 00531840: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531841: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00531844: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531846: je 0x5319da */ if (fZ) goto L_005319da;
L_0053184c:; BB(0x0053184c);
    /* 0053184c: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00531853: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053185a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053185d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053185f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531862: push 0x9bc650 */ { u32 v = 0x9bc650u; r_esp -= 4; W32(r_esp, v); }
    /* 00531867: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00531869: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x53186eu); f_005b7a84();
    /* 0053186e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00531871: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00531878: mov dword ptr [0xa73480], eax */ W32((u32)(0xa73480u), r_eax);
    /* 0053187d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00531884: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 0053188a: mov esi, dword ptr [esi + 0x18] */ r_esi = R32((u32)(r_esi+0x18u));
    /* 0053188d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053188f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00531892:; BB(0x00531892);
    /* 00531892: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531895: mov ebx, dword ptr [eax*4 + 0x9bc664] */ r_ebx = R32((u32)(r_eax*4+0x9bc664u));
    /* 0053189c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053189f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005318a1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005318a3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005318a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318a8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005318aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318ae: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005318b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318b2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318b4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_005318b7:; BB(0x005318b7);
    /* 005318b7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005318ba: lea edx, [eax + ebx] */ r_edx = (u32)(r_eax+r_ebx);
    /* 005318bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005318be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005318bf: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5318c4u); f_0078e934();
    /* 005318c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005318c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005318c9: je 0x5318e1 */ if (fZ) goto L_005318e1;
L_005318cb:; BB(0x005318cb);
    /* 005318cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005318cd: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005318d0: jne 0x5318e1 */ if (!fZ) goto L_005318e1;
L_005318d2:; BB(0x005318d2);
    /* 005318d2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005318d5: mov ecx, edi */ r_ecx = r_edi;
    /* 005318d7: mov dword ptr [edx + ecx*4 + 0xa733c0], eax */ W32((u32)(r_edx+r_ecx*4+0xa733c0u), r_eax);
    /* 005318de: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_005318e1:; BB(0x005318e1);
    /* 005318e1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005318e4: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005318e7: jl 0x5318b7 */ if ((fS!=fO)) goto L_005318b7;
L_005318e9:; BB(0x005318e9);
    /* 005318e9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005318ec: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005318ef: mov dword ptr [eax + edi*4 + 0xa733c0], 0 */ W32((u32)(r_eax+r_edi*4+0xa733c0u), 0x0u);
    /* 005318fa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318fd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00531900: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531903: jl 0x531892 */ if ((fS!=fO)) goto L_00531892;
L_00531905:; BB(0x00531905);
    /* 00531905: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00531907:; BB(0x00531907);
    /* 00531907: mov ecx, dword ptr [0xa73480] */ r_ecx = R32((u32)(0xa73480u));
    /* 0053190d: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00531910: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00531913: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531915: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531917: movsx edx, word ptr [eax + 0x9bc584] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x9bc584u));
    /* 0053191e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053191f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x531924u); f_005b8610();
    /* 00531924: movsx edx, word ptr [ebx*8 + 0x9bc586] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx*8+0x9bc586u));
    /* 0053192c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053192d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053192e: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x531933u); f_0078e934();
    /* 00531933: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531936: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00531939: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0053193c: mov dword ptr [ebx*8 + 0x9bc580], edx */ W32((u32)(r_ebx*8+0x9bc580u), r_edx);
    /* 00531943: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00531946: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531949: jl 0x531907 */ if ((fS!=fO)) goto L_00531907;
L_0053194b:; BB(0x0053194b);
    /* 0053194b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0053194d:; BB(0x0053194d);
    /* 0053194d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0053194f: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x531954u); f_0077a684();
    /* 00531954: mov dword ptr [ebx*4 + 0xa734c4], eax */ W32((u32)(r_ebx*4+0xa734c4u), r_eax);
    /* 0053195b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0053195d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x531962u); f_0077a698();
    /* 00531962: mov dword ptr [ebx*4 + 0xa734bc], eax */ W32((u32)(r_ebx*4+0xa734bcu), r_eax);
    /* 00531969: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0053196b: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x531970u); f_0077a6b4();
    /* 00531970: mov dword ptr [ebx*4 + 0xa734b4], eax */ W32((u32)(r_ebx*4+0xa734b4u), r_eax);
    /* 00531977: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00531979: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x53197eu); f_0077a6cc();
    /* 0053197e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531981: mov dword ptr [ebx*4 + 0xa734ac], eax */ W32((u32)(r_ebx*4+0xa734acu), r_eax);
    /* 00531988: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053198b: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053198e: jl 0x53194d */ if ((fS!=fO)) goto L_0053194d;
L_00531990:; BB(0x00531990);
    /* 00531990: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00531992: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x531997u); f_0077a684();
    /* 00531997: mov dword ptr [0xa734e8], eax */ W32((u32)(0xa734e8u), r_eax);
    /* 0053199c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053199e: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5319a3u); f_0077a698();
    /* 005319a3: mov dword ptr [0xa734e4], eax */ W32((u32)(0xa734e4u), r_eax);
    /* 005319a8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005319aa: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5319afu); f_0077a6b4();
    /* 005319af: mov dword ptr [0xa734e0], eax */ W32((u32)(0xa734e0u), r_eax);
    /* 005319b4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005319b6: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5319bbu); f_0077a6cc();
    /* 005319bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005319be: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005319c1: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005319c4: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005319c7: mov dword ptr [0xa734dc], eax */ W32((u32)(0xa734dcu), r_eax);
    /* 005319cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005319cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005319d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005319d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005319d9: ret  */ FN_RET(0x00531808); r_esp += 4; return;
L_005319da:; BB(0x005319da);
    /* 005319da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005319dc: jmp 0x531878 */ f_00531878(); return;
}

void f_005319e4(void) /* sub_5319E4 */
{
    FN_ENTER(0x005319e4);
    /* 005319e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005319e5: mov ebp, esp */ r_ebp = r_esp;
    /* 005319e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005319e9: push 0x8d4d64 */ { u32 v = 0x8d4d64u; r_esp -= 4; W32(r_esp, v); }
    /* 005319ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005319f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005319f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005319fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005319ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00531a02: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00531a05: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00531a08: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00531a0b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00531a0e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00531a11: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00531a18: mov dword ptr [ecx], 0xb01b40 */ W32((u32)(r_ecx), 0xb01b40u);
    /* 00531a1e: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x531a23u); f_007b9c8c();
    /* 00531a23: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00531a26: mov edx, dword ptr [eax + 0x3e4] */ r_edx = R32((u32)(r_eax+0x3e4u));
    /* 00531a2c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531a2e: je 0x531a4a */ if (fZ) goto L_00531a4a;
L_00531a30:; BB(0x00531a30);
    /* 00531a30: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00531a34: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00531a39: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00531a3d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00531a40: mov dword ptr [edx + 0x3e4], 0 */ W32((u32)(r_edx+0x3e4u), 0x0u);
L_00531a4a:; BB(0x00531a4a);
    /* 00531a4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00531a4d: mov edx, dword ptr [eax + 0x3e8] */ r_edx = R32((u32)(r_eax+0x3e8u));
    /* 00531a53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531a55: je 0x531a71 */ if (fZ) goto L_00531a71;
L_00531a57:; BB(0x00531a57);
    /* 00531a57: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00531a5b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00531a60: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00531a64: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00531a67: mov dword ptr [edx + 0x3e8], 0 */ W32((u32)(r_edx+0x3e8u), 0x0u);
L_00531a71:; BB(0x00531a71);
    /* 00531a71: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00531a74: mov edx, dword ptr [eax + 0x3ec] */ r_edx = R32((u32)(r_eax+0x3ecu));
    /* 00531a7a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531a7c: je 0x531a98 */ if (fZ) goto L_00531a98;
L_00531a7e:; BB(0x00531a7e);
    /* 00531a7e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00531a82: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00531a87: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00531a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00531a8e: mov dword ptr [edx + 0x3ec], 0 */ W32((u32)(r_edx+0x3ecu), 0x0u);
L_00531a98:; BB(0x00531a98);
    /* 00531a98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00531a9b: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00531aa1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531aa3: je 0x531abf */ if (fZ) goto L_00531abf;
L_00531aa5:; BB(0x00531aa5);
    /* 00531aa5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00531aa9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00531aae: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00531ab2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00531ab5: mov dword ptr [edx + 0x3f0], 0 */ W32((u32)(r_edx+0x3f0u), 0x0u);
L_00531abf:; BB(0x00531abf);
    /* 00531abf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00531ac2: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00531ac8: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531ace: je 0x531ad7 */ if (fZ) goto L_00531ad7;
L_00531ad0:; BB(0x00531ad0);
    /* 00531ad0: mov eax, 1 */ r_eax = 0x1u;
    /* 00531ad5: jmp 0x531ad9 */ goto L_00531ad9;
L_00531ad7:; BB(0x00531ad7);
    /* 00531ad7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00531ad9:; BB(0x00531ad9);
    /* 00531ad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531adb: je 0x531b22 */ if (fZ) goto L_00531b22;
L_00531add:; BB(0x00531add);
    /* 00531add: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00531ae0: movsx edx, word ptr [eax + 0x3e0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3e0u));
    /* 00531ae7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00531ae9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00531aeb: jle 0x531b22 */ if ((fZ||fS!=fO)) goto L_00531b22;
L_00531aed:; BB(0x00531aed);
    /* 00531aed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00531af0: movzx edx, word ptr [eax + ebx*4 + 0x3cc] */ r_edx = (u32)R16((u32)(r_eax+r_ebx*4+0x3ccu));
    /* 00531af8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00531af9: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x531afeu); f_007b4d18();
    /* 00531afe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531aff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531b01: je 0x531b11 */ if (fZ) goto L_00531b11;
L_00531b03:; BB(0x00531b03);
    /* 00531b03: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00531b07: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00531b0d: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_00531b11:; BB(0x00531b11);
    /* 00531b11: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00531b14: movsx edx, word ptr [eax + 0x3e0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3e0u));
    /* 00531b1b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00531b1e: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531b20: jl 0x531aed */ if ((fS!=fO)) goto L_00531aed;
L_00531b22:; BB(0x00531b22);
    /* 00531b22: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00531b29: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00531b2c: call 0x531488 */ r_esp -= 4; W32(r_esp, 0x531b31u); f_00531488();
    /* 00531b31: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00531b34: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00531b36: jne 0x531b51 */ if (!fZ) goto L_00531b51;
L_00531b38:; BB(0x00531b38);
    /* 00531b38: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00531b3b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00531b3e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531b41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00531b44: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00531b4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00531b4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531b4e: ret 4 */ FN_RET(0x005319e4); r_esp += 8; return;
L_00531b51:; BB(0x00531b51);
    /* 00531b51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00531b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531b55: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x531b5au); f_005c2f74();
    /* 00531b5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531b5b: jmp 0x531b38 */ goto L_00531b38;
}

void f_00531b60(void) /* sub_531B60 */
{
    FN_ENTER(0x00531b60);
    /* 00531b60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00531b61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00531b62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531b63: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00531b64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00531b65: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00531b67: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00531b6a: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00531b6f: je 0x531b77 */ if (fZ) goto L_00531b77;
L_00531b71:; BB(0x00531b71);
    /* 00531b71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531b72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00531b73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531b74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00531b75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531b76: ret  */ FN_RET(0x00531b60); r_esp += 4; return;
L_00531b77:; BB(0x00531b77);
    /* 00531b77: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00531b7c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531b7e: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00531b83: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00531b88: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00531b8d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00531b90: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 00531b95: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x531b98u); call_ind(t); }
    /* 00531b98: mov esi, eax */ r_esi = r_eax;
    /* 00531b9a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00531b9c: je 0x531ce6 */ if (fZ) goto L_00531ce6;
L_00531ba2:; BB(0x00531ba2);
    /* 00531ba2: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00531ba5: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00531baa: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x531bafu); f_00829cc8();
    /* 00531baf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531bb0: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x531bb5u); f_00794548();
    /* 00531bb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531bb6: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x531bbbu); f_00578b38();
    /* 00531bbb: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x531bc0u); f_0082d7b0();
    /* 00531bc0: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00531bc6: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00531bcc: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00531bd2: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x531bd7u); f_004f7c84();
    /* 00531bd7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531bda: je 0x531d46 */ if (fZ) goto L_00531d46;
L_00531be0:; BB(0x00531be0);
    /* 00531be0: movsx edi, word ptr [ebp + 0x3e0] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x3e0u));
    /* 00531be7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00531be9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00531beb: jle 0x531c30 */ if ((fZ||fS!=fO)) goto L_00531c30;
L_00531bed:; BB(0x00531bed);
    /* 00531bed: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00531bf0: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00531bf3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531bf5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00531bf7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531bf9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531bfb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00531bfd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531bff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00531c01:; BB(0x00531c01);
    /* 00531c01: mov ecx, dword ptr [edx + 0xa733c0] */ r_ecx = R32((u32)(r_edx+0xa733c0u));
    /* 00531c07: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00531c09: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531c0b: je 0x531c1e */ if (fZ) goto L_00531c1e;
L_00531c0d:; BB(0x00531c0d);
    /* 00531c0d: and dword ptr [ecx], 0xfffffff7 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00531c10: mov ecx, dword ptr [edx + ebp*4 + 0xa733c4] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0xa733c4u));
    /* 00531c17: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00531c1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531c1c: jne 0x531c0d */ if (!fZ) goto L_00531c0d;
L_00531c1e:; BB(0x00531c1e);
    /* 00531c1e: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531c21: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531c24: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531c26: jl 0x531c01 */ if ((fS!=fO)) goto L_00531c01;
L_00531c28:; BB(0x00531c28);
    /* 00531c28: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00531c2b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531c2e: jge 0x531c69 */ if ((fS==fO)) goto L_00531c69;
L_00531c30:; BB(0x00531c30);
    /* 00531c30: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00531c33: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531c35: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00531c37: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531c39: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531c3b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00531c3d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531c3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00531c41:; BB(0x00531c41);
    /* 00531c41: mov edi, dword ptr [edx + 0xa733c0] */ r_edi = R32((u32)(r_edx+0xa733c0u));
    /* 00531c47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00531c49: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531c4b: je 0x531c5e */ if (fZ) goto L_00531c5e;
L_00531c4d:; BB(0x00531c4d);
    /* 00531c4d: or dword ptr [edi], 8 */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00531c50: mov edi, dword ptr [edx + ecx*4 + 0xa733c4] */ r_edi = R32((u32)(r_edx+r_ecx*4+0xa733c4u));
    /* 00531c57: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00531c5a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531c5c: jne 0x531c4d */ if (!fZ) goto L_00531c4d;
L_00531c5e:; BB(0x00531c5e);
    /* 00531c5e: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531c61: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531c64: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531c67: jl 0x531c41 */ if ((fS!=fO)) goto L_00531c41;
L_00531c69:; BB(0x00531c69);
    /* 00531c69: fld dword ptr [ebp + 0x3bc] */ FPUSH(R_F32((u32)(r_ebp+0x3bcu)));
    /* 00531c6f: fadd dword ptr [ebp + 0x3c4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3c4u));
    /* 00531c75: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531c78: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00531c7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00531c7e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00531c85: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00531c8d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x531c92u); f_00830b74();
    /* 00531c92: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00531c95: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x531c9au); f_0082d838();
    /* 00531c9a: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 00531c9d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00531c9f: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x531ca4u); f_0082e9e4();
    /* 00531ca4: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00531ca7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00531ca9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x531caeu); f_0082d8bc();
    /* 00531cae: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 00531cb4: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00531cb7: jne 0x531cf5 */ if (!fZ) goto L_00531cf5;
L_00531cb9:; BB(0x00531cb9);
    /* 00531cb9: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531cbc: je 0x531cec */ if (fZ) goto L_00531cec;
L_00531cbe:; BB(0x00531cbe);
    /* 00531cbe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531cc0: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x531cc5u); f_007aa7b8();
L_00531cc5:; BB(0x00531cc5);
    /* 00531cc5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x531ccau); f_0082da80();
    /* 00531cca: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x531ccfu); f_00794750();
    /* 00531ccf: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x531cd4u); f_0082dab0();
    /* 00531cd4: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00531cd9: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00531cde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00531cdf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531ce1: call 0x5315f0 */ r_esp -= 4; W32(r_esp, 0x531ce6u); f_005315f0();
L_00531ce6:; BB(0x00531ce6);
    /* 00531ce6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531ce7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00531ce8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531ce9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00531cea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531ceb: ret  */ FN_RET(0x00531b60); r_esp += 4; return;
L_00531cec:; BB(0x00531cec);
    /* 00531cec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531cee: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x531cf3u); f_007aa668();
    /* 00531cf3: jmp 0x531cc5 */ goto L_00531cc5;
L_00531cf5:; BB(0x00531cf5);
    /* 00531cf5: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 00531cfb: lea edi, [ebp + 0x398] */ r_edi = (u32)(r_ebp+0x398u);
    /* 00531d01: mov ecx, edi */ r_ecx = r_edi;
    /* 00531d03: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x531d06u); call_ind(t); }
    /* 00531d06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531d08: jne 0x531d0e */ if (!fZ) goto L_00531d0e;
L_00531d0a:; BB(0x00531d0a);
    /* 00531d0a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00531d0c: jmp 0x531cc5 */ goto L_00531cc5;
L_00531d0e:; BB(0x00531d0e);
    /* 00531d0e: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 00531d14: mov ecx, edi */ r_ecx = r_edi;
    /* 00531d16: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x531d19u); call_ind(t); }
    /* 00531d19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531d1b: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x531d20u); f_008173d0();
    /* 00531d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531d22: jne 0x531d30 */ if (!fZ) goto L_00531d30;
L_00531d24:; BB(0x00531d24);
    /* 00531d24: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531d27: je 0x531d3d */ if (fZ) goto L_00531d3d;
L_00531d29:; BB(0x00531d29);
    /* 00531d29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531d2b: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x531d30u); f_007aa7b8();
L_00531d30:; BB(0x00531d30);
    /* 00531d30: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00531d36: mov ecx, edi */ r_ecx = r_edi;
    /* 00531d38: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x531d3bu); call_ind(t); }
    /* 00531d3b: jmp 0x531cc5 */ goto L_00531cc5;
L_00531d3d:; BB(0x00531d3d);
    /* 00531d3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531d3f: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x531d44u); f_007aa668();
    /* 00531d44: jmp 0x531d30 */ goto L_00531d30;
L_00531d46:; BB(0x00531d46);
    /* 00531d46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00531d48:; BB(0x00531d48);
    /* 00531d48: mov edx, dword ptr [eax + 0xa733c0] */ r_edx = R32((u32)(r_eax+0xa733c0u));
    /* 00531d4e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00531d50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531d52: je 0x531d65 */ if (fZ) goto L_00531d65;
L_00531d54:; BB(0x00531d54);
    /* 00531d54: and dword ptr [edx], 0xfffffff7 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00531d57: mov edx, dword ptr [eax + esi*4 + 0xa733c4] */ r_edx = R32((u32)(r_eax+r_esi*4+0xa733c4u));
    /* 00531d5e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00531d61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531d63: jne 0x531d54 */ if (!fZ) goto L_00531d54;
L_00531d65:; BB(0x00531d65);
    /* 00531d65: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531d68: cmp eax, 0xb0 */ {  u32 a = r_eax; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531d6d: jl 0x531d48 */ if ((fS!=fO)) goto L_00531d48;
L_00531d6f:; BB(0x00531d6f);
    /* 00531d6f: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00531d72: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x531d77u); f_0082d838();
    /* 00531d77: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 00531d7a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00531d7c: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x531d81u); f_0082e9e4();
    /* 00531d81: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00531d84: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00531d86: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x531d8bu); f_0082d8bc();
    /* 00531d8b: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00531d8e: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x531d93u); f_0082e1e8();
    /* 00531d93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531d94: jmp 0x531cc5 */ goto L_00531cc5;
}

void f_00531d9c(void) /* sub_531D9C */
{
    FN_ENTER(0x00531d9c);
    /* 00531d9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531d9d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00531d9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531da1: call 0x531654 */ r_esp -= 4; W32(r_esp, 0x531da6u); f_00531654();
    /* 00531da6: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x531dabu); f_004f7c84();
    /* 00531dab: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00531dae: je 0x531e7f */ if (fZ) goto L_00531e7f;
L_00531db4:; BB(0x00531db4);
    /* 00531db4: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 00531dba: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531dc0: jne 0x531e81 */ if (!fZ) goto L_00531e81;
L_00531dc6:; BB(0x00531dc6);
    /* 00531dc6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531dc8: call 0x533b80 */ r_esp -= 4; W32(r_esp, 0x531dcdu); f_00533b80();
    /* 00531dcd: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00531dd4: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
L_00531dda:; BB(0x00531dda);
    /* 00531dda: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531ddc: je 0x531e11 */ if (fZ) goto L_00531e11;
L_00531dde:; BB(0x00531dde);
    /* 00531dde: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00531de4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531de7: je 0x531e00 */ if (fZ) goto L_00531e00;
L_00531de9:; BB(0x00531de9);
    /* 00531de9: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
    /* 00531df3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531df5: call 0x531ee4 */ r_esp -= 4; W32(r_esp, 0x531dfau); f_00531ee4();
    /* 00531dfa: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
L_00531e00:; BB(0x00531e00);
    /* 00531e00: mov dword ptr [ebp + 0x384], 0 */ W32((u32)(r_ebp+0x384u), 0x0u);
    /* 00531e0a: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
L_00531e11:; BB(0x00531e11);
    /* 00531e11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531e13: call 0x531ee4 */ r_esp -= 4; W32(r_esp, 0x531e18u); f_00531ee4();
    /* 00531e18: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531e1a: call 0x531594 */ r_esp -= 4; W32(r_esp, 0x531e1fu); f_00531594();
    /* 00531e1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531e21: call 0x5314ec */ r_esp -= 4; W32(r_esp, 0x531e26u); f_005314ec();
    /* 00531e26: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00531e28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531e29: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00531e2c: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00531e2f: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00531e32: fld dword ptr [ebp + 0x3bc] */ FPUSH(R_F32((u32)(r_ebp+0x3bcu)));
    /* 00531e38: fld dword ptr [ebp + 0x3c4] */ FPUSH(R_F32((u32)(r_ebp+0x3c4u)));
    /* 00531e3e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00531e40: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00531e42: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00531e44: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00531e46: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00531e48: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00531e4a: fstp dword ptr [ebp + 0x304] */ W_F32((u32)(r_ebp+0x304u), ST(0)); FPOP();
    /* 00531e50: mov dword ptr [ebp + 0x300], eax */ W32((u32)(r_ebp+0x300u), r_eax);
    /* 00531e56: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00531e5c: mov dword ptr [ebp + 0x308], edx */ W32((u32)(r_ebp+0x308u), r_edx);
    /* 00531e62: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00531e65: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x531e6au); f_006946a8();
    /* 00531e6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00531e6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00531e6e: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00531e71: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00531e76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531e77: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x531e7cu); f_00805608();
    /* 00531e7c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00531e7f:; BB(0x00531e7f);
    /* 00531e7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531e80: ret  */ FN_RET(0x00531d9c); r_esp += 4; return;
L_00531e81:; BB(0x00531e81);
    /* 00531e81: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531e87: je 0x531e90 */ if (fZ) goto L_00531e90;
L_00531e89:; BB(0x00531e89);
    /* 00531e89: mov eax, 1 */ r_eax = 0x1u;
    /* 00531e8e: jmp 0x531e92 */ goto L_00531e92;
L_00531e90:; BB(0x00531e90);
    /* 00531e90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00531e92:; BB(0x00531e92);
    /* 00531e92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531e94: jne 0x531dc6 */ if (!fZ) goto L_00531dc6;
L_00531e9a:; BB(0x00531e9a);
    /* 00531e9a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00531e9d: je 0x531eb1 */ if (fZ) goto L_00531eb1;
L_00531e9f:; BB(0x00531e9f);
    /* 00531e9f: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00531ea6: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 00531eac: jmp 0x531dda */ goto L_00531dda;
L_00531eb1:; BB(0x00531eb1);
    /* 00531eb1: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00531eb8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531ebb: je 0x531ed7 */ if (fZ) goto L_00531ed7;
L_00531ebd:; BB(0x00531ebd);
    /* 00531ebd: mov dword ptr [ebp + 0x37c], 2 */ W32((u32)(r_ebp+0x37cu), 0x2u);
    /* 00531ec7: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 00531ecd: mov edx, 2 */ r_edx = 0x2u;
    /* 00531ed2: jmp 0x531dda */ goto L_00531dda;
L_00531ed7:; BB(0x00531ed7);
    /* 00531ed7: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 00531edd: jmp 0x531dda */ goto L_00531dda;
}

void f_00531ee4(void) /* sub_531EE4 */
{
    FN_ENTER(0x00531ee4);
    /* 00531ee4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00531ee5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531ee6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00531ee7: mov edi, ecx */ r_edi = r_ecx;
    /* 00531ee9: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00531ef0: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00531ef3: ja 0x531fe7 */ if ((!fC&&!fZ)) goto L_00531fe7;
L_00531ef9:; BB(0x00531ef9);
    /* 00531ef9: mov eax, dword ptr [eax*4 + 0x92296c] */ r_eax = R32((u32)(r_eax*4+0x92296cu));
    /* 00531f00: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00531fe7:; BB(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531ee4); r_esp += 4; return;
}

void f_00531f02(void)
{
    FN_ENTER(0x00531f02);
    /* 00531f02: mov ecx, edi */ r_ecx = r_edi;
    /* 00531f04: call 0x53215c */ r_esp -= 4; W32(r_esp, 0x531f09u); f_0053215c();
    /* 00531f09: jmp 0x531fe7 */ goto L_00531fe7;
L_00531fe7:; BB(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531f02); r_esp += 4; return;
}

void f_00531f0e(void)
{
    FN_ENTER(0x00531f0e);
    /* 00531f0e: mov ecx, edi */ r_ecx = r_edi;
    /* 00531f10: call 0x53235c */ r_esp -= 4; W32(r_esp, 0x531f15u); f_0053235c();
    /* 00531f15: jmp 0x531fe7 */ goto L_00531fe7;
L_00531fe7:; BB(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531f0e); r_esp += 4; return;
}

void f_00531f1a(void)
{
    FN_ENTER(0x00531f1a);
    /* 00531f1a: mov ecx, edi */ r_ecx = r_edi;
    /* 00531f1c: call 0x5323ec */ r_esp -= 4; W32(r_esp, 0x531f21u); f_005323ec();
    /* 00531f21: jmp 0x531fe7 */ goto L_00531fe7;
L_00531fe7:; BB(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531f1a); r_esp += 4; return;
}

void f_00531f26(void)
{
    FN_ENTER(0x00531f26);
    /* 00531f26: mov ecx, edi */ r_ecx = r_edi;
    /* 00531f28: call 0x532d44 */ r_esp -= 4; W32(r_esp, 0x531f2du); f_00532d44();
    /* 00531f2d: jmp 0x531fe7 */ goto L_00531fe7;
L_00531fe7:; BB(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531f26); r_esp += 4; return;
}

void f_00531f32(void)
{
    FN_ENTER(0x00531f32);
    /* 00531f32: mov ecx, edi */ r_ecx = r_edi;
    /* 00531f34: call 0x5330a0 */ r_esp -= 4; W32(r_esp, 0x531f39u); f_005330a0();
    /* 00531f39: jmp 0x531fe7 */ goto L_00531fe7;
L_00531fe7:; BB(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531f32); r_esp += 4; return;
}

void f_00531f3e(void)
{
    FN_ENTER(0x00531f3e);
    /* 00531f3e: mov ecx, edi */ r_ecx = r_edi;
    /* 00531f40: call 0x533208 */ r_esp -= 4; W32(r_esp, 0x531f45u); f_00533208();
    /* 00531f45: jmp 0x531fe7 */ goto L_00531fe7;
L_00531fe7:; BB(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531f3e); r_esp += 4; return;
}

void f_00531f4a(void)
{
    FN_ENTER(0x00531f4a);
    /* 00531f4a: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 00531f50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531f52: je 0x532086 */ if (fZ) goto L_00532086;
L_00531f58:; BB(0x00531f58);
    /* 00531f58: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531f5b: je 0x53205b */ if (fZ) goto L_0053205b;
L_00531f61:; BB(0x00531f61);
    /* 00531f61: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531f64: je 0x53200e */ if (fZ) goto L_0053200e;
L_00531f6a:; BB(0x00531f6a);
    /* 00531f6a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531f6d: je 0x531f7c */ if (fZ) goto L_00531f7c;
L_00531f6f:; BB(0x00531f6f);
    /* 00531f6f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00531f72: jne 0x531fe7 */ if (!fZ) goto L_00531fe7;
L_00531f74:; BB(0x00531f74);
    /* 00531f74: lea ebp, [edi + 0x398] */ r_ebp = (u32)(r_edi+0x398u);
    /* 00531f7a: jmp 0x531faf */ goto L_00531faf;
L_00531f7c:; BB(0x00531f7c);
    /* 00531f7c: lea ebp, [edi + 0x398] */ r_ebp = (u32)(r_edi+0x398u);
    /* 00531f82: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531f84: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x531f89u); f_00512458();
    /* 00531f89: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00531f8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531f90: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x531f95u); f_005787fc();
    /* 00531f95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531f96: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00531f9c: mov dword ptr [edi + 0x384], 4 */ W32((u32)(r_edi+0x384u), 0x4u);
    /* 00531fa6: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00531fa9: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
L_00531faf:; BB(0x00531faf);
    /* 00531faf: mov ecx, edi */ r_ecx = r_edi;
    /* 00531fb1: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x531fb6u); f_007aa094();
    /* 00531fb6: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00531fb9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00531fbb: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x531fbeu); call_ind(t); }
    /* 00531fbe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00531fc1: jne 0x531fe7 */ if (!fZ) goto L_00531fe7;
L_00531fc3:; BB(0x00531fc3);
    /* 00531fc3: jmp 0x531feb */ goto L_00531feb;
L_00531fe7:; BB(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531f4a); r_esp += 4; return;
L_00531feb:; BB(0x00531feb);
    /* 00531feb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00531fed: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00531ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531ff1: call 0x5786e8 */ r_esp -= 4; W32(r_esp, 0x531ff6u); f_005786e8();
    /* 00531ff6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00531ff7: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x531ffcu); f_008113e4();
    /* 00531ffc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531fff: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00532003: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00532008: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0053200c: jmp 0x531fe7 */ goto L_00531fe7;
L_0053200e:; BB(0x0053200e);
    /* 0053200e: mov ecx, edi */ r_ecx = r_edi;
    /* 00532010: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x532015u); f_007aa094();
    /* 00532015: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0053201b: fcomp dword ptr [0x922a78] */ fx_compare(ST(0), R_F32((u32)(0x922a78u))); FPOP();
    /* 00532021: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00532023: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00532024: jb 0x531fe7 */ if (fC) goto L_00531fe7;
L_00532026:; BB(0x00532026);
    /* 00532026: fld dword ptr [edi + 0x3bc] */ FPUSH(R_F32((u32)(r_edi+0x3bcu)));
    /* 0053202c: fsub dword ptr [edi + 0x310] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x310u));
    /* 00532032: fcom dword ptr [0x922a74] */ fx_compare(ST(0), R_F32((u32)(0x922a74u))); 
    /* 00532038: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053203a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053203b: ja 0x532053 */ if ((!fC&&!fZ)) goto L_00532053;
L_0053203d:; BB(0x0053203d);
    /* 0053203d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053203f: mov dword ptr [edi + 0x384], 3 */ W32((u32)(r_edi+0x384u), 0x3u);
    /* 00532049: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053204b: mov dword ptr [edi + 0x3bc], eax */ W32((u32)(r_edi+0x3bcu), r_eax);
    /* 00532051: jmp 0x531fe7 */ goto L_00531fe7;
L_00532053:; BB(0x00532053);
    /* 00532053: fstp dword ptr [edi + 0x3bc] */ W_F32((u32)(r_edi+0x3bcu), ST(0)); FPOP();
    /* 00532059: jmp 0x531fe7 */ goto L_00531fe7;
L_0053205b:; BB(0x0053205b);
    /* 0053205b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053205d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x532062u); f_007aa094();
    /* 00532062: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00532068: fcomp dword ptr [0x922a70] */ fx_compare(ST(0), R_F32((u32)(0x922a70u))); FPOP();
    /* 0053206e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00532070: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00532071: jb 0x531fe7 */ if (fC) goto L_00531fe7;
L_00532077:; BB(0x00532077);
    /* 00532077: mov dword ptr [edi + 0x384], 3 */ W32((u32)(r_edi+0x384u), 0x3u);
    /* 00532081: jmp 0x531fe7 */ goto L_00531fe7;
L_00532086:; BB(0x00532086);
    /* 00532086: mov ecx, edi */ r_ecx = r_edi;
    /* 00532088: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x53208du); f_00787534();
    /* 0053208d: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00532093: and eax, 0xfffdffff */ {  u32 a = r_eax; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00532098: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053209d: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 005320a3: je 0x5320ac */ if (fZ) goto L_005320ac;
L_005320a5:; BB(0x005320a5);
    /* 005320a5: mov eax, 1 */ r_eax = 0x1u;
    /* 005320aa: jmp 0x5320ae */ goto L_005320ae;
L_005320ac:; BB(0x005320ac);
    /* 005320ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005320ae:; BB(0x005320ae);
    /* 005320ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005320b0: je 0x532117 */ if (fZ) goto L_00532117;
L_005320b2:; BB(0x005320b2);
    /* 005320b2: movsx eax, word ptr [edi + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3e0u));
    /* 005320b9: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 005320c3: mov ebp, 4 */ r_ebp = 0x4u;
    /* 005320c8: mov word ptr [edi + 0xb8], bp */ W16((u32)(r_edi+0xb8u), (u16)r_ebp);
    /* 005320cf: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005320d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005320d3: jle 0x53213f */ if ((fZ||fS!=fO)) goto L_0053213f;
L_005320d5:; BB(0x005320d5);
    /* 005320d5: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_005320d8:; BB(0x005320d8);
    /* 005320d8: movzx eax, word ptr [edi + ebp*4 + 0x3cc] */ r_eax = (u32)R16((u32)(r_edi+r_ebp*4+0x3ccu));
    /* 005320e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005320e1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5320e6u); f_007b4d18();
    /* 005320e6: mov ebx, eax */ r_ebx = r_eax;
    /* 005320e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005320eb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005320ed: je 0x532104 */ if (fZ) goto L_00532104;
L_005320ef:; BB(0x005320ef);
    /* 005320ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005320f0: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x5320f5u); f_008113e4();
    /* 005320f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005320f6: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 005320fa: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00532100: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
L_00532104:; BB(0x00532104);
    /* 00532104: movsx eax, word ptr [edi + 0x3e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3e0u));
    /* 0053210b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0053210e: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00532110: jl 0x5320d8 */ if ((fS!=fO)) goto L_005320d8;
L_00532112:; BB(0x00532112);
    /* 00532112: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00532115: jmp 0x53213f */ goto L_0053213f;
L_00532117:; BB(0x00532117);
    /* 00532117: fld dword ptr [edi + 0x3bc] */ FPUSH(R_F32((u32)(r_edi+0x3bcu)));
    /* 0053211d: fdiv dword ptr [0x922a6c] */ ST(0) = ST(0) / R_F32((u32)(0x922a6cu));
    /* 00532123: fstp dword ptr [edi + 0x310] */ W_F32((u32)(r_edi+0x310u), ST(0)); FPOP();
    /* 00532129: mov eax, 9 */ r_eax = 0x9u;
    /* 0053212e: mov dword ptr [edi + 0x384], 2 */ W32((u32)(r_edi+0x384u), 0x2u);
    /* 00532138: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_0053213f:; BB(0x0053213f);
    /* 0053213f: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00532142: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00532144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532145: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532146: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00532147: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 0053214c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x532151u); f_00814298();
    /* 00532151: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00532154: jmp 0x531fe7 */ goto L_00531fe7;
}

void f_00531fc5(void)
{
    FN_ENTER(0x00531fc5);
    /* 00531fc5: mov ecx, edi */ r_ecx = r_edi;
    /* 00531fc7: call 0x5332e0 */ r_esp -= 4; W32(r_esp, 0x531fccu); f_005332e0();
    /* 00531fcc: jmp 0x531fe7 */ goto L_00531fe7;
L_00531fe7:; BB(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531fc5); r_esp += 4; return;
}

void f_00531fce(void)
{
    FN_ENTER(0x00531fce);
    /* 00531fce: mov ecx, edi */ r_ecx = r_edi;
    /* 00531fd0: call 0x5334d0 */ r_esp -= 4; W32(r_esp, 0x531fd5u); f_005334d0();
    /* 00531fd5: jmp 0x531fe7 */ goto L_00531fe7;
L_00531fe7:; BB(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531fce); r_esp += 4; return;
}

void f_00531fd7(void)
{
    FN_ENTER(0x00531fd7);
    /* 00531fd7: mov ecx, edi */ r_ecx = r_edi;
    /* 00531fd9: call 0x533a00 */ r_esp -= 4; W32(r_esp, 0x531fdeu); f_00533a00();
    /* 00531fde: jmp 0x531fe7 */ goto L_00531fe7;
L_00531fe7:; BB(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531fd7); r_esp += 4; return;
}

void f_00531fe0(void)
{
    FN_ENTER(0x00531fe0);
    /* 00531fe0: mov ecx, edi */ r_ecx = r_edi;
    /* 00531fe2: call 0x533b14 */ r_esp -= 4; W32(r_esp, 0x531fe7u); f_00533b14();
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531fe0); r_esp += 4; return;
}

void f_00531fe7(void)
{
    FN_ENTER(0x00531fe7);
    /* 00531fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00531fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531fe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00531fea: ret  */ FN_RET(0x00531fe7); r_esp += 4; return;
}

