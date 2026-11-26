#include "protos.h"

void f_005751d4(void) /* sub_5751D4 */
{
    FN_ENTER(0x005751d4);
    /* 005751d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005751d5: mov esi, ecx */ r_esi = r_ecx;
    /* 005751d7: mov eax, 0xb */ r_eax = 0xbu;
    /* 005751dc: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 005751e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005751e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005751e6: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 005751ed: mov ecx, esi */ r_ecx = r_esi;
    /* 005751ef: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5751f4u); f_007706b0();
    /* 005751f4: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005751f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005751fb: mov ecx, esi */ r_ecx = r_esi;
    /* 005751fd: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x575202u); f_007b52ec();
    /* 00575202: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00575203: ret  */ FN_RET(0x005751d4); r_esp += 4; return;
}

void f_00575204(void) /* sub_575204 */
{
    FN_ENTER(0x00575204);
    /* 00575204: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575205: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575206: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00575209: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057520b: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 00575212: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575214: jne 0x57525b */ if (!fZ) goto L_0057525b;
L_00575216:; BB(0x00575216);
    /* 00575216: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575218: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057521a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057521c: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x575221u); f_00772b44();
    /* 00575221: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575223: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x575228u); f_007aa094();
    /* 00575228: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 0057522e: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575231: je 0x575253 */ if (fZ) goto L_00575253;
L_00575233:; BB(0x00575233);
    /* 00575233: mov eax, 1 */ r_eax = 0x1u;
    /* 00575238: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0057523f: mov edx, 2 */ r_edx = 0x2u;
    /* 00575244: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 0057524b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0057524e: jmp 0x575346 */ goto L_00575346;
L_00575253:; BB(0x00575253);
    /* 00575253: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 00575256: jmp 0x575346 */ goto L_00575346;
L_0057525b:; BB(0x0057525b);
    /* 0057525b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057525d: call 0x5744a8 */ r_esp -= 4; W32(r_esp, 0x575262u); f_005744a8();
    /* 00575262: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575264: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x575269u); f_00770738();
    /* 00575269: mov edi, eax */ r_edi = r_eax;
    /* 0057526b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057526d: je 0x575343 */ if (fZ) goto L_00575343;
L_00575273:; BB(0x00575273);
    /* 00575273: push 0x300000 */ { u32 v = 0x300000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575278: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057527a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057527c: call 0x7b5290 */ r_esp -= 4; W32(r_esp, 0x575281u); f_007b5290();
    /* 00575281: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575283: je 0x5752ce */ if (fZ) goto L_005752ce;
L_00575285:; BB(0x00575285);
    /* 00575285: mov eax, dword ptr [ebp + 0x394] */ r_eax = R32((u32)(r_ebp+0x394u));
    /* 0057528b: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0057528e: mov dword ptr [ebp + 0x394], edx */ W32((u32)(r_ebp+0x394u), r_edx);
    /* 00575294: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00575297: jae 0x5752af */ if (!fC) goto L_005752af;
L_00575299:; BB(0x00575299);
    /* 00575299: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 0057529c: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 0057529f: mov edi, dword ptr [ebp + 0x58] */ r_edi = R32((u32)(r_ebp+0x58u));
    /* 005752a2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005752a5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005752a9: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 005752ad: jmp 0x5752f5 */ goto L_005752f5;
L_005752af:; BB(0x005752af);
    /* 005752af: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 005752b5: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 005752bb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005752be: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 005752c4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005752c8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005752cc: jmp 0x5752f5 */ goto L_005752f5;
L_005752ce:; BB(0x005752ce);
    /* 005752ce: mov dword ptr [ebp + 0x394], 0 */ W32((u32)(r_ebp+0x394u), 0x0u);
    /* 005752d8: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 005752de: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 005752e4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005752e7: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 005752ed: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005752f1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_005752f5:; BB(0x005752f5);
    /* 005752f5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005752f7: call 0x52ac5c */ r_esp -= 4; W32(r_esp, 0x5752fcu); f_0052ac5c();
    /* 005752fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005752fe: call 0x52ad44 */ r_esp -= 4; W32(r_esp, 0x575303u); f_0052ad44();
    /* 00575303: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575305: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57530au); f_007aa094();
    /* 0057530a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057530c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00575310: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 00575316: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057531a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057531c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00575320: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00575323: push dword ptr [ebp + 0x39c] */ { u32 v = R32((u32)(r_ebp+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00575329: call 0x772aa0 */ r_esp -= 4; W32(r_esp, 0x57532eu); f_00772aa0();
    /* 0057532e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00575330: movzx eax, word ptr [ebp + 0x340] */ r_eax = (u32)R16((u32)(r_ebp+0x340u));
    /* 00575337: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057533c: je 0x575374 */ if (fZ) goto L_00575374;
L_0057533e:; BB(0x0057533e);
    /* 0057533e: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 00575341: jmp 0x575346 */ goto L_00575346;
L_00575343:; BB(0x00575343);
    /* 00575343: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
L_00575346:; BB(0x00575346);
    /* 00575346: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575348: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x57534du); f_007b6880();
    /* 0057534d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057534f: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x575354u); f_007b7e9c();
    /* 00575354: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575356: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575358: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057535d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057535e: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x575363u); f_00805608();
    /* 00575363: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00575366: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057536b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0057536e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00575371: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575372: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575373: ret  */ FN_RET(0x00575204); r_esp += 4; return;
L_00575374:; BB(0x00575374);
    /* 00575374: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 00575377: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575378: lea eax, [ebp + 0x2a4] */ r_eax = (u32)(r_ebp+0x2a4u);
    /* 0057537e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057537f: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x575384u); f_007a9180();
    /* 00575384: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00575387: fld dword ptr [ebp + 0x39c] */ FPUSH(R_F32((u32)(r_ebp+0x39cu)));
    /* 0057538d: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00575393: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 00575396: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00575398: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0057539a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057539c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057539d: ja 0x5753b6 */ if ((!fC&&!fZ)) goto L_005753b6;
L_0057539f:; BB(0x0057539f);
    /* 0057539f: mov edx, dword ptr [ebp + 0x2b0] */ r_edx = R32((u32)(r_ebp+0x2b0u));
    /* 005753a5: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 005753a8: mov dword ptr [ebp + 0x2b0], eax */ W32((u32)(r_ebp+0x2b0u), r_eax);
    /* 005753ae: cmp edx, 0x96 */ {  u32 a = r_edx; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005753b4: jle 0x575346 */ if ((fZ||fS!=fO)) goto L_00575346;
L_005753b6:; BB(0x005753b6);
    /* 005753b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005753b8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005753ba: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5753bfu); f_007706b0();
    /* 005753bf: mov dword ptr [ebp + 0x2b0], 0 */ W32((u32)(r_ebp+0x2b0u), 0x0u);
    /* 005753c9: jmp 0x575346 */ goto L_00575346;
}

void f_0057533b(void)
{
    FN_ENTER(0x0057533b);
L_0057533b:; BB(0x0057533b);
    /* 0057533b: add byte ptr [esi + esi - 0x73], dh */ { u32 ad = (u32)(r_esi+r_esi+0xffffff8du);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 0057533f: jge 0x575379 */ if ((fS==fO)) goto L_00575379;
L_00575341:; BB(0x00575341);
    /* 00575341: jmp 0x575346 */ goto L_00575346;
L_00575346:; BB(0x00575346);
    /* 00575346: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575348: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x57534du); f_007b6880();
    /* 0057534d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057534f: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x575354u); f_007b7e9c();
    /* 00575354: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575356: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575358: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057535d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057535e: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x575363u); f_00805608();
    /* 00575363: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00575366: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057536b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0057536e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00575371: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575372: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575373: ret  */ FN_RET(0x0057533b); r_esp += 4; return;
L_00575379:; BB(0x00575379);
    /* 00575379: test dword ptr [edx + eax - 0x17b00000], esp */ {  u32 a = R32((u32)(r_edx+r_eax+0xe8500000u)); u32 b = r_esp; u32 r = (a & b) & 0xffffffffu;   }
    /* 00575380: cld  */ rt_df = 0;
    /* 00575381: cmp eax, 0xc4830023 */ {  u32 a = r_eax; u32 b = 0xc4830023u; u32 r = (a - b) & 0xffffffffu;   }
    /* 00575386: or cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00575388: test dword ptr [ebx + eax - 0x6a750000], ebx */ {  u32 a = R32((u32)(r_ebx+r_eax+0x958b0000u)); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;   }
    /* 0057538f: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00575390: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00575392: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00575394: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00575395: or al, 0xd8 */ {  u32 a = (u8)r_eax; u32 b = 0xd8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fC = 0; }
    /* 00575397: enter -0x2622, -0x21 */ { u32 f = 0xd9deu; u32 lv = 31u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 0057539b: loopne 0x57533b */ r_ecx--; if (r_ecx && !fZ) goto L_0057533b;
    /* 0057539d: ja 0x5753b6 */ if ((!fC&&!fZ)) goto L_005753b6;
L_0057539f:; BB(0x0057539f);
    /* 0057539f: mov edx, dword ptr [ebp + 0x2b0] */ r_edx = R32((u32)(r_ebp+0x2b0u));
    /* 005753a5: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 005753a8: mov dword ptr [ebp + 0x2b0], eax */ W32((u32)(r_ebp+0x2b0u), r_eax);
    /* 005753ae: cmp edx, 0x96 */ {  u32 a = r_edx; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005753b4: jle 0x575346 */ if ((fZ||fS!=fO)) goto L_00575346;
L_005753b6:; BB(0x005753b6);
    /* 005753b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005753b8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005753ba: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5753bfu); f_007706b0();
    /* 005753bf: mov dword ptr [ebp + 0x2b0], 0 */ W32((u32)(r_ebp+0x2b0u), 0x0u);
    /* 005753c9: jmp 0x575346 */ goto L_00575346;
}

void f_00575352(void)
{
    FN_ENTER(0x00575352);
    /* 00575352: and al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00575354: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575356: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575358: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057535d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057535e: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x575363u); f_00805608();
    /* 00575363: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00575366: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057536b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0057536e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00575371: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575372: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575373: ret  */ FN_RET(0x00575352); r_esp += 4; return;
}

void f_00575354(void)
{
    FN_ENTER(0x00575354);
    /* 00575354: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575356: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575358: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057535d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057535e: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x575363u); f_00805608();
    /* 00575363: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00575366: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057536b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0057536e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00575371: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575372: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575373: ret  */ FN_RET(0x00575354); r_esp += 4; return;
}

void f_005753d0(void) /* sub_5753D0 */
{
    FN_ENTER(0x005753d0);
    /* 005753d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005753d1: mov edi, ecx */ r_edi = r_ecx;
    /* 005753d3: mov ecx, edi */ r_ecx = r_edi;
    /* 005753d5: push 0x20f */ { u32 v = 0x20fu; r_esp -= 4; W32(r_esp, v); }
    /* 005753da: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5753dfu); f_007879b8();
    /* 005753df: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005753e2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005753e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005753e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005753e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005753e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005753e8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5753edu); f_00814298();
    /* 005753ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005753f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005753f1: ret  */ FN_RET(0x005753d0); r_esp += 4; return;
}

void f_005753f4(void) /* sub_5753F4 */
{
    FN_ENTER(0x005753f4);
    /* 005753f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005753f5: mov edi, ecx */ r_edi = r_ecx;
    /* 005753f7: mov ecx, edi */ r_ecx = r_edi;
    /* 005753f9: push 0x20e */ { u32 v = 0x20eu; r_esp -= 4; W32(r_esp, v); }
    /* 005753fe: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x575403u); f_007879b8();
    /* 00575403: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00575406: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00575408: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575409: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057540a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057540b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057540c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x575411u); f_00814298();
    /* 00575411: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00575414: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575415: ret  */ FN_RET(0x005753f4); r_esp += 4; return;
}

void f_00575418(void) /* sub_575418 */
{
    FN_ENTER(0x00575418);
    /* 00575418: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575419: mov edi, ecx */ r_edi = r_ecx;
    /* 0057541b: mov ecx, edi */ r_ecx = r_edi;
    /* 0057541d: push 0x20d */ { u32 v = 0x20du; r_esp -= 4; W32(r_esp, v); }
    /* 00575422: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x575427u); f_007879b8();
    /* 00575427: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057542a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057542c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057542d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057542e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057542f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575430: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x575435u); f_00814298();
    /* 00575435: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00575438: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575439: ret  */ FN_RET(0x00575418); r_esp += 4; return;
}

void f_0057543c(void) /* sub_57543C */
{
    FN_ENTER(0x0057543c);
    /* 0057543c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057543d: mov edi, ecx */ r_edi = r_ecx;
    /* 0057543f: mov ecx, edi */ r_ecx = r_edi;
    /* 00575441: push 0x212 */ { u32 v = 0x212u; r_esp -= 4; W32(r_esp, v); }
    /* 00575446: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x57544bu); f_007879b8();
    /* 0057544b: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057544e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00575450: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575451: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575452: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575453: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575454: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x575459u); f_00814298();
    /* 00575459: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057545c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057545d: ret  */ FN_RET(0x0057543c); r_esp += 4; return;
}

void f_00575460(void) /* sub_575460 */
{
    FN_ENTER(0x00575460);
    /* 00575460: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575461: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00575462: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575463: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00575464: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00575467: mov edi, ecx */ r_edi = r_ecx;
    /* 00575469: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0057546b: mov ecx, edi */ r_ecx = r_edi;
    /* 0057546d: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575472: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575477: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057547c: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x57547fu); call_ind(t); }
    /* 0057547f: mov esi, eax */ r_esi = r_eax;
    /* 00575481: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575483: je 0x57555e */ if (fZ) goto L_0057555e;
L_00575489:; BB(0x00575489);
    /* 00575489: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0057548f: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00575495: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575496: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x57549bu); f_00794548();
    /* 0057549b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057549c: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0057549f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5754a4u); f_00829cc8();
    /* 005754a4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5754a9u); f_0082d7b0();
    /* 005754a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005754ab: push dword ptr [edi + 0x388] */ { u32 v = R32((u32)(r_edi+0x388u)); r_esp -= 4; W32(r_esp, v); }
    /* 005754b1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005754b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005754b5: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5754bau); f_00830b74();
    /* 005754ba: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005754bd: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5754c2u); f_0082d838();
    /* 005754c2: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005754c5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005754c7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5754ccu); f_0082d8bc();
    /* 005754cc: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5754d1u); f_004f7c84();
    /* 005754d1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005754d4: je 0x5755bc */ if (fZ) goto L_005755bc;
L_005754da:; BB(0x005754da);
    /* 005754da: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5754dfu); f_00578b38();
    /* 005754df: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005754e6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005754e8: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005754eb: je 0x575579 */ if (fZ) goto L_00575579;
L_005754f1:; BB(0x005754f1);
    /* 005754f1: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005754f4: je 0x575566 */ if (fZ) goto L_00575566;
L_005754f6:; BB(0x005754f6);
    /* 005754f6: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5754fbu); f_0082fa9c();
    /* 005754fb: mov ecx, edi */ r_ecx = r_edi;
    /* 005754fd: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x575502u); f_007aa7b8();
    /* 00575502: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x575507u); f_0082faac();
L_00575507:; BB(0x00575507);
    /* 00575507: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x57550cu); f_0082dab0();
    /* 0057550c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057550e: je 0x57551f */ if (fZ) goto L_0057551f;
L_00575510:; BB(0x00575510);
    /* 00575510: mov eax, dword ptr [edi + 0x3b0] */ r_eax = R32((u32)(r_edi+0x3b0u));
    /* 00575516: lea ecx, [edi + 0x3b0] */ r_ecx = (u32)(r_edi+0x3b0u);
    /* 0057551c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x57551fu); call_ind(t); }
L_0057551f:; BB(0x0057551f);
    /* 0057551f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x575524u); f_0082da80();
    /* 00575524: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x575529u); f_00794750();
    /* 00575529: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00575530: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575533: jl 0x57553a */ if ((fS!=fO)) goto L_0057553a;
L_00575535:; BB(0x00575535);
    /* 00575535: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575538: jle 0x57555e */ if ((fZ||fS!=fO)) goto L_0057555e;
L_0057553a:; BB(0x0057553a);
    /* 0057553a: mov dword ptr [esp], 0x3fc00000 */ W32((u32)(r_esp), 0x3fc00000u);
    /* 00575541: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00575544: mov ecx, edi */ r_ecx = r_edi;
    /* 00575546: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0057554e: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 00575556: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575559: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x57555eu); f_00779d4c();
L_0057555e:; BB(0x0057555e);
    /* 0057555e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00575561: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00575562: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575563: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00575564: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575565: ret  */ FN_RET(0x00575460); r_esp += 4; return;
L_00575566:; BB(0x00575566);
    /* 00575566: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x57556bu); f_0082fa9c();
    /* 0057556b: mov ecx, edi */ r_ecx = r_edi;
    /* 0057556d: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x575572u); f_007aa668();
    /* 00575572: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x575577u); f_0082faac();
    /* 00575577: jmp 0x575507 */ goto L_00575507;
L_00575579:; BB(0x00575579);
    /* 00575579: mov edx, dword ptr [edi + 0x3b0] */ r_edx = R32((u32)(r_edi+0x3b0u));
    /* 0057557f: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00575584: lea ecx, [edi + 0x3b0] */ r_ecx = (u32)(r_edi+0x3b0u);
    /* 0057558a: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0057558e: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x575591u); call_ind(t); }
    /* 00575591: mov ebx, eax */ r_ebx = r_eax;
    /* 00575593: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00575597: mov edx, dword ptr [edi + 0x3b0] */ r_edx = R32((u32)(r_edi+0x3b0u));
    /* 0057559d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5755a0u); call_ind(t); }
    /* 005755a0: mov ecx, edi */ r_ecx = r_edi;
    /* 005755a2: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5755a7u); f_008173d0();
    /* 005755a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005755a9: jne 0x575507 */ if (!fZ) goto L_00575507;
L_005755af:; BB(0x005755af);
    /* 005755af: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005755b1: jne 0x5754f1 */ if (!fZ) goto L_005754f1;
L_005755b7:; BB(0x005755b7);
    /* 005755b7: jmp 0x575507 */ goto L_00575507;
L_005755bc:; BB(0x005755bc);
    /* 005755bc: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005755bf: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5755c4u); f_0082e1e8();
    /* 005755c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005755c5: jmp 0x57551f */ goto L_0057551f;
}

void f_005755cc(void) /* sub_5755CC */
{
    FN_ENTER(0x005755cc);
    /* 005755cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005755cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005755cf: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5755d4u); f_004f7c84();
    /* 005755d4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005755d7: je 0x5756da */ if (fZ) goto L_005756da;
L_005755dd:; BB(0x005755dd);
    /* 005755dd: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005755e4: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005755e7: ja 0x575699 */ if ((!fC&&!fZ)) goto L_00575699;
L_005755ed:; BB(0x005755ed);
    /* 005755ed: mov eax, dword ptr [eax*4 + 0x926e68] */ r_eax = R32((u32)(r_eax*4+0x926e68u));
    /* 005755f4: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x005755cc); r_esp += 4; return;
L_005756da:; BB(0x005756da);
    /* 005756da: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005756dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005756de: call dword ptr [eax + 0x1a4] */ { u32 t = R32((u32)(r_eax+0x1a4u)); r_esp -= 4; W32(r_esp, 0x5756e4u); call_ind(t); }
    /* 005756e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756e5: ret  */ FN_RET(0x005755cc); r_esp += 4; return;
}

void f_005755f6(void)
{
    FN_ENTER(0x005755f6);
    /* 005755f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005755f8: call 0x5756e8 */ r_esp -= 4; W32(r_esp, 0x5755fdu); f_005756e8();
    /* 005755fd: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x005755f6); r_esp += 4; return;
}

void f_00575602(void)
{
    FN_ENTER(0x00575602);
    /* 00575602: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00575604: call 0x575764 */ r_esp -= 4; W32(r_esp, 0x575609u); f_00575764();
    /* 00575609: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x00575602); r_esp += 4; return;
}

void f_0057560e(void)
{
    FN_ENTER(0x0057560e);
    /* 0057560e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00575610: call 0x5757e8 */ r_esp -= 4; W32(r_esp, 0x575615u); f_005757e8();
    /* 00575615: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x0057560e); r_esp += 4; return;
}

void f_0057561a(void)
{
    FN_ENTER(0x0057561a);
    /* 0057561a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057561c: call 0x5758dc */ r_esp -= 4; W32(r_esp, 0x575621u); f_005758dc();
    /* 00575621: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x0057561a); r_esp += 4; return;
}

void f_00575623(void)
{
    FN_ENTER(0x00575623);
    /* 00575623: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00575625: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00575627: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x57562du); call_ind(t); }
    /* 0057562d: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x00575623); r_esp += 4; return;
}

void f_0057562f(void)
{
    FN_ENTER(0x0057562f);
    /* 0057562f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00575631: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00575633: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x575639u); call_ind(t); }
    /* 00575639: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x0057562f); r_esp += 4; return;
}

void f_0057563b(void)
{
    FN_ENTER(0x0057563b);
    /* 0057563b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0057563d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057563f: call dword ptr [eax + 0x170] */ { u32 t = R32((u32)(r_eax+0x170u)); r_esp -= 4; W32(r_esp, 0x575645u); call_ind(t); }
    /* 00575645: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x0057563b); r_esp += 4; return;
}

void f_00575647(void)
{
    FN_ENTER(0x00575647);
    /* 00575647: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00575649: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057564b: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x575651u); call_ind(t); }
    /* 00575651: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x00575647); r_esp += 4; return;
}

void f_00575653(void)
{
    FN_ENTER(0x00575653);
    /* 00575653: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00575655: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00575657: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x57565du); call_ind(t); }
    /* 0057565d: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x00575653); r_esp += 4; return;
}

void f_0057565f(void)
{
    FN_ENTER(0x0057565f);
    /* 0057565f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00575661: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00575663: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x575669u); call_ind(t); }
    /* 00575669: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x0057565f); r_esp += 4; return;
}

void f_0057566b(void)
{
    FN_ENTER(0x0057566b);
    /* 0057566b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0057566d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057566f: call dword ptr [eax + 0x160] */ { u32 t = R32((u32)(r_eax+0x160u)); r_esp -= 4; W32(r_esp, 0x575675u); call_ind(t); }
    /* 00575675: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x0057566b); r_esp += 4; return;
}

void f_00575677(void)
{
    FN_ENTER(0x00575677);
    /* 00575677: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00575679: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057567b: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x575681u); call_ind(t); }
    /* 00575681: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x00575677); r_esp += 4; return;
}

void f_00575683(void)
{
    FN_ENTER(0x00575683);
    /* 00575683: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00575685: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00575687: call dword ptr [eax + 0x158] */ { u32 t = R32((u32)(r_eax+0x158u)); r_esp -= 4; W32(r_esp, 0x57568du); call_ind(t); }
    /* 0057568d: jmp 0x575699 */ goto L_00575699;
L_00575699:; BB(0x00575699);
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x00575683); r_esp += 4; return;
}

void f_0057568f(void)
{
    FN_ENTER(0x0057568f);
    /* 0057568f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00575691: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00575693: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x575699u); call_ind(t); }
    /* 00575699: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057569b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5756a0u); f_0078730c();
    /* 005756a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005756a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005756a3: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005756a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005756af: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005756b2: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005756b8: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005756bb: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005756be: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5756c3u); f_006946a8();
    /* 005756c3: fld dword ptr [0x926f98] */ FPUSH(R_F32((u32)(0x926f98u)));
    /* 005756c9: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005756cf: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005756d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005756d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005756d9: ret  */ FN_RET(0x0057568f); r_esp += 4; return;
}

void f_005756e8(void) /* sub_5756E8 */
{
    FN_ENTER(0x005756e8);
    /* 005756e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005756e9: mov esi, ecx */ r_esi = r_ecx;
    /* 005756eb: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 005756f2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005756f5: jne 0x57571f */ if (!fZ) goto L_0057571f;
L_005756f7:; BB(0x005756f7);
    /* 005756f7: mov ecx, esi */ r_ecx = r_esi;
    /* 005756f9: call 0x5744a8 */ r_esp -= 4; W32(r_esp, 0x5756feu); f_005744a8();
    /* 005756fe: mov eax, dword ptr [esi + 0x3b0] */ r_eax = R32((u32)(r_esi+0x3b0u));
    /* 00575704: lea ecx, [esi + 0x3b0] */ r_ecx = (u32)(r_esi+0x3b0u);
    /* 0057570a: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x57570du); call_ind(t); }
    /* 0057570d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057570f: je 0x57575a */ if (fZ) goto L_0057575a;
L_00575711:; BB(0x00575711);
    /* 00575711: mov eax, 2 */ r_eax = 0x2u;
    /* 00575716: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0057571d: jmp 0x57575a */ goto L_0057575a;
L_0057571f:; BB(0x0057571f);
    /* 0057571f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575722: jne 0x575732 */ if (!fZ) goto L_00575732;
L_00575724:; BB(0x00575724);
    /* 00575724: mov eax, 0xc */ r_eax = 0xcu;
    /* 00575729: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 00575730: jmp 0x57575a */ goto L_0057575a;
L_00575732:; BB(0x00575732);
    /* 00575732: mov eax, 1 */ r_eax = 0x1u;
    /* 00575737: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0057573e: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00575745: lea ecx, [esi + 0x3b0] */ r_ecx = (u32)(r_esi+0x3b0u);
    /* 0057574b: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x575750u); f_00576c48();
    /* 00575750: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00575753: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575754: call 0x57895c */ r_esp -= 4; W32(r_esp, 0x575759u); f_0057895c();
    /* 00575759: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0057575a:; BB(0x0057575a);
    /* 0057575a: mov ecx, esi */ r_ecx = r_esi;
    /* 0057575c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x575761u); f_007aa094();
    /* 00575761: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00575762: ret  */ FN_RET(0x005756e8); r_esp += 4; return;
}

void f_00575764(void) /* sub_575764 */
{
    FN_ENTER(0x00575764);
    /* 00575764: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575765: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00575766: mov edi, ecx */ r_edi = r_ecx;
    /* 00575768: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057576a: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 00575770: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00575772: mov ecx, edi */ r_ecx = r_edi;
    /* 00575774: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x575779u); f_007714cc();
    /* 00575779: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 00575780: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00575783: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575788: jge 0x5757de */ if ((fS==fO)) goto L_005757de;
L_0057578a:; BB(0x0057578a);
    /* 0057578a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057578b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x575790u); f_0068d5a8();
    /* 00575790: mov esi, eax */ r_esi = r_eax;
    /* 00575792: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00575795: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575797: je 0x5757de */ if (fZ) goto L_005757de;
L_00575799:; BB(0x00575799);
    /* 00575799: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 0057579f: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005757a5: jne 0x5757de */ if (!fZ) goto L_005757de;
L_005757a7:; BB(0x005757a7);
    /* 005757a7: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005757aa: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005757ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005757ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005757af: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x5757b4u); f_0078ea50();
    /* 005757b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005757b7: fld dword ptr [edi + 0x3d8] */ FPUSH(R_F32((u32)(r_edi+0x3d8u)));
    /* 005757bd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005757bf: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005757c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005757c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005757c4: jbe 0x5757de */ if ((fC||fZ)) goto L_005757de;
L_005757c6:; BB(0x005757c6);
    /* 005757c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005757c7: mov ecx, edi */ r_ecx = r_edi;
    /* 005757c9: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5757ceu); f_007706b0();
    /* 005757ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005757d0: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 005757d7: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
L_005757de:; BB(0x005757de);
    /* 005757de: mov ecx, edi */ r_ecx = r_edi;
    /* 005757e0: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5757e5u); f_007aa094();
    /* 005757e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005757e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005757e7: ret  */ FN_RET(0x00575764); r_esp += 4; return;
}

void f_005757e8(void) /* sub_5757E8 */
{
    FN_ENTER(0x005757e8);
    /* 005757e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005757e9: mov edi, ecx */ r_edi = r_ecx;
    /* 005757eb: mov ecx, edi */ r_ecx = r_edi;
    /* 005757ed: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5757f2u); f_007aa094();
    /* 005757f2: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 005757f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005757fc: jne 0x575845 */ if (!fZ) goto L_00575845;
L_005757fe:; BB(0x005757fe);
    /* 005757fe: mov ecx, edi */ r_ecx = r_edi;
    /* 00575800: call 0x5744a8 */ r_esp -= 4; W32(r_esp, 0x575805u); f_005744a8();
    /* 00575805: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0057580b: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057580e: je 0x5758b5 */ if (fZ) goto L_005758b5;
L_00575814:; BB(0x00575814);
    /* 00575814: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575819: mov dword ptr [edi + 0x398], 1 */ W32((u32)(r_edi+0x398u), 0x1u);
    /* 00575823: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575825: mov eax, 2 */ r_eax = 0x2u;
    /* 0057582a: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00575831: mov ecx, edi */ r_ecx = r_edi;
    /* 00575833: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x575838u); f_007b52ec();
    /* 00575838: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0057583b: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00575840: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00575843: jmp 0x5758b5 */ goto L_005758b5;
L_00575845:; BB(0x00575845);
    /* 00575845: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575848: jne 0x575864 */ if (!fZ) goto L_00575864;
L_0057584a:; BB(0x0057584a);
    /* 0057584a: mov eax, 0xc */ r_eax = 0xcu;
    /* 0057584f: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00575856: mov edx, 1 */ r_edx = 0x1u;
    /* 0057585b: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00575862: jmp 0x5758b5 */ goto L_005758b5;
L_00575864:; BB(0x00575864);
    /* 00575864: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0057586a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057586d: jne 0x57587d */ if (!fZ) goto L_0057587d;
L_0057586f:; BB(0x0057586f);
    /* 0057586f: mov eax, 2 */ r_eax = 0x2u;
    /* 00575874: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0057587b: jmp 0x5758b5 */ goto L_005758b5;
L_0057587d:; BB(0x0057587d);
    /* 0057587d: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575882: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575884: mov eax, 1 */ r_eax = 0x1u;
    /* 00575889: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00575890: mov edx, 0xd */ r_edx = 0xdu;
    /* 00575895: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 0057589c: mov ecx, edi */ r_ecx = r_edi;
    /* 0057589e: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5758a3u); f_007b52c4();
    /* 005758a3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005758a6: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005758ab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005758ae: mov ecx, edi */ r_ecx = r_edi;
    /* 005758b0: call 0x5745e8 */ r_esp -= 4; W32(r_esp, 0x5758b5u); f_005745e8();
L_005758b5:; BB(0x005758b5);
    /* 005758b5: mov ecx, edi */ r_ecx = r_edi;
    /* 005758b7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5758bcu); f_007b6880();
    /* 005758bc: mov ecx, edi */ r_ecx = r_edi;
    /* 005758be: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5758c3u); f_007b7e9c();
    /* 005758c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005758c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005758c7: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005758ca: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005758cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005758d0: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5758d5u); f_00805608();
    /* 005758d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005758d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005758d9: ret  */ FN_RET(0x005757e8); r_esp += 4; return;
}

void f_0057588d(void)
{
    FN_ENTER(0x0057588d);
    /* 0057588d: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057588f: add byte ptr [edx + 0xd], bh */ { u32 ad = (u32)(r_edx+0xdu);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00575895: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 0057589c: mov ecx, edi */ r_ecx = r_edi;
    /* 0057589e: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5758a3u); f_007b52c4();
    /* 005758a3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005758a6: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005758ab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005758ae: mov ecx, edi */ r_ecx = r_edi;
    /* 005758b0: call 0x5745e8 */ r_esp -= 4; W32(r_esp, 0x5758b5u); f_005745e8();
    /* 005758b5: mov ecx, edi */ r_ecx = r_edi;
    /* 005758b7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5758bcu); f_007b6880();
    /* 005758bc: mov ecx, edi */ r_ecx = r_edi;
    /* 005758be: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5758c3u); f_007b7e9c();
    /* 005758c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005758c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005758c7: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005758ca: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005758cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005758d0: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5758d5u); f_00805608();
    /* 005758d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005758d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005758d9: ret  */ FN_RET(0x0057588d); r_esp += 4; return;
}

void f_005758dc(void) /* sub_5758DC */
{
    FN_ENTER(0x005758dc);
    /* 005758dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005758dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005758de: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005758e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005758e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005758e5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5758eau); f_007aa094();
    /* 005758ea: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 005758f1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005758f4: jne 0x5759f2 */ if (!fZ) goto L_005759f2;
L_005758fa:; BB(0x005758fa);
    /* 005758fa: push 0x41500000 */ { u32 v = 0x41500000u; r_esp -= 4; W32(r_esp, v); }
    /* 005758ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575901: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x575906u); f_007aaa30();
    /* 00575906: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575908: jne 0x575912 */ if (!fZ) goto L_00575912;
L_0057590a:; BB(0x0057590a);
    /* 0057590a: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0057590d: jmp 0x5759c0 */ goto L_005759c0;
L_00575912:; BB(0x00575912);
    /* 00575912: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575914: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x575919u); f_007aa094();
    /* 00575919: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0057591e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x575923u); f_0082d990();
    /* 00575923: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00575926: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00575928: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x57592du); f_0082d838();
    /* 0057592d: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00575930: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00575932: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x575937u); f_0082d8bc();
    /* 00575937: push 0x41500000 */ { u32 v = 0x41500000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057593c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057593e: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x575943u); f_007aaab8();
    /* 00575943: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x575948u); f_0082da80();
    /* 00575948: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 0057594e: add ecx, 0x5c0 */ {  u32 a = r_ecx; u32 b = 0x5c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00575954: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x575959u); f_0082d990();
    /* 00575959: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00575960: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00575964: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00575966: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0057596e: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00575976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575977: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0057597b: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x575980u); f_00830aa0();
    /* 00575980: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x575985u); f_0082da80();
    /* 00575985: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575987: call 0x5716c0 */ r_esp -= 4; W32(r_esp, 0x57598cu); f_005716c0();
    /* 0057598c: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575991: mov edx, dword ptr [0xa7402c] */ r_edx = R32((u32)(0xa7402cu));
    /* 00575997: mov ecx, dword ptr [ebp + 0x33c] */ r_ecx = R32((u32)(r_ebp+0x33cu));
    /* 0057599d: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 005759a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005759a1: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 005759a6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005759a8: push dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005759ab: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 005759af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005759b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005759b1: call 0x5765a8 */ r_esp -= 4; W32(r_esp, 0x5759b6u); f_005765a8();
    /* 005759b6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005759b9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005759bb: call 0x575adc */ r_esp -= 4; W32(r_esp, 0x5759c0u); f_00575adc();
L_005759c0:; BB(0x005759c0);
    /* 005759c0: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 005759c6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005759c9: je 0x575a4f */ if (fZ) goto L_00575a4f;
L_005759cf:; BB(0x005759cf);
    /* 005759cf: mov eax, 2 */ r_eax = 0x2u;
    /* 005759d4: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 005759db: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005759dd: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 005759e4: mov eax, 0xf */ r_eax = 0xfu;
    /* 005759e9: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 005759f0: jmp 0x575a4f */ goto L_00575a4f;
L_005759f2:; BB(0x005759f2);
    /* 005759f2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005759f5: jne 0x575a14 */ if (!fZ) goto L_00575a14;
L_005759f7:; BB(0x005759f7);
    /* 005759f7: movsx edx, word ptr [ebp + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 005759fe: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00575a01: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00575a04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00575a06: jl 0x575a72 */ if ((fS!=fO)) goto L_00575a72;
L_00575a08:; BB(0x00575a08);
    /* 00575a08: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00575a0f: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00575a12: jmp 0x575a4f */ goto L_00575a4f;
L_00575a14:; BB(0x00575a14);
    /* 00575a14: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575a19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575a1b: mov ebx, dword ptr [ebp + 0x30] */ r_ebx = R32((u32)(r_ebp+0x30u));
    /* 00575a1e: or ebx, 0x200000 */ {  u32 a = r_ebx; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00575a24: mov eax, 1 */ r_eax = 0x1u;
    /* 00575a29: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00575a30: mov edx, 0xc */ r_edx = 0xcu;
    /* 00575a35: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00575a3c: and ebx, 0xfbfbffff */ {  u32 a = r_ebx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00575a42: mov dword ptr [ebp + 0x30], ebx */ W32((u32)(r_ebp+0x30u), r_ebx);
    /* 00575a45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575a47: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x575a4cu); f_007b52ec();
    /* 00575a4c: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
L_00575a4f:; BB(0x00575a4f);
    /* 00575a4f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575a51: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x575a56u); f_007b6880();
    /* 00575a56: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575a58: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x575a5du); f_007b7e9c();
    /* 00575a5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575a5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575a61: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00575a66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00575a67: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x575a6cu); f_00805608();
    /* 00575a6c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00575a6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00575a70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575a71: ret  */ FN_RET(0x005758dc); r_esp += 4; return;
L_00575a72:; BB(0x00575a72);
    /* 00575a72: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00575a75: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00575a7a: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00575a7d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00575a7f: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00575a86: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575a88: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x575a8du); f_007751b0();
    /* 00575a8d: fcomp dword ptr [ebp + 0x3cc] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3ccu))); FPOP();
    /* 00575a93: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00575a95: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00575a96: ja 0x575aa4 */ if ((!fC&&!fZ)) goto L_00575aa4;
L_00575a98:; BB(0x00575a98);
    /* 00575a98: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575a9a: call 0x57480c */ r_esp -= 4; W32(r_esp, 0x575a9fu); f_0057480c();
    /* 00575a9f: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00575aa2: jmp 0x575a4f */ goto L_00575a4f;
L_00575aa4:; BB(0x00575aa4);
    /* 00575aa4: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575aa9: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00575aac: mov eax, 1 */ r_eax = 0x1u;
    /* 00575ab1: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00575ab8: or edx, 0x4040000 */ {  u32 a = r_edx; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00575abe: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00575ac0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00575ac1: mov word ptr [ebp + 0x330], bx */ W16((u32)(r_ebp+0x330u), (u16)r_ebx);
    /* 00575ac8: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00575acb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575acd: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x575ad2u); f_007b52c4();
    /* 00575ad2: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00575ad5: jmp 0x575a4f */ goto L_00575a4f;
}

void f_00575adc(void) /* sub_575ADC */
{
    FN_ENTER(0x00575adc);
    /* 00575adc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575add: mov edi, ecx */ r_edi = r_ecx;
    /* 00575adf: mov ecx, edi */ r_ecx = r_edi;
    /* 00575ae1: push 0x211 */ { u32 v = 0x211u; r_esp -= 4; W32(r_esp, v); }
    /* 00575ae6: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x575aebu); f_007879b8();
    /* 00575aeb: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00575aee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00575af0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575af1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575af2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575af4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x575af9u); f_00814298();
    /* 00575af9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00575afc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575afd: ret  */ FN_RET(0x00575adc); r_esp += 4; return;
}

void f_00575b00(void) /* sub_575B00 */
{
    FN_ENTER(0x00575b00);
    /* 00575b00: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00575b07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00575b09: jl 0x575b1f */ if ((fS!=fO)) goto L_00575b1f;
L_00575b0b:; BB(0x00575b0b);
    /* 00575b0b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00575b0e: jle 0x575b5f */ if ((fZ||fS!=fO)) goto L_00575b5f;
L_00575b10:; BB(0x00575b10);
    /* 00575b10: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00575b13: je 0x575b5f */ if (fZ) goto L_00575b5f;
L_00575b15:; BB(0x00575b15);
    /* 00575b15: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575b18: jl 0x575b1f */ if ((fS!=fO)) goto L_00575b1f;
L_00575b1a:; BB(0x00575b1a);
    /* 00575b1a: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00575b1d: jle 0x575b5f */ if ((fZ||fS!=fO)) goto L_00575b5f;
L_00575b1f:; BB(0x00575b1f);
    /* 00575b1f: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 00575b25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575b27: je 0x575b34 */ if (fZ) goto L_00575b34;
L_00575b29:; BB(0x00575b29);
    /* 00575b29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00575b2b: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00575b32: jmp 0x575b40 */ goto L_00575b40;
L_00575b34:; BB(0x00575b34);
    /* 00575b34: mov eax, 1 */ r_eax = 0x1u;
    /* 00575b39: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
L_00575b40:; BB(0x00575b40);
    /* 00575b40: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575b45: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00575b48: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00575b4a: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00575b51: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00575b56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575b57: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00575b5a: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x575b5fu); f_007b52c4();
L_00575b5f:; BB(0x00575b5f);
    /* 00575b5f: ret  */ FN_RET(0x00575b00); r_esp += 4; return;
}

void f_00575b60(void) /* sub_575B60 */
{
    FN_ENTER(0x00575b60);
    /* 00575b60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575b61: mov edi, ecx */ r_edi = r_ecx;
    /* 00575b63: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00575b6a: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00575b6d: ja 0x575bc2 */ if ((!fC&&!fZ)) goto L_00575bc2;
L_00575b6f:; BB(0x00575b6f);
    /* 00575b6f: mov eax, dword ptr [eax*4 + 0x926eac] */ r_eax = R32((u32)(r_eax*4+0x926eacu));
    /* 00575b76: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00575bc2:; BB(0x00575bc2);
    /* 00575bc2: mov eax, 5 */ r_eax = 0x5u;
    /* 00575bc7: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00575bce: mov edx, 1 */ r_edx = 0x1u;
    /* 00575bd3: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 00575bda: mov ecx, edi */ r_ecx = r_edi;
    /* 00575bdc: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x575be1u); f_007751b0();
    /* 00575be1: fcomp dword ptr [0x926f8c] */ fx_compare(ST(0), R_F32((u32)(0x926f8cu))); FPOP();
    /* 00575be7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00575be9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00575bea: jbe 0x575bfa */ if ((fC||fZ)) goto L_00575bfa;
L_00575bec:; BB(0x00575bec);
    /* 00575bec: mov eax, 3 */ r_eax = 0x3u;
    /* 00575bf1: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00575bf8: jmp 0x575c06 */ goto L_00575c06;
L_00575bfa:; BB(0x00575bfa);
    /* 00575bfa: mov eax, 4 */ r_eax = 0x4u;
    /* 00575bff: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_00575c06:; BB(0x00575c06);
    /* 00575c06: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575c0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575c0d: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00575c10: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00575c15: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00575c1a: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00575c1d: mov ecx, edi */ r_ecx = r_edi;
    /* 00575c1f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x575c24u); f_007b52ec();
    /* 00575c24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575c25: ret  */ FN_RET(0x00575b60); r_esp += 4; return;
}

void f_00575b78(void)
{
    FN_ENTER(0x00575b78);
    /* 00575b78: mov edx, dword ptr [edi + 0x354] */ r_edx = R32((u32)(r_edi+0x354u));
    /* 00575b7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00575b80: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00575b87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575b89: je 0x575c26 */ if (fZ) goto L_00575c26;
L_00575b8f:; BB(0x00575b8f);
    /* 00575b8f: mov eax, 2 */ r_eax = 0x2u;
    /* 00575b94: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00575b9b: mov edx, 0xa */ r_edx = 0xau;
    /* 00575ba0: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
L_00575ba7:; BB(0x00575ba7);
    /* 00575ba7: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575bac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575bae: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00575bb1: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00575bb6: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00575bb9: mov ecx, edi */ r_ecx = r_edi;
    /* 00575bbb: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x575bc0u); f_007b52ec();
    /* 00575bc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575bc1: ret  */ FN_RET(0x00575b78); r_esp += 4; return;
L_00575c26:; BB(0x00575c26);
    /* 00575c26: mov eax, 3 */ r_eax = 0x3u;
    /* 00575c2b: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00575c32: mov edx, 7 */ r_edx = 0x7u;
    /* 00575c37: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00575c3e: jmp 0x575ba7 */ goto L_00575ba7;
}

void f_00575bc2(void)
{
    FN_ENTER(0x00575bc2);
    /* 00575bc2: mov eax, 5 */ r_eax = 0x5u;
    /* 00575bc7: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00575bce: mov edx, 1 */ r_edx = 0x1u;
    /* 00575bd3: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 00575bda: mov ecx, edi */ r_ecx = r_edi;
    /* 00575bdc: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x575be1u); f_007751b0();
    /* 00575be1: fcomp dword ptr [0x926f8c] */ fx_compare(ST(0), R_F32((u32)(0x926f8cu))); FPOP();
    /* 00575be7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00575be9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00575bea: jbe 0x575bfa */ if ((fC||fZ)) goto L_00575bfa;
L_00575bec:; BB(0x00575bec);
    /* 00575bec: mov eax, 3 */ r_eax = 0x3u;
    /* 00575bf1: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00575bf8: jmp 0x575c06 */ goto L_00575c06;
L_00575bfa:; BB(0x00575bfa);
    /* 00575bfa: mov eax, 4 */ r_eax = 0x4u;
    /* 00575bff: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_00575c06:; BB(0x00575c06);
    /* 00575c06: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575c0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575c0d: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00575c10: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00575c15: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00575c1a: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00575c1d: mov ecx, edi */ r_ecx = r_edi;
    /* 00575c1f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x575c24u); f_007b52ec();
    /* 00575c24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575c25: ret  */ FN_RET(0x00575bc2); r_esp += 4; return;
}

void f_00575c24(void)
{
    FN_ENTER(0x00575c24);
    /* 00575c24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00575c25: ret  */ FN_RET(0x00575c24); r_esp += 4; return;
}

void f_00575c44(void) /* sub_575C44 */
{
    FN_ENTER(0x00575c44);
    /* 00575c44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575c45: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00575c48: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575c4d: je 0x575c62 */ if (fZ) goto L_00575c62;
L_00575c4f:; BB(0x00575c4f);
    /* 00575c4f: mov ebp, 4 */ r_ebp = 0x4u;
    /* 00575c54: mov edx, 4 */ r_edx = 0x4u;
    /* 00575c59: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00575c60: jmp 0x575c69 */ goto L_00575c69;
L_00575c62:; BB(0x00575c62);
    /* 00575c62: movsx ebp, word ptr [ecx + 0x32e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
L_00575c69:; BB(0x00575c69);
    /* 00575c69: cmp ebp, 0xd */ {  u32 a = r_ebp; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00575c6c: ja 0x575cc6 */ if ((!fC&&!fZ)) goto L_00575cc6;
L_00575c6e:; BB(0x00575c6e);
    /* 00575c6e: mov edx, dword ptr [ebp*4 + 0x926ee4] */ r_edx = R32((u32)(r_ebp*4+0x926ee4u));
    /* 00575c75: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00575cc6:; BB(0x00575cc6);
    /* 00575cc6: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575ccb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575ccd: mov edx, 3 */ r_edx = 0x3u;
    /* 00575cd2: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00575cd9: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00575cde: mov word ptr [ecx + 0x330], bp */ W16((u32)(r_ecx+0x330u), (u16)r_ebp);
    /* 00575ce5: mov edx, 2 */ r_edx = 0x2u;
    /* 00575cea: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00575cf1: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00575cf6: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00575cf9: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x575cfeu); f_007b52ec();
    /* 00575cfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575cff: ret  */ FN_RET(0x00575c44); r_esp += 4; return;
}

void f_00575c77(void)
{
    FN_ENTER(0x00575c77);
    /* 00575c77: mov eax, 5 */ r_eax = 0x5u;
    /* 00575c7c: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00575c83: jmp 0x575cfe */ goto L_00575cfe;
L_00575cfe:; BB(0x00575cfe);
    /* 00575cfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575cff: ret  */ FN_RET(0x00575c77); r_esp += 4; return;
}

void f_00575c85(void)
{
    FN_ENTER(0x00575c85);
    /* 00575c85: mov ebp, dword ptr [ecx + 0x354] */ r_ebp = R32((u32)(r_ecx+0x354u));
    /* 00575c8b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00575c8d: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00575c94: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575c96: je 0x575d00 */ if (fZ) goto L_00575d00;
L_00575c98:; BB(0x00575c98);
    /* 00575c98: mov edx, 2 */ r_edx = 0x2u;
    /* 00575c9d: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00575ca4: mov ebp, 0xa */ r_ebp = 0xau;
    /* 00575ca9: mov word ptr [ecx + 0xb8], bp */ W16((u32)(r_ecx+0xb8u), (u16)r_ebp);
L_00575cb0:; BB(0x00575cb0);
    /* 00575cb0: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575cb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575cb7: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00575cbc: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00575cbf: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x575cc4u); f_007b52ec();
    /* 00575cc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575cc5: ret  */ FN_RET(0x00575c85); r_esp += 4; return;
L_00575d00:; BB(0x00575d00);
    /* 00575d00: mov edx, 3 */ r_edx = 0x3u;
    /* 00575d05: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00575d0c: mov ebp, 7 */ r_ebp = 0x7u;
    /* 00575d11: mov word ptr [ecx + 0xb8], bp */ W16((u32)(r_ecx+0xb8u), (u16)r_ebp);
    /* 00575d18: jmp 0x575cb0 */ goto L_00575cb0;
}

void f_00575cc6(void)
{
    FN_ENTER(0x00575cc6);
    /* 00575cc6: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00575ccb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575ccd: mov edx, 3 */ r_edx = 0x3u;
    /* 00575cd2: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00575cd9: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00575cde: mov word ptr [ecx + 0x330], bp */ W16((u32)(r_ecx+0x330u), (u16)r_ebp);
    /* 00575ce5: mov edx, 2 */ r_edx = 0x2u;
    /* 00575cea: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00575cf1: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00575cf6: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00575cf9: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x575cfeu); f_007b52ec();
    /* 00575cfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575cff: ret  */ FN_RET(0x00575cc6); r_esp += 4; return;
}

void f_00575cfe(void)
{
    FN_ENTER(0x00575cfe);
    /* 00575cfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575cff: ret  */ FN_RET(0x00575cfe); r_esp += 4; return;
}

void f_00575d1c(void)
{
    FN_ENTER(0x00575d1c);
    /* 00575d1c: mov eax, dword ptr [0xa74038] */ r_eax = R32((u32)(0xa74038u));
    /* 00575d21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575d23: je 0x575d36 */ if (fZ) goto L_00575d36;
L_00575d25:; BB(0x00575d25);
    /* 00575d25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575d26: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x575d2bu); f_00857e98();
    /* 00575d2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00575d2c: mov dword ptr [0xa74038], 0 */ W32((u32)(0xa74038u), 0x0u);
L_00575d36:; BB(0x00575d36);
    /* 00575d36: mov eax, dword ptr [0xa74034] */ r_eax = R32((u32)(0xa74034u));
    /* 00575d3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575d3d: je 0x575d50 */ if (fZ) goto L_00575d50;
L_00575d3f:; BB(0x00575d3f);
    /* 00575d3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575d40: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x575d45u); f_00857e98();
    /* 00575d45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00575d46: mov dword ptr [0xa74034], 0 */ W32((u32)(0xa74034u), 0x0u);
L_00575d50:; BB(0x00575d50);
    /* 00575d50: mov eax, dword ptr [0xa74030] */ r_eax = R32((u32)(0xa74030u));
    /* 00575d55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575d57: je 0x575d6a */ if (fZ) goto L_00575d6a;
L_00575d59:; BB(0x00575d59);
    /* 00575d59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575d5a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x575d5fu); f_00857e98();
    /* 00575d5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00575d60: mov dword ptr [0xa74030], 0 */ W32((u32)(0xa74030u), 0x0u);
L_00575d6a:; BB(0x00575d6a);
    /* 00575d6a: mov eax, dword ptr [0xa7402c] */ r_eax = R32((u32)(0xa7402cu));
    /* 00575d6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575d71: je 0x575d84 */ if (fZ) goto L_00575d84;
L_00575d73:; BB(0x00575d73);
    /* 00575d73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575d74: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x575d79u); f_00857e98();
    /* 00575d79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00575d7a: mov dword ptr [0xa7402c], 0 */ W32((u32)(0xa7402cu), 0x0u);
L_00575d84:; BB(0x00575d84);
    /* 00575d84: mov ecx, dword ptr [0xa7403c] */ r_ecx = R32((u32)(0xa7403cu));
    /* 00575d8a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00575d8c: je 0x575da1 */ if (fZ) goto L_00575da1;
L_00575d8e:; BB(0x00575d8e);
    /* 00575d8e: je 0x575d97 */ if (fZ) goto L_00575d97;
L_00575d90:; BB(0x00575d90);
    /* 00575d90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575d92: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x575d97u); f_004066a8();
L_00575d97:; BB(0x00575d97);
    /* 00575d97: mov dword ptr [0xa7403c], 0 */ W32((u32)(0xa7403cu), 0x0u);
L_00575da1:; BB(0x00575da1);
    /* 00575da1: ret  */ FN_RET(0x00575d1c); r_esp += 4; return;
}

void f_00575da4(void)
{
    FN_ENTER(0x00575da4);
    /* 00575da4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575da5: mov ebp, esp */ r_ebp = r_esp;
    /* 00575da7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00575da9: push 0x8d7272 */ { u32 v = 0x8d7272u; r_esp -= 4; W32(r_esp, v); }
    /* 00575dae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00575db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575db5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00575dbc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00575dbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00575dc2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00575dc5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00575dc8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00575dcb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00575dcd: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00575dd4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x575dd9u); f_005caba4();
    /* 00575dd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00575dda: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00575ddd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575ddf: je 0x575e67 */ if (fZ) goto L_00575e67;
L_00575de5:; BB(0x00575de5);
    /* 00575de5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00575dec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00575df3: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00575df9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00575dfc: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x575e01u); f_00787a4c();
    /* 00575e01: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00575e04: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00575e0b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00575e0e:; BB(0x00575e0e);
    /* 00575e0e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00575e15: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00575e1c: push 0x3e4 */ { u32 v = 0x3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00575e21: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x575e26u); f_005caba4();
    /* 00575e26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00575e27: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00575e2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575e2c: je 0x575e63 */ if (fZ) goto L_00575e63;
L_00575e2e:; BB(0x00575e2e);
    /* 00575e2e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00575e35: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00575e3c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00575e3f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00575e42: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00575e45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575e46: call 0x575e70 */ r_esp -= 4; W32(r_esp, 0x575e4bu); f_00575e70();
    /* 00575e4b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00575e4e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00575e55:; BB(0x00575e55);
    /* 00575e55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00575e58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00575e5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00575e61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575e62: ret  */ FN_RET(0x00575da4); r_esp += 4; return;
L_00575e63:; BB(0x00575e63);
    /* 00575e63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00575e65: jmp 0x575e55 */ goto L_00575e55;
L_00575e67:; BB(0x00575e67);
    /* 00575e67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00575e69: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00575e6c: jmp 0x575e0e */ goto L_00575e0e;
}

void f_00575e70(void) /* sub_575E70 */
{
    FN_ENTER(0x00575e70);
    /* 00575e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00575e73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00575e75: push 0x8d72a0 */ { u32 v = 0x8d72a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575e7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00575e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575e81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00575e88: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00575e8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00575e8e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00575e91: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00575e94: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00575e97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00575e9a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00575e9d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00575ea0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00575ea3: call 0x52b6ec */ r_esp -= 4; W32(r_esp, 0x575ea8u); f_0052b6ec();
    /* 00575ea8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00575eaf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00575eb2: mov dword ptr [ecx], 0xb066e0 */ W32((u32)(r_ecx), 0xb066e0u);
    /* 00575eb8: add ecx, 0x3b0 */ {  u32 a = r_ecx; u32 b = 0x3b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00575ebe: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x575ec3u); f_00576a48();
    /* 00575ec3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00575eca: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00575ecd: mov eax, dword ptr [0x9bed80] */ r_eax = R32((u32)(0x9bed80u));
    /* 00575ed2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00575ed5: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00575ed7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00575eda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575edb: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x575ee1u); call_ind(t); }
    /* 00575ee1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00575ee4: call 0x576194 */ r_esp -= 4; W32(r_esp, 0x575ee9u); f_00576194();
    /* 00575ee9: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00575eec: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00575eef: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00575ef2: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00575ef5: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00575efb: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00575f01: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00575f04: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00575f0a: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00575f10: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00575f16: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00575f1c: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00575f22: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00575f28: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00575f2b: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00575f31: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00575f34: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00575f3a: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00575f3d: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00575f43: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00575f46: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00575f4c: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00575f4f: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00575f55: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00575f5b: call 0x576240 */ r_esp -= 4; W32(r_esp, 0x575f60u); f_00576240();
    /* 00575f60: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00575f63: mov eax, dword ptr [0xa7403c] */ r_eax = R32((u32)(0xa7403cu));
    /* 00575f68: mov edi, dword ptr [ecx + 0x370] */ r_edi = R32((u32)(r_ecx+0x370u));
    /* 00575f6e: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00575f74: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00575f76: mov ebx, dword ptr [edx + edi*8 + 8] */ r_ebx = R32((u32)(r_edx+r_edi*8+0x8u));
    /* 00575f7a: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 00575f7d: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00575f83: mov edx, dword ptr [esi + edi*8 + 0xc] */ r_edx = R32((u32)(r_esi+r_edi*8+0xcu));
    /* 00575f87: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00575f8a: mov dword ptr [ecx + 0xd8], 0x9bec00 */ W32((u32)(r_ecx+0xd8u), 0x9bec00u);
    /* 00575f94: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 00575f9a: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00575fa0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00575fa2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575fa3: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00575faa: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x575fafu); f_007aa4c8();
    /* 00575faf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00575fb2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575fb4: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00575fbb: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00575fc1: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00575fc8: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00575fcb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00575fcd: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00575fcf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00575fd1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00575fd3: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00575fd5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00575fd7: lea esi, [ebx + ebx + 0x9beb60] */ r_esi = (u32)(r_ebx+r_ebx+0x9beb60u);
    /* 00575fde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00575fdf: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x575fe4u); f_007b9a88();
    /* 00575fe4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00575fe7: mov ebx, dword ptr [0xa74038] */ r_ebx = R32((u32)(0xa74038u));
    /* 00575fed: mov edx, dword ptr [0xa74034] */ r_edx = R32((u32)(0xa74034u));
    /* 00575ff3: mov eax, dword ptr [0xa74030] */ r_eax = R32((u32)(0xa74030u));
    /* 00575ff8: mov esi, dword ptr [ecx + 0x33c] */ r_esi = R32((u32)(r_ecx+0x33cu));
    /* 00575ffe: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00576001: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00576004: push dword ptr [ebx + esi*4] */ { u32 v = R32((u32)(r_ebx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00576007: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x57600cu); f_007868f8();
    /* 0057600c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057600f: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00576015: movzx esi, word ptr [ecx + 0x334] */ r_esi = (u32)R16((u32)(r_ecx+0x334u));
    /* 0057601c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057601e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00576020: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00576023: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00576025: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00576027: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00576029: lea ebx, [edx + 0x9beb00] */ r_ebx = (u32)(r_edx+0x9beb00u);
    /* 0057602f: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 00576035: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 0057603c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x576041u); f_0078730c();
    /* 00576041: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00576044: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00576047: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0057604d: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00576053: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00576059: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0057605c: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0057605f: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00576062: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x576067u); f_007b4f54();
    /* 00576067: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057606a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x57606fu); f_007751b0();
    /* 0057606f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00576072: fld dword ptr [0x926f88] */ FPUSH(R_F32((u32)(0x926f88u)));
    /* 00576078: mov edx, dword ptr [0xa7402c] */ r_edx = R32((u32)(0xa7402cu));
    /* 0057607e: mov edi, dword ptr [ecx + 0x2e8] */ r_edi = R32((u32)(r_ecx+0x2e8u));
    /* 00576084: mov ebx, dword ptr [ecx + 0x33c] */ r_ebx = R32((u32)(r_ecx+0x33cu));
    /* 0057608a: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0057608c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057608e: fmul dword ptr [0x926f84] */ ST(0) = ST(0) * R_F32((u32)(0x926f84u));
    /* 00576094: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00576096: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 00576099: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 0057609d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005760a2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005760a5: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 005760a8: fistp dword ptr [ecx + 0x2b0] */ W32((u32)(r_ecx+0x2b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 005760ae: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 005760b1: mov eax, 0xf */ r_eax = 0xfu;
    /* 005760b6: mov dword ptr [ecx + 0x388], 0 */ W32((u32)(r_ecx+0x388u), 0x0u);
    /* 005760c0: mov word ptr [ecx + 0x342], ax */ W16((u32)(r_ecx+0x342u), (u16)r_eax);
    /* 005760c7: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 005760ce: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005760d1: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005760d6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005760d8: mov word ptr [ecx + 0x330], si */ W16((u32)(r_ecx+0x330u), (u16)r_esi);
    /* 005760df: mov word ptr [ecx + 0x37c], si */ W16((u32)(r_ecx+0x37cu), (u16)r_esi);
    /* 005760e6: mov word ptr [ecx + 0x37e], si */ W16((u32)(r_ecx+0x37eu), (u16)r_esi);
    /* 005760ed: mov dword ptr [ecx + 0x380], esi */ W32((u32)(r_ecx+0x380u), r_esi);
    /* 005760f3: mov dword ptr [ecx + 0x384], esi */ W32((u32)(r_ecx+0x384u), r_esi);
    /* 005760f9: or edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005760fc: mov dword ptr [ecx + 0x2e8], edi */ W32((u32)(r_ecx+0x2e8u), r_edi);
    /* 00576102: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00576105: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 00576108: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057610a: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 00576110: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 00576113: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00576116: mov dword ptr [ecx + 0x3a8], eax */ W32((u32)(r_ecx+0x3a8u), r_eax);
    /* 0057611c: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 0057611f: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00576122: mov dword ptr [ecx + 0x3a4], eax */ W32((u32)(r_ecx+0x3a4u), r_eax);
    /* 00576128: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 0057612b: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0057612e: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 00576134: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 00576137: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0057613a: mov dword ptr [ecx + 0x3dc], eax */ W32((u32)(r_ecx+0x3dcu), r_eax);
    /* 00576140: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 00576143: fild dword ptr [eax + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x18u)));
    /* 00576146: fdiv dword ptr [0x926f7c] */ ST(0) = ST(0) / R_F32((u32)(0x926f7cu));
    /* 0057614c: mov edx, 1 */ r_edx = 0x1u;
    /* 00576151: fstp dword ptr [ecx + 0x3d4] */ W_F32((u32)(r_ecx+0x3d4u), ST(0)); FPOP();
    /* 00576157: mov dword ptr [ecx + 0x398], edx */ W32((u32)(r_ecx+0x398u), r_edx);
    /* 0057615d: mov eax, 0xd */ r_eax = 0xdu;
    /* 00576162: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00576169: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057616b: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00576172: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x576178u); call_ind(t); }
    /* 00576178: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057617b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057617e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00576181: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576184: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00576187: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057618e: mov esp, ebp */ r_esp = r_ebp;
    /* 00576190: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576191: ret 8 */ FN_RET(0x00575e70); r_esp += 12; return;
}

