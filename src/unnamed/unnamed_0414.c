#include "protos.h"

void f_00414024(void)
{
    FN_ENTER(0x00414024);
    /* 00414024: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00414029: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041402f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414030: call 0x695214 */ r_esp -= 4; W32(r_esp, 0x414035u); f_00695214();
    /* 00414035: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414036: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00414039: mov dword ptr [eax + 0x20], 0xc */ W32((u32)(r_eax+0x20u), 0xcu);
    /* 00414040: jmp 0x4140f7 */ goto L_004140f7;
L_004140f7:; BB(0x004140f7);
    /* 004140f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004140fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414101: mov esp, ebp */ r_esp = r_ebp;
    /* 00414103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414104: ret  */ FN_RET(0x00414024); r_esp += 4; return;
}

void f_00414045(void)
{
    FN_ENTER(0x00414045);
    /* 00414045: mov eax, edx */ r_eax = r_edx;
    /* 00414047: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0041404a: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x41404fu); f_0073600c();
    /* 0041404f: mov ecx, dword ptr [0xa3a900] */ r_ecx = R32((u32)(0xa3a900u));
    /* 00414055: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00414057: push 0x8fabf8 */ { u32 v = 0x8fabf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041405c: call 0x402918 */ r_esp -= 4; W32(r_esp, 0x414061u); f_00402918();
    /* 00414061: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414064: mov dword ptr [edx + 0x20], 0xa */ W32((u32)(r_edx+0x20u), 0xau);
    /* 0041406b: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0041406e: jmp 0x4140f7 */ goto L_004140f7;
L_004140f7:; BB(0x004140f7);
    /* 004140f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004140fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414101: mov esp, ebp */ r_esp = r_ebp;
    /* 00414103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414104: ret  */ FN_RET(0x00414045); r_esp += 4; return;
}

void f_00414073(void)
{
    FN_ENTER(0x00414073);
    /* 00414073: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00414076: mov dword ptr [eax + 0x1f0], 1 */ W32((u32)(r_eax+0x1f0u), 0x1u);
    /* 00414080: mov dword ptr [edx + 0x20], 5 */ W32((u32)(r_edx+0x20u), 0x5u);
    /* 00414087: jmp 0x4140f7 */ goto L_004140f7;
L_004140f7:; BB(0x004140f7);
    /* 004140f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004140fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414101: mov esp, ebp */ r_esp = r_ebp;
    /* 00414103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414104: ret  */ FN_RET(0x00414073); r_esp += 4; return;
}

void f_00414089(void)
{
    FN_ENTER(0x00414089);
    /* 00414089: mov eax, edx */ r_eax = r_edx;
    /* 0041408b: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0041408e: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x414093u); f_0073600c();
    /* 00414093: mov ecx, dword ptr [0xa3a900] */ r_ecx = R32((u32)(0xa3a900u));
    /* 00414099: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041409b: push 0x8fabf8 */ { u32 v = 0x8fabf8u; r_esp -= 4; W32(r_esp, v); }
    /* 004140a0: call 0x4028bc */ r_esp -= 4; W32(r_esp, 0x4140a5u); f_004028bc();
    /* 004140a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004140a8: mov dword ptr [edx + 0x20], 9 */ W32((u32)(r_edx+0x20u), 0x9u);
    /* 004140af: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 004140b2: jmp 0x4140f7 */ goto L_004140f7;
L_004140f7:; BB(0x004140f7);
    /* 004140f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004140fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414101: mov esp, ebp */ r_esp = r_ebp;
    /* 00414103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414104: ret  */ FN_RET(0x00414089); r_esp += 4; return;
}

void f_004140b4(void)
{
    FN_ENTER(0x004140b4);
    /* 004140b4: mov eax, edx */ r_eax = r_edx;
    /* 004140b6: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 004140b9: call 0x482278 */ r_esp -= 4; W32(r_esp, 0x4140beu); f_00482278();
    /* 004140be: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004140c3: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004140c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004140ca: call 0x695214 */ r_esp -= 4; W32(r_esp, 0x4140cfu); f_00695214();
    /* 004140cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004140d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004140d3: mov dword ptr [eax + 0x20], 0xc */ W32((u32)(r_eax+0x20u), 0xcu);
    /* 004140da: jmp 0x4140f7 */ goto L_004140f7;
L_004140f7:; BB(0x004140f7);
    /* 004140f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004140fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414101: mov esp, ebp */ r_esp = r_ebp;
    /* 00414103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414104: ret  */ FN_RET(0x004140b4); r_esp += 4; return;
}

void f_00414110(void) /* sub_414110 */
{
    FN_ENTER(0x00414110);
    /* 00414110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414111: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00414113: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00414116: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x41411bu); f_0073ce50();
    /* 0041411b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041411d: je 0x414170 */ if (fZ) goto L_00414170;
L_0041411f:; BB(0x0041411f);
    /* 0041411f: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00414122: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x414127u); f_0073d134();
    /* 00414127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414129: jne 0x414155 */ if (!fZ) goto L_00414155;
L_0041412b:; BB(0x0041412b);
    /* 0041412b: mov ecx, dword ptr [ebp + 0x5c] */ r_ecx = R32((u32)(r_ebp+0x5cu));
    /* 0041412e: call 0x48230c */ r_esp -= 4; W32(r_esp, 0x414133u); f_0048230c();
    /* 00414133: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00414138: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041413e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041413f: call 0x695214 */ r_esp -= 4; W32(r_esp, 0x414144u); f_00695214();
    /* 00414144: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414145: mov dword ptr [ebp + 0x58], 3 */ W32((u32)(r_ebp+0x58u), 0x3u);
    /* 0041414c: mov dword ptr [ebp + 0x20], 0xc */ W32((u32)(r_ebp+0x20u), 0xcu);
    /* 00414153: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414154: ret  */ FN_RET(0x00414110); r_esp += 4; return;
L_00414155:; BB(0x00414155);
    /* 00414155: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00414158: jne 0x414190 */ if (!fZ) goto L_00414190;
L_0041415a:; BB(0x0041415a);
    /* 0041415a: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0041415d: mov dword ptr [eax + 0x1f0], 1 */ W32((u32)(r_eax+0x1f0u), 0x1u);
    /* 00414167: mov dword ptr [ebp + 0x20], 5 */ W32((u32)(r_ebp+0x20u), 0x5u);
    /* 0041416e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041416f: ret  */ FN_RET(0x00414110); r_esp += 4; return;
L_00414170:; BB(0x00414170);
    /* 00414170: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00414173: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x414178u); f_0073d114();
    /* 00414178: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041417a: je 0x414190 */ if (fZ) goto L_00414190;
L_0041417c:; BB(0x0041417c);
    /* 0041417c: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0041417f: mov dword ptr [eax + 0x1f0], 1 */ W32((u32)(r_eax+0x1f0u), 0x1u);
    /* 00414189: mov dword ptr [ebp + 0x20], 5 */ W32((u32)(r_ebp+0x20u), 0x5u);
L_00414190:; BB(0x00414190);
    /* 00414190: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414191: ret  */ FN_RET(0x00414110); r_esp += 4; return;
}

void f_00414194(void) /* sub_414194 */
{
    FN_ENTER(0x00414194);
    /* 00414194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00414195: mov esi, ecx */ r_esi = r_ecx;
    /* 00414197: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0041419a: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x41419fu); f_0073ce50();
    /* 0041419f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004141a1: je 0x4141fc */ if (fZ) goto L_004141fc;
L_004141a3:; BB(0x004141a3);
    /* 004141a3: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 004141a6: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x4141abu); f_0073d134();
    /* 004141ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004141ad: jne 0x4141d9 */ if (!fZ) goto L_004141d9;
L_004141af:; BB(0x004141af);
    /* 004141af: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 004141b2: call 0x482444 */ r_esp -= 4; W32(r_esp, 0x4141b7u); f_00482444();
    /* 004141b7: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004141bc: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004141c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004141c3: call 0x695214 */ r_esp -= 4; W32(r_esp, 0x4141c8u); f_00695214();
    /* 004141c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004141c9: mov dword ptr [esi + 0x58], 1 */ W32((u32)(r_esi+0x58u), 0x1u);
    /* 004141d0: mov dword ptr [esi + 0x20], 0xc */ W32((u32)(r_esi+0x20u), 0xcu);
    /* 004141d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004141d8: ret  */ FN_RET(0x00414194); r_esp += 4; return;
L_004141d9:; BB(0x004141d9);
    /* 004141d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004141dc: jne 0x414224 */ if (!fZ) goto L_00414224;
L_004141de:; BB(0x004141de);
    /* 004141de: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 004141e1: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x4141e6u); f_0073605c();
    /* 004141e6: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 004141e9: mov dword ptr [eax + 0x1f0], 1 */ W32((u32)(r_eax+0x1f0u), 0x1u);
    /* 004141f3: mov dword ptr [esi + 0x20], 5 */ W32((u32)(r_esi+0x20u), 0x5u);
    /* 004141fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004141fb: ret  */ FN_RET(0x00414194); r_esp += 4; return;
L_004141fc:; BB(0x004141fc);
    /* 004141fc: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 004141ff: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x414204u); f_0073d114();
    /* 00414204: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414206: je 0x414224 */ if (fZ) goto L_00414224;
L_00414208:; BB(0x00414208);
    /* 00414208: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0041420b: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x414210u); f_0073605c();
    /* 00414210: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00414213: mov dword ptr [eax + 0x1f0], 1 */ W32((u32)(r_eax+0x1f0u), 0x1u);
    /* 0041421d: mov dword ptr [esi + 0x20], 5 */ W32((u32)(r_esi+0x20u), 0x5u);
L_00414224:; BB(0x00414224);
    /* 00414224: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00414225: ret  */ FN_RET(0x00414194); r_esp += 4; return;
}

void f_00414228(void) /* sub_414228 */
{
    FN_ENTER(0x00414228);
    /* 00414228: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00414229: mov esi, ecx */ r_esi = r_ecx;
    /* 0041422b: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 0041422e: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x414233u); f_0073ce50();
    /* 00414233: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414235: je 0x414290 */ if (fZ) goto L_00414290;
L_00414237:; BB(0x00414237);
    /* 00414237: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 0041423a: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x41423fu); f_0073d134();
    /* 0041423f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414241: jne 0x41426d */ if (!fZ) goto L_0041426d;
L_00414243:; BB(0x00414243);
    /* 00414243: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 00414246: call 0x48230c */ r_esp -= 4; W32(r_esp, 0x41424bu); f_0048230c();
    /* 0041424b: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00414250: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00414256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414257: call 0x695214 */ r_esp -= 4; W32(r_esp, 0x41425cu); f_00695214();
    /* 0041425c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041425d: mov dword ptr [esi + 0x58], 3 */ W32((u32)(r_esi+0x58u), 0x3u);
    /* 00414264: mov dword ptr [esi + 0x20], 0xc */ W32((u32)(r_esi+0x20u), 0xcu);
    /* 0041426b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041426c: ret  */ FN_RET(0x00414228); r_esp += 4; return;
L_0041426d:; BB(0x0041426d);
    /* 0041426d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00414270: jne 0x4142b8 */ if (!fZ) goto L_004142b8;
L_00414272:; BB(0x00414272);
    /* 00414272: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00414275: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x41427au); f_0073605c();
    /* 0041427a: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0041427d: mov dword ptr [eax + 0x1f0], 1 */ W32((u32)(r_eax+0x1f0u), 0x1u);
    /* 00414287: mov dword ptr [esi + 0x20], 5 */ W32((u32)(r_esi+0x20u), 0x5u);
    /* 0041428e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041428f: ret  */ FN_RET(0x00414228); r_esp += 4; return;
L_00414290:; BB(0x00414290);
    /* 00414290: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 00414293: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x414298u); f_0073d114();
    /* 00414298: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041429a: je 0x4142b8 */ if (fZ) goto L_004142b8;
L_0041429c:; BB(0x0041429c);
    /* 0041429c: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0041429f: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x4142a4u); f_0073605c();
    /* 004142a4: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 004142a7: mov dword ptr [eax + 0x1f0], 1 */ W32((u32)(r_eax+0x1f0u), 0x1u);
    /* 004142b1: mov dword ptr [esi + 0x20], 5 */ W32((u32)(r_esi+0x20u), 0x5u);
L_004142b8:; BB(0x004142b8);
    /* 004142b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004142b9: ret  */ FN_RET(0x00414228); r_esp += 4; return;
}

void f_004142bc(void) /* sub_4142BC */
{
    FN_ENTER(0x004142bc);
    /* 004142bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004142bd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004142c0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004142c2: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004142c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004142c7: je 0x4142d5 */ if (fZ) goto L_004142d5;
L_004142c9:; BB(0x004142c9);
    /* 004142c9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4142ceu); f_007127b0();
    /* 004142ce: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
L_004142d5:; BB(0x004142d5);
    /* 004142d5: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004142d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004142da: je 0x4142e8 */ if (fZ) goto L_004142e8;
L_004142dc:; BB(0x004142dc);
    /* 004142dc: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x4142e1u); f_0073d160();
    /* 004142e1: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
L_004142e8:; BB(0x004142e8);
    /* 004142e8: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004142eb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004142ee: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004142f1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004142f4: fcomp dword ptr [0x8fabec] */ fx_compare(ST(0), R_F32((u32)(0x8fabecu))); FPOP();
    /* 004142fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004142fc: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004142ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00414300: jbe 0x414318 */ if ((fC||fZ)) goto L_00414318;
L_00414302:; BB(0x00414302);
    /* 00414302: mov ecx, dword ptr [ebx + 0x5c] */ r_ecx = R32((u32)(r_ebx+0x5cu));
    /* 00414305: call 0x482250 */ r_esp -= 4; W32(r_esp, 0x41430au); f_00482250();
    /* 0041430a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041430c: jne 0x414313 */ if (!fZ) goto L_00414313;
L_0041430e:; BB(0x0041430e);
    /* 0041430e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00414311: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00414312: ret  */ FN_RET(0x004142bc); r_esp += 4; return;
L_00414313:; BB(0x00414313);
    /* 00414313: call 0x81e298 */ r_esp -= 4; W32(r_esp, 0x414318u); f_0081e298();
L_00414318:; BB(0x00414318);
    /* 00414318: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041431b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041431c: ret  */ FN_RET(0x004142bc); r_esp += 4; return;
}

void f_00414320(void) /* sub_414320 */
{
    FN_ENTER(0x00414320);
    /* 00414320: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00414321: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414324: mov esi, ecx */ r_esi = r_ecx;
    /* 00414326: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00414329: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041432b: je 0x414339 */ if (fZ) goto L_00414339;
L_0041432d:; BB(0x0041432d);
    /* 0041432d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x414332u); f_007127b0();
    /* 00414332: mov dword ptr [esi + 0x34], 0 */ W32((u32)(r_esi+0x34u), 0x0u);
L_00414339:; BB(0x00414339);
    /* 00414339: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0041433c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041433e: je 0x41434c */ if (fZ) goto L_0041434c;
L_00414340:; BB(0x00414340);
    /* 00414340: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x414345u); f_0073d160();
    /* 00414345: mov dword ptr [esi + 0x40], 0 */ W32((u32)(r_esi+0x40u), 0x0u);
L_0041434c:; BB(0x0041434c);
    /* 0041434c: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0041434f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414351: je 0x41435f */ if (fZ) goto L_0041435f;
L_00414353:; BB(0x00414353);
    /* 00414353: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x414358u); f_0073d160();
    /* 00414358: mov dword ptr [esi + 0x48], 0 */ W32((u32)(r_esi+0x48u), 0x0u);
L_0041435f:; BB(0x0041435f);
    /* 0041435f: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 00414362: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414364: je 0x414372 */ if (fZ) goto L_00414372;
L_00414366:; BB(0x00414366);
    /* 00414366: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x41436bu); f_0073d160();
    /* 0041436b: mov dword ptr [esi + 0x4c], 0 */ W32((u32)(r_esi+0x4cu), 0x0u);
L_00414372:; BB(0x00414372);
    /* 00414372: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00414375: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00414378: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0041437b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0041437e: fcomp dword ptr [0x8fabe8] */ fx_compare(ST(0), R_F32((u32)(0x8fabe8u))); FPOP();
    /* 00414384: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00414386: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 00414389: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041438a: jbe 0x4143ef */ if ((fC||fZ)) goto L_004143ef;
L_0041438c:; BB(0x0041438c);
    /* 0041438c: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 0041438f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414391: je 0x41441b */ if (fZ) goto L_0041441b;
L_00414397:; BB(0x00414397);
    /* 00414397: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041439a: je 0x4143f4 */ if (fZ) goto L_004143f4;
L_0041439c:; BB(0x0041439c);
    /* 0041439c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041439f: je 0x4143c6 */ if (fZ) goto L_004143c6;
L_004143a1:; BB(0x004143a1);
    /* 004143a1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004143a4: jl 0x4143ef */ if ((fS!=fO)) goto L_004143ef;
L_004143a6:; BB(0x004143a6);
    /* 004143a6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004143a9: jle 0x4143ef */ if ((fZ||fS!=fO)) goto L_004143ef;
L_004143ab:; BB(0x004143ab);
    /* 004143ab: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004143ae: jne 0x4143ef */ if (!fZ) goto L_004143ef;
L_004143b0:; BB(0x004143b0);
    /* 004143b0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004143b2: call 0x7a618c */ r_esp -= 4; W32(r_esp, 0x4143b7u); f_007a618c();
    /* 004143b7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004143b9: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x4143beu); f_007a60dc();
    /* 004143be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004143c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004143c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004143c5: ret  */ FN_RET(0x00414320); r_esp += 4; return;
L_004143c6:; BB(0x004143c6);
    /* 004143c6: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 004143c9: call 0x482250 */ r_esp -= 4; W32(r_esp, 0x4143ceu); f_00482250();
    /* 004143ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004143d0: jne 0x4143d7 */ if (!fZ) goto L_004143d7;
L_004143d2:; BB(0x004143d2);
    /* 004143d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004143d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004143d6: ret  */ FN_RET(0x00414320); r_esp += 4; return;
L_004143d7:; BB(0x004143d7);
    /* 004143d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004143d9: call 0x7c162c */ r_esp -= 4; W32(r_esp, 0x4143deu); f_007c162c();
    /* 004143de: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004143e0: call 0x7a618c */ r_esp -= 4; W32(r_esp, 0x4143e5u); f_007a618c();
    /* 004143e5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004143e7: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x4143ecu); f_007a60dc();
    /* 004143ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004143ef:; BB(0x004143ef);
    /* 004143ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004143f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004143f3: ret  */ FN_RET(0x00414320); r_esp += 4; return;
L_004143f4:; BB(0x004143f4);
    /* 004143f4: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 004143f7: call 0x482250 */ r_esp -= 4; W32(r_esp, 0x4143fcu); f_00482250();
    /* 004143fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004143fe: jne 0x414405 */ if (!fZ) goto L_00414405;
L_00414400:; BB(0x00414400);
    /* 00414400: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00414403: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00414404: ret  */ FN_RET(0x00414320); r_esp += 4; return;
L_00414405:; BB(0x00414405);
    /* 00414405: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00414407: call 0x7a618c */ r_esp -= 4; W32(r_esp, 0x41440cu); f_007a618c();
    /* 0041440c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041440e: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x414413u); f_007a60dc();
    /* 00414413: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414416: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00414419: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041441a: ret  */ FN_RET(0x00414320); r_esp += 4; return;
L_0041441b:; BB(0x0041441b);
    /* 0041441b: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 0041441e: call 0x482250 */ r_esp -= 4; W32(r_esp, 0x414423u); f_00482250();
    /* 00414423: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414425: jne 0x41442c */ if (!fZ) goto L_0041442c;
L_00414427:; BB(0x00414427);
    /* 00414427: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041442a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041442b: ret  */ FN_RET(0x00414320); r_esp += 4; return;
L_0041442c:; BB(0x0041442c);
    /* 0041442c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0041442e: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x414433u); f_007a60dc();
    /* 00414433: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414434: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00414437: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00414438: ret  */ FN_RET(0x00414320); r_esp += 4; return;
}

void f_0041443c(void) /* sub_41443C */
{
    FN_ENTER(0x0041443c);
    /* 0041443c: mov dword ptr [0xa3b0bc], 0x3f800000 */ W32((u32)(0xa3b0bcu), 0x3f800000u);
    /* 00414446: mov dword ptr [0xa3b0c0], 0x41000000 */ W32((u32)(0xa3b0c0u), 0x41000000u);
    /* 00414450: mov dword ptr [0xa3b0c4], 0x3fc00000 */ W32((u32)(0xa3b0c4u), 0x3fc00000u);
    /* 0041445a: ret  */ FN_RET(0x0041443c); r_esp += 4; return;
}

void f_0041445c(void) /* sub_41445C */
{
    FN_ENTER(0x0041445c);
    /* 0041445c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041445e: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00414461: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00414464: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00414467: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0041446a: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 0041446d: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00414470: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00414473: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00414476: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 00414479: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 0041447c: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0041447f: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 00414482: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 00414485: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 00414488: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0041448d: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00414490: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00414493: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 00414496: ret  */ FN_RET(0x0041445c); r_esp += 4; return;
}

void f_00414498(void) /* sub_414498 */
{
    FN_ENTER(0x00414498);
    /* 00414498: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00414499: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041449b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041449d: call 0x4144bc */ r_esp -= 4; W32(r_esp, 0x4144a2u); f_004144bc();
    /* 004144a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004144a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004144a8: jne 0x4144ae */ if (!fZ) goto L_004144ae;
L_004144aa:; BB(0x004144aa);
    /* 004144aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004144ab: ret 4 */ FN_RET(0x00414498); r_esp += 8; return;
L_004144ae:; BB(0x004144ae);
    /* 004144ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004144af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4144b4u); f_005c2f74();
    /* 004144b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004144b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004144b6: ret 4 */ FN_RET(0x00414498); r_esp += 8; return;
}

void f_004144bc(void) /* sub_4144BC */
{
    FN_ENTER(0x004144bc);
    /* 004144bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004144bd: mov ebp, esp */ r_ebp = r_esp;
    /* 004144bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004144c1: push 0x8ccfe4 */ { u32 v = 0x8ccfe4u; r_esp -= 4; W32(r_esp, v); }
    /* 004144c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004144cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004144cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004144d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004144d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004144da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004144dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004144e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004144e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004144e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004144e9: mov dword ptr [ecx], 0xaf3440 */ W32((u32)(r_ecx), 0xaf3440u);
    /* 004144ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004144f6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4144fbu); f_008171e8();
    /* 004144fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004144fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414505: mov esp, ebp */ r_esp = r_ebp;
    /* 00414507: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414508: ret  */ FN_RET(0x004144bc); r_esp += 4; return;
}

void f_0041450c(void) /* sub_41450C */
{
    FN_ENTER(0x0041450c);
    /* 0041450c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041450d: mov ebp, esp */ r_ebp = r_esp;
    /* 0041450f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00414511: push 0x8cd104 */ { u32 v = 0x8cd104u; r_esp -= 4; W32(r_esp, v); }
    /* 00414516: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041451c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041451d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00414524: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041452a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041452d: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00414530: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00414533: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00414536: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00414539: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0041453c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x414541u); f_008193cc();
    /* 00414541: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414548: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041454b: mov dword ptr [ecx], 0xaf3440 */ W32((u32)(r_ecx), 0xaf3440u);
    /* 00414551: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00414553: mov eax, dword ptr [0x9a3774] */ r_eax = R32((u32)(0x9a3774u));
    /* 00414558: mov dword ptr [0xa3b0e8], edx */ W32((u32)(0xa3b0e8u), r_edx);
    /* 0041455e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00414561: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00414564: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00414567: call 0x6fb8ec */ r_esp -= 4; W32(r_esp, 0x41456cu); f_006fb8ec();
    /* 0041456c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041456e: jne 0x414599 */ if (!fZ) goto L_00414599;
L_00414570:; BB(0x00414570);
    /* 00414570: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00414572: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x414577u); f_007a60dc();
    /* 00414577: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414578: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041457b: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0041457f: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414585: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00414589: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041458c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414593: mov esp, ebp */ r_esp = r_ebp;
    /* 00414595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414596: ret 4 */ FN_RET(0x0041450c); r_esp += 8; return;
L_00414599:; BB(0x00414599);
    /* 00414599: mov eax, dword ptr [0xa3b0a4] */ r_eax = R32((u32)(0xa3b0a4u));
    /* 0041459e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004145a1: je 0x414917 */ if (fZ) goto L_00414917;
L_004145a7:; BB(0x004145a7);
    /* 004145a7: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 004145b1: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004145b3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4145b8u); f_005caba4();
    /* 004145b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004145b9: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 004145bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004145c1: je 0x4145e8 */ if (fZ) goto L_004145e8;
L_004145c3:; BB(0x004145c3);
    /* 004145c3: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 004145cd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004145d4: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004145d7: mov ecx, eax */ r_ecx = r_eax;
    /* 004145d9: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x4145deu); f_004010b0();
    /* 004145de: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_004145e8:; BB(0x004145e8);
    /* 004145e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004145ef: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004145f9: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004145fb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414600u); f_005caba4();
    /* 00414600: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414601: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00414607: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414609: je 0x414630 */ if (fZ) goto L_00414630;
L_0041460b:; BB(0x0041460b);
    /* 0041460b: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 00414615: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0041461c: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041461f: mov ecx, eax */ r_ecx = r_eax;
    /* 00414621: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x414626u); f_004012cc();
    /* 00414626: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00414630:; BB(0x00414630);
    /* 00414630: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414637: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 00414641: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00414643: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414648u); f_005caba4();
    /* 00414648: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414649: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0041464f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414651: je 0x414678 */ if (fZ) goto L_00414678;
L_00414653:; BB(0x00414653);
    /* 00414653: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 0041465d: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00414664: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00414667: mov ecx, eax */ r_ecx = r_eax;
    /* 00414669: call 0x410934 */ r_esp -= 4; W32(r_esp, 0x41466eu); f_00410934();
    /* 0041466e: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00414678:; BB(0x00414678);
    /* 00414678: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041467f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 00414686: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 0041468b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414690u); f_005caba4();
    /* 00414690: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414691: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00414694: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414696: je 0x4146b9 */ if (fZ) goto L_004146b9;
L_00414698:; BB(0x00414698);
    /* 00414698: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 0041469f: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004146a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004146a8: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004146ab: mov ecx, eax */ r_ecx = r_eax;
    /* 004146ad: call 0x415154 */ r_esp -= 4; W32(r_esp, 0x4146b2u); f_00415154();
    /* 004146b2: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_004146b9:; BB(0x004146b9);
    /* 004146b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004146c0: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 004146c7: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004146cc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4146d1u); f_005caba4();
    /* 004146d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004146d2: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 004146d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004146d7: je 0x4146f8 */ if (fZ) goto L_004146f8;
L_004146d9:; BB(0x004146d9);
    /* 004146d9: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 004146e0: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004146e7: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004146ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004146ec: call 0x41571c */ r_esp -= 4; W32(r_esp, 0x4146f1u); f_0041571c();
    /* 004146f1: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_004146f8:; BB(0x004146f8);
    /* 004146f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004146ff: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00414706: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041470b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00414710: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00414713: mov dword ptr [ebp - 0x6c], 0x43500000 */ W32((u32)(r_ebp+0xffffff94u), 0x43500000u);
    /* 0041471a: mov dword ptr [ebp - 0x68], 0x43450000 */ W32((u32)(r_ebp+0xffffff98u), 0x43450000u);
    /* 00414721: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00414724: mov dword ptr [ebp - 0x60], 0x43320000 */ W32((u32)(r_ebp+0xffffffa0u), 0x43320000u);
    /* 0041472b: mov dword ptr [ebp - 0x5c], 0x43790000 */ W32((u32)(r_ebp+0xffffffa4u), 0x43790000u);
    /* 00414732: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414737u); f_005caba4();
    /* 00414737: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414738: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0041473b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041473d: je 0x414765 */ if (fZ) goto L_00414765;
L_0041473f:; BB(0x0041473f);
    /* 0041473f: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 00414746: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0041474d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00414750: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 00414753: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00414755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414756: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00414759: call 0x412f2c */ r_esp -= 4; W32(r_esp, 0x41475eu); f_00412f2c();
    /* 0041475e: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00414765:; BB(0x00414765);
    /* 00414765: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041476c: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00414773: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414778: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41477du); f_005caba4();
    /* 0041477d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041477e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00414781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414783: je 0x4147ab */ if (fZ) goto L_004147ab;
L_00414785:; BB(0x00414785);
    /* 00414785: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0041478c: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00414793: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00414796: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00414799: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041479b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041479c: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041479f: call 0x412f2c */ r_esp -= 4; W32(r_esp, 0x4147a4u); f_00412f2c();
    /* 004147a4: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_004147ab:; BB(0x004147ab);
    /* 004147ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004147b2: mov dword ptr [ebp - 0x4c], 0x43970000 */ W32((u32)(r_ebp+0xffffffb4u), 0x43970000u);
    /* 004147b9: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 004147be: mov dword ptr [ebp - 0x48], 0x41e00000 */ W32((u32)(r_ebp+0xffffffb8u), 0x41e00000u);
    /* 004147c5: mov dword ptr [ebp - 0x44], 0x43390000 */ W32((u32)(r_ebp+0xffffffbcu), 0x43390000u);
    /* 004147cc: mov dword ptr [ebp - 0x40], 0x43460000 */ W32((u32)(r_ebp+0xffffffc0u), 0x43460000u);
    /* 004147d3: mov dword ptr [ebp - 0x3c], 0x431b0000 */ W32((u32)(r_ebp+0xffffffc4u), 0x431b0000u);
    /* 004147da: mov dword ptr [ebp - 0x38], 0x437a0000 */ W32((u32)(r_ebp+0xffffffc8u), 0x437a0000u);
    /* 004147e1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004147e8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4147edu); f_005caba4();
    /* 004147ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004147f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004147f3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004147f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004147f8: je 0x41490d */ if (fZ) goto L_0041490d;
L_004147fe:; BB(0x004147fe);
    /* 004147fe: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00414805: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0041480c: mov ecx, eax */ r_ecx = r_eax;
    /* 0041480e: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 00414811: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00414814: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414816: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414817: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414818: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041481b: call 0x412354 */ r_esp -= 4; W32(r_esp, 0x414820u); f_00412354();
    /* 00414820: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00414827:; BB(0x00414827);
    /* 00414827: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041482a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041482d: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00414830: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414837: mov ecx, eax */ r_ecx = r_eax;
    /* 00414839: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0041483c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041483d: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x414842u); f_00412094();
    /* 00414842: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414845: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00414848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414849: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0041484c: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x414851u); f_00412094();
    /* 00414851: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x414856u); f_00694c6c();
    /* 00414856: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414859: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0041485c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00414863: mov dword ptr [ecx + 0x200], eax */ W32((u32)(r_ecx+0x200u), r_eax);
    /* 00414869: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0041486b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414870u); f_005caba4();
    /* 00414870: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414873: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414876: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00414879: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041487b: je 0x414906 */ if (fZ) goto L_00414906;
L_00414881:; BB(0x00414881);
    /* 00414881: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00414888: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0041488f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00414892: mov ecx, eax */ r_ecx = r_eax;
    /* 00414894: call 0x40b72c */ r_esp -= 4; W32(r_esp, 0x414899u); f_0040b72c();
    /* 00414899: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004148a0:; BB(0x004148a0);
    /* 004148a0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004148a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004148a6: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004148a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004148b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004148b2: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004148b4: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4148b9u); f_00792fe8();
    /* 004148b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004148bc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004148bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004148c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004148c2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004148c5: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x4148cau); f_0040b7b4();
    /* 004148ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004148cc: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004148ce: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4148d3u); f_00792fe8();
    /* 004148d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004148d6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004148d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004148da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004148dc: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004148df: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x4148e4u); f_0040b7b4();
    /* 004148e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004148e6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004148e8: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004148eb: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x4148f0u); f_004088b8();
    /* 004148f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004148f3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004148f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004148f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414900: mov esp, ebp */ r_esp = r_ebp;
    /* 00414902: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414903: ret 4 */ FN_RET(0x0041450c); r_esp += 8; return;
L_00414906:; BB(0x00414906);
    /* 00414906: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414908: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041490b: jmp 0x4148a0 */ goto L_004148a0;
L_0041490d:; BB(0x0041490d);
    /* 0041490d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041490f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414912: jmp 0x414827 */ goto L_00414827;
L_00414917:; BB(0x00414917);
    /* 00414917: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414919: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x41491eu); f_0080c79c();
    /* 0041491e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041491f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414922: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00414926: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041492b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0041492f: call 0x821544 */ r_esp -= 4; W32(r_esp, 0x414934u); f_00821544();
    /* 00414934: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414937: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041493a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414941: mov esp, ebp */ r_esp = r_ebp;
    /* 00414943: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414944: ret 4 */ FN_RET(0x0041450c); r_esp += 8; return;
}

void f_00414544(void)
{
    FN_ENTER(0x00414544);
    /* 00414544: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00414546: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00414548: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041454b: mov dword ptr [ecx], 0xaf3440 */ W32((u32)(r_ecx), 0xaf3440u);
    /* 00414551: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00414553: mov eax, dword ptr [0x9a3774] */ r_eax = R32((u32)(0x9a3774u));
    /* 00414558: mov dword ptr [0xa3b0e8], edx */ W32((u32)(0xa3b0e8u), r_edx);
    /* 0041455e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00414561: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00414564: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00414567: call 0x6fb8ec */ r_esp -= 4; W32(r_esp, 0x41456cu); f_006fb8ec();
    /* 0041456c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041456e: jne 0x414599 */ if (!fZ) goto L_00414599;
L_00414570:; BB(0x00414570);
    /* 00414570: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00414572: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x414577u); f_007a60dc();
    /* 00414577: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414578: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041457b: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0041457f: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414585: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00414589: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041458c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414593: mov esp, ebp */ r_esp = r_ebp;
    /* 00414595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414596: ret 4 */ FN_RET(0x00414544); r_esp += 8; return;
L_00414599:; BB(0x00414599);
    /* 00414599: mov eax, dword ptr [0xa3b0a4] */ r_eax = R32((u32)(0xa3b0a4u));
    /* 0041459e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004145a1: je 0x414917 */ if (fZ) goto L_00414917;
L_004145a7:; BB(0x004145a7);
    /* 004145a7: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 004145b1: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004145b3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4145b8u); f_005caba4();
    /* 004145b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004145b9: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 004145bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004145c1: je 0x4145e8 */ if (fZ) goto L_004145e8;
L_004145c3:; BB(0x004145c3);
    /* 004145c3: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 004145cd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004145d4: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004145d7: mov ecx, eax */ r_ecx = r_eax;
    /* 004145d9: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x4145deu); f_004010b0();
    /* 004145de: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_004145e8:; BB(0x004145e8);
    /* 004145e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004145ef: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004145f9: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004145fb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414600u); f_005caba4();
    /* 00414600: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414601: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00414607: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414609: je 0x414630 */ if (fZ) goto L_00414630;
L_0041460b:; BB(0x0041460b);
    /* 0041460b: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 00414615: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0041461c: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041461f: mov ecx, eax */ r_ecx = r_eax;
    /* 00414621: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x414626u); f_004012cc();
    /* 00414626: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00414630:; BB(0x00414630);
    /* 00414630: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414637: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 00414641: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00414643: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414648u); f_005caba4();
    /* 00414648: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414649: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0041464f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414651: je 0x414678 */ if (fZ) goto L_00414678;
L_00414653:; BB(0x00414653);
    /* 00414653: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 0041465d: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00414664: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00414667: mov ecx, eax */ r_ecx = r_eax;
    /* 00414669: call 0x410934 */ r_esp -= 4; W32(r_esp, 0x41466eu); f_00410934();
    /* 0041466e: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00414678:; BB(0x00414678);
    /* 00414678: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041467f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 00414686: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 0041468b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414690u); f_005caba4();
    /* 00414690: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414691: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00414694: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414696: je 0x4146b9 */ if (fZ) goto L_004146b9;
L_00414698:; BB(0x00414698);
    /* 00414698: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 0041469f: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004146a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004146a8: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004146ab: mov ecx, eax */ r_ecx = r_eax;
    /* 004146ad: call 0x415154 */ r_esp -= 4; W32(r_esp, 0x4146b2u); f_00415154();
    /* 004146b2: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_004146b9:; BB(0x004146b9);
    /* 004146b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004146c0: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 004146c7: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004146cc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4146d1u); f_005caba4();
    /* 004146d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004146d2: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 004146d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004146d7: je 0x4146f8 */ if (fZ) goto L_004146f8;
L_004146d9:; BB(0x004146d9);
    /* 004146d9: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 004146e0: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004146e7: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004146ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004146ec: call 0x41571c */ r_esp -= 4; W32(r_esp, 0x4146f1u); f_0041571c();
    /* 004146f1: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_004146f8:; BB(0x004146f8);
    /* 004146f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004146ff: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00414706: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041470b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00414710: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00414713: mov dword ptr [ebp - 0x6c], 0x43500000 */ W32((u32)(r_ebp+0xffffff94u), 0x43500000u);
    /* 0041471a: mov dword ptr [ebp - 0x68], 0x43450000 */ W32((u32)(r_ebp+0xffffff98u), 0x43450000u);
    /* 00414721: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00414724: mov dword ptr [ebp - 0x60], 0x43320000 */ W32((u32)(r_ebp+0xffffffa0u), 0x43320000u);
    /* 0041472b: mov dword ptr [ebp - 0x5c], 0x43790000 */ W32((u32)(r_ebp+0xffffffa4u), 0x43790000u);
    /* 00414732: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414737u); f_005caba4();
    /* 00414737: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414738: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0041473b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041473d: je 0x414765 */ if (fZ) goto L_00414765;
L_0041473f:; BB(0x0041473f);
    /* 0041473f: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 00414746: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0041474d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00414750: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 00414753: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00414755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414756: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00414759: call 0x412f2c */ r_esp -= 4; W32(r_esp, 0x41475eu); f_00412f2c();
    /* 0041475e: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00414765:; BB(0x00414765);
    /* 00414765: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041476c: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00414773: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414778: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41477du); f_005caba4();
    /* 0041477d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041477e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00414781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414783: je 0x4147ab */ if (fZ) goto L_004147ab;
L_00414785:; BB(0x00414785);
    /* 00414785: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0041478c: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00414793: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00414796: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00414799: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041479b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041479c: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041479f: call 0x412f2c */ r_esp -= 4; W32(r_esp, 0x4147a4u); f_00412f2c();
    /* 004147a4: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_004147ab:; BB(0x004147ab);
    /* 004147ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004147b2: mov dword ptr [ebp - 0x4c], 0x43970000 */ W32((u32)(r_ebp+0xffffffb4u), 0x43970000u);
    /* 004147b9: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 004147be: mov dword ptr [ebp - 0x48], 0x41e00000 */ W32((u32)(r_ebp+0xffffffb8u), 0x41e00000u);
    /* 004147c5: mov dword ptr [ebp - 0x44], 0x43390000 */ W32((u32)(r_ebp+0xffffffbcu), 0x43390000u);
    /* 004147cc: mov dword ptr [ebp - 0x40], 0x43460000 */ W32((u32)(r_ebp+0xffffffc0u), 0x43460000u);
    /* 004147d3: mov dword ptr [ebp - 0x3c], 0x431b0000 */ W32((u32)(r_ebp+0xffffffc4u), 0x431b0000u);
    /* 004147da: mov dword ptr [ebp - 0x38], 0x437a0000 */ W32((u32)(r_ebp+0xffffffc8u), 0x437a0000u);
    /* 004147e1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004147e8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4147edu); f_005caba4();
    /* 004147ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004147f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004147f3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004147f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004147f8: je 0x41490d */ if (fZ) goto L_0041490d;
L_004147fe:; BB(0x004147fe);
    /* 004147fe: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00414805: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0041480c: mov ecx, eax */ r_ecx = r_eax;
    /* 0041480e: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 00414811: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00414814: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414816: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414817: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414818: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041481b: call 0x412354 */ r_esp -= 4; W32(r_esp, 0x414820u); f_00412354();
    /* 00414820: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00414827:; BB(0x00414827);
    /* 00414827: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041482a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041482d: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00414830: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414837: mov ecx, eax */ r_ecx = r_eax;
    /* 00414839: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0041483c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041483d: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x414842u); f_00412094();
    /* 00414842: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414845: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00414848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414849: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0041484c: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x414851u); f_00412094();
    /* 00414851: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x414856u); f_00694c6c();
    /* 00414856: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414859: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0041485c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00414863: mov dword ptr [ecx + 0x200], eax */ W32((u32)(r_ecx+0x200u), r_eax);
    /* 00414869: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0041486b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414870u); f_005caba4();
    /* 00414870: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414873: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414876: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00414879: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041487b: je 0x414906 */ if (fZ) goto L_00414906;
L_00414881:; BB(0x00414881);
    /* 00414881: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00414888: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0041488f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00414892: mov ecx, eax */ r_ecx = r_eax;
    /* 00414894: call 0x40b72c */ r_esp -= 4; W32(r_esp, 0x414899u); f_0040b72c();
    /* 00414899: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004148a0:; BB(0x004148a0);
    /* 004148a0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004148a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004148a6: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004148a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004148b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004148b2: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004148b4: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4148b9u); f_00792fe8();
    /* 004148b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004148bc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004148bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004148c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004148c2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004148c5: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x4148cau); f_0040b7b4();
    /* 004148ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004148cc: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004148ce: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4148d3u); f_00792fe8();
    /* 004148d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004148d6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004148d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004148da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004148dc: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004148df: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x4148e4u); f_0040b7b4();
    /* 004148e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004148e6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004148e8: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004148eb: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x4148f0u); f_004088b8();
    /* 004148f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004148f3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004148f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004148f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414900: mov esp, ebp */ r_esp = r_ebp;
    /* 00414902: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414903: ret 4 */ FN_RET(0x00414544); r_esp += 8; return;
L_00414906:; BB(0x00414906);
    /* 00414906: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414908: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041490b: jmp 0x4148a0 */ goto L_004148a0;
L_0041490d:; BB(0x0041490d);
    /* 0041490d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041490f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414912: jmp 0x414827 */ goto L_00414827;
L_00414917:; BB(0x00414917);
    /* 00414917: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414919: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x41491eu); f_0080c79c();
    /* 0041491e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041491f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414922: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00414926: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041492b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0041492f: call 0x821544 */ r_esp -= 4; W32(r_esp, 0x414934u); f_00821544();
    /* 00414934: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414937: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041493a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414941: mov esp, ebp */ r_esp = r_ebp;
    /* 00414943: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414944: ret 4 */ FN_RET(0x00414544); r_esp += 8; return;
}

void f_00414948(void) /* sub_414948 */
{
    FN_ENTER(0x00414948);
    /* 00414948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00414949: mov edi, ecx */ r_edi = r_ecx;
    /* 0041494b: call 0x81e1f4 */ r_esp -= 4; W32(r_esp, 0x414950u); f_0081e1f4();
    /* 00414950: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00414953: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00414956: cmp edx, dword ptr [0xa3b0e8] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa3b0e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041495c: je 0x41497d */ if (fZ) goto L_0041497d;
L_0041495e:; BB(0x0041495e);
    /* 0041495e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00414961: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414962: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00414964: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x414969u); f_00792fe8();
    /* 00414969: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041496c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041496d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041496f: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00414972: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x414977u); f_0040b7b4();
    /* 00414977: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0041497a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
L_0041497d:; BB(0x0041497d);
    /* 0041497d: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 00414980: mov dword ptr [0xa3b0e8], edx */ W32((u32)(0xa3b0e8u), r_edx);
    /* 00414986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414988: je 0x4149be */ if (fZ) goto L_004149be;
L_0041498a:; BB(0x0041498a);
    /* 0041498a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041498d: jne 0x4149be */ if (!fZ) goto L_004149be;
L_0041498f:; BB(0x0041498f);
    /* 0041498f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414991: jne 0x41499d */ if (!fZ) goto L_0041499d;
L_00414993:; BB(0x00414993);
    /* 00414993: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414995: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x41499au); f_0080c79c();
    /* 0041499a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041499b: jmp 0x4149aa */ goto L_004149aa;
L_0041499d:; BB(0x0041499d);
    /* 0041499d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004149a0: jne 0x4149aa */ if (!fZ) goto L_004149aa;
L_004149a2:; BB(0x004149a2);
    /* 004149a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004149a4: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x4149a9u); f_0080c79c();
    /* 004149a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004149aa:; BB(0x004149aa);
    /* 004149aa: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004149ae: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004149b3: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004149b7: call 0x821544 */ r_esp -= 4; W32(r_esp, 0x4149bcu); f_00821544();
    /* 004149bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004149bd: ret  */ FN_RET(0x00414948); r_esp += 4; return;
L_004149be:; BB(0x004149be);
    /* 004149be: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x4149c3u); f_00694c6c();
    /* 004149c3: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 004149c9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004149cb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004149cd: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 004149d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004149d2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004149d4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004149d6: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 004149dd: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004149df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004149e0: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x4149e5u); f_007c0c6c();
    /* 004149e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004149e7: je 0x414a00 */ if (fZ) goto L_00414a00;
L_004149e9:; BB(0x004149e9);
    /* 004149e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004149eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004149ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004149ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004149ee: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 004149f3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4149f8u); f_00814298();
    /* 004149f8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004149fb: call 0x8215a0 */ r_esp -= 4; W32(r_esp, 0x414a00u); f_008215a0();
L_00414a00:; BB(0x00414a00);
    /* 00414a00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00414a01: ret  */ FN_RET(0x00414948); r_esp += 4; return;
}

void f_00414952(void)
{
    FN_ENTER(0x00414952);
    /* 00414952: sbb al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00414954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414955: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414956: cmp edx, dword ptr [0xa3b0e8] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa3b0e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041495c: je 0x41497d */ if (fZ) goto L_0041497d;
L_0041495e:; BB(0x0041495e);
    /* 0041495e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00414961: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414962: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00414964: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x414969u); f_00792fe8();
    /* 00414969: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041496c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041496d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041496f: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00414972: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x414977u); f_0040b7b4();
    /* 00414977: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0041497a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
L_0041497d:; BB(0x0041497d);
    /* 0041497d: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 00414980: mov dword ptr [0xa3b0e8], edx */ W32((u32)(0xa3b0e8u), r_edx);
    /* 00414986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414988: je 0x4149be */ if (fZ) goto L_004149be;
L_0041498a:; BB(0x0041498a);
    /* 0041498a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041498d: jne 0x4149be */ if (!fZ) goto L_004149be;
L_0041498f:; BB(0x0041498f);
    /* 0041498f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414991: jne 0x41499d */ if (!fZ) goto L_0041499d;
L_00414993:; BB(0x00414993);
    /* 00414993: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414995: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x41499au); f_0080c79c();
    /* 0041499a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041499b: jmp 0x4149aa */ goto L_004149aa;
L_0041499d:; BB(0x0041499d);
    /* 0041499d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004149a0: jne 0x4149aa */ if (!fZ) goto L_004149aa;
L_004149a2:; BB(0x004149a2);
    /* 004149a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004149a4: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x4149a9u); f_0080c79c();
    /* 004149a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004149aa:; BB(0x004149aa);
    /* 004149aa: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004149ae: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004149b3: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004149b7: call 0x821544 */ r_esp -= 4; W32(r_esp, 0x4149bcu); f_00821544();
    /* 004149bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004149bd: ret  */ FN_RET(0x00414952); r_esp += 4; return;
L_004149be:; BB(0x004149be);
    /* 004149be: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x4149c3u); f_00694c6c();
    /* 004149c3: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 004149c9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004149cb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004149cd: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 004149d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004149d2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004149d4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004149d6: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 004149dd: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004149df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004149e0: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x4149e5u); f_007c0c6c();
    /* 004149e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004149e7: je 0x414a00 */ if (fZ) goto L_00414a00;
L_004149e9:; BB(0x004149e9);
    /* 004149e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004149eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004149ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004149ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004149ee: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 004149f3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4149f8u); f_00814298();
    /* 004149f8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004149fb: call 0x8215a0 */ r_esp -= 4; W32(r_esp, 0x414a00u); f_008215a0();
L_00414a00:; BB(0x00414a00);
    /* 00414a00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00414a01: ret  */ FN_RET(0x00414952); r_esp += 4; return;
}

void f_00414a04(void) /* sub_414A04 */
{
    FN_ENTER(0x00414a04);
    /* 00414a04: mov dword ptr [0xa3b0dc], 0x3f800000 */ W32((u32)(0xa3b0dcu), 0x3f800000u);
    /* 00414a0e: mov dword ptr [0xa3b0e0], 0x41000000 */ W32((u32)(0xa3b0e0u), 0x41000000u);
    /* 00414a18: mov dword ptr [0xa3b0e4], 0x3fc00000 */ W32((u32)(0xa3b0e4u), 0x3fc00000u);
    /* 00414a22: ret  */ FN_RET(0x00414a04); r_esp += 4; return;
}

void f_00414a24(void) /* sub_414A24 */
{
    FN_ENTER(0x00414a24);
    /* 00414a24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00414a25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414a26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00414a27: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414a2a: mov esi, ecx */ r_esi = r_ecx;
    /* 00414a2c: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00414a30: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 00414a35: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 00414a38: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00414a3b: mov eax, ebx */ r_eax = r_ebx;
    /* 00414a3d: shl eax, 9 */ { u32 c = (9u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00414a40: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00414a42: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00414a44: lea edx, [esi + eax + 0x20] */ r_edx = (u32)(r_esi+r_eax+0x20u);
    /* 00414a48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414a49: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x414a4eu); f_00857dec();
    /* 00414a4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414a51: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00414a54: mov dword ptr [esi + ebx*4 + 0x818], eax */ W32((u32)(r_esi+r_ebx*4+0x818u), r_eax);
    /* 00414a5b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00414a5e: mov ecx, esi */ r_ecx = r_esi;
    /* 00414a60: mov dword ptr [esi + ebx*8 + 0x848], edx */ W32((u32)(r_esi+r_ebx*8+0x848u), r_edx);
    /* 00414a67: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 00414a6a: mov dword ptr [esi + ebx*8 + 0x84c], ebp */ W32((u32)(r_esi+r_ebx*8+0x84cu), r_ebp);
    /* 00414a71: push dword ptr [esi + ebx*4 + 0x818] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x818u)); r_esp -= 4; W32(r_esp, v); }
    /* 00414a78: call 0x414ae0 */ r_esp -= 4; W32(r_esp, 0x414a7du); f_00414ae0();
    /* 00414a7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414a7e: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x414a83u); f_007ac344();
    /* 00414a83: fld dword ptr [0x8faca8] */ FPUSH(R_F32((u32)(0x8faca8u)));
    /* 00414a89: fadd dword ptr [esi + ebx*8 + 0x848] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_ebx*8+0x848u));
    /* 00414a90: fld dword ptr [0x8faca4] */ FPUSH(R_F32((u32)(0x8faca4u)));
    /* 00414a96: fadd dword ptr [esi + ebx*8 + 0x84c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_ebx*8+0x84cu));
    /* 00414a9d: fstp dword ptr [esi + ebx*8 + 0x86c] */ W_F32((u32)(r_esi+r_ebx*8+0x86cu), ST(0)); FPOP();
    /* 00414aa4: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00414aa8: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00414aac: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00414aaf: fadd dword ptr [eax*4 + 0x8fac88] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fac88u));
    /* 00414ab6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00414ab8: fstp dword ptr [esi + ebx*8 + 0x868] */ W_F32((u32)(r_esi+r_ebx*8+0x868u), ST(0)); FPOP();
    /* 00414abf: mov dword ptr [esi + ebx*4 + 0x828], 0 */ W32((u32)(r_esi+r_ebx*4+0x828u), 0x0u);
    /* 00414aca: mov dword ptr [esi + ebx*4 + 0x838], 1 */ W32((u32)(r_esi+r_ebx*4+0x838u), 0x1u);
    /* 00414ad5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00414ad8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00414ad9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414ada: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00414adb: ret 4 */ FN_RET(0x00414a24); r_esp += 8; return;
}

void f_00414ae0(void) /* sub_414AE0 */
{
    FN_ENTER(0x00414ae0);
    /* 00414ae0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00414ae4: mov edx, 0xa3b100 */ r_edx = 0xa3b100u;
    /* 00414ae9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414aeb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00414aed: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00414af0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00414af3: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00414af6: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00414af9: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00414afc: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00414aff: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00414b02: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00414b05: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00414b08: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00414b0b: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00414b0e: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00414b11: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00414b14: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00414b17: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00414b1a: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00414b1d: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00414b20: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00414b23: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00414b26: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00414b29: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 00414b2c: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 00414b2f: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 00414b32: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00414b35: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00414b38: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 00414b3b: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 00414b3e: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 00414b41: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 00414b44: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 00414b47: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 00414b4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414b4b: push 0x8facb0 */ { u32 v = 0x8facb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b50: push 0xa3b100 */ { u32 v = 0xa3b100u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b55: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x414b5au); f_00857e29();
    /* 00414b5a: mov eax, 0xa3b100 */ r_eax = 0xa3b100u;
    /* 00414b5f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00414b62: ret 4 */ FN_RET(0x00414ae0); r_esp += 8; return;
}

void f_00414b4b(void)
{
    FN_ENTER(0x00414b4b);
    /* 00414b4b: push 0x8facb0 */ { u32 v = 0x8facb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b50: push 0xa3b100 */ { u32 v = 0xa3b100u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b55: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x414b5au); f_00857e29();
    /* 00414b5a: mov eax, 0xa3b100 */ r_eax = 0xa3b100u;
    /* 00414b5f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00414b62: ret 4 */ FN_RET(0x00414b4b); r_esp += 8; return;
}

void f_00414b68(void) /* sub_414B68 */
{
    FN_ENTER(0x00414b68);
    /* 00414b68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414b6a: mov dword ptr [ecx + 0x838], eax */ W32((u32)(r_ecx+0x838u), r_eax);
    /* 00414b70: mov dword ptr [ecx + 0x83c], eax */ W32((u32)(r_ecx+0x83cu), r_eax);
    /* 00414b76: mov dword ptr [ecx + 0x840], eax */ W32((u32)(r_ecx+0x840u), r_eax);
    /* 00414b7c: mov dword ptr [ecx + 0x844], eax */ W32((u32)(r_ecx+0x844u), r_eax);
    /* 00414b82: ret  */ FN_RET(0x00414b68); r_esp += 4; return;
}

void f_00414b84(void) /* sub_414B84 */
{
    FN_ENTER(0x00414b84);
    /* 00414b84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414b85: mov ebp, esp */ r_ebp = r_esp;
    /* 00414b87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00414b89: push 0x8cd120 */ { u32 v = 0x8cd120u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00414b94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414b95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00414b9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414b9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00414ba2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00414ba5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00414ba8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00414bab: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00414bae: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00414bb1: mov eax, ecx */ r_eax = r_ecx;
    /* 00414bb3: mov dword ptr [eax], 0xaf34a0 */ W32((u32)(r_eax), 0xaf34a0u);
    /* 00414bb9: mov edx, dword ptr [0xa3b1a0] */ r_edx = R32((u32)(0xa3b1a0u));
    /* 00414bbf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414bc1: je 0x414bcd */ if (fZ) goto L_00414bcd;
L_00414bc3:; BB(0x00414bc3);
    /* 00414bc3: mov dword ptr [0xa3b1a0], 0 */ W32((u32)(0xa3b1a0u), 0x0u);
L_00414bcd:; BB(0x00414bcd);
    /* 00414bcd: mov eax, dword ptr [0xa3b1a4] */ r_eax = R32((u32)(0xa3b1a4u));
    /* 00414bd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414bd4: je 0x414be0 */ if (fZ) goto L_00414be0;
L_00414bd6:; BB(0x00414bd6);
    /* 00414bd6: mov dword ptr [0xa3b1a4], 0 */ W32((u32)(0xa3b1a4u), 0x0u);
L_00414be0:; BB(0x00414be0);
    /* 00414be0: mov eax, dword ptr [0xa3b1a8] */ r_eax = R32((u32)(0xa3b1a8u));
    /* 00414be5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414be7: je 0x414bf3 */ if (fZ) goto L_00414bf3;
L_00414be9:; BB(0x00414be9);
    /* 00414be9: mov dword ptr [0xa3b1a8], 0 */ W32((u32)(0xa3b1a8u), 0x0u);
L_00414bf3:; BB(0x00414bf3);
    /* 00414bf3: mov eax, dword ptr [0xa3b1ac] */ r_eax = R32((u32)(0xa3b1acu));
    /* 00414bf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414bfa: je 0x414c06 */ if (fZ) goto L_00414c06;
L_00414bfc:; BB(0x00414bfc);
    /* 00414bfc: mov dword ptr [0xa3b1ac], 0 */ W32((u32)(0xa3b1acu), 0x0u);
L_00414c06:; BB(0x00414c06);
    /* 00414c06: mov eax, dword ptr [0xa3b1b0] */ r_eax = R32((u32)(0xa3b1b0u));
    /* 00414c0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414c0d: je 0x414c19 */ if (fZ) goto L_00414c19;
L_00414c0f:; BB(0x00414c0f);
    /* 00414c0f: mov dword ptr [0xa3b1b0], 0 */ W32((u32)(0xa3b1b0u), 0x0u);
L_00414c19:; BB(0x00414c19);
    /* 00414c19: mov eax, dword ptr [0xa3b1b4] */ r_eax = R32((u32)(0xa3b1b4u));
    /* 00414c1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414c20: je 0x414c2c */ if (fZ) goto L_00414c2c;
L_00414c22:; BB(0x00414c22);
    /* 00414c22: mov dword ptr [0xa3b1b4], 0 */ W32((u32)(0xa3b1b4u), 0x0u);
L_00414c2c:; BB(0x00414c2c);
    /* 00414c2c: mov eax, dword ptr [0xa3b1b8] */ r_eax = R32((u32)(0xa3b1b8u));
    /* 00414c31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414c33: je 0x414c3f */ if (fZ) goto L_00414c3f;
L_00414c35:; BB(0x00414c35);
    /* 00414c35: mov dword ptr [0xa3b1b8], 0 */ W32((u32)(0xa3b1b8u), 0x0u);
L_00414c3f:; BB(0x00414c3f);
    /* 00414c3f: mov eax, dword ptr [0xa3b1bc] */ r_eax = R32((u32)(0xa3b1bcu));
    /* 00414c44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414c46: je 0x414c52 */ if (fZ) goto L_00414c52;
L_00414c48:; BB(0x00414c48);
    /* 00414c48: mov dword ptr [0xa3b1bc], 0 */ W32((u32)(0xa3b1bcu), 0x0u);
L_00414c52:; BB(0x00414c52);
    /* 00414c52: mov eax, dword ptr [0xa3b1c0] */ r_eax = R32((u32)(0xa3b1c0u));
    /* 00414c57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414c59: je 0x414c65 */ if (fZ) goto L_00414c65;
L_00414c5b:; BB(0x00414c5b);
    /* 00414c5b: mov dword ptr [0xa3b1c0], 0 */ W32((u32)(0xa3b1c0u), 0x0u);
L_00414c65:; BB(0x00414c65);
    /* 00414c65: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00414c6c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x414c71u); f_008171e8();
    /* 00414c71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00414c74: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414c76: jne 0x414c88 */ if (!fZ) goto L_00414c88;
L_00414c78:; BB(0x00414c78);
    /* 00414c78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414c7b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414c82: mov esp, ebp */ r_esp = r_ebp;
    /* 00414c84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414c85: ret 4 */ FN_RET(0x00414b84); r_esp += 8; return;
L_00414c88:; BB(0x00414c88);
    /* 00414c88: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00414c8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414c8c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x414c91u); f_005c2f74();
    /* 00414c91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00414c92: jmp 0x414c78 */ goto L_00414c78;
}

void f_00414c94(void) /* sub_414C94 */
{
    FN_ENTER(0x00414c94);
    /* 00414c94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414c95: mov eax, dword ptr [ecx + 0x160] */ r_eax = R32((u32)(r_ecx+0x160u));
    /* 00414c9b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414c9d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00414ca1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414ca3: lea ebp, [eax + eax*8] */ r_ebp = (u32)(r_eax+r_eax*8);
    /* 00414ca6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00414ca8: mov dword ptr [ebp + ecx + 0x1c], eax */ W32((u32)(r_ebp+r_ecx+0x1cu), r_eax);
    /* 00414cac: mov eax, dword ptr [ecx + 0x160] */ r_eax = R32((u32)(r_ecx+0x160u));
    /* 00414cb2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414cb4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414cb6: lea ebp, [eax + eax*8] */ r_ebp = (u32)(r_eax+r_eax*8);
    /* 00414cb9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00414cbc: mov dword ptr [ebp + ecx + 0x20], eax */ W32((u32)(r_ebp+r_ecx+0x20u), r_eax);
    /* 00414cc0: mov eax, dword ptr [ecx + 0x160] */ r_eax = R32((u32)(r_ecx+0x160u));
    /* 00414cc6: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 00414cc9: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00414ccb: lea ebp, [ebp + ebp*8] */ r_ebp = (u32)(r_ebp+r_ebp*8);
    /* 00414ccf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414cd2: jle 0x414cfe */ if ((fZ||fS!=fO)) goto L_00414cfe;
L_00414cd4:; BB(0x00414cd4);
    /* 00414cd4: fld dword ptr [0x8fad14] */ FPUSH(R_F32((u32)(0x8fad14u)));
    /* 00414cda: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00414cdc: fld dword ptr [0x8fad18] */ FPUSH(R_F32((u32)(0x8fad18u)));
    /* 00414ce2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00414ce4: fstp dword ptr [ebp + ecx + 0x24] */ W_F32((u32)(r_ebp+r_ecx+0x24u), ST(0)); FPOP();
    /* 00414ce8: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 00414ceb: mov eax, dword ptr [ecx + 0x160] */ r_eax = R32((u32)(r_ecx+0x160u));
    /* 00414cf1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414cf3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414cf5: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 00414cf8: fstp dword ptr [edx + ecx + 0x28] */ W_F32((u32)(r_edx+r_ecx+0x28u), ST(0)); FPOP();
    /* 00414cfc: jmp 0x414d26 */ goto L_00414d26;
L_00414cfe:; BB(0x00414cfe);
    /* 00414cfe: fld dword ptr [0x8fad1c] */ FPUSH(R_F32((u32)(0x8fad1cu)));
    /* 00414d04: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00414d06: fld dword ptr [0x8fad20] */ FPUSH(R_F32((u32)(0x8fad20u)));
    /* 00414d0c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00414d0e: fstp dword ptr [ebp + ecx + 0x24] */ W_F32((u32)(r_ebp+r_ecx+0x24u), ST(0)); FPOP();
    /* 00414d12: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 00414d15: mov eax, dword ptr [ecx + 0x160] */ r_eax = R32((u32)(r_ecx+0x160u));
    /* 00414d1b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414d1d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414d1f: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 00414d22: fstp dword ptr [edx + ecx + 0x28] */ W_F32((u32)(r_edx+r_ecx+0x28u), ST(0)); FPOP();
L_00414d26:; BB(0x00414d26);
    /* 00414d26: mov eax, dword ptr [ecx + 0x160] */ r_eax = R32((u32)(r_ecx+0x160u));
    /* 00414d2c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414d2e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414d30: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 00414d33: mov dword ptr [edx + ecx + 0x3c], 0 */ W32((u32)(r_edx+r_ecx+0x3cu), 0x0u);
    /* 00414d3b: mov ebp, dword ptr [ecx + 0x164] */ r_ebp = R32((u32)(r_ecx+0x164u));
    /* 00414d41: or ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414d44: mov dword ptr [ecx + 0x164], ebp */ W32((u32)(r_ecx+0x164u), r_ebp);
    /* 00414d4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414d4b: ret 4 */ FN_RET(0x00414c94); r_esp += 8; return;
}

void f_00414d41(void)
{
    FN_ENTER(0x00414d41);
    /* 00414d41: or ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414d44: mov dword ptr [ecx + 0x164], ebp */ W32((u32)(r_ecx+0x164u), r_ebp);
    /* 00414d4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414d4b: ret 4 */ FN_RET(0x00414d41); r_esp += 8; return;
}

void f_00414d47(void)
{
    FN_ENTER(0x00414d47);
    /* 00414d47: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00414d49: add byte ptr [ebp - 0x3e], bl */ { u32 ad = (u32)(r_ebp+0xffffffc2u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00414d4c: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00414d4e: nop  */ ;
    /* 00414d4f: nop  */ ;
    /* 00414d50: mov eax, dword ptr [ecx + 0x164] */ r_eax = R32((u32)(r_ecx+0x164u));
    /* 00414d56: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414d59: mov dword ptr [ecx + 0x164], eax */ W32((u32)(r_ecx+0x164u), r_eax);
    /* 00414d5f: ret  */ FN_RET(0x00414d47); r_esp += 4; return;
}

void f_00414d50(void) /* sub_414D50 */
{
    FN_ENTER(0x00414d50);
    /* 00414d50: mov eax, dword ptr [ecx + 0x164] */ r_eax = R32((u32)(r_ecx+0x164u));
    /* 00414d56: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414d59: mov dword ptr [ecx + 0x164], eax */ W32((u32)(r_ecx+0x164u), r_eax);
    /* 00414d5f: ret  */ FN_RET(0x00414d50); r_esp += 4; return;
}

void f_00414d60(void) /* sub_414D60 */
{
    FN_ENTER(0x00414d60);
    /* 00414d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00414d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00414d65: push 0x8cd148 */ { u32 v = 0x8cd148u; r_esp -= 4; W32(r_esp, v); }
    /* 00414d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00414d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414d71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00414d78: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414d7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00414d7e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00414d81: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00414d84: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00414d87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414d89: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00414d8c:; BB(0x00414d8c);
    /* 00414d8c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414d8f: mov edx, dword ptr [eax*4 + 0xa3b1a0] */ r_edx = R32((u32)(r_eax*4+0xa3b1a0u));
    /* 00414d96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414d98: je 0x414db1 */ if (fZ) goto L_00414db1;
L_00414d9a:; BB(0x00414d9a);
    /* 00414d9a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414d9d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00414da0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00414da3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414da6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414dad: mov esp, ebp */ r_esp = r_ebp;
    /* 00414daf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414db0: ret  */ FN_RET(0x00414d60); r_esp += 4; return;
L_00414db1:; BB(0x00414db1);
    /* 00414db1: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00414db8: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 00414dbd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414dc2u); f_005caba4();
    /* 00414dc2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414dc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414dc8: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00414dcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414dcd: je 0x414f2f */ if (fZ) goto L_00414f2f;
L_00414dd3:; BB(0x00414dd3);
    /* 00414dd3: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00414dda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414de1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00414de4: mov ecx, eax */ r_ecx = r_eax;
    /* 00414de6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x414debu); f_008193cc();
    /* 00414deb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414dee: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414df1: fld dword ptr [0x8fad20] */ FPUSH(R_F32((u32)(0x8fad20u)));
    /* 00414df7: fld dword ptr [0x8fad0c] */ FPUSH(R_F32((u32)(0x8fad0cu)));
    /* 00414dfd: fld dword ptr [0x8fad18] */ FPUSH(R_F32((u32)(0x8fad18u)));
    /* 00414e03: fld dword ptr [0x8facf4] */ FPUSH(R_F32((u32)(0x8facf4u)));
    /* 00414e09: mov dword ptr [ecx], 0xaf34a0 */ W32((u32)(r_ecx), 0xaf34a0u);
    /* 00414e0f: mov eax, dword ptr [0x9a37a4] */ r_eax = R32((u32)(0x9a37a4u));
    /* 00414e14: mov dword ptr [ecx + 0x164], 0 */ W32((u32)(r_ecx+0x164u), 0x0u);
    /* 00414e1e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00414e21: mov dword ptr [ecx + 0x160], edx */ W32((u32)(r_ecx+0x160u), r_edx);
    /* 00414e27: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00414e29: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00414e2b:; BB(0x00414e2b);
    /* 00414e2b: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00414e2e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00414e31: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414e33: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 00414e36: lea eax, [edi + edx] */ r_eax = (u32)(r_edi+r_edx);
    /* 00414e39: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414e3b: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 00414e3e: mov esi, dword ptr [edi + 0x160] */ r_esi = R32((u32)(r_edi+0x160u));
    /* 00414e44: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414e47: jle 0x414e9d */ if ((fZ||fS!=fO)) goto L_00414e9d;
L_00414e49:; BB(0x00414e49);
    /* 00414e49: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414e4c: jge 0x414e7e */ if ((fS==fO)) goto L_00414e7e;
L_00414e4e:; BB(0x00414e4e);
    /* 00414e4e: fld dword ptr [0x8facf8] */ FPUSH(R_F32((u32)(0x8facf8u)));
    /* 00414e54: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414e56: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00414e59: mov esi, 0x3f110000 */ r_esi = 0x3f110000u;
    /* 00414e5e: lea edi, [ebx - 5] */ r_edi = (u32)(r_ebx+0xfffffffbu);
    /* 00414e61: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00414e64: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00414e67: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00414e69: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00414e6c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00414e6e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00414e70: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 00414e72: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00414e75: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00414e77: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00414e79: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00414e7c: jmp 0x414ec2 */ goto L_00414ec2;
L_00414e7e:; BB(0x00414e7e);
    /* 00414e7e: mov edi, 0x3f500000 */ r_edi = 0x3f500000u;
    /* 00414e83: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414e85: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00414e88: mov dword ptr [eax + 0x30], edi */ W32((u32)(r_eax+0x30u), r_edi);
    /* 00414e8b: mov esi, 0x3f110000 */ r_esi = 0x3f110000u;
    /* 00414e90: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00414e93: mov esi, 0x3f680000 */ r_esi = 0x3f680000u;
    /* 00414e98: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 00414e9b: jmp 0x414ec2 */ goto L_00414ec2;
L_00414e9d:; BB(0x00414e9d);
    /* 00414e9d: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00414e9f: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00414ea2: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 00414ea5: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00414ea7: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 00414ea9: mov edi, 0x3f2e0000 */ r_edi = 0x3f2e0000u;
    /* 00414eae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00414eb0: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00414eb3: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00414eb5: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00414eb7: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00414eba: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414ebc: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00414ebf: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
L_00414ec2:; BB(0x00414ec2);
    /* 00414ec2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00414ec5: mov dword ptr [edx + eax + 0x28], ecx */ W32((u32)(r_edx+r_eax+0x28u), r_ecx);
    /* 00414ec9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414ecb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00414ecd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00414ed0: mov dword ptr [edx + eax + 0x1c], esi */ W32((u32)(r_edx+r_eax+0x1cu), r_esi);
    /* 00414ed4: mov dword ptr [edx + eax + 0x20], edi */ W32((u32)(r_edx+r_eax+0x20u), r_edi);
    /* 00414ed8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414eda: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414edd: mov dword ptr [edx + eax + 0x24], esi */ W32((u32)(r_edx+r_eax+0x24u), r_esi);
    /* 00414ee1: jl 0x414e2b */ if ((fS!=fO)) goto L_00414e2b;
L_00414ee7:; BB(0x00414ee7);
    /* 00414ee7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414ee9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414eeb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414eed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414eef: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00414ef6:; BB(0x00414ef6);
    /* 00414ef6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414ef9: mov dword ptr [edx*4 + 0xa3b1a0], eax */ W32((u32)(r_edx*4+0xa3b1a0u), r_eax);
    /* 00414f00: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00414f07: mov eax, edx */ r_eax = r_edx;
    /* 00414f09: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414f0c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00414f0f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00414f12: jl 0x414d8c */ if ((fS!=fO)) goto L_00414d8c;
L_00414f18:; BB(0x00414f18);
    /* 00414f18: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414f1b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00414f1e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00414f21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414f24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414f2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00414f2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414f2e: ret  */ FN_RET(0x00414d60); r_esp += 4; return;
L_00414f2f:; BB(0x00414f2f);
    /* 00414f2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414f31: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414f34: jmp 0x414ef6 */ goto L_00414ef6;
}

void f_00414e41(void)
{
    FN_ENTER(0x00414e41);
    goto L_00414e41;
L_00414d8c:; BB(0x00414d8c);
    /* 00414d8c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414d8f: mov edx, dword ptr [eax*4 + 0xa3b1a0] */ r_edx = R32((u32)(r_eax*4+0xa3b1a0u));
    /* 00414d96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414d98: je 0x414db1 */ if (fZ) goto L_00414db1;
L_00414d9a:; BB(0x00414d9a);
    /* 00414d9a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414d9d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00414da0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00414da3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414da6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414dad: mov esp, ebp */ r_esp = r_ebp;
    /* 00414daf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414db0: ret  */ FN_RET(0x00414e41); r_esp += 4; return;
L_00414db1:; BB(0x00414db1);
    /* 00414db1: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00414db8: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 00414dbd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414dc2u); f_005caba4();
    /* 00414dc2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414dc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414dc8: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00414dcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414dcd: je 0x414f2f */ if (fZ) goto L_00414f2f;
L_00414dd3:; BB(0x00414dd3);
    /* 00414dd3: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00414dda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414de1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00414de4: mov ecx, eax */ r_ecx = r_eax;
    /* 00414de6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x414debu); f_008193cc();
    /* 00414deb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414dee: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414df1: fld dword ptr [0x8fad20] */ FPUSH(R_F32((u32)(0x8fad20u)));
    /* 00414df7: fld dword ptr [0x8fad0c] */ FPUSH(R_F32((u32)(0x8fad0cu)));
    /* 00414dfd: fld dword ptr [0x8fad18] */ FPUSH(R_F32((u32)(0x8fad18u)));
    /* 00414e03: fld dword ptr [0x8facf4] */ FPUSH(R_F32((u32)(0x8facf4u)));
    /* 00414e09: mov dword ptr [ecx], 0xaf34a0 */ W32((u32)(r_ecx), 0xaf34a0u);
    /* 00414e0f: mov eax, dword ptr [0x9a37a4] */ r_eax = R32((u32)(0x9a37a4u));
    /* 00414e14: mov dword ptr [ecx + 0x164], 0 */ W32((u32)(r_ecx+0x164u), 0x0u);
    /* 00414e1e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00414e21: mov dword ptr [ecx + 0x160], edx */ W32((u32)(r_ecx+0x160u), r_edx);
    /* 00414e27: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00414e29: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00414e2b:; BB(0x00414e2b);
    /* 00414e2b: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00414e2e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00414e31: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414e33: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 00414e36: lea eax, [edi + edx] */ r_eax = (u32)(r_edi+r_edx);
    /* 00414e39: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414e3b: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 00414e3e: mov esi, dword ptr [edi + 0x160] */ r_esi = R32((u32)(r_edi+0x160u));
L_00414e41:; BB(0x00414e41);
    /* 00414e41: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00414e43: add byte ptr [ebx + 0x547e04fe], al */ { u32 ad = (u32)(r_ebx+0x547e04feu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00414e44: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414e47: jle 0x414e9d */ if ((fZ||fS!=fO)) goto L_00414e9d;
L_00414e49:; BB(0x00414e49);
    /* 00414e49: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414e4c: jge 0x414e7e */ if ((fS==fO)) goto L_00414e7e;
L_00414e4e:; BB(0x00414e4e);
    /* 00414e4e: fld dword ptr [0x8facf8] */ FPUSH(R_F32((u32)(0x8facf8u)));
    /* 00414e54: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414e56: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00414e59: mov esi, 0x3f110000 */ r_esi = 0x3f110000u;
    /* 00414e5e: lea edi, [ebx - 5] */ r_edi = (u32)(r_ebx+0xfffffffbu);
    /* 00414e61: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00414e64: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00414e67: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00414e69: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00414e6c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00414e6e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00414e70: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 00414e72: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00414e75: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00414e77: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00414e79: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00414e7c: jmp 0x414ec2 */ goto L_00414ec2;
L_00414e7e:; BB(0x00414e7e);
    /* 00414e7e: mov edi, 0x3f500000 */ r_edi = 0x3f500000u;
    /* 00414e83: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414e85: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00414e88: mov dword ptr [eax + 0x30], edi */ W32((u32)(r_eax+0x30u), r_edi);
    /* 00414e8b: mov esi, 0x3f110000 */ r_esi = 0x3f110000u;
    /* 00414e90: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00414e93: mov esi, 0x3f680000 */ r_esi = 0x3f680000u;
    /* 00414e98: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 00414e9b: jmp 0x414ec2 */ goto L_00414ec2;
L_00414e9d:; BB(0x00414e9d);
    /* 00414e9d: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00414e9f: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00414ea2: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 00414ea5: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00414ea7: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 00414ea9: mov edi, 0x3f2e0000 */ r_edi = 0x3f2e0000u;
    /* 00414eae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00414eb0: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00414eb3: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00414eb5: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00414eb7: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00414eba: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414ebc: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00414ebf: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
L_00414ec2:; BB(0x00414ec2);
    /* 00414ec2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00414ec5: mov dword ptr [edx + eax + 0x28], ecx */ W32((u32)(r_edx+r_eax+0x28u), r_ecx);
    /* 00414ec9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414ecb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00414ecd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00414ed0: mov dword ptr [edx + eax + 0x1c], esi */ W32((u32)(r_edx+r_eax+0x1cu), r_esi);
    /* 00414ed4: mov dword ptr [edx + eax + 0x20], edi */ W32((u32)(r_edx+r_eax+0x20u), r_edi);
    /* 00414ed8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414eda: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414edd: mov dword ptr [edx + eax + 0x24], esi */ W32((u32)(r_edx+r_eax+0x24u), r_esi);
    /* 00414ee1: jl 0x414e2b */ if ((fS!=fO)) goto L_00414e2b;
L_00414ee7:; BB(0x00414ee7);
    /* 00414ee7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414ee9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414eeb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414eed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414eef: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00414ef6:; BB(0x00414ef6);
    /* 00414ef6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414ef9: mov dword ptr [edx*4 + 0xa3b1a0], eax */ W32((u32)(r_edx*4+0xa3b1a0u), r_eax);
    /* 00414f00: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00414f07: mov eax, edx */ r_eax = r_edx;
    /* 00414f09: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414f0c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00414f0f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00414f12: jl 0x414d8c */ if ((fS!=fO)) goto L_00414d8c;
L_00414f18:; BB(0x00414f18);
    /* 00414f18: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414f1b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00414f1e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00414f21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414f24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414f2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00414f2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414f2e: ret  */ FN_RET(0x00414e41); r_esp += 4; return;
L_00414f2f:; BB(0x00414f2f);
    /* 00414f2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414f31: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414f34: jmp 0x414ef6 */ goto L_00414ef6;
}

void f_00414e45(void)
{
    FN_ENTER(0x00414e45);
    goto L_00414e45;
L_00414d8c:; BB(0x00414d8c);
    /* 00414d8c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414d8f: mov edx, dword ptr [eax*4 + 0xa3b1a0] */ r_edx = R32((u32)(r_eax*4+0xa3b1a0u));
    /* 00414d96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414d98: je 0x414db1 */ if (fZ) goto L_00414db1;
L_00414d9a:; BB(0x00414d9a);
    /* 00414d9a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414d9d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00414da0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00414da3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414da6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414dad: mov esp, ebp */ r_esp = r_ebp;
    /* 00414daf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414db0: ret  */ FN_RET(0x00414e45); r_esp += 4; return;
L_00414db1:; BB(0x00414db1);
    /* 00414db1: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00414db8: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 00414dbd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x414dc2u); f_005caba4();
    /* 00414dc2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414dc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414dc8: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00414dcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414dcd: je 0x414f2f */ if (fZ) goto L_00414f2f;
L_00414dd3:; BB(0x00414dd3);
    /* 00414dd3: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00414dda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00414de1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00414de4: mov ecx, eax */ r_ecx = r_eax;
    /* 00414de6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x414debu); f_008193cc();
    /* 00414deb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414dee: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414df1: fld dword ptr [0x8fad20] */ FPUSH(R_F32((u32)(0x8fad20u)));
    /* 00414df7: fld dword ptr [0x8fad0c] */ FPUSH(R_F32((u32)(0x8fad0cu)));
    /* 00414dfd: fld dword ptr [0x8fad18] */ FPUSH(R_F32((u32)(0x8fad18u)));
    /* 00414e03: fld dword ptr [0x8facf4] */ FPUSH(R_F32((u32)(0x8facf4u)));
    /* 00414e09: mov dword ptr [ecx], 0xaf34a0 */ W32((u32)(r_ecx), 0xaf34a0u);
    /* 00414e0f: mov eax, dword ptr [0x9a37a4] */ r_eax = R32((u32)(0x9a37a4u));
    /* 00414e14: mov dword ptr [ecx + 0x164], 0 */ W32((u32)(r_ecx+0x164u), 0x0u);
    /* 00414e1e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00414e21: mov dword ptr [ecx + 0x160], edx */ W32((u32)(r_ecx+0x160u), r_edx);
    /* 00414e27: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00414e29: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00414e2b:; BB(0x00414e2b);
    /* 00414e2b: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00414e2e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00414e31: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414e33: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 00414e36: lea eax, [edi + edx] */ r_eax = (u32)(r_edi+r_edx);
    /* 00414e39: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414e3b: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 00414e3e: mov esi, dword ptr [edi + 0x160] */ r_esi = R32((u32)(r_edi+0x160u));
    /* 00414e44: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
L_00414e45:; BB(0x00414e45);
    /* 00414e45: inc byte ptr [esi + edi*2] */ { u32 ad = (u32)(r_esi+r_edi*2); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00414e47: jle 0x414e9d */ if ((fZ||fS!=fO)) goto L_00414e9d;
    /* 00414e48: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
L_00414e49:; BB(0x00414e49);
    /* 00414e49: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414e4c: jge 0x414e7e */ if ((fS==fO)) goto L_00414e7e;
L_00414e4e:; BB(0x00414e4e);
    /* 00414e4e: fld dword ptr [0x8facf8] */ FPUSH(R_F32((u32)(0x8facf8u)));
    /* 00414e54: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414e56: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00414e59: mov esi, 0x3f110000 */ r_esi = 0x3f110000u;
    /* 00414e5e: lea edi, [ebx - 5] */ r_edi = (u32)(r_ebx+0xfffffffbu);
    /* 00414e61: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00414e64: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00414e67: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00414e69: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00414e6c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00414e6e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00414e70: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 00414e72: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00414e75: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00414e77: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00414e79: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00414e7c: jmp 0x414ec2 */ goto L_00414ec2;
L_00414e7e:; BB(0x00414e7e);
    /* 00414e7e: mov edi, 0x3f500000 */ r_edi = 0x3f500000u;
    /* 00414e83: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414e85: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00414e88: mov dword ptr [eax + 0x30], edi */ W32((u32)(r_eax+0x30u), r_edi);
    /* 00414e8b: mov esi, 0x3f110000 */ r_esi = 0x3f110000u;
    /* 00414e90: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00414e93: mov esi, 0x3f680000 */ r_esi = 0x3f680000u;
    /* 00414e98: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 00414e9b: jmp 0x414ec2 */ goto L_00414ec2;
L_00414e9d:; BB(0x00414e9d);
    /* 00414e9d: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00414e9f: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00414ea2: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 00414ea5: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00414ea7: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 00414ea9: mov edi, 0x3f2e0000 */ r_edi = 0x3f2e0000u;
    /* 00414eae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00414eb0: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00414eb3: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00414eb5: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00414eb7: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00414eba: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414ebc: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00414ebf: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
L_00414ec2:; BB(0x00414ec2);
    /* 00414ec2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00414ec5: mov dword ptr [edx + eax + 0x28], ecx */ W32((u32)(r_edx+r_eax+0x28u), r_ecx);
    /* 00414ec9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414ecb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00414ecd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00414ed0: mov dword ptr [edx + eax + 0x1c], esi */ W32((u32)(r_edx+r_eax+0x1cu), r_esi);
    /* 00414ed4: mov dword ptr [edx + eax + 0x20], edi */ W32((u32)(r_edx+r_eax+0x20u), r_edi);
    /* 00414ed8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00414eda: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414edd: mov dword ptr [edx + eax + 0x24], esi */ W32((u32)(r_edx+r_eax+0x24u), r_esi);
    /* 00414ee1: jl 0x414e2b */ if ((fS!=fO)) goto L_00414e2b;
L_00414ee7:; BB(0x00414ee7);
    /* 00414ee7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414ee9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414eeb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414eed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414eef: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00414ef6:; BB(0x00414ef6);
    /* 00414ef6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00414ef9: mov dword ptr [edx*4 + 0xa3b1a0], eax */ W32((u32)(r_edx*4+0xa3b1a0u), r_eax);
    /* 00414f00: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00414f07: mov eax, edx */ r_eax = r_edx;
    /* 00414f09: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414f0c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00414f0f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00414f12: jl 0x414d8c */ if ((fS!=fO)) goto L_00414d8c;
L_00414f18:; BB(0x00414f18);
    /* 00414f18: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00414f1b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00414f1e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00414f21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00414f24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414f2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00414f2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414f2e: ret  */ FN_RET(0x00414e45); r_esp += 4; return;
L_00414f2f:; BB(0x00414f2f);
    /* 00414f2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414f31: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00414f34: jmp 0x414ef6 */ goto L_00414ef6;
}

void f_00414f38(void) /* sub_414F38 */
{
    FN_ENTER(0x00414f38);
    /* 00414f38: mov ecx, dword ptr [0xa3b1c4] */ r_ecx = R32((u32)(0xa3b1c4u));
    /* 00414f3e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00414f40: je 0x414f51 */ if (fZ) goto L_00414f51;
L_00414f42:; BB(0x00414f42);
    /* 00414f42: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x414f47u); f_00829de0();
    /* 00414f47: mov dword ptr [0xa3b1c4], 0 */ W32((u32)(0xa3b1c4u), 0x0u);
L_00414f51:; BB(0x00414f51);
    /* 00414f51: ret  */ FN_RET(0x00414f38); r_esp += 4; return;
}

void f_00414f54(void) /* sub_414F54 */
{
    FN_ENTER(0x00414f54);
    /* 00414f54: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00414f56:; BB(0x00414f56);
    /* 00414f56: mov eax, dword ptr [ecx + 0x164] */ r_eax = R32((u32)(r_ecx+0x164u));
    /* 00414f5c: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00414f5f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00414f61: je 0x414f82 */ if (fZ) goto L_00414f82;
L_00414f63:; BB(0x00414f63);
    /* 00414f63: fld dword ptr [0x8facec] */ FPUSH(R_F32((u32)(0x8facecu)));
    /* 00414f69: fadd dword ptr [edx + ecx + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ecx+0x18u));
    /* 00414f6d: fld dword ptr [0x8facf0] */ FPUSH(R_F32((u32)(0x8facf0u)));
    /* 00414f73: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00414f75: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00414f77: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00414f78: ja 0x414f7c */ if ((!fC&&!fZ)) goto L_00414f7c;
L_00414f7a:; BB(0x00414f7a);
    /* 00414f7a: fst st(1) */ ST(1) = ST(0);
L_00414f7c:; BB(0x00414f7c);
    /* 00414f7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00414f7e: fstp dword ptr [edx + ecx + 0x18] */ W_F32((u32)(r_edx+r_ecx+0x18u), ST(0)); FPOP();
L_00414f82:; BB(0x00414f82);
    /* 00414f82: cmp edx, 0x144 */ {  u32 a = r_edx; u32 b = 0x144u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00414f88: jl 0x414f56 */ if ((fS!=fO)) goto L_00414f56;
L_00414f8a:; BB(0x00414f8a);
    /* 00414f8a: ret  */ FN_RET(0x00414f54); r_esp += 4; return;
}

void f_00414f8c(void) /* sub_414F8C */
{
    FN_ENTER(0x00414f8c);
    /* 00414f8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00414f8d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00414f90: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00414f92: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00414f97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414f99: jne 0x414fa0 */ if (!fZ) goto L_00414fa0;
L_00414f9b:; BB(0x00414f9b);
    /* 00414f9b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00414f9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00414f9f: ret  */ FN_RET(0x00414f8c); r_esp += 4; return;
L_00414fa0:; BB(0x00414fa0);
    /* 00414fa0: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x414fa5u); f_007a902c();
    /* 00414fa5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x414faau); f_0082dbac();
    /* 00414faa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00414fae: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00414fb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414fb4: mov esi, eax */ r_esi = r_eax;
    /* 00414fb6: mov edi, ebx */ r_edi = r_ebx;
L_00414fb8:; BB(0x00414fb8);
    /* 00414fb8: mov edx, dword ptr [edi + 0x164] */ r_edx = R32((u32)(r_edi+0x164u));
    /* 00414fbe: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00414fc1: je 0x415027 */ if (fZ) goto L_00415027;
L_00414fc3:; BB(0x00414fc3);
    /* 00414fc3: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00414fc8: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x414fcdu); f_0082bb30();
    /* 00414fcd: mov ecx, dword ptr [0xa3b1c4] */ r_ecx = R32((u32)(0xa3b1c4u));
    /* 00414fd3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x414fd8u); f_00829cc8();
    /* 00414fd8: lea ebx, [edi + esi] */ r_ebx = (u32)(r_edi+r_esi);
    /* 00414fdb: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00414fde: fmul dword ptr [0x8face8] */ ST(0) = ST(0) * R_F32((u32)(0x8face8u));
    /* 00414fe4: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00414fe7: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00414feb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00414ff0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00414ff4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00414ff8: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00414ffc: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00414fff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00415001: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00415005: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00415008: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0041500e: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x415013u); f_0082bb60();
    /* 00415013: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00415018: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0041501b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041501d: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x415022u); f_0082b440();
    /* 00415022: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x415027u); f_004ac444();
L_00415027:; BB(0x00415027);
    /* 00415027: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041502a: cmp esi, 0x144 */ {  u32 a = r_esi; u32 b = 0x144u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415030: jl 0x414fb8 */ if ((fS!=fO)) goto L_00414fb8;
L_00415032:; BB(0x00415032);
    /* 00415032: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00415036: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0041503a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x41503fu); f_0082dab0();
    /* 0041503f: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x415044u); f_007a9044();
    /* 00415044: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00415047: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00415048: ret  */ FN_RET(0x00414f8c); r_esp += 4; return;
}

