#include "protos.h"

void f_004511fc(void) /* sub_4511FC */
{
    FN_ENTER(0x004511fc);
    /* 004511fc: mov dword ptr [0xa45044], 0xc1200000 */ W32((u32)(0xa45044u), 0xc1200000u);
    /* 00451206: mov eax, 0xa0 */ r_eax = 0xa0u;
    /* 0045120b: mov ecx, 0xb4 */ r_ecx = 0xb4u;
    /* 00451210: mov dword ptr [0xa45048], 0 */ W32((u32)(0xa45048u), 0x0u);
    /* 0045121a: mov dword ptr [0xa4503c], eax */ W32((u32)(0xa4503cu), r_eax);
    /* 0045121f: mov edx, 0x104 */ r_edx = 0x104u;
    /* 00451224: mov dword ptr [0xa45030], 0x8c */ W32((u32)(0xa45030u), 0x8cu);
    /* 0045122e: mov dword ptr [0xa45040], ecx */ W32((u32)(0xa45040u), r_ecx);
    /* 00451234: mov dword ptr [0xa45014], eax */ W32((u32)(0xa45014u), r_eax);
    /* 00451239: mov dword ptr [0xa45038], 0xf0 */ W32((u32)(0xa45038u), 0xf0u);
    /* 00451243: mov dword ptr [0xa4501c], edx */ W32((u32)(0xa4501cu), r_edx);
    /* 00451249: mov dword ptr [0xa45034], 0x12c */ W32((u32)(0xa45034u), 0x12cu);
    /* 00451253: mov dword ptr [0xa45024], edx */ W32((u32)(0xa45024u), r_edx);
    /* 00451259: mov dword ptr [0xa4502c], ecx */ W32((u32)(0xa4502cu), r_ecx);
    /* 0045125f: ret  */ FN_RET(0x004511fc); r_esp += 4; return;
}

void f_00451260(void) /* sub_451260 */
{
    FN_ENTER(0x00451260);
    /* 00451260: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451261: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00451263: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00451265: call 0x451284 */ r_esp -= 4; W32(r_esp, 0x45126au); f_00451284();
    /* 0045126a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045126e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451270: jne 0x451276 */ if (!fZ) goto L_00451276;
L_00451272:; BB(0x00451272);
    /* 00451272: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451273: ret 4 */ FN_RET(0x00451260); r_esp += 8; return;
L_00451276:; BB(0x00451276);
    /* 00451276: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451277: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x45127cu); f_005c2f74();
    /* 0045127c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045127d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045127e: ret 4 */ FN_RET(0x00451260); r_esp += 8; return;
}

void f_00451284(void) /* sub_451284 */
{
    FN_ENTER(0x00451284);
    /* 00451284: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451285: mov ebp, esp */ r_ebp = r_esp;
    /* 00451287: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00451289: push 0x8cef44 */ { u32 v = 0x8cef44u; r_esp -= 4; W32(r_esp, v); }
    /* 0045128e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00451294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451295: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045129c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045129f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004512a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004512a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004512a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004512ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004512ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004512b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004512b8: mov dword ptr [eax], 0xaf6f08 */ W32((u32)(r_eax), 0xaf6f08u);
    /* 004512be: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4512c3u); f_004d3250();
    /* 004512c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004512ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004512cd: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x4512d2u); f_007ba1f0();
    /* 004512d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004512d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004512dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004512de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004512df: ret  */ FN_RET(0x00451284); r_esp += 4; return;
}

void f_004512e0(void) /* sub_4512E0 */
{
    FN_ENTER(0x004512e0);
    /* 004512e0: fld dword ptr [0x8ff9e4] */ FPUSH(R_F32((u32)(0x8ff9e4u)));
    /* 004512e6: fadd dword ptr [ecx + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb8u));
    /* 004512ec: fcom dword ptr [0x8ff9cc] */ fx_compare(ST(0), R_F32((u32)(0x8ff9ccu))); 
    /* 004512f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004512f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004512f5: jb 0x451306 */ if (fC) goto L_00451306;
L_004512f7:; BB(0x004512f7);
    /* 004512f7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004512f9: mov eax, 0x42f00000 */ r_eax = 0x42f00000u;
    /* 004512fe: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00451304: jmp 0x45130c */ goto L_0045130c;
L_00451306:; BB(0x00451306);
    /* 00451306: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
L_0045130c:; BB(0x0045130c);
    /* 0045130c: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 00451312: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00451315: cmp eax, dword ptr [0xa45054] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa45054u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045131b: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 00451321: jl 0x451331 */ if ((fS!=fO)) goto L_00451331;
L_00451323:; BB(0x00451323);
    /* 00451323: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00451327: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045132c: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00451330: ret  */ FN_RET(0x004512e0); r_esp += 4; return;
L_00451331:; BB(0x00451331);
    /* 00451331: ret  */ FN_RET(0x004512e0); r_esp += 4; return;
}

void f_00451334(void) /* sub_451334 */
{
    FN_ENTER(0x00451334);
    /* 00451334: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00451335: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00451336: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451337: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00451339: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x45133eu); f_0082d7b0();
    /* 0045133e: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x451343u); f_0082fa9c();
    /* 00451343: movzx eax, byte ptr [0xa45050] */ r_eax = (u32)R8((u32)(0xa45050u));
    /* 0045134a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045134c: jne 0x451376 */ if (!fZ) goto L_00451376;
L_0045134e:; BB(0x0045134e);
    /* 0045134e: mov dword ptr [0xa45058], 0xc69c4000 */ W32((u32)(0xa45058u), 0xc69c4000u);
    /* 00451358: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045135d: mov byte ptr [0xa45050], al */ W8((u32)(0xa45050u), (u8)r_eax);
    /* 00451362: mov dword ptr [0xa4505c], 0 */ W32((u32)(0xa4505cu), 0x0u);
    /* 0045136c: mov dword ptr [0xa45060], 0 */ W32((u32)(0xa45060u), 0x0u);
L_00451376:; BB(0x00451376);
    /* 00451376: mov ecx, 0xa45058 */ r_ecx = 0xa45058u;
    /* 0045137b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x451380u); f_0082d838();
    /* 00451380: lea edx, [ebx + 0xa0] */ r_edx = (u32)(r_ebx+0xa0u);
    /* 00451386: lea eax, [ebx + 0xac] */ r_eax = (u32)(r_ebx+0xacu);
    /* 0045138c: mov edi, ebx */ r_edi = r_ebx;
    /* 0045138e: mov ebx, eax */ r_ebx = r_eax;
    /* 00451390: mov esi, edx */ r_esi = r_edx;
L_00451392:; BB(0x00451392);
    /* 00451392: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00451394: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x451399u); f_00829cc8();
    /* 00451399: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0045139c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045139e: je 0x4513c7 */ if (fZ) goto L_004513c7;
L_004513a0:; BB(0x004513a0);
    /* 004513a0: push dword ptr [edi + 0xb8] */ { u32 v = R32((u32)(r_edi+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004513a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004513a7: push dword ptr [esi - 0xc] */ { u32 v = R32((u32)(r_esi+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004513aa: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4513afu); f_0083046c();
    /* 004513af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004513b2:; BB(0x004513b2);
    /* 004513b2: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004513b5: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004513b7: ja 0x451392 */ if ((!fC&&!fZ)) goto L_00451392;
L_004513b9:; BB(0x004513b9);
    /* 004513b9: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4513beu); f_0082faac();
    /* 004513be: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4513c3u); f_0082da80();
    /* 004513c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004513c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004513c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004513c6: ret  */ FN_RET(0x00451334); r_esp += 4; return;
L_004513c7:; BB(0x004513c7);
    /* 004513c7: push dword ptr [esi - 0xc] */ { u32 v = R32((u32)(r_esi+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004513ca: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4513cfu); f_0082e1e8();
    /* 004513cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004513d0: jmp 0x4513b2 */ goto L_004513b2;
}

void f_004513c0(void)
{
    FN_ENTER(0x004513c0);
}

void f_004513d4(void) /* sub_4513D4 */
{
    FN_ENTER(0x004513d4);
    /* 004513d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004513d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004513d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004513d9: push 0x8cef7a */ { u32 v = 0x8cef7au; r_esp -= 4; W32(r_esp, v); }
    /* 004513de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004513e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004513e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004513ec: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004513ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004513f2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 004513f5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 004513f8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004513fb: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00451400: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00451407: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x45140cu); f_005caba4();
    /* 0045140c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045140f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451412: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00451415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451417: je 0x451568 */ if (fZ) goto L_00451568;
L_0045141d:; BB(0x0045141d);
    /* 0045141d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00451424: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045142b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045142e: mov ecx, eax */ r_ecx = r_eax;
    /* 00451430: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00451433: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x451438u); f_007ba278();
    /* 00451438: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045143f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451442: mov dword ptr [edx], 0xaf6f08 */ W32((u32)(r_edx), 0xaf6f08u);
    /* 00451448: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045144a: mov eax, dword ptr [0x9a5cc4] */ r_eax = R32((u32)(0x9a5cc4u));
    /* 0045144f: mov ecx, dword ptr [0xa44d58] */ r_ecx = R32((u32)(0xa44d58u));
    /* 00451455: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00451458: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_0045145b:; BB(0x0045145b);
    /* 0045145b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045145e: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 00451461: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00451464: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 00451467: mov esi, dword ptr [ebx + 0x9a5cc8] */ r_esi = R32((u32)(r_ebx+0x9a5cc8u));
    /* 0045146d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045146e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x451473u); f_005b8610();
    /* 00451473: add ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00451476: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00451479: mov dword ptr [ebx + 0x94], eax */ W32((u32)(r_ebx+0x94u), r_eax);
    /* 0045147f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00451480: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x451485u); f_005b8624();
    /* 00451485: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451488: mov dword ptr [edx + edi*4 + 0xa0], eax */ W32((u32)(r_edx+r_edi*4+0xa0u), r_eax);
    /* 0045148f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00451492: mov eax, dword ptr [eax*2 + 0x9a5cd4] */ r_eax = R32((u32)(r_eax*2+0x9a5cd4u));
    /* 00451499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045149b: jge 0x4514a9 */ if ((fS==fO)) goto L_004514a9;
L_0045149d:; BB(0x0045149d);
    /* 0045149d: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 004514a7: jmp 0x4514b8 */ goto L_004514b8;
L_004514a9:; BB(0x004514a9);
    /* 004514a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004514ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004514ad: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4514b2u); f_005b8638();
    /* 004514b2: mov dword ptr [ebx + 0xac], eax */ W32((u32)(r_ebx+0xacu), r_eax);
L_004514b8:; BB(0x004514b8);
    /* 004514b8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004514bb: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004514be: jl 0x45145b */ if ((fS!=fO)) goto L_0045145b;
L_004514c0:; BB(0x004514c0);
    /* 004514c0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004514c3: mov dword ptr [eax + 0xb8], 0xbf800000 */ W32((u32)(r_eax+0xb8u), 0xbf800000u);
    /* 004514cd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004514cf: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4514d4u); f_004d31f4();
    /* 004514d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004514d5: movzx eax, byte ptr [0xa45064] */ r_eax = (u32)R8((u32)(0xa45064u));
    /* 004514dc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004514de: jne 0x451508 */ if (!fZ) goto L_00451508;
L_004514e0:; BB(0x004514e0);
    /* 004514e0: mov dword ptr [0xa45068], 0xc69c4000 */ W32((u32)(0xa45068u), 0xc69c4000u);
    /* 004514ea: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004514ef: mov byte ptr [0xa45064], al */ W8((u32)(0xa45064u), (u8)r_eax);
    /* 004514f4: mov dword ptr [0xa4506c], 0 */ W32((u32)(0xa4506cu), 0x0u);
    /* 004514fe: mov dword ptr [0xa45070], 0 */ W32((u32)(0xa45070u), 0x0u);
L_00451508:; BB(0x00451508);
    /* 00451508: push 0xa45074 */ { u32 v = 0xa45074u; r_esp -= 4; W32(r_esp, v); }
    /* 0045150d: mov eax, 0xa45068 */ r_eax = 0xa45068u;
    /* 00451512: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451513: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451514: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x451519u); f_004d681c();
    /* 00451519: push 0x392d */ { u32 v = 0x392du; r_esp -= 4; W32(r_esp, v); }
    /* 0045151e: push 0x9a5ce0 */ { u32 v = 0x9a5ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 00451523: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x451528u); f_004d6770();
    /* 00451528: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045152a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045152b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045152c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045152d: push 0x35f */ { u32 v = 0x35fu; r_esp -= 4; W32(r_esp, v); }
    /* 00451532: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x451537u); f_00814298();
    /* 00451537: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00451539: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045153b: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x451540u); f_006ff5f8();
    /* 00451540: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451543: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451546: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451548: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0045154b: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
L_00451551:; BB(0x00451551);
    /* 00451551: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00451554: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00451557: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045155a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045155d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00451564: mov esp, ebp */ r_esp = r_ebp;
    /* 00451566: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451567: ret  */ FN_RET(0x004513d4); r_esp += 4; return;
L_00451568:; BB(0x00451568);
    /* 00451568: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045156a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045156d: jmp 0x451551 */ goto L_00451551;
}

void f_00451523(void)
{
    FN_ENTER(0x00451523);
    /* 00451523: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x451528u); f_004d6770();
    /* 00451528: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045152a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045152b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045152c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045152d: push 0x35f */ { u32 v = 0x35fu; r_esp -= 4; W32(r_esp, v); }
    /* 00451532: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x451537u); f_00814298();
    /* 00451537: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00451539: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045153b: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x451540u); f_006ff5f8();
    /* 00451540: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451543: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451546: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451548: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0045154b: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 00451551: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00451554: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00451557: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045155a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045155d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00451564: mov esp, ebp */ r_esp = r_ebp;
    /* 00451566: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451567: ret  */ FN_RET(0x00451523); r_esp += 4; return;
}

void f_00451570(void) /* sub_451570 */
{
    FN_ENTER(0x00451570);
    /* 00451570: mov dword ptr [0xa45080], 0 */ W32((u32)(0xa45080u), 0x0u);
    /* 0045157a: mov dword ptr [0xa45054], 0x78 */ W32((u32)(0xa45054u), 0x78u);
    /* 00451584: ret  */ FN_RET(0x00451570); r_esp += 4; return;
}

void f_00451588(void) /* sub_451588 */
{
    FN_ENTER(0x00451588);
    /* 00451588: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451589: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045158b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045158d: call 0x4515ac */ r_esp -= 4; W32(r_esp, 0x451592u); f_004515ac();
    /* 00451592: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00451596: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451598: jne 0x45159e */ if (!fZ) goto L_0045159e;
L_0045159a:; BB(0x0045159a);
    /* 0045159a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045159b: ret 4 */ FN_RET(0x00451588); r_esp += 8; return;
L_0045159e:; BB(0x0045159e);
    /* 0045159e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045159f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4515a4u); f_005c2f74();
    /* 004515a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004515a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004515a6: ret 4 */ FN_RET(0x00451588); r_esp += 8; return;
}

void f_004515ac(void) /* sub_4515AC */
{
    FN_ENTER(0x004515ac);
    /* 004515ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004515ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004515af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004515b1: push 0x8cef94 */ { u32 v = 0x8cef94u; r_esp -= 4; W32(r_esp, v); }
    /* 004515b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004515bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004515bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004515c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004515c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004515ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004515cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004515d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004515d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004515d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004515d9: mov dword ptr [ecx], 0xaf7238 */ W32((u32)(r_ecx), 0xaf7238u);
    /* 004515df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004515e6: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x4515ebu); f_007ba1f0();
    /* 004515eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004515ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004515f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004515f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004515f8: ret  */ FN_RET(0x004515ac); r_esp += 4; return;
}

void f_004515fc(void) /* sub_4515FC */
{
    FN_ENTER(0x004515fc);
    /* 004515fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004515fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004515ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00451601: call 0x451620 */ r_esp -= 4; W32(r_esp, 0x451606u); f_00451620();
    /* 00451606: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045160a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045160c: jne 0x451612 */ if (!fZ) goto L_00451612;
L_0045160e:; BB(0x0045160e);
    /* 0045160e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045160f: ret 4 */ FN_RET(0x004515fc); r_esp += 8; return;
L_00451612:; BB(0x00451612);
    /* 00451612: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451613: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x451618u); f_005c2f74();
    /* 00451618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451619: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045161a: ret 4 */ FN_RET(0x004515fc); r_esp += 8; return;
}

void f_00451620(void) /* sub_451620 */
{
    FN_ENTER(0x00451620);
    /* 00451620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451621: mov ebp, esp */ r_ebp = r_esp;
    /* 00451623: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00451625: push 0x8cefb0 */ { u32 v = 0x8cefb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045162a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00451630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451631: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00451638: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045163b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045163e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00451641: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00451644: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00451647: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045164a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00451651: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451654: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00451657: mov dword ptr [ecx], 0xaf7264 */ W32((u32)(r_ecx), 0xaf7264u);
    /* 0045165d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045165f: je 0x45166b */ if (fZ) goto L_0045166b;
L_00451661:; BB(0x00451661);
    /* 00451661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451662: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x451667u); f_005cdcc0();
    /* 00451667: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451668: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0045166b:; BB(0x0045166b);
    /* 0045166b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00451672: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x451677u); f_008171e8();
    /* 00451677: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045167a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00451681: mov esp, ebp */ r_esp = r_ebp;
    /* 00451683: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451684: ret  */ FN_RET(0x00451620); r_esp += 4; return;
}

void f_00451688(void) /* sub_451688 */
{
    FN_ENTER(0x00451688);
    /* 00451688: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451689: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045168b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045168d: call 0x4516ac */ r_esp -= 4; W32(r_esp, 0x451692u); f_004516ac();
    /* 00451692: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00451696: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451698: jne 0x45169e */ if (!fZ) goto L_0045169e;
L_0045169a:; BB(0x0045169a);
    /* 0045169a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045169b: ret 4 */ FN_RET(0x00451688); r_esp += 8; return;
L_0045169e:; BB(0x0045169e);
    /* 0045169e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045169f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4516a4u); f_005c2f74();
    /* 004516a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004516a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004516a6: ret 4 */ FN_RET(0x00451688); r_esp += 8; return;
}

void f_004516ac(void) /* sub_4516AC */
{
    FN_ENTER(0x004516ac);
    /* 004516ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004516ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004516af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004516b1: push 0x8cefcc */ { u32 v = 0x8cefccu; r_esp -= 4; W32(r_esp, v); }
    /* 004516b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004516bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004516bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004516c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004516c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004516ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004516cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004516d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004516d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004516d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004516dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004516e0: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 004516e3: mov dword ptr [ecx], 0xaf7274 */ W32((u32)(r_ecx), 0xaf7274u);
    /* 004516e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004516eb: je 0x4516f7 */ if (fZ) goto L_004516f7;
L_004516ed:; BB(0x004516ed);
    /* 004516ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004516ee: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4516f3u); f_005cdcc0();
    /* 004516f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004516f4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_004516f7:; BB(0x004516f7);
    /* 004516f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004516fe: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x451703u); f_008171e8();
    /* 00451703: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451706: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045170d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045170f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451710: ret  */ FN_RET(0x004516ac); r_esp += 4; return;
}

void f_00451714(void) /* sub_451714 */
{
    FN_ENTER(0x00451714);
    /* 00451714: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451715: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00451717: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00451719: call 0x451738 */ r_esp -= 4; W32(r_esp, 0x45171eu); f_00451738();
    /* 0045171e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00451722: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451724: jne 0x45172a */ if (!fZ) goto L_0045172a;
L_00451726:; BB(0x00451726);
    /* 00451726: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451727: ret 4 */ FN_RET(0x00451714); r_esp += 8; return;
L_0045172a:; BB(0x0045172a);
    /* 0045172a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045172b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x451730u); f_005c2f74();
    /* 00451730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451732: ret 4 */ FN_RET(0x00451714); r_esp += 8; return;
}

void f_00451738(void) /* sub_451738 */
{
    FN_ENTER(0x00451738);
    /* 00451738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451739: mov ebp, esp */ r_ebp = r_esp;
    /* 0045173b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045173d: push 0x8cefe8 */ { u32 v = 0x8cefe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00451742: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00451748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451749: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00451750: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451753: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00451756: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00451759: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0045175c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045175f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00451762: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00451769: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045176c: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 0045176f: mov dword ptr [ecx], 0xaf7284 */ W32((u32)(r_ecx), 0xaf7284u);
    /* 00451775: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451777: je 0x451783 */ if (fZ) goto L_00451783;
L_00451779:; BB(0x00451779);
    /* 00451779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045177a: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45177fu); f_005cdcc0();
    /* 0045177f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451780: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00451783:; BB(0x00451783);
    /* 00451783: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045178a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x45178fu); f_008171e8();
    /* 0045178f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451792: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00451799: mov esp, ebp */ r_esp = r_ebp;
    /* 0045179b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045179c: ret  */ FN_RET(0x00451738); r_esp += 4; return;
}

void f_00451764(void)
{
    FN_ENTER(0x00451764);
    /* 00451764: cld  */ rt_df = 0;
    /* 00451765: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00451767: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00451769: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045176c: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 0045176f: mov dword ptr [ecx], 0xaf7284 */ W32((u32)(r_ecx), 0xaf7284u);
    /* 00451775: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451777: je 0x451783 */ if (fZ) goto L_00451783;
L_00451779:; BB(0x00451779);
    /* 00451779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045177a: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45177fu); f_005cdcc0();
    /* 0045177f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451780: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00451783:; BB(0x00451783);
    /* 00451783: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045178a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x45178fu); f_008171e8();
    /* 0045178f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451792: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00451799: mov esp, ebp */ r_esp = r_ebp;
    /* 0045179b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045179c: ret  */ FN_RET(0x00451764); r_esp += 4; return;
}

void f_004517a0(void) /* sub_4517A0 */
{
    FN_ENTER(0x004517a0);
    /* 004517a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004517a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004517a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004517a5: call 0x4517c4 */ r_esp -= 4; W32(r_esp, 0x4517aau); f_004517c4();
    /* 004517aa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004517ae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004517b0: jne 0x4517b6 */ if (!fZ) goto L_004517b6;
L_004517b2:; BB(0x004517b2);
    /* 004517b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004517b3: ret 4 */ FN_RET(0x004517a0); r_esp += 8; return;
L_004517b6:; BB(0x004517b6);
    /* 004517b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004517b7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4517bcu); f_005c2f74();
    /* 004517bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004517bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004517be: ret 4 */ FN_RET(0x004517a0); r_esp += 8; return;
}

void f_004517c4(void) /* sub_4517C4 */
{
    FN_ENTER(0x004517c4);
    /* 004517c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004517c5: mov ebp, esp */ r_ebp = r_esp;
    /* 004517c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004517c9: push 0x8cf004 */ { u32 v = 0x8cf004u; r_esp -= 4; W32(r_esp, v); }
    /* 004517ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004517d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004517d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004517dc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004517df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004517e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004517e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004517e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004517eb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004517ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004517f1: mov dword ptr [ecx], 0xaf7294 */ W32((u32)(r_ecx), 0xaf7294u);
    /* 004517f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004517fe: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x451803u); f_008171e8();
    /* 00451803: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451806: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045180d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045180f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451810: ret  */ FN_RET(0x004517c4); r_esp += 4; return;
}

void f_00451814(void) /* sub_451814 */
{
    FN_ENTER(0x00451814);
    /* 00451814: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451815: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00451817: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00451819: call 0x451838 */ r_esp -= 4; W32(r_esp, 0x45181eu); f_00451838();
    /* 0045181e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00451822: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451824: jne 0x45182a */ if (!fZ) goto L_0045182a;
L_00451826:; BB(0x00451826);
    /* 00451826: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451827: ret 4 */ FN_RET(0x00451814); r_esp += 8; return;
L_0045182a:; BB(0x0045182a);
    /* 0045182a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045182b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x451830u); f_005c2f74();
    /* 00451830: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451831: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451832: ret 4 */ FN_RET(0x00451814); r_esp += 8; return;
}

void f_00451838(void) /* sub_451838 */
{
    FN_ENTER(0x00451838);
    /* 00451838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451839: mov ebp, esp */ r_ebp = r_esp;
    /* 0045183b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045183d: push 0x8cf020 */ { u32 v = 0x8cf020u; r_esp -= 4; W32(r_esp, v); }
    /* 00451842: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00451848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451849: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00451850: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451853: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00451856: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00451859: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0045185c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045185f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00451862: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451865: mov dword ptr [ecx], 0xaf72a4 */ W32((u32)(r_ecx), 0xaf72a4u);
    /* 0045186b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00451872: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x451877u); f_008171e8();
    /* 00451877: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045187a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00451881: mov esp, ebp */ r_esp = r_ebp;
    /* 00451883: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451884: ret  */ FN_RET(0x00451838); r_esp += 4; return;
}

void f_00451888(void) /* sub_451888 */
{
    FN_ENTER(0x00451888);
    /* 00451888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451889: mov ebp, esp */ r_ebp = r_esp;
    /* 0045188b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045188d: push 0x8cf03c */ { u32 v = 0x8cf03cu; r_esp -= 4; W32(r_esp, v); }
    /* 00451892: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00451898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451899: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004518a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004518a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004518a6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004518a9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004518ac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004518af: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004518b2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004518b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004518bc: mov eax, ecx */ r_eax = r_ecx;
    /* 004518be: mov dword ptr [eax], 0xaf72c0 */ W32((u32)(r_eax), 0xaf72c0u);
    /* 004518c4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004518c6:; BB(0x004518c6);
    /* 004518c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004518c9: mov eax, dword ptr [eax + esi*4 + 0x360] */ r_eax = R32((u32)(r_eax+r_esi*4+0x360u));
    /* 004518d0: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004518d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004518d5: je 0x4518ec */ if (fZ) goto L_004518ec;
L_004518d7:; BB(0x004518d7);
    /* 004518d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004518d8: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4518ddu); f_005cdcc0();
    /* 004518dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004518de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004518e1: mov dword ptr [eax + ebx*2 + 0x360], 0 */ W32((u32)(r_eax+r_ebx*2+0x360u), 0x0u);
L_004518ec:; BB(0x004518ec);
    /* 004518ec: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004518ef: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004518f2: jl 0x4518c6 */ if ((fS!=fO)) goto L_004518c6;
L_004518f4:; BB(0x004518f4);
    /* 004518f4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004518fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004518fe: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x451903u); f_00770660();
    /* 00451903: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451906: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451908: jne 0x451923 */ if (!fZ) goto L_00451923;
L_0045190a:; BB(0x0045190a);
    /* 0045190a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045190d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00451910: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451913: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451916: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045191d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045191f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451920: ret 4 */ FN_RET(0x00451888); r_esp += 8; return;
L_00451923:; BB(0x00451923);
    /* 00451923: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00451926: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451927: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x45192cu); f_005c2f74();
    /* 0045192c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045192d: jmp 0x45190a */ goto L_0045190a;
}

void f_00451930(void) /* sub_451930 */
{
    FN_ENTER(0x00451930);
    /* 00451930: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451931: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00451933: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00451935: call 0x451954 */ r_esp -= 4; W32(r_esp, 0x45193au); f_00451954();
    /* 0045193a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045193e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451940: jne 0x451946 */ if (!fZ) goto L_00451946;
L_00451942:; BB(0x00451942);
    /* 00451942: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451943: ret 4 */ FN_RET(0x00451930); r_esp += 8; return;
L_00451946:; BB(0x00451946);
    /* 00451946: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451947: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x45194cu); f_005c2f74();
    /* 0045194c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045194d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045194e: ret 4 */ FN_RET(0x00451930); r_esp += 8; return;
}

void f_00451954(void) /* sub_451954 */
{
    FN_ENTER(0x00451954);
    /* 00451954: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451955: mov ebp, esp */ r_ebp = r_esp;
    /* 00451957: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00451959: push 0x8cf058 */ { u32 v = 0x8cf058u; r_esp -= 4; W32(r_esp, v); }
    /* 0045195e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00451964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451965: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045196c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045196f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00451972: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00451975: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00451978: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045197b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045197e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451981: mov dword ptr [ecx], 0xaf7420 */ W32((u32)(r_ecx), 0xaf7420u);
    /* 00451987: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045198e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x451993u); f_008171e8();
    /* 00451993: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451996: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045199d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045199f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004519a0: ret  */ FN_RET(0x00451954); r_esp += 4; return;
}

void f_004519a4(void) /* sub_4519A4 */
{
    FN_ENTER(0x004519a4);
    /* 004519a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004519a5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004519a8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004519aa: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 004519b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004519b2: je 0x451a27 */ if (fZ) goto L_00451a27;
L_004519b4:; BB(0x004519b4);
    /* 004519b4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004519b7: jne 0x4519ed */ if (!fZ) goto L_004519ed;
L_004519b9:; BB(0x004519b9);
    /* 004519b9: fld dword ptr [0x8ff9f4] */ FPUSH(R_F32((u32)(0x8ff9f4u)));
    /* 004519bf: fadd dword ptr [ebx + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x94u));
    /* 004519c5: fcom dword ptr [0x8ffb78] */ fx_compare(ST(0), R_F32((u32)(0x8ffb78u))); 
    /* 004519cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004519cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004519ce: jbe 0x4519e2 */ if ((fC||fZ)) goto L_004519e2;
L_004519d0:; BB(0x004519d0);
    /* 004519d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004519d2: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004519d7: mov dword ptr [ebx + 0x94], eax */ W32((u32)(r_ebx+0x94u), r_eax);
    /* 004519dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004519e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004519e1: ret  */ FN_RET(0x004519a4); r_esp += 4; return;
L_004519e2:; BB(0x004519e2);
    /* 004519e2: fstp dword ptr [ebx + 0x94] */ W_F32((u32)(r_ebx+0x94u), ST(0)); FPOP();
    /* 004519e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004519eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004519ec: ret  */ FN_RET(0x004519a4); r_esp += 4; return;
L_004519ed:; BB(0x004519ed);
    /* 004519ed: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004519f0: jne 0x451ab1 */ if (!fZ) goto L_00451ab1;
L_004519f6:; BB(0x004519f6);
    /* 004519f6: fld dword ptr [0x8ff9f8] */ FPUSH(R_F32((u32)(0x8ff9f8u)));
    /* 004519fc: fadd dword ptr [ebx + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x94u));
    /* 00451a02: fcom dword ptr [0x8ffb7c] */ fx_compare(ST(0), R_F32((u32)(0x8ffb7cu))); 
    /* 00451a08: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00451a0a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00451a0b: jae 0x451a1c */ if (!fC) goto L_00451a1c;
L_00451a0d:; BB(0x00451a0d);
    /* 00451a0d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00451a0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00451a11: mov dword ptr [ebx + 0x94], eax */ W32((u32)(r_ebx+0x94u), r_eax);
    /* 00451a17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00451a1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451a1b: ret  */ FN_RET(0x004519a4); r_esp += 4; return;
L_00451a1c:; BB(0x00451a1c);
    /* 00451a1c: fstp dword ptr [ebx + 0x94] */ W_F32((u32)(r_ebx+0x94u), ST(0)); FPOP();
    /* 00451a22: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00451a25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451a26: ret  */ FN_RET(0x004519a4); r_esp += 4; return;
L_00451a27:; BB(0x00451a27);
    /* 00451a27: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00451a2d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00451a30: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 00451a36: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00451a39: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00451a3f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00451a43: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 00451a49: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00451a4d: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00451a50: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x451a55u); f_0082f9c4();
    /* 00451a55: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00451a5d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00451a60: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x451a65u); f_0083173c();
    /* 00451a65: fld dword ptr [0x8ff9f0] */ FPUSH(R_F32((u32)(0x8ff9f0u)));
    /* 00451a6b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00451a6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00451a6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00451a70: jb 0x451a7e */ if (fC) goto L_00451a7e;
L_00451a72:; BB(0x00451a72);
    /* 00451a72: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00451a74: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00451a76: fld dword ptr [0x8ffb7c] */ FPUSH(R_F32((u32)(0x8ffb7cu)));
    /* 00451a7c: jmp 0x451a9f */ goto L_00451a9f;
L_00451a7e:; BB(0x00451a7e);
    /* 00451a7e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00451a80: fcom dword ptr [0x8ff9ec] */ fx_compare(ST(0), R_F32((u32)(0x8ff9ecu))); 
    /* 00451a86: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00451a88: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00451a89: jb 0x451a97 */ if (fC) goto L_00451a97;
L_00451a8b:; BB(0x00451a8b);
    /* 00451a8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00451a8d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00451a8f: fld dword ptr [0x8ffb78] */ FPUSH(R_F32((u32)(0x8ffb78u)));
    /* 00451a95: jmp 0x451a9f */ goto L_00451a9f;
L_00451a97:; BB(0x00451a97);
    /* 00451a97: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00451a99: fdiv dword ptr [0x8ffb74] */ ST(0) = ST(0) / R_F32((u32)(0x8ffb74u));
L_00451a9f:; BB(0x00451a9f);
    /* 00451a9f: fmul dword ptr [0x8ffb70] */ ST(0) = ST(0) * R_F32((u32)(0x8ffb70u));
    /* 00451aa5: fadd dword ptr [0x8ff9e8] */ ST(0) = ST(0) + R_F32((u32)(0x8ff9e8u));
    /* 00451aab: fstp dword ptr [ebx + 0x94] */ W_F32((u32)(r_ebx+0x94u), ST(0)); FPOP();
L_00451ab1:; BB(0x00451ab1);
    /* 00451ab1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00451ab4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451ab5: ret  */ FN_RET(0x004519a4); r_esp += 4; return;
}

void f_00451ab8(void) /* sub_451AB8 */
{
    FN_ENTER(0x00451ab8);
    /* 00451ab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451ab9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00451abb: fld dword ptr [ebp + 0x94] */ FPUSH(R_F32((u32)(r_ebp+0x94u)));
    /* 00451ac1: fcom dword ptr [0x8ffb6c] */ fx_compare(ST(0), R_F32((u32)(0x8ffb6cu))); 
    /* 00451ac7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00451ac9: mov edx, dword ptr [ebp + 0x94] */ r_edx = R32((u32)(r_ebp+0x94u));
    /* 00451acf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00451ad0: je 0x451b31 */ if (fZ) goto L_00451b31;
L_00451ad2:; BB(0x00451ad2);
    /* 00451ad2: fcomp dword ptr [0x8ffb68] */ fx_compare(ST(0), R_F32((u32)(0x8ffb68u))); FPOP();
    /* 00451ad8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00451ada: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00451adb: jae 0x451af7 */ if (!fC) goto L_00451af7;
L_00451add:; BB(0x00451add);
    /* 00451add: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451ade: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x451ae3u); f_00453af4();
    /* 00451ae3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451ae4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00451ae6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00451ae8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00451aed: mov edx, 4 */ r_edx = 0x4u;
    /* 00451af2: call 0x836248 */ r_esp -= 4; W32(r_esp, 0x451af7u); f_00836248();
L_00451af7:; BB(0x00451af7);
    /* 00451af7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x451afcu); f_0082d7b0();
    /* 00451afc: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00451aff: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x451b04u); f_0082d838();
    /* 00451b04: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00451b07: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x451b0cu); f_00829cc8();
    /* 00451b0c: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 00451b0f: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x451b14u); f_00831758();
    /* 00451b14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x451b19u); f_0082da80();
    /* 00451b19: fld dword ptr [ebp + 0x94] */ FPUSH(R_F32((u32)(r_ebp+0x94u)));
    /* 00451b1f: fcomp dword ptr [0x8ffb68] */ fx_compare(ST(0), R_F32((u32)(0x8ffb68u))); FPOP();
    /* 00451b25: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00451b27: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00451b28: jae 0x451b2f */ if (!fC) goto L_00451b2f;
L_00451b2a:; BB(0x00451b2a);
    /* 00451b2a: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x451b2fu); f_005963d0();
L_00451b2f:; BB(0x00451b2f);
    /* 00451b2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451b30: ret  */ FN_RET(0x00451ab8); r_esp += 4; return;
L_00451b31:; BB(0x00451b31);
    /* 00451b31: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00451b33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451b34: ret  */ FN_RET(0x00451ab8); r_esp += 4; return;
}

void f_00451b38(void) /* sub_451B38 */
{
    FN_ENTER(0x00451b38);
    /* 00451b38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451b39: mov ebp, esp */ r_ebp = r_esp;
    /* 00451b3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00451b3d: push 0x8cf080 */ { u32 v = 0x8cf080u; r_esp -= 4; W32(r_esp, v); }
    /* 00451b42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00451b48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451b49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00451b50: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451b53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00451b56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00451b59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00451b5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00451b5f: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00451b64: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00451b6b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x451b70u); f_005caba4();
    /* 00451b70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451b71: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00451b74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451b76: je 0x451ba9 */ if (fZ) goto L_00451ba9;
L_00451b78:; BB(0x00451b78);
    /* 00451b78: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00451b7f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00451b86: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00451b89: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b8c: call 0x451bb0 */ r_esp -= 4; W32(r_esp, 0x451b91u); f_00451bb0();
    /* 00451b91: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451b94: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00451b9b:; BB(0x00451b9b);
    /* 00451b9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451b9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00451ba5: mov esp, ebp */ r_esp = r_ebp;
    /* 00451ba7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451ba8: ret  */ FN_RET(0x00451b38); r_esp += 4; return;
L_00451ba9:; BB(0x00451ba9);
    /* 00451ba9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451bab: jmp 0x451b9b */ goto L_00451b9b;
}

void f_00451bb0(void) /* sub_451BB0 */
{
    FN_ENTER(0x00451bb0);
    /* 00451bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00451bb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00451bb5: push 0x8cf09c */ { u32 v = 0x8cf09cu; r_esp -= 4; W32(r_esp, v); }
    /* 00451bba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00451bc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451bc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00451bc8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451bcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00451bce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00451bd1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00451bd4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00451bd7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00451bda: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00451bdd: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x451be2u); f_007ba278();
    /* 00451be2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00451be9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451bec: mov dword ptr [edx], 0xaf7238 */ W32((u32)(r_edx), 0xaf7238u);
    /* 00451bf2: mov eax, dword ptr [0x9a5cf8] */ r_eax = R32((u32)(0x9a5cf8u));
    /* 00451bf7: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 00451bfd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00451bff: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00451c02: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x451c07u); f_005b8610();
    /* 00451c07: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c0a: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 00451c10: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00451c12: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00451c15: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x451c1au); f_005b8624();
    /* 00451c1a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00451c1d: mov edx, dword ptr [0x9a5cec] */ r_edx = R32((u32)(0x9a5cecu));
    /* 00451c23: mov ecx, dword ptr [0x9a5cf0] */ r_ecx = R32((u32)(0x9a5cf0u));
    /* 00451c29: mov dword ptr [ebx + 0x94], 0 */ W32((u32)(r_ebx+0x94u), 0x0u);
    /* 00451c33: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00451c36: mov eax, dword ptr [0x9a5cf4] */ r_eax = R32((u32)(0x9a5cf4u));
    /* 00451c3b: mov dword ptr [ebx + 0x90], 0 */ W32((u32)(r_ebx+0x90u), 0x0u);
    /* 00451c45: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 00451c48: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 00451c4b: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00451c4e: mov eax, ebx */ r_eax = r_ebx;
    /* 00451c50: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451c53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451c56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00451c5d: mov esp, ebp */ r_esp = r_ebp;
    /* 00451c5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451c60: ret 4 */ FN_RET(0x00451bb0); r_esp += 8; return;
}

void f_00451c64(void) /* sub_451C64 */
{
    FN_ENTER(0x00451c64);
    /* 00451c64: mov eax, dword ptr [0xa45190] */ r_eax = R32((u32)(0xa45190u));
    /* 00451c69: cmp eax, 0x3b */ {  u32 a = r_eax; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451c6c: jne 0x451c7f */ if (!fZ) goto L_00451c7f;
L_00451c6e:; BB(0x00451c6e);
    /* 00451c6e: mov ecx, 0xa450c0 */ r_ecx = 0xa450c0u;
    /* 00451c73: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x451c78u); f_00831650();
    /* 00451c78: mov eax, dword ptr [0xa45190] */ r_eax = R32((u32)(0xa45190u));
    /* 00451c7d: jmp 0x451c93 */ goto L_00451c93;
L_00451c7f:; BB(0x00451c7f);
    /* 00451c7f: cmp eax, 0x3a */ {  u32 a = r_eax; u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451c82: jne 0x451c93 */ if (!fZ) goto L_00451c93;
L_00451c84:; BB(0x00451c84);
    /* 00451c84: mov ecx, 0xa45100 */ r_ecx = 0xa45100u;
    /* 00451c89: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x451c8eu); f_00831650();
    /* 00451c8e: mov eax, dword ptr [0xa45190] */ r_eax = R32((u32)(0xa45190u));
L_00451c93:; BB(0x00451c93);
    /* 00451c93: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00451c96: mov dword ptr [0xa45190], eax */ W32((u32)(0xa45190u), r_eax);
    /* 00451c9b: ret  */ FN_RET(0x00451c64); r_esp += 4; return;
}

void f_00451c9c(void) /* sub_451C9C */
{
    FN_ENTER(0x00451c9c);
    /* 00451c9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00451c9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00451c9e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451c9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451ca0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00451ca1: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00451ca5: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00451ca9: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00451cad: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 00451cb1: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00451cb5: fcomp dword ptr [0x8ffb58] */ fx_compare(ST(0), R_F32((u32)(0x8ffb58u))); FPOP();
    /* 00451cbb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00451cbd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00451cbe: je 0x451da2 */ if (fZ) goto L_00451da2;
L_00451cc4:; BB(0x00451cc4);
    /* 00451cc4: mov eax, edi */ r_eax = r_edi;
    /* 00451cc6: call 0x451dac */ r_esp -= 4; W32(r_esp, 0x451ccbu); f_00451dac();
    /* 00451ccb: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00451ccf: fcomp dword ptr [0x8ffb54] */ fx_compare(ST(0), R_F32((u32)(0x8ffb54u))); FPOP();
    /* 00451cd5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00451cd7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00451cd8: jae 0x451ce5 */ if (!fC) goto L_00451ce5;
L_00451cda:; BB(0x00451cda);
    /* 00451cda: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00451cde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451cdf: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x451ce4u); f_00453af4();
    /* 00451ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00451ce5:; BB(0x00451ce5);
    /* 00451ce5: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00451ce9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x451ceeu); f_00829cc8();
    /* 00451cee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00451cef: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x451cf4u); f_0082e1e8();
    /* 00451cf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451cf5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451cf7: je 0x451d1d */ if (fZ) goto L_00451d1d;
L_00451cf9:; BB(0x00451cf9);
    /* 00451cf9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x451cfeu); f_0082d7b0();
    /* 00451cfe: mov ecx, 0xa45178 */ r_ecx = 0xa45178u;
    /* 00451d03: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x451d08u); f_0082d838();
    /* 00451d08: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00451d0c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x451d11u); f_00829cc8();
    /* 00451d11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451d12: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x451d17u); f_0082e1e8();
    /* 00451d17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451d18: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x451d1du); f_0082da80();
L_00451d1d:; BB(0x00451d1d);
    /* 00451d1d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451d1f: je 0x451d4f */ if (fZ) goto L_00451d4f;
L_00451d21:; BB(0x00451d21);
    /* 00451d21: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x451d26u); f_004e71a8();
    /* 00451d26: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x451d2bu); f_0082d7b0();
    /* 00451d2b: mov ecx, 0xa45184 */ r_ecx = 0xa45184u;
    /* 00451d30: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x451d35u); f_0082d838();
    /* 00451d35: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00451d39: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x451d3eu); f_00829cc8();
    /* 00451d3e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00451d3f: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x451d44u); f_0082e1e8();
    /* 00451d44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451d45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x451d4au); f_0082da80();
    /* 00451d4a: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x451d4fu); f_004e71c8();
L_00451d4f:; BB(0x00451d4f);
    /* 00451d4f: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00451d53: fcomp dword ptr [0x8ffb54] */ fx_compare(ST(0), R_F32((u32)(0x8ffb54u))); FPOP();
    /* 00451d59: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00451d5b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00451d5c: jae 0x451d63 */ if (!fC) goto L_00451d63;
L_00451d5e:; BB(0x00451d5e);
    /* 00451d5e: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x451d63u); f_005963d0();
L_00451d63:; BB(0x00451d63);
    /* 00451d63: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451d65: je 0x451da2 */ if (fZ) goto L_00451da2;
L_00451d67:; BB(0x00451d67);
    /* 00451d67: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x451d6cu); f_004e71a8();
    /* 00451d6c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x451d71u); f_0082d7b0();
    /* 00451d71: mov ecx, 0xa45184 */ r_ecx = 0xa45184u;
    /* 00451d76: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x451d7bu); f_0082d838();
    /* 00451d7b: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00451d7f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x451d84u); f_00829cc8();
    /* 00451d84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00451d86: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00451d8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451d8b: push dword ptr [esp + 0x3c] */ { u32 v = R32((u32)(r_esp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00451d8f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451d90: call 0x4e70c4 */ r_esp -= 4; W32(r_esp, 0x451d95u); f_004e70c4();
    /* 00451d95: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451d98: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x451d9du); f_0082da80();
    /* 00451d9d: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x451da2u); f_004e71c8();
L_00451da2:; BB(0x00451da2);
    /* 00451da2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451da3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451da4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451da5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00451da6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00451da7: ret  */ FN_RET(0x00451c9c); r_esp += 4; return;
}

void f_00451dac(void) /* sub_451DAC */
{
    FN_ENTER(0x00451dac);
    /* 00451dac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451dad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00451dae: mov ebx, eax */ r_ebx = r_eax;
    /* 00451db0: mov dword ptr [0xa45190], 0 */ W32((u32)(0xa45190u), 0x0u);
    /* 00451dba: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x451dbfu); f_0082d7b0();
    /* 00451dbf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00451dc1: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x451dc6u); f_00830cd8();
L_00451dc6:; BB(0x00451dc6);
    /* 00451dc6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x451dcbu); f_0082d7b0();
    /* 00451dcb: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00451dce: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x451dd3u); f_0082d838();
    /* 00451dd3: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00451dd5: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 00451dd8: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00451ddb: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x451de0u); f_00830df8();
    /* 00451de0: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00451de3: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x451de8u); f_00831290();
    /* 00451de8: mov eax, dword ptr [0xa45190] */ r_eax = R32((u32)(0xa45190u));
    /* 00451ded: cmp eax, 0x3b */ {  u32 a = r_eax; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451df0: jne 0x451e0a */ if (!fZ) goto L_00451e0a;
L_00451df2:; BB(0x00451df2);
    /* 00451df2: push 0xa45184 */ { u32 v = 0xa45184u; r_esp -= 4; W32(r_esp, v); }
    /* 00451df7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00451df9: mov edx, 0xa45140 */ r_edx = 0xa45140u;
    /* 00451dfe: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x451e03u); f_00830aa0();
    /* 00451e03: mov eax, dword ptr [0xa45190] */ r_eax = R32((u32)(0xa45190u));
    /* 00451e08: jmp 0x451e25 */ goto L_00451e25;
L_00451e0a:; BB(0x00451e0a);
    /* 00451e0a: cmp eax, 0x3a */ {  u32 a = r_eax; u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e0d: jne 0x451e25 */ if (!fZ) goto L_00451e25;
L_00451e0f:; BB(0x00451e0f);
    /* 00451e0f: push 0xa45178 */ { u32 v = 0xa45178u; r_esp -= 4; W32(r_esp, v); }
    /* 00451e14: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00451e16: mov edx, 0xa45140 */ r_edx = 0xa45140u;
    /* 00451e1b: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x451e20u); f_00830aa0();
    /* 00451e20: mov eax, dword ptr [0xa45190] */ r_eax = R32((u32)(0xa45190u));
L_00451e25:; BB(0x00451e25);
    /* 00451e25: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00451e28: mov dword ptr [0xa45190], eax */ W32((u32)(0xa45190u), r_eax);
    /* 00451e2d: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00451e30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e32: je 0x451e39 */ if (fZ) goto L_00451e39;
L_00451e34:; BB(0x00451e34);
    /* 00451e34: call 0x451e54 */ r_esp -= 4; W32(r_esp, 0x451e39u); f_00451e54();
L_00451e39:; BB(0x00451e39);
    /* 00451e39: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x451e3eu); f_0082da80();
    /* 00451e3e: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00451e41: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e43: jne 0x451dc6 */ if (!fZ) goto L_00451dc6;
L_00451e45:; BB(0x00451e45);
    /* 00451e45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x451e4au); f_0082da80();
    /* 00451e4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451e4b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451e4c: ret  */ FN_RET(0x00451dac); r_esp += 4; return;
}

void f_00451e54(void) /* sub_451E54 */
{
    FN_ENTER(0x00451e54);
    /* 00451e54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451e55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00451e56: mov ebx, eax */ r_ebx = r_eax;
L_00451e58:; BB(0x00451e58);
    /* 00451e58: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x451e5du); f_0082d7b0();
    /* 00451e5d: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00451e60: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x451e65u); f_0082d838();
    /* 00451e65: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00451e67: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 00451e6a: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00451e6d: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x451e72u); f_00830df8();
    /* 00451e72: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00451e75: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x451e7au); f_00831290();
    /* 00451e7a: mov edx, dword ptr [0xa45190] */ r_edx = R32((u32)(0xa45190u));
    /* 00451e80: cmp edx, 0x3b */ {  u32 a = r_edx; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e83: jne 0x451e9e */ if (!fZ) goto L_00451e9e;
L_00451e85:; BB(0x00451e85);
    /* 00451e85: push 0xa45184 */ { u32 v = 0xa45184u; r_esp -= 4; W32(r_esp, v); }
    /* 00451e8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00451e8c: mov edx, 0xa45140 */ r_edx = 0xa45140u;
    /* 00451e91: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x451e96u); f_00830aa0();
    /* 00451e96: mov edx, dword ptr [0xa45190] */ r_edx = R32((u32)(0xa45190u));
    /* 00451e9c: jmp 0x451eba */ goto L_00451eba;
L_00451e9e:; BB(0x00451e9e);
    /* 00451e9e: cmp edx, 0x3a */ {  u32 a = r_edx; u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451ea1: jne 0x451eba */ if (!fZ) goto L_00451eba;
L_00451ea3:; BB(0x00451ea3);
    /* 00451ea3: push 0xa45178 */ { u32 v = 0xa45178u; r_esp -= 4; W32(r_esp, v); }
    /* 00451ea8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00451eaa: mov edx, 0xa45140 */ r_edx = 0xa45140u;
    /* 00451eaf: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x451eb4u); f_00830aa0();
    /* 00451eb4: mov edx, dword ptr [0xa45190] */ r_edx = R32((u32)(0xa45190u));
L_00451eba:; BB(0x00451eba);
    /* 00451eba: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00451ebd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00451ec0: mov dword ptr [0xa45190], edx */ W32((u32)(0xa45190u), r_edx);
    /* 00451ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451ec8: je 0x451ecf */ if (fZ) goto L_00451ecf;
L_00451eca:; BB(0x00451eca);
    /* 00451eca: call 0x451e54 */ r_esp -= 4; W32(r_esp, 0x451ecfu); f_00451e54();
L_00451ecf:; BB(0x00451ecf);
    /* 00451ecf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x451ed4u); f_0082da80();
    /* 00451ed4: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00451ed7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00451ed9: jne 0x451e58 */ if (!fZ) goto L_00451e58;
L_00451edf:; BB(0x00451edf);
    /* 00451edf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451ee0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00451ee1: ret  */ FN_RET(0x00451e54); r_esp += 4; return;
}

void f_00451ee4(void) /* sub_451EE4 */
{
    FN_ENTER(0x00451ee4);
    /* 00451ee4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00451ee5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00451ee6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451ee7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451ee8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451eeb: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 00451ef0: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00451ef4: fcomp dword ptr [0x8ffb50] */ fx_compare(ST(0), R_F32((u32)(0x8ffb50u))); FPOP();
    /* 00451efa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00451efc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00451efd: je 0x452048 */ if (fZ) goto L_00452048;
L_00451f03:; BB(0x00451f03);
    /* 00451f03: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451f09: je 0x452048 */ if (fZ) goto L_00452048;
L_00451f0f:; BB(0x00451f0f);
    /* 00451f0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451f10: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x451f15u); f_0068d5a8();
    /* 00451f15: mov edi, eax */ r_edi = r_eax;
    /* 00451f17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451f1a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451f1c: je 0x452048 */ if (fZ) goto L_00452048;
L_00451f22:; BB(0x00451f22);
    /* 00451f22: mov edx, dword ptr [edi + 0xdf0] */ r_edx = R32((u32)(r_edi+0xdf0u));
    /* 00451f28: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451f2a: jne 0x452048 */ if (!fZ) goto L_00452048;
L_00451f30:; BB(0x00451f30);
    /* 00451f30: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00451f34: fcomp dword ptr [0x8ffb4c] */ fx_compare(ST(0), R_F32((u32)(0x8ffb4cu))); FPOP();
    /* 00451f3a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00451f3c: mov esi, dword ptr [edi + 0x9a4] */ r_esi = R32((u32)(r_edi+0x9a4u));
    /* 00451f42: mov ebp, dword ptr [edi + 0x9a0] */ r_ebp = R32((u32)(r_edi+0x9a0u));
    /* 00451f48: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00451f4b: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00451f4f: lea ebx, [edi + 0xb10] */ r_ebx = (u32)(r_edi+0xb10u);
    /* 00451f55: lea edx, [edi + 0xc7c] */ r_edx = (u32)(r_edi+0xc7cu);
    /* 00451f5b: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00451f5f: mov ebx, dword ptr [edi + 0x9a8] */ r_ebx = R32((u32)(r_edi+0x9a8u));
    /* 00451f65: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00451f68: lea edx, [edi + 0xde8] */ r_edx = (u32)(r_edi+0xde8u);
    /* 00451f6e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00451f72: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00451f73: jae 0x451f80 */ if (!fC) goto L_00451f80;
L_00451f75:; BB(0x00451f75);
    /* 00451f75: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00451f79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451f7a: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x451f7fu); f_00453af4();
    /* 00451f7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00451f80:; BB(0x00451f80);
    /* 00451f80: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00451f84: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x451f89u); f_00829cc8();
    /* 00451f89: call 0x453714 */ r_esp -= 4; W32(r_esp, 0x451f8eu); f_00453714();
    /* 00451f8e: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00451f92: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00451f96: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00451f9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451f9b: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x451fa0u); f_0083046c();
    /* 00451fa0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451fa3: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x451fa8u); f_00452050();
    /* 00451fa8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451faa: je 0x451fca */ if (fZ) goto L_00451fca;
L_00451fac:; BB(0x00451fac);
    /* 00451fac: mov ecx, 0xa45100 */ r_ecx = 0xa45100u;
    /* 00451fb1: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x451fb6u); f_0082d990();
    /* 00451fb6: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00451fb9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x451fbeu); f_00829cc8();
    /* 00451fbe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00451fbf: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x451fc4u); f_0082e1e8();
    /* 00451fc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451fc5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x451fcau); f_0082da80();
L_00451fca:; BB(0x00451fca);
    /* 00451fca: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451fcc: je 0x451ff7 */ if (fZ) goto L_00451ff7;
L_00451fce:; BB(0x00451fce);
    /* 00451fce: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x451fd3u); f_004e71a8();
    /* 00451fd3: mov ecx, 0xa450c0 */ r_ecx = 0xa450c0u;
    /* 00451fd8: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x451fddu); f_0082d990();
    /* 00451fdd: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00451fe1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x451fe6u); f_00829cc8();
    /* 00451fe6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00451fe7: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x451fecu); f_0082e1e8();
    /* 00451fec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00451fed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x451ff2u); f_0082da80();
    /* 00451ff2: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x451ff7u); f_004e71c8();
L_00451ff7:; BB(0x00451ff7);
    /* 00451ff7: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00451ffb: fcomp dword ptr [0x8ffb4c] */ fx_compare(ST(0), R_F32((u32)(0x8ffb4cu))); FPOP();
    /* 00452001: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00452003: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00452004: jae 0x45200b */ if (!fC) goto L_0045200b;
L_00452006:; BB(0x00452006);
    /* 00452006: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x45200bu); f_005963d0();
L_0045200b:; BB(0x0045200b);
    /* 0045200b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045200d: je 0x452048 */ if (fZ) goto L_00452048;
L_0045200f:; BB(0x0045200f);
    /* 0045200f: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x452014u); f_004e71a8();
    /* 00452014: mov ecx, 0xa450c0 */ r_ecx = 0xa450c0u;
    /* 00452019: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x45201eu); f_0082d990();
    /* 0045201e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00452022: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x452027u); f_00829cc8();
    /* 00452027: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00452029: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0045202d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045202e: add edi, 0x930 */ {  u32 a = r_edi; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00452034: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00452035: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452036: call 0x4e70c4 */ r_esp -= 4; W32(r_esp, 0x45203bu); f_004e70c4();
    /* 0045203b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045203e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x452043u); f_0082da80();
    /* 00452043: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x452048u); f_004e71c8();
L_00452048:; BB(0x00452048);
    /* 00452048: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045204b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045204c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045204d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045204e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045204f: ret  */ FN_RET(0x00451ee4); r_esp += 4; return;
}

