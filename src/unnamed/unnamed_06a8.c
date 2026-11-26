#include "protos.h"

void f_006a805c(void) /* sub_6A805C */
{
    FN_ENTER(0x006a805c);
    /* 006a805c: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 006a805f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8060: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a8065u); f_0068d5a8();
    /* 006a8065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a8066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8068: je 0x6a8071 */ if (fZ) goto L_006a8071;
L_006a806a:; BB(0x006a806a);
    /* 006a806a: mov ecx, eax */ r_ecx = r_eax;
    /* 006a806c: call 0x68fd14 */ r_esp -= 4; W32(r_esp, 0x6a8071u); f_0068fd14();
L_006a8071:; BB(0x006a8071);
    /* 006a8071: ret  */ FN_RET(0x006a805c); r_esp += 4; return;
}

void f_006a8074(void)
{
    FN_ENTER(0x006a8074);
    /* 006a8074: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a8075: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a8079: mov byte ptr [esp], 0x3a */ W8((u32)(r_esp), 0x3au);
    /* 006a807d: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 006a8082: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a8085: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006a8087: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006a808a: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x6a808fu); f_006a9e70();
    /* 006a808f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8091: je 0x6a80b2 */ if (fZ) goto L_006a80b2;
L_006a8093:; BB(0x006a8093);
    /* 006a8093: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 006a8098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8099: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a809eu); f_0068d5a8();
    /* 006a809e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a809f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a80a1: je 0x6a80b2 */ if (fZ) goto L_006a80b2;
L_006a80a3:; BB(0x006a80a3);
    /* 006a80a3: mov edx, dword ptr [eax + 0x524] */ r_edx = R32((u32)(r_eax+0x524u));
    /* 006a80a9: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a80ac: mov dword ptr [eax + 0x524], edx */ W32((u32)(r_eax+0x524u), r_edx);
L_006a80b2:; BB(0x006a80b2);
    /* 006a80b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a80b3: ret  */ FN_RET(0x006a8074); r_esp += 4; return;
}

void f_006a80b4(void) /* sub_6A80B4 */
{
    FN_ENTER(0x006a80b4);
    /* 006a80b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a80b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a80b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a80b7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a80ba: mov edi, ecx */ r_edi = r_ecx;
    /* 006a80bc: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 006a80c0: movzx ebp, word ptr [esp + 0x1c] */ r_ebp = (u32)R16((u32)(r_esp+0x1cu));
    /* 006a80c5: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 006a80c8: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 006a80cb: fld dword ptr [0x966668] */ FPUSH(R_F32((u32)(0x966668u)));
    /* 006a80d1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006a80d3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a80d5: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a80d8: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 006a80db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a80dc: jbe 0x6a8101 */ if ((fC||fZ)) goto L_006a8101;
L_006a80de:; BB(0x006a80de);
    /* 006a80de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a80e0: fld dword ptr [0x966664] */ FPUSH(R_F32((u32)(0x966664u)));
    /* 006a80e6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006a80e8: fcom dword ptr [0x96665c] */ fx_compare(ST(0), R_F32((u32)(0x96665cu))); 
    /* 006a80ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a80f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a80f1: jae 0x6a80fc */ if (!fC) goto L_006a80fc;
L_006a80f3:; BB(0x006a80f3);
    /* 006a80f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a80f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a80f7: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 006a80fa: jmp 0x6a8132 */ goto L_006a8132;
L_006a80fc:; BB(0x006a80fc);
    /* 006a80fc: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 006a80ff: jmp 0x6a8132 */ goto L_006a8132;
L_006a8101:; BB(0x006a8101);
    /* 006a8101: fld dword ptr [0x966664] */ FPUSH(R_F32((u32)(0x966664u)));
    /* 006a8107: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 006a8109: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 006a810b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a810d: fst dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0));
    /* 006a8110: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a8111: ja 0x6a8129 */ if ((!fC&&!fZ)) goto L_006a8129;
L_006a8113:; BB(0x006a8113);
    /* 006a8113: fcomp dword ptr [0x966660] */ fx_compare(ST(0), R_F32((u32)(0x966660u))); FPOP();
    /* 006a8119: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a811b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a811c: jae 0x6a8132 */ if (!fC) goto L_006a8132;
L_006a811e:; BB(0x006a811e);
    /* 006a811e: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 006a8121: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a8124: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 006a8127: jmp 0x6a8132 */ goto L_006a8132;
L_006a8129:; BB(0x006a8129);
    /* 006a8129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a812b: mov ecx, edi */ r_ecx = r_edi;
    /* 006a812d: call 0x6a7f48 */ r_esp -= 4; W32(r_esp, 0x6a8132u); f_006a7f48();
L_006a8132:; BB(0x006a8132);
    /* 006a8132: mov dword ptr [edi + 0x4c], 8 */ W32((u32)(r_edi+0x4cu), 0x8u);
    /* 006a8139: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a813a: add dword ptr [edi + 0x50], 1 */ { u32 ad = (u32)(r_edi+0x50u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a813e: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 006a8142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8143: call 0x71827c */ r_esp -= 4; W32(r_esp, 0x6a8148u); f_0071827c();
    /* 006a8148: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a814b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a814d: je 0x6a8164 */ if (fZ) goto L_006a8164;
L_006a814f:; BB(0x006a814f);
    /* 006a814f: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 006a8156: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8159: jne 0x6a8164 */ if (!fZ) goto L_006a8164;
L_006a815b:; BB(0x006a815b);
    /* 006a815b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a815e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a815f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a8160: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a8161: ret 8 */ FN_RET(0x006a80b4); r_esp += 12; return;
L_006a8164:; BB(0x006a8164);
    /* 006a8164: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 006a8168: mov byte ptr [esp], 0x38 */ W8((u32)(r_esp), 0x38u);
    /* 006a816c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a816e: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 006a8173: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006a8178: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 006a817d: mov word ptr [esp + 4], bp */ W16((u32)(r_esp+0x4u), (u16)r_ebp);
    /* 006a8182: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a8185: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a818au); f_008003e0();
    /* 006a818a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a818d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a818e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a818f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a8190: ret 8 */ FN_RET(0x006a80b4); r_esp += 12; return;
}

void f_006a8194(void) /* sub_6A8194 */
{
    FN_ENTER(0x006a8194);
    /* 006a8194: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a8195: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a8198: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006a819c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a819e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a81a3: mov byte ptr [esp], 0x38 */ W8((u32)(r_esp), 0x38u);
    /* 006a81a7: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006a81ac: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006a81b1: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 006a81b6: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 006a81b9: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006a81bc: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 006a81bf: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006a81c3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a81c6: call 0x6a9adc */ r_esp -= 4; W32(r_esp, 0x6a81cbu); f_006a9adc();
    /* 006a81cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a81cd: je 0x6a8206 */ if (fZ) goto L_006a8206;
L_006a81cf:; BB(0x006a81cf);
    /* 006a81cf: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 006a81d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a81d5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a81dau); f_0068d5a8();
    /* 006a81da: mov ebp, eax */ r_ebp = r_eax;
    /* 006a81dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a81df: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a81e1: je 0x6a8206 */ if (fZ) goto L_006a8206;
L_006a81e3:; BB(0x006a81e3);
    /* 006a81e3: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x6a81e8u); f_00807d60();
    /* 006a81e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a81ea: je 0x6a8206 */ if (fZ) goto L_006a8206;
L_006a81ec:; BB(0x006a81ec);
    /* 006a81ec: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 006a81f2: cmp edx, dword ptr [ebp + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a81f8: jne 0x6a8206 */ if (!fZ) goto L_006a8206;
L_006a81fa:; BB(0x006a81fa);
    /* 006a81fa: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 006a81ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8200: call 0x69b6dc */ r_esp -= 4; W32(r_esp, 0x6a8205u); f_0069b6dc();
    /* 006a8205: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006a8206:; BB(0x006a8206);
    /* 006a8206: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a8209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a820a: ret  */ FN_RET(0x006a8194); r_esp += 4; return;
}

void f_006a820c(void) /* sub_6A820C */
{
    FN_ENTER(0x006a820c);
    /* 006a820c: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 006a820f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a8211: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 006a8214: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 006a8217: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a821a: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 006a821d: ret  */ FN_RET(0x006a820c); r_esp += 4; return;
}

void f_006a8220(void) /* sub_6A8220 */
{
    FN_ENTER(0x006a8220);
    /* 006a8220: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 006a8223: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a8226: jge 0x6a823d */ if ((fS==fO)) goto L_006a823d;
L_006a8228:; BB(0x006a8228);
    /* 006a8228: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 006a822b: fcomp dword ptr [0x966658] */ fx_compare(ST(0), R_F32((u32)(0x966658u))); FPOP();
    /* 006a8231: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a8233: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a8234: jbe 0x6a823d */ if ((fC||fZ)) goto L_006a823d;
L_006a8236:; BB(0x006a8236);
    /* 006a8236: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 006a8239: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a823b: jl 0x6a8240 */ if ((fS!=fO)) goto L_006a8240;
L_006a823d:; BB(0x006a823d);
    /* 006a823d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a823f: ret  */ FN_RET(0x006a8220); r_esp += 4; return;
L_006a8240:; BB(0x006a8240);
    /* 006a8240: mov eax, 1 */ r_eax = 0x1u;
    /* 006a8245: ret  */ FN_RET(0x006a8220); r_esp += 4; return;
}

void f_006a8248(void) /* sub_6A8248 */
{
    FN_ENTER(0x006a8248);
    /* 006a8248: movsx edx, word ptr [ecx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 006a824c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a824e: jl 0x6a825c */ if ((fS!=fO)) goto L_006a825c;
L_006a8250:; BB(0x006a8250);
    /* 006a8250: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a8253: jge 0x6a825c */ if ((fS==fO)) goto L_006a825c;
L_006a8255:; BB(0x006a8255);
    /* 006a8255: mov eax, 1 */ r_eax = 0x1u;
    /* 006a825a: jmp 0x6a8263 */ goto L_006a8263;
L_006a825c:; BB(0x006a825c);
    /* 006a825c: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a825f: je 0x6a8255 */ if (fZ) goto L_006a8255;
L_006a8261:; BB(0x006a8261);
    /* 006a8261: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a8263:; BB(0x006a8263);
    /* 006a8263: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8265: jne 0x6a8269 */ if (!fZ) goto L_006a8269;
L_006a8267:; BB(0x006a8267);
    /* 006a8267: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a8269:; BB(0x006a8269);
    /* 006a8269: mov eax, edx */ r_eax = r_edx;
    /* 006a826b: ret  */ FN_RET(0x006a8248); r_esp += 4; return;
}

void f_006a826c(void) /* sub_6A826C */
{
    FN_ENTER(0x006a826c);
    /* 006a826c: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 006a8271: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a8273: jl 0x6a827a */ if ((fS!=fO)) goto L_006a827a;
L_006a8275:; BB(0x006a8275);
    /* 006a8275: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8278: jle 0x6a827c */ if ((fZ||fS!=fO)) goto L_006a827c;
L_006a827a:; BB(0x006a827a);
    /* 006a827a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a827c:; BB(0x006a827c);
    /* 006a827c: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 006a8280: ret 4 */ FN_RET(0x006a826c); r_esp += 8; return;
}

void f_006a8284(void) /* sub_6A8284 */
{
    FN_ENTER(0x006a8284);
    /* 006a8284: movsx edx, word ptr [ecx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 006a8288: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a828a: jl 0x6a8291 */ if ((fS!=fO)) goto L_006a8291;
L_006a828c:; BB(0x006a828c);
    /* 006a828c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a828f: jle 0x6a8299 */ if ((fZ||fS!=fO)) goto L_006a8299;
L_006a8291:; BB(0x006a8291);
    /* 006a8291: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a8293: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8295: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
L_006a8299:; BB(0x006a8299);
    /* 006a8299: mov eax, edx */ r_eax = r_edx;
    /* 006a829b: ret  */ FN_RET(0x006a8284); r_esp += 4; return;
}

void f_006a829c(void) /* sub_6A829C */
{
    FN_ENTER(0x006a829c);
    /* 006a829c: mov dword ptr [0xa947a0], 0x3f800000 */ W32((u32)(0xa947a0u), 0x3f800000u);
    /* 006a82a6: mov dword ptr [0xa947a4], 0x41000000 */ W32((u32)(0xa947a4u), 0x41000000u);
    /* 006a82b0: mov dword ptr [0xa947a8], 0x3fc00000 */ W32((u32)(0xa947a8u), 0x3fc00000u);
    /* 006a82ba: ret  */ FN_RET(0x006a829c); r_esp += 4; return;
}

void f_006a82bc(void) /* sub_6A82BC */
{
    FN_ENTER(0x006a82bc);
    /* 006a82bc: mov dword ptr [ecx + 0xc], 0x3f800000 */ W32((u32)(r_ecx+0xcu), 0x3f800000u);
    /* 006a82c3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a82c5: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 006a82cc: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a82d1: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 006a82d4: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 006a82d8: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 006a82df: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 006a82e3: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006a82e6: mov word ptr [ecx + 0x14], ax */ W16((u32)(r_ecx+0x14u), (u16)r_eax);
    /* 006a82ea: mov word ptr [ecx + 0x16], dx */ W16((u32)(r_ecx+0x16u), (u16)r_edx);
    /* 006a82ee: mov word ptr [ecx + 0x18], ax */ W16((u32)(r_ecx+0x18u), (u16)r_eax);
    /* 006a82f2: mov word ptr [ecx + 0x1a], dx */ W16((u32)(r_ecx+0x1au), (u16)r_edx);
    /* 006a82f6: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 006a82fa: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 006a82fe: mov word ptr [ecx + 0x20], ax */ W16((u32)(r_ecx+0x20u), (u16)r_eax);
    /* 006a8302: mov word ptr [ecx + 0x22], dx */ W16((u32)(r_ecx+0x22u), (u16)r_edx);
    /* 006a8306: mov word ptr [ecx + 0x24], ax */ W16((u32)(r_ecx+0x24u), (u16)r_eax);
    /* 006a830a: mov word ptr [ecx + 0x26], dx */ W16((u32)(r_ecx+0x26u), (u16)r_edx);
    /* 006a830e: mov word ptr [ecx + 0x28], ax */ W16((u32)(r_ecx+0x28u), (u16)r_eax);
    /* 006a8312: mov word ptr [ecx + 0x2a], dx */ W16((u32)(r_ecx+0x2au), (u16)r_edx);
    /* 006a8316: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 006a831a: mov word ptr [ecx + 0x2e], dx */ W16((u32)(r_ecx+0x2eu), (u16)r_edx);
    /* 006a831e: mov word ptr [ecx + 0x30], ax */ W16((u32)(r_ecx+0x30u), (u16)r_eax);
    /* 006a8322: mov word ptr [ecx + 0x32], dx */ W16((u32)(r_ecx+0x32u), (u16)r_edx);
    /* 006a8326: mov word ptr [ecx + 0x34], ax */ W16((u32)(r_ecx+0x34u), (u16)r_eax);
    /* 006a832a: mov word ptr [ecx + 0x36], dx */ W16((u32)(r_ecx+0x36u), (u16)r_edx);
    /* 006a832e: mov word ptr [ecx + 0x38], ax */ W16((u32)(r_ecx+0x38u), (u16)r_eax);
    /* 006a8332: mov word ptr [ecx + 0x3a], dx */ W16((u32)(r_ecx+0x3au), (u16)r_edx);
    /* 006a8336: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 006a8339: mov byte ptr [ecx + 0x44], dl */ W8((u32)(r_ecx+0x44u), (u8)r_edx);
    /* 006a833c: mov byte ptr [ecx + 0x45], dl */ W8((u32)(r_ecx+0x45u), (u8)r_edx);
    /* 006a833f: mov byte ptr [ecx + 0x46], dl */ W8((u32)(r_ecx+0x46u), (u8)r_edx);
    /* 006a8342: mov byte ptr [ecx + 0x47], dl */ W8((u32)(r_ecx+0x47u), (u8)r_edx);
    /* 006a8345: mov byte ptr [ecx + 0x48], dl */ W8((u32)(r_ecx+0x48u), (u8)r_edx);
    /* 006a8348: mov byte ptr [ecx + 0x49], dl */ W8((u32)(r_ecx+0x49u), (u8)r_edx);
    /* 006a834b: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 006a834e: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 006a8351: ret  */ FN_RET(0x006a82bc); r_esp += 4; return;
}

void f_006a8354(void) /* sub_6A8354 */
{
    FN_ENTER(0x006a8354);
    /* 006a8354: movsx eax, word ptr [ecx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 006a8358: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a835a: jl 0x6a8361 */ if ((fS!=fO)) goto L_006a8361;
L_006a835c:; BB(0x006a835c);
    /* 006a835c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a835f: jl 0x6a8368 */ if ((fS!=fO)) goto L_006a8368;
L_006a8361:; BB(0x006a8361);
    /* 006a8361: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8364: je 0x6a8368 */ if (fZ) goto L_006a8368;
L_006a8366:; BB(0x006a8366);
    /* 006a8366: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a8368:; BB(0x006a8368);
    /* 006a8368: ret  */ FN_RET(0x006a8354); r_esp += 4; return;
}

void f_006a836c(void) /* sub_6A836C */
{
    FN_ENTER(0x006a836c);
    /* 006a836c: mov eax, ecx */ r_eax = r_ecx;
    /* 006a836e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006a8371: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a8374: je 0x6a8399 */ if (fZ) goto L_006a8399;
L_006a8376:; BB(0x006a8376);
    /* 006a8376: lea eax, [ecx + 0x18] */ r_eax = (u32)(r_ecx+0x18u);
    /* 006a8379: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006a837c: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a837f: je 0x6a8399 */ if (fZ) goto L_006a8399;
L_006a8381:; BB(0x006a8381);
    /* 006a8381: lea eax, [ecx + 0x30] */ r_eax = (u32)(r_ecx+0x30u);
    /* 006a8384: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006a8387: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a838a: je 0x6a8399 */ if (fZ) goto L_006a8399;
L_006a838c:; BB(0x006a838c);
    /* 006a838c: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 006a838f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006a8392: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a8395: je 0x6a8399 */ if (fZ) goto L_006a8399;
L_006a8397:; BB(0x006a8397);
    /* 006a8397: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a8399:; BB(0x006a8399);
    /* 006a8399: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a839b: je 0x6a83b7 */ if (fZ) goto L_006a83b7;
L_006a839d:; BB(0x006a839d);
    /* 006a839d: movzx ecx, word ptr [esp + 4] */ r_ecx = (u32)R16((u32)(r_esp+0x4u));
    /* 006a83a2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006a83a5: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a83a8: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006a83ab: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 006a83b0: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 006a83b3: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
L_006a83b7:; BB(0x006a83b7);
    /* 006a83b7: ret 8 */ FN_RET(0x006a836c); r_esp += 12; return;
}

void f_006a83bc(void) /* sub_6A83BC */
{
    FN_ENTER(0x006a83bc);
    /* 006a83bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a83bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a83be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a83bf: mov edx, ecx */ r_edx = r_ecx;
    /* 006a83c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a83c3: mov edi, eax */ r_edi = r_eax;
    /* 006a83c5: mov esi, edx */ r_esi = r_edx;
L_006a83c7:; BB(0x006a83c7);
    /* 006a83c7: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006a83ca: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a83cc: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006a83ce: movzx ecx, word ptr [esi + ebx*8] */ r_ecx = (u32)R16((u32)(r_esi+r_ebx*8));
    /* 006a83d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a83d3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a83d8u); f_0068d5a8();
    /* 006a83d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a83d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a83db: je 0x6a83f5 */ if (fZ) goto L_006a83f5;
L_006a83dd:; BB(0x006a83dd);
    /* 006a83dd: mov ecx, dword ptr [eax + 0x524] */ r_ecx = R32((u32)(r_eax+0x524u));
    /* 006a83e3: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a83e6: je 0x6a83ef */ if (fZ) goto L_006a83ef;
L_006a83e8:; BB(0x006a83e8);
    /* 006a83e8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006a83ed: jmp 0x6a83f1 */ goto L_006a83f1;
L_006a83ef:; BB(0x006a83ef);
    /* 006a83ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006a83f1:; BB(0x006a83f1);
    /* 006a83f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a83f3: jne 0x6a8406 */ if (!fZ) goto L_006a8406;
L_006a83f5:; BB(0x006a83f5);
    /* 006a83f5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a83f8: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a83fb: jl 0x6a83c7 */ if ((fS!=fO)) goto L_006a83c7;
L_006a83fd:; BB(0x006a83fd);
    /* 006a83fd: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a8402: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a8403: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a8404: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a8405: ret  */ FN_RET(0x006a83bc); r_esp += 4; return;
L_006a8406:; BB(0x006a8406);
    /* 006a8406: mov eax, ebx */ r_eax = r_ebx;
    /* 006a8408: mov edx, esi */ r_edx = r_esi;
    /* 006a840a: movzx eax, word ptr [edx + eax*8] */ r_eax = (u32)R16((u32)(r_edx+r_eax*8));
    /* 006a840e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a840f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a8410: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a8411: ret  */ FN_RET(0x006a83bc); r_esp += 4; return;
}

void f_006a8414(void) /* sub_6A8414 */
{
    FN_ENTER(0x006a8414);
    /* 006a8414: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a8415: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a8416: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a8417: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8418: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a8419: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006a841c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a841e: mov eax, ecx */ r_eax = r_ecx;
    /* 006a8420: mov ebp, eax */ r_ebp = r_eax;
    /* 006a8422: mov esi, edx */ r_esi = r_edx;
L_006a8424:; BB(0x006a8424);
    /* 006a8424: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006a8427: movzx edi, word ptr [esi + ecx] */ r_edi = (u32)R16((u32)(r_esi+r_ecx));
    /* 006a842b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a842c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a8431u); f_0068d5a8();
    /* 006a8431: mov ebx, eax */ r_ebx = r_eax;
    /* 006a8433: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a8436: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8438: je 0x6a849a */ if (fZ) goto L_006a849a;
L_006a843a:; BB(0x006a843a);
    /* 006a843a: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 006a843f: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8441: je 0x6a849a */ if (fZ) goto L_006a849a;
L_006a8443:; BB(0x006a8443);
    /* 006a8443: mov eax, dword ptr [ebx + 0x524] */ r_eax = R32((u32)(r_ebx+0x524u));
    /* 006a8449: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a844b: je 0x6a8454 */ if (fZ) goto L_006a8454;
L_006a844d:; BB(0x006a844d);
    /* 006a844d: mov eax, 1 */ r_eax = 0x1u;
    /* 006a8452: jmp 0x6a8456 */ goto L_006a8456;
L_006a8454:; BB(0x006a8454);
    /* 006a8454: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a8456:; BB(0x006a8456);
    /* 006a8456: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8458: je 0x6a849a */ if (fZ) goto L_006a849a;
L_006a845a:; BB(0x006a845a);
    /* 006a845a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a845b: movzx edi, word ptr [esp + 0x1c] */ r_edi = (u32)R16((u32)(r_esp+0x1cu));
    /* 006a8460: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a8461: call 0x71827c */ r_esp -= 4; W32(r_esp, 0x6a8466u); f_0071827c();
    /* 006a8466: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a8469: movzx ecx, word ptr [esp + 0x18] */ r_ecx = (u32)R16((u32)(r_esp+0x18u));
    /* 006a846e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006a8470:; BB(0x006a8470);
    /* 006a8470: movzx eax, word ptr [ebp + edi*4 + 8] */ r_eax = (u32)R16((u32)(r_ebp+r_edi*4+0x8u));
    /* 006a8475: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 006a8478: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a847a: je 0x6a84ca */ if (fZ) goto L_006a84ca;
L_006a847c:; BB(0x006a847c);
    /* 006a847c: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8481: je 0x6a84b1 */ if (fZ) goto L_006a84b1;
L_006a8483:; BB(0x006a8483);
    /* 006a8483: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a8486: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a8489: jl 0x6a8470 */ if ((fS!=fO)) goto L_006a8470;
L_006a848b:; BB(0x006a848b);
    /* 006a848b: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a8490: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 006a8492: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a8494: call dword ptr [edi + 0x13c] */ { u32 t = R32((u32)(r_edi+0x13cu)); r_esp -= 4; W32(r_esp, 0x6a849au); call_ind(t); }
L_006a849a:; BB(0x006a849a);
    /* 006a849a: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a849d: add ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006a84a0: cmp esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a84a3: jl 0x6a8424 */ if ((fS!=fO)) goto L_006a8424;
L_006a84a9:; BB(0x006a84a9);
    /* 006a84a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a84aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a84ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a84ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a84ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a84ae: ret 4 */ FN_RET(0x006a8414); r_esp += 8; return;
L_006a84b1:; BB(0x006a84b1);
    /* 006a84b1: movzx edi, word ptr [esp + 0x18] */ r_edi = (u32)R16((u32)(r_esp+0x18u));
    /* 006a84b6: mov word ptr [ebp + edx*2 + 8], di */ W16((u32)(r_ebp+r_edx*2+0x8u), (u16)r_edi);
    /* 006a84bb: movzx edi, word ptr [ebp + edx*2 + 0xa] */ r_edi = (u32)R16((u32)(r_ebp+r_edx*2+0xau));
    /* 006a84c0: add edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a84c3: mov word ptr [ebp + edx*2 + 0xa], di */ W16((u32)(r_ebp+r_edx*2+0xau), (u16)r_edi);
    /* 006a84c8: jmp 0x6a848b */ goto L_006a848b;
L_006a84ca:; BB(0x006a84ca);
    /* 006a84ca: movzx edi, word ptr [ebp + edx*2 + 0xa] */ r_edi = (u32)R16((u32)(r_ebp+r_edx*2+0xau));
    /* 006a84cf: add edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a84d2: mov word ptr [ebp + edx*2 + 0xa], di */ W16((u32)(r_ebp+r_edx*2+0xau), (u16)r_edi);
    /* 006a84d7: jmp 0x6a848b */ goto L_006a848b;
}

void f_006a84dc(void) /* sub_6A84DC */
{
    FN_ENTER(0x006a84dc);
    /* 006a84dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a84dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a84de: movzx esi, word ptr [esp + 0xc] */ r_esi = (u32)R16((u32)(r_esp+0xcu));
    /* 006a84e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a84e5: mov eax, ecx */ r_eax = r_ecx;
L_006a84e7:; BB(0x006a84e7);
    /* 006a84e7: movzx ebx, word ptr [edx + ecx] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx));
    /* 006a84eb: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a84ed: je 0x6a8501 */ if (fZ) goto L_006a8501;
L_006a84ef:; BB(0x006a84ef);
    /* 006a84ef: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a84f2: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a84f5: cmp edx, 0x60 */ {  u32 a = r_edx; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a84f8: jl 0x6a84e7 */ if ((fS!=fO)) goto L_006a84e7;
L_006a84fa:; BB(0x006a84fa);
    /* 006a84fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a84fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a84fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a84fe: ret 4 */ FN_RET(0x006a84dc); r_esp += 8; return;
L_006a8501:; BB(0x006a8501);
    /* 006a8501: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a8504: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a8505: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a8506: ret 4 */ FN_RET(0x006a84dc); r_esp += 8; return;
}

void f_006a850c(void) /* sub_6A850C */
{
    FN_ENTER(0x006a850c);
    /* 006a850c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a850d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a850e: mov edx, ecx */ r_edx = r_ecx;
    /* 006a8510: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a8512: mov ebx, eax */ r_ebx = r_eax;
    /* 006a8514: mov esi, edx */ r_esi = r_edx;
L_006a8516:; BB(0x006a8516);
    /* 006a8516: movzx eax, word ptr [ebx + esi] */ r_eax = (u32)R16((u32)(r_ebx+r_esi));
    /* 006a851a: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a851d: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8522: je 0x6a8545 */ if (fZ) goto L_006a8545;
L_006a8524:; BB(0x006a8524);
    /* 006a8524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8525: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a852au); f_0068d5a8();
    /* 006a852a: mov edx, eax */ r_edx = r_eax;
    /* 006a852c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a852f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8531: je 0x6a8545 */ if (fZ) goto L_006a8545;
L_006a8533:; BB(0x006a8533);
    /* 006a8533: mov eax, dword ptr [edx + 0x524] */ r_eax = R32((u32)(r_edx+0x524u));
    /* 006a8539: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a853c: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a853f: mov dword ptr [edx + 0x524], eax */ W32((u32)(r_edx+0x524u), r_eax);
L_006a8545:; BB(0x006a8545);
    /* 006a8545: cmp ebx, 0x60 */ {  u32 a = r_ebx; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8548: jl 0x6a8516 */ if ((fS!=fO)) goto L_006a8516;
L_006a854a:; BB(0x006a854a);
    /* 006a854a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a854b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a854c: ret  */ FN_RET(0x006a850c); r_esp += 4; return;
}

void f_006a8550(void) /* sub_6A8550 */
{
    FN_ENTER(0x006a8550);
    /* 006a8550: mov dword ptr [0xa947ac], 0x3f800000 */ W32((u32)(0xa947acu), 0x3f800000u);
    /* 006a855a: mov dword ptr [0xa947b0], 0x41000000 */ W32((u32)(0xa947b0u), 0x41000000u);
    /* 006a8564: mov dword ptr [0xa947b4], 0x3fc00000 */ W32((u32)(0xa947b4u), 0x3fc00000u);
    /* 006a856e: ret  */ FN_RET(0x006a8550); r_esp += 4; return;
}

void f_006a8570(void) /* sub_6A8570 */
{
    FN_ENTER(0x006a8570);
    /* 006a8570: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a8571: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a8572: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a8573: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8574: mov edx, ecx */ r_edx = r_ecx;
    /* 006a8576: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a8578: mov ecx, edx */ r_ecx = r_edx;
    /* 006a857a: movzx edi, word ptr [esp + 0x14] */ r_edi = (u32)R16((u32)(r_esp+0x14u));
    /* 006a857f: mov ebp, eax */ r_ebp = r_eax;
    /* 006a8581: mov esi, edx */ r_esi = r_edx;
    /* 006a8583: mov ebx, ecx */ r_ebx = r_ecx;
L_006a8585:; BB(0x006a8585);
    /* 006a8585: movzx eax, word ptr [ebp + esi] */ r_eax = (u32)R16((u32)(r_ebp+r_esi));
    /* 006a858a: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a858c: je 0x6a85a0 */ if (fZ) goto L_006a85a0;
L_006a858e:; BB(0x006a858e);
    /* 006a858e: add ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006a8591: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a8594: cmp ebp, 0x60 */ {  u32 a = r_ebp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8597: jl 0x6a8585 */ if ((fS!=fO)) goto L_006a8585;
L_006a8599:; BB(0x006a8599);
    /* 006a8599: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a859a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a859b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a859c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a859d: ret 4 */ FN_RET(0x006a8570); r_esp += 8; return;
L_006a85a0:; BB(0x006a85a0);
    /* 006a85a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a85a2: call 0x6a85f0 */ r_esp -= 4; W32(r_esp, 0x6a85a7u); f_006a85f0();
    /* 006a85a7: jmp 0x6a858e */ goto L_006a858e;
}

void f_006a85ac(void) /* sub_6A85AC */
{
    FN_ENTER(0x006a85ac);
    /* 006a85ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a85ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a85ae: lea eax, [ecx + 0x60] */ r_eax = (u32)(r_ecx+0x60u);
    /* 006a85b1: mov ebx, eax */ r_ebx = r_eax;
    /* 006a85b3: mov esi, ecx */ r_esi = r_ecx;
L_006a85b5:; BB(0x006a85b5);
    /* 006a85b5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a85b7: call 0x6a85f0 */ r_esp -= 4; W32(r_esp, 0x6a85bcu); f_006a85f0();
    /* 006a85bc: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a85bf: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a85c1: jg 0x6a85b5 */ if ((!fZ&&fS==fO)) goto L_006a85b5;
L_006a85c3:; BB(0x006a85c3);
    /* 006a85c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a85c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a85c5: ret  */ FN_RET(0x006a85ac); r_esp += 4; return;
}

void f_006a85c8(void) /* sub_6A85C8 */
{
    FN_ENTER(0x006a85c8);
    /* 006a85c8: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a85cd: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 006a85d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a85d3: mov word ptr [ecx + 0xa], dx */ W16((u32)(r_ecx+0xau), (u16)r_edx);
    /* 006a85d7: mov word ptr [ecx + 0xc], ax */ W16((u32)(r_ecx+0xcu), (u16)r_eax);
    /* 006a85db: mov word ptr [ecx + 0xe], dx */ W16((u32)(r_ecx+0xeu), (u16)r_edx);
    /* 006a85df: mov word ptr [ecx + 0x10], ax */ W16((u32)(r_ecx+0x10u), (u16)r_eax);
    /* 006a85e3: mov word ptr [ecx + 0x12], dx */ W16((u32)(r_ecx+0x12u), (u16)r_edx);
    /* 006a85e7: mov word ptr [ecx + 0x14], ax */ W16((u32)(r_ecx+0x14u), (u16)r_eax);
    /* 006a85eb: mov word ptr [ecx + 0x16], dx */ W16((u32)(r_ecx+0x16u), (u16)r_edx);
    /* 006a85ef: ret  */ FN_RET(0x006a85c8); r_esp += 4; return;
}

void f_006a85f0(void) /* sub_6A85F0 */
{
    FN_ENTER(0x006a85f0);
    /* 006a85f0: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 006a85f7: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006a85fc: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a8601: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 006a8604: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 006a8608: call 0x6a85c8 */ r_esp -= 4; W32(r_esp, 0x6a860du); f_006a85c8();
    /* 006a860d: ret  */ FN_RET(0x006a85f0); r_esp += 4; return;
}

void f_006a8610(void)
{
    FN_ENTER(0x006a8610);
    /* 006a8610: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a8614: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8616: mov dword ptr [ecx], 0xb3a260 */ W32((u32)(r_ecx), 0xb3a260u);
    /* 006a861c: jne 0x6a8621 */ if (!fZ) goto L_006a8621;
L_006a861e:; BB(0x006a861e);
    /* 006a861e: ret 4 */ FN_RET(0x006a8610); r_esp += 8; return;
L_006a8621:; BB(0x006a8621);
    /* 006a8621: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8622: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6a8627u); f_00857e98();
    /* 006a8627: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a8628: ret 4 */ FN_RET(0x006a8610); r_esp += 8; return;
}

void f_006a862c(void)
{
    FN_ENTER(0x006a862c);
    /* 006a862c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a8630: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8632: mov dword ptr [ecx], 0xb3a270 */ W32((u32)(r_ecx), 0xb3a270u);
    /* 006a8638: jne 0x6a863d */ if (!fZ) goto L_006a863d;
L_006a863a:; BB(0x006a863a);
    /* 006a863a: ret 4 */ FN_RET(0x006a862c); r_esp += 8; return;
L_006a863d:; BB(0x006a863d);
    /* 006a863d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a863e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6a8643u); f_00857e98();
    /* 006a8643: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a8644: ret 4 */ FN_RET(0x006a862c); r_esp += 8; return;
}

void f_006a8648(void) /* sub_6A8648 */
{
    FN_ENTER(0x006a8648);
    /* 006a8648: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8649: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a864b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a864d: call 0x6a866c */ r_esp -= 4; W32(r_esp, 0x6a8652u); f_006a866c();
    /* 006a8652: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a8656: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8658: jne 0x6a865e */ if (!fZ) goto L_006a865e;
L_006a865a:; BB(0x006a865a);
    /* 006a865a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a865b: ret 4 */ FN_RET(0x006a8648); r_esp += 8; return;
L_006a865e:; BB(0x006a865e);
    /* 006a865e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a865f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6a8664u); f_005c2f74();
    /* 006a8664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a8665: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a8666: ret 4 */ FN_RET(0x006a8648); r_esp += 8; return;
}

void f_006a866c(void) /* sub_6A866C */
{
    FN_ENTER(0x006a866c);
    /* 006a866c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a866d: mov ebp, esp */ r_ebp = r_esp;
    /* 006a866f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a8671: push 0x8eb99c */ { u32 v = 0x8eb99cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a8676: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a867c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a867d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a8684: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a8687: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a868a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a868d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a8690: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a8693: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006a8696: mov dword ptr [ecx], 0xb3a274 */ W32((u32)(r_ecx), 0xb3a274u);
    /* 006a869c: mov dword ptr [ecx + 0xd0], 0xb3a270 */ W32((u32)(r_ecx+0xd0u), 0xb3a270u);
    /* 006a86a6: mov dword ptr [ecx + 0xb4], 0xb3a260 */ W32((u32)(r_ecx+0xb4u), 0xb3a260u);
    /* 006a86b0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a86b3: mov dword ptr [eax + 0x98], 0xb3a260 */ W32((u32)(r_eax+0x98u), 0xb3a260u);
    /* 006a86bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a86c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a86c7: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6a86ccu); f_007ba1f0();
    /* 006a86cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a86cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a86d6: mov esp, ebp */ r_esp = r_ebp;
    /* 006a86d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a86d9: ret  */ FN_RET(0x006a866c); r_esp += 4; return;
}

void f_006a86dc(void) /* sub_6A86DC */
{
    FN_ENTER(0x006a86dc);
    /* 006a86dc: mov dword ptr [ecx], 0xb3a270 */ W32((u32)(r_ecx), 0xb3a270u);
    /* 006a86e2: ret  */ FN_RET(0x006a86dc); r_esp += 4; return;
}

void f_006a86e4(void) /* sub_6A86E4 */
{
    FN_ENTER(0x006a86e4);
    /* 006a86e4: mov dword ptr [ecx], 0xb3a260 */ W32((u32)(r_ecx), 0xb3a260u);
    /* 006a86ea: ret  */ FN_RET(0x006a86e4); r_esp += 4; return;
}

void f_006a86ec(void) /* sub_6A86EC */
{
    FN_ENTER(0x006a86ec);
    /* 006a86ec: mov ecx, dword ptr [0xa947c4] */ r_ecx = R32((u32)(0xa947c4u));
    /* 006a86f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a86f4: je 0x6a8709 */ if (fZ) goto L_006a8709;
L_006a86f6:; BB(0x006a86f6);
    /* 006a86f6: je 0x6a86ff */ if (fZ) goto L_006a86ff;
L_006a86f8:; BB(0x006a86f8);
    /* 006a86f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a86fa: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6a86ffu); f_004066a8();
L_006a86ff:; BB(0x006a86ff);
    /* 006a86ff: mov dword ptr [0xa947c4], 0 */ W32((u32)(0xa947c4u), 0x0u);
L_006a8709:; BB(0x006a8709);
    /* 006a8709: ret  */ FN_RET(0x006a86ec); r_esp += 4; return;
}

void f_006a870c(void) /* sub_6A870C */
{
    FN_ENTER(0x006a870c);
    /* 006a870c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a870d: mov esi, ecx */ r_esi = r_ecx;
    /* 006a870f: movzx eax, word ptr [esi + 0x90] */ r_eax = (u32)R16((u32)(r_esi+0x90u));
    /* 006a8716: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8717: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a871cu); f_0068d5a8();
    /* 006a871c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a871d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a871f: je 0x6a87c9 */ if (fZ) goto L_006a87c9;
L_006a8725:; BB(0x006a8725);
    /* 006a8725: mov edx, dword ptr [esi + 0x94] */ r_edx = R32((u32)(r_esi+0x94u));
    /* 006a872b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a872d: jne 0x6a8770 */ if (!fZ) goto L_006a8770;
L_006a872f:; BB(0x006a872f);
    /* 006a872f: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 006a8735: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a873a: jne 0x6a8770 */ if (!fZ) goto L_006a8770;
L_006a873c:; BB(0x006a873c);
    /* 006a873c: mov dword ptr [esi + 0x94], 1 */ W32((u32)(r_esi+0x94u), 0x1u);
    /* 006a8746: mov eax, 2 */ r_eax = 0x2u;
    /* 006a874b: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 006a8751: mov dword ptr [esi + 0xcc], eax */ W32((u32)(r_esi+0xccu), r_eax);
    /* 006a8757: mov dword ptr [esi + 0xac], 0x40000000 */ W32((u32)(r_esi+0xacu), 0x40000000u);
    /* 006a8761: mov edx, 1 */ r_edx = 0x1u;
    /* 006a8766: mov dword ptr [esi + 0xc8], 0x40000000 */ W32((u32)(r_esi+0xc8u), 0x40000000u);
L_006a8770:; BB(0x006a8770);
    /* 006a8770: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8772: jne 0x6a878e */ if (!fZ) goto L_006a878e;
L_006a8774:; BB(0x006a8774);
    /* 006a8774: lea ecx, [esi + 0x98] */ r_ecx = (u32)(r_esi+0x98u);
    /* 006a877a: call 0x7ab06c */ r_esp -= 4; W32(r_esp, 0x6a877fu); f_007ab06c();
    /* 006a877f: add esi, 0xb4 */ {  u32 a = r_esi; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a8785: mov ecx, esi */ r_ecx = r_esi;
    /* 006a8787: call 0x7ab06c */ r_esp -= 4; W32(r_esp, 0x6a878cu); f_007ab06c();
    /* 006a878c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a878d: ret  */ FN_RET(0x006a870c); r_esp += 4; return;
L_006a878e:; BB(0x006a878e);
    /* 006a878e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8791: jne 0x6a87c7 */ if (!fZ) goto L_006a87c7;
L_006a8793:; BB(0x006a8793);
    /* 006a8793: lea ecx, [esi + 0x98] */ r_ecx = (u32)(r_esi+0x98u);
    /* 006a8799: call 0x7ab124 */ r_esp -= 4; W32(r_esp, 0x6a879eu); f_007ab124();
    /* 006a879e: lea ecx, [esi + 0xb4] */ r_ecx = (u32)(r_esi+0xb4u);
    /* 006a87a4: call 0x7ab124 */ r_esp -= 4; W32(r_esp, 0x6a87a9u); f_007ab124();
    /* 006a87a9: fld dword ptr [esi + 0xa4] */ FPUSH(R_F32((u32)(r_esi+0xa4u)));
    /* 006a87af: fcomp dword ptr [0x966764] */ fx_compare(ST(0), R_F32((u32)(0x966764u))); FPOP();
    /* 006a87b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a87b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a87b8: ja 0x6a87c7 */ if ((!fC&&!fZ)) goto L_006a87c7;
L_006a87ba:; BB(0x006a87ba);
    /* 006a87ba: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006a87be: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a87c3: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_006a87c7:; BB(0x006a87c7);
    /* 006a87c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a87c8: ret  */ FN_RET(0x006a870c); r_esp += 4; return;
L_006a87c9:; BB(0x006a87c9);
    /* 006a87c9: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006a87cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a87d2: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 006a87d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a87d7: ret  */ FN_RET(0x006a870c); r_esp += 4; return;
}

void f_006a87d8(void) /* sub_6A87D8 */
{
    FN_ENTER(0x006a87d8);
    /* 006a87d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a87d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a87da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a87db: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a87de: mov edi, ecx */ r_edi = r_ecx;
    /* 006a87e0: movzx eax, word ptr [edi + 0x90] */ r_eax = (u32)R16((u32)(r_edi+0x90u));
    /* 006a87e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a87e8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a87edu); f_0068d5a8();
    /* 006a87ed: mov esi, eax */ r_esi = r_eax;
    /* 006a87ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a87f2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a87f4: je 0x6a8911 */ if (fZ) goto L_006a8911;
L_006a87fa:; BB(0x006a87fa);
    /* 006a87fa: fld dword ptr [0x966760] */ FPUSH(R_F32((u32)(0x966760u)));
    /* 006a8800: mov edx, dword ptr [edi + 0xd4] */ r_edx = R32((u32)(r_edi+0xd4u));
    /* 006a8806: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006a8809: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a880f: lea ebp, [edi + 0xd0] */ r_ebp = (u32)(r_edi+0xd0u);
    /* 006a8815: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006a8819: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006a881d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006a881f: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 006a8825: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006a8829: mov ecx, esi */ r_ecx = r_esi;
    /* 006a882b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006a882f: mov eax, dword ptr [edi + 0xe0] */ r_eax = R32((u32)(r_edi+0xe0u));
    /* 006a8835: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006a8839: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006a883b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006a883f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006a8843: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006a8847: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a8849: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006a884d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006a8851: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006a8853: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 006a8857: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8858: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a885a: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x6a8860u); call_ind(t); }
    /* 006a8860: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006a8864: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 006a8868: fsub dword ptr [0x96675c] */ ST(0) = ST(0) - R_F32((u32)(0x96675cu));
    /* 006a886e: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 006a8871: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 006a8874: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 006a8878: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 006a887b: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 006a887e: mov dword ptr [edi + 0x5c], edx */ W32((u32)(r_edi+0x5cu), r_edx);
    /* 006a8881: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006a8884: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 006a8887: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 006a888a: mov dword ptr [edi + 0x64], edx */ W32((u32)(r_edi+0x64u), r_edx);
    /* 006a888d: mov eax, dword ptr [esi + 0xdf0] */ r_eax = R32((u32)(r_esi+0xdf0u));
    /* 006a8893: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8895: jne 0x6a8911 */ if (!fZ) goto L_006a8911;
L_006a8897:; BB(0x006a8897);
    /* 006a8897: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a8899: call 0x7a970c */ r_esp -= 4; W32(r_esp, 0x6a889eu); f_007a970c();
    /* 006a889e: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006a88a1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6a88a6u); f_00829cc8();
    /* 006a88a6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6a88abu); f_0082d7b0();
    /* 006a88ab: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 006a88ae: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6a88b3u); f_0082d838();
    /* 006a88b3: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006a88b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a88b8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6a88bdu); f_0082d8bc();
    /* 006a88bd: lea ecx, [edi + 0x68] */ r_ecx = (u32)(r_edi+0x68u);
    /* 006a88c0: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x6a88c5u); f_00831290();
    /* 006a88c5: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 006a88ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a88cc: je 0x6a88ea */ if (fZ) goto L_006a88ea;
L_006a88ce:; BB(0x006a88ce);
    /* 006a88ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006a88d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a88d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a88d4: call 0x7a97d0 */ r_esp -= 4; W32(r_esp, 0x6a88d9u); f_007a97d0();
    /* 006a88d9: mov eax, dword ptr [edi + 0x98] */ r_eax = R32((u32)(r_edi+0x98u));
    /* 006a88df: lea ecx, [edi + 0x98] */ r_ecx = (u32)(r_edi+0x98u);
    /* 006a88e5: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x6a88e8u); call_ind(t); }
    /* 006a88e8: jmp 0x6a8905 */ goto L_006a8905;
L_006a88ea:; BB(0x006a88ea);
    /* 006a88ea: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006a88ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a88ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a88f1: call 0x7a97d0 */ r_esp -= 4; W32(r_esp, 0x6a88f6u); f_007a97d0();
    /* 006a88f6: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 006a88fc: lea ecx, [edi + 0xb4] */ r_ecx = (u32)(r_edi+0xb4u);
    /* 006a8902: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x6a8905u); call_ind(t); }
L_006a8905:; BB(0x006a8905);
    /* 006a8905: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6a890au); f_0082da80();
    /* 006a890a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a890c: call 0x7a9758 */ r_esp -= 4; W32(r_esp, 0x6a8911u); f_007a9758();
L_006a8911:; BB(0x006a8911);
    /* 006a8911: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a8914: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a8915: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a8916: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a8917: ret  */ FN_RET(0x006a87d8); r_esp += 4; return;
}

void f_006a8918(void) /* sub_6A8918 */
{
    FN_ENTER(0x006a8918);
    /* 006a8918: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a8919: mov ebp, esp */ r_ebp = r_esp;
    /* 006a891b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a891d: push 0x8eb9c4 */ { u32 v = 0x8eb9c4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a8922: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a8928: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8929: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a8930: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a8933: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a8936: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006a8939: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006a893c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006a893f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006a8942: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 006a8947: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 006a894a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a894c: je 0x6a8995 */ if (fZ) goto L_006a8995;
L_006a894e:; BB(0x006a894e);
    /* 006a894e: mov ebx, dword ptr [0x9cc0cc] */ r_ebx = R32((u32)(0x9cc0ccu));
L_006a8954:; BB(0x006a8954);
    /* 006a8954: cmp ebx, dword ptr [esi + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8957: jne 0x6a898e */ if (!fZ) goto L_006a898e;
L_006a8959:; BB(0x006a8959);
    /* 006a8959: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a895c: movzx edx, word ptr [esi + 0x90] */ r_edx = (u32)R16((u32)(r_esi+0x90u));
    /* 006a8963: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 006a8967: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8969: jne 0x6a898e */ if (!fZ) goto L_006a898e;
L_006a896b:; BB(0x006a896b);
    /* 006a896b: mov eax, dword ptr [esi + 0x94] */ r_eax = R32((u32)(r_esi+0x94u));
    /* 006a8971: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8973: jne 0x6a898e */ if (!fZ) goto L_006a898e;
L_006a8975:; BB(0x006a8975);
    /* 006a8975: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8978: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a897b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a897e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8980: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a8983: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a898a: mov esp, ebp */ r_esp = r_ebp;
    /* 006a898c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a898d: ret  */ FN_RET(0x006a8918); r_esp += 4; return;
L_006a898e:; BB(0x006a898e);
    /* 006a898e: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 006a8991: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8993: jne 0x6a8954 */ if (!fZ) goto L_006a8954;
L_006a8995:; BB(0x006a8995);
    /* 006a8995: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006a899c: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a89a1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6a89a6u); f_005caba4();
    /* 006a89a6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006a89a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a89ac: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006a89af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a89b1: je 0x6a8a01 */ if (fZ) goto L_006a8a01;
L_006a89b3:; BB(0x006a89b3);
    /* 006a89b3: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006a89ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a89c1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a89c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a89ca: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 006a89ce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a89d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a89d2: call 0x6a8a08 */ r_esp -= 4; W32(r_esp, 0x6a89d7u); f_006a8a08();
    /* 006a89d7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006a89de:; BB(0x006a89de);
    /* 006a89de: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a89e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a89e3: je 0x6a8975 */ if (fZ) goto L_006a8975;
L_006a89e5:; BB(0x006a89e5);
    /* 006a89e5: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a89e8: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a89eb: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a89ee: mov eax, 1 */ r_eax = 0x1u;
    /* 006a89f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a89f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a89fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006a89ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a8a00: ret  */ FN_RET(0x006a8918); r_esp += 4; return;
L_006a8a01:; BB(0x006a8a01);
    /* 006a8a01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a8a03: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006a8a06: jmp 0x6a89de */ goto L_006a89de;
}

void f_006a8a08(void) /* sub_6A8A08 */
{
    FN_ENTER(0x006a8a08);
    /* 006a8a08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a8a09: mov ebp, esp */ r_ebp = r_esp;
    /* 006a8a0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a8a0d: push 0x8eba1e */ { u32 v = 0x8eba1eu; r_esp -= 4; W32(r_esp, v); }
    /* 006a8a12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a8a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8a19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a8a20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a8a23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a8a26: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006a8a29: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006a8a2c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006a8a2f: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006a8a33: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a8a36: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006a8a39: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006a8a3c: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x6a8a41u); f_007ba278();
    /* 006a8a41: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8a44: mov dword ptr [edx], 0xb3a274 */ W32((u32)(r_edx), 0xb3a274u);
    /* 006a8a4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a8a4c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 006a8a52: mov dword ptr [edx + 0x98], 0xb3a268 */ W32((u32)(r_edx+0x98u), 0xb3a268u);
    /* 006a8a5c: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 006a8a62: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 006a8a68: mov dword ptr [edx + 0xa4], 0 */ W32((u32)(r_edx+0xa4u), 0x0u);
    /* 006a8a72: mov dword ptr [edx + 0xa8], 0 */ W32((u32)(r_edx+0xa8u), 0x0u);
    /* 006a8a7c: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 006a8a86: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8a89: mov dword ptr [edx + 0xb4], 0xb3a268 */ W32((u32)(r_edx+0xb4u), 0xb3a268u);
    /* 006a8a93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a8a95: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 006a8a9b: mov dword ptr [edx + 0xc0], 0 */ W32((u32)(r_edx+0xc0u), 0x0u);
    /* 006a8aa5: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 006a8aab: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 006a8ab1: mov dword ptr [edx + 0xc4], 0 */ W32((u32)(r_edx+0xc4u), 0x0u);
    /* 006a8abb: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 006a8ac5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8ac8: mov dword ptr [eax + 0xd0], 0xb3a270 */ W32((u32)(r_eax+0xd0u), 0xb3a270u);
    /* 006a8ad2: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
    /* 006a8adc: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
    /* 006a8ae6: mov dword ptr [eax + 0xd8], 0 */ W32((u32)(r_eax+0xd8u), 0x0u);
    /* 006a8af0: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
    /* 006a8afa: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006a8b01: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8b04: mov eax, dword ptr [0x9cc0cc] */ r_eax = R32((u32)(0x9cc0ccu));
    /* 006a8b09: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a8b0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8b0d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006a8b10: mov word ptr [ecx + 0x90], bx */ W16((u32)(r_ecx+0x90u), (u16)r_ebx);
    /* 006a8b17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a8b19: mov word ptr [ecx + 0x92], dx */ W16((u32)(r_ecx+0x92u), (u16)r_edx);
    /* 006a8b20: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 006a8b26: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a8b2bu); f_0068d5a8();
    /* 006a8b2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a8b2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8b2e: je 0x6a8c66 */ if (fZ) goto L_006a8c66;
L_006a8b34:; BB(0x006a8b34);
    /* 006a8b34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8b37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a8b39: movsx esi, byte ptr [eax + 0x960] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+0x960u));
    /* 006a8b40: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a8b42: mov eax, dword ptr [esi*8 + 0x9666a0] */ r_eax = R32((u32)(r_esi*8+0x9666a0u));
    /* 006a8b49: mov edx, dword ptr [esi*8 + 0x9666a4] */ r_edx = R32((u32)(r_esi*8+0x9666a4u));
    /* 006a8b50: mov ebx, dword ptr [esi*8 + 0x9666a8] */ r_ebx = R32((u32)(r_esi*8+0x9666a8u));
    /* 006a8b57: mov edi, dword ptr [esi*8 + 0x9666ac] */ r_edi = R32((u32)(r_esi*8+0x9666acu));
    /* 006a8b5e: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 006a8b64: mov dword ptr [ecx + 0xd8], edx */ W32((u32)(r_ecx+0xd8u), r_edx);
    /* 006a8b6a: mov dword ptr [ecx + 0xdc], ebx */ W32((u32)(r_ecx+0xdcu), r_ebx);
    /* 006a8b70: mov dword ptr [ecx + 0xe0], edi */ W32((u32)(r_ecx+0xe0u), r_edi);
    /* 006a8b76: mov ecx, dword ptr [0xa947c4] */ r_ecx = R32((u32)(0xa947c4u));
    /* 006a8b7c: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6a8b81u); f_005b8624();
    /* 006a8b81: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8b84: mov ecx, dword ptr [0xa947c4] */ r_ecx = R32((u32)(0xa947c4u));
    /* 006a8b8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a8b8c: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006a8b8f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6a8b94u); f_005b8610();
    /* 006a8b94: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8b97: mov ecx, dword ptr [0xa947c4] */ r_ecx = R32((u32)(0xa947c4u));
    /* 006a8b9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a8b9f: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 006a8ba5: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6a8baau); f_005b8638();
    /* 006a8baa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8bad: add ecx, 0x98 */ {  u32 a = r_ecx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a8bb3: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006a8bb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8bb8: je 0x6a8bd6 */ if (fZ) goto L_006a8bd6;
L_006a8bba:; BB(0x006a8bba);
    /* 006a8bba: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 006a8bbd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006a8bc0: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006a8bc3: fadd dword ptr [edx*4 + 0x966740] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x966740u));
    /* 006a8bca: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 006a8bcd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8bd0: add ecx, 0x98 */ {  u32 a = r_ecx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006a8bd6:; BB(0x006a8bd6);
    /* 006a8bd6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8bd9: mov dword ptr [ecx + 0x14], 0x3f800000 */ W32((u32)(r_ecx+0x14u), 0x3f800000u);
    /* 006a8be0: mov ecx, dword ptr [0xa947c4] */ r_ecx = R32((u32)(0xa947c4u));
    /* 006a8be6: mov dword ptr [eax + 0xb0], 2 */ W32((u32)(r_eax+0xb0u), 0x2u);
    /* 006a8bf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a8bf2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6a8bf7u); f_005b8610();
    /* 006a8bf7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8bfa: mov ecx, dword ptr [0xa947c4] */ r_ecx = R32((u32)(0xa947c4u));
    /* 006a8c00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a8c02: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 006a8c08: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6a8c0du); f_005b8638();
    /* 006a8c0d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8c10: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a8c16: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006a8c19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8c1b: je 0x6a8c39 */ if (fZ) goto L_006a8c39;
L_006a8c1d:; BB(0x006a8c1d);
    /* 006a8c1d: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 006a8c20: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006a8c23: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006a8c26: fadd dword ptr [edx*4 + 0x966740] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x966740u));
    /* 006a8c2d: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 006a8c30: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8c33: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006a8c39:; BB(0x006a8c39);
    /* 006a8c39: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8c3c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a8c3f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a8c42: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a8c45: mov dword ptr [ecx + 0x14], 0x3f800000 */ W32((u32)(r_ecx+0x14u), 0x3f800000u);
    /* 006a8c4c: mov dword ptr [eax + 0xcc], 2 */ W32((u32)(r_eax+0xccu), 0x2u);
    /* 006a8c56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a8c59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a8c60: mov esp, ebp */ r_esp = r_ebp;
    /* 006a8c62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a8c63: ret 8 */ FN_RET(0x006a8a08); r_esp += 12; return;
L_006a8c66:; BB(0x006a8c66);
    /* 006a8c66: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a8c69: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a8c6c: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006a8c70: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8c76: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 006a8c7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a8c7d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a8c84: mov esp, ebp */ r_esp = r_ebp;
    /* 006a8c86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a8c87: ret 8 */ FN_RET(0x006a8a08); r_esp += 12; return;
}

void f_006a8c8c(void) /* sub_6A8C8C */
{
    FN_ENTER(0x006a8c8c);
    /* 006a8c8c: mov dword ptr [0xa947b8], 0x3f800000 */ W32((u32)(0xa947b8u), 0x3f800000u);
    /* 006a8c96: mov dword ptr [0xa947bc], 0x41000000 */ W32((u32)(0xa947bcu), 0x41000000u);
    /* 006a8ca0: mov dword ptr [0xa947c0], 0x3fc00000 */ W32((u32)(0xa947c0u), 0x3fc00000u);
    /* 006a8caa: ret  */ FN_RET(0x006a8c8c); r_esp += 4; return;
}

void f_006a8cac(void) /* sub_6A8CAC */
{
    FN_ENTER(0x006a8cac);
    /* 006a8cac: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006a8cb1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a8cb6: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 006a8cb9: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 006a8cbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8cbf: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 006a8cc3: mov word ptr [ecx + 6], ax */ W16((u32)(r_ecx+0x6u), (u16)r_eax);
    /* 006a8cc7: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 006a8ccb: ret  */ FN_RET(0x006a8cac); r_esp += 4; return;
}

void f_006a8ccc(void) /* sub_6A8CCC */
{
    FN_ENTER(0x006a8ccc);
    /* 006a8ccc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a8ccd: mov ebp, esp */ r_ebp = r_esp;
    /* 006a8ccf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a8cd1: push 0x8eba44 */ { u32 v = 0x8eba44u; r_esp -= 4; W32(r_esp, v); }
    /* 006a8cd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a8cdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8cdd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a8ce4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a8ce7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a8cea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a8ced: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a8cf0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a8cf3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006a8cf8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006a8cff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6a8d04u); f_008581c5();
    /* 006a8d04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a8d05: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006a8d08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a8d0a: je 0x6a8d54 */ if (fZ) goto L_006a8d54;
L_006a8d0c:; BB(0x006a8d0c);
    /* 006a8d0c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006a8d13: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a8d1a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a8d1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a8d1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8d21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8d22: push 0x9cc0bc */ { u32 v = 0x9cc0bcu; r_esp -= 4; W32(r_esp, v); }
    /* 006a8d27: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a8d29: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6a8d2eu); f_005b7a84();
    /* 006a8d2e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a8d31: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006a8d38:; BB(0x006a8d38);
    /* 006a8d38: mov dword ptr [0xa947c4], eax */ W32((u32)(0xa947c4u), r_eax);
    /* 006a8d3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8d3f: je 0x6a8d58 */ if (fZ) goto L_006a8d58;
L_006a8d41:; BB(0x006a8d41);
    /* 006a8d41: mov eax, 1 */ r_eax = 0x1u;
    /* 006a8d46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a8d49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a8d50: mov esp, ebp */ r_esp = r_ebp;
    /* 006a8d52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a8d53: ret  */ FN_RET(0x006a8ccc); r_esp += 4; return;
L_006a8d54:; BB(0x006a8d54);
    /* 006a8d54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a8d56: jmp 0x6a8d38 */ goto L_006a8d38;
L_006a8d58:; BB(0x006a8d58);
    /* 006a8d58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8d5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a8d5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a8d64: mov esp, ebp */ r_esp = r_ebp;
    /* 006a8d66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a8d67: ret  */ FN_RET(0x006a8ccc); r_esp += 4; return;
}

void f_006a8d68(void) /* sub_6A8D68 */
{
    FN_ENTER(0x006a8d68);
    /* 006a8d68: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8d6d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8d70: jge 0x6a8d77 */ if ((fS==fO)) goto L_006a8d77;
L_006a8d72:; BB(0x006a8d72);
    /* 006a8d72: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 006a8d74: ret 4 */ FN_RET(0x006a8d68); r_esp += 8; return;
L_006a8d77:; BB(0x006a8d77);
    /* 006a8d77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8d79: jmp 0x6a8d72 */ goto L_006a8d72;
}

void f_006a8d7c(void) /* sub_6A8D7C */
{
    FN_ENTER(0x006a8d7c);
    /* 006a8d7c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8d81: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8d84: jge 0x6a8d8c */ if ((fS==fO)) goto L_006a8d8c;
L_006a8d86:; BB(0x006a8d86);
    /* 006a8d86: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 006a8d89: ret 4 */ FN_RET(0x006a8d7c); r_esp += 8; return;
L_006a8d8c:; BB(0x006a8d8c);
    /* 006a8d8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8d8e: jmp 0x6a8d86 */ goto L_006a8d86;
}

void f_006a8d90(void) /* sub_6A8D90 */
{
    FN_ENTER(0x006a8d90);
    /* 006a8d90: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8d95: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8d98: jge 0x6a8da0 */ if ((fS==fO)) goto L_006a8da0;
L_006a8d9a:; BB(0x006a8d9a);
    /* 006a8d9a: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 006a8d9d: ret 4 */ FN_RET(0x006a8d90); r_esp += 8; return;
L_006a8da0:; BB(0x006a8da0);
    /* 006a8da0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8da2: jmp 0x6a8d9a */ goto L_006a8d9a;
}

void f_006a8da4(void) /* sub_6A8DA4 */
{
    FN_ENTER(0x006a8da4);
    /* 006a8da4: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8da9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8dac: jge 0x6a8db4 */ if ((fS==fO)) goto L_006a8db4;
L_006a8dae:; BB(0x006a8dae);
    /* 006a8dae: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 006a8db1: ret 4 */ FN_RET(0x006a8da4); r_esp += 8; return;
L_006a8db4:; BB(0x006a8db4);
    /* 006a8db4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8db6: jmp 0x6a8dae */ goto L_006a8dae;
}

void f_006a8db8(void) /* sub_6A8DB8 */
{
    FN_ENTER(0x006a8db8);
    /* 006a8db8: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8dbd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8dc0: jge 0x6a8dc8 */ if ((fS==fO)) goto L_006a8dc8;
L_006a8dc2:; BB(0x006a8dc2);
    /* 006a8dc2: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 006a8dc5: ret 4 */ FN_RET(0x006a8db8); r_esp += 8; return;
L_006a8dc8:; BB(0x006a8dc8);
    /* 006a8dc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8dca: jmp 0x6a8dc2 */ goto L_006a8dc2;
}

void f_006a8dcc(void) /* sub_6A8DCC */
{
    FN_ENTER(0x006a8dcc);
    /* 006a8dcc: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8dd1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8dd4: jge 0x6a8ddc */ if ((fS==fO)) goto L_006a8ddc;
L_006a8dd6:; BB(0x006a8dd6);
    /* 006a8dd6: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 006a8dd9: ret 4 */ FN_RET(0x006a8dcc); r_esp += 8; return;
L_006a8ddc:; BB(0x006a8ddc);
    /* 006a8ddc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8dde: jmp 0x6a8dd6 */ goto L_006a8dd6;
}

void f_006a8de0(void) /* sub_6A8DE0 */
{
    FN_ENTER(0x006a8de0);
    /* 006a8de0: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8de5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8de8: jge 0x6a8df0 */ if ((fS==fO)) goto L_006a8df0;
L_006a8dea:; BB(0x006a8dea);
    /* 006a8dea: mov byte ptr [ecx + 7], al */ W8((u32)(r_ecx+0x7u), (u8)r_eax);
    /* 006a8ded: ret 4 */ FN_RET(0x006a8de0); r_esp += 8; return;
L_006a8df0:; BB(0x006a8df0);
    /* 006a8df0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8df2: jmp 0x6a8dea */ goto L_006a8dea;
}

void f_006a8df4(void) /* sub_6A8DF4 */
{
    FN_ENTER(0x006a8df4);
    /* 006a8df4: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8df9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8dfc: jge 0x6a8e04 */ if ((fS==fO)) goto L_006a8e04;
L_006a8dfe:; BB(0x006a8dfe);
    /* 006a8dfe: mov byte ptr [ecx + 8], al */ W8((u32)(r_ecx+0x8u), (u8)r_eax);
    /* 006a8e01: ret 4 */ FN_RET(0x006a8df4); r_esp += 8; return;
L_006a8e04:; BB(0x006a8e04);
    /* 006a8e04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8e06: jmp 0x6a8dfe */ goto L_006a8dfe;
}

void f_006a8e08(void) /* sub_6A8E08 */
{
    FN_ENTER(0x006a8e08);
    /* 006a8e08: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8e0d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8e10: jge 0x6a8e18 */ if ((fS==fO)) goto L_006a8e18;
L_006a8e12:; BB(0x006a8e12);
    /* 006a8e12: mov byte ptr [ecx + 9], al */ W8((u32)(r_ecx+0x9u), (u8)r_eax);
    /* 006a8e15: ret 4 */ FN_RET(0x006a8e08); r_esp += 8; return;
L_006a8e18:; BB(0x006a8e18);
    /* 006a8e18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8e1a: jmp 0x6a8e12 */ goto L_006a8e12;
}

void f_006a8e1c(void) /* sub_6A8E1C */
{
    FN_ENTER(0x006a8e1c);
    /* 006a8e1c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8e21: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8e24: jge 0x6a8e2c */ if ((fS==fO)) goto L_006a8e2c;
L_006a8e26:; BB(0x006a8e26);
    /* 006a8e26: mov byte ptr [ecx + 0xa], al */ W8((u32)(r_ecx+0xau), (u8)r_eax);
    /* 006a8e29: ret 4 */ FN_RET(0x006a8e1c); r_esp += 8; return;
L_006a8e2c:; BB(0x006a8e2c);
    /* 006a8e2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8e2e: jmp 0x6a8e26 */ goto L_006a8e26;
}

void f_006a8e30(void) /* sub_6A8E30 */
{
    FN_ENTER(0x006a8e30);
    /* 006a8e30: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8e35: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8e38: jge 0x6a8e40 */ if ((fS==fO)) goto L_006a8e40;
L_006a8e3a:; BB(0x006a8e3a);
    /* 006a8e3a: mov byte ptr [ecx + 0xb], al */ W8((u32)(r_ecx+0xbu), (u8)r_eax);
    /* 006a8e3d: ret 4 */ FN_RET(0x006a8e30); r_esp += 8; return;
L_006a8e40:; BB(0x006a8e40);
    /* 006a8e40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8e42: jmp 0x6a8e3a */ goto L_006a8e3a;
}

void f_006a8e44(void) /* sub_6A8E44 */
{
    FN_ENTER(0x006a8e44);
    /* 006a8e44: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8e49: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8e4c: jge 0x6a8e54 */ if ((fS==fO)) goto L_006a8e54;
L_006a8e4e:; BB(0x006a8e4e);
    /* 006a8e4e: mov byte ptr [ecx + 0xc], al */ W8((u32)(r_ecx+0xcu), (u8)r_eax);
    /* 006a8e51: ret 4 */ FN_RET(0x006a8e44); r_esp += 8; return;
L_006a8e54:; BB(0x006a8e54);
    /* 006a8e54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8e56: jmp 0x6a8e4e */ goto L_006a8e4e;
}

void f_006a8e58(void) /* sub_6A8E58 */
{
    FN_ENTER(0x006a8e58);
    /* 006a8e58: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8e5d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8e60: jge 0x6a8e68 */ if ((fS==fO)) goto L_006a8e68;
L_006a8e62:; BB(0x006a8e62);
    /* 006a8e62: mov byte ptr [ecx + 0xd], al */ W8((u32)(r_ecx+0xdu), (u8)r_eax);
    /* 006a8e65: ret 4 */ FN_RET(0x006a8e58); r_esp += 8; return;
L_006a8e68:; BB(0x006a8e68);
    /* 006a8e68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8e6a: jmp 0x6a8e62 */ goto L_006a8e62;
}

void f_006a8e6c(void) /* sub_6A8E6C */
{
    FN_ENTER(0x006a8e6c);
    /* 006a8e6c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8e71: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8e74: jge 0x6a8e7c */ if ((fS==fO)) goto L_006a8e7c;
L_006a8e76:; BB(0x006a8e76);
    /* 006a8e76: mov byte ptr [ecx + 0xe], al */ W8((u32)(r_ecx+0xeu), (u8)r_eax);
    /* 006a8e79: ret 4 */ FN_RET(0x006a8e6c); r_esp += 8; return;
L_006a8e7c:; BB(0x006a8e7c);
    /* 006a8e7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8e7e: jmp 0x6a8e76 */ goto L_006a8e76;
}

void f_006a8e80(void) /* sub_6A8E80 */
{
    FN_ENTER(0x006a8e80);
    /* 006a8e80: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 006a8e85: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8e8a: jge 0x6a8e93 */ if ((fS==fO)) goto L_006a8e93;
L_006a8e8c:; BB(0x006a8e8c);
    /* 006a8e8c: mov word ptr [ecx + 0x16], ax */ W16((u32)(r_ecx+0x16u), (u16)r_eax);
    /* 006a8e90: ret 4 */ FN_RET(0x006a8e80); r_esp += 8; return;
L_006a8e93:; BB(0x006a8e93);
    /* 006a8e93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8e95: jmp 0x6a8e8c */ goto L_006a8e8c;
}

void f_006a8e98(void) /* sub_6A8E98 */
{
    FN_ENTER(0x006a8e98);
    /* 006a8e98: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8e9d: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8ea0: jge 0x6a8ea9 */ if ((fS==fO)) goto L_006a8ea9;
L_006a8ea2:; BB(0x006a8ea2);
    /* 006a8ea2: mov word ptr [ecx + 0x18], ax */ W16((u32)(r_ecx+0x18u), (u16)r_eax);
    /* 006a8ea6: ret 4 */ FN_RET(0x006a8e98); r_esp += 8; return;
L_006a8ea9:; BB(0x006a8ea9);
    /* 006a8ea9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8eab: jmp 0x6a8ea2 */ goto L_006a8ea2;
}

void f_006a8eb0(void) /* sub_6A8EB0 */
{
    FN_ENTER(0x006a8eb0);
    /* 006a8eb0: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 006a8eb3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8eb6: jge 0x6a8eb9 */ if ((fS==fO)) goto L_006a8eb9;
L_006a8eb8:; BB(0x006a8eb8);
    /* 006a8eb8: ret  */ FN_RET(0x006a8eb0); r_esp += 4; return;
L_006a8eb9:; BB(0x006a8eb9);
    /* 006a8eb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8ebb: ret  */ FN_RET(0x006a8eb0); r_esp += 4; return;
}

void f_006a8ebc(void) /* sub_6A8EBC */
{
    FN_ENTER(0x006a8ebc);
    /* 006a8ebc: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 006a8ec0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8ec3: jge 0x6a8ec6 */ if ((fS==fO)) goto L_006a8ec6;
L_006a8ec5:; BB(0x006a8ec5);
    /* 006a8ec5: ret  */ FN_RET(0x006a8ebc); r_esp += 4; return;
L_006a8ec6:; BB(0x006a8ec6);
    /* 006a8ec6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8ec8: ret  */ FN_RET(0x006a8ebc); r_esp += 4; return;
}

void f_006a8ecc(void) /* sub_6A8ECC */
{
    FN_ENTER(0x006a8ecc);
    /* 006a8ecc: movzx eax, byte ptr [ecx + 2] */ r_eax = (u32)R8((u32)(r_ecx+0x2u));
    /* 006a8ed0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8ed3: jge 0x6a8ed6 */ if ((fS==fO)) goto L_006a8ed6;
L_006a8ed5:; BB(0x006a8ed5);
    /* 006a8ed5: ret  */ FN_RET(0x006a8ecc); r_esp += 4; return;
L_006a8ed6:; BB(0x006a8ed6);
    /* 006a8ed6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8ed8: ret  */ FN_RET(0x006a8ecc); r_esp += 4; return;
}

void f_006a8edc(void) /* sub_6A8EDC */
{
    FN_ENTER(0x006a8edc);
    /* 006a8edc: movzx eax, byte ptr [ecx + 3] */ r_eax = (u32)R8((u32)(r_ecx+0x3u));
    /* 006a8ee0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8ee3: jge 0x6a8ee6 */ if ((fS==fO)) goto L_006a8ee6;
L_006a8ee5:; BB(0x006a8ee5);
    /* 006a8ee5: ret  */ FN_RET(0x006a8edc); r_esp += 4; return;
L_006a8ee6:; BB(0x006a8ee6);
    /* 006a8ee6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8ee8: ret  */ FN_RET(0x006a8edc); r_esp += 4; return;
}

void f_006a8eec(void) /* sub_6A8EEC */
{
    FN_ENTER(0x006a8eec);
    /* 006a8eec: movzx eax, byte ptr [ecx + 4] */ r_eax = (u32)R8((u32)(r_ecx+0x4u));
    /* 006a8ef0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8ef3: jge 0x6a8ef6 */ if ((fS==fO)) goto L_006a8ef6;
L_006a8ef5:; BB(0x006a8ef5);
    /* 006a8ef5: ret  */ FN_RET(0x006a8eec); r_esp += 4; return;
L_006a8ef6:; BB(0x006a8ef6);
    /* 006a8ef6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8ef8: ret  */ FN_RET(0x006a8eec); r_esp += 4; return;
}

void f_006a8efc(void) /* sub_6A8EFC */
{
    FN_ENTER(0x006a8efc);
    /* 006a8efc: movzx eax, byte ptr [ecx + 7] */ r_eax = (u32)R8((u32)(r_ecx+0x7u));
    /* 006a8f00: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8f03: jge 0x6a8f06 */ if ((fS==fO)) goto L_006a8f06;
L_006a8f05:; BB(0x006a8f05);
    /* 006a8f05: ret  */ FN_RET(0x006a8efc); r_esp += 4; return;
L_006a8f06:; BB(0x006a8f06);
    /* 006a8f06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8f08: ret  */ FN_RET(0x006a8efc); r_esp += 4; return;
}

void f_006a8f0c(void) /* sub_6A8F0C */
{
    FN_ENTER(0x006a8f0c);
    /* 006a8f0c: movzx eax, byte ptr [ecx + 8] */ r_eax = (u32)R8((u32)(r_ecx+0x8u));
    /* 006a8f10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8f13: jge 0x6a8f16 */ if ((fS==fO)) goto L_006a8f16;
L_006a8f15:; BB(0x006a8f15);
    /* 006a8f15: ret  */ FN_RET(0x006a8f0c); r_esp += 4; return;
L_006a8f16:; BB(0x006a8f16);
    /* 006a8f16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8f18: ret  */ FN_RET(0x006a8f0c); r_esp += 4; return;
}

void f_006a8f1c(void) /* sub_6A8F1C */
{
    FN_ENTER(0x006a8f1c);
    /* 006a8f1c: movzx eax, byte ptr [ecx + 9] */ r_eax = (u32)R8((u32)(r_ecx+0x9u));
    /* 006a8f20: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8f23: jge 0x6a8f26 */ if ((fS==fO)) goto L_006a8f26;
L_006a8f25:; BB(0x006a8f25);
    /* 006a8f25: ret  */ FN_RET(0x006a8f1c); r_esp += 4; return;
L_006a8f26:; BB(0x006a8f26);
    /* 006a8f26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8f28: ret  */ FN_RET(0x006a8f1c); r_esp += 4; return;
}

void f_006a8f2c(void) /* sub_6A8F2C */
{
    FN_ENTER(0x006a8f2c);
    /* 006a8f2c: movzx eax, byte ptr [ecx + 0xa] */ r_eax = (u32)R8((u32)(r_ecx+0xau));
    /* 006a8f30: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8f33: jge 0x6a8f36 */ if ((fS==fO)) goto L_006a8f36;
L_006a8f35:; BB(0x006a8f35);
    /* 006a8f35: ret  */ FN_RET(0x006a8f2c); r_esp += 4; return;
L_006a8f36:; BB(0x006a8f36);
    /* 006a8f36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8f38: ret  */ FN_RET(0x006a8f2c); r_esp += 4; return;
}

void f_006a8f3c(void) /* sub_6A8F3C */
{
    FN_ENTER(0x006a8f3c);
    /* 006a8f3c: movzx eax, byte ptr [ecx + 0xb] */ r_eax = (u32)R8((u32)(r_ecx+0xbu));
    /* 006a8f40: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8f43: jge 0x6a8f46 */ if ((fS==fO)) goto L_006a8f46;
L_006a8f45:; BB(0x006a8f45);
    /* 006a8f45: ret  */ FN_RET(0x006a8f3c); r_esp += 4; return;
L_006a8f46:; BB(0x006a8f46);
    /* 006a8f46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8f48: ret  */ FN_RET(0x006a8f3c); r_esp += 4; return;
}

void f_006a8f4c(void) /* sub_6A8F4C */
{
    FN_ENTER(0x006a8f4c);
    /* 006a8f4c: movzx eax, byte ptr [ecx + 0xc] */ r_eax = (u32)R8((u32)(r_ecx+0xcu));
    /* 006a8f50: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8f53: jge 0x6a8f56 */ if ((fS==fO)) goto L_006a8f56;
L_006a8f55:; BB(0x006a8f55);
    /* 006a8f55: ret  */ FN_RET(0x006a8f4c); r_esp += 4; return;
L_006a8f56:; BB(0x006a8f56);
    /* 006a8f56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8f58: ret  */ FN_RET(0x006a8f4c); r_esp += 4; return;
}

void f_006a8f5c(void) /* sub_6A8F5C */
{
    FN_ENTER(0x006a8f5c);
    /* 006a8f5c: movzx eax, byte ptr [ecx + 0xd] */ r_eax = (u32)R8((u32)(r_ecx+0xdu));
    /* 006a8f60: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8f63: jge 0x6a8f66 */ if ((fS==fO)) goto L_006a8f66;
L_006a8f65:; BB(0x006a8f65);
    /* 006a8f65: ret  */ FN_RET(0x006a8f5c); r_esp += 4; return;
L_006a8f66:; BB(0x006a8f66);
    /* 006a8f66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8f68: ret  */ FN_RET(0x006a8f5c); r_esp += 4; return;
}

void f_006a8f6c(void) /* sub_6A8F6C */
{
    FN_ENTER(0x006a8f6c);
    /* 006a8f6c: movzx eax, byte ptr [ecx + 0xe] */ r_eax = (u32)R8((u32)(r_ecx+0xeu));
    /* 006a8f70: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8f73: jge 0x6a8f76 */ if ((fS==fO)) goto L_006a8f76;
L_006a8f75:; BB(0x006a8f75);
    /* 006a8f75: ret  */ FN_RET(0x006a8f6c); r_esp += 4; return;
L_006a8f76:; BB(0x006a8f76);
    /* 006a8f76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8f78: ret  */ FN_RET(0x006a8f6c); r_esp += 4; return;
}

void f_006a8f7c(void) /* sub_6A8F7C */
{
    FN_ENTER(0x006a8f7c);
    /* 006a8f7c: movsx eax, word ptr [ecx + 0x16] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x16u));
    /* 006a8f80: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8f85: jge 0x6a8f88 */ if ((fS==fO)) goto L_006a8f88;
L_006a8f87:; BB(0x006a8f87);
    /* 006a8f87: ret  */ FN_RET(0x006a8f7c); r_esp += 4; return;
L_006a8f88:; BB(0x006a8f88);
    /* 006a8f88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8f8a: ret  */ FN_RET(0x006a8f7c); r_esp += 4; return;
}

void f_006a8f8c(void) /* sub_6A8F8C */
{
    FN_ENTER(0x006a8f8c);
    /* 006a8f8c: movsx eax, word ptr [ecx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 006a8f90: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8f93: jge 0x6a8f99 */ if ((fS==fO)) goto L_006a8f99;
L_006a8f95:; BB(0x006a8f95);
    /* 006a8f95: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006a8f98: ret  */ FN_RET(0x006a8f8c); r_esp += 4; return;
L_006a8f99:; BB(0x006a8f99);
    /* 006a8f99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8f9b: ret  */ FN_RET(0x006a8f8c); r_esp += 4; return;
}

void f_006a8f9c(void) /* sub_6A8F9C */
{
    FN_ENTER(0x006a8f9c);
    /* 006a8f9c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a8fa1: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8fa4: jle 0x6a8fa8 */ if ((fZ||fS!=fO)) goto L_006a8fa8;
L_006a8fa6:; BB(0x006a8fa6);
    /* 006a8fa6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a8fa8:; BB(0x006a8fa8);
    /* 006a8fa8: mov byte ptr [ecx + 0x10], al */ W8((u32)(r_ecx+0x10u), (u8)r_eax);
    /* 006a8fab: ret 4 */ FN_RET(0x006a8f9c); r_esp += 8; return;
}

void f_006a8fb0(void) /* sub_6A8FB0 */
{
    FN_ENTER(0x006a8fb0);
    /* 006a8fb0: movzx eax, byte ptr [ecx + 0x10] */ r_eax = (u32)R8((u32)(r_ecx+0x10u));
    /* 006a8fb4: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8fb7: jle 0x6a8fbb */ if ((fZ||fS!=fO)) goto L_006a8fbb;
L_006a8fb9:; BB(0x006a8fb9);
    /* 006a8fb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a8fbb:; BB(0x006a8fbb);
    /* 006a8fbb: ret  */ FN_RET(0x006a8fb0); r_esp += 4; return;
}

void f_006a8fbc(void) /* sub_6A8FBC */
{
    FN_ENTER(0x006a8fbc);
    /* 006a8fbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a8fbd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8fbe: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a8fc0: movzx ebx, byte ptr [esp + 0xc] */ r_ebx = (u32)R8((u32)(r_esp+0xcu));
    /* 006a8fc5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8fc6: call 0x6ad1cc */ r_esp -= 4; W32(r_esp, 0x6a8fcbu); f_006ad1cc();
    /* 006a8fcb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a8fcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8fce: jne 0x6a8fd7 */ if (!fZ) goto L_006a8fd7;
L_006a8fd0:; BB(0x006a8fd0);
    /* 006a8fd0: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8fd3: jle 0x6a8fd7 */ if ((fZ||fS!=fO)) goto L_006a8fd7;
L_006a8fd5:; BB(0x006a8fd5);
    /* 006a8fd5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a8fd7:; BB(0x006a8fd7);
    /* 006a8fd7: mov byte ptr [ebp + 0x11], bl */ W8((u32)(r_ebp+0x11u), (u8)r_ebx);
    /* 006a8fda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a8fdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a8fdc: ret 4 */ FN_RET(0x006a8fbc); r_esp += 8; return;
}

void f_006a8fe0(void) /* sub_6A8FE0 */
{
    FN_ENTER(0x006a8fe0);
    /* 006a8fe0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8fe1: movzx ebx, byte ptr [ecx + 0x11] */ r_ebx = (u32)R8((u32)(r_ecx+0x11u));
    /* 006a8fe5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8fe6: call 0x6ad1cc */ r_esp -= 4; W32(r_esp, 0x6a8febu); f_006ad1cc();
    /* 006a8feb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a8fec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a8fee: jne 0x6a8ff7 */ if (!fZ) goto L_006a8ff7;
L_006a8ff0:; BB(0x006a8ff0);
    /* 006a8ff0: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a8ff3: jle 0x6a8ff7 */ if ((fZ||fS!=fO)) goto L_006a8ff7;
L_006a8ff5:; BB(0x006a8ff5);
    /* 006a8ff5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a8ff7:; BB(0x006a8ff7);
    /* 006a8ff7: mov eax, ebx */ r_eax = r_ebx;
    /* 006a8ff9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a8ffa: ret  */ FN_RET(0x006a8fe0); r_esp += 4; return;
}

void f_006a8ffc(void) /* sub_6A8FFC */
{
    FN_ENTER(0x006a8ffc);
    /* 006a8ffc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a8ffd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8ffe: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a9000: movsx ebx, word ptr [esp + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 006a9005: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a9007: jl 0x6a9012 */ if ((fS!=fO)) goto L_006a9012;
L_006a9009:; BB(0x006a9009);
    /* 006a9009: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6a900eu); f_006931f8();
    /* 006a900e: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a9010: jge 0x6a9014 */ if ((fS==fO)) goto L_006a9014;
L_006a9012:; BB(0x006a9012);
    /* 006a9012: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a9014:; BB(0x006a9014);
    /* 006a9014: mov word ptr [ebp + 0x14], bx */ W16((u32)(r_ebp+0x14u), (u16)r_ebx);
    /* 006a9018: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a9019: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a901a: ret 4 */ FN_RET(0x006a8ffc); r_esp += 8; return;
}

