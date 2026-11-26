#include "protos.h"

void f_0059c108(void) /* sub_59C108 */
{
    FN_ENTER(0x0059c108);
    /* 0059c108: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c109: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059c10a: mov esi, ecx */ r_esi = r_ecx;
    /* 0059c10c: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059c112: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x59c117u); f_00520f3c();
    /* 0059c117: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c118: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c11a: je 0x59c15d */ if (fZ) goto L_0059c15d;
L_0059c11c:; BB(0x0059c11c);
    /* 0059c11c: movzx eax, word ptr [esi + 0x3ec] */ r_eax = (u32)R16((u32)(r_esi+0x3ecu));
    /* 0059c123: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c124: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59c129u); f_007b4d18();
    /* 0059c129: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c12a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c12c: je 0x59c139 */ if (fZ) goto L_0059c139;
L_0059c12e:; BB(0x0059c12e);
    /* 0059c12e: mov ecx, eax */ r_ecx = r_eax;
    /* 0059c130: call 0x5601e8 */ r_esp -= 4; W32(r_esp, 0x59c135u); f_005601e8();
    /* 0059c135: mov ebp, eax */ r_ebp = r_eax;
    /* 0059c137: jmp 0x59c13c */ goto L_0059c13c;
L_0059c139:; BB(0x0059c139);
    /* 0059c139: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
L_0059c13c:; BB(0x0059c13c);
    /* 0059c13c: mov edx, dword ptr [0xa746e8] */ r_edx = R32((u32)(0xa746e8u));
    /* 0059c142: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059c145: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59c14au); f_00520e3c();
    /* 0059c14a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c14b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059c14c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c14d: call 0x6eeeb4 */ r_esp -= 4; W32(r_esp, 0x59c152u); f_006eeeb4();
    /* 0059c152: mov eax, 1 */ r_eax = 0x1u;
    /* 0059c157: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059c15a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059c15b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059c15c: ret  */ FN_RET(0x0059c108); r_esp += 4; return;
L_0059c15d:; BB(0x0059c15d);
    /* 0059c15d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059c15f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059c160: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059c161: ret  */ FN_RET(0x0059c108); r_esp += 4; return;
}

void f_0059c164(void) /* sub_59C164 */
{
    FN_ENTER(0x0059c164);
    /* 0059c164: movzx eax, word ptr [ecx + 0x3ee] */ r_eax = (u32)R16((u32)(r_ecx+0x3eeu));
    /* 0059c16b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c16c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59c171u); f_007b4d18();
    /* 0059c171: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c172: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059c174: je 0x59c17f */ if (fZ) goto L_0059c17f;
L_0059c176:; BB(0x0059c176);
    /* 0059c176: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c178: mov ecx, eax */ r_ecx = r_eax;
    /* 0059c17a: call 0x59ac0c */ r_esp -= 4; W32(r_esp, 0x59c17fu); f_0059ac0c();
L_0059c17f:; BB(0x0059c17f);
    /* 0059c17f: ret  */ FN_RET(0x0059c164); r_esp += 4; return;
}

void f_0059c180(void) /* sub_59C180 */
{
    FN_ENTER(0x0059c180);
    /* 0059c180: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 0059c186: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c189: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059c18c: jl 0x59c199 */ if ((fS!=fO)) goto L_0059c199;
L_0059c18e:; BB(0x0059c18e);
    /* 0059c18e: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 0059c198: ret  */ FN_RET(0x0059c180); r_esp += 4; return;
L_0059c199:; BB(0x0059c199);
    /* 0059c199: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 0059c19f: ret  */ FN_RET(0x0059c180); r_esp += 4; return;
}

void f_0059c1a0(void) /* sub_59C1A0 */
{
    FN_ENTER(0x0059c1a0);
    /* 0059c1a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c1a1: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059c1a4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059c1a6: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0059c1aa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c1ad: je 0x59c6c9 */ if (fZ) goto L_0059c6c9;
L_0059c1b3:; BB(0x0059c1b3);
    /* 0059c1b3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c1b6: je 0x59c450 */ if (fZ) goto L_0059c450;
L_0059c1bc:; BB(0x0059c1bc);
    /* 0059c1bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c1be: jne 0x59c464 */ if (!fZ) goto L_0059c464;
L_0059c1c4:; BB(0x0059c1c4);
    /* 0059c1c4: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 0059c1ca: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c1cd: je 0x59c5e6 */ if (fZ) goto L_0059c5e6;
L_0059c1d3:; BB(0x0059c1d3);
    /* 0059c1d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c1d5: je 0x59c426 */ if (fZ) goto L_0059c426;
L_0059c1db:; BB(0x0059c1db);
    /* 0059c1db: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c1de: jne 0x59c2a8 */ if (!fZ) goto L_0059c2a8;
L_0059c1e4:; BB(0x0059c1e4);
    /* 0059c1e4: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0059c1ea: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 0059c1ef: mov dword ptr [ebx + 0x4f4], 0 */ W32((u32)(r_ebx+0x4f4u), 0x0u);
    /* 0059c1f9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c1fb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c1fd: jge 0x59c299 */ if ((fS==fO)) goto L_0059c299;
L_0059c203:; BB(0x0059c203);
    /* 0059c203: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0059c206: mov esi, edx */ r_esi = r_edx;
    /* 0059c208: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0059c20c: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0059c210: mov ebp, eax */ r_ebp = r_eax;
L_0059c212:; BB(0x0059c212);
    /* 0059c212: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 0059c219: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c21b: je 0x59c287 */ if (fZ) goto L_0059c287;
L_0059c21d:; BB(0x0059c21d);
    /* 0059c21d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c21f: je 0x59c22b */ if (fZ) goto L_0059c22b;
L_0059c221:; BB(0x0059c221);
    /* 0059c221: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0059c225: cmp ax, word ptr [ebx + 0x28] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0059c229: jne 0x59c287 */ if (!fZ) goto L_0059c287;
L_0059c22b:; BB(0x0059c22b);
    /* 0059c22b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c22c: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x59c231u); f_00520f3c();
    /* 0059c231: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c232: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c234: je 0x59c287 */ if (fZ) goto L_0059c287;
L_0059c236:; BB(0x0059c236);
    /* 0059c236: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c237: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c239: call 0x59c7f0 */ r_esp -= 4; W32(r_esp, 0x59c23eu); f_0059c7f0();
    /* 0059c23e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c240: je 0x59c287 */ if (fZ) goto L_0059c287;
L_0059c242:; BB(0x0059c242);
    /* 0059c242: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0059c245: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0059c248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c249: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c24a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x59c24fu); f_007a9180();
    /* 0059c24f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c252: fcom dword ptr [0xa746b4] */ fx_compare(ST(0), R_F32((u32)(0xa746b4u))); 
    /* 0059c258: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059c25a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059c25b: ja 0x59c736 */ if ((!fC&&!fZ)) goto L_0059c736;
L_0059c261:; BB(0x0059c261);
    /* 0059c261: fcom dword ptr [ebx + 0x4f4] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x4f4u))); 
    /* 0059c267: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059c269: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059c26a: ja 0x59c270 */ if ((!fC&&!fZ)) goto L_0059c270;
L_0059c26c:; BB(0x0059c26c);
    /* 0059c26c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059c26e: jmp 0x59c287 */ goto L_0059c287;
L_0059c270:; BB(0x0059c270);
    /* 0059c270: fstp dword ptr [ebx + 0x4f4] */ W_F32((u32)(r_ebx+0x4f4u), ST(0)); FPOP();
    /* 0059c276: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0059c27a: mov word ptr [ebx + 0x394], ax */ W16((u32)(r_ebx+0x394u), (u16)r_eax);
    /* 0059c281: mov dword ptr [ebx + 0x398], edi */ W32((u32)(r_ebx+0x398u), r_edi);
L_0059c287:; BB(0x0059c287);
    /* 0059c287: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059c28a: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c28c: jl 0x59c212 */ if ((fS!=fO)) goto L_0059c212;
L_0059c28e:; BB(0x0059c28e);
    /* 0059c28e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0059c291: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0059c295: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_0059c299:; BB(0x0059c299);
    /* 0059c299: mov dword ptr [ebx + 0x4ec], 2 */ W32((u32)(r_ebx+0x4ecu), 0x2u);
    /* 0059c2a3: jmp 0x59c464 */ goto L_0059c464;
L_0059c2a8:; BB(0x0059c2a8);
    /* 0059c2a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c2ab: jne 0x59c464 */ if (!fZ) goto L_0059c464;
L_0059c2b1:; BB(0x0059c2b1);
    /* 0059c2b1: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 0059c2b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c2b9: je 0x59c46b */ if (fZ) goto L_0059c46b;
L_0059c2bf:; BB(0x0059c2bf);
    /* 0059c2bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c2c1: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x59c2c6u); f_005213d8();
    /* 0059c2c6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c2c8: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x59c2cdu); f_00521410();
    /* 0059c2cd: mov ecx, dword ptr [ebx + 0x3f8] */ r_ecx = R32((u32)(r_ebx+0x3f8u));
    /* 0059c2d3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x59c2d8u); f_0082dcbc();
    /* 0059c2d8: fld dword ptr [0x92994c] */ FPUSH(R_F32((u32)(0x92994cu)));
    /* 0059c2de: mov ecx, dword ptr [ebx + 0x3f8] */ r_ecx = R32((u32)(r_ebx+0x3f8u));
    /* 0059c2e4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059c2e6: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0059c2ea: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 0059c2f2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x59c2f7u); f_0082ddd8();
    /* 0059c2f7: fld dword ptr [0x92994c] */ FPUSH(R_F32((u32)(0x92994cu)));
    /* 0059c2fd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059c2ff: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0059c303: lea edx, [ebx + 0x39c] */ r_edx = (u32)(r_ebx+0x39cu);
    /* 0059c309: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 0059c30d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x59c312u); f_0082ebac();
    /* 0059c312: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 0059c316: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0059c319: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x59c31eu); f_0082f9c4();
    /* 0059c31e: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 0059c322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c323: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x59c328u); f_007828e4();
    /* 0059c328: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c329: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c32c: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0059c330: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0059c334: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c336: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 0059c33a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059c33d: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0059c341: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059c345: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059c349: call 0x520a04 */ r_esp -= 4; W32(r_esp, 0x59c34eu); f_00520a04();
    /* 0059c34e: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0059c352: fld dword ptr [0x929950] */ FPUSH(R_F32((u32)(0x929950u)));
    /* 0059c358: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 0059c35c: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0059c360: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0059c364: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0059c368: lea eax, [ebx + 0x128] */ r_eax = (u32)(r_ebx+0x128u);
    /* 0059c36e: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0059c372: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 0059c376: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c37c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c37d: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x59c382u); f_007806dc();
    /* 0059c382: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c387: jne 0x59c39e */ if (!fZ) goto L_0059c39e;
L_0059c389:; BB(0x0059c389);
    /* 0059c389: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0059c38d: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0059c391: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0059c394: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0059c398: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 0059c39b: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
L_0059c39e:; BB(0x0059c39e);
    /* 0059c39e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059c3a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c3a2: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59c3a8u); call_ind(t); }
    /* 0059c3a8: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0059c3ab: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0059c3ae: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 0059c3b1: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0059c3b4: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 0059c3b7: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 0059c3ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c3bc: call 0x59c744 */ r_esp -= 4; W32(r_esp, 0x59c3c1u); f_0059c744();
    /* 0059c3c1: mov eax, dword ptr [ebx + 0x3f8] */ r_eax = R32((u32)(r_ebx+0x3f8u));
    /* 0059c3c7: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c3cc: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0059c3cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c3d1: call 0x59c770 */ r_esp -= 4; W32(r_esp, 0x59c3d6u); f_0059c770();
    /* 0059c3d6: mov eax, dword ptr [ebx + 0x3f8] */ r_eax = R32((u32)(r_ebx+0x3f8u));
    /* 0059c3dc: add eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c3e1: mov dword ptr [ebx + 0x3f8], eax */ W32((u32)(r_ebx+0x3f8u), r_eax);
    /* 0059c3e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c3e9: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x59c3eeu); f_0051ffdc();
    /* 0059c3ee: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0059c3f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059c3f3: mov esi, eax */ r_esi = r_eax;
L_0059c3f5:; BB(0x0059c3f5);
    /* 0059c3f5: movzx edx, word ptr [ebx + esi*2 + 0x3ec] */ r_edx = (u32)R16((u32)(r_ebx+r_esi*2+0x3ecu));
    /* 0059c3fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c3fe: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59c403u); f_007b4d18();
    /* 0059c403: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c406: je 0x59c40f */ if (fZ) goto L_0059c40f;
L_0059c408:; BB(0x0059c408);
    /* 0059c408: mov ecx, eax */ r_ecx = r_eax;
    /* 0059c40a: call 0x59acb8 */ r_esp -= 4; W32(r_esp, 0x59c40fu); f_0059acb8();
L_0059c40f:; BB(0x0059c40f);
    /* 0059c40f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059c412: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c415: jl 0x59c3f5 */ if ((fS!=fO)) goto L_0059c3f5;
L_0059c417:; BB(0x0059c417);
    /* 0059c417: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0059c41a:; BB(0x0059c41a);
    /* 0059c41a: mov dword ptr [ebx + 0x4ec], 4 */ W32((u32)(r_ebx+0x4ecu), 0x4u);
    /* 0059c424: jmp 0x59c464 */ goto L_0059c464;
L_0059c426:; BB(0x0059c426);
    /* 0059c426: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c427: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c429: call 0x59c7f0 */ r_esp -= 4; W32(r_esp, 0x59c42eu); f_0059c7f0();
    /* 0059c42e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c430: je 0x59c444 */ if (fZ) goto L_0059c444;
L_0059c432:; BB(0x0059c432);
    /* 0059c432: mov dword ptr [ebx + 0x4ec], 2 */ W32((u32)(r_ebx+0x4ecu), 0x2u);
    /* 0059c43c: mov dword ptr [ebx + 0x398], ebx */ W32((u32)(r_ebx+0x398u), r_ebx);
    /* 0059c442: jmp 0x59c464 */ goto L_0059c464;
L_0059c444:; BB(0x0059c444);
    /* 0059c444: mov dword ptr [ebx + 0x4ec], 1 */ W32((u32)(r_ebx+0x4ecu), 0x1u);
    /* 0059c44e: jmp 0x59c464 */ goto L_0059c464;
L_0059c450:; BB(0x0059c450);
    /* 0059c450: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 0059c456: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c459: jne 0x59c464 */ if (!fZ) goto L_0059c464;
L_0059c45b:; BB(0x0059c45b);
    /* 0059c45b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c45d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c45f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59c464u); f_0051f62c();
L_0059c464:; BB(0x0059c464);
    /* 0059c464: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059c467: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059c468: ret 4 */ FN_RET(0x0059c1a0); r_esp += 8; return;
L_0059c46b:; BB(0x0059c46b);
    /* 0059c46b: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0059c46e: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0059c471: mov dword ptr [ebx + 0x39c], eax */ W32((u32)(r_ebx+0x39cu), r_eax);
    /* 0059c477: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0059c47a: mov dword ptr [ebx + 0x3a0], edx */ W32((u32)(r_ebx+0x3a0u), r_edx);
    /* 0059c480: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0059c486: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c488: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x59c48du); f_005213d8();
    /* 0059c48d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c48f: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x59c494u); f_00521410();
    /* 0059c494: mov ecx, dword ptr [ebx + 0x3f8] */ r_ecx = R32((u32)(r_ebx+0x3f8u));
    /* 0059c49a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x59c49fu); f_0082dcbc();
    /* 0059c49f: fld dword ptr [0x929958] */ FPUSH(R_F32((u32)(0x929958u)));
    /* 0059c4a5: mov ecx, dword ptr [ebx + 0x3f8] */ r_ecx = R32((u32)(r_ebx+0x3f8u));
    /* 0059c4ab: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059c4ad: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0059c4b1: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0059c4b9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x59c4beu); f_0082ddd8();
    /* 0059c4be: fld dword ptr [0x929958] */ FPUSH(R_F32((u32)(0x929958u)));
    /* 0059c4c4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059c4c6: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0059c4ca: lea edx, [ebx + 0x39c] */ r_edx = (u32)(r_ebx+0x39cu);
    /* 0059c4d0: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0059c4d4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x59c4d9u); f_0082ebac();
    /* 0059c4d9: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0059c4dd: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0059c4e0: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x59c4e5u); f_0082f9c4();
    /* 0059c4e5: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0059c4e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c4ea: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x59c4efu); f_007828e4();
    /* 0059c4ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c4f0: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c4f3: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0059c4f7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0059c4fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c4fd: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0059c501: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059c504: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0059c508: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059c50c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059c510: call 0x520a04 */ r_esp -= 4; W32(r_esp, 0x59c515u); f_00520a04();
    /* 0059c515: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0059c519: fld dword ptr [0x929950] */ FPUSH(R_F32((u32)(0x929950u)));
    /* 0059c51f: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 0059c523: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0059c527: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0059c52b: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0059c52f: lea eax, [ebx + 0x128] */ r_eax = (u32)(r_ebx+0x128u);
    /* 0059c535: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0059c539: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0059c53d: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c542: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c543: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c544: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x59c549u); f_007806dc();
    /* 0059c549: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c54c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c54e: jne 0x59c565 */ if (!fZ) goto L_0059c565;
L_0059c550:; BB(0x0059c550);
    /* 0059c550: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0059c554: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0059c558: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0059c55b: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0059c55f: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 0059c562: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
L_0059c565:; BB(0x0059c565);
    /* 0059c565: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059c567: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c569: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59c56fu); call_ind(t); }
    /* 0059c56f: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0059c572: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0059c575: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 0059c578: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0059c57b: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 0059c57e: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 0059c581: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c583: call 0x59c744 */ r_esp -= 4; W32(r_esp, 0x59c588u); f_0059c744();
    /* 0059c588: mov eax, dword ptr [ebx + 0x3f8] */ r_eax = R32((u32)(r_ebx+0x3f8u));
    /* 0059c58e: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c593: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0059c596: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c598: call 0x59c770 */ r_esp -= 4; W32(r_esp, 0x59c59du); f_0059c770();
    /* 0059c59d: mov eax, dword ptr [ebx + 0x3f8] */ r_eax = R32((u32)(r_ebx+0x3f8u));
    /* 0059c5a3: add eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c5a8: mov dword ptr [ebx + 0x3f8], eax */ W32((u32)(r_ebx+0x3f8u), r_eax);
    /* 0059c5ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c5b0: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x59c5b5u); f_0051ffdc();
    /* 0059c5b5: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0059c5b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059c5ba: mov esi, eax */ r_esi = r_eax;
L_0059c5bc:; BB(0x0059c5bc);
    /* 0059c5bc: movzx edx, word ptr [ebx + esi*2 + 0x3ec] */ r_edx = (u32)R16((u32)(r_ebx+r_esi*2+0x3ecu));
    /* 0059c5c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5c5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59c5cau); f_007b4d18();
    /* 0059c5ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c5cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c5cd: je 0x59c5d6 */ if (fZ) goto L_0059c5d6;
L_0059c5cf:; BB(0x0059c5cf);
    /* 0059c5cf: mov ecx, eax */ r_ecx = r_eax;
    /* 0059c5d1: call 0x59acb8 */ r_esp -= 4; W32(r_esp, 0x59c5d6u); f_0059acb8();
L_0059c5d6:; BB(0x0059c5d6);
    /* 0059c5d6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059c5d9: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c5dc: jl 0x59c5bc */ if ((fS!=fO)) goto L_0059c5bc;
L_0059c5de:; BB(0x0059c5de);
    /* 0059c5de: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0059c5e1: jmp 0x59c41a */ goto L_0059c41a;
L_0059c5e6:; BB(0x0059c5e6);
    /* 0059c5e6: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0059c5ec: mov dword ptr [ebx + 0x4f4], 0 */ W32((u32)(r_ebx+0x4f4u), 0x0u);
    /* 0059c5f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059c5f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059c5fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0059c5fc: jle 0x59c6ba */ if ((fZ||fS!=fO)) goto L_0059c6ba;
L_0059c602:; BB(0x0059c602);
    /* 0059c602: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0059c606: mov ebx, eax */ r_ebx = r_eax;
    /* 0059c608: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0059c60b: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0059c60f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0059c613: mov ebp, edx */ r_ebp = r_edx;
    /* 0059c615: mov esi, ecx */ r_esi = r_ecx;
L_0059c617:; BB(0x0059c617);
    /* 0059c617: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0059c61e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c61f: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x59c624u); f_00520f3c();
    /* 0059c624: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c625: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c627: je 0x59c68b */ if (fZ) goto L_0059c68b;
L_0059c629:; BB(0x0059c629);
    /* 0059c629: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c62a: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0059c62e: call 0x59c7f0 */ r_esp -= 4; W32(r_esp, 0x59c633u); f_0059c7f0();
    /* 0059c633: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c635: je 0x59c68b */ if (fZ) goto L_0059c68b;
L_0059c637:; BB(0x0059c637);
    /* 0059c637: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0059c63b: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0059c63e: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0059c641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c642: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c643: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x59c648u); f_007a9180();
    /* 0059c648: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c64b: fcom dword ptr [0xa746b4] */ fx_compare(ST(0), R_F32((u32)(0xa746b4u))); 
    /* 0059c651: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059c653: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059c654: ja 0x59c73d */ if ((!fC&&!fZ)) goto L_0059c73d;
L_0059c65a:; BB(0x0059c65a);
    /* 0059c65a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0059c65e: fcom dword ptr [edx + 0x4f4] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x4f4u))); 
    /* 0059c664: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059c666: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059c667: ja 0x59c66d */ if ((!fC&&!fZ)) goto L_0059c66d;
L_0059c669:; BB(0x0059c669);
    /* 0059c669: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059c66b: jmp 0x59c68b */ goto L_0059c68b;
L_0059c66d:; BB(0x0059c66d);
    /* 0059c66d: fstp dword ptr [edx + 0x4f4] */ W_F32((u32)(r_edx+0x4f4u), ST(0)); FPOP();
    /* 0059c673: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0059c677: mov word ptr [edx + 0x394], ax */ W16((u32)(r_edx+0x394u), (u16)r_eax);
    /* 0059c67e: mov dword ptr [edx + 0x398], edi */ W32((u32)(r_edx+0x398u), r_edi);
    /* 0059c684: mov edi, 1 */ r_edi = 0x1u;
    /* 0059c689: jmp 0x59c68d */ goto L_0059c68d;
L_0059c68b:; BB(0x0059c68b);
    /* 0059c68b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0059c68d:; BB(0x0059c68d);
    /* 0059c68d: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0059c68f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0059c692: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c694: jl 0x59c617 */ if ((fS!=fO)) goto L_0059c617;
L_0059c696:; BB(0x0059c696);
    /* 0059c696: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0059c699: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0059c69d: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0059c6a1: mov eax, ebx */ r_eax = r_ebx;
    /* 0059c6a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c6a5: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0059c6a9: je 0x59c6ba */ if (fZ) goto L_0059c6ba;
L_0059c6ab:; BB(0x0059c6ab);
    /* 0059c6ab: mov dword ptr [ebx + 0x4ec], 2 */ W32((u32)(r_ebx+0x4ecu), 0x2u);
    /* 0059c6b5: jmp 0x59c464 */ goto L_0059c464;
L_0059c6ba:; BB(0x0059c6ba);
    /* 0059c6ba: mov dword ptr [ebx + 0x4ec], 0 */ W32((u32)(r_ebx+0x4ecu), 0x0u);
    /* 0059c6c4: jmp 0x59c464 */ goto L_0059c464;
L_0059c6c9:; BB(0x0059c6c9);
    /* 0059c6c9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c6cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c6cd: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59c6d2u); f_0051f664();
    /* 0059c6d2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059c6d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c6d6: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x59c6dcu); call_ind(t); }
    /* 0059c6dc: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 0059c6e2: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059c6e5: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 0059c6eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c6ed: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x59c6f2u); f_00520f68();
    /* 0059c6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c6f4: call 0x521788 */ r_esp -= 4; W32(r_esp, 0x59c6f9u); f_00521788();
    /* 0059c6f9: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059c6fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c6fd: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x59c703u); call_ind(t); }
    /* 0059c703: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c705: je 0x59c713 */ if (fZ) goto L_0059c713;
L_0059c707:; BB(0x0059c707);
    /* 0059c707: mov dword ptr [ebx + 0x4ec], 3 */ W32((u32)(r_ebx+0x4ecu), 0x3u);
    /* 0059c711: jmp 0x59c71d */ goto L_0059c71d;
L_0059c713:; BB(0x0059c713);
    /* 0059c713: mov dword ptr [ebx + 0x4ec], 0 */ W32((u32)(r_ebx+0x4ecu), 0x0u);
L_0059c71d:; BB(0x0059c71d);
    /* 0059c71d: mov dword ptr [ebx + 0x4f0], 0 */ W32((u32)(r_ebx+0x4f0u), 0x0u);
    /* 0059c727: mov dword ptr [ebx + 0x4f4], 0 */ W32((u32)(r_ebx+0x4f4u), 0x0u);
    /* 0059c731: jmp 0x59c464 */ goto L_0059c464;
L_0059c736:; BB(0x0059c736);
    /* 0059c736: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059c738: jmp 0x59c287 */ goto L_0059c287;
L_0059c73d:; BB(0x0059c73d);
    /* 0059c73d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059c73f: jmp 0x59c68b */ goto L_0059c68b;
}

void f_0059c744(void) /* sub_59C744 */
{
    FN_ENTER(0x0059c744);
    /* 0059c744: fld dword ptr [0x9299d8] */ FPUSH(R_F32((u32)(0x9299d8u)));
    /* 0059c74a: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0059c74d: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0059c750: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0059c753: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 0059c759: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 0059c75c: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0059c762: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0059c768: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0059c76b: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0059c76e: ret  */ FN_RET(0x0059c744); r_esp += 4; return;
}

void f_0059c770(void) /* sub_59C770 */
{
    FN_ENTER(0x0059c770);
    /* 0059c770: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c771: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c772: mov edi, ecx */ r_edi = r_ecx;
    /* 0059c774: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0059c777: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x59c77cu); f_0082ddd8();
    /* 0059c77c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059c77f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0059c782: fmul dword ptr [0x929948] */ ST(0) = ST(0) * R_F32((u32)(0x929948u));
    /* 0059c788: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0059c78b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059c78e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x59c793u); f_0082dcbc();
    /* 0059c793: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0059c796: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0059c799: fld dword ptr [0x929944] */ FPUSH(R_F32((u32)(0x929944u)));
    /* 0059c79f: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 0059c7a2: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0059c7a5: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 0059c7a8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0059c7aa: fst dword ptr [edi + 0x3e4] */ W_F32((u32)(r_edi+0x3e4u), ST(0));
    /* 0059c7b0: fstp dword ptr [edi + 0x3d8] */ W_F32((u32)(r_edi+0x3d8u), ST(0)); FPOP();
    /* 0059c7b6: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0059c7b8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0059c7ba: fstp dword ptr [edi + 0x3e0] */ W_F32((u32)(r_edi+0x3e0u), ST(0)); FPOP();
    /* 0059c7c0: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 0059c7c3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0059c7c5: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0059c7c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059c7c9: fstp dword ptr [edi + 0x3d4] */ W_F32((u32)(r_edi+0x3d4u), ST(0)); FPOP();
    /* 0059c7cf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0059c7d1: fchs  */ ST(0) = -ST(0);
    /* 0059c7d3: fmul dword ptr [0x929948] */ ST(0) = ST(0) * R_F32((u32)(0x929948u));
    /* 0059c7d9: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0059c7db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059c7dd: fstp dword ptr [edi + 0x3e8] */ W_F32((u32)(r_edi+0x3e8u), ST(0)); FPOP();
    /* 0059c7e3: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0059c7e5: fstp dword ptr [edi + 0x3dc] */ W_F32((u32)(r_edi+0x3dcu), ST(0)); FPOP();
    /* 0059c7eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c7ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059c7ed: ret  */ FN_RET(0x0059c770); r_esp += 4; return;
}

void f_0059c7f0(void) /* sub_59C7F0 */
{
    FN_ENTER(0x0059c7f0);
    /* 0059c7f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c7f1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0059c7f5: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x59c7fau); f_00520e6c();
    /* 0059c7fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c7fc: je 0x59c815 */ if (fZ) goto L_0059c815;
L_0059c7fe:; BB(0x0059c7fe);
    /* 0059c7fe: movsx edx, word ptr [ebx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 0059c805: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0059c80c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0059c80e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0059c811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059c812: ret 4 */ FN_RET(0x0059c7f0); r_esp += 8; return;
L_0059c815:; BB(0x0059c815);
    /* 0059c815: movsx eax, word ptr [ebx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 0059c81c: movsx ecx, word ptr [ebx + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0059c823: mov edx, eax */ r_edx = r_eax;
    /* 0059c825: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0059c827: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0059c82a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059c82c: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0059c82f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059c831: jle 0x59c83c */ if ((fZ||fS!=fO)) goto L_0059c83c;
L_0059c833:; BB(0x0059c833);
    /* 0059c833: mov eax, 1 */ r_eax = 0x1u;
    /* 0059c838: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059c839: ret 4 */ FN_RET(0x0059c7f0); r_esp += 8; return;
L_0059c83c:; BB(0x0059c83c);
    /* 0059c83c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059c83e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059c83f: ret 4 */ FN_RET(0x0059c7f0); r_esp += 8; return;
}

void f_0059c844(void) /* sub_59C844 */
{
    FN_ENTER(0x0059c844);
    /* 0059c844: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c845: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c846: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c847: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059c84a: mov edi, ecx */ r_edi = r_ecx;
    /* 0059c84c: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0059c850: movzx eax, word ptr [edi + 0x3ec] */ r_eax = (u32)R16((u32)(r_edi+0x3ecu));
    /* 0059c857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c858: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59c85du); f_007b4d18();
    /* 0059c85d: mov ebx, eax */ r_ebx = r_eax;
    /* 0059c85f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c862: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c865: je 0x59cb0e */ if (fZ) goto L_0059cb0e;
L_0059c86b:; BB(0x0059c86b);
    /* 0059c86b: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c86e: je 0x59c94f */ if (fZ) goto L_0059c94f;
L_0059c874:; BB(0x0059c874);
    /* 0059c874: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c876: jne 0x59c927 */ if (!fZ) goto L_0059c927;
L_0059c87c:; BB(0x0059c87c);
    /* 0059c87c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c87e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59c883u); f_007aa094();
    /* 0059c883: mov esi, dword ptr [edi + 0x4ec] */ r_esi = R32((u32)(r_edi+0x4ecu));
    /* 0059c889: mov edx, dword ptr [edi + 0x4f0] */ r_edx = R32((u32)(r_edi+0x4f0u));
    /* 0059c88f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059c892: mov dword ptr [edi + 0x4ec], esi */ W32((u32)(r_edi+0x4ecu), r_esi);
    /* 0059c898: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c89a: je 0x59c9f7 */ if (fZ) goto L_0059c9f7;
L_0059c8a0:; BB(0x0059c8a0);
    /* 0059c8a0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c8a3: je 0x59c9ac */ if (fZ) goto L_0059c9ac;
L_0059c8a9:; BB(0x0059c8a9);
    /* 0059c8a9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c8ac: jl 0x59c903 */ if ((fS!=fO)) goto L_0059c903;
L_0059c8ae:; BB(0x0059c8ae);
    /* 0059c8ae: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c8b1: jg 0x59c8ef */ if ((!fZ&&fS==fO)) goto L_0059c8ef;
L_0059c8b3:; BB(0x0059c8b3);
    /* 0059c8b3: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0059c8b9: fcomp dword ptr [0x92996c] */ fx_compare(ST(0), R_F32((u32)(0x92996cu))); FPOP();
    /* 0059c8bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059c8c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059c8c2: jb 0x59c8cd */ if (fC) goto L_0059c8cd;
L_0059c8c4:; BB(0x0059c8c4);
    /* 0059c8c4: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c8c7: je 0x59c967 */ if (fZ) goto L_0059c967;
L_0059c8cd:; BB(0x0059c8cd);
    /* 0059c8cd: mov edx, dword ptr [edi + 0xb0] */ r_edx = R32((u32)(r_edi+0xb0u));
    /* 0059c8d3: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059c8d6: je 0x59c903 */ if (fZ) goto L_0059c903;
L_0059c8d8:; BB(0x0059c8d8);
    /* 0059c8d8: mov dword ptr [edi + 0x4f0], 5 */ W32((u32)(r_edi+0x4f0u), 0x5u);
    /* 0059c8e2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c8e4: je 0x59c903 */ if (fZ) goto L_0059c903;
L_0059c8e6:; BB(0x0059c8e6);
    /* 0059c8e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c8e8: call 0x59ac54 */ r_esp -= 4; W32(r_esp, 0x59c8edu); f_0059ac54();
    /* 0059c8ed: jmp 0x59c903 */ goto L_0059c903;
L_0059c8ef:; BB(0x0059c8ef);
    /* 0059c8ef: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c8f2: jne 0x59c903 */ if (!fZ) goto L_0059c903;
L_0059c8f4:; BB(0x0059c8f4);
    /* 0059c8f4: cmp esi, 0x3c */ {  u32 a = r_esi; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c8f7: jl 0x59c903 */ if ((fS!=fO)) goto L_0059c903;
L_0059c8f9:; BB(0x0059c8f9);
    /* 0059c8f9: mov dword ptr [edi + 0x4f0], 5 */ W32((u32)(r_edi+0x4f0u), 0x5u);
L_0059c903:; BB(0x0059c903);
    /* 0059c903: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059c905: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c907: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59c90du); call_ind(t); }
    /* 0059c90d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059c90f: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c911: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x59c917u); call_ind(t); }
    /* 0059c917: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c919: call 0x59bbc0 */ r_esp -= 4; W32(r_esp, 0x59c91eu); f_0059bbc0();
    /* 0059c91e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059c921: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059c922: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059c923: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059c924: ret 4 */ FN_RET(0x0059c844); r_esp += 8; return;
L_0059c927:; BB(0x0059c927);
    /* 0059c927: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c92a: jne 0x59c95e */ if (!fZ) goto L_0059c95e;
L_0059c92c:; BB(0x0059c92c);
    /* 0059c92c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c92e: je 0x59c937 */ if (fZ) goto L_0059c937;
L_0059c930:; BB(0x0059c930);
    /* 0059c930: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c932: call 0x59ac54 */ r_esp -= 4; W32(r_esp, 0x59c937u); f_0059ac54();
L_0059c937:; BB(0x0059c937);
    /* 0059c937: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059c93d: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059c940: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0059c946: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059c949: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059c94a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059c94b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059c94c: ret 4 */ FN_RET(0x0059c844); r_esp += 8; return;
L_0059c94f:; BB(0x0059c94f);
    /* 0059c94f: mov eax, dword ptr [edi + 0x4f0] */ r_eax = R32((u32)(r_edi+0x4f0u));
    /* 0059c955: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c958: je 0x59caee */ if (fZ) goto L_0059caee;
L_0059c95e:; BB(0x0059c95e);
    /* 0059c95e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059c961: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059c962: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059c963: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059c964: ret 4 */ FN_RET(0x0059c844); r_esp += 8; return;
L_0059c967:; BB(0x0059c967);
    /* 0059c967: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c969: je 0x59c974 */ if (fZ) goto L_0059c974;
L_0059c96b:; BB(0x0059c96b);
    /* 0059c96b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c96d: call 0x59ac04 */ r_esp -= 4; W32(r_esp, 0x59c972u); f_0059ac04();
    /* 0059c972: jmp 0x59c979 */ goto L_0059c979;
L_0059c974:; BB(0x0059c974);
    /* 0059c974: mov eax, 3 */ r_eax = 0x3u;
L_0059c979:; BB(0x0059c979);
    /* 0059c979: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c97c: jne 0x59c994 */ if (!fZ) goto L_0059c994;
L_0059c97e:; BB(0x0059c97e);
    /* 0059c97e: mov dword ptr [edi + 0x4f0], 2 */ W32((u32)(r_edi+0x4f0u), 0x2u);
    /* 0059c988: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c98a: call 0x59cb48 */ r_esp -= 4; W32(r_esp, 0x59c98fu); f_0059cb48();
    /* 0059c98f: jmp 0x59c8cd */ goto L_0059c8cd;
L_0059c994:; BB(0x0059c994);
    /* 0059c994: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c997: jne 0x59c8cd */ if (!fZ) goto L_0059c8cd;
L_0059c99d:; BB(0x0059c99d);
    /* 0059c99d: mov dword ptr [edi + 0x4f0], 2 */ W32((u32)(r_edi+0x4f0u), 0x2u);
    /* 0059c9a7: jmp 0x59c8cd */ goto L_0059c8cd;
L_0059c9ac:; BB(0x0059c9ac);
    /* 0059c9ac: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c9ae: je 0x59c9cd */ if (fZ) goto L_0059c9cd;
L_0059c9b0:; BB(0x0059c9b0);
    /* 0059c9b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059c9b2: call 0x59abe8 */ r_esp -= 4; W32(r_esp, 0x59c9b7u); f_0059abe8();
    /* 0059c9b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c9b9: jne 0x59c9c7 */ if (!fZ) goto L_0059c9c7;
L_0059c9bb:; BB(0x0059c9bb);
    /* 0059c9bb: mov dword ptr [edi + 0x4f0], 5 */ W32((u32)(r_edi+0x4f0u), 0x5u);
    /* 0059c9c5: jmp 0x59c9e4 */ goto L_0059c9e4;
L_0059c9c7:; BB(0x0059c9c7);
    /* 0059c9c7: mov esi, dword ptr [edi + 0x4ec] */ r_esi = R32((u32)(r_edi+0x4ecu));
L_0059c9cd:; BB(0x0059c9cd);
    /* 0059c9cd: cmp esi, 0x5a */ {  u32 a = r_esi; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c9d0: jl 0x59c9e4 */ if ((fS!=fO)) goto L_0059c9e4;
L_0059c9d2:; BB(0x0059c9d2);
    /* 0059c9d2: mov eax, 3 */ r_eax = 0x3u;
    /* 0059c9d7: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0059c9de: mov dword ptr [edi + 0x4f0], eax */ W32((u32)(r_edi+0x4f0u), r_eax);
L_0059c9e4:; BB(0x0059c9e4);
    /* 0059c9e4: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c9e6: call 0x59cfac */ r_esp -= 4; W32(r_esp, 0x59c9ebu); f_0059cfac();
    /* 0059c9eb: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c9ed: call 0x59d010 */ r_esp -= 4; W32(r_esp, 0x59c9f2u); f_0059d010();
    /* 0059c9f2: jmp 0x59c903 */ goto L_0059c903;
L_0059c9f7:; BB(0x0059c9f7);
    /* 0059c9f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c9f9: je 0x59cac9 */ if (fZ) goto L_0059cac9;
L_0059c9ff:; BB(0x0059c9ff);
    /* 0059c9ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059ca01: call 0x59abe8 */ r_esp -= 4; W32(r_esp, 0x59ca06u); f_0059abe8();
    /* 0059ca06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ca08: jne 0x59ca15 */ if (!fZ) goto L_0059ca15;
L_0059ca0a:; BB(0x0059ca0a);
    /* 0059ca0a: mov esi, dword ptr [edi + 0x4ec] */ r_esi = R32((u32)(r_edi+0x4ecu));
    /* 0059ca10: jmp 0x59cac9 */ goto L_0059cac9;
L_0059ca15:; BB(0x0059ca15);
    /* 0059ca15: mov dword ptr [edi + 0x4ec], 0 */ W32((u32)(r_edi+0x4ecu), 0x0u);
    /* 0059ca1f: mov eax, dword ptr [0xa746b8] */ r_eax = R32((u32)(0xa746b8u));
    /* 0059ca24: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ca26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ca27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ca28: call 0x59ccec */ r_esp -= 4; W32(r_esp, 0x59ca2du); f_0059ccec();
    /* 0059ca2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ca2f: jne 0x59ca40 */ if (!fZ) goto L_0059ca40;
L_0059ca31:; BB(0x0059ca31);
    /* 0059ca31: mov dword ptr [edi + 0x4f0], 4 */ W32((u32)(r_edi+0x4f0u), 0x4u);
    /* 0059ca3b: jmp 0x59cadb */ goto L_0059cadb;
L_0059ca40:; BB(0x0059ca40);
    /* 0059ca40: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ca42: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x59ca47u); f_005213d8();
    /* 0059ca47: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ca49: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x59ca4eu); f_00521410();
    /* 0059ca4e: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 0059ca54: fcomp dword ptr [0x929940] */ fx_compare(ST(0), R_F32((u32)(0x929940u))); FPOP();
    /* 0059ca5a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059ca5c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059ca5d: jb 0x59ca6b */ if (fC) goto L_0059ca6b;
L_0059ca5f:; BB(0x0059ca5f);
    /* 0059ca5f: mov dword ptr [edi + 0x4f0], 4 */ W32((u32)(r_edi+0x4f0u), 0x4u);
    /* 0059ca69: jmp 0x59ca93 */ goto L_0059ca93;
L_0059ca6b:; BB(0x0059ca6b);
    /* 0059ca6b: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0059ca71: mov eax, 1 */ r_eax = 0x1u;
    /* 0059ca76: mov dword ptr [edi + 0x4f0], eax */ W32((u32)(r_edi+0x4f0u), r_eax);
    /* 0059ca7c: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0059ca83: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059ca86: mov dword ptr [edi + 0x3d0], edx */ W32((u32)(r_edi+0x3d0u), r_edx);
    /* 0059ca8c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ca8e: call 0x59cf68 */ r_esp -= 4; W32(r_esp, 0x59ca93u); f_0059cf68();
L_0059ca93:; BB(0x0059ca93);
    /* 0059ca93: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0059ca99: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0059ca9f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0059caa1: fmul qword ptr [0x9298d8] */ ST(0) = ST(0) * R_F64((u32)(0x9298d8u));
    /* 0059caa7: fdiv qword ptr [0x9298d0] */ ST(0) = ST(0) / R_F64((u32)(0x9298d0u));
    /* 0059caad: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0059cab0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0059cab4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059cab9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059cabd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0059cac1: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0059cac4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0059cac7: jmp 0x59cadb */ goto L_0059cadb;
L_0059cac9:; BB(0x0059cac9);
    /* 0059cac9: cmp esi, 0xf0 */ {  u32 a = r_esi; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059cacf: jl 0x59cadb */ if ((fS!=fO)) goto L_0059cadb;
L_0059cad1:; BB(0x0059cad1);
    /* 0059cad1: mov dword ptr [edi + 0x4f0], 5 */ W32((u32)(r_edi+0x4f0u), 0x5u);
L_0059cadb:; BB(0x0059cadb);
    /* 0059cadb: mov ecx, edi */ r_ecx = r_edi;
    /* 0059cadd: call 0x59cfac */ r_esp -= 4; W32(r_esp, 0x59cae2u); f_0059cfac();
    /* 0059cae2: mov ecx, edi */ r_ecx = r_edi;
    /* 0059cae4: call 0x59d010 */ r_esp -= 4; W32(r_esp, 0x59cae9u); f_0059d010();
    /* 0059cae9: jmp 0x59c903 */ goto L_0059c903;
L_0059caee:; BB(0x0059caee);
    /* 0059caee: mov ecx, edi */ r_ecx = r_edi;
    /* 0059caf0: call 0x59c180 */ r_esp -= 4; W32(r_esp, 0x59caf5u); f_0059c180();
    /* 0059caf5: add dword ptr [edi + 0x3f4], 1 */ { u32 ad = (u32)(r_edi+0x3f4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0059cafc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cafe: mov ecx, edi */ r_ecx = r_edi;
    /* 0059cb00: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59cb05u); f_0051f62c();
    /* 0059cb05: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059cb08: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059cb09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059cb0a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059cb0b: ret 4 */ FN_RET(0x0059c844); r_esp += 8; return;
L_0059cb0e:; BB(0x0059cb0e);
    /* 0059cb0e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059cb12: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0059cb19: mov ecx, edi */ r_ecx = r_edi;
    /* 0059cb1b: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59cb20u); f_0051f664();
    /* 0059cb20: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059cb26: or eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059cb29: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0059cb2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059cb31: mov dword ptr [edi + 0x4ec], edx */ W32((u32)(r_edi+0x4ecu), r_edx);
    /* 0059cb37: mov dword ptr [edi + 0x4f0], edx */ W32((u32)(r_edi+0x4f0u), r_edx);
    /* 0059cb3d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059cb40: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059cb41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059cb42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059cb43: ret 4 */ FN_RET(0x0059c844); r_esp += 8; return;
}

void f_0059cb48(void) /* sub_59CB48 */
{
    FN_ENTER(0x0059cb48);
    /* 0059cb48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb4b: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059cb4e: mov edi, ecx */ r_edi = r_ecx;
    /* 0059cb50: push dword ptr [edi + 0x398] */ { u32 v = R32((u32)(r_edi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059cb56: mov ecx, edi */ r_ecx = r_edi;
    /* 0059cb58: call 0x5212c8 */ r_esp -= 4; W32(r_esp, 0x59cb5du); f_005212c8();
    /* 0059cb5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cb5f: je 0x59ccc8 */ if (fZ) goto L_0059ccc8;
L_0059cb65:; BB(0x0059cb65);
    /* 0059cb65: movzx eax, word ptr [edi + 0x3ec] */ r_eax = (u32)R16((u32)(r_edi+0x3ecu));
    /* 0059cb6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb6d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59cb72u); f_007b4d18();
    /* 0059cb72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059cb73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cb75: je 0x59cb82 */ if (fZ) goto L_0059cb82;
L_0059cb77:; BB(0x0059cb77);
    /* 0059cb77: mov ecx, eax */ r_ecx = r_eax;
    /* 0059cb79: call 0x5601e8 */ r_esp -= 4; W32(r_esp, 0x59cb7eu); f_005601e8();
    /* 0059cb7e: mov esi, eax */ r_esi = r_eax;
    /* 0059cb80: jmp 0x59cb85 */ goto L_0059cb85;
L_0059cb82:; BB(0x0059cb82);
    /* 0059cb82: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
L_0059cb85:; BB(0x0059cb85);
    /* 0059cb85: mov ebp, dword ptr [edi + 0x3f0] */ r_ebp = R32((u32)(r_edi+0x3f0u));
    /* 0059cb8b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cb8d: jne 0x59cc0c */ if (!fZ) goto L_0059cc0c;
L_0059cb8f:; BB(0x0059cb8f);
    /* 0059cb8f: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0059cb95: mov dword ptr [edi + 0x420], 1 */ W32((u32)(r_edi+0x420u), 0x1u);
    /* 0059cb9f: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0059cba3: lea ebp, [edi + 0x420] */ r_ebp = (u32)(r_edi+0x420u);
    /* 0059cba9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059cbab: mov word ptr [edi + 0x424], ax */ W16((u32)(r_edi+0x424u), (u16)r_eax);
    /* 0059cbb2: mov word ptr [edi + 0x426], dx */ W16((u32)(r_edi+0x426u), (u16)r_edx);
    /* 0059cbb9: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x59cbbeu); f_00520e6c();
    /* 0059cbbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cbc0: je 0x59cbe0 */ if (fZ) goto L_0059cbe0;
L_0059cbc2:; BB(0x0059cbc2);
    /* 0059cbc2: mov eax, dword ptr [0xa746e8] */ r_eax = R32((u32)(0xa746e8u));
    /* 0059cbc7: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059cbca: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59cbcfu); f_00520e3c();
    /* 0059cbcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbd2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbd3: call 0x6e6bf4 */ r_esp -= 4; W32(r_esp, 0x59cbd8u); f_006e6bf4();
    /* 0059cbd8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cbdb: jmp 0x59ccbc */ goto L_0059ccbc;
L_0059cbe0:; BB(0x0059cbe0);
    /* 0059cbe0: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0059cbe5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cbe8: je 0x59ccd1 */ if (fZ) goto L_0059ccd1;
L_0059cbee:; BB(0x0059cbee);
    /* 0059cbee: mov eax, dword ptr [0xa746e8] */ r_eax = R32((u32)(0xa746e8u));
    /* 0059cbf3: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059cbf6: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59cbfbu); f_00520e3c();
    /* 0059cbfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbfe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbff: call 0x6ed368 */ r_esp -= 4; W32(r_esp, 0x59cc04u); f_006ed368();
    /* 0059cc04: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cc07: jmp 0x59ccbc */ goto L_0059ccbc;
L_0059cc0c:; BB(0x0059cc0c);
    /* 0059cc0c: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x59cc11u); f_00520e6c();
    /* 0059cc11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cc13: je 0x59cc3d */ if (fZ) goto L_0059cc3d;
L_0059cc15:; BB(0x0059cc15);
    /* 0059cc15: mov ebp, dword ptr [0xa746e8] */ r_ebp = R32((u32)(0xa746e8u));
    /* 0059cc1b: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059cc1e: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59cc23u); f_00520e3c();
    /* 0059cc23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cc24: mov ebp, dword ptr [edi + 0x398] */ r_ebp = R32((u32)(r_edi+0x398u));
    /* 0059cc2a: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0059cc2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059cc2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cc2f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cc30: call 0x6e9e14 */ r_esp -= 4; W32(r_esp, 0x59cc35u); f_006e9e14();
    /* 0059cc35: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cc38: jmp 0x59ccbc */ goto L_0059ccbc;
L_0059cc3d:; BB(0x0059cc3d);
    /* 0059cc3d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0059cc40: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0059cc46: mov ebp, dword ptr [eax + 0x38] */ r_ebp = R32((u32)(r_eax+0x38u));
    /* 0059cc49: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0059cc4c: mov ebp, dword ptr [eax + 0x3c] */ r_ebp = R32((u32)(r_eax+0x3cu));
    /* 0059cc4f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0059cc53: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
    /* 0059cc56: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0059cc5a: mov edx, esi */ r_edx = r_esi;
    /* 0059cc5c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x59cc61u); f_0082f9c4();
    /* 0059cc61: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0059cc64: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0059cc68: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0059cc6a: mov ebp, dword ptr [0xa746e8] */ r_ebp = R32((u32)(0xa746e8u));
    /* 0059cc70: fstp qword ptr [esp + 0x24] */ W_F64((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0059cc74: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059cc77: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59cc7cu); f_00520e3c();
    /* 0059cc7c: mov edx, eax */ r_edx = r_eax;
    /* 0059cc7e: fld qword ptr [esp + 0x28] */ FPUSH(R_F64((u32)(r_esp+0x28u)));
    /* 0059cc82: fmul qword ptr [0x9298c8] */ ST(0) = ST(0) * R_F64((u32)(0x9298c8u));
    /* 0059cc88: fdiv qword ptr [0x9298c0] */ ST(0) = ST(0) / R_F64((u32)(0x9298c0u));
    /* 0059cc8e: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0059cc92: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0059cc97: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059cc9c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0059cca0: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0059cca4: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0059cca8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0059ccac: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0059ccb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ccb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ccb2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ccb3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ccb4: call 0x6e38e0 */ r_esp -= 4; W32(r_esp, 0x59ccb9u); f_006e38e0();
    /* 0059ccb9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059ccbc:; BB(0x0059ccbc);
    /* 0059ccbc: mov eax, 1 */ r_eax = 0x1u;
    /* 0059ccc1: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059ccc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ccc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ccc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ccc7: ret  */ FN_RET(0x0059cb48); r_esp += 4; return;
L_0059ccc8:; BB(0x0059ccc8);
    /* 0059ccc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059ccca: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059cccd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ccce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059cccf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ccd0: ret  */ FN_RET(0x0059cb48); r_esp += 4; return;
L_0059ccd1:; BB(0x0059ccd1);
    /* 0059ccd1: mov eax, dword ptr [0xa746e8] */ r_eax = R32((u32)(0xa746e8u));
    /* 0059ccd6: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059ccd9: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59ccdeu); f_00520e3c();
    /* 0059ccde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ccdf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059cce0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cce1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cce2: call 0x6e54a8 */ r_esp -= 4; W32(r_esp, 0x59cce7u); f_006e54a8();
    /* 0059cce7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ccea: jmp 0x59ccbc */ goto L_0059ccbc;
}

void f_0059ccec(void) /* sub_59CCEC */
{
    FN_ENTER(0x0059ccec);
    /* 0059ccec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cced: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ccee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ccef: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059ccf2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059ccf4: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0059ccf8: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0059ccfc: mov eax, dword ptr [ebx + 0x3b8] */ r_eax = R32((u32)(r_ebx+0x3b8u));
    /* 0059cd02: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059cd04: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059cd07: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0059cd0b: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059cd0e: jl 0x59cf12 */ if ((fS!=fO)) goto L_0059cf12;
L_0059cd14:; BB(0x0059cd14);
    /* 0059cd14: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059cd16: mov dword ptr [ebx + 0x3b8], 0 */ W32((u32)(r_ebx+0x3b8u), 0x0u);
    /* 0059cd20: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059cd22: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x59cd28u); call_ind(t); }
    /* 0059cd28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cd2a: je 0x59ce16 */ if (fZ) goto L_0059ce16;
L_0059cd30:; BB(0x0059cd30);
    /* 0059cd30: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0059cd34: movzx eax, word ptr [ebx + 0x3ec] */ r_eax = (u32)R16((u32)(r_ebx+0x3ecu));
    /* 0059cd3b: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0059cd3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cd40: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 0059cd45: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59cd4au); f_007b4d18();
    /* 0059cd4a: mov esi, eax */ r_esi = r_eax;
    /* 0059cd4c: movzx edx, word ptr [ebx + 0x3ee] */ r_edx = (u32)R16((u32)(r_ebx+0x3eeu));
    /* 0059cd53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cd54: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59cd59u); f_007b4d18();
    /* 0059cd59: mov ecx, eax */ r_ecx = r_eax;
    /* 0059cd5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cd5e: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0059cd64: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 0059cd69: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059cd6b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059cd6d: jge 0x59ce00 */ if ((fS==fO)) goto L_0059ce00;
L_0059cd73:; BB(0x0059cd73);
    /* 0059cd73: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0059cd77: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0059cd7b: mov esi, eax */ r_esi = r_eax;
    /* 0059cd7d: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0059cd81: mov edi, edx */ r_edi = r_edx;
    /* 0059cd83: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_0059cd87:; BB(0x0059cd87);
    /* 0059cd87: mov ebp, dword ptr [edi*4 + 0xaad720] */ r_ebp = R32((u32)(r_edi*4+0xaad720u));
    /* 0059cd8e: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cd90: je 0x59cdf1 */ if (fZ) goto L_0059cdf1;
L_0059cd92:; BB(0x0059cd92);
    /* 0059cd92: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0059cd96: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cd98: je 0x59cdf1 */ if (fZ) goto L_0059cdf1;
L_0059cd9a:; BB(0x0059cd9a);
    /* 0059cd9a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0059cd9e: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cda0: je 0x59cdf1 */ if (fZ) goto L_0059cdf1;
L_0059cda2:; BB(0x0059cda2);
    /* 0059cda2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059cda3: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x59cda8u); f_00520f3c();
    /* 0059cda8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059cda9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cdab: je 0x59cdf1 */ if (fZ) goto L_0059cdf1;
L_0059cdad:; BB(0x0059cdad);
    /* 0059cdad: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0059cdb3: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0059cdb7: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0059cdba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cdbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cdbc: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x59cdc1u); f_007a9180();
    /* 0059cdc1: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0059cdc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cdc8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0059cdcc: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 0059cdd0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059cdd2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059cdd3: jae 0x59cdf1 */ if (!fC) goto L_0059cdf1;
L_0059cdd5:; BB(0x0059cdd5);
    /* 0059cdd5: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0059cddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cddc: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059cde0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cde1: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x59cde6u); f_00780d3c();
    /* 0059cde6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cde9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cdeb: je 0x59cf46 */ if (fZ) goto L_0059cf46;
L_0059cdf1:; BB(0x0059cdf1);
    /* 0059cdf1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059cdf4: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059cdf6: jl 0x59cd87 */ if ((fS!=fO)) goto L_0059cd87;
L_0059cdf8:; BB(0x0059cdf8);
    /* 0059cdf8: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0059cdfc: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_0059ce00:; BB(0x0059ce00);
    /* 0059ce00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce01: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059ce03: call 0x520fa8 */ r_esp -= 4; W32(r_esp, 0x59ce08u); f_00520fa8();
    /* 0059ce08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ce0a: je 0x59ce16 */ if (fZ) goto L_0059ce16;
L_0059ce0c:; BB(0x0059ce0c);
    /* 0059ce0c: mov eax, 1 */ r_eax = 0x1u;
    /* 0059ce11: jmp 0x59cf09 */ goto L_0059cf09;
L_0059ce16:; BB(0x0059ce16);
    /* 0059ce16: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 0059ce1c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0059ce21: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0059ce23: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0059ce28: mov esi, 0 */ r_esi = 0x0u;
    /* 0059ce2d: jle 0x59cede */ if ((fZ||fS!=fO)) goto L_0059cede;
L_0059ce33:; BB(0x0059ce33);
    /* 0059ce33: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0059ce37: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0059ce3b: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_0059ce3f:; BB(0x0059ce3f);
    /* 0059ce3f: mov ebp, dword ptr [esi*4 + 0xaad720] */ r_ebp = R32((u32)(r_esi*4+0xaad720u));
    /* 0059ce46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce47: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x59ce4cu); f_00520f3c();
    /* 0059ce4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ce4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ce4f: je 0x59cec7 */ if (fZ) goto L_0059cec7;
L_0059ce51:; BB(0x0059ce51);
    /* 0059ce51: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0059ce57: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0059ce5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce5f: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x59ce64u); f_007a9180();
    /* 0059ce64: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0059ce68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce69: call 0x51f8e8 */ r_esp -= 4; W32(r_esp, 0x59ce6eu); f_0051f8e8();
    /* 0059ce6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ce71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ce73: je 0x59ce9e */ if (fZ) goto L_0059ce9e;
L_0059ce75:; BB(0x0059ce75);
    /* 0059ce75: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0059ce79: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 0059ce7c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059ce7e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059ce7f: jae 0x59cec7 */ if (!fC) goto L_0059cec7;
L_0059ce81:; BB(0x0059ce81);
    /* 0059ce81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce82: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059ce84: call 0x5212c8 */ r_esp -= 4; W32(r_esp, 0x59ce89u); f_005212c8();
    /* 0059ce89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ce8b: je 0x59cec7 */ if (fZ) goto L_0059cec7;
L_0059ce8d:; BB(0x0059ce8d);
    /* 0059ce8d: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0059ce91: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0059ce95: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059ce98: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0059ce9c: jmp 0x59cec7 */ goto L_0059cec7;
L_0059ce9e:; BB(0x0059ce9e);
    /* 0059ce9e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0059cea2: fcomp dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); FPOP();
    /* 0059cea6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059cea8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059cea9: jae 0x59cec7 */ if (!fC) goto L_0059cec7;
L_0059ceab:; BB(0x0059ceab);
    /* 0059ceab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ceac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059ceae: call 0x5212c8 */ r_esp -= 4; W32(r_esp, 0x59ceb3u); f_005212c8();
    /* 0059ceb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ceb5: je 0x59cec7 */ if (fZ) goto L_0059cec7;
L_0059ceb7:; BB(0x0059ceb7);
    /* 0059ceb7: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0059cebb: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0059cebf: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0059cec3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
L_0059cec7:; BB(0x0059cec7);
    /* 0059cec7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059ceca: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059cecc: jl 0x59ce3f */ if ((fS!=fO)) goto L_0059ce3f;
L_0059ced2:; BB(0x0059ced2);
    /* 0059ced2: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0059ced6: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0059ceda: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_0059cede:; BB(0x0059cede);
    /* 0059cede: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cee3: je 0x59cef4 */ if (fZ) goto L_0059cef4;
L_0059cee5:; BB(0x0059cee5);
    /* 0059cee5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cee6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059cee8: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x59ceedu); f_00520fcc();
    /* 0059ceed: mov eax, 1 */ r_eax = 0x1u;
    /* 0059cef2: jmp 0x59cf09 */ goto L_0059cf09;
L_0059cef4:; BB(0x0059cef4);
    /* 0059cef4: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cefa: je 0x59cf5b */ if (fZ) goto L_0059cf5b;
L_0059cefc:; BB(0x0059cefc);
    /* 0059cefc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cefd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059ceff: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x59cf04u); f_00520fcc();
    /* 0059cf04: mov eax, 1 */ r_eax = 0x1u;
L_0059cf09:; BB(0x0059cf09);
    /* 0059cf09: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059cf0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059cf0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059cf0e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059cf0f: ret 8 */ FN_RET(0x0059ccec); r_esp += 12; return;
L_0059cf12:; BB(0x0059cf12);
    /* 0059cf12: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059cf15: mov dword ptr [ebx + 0x3b8], eax */ W32((u32)(r_ebx+0x3b8u), r_eax);
    /* 0059cf1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059cf1d: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x59cf22u); f_00520f04();
    /* 0059cf22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cf24: je 0x59cf34 */ if (fZ) goto L_0059cf34;
L_0059cf26:; BB(0x0059cf26);
    /* 0059cf26: mov eax, 1 */ r_eax = 0x1u;
    /* 0059cf2b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059cf2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059cf2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059cf30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059cf31: ret 8 */ FN_RET(0x0059ccec); r_esp += 12; return;
L_0059cf34:; BB(0x0059cf34);
    /* 0059cf34: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059cf36: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x59cf3bu); f_00520f68();
    /* 0059cf3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059cf3d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059cf40: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059cf41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059cf42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059cf43: ret 8 */ FN_RET(0x0059ccec); r_esp += 12; return;
L_0059cf46:; BB(0x0059cf46);
    /* 0059cf46: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0059cf4a: movzx ebp, word ptr [ebp + 0x1c] */ r_ebp = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0059cf4e: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0059cf52: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0059cf56: jmp 0x59cdf1 */ goto L_0059cdf1;
L_0059cf5b:; BB(0x0059cf5b);
    /* 0059cf5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059cf5d: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x59cf62u); f_00520f68();
    /* 0059cf62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059cf64: jmp 0x59cf09 */ goto L_0059cf09;
}

void f_0059cf68(void) /* sub_59CF68 */
{
    FN_ENTER(0x0059cf68);
    /* 0059cf68: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 0059cf6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cf70: jne 0x59cf8e */ if (!fZ) goto L_0059cf8e;
L_0059cf72:; BB(0x0059cf72);
    /* 0059cf72: movzx eax, word ptr [ecx + 0x3ec] */ r_eax = (u32)R16((u32)(r_ecx+0x3ecu));
    /* 0059cf79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf7a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59cf7fu); f_007b4d18();
    /* 0059cf7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059cf80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059cf82: je 0x59cfa9 */ if (fZ) goto L_0059cfa9;
L_0059cf84:; BB(0x0059cf84);
    /* 0059cf84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf86: mov ecx, eax */ r_ecx = r_eax;
    /* 0059cf88: call 0x59ac0c */ r_esp -= 4; W32(r_esp, 0x59cf8du); f_0059ac0c();
    /* 0059cf8d: ret  */ FN_RET(0x0059cf68); r_esp += 4; return;
L_0059cf8e:; BB(0x0059cf8e);
    /* 0059cf8e: movzx eax, word ptr [ecx + 0x3ec] */ r_eax = (u32)R16((u32)(r_ecx+0x3ecu));
    /* 0059cf95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf96: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59cf9bu); f_007b4d18();
    /* 0059cf9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059cf9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059cf9e: je 0x59cfa9 */ if (fZ) goto L_0059cfa9;
L_0059cfa0:; BB(0x0059cfa0);
    /* 0059cfa0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cfa2: mov ecx, eax */ r_ecx = r_eax;
    /* 0059cfa4: call 0x59ac0c */ r_esp -= 4; W32(r_esp, 0x59cfa9u); f_0059ac0c();
L_0059cfa9:; BB(0x0059cfa9);
    /* 0059cfa9: ret  */ FN_RET(0x0059cf68); r_esp += 4; return;
}

void f_0059cfac(void) /* sub_59CFAC */
{
    FN_ENTER(0x0059cfac);
    /* 0059cfac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059cfad: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059cfb0: mov edi, ecx */ r_edi = r_ecx;
    /* 0059cfb2: mov ecx, edi */ r_ecx = r_edi;
    /* 0059cfb4: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x59cfb9u); f_005213d8();
    /* 0059cfb9: mov ecx, edi */ r_ecx = r_edi;
    /* 0059cfbb: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x59cfc0u); f_00521410();
    /* 0059cfc0: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0059cfc6: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0059cfcc: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0059cfce: fmul qword ptr [0x9298b8] */ ST(0) = ST(0) * R_F64((u32)(0x9298b8u));
    /* 0059cfd4: fdiv qword ptr [0x9298b0] */ ST(0) = ST(0) / R_F64((u32)(0x9298b0u));
    /* 0059cfda: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0059cfdd: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0059cfe1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059cfe6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059cfea: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0059cfee: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0059cff2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0059cff5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059cff9: push 0xa00 */ { u32 v = 0xa00u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cffe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cfff: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d002: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x59d007u); f_007a8c74();
    /* 0059d007: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0059d00a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059d00d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059d00e: ret  */ FN_RET(0x0059cfac); r_esp += 4; return;
}

