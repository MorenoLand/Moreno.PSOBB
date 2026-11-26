#include "protos.h"

void f_007ad650(void) /* sub_7AD650 */
{
    FN_ENTER(0x007ad650);
    /* 007ad650: mov dword ptr [0xaaba04], 0x3f800000 */ W32((u32)(0xaaba04u), 0x3f800000u);
    /* 007ad65a: mov dword ptr [0xaaba08], 0x41000000 */ W32((u32)(0xaaba08u), 0x41000000u);
    /* 007ad664: mov dword ptr [0xaaba0c], 0x3fc00000 */ W32((u32)(0xaaba0cu), 0x3fc00000u);
    /* 007ad66e: ret  */ FN_RET(0x007ad650); r_esp += 4; return;
}

void f_007ad670(void) /* sub_7AD670 */
{
    FN_ENTER(0x007ad670);
    /* 007ad670: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007ad672: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x7ad675u); call_ind(t); }
    /* 007ad675: ret  */ FN_RET(0x007ad670); r_esp += 4; return;
}

void f_007ad678(void) /* sub_7AD678 */
{
    FN_ENTER(0x007ad678);
    /* 007ad678: mov eax, dword ptr [0xaac440] */ r_eax = R32((u32)(0xaac440u));
    /* 007ad67d: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007ad680: mov dword ptr [0xaac440], eax */ W32((u32)(0xaac440u), r_eax);
    /* 007ad685: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ad687: mov dword ptr [0xaac46c], edx */ W32((u32)(0xaac46cu), r_edx);
    /* 007ad68d: mov dword ptr [0xaac470], edx */ W32((u32)(0xaac470u), r_edx);
    /* 007ad693: call 0x7ad69c */ r_esp -= 4; W32(r_esp, 0x7ad698u); f_007ad69c();
    /* 007ad698: ret  */ FN_RET(0x007ad678); r_esp += 4; return;
}

void f_007ad69c(void) /* sub_7AD69C */
{
    FN_ENTER(0x007ad69c);
    /* 007ad69c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ad69d: mov eax, dword ptr [0xaac440] */ r_eax = R32((u32)(0xaac440u));
    /* 007ad6a2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007ad6a5: mov dword ptr [0xaac440], eax */ W32((u32)(0xaac440u), r_eax);
    /* 007ad6aa: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x7ad6afu); f_007083d4();
    /* 007ad6af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad6b1: jne 0x7ad6c3 */ if (!fZ) goto L_007ad6c3;
L_007ad6b3:; BB(0x007ad6b3);
    /* 007ad6b3: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7ad6b8u); f_006dc358();
    /* 007ad6b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ad6ba: je 0x7ad6c3 */ if (fZ) goto L_007ad6c3;
L_007ad6bc:; BB(0x007ad6bc);
    /* 007ad6bc: mov eax, 4 */ r_eax = 0x4u;
    /* 007ad6c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ad6c2: ret  */ FN_RET(0x007ad69c); r_esp += 4; return;
L_007ad6c3:; BB(0x007ad6c3);
    /* 007ad6c3: mov eax, dword ptr [0x97dc10] */ r_eax = R32((u32)(0x97dc10u));
    /* 007ad6c8: mov dword ptr [0xaac444], 4 */ W32((u32)(0xaac444u), 0x4u);
    /* 007ad6d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ad6d4: mov dword ptr [0xaac448], eax */ W32((u32)(0xaac448u), r_eax);
    /* 007ad6d9: push 0xaac444 */ { u32 v = 0xaac444u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad6de: mov dword ptr [0xaac44c], edx */ W32((u32)(0xaac44cu), r_edx);
    /* 007ad6e4: mov dword ptr [0xaac450], edx */ W32((u32)(0xaac450u), r_edx);
    /* 007ad6ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007ad6ec: call 0x83f4d0 */ r_esp -= 4; W32(r_esp, 0x7ad6f1u); f_0083f4d0();
    /* 007ad6f1: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 007ad6f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ad6f5: push 0x97dc14 */ { u32 v = 0x97dc14u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad6fa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7ad6ffu); f_0061cdb0();
    /* 007ad6ff: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ad702: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ad704: jne 0x7ad72d */ if (!fZ) goto L_007ad72d;
L_007ad706:; BB(0x007ad706);
    /* 007ad706: mov eax, dword ptr [0xaac440] */ r_eax = R32((u32)(0xaac440u));
    /* 007ad70b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007ad70e: mov dword ptr [0xaac440], eax */ W32((u32)(0xaac440u), r_eax);
    /* 007ad713: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ad715: mov dword ptr [0xaac460], edx */ W32((u32)(0xaac460u), r_edx);
    /* 007ad71b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ad71c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ad71d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ad71e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7ad723u); f_006dc358();
    /* 007ad723: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ad726: call 0x7ad788 */ r_esp -= 4; W32(r_esp, 0x7ad72bu); f_007ad788();
    /* 007ad72b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ad72c: ret  */ FN_RET(0x007ad69c); r_esp += 4; return;
L_007ad72d:; BB(0x007ad72d);
    /* 007ad72d: mov eax, 0xd */ r_eax = 0xdu;
    /* 007ad732: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ad733: ret  */ FN_RET(0x007ad69c); r_esp += 4; return;
}

void f_007ad734(void) /* sub_7AD734 */
{
    FN_ENTER(0x007ad734);
    /* 007ad734: call 0x7ad74c */ r_esp -= 4; W32(r_esp, 0x7ad739u); f_007ad74c();
    /* 007ad739: mov eax, dword ptr [0xaac440] */ r_eax = R32((u32)(0xaac440u));
    /* 007ad73e: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ad740: je 0x7ad74a */ if (fZ) goto L_007ad74a;
L_007ad742:; BB(0x007ad742);
    /* 007ad742: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ad745: mov dword ptr [0xaac440], eax */ W32((u32)(0xaac440u), r_eax);
L_007ad74a:; BB(0x007ad74a);
    /* 007ad74a: ret  */ FN_RET(0x007ad734); r_esp += 4; return;
}

void f_007ad74c(void) /* sub_7AD74C */
{
    FN_ENTER(0x007ad74c);
    /* 007ad74c: mov eax, dword ptr [0xaac440] */ r_eax = R32((u32)(0xaac440u));
    /* 007ad751: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007ad754: mov dword ptr [0xaac440], eax */ W32((u32)(0xaac440u), r_eax);
    /* 007ad759: call 0x7ad760 */ r_esp -= 4; W32(r_esp, 0x7ad75eu); f_007ad760();
    /* 007ad75e: ret  */ FN_RET(0x007ad74c); r_esp += 4; return;
}

void f_007ad760(void) /* sub_7AD760 */
{
    FN_ENTER(0x007ad760);
    /* 007ad760: mov eax, dword ptr [0xaac470] */ r_eax = R32((u32)(0xaac470u));
    /* 007ad765: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ad767: je 0x7ad77d */ if (fZ) goto L_007ad77d;
L_007ad769:; BB(0x007ad769);
    /* 007ad769: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7ad76eu); f_006dc358();
    /* 007ad76e: call 0x8432d0 */ r_esp -= 4; W32(r_esp, 0x7ad773u); f_008432d0();
    /* 007ad773: mov dword ptr [0xaac470], 0 */ W32((u32)(0xaac470u), 0x0u);
L_007ad77d:; BB(0x007ad77d);
    /* 007ad77d: ret  */ FN_RET(0x007ad760); r_esp += 4; return;
}

void f_007ad780(void) /* sub_7AD780 */
{
    FN_ENTER(0x007ad780);
    /* 007ad780: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x7ad785u); f_007083d4();
    /* 007ad785: ret  */ FN_RET(0x007ad780); r_esp += 4; return;
}

void f_007ad788(void) /* sub_7AD788 */
{
    FN_ENTER(0x007ad788);
    /* 007ad788: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ad789: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ad78c: call 0x843644 */ r_esp -= 4; W32(r_esp, 0x7ad791u); f_00843644();
    /* 007ad791: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007ad794: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad796: jne 0x7ad7fe */ if (!fZ) goto L_007ad7fe;
L_007ad798:; BB(0x007ad798);
    /* 007ad798: mov eax, dword ptr [0xaabe58] */ r_eax = R32((u32)(0xaabe58u));
    /* 007ad79d: mov dword ptr [0xaac470], 1 */ W32((u32)(0xaac470u), 0x1u);
    /* 007ad7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad7a9: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 007ad7b0: je 0x7ad7b8 */ if (fZ) goto L_007ad7b8;
L_007ad7b2:; BB(0x007ad7b2);
    /* 007ad7b2: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007ad7b6: jmp 0x7ad7c0 */ goto L_007ad7c0;
L_007ad7b8:; BB(0x007ad7b8);
    /* 007ad7b8: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
L_007ad7c0:; BB(0x007ad7c0);
    /* 007ad7c0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007ad7c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ad7c4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7ad7c9u); f_006dc358();
    /* 007ad7c9: mov ebp, eax */ r_ebp = r_eax;
    /* 007ad7cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ad7ce: mov edx, dword ptr [0xaabe5c] */ r_edx = R32((u32)(0xaabe5cu));
    /* 007ad7d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad7d6: je 0x7ad7de */ if (fZ) goto L_007ad7de;
L_007ad7d8:; BB(0x007ad7d8);
    /* 007ad7d8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007ad7dc: jmp 0x7ad7e6 */ goto L_007ad7e6;
L_007ad7de:; BB(0x007ad7de);
    /* 007ad7de: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
L_007ad7e6:; BB(0x007ad7e6);
    /* 007ad7e6: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007ad7e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ad7ea: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7ad7efu); f_006dc358();
    /* 007ad7ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ad7f0: movsx edx, bp */ r_edx = (u32)(i32)(i16)(u16)r_ebp;
    /* 007ad7f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad7f5: je 0x7ad808 */ if (fZ) goto L_007ad808;
L_007ad7f7:; BB(0x007ad7f7);
    /* 007ad7f7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007ad7fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad7fc: je 0x7ad808 */ if (fZ) goto L_007ad808;
L_007ad7fe:; BB(0x007ad7fe);
    /* 007ad7fe: mov eax, 0xb */ r_eax = 0xbu;
    /* 007ad803: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ad806: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ad807: ret  */ FN_RET(0x007ad788); r_esp += 4; return;
L_007ad808:; BB(0x007ad808);
    /* 007ad808: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ad80a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ad80d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ad80e: ret  */ FN_RET(0x007ad788); r_esp += 4; return;
}

void f_007ad810(void) /* sub_7AD810 */
{
    FN_ENTER(0x007ad810);
    /* 007ad810: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 007ad815: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad817: push 0xaaba20 */ { u32 v = 0xaaba20u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad81c: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7ad821u); f_0086b688();
    /* 007ad821: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 007ad826: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad828: push 0xaabb8c */ { u32 v = 0xaabb8cu; r_esp -= 4; W32(r_esp, v); }
    /* 007ad82d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7ad832u); f_0086b688();
    /* 007ad832: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 007ad837: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad839: push 0xaabcf8 */ { u32 v = 0xaabcf8u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad83e: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7ad843u); f_0086b688();
    /* 007ad843: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ad846: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ad848: mov dword ptr [0xaabb88], eax */ W32((u32)(0xaabb88u), r_eax);
    /* 007ad84d: mov dword ptr [0xaabcf4], eax */ W32((u32)(0xaabcf4u), r_eax);
    /* 007ad852: mov dword ptr [0xaabe60], eax */ W32((u32)(0xaabe60u), r_eax);
    /* 007ad857: mov dword ptr [0xaac464], eax */ W32((u32)(0xaac464u), r_eax);
    /* 007ad85c: mov dword ptr [0xaac4bc], eax */ W32((u32)(0xaac4bcu), r_eax);
    /* 007ad861: mov dword ptr [0xaac440], eax */ W32((u32)(0xaac440u), r_eax);
    /* 007ad866: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x7ad86bu); f_007083d4();
    /* 007ad86b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad86d: je 0x7ad879 */ if (fZ) goto L_007ad879;
L_007ad86f:; BB(0x007ad86f);
    /* 007ad86f: mov dword ptr [0xaac4bc], 1 */ W32((u32)(0xaac4bcu), 0x1u);
L_007ad879:; BB(0x007ad879);
    /* 007ad879: mov edx, 0xaac494 */ r_edx = 0xaac494u;
    /* 007ad87e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ad880: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007ad882: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007ad885: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007ad888: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007ad88b: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007ad88e: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007ad891: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007ad894: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007ad897: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 007ad899: push 0xaabd18 */ { u32 v = 0xaabd18u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad89e: push 0xaac494 */ { u32 v = 0xaac494u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad8a3: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7ad8a8u); f_00858900();
    /* 007ad8a8: mov edx, 0xaac474 */ r_edx = 0xaac474u;
    /* 007ad8ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ad8af: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007ad8b1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007ad8b4: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007ad8b7: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007ad8ba: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007ad8bd: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007ad8c0: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007ad8c3: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007ad8c6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 007ad8c8: push 0xaaba40 */ { u32 v = 0xaaba40u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad8cd: push 0xaac474 */ { u32 v = 0xaac474u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad8d2: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7ad8d7u); f_00858900();
    /* 007ad8d7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ad8da: ret  */ FN_RET(0x007ad810); r_esp += 4; return;
}

void f_007ad910(void) /* sub_7AD910 */
{
    FN_ENTER(0x007ad910);
    /* 007ad910: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ad911: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007ad913: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ad915: call 0x7ad934 */ r_esp -= 4; W32(r_esp, 0x7ad91au); f_007ad934();
    /* 007ad91a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007ad91e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ad920: jne 0x7ad926 */ if (!fZ) goto L_007ad926;
L_007ad922:; BB(0x007ad922);
    /* 007ad922: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ad923: ret 4 */ FN_RET(0x007ad910); r_esp += 8; return;
L_007ad926:; BB(0x007ad926);
    /* 007ad926: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ad927: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7ad92cu); f_00857e98();
    /* 007ad92c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ad92d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ad92e: ret 4 */ FN_RET(0x007ad910); r_esp += 8; return;
}

void f_007ad934(void) /* sub_7AD934 */
{
    FN_ENTER(0x007ad934);
    /* 007ad934: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ad935: mov edi, ecx */ r_edi = r_ecx;
    /* 007ad937: mov ecx, dword ptr [edi + 0xa8] */ r_ecx = R32((u32)(r_edi+0xa8u));
    /* 007ad93d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ad93f: je 0x7ad963 */ if (fZ) goto L_007ad963;
L_007ad941:; BB(0x007ad941);
    /* 007ad941: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x7ad946u); f_007b9c8c();
    /* 007ad946: mov edx, dword ptr [edi + 0xa8] */ r_edx = R32((u32)(r_edi+0xa8u));
    /* 007ad94c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007ad950: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ad955: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007ad959: mov dword ptr [edi + 0xa8], 0 */ W32((u32)(r_edi+0xa8u), 0x0u);
L_007ad963:; BB(0x007ad963);
    /* 007ad963: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ad964: ret  */ FN_RET(0x007ad934); r_esp += 4; return;
}

void f_007ad968(void) /* sub_7AD968 */
{
    FN_ENTER(0x007ad968);
    /* 007ad968: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ad969: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007ad96b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ad96d: call 0x7ad98c */ r_esp -= 4; W32(r_esp, 0x7ad972u); f_007ad98c();
    /* 007ad972: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007ad976: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ad978: jne 0x7ad97e */ if (!fZ) goto L_007ad97e;
L_007ad97a:; BB(0x007ad97a);
    /* 007ad97a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ad97b: ret 4 */ FN_RET(0x007ad968); r_esp += 8; return;
L_007ad97e:; BB(0x007ad97e);
    /* 007ad97e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ad97f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7ad984u); f_005c2f74();
    /* 007ad984: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ad985: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ad986: ret 4 */ FN_RET(0x007ad968); r_esp += 8; return;
}

void f_007ad98c(void) /* sub_7AD98C */
{
    FN_ENTER(0x007ad98c);
    /* 007ad98c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ad98d: mov ebp, esp */ r_ebp = r_esp;
    /* 007ad98f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007ad991: push 0x8f5df4 */ { u32 v = 0x8f5df4u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad996: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007ad99c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ad99d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007ad9a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ad9a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007ad9aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007ad9ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007ad9b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007ad9b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007ad9b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007ad9bd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007ad9c0: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 007ad9c3: mov dword ptr [edx], 0xb46578 */ W32((u32)(r_edx), 0xb46578u);
    /* 007ad9c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad9cb: je 0x7ad9e0 */ if (fZ) goto L_007ad9e0;
L_007ad9cd:; BB(0x007ad9cd);
    /* 007ad9cd: je 0x7ad9d9 */ if (fZ) goto L_007ad9d9;
L_007ad9cf:; BB(0x007ad9cf);
    /* 007ad9cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad9d1: call 0x7ad910 */ r_esp -= 4; W32(r_esp, 0x7ad9d6u); f_007ad910();
    /* 007ad9d6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_007ad9d9:; BB(0x007ad9d9);
    /* 007ad9d9: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
L_007ad9e0:; BB(0x007ad9e0);
    /* 007ad9e0: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 007ad9e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad9e5: je 0x7ada1b */ if (fZ) goto L_007ada1b;
L_007ad9e7:; BB(0x007ad9e7);
    /* 007ad9e7: movzx eax, word ptr [eax + 0x8a] */ r_eax = (u32)R16((u32)(r_eax+0x8au));
    /* 007ad9ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ad9ef: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7ad9f4u); f_0068d5a8();
    /* 007ad9f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ad9f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad9f7: je 0x7ada00 */ if (fZ) goto L_007ada00;
L_007ad9f9:; BB(0x007ad9f9);
    /* 007ad9f9: mov ecx, eax */ r_ecx = r_eax;
    /* 007ad9fb: call 0x6905d4 */ r_esp -= 4; W32(r_esp, 0x7ada00u); f_006905d4();
L_007ada00:; BB(0x007ada00);
    /* 007ada00: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007ada03: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 007ada06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ada08: je 0x7ada14 */ if (fZ) goto L_007ada14;
L_007ada0a:; BB(0x007ada0a);
    /* 007ada0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007ada0c: call 0x7ad910 */ r_esp -= 4; W32(r_esp, 0x7ada11u); f_007ad910();
    /* 007ada11: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_007ada14:; BB(0x007ada14);
    /* 007ada14: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
L_007ada1b:; BB(0x007ada1b);
    /* 007ada1b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007ada22: mov ecx, edx */ r_ecx = r_edx;
    /* 007ada24: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7ada29u); f_008171e8();
    /* 007ada29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007ada2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007ada33: mov esp, ebp */ r_esp = r_ebp;
    /* 007ada35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ada36: ret  */ FN_RET(0x007ad98c); r_esp += 4; return;
}

void f_007ada38(void) /* sub_7ADA38 */
{
    FN_ENTER(0x007ada38);
    /* 007ada38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ada39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ada3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ada3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ada3c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ada3f: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 007ada43: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007ada47: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 007ada4b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007ada4f: mov ebx, eax */ r_ebx = r_eax;
    /* 007ada51: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_007ada54:; BB(0x007ada54);
    /* 007ada54: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007ada58: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ada5a: jl 0x7ada66 */ if ((fS!=fO)) goto L_007ada66;
L_007ada5c:; BB(0x007ada5c);
    /* 007ada5c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ada5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ada60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ada61: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ada62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ada63: ret 0xc */ FN_RET(0x007ada38); r_esp += 16; return;
L_007ada66:; BB(0x007ada66);
    /* 007ada66: lea ebp, [edx - 1] */ r_ebp = (u32)(r_edx+0xffffffffu);
    /* 007ada69: mov edx, ebx */ r_edx = r_ebx;
    /* 007ada6b: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 007ada6e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ada70: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 007ada73: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ada75: fld dword ptr [eax + esi + 8] */ FPUSH(R_F32((u32)(r_eax+r_esi+0x8u)));
    /* 007ada79: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007ada7d: jmp 0x7adad2 */ goto L_007adad2;
L_007ada7f:; BB(0x007ada7f);
    /* 007ada7f: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 007ada83: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007ada87: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 007ada8b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007ada8d: lea ebp, [edi + edi] */ r_ebp = (u32)(r_edi+r_edi);
    /* 007ada90: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007ada92: mov eax, dword ptr [ebp + esi] */ r_eax = R32((u32)(r_ebp+r_esi));
    /* 007ada96: mov ecx, dword ptr [ebp + esi + 4] */ r_ecx = R32((u32)(r_ebp+r_esi+0x4u));
    /* 007ada9a: mov ebx, dword ptr [ebp + esi + 8] */ r_ebx = R32((u32)(r_ebp+r_esi+0x8u));
    /* 007ada9e: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007adaa1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007adaa3: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 007adaa6: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007adaa8: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 007adaab: mov dword ptr [ebp + esi], edi */ W32((u32)(r_ebp+r_esi), r_edi);
    /* 007adaaf: mov edi, dword ptr [edx + esi + 4] */ r_edi = R32((u32)(r_edx+r_esi+0x4u));
    /* 007adab3: mov dword ptr [ebp + esi + 4], edi */ W32((u32)(r_ebp+r_esi+0x4u), r_edi);
    /* 007adab7: mov edi, dword ptr [edx + esi + 8] */ r_edi = R32((u32)(r_edx+r_esi+0x8u));
    /* 007adabb: mov dword ptr [ebp + esi + 8], edi */ W32((u32)(r_ebp+r_esi+0x8u), r_edi);
    /* 007adabf: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 007adac3: mov dword ptr [edx + esi], eax */ W32((u32)(r_edx+r_esi), r_eax);
    /* 007adac6: mov dword ptr [edx + esi + 4], ecx */ W32((u32)(r_edx+r_esi+0x4u), r_ecx);
    /* 007adaca: mov dword ptr [edx + esi + 8], ebx */ W32((u32)(r_edx+r_esi+0x8u), r_ebx);
    /* 007adace: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_007adad2:; BB(0x007adad2);
    /* 007adad2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007adad5: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 007adad9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007adadb: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 007adade: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007adae0: fcom dword ptr [ebx + esi + 8] */ fx_compare(ST(0), R_F32((u32)(r_ebx+r_esi+0x8u))); 
    /* 007adae4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007adae6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007adae7: jbe 0x7adb03 */ if ((fC||fZ)) goto L_007adb03;
L_007adae9:; BB(0x007adae9);
    /* 007adae9: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 007adaed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007adaef: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 007adaf2: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_007adaf4:; BB(0x007adaf4);
    /* 007adaf4: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007adaf7: fcom dword ptr [ecx + esi + 8] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_esi+0x8u))); 
    /* 007adafb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007adafd: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007adb00: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007adb01: ja 0x7adaf4 */ if ((!fC&&!fZ)) goto L_007adaf4;
L_007adb03:; BB(0x007adb03);
    /* 007adb03: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007adb06: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb08: jge 0x7adb41 */ if ((fS==fO)) goto L_007adb41;
L_007adb0a:; BB(0x007adb0a);
    /* 007adb0a: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007adb0d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007adb0f: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 007adb12: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007adb14: fcom dword ptr [ebx + esi + 8] */ fx_compare(ST(0), R_F32((u32)(r_ebx+r_esi+0x8u))); 
    /* 007adb18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007adb1a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007adb1b: jae 0x7adb41 */ if (!fC) goto L_007adb41;
L_007adb1d:; BB(0x007adb1d);
    /* 007adb1d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007adb20: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb22: jge 0x7adb41 */ if ((fS==fO)) goto L_007adb41;
L_007adb24:; BB(0x007adb24);
    /* 007adb24: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007adb27: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007adb29: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 007adb2c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_007adb2e:; BB(0x007adb2e);
    /* 007adb2e: fcom dword ptr [ecx + esi + 8] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_esi+0x8u))); 
    /* 007adb32: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007adb34: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007adb35: jae 0x7adb41 */ if (!fC) goto L_007adb41;
L_007adb37:; BB(0x007adb37);
    /* 007adb37: add ecx, -0xc */ {  u32 a = r_ecx; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007adb3a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007adb3d: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb3f: jl 0x7adb2e */ if ((fS!=fO)) goto L_007adb2e;
L_007adb41:; BB(0x007adb41);
    /* 007adb41: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb43: jge 0x7adbc7 */ if ((fS==fO)) goto L_007adbc7;
L_007adb49:; BB(0x007adb49);
    /* 007adb49: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb4c: jge 0x7adbd3 */ if ((fS==fO)) goto L_007adbd3;
L_007adb52:; BB(0x007adb52);
    /* 007adb52: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb55: jl 0x7ada7f */ if ((fS!=fO)) goto L_007ada7f;
L_007adb5b:; BB(0x007adb5b);
    /* 007adb5b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007adb5d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007adb61: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
L_007adb65:; BB(0x007adb65);
    /* 007adb65: mov ecx, dword ptr [eax + esi] */ r_ecx = R32((u32)(r_eax+r_esi));
    /* 007adb68: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 007adb6c: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 007adb70: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007adb72: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007adb75: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007adb77: mov ebp, dword ptr [edi + esi] */ r_ebp = R32((u32)(r_edi+r_esi));
    /* 007adb7a: mov edx, dword ptr [edi + esi + 4] */ r_edx = R32((u32)(r_edi+r_esi+0x4u));
    /* 007adb7e: mov ebx, dword ptr [edi + esi + 8] */ r_ebx = R32((u32)(r_edi+r_esi+0x8u));
    /* 007adb82: mov dword ptr [edi + esi], ecx */ W32((u32)(r_edi+r_esi), r_ecx);
    /* 007adb85: mov ecx, dword ptr [eax + esi + 4] */ r_ecx = R32((u32)(r_eax+r_esi+0x4u));
    /* 007adb89: mov dword ptr [edi + esi + 4], ecx */ W32((u32)(r_edi+r_esi+0x4u), r_ecx);
    /* 007adb8d: mov ecx, dword ptr [eax + esi + 8] */ r_ecx = R32((u32)(r_eax+r_esi+0x8u));
    /* 007adb91: mov dword ptr [edi + esi + 8], ecx */ W32((u32)(r_edi+r_esi+0x8u), r_ecx);
    /* 007adb95: mov dword ptr [eax + esi], ebp */ W32((u32)(r_eax+r_esi), r_ebp);
    /* 007adb98: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 007adb9c: mov dword ptr [eax + esi + 4], edx */ W32((u32)(r_eax+r_esi+0x4u), r_edx);
    /* 007adba0: mov dword ptr [eax + esi + 8], ebx */ W32((u32)(r_eax+r_esi+0x8u), r_ebx);
    /* 007adba4: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 007adba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007adba8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007adbac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007adbad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007adbae: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007adbb2: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 007adbb6: call 0x7ada38 */ r_esp -= 4; W32(r_esp, 0x7adbbbu); f_007ada38();
    /* 007adbbb: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 007adbbe: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007adbc2: jmp 0x7ada54 */ goto L_007ada54;
L_007adbc7:; BB(0x007adbc7);
    /* 007adbc7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007adbc9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007adbcd: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 007adbd1: jmp 0x7adb65 */ goto L_007adb65;
L_007adbd3:; BB(0x007adbd3);
    /* 007adbd3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007adbd5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007adbd9: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 007adbdd: jmp 0x7adb65 */ goto L_007adb65;
}

void f_007ada74(void)
{
    FN_ENTER(0x007ada74);
    goto L_007ada74;
L_007ada54:; BB(0x007ada54);
    /* 007ada54: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007ada58: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ada5a: jl 0x7ada66 */ if ((fS!=fO)) goto L_007ada66;
L_007ada5c:; BB(0x007ada5c);
    /* 007ada5c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ada5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ada60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ada61: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ada62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ada63: ret 0xc */ FN_RET(0x007ada74); r_esp += 16; return;
L_007ada66:; BB(0x007ada66);
    /* 007ada66: lea ebp, [edx - 1] */ r_ebp = (u32)(r_edx+0xffffffffu);
    /* 007ada69: mov edx, ebx */ r_edx = r_ebx;
    /* 007ada6b: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 007ada6e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ada70: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 007ada73: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007ada74:; BB(0x007ada74);
    /* 007ada74: rcr ecx, 0x44 */ { u32 c = (4u) & 31; u32 a = r_ecx; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_ecx = a; }
    /* 007ada75: fld dword ptr [eax + esi + 8] */ FPUSH(R_F32((u32)(r_eax+r_esi+0x8u)));
    /* 007ada77: xor byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 007ada79: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007ada7d: jmp 0x7adad2 */ goto L_007adad2;
L_007ada7f:; BB(0x007ada7f);
    /* 007ada7f: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 007ada83: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007ada87: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 007ada8b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007ada8d: lea ebp, [edi + edi] */ r_ebp = (u32)(r_edi+r_edi);
    /* 007ada90: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007ada92: mov eax, dword ptr [ebp + esi] */ r_eax = R32((u32)(r_ebp+r_esi));
    /* 007ada96: mov ecx, dword ptr [ebp + esi + 4] */ r_ecx = R32((u32)(r_ebp+r_esi+0x4u));
    /* 007ada9a: mov ebx, dword ptr [ebp + esi + 8] */ r_ebx = R32((u32)(r_ebp+r_esi+0x8u));
    /* 007ada9e: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007adaa1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007adaa3: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 007adaa6: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007adaa8: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 007adaab: mov dword ptr [ebp + esi], edi */ W32((u32)(r_ebp+r_esi), r_edi);
    /* 007adaaf: mov edi, dword ptr [edx + esi + 4] */ r_edi = R32((u32)(r_edx+r_esi+0x4u));
    /* 007adab3: mov dword ptr [ebp + esi + 4], edi */ W32((u32)(r_ebp+r_esi+0x4u), r_edi);
    /* 007adab7: mov edi, dword ptr [edx + esi + 8] */ r_edi = R32((u32)(r_edx+r_esi+0x8u));
    /* 007adabb: mov dword ptr [ebp + esi + 8], edi */ W32((u32)(r_ebp+r_esi+0x8u), r_edi);
    /* 007adabf: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 007adac3: mov dword ptr [edx + esi], eax */ W32((u32)(r_edx+r_esi), r_eax);
    /* 007adac6: mov dword ptr [edx + esi + 4], ecx */ W32((u32)(r_edx+r_esi+0x4u), r_ecx);
    /* 007adaca: mov dword ptr [edx + esi + 8], ebx */ W32((u32)(r_edx+r_esi+0x8u), r_ebx);
    /* 007adace: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_007adad2:; BB(0x007adad2);
    /* 007adad2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007adad5: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 007adad9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007adadb: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 007adade: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007adae0: fcom dword ptr [ebx + esi + 8] */ fx_compare(ST(0), R_F32((u32)(r_ebx+r_esi+0x8u))); 
    /* 007adae4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007adae6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007adae7: jbe 0x7adb03 */ if ((fC||fZ)) goto L_007adb03;
L_007adae9:; BB(0x007adae9);
    /* 007adae9: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 007adaed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007adaef: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 007adaf2: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_007adaf4:; BB(0x007adaf4);
    /* 007adaf4: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007adaf7: fcom dword ptr [ecx + esi + 8] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_esi+0x8u))); 
    /* 007adafb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007adafd: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007adb00: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007adb01: ja 0x7adaf4 */ if ((!fC&&!fZ)) goto L_007adaf4;
L_007adb03:; BB(0x007adb03);
    /* 007adb03: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007adb06: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb08: jge 0x7adb41 */ if ((fS==fO)) goto L_007adb41;
L_007adb0a:; BB(0x007adb0a);
    /* 007adb0a: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007adb0d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007adb0f: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 007adb12: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007adb14: fcom dword ptr [ebx + esi + 8] */ fx_compare(ST(0), R_F32((u32)(r_ebx+r_esi+0x8u))); 
    /* 007adb18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007adb1a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007adb1b: jae 0x7adb41 */ if (!fC) goto L_007adb41;
L_007adb1d:; BB(0x007adb1d);
    /* 007adb1d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007adb20: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb22: jge 0x7adb41 */ if ((fS==fO)) goto L_007adb41;
L_007adb24:; BB(0x007adb24);
    /* 007adb24: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007adb27: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007adb29: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 007adb2c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_007adb2e:; BB(0x007adb2e);
    /* 007adb2e: fcom dword ptr [ecx + esi + 8] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_esi+0x8u))); 
    /* 007adb32: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007adb34: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007adb35: jae 0x7adb41 */ if (!fC) goto L_007adb41;
L_007adb37:; BB(0x007adb37);
    /* 007adb37: add ecx, -0xc */ {  u32 a = r_ecx; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007adb3a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007adb3d: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb3f: jl 0x7adb2e */ if ((fS!=fO)) goto L_007adb2e;
L_007adb41:; BB(0x007adb41);
    /* 007adb41: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb43: jge 0x7adbc7 */ if ((fS==fO)) goto L_007adbc7;
L_007adb49:; BB(0x007adb49);
    /* 007adb49: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb4c: jge 0x7adbd3 */ if ((fS==fO)) goto L_007adbd3;
L_007adb52:; BB(0x007adb52);
    /* 007adb52: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007adb55: jl 0x7ada7f */ if ((fS!=fO)) goto L_007ada7f;
L_007adb5b:; BB(0x007adb5b);
    /* 007adb5b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007adb5d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007adb61: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
L_007adb65:; BB(0x007adb65);
    /* 007adb65: mov ecx, dword ptr [eax + esi] */ r_ecx = R32((u32)(r_eax+r_esi));
    /* 007adb68: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 007adb6c: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 007adb70: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007adb72: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007adb75: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007adb77: mov ebp, dword ptr [edi + esi] */ r_ebp = R32((u32)(r_edi+r_esi));
    /* 007adb7a: mov edx, dword ptr [edi + esi + 4] */ r_edx = R32((u32)(r_edi+r_esi+0x4u));
    /* 007adb7e: mov ebx, dword ptr [edi + esi + 8] */ r_ebx = R32((u32)(r_edi+r_esi+0x8u));
    /* 007adb82: mov dword ptr [edi + esi], ecx */ W32((u32)(r_edi+r_esi), r_ecx);
    /* 007adb85: mov ecx, dword ptr [eax + esi + 4] */ r_ecx = R32((u32)(r_eax+r_esi+0x4u));
    /* 007adb89: mov dword ptr [edi + esi + 4], ecx */ W32((u32)(r_edi+r_esi+0x4u), r_ecx);
    /* 007adb8d: mov ecx, dword ptr [eax + esi + 8] */ r_ecx = R32((u32)(r_eax+r_esi+0x8u));
    /* 007adb91: mov dword ptr [edi + esi + 8], ecx */ W32((u32)(r_edi+r_esi+0x8u), r_ecx);
    /* 007adb95: mov dword ptr [eax + esi], ebp */ W32((u32)(r_eax+r_esi), r_ebp);
    /* 007adb98: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 007adb9c: mov dword ptr [eax + esi + 4], edx */ W32((u32)(r_eax+r_esi+0x4u), r_edx);
    /* 007adba0: mov dword ptr [eax + esi + 8], ebx */ W32((u32)(r_eax+r_esi+0x8u), r_ebx);
    /* 007adba4: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 007adba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007adba8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007adbac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007adbad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007adbae: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007adbb2: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 007adbb6: call 0x7ada38 */ r_esp -= 4; W32(r_esp, 0x7adbbbu); f_007ada38();
    /* 007adbbb: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 007adbbe: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007adbc2: jmp 0x7ada54 */ goto L_007ada54;
L_007adbc7:; BB(0x007adbc7);
    /* 007adbc7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007adbc9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007adbcd: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 007adbd1: jmp 0x7adb65 */ goto L_007adb65;
L_007adbd3:; BB(0x007adbd3);
    /* 007adbd3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007adbd5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007adbd9: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 007adbdd: jmp 0x7adb65 */ goto L_007adb65;
}

void f_007adbe0(void) /* sub_7ADBE0 */
{
    FN_ENTER(0x007adbe0);
    /* 007adbe0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007adbe1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007adbe2: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007adbe6: mov eax, dword ptr [0xaacabc] */ r_eax = R32((u32)(0xaacabcu));
    /* 007adbeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007adbed: je 0x7adcb2 */ if (fZ) goto L_007adcb2;
L_007adbf3:; BB(0x007adbf3);
    /* 007adbf3: mov dword ptr [0xaacabc], 0 */ W32((u32)(0xaacabcu), 0x0u);
    /* 007adbfd: mov edx, 0xaaca40 */ r_edx = 0xaaca40u;
    /* 007adc02: mov eax, 0xaac4e0 */ r_eax = 0xaac4e0u;
    /* 007adc07: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007adc09: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 007adc0c: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007adc0e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007adc11: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 007adc14: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007adc17: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007adc1a: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007adc1d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 007adc20: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007adc23: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007adc26: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007adc29: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007adc2c: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 007adc2f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007adc32: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 007adc35: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007adc38: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007adc3b: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007adc3e: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 007adc41: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007adc44: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 007adc47: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007adc4a: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 007adc4d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007adc50: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 007adc53: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007adc56: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 007adc59: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007adc5c: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 007adc5f: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007adc62: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007adc65: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007adc68: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 007adc6b: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 007adc6e: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 007adc71: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007adc74: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 007adc77: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007adc7a: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 007adc7d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 007adc80: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 007adc83: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 007adc86: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 007adc89: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 007adc8c: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 007adc8f: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 007adc92: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 007adc95: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 007adc98: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 007adc9b: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007adc9e: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 007adca1: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007adca4: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 007adca7: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 007adcaa: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 007adcad: jmp 0x7add74 */ goto L_007add74;
L_007adcb2:; BB(0x007adcb2);
    /* 007adcb2: mov edx, 0xaaca40 */ r_edx = 0xaaca40u;
    /* 007adcb7: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 007adcba: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007adcbc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007adcbe: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007adcc0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007adcc2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007adcc4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007adcc6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007adcc8: add eax, dword ptr [0xaacac0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaacac0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007adcce: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007adcd0: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 007adcd3: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007adcd5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007adcd8: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 007adcdb: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007adcde: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007adce1: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007adce4: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 007adce7: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007adcea: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007adced: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007adcf0: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007adcf3: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 007adcf6: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007adcf9: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 007adcfc: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007adcff: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007add02: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007add05: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 007add08: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007add0b: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 007add0e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007add11: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 007add14: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007add17: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 007add1a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007add1d: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 007add20: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007add23: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 007add26: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007add29: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007add2c: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007add2f: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 007add32: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 007add35: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 007add38: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007add3b: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 007add3e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007add41: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 007add44: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 007add47: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 007add4a: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 007add4d: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 007add50: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 007add53: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 007add56: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 007add59: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 007add5c: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 007add5f: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 007add62: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007add65: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 007add68: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007add6b: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 007add6e: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 007add71: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
L_007add74:; BB(0x007add74);
    /* 007add74: push dword ptr [0xaacac0] */ { u32 v = R32((u32)(0xaacac0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007add7a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7add7fu); f_00857e98();
    /* 007add7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007add80: mov ecx, dword ptr [0xa9cd68] */ r_ecx = R32((u32)(0xa9cd68u));
    /* 007add86: mov dword ptr [0xaacac0], 0 */ W32((u32)(0xaacac0u), 0x0u);
    /* 007add90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007add92: jl 0x7add9d */ if ((fS!=fO)) goto L_007add9d;
L_007add94:; BB(0x007add94);
    /* 007add94: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007add97: jg 0x7add9d */ if ((!fZ&&fS==fO)) goto L_007add9d;
L_007add99:; BB(0x007add99);
    /* 007add99: mov eax, ecx */ r_eax = r_ecx;
    /* 007add9b: jmp 0x7adda2 */ goto L_007adda2;
L_007add9d:; BB(0x007add9d);
    /* 007add9d: mov eax, 2 */ r_eax = 0x2u;
L_007adda2:; BB(0x007adda2);
    /* 007adda2: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 007adda5: movzx edx, word ptr [edx*8 + 0xa02ea2] */ r_edx = (u32)R16((u32)(r_edx*8+0xa02ea2u));
    /* 007addad: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 007addb0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007addb2: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007addb4: lea eax, [eax + edi*8] */ r_eax = (u32)(r_eax+r_edi*8);
    /* 007addb7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007addb9: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007addbc: jne 0x7addc4 */ if (!fZ) goto L_007addc4;
L_007addbe:; BB(0x007addbe);
    /* 007addbe: lea eax, [edx + 0x96] */ r_eax = (u32)(r_edx+0x96u);
L_007addc4:; BB(0x007addc4);
    /* 007addc4: mov edx, 0xc6 */ r_edx = 0xc6u;
    /* 007addc9: cmp eax, 0xc6 */ {  u32 a = r_eax; u32 b = 0xc6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007addce: jl 0x7addd2 */ if ((fS!=fO)) goto L_007addd2;
L_007addd0:; BB(0x007addd0);
    /* 007addd0: mov eax, edx */ r_eax = r_edx;
L_007addd2:; BB(0x007addd2);
    /* 007addd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007addd4: je 0x7adf23 */ if (fZ) goto L_007adf23;
L_007addda:; BB(0x007addda);
    /* 007addda: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007adddd: je 0x7ade4c */ if (fZ) goto L_007ade4c;
L_007adddf:; BB(0x007adddf);
    /* 007adddf: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007adde2: jne 0x7ade05 */ if (!fZ) goto L_007ade05;
L_007adde4:; BB(0x007adde4);
    /* 007adde4: push 0xaac560 */ { u32 v = 0xaac560u; r_esp -= 4; W32(r_esp, v); }
    /* 007adde9: movsx edx, byte ptr [0xaaca71] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaaca71u));
    /* 007addf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007addf1: push dword ptr [ebx*4 + 0xa03aa0] */ { u32 v = R32((u32)(r_ebx*4+0xa03aa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007addf8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007addfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007addfb: call 0x6aae34 */ r_esp -= 4; W32(r_esp, 0x7ade00u); f_006aae34();
    /* 007ade00: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ade03: jmp 0x7ade6b */ goto L_007ade6b;
L_007ade05:; BB(0x007ade05);
    /* 007ade05: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ade08: jne 0x7ade2b */ if (!fZ) goto L_007ade2b;
L_007ade0a:; BB(0x007ade0a);
    /* 007ade0a: push 0xaac560 */ { u32 v = 0xaac560u; r_esp -= 4; W32(r_esp, v); }
    /* 007ade0f: movsx edx, byte ptr [0xaaca71] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaaca71u));
    /* 007ade16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ade17: push dword ptr [ebx*4 + 0xa03ba0] */ { u32 v = R32((u32)(r_ebx*4+0xa03ba0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ade1e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007ade20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ade21: call 0x6aae34 */ r_esp -= 4; W32(r_esp, 0x7ade26u); f_006aae34();
    /* 007ade26: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ade29: jmp 0x7ade6b */ goto L_007ade6b;
L_007ade2b:; BB(0x007ade2b);
    /* 007ade2b: push 0xaac560 */ { u32 v = 0xaac560u; r_esp -= 4; W32(r_esp, v); }
    /* 007ade30: movsx edx, byte ptr [0xaaca71] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaaca71u));
    /* 007ade37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ade38: push dword ptr [ebx*4 + 0xa03aa0] */ { u32 v = R32((u32)(r_ebx*4+0xa03aa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ade3f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007ade41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ade42: call 0x6aae34 */ r_esp -= 4; W32(r_esp, 0x7ade47u); f_006aae34();
    /* 007ade47: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ade4a: jmp 0x7ade6b */ goto L_007ade6b;
L_007ade4c:; BB(0x007ade4c);
    /* 007ade4c: push 0xaac560 */ { u32 v = 0xaac560u; r_esp -= 4; W32(r_esp, v); }
    /* 007ade51: movsx edx, byte ptr [0xaaca71] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaaca71u));
    /* 007ade58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ade59: push dword ptr [ebx*4 + 0xa039a0] */ { u32 v = R32((u32)(r_ebx*4+0xa039a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ade60: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007ade62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ade63: call 0x6aae34 */ r_esp -= 4; W32(r_esp, 0x7ade68u); f_006aae34();
    /* 007ade68: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007ade6b:; BB(0x007ade6b);
    /* 007ade6b: mov edx, 0xaac8d0 */ r_edx = 0xaac8d0u;
    /* 007ade70: mov eax, 0xaaca40 */ r_eax = 0xaaca40u;
    /* 007ade75: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007ade77: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007ade7a: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 007ade7d: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007ade7f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007ade82: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 007ade85: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 007ade88: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007ade8b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 007ade8e: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007ade91: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007ade94: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007ade97: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007ade9a: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 007ade9d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007adea0: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 007adea3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007adea6: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007adea9: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007adeac: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 007adeaf: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007adeb2: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 007adeb5: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007adeb8: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 007adebb: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007adebe: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 007adec1: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007adec4: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 007adec7: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007adeca: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 007adecd: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007aded0: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007aded3: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007aded6: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 007aded9: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 007adedc: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 007adedf: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007adee2: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 007adee5: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007adee8: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 007adeeb: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 007adeee: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 007adef1: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 007adef4: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 007adef7: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 007adefa: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 007adefd: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 007adf00: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 007adf03: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 007adf06: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 007adf09: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007adf0c: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 007adf0f: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007adf12: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 007adf15: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 007adf18: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 007adf1b: mov eax, 0xaac560 */ r_eax = 0xaac560u;
    /* 007adf20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007adf21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007adf22: ret  */ FN_RET(0x007adbe0); r_esp += 4; return;
L_007adf23:; BB(0x007adf23);
    /* 007adf23: push 0xaac560 */ { u32 v = 0xaac560u; r_esp -= 4; W32(r_esp, v); }
    /* 007adf28: movsx edx, byte ptr [0xaaca71] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaaca71u));
    /* 007adf2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007adf30: push dword ptr [ebx*4 + 0xa038a0] */ { u32 v = R32((u32)(r_ebx*4+0xa038a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007adf37: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007adf39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007adf3a: call 0x6aae34 */ r_esp -= 4; W32(r_esp, 0x7adf3fu); f_006aae34();
    /* 007adf3f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007adf42: jmp 0x7ade6b */ goto L_007ade6b;
}

void f_007adf48(void) /* sub_7ADF48 */
{
    FN_ENTER(0x007adf48);
    /* 007adf48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007adf49: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007adf4c: mov eax, dword ptr [0xaacac0] */ r_eax = R32((u32)(0xaacac0u));
    /* 007adf51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007adf53: je 0x7adf5c */ if (fZ) goto L_007adf5c;
L_007adf55:; BB(0x007adf55);
    /* 007adf55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007adf57: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007adf5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007adf5b: ret  */ FN_RET(0x007adf48); r_esp += 4; return;
L_007adf5c:; BB(0x007adf5c);
    /* 007adf5c: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 007adf61: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7adf66u); f_008581c5();
    /* 007adf66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007adf67: mov edx, dword ptr [0xaacabc] */ r_edx = R32((u32)(0xaacabcu));
    /* 007adf6d: mov dword ptr [0xaacac0], eax */ W32((u32)(0xaacac0u), r_eax);
    /* 007adf72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007adf74: je 0x7ae24f */ if (fZ) goto L_007ae24f;
L_007adf7a:; BB(0x007adf7a);
    /* 007adf7a: movzx eax, word ptr [0xaac530] */ r_eax = (u32)R16((u32)(0xaac530u));
    /* 007adf81: mov dword ptr [0xaacabc], 0 */ W32((u32)(0xaacabcu), 0x0u);
    /* 007adf8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007adf8d: jne 0x7adfb2 */ if (!fZ) goto L_007adfb2;
L_007adf8f:; BB(0x007adf8f);
    /* 007adf8f: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 007adf93: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007adf95: push 0xaac4e0 */ { u32 v = 0xaac4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 007adf9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007adf9b: call 0x857f98 */ r_esp -= 4; W32(r_esp, 0x7adfa0u); f_00857f98();
    /* 007adfa0: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 007adfa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007adfa5: push 0xaac530 */ { u32 v = 0xaac530u; r_esp -= 4; W32(r_esp, v); }
    /* 007adfaa: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x7adfafu); f_00857fed();
    /* 007adfaf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007adfb2:; BB(0x007adfb2);
    /* 007adfb2: mov edx, 0xaaca40 */ r_edx = 0xaaca40u;
    /* 007adfb7: mov eax, 0xaac4e0 */ r_eax = 0xaac4e0u;
    /* 007adfbc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007adfbe: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007adfc1: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007adfc3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007adfc6: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 007adfc9: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007adfcc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007adfcf: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007adfd2: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 007adfd5: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007adfd8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007adfdb: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007adfde: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007adfe1: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 007adfe4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007adfe7: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 007adfea: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007adfed: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007adff0: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007adff3: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 007adff6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007adff9: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 007adffc: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007adfff: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 007ae002: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007ae005: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 007ae008: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007ae00b: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 007ae00e: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007ae011: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 007ae014: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007ae017: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007ae01a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007ae01d: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 007ae020: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 007ae023: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 007ae026: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007ae029: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 007ae02c: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007ae02f: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 007ae032: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 007ae035: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 007ae038: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 007ae03b: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 007ae03e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 007ae041: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 007ae044: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 007ae047: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 007ae04a: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 007ae04d: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 007ae050: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007ae053: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 007ae056: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007ae059: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 007ae05c: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 007ae05f: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
L_007ae062:; BB(0x007ae062);
    /* 007ae062: push dword ptr [0xaacac0] */ { u32 v = R32((u32)(0xaacac0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ae068: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7ae06du); f_00857e98();
    /* 007ae06d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ae06e: mov ecx, dword ptr [0xa9cd68] */ r_ecx = R32((u32)(0xa9cd68u));
    /* 007ae074: mov dword ptr [0xaacac0], 0 */ W32((u32)(0xaacac0u), 0x0u);
    /* 007ae07e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007ae080: jl 0x7ae08b */ if ((fS!=fO)) goto L_007ae08b;
L_007ae082:; BB(0x007ae082);
    /* 007ae082: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ae085: jg 0x7ae08b */ if ((!fZ&&fS==fO)) goto L_007ae08b;
L_007ae087:; BB(0x007ae087);
    /* 007ae087: mov eax, ecx */ r_eax = r_ecx;
    /* 007ae089: jmp 0x7ae090 */ goto L_007ae090;
L_007ae08b:; BB(0x007ae08b);
    /* 007ae08b: mov eax, 2 */ r_eax = 0x2u;
L_007ae090:; BB(0x007ae090);
    /* 007ae090: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007ae094: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 007ae097: movzx edx, word ptr [ebx*8 + 0xa02ea2] */ r_edx = (u32)R16((u32)(r_ebx*8+0xa02ea2u));
    /* 007ae09f: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 007ae0a2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ae0a4: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 007ae0a6: lea eax, [eax + ebx*8] */ r_eax = (u32)(r_eax+r_ebx*8);
    /* 007ae0a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ae0ab: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae0ae: jne 0x7ae0b6 */ if (!fZ) goto L_007ae0b6;
L_007ae0b0:; BB(0x007ae0b0);
    /* 007ae0b0: lea eax, [edx + 0x96] */ r_eax = (u32)(r_edx+0x96u);
L_007ae0b6:; BB(0x007ae0b6);
    /* 007ae0b6: mov edx, 0xc6 */ r_edx = 0xc6u;
    /* 007ae0bb: cmp eax, 0xc6 */ {  u32 a = r_eax; u32 b = 0xc6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ae0c0: jl 0x7ae0c4 */ if ((fS!=fO)) goto L_007ae0c4;
L_007ae0c2:; BB(0x007ae0c2);
    /* 007ae0c2: mov eax, edx */ r_eax = r_edx;
L_007ae0c4:; BB(0x007ae0c4);
    /* 007ae0c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae0c6: je 0x7ae227 */ if (fZ) goto L_007ae227;
L_007ae0cc:; BB(0x007ae0cc);
    /* 007ae0cc: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae0cf: je 0x7ae14a */ if (fZ) goto L_007ae14a;
L_007ae0d1:; BB(0x007ae0d1);
    /* 007ae0d1: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae0d4: jne 0x7ae0fb */ if (!fZ) goto L_007ae0fb;
L_007ae0d6:; BB(0x007ae0d6);
    /* 007ae0d6: push 0xaac560 */ { u32 v = 0xaac560u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae0db: movsx edx, byte ptr [0xaaca71] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaaca71u));
    /* 007ae0e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae0e3: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007ae0e7: push dword ptr [eax*4 + 0xa03aa0] */ { u32 v = R32((u32)(r_eax*4+0xa03aa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ae0ee: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae0f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ae0f1: call 0x6aae34 */ r_esp -= 4; W32(r_esp, 0x7ae0f6u); f_006aae34();
    /* 007ae0f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ae0f9: jmp 0x7ae16d */ goto L_007ae16d;
L_007ae0fb:; BB(0x007ae0fb);
    /* 007ae0fb: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae0fe: jne 0x7ae125 */ if (!fZ) goto L_007ae125;
L_007ae100:; BB(0x007ae100);
    /* 007ae100: push 0xaac560 */ { u32 v = 0xaac560u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae105: movsx edx, byte ptr [0xaaca71] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaaca71u));
    /* 007ae10c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae10d: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007ae111: push dword ptr [eax*4 + 0xa03ba0] */ { u32 v = R32((u32)(r_eax*4+0xa03ba0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ae118: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae11a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ae11b: call 0x6aae34 */ r_esp -= 4; W32(r_esp, 0x7ae120u); f_006aae34();
    /* 007ae120: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ae123: jmp 0x7ae16d */ goto L_007ae16d;
L_007ae125:; BB(0x007ae125);
    /* 007ae125: push 0xaac560 */ { u32 v = 0xaac560u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae12a: movsx edx, byte ptr [0xaaca71] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaaca71u));
    /* 007ae131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae132: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007ae136: push dword ptr [eax*4 + 0xa038a0] */ { u32 v = R32((u32)(r_eax*4+0xa038a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ae13d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae13f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ae140: call 0x6aae34 */ r_esp -= 4; W32(r_esp, 0x7ae145u); f_006aae34();
    /* 007ae145: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ae148: jmp 0x7ae16d */ goto L_007ae16d;
L_007ae14a:; BB(0x007ae14a);
    /* 007ae14a: push 0xaac560 */ { u32 v = 0xaac560u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae14f: movsx edx, byte ptr [0xaaca71] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaaca71u));
    /* 007ae156: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae157: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007ae15b: push dword ptr [eax*4 + 0xa039a0] */ { u32 v = R32((u32)(r_eax*4+0xa039a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ae162: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae164: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ae165: call 0x6aae34 */ r_esp -= 4; W32(r_esp, 0x7ae16au); f_006aae34();
    /* 007ae16a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007ae16d:; BB(0x007ae16d);
    /* 007ae16d: mov edx, 0xaac8d0 */ r_edx = 0xaac8d0u;
    /* 007ae172: mov eax, 0xaaca40 */ r_eax = 0xaaca40u;
    /* 007ae177: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007ae179: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007ae17c: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007ae17e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007ae181: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 007ae184: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007ae187: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007ae18a: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007ae18d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 007ae190: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007ae193: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007ae196: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007ae199: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007ae19c: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 007ae19f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007ae1a2: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 007ae1a5: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007ae1a8: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007ae1ab: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007ae1ae: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 007ae1b1: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007ae1b4: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 007ae1b7: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007ae1ba: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 007ae1bd: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007ae1c0: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 007ae1c3: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007ae1c6: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 007ae1c9: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007ae1cc: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 007ae1cf: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007ae1d2: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007ae1d5: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007ae1d8: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 007ae1db: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 007ae1de: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 007ae1e1: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007ae1e4: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 007ae1e7: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007ae1ea: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 007ae1ed: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 007ae1f0: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 007ae1f3: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 007ae1f6: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 007ae1f9: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 007ae1fc: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 007ae1ff: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 007ae202: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 007ae205: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 007ae208: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 007ae20b: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007ae20e: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 007ae211: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007ae214: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 007ae217: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 007ae21a: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 007ae21d: mov eax, 0xaac560 */ r_eax = 0xaac560u;
    /* 007ae222: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ae225: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ae226: ret  */ FN_RET(0x007adf48); r_esp += 4; return;
L_007ae227:; BB(0x007ae227);
    /* 007ae227: push 0xaac560 */ { u32 v = 0xaac560u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae22c: movsx edx, byte ptr [0xaaca71] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaaca71u));
    /* 007ae233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae234: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007ae238: push dword ptr [eax*4 + 0xa038a0] */ { u32 v = R32((u32)(r_eax*4+0xa038a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ae23f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae241: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ae242: call 0x6aae34 */ r_esp -= 4; W32(r_esp, 0x7ae247u); f_006aae34();
    /* 007ae247: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ae24a: jmp 0x7ae16d */ goto L_007ae16d;
L_007ae24f:; BB(0x007ae24f);
    /* 007ae24f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae250: push dword ptr [0xa03ca0] */ { u32 v = R32((u32)(0xa03ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ae256: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x7ae25bu); f_005b9910();
    /* 007ae25b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ae25e: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 007ae262: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 007ae266: mov edx, 0xaaca40 */ r_edx = 0xaaca40u;
    /* 007ae26b: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 007ae26e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ae270: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ae272: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007ae274: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ae276: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ae278: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ae27a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ae27c: add eax, dword ptr [0xaacac0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaacac0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ae282: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007ae284: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007ae286: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007ae289: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 007ae28c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007ae28f: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007ae292: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007ae295: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007ae298: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 007ae29b: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007ae29e: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007ae2a1: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007ae2a4: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007ae2a7: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 007ae2aa: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007ae2ad: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 007ae2b0: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007ae2b3: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007ae2b6: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007ae2b9: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 007ae2bc: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007ae2bf: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 007ae2c2: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007ae2c5: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 007ae2c8: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007ae2cb: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 007ae2ce: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007ae2d1: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 007ae2d4: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007ae2d7: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 007ae2da: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007ae2dd: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007ae2e0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007ae2e3: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 007ae2e6: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 007ae2e9: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 007ae2ec: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007ae2ef: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 007ae2f2: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007ae2f5: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 007ae2f8: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 007ae2fb: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 007ae2fe: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 007ae301: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 007ae304: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 007ae307: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 007ae30a: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 007ae30d: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 007ae310: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 007ae313: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 007ae316: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007ae319: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 007ae31c: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007ae31f: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 007ae322: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 007ae325: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 007ae328: movzx eax, word ptr [0xaaca90] */ r_eax = (u32)R16((u32)(0xaaca90u));
    /* 007ae32f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae331: jne 0x7ae062 */ if (!fZ) goto L_007ae062;
L_007ae337:; BB(0x007ae337);
    /* 007ae337: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007ae33a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae33c: push 0xaaca40 */ { u32 v = 0xaaca40u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae342: call 0x857f98 */ r_esp -= 4; W32(r_esp, 0x7ae347u); f_00857f98();
    /* 007ae347: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007ae34b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae34c: push 0xaaca90 */ { u32 v = 0xaaca90u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae351: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x7ae356u); f_00857fed();
    /* 007ae356: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ae359: jmp 0x7ae062 */ goto L_007ae062;
}

