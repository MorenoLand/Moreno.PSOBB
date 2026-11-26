#include "protos.h"

void f_00653038(void) /* sub_653038 */
{
    FN_ENTER(0x00653038);
    /* 00653038: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653039: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065303b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065303d: call 0x65305c */ r_esp -= 4; W32(r_esp, 0x653042u); f_0065305c();
    /* 00653042: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00653046: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653048: jne 0x65304e */ if (!fZ) goto L_0065304e;
L_0065304a:; BB(0x0065304a);
    /* 0065304a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065304b: ret 4 */ FN_RET(0x00653038); r_esp += 8; return;
L_0065304e:; BB(0x0065304e);
    /* 0065304e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065304f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x653054u); f_005c2f74();
    /* 00653054: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00653055: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00653056: ret 4 */ FN_RET(0x00653038); r_esp += 8; return;
}

void f_0065305c(void) /* sub_65305C */
{
    FN_ENTER(0x0065305c);
    /* 0065305c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065305d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065305f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653061: push 0x8e6b6c */ { u32 v = 0x8e6b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00653066: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065306c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065306d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00653074: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653077: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065307a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065307d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00653080: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00653083: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00653086: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065308d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653090: mov dword ptr [eax], 0xb31bc0 */ W32((u32)(r_eax), 0xb31bc0u);
    /* 00653096: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653097: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x65309cu); f_007b4e84();
    /* 0065309c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065309d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006530a0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6530a5u); f_007b9c8c();
    /* 006530a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006530ac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006530af: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x6530b4u); f_00619b10();
    /* 006530b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006530b7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006530be: mov esp, ebp */ r_esp = r_ebp;
    /* 006530c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006530c1: ret  */ FN_RET(0x0065305c); r_esp += 4; return;
}

void f_006530c4(void) /* sub_6530C4 */
{
    FN_ENTER(0x006530c4);
    /* 006530c4: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 006530ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006530cc: je 0x6530d4 */ if (fZ) goto L_006530d4;
L_006530ce:; BB(0x006530ce);
    /* 006530ce: call 0x653240 */ r_esp -= 4; W32(r_esp, 0x6530d3u); f_00653240();
    /* 006530d3: ret  */ FN_RET(0x006530c4); r_esp += 4; return;
L_006530d4:; BB(0x006530d4);
    /* 006530d4: call 0x6530dc */ r_esp -= 4; W32(r_esp, 0x6530d9u); f_006530dc();
    /* 006530d9: ret  */ FN_RET(0x006530c4); r_esp += 4; return;
}

void f_006530dc(void) /* sub_6530DC */
{
    FN_ENTER(0x006530dc);
    /* 006530dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006530dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006530de: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006530e0: mov ecx, dword ptr [0xa8f704] */ r_ecx = R32((u32)(0xa8f704u));
    /* 006530e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006530e8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6530edu); f_005b8610();
    /* 006530ed: mov esi, eax */ r_esi = r_eax;
    /* 006530ef: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 006530f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006530f6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006530f9: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006530fe: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x653101u); call_ind(t); }
    /* 00653101: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653103: je 0x653160 */ if (fZ) goto L_00653160;
L_00653105:; BB(0x00653105);
    /* 00653105: mov edx, dword ptr [0xa8f700] */ r_edx = R32((u32)(0xa8f700u));
    /* 0065310b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065310d: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653110: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x653115u); f_0081a588();
    /* 00653115: mov edx, dword ptr [0xa8f6fc] */ r_edx = R32((u32)(0xa8f6fcu));
    /* 0065311b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065311d: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653120: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x653125u); f_0081a588();
    /* 00653125: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00653128: mov ecx, dword ptr [0xa8f704] */ r_ecx = R32((u32)(0xa8f704u));
    /* 0065312e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653130: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x653135u); f_005b8624();
    /* 00653135: mov ecx, eax */ r_ecx = r_eax;
    /* 00653137: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65313cu); f_00829cc8();
    /* 0065313c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x653141u); f_0082d7b0();
    /* 00653141: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00653144: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x653149u); f_0082d838();
    /* 00653149: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0065314c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065314e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x653153u); f_0082d8bc();
    /* 00653153: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00653154: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00653156: call 0x653164 */ r_esp -= 4; W32(r_esp, 0x65315bu); f_00653164();
    /* 0065315b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x653160u); f_0082da80();
L_00653160:; BB(0x00653160);
    /* 00653160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653161: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00653162: ret  */ FN_RET(0x006530dc); r_esp += 4; return;
}

void f_00653164(void) /* sub_653164 */
{
    FN_ENTER(0x00653164);
    /* 00653164: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00653165: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00653166: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653167: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0065316b: mov ebx, eax */ r_ebx = r_eax;
    /* 0065316d: mov esi, ecx */ r_esi = r_ecx;
L_0065316f:; BB(0x0065316f);
    /* 0065316f: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00653171: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x653176u); f_0082d7b0();
    /* 00653176: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065317c: jne 0x653186 */ if (!fZ) goto L_00653186;
L_0065317e:; BB(0x0065317e);
    /* 0065317e: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00653181: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x653186u); f_0082d838();
L_00653186:; BB(0x00653186);
    /* 00653186: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065318c: jne 0x65319b */ if (!fZ) goto L_0065319b;
L_0065318e:; BB(0x0065318e);
    /* 0065318e: mov edx, edi */ r_edx = r_edi;
    /* 00653190: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00653193: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 00653196: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x65319bu); f_00830df8();
L_0065319b:; BB(0x0065319b);
    /* 0065319b: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006531a1: jne 0x6531ab */ if (!fZ) goto L_006531ab;
L_006531a3:; BB(0x006531a3);
    /* 006531a3: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 006531a6: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x6531abu); f_00831290();
L_006531ab:; BB(0x006531ab);
    /* 006531ab: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006531b1: jne 0x6531d1 */ if (!fZ) goto L_006531d1;
L_006531b3:; BB(0x006531b3);
    /* 006531b3: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006531b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006531b8: je 0x6531d1 */ if (fZ) goto L_006531d1;
L_006531ba:; BB(0x006531ba);
    /* 006531ba: cmp ebx, dword ptr [0xa8f700] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa8f700u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006531c0: je 0x6531f2 */ if (fZ) goto L_006531f2;
L_006531c2:; BB(0x006531c2);
    /* 006531c2: cmp ebx, dword ptr [0xa8f6fc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa8f6fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006531c8: je 0x6531f2 */ if (fZ) goto L_006531f2;
L_006531ca:; BB(0x006531ca);
    /* 006531ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006531cb: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6531d0u); f_008321d8();
    /* 006531d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006531d1:; BB(0x006531d1);
    /* 006531d1: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 006531d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006531d6: je 0x6531e0 */ if (fZ) goto L_006531e0;
L_006531d8:; BB(0x006531d8);
    /* 006531d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006531d9: mov ecx, esi */ r_ecx = r_esi;
    /* 006531db: call 0x653164 */ r_esp -= 4; W32(r_esp, 0x6531e0u); f_00653164();
L_006531e0:; BB(0x006531e0);
    /* 006531e0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6531e5u); f_0082da80();
    /* 006531e5: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 006531e8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006531ea: jne 0x65316f */ if (!fZ) goto L_0065316f;
L_006531ec:; BB(0x006531ec);
    /* 006531ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006531ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006531ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006531ef: ret 4 */ FN_RET(0x00653164); r_esp += 8; return;
L_006531f2:; BB(0x006531f2);
    /* 006531f2: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6531f7u); f_0082dbac();
    /* 006531f7: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 006531fd: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00653203: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00653206: lea edi, [esi + 0xd4] */ r_edi = (u32)(r_esi+0xd4u);
    /* 0065320c: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00653212: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00653213: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x653218u); f_0082d710();
    /* 00653218: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065321b: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x653220u); f_008321d8();
    /* 00653220: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653225: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x65322au); f_0082d710();
    /* 0065322a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065322d: mov edx, dword ptr [0xaab518] */ r_edx = R32((u32)(0xaab518u));
    /* 00653233: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00653239: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65323eu); f_0082dab0();
    /* 0065323e: jmp 0x6531d1 */ goto L_006531d1;
}

void f_00653240(void) /* sub_653240 */
{
    FN_ENTER(0x00653240);
    /* 00653240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653241: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653242: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00653244: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00653249: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065324b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0065324d: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00653252: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x653255u); call_ind(t); }
    /* 00653255: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653257: je 0x653303 */ if (fZ) goto L_00653303;
L_0065325d:; BB(0x0065325d);
    /* 0065325d: mov eax, dword ptr [0xa8f700] */ r_eax = R32((u32)(0xa8f700u));
    /* 00653262: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653264: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653267: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x65326cu); f_0081a588();
    /* 0065326c: mov eax, dword ptr [0xa8f6fc] */ r_eax = R32((u32)(0xa8f6fcu));
    /* 00653271: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653273: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653276: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x65327bu); f_0081a588();
    /* 0065327b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065327e: mov ecx, dword ptr [0xa8f704] */ r_ecx = R32((u32)(0xa8f704u));
    /* 00653284: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653286: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65328bu); f_005b8610();
    /* 0065328b: mov ebp, eax */ r_ebp = r_eax;
    /* 0065328d: mov ecx, dword ptr [0xa8f704] */ r_ecx = R32((u32)(0xa8f704u));
    /* 00653293: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653295: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65329au); f_005b8624();
    /* 0065329a: mov ecx, eax */ r_ecx = r_eax;
    /* 0065329c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6532a1u); f_00829cc8();
    /* 006532a1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6532a6u); f_0082d7b0();
    /* 006532a6: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 006532a9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6532aeu); f_0082d838();
    /* 006532ae: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 006532b1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006532b3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6532b8u); f_0082d8bc();
    /* 006532b8: fld dword ptr [ebx + 0xb0] */ FPUSH(R_F32((u32)(r_ebx+0xb0u)));
    /* 006532be: fcomp dword ptr [0x9371e8] */ fx_compare(ST(0), R_F32((u32)(0x9371e8u))); FPOP();
    /* 006532c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006532c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006532c7: jbe 0x6532f6 */ if ((fC||fZ)) goto L_006532f6;
L_006532c9:; BB(0x006532c9);
    /* 006532c9: mov ecx, dword ptr [0xa8f704] */ r_ecx = R32((u32)(0xa8f704u));
    /* 006532cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006532d1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6532d6u); f_005b8610();
    /* 006532d6: mov ebp, eax */ r_ebp = r_eax;
    /* 006532d8: mov ecx, dword ptr [0xa8f704] */ r_ecx = R32((u32)(0xa8f704u));
    /* 006532de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006532e0: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6532e5u); f_005b8638();
    /* 006532e5: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006532eb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006532ed: mov edx, eax */ r_edx = r_eax;
    /* 006532ef: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x6532f4u); f_0083bd00();
    /* 006532f4: jmp 0x6532fe */ goto L_006532fe;
L_006532f6:; BB(0x006532f6);
    /* 006532f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006532f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006532f9: call 0x653164 */ r_esp -= 4; W32(r_esp, 0x6532feu); f_00653164();
L_006532fe:; BB(0x006532fe);
    /* 006532fe: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x653303u); f_0082da80();
L_00653303:; BB(0x00653303);
    /* 00653303: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00653304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653305: ret  */ FN_RET(0x00653240); r_esp += 4; return;
}

void f_00653308(void) /* sub_653308 */
{
    FN_ENTER(0x00653308);
    /* 00653308: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653309: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065330b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0065330d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065330f: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x653312u); call_ind(t); }
    /* 00653312: push dword ptr [ebx + 0xc8] */ { u32 v = R32((u32)(r_ebx+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653318: push 0x93723c */ { u32 v = 0x93723cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065331d: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00653322: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x653327u); f_0061cdb0();
    /* 00653327: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065332a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065332b: ret  */ FN_RET(0x00653308); r_esp += 4; return;
}

void f_0065332c(void) /* sub_65332C */
{
    FN_ENTER(0x0065332c);
    /* 0065332c: mov ecx, dword ptr [0xa8f704] */ r_ecx = R32((u32)(0xa8f704u));
    /* 00653332: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653334: je 0x653349 */ if (fZ) goto L_00653349;
L_00653336:; BB(0x00653336);
    /* 00653336: je 0x65333f */ if (fZ) goto L_0065333f;
L_00653338:; BB(0x00653338);
    /* 00653338: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065333a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65333fu); f_004066a8();
L_0065333f:; BB(0x0065333f);
    /* 0065333f: mov dword ptr [0xa8f704], 0 */ W32((u32)(0xa8f704u), 0x0u);
L_00653349:; BB(0x00653349);
    /* 00653349: ret  */ FN_RET(0x0065332c); r_esp += 4; return;
}

void f_0065334c(void)
{
    FN_ENTER(0x0065334c);
    /* 0065334c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065334d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065334f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653351: push 0x8e6b94 */ { u32 v = 0x8e6b94u; r_esp -= 4; W32(r_esp, v); }
    /* 00653356: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065335c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065335d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00653364: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653367: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065336a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065336d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00653370: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00653373: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 00653378: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065337f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x653384u); f_005caba4();
    /* 00653384: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00653385: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00653388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065338a: je 0x6533c3 */ if (fZ) goto L_006533c3;
L_0065338c:; BB(0x0065338c);
    /* 0065338c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00653393: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065339a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065339d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006533a3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006533a6: call 0x6533c8 */ r_esp -= 4; W32(r_esp, 0x6533abu); f_006533c8();
    /* 006533ab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006533ae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006533b5:; BB(0x006533b5);
    /* 006533b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006533b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006533bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006533c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006533c2: ret  */ FN_RET(0x0065334c); r_esp += 4; return;
L_006533c3:; BB(0x006533c3);
    /* 006533c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006533c5: jmp 0x6533b5 */ goto L_006533b5;
}

void f_006533c8(void) /* sub_6533C8 */
{
    FN_ENTER(0x006533c8);
    /* 006533c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006533c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006533cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006533cd: push 0x8e6bb0 */ { u32 v = 0x8e6bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006533d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006533d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006533d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006533e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006533e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006533e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006533e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006533ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006533ef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006533f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006533f5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006533f8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006533fb: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x653400u); f_00619df0();
    /* 00653400: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00653407: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065340a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065340d: mov dword ptr [ecx], 0xb31bc0 */ W32((u32)(r_ecx), 0xb31bc0u);
    /* 00653413: mov eax, dword ptr [0x9c7988] */ r_eax = R32((u32)(0x9c7988u));
    /* 00653418: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00653419: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065341c: call dword ptr [0xb31bd4] */ { u32 t = R32((u32)(0xb31bd4u)); r_esp -= 4; W32(r_esp, 0x653422u); call_ind(t); }
    /* 00653422: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00653425: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00653427: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x65342au); call_ind(t); }
    /* 0065342a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065342d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065342f: push 0x9c798c */ { u32 v = 0x9c798cu; r_esp -= 4; W32(r_esp, v); }
    /* 00653434: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x653439u); f_007b9a88();
    /* 00653439: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065343c: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x653441u); f_007b999c();
    /* 00653441: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00653442: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00653445: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65344au); f_007b4f54();
    /* 0065344a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065344d: mov ecx, dword ptr [0xa8f704] */ r_ecx = R32((u32)(0xa8f704u));
    /* 00653453: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 0065345d: mov dword ptr [eax + 0xb8], 0x3f000000 */ W32((u32)(r_eax+0xb8u), 0x3f000000u);
    /* 00653467: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653469: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65346eu); f_005b8638();
    /* 0065346e: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00653471: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00653474: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00653477: mov dword ptr [ecx + 0xd0], 0x100001 */ W32((u32)(r_ecx+0xd0u), 0x100001u);
    /* 00653481: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00653484: fadd dword ptr [edx*4 + 0x9371b8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9371b8u));
    /* 0065348b: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 00653491: mov eax, ecx */ r_eax = r_ecx;
    /* 00653493: mov dword ptr [ecx + 0xd4], 0x3f800000 */ W32((u32)(r_ecx+0xd4u), 0x3f800000u);
    /* 0065349d: mov dword ptr [ecx + 0xd8], 0x3f800000 */ W32((u32)(r_ecx+0xd8u), 0x3f800000u);
    /* 006534a7: mov dword ptr [ecx + 0xdc], 0x3f800000 */ W32((u32)(r_ecx+0xdcu), 0x3f800000u);
    /* 006534b1: mov dword ptr [ecx + 0xe0], 0x3f800000 */ W32((u32)(r_ecx+0xe0u), 0x3f800000u);
    /* 006534bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006534be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006534c5: mov esp, ebp */ r_esp = r_ebp;
    /* 006534c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006534c8: ret 8 */ FN_RET(0x006533c8); r_esp += 12; return;
}

void f_006534cc(void) /* sub_6534CC */
{
    FN_ENTER(0x006534cc);
    /* 006534cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006534cd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006534cf: mov edx, dword ptr [ebp + 0xd0] */ r_edx = R32((u32)(r_ebp+0xd0u));
    /* 006534d5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006534d8: jne 0x653538 */ if (!fZ) goto L_00653538;
L_006534da:; BB(0x006534da);
    /* 006534da: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 006534e0: je 0x65350d */ if (fZ) goto L_0065350d;
L_006534e2:; BB(0x006534e2);
    /* 006534e2: fld dword ptr [0x9371cc] */ FPUSH(R_F32((u32)(0x9371ccu)));
    /* 006534e8: fadd dword ptr [ebp + 0xd8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xd8u));
    /* 006534ee: fcom dword ptr [0x9371d4] */ fx_compare(ST(0), R_F32((u32)(0x9371d4u))); 
    /* 006534f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006534f6: fstp dword ptr [ebp + 0xd8] */ W_F32((u32)(r_ebp+0xd8u), ST(0)); FPOP();
    /* 006534fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006534fd: jb 0x653536 */ if (fC) goto L_00653536;
L_006534ff:; BB(0x006534ff);
    /* 006534ff: and edx, 0xffefffff */ {  u32 a = r_edx; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653505: mov dword ptr [ebp + 0xd0], edx */ W32((u32)(r_ebp+0xd0u), r_edx);
    /* 0065350b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065350c: ret  */ FN_RET(0x006534cc); r_esp += 4; return;
L_0065350d:; BB(0x0065350d);
    /* 0065350d: fld dword ptr [ebp + 0xd8] */ FPUSH(R_F32((u32)(r_ebp+0xd8u)));
    /* 00653513: fsub dword ptr [0x9371cc] */ ST(0) = ST(0) - R_F32((u32)(0x9371ccu));
    /* 00653519: fcom dword ptr [0x9371d8] */ fx_compare(ST(0), R_F32((u32)(0x9371d8u))); 
    /* 0065351f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00653521: fstp dword ptr [ebp + 0xd8] */ W_F32((u32)(r_ebp+0xd8u), ST(0)); FPOP();
    /* 00653527: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00653528: ja 0x653536 */ if ((!fC&&!fZ)) goto L_00653536;
L_0065352a:; BB(0x0065352a);
    /* 0065352a: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653530: mov dword ptr [ebp + 0xd0], edx */ W32((u32)(r_ebp+0xd0u), r_edx);
L_00653536:; BB(0x00653536);
    /* 00653536: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653537: ret  */ FN_RET(0x006534cc); r_esp += 4; return;
L_00653538:; BB(0x00653538);
    /* 00653538: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065353d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0065353f: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x653544u); f_006134c8();
    /* 00653544: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00653547: jne 0x653536 */ if (!fZ) goto L_00653536;
L_00653549:; BB(0x00653549);
    /* 00653549: mov dword ptr [ebp + 0xac], 1 */ W32((u32)(r_ebp+0xacu), 0x1u);
    /* 00653553: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00653555: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00653557: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653559: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x65355eu); f_007b52c4();
    /* 0065355e: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x653563u); f_00807ac0();
    /* 00653563: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653566: jl 0x6535a5 */ if ((fS!=fO)) goto L_006535a5;
L_00653568:; BB(0x00653568);
    /* 00653568: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065356b: jle 0x65358e */ if ((fZ||fS!=fO)) goto L_0065358e;
L_0065356d:; BB(0x0065356d);
    /* 0065356d: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653570: jl 0x6535a5 */ if ((fS!=fO)) goto L_006535a5;
L_00653572:; BB(0x00653572);
    /* 00653572: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653575: jg 0x6535a5 */ if ((!fZ&&fS==fO)) goto L_006535a5;
L_00653577:; BB(0x00653577);
    /* 00653577: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0065357a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065357c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065357d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065357e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065357f: push 0x4b0 */ { u32 v = 0x4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653584: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x653589u); f_00814298();
    /* 00653589: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065358c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065358d: ret  */ FN_RET(0x006534cc); r_esp += 4; return;
L_0065358e:; BB(0x0065358e);
    /* 0065358e: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00653591: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00653593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653595: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653596: push 0x499 */ { u32 v = 0x499u; r_esp -= 4; W32(r_esp, v); }
    /* 0065359b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6535a0u); f_00814298();
    /* 006535a0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006535a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006535a4: ret  */ FN_RET(0x006534cc); r_esp += 4; return;
L_006535a5:; BB(0x006535a5);
    /* 006535a5: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006535a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006535aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006535ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006535ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006535ad: push 0x558 */ { u32 v = 0x558u; r_esp -= 4; W32(r_esp, v); }
    /* 006535b2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6535b7u); f_00814298();
    /* 006535b7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006535ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006535bb: ret  */ FN_RET(0x006534cc); r_esp += 4; return;
}

void f_006535bc(void) /* sub_6535BC */
{
    FN_ENTER(0x006535bc);
    /* 006535bc: fld dword ptr [0x9371c8] */ FPUSH(R_F32((u32)(0x9371c8u)));
    /* 006535c2: fadd dword ptr [ecx + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb4u));
    /* 006535c8: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 006535ce: fadd dword ptr [ecx + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb8u));
    /* 006535d4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006535d6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006535d8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006535d9: jbe 0x6535ee */ if ((fC||fZ)) goto L_006535ee;
L_006535db:; BB(0x006535db);
    /* 006535db: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006535dd: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006535e3: mov dword ptr [ecx + 0xac], 2 */ W32((u32)(r_ecx+0xacu), 0x2u);
    /* 006535ed: ret  */ FN_RET(0x006535bc); r_esp += 4; return;
L_006535ee:; BB(0x006535ee);
    /* 006535ee: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006535f0: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006535f6: ret  */ FN_RET(0x006535bc); r_esp += 4; return;
}

void f_006535f8(void) /* sub_6535F8 */
{
    FN_ENTER(0x006535f8);
    /* 006535f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006535f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006535fb: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 00653601: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00653603: jne 0x65366d */ if (!fZ) goto L_0065366d;
L_00653605:; BB(0x00653605);
    /* 00653605: mov dword ptr [ebp + 0xac], 3 */ W32((u32)(r_ebp+0xacu), 0x3u);
    /* 0065360f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x653614u); f_00807ac0();
    /* 00653614: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653617: jl 0x653656 */ if ((fS!=fO)) goto L_00653656;
L_00653619:; BB(0x00653619);
    /* 00653619: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065361c: jle 0x65363f */ if ((fZ||fS!=fO)) goto L_0065363f;
L_0065361e:; BB(0x0065361e);
    /* 0065361e: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653621: jl 0x653656 */ if ((fS!=fO)) goto L_00653656;
L_00653623:; BB(0x00653623);
    /* 00653623: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653626: jg 0x653656 */ if ((!fZ&&fS==fO)) goto L_00653656;
L_00653628:; BB(0x00653628);
    /* 00653628: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0065362b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065362d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065362e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065362f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653630: push 0x4b0 */ { u32 v = 0x4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653635: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x65363au); f_00814298();
    /* 0065363a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065363d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065363e: ret  */ FN_RET(0x006535f8); r_esp += 4; return;
L_0065363f:; BB(0x0065363f);
    /* 0065363f: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00653642: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00653644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653645: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653646: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653647: push 0x499 */ { u32 v = 0x499u; r_esp -= 4; W32(r_esp, v); }
    /* 0065364c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x653651u); f_00814298();
    /* 00653651: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00653654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653655: ret  */ FN_RET(0x006535f8); r_esp += 4; return;
L_00653656:; BB(0x00653656);
    /* 00653656: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00653659: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065365b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065365c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065365d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065365e: push 0x558 */ { u32 v = 0x558u; r_esp -= 4; W32(r_esp, v); }
    /* 00653663: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x653668u); f_00814298();
    /* 00653668: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0065366b:; BB(0x0065366b);
    /* 0065366b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065366c: ret  */ FN_RET(0x006535f8); r_esp += 4; return;
L_0065366d:; BB(0x0065366d);
    /* 0065366d: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00653672: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00653674: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x653679u); f_006134c8();
    /* 00653679: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065367b: jne 0x65366b */ if (!fZ) goto L_0065366b;
L_0065367d:; BB(0x0065367d);
    /* 0065367d: mov dword ptr [ebp + 0xac], 3 */ W32((u32)(r_ebp+0xacu), 0x3u);
    /* 00653687: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x65368cu); f_00807ac0();
    /* 0065368c: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065368f: jl 0x6536ce */ if ((fS!=fO)) goto L_006536ce;
L_00653691:; BB(0x00653691);
    /* 00653691: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653694: jle 0x6536b7 */ if ((fZ||fS!=fO)) goto L_006536b7;
L_00653696:; BB(0x00653696);
    /* 00653696: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653699: jl 0x6536ce */ if ((fS!=fO)) goto L_006536ce;
L_0065369b:; BB(0x0065369b);
    /* 0065369b: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065369e: jg 0x6536ce */ if ((!fZ&&fS==fO)) goto L_006536ce;
L_006536a0:; BB(0x006536a0);
    /* 006536a0: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006536a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006536a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006536a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006536a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006536a8: push 0x4b0 */ { u32 v = 0x4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006536ad: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6536b2u); f_00814298();
    /* 006536b2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006536b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006536b6: ret  */ FN_RET(0x006535f8); r_esp += 4; return;
L_006536b7:; BB(0x006536b7);
    /* 006536b7: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006536ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006536bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006536bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006536be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006536bf: push 0x499 */ { u32 v = 0x499u; r_esp -= 4; W32(r_esp, v); }
    /* 006536c4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6536c9u); f_00814298();
    /* 006536c9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006536cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006536cd: ret  */ FN_RET(0x006535f8); r_esp += 4; return;
L_006536ce:; BB(0x006536ce);
    /* 006536ce: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006536d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006536d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006536d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006536d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006536d6: push 0x558 */ { u32 v = 0x558u; r_esp -= 4; W32(r_esp, v); }
    /* 006536db: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6536e0u); f_00814298();
    /* 006536e0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006536e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006536e4: ret  */ FN_RET(0x006535f8); r_esp += 4; return;
}

void f_006536e8(void) /* sub_6536E8 */
{
    FN_ENTER(0x006536e8);
    /* 006536e8: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 006536ee: fsub dword ptr [ecx + 0xb8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xb8u));
    /* 006536f4: fcom dword ptr [0x9371c0] */ fx_compare(ST(0), R_F32((u32)(0x9371c0u))); 
    /* 006536fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006536fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006536fd: jb 0x653706 */ if (fC) goto L_00653706;
L_006536ff:; BB(0x006536ff);
    /* 006536ff: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 00653705: ret  */ FN_RET(0x006536e8); r_esp += 4; return;
L_00653706:; BB(0x00653706);
    /* 00653706: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00653708: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065370a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065370c: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 00653712: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00653714: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
    /* 0065371a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065371b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x653720u); f_007b52ec();
    /* 00653720: ret  */ FN_RET(0x006536e8); r_esp += 4; return;
}

void f_00653724(void) /* sub_653724 */
{
    FN_ENTER(0x00653724);
    /* 00653724: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653725: mov ebp, esp */ r_ebp = r_esp;
    /* 00653727: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653729: push 0x8e6bd8 */ { u32 v = 0x8e6bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065372e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00653734: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653735: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065373c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065373f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00653742: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00653745: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00653748: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065374b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00653750: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00653757: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65375cu); f_008581c5();
    /* 0065375c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065375d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00653760: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653762: je 0x6537d8 */ if (fZ) goto L_006537d8;
L_00653764:; BB(0x00653764);
    /* 00653764: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065376b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00653772: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653775: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00653777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653778: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065377a: push 0x9c7978 */ { u32 v = 0x9c7978u; r_esp -= 4; W32(r_esp, v); }
    /* 0065377f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653781: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x653786u); f_005b7a84();
    /* 00653786: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653789: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00653790:; BB(0x00653790);
    /* 00653790: mov dword ptr [0xa8f704], eax */ W32((u32)(0xa8f704u), r_eax);
    /* 00653795: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065379c: mov ecx, dword ptr [0xa8f704] */ r_ecx = R32((u32)(0xa8f704u));
    /* 006537a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006537a4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6537a9u); f_005b8610();
    /* 006537a9: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 006537ac: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006537af: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 006537b2: mov edi, dword ptr [ecx + 0x2c] */ r_edi = R32((u32)(r_ecx+0x2cu));
    /* 006537b5: mov esi, dword ptr [edi + 0x30] */ r_esi = R32((u32)(r_edi+0x30u));
    /* 006537b8: mov dword ptr [0xa8f700], edi */ W32((u32)(0xa8f700u), r_edi);
    /* 006537be: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006537c1: mov dword ptr [0xa8f6fc], esi */ W32((u32)(0xa8f6fcu), r_esi);
    /* 006537c7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006537ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006537cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006537d4: mov esp, ebp */ r_esp = r_ebp;
    /* 006537d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006537d7: ret  */ FN_RET(0x00653724); r_esp += 4; return;
L_006537d8:; BB(0x006537d8);
    /* 006537d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006537da: jmp 0x653790 */ goto L_00653790;
}

void f_006537dc(void) /* sub_6537DC */
{
    FN_ENTER(0x006537dc);
    /* 006537dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006537dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006537df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006537e1: call 0x653874 */ r_esp -= 4; W32(r_esp, 0x6537e6u); f_00653874();
    /* 006537e6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006537ea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006537ec: jne 0x6537f2 */ if (!fZ) goto L_006537f2;
L_006537ee:; BB(0x006537ee);
    /* 006537ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006537ef: ret 4 */ FN_RET(0x006537dc); r_esp += 8; return;
L_006537f2:; BB(0x006537f2);
    /* 006537f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006537f3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6537f8u); f_005c2f74();
    /* 006537f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006537f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006537fa: ret 4 */ FN_RET(0x006537dc); r_esp += 8; return;
}

void f_00653800(void) /* sub_653800 */
{
    FN_ENTER(0x00653800);
    /* 00653800: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653801: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00653803: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00653805: call 0x653824 */ r_esp -= 4; W32(r_esp, 0x65380au); f_00653824();
    /* 0065380a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065380e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653810: jne 0x653816 */ if (!fZ) goto L_00653816;
L_00653812:; BB(0x00653812);
    /* 00653812: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00653813: ret 4 */ FN_RET(0x00653800); r_esp += 8; return;
L_00653816:; BB(0x00653816);
    /* 00653816: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653817: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65381cu); f_005c2f74();
    /* 0065381c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065381d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065381e: ret 4 */ FN_RET(0x00653800); r_esp += 8; return;
}

void f_00653824(void) /* sub_653824 */
{
    FN_ENTER(0x00653824);
    /* 00653824: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653825: mov ebp, esp */ r_ebp = r_esp;
    /* 00653827: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653829: push 0x8e6bf4 */ { u32 v = 0x8e6bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065382e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00653834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653835: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065383c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065383f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00653842: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00653845: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00653848: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065384b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065384e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653851: mov dword ptr [ecx], 0xb31fc4 */ W32((u32)(r_ecx), 0xb31fc4u);
    /* 00653857: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065385e: call 0x653874 */ r_esp -= 4; W32(r_esp, 0x653863u); f_00653874();
    /* 00653863: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653866: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065386d: mov esp, ebp */ r_esp = r_ebp;
    /* 0065386f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653870: ret  */ FN_RET(0x00653824); r_esp += 4; return;
}

void f_00653874(void) /* sub_653874 */
{
    FN_ENTER(0x00653874);
    /* 00653874: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653875: mov ebp, esp */ r_ebp = r_esp;
    /* 00653877: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653879: push 0x8e6c10 */ { u32 v = 0x8e6c10u; r_esp -= 4; W32(r_esp, v); }
    /* 0065387e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00653884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653885: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065388c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065388f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00653892: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00653895: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00653898: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065389b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065389e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006538a1: mov dword ptr [ecx], 0xb31f90 */ W32((u32)(r_ecx), 0xb31f90u);
    /* 006538a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006538ae: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6538b3u); f_007ba1f0();
    /* 006538b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006538b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006538bd: mov esp, ebp */ r_esp = r_ebp;
    /* 006538bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006538c0: ret  */ FN_RET(0x00653874); r_esp += 4; return;
}

void f_006538c4(void) /* sub_6538C4 */
{
    FN_ENTER(0x006538c4);
    /* 006538c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006538c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006538c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006538c9: call 0x6538e8 */ r_esp -= 4; W32(r_esp, 0x6538ceu); f_006538e8();
    /* 006538ce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006538d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006538d4: jne 0x6538da */ if (!fZ) goto L_006538da;
L_006538d6:; BB(0x006538d6);
    /* 006538d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006538d7: ret 4 */ FN_RET(0x006538c4); r_esp += 8; return;
L_006538da:; BB(0x006538da);
    /* 006538da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006538db: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6538e0u); f_005c2f74();
    /* 006538e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006538e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006538e2: ret 4 */ FN_RET(0x006538c4); r_esp += 8; return;
}

void f_006538e8(void) /* sub_6538E8 */
{
    FN_ENTER(0x006538e8);
    /* 006538e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006538e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006538eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006538ed: push 0x8e6c2c */ { u32 v = 0x8e6c2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006538f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006538f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006538f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00653900: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653903: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00653906: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00653909: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065390c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065390f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00653912: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653915: mov dword ptr [ecx], 0xb31ff8 */ W32((u32)(r_ecx), 0xb31ff8u);
    /* 0065391b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00653922: call 0x653874 */ r_esp -= 4; W32(r_esp, 0x653927u); f_00653874();
    /* 00653927: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065392a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00653931: mov esp, ebp */ r_esp = r_ebp;
    /* 00653933: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653934: ret  */ FN_RET(0x006538e8); r_esp += 4; return;
}

void f_00653938(void) /* sub_653938 */
{
    FN_ENTER(0x00653938);
    /* 00653938: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653939: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065393b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065393d: call 0x65395c */ r_esp -= 4; W32(r_esp, 0x653942u); f_0065395c();
    /* 00653942: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00653946: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653948: jne 0x65394e */ if (!fZ) goto L_0065394e;
L_0065394a:; BB(0x0065394a);
    /* 0065394a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065394b: ret 4 */ FN_RET(0x00653938); r_esp += 8; return;
L_0065394e:; BB(0x0065394e);
    /* 0065394e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065394f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x653954u); f_005c2f74();
    /* 00653954: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00653955: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00653956: ret 4 */ FN_RET(0x00653938); r_esp += 8; return;
}

void f_0065395c(void) /* sub_65395C */
{
    FN_ENTER(0x0065395c);
    /* 0065395c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065395d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065395f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653961: push 0x8e6c48 */ { u32 v = 0x8e6c48u; r_esp -= 4; W32(r_esp, v); }
    /* 00653966: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065396c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065396d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00653974: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653977: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065397a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065397d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00653980: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00653983: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00653986: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653989: mov dword ptr [ecx], 0xb3202c */ W32((u32)(r_ecx), 0xb3202cu);
    /* 0065398f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00653996: call 0x653874 */ r_esp -= 4; W32(r_esp, 0x65399bu); f_00653874();
    /* 0065399b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065399e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006539a5: mov esp, ebp */ r_esp = r_ebp;
    /* 006539a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006539a8: ret  */ FN_RET(0x0065395c); r_esp += 4; return;
}

void f_006539ac(void) /* sub_6539AC */
{
    FN_ENTER(0x006539ac);
    /* 006539ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006539ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006539af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006539b1: call 0x6539d0 */ r_esp -= 4; W32(r_esp, 0x6539b6u); f_006539d0();
    /* 006539b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006539ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006539bc: jne 0x6539c2 */ if (!fZ) goto L_006539c2;
L_006539be:; BB(0x006539be);
    /* 006539be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006539bf: ret 4 */ FN_RET(0x006539ac); r_esp += 8; return;
L_006539c2:; BB(0x006539c2);
    /* 006539c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006539c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6539c8u); f_005c2f74();
    /* 006539c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006539c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006539ca: ret 4 */ FN_RET(0x006539ac); r_esp += 8; return;
}

void f_006539d0(void) /* sub_6539D0 */
{
    FN_ENTER(0x006539d0);
    /* 006539d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006539d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006539d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006539d5: push 0x8e6c64 */ { u32 v = 0x8e6c64u; r_esp -= 4; W32(r_esp, v); }
    /* 006539da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006539e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006539e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006539e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006539eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006539ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006539f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006539f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006539f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006539fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006539fd: mov dword ptr [ecx], 0xb32060 */ W32((u32)(r_ecx), 0xb32060u);
    /* 00653a03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00653a0a: call 0x653874 */ r_esp -= 4; W32(r_esp, 0x653a0fu); f_00653874();
    /* 00653a0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653a12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00653a19: mov esp, ebp */ r_esp = r_ebp;
    /* 00653a1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653a1c: ret  */ FN_RET(0x006539d0); r_esp += 4; return;
}

void f_00653a20(void) /* sub_653A20 */
{
    FN_ENTER(0x00653a20);
    /* 00653a20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653a21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00653a23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00653a25: call 0x653a44 */ r_esp -= 4; W32(r_esp, 0x653a2au); f_00653a44();
    /* 00653a2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00653a2e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653a30: jne 0x653a36 */ if (!fZ) goto L_00653a36;
L_00653a32:; BB(0x00653a32);
    /* 00653a32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00653a33: ret 4 */ FN_RET(0x00653a20); r_esp += 8; return;
L_00653a36:; BB(0x00653a36);
    /* 00653a36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653a37: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x653a3cu); f_005c2f74();
    /* 00653a3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00653a3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00653a3e: ret 4 */ FN_RET(0x00653a20); r_esp += 8; return;
}

void f_00653a44(void) /* sub_653A44 */
{
    FN_ENTER(0x00653a44);
    /* 00653a44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653a45: mov ebp, esp */ r_ebp = r_esp;
    /* 00653a47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653a49: push 0x8e6c80 */ { u32 v = 0x8e6c80u; r_esp -= 4; W32(r_esp, v); }
    /* 00653a4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00653a54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653a55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00653a5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653a5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00653a62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00653a65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00653a68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00653a6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00653a6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653a71: mov dword ptr [ecx], 0xb32094 */ W32((u32)(r_ecx), 0xb32094u);
    /* 00653a77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00653a7e: call 0x653874 */ r_esp -= 4; W32(r_esp, 0x653a83u); f_00653874();
    /* 00653a83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653a86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00653a8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00653a8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653a90: ret  */ FN_RET(0x00653a44); r_esp += 4; return;
}

void f_00653a94(void) /* sub_653A94 */
{
    FN_ENTER(0x00653a94);
    /* 00653a94: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00653a96: call dword ptr [eax + 0x2c] */ { u32 t = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, 0x653a99u); call_ind(t); }
    /* 00653a99: ret  */ FN_RET(0x00653a94); r_esp += 4; return;
}

void f_00653a9c(void) /* sub_653A9C */
{
    FN_ENTER(0x00653a9c);
    /* 00653a9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00653a9d: mov esi, ecx */ r_esi = r_ecx;
    /* 00653a9f: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00653aa4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00653aa7: je 0x653ac7 */ if (fZ) goto L_00653ac7;
L_00653aa9:; BB(0x00653aa9);
    /* 00653aa9: push dword ptr [esi + 0x94] */ { u32 v = R32((u32)(r_esi+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653aaf: push dword ptr [esi + 0x90] */ { u32 v = R32((u32)(r_esi+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653ab5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00653ab7: mov ecx, esi */ r_ecx = r_esi;
    /* 00653ab9: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x653abcu); call_ind(t); }
    /* 00653abc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653abe: je 0x653ac7 */ if (fZ) goto L_00653ac7;
L_00653ac0:; BB(0x00653ac0);
    /* 00653ac0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00653ac2: mov ecx, esi */ r_ecx = r_esi;
    /* 00653ac4: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x653ac7u); call_ind(t); }
L_00653ac7:; BB(0x00653ac7);
    /* 00653ac7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00653ac8: ret  */ FN_RET(0x00653a9c); r_esp += 4; return;
}

void f_00653acc(void) /* sub_653ACC */
{
    FN_ENTER(0x00653acc);
    /* 00653acc: mov ecx, dword ptr [0xa8f72c] */ r_ecx = R32((u32)(0xa8f72cu));
    /* 00653ad2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653ad4: je 0x653af1 */ if (fZ) goto L_00653af1;
L_00653ad6:; BB(0x00653ad6);
    /* 00653ad6: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x653adbu); f_00829de0();
    /* 00653adb: push dword ptr [0xa8f72c] */ { u32 v = R32((u32)(0xa8f72cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00653ae1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x653ae6u); f_0082e960();
    /* 00653ae6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00653ae7: mov dword ptr [0xa8f72c], 0 */ W32((u32)(0xa8f72cu), 0x0u);
L_00653af1:; BB(0x00653af1);
    /* 00653af1: mov ecx, dword ptr [0xa8f730] */ r_ecx = R32((u32)(0xa8f730u));
    /* 00653af7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653af9: je 0x653b0e */ if (fZ) goto L_00653b0e;
L_00653afb:; BB(0x00653afb);
    /* 00653afb: je 0x653b04 */ if (fZ) goto L_00653b04;
L_00653afd:; BB(0x00653afd);
    /* 00653afd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00653aff: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x653b04u); f_004066a8();
L_00653b04:; BB(0x00653b04);
    /* 00653b04: mov dword ptr [0xa8f730], 0 */ W32((u32)(0xa8f730u), 0x0u);
L_00653b0e:; BB(0x00653b0e);
    /* 00653b0e: ret  */ FN_RET(0x00653acc); r_esp += 4; return;
}

void f_00653b10(void)
{
    FN_ENTER(0x00653b10);
    /* 00653b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00653b13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653b15: push 0x8e6ca8 */ { u32 v = 0x8e6ca8u; r_esp -= 4; W32(r_esp, v); }
    /* 00653b1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00653b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653b21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00653b28: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653b2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00653b2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00653b31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00653b34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00653b37: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00653b3c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00653b43: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x653b48u); f_005caba4();
    /* 00653b48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00653b49: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00653b4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653b4e: je 0x653b87 */ if (fZ) goto L_00653b87;
L_00653b50:; BB(0x00653b50);
    /* 00653b50: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00653b57: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00653b5e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653b61: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653b67: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653b6a: call 0x653b8c */ r_esp -= 4; W32(r_esp, 0x653b6fu); f_00653b8c();
    /* 00653b6f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653b72: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00653b79:; BB(0x00653b79);
    /* 00653b79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653b7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00653b83: mov esp, ebp */ r_esp = r_ebp;
    /* 00653b85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653b86: ret  */ FN_RET(0x00653b10); r_esp += 4; return;
L_00653b87:; BB(0x00653b87);
    /* 00653b87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00653b89: jmp 0x653b79 */ goto L_00653b79;
}

void f_00653b8c(void) /* sub_653B8C */
{
    FN_ENTER(0x00653b8c);
    /* 00653b8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653b8d: mov ebp, esp */ r_ebp = r_esp;
    /* 00653b8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653b91: push 0x8e6cc4 */ { u32 v = 0x8e6cc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00653b96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00653b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653b9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00653ba4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653ba7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00653baa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00653bad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00653bb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00653bb3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00653bb6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653bb9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00653bbc: call 0x653c74 */ r_esp -= 4; W32(r_esp, 0x653bc1u); f_00653c74();
    /* 00653bc1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00653bc8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653bcb: mov dword ptr [eax], 0xb31fc4 */ W32((u32)(r_eax), 0xb31fc4u);
    /* 00653bd1: mov ecx, dword ptr [0xa8f730] */ r_ecx = R32((u32)(0xa8f730u));
    /* 00653bd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653bd9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x653bdeu); f_005b8610();
    /* 00653bde: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653be1: mov ecx, dword ptr [0xa8f730] */ r_ecx = R32((u32)(0xa8f730u));
    /* 00653be7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00653be9: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00653bef: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x653bf4u); f_005b8638();
    /* 00653bf4: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653bf7: mov ecx, dword ptr [0xa8f730] */ r_ecx = R32((u32)(0xa8f730u));
    /* 00653bfd: mov esi, dword ptr [ebx + 0x84] */ r_esi = R32((u32)(r_ebx+0x84u));
    /* 00653c03: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 00653c09: mov eax, 4 */ r_eax = 0x4u;
    /* 00653c0e: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653c11: mov edx, 0 */ r_edx = 0x0u;
    /* 00653c16: jl 0x653c1a */ if ((fS!=fO)) goto L_00653c1a;
L_00653c18:; BB(0x00653c18);
    /* 00653c18: mov esi, eax */ r_esi = r_eax;
L_00653c1a:; BB(0x00653c1a);
    /* 00653c1a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00653c1c: jg 0x653c20 */ if ((!fZ&&fS==fO)) goto L_00653c20;
L_00653c1e:; BB(0x00653c1e);
    /* 00653c1e: mov esi, edx */ r_esi = r_edx;
L_00653c20:; BB(0x00653c20);
    /* 00653c20: mov dword ptr [ebx + 0xc8], esi */ W32((u32)(r_ebx+0xc8u), r_esi);
    /* 00653c26: lea edi, [esi + esi*4] */ r_edi = (u32)(r_esi+r_esi*4);
    /* 00653c29: push dword ptr [edi*4 + 0x9372a0] */ { u32 v = R32((u32)(r_edi*4+0x9372a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653c30: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x653c35u); f_005b8638();
    /* 00653c35: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653c38: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 00653c42: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 00653c48: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
    /* 00653c52: call 0x656644 */ r_esp -= 4; W32(r_esp, 0x653c57u); f_00656644();
    /* 00653c57: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00653c5a: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00653c5d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00653c60: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00653c63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653c66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00653c6d: mov esp, ebp */ r_esp = r_ebp;
    /* 00653c6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653c70: ret 8 */ FN_RET(0x00653b8c); r_esp += 12; return;
}

void f_00653c74(void) /* sub_653C74 */
{
    FN_ENTER(0x00653c74);
    /* 00653c74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653c75: mov ebp, esp */ r_ebp = r_esp;
    /* 00653c77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00653c79: push 0x8e6ce0 */ { u32 v = 0x8e6ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 00653c7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00653c84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653c85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00653c8c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653c8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00653c92: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00653c95: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00653c98: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00653c9b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00653c9e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653ca1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00653ca4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00653ca7: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x653cacu); f_007ba278();
    /* 00653cac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00653cb3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00653cb6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00653cb9: mov dword ptr [ecx], 0xb31f90 */ W32((u32)(r_ecx), 0xb31f90u);
    /* 00653cbf: mov eax, dword ptr [0x9c7ab0] */ r_eax = R32((u32)(0x9c7ab0u));
    /* 00653cc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00653cc5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00653cc8: call dword ptr [0xb31fa4] */ { u32 t = R32((u32)(0xb31fa4u)); r_esp -= 4; W32(r_esp, 0x653cceu); call_ind(t); }
    /* 00653cce: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00653cd1: mov dword ptr [eax + 0x90], 0x43fa0000 */ W32((u32)(r_eax+0x90u), 0x43fa0000u);
    /* 00653cdb: mov dword ptr [eax + 0x94], 0x43160000 */ W32((u32)(r_eax+0x94u), 0x43160000u);
    /* 00653ce5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653ce8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00653cef: mov esp, ebp */ r_esp = r_ebp;
    /* 00653cf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653cf2: ret 8 */ FN_RET(0x00653c74); r_esp += 12; return;
}

void f_00653cf8(void) /* sub_653CF8 */
{
    FN_ENTER(0x00653cf8);
    /* 00653cf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00653cf9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653cfc: mov edi, ecx */ r_edi = r_ecx;
    /* 00653cfe: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 00653d04: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 00653d0a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00653d0d: fadd dword ptr [edx*4 + 0x9372a4] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9372a4u));
    /* 00653d14: fstp dword ptr [edi + 0xa4] */ W_F32((u32)(r_edi+0xa4u), ST(0)); FPOP();
    /* 00653d1a: mov ecx, edi */ r_ecx = r_edi;
    /* 00653d1c: call 0x653d80 */ r_esp -= 4; W32(r_esp, 0x653d21u); f_00653d80();
    /* 00653d21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653d23: jne 0x653d2f */ if (!fZ) goto L_00653d2f;
L_00653d25:; BB(0x00653d25);
    /* 00653d25: mov dword ptr [edi + 0xa4], 0 */ W32((u32)(r_edi+0xa4u), 0x0u);
L_00653d2f:; BB(0x00653d2f);
    /* 00653d2f: mov edx, dword ptr [edi + 0xc8] */ r_edx = R32((u32)(r_edi+0xc8u));
    /* 00653d35: fld dword ptr [edi + 0xa8] */ FPUSH(R_F32((u32)(r_edi+0xa8u)));
    /* 00653d3b: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 00653d3e: fadd dword ptr [eax*4 + 0x9372a8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9372a8u));
    /* 00653d45: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 00653d4b: fst dword ptr [edi + 0xa8] */ W_F32((u32)(r_edi+0xa8u), ST(0));
    /* 00653d51: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00653d54: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00653d57: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00653d5a: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00653d5d: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00653d60: fadd dword ptr [eax*4 + 0x937480] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937480u));
    /* 00653d67: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00653d69: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00653d6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00653d6c: jae 0x653d78 */ if (!fC) goto L_00653d78;
L_00653d6e:; BB(0x00653d6e);
    /* 00653d6e: mov dword ptr [edi + 0xa8], 0 */ W32((u32)(r_edi+0xa8u), 0x0u);
L_00653d78:; BB(0x00653d78);
    /* 00653d78: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00653d7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00653d7c: ret  */ FN_RET(0x00653cf8); r_esp += 4; return;
}

void f_00653d80(void) /* sub_653D80 */
{
    FN_ENTER(0x00653d80);
    /* 00653d80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00653d81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00653d82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653d83: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653d86: mov edi, ecx */ r_edi = r_ecx;
    /* 00653d88: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00653d8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653d8c: mov ecx, edi */ r_ecx = r_edi;
    /* 00653d8e: push dword ptr [edi + 0xa4] */ { u32 v = R32((u32)(r_edi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653d94: push dword ptr [edi + 0xa0] */ { u32 v = R32((u32)(r_edi+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653d9a: push dword ptr [edi + 0x98] */ { u32 v = R32((u32)(r_edi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653da0: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x653da5u); f_00653fc4();
    /* 00653da5: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00653da8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00653dac: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00653db0: mov esi, dword ptr [edi + 0x98] */ r_esi = R32((u32)(r_edi+0x98u));
    /* 00653db6: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 00653dbc: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 00653dc2: mov eax, dword ptr [edi + 0xa0] */ r_eax = R32((u32)(r_edi+0xa0u));
    /* 00653dc8: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 00653dce: mov dword ptr [edi + 0xb4], ebx */ W32((u32)(r_edi+0xb4u), r_ebx);
    /* 00653dd4: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00653dd7: mov ecx, edi */ r_ecx = r_edi;
    /* 00653dd9: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00653ddc: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00653de0: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 00653de6: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00653de9: fadd dword ptr [eax*4 + 0x9372ac] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9372acu));
    /* 00653df0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00653df4: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00653df8: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00653dfc: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x653e01u); f_00653fc4();
    /* 00653e01: mov esi, eax */ r_esi = r_eax;
    /* 00653e03: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00653e07: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00653e0b: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00653e0f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00653e13: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00653e17: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00653e1b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00653e1f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00653e22: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x653e27u); f_0082f9c4();
    /* 00653e27: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00653e2b: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 00653e2f: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00653e33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00653e34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653e35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653e36: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x653e3bu); f_007a8d98();
    /* 00653e3b: mov edx, dword ptr [edi + 0xc8] */ r_edx = R32((u32)(r_edi+0xc8u));
    /* 00653e41: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 00653e44: push dword ptr [ebx*4 + 0x9372b0] */ { u32 v = R32((u32)(r_ebx*4+0x9372b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653e4b: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653e4f: push dword ptr [edi + 0xbc] */ { u32 v = R32((u32)(r_edi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00653e55: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x653e5au); f_007a8c74();
    /* 00653e5a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00653e5d: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00653e61: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 00653e64: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00653e68: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 00653e6c: mov ebx, dword ptr [edi + 0xb8] */ r_ebx = R32((u32)(r_edi+0xb8u));
    /* 00653e72: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 00653e78: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00653e7a: fmul qword ptr [0x937478] */ ST(0) = ST(0) * R_F64((u32)(0x937478u));
    /* 00653e80: fdiv qword ptr [0x937470] */ ST(0) = ST(0) / R_F64((u32)(0x937470u));
    /* 00653e86: mov edx, dword ptr [edi + 0xc8] */ r_edx = R32((u32)(r_edi+0xc8u));
    /* 00653e8c: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00653e90: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00653e95: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00653e9a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00653e9e: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00653ea2: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00653ea6: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00653eaa: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00653eae: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 00653eb1: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00653eb5: push dword ptr [edx*4 + 0x9372b0] */ { u32 v = R32((u32)(r_edx*4+0x9372b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00653ebd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653ebe: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x653ec3u); f_007a8c74();
    /* 00653ec3: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00653ec7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00653ec8: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 00653ece: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x653ed3u); f_007a900c();
    /* 00653ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00653ed6: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653ed9: jle 0x653f2a */ if ((fZ||fS!=fO)) goto L_00653f2a;
L_00653edb:; BB(0x00653edb);
    /* 00653edb: mov eax, dword ptr [edi + 0xc4] */ r_eax = R32((u32)(r_edi+0xc4u));
    /* 00653ee1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00653ee3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00653ee5: mov ebx, 0xfffffe00 */ r_ebx = 0xfffffe00u;
    /* 00653eea: jl 0x653eee */ if ((fS!=fO)) goto L_00653eee;
L_00653eec:; BB(0x00653eec);
    /* 00653eec: mov eax, edx */ r_eax = r_edx;
L_00653eee:; BB(0x00653eee);
    /* 00653eee: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 00653ef4: add eax, -0x40 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00653ef7: cmp eax, 0xfffffe00 */ {  u32 a = r_eax; u32 b = 0xfffffe00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653efc: jg 0x653f00 */ if ((!fZ&&fS==fO)) goto L_00653f00;
L_00653efe:; BB(0x00653efe);
    /* 00653efe: mov eax, ebx */ r_eax = r_ebx;
L_00653f00:; BB(0x00653f00);
    /* 00653f00: mov dword ptr [edi + 0xc4], eax */ W32((u32)(r_edi+0xc4u), r_eax);
    /* 00653f06: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00653f08: cmp edx, 0xffffe000 */ {  u32 a = r_edx; u32 b = 0xffffe000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653f0e: jl 0x653f1b */ if ((fS!=fO)) goto L_00653f1b;
L_00653f10:; BB(0x00653f10);
    /* 00653f10: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 00653f16: jmp 0x653fb9 */ goto L_00653fb9;
L_00653f1b:; BB(0x00653f1b);
    /* 00653f1b: mov dword ptr [edi + 0xc0], 0xffffe000 */ W32((u32)(r_edi+0xc0u), 0xffffe000u);
    /* 00653f25: jmp 0x653fb9 */ goto L_00653fb9;
L_00653f2a:; BB(0x00653f2a);
    /* 00653f2a: cmp eax, -0x30 */ {  u32 a = r_eax; u32 b = 0xffffffd0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653f2d: jge 0x653f78 */ if ((fS==fO)) goto L_00653f78;
L_00653f2f:; BB(0x00653f2f);
    /* 00653f2f: mov eax, dword ptr [edi + 0xc4] */ r_eax = R32((u32)(r_edi+0xc4u));
    /* 00653f35: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00653f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00653f39: mov ebx, 0x200 */ r_ebx = 0x200u;
    /* 00653f3e: jg 0x653f42 */ if ((!fZ&&fS==fO)) goto L_00653f42;
L_00653f40:; BB(0x00653f40);
    /* 00653f40: mov eax, edx */ r_eax = r_edx;
L_00653f42:; BB(0x00653f42);
    /* 00653f42: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 00653f48: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00653f4b: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653f50: jl 0x653f54 */ if ((fS!=fO)) goto L_00653f54;
L_00653f52:; BB(0x00653f52);
    /* 00653f52: mov eax, ebx */ r_eax = r_ebx;
L_00653f54:; BB(0x00653f54);
    /* 00653f54: mov dword ptr [edi + 0xc4], eax */ W32((u32)(r_edi+0xc4u), r_eax);
    /* 00653f5a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00653f5c: cmp edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653f62: jg 0x653f6c */ if ((!fZ&&fS==fO)) goto L_00653f6c;
L_00653f64:; BB(0x00653f64);
    /* 00653f64: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 00653f6a: jmp 0x653fb9 */ goto L_00653fb9;
L_00653f6c:; BB(0x00653f6c);
    /* 00653f6c: mov dword ptr [edi + 0xc0], 0x2000 */ W32((u32)(r_edi+0xc0u), 0x2000u);
    /* 00653f76: jmp 0x653fb9 */ goto L_00653fb9;
L_00653f78:; BB(0x00653f78);
    /* 00653f78: mov ebx, dword ptr [edi + 0xc0] */ r_ebx = R32((u32)(r_edi+0xc0u));
    /* 00653f7e: mov dword ptr [edi + 0xc4], 0 */ W32((u32)(r_edi+0xc4u), 0x0u);
    /* 00653f88: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653f8e: jle 0x653f9e */ if ((fZ||fS!=fO)) goto L_00653f9e;
L_00653f90:; BB(0x00653f90);
    /* 00653f90: add ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00653f96: mov dword ptr [edi + 0xc0], ebx */ W32((u32)(r_edi+0xc0u), r_ebx);
    /* 00653f9c: jmp 0x653fb9 */ goto L_00653fb9;
L_00653f9e:; BB(0x00653f9e);
    /* 00653f9e: mov edx, 0xffffff00 */ r_edx = 0xffffff00u;
    /* 00653fa3: cmp ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653fa9: jl 0x653fad */ if ((fS!=fO)) goto L_00653fad;
L_00653fab:; BB(0x00653fab);
    /* 00653fab: mov ebx, edx */ r_ebx = r_edx;
L_00653fad:; BB(0x00653fad);
    /* 00653fad: add ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00653fb3: mov dword ptr [edi + 0xc0], ebx */ W32((u32)(r_edi+0xc0u), r_ebx);
L_00653fb9:; BB(0x00653fb9);
    /* 00653fb9: mov eax, esi */ r_eax = r_esi;
    /* 00653fbb: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00653fbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00653fbf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00653fc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00653fc1: ret  */ FN_RET(0x00653d80); r_esp += 4; return;
}

void f_00653fc4(void) /* sub_653FC4 */
{
    FN_ENTER(0x00653fc4);
    /* 00653fc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00653fc5: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653fc8: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00653fcc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00653fcf: mov edi, 1 */ r_edi = 0x1u;
    /* 00653fd4: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00653fd8: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00653fdb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00653fde: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00653fe1: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00653fe4: fadd dword ptr [edx*4 + 0x937468] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937468u));
    /* 00653feb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00653fed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00653fef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00653ff0: jae 0x653ff6 */ if (!fC) goto L_00653ff6;
L_00653ff2:; BB(0x00653ff2);
    /* 00653ff2: fst st(1) */ ST(1) = ST(0);
    /* 00653ff4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00653ff6:; BB(0x00653ff6);
    /* 00653ff6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00653ff8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00653ff9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00653ffc: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x654001u); f_008304c8();
    /* 00654001: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00654005: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00654009: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0065400d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065400e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065400f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654010: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00654014: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00654018: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x65401du); f_0082facc();
    /* 0065401d: mov eax, edi */ r_eax = r_edi;
    /* 0065401f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00654022: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00654023: ret 0x10 */ FN_RET(0x00653fc4); r_esp += 20; return;
}

