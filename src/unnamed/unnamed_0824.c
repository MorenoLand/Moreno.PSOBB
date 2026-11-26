#include "protos.h"

void f_00824840(void) /* sub_824840 */
{
    FN_ENTER(0x00824840);
    /* 00824840: mov eax, dword ptr [0xa165f0] */ r_eax = R32((u32)(0xa165f0u));
    /* 00824845: mov dword ptr [0xa165f0], 8 */ W32((u32)(0xa165f0u), 0x8u);
    /* 0082484f: mov dword ptr [0xa165f8], eax */ W32((u32)(0xa165f8u), r_eax);
    /* 00824854: mov dword ptr [0xaca4e4], 1 */ W32((u32)(0xaca4e4u), 0x1u);
    /* 0082485e: ret  */ FN_RET(0x00824840); r_esp += 4; return;
}

void f_00824860(void) /* sub_824860 */
{
    FN_ENTER(0x00824860);
    /* 00824860: mov eax, dword ptr [0xa165f0] */ r_eax = R32((u32)(0xa165f0u));
    /* 00824865: mov dword ptr [0xa165f0], 9 */ W32((u32)(0xa165f0u), 0x9u);
    /* 0082486f: mov dword ptr [0xa165f8], eax */ W32((u32)(0xa165f8u), r_eax);
    /* 00824874: mov dword ptr [0xaca4e4], 1 */ W32((u32)(0xaca4e4u), 0x1u);
    /* 0082487e: ret  */ FN_RET(0x00824860); r_esp += 4; return;
}

void f_00824880(void) /* sub_824880 */
{
    FN_ENTER(0x00824880);
    /* 00824880: mov eax, dword ptr [0xa165f0] */ r_eax = R32((u32)(0xa165f0u));
    /* 00824885: mov dword ptr [0xa165f0], 8 */ W32((u32)(0xa165f0u), 0x8u);
    /* 0082488f: mov dword ptr [0xa165f8], eax */ W32((u32)(0xa165f8u), r_eax);
    /* 00824894: mov dword ptr [0xaca4e4], 1 */ W32((u32)(0xaca4e4u), 0x1u);
    /* 0082489e: call 0x4073a8 */ r_esp -= 4; W32(r_esp, 0x8248a3u); f_004073a8();
    /* 008248a3: ret  */ FN_RET(0x00824880); r_esp += 4; return;
}

void f_008248a4(void) /* sub_8248A4 */
{
    FN_ENTER(0x008248a4);
    /* 008248a4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 008248a6: push 0xa165fc */ { u32 v = 0xa165fcu; r_esp -= 4; W32(r_esp, v); }
    /* 008248ab: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x8248b0u); f_0078b184();
    /* 008248b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008248b3: ret  */ FN_RET(0x008248a4); r_esp += 4; return;
}

void f_008248b4(void) /* sub_8248B4 */
{
    FN_ENTER(0x008248b4);
    /* 008248b4: mov eax, dword ptr [0xa165f0] */ r_eax = R32((u32)(0xa165f0u));
    /* 008248b9: mov dword ptr [0xa165f0], 0xb */ W32((u32)(0xa165f0u), 0xbu);
    /* 008248c3: mov dword ptr [0xa165f8], eax */ W32((u32)(0xa165f8u), r_eax);
    /* 008248c8: mov dword ptr [0xaca4e4], 1 */ W32((u32)(0xaca4e4u), 0x1u);
    /* 008248d2: ret  */ FN_RET(0x008248b4); r_esp += 4; return;
}

void f_008248d4(void)
{
    FN_ENTER(0x008248d4);
    /* 008248d4: call 0x824944 */ r_esp -= 4; W32(r_esp, 0x8248d9u); f_00824944();
    /* 008248d9: call 0x8248b4 */ r_esp -= 4; W32(r_esp, 0x8248deu); f_008248b4();
    /* 008248de: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x8248e3u); f_0080030c();
    /* 008248e3: ret  */ FN_RET(0x008248d4); r_esp += 4; return;
}

void f_008248e4(void)
{
    FN_ENTER(0x008248e4);
    /* 008248e4: call 0x824944 */ r_esp -= 4; W32(r_esp, 0x8248e9u); f_00824944();
    /* 008248e9: call 0x824880 */ r_esp -= 4; W32(r_esp, 0x8248eeu); f_00824880();
    /* 008248ee: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x8248f3u); f_0080030c();
    /* 008248f3: ret  */ FN_RET(0x008248e4); r_esp += 4; return;
}

void f_008248f4(void)
{
    FN_ENTER(0x008248f4);
    /* 008248f4: call 0x824944 */ r_esp -= 4; W32(r_esp, 0x8248f9u); f_00824944();
    /* 008248f9: call 0x8215a0 */ r_esp -= 4; W32(r_esp, 0x8248feu); f_008215a0();
    /* 008248fe: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x824903u); f_0080030c();
    /* 00824903: ret  */ FN_RET(0x008248f4); r_esp += 4; return;
}

void f_00824904(void) /* sub_824904 */
{
    FN_ENTER(0x00824904);
    /* 00824904: call 0x824944 */ r_esp -= 4; W32(r_esp, 0x824909u); f_00824944();
    /* 00824909: call 0x821580 */ r_esp -= 4; W32(r_esp, 0x82490eu); f_00821580();
    /* 0082490e: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x824913u); f_0080030c();
    /* 00824913: ret  */ FN_RET(0x00824904); r_esp += 4; return;
}

void f_00824914(void) /* sub_824914 */
{
    FN_ENTER(0x00824914);
    /* 00824914: call 0x824944 */ r_esp -= 4; W32(r_esp, 0x824919u); f_00824944();
    /* 00824919: call 0x821560 */ r_esp -= 4; W32(r_esp, 0x82491eu); f_00821560();
    /* 0082491e: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x824923u); f_0080030c();
    /* 00824923: ret  */ FN_RET(0x00824914); r_esp += 4; return;
}

void f_00824924(void) /* sub_824924 */
{
    FN_ENTER(0x00824924);
    /* 00824924: call 0x824944 */ r_esp -= 4; W32(r_esp, 0x824929u); f_00824944();
    /* 00824929: call 0x821544 */ r_esp -= 4; W32(r_esp, 0x82492eu); f_00821544();
    /* 0082492e: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x824933u); f_0080030c();
    /* 00824933: ret  */ FN_RET(0x00824924); r_esp += 4; return;
}

void f_00824934(void) /* sub_824934 */
{
    FN_ENTER(0x00824934);
    /* 00824934: call 0x824944 */ r_esp -= 4; W32(r_esp, 0x824939u); f_00824944();
    /* 00824939: call 0x81e298 */ r_esp -= 4; W32(r_esp, 0x82493eu); f_0081e298();
    /* 0082493e: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x824943u); f_0080030c();
    /* 00824943: ret  */ FN_RET(0x00824934); r_esp += 4; return;
}

void f_00824944(void) /* sub_824944 */
{
    FN_ENTER(0x00824944);
    /* 00824944: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00824945: mov ebp, esp */ r_ebp = r_esp;
    /* 00824947: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00824949: push 0x8f799e */ { u32 v = 0x8f799eu; r_esp -= 4; W32(r_esp, v); }
    /* 0082494e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00824954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00824955: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0082495c: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082495f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00824962: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00824965: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00824968: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0082496b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082496d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082496e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082496f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00824970: call 0x82acd8 */ r_esp -= 4; W32(r_esp, 0x824975u); f_0082acd8();
    /* 00824975: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00824978: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x82497du); f_007bebe8();
    /* 0082497d: call 0x5b9380 */ r_esp -= 4; W32(r_esp, 0x824982u); f_005b9380();
    /* 00824982: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x824987u); f_005ba204();
    /* 00824987: call 0x5ba174 */ r_esp -= 4; W32(r_esp, 0x82498cu); f_005ba174();
    /* 0082498c: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00824991: push 0xa16540 */ { u32 v = 0xa16540u; r_esp -= 4; W32(r_esp, v); }
    /* 00824996: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x82499bu); f_0078b184();
    /* 0082499b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082499e: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x8249a3u); f_005ba1f0();
    /* 008249a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008249a5: je 0x8249c4 */ if (fZ) goto L_008249c4;
L_008249a7:; BB(0x008249a7);
    /* 008249a7: call 0x5ba168 */ r_esp -= 4; W32(r_esp, 0x8249acu); f_005ba168();
    /* 008249ac: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x8249b1u); f_005ba1e0();
    /* 008249b1: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x8249b6u); f_005ba204();
    /* 008249b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008249b9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008249c0: mov esp, ebp */ r_esp = r_ebp;
    /* 008249c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008249c3: ret  */ FN_RET(0x00824944); r_esp += 4; return;
L_008249c4:; BB(0x008249c4);
    /* 008249c4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 008249c6: push 0xa165fc */ { u32 v = 0xa165fcu; r_esp -= 4; W32(r_esp, v); }
    /* 008249cb: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x8249d0u); f_0078b184();
    /* 008249d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008249d3: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x8249d8u); f_005ba1f0();
    /* 008249d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008249da: je 0x8249f9 */ if (fZ) goto L_008249f9;
L_008249dc:; BB(0x008249dc);
    /* 008249dc: call 0x5ba168 */ r_esp -= 4; W32(r_esp, 0x8249e1u); f_005ba168();
    /* 008249e1: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x8249e6u); f_005ba1e0();
    /* 008249e6: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x8249ebu); f_005ba204();
    /* 008249eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008249ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008249f5: mov esp, ebp */ r_esp = r_ebp;
    /* 008249f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008249f8: ret  */ FN_RET(0x00824944); r_esp += 4; return;
L_008249f9:; BB(0x008249f9);
    /* 008249f9: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x8249feu); f_005ba1e0();
    /* 008249fe: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 00824a03: call 0x508a70 */ r_esp -= 4; W32(r_esp, 0x824a08u); f_00508a70();
    /* 00824a08: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00824a0a: push 0x9ff420 */ { u32 v = 0x9ff420u; r_esp -= 4; W32(r_esp, v); }
    /* 00824a0f: call 0x793cf0 */ r_esp -= 4; W32(r_esp, 0x824a14u); f_00793cf0();
    /* 00824a14: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00824a17: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00824a1c: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00824a21: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00824a26: call 0x843980 */ r_esp -= 4; W32(r_esp, 0x824a2bu); f_00843980();
    /* 00824a2b: mov ecx, 0x1555 */ r_ecx = 0x1555u;
    /* 00824a30: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x824a35u); f_0082dcbc();
    /* 00824a35: fchs  */ ST(0) = -ST(0);
    /* 00824a37: fstp dword ptr [0xa9d464] */ W_F32((u32)(0xa9d464u), ST(0)); FPOP();
    /* 00824a3d: mov ecx, 0x1555 */ r_ecx = 0x1555u;
    /* 00824a42: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x824a47u); f_0082ddd8();
    /* 00824a47: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00824a4a: mov ecx, 0x9000 */ r_ecx = 0x9000u;
    /* 00824a4f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x824a54u); f_0082dcbc();
    /* 00824a54: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 00824a57: fstp dword ptr [0xa9d460] */ W_F32((u32)(0xa9d460u), ST(0)); FPOP();
    /* 00824a5d: mov ecx, 0x9000 */ r_ecx = 0x9000u;
    /* 00824a62: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x824a67u); f_0082ddd8();
    /* 00824a67: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00824a6a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00824a6c: fstp dword ptr [0xa9d468] */ W_F32((u32)(0xa9d468u), ST(0)); FPOP();
    /* 00824a72: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00824a77: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00824a7e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x824a83u); f_005caba4();
    /* 00824a83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00824a84: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00824a87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824a89: je 0x824aae */ if (fZ) goto L_00824aae;
L_00824a8b:; BB(0x00824a8b);
    /* 00824a8b: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00824a92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00824a99: push dword ptr [0xaca380] */ { u32 v = R32((u32)(0xaca380u)); r_esp -= 4; W32(r_esp, v); }
    /* 00824a9f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00824aa2: call 0x4d3408 */ r_esp -= 4; W32(r_esp, 0x824aa7u); f_004d3408();
    /* 00824aa7: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00824aae:; BB(0x00824aae);
    /* 00824aae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00824ab5: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00824abc: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00824abe: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00824ac5: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00824acc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00824ad3: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00824ada: mov dword ptr [ebp - 0x2c], 0xc2c80000 */ W32((u32)(r_ebp+0xffffffd4u), 0xc2c80000u);
    /* 00824ae1: call 0x4d30fc */ r_esp -= 4; W32(r_esp, 0x824ae6u); f_004d30fc();
    /* 00824ae6: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00824ae9: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00824aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00824aed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00824aee: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x824af3u); f_004d33c0();
    /* 00824af3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00824af6: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x824afbu); f_008013bc();
    /* 00824afb: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00824b02: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00824b04: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x824b09u); f_005caba4();
    /* 00824b09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00824b0a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00824b0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824b0f: je 0x824b2e */ if (fZ) goto L_00824b2e;
L_00824b11:; BB(0x00824b11);
    /* 00824b11: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00824b18: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00824b1f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00824b22: call 0x7195c8 */ r_esp -= 4; W32(r_esp, 0x824b27u); f_007195c8();
    /* 00824b27: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00824b2e:; BB(0x00824b2e);
    /* 00824b2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00824b35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00824b37: mov dword ptr [0xaca4e0], eax */ W32((u32)(0xaca4e0u), r_eax);
    /* 00824b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00824b3d: call 0x815584 */ r_esp -= 4; W32(r_esp, 0x824b42u); f_00815584();
    /* 00824b42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00824b43: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x824b48u); f_0061cdb0();
    /* 00824b48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00824b4b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00824b52: mov esp, ebp */ r_esp = r_ebp;
    /* 00824b54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00824b55: ret  */ FN_RET(0x00824944); r_esp += 4; return;
}

void f_00824b58(void) /* sub_824B58 */
{
    FN_ENTER(0x00824b58);
    /* 00824b58: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00824b5c: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824b5e: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824b64:; BB(0x00824b64);
    /* 00824b64: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824b67: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824b69: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824b6f:; BB(0x00824b6f);
    /* 00824b6f: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824b72: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824b74: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824b7a:; BB(0x00824b7a);
    /* 00824b7a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824b7d: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824b7f: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824b85:; BB(0x00824b85);
    /* 00824b85: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824b88: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824b8a: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824b90:; BB(0x00824b90);
    /* 00824b90: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824b93: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824b95: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824b9b:; BB(0x00824b9b);
    /* 00824b9b: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824b9e: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824ba0: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824ba6:; BB(0x00824ba6);
    /* 00824ba6: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824ba9: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824bab: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824bb1:; BB(0x00824bb1);
    /* 00824bb1: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824bb4: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824bb6: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824bbc:; BB(0x00824bbc);
    /* 00824bbc: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824bbf: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824bc1: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824bc7:; BB(0x00824bc7);
    /* 00824bc7: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824bca: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824bcc: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824bd2:; BB(0x00824bd2);
    /* 00824bd2: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824bd5: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824bd7: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824bdd:; BB(0x00824bdd);
    /* 00824bdd: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824be0: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824be2: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824be8:; BB(0x00824be8);
    /* 00824be8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824beb: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824bed: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824bf3:; BB(0x00824bf3);
    /* 00824bf3: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824bf6: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824bf8: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824bfe:; BB(0x00824bfe);
    /* 00824bfe: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c01: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c03: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c05:; BB(0x00824c05);
    /* 00824c05: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c08: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c0a: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c0c:; BB(0x00824c0c);
    /* 00824c0c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c0f: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c11: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c13:; BB(0x00824c13);
    /* 00824c13: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c16: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c18: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c1a:; BB(0x00824c1a);
    /* 00824c1a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c1d: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c1f: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c21:; BB(0x00824c21);
    /* 00824c21: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c24: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c26: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c28:; BB(0x00824c28);
    /* 00824c28: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c2b: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c2d: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c2f:; BB(0x00824c2f);
    /* 00824c2f: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c32: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c34: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c36:; BB(0x00824c36);
    /* 00824c36: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c39: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c3b: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c3d:; BB(0x00824c3d);
    /* 00824c3d: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c40: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c42: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c44:; BB(0x00824c44);
    /* 00824c44: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c47: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c49: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c4b:; BB(0x00824c4b);
    /* 00824c4b: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c4e: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c50: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c52:; BB(0x00824c52);
    /* 00824c52: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c55: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c57: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c59:; BB(0x00824c59);
    /* 00824c59: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c5c: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c5e: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c60:; BB(0x00824c60);
    /* 00824c60: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c63: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c65: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c67:; BB(0x00824c67);
    /* 00824c67: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00824c6a: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824c6c: je 0x824c70 */ if (fZ) goto L_00824c70;
L_00824c6e:; BB(0x00824c6e);
    /* 00824c6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00824c70:; BB(0x00824c70);
    /* 00824c70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824c72: je 0x824c7a */ if (fZ) goto L_00824c7a;
L_00824c74:; BB(0x00824c74);
    /* 00824c74: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00824c77: ret 4 */ FN_RET(0x00824b58); r_esp += 8; return;
L_00824c7a:; BB(0x00824c7a);
    /* 00824c7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824c7c: ret 4 */ FN_RET(0x00824b58); r_esp += 8; return;
}

void f_00824c80(void) /* sub_824C80 */
{
    FN_ENTER(0x00824c80);
    /* 00824c80: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00824c84: movzx eax, byte ptr [edx + 5] */ r_eax = (u32)R8((u32)(r_edx+0x5u));
    /* 00824c88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824c8a: jne 0x824cb9 */ if (!fZ) goto L_00824cb9;
L_00824c8c:; BB(0x00824c8c);
    /* 00824c8c: movzx ecx, word ptr [0xa98474] */ r_ecx = (u32)R16((u32)(0xa98474u));
    /* 00824c93: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 00824c97: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 00824c9a: mov byte ptr [0xaca904], al */ W8((u32)(0xaca904u), (u8)r_eax);
    /* 00824c9f: or ecx, 0xffff0008 */ {  u32 a = r_ecx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824ca5: mov byte ptr [0xaca900], 2 */ W8((u32)(0xaca900u), 0x2u);
    /* 00824cac: mov dword ptr [0xaca8fc], edx */ W32((u32)(0xaca8fcu), r_edx);
    /* 00824cb2: mov word ptr [0xa98474], cx */ W16((u32)(0xa98474u), (u16)r_ecx);
L_00824cb9:; BB(0x00824cb9);
    /* 00824cb9: ret  */ FN_RET(0x00824c80); r_esp += 4; return;
}

void f_00824cbc(void) /* sub_824CBC */
{
    FN_ENTER(0x00824cbc);
    /* 00824cbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00824cbd: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00824cc1: movzx eax, byte ptr [edx + 5] */ r_eax = (u32)R8((u32)(r_edx+0x5u));
    /* 00824cc5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824cc8: je 0x824d12 */ if (fZ) goto L_00824d12;
L_00824cca:; BB(0x00824cca);
    /* 00824cca: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824ccd: je 0x824ce1 */ if (fZ) goto L_00824ce1;
L_00824ccf:; BB(0x00824ccf);
    /* 00824ccf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824cd1: jne 0x824cdf */ if (!fZ) goto L_00824cdf;
L_00824cd3:; BB(0x00824cd3);
    /* 00824cd3: movsx eax, byte ptr [0xaca904] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00824cda: call 0x824d38 */ r_esp -= 4; W32(r_esp, 0x824cdfu); f_00824d38();
L_00824cdf:; BB(0x00824cdf);
    /* 00824cdf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00824ce0: ret  */ FN_RET(0x00824cbc); r_esp += 4; return;
L_00824ce1:; BB(0x00824ce1);
    /* 00824ce1: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x824ce6u); f_00816d30();
    /* 00824ce6: movsx eax, byte ptr [0xaca904] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00824ced: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00824cee: call 0x816cf0 */ r_esp -= 4; W32(r_esp, 0x824cf3u); f_00816cf0();
    /* 00824cf3: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 00824cf8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x824cfdu); f_0079317c();
    /* 00824cfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00824cfe: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x824d03u); f_00816cb8();
    /* 00824d03: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00824d06: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 00824d0b: call 0x826e50 */ r_esp -= 4; W32(r_esp, 0x824d10u); f_00826e50();
    /* 00824d10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00824d11: ret  */ FN_RET(0x00824cbc); r_esp += 4; return;
L_00824d12:; BB(0x00824d12);
    /* 00824d12: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00824d14: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00824d1a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00824d1d: mov dword ptr [0xaca8fc], eax */ W32((u32)(0xaca8fcu), r_eax);
    /* 00824d22: call 0x718224 */ r_esp -= 4; W32(r_esp, 0x824d27u); f_00718224();
    /* 00824d27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00824d2a: mov byte ptr [0xaca900], 3 */ W8((u32)(0xaca900u), 0x3u);
    /* 00824d31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00824d32: ret  */ FN_RET(0x00824cbc); r_esp += 4; return;
}

void f_00824d38(void) /* sub_824D38 */
{
    FN_ENTER(0x00824d38);
    /* 00824d38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00824d39: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00824d3c: mov ebp, eax */ r_ebp = r_eax;
    /* 00824d3e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00824d41: mov byte ptr [esp], 0xa6 */ W8((u32)(r_esp), 0xa6u);
    /* 00824d45: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 00824d4a: mov byte ptr [esp + 4], 6 */ W8((u32)(r_esp+0x4u), 0x6u);
    /* 00824d4f: mov byte ptr [esp + 5], 0 */ W8((u32)(r_esp+0x5u), 0x0u);
    /* 00824d54: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x824d59u); f_00827364();
    /* 00824d59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00824d5a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00824d5e: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x824d63u); f_00800464();
    /* 00824d63: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00824d66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00824d67: ret  */ FN_RET(0x00824d38); r_esp += 4; return;
}

void f_00824d68(void)
{
    FN_ENTER(0x00824d68);
    /* 00824d68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00824d69: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00824d6d: movzx edx, byte ptr [eax + 5] */ r_edx = (u32)R8((u32)(r_eax+0x5u));
    /* 00824d71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824d73: jne 0x824da4 */ if (!fZ) goto L_00824da4;
L_00824d75:; BB(0x00824d75);
    /* 00824d75: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x824d7au); f_00816d30();
    /* 00824d7a: movsx eax, byte ptr [0xaca904] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00824d81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00824d82: call 0x816cf0 */ r_esp -= 4; W32(r_esp, 0x824d87u); f_00816cf0();
    /* 00824d87: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00824d8c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x824d91u); f_0079317c();
    /* 00824d91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00824d92: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x824d97u); f_00816cb8();
    /* 00824d97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00824d9a: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 00824d9f: call 0x826e50 */ r_esp -= 4; W32(r_esp, 0x824da4u); f_00826e50();
L_00824da4:; BB(0x00824da4);
    /* 00824da4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00824da5: ret  */ FN_RET(0x00824d68); r_esp += 4; return;
}

void f_00824da8(void)
{
    FN_ENTER(0x00824da8);
    /* 00824da8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00824dac: movzx edx, byte ptr [eax + 5] */ r_edx = (u32)R8((u32)(r_eax+0x5u));
    /* 00824db0: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00824db3: jne 0x824dbf */ if (!fZ) goto L_00824dbf;
L_00824db5:; BB(0x00824db5);
    /* 00824db5: call 0x717da4 */ r_esp -= 4; W32(r_esp, 0x824dbau); f_00717da4();
    /* 00824dba: call 0x824dc0 */ r_esp -= 4; W32(r_esp, 0x824dbfu); f_00824dc0();
L_00824dbf:; BB(0x00824dbf);
    /* 00824dbf: ret  */ FN_RET(0x00824da8); r_esp += 4; return;
}

void f_00824dc0(void) /* sub_824DC0 */
{
    FN_ENTER(0x00824dc0);
    /* 00824dc0: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00824dc7: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824dc9: je 0x824dcc */ if (fZ) goto L_00824dcc;
L_00824dcb:; BB(0x00824dcb);
    /* 00824dcb: ret  */ FN_RET(0x00824dc0); r_esp += 4; return;
L_00824dcc:; BB(0x00824dcc);
    /* 00824dcc: movzx edx, word ptr [0xaca908] */ r_edx = (u32)R16((u32)(0xaca908u));
    /* 00824dd3: mov ecx, dword ptr [0xaca8ec] */ r_ecx = R32((u32)(0xaca8ecu));
    /* 00824dd9: mov byte ptr [0xaca904], 4 */ W8((u32)(0xaca904u), 0x4u);
    /* 00824de0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00824de2: mov byte ptr [0xaca900], al */ W8((u32)(0xaca900u), (u8)r_eax);
    /* 00824de7: mov dword ptr [0xaca8fc], eax */ W32((u32)(0xaca8fcu), r_eax);
    /* 00824dec: mov dword ptr [0xaca8f8], eax */ W32((u32)(0xaca8f8u), r_eax);
    /* 00824df1: and edx, 0xf80f */ {  u32 a = r_edx; u32 b = 0xf80fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00824df7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824df9: mov word ptr [0xaca908], dx */ W16((u32)(0xaca908u), (u16)r_edx);
    /* 00824e00: je 0x824e07 */ if (fZ) goto L_00824e07;
L_00824e02:; BB(0x00824e02);
    /* 00824e02: call 0x7609f4 */ r_esp -= 4; W32(r_esp, 0x824e07u); f_007609f4();
L_00824e07:; BB(0x00824e07);
    /* 00824e07: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00824e0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824e0f: je 0x824e16 */ if (fZ) goto L_00824e16;
L_00824e11:; BB(0x00824e11);
    /* 00824e11: call 0x7606fc */ r_esp -= 4; W32(r_esp, 0x824e16u); f_007606fc();
L_00824e16:; BB(0x00824e16);
    /* 00824e16: mov ecx, dword ptr [0xaca8f4] */ r_ecx = R32((u32)(0xaca8f4u));
    /* 00824e1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824e1e: je 0x824e25 */ if (fZ) goto L_00824e25;
L_00824e20:; BB(0x00824e20);
    /* 00824e20: call 0x75edb8 */ r_esp -= 4; W32(r_esp, 0x824e25u); f_0075edb8();
L_00824e25:; BB(0x00824e25);
    /* 00824e25: ret  */ FN_RET(0x00824dc0); r_esp += 4; return;
}

void f_00824e28(void)
{
    FN_ENTER(0x00824e28);
    /* 00824e28: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00824e2c: movzx edx, byte ptr [eax + 5] */ r_edx = (u32)R8((u32)(r_eax+0x5u));
    /* 00824e30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824e32: jne 0x824e3e */ if (!fZ) goto L_00824e3e;
L_00824e34:; BB(0x00824e34);
    /* 00824e34: call 0x717da4 */ r_esp -= 4; W32(r_esp, 0x824e39u); f_00717da4();
    /* 00824e39: call 0x824dc0 */ r_esp -= 4; W32(r_esp, 0x824e3eu); f_00824dc0();
L_00824e3e:; BB(0x00824e3e);
    /* 00824e3e: ret  */ FN_RET(0x00824e28); r_esp += 4; return;
}

void f_00824e40(void)
{
    FN_ENTER(0x00824e40);
    /* 00824e40: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00824e44: movzx edx, byte ptr [eax + 5] */ r_edx = (u32)R8((u32)(r_eax+0x5u));
    /* 00824e48: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824e4a: jne 0x824e7a */ if (!fZ) goto L_00824e7a;
L_00824e4c:; BB(0x00824e4c);
    /* 00824e4c: movsx ecx, byte ptr [0xaca904] */ r_ecx = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00824e53: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 00824e57: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00824e59: jne 0x824e7a */ if (!fZ) goto L_00824e7a;
L_00824e5b:; BB(0x00824e5b);
    /* 00824e5b: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00824e5e: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00824e61: mov ecx, 0xaca6f0 */ r_ecx = 0xaca6f0u;
    /* 00824e66: call 0x824e7c */ r_esp -= 4; W32(r_esp, 0x824e6bu); f_00824e7c();
    /* 00824e6b: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00824e71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824e73: je 0x824e7a */ if (fZ) goto L_00824e7a;
L_00824e75:; BB(0x00824e75);
    /* 00824e75: call 0x760728 */ r_esp -= 4; W32(r_esp, 0x824e7au); f_00760728();
L_00824e7a:; BB(0x00824e7a);
    /* 00824e7a: ret  */ FN_RET(0x00824e40); r_esp += 4; return;
}

void f_00824e7c(void) /* sub_824E7C */
{
    FN_ENTER(0x00824e7c);
    /* 00824e7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00824e7d: lea ebx, [ecx + 0xf8] */ r_ebx = (u32)(r_ecx+0xf8u);
    /* 00824e83: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00824e87: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824e89: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824e8f:; BB(0x00824e8f);
    /* 00824e8f: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824e92: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824e94: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824e9a:; BB(0x00824e9a);
    /* 00824e9a: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824e9d: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824e9f: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824ea5:; BB(0x00824ea5);
    /* 00824ea5: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824ea8: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824eaa: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824eb0:; BB(0x00824eb0);
    /* 00824eb0: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824eb3: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824eb5: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824ebb:; BB(0x00824ebb);
    /* 00824ebb: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824ebe: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824ec0: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824ec6:; BB(0x00824ec6);
    /* 00824ec6: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824ec9: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824ecb: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824ed1:; BB(0x00824ed1);
    /* 00824ed1: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824ed4: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824ed6: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824edc:; BB(0x00824edc);
    /* 00824edc: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824edf: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824ee1: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824ee7:; BB(0x00824ee7);
    /* 00824ee7: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824eea: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824eec: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824ef2:; BB(0x00824ef2);
    /* 00824ef2: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824ef5: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824ef7: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824efd:; BB(0x00824efd);
    /* 00824efd: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f00: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f02: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f08:; BB(0x00824f08);
    /* 00824f08: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f0b: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f0d: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f13:; BB(0x00824f13);
    /* 00824f13: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f16: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f18: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f1e:; BB(0x00824f1e);
    /* 00824f1e: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f21: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f23: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f29:; BB(0x00824f29);
    /* 00824f29: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f2c: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f2e: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f30:; BB(0x00824f30);
    /* 00824f30: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f33: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f35: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f37:; BB(0x00824f37);
    /* 00824f37: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f3a: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f3c: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f3e:; BB(0x00824f3e);
    /* 00824f3e: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f41: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f43: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f45:; BB(0x00824f45);
    /* 00824f45: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f48: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f4a: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f4c:; BB(0x00824f4c);
    /* 00824f4c: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f4f: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f51: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f53:; BB(0x00824f53);
    /* 00824f53: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f56: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f58: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f5a:; BB(0x00824f5a);
    /* 00824f5a: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f5d: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f5f: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f61:; BB(0x00824f61);
    /* 00824f61: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f64: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f66: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f68:; BB(0x00824f68);
    /* 00824f68: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f6b: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f6d: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f6f:; BB(0x00824f6f);
    /* 00824f6f: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f72: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f74: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f76:; BB(0x00824f76);
    /* 00824f76: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f79: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f7b: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f7d:; BB(0x00824f7d);
    /* 00824f7d: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f80: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f82: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f84:; BB(0x00824f84);
    /* 00824f84: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f87: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f89: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f8b:; BB(0x00824f8b);
    /* 00824f8b: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f8e: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f90: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f92:; BB(0x00824f92);
    /* 00824f92: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00824f95: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824f97: je 0x824f9b */ if (fZ) goto L_00824f9b;
L_00824f99:; BB(0x00824f99);
    /* 00824f99: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00824f9b:; BB(0x00824f9b);
    /* 00824f9b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00824f9d: je 0x8250d0 */ if (fZ) goto L_008250d0;
L_00824fa3:; BB(0x00824fa3);
    /* 00824fa3: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00824fa6: sub eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00824faa: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00824fad: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00824faf: mov eax, ecx */ r_eax = r_ecx;
    /* 00824fb1: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824fb3: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00824fb9:; BB(0x00824fb9);
    /* 00824fb9: lea eax, [ecx + 8] */ r_eax = (u32)(r_ecx+0x8u);
    /* 00824fbc: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824fbe: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00824fc4:; BB(0x00824fc4);
    /* 00824fc4: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00824fc7: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824fc9: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00824fcf:; BB(0x00824fcf);
    /* 00824fcf: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00824fd2: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824fd4: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00824fda:; BB(0x00824fda);
    /* 00824fda: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00824fdd: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824fdf: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00824fe5:; BB(0x00824fe5);
    /* 00824fe5: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00824fe8: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824fea: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00824ff0:; BB(0x00824ff0);
    /* 00824ff0: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00824ff3: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00824ff5: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00824ffb:; BB(0x00824ffb);
    /* 00824ffb: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00824ffe: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825000: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825006:; BB(0x00825006);
    /* 00825006: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00825009: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082500b: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825011:; BB(0x00825011);
    /* 00825011: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00825014: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825016: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_0082501c:; BB(0x0082501c);
    /* 0082501c: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082501f: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825021: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825027:; BB(0x00825027);
    /* 00825027: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082502a: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082502c: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825032:; BB(0x00825032);
    /* 00825032: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00825035: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825037: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_0082503d:; BB(0x0082503d);
    /* 0082503d: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00825040: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825042: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825048:; BB(0x00825048);
    /* 00825048: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082504b: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082504d: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825053:; BB(0x00825053);
    /* 00825053: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00825056: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825058: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_0082505a:; BB(0x0082505a);
    /* 0082505a: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082505d: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082505f: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825061:; BB(0x00825061);
    /* 00825061: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00825064: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825066: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825068:; BB(0x00825068);
    /* 00825068: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082506b: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082506d: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_0082506f:; BB(0x0082506f);
    /* 0082506f: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00825072: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825074: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825076:; BB(0x00825076);
    /* 00825076: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00825079: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082507b: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_0082507d:; BB(0x0082507d);
    /* 0082507d: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00825080: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825082: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825084:; BB(0x00825084);
    /* 00825084: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00825087: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825089: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_0082508b:; BB(0x0082508b);
    /* 0082508b: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082508e: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825090: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825092:; BB(0x00825092);
    /* 00825092: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00825095: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825097: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_00825099:; BB(0x00825099);
    /* 00825099: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082509c: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082509e: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_008250a0:; BB(0x008250a0);
    /* 008250a0: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008250a3: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008250a5: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_008250a7:; BB(0x008250a7);
    /* 008250a7: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008250aa: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008250ac: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_008250ae:; BB(0x008250ae);
    /* 008250ae: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008250b1: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008250b3: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_008250b5:; BB(0x008250b5);
    /* 008250b5: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008250b8: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008250ba: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_008250bc:; BB(0x008250bc);
    /* 008250bc: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008250bf: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008250c1: je 0x8250c5 */ if (fZ) goto L_008250c5;
L_008250c3:; BB(0x008250c3);
    /* 008250c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008250c5:; BB(0x008250c5);
    /* 008250c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008250c7: je 0x8250d4 */ if (fZ) goto L_008250d4;
L_008250c9:; BB(0x008250c9);
    /* 008250c9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008250cd: add dword ptr [eax + 4], edx */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008250d0:; BB(0x008250d0);
    /* 008250d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008250d1: ret 8 */ FN_RET(0x00824e7c); r_esp += 12; return;
L_008250d4:; BB(0x008250d4);
    /* 008250d4: cmp edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008250da: jne 0x8250e7 */ if (!fZ) goto L_008250e7;
L_008250dc:; BB(0x008250dc);
    /* 008250dc: add ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008250e2: jmp 0x825258 */ goto L_00825258;
L_008250e7:; BB(0x008250e7);
    /* 008250e7: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008250ea: je 0x825258 */ if (fZ) goto L_00825258;
L_008250f0:; BB(0x008250f0);
    /* 008250f0: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008250f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008250f5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008250f8: je 0x825258 */ if (fZ) goto L_00825258;
L_008250fe:; BB(0x008250fe);
    /* 008250fe: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825101: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825103: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825106: je 0x825258 */ if (fZ) goto L_00825258;
L_0082510c:; BB(0x0082510c);
    /* 0082510c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082510f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825111: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825114: je 0x825258 */ if (fZ) goto L_00825258;
L_0082511a:; BB(0x0082511a);
    /* 0082511a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082511d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0082511f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825122: je 0x825258 */ if (fZ) goto L_00825258;
L_00825128:; BB(0x00825128);
    /* 00825128: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082512b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0082512d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825130: je 0x825258 */ if (fZ) goto L_00825258;
L_00825136:; BB(0x00825136);
    /* 00825136: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825139: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0082513b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082513e: je 0x825258 */ if (fZ) goto L_00825258;
L_00825144:; BB(0x00825144);
    /* 00825144: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825147: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825149: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082514c: je 0x825258 */ if (fZ) goto L_00825258;
L_00825152:; BB(0x00825152);
    /* 00825152: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825155: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825157: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082515a: je 0x825258 */ if (fZ) goto L_00825258;
L_00825160:; BB(0x00825160);
    /* 00825160: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825163: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825165: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825168: je 0x825258 */ if (fZ) goto L_00825258;
L_0082516e:; BB(0x0082516e);
    /* 0082516e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825171: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825173: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825176: je 0x825258 */ if (fZ) goto L_00825258;
L_0082517c:; BB(0x0082517c);
    /* 0082517c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082517f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825181: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825184: je 0x825258 */ if (fZ) goto L_00825258;
L_0082518a:; BB(0x0082518a);
    /* 0082518a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082518d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0082518f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825192: je 0x825258 */ if (fZ) goto L_00825258;
L_00825198:; BB(0x00825198);
    /* 00825198: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082519b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0082519d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008251a0: je 0x825258 */ if (fZ) goto L_00825258;
L_008251a6:; BB(0x008251a6);
    /* 008251a6: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008251a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008251ab: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008251ae: je 0x825258 */ if (fZ) goto L_00825258;
L_008251b4:; BB(0x008251b4);
    /* 008251b4: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008251b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008251b9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008251bc: je 0x825258 */ if (fZ) goto L_00825258;
L_008251c2:; BB(0x008251c2);
    /* 008251c2: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008251c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008251c7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008251ca: je 0x825258 */ if (fZ) goto L_00825258;
L_008251d0:; BB(0x008251d0);
    /* 008251d0: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008251d3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008251d5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008251d8: je 0x825258 */ if (fZ) goto L_00825258;
L_008251de:; BB(0x008251de);
    /* 008251de: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008251e1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008251e3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008251e6: je 0x825258 */ if (fZ) goto L_00825258;
L_008251e8:; BB(0x008251e8);
    /* 008251e8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008251eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008251ed: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008251f0: je 0x825258 */ if (fZ) goto L_00825258;
L_008251f2:; BB(0x008251f2);
    /* 008251f2: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008251f5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008251f7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008251fa: je 0x825258 */ if (fZ) goto L_00825258;
L_008251fc:; BB(0x008251fc);
    /* 008251fc: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008251ff: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825201: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825204: je 0x825258 */ if (fZ) goto L_00825258;
L_00825206:; BB(0x00825206);
    /* 00825206: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825209: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0082520b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082520e: je 0x825258 */ if (fZ) goto L_00825258;
L_00825210:; BB(0x00825210);
    /* 00825210: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825213: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825215: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825218: je 0x825258 */ if (fZ) goto L_00825258;
L_0082521a:; BB(0x0082521a);
    /* 0082521a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082521d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0082521f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825222: je 0x825258 */ if (fZ) goto L_00825258;
L_00825224:; BB(0x00825224);
    /* 00825224: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825227: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825229: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082522c: je 0x825258 */ if (fZ) goto L_00825258;
L_0082522e:; BB(0x0082522e);
    /* 0082522e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825231: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825233: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825236: je 0x825258 */ if (fZ) goto L_00825258;
L_00825238:; BB(0x00825238);
    /* 00825238: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082523b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0082523d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825240: je 0x825258 */ if (fZ) goto L_00825258;
L_00825242:; BB(0x00825242);
    /* 00825242: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825245: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825247: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082524a: je 0x825258 */ if (fZ) goto L_00825258;
L_0082524c:; BB(0x0082524c);
    /* 0082524c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082524f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00825251: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825254: je 0x825258 */ if (fZ) goto L_00825258;
L_00825256:; BB(0x00825256);
    /* 00825256: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00825258:; BB(0x00825258);
    /* 00825258: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0082525c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0082525e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00825261: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00825262: ret 8 */ FN_RET(0x00824e7c); r_esp += 12; return;
}

