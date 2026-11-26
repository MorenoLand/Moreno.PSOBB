#include "protos.h"

void f_004cc314(void) /* sub_4CC314 */
{
    FN_ENTER(0x004cc314);
    /* 004cc314: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cc315: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc316: mov edi, ecx */ r_edi = r_ecx;
    /* 004cc318: movzx eax, word ptr [edi + 0x760] */ r_eax = (u32)R16((u32)(r_edi+0x760u));
    /* 004cc31f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc320: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4cc325u); f_0068d5a8();
    /* 004cc325: mov ebx, eax */ r_ebx = r_eax;
    /* 004cc327: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cc32a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc32c: je 0x4cc380 */ if (fZ) goto L_004cc380;
L_004cc32e:; BB(0x004cc32e);
    /* 004cc32e: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 004cc334: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cc33a: jne 0x4cc380 */ if (!fZ) goto L_004cc380;
L_004cc33c:; BB(0x004cc33c);
    /* 004cc33c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc33e: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x4cc343u); f_00685550();
    /* 004cc343: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004cc346: mov dword ptr [ebx + 0x720], 0x14 */ W32((u32)(r_ebx+0x720u), 0x14u);
    /* 004cc350: and edx, 0xffefffdf */ {  u32 a = r_edx; u32 b = 0xffefffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc356: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 004cc359: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004cc35c: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 004cc35f: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 004cc362: fsub dword ptr [0x908394] */ ST(0) = ST(0) - R_F32((u32)(0x908394u));
    /* 004cc368: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004cc36b: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 004cc36e: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004cc371: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004cc374: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 004cc377: mov edi, dword ptr [edi + 0x60] */ r_edi = R32((u32)(r_edi+0x60u));
    /* 004cc37a: mov dword ptr [ebx + 0x60], edi */ W32((u32)(r_ebx+0x60u), r_edi);
    /* 004cc37d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc37e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cc37f: ret  */ FN_RET(0x004cc314); r_esp += 4; return;
L_004cc380:; BB(0x004cc380);
    /* 004cc380: mov dword ptr [0xa485f4], 0 */ W32((u32)(0xa485f4u), 0x0u);
    /* 004cc38a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc38b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cc38c: ret  */ FN_RET(0x004cc314); r_esp += 4; return;
}

void f_004cc390(void) /* sub_4CC390 */
{
    FN_ENTER(0x004cc390);
    /* 004cc390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc391: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cc394: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004cc396: mov edx, dword ptr [ebp + 0x3c8] */ r_edx = R32((u32)(r_ebp+0x3c8u));
    /* 004cc39c: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc39f: je 0x4cc3b7 */ if (fZ) goto L_004cc3b7;
L_004cc3a1:; BB(0x004cc3a1);
    /* 004cc3a1: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc3a4: jne 0x4cc3eb */ if (!fZ) goto L_004cc3eb;
L_004cc3a6:; BB(0x004cc3a6);
    /* 004cc3a6: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 004cc3ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004cc3af: jle 0x4cc44c */ if ((fZ||fS!=fO)) goto L_004cc44c;
L_004cc3b5:; BB(0x004cc3b5);
    /* 004cc3b5: jmp 0x4cc3eb */ goto L_004cc3eb;
L_004cc3b7:; BB(0x004cc3b7);
    /* 004cc3b7: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004cc3bd: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc3c0: jge 0x4cc3d7 */ if ((fS==fO)) goto L_004cc3d7;
L_004cc3c2:; BB(0x004cc3c2);
    /* 004cc3c2: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc3c5: jne 0x4cc3eb */ if (!fZ) goto L_004cc3eb;
L_004cc3c7:; BB(0x004cc3c7);
    /* 004cc3c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc3c9: call 0x4c311c */ r_esp -= 4; W32(r_esp, 0x4cc3ceu); f_004c311c();
    /* 004cc3ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc3d0: je 0x4cc3eb */ if (fZ) goto L_004cc3eb;
L_004cc3d2:; BB(0x004cc3d2);
    /* 004cc3d2: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cc3d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc3d6: ret  */ FN_RET(0x004cc390); r_esp += 4; return;
L_004cc3d7:; BB(0x004cc3d7);
    /* 004cc3d7: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc3da: jne 0x4cc3eb */ if (!fZ) goto L_004cc3eb;
L_004cc3dc:; BB(0x004cc3dc);
    /* 004cc3dc: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 004cc3e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004cc3e5: jle 0x4cc4ef */ if ((fZ||fS!=fO)) goto L_004cc4ef;
L_004cc3eb:; BB(0x004cc3eb);
    /* 004cc3eb: mov eax, dword ptr [0xa485f8] */ r_eax = R32((u32)(0xa485f8u));
    /* 004cc3f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc3f2: jne 0x4cc432 */ if (!fZ) goto L_004cc432;
L_004cc3f4:; BB(0x004cc3f4);
    /* 004cc3f4: mov eax, dword ptr [ebp + 0x75c] */ r_eax = R32((u32)(r_ebp+0x75cu));
    /* 004cc3fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc3fc: je 0x4cc418 */ if (fZ) goto L_004cc418;
L_004cc3fe:; BB(0x004cc3fe);
    /* 004cc3fe: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004cc400: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004cc403: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004cc40a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc40c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc40d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc413u); call_ind(t); }
    /* 004cc413: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cc416: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc417: ret  */ FN_RET(0x004cc390); r_esp += 4; return;
L_004cc418:; BB(0x004cc418);
    /* 004cc418: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc41a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004cc41d: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004cc424: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc426: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc427: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc42du); call_ind(t); }
    /* 004cc42d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cc430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc431: ret  */ FN_RET(0x004cc390); r_esp += 4; return;
L_004cc432:; BB(0x004cc432);
    /* 004cc432: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc434: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004cc437: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004cc43e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc441: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc447u); call_ind(t); }
    /* 004cc447: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cc44a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc44b: ret  */ FN_RET(0x004cc390); r_esp += 4; return;
L_004cc44c:; BB(0x004cc44c);
    /* 004cc44c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc44e: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc450: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cc453: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc455: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc45bu); call_ind(t); }
    /* 004cc45b: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004cc45f: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004cc465: mov byte ptr [esp + 0x30], 0xa8 */ W8((u32)(r_esp+0x30u), 0xa8u);
    /* 004cc46a: mov edx, 0x16 */ r_edx = 0x16u;
    /* 004cc46f: mov byte ptr [esp + 0x31], 6 */ W8((u32)(r_esp+0x31u), 0x6u);
    /* 004cc474: mov word ptr [esp + 0x32], ax */ W16((u32)(r_esp+0x32u), (u16)r_eax);
    /* 004cc479: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004cc47f: mov word ptr [esp + 0x34], dx */ W16((u32)(r_esp+0x34u), (u16)r_edx);
    /* 004cc484: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 004cc489: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004cc490: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004cc494: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004cc49a: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004cc49e: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 004cc4a2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cc4a7u); f_008587a5();
    /* 004cc4a7: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004cc4ab: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 004cc4af: fdiv dword ptr [0x90838c] */ ST(0) = ST(0) / R_F32((u32)(0x90838cu));
    /* 004cc4b5: fmul dword ptr [0x908390] */ ST(0) = ST(0) * R_F32((u32)(0x908390u));
    /* 004cc4bb: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 004cc4bf: fnstcw word ptr [esp + 0x50] */ W16((u32)(r_esp+0x50u), fcw);
    /* 004cc4c3: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 004cc4c8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cc4cd: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004cc4d1: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 004cc4d5: fistp dword ptr [esp + 0x60] */ W32((u32)(r_esp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004cc4d9: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 004cc4dd: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 004cc4e1: mov byte ptr [esp + 0x44], al */ W8((u32)(r_esp+0x44u), (u8)r_eax);
    /* 004cc4e5: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cc4eau); f_008003e0();
    /* 004cc4ea: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cc4ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc4ee: ret  */ FN_RET(0x004cc390); r_esp += 4; return;
L_004cc4ef:; BB(0x004cc4ef);
    /* 004cc4ef: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 004cc4f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc4f8: je 0x4cc59f */ if (fZ) goto L_004cc59f;
L_004cc4fe:; BB(0x004cc4fe);
    /* 004cc4fe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc500: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc502: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cc505: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc507: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc50du); call_ind(t); }
    /* 004cc50d: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004cc511: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004cc517: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004cc51b: mov edx, 0x15 */ r_edx = 0x15u;
    /* 004cc520: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004cc525: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004cc52a: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004cc530: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004cc535: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004cc53a: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004cc541: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004cc545: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004cc54b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004cc54f: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004cc553: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cc558u); f_008587a5();
    /* 004cc558: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004cc55c: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 004cc560: fdiv dword ptr [0x90838c] */ ST(0) = ST(0) / R_F32((u32)(0x90838cu));
    /* 004cc566: fmul dword ptr [0x908390] */ ST(0) = ST(0) * R_F32((u32)(0x908390u));
    /* 004cc56c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004cc56f: fnstcw word ptr [esp + 0x50] */ W16((u32)(r_esp+0x50u), fcw);
    /* 004cc573: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 004cc578: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cc57d: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004cc581: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 004cc585: fistp dword ptr [esp + 0x60] */ W32((u32)(r_esp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004cc589: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 004cc58d: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 004cc591: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004cc595: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cc59au); f_008003e0();
    /* 004cc59a: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cc59d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc59e: ret  */ FN_RET(0x004cc390); r_esp += 4; return;
L_004cc59f:; BB(0x004cc59f);
    /* 004cc59f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc5a1: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004cc5a3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cc5a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc5a8: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc5aeu); call_ind(t); }
    /* 004cc5ae: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004cc5b2: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004cc5b8: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004cc5bd: mov edx, 0xc */ r_edx = 0xcu;
    /* 004cc5c2: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004cc5c7: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004cc5cc: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004cc5d2: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004cc5d7: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 004cc5dc: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004cc5e3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004cc5e7: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004cc5ed: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004cc5f1: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004cc5f5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cc5fau); f_008587a5();
    /* 004cc5fa: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004cc5fe: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 004cc602: fdiv dword ptr [0x90838c] */ ST(0) = ST(0) / R_F32((u32)(0x90838cu));
    /* 004cc608: fmul dword ptr [0x908390] */ ST(0) = ST(0) * R_F32((u32)(0x908390u));
    /* 004cc60e: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004cc612: fnstcw word ptr [esp + 0x50] */ W16((u32)(r_esp+0x50u), fcw);
    /* 004cc616: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 004cc61b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cc620: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004cc624: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 004cc628: fistp dword ptr [esp + 0x60] */ W32((u32)(r_esp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004cc62c: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 004cc630: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 004cc634: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004cc638: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cc63du); f_008003e0();
    /* 004cc63d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cc640: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc641: ret  */ FN_RET(0x004cc390); r_esp += 4; return;
}

void f_004cc644(void) /* sub_4CC644 */
{
    FN_ENTER(0x004cc644);
    /* 004cc644: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc645: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cc648: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004cc64a: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004cc650: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc653: jge 0x4cc669 */ if ((fS==fO)) goto L_004cc669;
L_004cc655:; BB(0x004cc655);
    /* 004cc655: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc657: call 0x4c311c */ r_esp -= 4; W32(r_esp, 0x4cc65cu); f_004c311c();
    /* 004cc65c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc65e: je 0x4cc736 */ if (fZ) goto L_004cc736;
L_004cc664:; BB(0x004cc664);
    /* 004cc664: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cc667: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc668: ret  */ FN_RET(0x004cc644); r_esp += 4; return;
L_004cc669:; BB(0x004cc669);
    /* 004cc669: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004cc66f: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc671: jne 0x4cc736 */ if (!fZ) goto L_004cc736;
L_004cc677:; BB(0x004cc677);
    /* 004cc677: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 004cc67e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004cc680: jg 0x4cc736 */ if ((!fZ&&fS==fO)) goto L_004cc736;
L_004cc686:; BB(0x004cc686);
    /* 004cc686: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 004cc68c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc68f: je 0x4cc750 */ if (fZ) goto L_004cc750;
L_004cc695:; BB(0x004cc695);
    /* 004cc695: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc697: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc699: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cc69c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc69e: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc6a4u); call_ind(t); }
    /* 004cc6a4: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004cc6a8: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004cc6ae: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004cc6b2: mov edx, 0x15 */ r_edx = 0x15u;
    /* 004cc6b7: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004cc6bc: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004cc6c1: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004cc6c7: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004cc6cc: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004cc6d1: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004cc6d8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004cc6dc: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004cc6e2: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004cc6e6: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004cc6ea: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cc6efu); f_008587a5();
    /* 004cc6ef: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004cc6f3: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004cc6f7: fdiv dword ptr [0x908384] */ ST(0) = ST(0) / R_F32((u32)(0x908384u));
    /* 004cc6fd: fmul dword ptr [0x908388] */ ST(0) = ST(0) * R_F32((u32)(0x908388u));
    /* 004cc703: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004cc706: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004cc70a: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004cc70f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cc714: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004cc718: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004cc71c: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004cc720: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004cc724: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004cc728: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004cc72c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cc731u); f_008003e0();
    /* 004cc731: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cc734: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc735: ret  */ FN_RET(0x004cc644); r_esp += 4; return;
L_004cc736:; BB(0x004cc736);
    /* 004cc736: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004cc738: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004cc73b: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004cc742: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc745: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc74bu); call_ind(t); }
    /* 004cc74b: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cc74e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc74f: ret  */ FN_RET(0x004cc644); r_esp += 4; return;
L_004cc750:; BB(0x004cc750);
    /* 004cc750: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc752: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004cc754: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cc757: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc759: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc75fu); call_ind(t); }
    /* 004cc75f: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004cc763: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004cc769: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004cc76e: mov edx, 0xc */ r_edx = 0xcu;
    /* 004cc773: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004cc778: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004cc77d: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004cc783: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004cc788: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 004cc78d: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004cc794: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004cc798: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004cc79e: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004cc7a2: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004cc7a6: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cc7abu); f_008587a5();
    /* 004cc7ab: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004cc7af: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004cc7b3: fdiv dword ptr [0x908384] */ ST(0) = ST(0) / R_F32((u32)(0x908384u));
    /* 004cc7b9: fmul dword ptr [0x908388] */ ST(0) = ST(0) * R_F32((u32)(0x908388u));
    /* 004cc7bf: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004cc7c3: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004cc7c7: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004cc7cc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cc7d1: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004cc7d5: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004cc7d9: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004cc7dd: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004cc7e1: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004cc7e5: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004cc7e9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cc7eeu); f_008003e0();
    /* 004cc7ee: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cc7f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc7f2: ret  */ FN_RET(0x004cc644); r_esp += 4; return;
}

void f_004cc7f4(void) /* sub_4CC7F4 */
{
    FN_ENTER(0x004cc7f4);
    /* 004cc7f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cc7f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc7f6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cc7f8: movzx eax, word ptr [ebx + 0x760] */ r_eax = (u32)R16((u32)(r_ebx+0x760u));
    /* 004cc7ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc800: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4cc805u); f_0068d5a8();
    /* 004cc805: mov esi, eax */ r_esi = r_eax;
    /* 004cc807: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cc80a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc80c: je 0x4cc85c */ if (fZ) goto L_004cc85c;
L_004cc80e:; BB(0x004cc80e);
    /* 004cc80e: mov ecx, esi */ r_ecx = r_esi;
    /* 004cc810: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x4cc815u); f_006855b0();
    /* 004cc815: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 004cc818: mov dword ptr [esi + 0x720], 0 */ W32((u32)(r_esi+0x720u), 0x0u);
    /* 004cc822: and edx, 0xfdffffff */ {  u32 a = r_edx; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004cc828: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004cc82b: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 004cc832: movzx edx, word ptr [ebx + 0x760] */ r_edx = (u32)R16((u32)(r_ebx+0x760u));
    /* 004cc839: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc83f: jne 0x4cc853 */ if (!fZ) goto L_004cc853;
L_004cc841:; BB(0x004cc841);
    /* 004cc841: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004cc848: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc84b: je 0x4cc9de */ if (fZ) goto L_004cc9de;
L_004cc851:; BB(0x004cc851);
    /* 004cc851: jmp 0x4cc863 */ goto L_004cc863;
L_004cc853:; BB(0x004cc853);
    /* 004cc853: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004cc85a: jmp 0x4cc863 */ goto L_004cc863;
L_004cc85c:; BB(0x004cc85c);
    /* 004cc85c: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
L_004cc863:; BB(0x004cc863);
    /* 004cc863: mov dword ptr [ebx + 0x75c], 0 */ W32((u32)(r_ebx+0x75cu), 0x0u);
    /* 004cc86d: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cc870: je 0x4cc9db */ if (fZ) goto L_004cc9db;
L_004cc876:; BB(0x004cc876);
    /* 004cc876: mov esi, dword ptr [ebx + 0x67c] */ r_esi = R32((u32)(r_ebx+0x67cu));
    /* 004cc87c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004cc87e: cmp esi, 0x32 */ {  u32 a = r_esi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc881: jge 0x4cc974 */ if ((fS==fO)) goto L_004cc974;
L_004cc887:; BB(0x004cc887);
    /* 004cc887: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cc88a: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cc88d: ja 0x4cc967 */ if ((!fC&&!fZ)) goto L_004cc967;
L_004cc893:; BB(0x004cc893);
    /* 004cc893: mov eax, dword ptr [eax*4 + 0x907f60] */ r_eax = R32((u32)(r_eax*4+0x907f60u));
    /* 004cc89a: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc967:; BB(0x004cc967);
    /* 004cc967: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc971: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc972: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc973: ret  */ FN_RET(0x004cc7f4); r_esp += 4; return;
L_004cc974:; BB(0x004cc974);
    /* 004cc974: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc976: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cc979: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004cc97c: ja 0x4cc9ca */ if ((!fC&&!fZ)) goto L_004cc9ca;
L_004cc97e:; BB(0x004cc97e);
    /* 004cc97e: mov eax, dword ptr [eax*4 + 0x907ec0] */ r_eax = R32((u32)(r_eax*4+0x907ec0u));
    /* 004cc985: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004cc9ca:; BB(0x004cc9ca);
    /* 004cc9ca: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9cd: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cc9d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc9d5: jne 0x4cc8b9 */ if (!fZ) goto L_004cc8b9;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc7f4); r_esp += 4; return;
L_004cc9de:; BB(0x004cc9de);
    /* 004cc9de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9e1: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9e6: call 0x693348 */ r_esp -= 4; W32(r_esp, 0x4cc9ebu); f_00693348();
    /* 004cc9eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cc9ee: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004cc9f5: jmp 0x4cc863 */ goto L_004cc863;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc7f4); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc89c(void)
{
    FN_ENTER(0x004cc89c);
    /* 004cc89c: mov dword ptr [ebx + 0x67c], 6 */ W32((u32)(r_ebx+0x67cu), 0x6u);
    /* 004cc8a6: mov ecx, 6 */ r_ecx = 0x6u;
    /* 004cc8ab: jmp 0x4cc8b9 */ goto L_004cc8b9;
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc89c); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc8ad(void)
{
    FN_ENTER(0x004cc8ad);
    /* 004cc8ad: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc8ad); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc901(void)
{
    FN_ENTER(0x004cc901);
    /* 004cc901: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc90b: jmp 0x4cc9db */ goto L_004cc9db;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc901); r_esp += 4; return;
}

void f_004cc910(void)
{
    FN_ENTER(0x004cc910);
    /* 004cc910: mov dword ptr [ebx + 0x67c], 7 */ W32((u32)(r_ebx+0x67cu), 0x7u);
    /* 004cc91a: jmp 0x4cc9db */ goto L_004cc9db;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc910); r_esp += 4; return;
}

void f_004cc91f(void)
{
    FN_ENTER(0x004cc91f);
    /* 004cc91f: mov dword ptr [ebx + 0x67c], 6 */ W32((u32)(r_ebx+0x67cu), 0x6u);
    /* 004cc929: jmp 0x4cc9db */ goto L_004cc9db;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc91f); r_esp += 4; return;
}

void f_004cc92e(void)
{
    FN_ENTER(0x004cc92e);
    /* 004cc92e: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc938: jmp 0x4cc9db */ goto L_004cc9db;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc92e); r_esp += 4; return;
}

void f_004cc93d(void)
{
    FN_ENTER(0x004cc93d);
    /* 004cc93d: mov dword ptr [ebx + 0x67c], 4 */ W32((u32)(r_ebx+0x67cu), 0x4u);
    /* 004cc947: jmp 0x4cc9db */ goto L_004cc9db;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc93d); r_esp += 4; return;
}

void f_004cc94c(void)
{
    FN_ENTER(0x004cc94c);
    /* 004cc94c: mov dword ptr [ebx + 0x67c], 3 */ W32((u32)(r_ebx+0x67cu), 0x3u);
    /* 004cc956: jmp 0x4cc9db */ goto L_004cc9db;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc94c); r_esp += 4; return;
}

void f_004cc95b(void)
{
    FN_ENTER(0x004cc95b);
    /* 004cc95b: mov dword ptr [ebx + 0x67c], 2 */ W32((u32)(r_ebx+0x67cu), 0x2u);
    /* 004cc965: jmp 0x4cc9db */ goto L_004cc9db;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc95b); r_esp += 4; return;
}

void f_004cc987(void)
{
    FN_ENTER(0x004cc987);
    goto L_004cc987;
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc987:; BB(0x004cc987);
    /* 004cc987: mov ecx, 9 */ r_ecx = 0x9u;
    /* 004cc98c: mov edx, 1 */ r_edx = 0x1u;
    /* 004cc991: jmp 0x4cc9ca */ goto L_004cc9ca;
L_004cc9ca:; BB(0x004cc9ca);
    /* 004cc9ca: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9cd: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cc9d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc9d5: jne 0x4cc8b9 */ if (!fZ) goto L_004cc8b9;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc987); r_esp += 4; return;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc987); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc993(void)
{
    FN_ENTER(0x004cc993);
    goto L_004cc993;
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc993:; BB(0x004cc993);
    /* 004cc993: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004cc998: mov edx, 1 */ r_edx = 0x1u;
    /* 004cc99d: jmp 0x4cc9ca */ goto L_004cc9ca;
L_004cc9ca:; BB(0x004cc9ca);
    /* 004cc9ca: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9cd: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cc9d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc9d5: jne 0x4cc8b9 */ if (!fZ) goto L_004cc8b9;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc993); r_esp += 4; return;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc993); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc99f(void)
{
    FN_ENTER(0x004cc99f);
    goto L_004cc99f;
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc99f:; BB(0x004cc99f);
    /* 004cc99f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9a1: mov edx, 1 */ r_edx = 0x1u;
    /* 004cc9a6: jmp 0x4cc9ca */ goto L_004cc9ca;
L_004cc9ca:; BB(0x004cc9ca);
    /* 004cc9ca: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9cd: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cc9d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc9d5: jne 0x4cc8b9 */ if (!fZ) goto L_004cc8b9;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc99f); r_esp += 4; return;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc99f); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc9a8(void)
{
    FN_ENTER(0x004cc9a8);
    goto L_004cc9a8;
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc9a8:; BB(0x004cc9a8);
    /* 004cc9a8: mov ecx, 2 */ r_ecx = 0x2u;
    /* 004cc9ad: jmp 0x4cc9ca */ goto L_004cc9ca;
L_004cc9ca:; BB(0x004cc9ca);
    /* 004cc9ca: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9cd: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cc9d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc9d5: jne 0x4cc8b9 */ if (!fZ) goto L_004cc8b9;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc9a8); r_esp += 4; return;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc9a8); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc9af(void)
{
    FN_ENTER(0x004cc9af);
    goto L_004cc9af;
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc9af:; BB(0x004cc9af);
    /* 004cc9af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9b1: jmp 0x4cc9ca */ goto L_004cc9ca;
L_004cc9ca:; BB(0x004cc9ca);
    /* 004cc9ca: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9cd: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cc9d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc9d5: jne 0x4cc8b9 */ if (!fZ) goto L_004cc8b9;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc9af); r_esp += 4; return;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc9af); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc9b3(void)
{
    FN_ENTER(0x004cc9b3);
    goto L_004cc9b3;
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc9b3:; BB(0x004cc9b3);
    /* 004cc9b3: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 004cc9b8: jmp 0x4cc9ca */ goto L_004cc9ca;
L_004cc9ca:; BB(0x004cc9ca);
    /* 004cc9ca: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9cd: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cc9d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc9d5: jne 0x4cc8b9 */ if (!fZ) goto L_004cc8b9;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc9b3); r_esp += 4; return;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc9b3); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc9ba(void)
{
    FN_ENTER(0x004cc9ba);
    goto L_004cc9ba;
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc9ba:; BB(0x004cc9ba);
    /* 004cc9ba: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004cc9bf: jmp 0x4cc9ca */ goto L_004cc9ca;
L_004cc9ca:; BB(0x004cc9ca);
    /* 004cc9ca: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9cd: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cc9d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc9d5: jne 0x4cc8b9 */ if (!fZ) goto L_004cc8b9;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc9ba); r_esp += 4; return;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc9ba); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc9c1(void)
{
    FN_ENTER(0x004cc9c1);
    goto L_004cc9c1;
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc9c1:; BB(0x004cc9c1);
    /* 004cc9c1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004cc9c6: jmp 0x4cc9ca */ goto L_004cc9ca;
L_004cc9ca:; BB(0x004cc9ca);
    /* 004cc9ca: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9cd: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cc9d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc9d5: jne 0x4cc8b9 */ if (!fZ) goto L_004cc8b9;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc9c1); r_esp += 4; return;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc9c1); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc9c8(void)
{
    FN_ENTER(0x004cc9c8);
    goto L_004cc9c8;
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc9c8:; BB(0x004cc9c8);
    /* 004cc9c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9ca: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9cd: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cc9d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc9d5: jne 0x4cc8b9 */ if (!fZ) goto L_004cc8b9;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc9c8); r_esp += 4; return;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc9c8); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cc9ca(void)
{
    FN_ENTER(0x004cc9ca);
    goto L_004cc9ca;
L_004cc8b9:; BB(0x004cc8b9);
    /* 004cc8b9: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc8bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cc8c1: je 0x4cc8cc */ if (fZ) goto L_004cc8cc;
L_004cc8c3:; BB(0x004cc8c3);
    /* 004cc8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8c5: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cc8ca: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8cc:; BB(0x004cc8cc);
    /* 004cc8cc: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc8cf: jge 0x4cc8da */ if ((fS==fO)) goto L_004cc8da;
L_004cc8d1:; BB(0x004cc8d1);
    /* 004cc8d1: mov eax, ecx */ r_eax = r_ecx;
    /* 004cc8d3: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cc8d8: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc8da:; BB(0x004cc8da);
    /* 004cc8da: lea eax, [ecx - 0x32] */ r_eax = (u32)(r_ecx+0xffffffceu);
    /* 004cc8dd: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cc8e2:; BB(0x004cc8e2);
    /* 004cc8e2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004cc8e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8e8: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc8eb: jne 0x4cc9fa */ if (!fZ) goto L_004cc9fa;
L_004cc8f1:; BB(0x004cc8f1);
    /* 004cc8f1: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cc8fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cc8ff: jmp 0x4cc8e2 */ goto L_004cc8e2;
L_004cc9ca:; BB(0x004cc9ca);
    /* 004cc9ca: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc9cd: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cc9d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc9d5: jne 0x4cc8b9 */ if (!fZ) goto L_004cc8b9;
L_004cc9db:; BB(0x004cc9db);
    /* 004cc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc9dd: ret  */ FN_RET(0x004cc9ca); r_esp += 4; return;
L_004cc9fa:; BB(0x004cc9fa);
    /* 004cc9fa: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc9fd: je 0x4cca10 */ if (fZ) goto L_004cca10;
L_004cc9ff:; BB(0x004cc9ff);
    /* 004cc9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca00: mov dword ptr [ebx + 0x67c], ecx */ W32((u32)(r_ebx+0x67cu), r_ecx);
    /* 004cca06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cca08: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cca0du); f_004c3074();
    /* 004cca0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cca0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cca0f: ret  */ FN_RET(0x004cc9ca); r_esp += 4; return;
L_004cca10:; BB(0x004cca10);
    /* 004cca10: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cca1a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004cca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cca21: jmp 0x4cc8e2 */ goto L_004cc8e2;
}

void f_004cca28(void) /* sub_4CCA28 */
{
    FN_ENTER(0x004cca28);
    /* 004cca28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cca29: mov eax, dword ptr [ecx + 0x43c] */ r_eax = R32((u32)(r_ecx+0x43cu));
    /* 004cca2f: mov edx, dword ptr [ecx + 0x440] */ r_edx = R32((u32)(r_ecx+0x440u));
    /* 004cca35: mov edi, dword ptr [ecx + 0x444] */ r_edi = R32((u32)(r_ecx+0x444u));
    /* 004cca3b: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 004cca41: mov dword ptr [ecx + 0x304], edx */ W32((u32)(r_ecx+0x304u), r_edx);
    /* 004cca47: mov dword ptr [ecx + 0x308], edi */ W32((u32)(r_ecx+0x308u), r_edi);
    /* 004cca4d: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 004cca50: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 004cca53: mov dword ptr [ecx + 0x7c], edi */ W32((u32)(r_ecx+0x7cu), r_edi);
    /* 004cca56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cca57: ret  */ FN_RET(0x004cca28); r_esp += 4; return;
}

void f_004cca58(void) /* sub_4CCA58 */
{
    FN_ENTER(0x004cca58);
    /* 004cca58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cca59: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cca5c: mov edi, ecx */ r_edi = r_ecx;
    /* 004cca5e: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4cca63u); f_004f7c84();
    /* 004cca63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cca65: je 0x4cca76 */ if (fZ) goto L_004cca76;
L_004cca67:; BB(0x004cca67);
    /* 004cca67: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004cca69: mov ecx, edi */ r_ecx = r_edi;
    /* 004cca6b: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x4cca71u); call_ind(t); }
    /* 004cca71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cca74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cca75: ret  */ FN_RET(0x004cca58); r_esp += 4; return;
L_004cca76:; BB(0x004cca76);
    /* 004cca76: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004cca79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca7a: mov ecx, edi */ r_ecx = r_edi;
    /* 004cca7c: call 0x4ccaec */ r_esp -= 4; W32(r_esp, 0x4cca81u); f_004ccaec();
    /* 004cca81: mov ecx, edi */ r_ecx = r_edi;
    /* 004cca83: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x4cca88u); f_008173d0();
    /* 004cca88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cca8a: je 0x4ccacb */ if (fZ) goto L_004ccacb;
L_004cca8c:; BB(0x004cca8c);
    /* 004cca8c: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 004cca91: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cca93: jne 0x4ccaa3 */ if (!fZ) goto L_004ccaa3;
L_004cca95:; BB(0x004cca95);
    /* 004cca95: mov ecx, edi */ r_ecx = r_edi;
    /* 004cca97: call 0x4ccb98 */ r_esp -= 4; W32(r_esp, 0x4cca9cu); f_004ccb98();
    /* 004cca9c: mov ecx, edi */ r_ecx = r_edi;
    /* 004cca9e: call 0x4ccc48 */ r_esp -= 4; W32(r_esp, 0x4ccaa3u); f_004ccc48();
L_004ccaa3:; BB(0x004ccaa3);
    /* 004ccaa3: lea ecx, [edi + 0x6e4] */ r_ecx = (u32)(r_edi+0x6e4u);
    /* 004ccaa9: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x4ccaaeu); f_00577244();
    /* 004ccaae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccab0: jne 0x4ccabf */ if (!fZ) goto L_004ccabf;
L_004ccab2:; BB(0x004ccab2);
    /* 004ccab2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ccab5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccab8: mov ecx, edi */ r_ecx = r_edi;
    /* 004ccaba: call 0x4ccccc */ r_esp -= 4; W32(r_esp, 0x4ccabfu); f_004ccccc();
L_004ccabf:; BB(0x004ccabf);
    /* 004ccabf: mov ecx, edi */ r_ecx = r_edi;
    /* 004ccac1: call 0x4cd004 */ r_esp -= 4; W32(r_esp, 0x4ccac6u); f_004cd004();
    /* 004ccac6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ccac9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ccaca: ret  */ FN_RET(0x004cca58); r_esp += 4; return;
L_004ccacb:; BB(0x004ccacb);
    /* 004ccacb: lea ecx, [edi + 0x6e4] */ r_ecx = (u32)(r_edi+0x6e4u);
    /* 004ccad1: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x4ccad6u); f_00577244();
    /* 004ccad6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccad8: je 0x4ccae7 */ if (fZ) goto L_004ccae7;
L_004ccada:; BB(0x004ccada);
    /* 004ccada: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ccadd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccadf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccae0: mov ecx, edi */ r_ecx = r_edi;
    /* 004ccae2: call 0x4ccccc */ r_esp -= 4; W32(r_esp, 0x4ccae7u); f_004ccccc();
L_004ccae7:; BB(0x004ccae7);
    /* 004ccae7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ccaea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ccaeb: ret  */ FN_RET(0x004cca58); r_esp += 4; return;
}

void f_004ccaec(void) /* sub_4CCAEC */
{
    FN_ENTER(0x004ccaec);
    /* 004ccaec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccaed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccaee: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ccaf1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ccaf3: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 004ccaf7: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004ccafa: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004ccafd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ccb00: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 004ccb02: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004ccb05: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 004ccb08: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004ccb0c: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004ccb0f: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 004ccb12: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 004ccb15: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ccb19: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 004ccb1c: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 004ccb21: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ccb23: jne 0x4ccb2d */ if (!fZ) goto L_004ccb2d;
L_004ccb25:; BB(0x004ccb25);
    /* 004ccb25: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ccb28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ccb29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccb2a: ret 4 */ FN_RET(0x004ccaec); r_esp += 8; return;
L_004ccb2d:; BB(0x004ccb2d);
    /* 004ccb2d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ccb2f: call 0x4ccb80 */ r_esp -= 4; W32(r_esp, 0x4ccb34u); f_004ccb80();
    /* 004ccb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccb36: jne 0x4ccb49 */ if (!fZ) goto L_004ccb49;
L_004ccb38:; BB(0x004ccb38);
    /* 004ccb38: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 004ccb3e: fcomp dword ptr [0x90837c] */ fx_compare(ST(0), R_F32((u32)(0x90837cu))); FPOP();
    /* 004ccb44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ccb46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ccb47: jbe 0x4ccb51 */ if ((fC||fZ)) goto L_004ccb51;
L_004ccb49:; BB(0x004ccb49);
    /* 004ccb49: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ccb4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ccb4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccb4e: ret 4 */ FN_RET(0x004ccaec); r_esp += 8; return;
L_004ccb51:; BB(0x004ccb51);
    /* 004ccb51: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004ccb54: fadd dword ptr [0x908378] */ ST(0) = ST(0) + R_F32((u32)(0x908378u));
    /* 004ccb5a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004ccb5e: fadd dword ptr [0x908374] */ ST(0) = ST(0) + R_F32((u32)(0x908374u));
    /* 004ccb64: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004ccb68: fadd dword ptr [0x908370] */ ST(0) = ST(0) + R_F32((u32)(0x908370u));
    /* 004ccb6e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ccb70: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 004ccb72: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 004ccb75: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 004ccb78: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ccb7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ccb7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccb7d: ret 4 */ FN_RET(0x004ccaec); r_esp += 8; return;
}

void f_004ccb80(void) /* sub_4CCB80 */
{
    FN_ENTER(0x004ccb80);
    /* 004ccb80: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004ccb87: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ccb8a: je 0x4ccb92 */ if (fZ) goto L_004ccb92;
L_004ccb8c:; BB(0x004ccb8c);
    /* 004ccb8c: mov eax, 1 */ r_eax = 0x1u;
    /* 004ccb91: ret  */ FN_RET(0x004ccb80); r_esp += 4; return;
L_004ccb92:; BB(0x004ccb92);
    /* 004ccb92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ccb94: ret  */ FN_RET(0x004ccb80); r_esp += 4; return;
}

void f_004ccb98(void) /* sub_4CCB98 */
{
    FN_ENTER(0x004ccb98);
    /* 004ccb98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb9a: mov edi, ecx */ r_edi = r_ecx;
    /* 004ccb9c: mov eax, dword ptr [0xa485e8] */ r_eax = R32((u32)(0xa485e8u));
    /* 004ccba1: mov ebp, dword ptr [edi + 0x34] */ r_ebp = R32((u32)(r_edi+0x34u));
    /* 004ccba4: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 004ccba7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ccba9: lea edx, [edi + 0x3f4] */ r_edx = (u32)(r_edi+0x3f4u);
    /* 004ccbaf: mov ecx, 0x4c0164 */ r_ecx = 0x4c0164u;
    /* 004ccbb4: mov dword ptr [0xa4865c], eax */ W32((u32)(0xa4865cu), r_eax);
    /* 004ccbb9: mov dword ptr [0xa48624], edx */ W32((u32)(0xa48624u), r_edx);
    /* 004ccbbf: mov dword ptr [0xa48620], eax */ W32((u32)(0xa48620u), r_eax);
    /* 004ccbc4: lea eax, [edi + 0x43c] */ r_eax = (u32)(r_edi+0x43cu);
    /* 004ccbca: mov dword ptr [0xa4861c], eax */ W32((u32)(0xa4861cu), r_eax);
    /* 004ccbcf: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004ccbd5: mov dword ptr [0xa48618], eax */ W32((u32)(0xa48618u), r_eax);
    /* 004ccbda: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4ccbdfu); f_0082fac4();
    /* 004ccbdf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4ccbe4u); f_0082d7b0();
    /* 004ccbe4: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4ccbe9u); f_0082fa9c();
    /* 004ccbe9: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 004ccbec: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4ccbf1u); f_0082d838();
    /* 004ccbf1: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 004ccbf4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ccbf6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4ccbfbu); f_0082d8bc();
    /* 004ccbfb: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 004ccbfe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ccc00: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4ccc05u); f_0082e9e4();
    /* 004ccc05: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 004ccc08: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ccc0a: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4ccc0fu); f_00830c04();
    /* 004ccc0f: lea ecx, [edi + 0x68] */ r_ecx = (u32)(r_edi+0x68u);
    /* 004ccc12: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4ccc17u); f_00831290();
    /* 004ccc17: mov ecx, edi */ r_ecx = r_edi;
    /* 004ccc19: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4ccc1eu); f_007aabd8();
    /* 004ccc1e: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 004ccc21: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 004ccc27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc28: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ccc2b: call 0x830590 */ r_esp -= 4; W32(r_esp, 0x4ccc30u); f_00830590();
    /* 004ccc30: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4ccc35u); f_0082faac();
    /* 004ccc35: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4ccc3au); f_0082da80();
    /* 004ccc3a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ccc3c: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4ccc41u); f_0082fac4();
    /* 004ccc41: mov dword ptr [edi + 0x34], ebp */ W32((u32)(r_edi+0x34u), r_ebp);
    /* 004ccc44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccc45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ccc46: ret  */ FN_RET(0x004ccb98); r_esp += 4; return;
}

void f_004ccc48(void) /* sub_4CCC48 */
{
    FN_ENTER(0x004ccc48);
    /* 004ccc48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc49: mov edi, ecx */ r_edi = r_ecx;
    /* 004ccc4b: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 004ccc51: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 004ccc57: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 004ccc5d: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 004ccc63: mov eax, dword ptr [edi + 0x3fc] */ r_eax = R32((u32)(r_edi+0x3fcu));
    /* 004ccc69: mov dword ptr [edi + 0x420], eax */ W32((u32)(r_edi+0x420u), r_eax);
    /* 004ccc6f: mov eax, dword ptr [edi + 0x400] */ r_eax = R32((u32)(r_edi+0x400u));
    /* 004ccc75: mov dword ptr [edi + 0x424], eax */ W32((u32)(r_edi+0x424u), r_eax);
    /* 004ccc7b: mov eax, dword ptr [edi + 0x404] */ r_eax = R32((u32)(r_edi+0x404u));
    /* 004ccc81: mov dword ptr [edi + 0x428], eax */ W32((u32)(r_edi+0x428u), r_eax);
    /* 004ccc87: mov eax, dword ptr [edi + 0x408] */ r_eax = R32((u32)(r_edi+0x408u));
    /* 004ccc8d: mov dword ptr [edi + 0x42c], eax */ W32((u32)(r_edi+0x42cu), r_eax);
    /* 004ccc93: lea ecx, [edi + 0x424] */ r_ecx = (u32)(r_edi+0x424u);
    /* 004ccc99: lea edx, [edi + 0x418] */ r_edx = (u32)(r_edi+0x418u);
    /* 004ccc9f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4ccca4u); f_0082f9c4();
    /* 004ccca4: mov eax, dword ptr [edi + 0x40c] */ r_eax = R32((u32)(r_edi+0x40cu));
    /* 004cccaa: mov edx, dword ptr [edi + 0x410] */ r_edx = R32((u32)(r_edi+0x410u));
    /* 004cccb0: mov dword ptr [edi + 0x430], eax */ W32((u32)(r_edi+0x430u), r_eax);
    /* 004cccb6: mov eax, dword ptr [edi + 0x414] */ r_eax = R32((u32)(r_edi+0x414u));
    /* 004cccbc: mov dword ptr [edi + 0x434], edx */ W32((u32)(r_edi+0x434u), r_edx);
    /* 004cccc2: mov dword ptr [edi + 0x438], eax */ W32((u32)(r_edi+0x438u), r_eax);
    /* 004cccc8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cccc9: ret  */ FN_RET(0x004ccc48); r_esp += 4; return;
}

void f_004ccccc(void) /* sub_4CCCCC */
{
    FN_ENTER(0x004ccccc);
    /* 004ccccc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ccccd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cccce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccccf: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cccd2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cccd4: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004cccd7: fcomp dword ptr [0x9086d8] */ fx_compare(ST(0), R_F32((u32)(0x9086d8u))); FPOP();
    /* 004cccdd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004cccdf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ccce0: jbe 0x4ccd12 */ if ((fC||fZ)) goto L_004ccd12;
L_004ccce2:; BB(0x004ccce2);
    /* 004ccce2: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004ccce9: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cccec: je 0x4ccd1b */ if (fZ) goto L_004ccd1b;
L_004cccee:; BB(0x004cccee);
    /* 004cccee: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cccf1: je 0x4ccd1b */ if (fZ) goto L_004ccd1b;
L_004cccf3:; BB(0x004cccf3);
    /* 004cccf3: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cccf6: je 0x4ccd1b */ if (fZ) goto L_004ccd1b;
L_004cccf8:; BB(0x004cccf8);
    /* 004cccf8: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cccfd: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd02: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 004ccd05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd06: call 0x4d45e0 */ r_esp -= 4; W32(r_esp, 0x4ccd0bu); f_004d45e0();
    /* 004ccd0b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ccd0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccd10: jne 0x4ccd1b */ if (!fZ) goto L_004ccd1b;
L_004ccd12:; BB(0x004ccd12);
    /* 004ccd12: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ccd15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ccd16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccd17: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ccd18: ret 8 */ FN_RET(0x004ccccc); r_esp += 12; return;
L_004ccd1b:; BB(0x004ccd1b);
    /* 004ccd1b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004ccd1e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4ccd23u); f_00829cc8();
    /* 004ccd23: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x4ccd28u); f_00520d08();
    /* 004ccd28: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004ccd2d: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 004ccd32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd34: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x4ccd39u); f_00830b08();
    /* 004ccd39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ccd3a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004ccd3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccd41: je 0x4cceff */ if (fZ) goto L_004cceff;
L_004ccd47:; BB(0x004ccd47);
    /* 004ccd47: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004ccd4e: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccd51: je 0x4cceff */ if (fZ) goto L_004cceff;
L_004ccd57:; BB(0x004ccd57);
    /* 004ccd57: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccd5a: je 0x4cceff */ if (fZ) goto L_004cceff;
L_004ccd60:; BB(0x004ccd60);
    /* 004ccd60: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccd63: je 0x4cceff */ if (fZ) goto L_004cceff;
L_004ccd69:; BB(0x004ccd69);
    /* 004ccd69: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccd6c: je 0x4ccece */ if (fZ) goto L_004ccece;
L_004ccd72:; BB(0x004ccd72);
    /* 004ccd72: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 004ccd78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccd7a: jne 0x4cceff */ if (!fZ) goto L_004cceff;
L_004ccd80:; BB(0x004ccd80);
    /* 004ccd80: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd82: call 0x4d30d4 */ r_esp -= 4; W32(r_esp, 0x4ccd87u); f_004d30d4();
    /* 004ccd87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd88: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x4ccd8du); f_007b4d18();
    /* 004ccd8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ccd90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccd92: je 0x4cceff */ if (fZ) goto L_004cceff;
L_004ccd98:; BB(0x004ccd98);
    /* 004ccd98: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 004ccd9e: mov ebp, dword ptr [edi + 0x178] */ r_ebp = R32((u32)(r_edi+0x178u));
    /* 004ccda4: mov edx, dword ptr [edi + 0x180] */ r_edx = R32((u32)(r_edi+0x180u));
    /* 004ccdaa: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004ccdae: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004ccdb2: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004ccdb5: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004ccdb9: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004ccdbc: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004ccdbf: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004ccdc7: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004ccdcb: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004ccdcf: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 004ccdd3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004ccdd7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4ccddcu); f_0082f9c4();
    /* 004ccddc: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004ccde4: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004ccde8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccde9: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4ccdeeu); f_007828e4();
    /* 004ccdee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ccdef: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004ccdf3: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004ccdf7: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 004ccdfb: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 004ccdff: fstp dword ptr [0xa485fc] */ W_F32((u32)(0xa485fcu), ST(0)); FPOP();
    /* 004cce05: mov dword ptr [0xa4860c], eax */ W32((u32)(0xa4860cu), r_eax);
    /* 004cce0a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004cce0e: mov dword ptr [0xa48610], edx */ W32((u32)(0xa48610u), r_edx);
    /* 004cce14: mov dword ptr [0xa48614], ebp */ W32((u32)(0xa48614u), r_ebp);
    /* 004cce1a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004cce1c: mov dword ptr [0xa48600], edi */ W32((u32)(0xa48600u), r_edi);
    /* 004cce22: mov dword ptr [0xa48604], eax */ W32((u32)(0xa48604u), r_eax);
    /* 004cce27: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004cce2b: mov dword ptr [0xa48608], eax */ W32((u32)(0xa48608u), r_eax);
L_004cce30:; BB(0x004cce30);
    /* 004cce30: mov eax, dword ptr [ebp + 0x907fc4] */ r_eax = R32((u32)(r_ebp+0x907fc4u));
    /* 004cce36: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004cce3a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cce3c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cce3e: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004cce41: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cce43: mov edi, dword ptr [edx + ebx + 0x43c] */ r_edi = R32((u32)(r_edx+r_ebx+0x43cu));
    /* 004cce4a: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 004cce4e: mov eax, dword ptr [edx + ebx + 0x440] */ r_eax = R32((u32)(r_edx+r_ebx+0x440u));
    /* 004cce55: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004cce59: mov eax, dword ptr [edx + ebx + 0x444] */ r_eax = R32((u32)(r_edx+r_ebx+0x444u));
    /* 004cce60: mov edx, 0xa4860c */ r_edx = 0xa4860cu;
    /* 004cce65: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 004cce6d: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004cce71: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4cce76u); f_0082f9c4();
    /* 004cce76: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004cce7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cce7b: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4cce80u); f_007828e4();
    /* 004cce80: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004cce84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cce87: fld dword ptr [0x908360] */ FPUSH(R_F32((u32)(0x908360u)));
    /* 004cce8d: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004cce90: fcomp dword ptr [0xa485fc] */ fx_compare(ST(0), R_F32((u32)(0xa485fcu))); FPOP();
    /* 004cce96: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004cce98: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004cce99: jae 0x4ccef3 */ if (!fC) goto L_004ccef3;
L_004cce9b:; BB(0x004cce9b);
    /* 004cce9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cce9c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004ccea0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004ccea2: fadd dword ptr [0x90835c] */ ST(0) = ST(0) + R_F32((u32)(0x90835cu));
    /* 004ccea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004cceab: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x4cceb0u); f_0082f9f8();
    /* 004cceb0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004cceb3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004cceb5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004cceb8: mov edx, 0xa48600 */ r_edx = 0xa48600u;
    /* 004ccebd: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004ccec1: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x4ccec6u); f_0082f9e0();
    /* 004ccec6: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 004ccec9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ccecb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ccecc: jb 0x4ccef3 */ if (fC) goto L_004ccef3;
L_004ccece:; BB(0x004ccece);
    /* 004ccece: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 004cced2: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 004cced5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cced7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004cceda: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ccedc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ccede: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004ccee0: lea edi, [ebx + edx] */ r_edi = (u32)(r_ebx+r_edx);
    /* 004ccee3: lea ebp, [ebx + edx + 0x6e4] */ r_ebp = (u32)(r_ebx+r_edx+0x6e4u);
    /* 004cceea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cceec: call 0x577234 */ r_esp -= 4; W32(r_esp, 0x4ccef1u); f_00577234();
    /* 004ccef1: jmp 0x4ccf22 */ goto L_004ccf22;
L_004ccef3:; BB(0x004ccef3);
    /* 004ccef3: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ccef6: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ccef9: jl 0x4cce30 */ if ((fS!=fO)) goto L_004cce30;
L_004cceff:; BB(0x004cceff);
    /* 004cceff: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 004ccf03: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 004ccf06: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ccf08: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004ccf0b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ccf0d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ccf0f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004ccf11: lea edi, [ebx + edx] */ r_edi = (u32)(r_ebx+r_edx);
    /* 004ccf14: lea ebp, [ebx + edx + 0x6e4] */ r_ebp = (u32)(r_ebx+r_edx+0x6e4u);
    /* 004ccf1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ccf1d: call 0x57723c */ r_esp -= 4; W32(r_esp, 0x4ccf22u); f_0057723c();
L_004ccf22:; BB(0x004ccf22);
    /* 004ccf22: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ccf24: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x4ccf29u); f_00577244();
    /* 004ccf29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccf2b: je 0x4ccf38 */ if (fZ) goto L_004ccf38;
L_004ccf2d:; BB(0x004ccf2d);
    /* 004ccf2d: mov eax, dword ptr [edi + 0x6e4] */ r_eax = R32((u32)(r_edi+0x6e4u));
    /* 004ccf33: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ccf35: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4ccf38u); call_ind(t); }
L_004ccf38:; BB(0x004ccf38);
    /* 004ccf38: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4ccf3du); f_0082d7b0();
    /* 004ccf3d: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 004ccf41: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4ccf46u); f_0082d838();
    /* 004ccf46: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 004ccf49: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ccf4b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4ccf50u); f_0082d8bc();
    /* 004ccf50: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 004ccf53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ccf55: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4ccf5au); f_0082e9e4();
    /* 004ccf5a: mov edx, dword ptr [ebx + 0x64] */ r_edx = R32((u32)(r_ebx+0x64u));
    /* 004ccf5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ccf5f: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4ccf64u); f_00830c04();
    /* 004ccf64: lea ecx, [ebx + 0x68] */ r_ecx = (u32)(r_ebx+0x68u);
    /* 004ccf67: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4ccf6cu); f_00831290();
    /* 004ccf6c: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x4ccf71u); f_00578b38();
    /* 004ccf71: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004ccf77: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccf7c: je 0x4ccf8f */ if (fZ) goto L_004ccf8f;
L_004ccf7e:; BB(0x004ccf7e);
    /* 004ccf7e: mov eax, 3 */ r_eax = 0x3u;
    /* 004ccf83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf87: call 0x7a9570 */ r_esp -= 4; W32(r_esp, 0x4ccf8cu); f_007a9570();
    /* 004ccf8c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ccf8f:; BB(0x004ccf8f);
    /* 004ccf8f: call 0x4ce850 */ r_esp -= 4; W32(r_esp, 0x4ccf94u); f_004ce850();
    /* 004ccf94: mov edx, dword ptr [0xa485c8] */ r_edx = R32((u32)(0xa485c8u));
    /* 004ccf9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccf9c: je 0x4ccfac */ if (fZ) goto L_004ccfac;
L_004ccf9e:; BB(0x004ccf9e);
    /* 004ccf9e: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 004ccfa4: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004ccfa7: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 004ccfaa: jmp 0x4ccfb8 */ goto L_004ccfb8;
L_004ccfac:; BB(0x004ccfac);
    /* 004ccfac: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 004ccfb2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004ccfb5: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
L_004ccfb8:; BB(0x004ccfb8);
    /* 004ccfb8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ccfba: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x4ccfbfu); f_007aa668();
    /* 004ccfbf: call 0x7a95ec */ r_esp -= 4; W32(r_esp, 0x4ccfc4u); f_007a95ec();
    /* 004ccfc4: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4ccfc9u); f_0082dab0();
    /* 004ccfc9: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 004ccfcf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ccfd4u); f_0061cdb0();
    /* 004ccfd4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4ccfd9u); f_0082da80();
    /* 004ccfd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfdb: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfe0: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x4ccfe5u); f_0082d6fc();
    /* 004ccfe5: push 0xbf */ { u32 v = 0xbfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfea: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x4ccfefu); f_00830b08();
    /* 004ccfef: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 004ccff4: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004ccff9: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ccffc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ccffd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccffe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ccfff: ret 8 */ FN_RET(0x004ccccc); r_esp += 12; return;
}

