#include "protos.h"

void f_00617050(void) /* sub_617050 */
{
    FN_ENTER(0x00617050);
    /* 00617050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00617051: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00617052: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617053: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617054: mov edi, ecx */ r_edi = r_ecx;
    /* 00617056: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00617058: mov ecx, edi */ r_ecx = r_edi;
    /* 0061705a: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617060: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617066: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x617069u); call_ind(t); }
    /* 00617069: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 0061706f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00617072: je 0x617079 */ if (fZ) goto L_00617079;
L_00617074:; BB(0x00617074);
    /* 00617074: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00617075: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617076: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00617077: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00617078: ret  */ FN_RET(0x00617050); r_esp += 4; return;
L_00617079:; BB(0x00617079);
    /* 00617079: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0061707e: cmp eax, dword ptr [0xa8eb20] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8eb20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617084: je 0x6170dd */ if (fZ) goto L_006170dd;
L_00617086:; BB(0x00617086);
    /* 00617086: mov ecx, dword ptr [0xa8eb00] */ r_ecx = R32((u32)(0xa8eb00u));
    /* 0061708c: mov dword ptr [0xa8eb20], eax */ W32((u32)(0xa8eb20u), r_eax);
    /* 00617091: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617093: je 0x61709e */ if (fZ) goto L_0061709e;
L_00617095:; BB(0x00617095);
    /* 00617095: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00617097: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00617099: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061709b: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x61709eu); call_ind(t); }
L_0061709e:; BB(0x0061709e);
    /* 0061709e: mov ebp, 0xa8eb04 */ r_ebp = 0xa8eb04u;
    /* 006170a3: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 006170a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006170a8: je 0x6170b3 */ if (fZ) goto L_006170b3;
L_006170aa:; BB(0x006170aa);
    /* 006170aa: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 006170ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006170ae: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006170b0: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6170b3u); call_ind(t); }
L_006170b3:; BB(0x006170b3);
    /* 006170b3: mov esi, 0xa8eb08 */ r_esi = 0xa8eb08u;
    /* 006170b8: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 006170ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006170bc: je 0x6170c7 */ if (fZ) goto L_006170c7;
L_006170be:; BB(0x006170be);
    /* 006170be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006170c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006170c2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006170c4: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6170c7u); call_ind(t); }
L_006170c7:; BB(0x006170c7);
    /* 006170c7: mov ebx, 0xa8eb0c */ r_ebx = 0xa8eb0cu;
    /* 006170cc: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 006170ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006170d0: je 0x6170ec */ if (fZ) goto L_006170ec;
L_006170d2:; BB(0x006170d2);
    /* 006170d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006170d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006170d6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006170d8: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6170dbu); call_ind(t); }
    /* 006170db: jmp 0x6170ec */ goto L_006170ec;
L_006170dd:; BB(0x006170dd);
    /* 006170dd: mov ebx, 0xa8eb0c */ r_ebx = 0xa8eb0cu;
    /* 006170e2: mov esi, 0xa8eb08 */ r_esi = 0xa8eb08u;
    /* 006170e7: mov ebp, 0xa8eb04 */ r_ebp = 0xa8eb04u;
L_006170ec:; BB(0x006170ec);
    /* 006170ec: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006170ee: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x6170f3u); f_00835f78();
    /* 006170f3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6170f8u); f_0082d7b0();
    /* 006170f8: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 006170fb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x617100u); f_0082d838();
    /* 00617100: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00617103: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00617105: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61710au); f_0082d8bc();
    /* 0061710a: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0061710d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x617112u); f_00829cc8();
    /* 00617112: mov edi, dword ptr [edi + 0x34] */ r_edi = R32((u32)(r_edi+0x34u));
    /* 00617115: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617118: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61711du); f_008321d8();
    /* 0061711d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061711e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x617123u); f_0082dbac();
    /* 00617123: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00617125: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617127: je 0x617130 */ if (fZ) goto L_00617130;
L_00617129:; BB(0x00617129);
    /* 00617129: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0061712b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061712d: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x617130u); call_ind(t); }
L_00617130:; BB(0x00617130);
    /* 00617130: mov ebx, dword ptr [edi + 0x2c] */ r_ebx = R32((u32)(r_edi+0x2cu));
    /* 00617133: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617136: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61713bu); f_008321d8();
    /* 0061713b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061713c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0061713e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617140: je 0x617149 */ if (fZ) goto L_00617149;
L_00617142:; BB(0x00617142);
    /* 00617142: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00617144: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00617146: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x617149u); call_ind(t); }
L_00617149:; BB(0x00617149);
    /* 00617149: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0061714c: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061714f: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x617154u); f_008321d8();
    /* 00617154: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617155: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00617158: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061715a: je 0x617163 */ if (fZ) goto L_00617163;
L_0061715c:; BB(0x0061715c);
    /* 0061715c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0061715e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00617160: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x617163u); call_ind(t); }
L_00617163:; BB(0x00617163);
    /* 00617163: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00617166: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617169: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61716eu); f_008321d8();
    /* 0061716e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061716f: mov ecx, dword ptr [0xa8eb00] */ r_ecx = R32((u32)(0xa8eb00u));
    /* 00617175: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617177: je 0x617180 */ if (fZ) goto L_00617180;
L_00617179:; BB(0x00617179);
    /* 00617179: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0061717b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061717d: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x617180u); call_ind(t); }
L_00617180:; BB(0x00617180);
    /* 00617180: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00617183: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617186: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61718bu); f_008321d8();
    /* 0061718b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061718c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x617191u); f_0082dab0();
    /* 00617191: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x617196u); f_0082da80();
    /* 00617196: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x61719bu); f_0083603c();
    /* 0061719b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061719c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061719d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061719e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061719f: ret  */ FN_RET(0x00617050); r_esp += 4; return;
}

void f_006171a0(void) /* sub_6171A0 */
{
    FN_ENTER(0x006171a0);
    /* 006171a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006171a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006171a3: mov ebx, eax */ r_ebx = r_eax;
L_006171a5:; BB(0x006171a5);
    /* 006171a5: mov ecx, dword ptr [ebx + 0xa8eb00] */ r_ecx = R32((u32)(r_ebx+0xa8eb00u));
    /* 006171ab: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006171ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006171b0: je 0x6171c4 */ if (fZ) goto L_006171c4;
L_006171b2:; BB(0x006171b2);
    /* 006171b2: je 0x6171ba */ if (fZ) goto L_006171ba;
L_006171b4:; BB(0x006171b4);
    /* 006171b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006171b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006171b8: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x6171bau); call_ind(t); }
L_006171ba:; BB(0x006171ba);
    /* 006171ba: mov dword ptr [ebx + 0xa8eafc], 0 */ W32((u32)(r_ebx+0xa8eafcu), 0x0u);
L_006171c4:; BB(0x006171c4);
    /* 006171c4: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006171c7: jl 0x6171a5 */ if ((fS!=fO)) goto L_006171a5;
L_006171c9:; BB(0x006171c9);
    /* 006171c9: mov ecx, dword ptr [0xa8eb24] */ r_ecx = R32((u32)(0xa8eb24u));
    /* 006171cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006171d1: mov dword ptr [0xa8eb20], eax */ W32((u32)(0xa8eb20u), r_eax);
    /* 006171d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006171d8: mov dword ptr [0xa8eb10], eax */ W32((u32)(0xa8eb10u), r_eax);
    /* 006171dd: mov dword ptr [0xa8eb14], eax */ W32((u32)(0xa8eb14u), r_eax);
    /* 006171e2: mov dword ptr [0xa8eb18], eax */ W32((u32)(0xa8eb18u), r_eax);
    /* 006171e7: mov dword ptr [0xa8eb1c], eax */ W32((u32)(0xa8eb1cu), r_eax);
    /* 006171ec: je 0x617201 */ if (fZ) goto L_00617201;
L_006171ee:; BB(0x006171ee);
    /* 006171ee: je 0x6171f7 */ if (fZ) goto L_006171f7;
L_006171f0:; BB(0x006171f0);
    /* 006171f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006171f2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6171f7u); f_004066a8();
L_006171f7:; BB(0x006171f7);
    /* 006171f7: mov dword ptr [0xa8eb24], 0 */ W32((u32)(0xa8eb24u), 0x0u);
L_00617201:; BB(0x00617201);
    /* 00617201: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00617202: ret  */ FN_RET(0x006171a0); r_esp += 4; return;
}

void f_00617204(void)
{
    FN_ENTER(0x00617204);
    /* 00617204: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617205: mov ebp, esp */ r_ebp = r_esp;
    /* 00617207: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00617209: push 0x8e155c */ { u32 v = 0x8e155cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061720e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00617214: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617215: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061721c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061721f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00617222: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00617225: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00617228: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061722b: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00617230: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00617237: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61723cu); f_005caba4();
    /* 0061723c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061723d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00617240: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617242: je 0x617275 */ if (fZ) goto L_00617275;
L_00617244:; BB(0x00617244);
    /* 00617244: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061724b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00617252: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617255: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617258: call 0x61727c */ r_esp -= 4; W32(r_esp, 0x61725du); f_0061727c();
    /* 0061725d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617260: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00617267:; BB(0x00617267);
    /* 00617267: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061726a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00617271: mov esp, ebp */ r_esp = r_ebp;
    /* 00617273: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617274: ret  */ FN_RET(0x00617204); r_esp += 4; return;
L_00617275:; BB(0x00617275);
    /* 00617275: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617277: jmp 0x617267 */ goto L_00617267;
}

void f_0061726c(void)
{
    FN_ENTER(0x0061726c);
    /* 0061726c: or eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617271: mov esp, ebp */ r_esp = r_ebp;
    /* 00617273: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617274: ret  */ FN_RET(0x0061726c); r_esp += 4; return;
}

void f_0061727c(void) /* sub_61727C */
{
    FN_ENTER(0x0061727c);
    /* 0061727c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061727d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061727f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00617281: push 0x8e1578 */ { u32 v = 0x8e1578u; r_esp -= 4; W32(r_esp, v); }
    /* 00617286: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061728c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061728d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00617294: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617297: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061729a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061729d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006172a0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006172a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006172a6: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006172ac: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006172af: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006172b2: call 0x628ef4 */ r_esp -= 4; W32(r_esp, 0x6172b7u); f_00628ef4();
    /* 006172b7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006172be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006172c1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006172c4: mov dword ptr [ecx], 0xb258e8 */ W32((u32)(r_ecx), 0xb258e8u);
    /* 006172ca: mov eax, dword ptr [0x9c4aac] */ r_eax = R32((u32)(0x9c4aacu));
    /* 006172cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006172d0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006172d3: call dword ptr [0xb258fc] */ { u32 t = R32((u32)(0xb258fcu)); r_esp -= 4; W32(r_esp, 0x6172d9u); call_ind(t); }
    /* 006172d9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006172dc: mov ebx, dword ptr [0xa8eb24] */ r_ebx = R32((u32)(0xa8eb24u));
    /* 006172e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006172e4: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 006172ea: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006172ed: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006172f0: push 0x9c4ab0 */ { u32 v = 0x9c4ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 006172f5: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006172fa: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 006172fd: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 00617303: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00617306: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00617309: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0061730c: mov dword ptr [ecx + 0xc0], 0x43fa0000 */ W32((u32)(r_ecx+0xc0u), 0x43fa0000u);
    /* 00617316: mov dword ptr [ecx + 0xc4], 0x42480000 */ W32((u32)(r_ecx+0xc4u), 0x42480000u);
    /* 00617320: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x617325u); f_007b9a88();
    /* 00617325: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00617328: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61732du); f_007b999c();
    /* 0061732d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061732e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00617331: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x617336u); f_007b4f54();
    /* 00617336: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00617339: call 0x628de4 */ r_esp -= 4; W32(r_esp, 0x61733eu); f_00628de4();
    /* 0061733e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00617341: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617344: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617347: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061734a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061734d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00617354: mov esp, ebp */ r_esp = r_ebp;
    /* 00617356: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617357: ret 4 */ FN_RET(0x0061727c); r_esp += 8; return;
}

void f_0061735c(void) /* sub_61735C */
{
    FN_ENTER(0x0061735c);
    /* 0061735c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061735d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061735f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00617361: push 0x8e15a0 */ { u32 v = 0x8e15a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00617366: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061736c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061736d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00617374: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617377: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061737a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061737d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00617380: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00617383: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00617388: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061738f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x617394u); f_008581c5();
    /* 00617394: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617395: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00617398: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061739a: je 0x61746f */ if (fZ) goto L_0061746f;
L_006173a0:; BB(0x006173a0);
    /* 006173a0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006173a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006173ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006173b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006173b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006173b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006173b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006173b6: push 0x9c4a9c */ { u32 v = 0x9c4a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006173bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006173bd: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6173c2u); f_005b7a84();
    /* 006173c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006173c5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006173cc:; BB(0x006173cc);
    /* 006173cc: mov dword ptr [0xa8eb24], eax */ W32((u32)(0xa8eb24u), r_eax);
    /* 006173d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006173d8: mov ebx, dword ptr [0xa8eb24] */ r_ebx = R32((u32)(0xa8eb24u));
    /* 006173de: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 006173e4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006173e7: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 006173ea: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 006173ed: mov edi, dword ptr [ebx + 0x30] */ r_edi = R32((u32)(r_ebx+0x30u));
    /* 006173f0: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006173f3: mov dword ptr [0xa8eb1c], ecx */ W32((u32)(0xa8eb1cu), r_ecx);
    /* 006173f9: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 006173fc: mov dword ptr [0xa8eb18], esi */ W32((u32)(0xa8eb18u), r_esi);
    /* 00617402: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00617405: mov dword ptr [0xa8eb14], eax */ W32((u32)(0xa8eb14u), r_eax);
    /* 0061740a: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061740d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00617410: mov dword ptr [0xa8eb10], eax */ W32((u32)(0xa8eb10u), r_eax);
    /* 00617415: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00617417: mov dword ptr [0xa8eb00], eax */ W32((u32)(0xa8eb00u), r_eax);
    /* 0061741c: mov esi, 3 */ r_esi = 0x3u;
    /* 00617421: mov dword ptr [0xa8eb04], eax */ W32((u32)(0xa8eb04u), r_eax);
    /* 00617426: mov dword ptr [0xa8eb08], eax */ W32((u32)(0xa8eb08u), r_eax);
    /* 0061742b: mov dword ptr [0xa8eb0c], eax */ W32((u32)(0xa8eb0cu), r_eax);
L_00617430:; BB(0x00617430);
    /* 00617430: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00617432: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617433: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00617435: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x61743au); f_0066f3d4();
    /* 0061743a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061743d: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00617440: mov dword ptr [esi*4 + 0xa8eb00], eax */ W32((u32)(r_esi*4+0xa8eb00u), r_eax);
    /* 00617447: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0061744a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061744c: jge 0x617430 */ if ((fS==fO)) goto L_00617430;
L_0061744e:; BB(0x0061744e);
    /* 0061744e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617451: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617454: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00617457: mov dword ptr [0xa8eb20], 0 */ W32((u32)(0xa8eb20u), 0x0u);
    /* 00617461: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00617464: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061746b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061746d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061746e: ret  */ FN_RET(0x0061735c); r_esp += 4; return;
L_0061746f:; BB(0x0061746f);
    /* 0061746f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00617471: jmp 0x6173cc */ goto L_006173cc;
}

void f_00617375(void)
{
    FN_ENTER(0x00617375);
    goto L_00617375;
L_00617368:; BB(0x00617368);
    /* 00617368: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0061736a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0061736c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061736d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00617374: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
L_00617375:; BB(0x00617375);
    /* 00617375: in al, dx */ UNSUP(0x00617375, "in al, dx");
    /* 00617376: sbb byte ptr [ecx + 0x7d89f065], cl */ { u32 ad = (u32)(r_ecx+0x7d89f065u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b - c) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00617377: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061737a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061737c: in al, 0x89 */ UNSUP(0x0061737c, "in al, 0x89");
    /* 0061737d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061737e: jne 0x617368 */ if (!fZ) goto L_00617368;
L_00617380:; BB(0x00617380);
    /* 00617380: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00617383: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00617388: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061738f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x617394u); f_008581c5();
    /* 00617394: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617395: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00617398: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061739a: je 0x61746f */ if (fZ) goto L_0061746f;
L_006173a0:; BB(0x006173a0);
    /* 006173a0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006173a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006173ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006173b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006173b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006173b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006173b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006173b6: push 0x9c4a9c */ { u32 v = 0x9c4a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006173bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006173bd: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6173c2u); f_005b7a84();
    /* 006173c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006173c5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006173cc:; BB(0x006173cc);
    /* 006173cc: mov dword ptr [0xa8eb24], eax */ W32((u32)(0xa8eb24u), r_eax);
    /* 006173d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006173d8: mov ebx, dword ptr [0xa8eb24] */ r_ebx = R32((u32)(0xa8eb24u));
    /* 006173de: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 006173e4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006173e7: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 006173ea: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 006173ed: mov edi, dword ptr [ebx + 0x30] */ r_edi = R32((u32)(r_ebx+0x30u));
    /* 006173f0: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006173f3: mov dword ptr [0xa8eb1c], ecx */ W32((u32)(0xa8eb1cu), r_ecx);
    /* 006173f9: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 006173fc: mov dword ptr [0xa8eb18], esi */ W32((u32)(0xa8eb18u), r_esi);
    /* 00617402: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00617405: mov dword ptr [0xa8eb14], eax */ W32((u32)(0xa8eb14u), r_eax);
    /* 0061740a: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061740d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00617410: mov dword ptr [0xa8eb10], eax */ W32((u32)(0xa8eb10u), r_eax);
    /* 00617415: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00617417: mov dword ptr [0xa8eb00], eax */ W32((u32)(0xa8eb00u), r_eax);
    /* 0061741c: mov esi, 3 */ r_esi = 0x3u;
    /* 00617421: mov dword ptr [0xa8eb04], eax */ W32((u32)(0xa8eb04u), r_eax);
    /* 00617426: mov dword ptr [0xa8eb08], eax */ W32((u32)(0xa8eb08u), r_eax);
    /* 0061742b: mov dword ptr [0xa8eb0c], eax */ W32((u32)(0xa8eb0cu), r_eax);
L_00617430:; BB(0x00617430);
    /* 00617430: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00617432: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617433: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00617435: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x61743au); f_0066f3d4();
    /* 0061743a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061743d: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00617440: mov dword ptr [esi*4 + 0xa8eb00], eax */ W32((u32)(r_esi*4+0xa8eb00u), r_eax);
    /* 00617447: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0061744a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061744c: jge 0x617430 */ if ((fS==fO)) goto L_00617430;
L_0061744e:; BB(0x0061744e);
    /* 0061744e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617451: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617454: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00617457: mov dword ptr [0xa8eb20], 0 */ W32((u32)(0xa8eb20u), 0x0u);
    /* 00617461: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00617464: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061746b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061746d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061746e: ret  */ FN_RET(0x00617375); r_esp += 4; return;
L_0061746f:; BB(0x0061746f);
    /* 0061746f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00617471: jmp 0x6173cc */ goto L_006173cc;
}

void f_00617478(void) /* sub_617478 */
{
    FN_ENTER(0x00617478);
    /* 00617478: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617479: mov ebp, esp */ r_ebp = r_esp;
    /* 0061747b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061747d: push 0x8e15bc */ { u32 v = 0x8e15bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00617482: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00617488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617489: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00617490: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617493: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00617496: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00617499: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061749c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061749f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006174a2: mov dword ptr [ecx], 0xb25c20 */ W32((u32)(r_ecx), 0xb25c20u);
    /* 006174a8: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006174ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006174b2: mov eax, ecx */ r_eax = r_ecx;
    /* 006174b4: lea ecx, [eax + 0x348] */ r_ecx = (u32)(r_eax+0x348u);
    /* 006174ba: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x6174bfu); f_006111bc();
    /* 006174bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006174c6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006174c9: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x6174ceu); f_00770660();
    /* 006174ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006174d1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006174d3: jne 0x6174e5 */ if (!fZ) goto L_006174e5;
L_006174d5:; BB(0x006174d5);
    /* 006174d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006174d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006174df: mov esp, ebp */ r_esp = r_ebp;
    /* 006174e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006174e2: ret 4 */ FN_RET(0x00617478); r_esp += 8; return;
L_006174e5:; BB(0x006174e5);
    /* 006174e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006174e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006174e9: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6174eeu); f_005c2f74();
    /* 006174ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006174ef: jmp 0x6174d5 */ goto L_006174d5;
}

void f_006174f4(void) /* sub_6174F4 */
{
    FN_ENTER(0x006174f4);
    /* 006174f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006174f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006174f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006174f9: call 0x61758c */ r_esp -= 4; W32(r_esp, 0x6174feu); f_0061758c();
    /* 006174fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00617502: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617504: jne 0x61750a */ if (!fZ) goto L_0061750a;
L_00617506:; BB(0x00617506);
    /* 00617506: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00617507: ret 4 */ FN_RET(0x006174f4); r_esp += 8; return;
L_0061750a:; BB(0x0061750a);
    /* 0061750a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061750b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x617510u); f_005c2f74();
    /* 00617510: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617511: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00617512: ret 4 */ FN_RET(0x006174f4); r_esp += 8; return;
}

void f_00617518(void) /* sub_617518 */
{
    FN_ENTER(0x00617518);
    /* 00617518: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617519: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061751b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061751d: call 0x61753c */ r_esp -= 4; W32(r_esp, 0x617522u); f_0061753c();
    /* 00617522: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00617526: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617528: jne 0x61752e */ if (!fZ) goto L_0061752e;
L_0061752a:; BB(0x0061752a);
    /* 0061752a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061752b: ret 4 */ FN_RET(0x00617518); r_esp += 8; return;
L_0061752e:; BB(0x0061752e);
    /* 0061752e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061752f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x617534u); f_005c2f74();
    /* 00617534: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617535: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00617536: ret 4 */ FN_RET(0x00617518); r_esp += 8; return;
}

void f_0061753c(void) /* sub_61753C */
{
    FN_ENTER(0x0061753c);
    /* 0061753c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061753d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061753f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00617541: push 0x8e15d8 */ { u32 v = 0x8e15d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00617546: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061754c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061754d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00617554: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617557: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061755a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061755d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00617560: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00617563: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00617566: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617569: mov dword ptr [ecx], 0xb26300 */ W32((u32)(r_ecx), 0xb26300u);
    /* 0061756f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00617576: call 0x61758c */ r_esp -= 4; W32(r_esp, 0x61757bu); f_0061758c();
    /* 0061757b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061757e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00617585: mov esp, ebp */ r_esp = r_ebp;
    /* 00617587: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617588: ret  */ FN_RET(0x0061753c); r_esp += 4; return;
}

void f_0061758c(void) /* sub_61758C */
{
    FN_ENTER(0x0061758c);
    /* 0061758c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061758d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061758f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00617591: push 0x8e1602 */ { u32 v = 0x8e1602u; r_esp -= 4; W32(r_esp, v); }
    /* 00617596: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061759c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061759d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006175a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006175a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006175aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006175ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006175b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006175b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006175b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006175bd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006175c0: mov dword ptr [eax], 0xb25d80 */ W32((u32)(r_eax), 0xb25d80u);
    /* 006175c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006175c7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6175ccu); f_007b4e84();
    /* 006175cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006175cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006175d0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6175d5u); f_007b9c8c();
    /* 006175d5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006175d8: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 006175de: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006175e1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006175e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006175eb: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006175f1: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x6175f6u); f_006111bc();
    /* 006175f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006175fd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617600: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x617605u); f_00770660();
    /* 00617605: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00617608: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061760f: mov esp, ebp */ r_esp = r_ebp;
    /* 00617611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617612: ret  */ FN_RET(0x0061758c); r_esp += 4; return;
}

void f_00617678(void) /* sub_617678 */
{
    FN_ENTER(0x00617678);
    /* 00617678: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617679: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061767b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061767d: call 0x61769c */ r_esp -= 4; W32(r_esp, 0x617682u); f_0061769c();
    /* 00617682: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00617686: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617688: jne 0x61768e */ if (!fZ) goto L_0061768e;
L_0061768a:; BB(0x0061768a);
    /* 0061768a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061768b: ret 4 */ FN_RET(0x00617678); r_esp += 8; return;
L_0061768e:; BB(0x0061768e);
    /* 0061768e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061768f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x617694u); f_005c2f74();
    /* 00617694: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617695: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00617696: ret 4 */ FN_RET(0x00617678); r_esp += 8; return;
}

void f_0061769c(void) /* sub_61769C */
{
    FN_ENTER(0x0061769c);
    /* 0061769c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061769d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061769f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006176a1: push 0x8e1638 */ { u32 v = 0x8e1638u; r_esp -= 4; W32(r_esp, v); }
    /* 006176a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006176ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006176ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006176b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006176b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006176ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006176bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006176c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006176c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006176c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006176c9: mov dword ptr [ecx], 0xb26460 */ W32((u32)(r_ecx), 0xb26460u);
    /* 006176cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006176d6: call 0x6185e8 */ r_esp -= 4; W32(r_esp, 0x6176dbu); f_006185e8();
    /* 006176db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006176de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006176e5: mov esp, ebp */ r_esp = r_ebp;
    /* 006176e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006176e8: ret  */ FN_RET(0x0061769c); r_esp += 4; return;
}

void f_006176ec(void) /* sub_6176EC */
{
    FN_ENTER(0x006176ec);
    /* 006176ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006176ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006176ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006176f1: call 0x617784 */ r_esp -= 4; W32(r_esp, 0x6176f6u); f_00617784();
    /* 006176f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006176fa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006176fc: jne 0x617702 */ if (!fZ) goto L_00617702;
L_006176fe:; BB(0x006176fe);
    /* 006176fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006176ff: ret 4 */ FN_RET(0x006176ec); r_esp += 8; return;
L_00617702:; BB(0x00617702);
    /* 00617702: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617703: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x617708u); f_005c2f74();
    /* 00617708: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617709: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061770a: ret 4 */ FN_RET(0x006176ec); r_esp += 8; return;
}

void f_00617710(void) /* sub_617710 */
{
    FN_ENTER(0x00617710);
    /* 00617710: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617711: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00617713: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00617715: call 0x617734 */ r_esp -= 4; W32(r_esp, 0x61771au); f_00617734();
    /* 0061771a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061771e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617720: jne 0x617726 */ if (!fZ) goto L_00617726;
L_00617722:; BB(0x00617722);
    /* 00617722: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00617723: ret 4 */ FN_RET(0x00617710); r_esp += 8; return;
L_00617726:; BB(0x00617726);
    /* 00617726: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617727: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61772cu); f_005c2f74();
    /* 0061772c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061772d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061772e: ret 4 */ FN_RET(0x00617710); r_esp += 8; return;
}

void f_00617734(void) /* sub_617734 */
{
    FN_ENTER(0x00617734);
    /* 00617734: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617735: mov ebp, esp */ r_ebp = r_esp;
    /* 00617737: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00617739: push 0x8e1654 */ { u32 v = 0x8e1654u; r_esp -= 4; W32(r_esp, v); }
    /* 0061773e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00617744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617745: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061774c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061774f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00617752: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00617755: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00617758: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061775b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061775e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617761: mov dword ptr [ecx], 0xb265c0 */ W32((u32)(r_ecx), 0xb265c0u);
    /* 00617767: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061776e: call 0x617784 */ r_esp -= 4; W32(r_esp, 0x617773u); f_00617784();
    /* 00617773: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00617776: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061777d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061777f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617780: ret  */ FN_RET(0x00617734); r_esp += 4; return;
}

void f_00617784(void) /* sub_617784 */
{
    FN_ENTER(0x00617784);
    /* 00617784: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617785: mov ebp, esp */ r_ebp = r_esp;
    /* 00617787: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00617789: push 0x8e167e */ { u32 v = 0x8e167eu; r_esp -= 4; W32(r_esp, v); }
    /* 0061778e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00617794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617795: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061779c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061779f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006177a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006177a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006177a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006177ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006177ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006177b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006177b8: mov dword ptr [eax], 0xb26040 */ W32((u32)(r_eax), 0xb26040u);
    /* 006177be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006177bf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6177c4u); f_007b4e84();
    /* 006177c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006177c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006177c8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6177cdu); f_007b9c8c();
    /* 006177cd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006177d0: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 006177d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006177d9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006177e0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006177e3: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006177e9: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x6177eeu); f_006111bc();
    /* 006177ee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006177f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006177f8: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x6177fdu); f_00770660();
    /* 006177fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00617800: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00617807: mov esp, ebp */ r_esp = r_ebp;
    /* 00617809: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061780a: ret  */ FN_RET(0x00617784); r_esp += 4; return;
}

void f_0061780c(void) /* sub_61780C */
{
    FN_ENTER(0x0061780c);
    /* 0061780c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00617811: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00617813: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00617815: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x617818u); call_ind(t); }
    /* 00617818: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0061781a: fld dword ptr [0x930540] */ FPUSH(R_F32((u32)(0x930540u)));
    /* 00617820: ret 8 */ FN_RET(0x0061780c); r_esp += 12; return;
}

void f_00617824(void) /* sub_617824 */
{
    FN_ENTER(0x00617824);
    /* 00617824: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00617825: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 0061782b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061782d: je 0x61786c */ if (fZ) goto L_0061786c;
L_0061782f:; BB(0x0061782f);
    /* 0061782f: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00617832: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00617834: mov ebx, eax */ r_ebx = r_eax;
    /* 00617836: jmp 0x61783e */ goto L_0061783e;
L_00617838:; BB(0x00617838);
    /* 00617838: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
L_0061783e:; BB(0x0061783e);
    /* 0061783e: push dword ptr [edx + ebx*4] */ { u32 v = R32((u32)(r_edx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00617841: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x617846u); f_00800b5c();
    /* 00617846: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617847: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0061784a: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061784d: jl 0x617838 */ if ((fS!=fO)) goto L_00617838;
L_0061784f:; BB(0x0061784f);
    /* 0061784f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00617852: mov eax, dword ptr [0xa8eb3c] */ r_eax = R32((u32)(0xa8eb3cu));
    /* 00617857: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617859: je 0x61786c */ if (fZ) goto L_0061786c;
L_0061785b:; BB(0x0061785b);
    /* 0061785b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061785c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x617861u); f_00857e98();
    /* 00617861: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617862: mov dword ptr [0xa8eb3c], 0 */ W32((u32)(0xa8eb3cu), 0x0u);
L_0061786c:; BB(0x0061786c);
    /* 0061786c: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 00617872: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617874: je 0x617889 */ if (fZ) goto L_00617889;
L_00617876:; BB(0x00617876);
    /* 00617876: je 0x61787f */ if (fZ) goto L_0061787f;
L_00617878:; BB(0x00617878);
    /* 00617878: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061787a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61787fu); f_004066a8();
L_0061787f:; BB(0x0061787f);
    /* 0061787f: mov dword ptr [0xa8eb40], 0 */ W32((u32)(0xa8eb40u), 0x0u);
L_00617889:; BB(0x00617889);
    /* 00617889: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061788a: ret  */ FN_RET(0x00617824); r_esp += 4; return;
}

void f_0061788c(void) /* sub_61788C */
{
    FN_ENTER(0x0061788c);
    /* 0061788c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061788d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061788f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00617891: push 0x8e16be */ { u32 v = 0x8e16beu; r_esp -= 4; W32(r_esp, v); }
    /* 00617896: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061789c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061789d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006178a4: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006178aa: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006178ad: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006178b0: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006178b3: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006178b6: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 006178bd: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006178c0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006178c3: je 0x617b39 */ if (fZ) goto L_00617b39;
L_006178c9:; BB(0x006178c9);
    /* 006178c9: mov eax, 0x930420 */ r_eax = 0x930420u;
    /* 006178ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006178d0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006178d3: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 006178d6: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 006178d9: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 006178dc: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 006178e2: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006178e5: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 006178eb: mov dword ptr [ebp - 0xbc], ebx */ W32((u32)(r_ebp+0xffffff44u), r_ebx);
    /* 006178f1: mov dword ptr [ebp - 0xb8], esi */ W32((u32)(r_ebp+0xffffff48u), r_esi);
    /* 006178f7: mov dword ptr [ebp - 0xb4], edi */ W32((u32)(r_ebp+0xffffff4cu), r_edi);
    /* 006178fd: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00617903: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00617906: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0061790c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0061790f: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00617915: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00617918: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0061791e: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00617921: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00617927: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0061792a: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00617930: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00617933: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 00617939: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0061793c: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00617942: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00617945: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0061794b: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0061794e: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00617954: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00617957: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0061795d: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00617960: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00617966: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00617969: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0061796c: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0061796f: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00617972: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00617975: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 0061797b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061797d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00617980: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00617983: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00617986: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0061798c: mov dword ptr [ebp - 0xb4], esi */ W32((u32)(r_ebp+0xffffff4cu), r_esi);
    /* 00617992: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 00617998: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 0061799e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6179a3u); f_005b8610();
    /* 006179a3: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 006179a9: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 006179af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006179b1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6179b6u); f_005b8624();
    /* 006179b6: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 006179b9: mov eax, 0x9303c0 */ r_eax = 0x9303c0u;
    /* 006179be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006179c0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006179c3: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 006179c6: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 006179c9: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 006179cc: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 006179cf: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006179d2: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 006179d5: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 006179d8: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 006179db: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 006179de: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 006179e1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006179e4: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 006179e7: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006179ea: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 006179ed: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006179f0: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 006179f3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006179f6: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 006179f9: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006179fc: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 006179ff: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00617a02: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00617a05: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00617a08: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00617a0b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00617a0e: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00617a11: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00617a14: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00617a17: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00617a1a: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00617a1d: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00617a20: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00617a23: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00617a26: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00617a29: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00617a2c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00617a2f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00617a32: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 00617a38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00617a3a: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00617a3d: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00617a40: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00617a43: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00617a46: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 00617a49: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 00617a4c: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 00617a4f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x617a54u); f_005b8610();
    /* 00617a54: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 00617a5a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00617a5d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00617a5f: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x617a64u); f_005b8624();
    /* 00617a64: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00617a67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00617a6a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00617a6d: cmp edx, dword ptr [0x9c4b44] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9c4b44u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617a73: jne 0x617a87 */ if (!fZ) goto L_00617a87;
L_00617a75:; BB(0x00617a75);
    /* 00617a75: mov edx, dword ptr [0xa8eb3c] */ r_edx = R32((u32)(0xa8eb3cu));
    /* 00617a7b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00617a7e: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00617a81: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00617a84: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00617a87:; BB(0x00617a87);
    /* 00617a87: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00617a8e: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00617a93: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x617a98u); f_005caba4();
    /* 00617a98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617a99: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00617a9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617a9e: je 0x617aca */ if (fZ) goto L_00617aca;
L_00617aa0:; BB(0x00617aa0);
    /* 00617aa0: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00617aa7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00617aae: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00617ab1: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 00617ab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617ab8: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617abe: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x617ac3u); f_006441f4();
    /* 00617ac3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00617aca:; BB(0x00617aca);
    /* 00617aca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00617ad1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00617ad8: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00617add: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x617ae2u); f_005caba4();
    /* 00617ae2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617ae3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00617ae6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617ae8: je 0x617b11 */ if (fZ) goto L_00617b11;
L_00617aea:; BB(0x00617aea);
    /* 00617aea: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00617af1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00617af8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00617afb: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00617afe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617aff: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617b05: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x617b0au); f_006441f4();
    /* 00617b0a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00617b11:; BB(0x00617b11);
    /* 00617b11: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00617b18: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00617b1b: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00617b1d: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 00617b20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617b21: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x617b26u); f_0050b510();
    /* 00617b26: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00617b28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617b29: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x617b2eu); f_0050b510();
    /* 00617b2e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617b31: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00617b34: call 0x64de10 */ r_esp -= 4; W32(r_esp, 0x617b39u); f_0064de10();
L_00617b39:; BB(0x00617b39);
    /* 00617b39: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617b3c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617b3f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617b42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00617b45: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00617b4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00617b4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617b4f: ret  */ FN_RET(0x0061788c); r_esp += 4; return;
}

void f_00617b50(void) /* sub_617B50 */
{
    FN_ENTER(0x00617b50);
    /* 00617b50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00617b51: mov edi, ecx */ r_edi = r_ecx;
    /* 00617b53: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00617b57: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00617b5a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00617b5d: je 0x617b63 */ if (fZ) goto L_00617b63;
L_00617b5f:; BB(0x00617b5f);
    /* 00617b5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00617b60: ret 8 */ FN_RET(0x00617b50); r_esp += 12; return;
L_00617b63:; BB(0x00617b63);
    /* 00617b63: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00617b67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617b69: je 0x617b7d */ if (fZ) goto L_00617b7d;
L_00617b6b:; BB(0x00617b6b);
    /* 00617b6b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00617b6d: mov ecx, edi */ r_ecx = r_edi;
    /* 00617b6f: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x617b75u); call_ind(t); }
    /* 00617b75: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00617b76: mov ecx, edi */ r_ecx = r_edi;
    /* 00617b78: call 0x64eb14 */ r_esp -= 4; W32(r_esp, 0x617b7du); f_0064eb14();
L_00617b7d:; BB(0x00617b7d);
    /* 00617b7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00617b7e: mov eax, 1 */ r_eax = 0x1u;
    /* 00617b83: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00617b8a: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x617b8fu); f_008113bc();
    /* 00617b8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617b90: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00617b94: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617b99: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00617b9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00617b9e: ret 8 */ FN_RET(0x00617b50); r_esp += 12; return;
}

void f_00617ba4(void)
{
    FN_ENTER(0x00617ba4);
    /* 00617ba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617ba5: mov ebp, esp */ r_ebp = r_esp;
    /* 00617ba7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00617ba9: push 0x8e16fe */ { u32 v = 0x8e16feu; r_esp -= 4; W32(r_esp, v); }
    /* 00617bae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00617bb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617bb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00617bbc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617bbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00617bc2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00617bc5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00617bc8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00617bcb: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 00617bd0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617bd3: je 0x617c2c */ if (fZ) goto L_00617c2c;
L_00617bd5:; BB(0x00617bd5);
    /* 00617bd5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00617bdc: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 00617be1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x617be6u); f_005caba4();
    /* 00617be6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00617be9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617bec: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00617bef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617bf1: je 0x617c25 */ if (fZ) goto L_00617c25;
L_00617bf3:; BB(0x00617bf3);
    /* 00617bf3: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00617bfa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00617c01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617c04: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00617c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617c08: call 0x617c98 */ r_esp -= 4; W32(r_esp, 0x617c0du); f_00617c98();
    /* 00617c0d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00617c14:; BB(0x00617c14);
    /* 00617c14: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00617c17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00617c1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00617c21: mov esp, ebp */ r_esp = r_ebp;
    /* 00617c23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617c24: ret  */ FN_RET(0x00617ba4); r_esp += 4; return;
L_00617c25:; BB(0x00617c25);
    /* 00617c25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617c27: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00617c2a: jmp 0x617c14 */ goto L_00617c14;
L_00617c2c:; BB(0x00617c2c);
    /* 00617c2c: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x617c31u); f_0078b1c4();
    /* 00617c31: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c34: jne 0x617bd5 */ if (!fZ) goto L_00617bd5;
L_00617c36:; BB(0x00617c36);
    /* 00617c36: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 00617c3b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c3e: jne 0x617bd5 */ if (!fZ) goto L_00617bd5;
L_00617c40:; BB(0x00617c40);
    /* 00617c40: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00617c47: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 00617c4c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x617c51u); f_005caba4();
    /* 00617c51: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00617c54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617c57: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00617c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c5c: je 0x617c90 */ if (fZ) goto L_00617c90;
L_00617c5e:; BB(0x00617c5e);
    /* 00617c5e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00617c65: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00617c6c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617c6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00617c72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617c73: call 0x617c98 */ r_esp -= 4; W32(r_esp, 0x617c78u); f_00617c98();
    /* 00617c78: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00617c7f:; BB(0x00617c7f);
    /* 00617c7f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00617c82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00617c85: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00617c8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00617c8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617c8f: ret  */ FN_RET(0x00617ba4); r_esp += 4; return;
L_00617c90:; BB(0x00617c90);
    /* 00617c90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617c92: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00617c95: jmp 0x617c7f */ goto L_00617c7f;
}

void f_00617c98(void) /* sub_617C98 */
{
    FN_ENTER(0x00617c98);
    /* 00617c98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617c99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00617c9b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617c9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00617ca1: call 0x617cbc */ r_esp -= 4; W32(r_esp, 0x617ca6u); f_00617cbc();
    /* 00617ca6: mov dword ptr [ebx], 0xb26300 */ W32((u32)(r_ebx), 0xb26300u);
    /* 00617cac: mov edx, dword ptr [0x9c4b40] */ r_edx = R32((u32)(0x9c4b40u));
    /* 00617cb2: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00617cb5: mov eax, ebx */ r_eax = r_ebx;
    /* 00617cb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00617cb8: ret 4 */ FN_RET(0x00617c98); r_esp += 8; return;
}

void f_00617cbc(void) /* sub_617CBC */
{
    FN_ENTER(0x00617cbc);
    /* 00617cbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617cbd: mov ebp, esp */ r_ebp = r_esp;
    /* 00617cbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00617cc1: push 0x8e1718 */ { u32 v = 0x8e1718u; r_esp -= 4; W32(r_esp, v); }
    /* 00617cc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00617ccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617ccd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00617cd4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617cd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00617cda: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00617cdd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00617ce0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00617ce3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617ce6: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617cec: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00617cef: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x617cf4u); f_0064df84();
    /* 00617cf4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00617cfb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617cfe: mov dword ptr [ecx], 0xb25d80 */ W32((u32)(r_ecx), 0xb25d80u);
    /* 00617d04: mov eax, dword ptr [0x9c4b3c] */ r_eax = R32((u32)(0x9c4b3cu));
    /* 00617d09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00617d0b: push 0x9c4b58 */ { u32 v = 0x9c4b58u; r_esp -= 4; W32(r_esp, v); }
    /* 00617d10: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00617d13: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x617d18u); f_007b9a88();
    /* 00617d18: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617d1b: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x617d20u); f_007b4f54();
    /* 00617d20: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617d23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00617d25: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00617d28: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00617d2b: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00617d2e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00617d31: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00617d34: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617d37: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00617d3a: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 00617d3d: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00617d40: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00617d43: mov dword ptr [edx + 0x300], edi */ W32((u32)(r_edx+0x300u), r_edi);
    /* 00617d49: mov dword ptr [edx + 0x304], ecx */ W32((u32)(r_edx+0x304u), r_ecx);
    /* 00617d4f: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 00617d55: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 00617d5b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617d5e: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 00617d61: fadd dword ptr [0x9c4b5c] */ ST(0) = ST(0) + R_F32((u32)(0x9c4b5cu));
    /* 00617d67: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 00617d6a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x617d6fu); f_005b8610();
    /* 00617d6f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617d72: mov ecx, dword ptr [0xa8eb40] */ r_ecx = R32((u32)(0xa8eb40u));
    /* 00617d78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00617d7a: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00617d7d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x617d82u); f_005b8624();
    /* 00617d82: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617d85: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617d88: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617d8b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00617d8e: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00617d91: mov eax, edx */ r_eax = r_edx;
    /* 00617d93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00617d96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00617d9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00617d9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617da0: ret 4 */ FN_RET(0x00617cbc); r_esp += 8; return;
}

void f_00617da4(void)
{
    FN_ENTER(0x00617da4);
    /* 00617da4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617da5: mov ebp, esp */ r_ebp = r_esp;
    /* 00617da7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00617da9: push 0x8e1740 */ { u32 v = 0x8e1740u; r_esp -= 4; W32(r_esp, v); }
    /* 00617dae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00617db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617db5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00617dbc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617dbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00617dc2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00617dc5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00617dc8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00617dcb: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 00617dd0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00617dd7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x617ddcu); f_005caba4();
    /* 00617ddc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617ddd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00617de0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617de2: je 0x617e15 */ if (fZ) goto L_00617e15;
L_00617de4:; BB(0x00617de4);
    /* 00617de4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00617deb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00617df2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617df5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617df8: call 0x617e1c */ r_esp -= 4; W32(r_esp, 0x617dfdu); f_00617e1c();
    /* 00617dfd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00617e00: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00617e07:; BB(0x00617e07);
    /* 00617e07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00617e0a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00617e11: mov esp, ebp */ r_esp = r_ebp;
    /* 00617e13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617e14: ret  */ FN_RET(0x00617da4); r_esp += 4; return;
L_00617e15:; BB(0x00617e15);
    /* 00617e15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617e17: jmp 0x617e07 */ goto L_00617e07;
}

void f_00617e1c(void) /* sub_617E1C */
{
    FN_ENTER(0x00617e1c);
    /* 00617e1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00617e1d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00617e1f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617e23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00617e25: call 0x618638 */ r_esp -= 4; W32(r_esp, 0x617e2au); f_00618638();
    /* 00617e2a: mov dword ptr [ebx], 0xb26460 */ W32((u32)(r_ebx), 0xb26460u);
    /* 00617e30: mov edx, dword ptr [0x9c4b48] */ r_edx = R32((u32)(0x9c4b48u));
    /* 00617e36: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00617e39: mov eax, ebx */ r_eax = r_ebx;
    /* 00617e3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00617e3c: ret 4 */ FN_RET(0x00617e1c); r_esp += 8; return;
}

void f_00617e40(void) /* sub_617E40 */
{
    FN_ENTER(0x00617e40);
    /* 00617e40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00617e41: mov esi, ecx */ r_esi = r_ecx;
    /* 00617e43: mov eax, dword ptr [0xa8eb40] */ r_eax = R32((u32)(0xa8eb40u));
    /* 00617e48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617e4a: je 0x617ee7 */ if (fZ) goto L_00617ee7;
L_00617e50:; BB(0x00617e50);
    /* 00617e50: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00617e57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00617e59: jne 0x617ee7 */ if (!fZ) goto L_00617ee7;
L_00617e5f:; BB(0x00617e5f);
    /* 00617e5f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x617e64u); f_0082d7b0();
    /* 00617e64: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00617e67: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x617e6cu); f_0082d838();
    /* 00617e6c: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00617e6f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00617e71: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x617e76u); f_0082d8bc();
    /* 00617e76: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00617e79: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x617e7eu); f_00829cc8();
    /* 00617e7e: mov esi, dword ptr [esi + 0x34] */ r_esi = R32((u32)(r_esi+0x34u));
    /* 00617e81: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x617e86u); f_0082d7b0();
    /* 00617e86: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00617e89: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x617e8eu); f_0082d838();
    /* 00617e8e: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617e91: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x617e96u); f_008321d8();
    /* 00617e96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617e97: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 00617e9a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x617e9fu); f_0082d7b0();
    /* 00617e9f: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00617ea2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x617ea7u); f_0082d838();
    /* 00617ea7: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617eaa: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x617eafu); f_008321d8();
    /* 00617eaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617eb0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x617eb5u); f_0082da80();
    /* 00617eb5: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00617eb8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x617ebdu); f_0082d7b0();
    /* 00617ebd: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00617ec0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x617ec5u); f_0082d838();
    /* 00617ec5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x617ecau); f_0082dbac();
    /* 00617eca: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00617ecd: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x617ed2u); f_008321d8();
    /* 00617ed2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00617ed3: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x617ed8u); f_0082dab0();
    /* 00617ed8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x617eddu); f_0082da80();
    /* 00617edd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x617ee2u); f_0082da80();
    /* 00617ee2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x617ee7u); f_0082da80();
L_00617ee7:; BB(0x00617ee7);
    /* 00617ee7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00617ee8: ret  */ FN_RET(0x00617e40); r_esp += 4; return;
}

void f_00617eec(void) /* sub_617EEC */
{
    FN_ENTER(0x00617eec);
    /* 00617eec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00617eed: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617ef0: mov edi, ecx */ r_edi = r_ecx;
    /* 00617ef2: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00617ef6: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00617efb: jl 0x617fcb */ if ((fS!=fO)) goto L_00617fcb;
L_00617f01:; BB(0x00617f01);
    /* 00617f01: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 00617f07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f09: je 0x617fcb */ if (fZ) goto L_00617fcb;
L_00617f0f:; BB(0x00617f0f);
    /* 00617f0f: je 0x617fd8 */ if (fZ) goto L_00617fd8;
L_00617f15:; BB(0x00617f15);
    /* 00617f15: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00617f19: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00617f1b: jl 0x617f4c */ if ((fS!=fO)) goto L_00617f4c;
L_00617f1d:; BB(0x00617f1d);
    /* 00617f1d: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00617f23: jg 0x617f4c */ if ((!fZ&&fS==fO)) goto L_00617f4c;
L_00617f25:; BB(0x00617f25);
    /* 00617f25: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00617f2b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00617f2f: movzx eax, word ptr [ecx + edx*4] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*4));
    /* 00617f33: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00617f37: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00617f3b: movzx edx, word ptr [ecx + edx*4 + 2] */ r_edx = (u32)R16((u32)(r_ecx+r_edx*4+0x2u));
    /* 00617f40: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 00617f45: mov edx, 1 */ r_edx = 0x1u;
    /* 00617f4a: jmp 0x617f4e */ goto L_00617f4e;
L_00617f4c:; BB(0x00617f4c);
    /* 00617f4c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00617f4e:; BB(0x00617f4e);
    /* 00617f4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f50: je 0x617fcb */ if (fZ) goto L_00617fcb;
L_00617f52:; BB(0x00617f52);
    /* 00617f52: mov edx, 1 */ r_edx = 0x1u;
    /* 00617f57: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00617f5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f5d: je 0x617f86 */ if (fZ) goto L_00617f86;
L_00617f5f:; BB(0x00617f5f);
    /* 00617f5f: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00617f63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00617f65: jl 0x617f86 */ if ((fS!=fO)) goto L_00617f86;
L_00617f67:; BB(0x00617f67);
    /* 00617f67: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00617f6d: jg 0x617f86 */ if ((!fZ&&fS==fO)) goto L_00617f86;
L_00617f6f:; BB(0x00617f6f);
    /* 00617f6f: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 00617f74: movzx ecx, word ptr [esp] */ r_ecx = (u32)R16((u32)(r_esp));
    /* 00617f78: mov word ptr [eax + edx*4], cx */ W16((u32)(r_eax+r_edx*4), (u16)r_ecx);
    /* 00617f7c: movzx ecx, word ptr [esp + 2] */ r_ecx = (u32)R16((u32)(r_esp+0x2u));
    /* 00617f81: mov word ptr [eax + edx*4 + 2], cx */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_ecx);
L_00617f86:; BB(0x00617f86);
    /* 00617f86: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00617f89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617f8a: mov ecx, edi */ r_ecx = r_edi;
    /* 00617f8c: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x617f91u); f_007b5038();
    /* 00617f91: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 00617f97: mov ecx, dword ptr [0xa9c4f4] */ r_ecx = R32((u32)(0xa9c4f4u));
    /* 00617f9d: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00617fa1: mov edi, dword ptr [edi + 0x84] */ r_edi = R32((u32)(r_edi+0x84u));
    /* 00617fa7: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00617fac: mov byte ptr [esp + 4], 0x67 */ W8((u32)(r_esp+0x4u), 0x67u);
    /* 00617fb1: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00617fb5: mov byte ptr [esp + 5], 4 */ W8((u32)(r_esp+0x5u), 0x4u);
    /* 00617fba: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00617fbe: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00617fc2: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00617fc6: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x617fcbu); f_008003e0();
L_00617fcb:; BB(0x00617fcb);
    /* 00617fcb: fld dword ptr [0x930538] */ FPUSH(R_F32((u32)(0x930538u)));
    /* 00617fd1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00617fd4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00617fd5: ret 8 */ FN_RET(0x00617eec); r_esp += 12; return;
L_00617fd8:; BB(0x00617fd8);
    /* 00617fd8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00617fda: jmp 0x617f4e */ goto L_00617f4e;
}

void f_00617f33(void)
{
    FN_ENTER(0x00617f33);
    /* 00617f33: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00617f37: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00617f3b: movzx edx, word ptr [ecx + edx*4 + 2] */ r_edx = (u32)R16((u32)(r_ecx+r_edx*4+0x2u));
    /* 00617f40: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 00617f45: mov edx, 1 */ r_edx = 0x1u;
    /* 00617f4a: jmp 0x617f4e */ goto L_00617f4e;
L_00617f4e:; BB(0x00617f4e);
    /* 00617f4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f50: je 0x617fcb */ if (fZ) goto L_00617fcb;
L_00617f52:; BB(0x00617f52);
    /* 00617f52: mov edx, 1 */ r_edx = 0x1u;
    /* 00617f57: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00617f5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f5d: je 0x617f86 */ if (fZ) goto L_00617f86;
L_00617f5f:; BB(0x00617f5f);
    /* 00617f5f: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00617f63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00617f65: jl 0x617f86 */ if ((fS!=fO)) goto L_00617f86;
L_00617f67:; BB(0x00617f67);
    /* 00617f67: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00617f6d: jg 0x617f86 */ if ((!fZ&&fS==fO)) goto L_00617f86;
L_00617f6f:; BB(0x00617f6f);
    /* 00617f6f: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 00617f74: movzx ecx, word ptr [esp] */ r_ecx = (u32)R16((u32)(r_esp));
    /* 00617f78: mov word ptr [eax + edx*4], cx */ W16((u32)(r_eax+r_edx*4), (u16)r_ecx);
    /* 00617f7c: movzx ecx, word ptr [esp + 2] */ r_ecx = (u32)R16((u32)(r_esp+0x2u));
    /* 00617f81: mov word ptr [eax + edx*4 + 2], cx */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_ecx);
L_00617f86:; BB(0x00617f86);
    /* 00617f86: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00617f89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617f8a: mov ecx, edi */ r_ecx = r_edi;
    /* 00617f8c: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x617f91u); f_007b5038();
    /* 00617f91: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 00617f97: mov ecx, dword ptr [0xa9c4f4] */ r_ecx = R32((u32)(0xa9c4f4u));
    /* 00617f9d: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00617fa1: mov edi, dword ptr [edi + 0x84] */ r_edi = R32((u32)(r_edi+0x84u));
    /* 00617fa7: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00617fac: mov byte ptr [esp + 4], 0x67 */ W8((u32)(r_esp+0x4u), 0x67u);
    /* 00617fb1: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00617fb5: mov byte ptr [esp + 5], 4 */ W8((u32)(r_esp+0x5u), 0x4u);
    /* 00617fba: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00617fbe: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00617fc2: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00617fc6: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x617fcbu); f_008003e0();
L_00617fcb:; BB(0x00617fcb);
    /* 00617fcb: fld dword ptr [0x930538] */ FPUSH(R_F32((u32)(0x930538u)));
    /* 00617fd1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00617fd4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00617fd5: ret 8 */ FN_RET(0x00617f33); r_esp += 12; return;
}

void f_00617fe0(void) /* sub_617FE0 */
{
    FN_ENTER(0x00617fe0);
    /* 00617fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617fe1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00617fe3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00617fe7: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00617fea: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00617fed: je 0x617ff3 */ if (fZ) goto L_00617ff3;
L_00617fef:; BB(0x00617fef);
    /* 00617fef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617ff0: ret 8 */ FN_RET(0x00617fe0); r_esp += 12; return;
L_00617ff3:; BB(0x00617ff3);
    /* 00617ff3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00617ff7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617ff9: je 0x618006 */ if (fZ) goto L_00618006;
L_00617ffb:; BB(0x00617ffb);
    /* 00617ffb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00617ffe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00618000: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x618006u); call_ind(t); }
L_00618006:; BB(0x00618006);
    /* 00618006: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00618007: mov eax, 1 */ r_eax = 0x1u;
    /* 0061800c: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00618013: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x618018u); f_008113bc();
    /* 00618018: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00618019: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0061801d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00618022: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00618026: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00618027: ret 8 */ FN_RET(0x00617fe0); r_esp += 12; return;
}

