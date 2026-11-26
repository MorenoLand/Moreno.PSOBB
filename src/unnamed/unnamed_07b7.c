#include "protos.h"

void f_007b7704(void) /* sub_7B7704 */
{
    FN_ENTER(0x007b7704);
    /* 007b7704: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b7705: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b7706: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b7707: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b770a: mov edi, ecx */ r_edi = r_ecx;
    /* 007b770c: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 007b7710: lea esi, [edi + 0x44] */ r_esi = (u32)(r_edi+0x44u);
    /* 007b7713: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 007b7716: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b7717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7718: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b771du); f_007a9180();
    /* 007b771d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7720: fcomp dword ptr [0x97e39c] */ fx_compare(ST(0), R_F32((u32)(0x97e39cu))); FPOP();
    /* 007b7726: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b7728: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b7729: jae 0x7b7736 */ if (!fC) goto L_007b7736;
L_007b772b:; BB(0x007b772b);
    /* 007b772b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b772d: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b7730: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b7731: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b7732: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b7733: ret 8 */ FN_RET(0x007b7704); r_esp += 12; return;
L_007b7736:; BB(0x007b7736);
    /* 007b7736: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b7739: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 007b773c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007b773f: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007b7742: mov ebp, dword ptr [ebp + 0x24] */ r_ebp = R32((u32)(r_ebp+0x24u));
    /* 007b7745: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007b7749: mov edx, esi */ r_edx = r_esi;
    /* 007b774b: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 007b774f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7b7754u); f_0082f9c4();
    /* 007b7754: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b7757: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b775b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007b775d: fmul qword ptr [0x97e310] */ ST(0) = ST(0) * R_F64((u32)(0x97e310u));
    /* 007b7763: fdiv qword ptr [0x97e308] */ ST(0) = ST(0) / R_F64((u32)(0x97e308u));
    /* 007b7769: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 007b776d: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 007b7772: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b7777: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 007b777b: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 007b777f: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 007b7783: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 007b7787: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b778b: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b778e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b778f: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x7b7794u); f_007a900c();
    /* 007b7794: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7797: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b779a: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b779f: jge 0x7b77a8 */ if ((fS==fO)) goto L_007b77a8;
L_007b77a1:; BB(0x007b77a1);
    /* 007b77a1: mov ebp, 0x4000 */ r_ebp = 0x4000u;
    /* 007b77a6: jmp 0x7b77b8 */ goto L_007b77b8;
L_007b77a8:; BB(0x007b77a8);
    /* 007b77a8: cmp eax, 0xc000 */ {  u32 a = r_eax; u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b77ad: jl 0x7b772b */ if ((fS!=fO)) goto L_007b772b;
L_007b77b3:; BB(0x007b77b3);
    /* 007b77b3: mov ebp, 0xc000 */ r_ebp = 0xc000u;
L_007b77b8:; BB(0x007b77b8);
    /* 007b77b8: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b77bc: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b77c1: jl 0x7b78d4 */ if ((fS!=fO)) goto L_007b78d4;
L_007b77c7:; BB(0x007b77c7);
    /* 007b77c7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b77cc: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b77d1u); f_0082d990();
    /* 007b77d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b77d3: mov edx, ebp */ r_edx = r_ebp;
    /* 007b77d5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b77dau); f_0082d8bc();
    /* 007b77da: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 007b77dd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007b77e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b77e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b77e2: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b77e7u); f_0083a610();
    /* 007b77e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b77ea: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b77efu); f_0082da80();
    /* 007b77ef: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b77f2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b77f4: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b77f8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b77fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007b77fc: fcomp dword ptr [0x97e398] */ fx_compare(ST(0), R_F32((u32)(0x97e398u))); FPOP();
    /* 007b7802: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b7804: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b7805: jbe 0x7b78d0 */ if ((fC||fZ)) goto L_007b78d0;
L_007b780b:; BB(0x007b780b);
    /* 007b780b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007b7813: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b7816: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b781bu); f_0082df08();
    /* 007b781b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b781d: fld dword ptr [0x97e390] */ FPUSH(R_F32((u32)(0x97e390u)));
    /* 007b7823: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b7826: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b7828: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b782c: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007b782e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007b7831: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007b7835: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b7838: mov edx, esi */ r_edx = r_esi;
    /* 007b783a: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b783fu); f_0082ebac();
    /* 007b783f: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007b7842: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b7846: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 007b784a: fld dword ptr [0x97e38c] */ FPUSH(R_F32((u32)(0x97e38cu)));
    /* 007b7850: movzx esi, word ptr [edi + 0x1c] */ r_esi = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b7854: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007b7858: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007b785c: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 007b7860: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007b7864: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 007b7868: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b7869: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x7b786eu); f_007ba9ec();
    /* 007b786e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b786f: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b7872: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7874: jne 0x7b787d */ if (!fZ) goto L_007b787d;
L_007b7876:; BB(0x007b7876);
    /* 007b7876: mov ebp, 0x55 */ r_ebp = 0x55u;
    /* 007b787b: jmp 0x7b7882 */ goto L_007b7882;
L_007b787d:; BB(0x007b787d);
    /* 007b787d: mov ebp, 0x15 */ r_ebp = 0x15u;
L_007b7882:; BB(0x007b7882);
    /* 007b7882: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 007b7888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b788a: je 0x7b7966 */ if (fZ) goto L_007b7966;
L_007b7890:; BB(0x007b7890);
    /* 007b7890: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007b7894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b7895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7896: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7897: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x7b789cu); f_007806dc();
    /* 007b789c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b789f:; BB(0x007b789f);
    /* 007b789f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b78a1: je 0x7b795d */ if (fZ) goto L_007b795d;
L_007b78a7:; BB(0x007b78a7);
    /* 007b78a7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007b78aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007b78ac: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007b78af: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 007b78b2: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 007b78b6: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 007b78b9: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 007b78bc: mov dword ptr [edi + 0x3c], ebp */ W32((u32)(r_edi+0x3cu), r_ebp);
    /* 007b78bf: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 007b78c2: mov eax, 1 */ r_eax = 0x1u;
    /* 007b78c7: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b78ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b78cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b78cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b78cd: ret 8 */ FN_RET(0x007b7704); r_esp += 12; return;
L_007b78d0:; BB(0x007b78d0);
    /* 007b78d0: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
L_007b78d4:; BB(0x007b78d4);
    /* 007b78d4: fld dword ptr [0x97e38c] */ FPUSH(R_F32((u32)(0x97e38cu)));
    /* 007b78da: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
    /* 007b78dd: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007b78e1: mov ebp, dword ptr [edi + 0x48] */ r_ebp = R32((u32)(r_edi+0x48u));
    /* 007b78e4: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 007b78e8: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 007b78ec: mov esi, dword ptr [edi + 0x4c] */ r_esi = R32((u32)(r_edi+0x4cu));
    /* 007b78ef: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007b78f3: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 007b78f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b78f8: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x7b78fdu); f_007ba9ec();
    /* 007b78fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b78fe: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b7901: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7903: jne 0x7b790c */ if (!fZ) goto L_007b790c;
L_007b7905:; BB(0x007b7905);
    /* 007b7905: mov ebp, 0x55 */ r_ebp = 0x55u;
    /* 007b790a: jmp 0x7b7911 */ goto L_007b7911;
L_007b790c:; BB(0x007b790c);
    /* 007b790c: mov ebp, 0x15 */ r_ebp = 0x15u;
L_007b7911:; BB(0x007b7911);
    /* 007b7911: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 007b7917: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7919: je 0x7b7979 */ if (fZ) goto L_007b7979;
L_007b791b:; BB(0x007b791b);
    /* 007b791b: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 007b791f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b7920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7921: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7922: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x7b7927u); f_007806dc();
    /* 007b7927: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b792a:; BB(0x007b792a);
    /* 007b792a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b792c: je 0x7b772b */ if (fZ) goto L_007b772b;
L_007b7932:; BB(0x007b7932);
    /* 007b7932: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007b7935: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007b7937: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 007b793a: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 007b793d: mov dword ptr [edi + 0x48], ebp */ W32((u32)(r_edi+0x48u), r_ebp);
    /* 007b7940: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 007b7943: mov dword ptr [edi + 0x4c], esi */ W32((u32)(r_edi+0x4cu), r_esi);
    /* 007b7946: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 007b7949: mov dword ptr [edi + 0x3c], ebp */ W32((u32)(r_edi+0x3cu), r_ebp);
    /* 007b794c: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 007b794f: mov eax, 1 */ r_eax = 0x1u;
    /* 007b7954: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b7957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b7958: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b7959: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b795a: ret 8 */ FN_RET(0x007b7704); r_esp += 12; return;
L_007b795d:; BB(0x007b795d);
    /* 007b795d: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b7961: jmp 0x7b78d4 */ goto L_007b78d4;
L_007b7966:; BB(0x007b7966);
    /* 007b7966: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007b796a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b796b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b796c: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x7b7971u); f_00780630();
    /* 007b7971: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7974: jmp 0x7b789f */ goto L_007b789f;
L_007b7979:; BB(0x007b7979);
    /* 007b7979: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007b797d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b797e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b797f: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x7b7984u); f_00780630();
    /* 007b7984: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7987: jmp 0x7b792a */ goto L_007b792a;
}

void f_007b798c(void) /* sub_7B798C */
{
    FN_ENTER(0x007b798c);
    /* 007b798c: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b798f: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 007b7995: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7997: je 0x7b7e8a */ if (fZ) goto L_007b7e8a;
L_007b799d:; BB(0x007b799d);
    /* 007b799d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 007b79a0: and eax, 0xff6fffff */ {  u32 a = r_eax; u32 b = 0xff6fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b79a5: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007b79a8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b79ad: mov edx, dword ptr [0xaae164] */ r_edx = R32((u32)(0xaae164u));
    /* 007b79b3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b79b5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b79b7: jge 0x7b7e8a */ if ((fS==fO)) goto L_007b7e8a;
L_007b79bd:; BB(0x007b79bd);
    /* 007b79bd: mov dword ptr [esp + 0x68], ebx */ W32((u32)(r_esp+0x68u), r_ebx);
    /* 007b79c1: mov ebx, eax */ r_ebx = r_eax;
    /* 007b79c3: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 007b79c7: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 007b79cb: mov esi, ecx */ r_esi = r_ecx;
L_007b79cd:; BB(0x007b79cd);
    /* 007b79cd: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 007b79d4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b79d6: je 0x7b7e73 */ if (fZ) goto L_007b7e73;
L_007b79dc:; BB(0x007b79dc);
    /* 007b79dc: movsx eax, word ptr [esi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x28u));
    /* 007b79e0: cmp ax, word ptr [edi + 0x28] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 007b79e4: je 0x7b79f5 */ if (fZ) goto L_007b79f5;
L_007b79e6:; BB(0x007b79e6);
    /* 007b79e6: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 007b79ea: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b79ef: jge 0x7b7e73 */ if ((fS==fO)) goto L_007b7e73;
L_007b79f5:; BB(0x007b79f5);
    /* 007b79f5: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b79f7: je 0x7b7cae */ if (fZ) goto L_007b7cae;
L_007b79fd:; BB(0x007b79fd);
    /* 007b79fd: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 007b7a00: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7a06: jne 0x7b7cae */ if (!fZ) goto L_007b7cae;
L_007b7a0c:; BB(0x007b7a0c);
    /* 007b7a0c: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 007b7a0f: test edx, 0x80000800 */ {  u32 a = r_edx; u32 b = 0x80000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7a15: jne 0x7b7cae */ if (!fZ) goto L_007b7cae;
L_007b7a1b:; BB(0x007b7a1b);
    /* 007b7a1b: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 007b7a1e: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 007b7a21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7a22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7a23: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b7a28u); f_007a9180();
    /* 007b7a28: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7a2b: fcomp dword ptr [0x97e388] */ fx_compare(ST(0), R_F32((u32)(0x97e388u))); FPOP();
    /* 007b7a31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b7a33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b7a34: ja 0x7b7caa */ if ((!fC&&!fZ)) goto L_007b7caa;
L_007b7a3a:; BB(0x007b7a3a);
    /* 007b7a3a: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 007b7a40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7a42: je 0x7b7cae */ if (fZ) goto L_007b7cae;
L_007b7a48:; BB(0x007b7a48);
    /* 007b7a48: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 007b7a4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7a50: je 0x7b7cae */ if (fZ) goto L_007b7cae;
L_007b7a56:; BB(0x007b7a56);
    /* 007b7a56: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 007b7a5a: mov ecx, dword ptr [esi + 0xa8] */ r_ecx = R32((u32)(r_esi+0xa8u));
    /* 007b7a60: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007b7a64: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 007b7a67: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007b7a6b: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 007b7a6e: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 007b7a72: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 007b7a75: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 007b7a79: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 007b7a7c: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 007b7a80: mov edx, esp */ r_edx = r_esp;
    /* 007b7a82: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 007b7a86: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 007b7a8c: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 007b7a90: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007b7a93: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007b7a97: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 007b7a9a: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 007b7a9e: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007b7aa1: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007b7aa5: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 007b7aa8: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 007b7aac: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007b7ab0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007b7ab2: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b7ab6: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007b7ab9: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007b7abd: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007b7ac0: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b7ac4: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007b7ac7: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007b7acb: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007b7ace: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 007b7ad2: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007b7ad5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007b7ad9: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007b7add: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 007b7adf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007b7ae3: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 007b7ae6: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007b7aea: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 007b7aed: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007b7af1: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 007b7af4: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 007b7af8: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 007b7afb: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 007b7aff: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 007b7b02: call 0x7b5318 */ r_esp -= 4; W32(r_esp, 0x7b7b07u); f_007b5318();
    /* 007b7b07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7b09: je 0x7b7cae */ if (fZ) goto L_007b7cae;
L_007b7b0f:; BB(0x007b7b0f);
    /* 007b7b0f: mov ecx, dword ptr [0xaad6e0] */ r_ecx = R32((u32)(0xaad6e0u));
    /* 007b7b15: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b7b17: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7b19: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7b1f:; BB(0x007b7b1f);
    /* 007b7b1f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7b21: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7b27:; BB(0x007b7b27);
    /* 007b7b27: mov ecx, dword ptr [0xaad6e4] */ r_ecx = R32((u32)(0xaad6e4u));
    /* 007b7b2d: mov edx, 1 */ r_edx = 0x1u;
    /* 007b7b32: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7b34: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7b3a:; BB(0x007b7b3a);
    /* 007b7b3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7b3c: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7b42:; BB(0x007b7b42);
    /* 007b7b42: mov ecx, dword ptr [0xaad6e8] */ r_ecx = R32((u32)(0xaad6e8u));
    /* 007b7b48: mov edx, 2 */ r_edx = 0x2u;
    /* 007b7b4d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7b4f: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7b55:; BB(0x007b7b55);
    /* 007b7b55: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7b57: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7b5d:; BB(0x007b7b5d);
    /* 007b7b5d: mov ecx, dword ptr [0xaad6ec] */ r_ecx = R32((u32)(0xaad6ecu));
    /* 007b7b63: mov edx, 3 */ r_edx = 0x3u;
    /* 007b7b68: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7b6a: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7b70:; BB(0x007b7b70);
    /* 007b7b70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7b72: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7b78:; BB(0x007b7b78);
    /* 007b7b78: mov ecx, dword ptr [0xaad6f0] */ r_ecx = R32((u32)(0xaad6f0u));
    /* 007b7b7e: mov edx, 4 */ r_edx = 0x4u;
    /* 007b7b83: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7b85: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7b8b:; BB(0x007b7b8b);
    /* 007b7b8b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7b8d: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7b93:; BB(0x007b7b93);
    /* 007b7b93: mov ecx, dword ptr [0xaad6f4] */ r_ecx = R32((u32)(0xaad6f4u));
    /* 007b7b99: mov edx, 5 */ r_edx = 0x5u;
    /* 007b7b9e: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7ba0: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7ba6:; BB(0x007b7ba6);
    /* 007b7ba6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7ba8: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7bae:; BB(0x007b7bae);
    /* 007b7bae: mov ecx, dword ptr [0xaad6f8] */ r_ecx = R32((u32)(0xaad6f8u));
    /* 007b7bb4: mov edx, 6 */ r_edx = 0x6u;
    /* 007b7bb9: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7bbb: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7bc1:; BB(0x007b7bc1);
    /* 007b7bc1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7bc3: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7bc9:; BB(0x007b7bc9);
    /* 007b7bc9: mov ecx, dword ptr [0xaad6fc] */ r_ecx = R32((u32)(0xaad6fcu));
    /* 007b7bcf: mov edx, 7 */ r_edx = 0x7u;
    /* 007b7bd4: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7bd6: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7bdc:; BB(0x007b7bdc);
    /* 007b7bdc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7bde: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7be4:; BB(0x007b7be4);
    /* 007b7be4: mov ecx, dword ptr [0xaad700] */ r_ecx = R32((u32)(0xaad700u));
    /* 007b7bea: mov edx, 8 */ r_edx = 0x8u;
    /* 007b7bef: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7bf1: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7bf7:; BB(0x007b7bf7);
    /* 007b7bf7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7bf9: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7bff:; BB(0x007b7bff);
    /* 007b7bff: mov ecx, dword ptr [0xaad704] */ r_ecx = R32((u32)(0xaad704u));
    /* 007b7c05: mov edx, 9 */ r_edx = 0x9u;
    /* 007b7c0a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c0c: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7c12:; BB(0x007b7c12);
    /* 007b7c12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c14: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7c1a:; BB(0x007b7c1a);
    /* 007b7c1a: mov ecx, dword ptr [0xaad708] */ r_ecx = R32((u32)(0xaad708u));
    /* 007b7c20: mov edx, 0xa */ r_edx = 0xau;
    /* 007b7c25: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c27: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7c2d:; BB(0x007b7c2d);
    /* 007b7c2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c2f: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7c35:; BB(0x007b7c35);
    /* 007b7c35: mov ecx, dword ptr [0xaad70c] */ r_ecx = R32((u32)(0xaad70cu));
    /* 007b7c3b: mov edx, 0xb */ r_edx = 0xbu;
    /* 007b7c40: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c42: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7c44:; BB(0x007b7c44);
    /* 007b7c44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c46: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7c4c:; BB(0x007b7c4c);
    /* 007b7c4c: mov ecx, dword ptr [0xaad710] */ r_ecx = R32((u32)(0xaad710u));
    /* 007b7c52: mov edx, 0xc */ r_edx = 0xcu;
    /* 007b7c57: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c59: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7c5b:; BB(0x007b7c5b);
    /* 007b7c5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c5d: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7c63:; BB(0x007b7c63);
    /* 007b7c63: mov ecx, dword ptr [0xaad714] */ r_ecx = R32((u32)(0xaad714u));
    /* 007b7c69: mov edx, 0xd */ r_edx = 0xdu;
    /* 007b7c6e: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c70: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7c72:; BB(0x007b7c72);
    /* 007b7c72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c74: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7c7a:; BB(0x007b7c7a);
    /* 007b7c7a: mov ecx, dword ptr [0xaad718] */ r_ecx = R32((u32)(0xaad718u));
    /* 007b7c80: mov edx, 0xe */ r_edx = 0xeu;
    /* 007b7c85: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c87: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7c89:; BB(0x007b7c89);
    /* 007b7c89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c8b: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7c91:; BB(0x007b7c91);
    /* 007b7c91: mov ecx, dword ptr [0xaad71c] */ r_ecx = R32((u32)(0xaad71cu));
    /* 007b7c97: mov edx, 0xf */ r_edx = 0xfu;
    /* 007b7c9c: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7c9e: je 0x7b7cb0 */ if (fZ) goto L_007b7cb0;
L_007b7ca0:; BB(0x007b7ca0);
    /* 007b7ca0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7ca2: je 0x7b7e8e */ if (fZ) goto L_007b7e8e;
L_007b7ca8:; BB(0x007b7ca8);
    /* 007b7ca8: jmp 0x7b7cb0 */ goto L_007b7cb0;
L_007b7caa:; BB(0x007b7caa);
    /* 007b7caa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b7cac: jmp 0x7b7cb0 */ goto L_007b7cb0;
L_007b7cae:; BB(0x007b7cae);
    /* 007b7cae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007b7cb0:; BB(0x007b7cb0);
    /* 007b7cb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7cb2: je 0x7b7e67 */ if (fZ) goto L_007b7e67;
L_007b7cb8:; BB(0x007b7cb8);
    /* 007b7cb8: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 007b7cbe: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 007b7cc1: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b7cc7: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 007b7cca: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 007b7cd0: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 007b7cd3: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007b7cd6: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7cdc: je 0x7b7cf7 */ if (fZ) goto L_007b7cf7;
L_007b7cde:; BB(0x007b7cde);
    /* 007b7cde: test ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7ce4: je 0x7b7cf7 */ if (fZ) goto L_007b7cf7;
L_007b7ce6:; BB(0x007b7ce6);
    /* 007b7ce6: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7cec: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7cf2: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7cf7:; BB(0x007b7cf7);
    /* 007b7cf7: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7cfd: je 0x7b7d18 */ if (fZ) goto L_007b7d18;
L_007b7cff:; BB(0x007b7cff);
    /* 007b7cff: test ecx, 0x2000 */ {  u32 a = r_ecx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7d05: je 0x7b7d18 */ if (fZ) goto L_007b7d18;
L_007b7d07:; BB(0x007b7d07);
    /* 007b7d07: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7d0d: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7d13: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7d18:; BB(0x007b7d18);
    /* 007b7d18: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7d1e: je 0x7b7d39 */ if (fZ) goto L_007b7d39;
L_007b7d20:; BB(0x007b7d20);
    /* 007b7d20: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7d26: je 0x7b7d39 */ if (fZ) goto L_007b7d39;
L_007b7d28:; BB(0x007b7d28);
    /* 007b7d28: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7d2e: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7d34: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7d39:; BB(0x007b7d39);
    /* 007b7d39: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7d3f: je 0x7b7d5a */ if (fZ) goto L_007b7d5a;
L_007b7d41:; BB(0x007b7d41);
    /* 007b7d41: test ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7d47: je 0x7b7d5a */ if (fZ) goto L_007b7d5a;
L_007b7d49:; BB(0x007b7d49);
    /* 007b7d49: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7d4f: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7d55: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7d5a:; BB(0x007b7d5a);
    /* 007b7d5a: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7d60: je 0x7b7d7b */ if (fZ) goto L_007b7d7b;
L_007b7d62:; BB(0x007b7d62);
    /* 007b7d62: test ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7d68: je 0x7b7d7b */ if (fZ) goto L_007b7d7b;
L_007b7d6a:; BB(0x007b7d6a);
    /* 007b7d6a: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7d70: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7d76: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7d7b:; BB(0x007b7d7b);
    /* 007b7d7b: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7d81: je 0x7b7d9c */ if (fZ) goto L_007b7d9c;
L_007b7d83:; BB(0x007b7d83);
    /* 007b7d83: test ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7d89: je 0x7b7d9c */ if (fZ) goto L_007b7d9c;
L_007b7d8b:; BB(0x007b7d8b);
    /* 007b7d8b: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7d91: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7d97: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7d9c:; BB(0x007b7d9c);
    /* 007b7d9c: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7da2: je 0x7b7dbd */ if (fZ) goto L_007b7dbd;
L_007b7da4:; BB(0x007b7da4);
    /* 007b7da4: test ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7daa: je 0x7b7dbd */ if (fZ) goto L_007b7dbd;
L_007b7dac:; BB(0x007b7dac);
    /* 007b7dac: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7db2: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7db8: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7dbd:; BB(0x007b7dbd);
    /* 007b7dbd: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7dc3: je 0x7b7dde */ if (fZ) goto L_007b7dde;
L_007b7dc5:; BB(0x007b7dc5);
    /* 007b7dc5: test ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7dcb: je 0x7b7dde */ if (fZ) goto L_007b7dde;
L_007b7dcd:; BB(0x007b7dcd);
    /* 007b7dcd: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7dd3: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7dd9: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7dde:; BB(0x007b7dde);
    /* 007b7dde: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7de4: je 0x7b7dfc */ if (fZ) goto L_007b7dfc;
L_007b7de6:; BB(0x007b7de6);
    /* 007b7de6: test ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7dec: je 0x7b7dfc */ if (fZ) goto L_007b7dfc;
L_007b7dee:; BB(0x007b7dee);
    /* 007b7dee: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7df4: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7dfa: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7dfc:; BB(0x007b7dfc);
    /* 007b7dfc: test edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7e02: je 0x7b7e1a */ if (fZ) goto L_007b7e1a;
L_007b7e04:; BB(0x007b7e04);
    /* 007b7e04: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7e0a: je 0x7b7e1a */ if (fZ) goto L_007b7e1a;
L_007b7e0c:; BB(0x007b7e0c);
    /* 007b7e0c: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7e12: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7e18: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7e1a:; BB(0x007b7e1a);
    /* 007b7e1a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 007b7e1d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7e1f: jne 0x7b7e2c */ if (!fZ) goto L_007b7e2c;
L_007b7e21:; BB(0x007b7e21);
    /* 007b7e21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7e22: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b7e23: mov ecx, esi */ r_ecx = r_esi;
    /* 007b7e25: call 0x7b7704 */ r_esp -= 4; W32(r_esp, 0x7b7e2au); f_007b7704();
    /* 007b7e2a: jmp 0x7b7e35 */ goto L_007b7e35;
L_007b7e2c:; BB(0x007b7e2c);
    /* 007b7e2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7e2d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b7e2e: mov ecx, esi */ r_ecx = r_esi;
    /* 007b7e30: call 0x7b6e14 */ r_esp -= 4; W32(r_esp, 0x7b7e35u); f_007b6e14();
L_007b7e35:; BB(0x007b7e35);
    /* 007b7e35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7e37: je 0x7b7e59 */ if (fZ) goto L_007b7e59;
L_007b7e39:; BB(0x007b7e39);
    /* 007b7e39: mov edi, dword ptr [esi + 0xa4] */ r_edi = R32((u32)(r_esi+0xa4u));
    /* 007b7e3f: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 007b7e42: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b7e48: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 007b7e4b: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7e51: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7e57: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7e59:; BB(0x007b7e59);
    /* 007b7e59: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7e5f: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b7e65: jmp 0x7b7e73 */ goto L_007b7e73;
L_007b7e67:; BB(0x007b7e67);
    /* 007b7e67: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b7e6d: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_007b7e73:; BB(0x007b7e73);
    /* 007b7e73: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b7e76: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b7e78: jl 0x7b79cd */ if ((fS!=fO)) goto L_007b79cd;
L_007b7e7e:; BB(0x007b7e7e);
    /* 007b7e7e: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 007b7e82: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007b7e86: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
L_007b7e8a:; BB(0x007b7e8a);
    /* 007b7e8a: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b7e8d: ret  */ FN_RET(0x007b798c); r_esp += 4; return;
L_007b7e8e:; BB(0x007b7e8e);
    /* 007b7e8e: mov dword ptr [edx*4 + 0xaad6e0], edi */ W32((u32)(r_edx*4+0xaad6e0u), r_edi);
    /* 007b7e95: jmp 0x7b7cb0 */ goto L_007b7cb0;
}

void f_007b7e9c(void) /* sub_7B7E9C */
{
    FN_ENTER(0x007b7e9c);
    /* 007b7e9c: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b7e9f: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 007b7ea5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7ea7: je 0x7b8325 */ if (fZ) goto L_007b8325;
L_007b7ead:; BB(0x007b7ead);
    /* 007b7ead: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 007b7eb0: and eax, 0xfedfffff */ {  u32 a = r_eax; u32 b = 0xfedfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b7eb5: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007b7eb8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007b7ebd: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b7ec3: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b7ec9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b7ecb: jge 0x7b8325 */ if ((fS==fO)) goto L_007b8325;
L_007b7ed1:; BB(0x007b7ed1);
    /* 007b7ed1: mov dword ptr [esp + 0x68], ebx */ W32((u32)(r_esp+0x68u), r_ebx);
    /* 007b7ed5: mov ebx, eax */ r_ebx = r_eax;
    /* 007b7ed7: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 007b7edb: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 007b7edf: mov esi, ecx */ r_esi = r_ecx;
L_007b7ee1:; BB(0x007b7ee1);
    /* 007b7ee1: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 007b7ee8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7eea: je 0x7b830e */ if (fZ) goto L_007b830e;
L_007b7ef0:; BB(0x007b7ef0);
    /* 007b7ef0: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7ef2: je 0x7b81a9 */ if (fZ) goto L_007b81a9;
L_007b7ef8:; BB(0x007b7ef8);
    /* 007b7ef8: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 007b7efb: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7f01: jne 0x7b81a9 */ if (!fZ) goto L_007b81a9;
L_007b7f07:; BB(0x007b7f07);
    /* 007b7f07: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 007b7f0a: test edx, 0x80000800 */ {  u32 a = r_edx; u32 b = 0x80000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7f10: jne 0x7b81a9 */ if (!fZ) goto L_007b81a9;
L_007b7f16:; BB(0x007b7f16);
    /* 007b7f16: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 007b7f19: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 007b7f1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b7f1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b7f1e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b7f23u); f_007a9180();
    /* 007b7f23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b7f26: fcomp dword ptr [0x97e384] */ fx_compare(ST(0), R_F32((u32)(0x97e384u))); FPOP();
    /* 007b7f2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b7f2e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b7f2f: ja 0x7b81a5 */ if ((!fC&&!fZ)) goto L_007b81a5;
L_007b7f35:; BB(0x007b7f35);
    /* 007b7f35: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 007b7f3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7f3d: je 0x7b81a9 */ if (fZ) goto L_007b81a9;
L_007b7f43:; BB(0x007b7f43);
    /* 007b7f43: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 007b7f49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b7f4b: je 0x7b81a9 */ if (fZ) goto L_007b81a9;
L_007b7f51:; BB(0x007b7f51);
    /* 007b7f51: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 007b7f55: mov ecx, dword ptr [esi + 0xa8] */ r_ecx = R32((u32)(r_esi+0xa8u));
    /* 007b7f5b: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007b7f5f: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 007b7f62: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007b7f66: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 007b7f69: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 007b7f6d: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 007b7f70: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 007b7f74: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 007b7f77: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 007b7f7b: mov edx, esp */ r_edx = r_esp;
    /* 007b7f7d: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 007b7f81: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 007b7f87: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 007b7f8b: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007b7f8e: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007b7f92: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 007b7f95: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 007b7f99: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007b7f9c: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007b7fa0: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 007b7fa3: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 007b7fa7: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007b7fab: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007b7fad: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b7fb1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007b7fb4: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007b7fb8: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007b7fbb: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b7fbf: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007b7fc2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007b7fc6: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007b7fc9: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 007b7fcd: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007b7fd0: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007b7fd4: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007b7fd8: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 007b7fda: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007b7fde: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 007b7fe1: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007b7fe5: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 007b7fe8: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007b7fec: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 007b7fef: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 007b7ff3: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 007b7ff6: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 007b7ffa: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 007b7ffd: call 0x7b5318 */ r_esp -= 4; W32(r_esp, 0x7b8002u); f_007b5318();
    /* 007b8002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8004: je 0x7b81a9 */ if (fZ) goto L_007b81a9;
L_007b800a:; BB(0x007b800a);
    /* 007b800a: mov ecx, dword ptr [0xaad6e0] */ r_ecx = R32((u32)(0xaad6e0u));
    /* 007b8010: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b8012: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8014: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b801a:; BB(0x007b801a);
    /* 007b801a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b801c: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b8022:; BB(0x007b8022);
    /* 007b8022: mov ecx, dword ptr [0xaad6e4] */ r_ecx = R32((u32)(0xaad6e4u));
    /* 007b8028: mov edx, 1 */ r_edx = 0x1u;
    /* 007b802d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b802f: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b8035:; BB(0x007b8035);
    /* 007b8035: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8037: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b803d:; BB(0x007b803d);
    /* 007b803d: mov ecx, dword ptr [0xaad6e8] */ r_ecx = R32((u32)(0xaad6e8u));
    /* 007b8043: mov edx, 2 */ r_edx = 0x2u;
    /* 007b8048: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b804a: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b8050:; BB(0x007b8050);
    /* 007b8050: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8052: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b8058:; BB(0x007b8058);
    /* 007b8058: mov ecx, dword ptr [0xaad6ec] */ r_ecx = R32((u32)(0xaad6ecu));
    /* 007b805e: mov edx, 3 */ r_edx = 0x3u;
    /* 007b8063: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8065: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b806b:; BB(0x007b806b);
    /* 007b806b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b806d: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b8073:; BB(0x007b8073);
    /* 007b8073: mov ecx, dword ptr [0xaad6f0] */ r_ecx = R32((u32)(0xaad6f0u));
    /* 007b8079: mov edx, 4 */ r_edx = 0x4u;
    /* 007b807e: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8080: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b8086:; BB(0x007b8086);
    /* 007b8086: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8088: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b808e:; BB(0x007b808e);
    /* 007b808e: mov ecx, dword ptr [0xaad6f4] */ r_ecx = R32((u32)(0xaad6f4u));
    /* 007b8094: mov edx, 5 */ r_edx = 0x5u;
    /* 007b8099: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b809b: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b80a1:; BB(0x007b80a1);
    /* 007b80a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b80a3: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b80a9:; BB(0x007b80a9);
    /* 007b80a9: mov ecx, dword ptr [0xaad6f8] */ r_ecx = R32((u32)(0xaad6f8u));
    /* 007b80af: mov edx, 6 */ r_edx = 0x6u;
    /* 007b80b4: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b80b6: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b80bc:; BB(0x007b80bc);
    /* 007b80bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b80be: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b80c4:; BB(0x007b80c4);
    /* 007b80c4: mov ecx, dword ptr [0xaad6fc] */ r_ecx = R32((u32)(0xaad6fcu));
    /* 007b80ca: mov edx, 7 */ r_edx = 0x7u;
    /* 007b80cf: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b80d1: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b80d7:; BB(0x007b80d7);
    /* 007b80d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b80d9: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b80df:; BB(0x007b80df);
    /* 007b80df: mov ecx, dword ptr [0xaad700] */ r_ecx = R32((u32)(0xaad700u));
    /* 007b80e5: mov edx, 8 */ r_edx = 0x8u;
    /* 007b80ea: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b80ec: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b80f2:; BB(0x007b80f2);
    /* 007b80f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b80f4: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b80fa:; BB(0x007b80fa);
    /* 007b80fa: mov ecx, dword ptr [0xaad704] */ r_ecx = R32((u32)(0xaad704u));
    /* 007b8100: mov edx, 9 */ r_edx = 0x9u;
    /* 007b8105: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8107: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b810d:; BB(0x007b810d);
    /* 007b810d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b810f: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b8115:; BB(0x007b8115);
    /* 007b8115: mov ecx, dword ptr [0xaad708] */ r_ecx = R32((u32)(0xaad708u));
    /* 007b811b: mov edx, 0xa */ r_edx = 0xau;
    /* 007b8120: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8122: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b8128:; BB(0x007b8128);
    /* 007b8128: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b812a: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b8130:; BB(0x007b8130);
    /* 007b8130: mov ecx, dword ptr [0xaad70c] */ r_ecx = R32((u32)(0xaad70cu));
    /* 007b8136: mov edx, 0xb */ r_edx = 0xbu;
    /* 007b813b: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b813d: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b813f:; BB(0x007b813f);
    /* 007b813f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8141: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b8147:; BB(0x007b8147);
    /* 007b8147: mov ecx, dword ptr [0xaad710] */ r_ecx = R32((u32)(0xaad710u));
    /* 007b814d: mov edx, 0xc */ r_edx = 0xcu;
    /* 007b8152: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8154: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b8156:; BB(0x007b8156);
    /* 007b8156: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8158: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b815e:; BB(0x007b815e);
    /* 007b815e: mov ecx, dword ptr [0xaad714] */ r_ecx = R32((u32)(0xaad714u));
    /* 007b8164: mov edx, 0xd */ r_edx = 0xdu;
    /* 007b8169: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b816b: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b816d:; BB(0x007b816d);
    /* 007b816d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b816f: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b8175:; BB(0x007b8175);
    /* 007b8175: mov ecx, dword ptr [0xaad718] */ r_ecx = R32((u32)(0xaad718u));
    /* 007b817b: mov edx, 0xe */ r_edx = 0xeu;
    /* 007b8180: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8182: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b8184:; BB(0x007b8184);
    /* 007b8184: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8186: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b818c:; BB(0x007b818c);
    /* 007b818c: mov ecx, dword ptr [0xaad71c] */ r_ecx = R32((u32)(0xaad71cu));
    /* 007b8192: mov edx, 0xf */ r_edx = 0xfu;
    /* 007b8197: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8199: je 0x7b81ab */ if (fZ) goto L_007b81ab;
L_007b819b:; BB(0x007b819b);
    /* 007b819b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b819d: je 0x7b8329 */ if (fZ) goto L_007b8329;
L_007b81a3:; BB(0x007b81a3);
    /* 007b81a3: jmp 0x7b81ab */ goto L_007b81ab;
L_007b81a5:; BB(0x007b81a5);
    /* 007b81a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b81a7: jmp 0x7b81ab */ goto L_007b81ab;
L_007b81a9:; BB(0x007b81a9);
    /* 007b81a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007b81ab:; BB(0x007b81ab);
    /* 007b81ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b81ad: je 0x7b8308 */ if (fZ) goto L_007b8308;
L_007b81b3:; BB(0x007b81b3);
    /* 007b81b3: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 007b81b9: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 007b81bc: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007b81bf: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b81c5: je 0x7b81da */ if (fZ) goto L_007b81da;
L_007b81c7:; BB(0x007b81c7);
    /* 007b81c7: test ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b81cd: je 0x7b81da */ if (fZ) goto L_007b81da;
L_007b81cf:; BB(0x007b81cf);
    /* 007b81cf: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b81d5: jmp 0x7b830e */ goto L_007b830e;
L_007b81da:; BB(0x007b81da);
    /* 007b81da: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b81e0: je 0x7b81f5 */ if (fZ) goto L_007b81f5;
L_007b81e2:; BB(0x007b81e2);
    /* 007b81e2: test ecx, 0x2000 */ {  u32 a = r_ecx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b81e8: je 0x7b81f5 */ if (fZ) goto L_007b81f5;
L_007b81ea:; BB(0x007b81ea);
    /* 007b81ea: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b81f0: jmp 0x7b830e */ goto L_007b830e;
L_007b81f5:; BB(0x007b81f5);
    /* 007b81f5: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b81fb: je 0x7b8210 */ if (fZ) goto L_007b8210;
L_007b81fd:; BB(0x007b81fd);
    /* 007b81fd: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8203: je 0x7b8210 */ if (fZ) goto L_007b8210;
L_007b8205:; BB(0x007b8205);
    /* 007b8205: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b820b: jmp 0x7b830e */ goto L_007b830e;
L_007b8210:; BB(0x007b8210);
    /* 007b8210: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8216: je 0x7b822b */ if (fZ) goto L_007b822b;
L_007b8218:; BB(0x007b8218);
    /* 007b8218: test ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b821e: je 0x7b822b */ if (fZ) goto L_007b822b;
L_007b8220:; BB(0x007b8220);
    /* 007b8220: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b8226: jmp 0x7b830e */ goto L_007b830e;
L_007b822b:; BB(0x007b822b);
    /* 007b822b: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8231: je 0x7b8246 */ if (fZ) goto L_007b8246;
L_007b8233:; BB(0x007b8233);
    /* 007b8233: test ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8239: je 0x7b8246 */ if (fZ) goto L_007b8246;
L_007b823b:; BB(0x007b823b);
    /* 007b823b: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b8241: jmp 0x7b830e */ goto L_007b830e;
L_007b8246:; BB(0x007b8246);
    /* 007b8246: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b824c: je 0x7b8261 */ if (fZ) goto L_007b8261;
L_007b824e:; BB(0x007b824e);
    /* 007b824e: test ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8254: je 0x7b8261 */ if (fZ) goto L_007b8261;
L_007b8256:; BB(0x007b8256);
    /* 007b8256: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b825c: jmp 0x7b830e */ goto L_007b830e;
L_007b8261:; BB(0x007b8261);
    /* 007b8261: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8267: je 0x7b827c */ if (fZ) goto L_007b827c;
L_007b8269:; BB(0x007b8269);
    /* 007b8269: test ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b826f: je 0x7b827c */ if (fZ) goto L_007b827c;
L_007b8271:; BB(0x007b8271);
    /* 007b8271: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b8277: jmp 0x7b830e */ goto L_007b830e;
L_007b827c:; BB(0x007b827c);
    /* 007b827c: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8282: je 0x7b8297 */ if (fZ) goto L_007b8297;
L_007b8284:; BB(0x007b8284);
    /* 007b8284: test ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b828a: je 0x7b8297 */ if (fZ) goto L_007b8297;
L_007b828c:; BB(0x007b828c);
    /* 007b828c: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b8292: jmp 0x7b830e */ goto L_007b830e;
L_007b8297:; BB(0x007b8297);
    /* 007b8297: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b829d: je 0x7b82af */ if (fZ) goto L_007b82af;
L_007b829f:; BB(0x007b829f);
    /* 007b829f: test ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b82a5: je 0x7b82af */ if (fZ) goto L_007b82af;
L_007b82a7:; BB(0x007b82a7);
    /* 007b82a7: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b82ad: jmp 0x7b830e */ goto L_007b830e;
L_007b82af:; BB(0x007b82af);
    /* 007b82af: test edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b82b5: je 0x7b82c7 */ if (fZ) goto L_007b82c7;
L_007b82b7:; BB(0x007b82b7);
    /* 007b82b7: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b82bd: je 0x7b82c7 */ if (fZ) goto L_007b82c7;
L_007b82bf:; BB(0x007b82bf);
    /* 007b82bf: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b82c5: jmp 0x7b830e */ goto L_007b830e;
L_007b82c7:; BB(0x007b82c7);
    /* 007b82c7: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 007b82ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b82cc: jne 0x7b82d9 */ if (!fZ) goto L_007b82d9;
L_007b82ce:; BB(0x007b82ce);
    /* 007b82ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b82cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b82d0: mov ecx, esi */ r_ecx = r_esi;
    /* 007b82d2: call 0x7b7704 */ r_esp -= 4; W32(r_esp, 0x7b82d7u); f_007b7704();
    /* 007b82d7: jmp 0x7b82e2 */ goto L_007b82e2;
L_007b82d9:; BB(0x007b82d9);
    /* 007b82d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b82da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b82db: mov ecx, esi */ r_ecx = r_esi;
    /* 007b82dd: call 0x7b6e14 */ r_esp -= 4; W32(r_esp, 0x7b82e2u); f_007b6e14();
L_007b82e2:; BB(0x007b82e2);
    /* 007b82e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b82e4: je 0x7b8300 */ if (fZ) goto L_007b8300;
L_007b82e6:; BB(0x007b82e6);
    /* 007b82e6: mov edi, dword ptr [esi + 0xa4] */ r_edi = R32((u32)(r_esi+0xa4u));
    /* 007b82ec: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 007b82ef: or edx, 0x1200000 */ {  u32 a = r_edx; u32 b = 0x1200000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b82f5: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 007b82f8: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b82fe: jmp 0x7b830e */ goto L_007b830e;
L_007b8300:; BB(0x007b8300);
    /* 007b8300: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b8306: jmp 0x7b830e */ goto L_007b830e;
L_007b8308:; BB(0x007b8308);
    /* 007b8308: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
L_007b830e:; BB(0x007b830e);
    /* 007b830e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b8311: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b8313: jl 0x7b7ee1 */ if ((fS!=fO)) goto L_007b7ee1;
L_007b8319:; BB(0x007b8319);
    /* 007b8319: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 007b831d: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007b8321: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
L_007b8325:; BB(0x007b8325);
    /* 007b8325: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b8328: ret  */ FN_RET(0x007b7e9c); r_esp += 4; return;
L_007b8329:; BB(0x007b8329);
    /* 007b8329: mov dword ptr [edx*4 + 0xaad6e0], edi */ W32((u32)(r_edx*4+0xaad6e0u), r_edi);
    /* 007b8330: jmp 0x7b81ab */ goto L_007b81ab;
}

