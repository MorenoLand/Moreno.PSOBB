#include "protos.h"

void f_0070226c(void) /* sub_70226C */
{
    FN_ENTER(0x0070226c);
    /* 0070226c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070226d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070226e: mov edi, ecx */ r_edi = r_ecx;
    /* 00702270: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00702276: mov ecx, edi */ r_ecx = r_edi;
    /* 00702278: call 0x706e40 */ r_esp -= 4; W32(r_esp, 0x70227du); f_00706e40();
    /* 0070227d: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00702280: push dword ptr [edi + eax*4 + 0x40] */ { u32 v = R32((u32)(r_edi+r_eax*4+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00702284: mov ecx, edi */ r_ecx = r_edi;
    /* 00702286: call 0x706e40 */ r_esp -= 4; W32(r_esp, 0x70228bu); f_00706e40();
    /* 0070228b: mov esi, eax */ r_esi = r_eax;
    /* 0070228d: mov ecx, edi */ r_ecx = r_edi;
    /* 0070228f: call 0x707408 */ r_esp -= 4; W32(r_esp, 0x702294u); f_00707408();
    /* 00702294: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00702296: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00702299: jne 0x7022b0 */ if (!fZ) goto L_007022b0;
L_0070229b:; BB(0x0070229b);
    /* 0070229b: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0070229e: mov edx, dword ptr [edi + edx*4 + 0x24] */ r_edx = R32((u32)(r_edi+r_edx*4+0x24u));
    /* 007022a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007022a4: je 0x7022b9 */ if (fZ) goto L_007022b9;
L_007022a6:; BB(0x007022a6);
    /* 007022a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007022a7: mov ecx, edi */ r_ecx = r_edi;
    /* 007022a9: call 0x707d38 */ r_esp -= 4; W32(r_esp, 0x7022aeu); f_00707d38();
    /* 007022ae: jmp 0x7022b9 */ goto L_007022b9;
L_007022b0:; BB(0x007022b0);
    /* 007022b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007022b2: mov ecx, edi */ r_ecx = r_edi;
    /* 007022b4: call 0x7074a8 */ r_esp -= 4; W32(r_esp, 0x7022b9u); f_007074a8();
L_007022b9:; BB(0x007022b9);
    /* 007022b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007022bb: mov ecx, edi */ r_ecx = r_edi;
    /* 007022bd: call 0x7074a8 */ r_esp -= 4; W32(r_esp, 0x7022c2u); f_007074a8();
    /* 007022c2: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 007022c5: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007022c8: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 007022cb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007022cd: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007022cf: je 0x70230a */ if (fZ) goto L_0070230a;
L_007022d1:; BB(0x007022d1);
    /* 007022d1: mov esi, dword ptr [edi + 0xbc] */ r_esi = R32((u32)(r_edi+0xbcu));
    /* 007022d7: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 007022da: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 007022e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007022e2: jl 0x70230a */ if ((fS!=fO)) goto L_0070230a;
L_007022e4:; BB(0x007022e4);
    /* 007022e4: mov esi, dword ptr [edi + esi*4 + 0x70] */ r_esi = R32((u32)(r_edi+r_esi*4+0x70u));
    /* 007022e8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007022ea: je 0x70230a */ if (fZ) goto L_0070230a;
L_007022ec:; BB(0x007022ec);
    /* 007022ec: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007022f0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007022f5: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 007022f9: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 007022ff: mov dword ptr [edi + edx*4 + 0x74], 0 */ W32((u32)(r_edi+r_edx*4+0x74u), 0x0u);
    /* 00702307: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
L_0070230a:; BB(0x0070230a);
    /* 0070230a: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 00702310: mov esi, dword ptr [edi + 0x88] */ r_esi = R32((u32)(r_edi+0x88u));
    /* 00702316: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 0070231c: mov dword ptr [edi + 0x8c], esi */ W32((u32)(r_edi+0x8cu), r_esi);
    /* 00702322: mov ecx, dword ptr [edi + edx*4 + 0x24] */ r_ecx = R32((u32)(r_edi+r_edx*4+0x24u));
    /* 00702326: call 0x700fb0 */ r_esp -= 4; W32(r_esp, 0x70232bu); f_00700fb0();
    /* 0070232b: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0070232e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00702331: mov dword ptr [edi + 0x88], eax */ W32((u32)(r_edi+0x88u), r_eax);
    /* 00702337: mov esi, dword ptr [edi + edx*4 + 0x44] */ r_esi = R32((u32)(r_edi+r_edx*4+0x44u));
    /* 0070233b: mov dword ptr [edi + 0xb0], esi */ W32((u32)(r_edi+0xb0u), r_esi);
    /* 00702341: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00702344: jne 0x702352 */ if (!fZ) goto L_00702352;
L_00702346:; BB(0x00702346);
    /* 00702346: mov eax, 4 */ r_eax = 0x4u;
    /* 0070234b: mov word ptr [edi + 0xc6], ax */ W16((u32)(r_edi+0xc6u), (u16)r_eax);
L_00702352:; BB(0x00702352);
    /* 00702352: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00702353: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00702354: ret  */ FN_RET(0x0070226c); r_esp += 4; return;
}

void f_00702358(void) /* sub_702358 */
{
    FN_ENTER(0x00702358);
    /* 00702358: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00702359: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0070235b: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0070235e: mov ecx, dword ptr [ebp + eax*4 + 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0x24u));
    /* 00702362: call 0x700ff0 */ r_esp -= 4; W32(r_esp, 0x702367u); f_00700ff0();
    /* 00702367: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0070236a: push dword ptr [ebp + eax*4 + 0x24] */ { u32 v = R32((u32)(r_ebp+r_eax*4+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070236e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702370: call 0x707d20 */ r_esp -= 4; W32(r_esp, 0x702375u); f_00707d20();
    /* 00702375: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00702378: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0070237e: mov dword ptr [ebp + edx*4 + 0x44], eax */ W32((u32)(r_ebp+r_edx*4+0x44u), r_eax);
    /* 00702382: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00702385: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 00702388: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 0070238b: push dword ptr [ebp + edx*4 + 0x28] */ { u32 v = R32((u32)(r_ebp+r_edx*4+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070238f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702391: call 0x707438 */ r_esp -= 4; W32(r_esp, 0x702396u); f_00707438();
    /* 00702396: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 0070239c: mov edx, dword ptr [ebp + 0x8c] */ r_edx = R32((u32)(r_ebp+0x8cu));
    /* 007023a2: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 007023a8: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 007023ae: mov dword ptr [ebp + 0x88], edx */ W32((u32)(r_ebp+0x88u), r_edx);
    /* 007023b4: mov dword ptr [ebp + 0x8c], eax */ W32((u32)(r_ebp+0x8cu), r_eax);
    /* 007023ba: mov dword ptr [ebp + 0x90], 0xffffffff */ W32((u32)(r_ebp+0x90u), 0xffffffffu);
    /* 007023c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007023c5: ret  */ FN_RET(0x00702358); r_esp += 4; return;
}

void f_007023c8(void) /* sub_7023C8 */
{
    FN_ENTER(0x007023c8);
    /* 007023c8: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 007023ce: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007023d1: ja 0x70244a */ if ((!fC&&!fZ)) goto L_0070244a;
L_007023d3:; BB(0x007023d3);
    /* 007023d3: mov eax, dword ptr [eax*4 + 0x96e6c0] */ r_eax = R32((u32)(r_eax*4+0x96e6c0u));
    /* 007023da: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x007023c8); r_esp += 4; return;
}

void f_007023dc(void)
{
    FN_ENTER(0x007023dc);
    /* 007023dc: call 0x70244c */ r_esp -= 4; W32(r_esp, 0x7023e1u); f_0070244c();
    /* 007023e1: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x007023dc); r_esp += 4; return;
}

void f_007023e3(void)
{
    FN_ENTER(0x007023e3);
    /* 007023e3: call 0x70260c */ r_esp -= 4; W32(r_esp, 0x7023e8u); f_0070260c();
    /* 007023e8: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x007023e3); r_esp += 4; return;
}

void f_007023ea(void)
{
    FN_ENTER(0x007023ea);
    /* 007023ea: call 0x702b0c */ r_esp -= 4; W32(r_esp, 0x7023efu); f_00702b0c();
    /* 007023ef: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x007023ea); r_esp += 4; return;
}

void f_007023f1(void)
{
    FN_ENTER(0x007023f1);
    /* 007023f1: call 0x702b88 */ r_esp -= 4; W32(r_esp, 0x7023f6u); f_00702b88();
    /* 007023f6: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x007023f1); r_esp += 4; return;
}

void f_007023f8(void)
{
    FN_ENTER(0x007023f8);
    /* 007023f8: call 0x702c04 */ r_esp -= 4; W32(r_esp, 0x7023fdu); f_00702c04();
    /* 007023fd: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x007023f8); r_esp += 4; return;
}

void f_007023ff(void)
{
    FN_ENTER(0x007023ff);
    /* 007023ff: call 0x702c54 */ r_esp -= 4; W32(r_esp, 0x702404u); f_00702c54();
    /* 00702404: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x007023ff); r_esp += 4; return;
}

void f_00702406(void)
{
    FN_ENTER(0x00702406);
    /* 00702406: call 0x702cf0 */ r_esp -= 4; W32(r_esp, 0x70240bu); f_00702cf0();
    /* 0070240b: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x00702406); r_esp += 4; return;
}

void f_0070240d(void)
{
    FN_ENTER(0x0070240d);
    /* 0070240d: call 0x702d90 */ r_esp -= 4; W32(r_esp, 0x702412u); f_00702d90();
    /* 00702412: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x0070240d); r_esp += 4; return;
}

void f_00702414(void)
{
    FN_ENTER(0x00702414);
    /* 00702414: call 0x702e1c */ r_esp -= 4; W32(r_esp, 0x702419u); f_00702e1c();
    /* 00702419: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x00702414); r_esp += 4; return;
}

void f_0070241b(void)
{
    FN_ENTER(0x0070241b);
    /* 0070241b: call 0x702ec8 */ r_esp -= 4; W32(r_esp, 0x702420u); f_00702ec8();
    /* 00702420: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x0070241b); r_esp += 4; return;
}

void f_00702422(void)
{
    FN_ENTER(0x00702422);
    /* 00702422: call 0x702f44 */ r_esp -= 4; W32(r_esp, 0x702427u); f_00702f44();
    /* 00702427: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x00702422); r_esp += 4; return;
}

void f_00702429(void)
{
    FN_ENTER(0x00702429);
    /* 00702429: call 0x702fbc */ r_esp -= 4; W32(r_esp, 0x70242eu); f_00702fbc();
    /* 0070242e: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x00702429); r_esp += 4; return;
}

void f_00702430(void)
{
    FN_ENTER(0x00702430);
    /* 00702430: call 0x70300c */ r_esp -= 4; W32(r_esp, 0x702435u); f_0070300c();
    /* 00702435: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x00702430); r_esp += 4; return;
}

void f_00702437(void)
{
    FN_ENTER(0x00702437);
    /* 00702437: call 0x70305c */ r_esp -= 4; W32(r_esp, 0x70243cu); f_0070305c();
    /* 0070243c: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x00702437); r_esp += 4; return;
}

void f_0070243e(void)
{
    FN_ENTER(0x0070243e);
    /* 0070243e: call 0x703150 */ r_esp -= 4; W32(r_esp, 0x702443u); f_00703150();
    /* 00702443: jmp 0x70244a */ goto L_0070244a;
L_0070244a:; BB(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x0070243e); r_esp += 4; return;
}

void f_00702445(void)
{
    FN_ENTER(0x00702445);
    /* 00702445: call 0x7031b4 */ r_esp -= 4; W32(r_esp, 0x70244au); f_007031b4();
    /* 0070244a: ret  */ FN_RET(0x00702445); r_esp += 4; return;
}

void f_0070244a(void)
{
    FN_ENTER(0x0070244a);
    /* 0070244a: ret  */ FN_RET(0x0070244a); r_esp += 4; return;
}

void f_0070244c(void) /* sub_70244C */
{
    FN_ENTER(0x0070244c);
    /* 0070244c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070244d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0070244f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702451: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x702456u); f_00706fb0();
    /* 00702456: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702458: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x70245du); f_00706e54();
    /* 0070245d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070245f: je 0x70246f */ if (fZ) goto L_0070246f;
L_00702461:; BB(0x00702461);
    /* 00702461: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702466u); f_00707664();
    /* 00702466: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702468: call 0x706c94 */ r_esp -= 4; W32(r_esp, 0x70246du); f_00706c94();
    /* 0070246d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070246e: ret  */ FN_RET(0x0070244c); r_esp += 4; return;
L_0070246f:; BB(0x0070246f);
    /* 0070246f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702471: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702476u); f_00706e6c();
    /* 00702476: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702478: je 0x702486 */ if (fZ) goto L_00702486;
L_0070247a:; BB(0x0070247a);
    /* 0070247a: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x70247fu); f_00707678();
    /* 0070247f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702481: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x702486u); f_00702488();
L_00702486:; BB(0x00702486);
    /* 00702486: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702487: ret  */ FN_RET(0x0070244c); r_esp += 4; return;
}

void f_00702488(void) /* sub_702488 */
{
    FN_ENTER(0x00702488);
    /* 00702488: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00702489: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070248a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070248b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070248c: mov esi, ecx */ r_esi = r_ecx;
    /* 0070248e: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00702494: mov ecx, esi */ r_ecx = r_esi;
    /* 00702496: call 0x706e40 */ r_esp -= 4; W32(r_esp, 0x70249bu); f_00706e40();
    /* 0070249b: mov edi, eax */ r_edi = r_eax;
    /* 0070249d: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 007024a0: push dword ptr [esi + edx*4 + 0x40] */ { u32 v = R32((u32)(r_esi+r_edx*4+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 007024a4: mov ecx, esi */ r_ecx = r_esi;
    /* 007024a6: call 0x706e40 */ r_esp -= 4; W32(r_esp, 0x7024abu); f_00706e40();
    /* 007024ab: mov ebp, eax */ r_ebp = r_eax;
    /* 007024ad: mov ecx, esi */ r_ecx = r_esi;
    /* 007024af: call 0x7073b0 */ r_esp -= 4; W32(r_esp, 0x7024b4u); f_007073b0();
    /* 007024b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007024b6: je 0x702518 */ if (fZ) goto L_00702518;
L_007024b8:; BB(0x007024b8);
    /* 007024b8: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007024bb: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007024be: je 0x7024ed */ if (fZ) goto L_007024ed;
L_007024c0:; BB(0x007024c0);
    /* 007024c0: mov edx, dword ptr [0x96e544] */ r_edx = R32((u32)(0x96e544u));
    /* 007024c6: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 007024c9: mov ebx, dword ptr [esi + 0x80] */ r_ebx = R32((u32)(r_esi+0x80u));
    /* 007024cf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007024d1: je 0x702518 */ if (fZ) goto L_00702518;
L_007024d3:; BB(0x007024d3);
    /* 007024d3: mov edx, dword ptr [0xa96d60] */ r_edx = R32((u32)(0xa96d60u));
    /* 007024d9: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 007024dc: mov ebx, dword ptr [0x96e518] */ r_ebx = R32((u32)(0x96e518u));
    /* 007024e2: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 007024e8: mov dword ptr [edx + 0x50], ebx */ W32((u32)(r_edx+0x50u), r_ebx);
    /* 007024eb: jmp 0x702518 */ goto L_00702518;
L_007024ed:; BB(0x007024ed);
    /* 007024ed: mov edx, dword ptr [0x96e540] */ r_edx = R32((u32)(0x96e540u));
    /* 007024f3: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 007024f6: mov ebx, dword ptr [esi + 0x80] */ r_ebx = R32((u32)(r_esi+0x80u));
    /* 007024fc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007024fe: je 0x702518 */ if (fZ) goto L_00702518;
L_00702500:; BB(0x00702500);
    /* 00702500: mov edx, dword ptr [0xa96d64] */ r_edx = R32((u32)(0xa96d64u));
    /* 00702506: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00702509: mov ebx, dword ptr [0x96e518] */ r_ebx = R32((u32)(0x96e518u));
    /* 0070250f: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 00702515: mov dword ptr [edx + 0x50], ebx */ W32((u32)(r_edx+0x50u), r_ebx);
L_00702518:; BB(0x00702518);
    /* 00702518: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0070251b: mov ebx, dword ptr [esi + edx*4 + 0x24] */ r_ebx = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 0070251f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702521: je 0x70259e */ if (fZ) goto L_0070259e;
L_00702523:; BB(0x00702523);
    /* 00702523: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00702526: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00702529: jne 0x702570 */ if (!fZ) goto L_00702570;
L_0070252b:; BB(0x0070252b);
    /* 0070252b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070252e: je 0x70254f */ if (fZ) goto L_0070254f;
L_00702530:; BB(0x00702530);
    /* 00702530: push dword ptr [0xa96dc8] */ { u32 v = R32((u32)(0xa96dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00702536: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702538: call 0x700f48 */ r_esp -= 4; W32(r_esp, 0x70253du); f_00700f48();
    /* 0070253d: mov edx, dword ptr [0x96e550] */ r_edx = R32((u32)(0x96e550u));
    /* 00702543: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 00702546: mov ecx, esi */ r_ecx = r_esi;
    /* 00702548: call 0x706c78 */ r_esp -= 4; W32(r_esp, 0x70254du); f_00706c78();
    /* 0070254d: jmp 0x702582 */ goto L_00702582;
L_0070254f:; BB(0x0070254f);
    /* 0070254f: push dword ptr [0x96e548] */ { u32 v = R32((u32)(0x96e548u)); r_esp -= 4; W32(r_esp, v); }
    /* 00702555: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702557: call 0x700f48 */ r_esp -= 4; W32(r_esp, 0x70255cu); f_00700f48();
    /* 0070255c: mov edx, dword ptr [0x96e550] */ r_edx = R32((u32)(0x96e550u));
    /* 00702562: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00702564: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 00702567: mov ecx, esi */ r_ecx = r_esi;
    /* 00702569: call 0x706c5c */ r_esp -= 4; W32(r_esp, 0x70256eu); f_00706c5c();
    /* 0070256e: jmp 0x702582 */ goto L_00702582;
L_00702570:; BB(0x00702570);
    /* 00702570: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00702572: mov ecx, esi */ r_ecx = r_esi;
    /* 00702574: call 0x7073e8 */ r_esp -= 4; W32(r_esp, 0x702579u); f_007073e8();
    /* 00702579: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070257b: mov ecx, esi */ r_ecx = r_esi;
    /* 0070257d: call 0x706c40 */ r_esp -= 4; W32(r_esp, 0x702582u); f_00706c40();
L_00702582:; BB(0x00702582);
    /* 00702582: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00702584: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00702587: je 0x70259e */ if (fZ) goto L_0070259e;
L_00702589:; BB(0x00702589);
    /* 00702589: lea ebx, [esi + 0xc4] */ r_ebx = (u32)(r_esi+0xc4u);
    /* 0070258f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702591: call 0x7080ec */ r_esp -= 4; W32(r_esp, 0x702596u); f_007080ec();
    /* 00702596: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00702597: mov ecx, esi */ r_ecx = r_esi;
    /* 00702599: call 0x7070ac */ r_esp -= 4; W32(r_esp, 0x70259eu); f_007070ac();
L_0070259e:; BB(0x0070259e);
    /* 0070259e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007025a0: mov ecx, esi */ r_ecx = r_esi;
    /* 007025a2: call 0x7073e8 */ r_esp -= 4; W32(r_esp, 0x7025a7u); f_007073e8();
    /* 007025a7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007025aa: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007025ad: jne 0x7025bb */ if (!fZ) goto L_007025bb;
L_007025af:; BB(0x007025af);
    /* 007025af: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007025b1: mov ecx, esi */ r_ecx = r_esi;
    /* 007025b3: call 0x706c40 */ r_esp -= 4; W32(r_esp, 0x7025b8u); f_00706c40();
    /* 007025b8: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
L_007025bb:; BB(0x007025bb);
    /* 007025bb: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007025be: je 0x7025d5 */ if (fZ) goto L_007025d5;
L_007025c0:; BB(0x007025c0);
    /* 007025c0: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 007025c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007025c8: jle 0x7025d5 */ if ((fZ||fS!=fO)) goto L_007025d5;
L_007025ca:; BB(0x007025ca);
    /* 007025ca: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007025cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007025ce: mov ecx, esi */ r_ecx = r_esi;
    /* 007025d0: call 0x706c40 */ r_esp -= 4; W32(r_esp, 0x7025d5u); f_00706c40();
L_007025d5:; BB(0x007025d5);
    /* 007025d5: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 007025d9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007025dc: je 0x7025fe */ if (fZ) goto L_007025fe;
L_007025de:; BB(0x007025de);
    /* 007025de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007025df: mov ecx, esi */ r_ecx = r_esi;
    /* 007025e1: call 0x706f68 */ r_esp -= 4; W32(r_esp, 0x7025e6u); f_00706f68();
    /* 007025e6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007025e8: mov ecx, esi */ r_ecx = r_esi;
    /* 007025ea: call 0x706c5c */ r_esp -= 4; W32(r_esp, 0x7025efu); f_00706c5c();
L_007025ef:; BB(0x007025ef);
    /* 007025ef: mov dword ptr [esi + 0xac], 2 */ W32((u32)(r_esi+0xacu), 0x2u);
    /* 007025f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007025fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007025fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007025fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007025fd: ret  */ FN_RET(0x00702488); r_esp += 4; return;
L_007025fe:; BB(0x007025fe);
    /* 007025fe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00702600: mov ecx, esi */ r_ecx = r_esi;
    /* 00702602: call 0x706c40 */ r_esp -= 4; W32(r_esp, 0x702607u); f_00706c40();
    /* 00702607: jmp 0x7025ef */ goto L_007025ef;
}

void f_0070260c(void) /* sub_70260C */
{
    FN_ENTER(0x0070260c);
    /* 0070260c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070260d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0070260f: mov eax, dword ptr [ebp + 0xb8] */ r_eax = R32((u32)(r_ebp+0xb8u));
    /* 00702615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702617: jne 0x702663 */ if (!fZ) goto L_00702663;
L_00702619:; BB(0x00702619);
    /* 00702619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070261b: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x702620u); f_007071d8();
    /* 00702620: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702622: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x702627u); f_00706fb0();
    /* 00702627: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702629: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x70262eu); f_00706e54();
    /* 0070262e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702630: je 0x70264a */ if (fZ) goto L_0070264a;
L_00702632:; BB(0x00702632);
    /* 00702632: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702637u); f_00707664();
    /* 00702637: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702639: call 0x7028a8 */ r_esp -= 4; W32(r_esp, 0x70263eu); f_007028a8();
    /* 0070263e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702640: mov eax, 0 */ r_eax = 0x0u;
    /* 00702645: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00702648: jmp 0x70266f */ goto L_0070266f;
L_0070264a:; BB(0x0070264a);
    /* 0070264a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070264c: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702651u); f_00706e6c();
    /* 00702651: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702653: je 0x702684 */ if (fZ) goto L_00702684;
L_00702655:; BB(0x00702655);
    /* 00702655: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x70265au); f_00707678();
    /* 0070265a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070265c: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x702661u); f_00702488();
    /* 00702661: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702662: ret  */ FN_RET(0x0070260c); r_esp += 4; return;
L_00702663:; BB(0x00702663);
    /* 00702663: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00702666: jne 0x702684 */ if (!fZ) goto L_00702684;
L_00702668:; BB(0x00702668);
    /* 00702668: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070266a: call 0x702688 */ r_esp -= 4; W32(r_esp, 0x70266fu); f_00702688();
L_0070266f:; BB(0x0070266f);
    /* 0070266f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702671: je 0x702684 */ if (fZ) goto L_00702684;
L_00702673:; BB(0x00702673);
    /* 00702673: mov dword ptr [ebp + 0xb4], 0x13 */ W32((u32)(r_ebp+0xb4u), 0x13u);
    /* 0070267d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070267f: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702684u); f_007028d4();
L_00702684:; BB(0x00702684);
    /* 00702684: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702685: ret  */ FN_RET(0x0070260c); r_esp += 4; return;
}

void f_00702688(void) /* sub_702688 */
{
    FN_ENTER(0x00702688);
    /* 00702688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00702689: mov ebp, esp */ r_ebp = r_esp;
    /* 0070268b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070268d: push 0x8f0164 */ { u32 v = 0x8f0164u; r_esp -= 4; W32(r_esp, v); }
    /* 00702692: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00702698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00702699: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007026a0: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007026a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007026a6: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 007026a9: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 007026ac: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 007026af: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 007026b5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007026b8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007026ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007026bc: je 0x702781 */ if (fZ) goto L_00702781;
L_007026c2:; BB(0x007026c2);
    /* 007026c2: lea ebx, [ecx + 0xc4] */ r_ebx = (u32)(r_ecx+0xc4u);
    /* 007026c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007026c9: call 0x7070ac */ r_esp -= 4; W32(r_esp, 0x7026ceu); f_007070ac();
    /* 007026ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007026d1: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 007026d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007026d9: je 0x702763 */ if (fZ) goto L_00702763;
L_007026df:; BB(0x007026df);
    /* 007026df: push dword ptr [ecx + 0x70] */ { u32 v = R32((u32)(r_ecx+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 007026e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007026e4: call 0x708120 */ r_esp -= 4; W32(r_esp, 0x7026e9u); f_00708120();
    /* 007026e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007026ec: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 007026f2: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 007026f6: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007026f8: je 0x702716 */ if (fZ) goto L_00702716;
L_007026fa:; BB(0x007026fa);
    /* 007026fa: mov esi, 2 */ r_esi = 0x2u;
    /* 007026ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702701: call 0x70812c */ r_esp -= 4; W32(r_esp, 0x702706u); f_0070812c();
    /* 00702706: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00702709: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0070270f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x702714u); f_007127b0();
    /* 00702714: jmp 0x702724 */ goto L_00702724;
L_00702716:; BB(0x00702716);
    /* 00702716: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00702718: je 0x702744 */ if (fZ) goto L_00702744;
L_0070271a:; BB(0x0070271a);
    /* 0070271a: mov esi, 1 */ r_esi = 0x1u;
    /* 0070271f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x702724u); f_007127b0();
L_00702724:; BB(0x00702724);
    /* 00702724: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00702727: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0070272a: mov ecx, dword ptr [eax + edx*4 + 0x24] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0070272e: call 0x700f00 */ r_esp -= 4; W32(r_esp, 0x702733u); f_00700f00();
    /* 00702733: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00702736: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00702738: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 0070273e: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
L_00702744:; BB(0x00702744);
    /* 00702744: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00702747: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070274a: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0070274d: mov eax, 0 */ r_eax = 0x0u;
    /* 00702752: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00702755: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00702758: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070275f: mov esp, ebp */ r_esp = r_ebp;
    /* 00702761: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702762: ret  */ FN_RET(0x00702688); r_esp += 4; return;
L_00702763:; BB(0x00702763);
    /* 00702763: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x702768u); f_008173b4();
    /* 00702768: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070276a: jne 0x702773 */ if (!fZ) goto L_00702773;
L_0070276c:; BB(0x0070276c);
    /* 0070276c: mov esi, 2 */ r_esi = 0x2u;
    /* 00702771: jmp 0x702724 */ goto L_00702724;
L_00702773:; BB(0x00702773);
    /* 00702773: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00702776: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0070277c: jmp 0x7026df */ goto L_007026df;
L_00702781:; BB(0x00702781);
    /* 00702781: call 0x7072a8 */ r_esp -= 4; W32(r_esp, 0x702786u); f_007072a8();
    /* 00702786: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00702787: call 0x70682c */ r_esp -= 4; W32(r_esp, 0x70278cu); f_0070682c();
    /* 0070278c: mov ebx, eax */ r_ebx = r_eax;
    /* 0070278e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00702791: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00702794: je 0x702886 */ if (fZ) goto L_00702886;
L_0070279a:; BB(0x0070279a);
    /* 0070279a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0070279d: lea ecx, [edx + 0xc4] */ r_ecx = (u32)(r_edx+0xc4u);
    /* 007027a3: call 0x70811c */ r_esp -= 4; W32(r_esp, 0x7027a8u); f_0070811c();
    /* 007027a8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007027ab: mov eax, dword ptr [ebx*4 + 0x96e714] */ r_eax = R32((u32)(r_ebx*4+0x96e714u));
    /* 007027b2: fld dword ptr [0x96e73c] */ FPUSH(R_F32((u32)(0x96e73cu)));
    /* 007027b8: fadd dword ptr [0x96e538] */ ST(0) = ST(0) + R_F32((u32)(0x96e538u));
    /* 007027be: fld dword ptr [0x96e738] */ FPUSH(R_F32((u32)(0x96e738u)));
    /* 007027c4: fadd dword ptr [0x96e53c] */ ST(0) = ST(0) + R_F32((u32)(0x96e53cu));
    /* 007027ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007027cc: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 007027cf: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 007027d2: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 007027d9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 007027dc: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 007027e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7027e6u); f_005caba4();
    /* 007027e6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007027e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007027ec: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 007027ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007027f1: je 0x70289f */ if (fZ) goto L_0070289f;
L_007027f7:; BB(0x007027f7);
    /* 007027f7: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 007027fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00702805: movsx eax, word ptr [0xa9c4f4] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa9c4f4u));
    /* 0070280c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070280f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00702812: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00702815: lea esi, [ebp - 0x3c] */ r_esi = (u32)(r_ebp+0xffffffc4u);
    /* 00702818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00702819: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070281a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070281b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070281d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070281e: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x702823u); f_00728ac4();
    /* 00702823: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0070282a:; BB(0x0070282a);
    /* 0070282a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0070282d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00702830: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 00702836: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0070283d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070283f: je 0x702870 */ if (fZ) goto L_00702870;
L_00702841:; BB(0x00702841);
    /* 00702841: push dword ptr [0xa96d50] */ { u32 v = R32((u32)(0xa96d50u)); r_esp -= 4; W32(r_esp, v); }
    /* 00702847: mov ecx, eax */ r_ecx = r_eax;
    /* 00702849: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x70284eu); f_00712624();
    /* 0070284e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00702851: mov edx, dword ptr [ebx + 0x84] */ r_edx = R32((u32)(r_ebx+0x84u));
    /* 00702857: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 0070285b: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00702860: mov word ptr [edx + 0x60], ax */ W16((u32)(r_edx+0x60u), (u16)r_eax);
    /* 00702864: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
    /* 00702867: mov ecx, dword ptr [ebx + esi*4 + 0x24] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x24u));
    /* 0070286b: call 0x700f14 */ r_esp -= 4; W32(r_esp, 0x702870u); f_00700f14();
L_00702870:; BB(0x00702870);
    /* 00702870: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00702873: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00702876: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702878: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070287b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00702882: mov esp, ebp */ r_esp = r_ebp;
    /* 00702884: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702885: ret  */ FN_RET(0x00702688); r_esp += 4; return;
L_00702886:; BB(0x00702886);
    /* 00702886: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00702889: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0070288c: mov eax, 1 */ r_eax = 0x1u;
    /* 00702891: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00702894: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070289b: mov esp, ebp */ r_esp = r_ebp;
    /* 0070289d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070289e: ret  */ FN_RET(0x00702688); r_esp += 4; return;
L_0070289f:; BB(0x0070289f);
    /* 0070289f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007028a1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007028a4: jmp 0x70282a */ goto L_0070282a;
}

void f_007028a8(void) /* sub_7028A8 */
{
    FN_ENTER(0x007028a8);
    /* 007028a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007028a9: mov esi, ecx */ r_esi = r_ecx;
    /* 007028ab: mov ecx, esi */ r_ecx = r_esi;
    /* 007028ad: call 0x7072a8 */ r_esp -= 4; W32(r_esp, 0x7028b2u); f_007072a8();
    /* 007028b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007028b3: call 0x70682c */ r_esp -= 4; W32(r_esp, 0x7028b8u); f_0070682c();
    /* 007028b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007028b9: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007028bc: je 0x7028cf */ if (fZ) goto L_007028cf;
L_007028be:; BB(0x007028be);
    /* 007028be: mov dword ptr [esi + 0xb8], 1 */ W32((u32)(r_esi+0xb8u), 0x1u);
    /* 007028c8: mov eax, 1 */ r_eax = 0x1u;
    /* 007028cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007028ce: ret  */ FN_RET(0x007028a8); r_esp += 4; return;
L_007028cf:; BB(0x007028cf);
    /* 007028cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007028d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007028d2: ret  */ FN_RET(0x007028a8); r_esp += 4; return;
}

void f_007028d4(void) /* sub_7028D4 */
{
    FN_ENTER(0x007028d4);
    /* 007028d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007028d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007028d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007028d7: mov edi, ecx */ r_edi = r_ecx;
    /* 007028d9: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 007028df: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007028e2: je 0x702afc */ if (fZ) goto L_00702afc;
L_007028e8:; BB(0x007028e8);
    /* 007028e8: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007028eb: je 0x702afc */ if (fZ) goto L_00702afc;
L_007028f1:; BB(0x007028f1);
    /* 007028f1: mov dword ptr [edi + 0xb8], 0 */ W32((u32)(r_edi+0xb8u), 0x0u);
    /* 007028fb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007028fe: je 0x702aec */ if (fZ) goto L_00702aec;
L_00702904:; BB(0x00702904);
    /* 00702904: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702907: je 0x702aec */ if (fZ) goto L_00702aec;
L_0070290d:; BB(0x0070290d);
    /* 0070290d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702910: je 0x702aec */ if (fZ) goto L_00702aec;
L_00702916:; BB(0x00702916);
    /* 00702916: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702919: je 0x702aec */ if (fZ) goto L_00702aec;
L_0070291f:; BB(0x0070291f);
    /* 0070291f: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702922: je 0x702aec */ if (fZ) goto L_00702aec;
L_00702928:; BB(0x00702928);
    /* 00702928: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070292e: mov ecx, edi */ r_ecx = r_edi;
    /* 00702930: call 0x706e40 */ r_esp -= 4; W32(r_esp, 0x702935u); f_00706e40();
    /* 00702935: mov ebp, eax */ r_ebp = r_eax;
    /* 00702937: push dword ptr [edi + 0xb4] */ { u32 v = R32((u32)(r_edi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070293d: mov ecx, edi */ r_ecx = r_edi;
    /* 0070293f: call 0x706e40 */ r_esp -= 4; W32(r_esp, 0x702944u); f_00706e40();
    /* 00702944: mov esi, eax */ r_esi = r_eax;
    /* 00702946: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00702949: mov edx, dword ptr [edi + edx*4 + 0x24] */ r_edx = R32((u32)(r_edi+r_edx*4+0x24u));
    /* 0070294d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070294f: je 0x702988 */ if (fZ) goto L_00702988;
L_00702951:; BB(0x00702951);
    /* 00702951: mov eax, dword ptr [0xa96dc4] */ r_eax = R32((u32)(0xa96dc4u));
    /* 00702956: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00702959: mov eax, dword ptr [0x96e540] */ r_eax = R32((u32)(0x96e540u));
    /* 0070295e: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00702961: mov eax, dword ptr [0x96e518] */ r_eax = R32((u32)(0x96e518u));
    /* 00702966: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00702969: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0070296c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070296f: je 0x702988 */ if (fZ) goto L_00702988;
L_00702971:; BB(0x00702971);
    /* 00702971: mov ebp, dword ptr [edi + 0xbc] */ r_ebp = R32((u32)(r_edi+0xbcu));
    /* 00702977: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00702978: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 0070297b: mov dword ptr [edi + 0xbc], edx */ W32((u32)(r_edi+0xbcu), r_edx);
    /* 00702981: mov ecx, edi */ r_ecx = r_edi;
    /* 00702983: call 0x706e9c */ r_esp -= 4; W32(r_esp, 0x702988u); f_00706e9c();
L_00702988:; BB(0x00702988);
    /* 00702988: push dword ptr [edi + 0x8c] */ { u32 v = R32((u32)(r_edi+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070298e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00702990: mov ecx, edi */ r_ecx = r_edi;
    /* 00702992: call 0x7072c0 */ r_esp -= 4; W32(r_esp, 0x702997u); f_007072c0();
    /* 00702997: mov ebp, eax */ r_ebp = r_eax;
    /* 00702999: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070299b: je 0x702a20 */ if (fZ) goto L_00702a20;
L_007029a1:; BB(0x007029a1);
    /* 007029a1: push dword ptr [0x96e538] */ { u32 v = R32((u32)(0x96e538u)); r_esp -= 4; W32(r_esp, v); }
    /* 007029a7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007029a9: call 0x700f48 */ r_esp -= 4; W32(r_esp, 0x7029aeu); f_00700f48();
    /* 007029ae: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007029b0: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007029b3: je 0x7029e2 */ if (fZ) goto L_007029e2;
L_007029b5:; BB(0x007029b5);
    /* 007029b5: mov edx, dword ptr [0x96e544] */ r_edx = R32((u32)(0x96e544u));
    /* 007029bb: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 007029be: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007029c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007029c6: je 0x702a0d */ if (fZ) goto L_00702a0d;
L_007029c8:; BB(0x007029c8);
    /* 007029c8: mov edx, dword ptr [0xa96d60] */ r_edx = R32((u32)(0xa96d60u));
    /* 007029ce: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 007029d1: mov edx, dword ptr [0x96e518] */ r_edx = R32((u32)(0x96e518u));
    /* 007029d7: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007029dd: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 007029e0: jmp 0x702a0d */ goto L_00702a0d;
L_007029e2:; BB(0x007029e2);
    /* 007029e2: mov edx, dword ptr [0x96e540] */ r_edx = R32((u32)(0x96e540u));
    /* 007029e8: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 007029eb: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007029f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007029f3: je 0x702a0d */ if (fZ) goto L_00702a0d;
L_007029f5:; BB(0x007029f5);
    /* 007029f5: mov edx, dword ptr [0xa96d64] */ r_edx = R32((u32)(0xa96d64u));
    /* 007029fb: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 007029fe: mov edx, dword ptr [0x96e518] */ r_edx = R32((u32)(0x96e518u));
    /* 00702a04: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 00702a0a: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
L_00702a0d:; BB(0x00702a0d);
    /* 00702a0d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00702a0f: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00702a12: je 0x702a22 */ if (fZ) goto L_00702a22;
L_00702a14:; BB(0x00702a14);
    /* 00702a14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00702a15: mov ecx, edi */ r_ecx = r_edi;
    /* 00702a17: call 0x707338 */ r_esp -= 4; W32(r_esp, 0x702a1cu); f_00707338();
    /* 00702a1c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00702a1e: jmp 0x702a22 */ goto L_00702a22;
L_00702a20:; BB(0x00702a20);
    /* 00702a20: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
L_00702a22:; BB(0x00702a22);
    /* 00702a22: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00702a25: jne 0x702ab0 */ if (!fZ) goto L_00702ab0;
L_00702a2b:; BB(0x00702a2b);
    /* 00702a2b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00702a2e: je 0x702a6f */ if (fZ) goto L_00702a6f;
L_00702a30:; BB(0x00702a30);
    /* 00702a30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00702a32: push dword ptr [edi + 0x8c] */ { u32 v = R32((u32)(r_edi+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00702a38: mov ecx, edi */ r_ecx = r_edi;
    /* 00702a3a: push dword ptr [edi + 0xb4] */ { u32 v = R32((u32)(r_edi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00702a40: call 0x707218 */ r_esp -= 4; W32(r_esp, 0x702a45u); f_00707218();
    /* 00702a45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00702a46: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00702a48: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 00702a4e: mov ecx, edi */ r_ecx = r_edi;
    /* 00702a50: call 0x7072c0 */ r_esp -= 4; W32(r_esp, 0x702a55u); f_007072c0();
    /* 00702a55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702a57: je 0x702a66 */ if (fZ) goto L_00702a66;
L_00702a59:; BB(0x00702a59);
    /* 00702a59: push dword ptr [0xa96dc8] */ { u32 v = R32((u32)(0xa96dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00702a5f: mov ecx, eax */ r_ecx = r_eax;
    /* 00702a61: call 0x700f48 */ r_esp -= 4; W32(r_esp, 0x702a66u); f_00700f48();
L_00702a66:; BB(0x00702a66);
    /* 00702a66: mov ecx, edi */ r_ecx = r_edi;
    /* 00702a68: call 0x706c78 */ r_esp -= 4; W32(r_esp, 0x702a6du); f_00706c78();
    /* 00702a6d: jmp 0x702ab9 */ goto L_00702ab9;
L_00702a6f:; BB(0x00702a6f);
    /* 00702a6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00702a71: push dword ptr [edi + 0x8c] */ { u32 v = R32((u32)(r_edi+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00702a77: mov ecx, edi */ r_ecx = r_edi;
    /* 00702a79: push dword ptr [edi + 0xb4] */ { u32 v = R32((u32)(r_edi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00702a7f: call 0x707218 */ r_esp -= 4; W32(r_esp, 0x702a84u); f_00707218();
    /* 00702a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00702a85: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00702a87: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 00702a8d: mov ecx, edi */ r_ecx = r_edi;
    /* 00702a8f: call 0x7072c0 */ r_esp -= 4; W32(r_esp, 0x702a94u); f_007072c0();
    /* 00702a94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702a96: je 0x702aa5 */ if (fZ) goto L_00702aa5;
L_00702a98:; BB(0x00702a98);
    /* 00702a98: push dword ptr [0x96e548] */ { u32 v = R32((u32)(0x96e548u)); r_esp -= 4; W32(r_esp, v); }
    /* 00702a9e: mov ecx, eax */ r_ecx = r_eax;
    /* 00702aa0: call 0x700f48 */ r_esp -= 4; W32(r_esp, 0x702aa5u); f_00700f48();
L_00702aa5:; BB(0x00702aa5);
    /* 00702aa5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00702aa7: mov ecx, edi */ r_ecx = r_edi;
    /* 00702aa9: call 0x706c5c */ r_esp -= 4; W32(r_esp, 0x702aaeu); f_00706c5c();
    /* 00702aae: jmp 0x702ab9 */ goto L_00702ab9;
L_00702ab0:; BB(0x00702ab0);
    /* 00702ab0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00702ab2: mov ecx, edi */ r_ecx = r_edi;
    /* 00702ab4: call 0x706c40 */ r_esp -= 4; W32(r_esp, 0x702ab9u); f_00706c40();
L_00702ab9:; BB(0x00702ab9);
    /* 00702ab9: movsx eax, word ptr [esi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00702abd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702ac0: je 0x702ae1 */ if (fZ) goto L_00702ae1;
L_00702ac2:; BB(0x00702ac2);
    /* 00702ac2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00702ac3: mov ecx, edi */ r_ecx = r_edi;
    /* 00702ac5: call 0x706f68 */ r_esp -= 4; W32(r_esp, 0x702acau); f_00706f68();
    /* 00702aca: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00702acc: mov ecx, edi */ r_ecx = r_edi;
    /* 00702ace: call 0x706c5c */ r_esp -= 4; W32(r_esp, 0x702ad3u); f_00706c5c();
L_00702ad3:; BB(0x00702ad3);
    /* 00702ad3: mov dword ptr [edi + 0xac], 1 */ W32((u32)(r_edi+0xacu), 0x1u);
    /* 00702add: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702ade: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00702adf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00702ae0: ret  */ FN_RET(0x007028d4); r_esp += 4; return;
L_00702ae1:; BB(0x00702ae1);
    /* 00702ae1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00702ae3: mov ecx, edi */ r_ecx = r_edi;
    /* 00702ae5: call 0x706c40 */ r_esp -= 4; W32(r_esp, 0x702aeau); f_00706c40();
    /* 00702aea: jmp 0x702ad3 */ goto L_00702ad3;
L_00702aec:; BB(0x00702aec);
    /* 00702aec: lea ecx, [edi + 0xc4] */ r_ecx = (u32)(r_edi+0xc4u);
    /* 00702af2: call 0x70812c */ r_esp -= 4; W32(r_esp, 0x702af7u); f_0070812c();
    /* 00702af7: jmp 0x702928 */ goto L_00702928;
L_00702afc:; BB(0x00702afc);
    /* 00702afc: call 0x7060ec */ r_esp -= 4; W32(r_esp, 0x702b01u); f_007060ec();
    /* 00702b01: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00702b07: jmp 0x7028f1 */ goto L_007028f1;
}

void f_00702b0c(void) /* sub_702B0C */
{
    FN_ENTER(0x00702b0c);
    /* 00702b0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00702b0d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00702b0f: mov eax, dword ptr [ebp + 0xb8] */ r_eax = R32((u32)(r_ebp+0xb8u));
    /* 00702b15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702b17: jne 0x702b63 */ if (!fZ) goto L_00702b63;
L_00702b19:; BB(0x00702b19);
    /* 00702b19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702b1b: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x702b20u); f_007071d8();
    /* 00702b20: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702b22: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x702b27u); f_00706fb0();
    /* 00702b27: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702b29: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x702b2eu); f_00706e54();
    /* 00702b2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702b30: je 0x702b4a */ if (fZ) goto L_00702b4a;
L_00702b32:; BB(0x00702b32);
    /* 00702b32: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702b37u); f_00707664();
    /* 00702b37: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702b39: call 0x7028a8 */ r_esp -= 4; W32(r_esp, 0x702b3eu); f_007028a8();
    /* 00702b3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702b40: mov eax, 0 */ r_eax = 0x0u;
    /* 00702b45: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00702b48: jmp 0x702b6f */ goto L_00702b6f;
L_00702b4a:; BB(0x00702b4a);
    /* 00702b4a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702b4c: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702b51u); f_00706e6c();
    /* 00702b51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702b53: je 0x702b84 */ if (fZ) goto L_00702b84;
L_00702b55:; BB(0x00702b55);
    /* 00702b55: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x702b5au); f_00707678();
    /* 00702b5a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702b5c: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x702b61u); f_00702488();
    /* 00702b61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702b62: ret  */ FN_RET(0x00702b0c); r_esp += 4; return;
L_00702b63:; BB(0x00702b63);
    /* 00702b63: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00702b66: jne 0x702b84 */ if (!fZ) goto L_00702b84;
L_00702b68:; BB(0x00702b68);
    /* 00702b68: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702b6a: call 0x702688 */ r_esp -= 4; W32(r_esp, 0x702b6fu); f_00702688();
L_00702b6f:; BB(0x00702b6f);
    /* 00702b6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702b71: je 0x702b84 */ if (fZ) goto L_00702b84;
L_00702b73:; BB(0x00702b73);
    /* 00702b73: mov dword ptr [ebp + 0xb4], 0x12 */ W32((u32)(r_ebp+0xb4u), 0x12u);
    /* 00702b7d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702b7f: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702b84u); f_007028d4();
L_00702b84:; BB(0x00702b84);
    /* 00702b84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702b85: ret  */ FN_RET(0x00702b0c); r_esp += 4; return;
}

void f_00702b88(void) /* sub_702B88 */
{
    FN_ENTER(0x00702b88);
    /* 00702b88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00702b89: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00702b8b: mov eax, dword ptr [ebp + 0xb8] */ r_eax = R32((u32)(r_ebp+0xb8u));
    /* 00702b91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702b93: jne 0x702bdf */ if (!fZ) goto L_00702bdf;
L_00702b95:; BB(0x00702b95);
    /* 00702b95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702b97: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x702b9cu); f_007071d8();
    /* 00702b9c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702b9e: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x702ba3u); f_00706fb0();
    /* 00702ba3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702ba5: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x702baau); f_00706e54();
    /* 00702baa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702bac: je 0x702bc6 */ if (fZ) goto L_00702bc6;
L_00702bae:; BB(0x00702bae);
    /* 00702bae: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702bb3u); f_00707664();
    /* 00702bb3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702bb5: call 0x7028a8 */ r_esp -= 4; W32(r_esp, 0x702bbau); f_007028a8();
    /* 00702bba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702bbc: mov eax, 0 */ r_eax = 0x0u;
    /* 00702bc1: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00702bc4: jmp 0x702beb */ goto L_00702beb;
L_00702bc6:; BB(0x00702bc6);
    /* 00702bc6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702bc8: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702bcdu); f_00706e6c();
    /* 00702bcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702bcf: je 0x702c00 */ if (fZ) goto L_00702c00;
L_00702bd1:; BB(0x00702bd1);
    /* 00702bd1: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x702bd6u); f_00707678();
    /* 00702bd6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702bd8: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x702bddu); f_00702488();
    /* 00702bdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702bde: ret  */ FN_RET(0x00702b88); r_esp += 4; return;
L_00702bdf:; BB(0x00702bdf);
    /* 00702bdf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00702be2: jne 0x702c00 */ if (!fZ) goto L_00702c00;
L_00702be4:; BB(0x00702be4);
    /* 00702be4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702be6: call 0x702688 */ r_esp -= 4; W32(r_esp, 0x702bebu); f_00702688();
L_00702beb:; BB(0x00702beb);
    /* 00702beb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702bed: je 0x702c00 */ if (fZ) goto L_00702c00;
L_00702bef:; BB(0x00702bef);
    /* 00702bef: mov dword ptr [ebp + 0xb4], 0x10 */ W32((u32)(r_ebp+0xb4u), 0x10u);
    /* 00702bf9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702bfb: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702c00u); f_007028d4();
L_00702c00:; BB(0x00702c00);
    /* 00702c00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702c01: ret  */ FN_RET(0x00702b88); r_esp += 4; return;
}

void f_00702c04(void) /* sub_702C04 */
{
    FN_ENTER(0x00702c04);
    /* 00702c04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00702c05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00702c07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702c09: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x702c0eu); f_007071d8();
    /* 00702c0e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702c10: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x702c15u); f_00706fb0();
    /* 00702c15: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702c17: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x702c1cu); f_00706e54();
    /* 00702c1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702c1e: je 0x702c38 */ if (fZ) goto L_00702c38;
L_00702c20:; BB(0x00702c20);
    /* 00702c20: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702c25u); f_00707664();
    /* 00702c25: mov dword ptr [ebx + 0xb4], 0xf */ W32((u32)(r_ebx+0xb4u), 0xfu);
    /* 00702c2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702c31: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702c36u); f_007028d4();
    /* 00702c36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702c37: ret  */ FN_RET(0x00702c04); r_esp += 4; return;
L_00702c38:; BB(0x00702c38);
    /* 00702c38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702c3a: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702c3fu); f_00706e6c();
    /* 00702c3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702c41: je 0x702c4f */ if (fZ) goto L_00702c4f;
L_00702c43:; BB(0x00702c43);
    /* 00702c43: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x702c48u); f_00707678();
    /* 00702c48: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702c4a: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x702c4fu); f_00702488();
L_00702c4f:; BB(0x00702c4f);
    /* 00702c4f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702c50: ret  */ FN_RET(0x00702c04); r_esp += 4; return;
}

void f_00702c54(void) /* sub_702C54 */
{
    FN_ENTER(0x00702c54);
    /* 00702c54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00702c55: mov esi, ecx */ r_esi = r_ecx;
    /* 00702c57: mov ecx, esi */ r_ecx = r_esi;
    /* 00702c59: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x702c5eu); f_007071d8();
    /* 00702c5e: mov ecx, esi */ r_ecx = r_esi;
    /* 00702c60: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x702c65u); f_00706fb0();
    /* 00702c65: mov ecx, esi */ r_ecx = r_esi;
    /* 00702c67: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x702c6cu); f_00706e54();
    /* 00702c6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702c6e: je 0x702cb6 */ if (fZ) goto L_00702cb6;
L_00702c70:; BB(0x00702c70);
    /* 00702c70: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702c75u); f_00707664();
    /* 00702c75: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00702c78: mov ecx, dword ptr [esi + eax*4 + 0x24] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x24u));
    /* 00702c7c: call 0x700f98 */ r_esp -= 4; W32(r_esp, 0x702c81u); f_00700f98();
    /* 00702c81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00702c84: cmp eax, 0x2c8 */ {  u32 a = r_eax; u32 b = 0x2c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702c89: je 0x702ccf */ if (fZ) goto L_00702ccf;
L_00702c8b:; BB(0x00702c8b);
    /* 00702c8b: mov dword ptr [esi + 0xb4], 0xe */ W32((u32)(r_esi+0xb4u), 0xeu);
    /* 00702c95: mov eax, 4 */ r_eax = 0x4u;
    /* 00702c9a: mov word ptr [esi + 0xc6], ax */ W16((u32)(r_esi+0xc6u), (u16)r_eax);
    /* 00702ca1: mov edx, 1 */ r_edx = 0x1u;
    /* 00702ca6: mov word ptr [esi + 0xc4], dx */ W16((u32)(r_esi+0xc4u), (u16)r_edx);
L_00702cad:; BB(0x00702cad);
    /* 00702cad: mov ecx, esi */ r_ecx = r_esi;
    /* 00702caf: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702cb4u); f_007028d4();
    /* 00702cb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00702cb5: ret  */ FN_RET(0x00702c54); r_esp += 4; return;
L_00702cb6:; BB(0x00702cb6);
    /* 00702cb6: mov ecx, esi */ r_ecx = r_esi;
    /* 00702cb8: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702cbdu); f_00706e6c();
    /* 00702cbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702cbf: je 0x702ccd */ if (fZ) goto L_00702ccd;
L_00702cc1:; BB(0x00702cc1);
    /* 00702cc1: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x702cc6u); f_00707678();
    /* 00702cc6: mov ecx, esi */ r_ecx = r_esi;
    /* 00702cc8: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x702ccdu); f_00702488();
L_00702ccd:; BB(0x00702ccd);
    /* 00702ccd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00702cce: ret  */ FN_RET(0x00702c54); r_esp += 4; return;
L_00702ccf:; BB(0x00702ccf);
    /* 00702ccf: mov dword ptr [esi + 0xb4], 0x11 */ W32((u32)(r_esi+0xb4u), 0x11u);
    /* 00702cd9: mov eax, 5 */ r_eax = 0x5u;
    /* 00702cde: mov word ptr [esi + 0xc6], ax */ W16((u32)(r_esi+0xc6u), (u16)r_eax);
    /* 00702ce5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00702ce7: mov word ptr [esi + 0xc4], dx */ W16((u32)(r_esi+0xc4u), (u16)r_edx);
    /* 00702cee: jmp 0x702cad */ goto L_00702cad;
}

void f_00702cf0(void) /* sub_702CF0 */
{
    FN_ENTER(0x00702cf0);
    /* 00702cf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00702cf1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00702cf3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702cf5: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x702cfau); f_007071d8();
    /* 00702cfa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702cfc: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x702d01u); f_00706e54();
    /* 00702d01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702d03: je 0x702d1a */ if (fZ) goto L_00702d1a;
L_00702d05:; BB(0x00702d05);
    /* 00702d05: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702d0au); f_00707664();
    /* 00702d0a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702d0c: call 0x702d34 */ r_esp -= 4; W32(r_esp, 0x702d11u); f_00702d34();
    /* 00702d11: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702d13: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702d18u); f_007028d4();
    /* 00702d18: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702d19: ret  */ FN_RET(0x00702cf0); r_esp += 4; return;
L_00702d1a:; BB(0x00702d1a);
    /* 00702d1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702d1c: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702d21u); f_00706e6c();
    /* 00702d21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702d23: je 0x702d31 */ if (fZ) goto L_00702d31;
L_00702d25:; BB(0x00702d25);
    /* 00702d25: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x702d2au); f_00707678();
    /* 00702d2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702d2c: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x702d31u); f_00702488();
L_00702d31:; BB(0x00702d31);
    /* 00702d31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702d32: ret  */ FN_RET(0x00702cf0); r_esp += 4; return;
}

void f_00702d34(void) /* sub_702D34 */
{
    FN_ENTER(0x00702d34);
    /* 00702d34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00702d35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00702d37: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00702d3a: mov eax, 0x37 */ r_eax = 0x37u;
    /* 00702d3f: mov dword ptr [ebx + 0xb4], 0xd */ W32((u32)(r_ebx+0xb4u), 0xdu);
    /* 00702d49: mov word ptr [ebx + 0xfc], ax */ W16((u32)(r_ebx+0xfcu), (u16)r_eax);
    /* 00702d50: mov ecx, dword ptr [ebx + edx*4 + 0x24] */ r_ecx = R32((u32)(r_ebx+r_edx*4+0x24u));
    /* 00702d54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702d56: je 0x702d8b */ if (fZ) goto L_00702d8b;
L_00702d58:; BB(0x00702d58);
    /* 00702d58: call 0x700f98 */ r_esp -= 4; W32(r_esp, 0x702d5du); f_00700f98();
    /* 00702d5d: mov word ptr [ebx + 0xfc], ax */ W16((u32)(r_ebx+0xfcu), (u16)r_eax);
    /* 00702d64: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00702d67: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702d6a: jne 0x702d82 */ if (!fZ) goto L_00702d82;
L_00702d6c:; BB(0x00702d6c);
    /* 00702d6c: mov dword ptr [ebx + 0xb4], 0x11 */ W32((u32)(r_ebx+0xb4u), 0x11u);
    /* 00702d76: mov eax, 5 */ r_eax = 0x5u;
    /* 00702d7b: mov word ptr [ebx + 0xc6], ax */ W16((u32)(r_ebx+0xc6u), (u16)r_eax);
L_00702d82:; BB(0x00702d82);
    /* 00702d82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702d84: mov word ptr [ebx + 0xc4], ax */ W16((u32)(r_ebx+0xc4u), (u16)r_eax);
L_00702d8b:; BB(0x00702d8b);
    /* 00702d8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702d8c: ret  */ FN_RET(0x00702d34); r_esp += 4; return;
}

void f_00702d90(void) /* sub_702D90 */
{
    FN_ENTER(0x00702d90);
    /* 00702d90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00702d91: mov esi, ecx */ r_esi = r_ecx;
    /* 00702d93: mov ecx, esi */ r_ecx = r_esi;
    /* 00702d95: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x702d9au); f_007071d8();
    /* 00702d9a: mov ecx, esi */ r_ecx = r_esi;
    /* 00702d9c: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x702da1u); f_00706fb0();
    /* 00702da1: mov ecx, esi */ r_ecx = r_esi;
    /* 00702da3: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x702da8u); f_00706e54();
    /* 00702da8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702daa: je 0x702dc5 */ if (fZ) goto L_00702dc5;
L_00702dac:; BB(0x00702dac);
    /* 00702dac: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702db1u); f_00707664();
    /* 00702db1: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00702db7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702dba: je 0x702dde */ if (fZ) goto L_00702dde;
L_00702dbc:; BB(0x00702dbc);
    /* 00702dbc: mov ecx, esi */ r_ecx = r_esi;
    /* 00702dbe: call 0x706c94 */ r_esp -= 4; W32(r_esp, 0x702dc3u); f_00706c94();
    /* 00702dc3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00702dc4: ret  */ FN_RET(0x00702d90); r_esp += 4; return;
L_00702dc5:; BB(0x00702dc5);
    /* 00702dc5: mov ecx, esi */ r_ecx = r_esi;
    /* 00702dc7: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702dccu); f_00706e6c();
    /* 00702dcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702dce: je 0x702ddc */ if (fZ) goto L_00702ddc;
L_00702dd0:; BB(0x00702dd0);
    /* 00702dd0: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x702dd5u); f_00707678();
    /* 00702dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 00702dd7: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x702ddcu); f_00702488();
L_00702ddc:; BB(0x00702ddc);
    /* 00702ddc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00702ddd: ret  */ FN_RET(0x00702d90); r_esp += 4; return;
L_00702dde:; BB(0x00702dde);
    /* 00702dde: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00702de1: mov ecx, dword ptr [esi + eax*4 + 0x24] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x24u));
    /* 00702de5: call 0x700f98 */ r_esp -= 4; W32(r_esp, 0x702deau); f_00700f98();
    /* 00702dea: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00702ded: cmp eax, 0x685 */ {  u32 a = r_eax; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702df2: je 0x702dfd */ if (fZ) goto L_00702dfd;
L_00702df4:; BB(0x00702df4);
    /* 00702df4: mov ecx, esi */ r_ecx = r_esi;
    /* 00702df6: call 0x706c94 */ r_esp -= 4; W32(r_esp, 0x702dfbu); f_00706c94();
    /* 00702dfb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00702dfc: ret  */ FN_RET(0x00702d90); r_esp += 4; return;
L_00702dfd:; BB(0x00702dfd);
    /* 00702dfd: mov dword ptr [esi + 0xb4], 0x14 */ W32((u32)(r_esi+0xb4u), 0x14u);
    /* 00702e07: mov ecx, esi */ r_ecx = r_esi;
    /* 00702e09: mov dword ptr [esi + 0x8c], 0xffffffc4 */ W32((u32)(r_esi+0x8cu), 0xffffffc4u);
    /* 00702e13: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702e18u); f_007028d4();
    /* 00702e18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00702e19: ret  */ FN_RET(0x00702d90); r_esp += 4; return;
}

void f_00702e1c(void) /* sub_702E1C */
{
    FN_ENTER(0x00702e1c);
    /* 00702e1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00702e1d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00702e1f: mov eax, dword ptr [ebp + 0xb8] */ r_eax = R32((u32)(r_ebp+0xb8u));
    /* 00702e25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702e27: jne 0x702e6c */ if (!fZ) goto L_00702e6c;
L_00702e29:; BB(0x00702e29);
    /* 00702e29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702e2b: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x702e30u); f_00706fb0();
    /* 00702e30: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702e32: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x702e37u); f_00706e54();
    /* 00702e37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702e39: je 0x702e53 */ if (fZ) goto L_00702e53;
L_00702e3b:; BB(0x00702e3b);
    /* 00702e3b: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702e40u); f_00707664();
    /* 00702e40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702e42: call 0x7028a8 */ r_esp -= 4; W32(r_esp, 0x702e47u); f_007028a8();
    /* 00702e47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702e49: mov eax, 0 */ r_eax = 0x0u;
    /* 00702e4e: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00702e51: jmp 0x702e78 */ goto L_00702e78;
L_00702e53:; BB(0x00702e53);
    /* 00702e53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702e55: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702e5au); f_00706e6c();
    /* 00702e5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702e5c: je 0x702ec4 */ if (fZ) goto L_00702ec4;
L_00702e5e:; BB(0x00702e5e);
    /* 00702e5e: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x702e63u); f_00707678();
    /* 00702e63: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702e65: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x702e6au); f_00702488();
    /* 00702e6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702e6b: ret  */ FN_RET(0x00702e1c); r_esp += 4; return;
L_00702e6c:; BB(0x00702e6c);
    /* 00702e6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00702e6f: jne 0x702ec4 */ if (!fZ) goto L_00702ec4;
L_00702e71:; BB(0x00702e71);
    /* 00702e71: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702e73: call 0x702688 */ r_esp -= 4; W32(r_esp, 0x702e78u); f_00702688();
L_00702e78:; BB(0x00702e78);
    /* 00702e78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702e7a: je 0x702ec4 */ if (fZ) goto L_00702ec4;
L_00702e7c:; BB(0x00702e7c);
    /* 00702e7c: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00702e7f: mov ecx, dword ptr [ebp + eax*4 + 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0x24u));
    /* 00702e83: call 0x700f98 */ r_esp -= 4; W32(r_esp, 0x702e88u); f_00700f98();
    /* 00702e88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00702e89: call 0x706470 */ r_esp -= 4; W32(r_esp, 0x702e8eu); f_00706470();
    /* 00702e8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00702e8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702e91: je 0x702e9f */ if (fZ) goto L_00702e9f;
L_00702e93:; BB(0x00702e93);
    /* 00702e93: mov dword ptr [ebp + 0xb4], 0xa */ W32((u32)(r_ebp+0xb4u), 0xau);
    /* 00702e9d: jmp 0x702eb3 */ goto L_00702eb3;
L_00702e9f:; BB(0x00702e9f);
    /* 00702e9f: mov dword ptr [ebp + 0xb4], 0xb */ W32((u32)(r_ebp+0xb4u), 0xbu);
    /* 00702ea9: mov dword ptr [ebp + 0x90], 0xffffffff */ W32((u32)(r_ebp+0x90u), 0xffffffffu);
L_00702eb3:; BB(0x00702eb3);
    /* 00702eb3: mov dword ptr [ebp + 0x8c], 0xffffffce */ W32((u32)(r_ebp+0x8cu), 0xffffffceu);
    /* 00702ebd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702ebf: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702ec4u); f_007028d4();
L_00702ec4:; BB(0x00702ec4);
    /* 00702ec4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702ec5: ret  */ FN_RET(0x00702e1c); r_esp += 4; return;
}

void f_00702ec8(void) /* sub_702EC8 */
{
    FN_ENTER(0x00702ec8);
    /* 00702ec8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00702ec9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00702ecb: mov eax, dword ptr [ebp + 0xb8] */ r_eax = R32((u32)(r_ebp+0xb8u));
    /* 00702ed1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702ed3: jne 0x702f1f */ if (!fZ) goto L_00702f1f;
L_00702ed5:; BB(0x00702ed5);
    /* 00702ed5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702ed7: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x702edcu); f_007071d8();
    /* 00702edc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702ede: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x702ee3u); f_00706fb0();
    /* 00702ee3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702ee5: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x702eeau); f_00706e54();
    /* 00702eea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702eec: je 0x702f06 */ if (fZ) goto L_00702f06;
L_00702eee:; BB(0x00702eee);
    /* 00702eee: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702ef3u); f_00707664();
    /* 00702ef3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702ef5: call 0x7028a8 */ r_esp -= 4; W32(r_esp, 0x702efau); f_007028a8();
    /* 00702efa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702efc: mov eax, 0 */ r_eax = 0x0u;
    /* 00702f01: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00702f04: jmp 0x702f2b */ goto L_00702f2b;
L_00702f06:; BB(0x00702f06);
    /* 00702f06: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702f08: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702f0du); f_00706e6c();
    /* 00702f0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702f0f: je 0x702f40 */ if (fZ) goto L_00702f40;
L_00702f11:; BB(0x00702f11);
    /* 00702f11: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x702f16u); f_00707678();
    /* 00702f16: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702f18: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x702f1du); f_00702488();
    /* 00702f1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702f1e: ret  */ FN_RET(0x00702ec8); r_esp += 4; return;
L_00702f1f:; BB(0x00702f1f);
    /* 00702f1f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00702f22: jne 0x702f40 */ if (!fZ) goto L_00702f40;
L_00702f24:; BB(0x00702f24);
    /* 00702f24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702f26: call 0x702688 */ r_esp -= 4; W32(r_esp, 0x702f2bu); f_00702688();
L_00702f2b:; BB(0x00702f2b);
    /* 00702f2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702f2d: je 0x702f40 */ if (fZ) goto L_00702f40;
L_00702f2f:; BB(0x00702f2f);
    /* 00702f2f: mov dword ptr [ebp + 0xb4], 9 */ W32((u32)(r_ebp+0xb4u), 0x9u);
    /* 00702f39: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702f3b: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702f40u); f_007028d4();
L_00702f40:; BB(0x00702f40);
    /* 00702f40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702f41: ret  */ FN_RET(0x00702ec8); r_esp += 4; return;
}

void f_00702f44(void) /* sub_702F44 */
{
    FN_ENTER(0x00702f44);
    /* 00702f44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00702f45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00702f47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702f49: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x702f4eu); f_007071d8();
    /* 00702f4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702f50: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x702f55u); f_00706e54();
    /* 00702f55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702f57: je 0x702f6e */ if (fZ) goto L_00702f6e;
L_00702f59:; BB(0x00702f59);
    /* 00702f59: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702f5eu); f_00707664();
    /* 00702f5e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702f60: call 0x702f88 */ r_esp -= 4; W32(r_esp, 0x702f65u); f_00702f88();
    /* 00702f65: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702f67: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702f6cu); f_007028d4();
    /* 00702f6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702f6d: ret  */ FN_RET(0x00702f44); r_esp += 4; return;
L_00702f6e:; BB(0x00702f6e);
    /* 00702f6e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702f70: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702f75u); f_00706e6c();
    /* 00702f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702f77: je 0x702f85 */ if (fZ) goto L_00702f85;
L_00702f79:; BB(0x00702f79);
    /* 00702f79: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702f7eu); f_00707664();
    /* 00702f7e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702f80: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x702f85u); f_00702488();
L_00702f85:; BB(0x00702f85);
    /* 00702f85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702f86: ret  */ FN_RET(0x00702f44); r_esp += 4; return;
}

void f_00702f61(void)
{
    FN_ENTER(0x00702f61);
    /* 00702f61: and eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00702f63: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00702f65: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702f67: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702f6cu); f_007028d4();
    /* 00702f6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702f6d: ret  */ FN_RET(0x00702f61); r_esp += 4; return;
}

void f_00702f88(void) /* sub_702F88 */
{
    FN_ENTER(0x00702f88);
    /* 00702f88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00702f89: mov edi, ecx */ r_edi = r_ecx;
    /* 00702f8b: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00702f8e: mov eax, 0x37 */ r_eax = 0x37u;
    /* 00702f93: mov dword ptr [edi + 0xb4], 8 */ W32((u32)(r_edi+0xb4u), 0x8u);
    /* 00702f9d: mov word ptr [edi + 0xfc], ax */ W16((u32)(r_edi+0xfcu), (u16)r_eax);
    /* 00702fa4: mov ecx, dword ptr [edi + edx*4 + 0x24] */ r_ecx = R32((u32)(r_edi+r_edx*4+0x24u));
    /* 00702fa8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702faa: je 0x702fb8 */ if (fZ) goto L_00702fb8;
L_00702fac:; BB(0x00702fac);
    /* 00702fac: call 0x700f98 */ r_esp -= 4; W32(r_esp, 0x702fb1u); f_00700f98();
    /* 00702fb1: mov word ptr [edi + 0xfc], ax */ W16((u32)(r_edi+0xfcu), (u16)r_eax);
L_00702fb8:; BB(0x00702fb8);
    /* 00702fb8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00702fb9: ret  */ FN_RET(0x00702f88); r_esp += 4; return;
}

void f_00702fbc(void) /* sub_702FBC */
{
    FN_ENTER(0x00702fbc);
    /* 00702fbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00702fbd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00702fbf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702fc1: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x702fc6u); f_00706fb0();
    /* 00702fc6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702fc8: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x702fcdu); f_00706e54();
    /* 00702fcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702fcf: je 0x702ff3 */ if (fZ) goto L_00702ff3;
L_00702fd1:; BB(0x00702fd1);
    /* 00702fd1: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x702fd6u); f_00707664();
    /* 00702fd6: mov dword ptr [ebp + 0xb4], 0x14 */ W32((u32)(r_ebp+0xb4u), 0x14u);
    /* 00702fe0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702fe2: mov dword ptr [ebp + 0x8c], 0xffffffc4 */ W32((u32)(r_ebp+0x8cu), 0xffffffc4u);
    /* 00702fec: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x702ff1u); f_007028d4();
    /* 00702ff1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702ff2: ret  */ FN_RET(0x00702fbc); r_esp += 4; return;
L_00702ff3:; BB(0x00702ff3);
    /* 00702ff3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702ff5: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702ffau); f_00706e6c();
    /* 00702ffa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702ffc: je 0x70300a */ if (fZ) goto L_0070300a;
L_00702ffe:; BB(0x00702ffe);
    /* 00702ffe: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x703003u); f_00707678();
    /* 00703003: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00703005: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x70300au); f_00702488();
L_0070300a:; BB(0x0070300a);
    /* 0070300a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070300b: ret  */ FN_RET(0x00702fbc); r_esp += 4; return;
}

