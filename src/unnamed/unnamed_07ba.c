#include "protos.h"

void f_007ba03c(void) /* sub_7BA03C */
{
    FN_ENTER(0x007ba03c);
    /* 007ba03c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ba03d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ba03e: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 007ba044: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007ba04a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba04c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba04e: jle 0x7ba0b7 */ if ((fZ||fS!=fO)) goto L_007ba0b7;
L_007ba050:; BB(0x007ba050);
    /* 007ba050: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ba053: jl 0x7ba0a4 */ if ((fS!=fO)) goto L_007ba0a4;
L_007ba055:; BB(0x007ba055);
    /* 007ba055: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007ba058: lea eax, [ecx - 6] */ r_eax = (u32)(r_ecx+0xfffffffau);
L_007ba05b:; BB(0x007ba05b);
    /* 007ba05b: mov ebp, dword ptr [ebx + 0x18] */ r_ebp = R32((u32)(r_ebx+0x18u));
    /* 007ba05e: and ebp, 0xfffffffe */ {  u32 a = r_ebp; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 007ba061: mov dword ptr [ebx + 0x18], ebp */ W32((u32)(r_ebx+0x18u), r_ebp);
    /* 007ba064: mov ebp, dword ptr [ebx + 0x44] */ r_ebp = R32((u32)(r_ebx+0x44u));
    /* 007ba067: and ebp, 0xfffffffe */ {  u32 a = r_ebp; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 007ba06a: mov dword ptr [ebx + 0x44], ebp */ W32((u32)(r_ebx+0x44u), r_ebp);
    /* 007ba06d: mov ebp, dword ptr [ebx + 0x70] */ r_ebp = R32((u32)(r_ebx+0x70u));
    /* 007ba070: and ebp, 0xfffffffe */ {  u32 a = r_ebp; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 007ba073: mov dword ptr [ebx + 0x70], ebp */ W32((u32)(r_ebx+0x70u), r_ebp);
    /* 007ba076: mov ebp, dword ptr [ebx + 0x9c] */ r_ebp = R32((u32)(r_ebx+0x9cu));
    /* 007ba07c: and ebp, 0xfffffffe */ {  u32 a = r_ebp; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 007ba07f: mov dword ptr [ebx + 0x9c], ebp */ W32((u32)(r_ebx+0x9cu), r_ebp);
    /* 007ba085: mov ebp, dword ptr [ebx + 0xc8] */ r_ebp = R32((u32)(r_ebx+0xc8u));
    /* 007ba08b: and ebp, 0xfffffffe */ {  u32 a = r_ebp; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 007ba08e: mov dword ptr [ebx + 0xc8], ebp */ W32((u32)(r_ebx+0xc8u), r_ebp);
    /* 007ba094: add ebx, 0xdc */ {  u32 a = r_ebx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ba09a: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ba09d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ba09f: jle 0x7ba05b */ if ((fZ||fS!=fO)) goto L_007ba05b;
L_007ba0a1:; BB(0x007ba0a1);
    /* 007ba0a1: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007ba0a4:; BB(0x007ba0a4);
    /* 007ba0a4: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 007ba0a7: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007ba0aa: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 007ba0ad: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ba0b0: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ba0b3: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba0b5: jl 0x7ba0a4 */ if ((fS!=fO)) goto L_007ba0a4;
L_007ba0b7:; BB(0x007ba0b7);
    /* 007ba0b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ba0b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ba0b9: ret  */ FN_RET(0x007ba03c); r_esp += 4; return;
}

void f_007ba0bc(void) /* sub_7BA0BC */
{
    FN_ENTER(0x007ba0bc);
    /* 007ba0bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007ba0c0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007ba0c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba0c6: je 0x7ba0e6 */ if (fZ) goto L_007ba0e6;
L_007ba0c8:; BB(0x007ba0c8);
    /* 007ba0c8: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007ba0cb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ba0cd: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007ba0cf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ba0d1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ba0d3: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007ba0d5: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 007ba0d9: or ecx, 0x40000000 */ {  u32 a = r_ecx; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba0df: mov dword ptr [eax + edx*4 + 0x18], ecx */ W32((u32)(r_eax+r_edx*4+0x18u), r_ecx);
    /* 007ba0e3: ret 8 */ FN_RET(0x007ba0bc); r_esp += 12; return;
L_007ba0e6:; BB(0x007ba0e6);
    /* 007ba0e6: ret 8 */ FN_RET(0x007ba0bc); r_esp += 12; return;
}

void f_007ba0ec(void) /* sub_7BA0EC */
{
    FN_ENTER(0x007ba0ec);
    /* 007ba0ec: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007ba0f0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007ba0f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba0f6: je 0x7ba116 */ if (fZ) goto L_007ba116;
L_007ba0f8:; BB(0x007ba0f8);
    /* 007ba0f8: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007ba0fb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ba0fd: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007ba0ff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ba101: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ba103: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007ba105: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 007ba109: or ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba10f: mov dword ptr [eax + edx*4 + 0x18], ecx */ W32((u32)(r_eax+r_edx*4+0x18u), r_ecx);
    /* 007ba113: ret 8 */ FN_RET(0x007ba0ec); r_esp += 12; return;
L_007ba116:; BB(0x007ba116);
    /* 007ba116: ret 8 */ FN_RET(0x007ba0ec); r_esp += 12; return;
}

void f_007ba11c(void) /* sub_7BA11C */
{
    FN_ENTER(0x007ba11c);
    /* 007ba11c: mov dword ptr [0xaae150], 0x3f800000 */ W32((u32)(0xaae150u), 0x3f800000u);
    /* 007ba126: mov dword ptr [0xaae154], 0x41000000 */ W32((u32)(0xaae154u), 0x41000000u);
    /* 007ba130: mov dword ptr [0xaae158], 0x3fc00000 */ W32((u32)(0xaae158u), 0x3fc00000u);
    /* 007ba13a: ret  */ FN_RET(0x007ba11c); r_esp += 4; return;
}

void f_007ba13c(void) /* sub_7BA13C */
{
    FN_ENTER(0x007ba13c);
    /* 007ba13c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ba13e: mov dword ptr [0xaae168], eax */ W32((u32)(0xaae168u), r_eax);
    /* 007ba143: mov dword ptr [0xaae164], eax */ W32((u32)(0xaae164u), r_eax);
    /* 007ba148: mov dword ptr [0xaae160], eax */ W32((u32)(0xaae160u), r_eax);
    /* 007ba14d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007ba14f:; BB(0x007ba14f);
    /* 007ba14f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba151: mov dword ptr [eax + 0xaad720], edx */ W32((u32)(r_eax+0xaad720u), r_edx);
    /* 007ba157: mov dword ptr [eax + 0xaad724], edx */ W32((u32)(r_eax+0xaad724u), r_edx);
    /* 007ba15d: mov dword ptr [eax + 0xaad728], edx */ W32((u32)(r_eax+0xaad728u), r_edx);
    /* 007ba163: mov dword ptr [eax + 0xaad72c], edx */ W32((u32)(r_eax+0xaad72cu), r_edx);
    /* 007ba169: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ba16c: cmp eax, 0xa30 */ {  u32 a = r_eax; u32 b = 0xa30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ba171: jl 0x7ba14f */ if ((fS!=fO)) goto L_007ba14f;
L_007ba173:; BB(0x007ba173);
    /* 007ba173: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba175: mov dword ptr [0xaae16c], eax */ W32((u32)(0xaae16cu), r_eax);
    /* 007ba17a: mov dword ptr [0xaad6e0], eax */ W32((u32)(0xaad6e0u), r_eax);
    /* 007ba17f: mov dword ptr [0xaad6e4], eax */ W32((u32)(0xaad6e4u), r_eax);
    /* 007ba184: mov dword ptr [0xaad6e8], eax */ W32((u32)(0xaad6e8u), r_eax);
    /* 007ba189: mov dword ptr [0xaad6ec], eax */ W32((u32)(0xaad6ecu), r_eax);
    /* 007ba18e: mov dword ptr [0xaad6f0], eax */ W32((u32)(0xaad6f0u), r_eax);
    /* 007ba193: mov dword ptr [0xaad6f4], eax */ W32((u32)(0xaad6f4u), r_eax);
    /* 007ba198: mov dword ptr [0xaad6f8], eax */ W32((u32)(0xaad6f8u), r_eax);
    /* 007ba19d: mov dword ptr [0xaad6fc], eax */ W32((u32)(0xaad6fcu), r_eax);
    /* 007ba1a2: mov dword ptr [0xaad700], eax */ W32((u32)(0xaad700u), r_eax);
    /* 007ba1a7: mov dword ptr [0xaad704], eax */ W32((u32)(0xaad704u), r_eax);
    /* 007ba1ac: mov dword ptr [0xaad708], eax */ W32((u32)(0xaad708u), r_eax);
    /* 007ba1b1: mov dword ptr [0xaad70c], eax */ W32((u32)(0xaad70cu), r_eax);
    /* 007ba1b6: mov dword ptr [0xaad710], eax */ W32((u32)(0xaad710u), r_eax);
    /* 007ba1bb: mov dword ptr [0xaad714], eax */ W32((u32)(0xaad714u), r_eax);
    /* 007ba1c0: mov dword ptr [0xaad718], eax */ W32((u32)(0xaad718u), r_eax);
    /* 007ba1c5: mov dword ptr [0xaad71c], eax */ W32((u32)(0xaad71cu), r_eax);
    /* 007ba1ca: ret  */ FN_RET(0x007ba13c); r_esp += 4; return;
}

void f_007ba1cc(void) /* sub_7BA1CC */
{
    FN_ENTER(0x007ba1cc);
    /* 007ba1cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ba1cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007ba1cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ba1d1: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x7ba1d6u); f_007ba1f0();
    /* 007ba1d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007ba1da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba1dc: jne 0x7ba1e2 */ if (!fZ) goto L_007ba1e2;
L_007ba1de:; BB(0x007ba1de);
    /* 007ba1de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ba1df: ret 4 */ FN_RET(0x007ba1cc); r_esp += 8; return;
L_007ba1e2:; BB(0x007ba1e2);
    /* 007ba1e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ba1e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7ba1e8u); f_005c2f74();
    /* 007ba1e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ba1e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ba1ea: ret 4 */ FN_RET(0x007ba1cc); r_esp += 8; return;
}

void f_007ba1f0(void) /* sub_7BA1F0 */
{
    FN_ENTER(0x007ba1f0);
    /* 007ba1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ba1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 007ba1f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007ba1f5: push 0x8f60c4 */ { u32 v = 0x8f60c4u; r_esp -= 4; W32(r_esp, v); }
    /* 007ba1fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007ba200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ba201: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007ba208: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ba20b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007ba20e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007ba211: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007ba214: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007ba217: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007ba21a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007ba221: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007ba224: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 007ba22a: mov dword ptr [ecx], 0xb466c8 */ W32((u32)(r_ecx), 0xb466c8u);
    /* 007ba230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ba232: je 0x7ba25e */ if (fZ) goto L_007ba25e;
L_007ba234:; BB(0x007ba234);
    /* 007ba234: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007ba238: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ba23d: jl 0x7ba25e */ if ((fS!=fO)) goto L_007ba25e;
L_007ba23f:; BB(0x007ba23f);
    /* 007ba23f: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ba244: jge 0x7ba25e */ if ((fS==fO)) goto L_007ba25e;
L_007ba246:; BB(0x007ba246);
    /* 007ba246: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 007ba248: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007ba249: call 0x81139c */ r_esp -= 4; W32(r_esp, 0x7ba24eu); f_0081139c();
    /* 007ba24e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ba251: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007ba254: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
L_007ba25e:; BB(0x007ba25e);
    /* 007ba25e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007ba265: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7ba26au); f_008171e8();
    /* 007ba26a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007ba26d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007ba274: mov esp, ebp */ r_esp = r_ebp;
    /* 007ba276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ba277: ret  */ FN_RET(0x007ba1f0); r_esp += 4; return;
}

void f_007ba278(void) /* sub_7BA278 */
{
    FN_ENTER(0x007ba278);
    /* 007ba278: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ba279: mov edi, ecx */ r_edi = r_ecx;
    /* 007ba27b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ba27f: mov ecx, edi */ r_ecx = r_edi;
    /* 007ba281: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7ba286u); f_008193cc();
    /* 007ba286: mov dword ptr [edi], 0xb466c8 */ W32((u32)(r_edi), 0xb466c8u);
    /* 007ba28c: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 007ba291: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba293: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 007ba29a: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 007ba29d: mov word ptr [edi + 0x1c], dx */ W16((u32)(r_edi+0x1cu), (u16)r_edx);
    /* 007ba2a1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 007ba2a6: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 007ba2ad: mov word ptr [edi + 0x28], ax */ W16((u32)(r_edi+0x28u), (u16)r_eax);
    /* 007ba2b1: mov word ptr [edi + 0x2a], cx */ W16((u32)(r_edi+0x2au), (u16)r_ecx);
    /* 007ba2b5: mov word ptr [edi + 0x2c], ax */ W16((u32)(r_edi+0x2cu), (u16)r_eax);
    /* 007ba2b9: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 007ba2c0: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 007ba2c3: mov dword ptr [edi + 0x34], ecx */ W32((u32)(r_edi+0x34u), r_ecx);
    /* 007ba2c6: mov dword ptr [edi + 0x80], ecx */ W32((u32)(r_edi+0x80u), r_ecx);
    /* 007ba2cc: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
    /* 007ba2d3: mov dword ptr [edi + 0x5c], ecx */ W32((u32)(r_edi+0x5cu), r_ecx);
    /* 007ba2d6: mov dword ptr [edi + 0x60], ecx */ W32((u32)(r_edi+0x60u), r_ecx);
    /* 007ba2d9: mov dword ptr [edi + 0x64], ecx */ W32((u32)(r_edi+0x64u), r_ecx);
    /* 007ba2dc: mov dword ptr [edi + 0x44], 0 */ W32((u32)(r_edi+0x44u), 0x0u);
    /* 007ba2e3: mov word ptr [edi + 0x1e], cx */ W16((u32)(r_edi+0x1eu), (u16)r_ecx);
    /* 007ba2e7: mov eax, edi */ r_eax = r_edi;
    /* 007ba2e9: mov dword ptr [edi + 0x48], 0 */ W32((u32)(r_edi+0x48u), 0x0u);
    /* 007ba2f0: mov dword ptr [edi + 0x4c], 0 */ W32((u32)(r_edi+0x4cu), 0x0u);
    /* 007ba2f7: mov dword ptr [edi + 0x50], 0 */ W32((u32)(r_edi+0x50u), 0x0u);
    /* 007ba2fe: mov dword ptr [edi + 0x54], 0 */ W32((u32)(r_edi+0x54u), 0x0u);
    /* 007ba305: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 007ba30c: mov dword ptr [edi + 0x68], 0x3f800000 */ W32((u32)(r_edi+0x68u), 0x3f800000u);
    /* 007ba313: mov dword ptr [edi + 0x6c], 0x3f800000 */ W32((u32)(r_edi+0x6cu), 0x3f800000u);
    /* 007ba31a: mov dword ptr [edi + 0x70], 0x3f800000 */ W32((u32)(r_edi+0x70u), 0x3f800000u);
    /* 007ba321: mov dword ptr [edi + 0x74], 0 */ W32((u32)(r_edi+0x74u), 0x0u);
    /* 007ba328: mov dword ptr [edi + 0x78], 0 */ W32((u32)(r_edi+0x78u), 0x0u);
    /* 007ba32f: mov dword ptr [edi + 0x7c], 0 */ W32((u32)(r_edi+0x7cu), 0x0u);
    /* 007ba336: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ba337: ret 4 */ FN_RET(0x007ba278); r_esp += 8; return;
}

void f_007ba33c(void) /* sub_7BA33C */
{
    FN_ENTER(0x007ba33c);
    /* 007ba33c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ba33d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ba33e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007ba342: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 007ba346: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 007ba34a: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 007ba34d: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 007ba350: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 007ba353: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 007ba356: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 007ba359: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 007ba35c: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 007ba35f: mov dword ptr [ecx + 0x54], esi */ W32((u32)(r_ecx+0x54u), r_esi);
    /* 007ba362: mov dword ptr [ecx + 0x58], edi */ W32((u32)(r_ecx+0x58u), r_edi);
    /* 007ba365: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 007ba368: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 007ba36b: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 007ba36e: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 007ba371: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007ba374: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 007ba377: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 007ba37a: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 007ba37d: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007ba380: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 007ba383: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 007ba386: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 007ba389: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 007ba38d: mov word ptr [ecx + 0x28], dx */ W16((u32)(r_ecx+0x28u), (u16)r_edx);
    /* 007ba391: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007ba394: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 007ba39a: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 007ba39d: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 007ba3a3: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 007ba3a6: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 007ba3ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba3ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ba3ae: ret 4 */ FN_RET(0x007ba33c); r_esp += 8; return;
}

void f_007ba3b4(void) /* sub_7BA3B4 */
{
    FN_ENTER(0x007ba3b4);
    /* 007ba3b4: mov eax, 0x1000 */ r_eax = 0x1000u;
    /* 007ba3b9: mov word ptr [0xaae198], ax */ W16((u32)(0xaae198u), (u16)r_eax);
    /* 007ba3bf: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 007ba3c4: mov word ptr [0xaae194], dx */ W16((u32)(0xaae194u), (u16)r_edx);
    /* 007ba3cb: ret  */ FN_RET(0x007ba3b4); r_esp += 4; return;
}

void f_007ba3cc(void) /* sub_7BA3CC */
{
    FN_ENTER(0x007ba3cc);
    /* 007ba3cc: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007ba3d1: movzx edx, word ptr [0xaae194] */ r_edx = (u32)R16((u32)(0xaae194u));
    /* 007ba3d8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba3da: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 007ba3dd: mov word ptr [0xaae194], cx */ W16((u32)(0xaae194u), (u16)r_ecx);
    /* 007ba3e4: mov word ptr [0xaae190], cx */ W16((u32)(0xaae190u), (u16)r_ecx);
    /* 007ba3eb: ret  */ FN_RET(0x007ba3cc); r_esp += 4; return;
}

void f_007ba3ec(void) /* sub_7BA3EC */
{
    FN_ENTER(0x007ba3ec);
    /* 007ba3ec: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007ba3f1: movzx edx, word ptr [0xaae198] */ r_edx = (u32)R16((u32)(0xaae198u));
    /* 007ba3f8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba3fa: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 007ba3fd: mov word ptr [0xaae198], cx */ W16((u32)(0xaae198u), (u16)r_ecx);
    /* 007ba404: mov word ptr [0xaae18c], cx */ W16((u32)(0xaae18cu), (u16)r_ecx);
    /* 007ba40b: ret  */ FN_RET(0x007ba3ec); r_esp += 4; return;
}

void f_007ba40c(void) /* sub_7BA40C */
{
    FN_ENTER(0x007ba40c);
    /* 007ba40c: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
    /* 007ba413: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba415: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 007ba41c: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 007ba41f: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 007ba422: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 007ba425: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 007ba42c: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 007ba42f: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 007ba435: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 007ba43c: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 007ba443: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 007ba44a: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 007ba451: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 007ba458: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
    /* 007ba45f: ret  */ FN_RET(0x007ba40c); r_esp += 4; return;
}

void f_007ba460(void) /* sub_7BA460 */
{
    FN_ENTER(0x007ba460);
    /* 007ba460: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba463: mov eax, ecx */ r_eax = r_ecx;
    /* 007ba465: ret  */ FN_RET(0x007ba460); r_esp += 4; return;
}

void f_007ba468(void) /* sub_7BA468 */
{
    FN_ENTER(0x007ba468);
    /* 007ba468: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ba469: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ba46c: mov esi, ecx */ r_esi = r_ecx;
    /* 007ba46e: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007ba472: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ba477: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007ba47b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007ba47f: jne 0x7ba5f4 */ if (!fZ) goto L_007ba5f4;
L_007ba485:; BB(0x007ba485);
    /* 007ba485: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 007ba48a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ba48d: je 0x7ba62c */ if (fZ) goto L_007ba62c;
L_007ba493:; BB(0x007ba493);
    /* 007ba493: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007ba496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ba497: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 007ba49a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ba49b: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x7ba4a0u); f_00835c3c();
    /* 007ba4a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ba4a3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007ba4a7: fld dword ptr [0x97e3f8] */ FPUSH(R_F32((u32)(0x97e3f8u)));
    /* 007ba4ad: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007ba4af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ba4b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ba4b2: jb 0x7ba5e1 */ if (fC) goto L_007ba5e1;
L_007ba4b8:; BB(0x007ba4b8);
    /* 007ba4b8: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007ba4bc: fchs  */ ST(0) = -ST(0);
    /* 007ba4be: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007ba4c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba4c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ba4c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ba4c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ba4c7: ja 0x7ba5d0 */ if ((!fC&&!fZ)) goto L_007ba5d0;
L_007ba4cd:; BB(0x007ba4cd);
    /* 007ba4cd: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 007ba4d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ba4d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ba4d3: jbe 0x7ba541 */ if ((fC||fZ)) goto L_007ba541;
L_007ba4d5:; BB(0x007ba4d5);
    /* 007ba4d5: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 007ba4db: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007ba4df: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007ba4e1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba4e3: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 007ba4e6: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 007ba4ec: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 007ba4f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba4f4: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 007ba4f6: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 007ba4f9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ba4fb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007ba4fd: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 007ba500: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba502: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007ba505: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba507: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007ba50b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007ba50f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007ba513: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ba514: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007ba518: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007ba51a: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x7ba51fu); f_0082f09c();
    /* 007ba51f: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007ba523: fcomp dword ptr [0x97e3f8] */ fx_compare(ST(0), R_F32((u32)(0x97e3f8u))); FPOP();
    /* 007ba529: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ba52b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ba52c: jae 0x7ba5bb */ if (!fC) goto L_007ba5bb;
L_007ba532:; BB(0x007ba532);
    /* 007ba532: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba534: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba538: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ba53a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba53d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba53e: ret 8 */ FN_RET(0x007ba468); r_esp += 12; return;
L_007ba541:; BB(0x007ba541);
    /* 007ba541: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 007ba547: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007ba54b: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 007ba551: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 007ba557: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ba559: fchs  */ ST(0) = -ST(0);
    /* 007ba55b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007ba55d: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 007ba560: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007ba563: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007ba567: fchs  */ ST(0) = -ST(0);
    /* 007ba569: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007ba56b: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 007ba56e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007ba572: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba574: fchs  */ ST(0) = -ST(0);
    /* 007ba576: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007ba578: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 007ba57b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007ba57f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ba580: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007ba584: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007ba586: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x7ba58bu); f_0082f09c();
    /* 007ba58b: movsx eax, word ptr [0xa48a4c] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 007ba592: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 007ba599: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ba59b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007ba59f: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 007ba5a3: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 007ba5a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ba5a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ba5aa: jae 0x7ba5bb */ if (!fC) goto L_007ba5bb;
L_007ba5ac:; BB(0x007ba5ac);
    /* 007ba5ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba5ae: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba5b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ba5b4: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba5b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba5b8: ret 8 */ FN_RET(0x007ba468); r_esp += 12; return;
L_007ba5bb:; BB(0x007ba5bb);
    /* 007ba5bb: mov edx, 1 */ r_edx = 0x1u;
    /* 007ba5c0: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba5c4: mov eax, 1 */ r_eax = 0x1u;
    /* 007ba5c9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba5cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba5cd: ret 8 */ FN_RET(0x007ba468); r_esp += 12; return;
L_007ba5d0:; BB(0x007ba5d0);
    /* 007ba5d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ba5d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba5d4: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba5d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ba5da: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba5dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba5de: ret 8 */ FN_RET(0x007ba468); r_esp += 12; return;
L_007ba5e1:; BB(0x007ba5e1);
    /* 007ba5e1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007ba5e3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ba5e5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba5e7: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba5eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ba5ed: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba5f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba5f1: ret 8 */ FN_RET(0x007ba468); r_esp += 12; return;
L_007ba5f4:; BB(0x007ba5f4);
    /* 007ba5f4: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ba5f8: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 007ba5fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ba5fc: call 0x502c78 */ r_esp -= 4; W32(r_esp, 0x7ba601u); f_00502c78();
    /* 007ba601: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ba604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ba606: je 0x7ba61d */ if (fZ) goto L_007ba61d;
L_007ba608:; BB(0x007ba608);
    /* 007ba608: mov edx, 1 */ r_edx = 0x1u;
    /* 007ba60d: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba611: mov eax, 1 */ r_eax = 0x1u;
    /* 007ba616: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba619: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba61a: ret 8 */ FN_RET(0x007ba468); r_esp += 12; return;
L_007ba61d:; BB(0x007ba61d);
    /* 007ba61d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba61f: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba623: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ba625: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba628: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba629: ret 8 */ FN_RET(0x007ba468); r_esp += 12; return;
L_007ba62c:; BB(0x007ba62c);
    /* 007ba62c: movsx eax, word ptr [esi + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1eu));
    /* 007ba630: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba633: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba634: ret 8 */ FN_RET(0x007ba468); r_esp += 12; return;
}

void f_007ba638(void) /* sub_7BA638 */
{
    FN_ENTER(0x007ba638);
    /* 007ba638: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ba639: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ba63c: mov esi, ecx */ r_esi = r_ecx;
    /* 007ba63e: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007ba642: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ba647: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 007ba64b: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007ba64f: jne 0x7ba7ee */ if (!fZ) goto L_007ba7ee;
L_007ba655:; BB(0x007ba655);
    /* 007ba655: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 007ba65a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ba65d: je 0x7ba826 */ if (fZ) goto L_007ba826;
L_007ba663:; BB(0x007ba663);
    /* 007ba663: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007ba666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ba667: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 007ba66a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ba66b: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x7ba670u); f_00835c3c();
    /* 007ba670: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ba673: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007ba677: fld dword ptr [0x97e3f4] */ FPUSH(R_F32((u32)(0x97e3f4u)));
    /* 007ba67d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007ba67f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ba681: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba683: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007ba687: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ba688: jb 0x7ba7dd */ if (fC) goto L_007ba7dd;
L_007ba68e:; BB(0x007ba68e);
    /* 007ba68e: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007ba692: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007ba696: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba698: fchs  */ ST(0) = -ST(0);
    /* 007ba69a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007ba69c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ba69e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ba69f: ja 0x7ba7cc */ if ((!fC&&!fZ)) goto L_007ba7cc;
L_007ba6a5:; BB(0x007ba6a5);
    /* 007ba6a5: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 007ba6a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ba6aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ba6ab: jbe 0x7ba715 */ if ((fC||fZ)) goto L_007ba715;
L_007ba6ad:; BB(0x007ba6ad);
    /* 007ba6ad: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 007ba6b3: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007ba6b7: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007ba6b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba6bb: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 007ba6be: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 007ba6c4: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 007ba6ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba6cc: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 007ba6ce: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 007ba6d1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ba6d3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007ba6d5: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 007ba6d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba6da: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007ba6dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba6df: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007ba6e3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007ba6e7: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007ba6eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ba6ec: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007ba6f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007ba6f2: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x7ba6f7u); f_0082f09c();
    /* 007ba6f7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007ba6fb: fcomp dword ptr [0x97e3f4] */ fx_compare(ST(0), R_F32((u32)(0x97e3f4u))); FPOP();
    /* 007ba701: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ba703: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ba704: jae 0x7ba780 */ if (!fC) goto L_007ba780;
L_007ba706:; BB(0x007ba706);
    /* 007ba706: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba708: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba70c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ba70e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba711: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba712: ret 0xc */ FN_RET(0x007ba638); r_esp += 16; return;
L_007ba715:; BB(0x007ba715);
    /* 007ba715: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 007ba71b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007ba71f: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 007ba725: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 007ba72b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ba72d: fchs  */ ST(0) = -ST(0);
    /* 007ba72f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007ba731: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 007ba734: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007ba737: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007ba73b: fchs  */ ST(0) = -ST(0);
    /* 007ba73d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007ba73f: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 007ba742: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007ba746: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba748: fchs  */ ST(0) = -ST(0);
    /* 007ba74a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007ba74c: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 007ba74f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007ba753: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ba754: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007ba758: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007ba75a: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x7ba75fu); f_0082f09c();
    /* 007ba75f: movsx eax, word ptr [0xa48a4c] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 007ba766: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 007ba76d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ba76f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007ba773: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 007ba777: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 007ba77b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ba77d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ba77e: jb 0x7ba7bd */ if (fC) goto L_007ba7bd;
L_007ba780:; BB(0x007ba780);
    /* 007ba780: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007ba784: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007ba788: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ba78a: fchs  */ ST(0) = -ST(0);
    /* 007ba78c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007ba78e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ba790: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ba791: jbe 0x7ba7a8 */ if ((fC||fZ)) goto L_007ba7a8;
L_007ba793:; BB(0x007ba793);
    /* 007ba793: mov edx, 2 */ r_edx = 0x2u;
    /* 007ba798: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba79c: mov eax, 2 */ r_eax = 0x2u;
    /* 007ba7a1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba7a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba7a5: ret 0xc */ FN_RET(0x007ba638); r_esp += 16; return;
L_007ba7a8:; BB(0x007ba7a8);
    /* 007ba7a8: mov edx, 1 */ r_edx = 0x1u;
    /* 007ba7ad: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba7b1: mov eax, 1 */ r_eax = 0x1u;
    /* 007ba7b6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba7b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba7ba: ret 0xc */ FN_RET(0x007ba638); r_esp += 16; return;
L_007ba7bd:; BB(0x007ba7bd);
    /* 007ba7bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba7bf: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba7c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ba7c5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba7c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba7c9: ret 0xc */ FN_RET(0x007ba638); r_esp += 16; return;
L_007ba7cc:; BB(0x007ba7cc);
    /* 007ba7cc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ba7ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba7d0: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba7d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ba7d6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba7d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba7da: ret 0xc */ FN_RET(0x007ba638); r_esp += 16; return;
L_007ba7dd:; BB(0x007ba7dd);
    /* 007ba7dd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ba7df: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba7e1: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba7e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ba7e7: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba7ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba7eb: ret 0xc */ FN_RET(0x007ba638); r_esp += 16; return;
L_007ba7ee:; BB(0x007ba7ee);
    /* 007ba7ee: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ba7f2: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 007ba7f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ba7f6: call 0x502c78 */ r_esp -= 4; W32(r_esp, 0x7ba7fbu); f_00502c78();
    /* 007ba7fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ba7fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ba800: je 0x7ba817 */ if (fZ) goto L_007ba817;
L_007ba802:; BB(0x007ba802);
    /* 007ba802: mov edx, 1 */ r_edx = 0x1u;
    /* 007ba807: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba80b: mov eax, 1 */ r_eax = 0x1u;
    /* 007ba810: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba813: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba814: ret 0xc */ FN_RET(0x007ba638); r_esp += 16; return;
L_007ba817:; BB(0x007ba817);
    /* 007ba817: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ba819: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007ba81d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ba81f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba822: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba823: ret 0xc */ FN_RET(0x007ba638); r_esp += 16; return;
L_007ba826:; BB(0x007ba826);
    /* 007ba826: movsx eax, word ptr [esi + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1eu));
    /* 007ba82a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ba82d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba82e: ret 0xc */ FN_RET(0x007ba638); r_esp += 16; return;
}

void f_007ba834(void) /* sub_7BA834 */
{
    FN_ENTER(0x007ba834);
    /* 007ba834: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ba835: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ba836: mov esi, ecx */ r_esi = r_ecx;
    /* 007ba838: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 007ba83c: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba841: je 0x7ba848 */ if (fZ) goto L_007ba848;
L_007ba843:; BB(0x007ba843);
    /* 007ba843: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ba844: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba845: ret 4 */ FN_RET(0x007ba834); r_esp += 8; return;
L_007ba848:; BB(0x007ba848);
    /* 007ba848: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 007ba84b: and eax, 0x70000000 */ {  u32 a = r_eax; u32 b = 0x70000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007ba850: cmp eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ba855: jne 0x7ba86a */ if (!fZ) goto L_007ba86a;
L_007ba857:; BB(0x007ba857);
    /* 007ba857: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007ba85c: call 0x7ba90d */ r_esp -= 4; W32(r_esp, 0x7ba861u); f_007ba90d();
    /* 007ba861: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 007ba865: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ba866: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba867: ret 4 */ FN_RET(0x007ba834); r_esp += 8; return;
L_007ba86a:; BB(0x007ba86a);
    /* 007ba86a: cmp eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ba86f: jne 0x7ba884 */ if (!fZ) goto L_007ba884;
L_007ba871:; BB(0x007ba871);
    /* 007ba871: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007ba876: call 0x7ba8d5 */ r_esp -= 4; W32(r_esp, 0x7ba87bu); f_007ba8d5();
    /* 007ba87b: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 007ba87f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ba880: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba881: ret 4 */ FN_RET(0x007ba834); r_esp += 8; return;
L_007ba884:; BB(0x007ba884);
    /* 007ba884: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007ba889: call 0x7ba89d */ r_esp -= 4; W32(r_esp, 0x7ba88eu); f_007ba89d();
    /* 007ba88e: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 007ba892: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ba893: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba894: ret 4 */ FN_RET(0x007ba834); r_esp += 8; return;
}

void f_007ba898(void) /* sub_7BA898 */
{
    FN_ENTER(0x007ba898);
    /* 007ba898: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007ba89d: mov edx, eax */ r_edx = r_eax;
    /* 007ba89f: movzx eax, word ptr [0xaae194] */ r_eax = (u32)R16((u32)(0xaae194u));
    /* 007ba8a6: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 007ba8a9: lea ecx, [edx + eax + 1] */ r_ecx = (u32)(r_edx+r_eax+0x1u);
    /* 007ba8ad: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba8b3: jl 0x7ba8c8 */ if ((fS!=fO)) goto L_007ba8c8;
L_007ba8b5:; BB(0x007ba8b5);
    /* 007ba8b5: movzx eax, word ptr [0xaae190] */ r_eax = (u32)R16((u32)(0xaae190u));
    /* 007ba8bc: lea edx, [edx + eax + 1] */ r_edx = (u32)(r_edx+r_eax+0x1u);
    /* 007ba8c0: mov word ptr [0xaae194], dx */ W16((u32)(0xaae194u), (u16)r_edx);
    /* 007ba8c7: ret  */ FN_RET(0x007ba898); r_esp += 4; return;
L_007ba8c8:; BB(0x007ba8c8);
    /* 007ba8c8: mov word ptr [0xaae194], cx */ W16((u32)(0xaae194u), (u16)r_ecx);
    /* 007ba8cf: ret  */ FN_RET(0x007ba898); r_esp += 4; return;
}

void f_007ba89d(void) /* sub_7BA89D */
{
    FN_ENTER(0x007ba89d);
    /* 007ba89d: mov edx, eax */ r_edx = r_eax;
    /* 007ba89f: movzx eax, word ptr [0xaae194] */ r_eax = (u32)R16((u32)(0xaae194u));
    /* 007ba8a6: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 007ba8a9: lea ecx, [edx + eax + 1] */ r_ecx = (u32)(r_edx+r_eax+0x1u);
    /* 007ba8ad: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba8b3: jl 0x7ba8c8 */ if ((fS!=fO)) goto L_007ba8c8;
L_007ba8b5:; BB(0x007ba8b5);
    /* 007ba8b5: movzx eax, word ptr [0xaae190] */ r_eax = (u32)R16((u32)(0xaae190u));
    /* 007ba8bc: lea edx, [edx + eax + 1] */ r_edx = (u32)(r_edx+r_eax+0x1u);
    /* 007ba8c0: mov word ptr [0xaae194], dx */ W16((u32)(0xaae194u), (u16)r_edx);
    /* 007ba8c7: ret  */ FN_RET(0x007ba89d); r_esp += 4; return;
L_007ba8c8:; BB(0x007ba8c8);
    /* 007ba8c8: mov word ptr [0xaae194], cx */ W16((u32)(0xaae194u), (u16)r_ecx);
    /* 007ba8cf: ret  */ FN_RET(0x007ba89d); r_esp += 4; return;
}

void f_007ba8d0(void) /* sub_7BA8D0 */
{
    FN_ENTER(0x007ba8d0);
    /* 007ba8d0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007ba8d5: mov edx, eax */ r_edx = r_eax;
    /* 007ba8d7: movzx eax, word ptr [0xaae198] */ r_eax = (u32)R16((u32)(0xaae198u));
    /* 007ba8de: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 007ba8e1: lea ecx, [edx + eax + 1] */ r_ecx = (u32)(r_edx+r_eax+0x1u);
    /* 007ba8e5: cmp ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba8eb: jl 0x7ba900 */ if ((fS!=fO)) goto L_007ba900;
L_007ba8ed:; BB(0x007ba8ed);
    /* 007ba8ed: movzx eax, word ptr [0xaae18c] */ r_eax = (u32)R16((u32)(0xaae18cu));
    /* 007ba8f4: lea edx, [edx + eax + 1] */ r_edx = (u32)(r_edx+r_eax+0x1u);
    /* 007ba8f8: mov word ptr [0xaae198], dx */ W16((u32)(0xaae198u), (u16)r_edx);
    /* 007ba8ff: ret  */ FN_RET(0x007ba8d0); r_esp += 4; return;
L_007ba900:; BB(0x007ba900);
    /* 007ba900: mov word ptr [0xaae198], cx */ W16((u32)(0xaae198u), (u16)r_ecx);
    /* 007ba907: ret  */ FN_RET(0x007ba8d0); r_esp += 4; return;
}

void f_007ba8d5(void) /* sub_7BA8D5 */
{
    FN_ENTER(0x007ba8d5);
    /* 007ba8d5: mov edx, eax */ r_edx = r_eax;
    /* 007ba8d7: movzx eax, word ptr [0xaae198] */ r_eax = (u32)R16((u32)(0xaae198u));
    /* 007ba8de: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 007ba8e1: lea ecx, [edx + eax + 1] */ r_ecx = (u32)(r_edx+r_eax+0x1u);
    /* 007ba8e5: cmp ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba8eb: jl 0x7ba900 */ if ((fS!=fO)) goto L_007ba900;
L_007ba8ed:; BB(0x007ba8ed);
    /* 007ba8ed: movzx eax, word ptr [0xaae18c] */ r_eax = (u32)R16((u32)(0xaae18cu));
    /* 007ba8f4: lea edx, [edx + eax + 1] */ r_edx = (u32)(r_edx+r_eax+0x1u);
    /* 007ba8f8: mov word ptr [0xaae198], dx */ W16((u32)(0xaae198u), (u16)r_edx);
    /* 007ba8ff: ret  */ FN_RET(0x007ba8d5); r_esp += 4; return;
L_007ba900:; BB(0x007ba900);
    /* 007ba900: mov word ptr [0xaae198], cx */ W16((u32)(0xaae198u), (u16)r_ecx);
    /* 007ba907: ret  */ FN_RET(0x007ba8d5); r_esp += 4; return;
}

void f_007ba90d(void) /* sub_7BA90D */
{
    FN_ENTER(0x007ba90d);
    /* 007ba90d: movzx ecx, word ptr [0xaae19c] */ r_ecx = (u32)R16((u32)(0xaae19cu));
    /* 007ba914: lea edx, [ecx + eax + 1] */ r_edx = (u32)(r_ecx+r_eax+0x1u);
    /* 007ba918: mov word ptr [0xaae19c], dx */ W16((u32)(0xaae19cu), (u16)r_edx);
    /* 007ba91f: mov eax, ecx */ r_eax = r_ecx;
    /* 007ba921: ret  */ FN_RET(0x007ba90d); r_esp += 4; return;
}

void f_007ba924(void) /* sub_7BA924 */
{
    FN_ENTER(0x007ba924);
    /* 007ba924: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ba925: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ba926: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ba927: mov edi, ecx */ r_edi = r_ecx;
    /* 007ba929: movsx ebp, word ptr [esp + 0x10] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 007ba92e: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007ba932: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba937: jl 0x7ba943 */ if ((fS!=fO)) goto L_007ba943;
L_007ba939:; BB(0x007ba939);
    /* 007ba939: mov word ptr [edi + 0x28], bp */ W16((u32)(r_edi+0x28u), (u16)r_ebp);
    /* 007ba93d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ba93e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ba93f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ba940: ret 4 */ FN_RET(0x007ba924); r_esp += 8; return;
L_007ba943:; BB(0x007ba943);
    /* 007ba943: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7ba948u); f_00807ac0();
    /* 007ba948: mov ebx, eax */ r_ebx = r_eax;
    /* 007ba94a: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba94d: je 0x7ba970 */ if (fZ) goto L_007ba970;
L_007ba94f:; BB(0x007ba94f);
    /* 007ba94f: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba952: je 0x7ba970 */ if (fZ) goto L_007ba970;
L_007ba954:; BB(0x007ba954);
    /* 007ba954: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x7ba959u); f_00807e10();
    /* 007ba959: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba95b: jne 0x7ba970 */ if (!fZ) goto L_007ba970;
L_007ba95d:; BB(0x007ba95d);
    /* 007ba95d: call 0x807de4 */ r_esp -= 4; W32(r_esp, 0x7ba962u); f_00807de4();
    /* 007ba962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba964: jne 0x7ba970 */ if (!fZ) goto L_007ba970;
L_007ba966:; BB(0x007ba966);
    /* 007ba966: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba969: je 0x7ba970 */ if (fZ) goto L_007ba970;
L_007ba96b:; BB(0x007ba96b);
    /* 007ba96b: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba96e: jne 0x7ba974 */ if (!fZ) goto L_007ba974;
L_007ba970:; BB(0x007ba970);
    /* 007ba970: mov word ptr [edi + 0x2e], bp */ W16((u32)(r_edi+0x2eu), (u16)r_ebp);
L_007ba974:; BB(0x007ba974);
    /* 007ba974: mov word ptr [edi + 0x28], bp */ W16((u32)(r_edi+0x28u), (u16)r_ebp);
    /* 007ba978: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ba979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ba97a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ba97b: ret 4 */ FN_RET(0x007ba924); r_esp += 8; return;
}

void f_007ba980(void) /* sub_7BA980 */
{
    FN_ENTER(0x007ba980);
    /* 007ba980: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ba981: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ba982: mov edi, ecx */ r_edi = r_ecx;
    /* 007ba984: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x7ba989u); f_00807e10();
    /* 007ba989: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ba98b: jne 0x7ba9d1 */ if (!fZ) goto L_007ba9d1;
L_007ba98d:; BB(0x007ba98d);
    /* 007ba98d: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007ba991: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba996: jge 0x7ba9ca */ if ((fS==fO)) goto L_007ba9ca;
L_007ba998:; BB(0x007ba998);
    /* 007ba998: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7ba99du); f_00807ac0();
    /* 007ba99d: mov esi, eax */ r_esi = r_eax;
    /* 007ba99f: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba9a2: je 0x7ba9b2 */ if (fZ) goto L_007ba9b2;
L_007ba9a4:; BB(0x007ba9a4);
    /* 007ba9a4: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba9a7: je 0x7ba9b2 */ if (fZ) goto L_007ba9b2;
L_007ba9a9:; BB(0x007ba9a9);
    /* 007ba9a9: call 0x807de4 */ r_esp -= 4; W32(r_esp, 0x7ba9aeu); f_00807de4();
    /* 007ba9ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba9b0: je 0x7ba9b9 */ if (fZ) goto L_007ba9b9;
L_007ba9b2:; BB(0x007ba9b2);
    /* 007ba9b2: movsx eax, word ptr [edi + 0x2e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2eu));
    /* 007ba9b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba9b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ba9b8: ret  */ FN_RET(0x007ba980); r_esp += 4; return;
L_007ba9b9:; BB(0x007ba9b9);
    /* 007ba9b9: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba9bc: je 0x7ba9b2 */ if (fZ) goto L_007ba9b2;
L_007ba9be:; BB(0x007ba9be);
    /* 007ba9be: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba9c1: je 0x7ba9b2 */ if (fZ) goto L_007ba9b2;
L_007ba9c3:; BB(0x007ba9c3);
    /* 007ba9c3: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 007ba9c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba9c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ba9c9: ret  */ FN_RET(0x007ba980); r_esp += 4; return;
L_007ba9ca:; BB(0x007ba9ca);
    /* 007ba9ca: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 007ba9ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba9cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ba9d0: ret  */ FN_RET(0x007ba980); r_esp += 4; return;
L_007ba9d1:; BB(0x007ba9d1);
    /* 007ba9d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba9d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ba9d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ba9d5: ret  */ FN_RET(0x007ba980); r_esp += 4; return;
}

void f_007ba9d8(void) /* sub_7BA9D8 */
{
    FN_ENTER(0x007ba9d8);
    /* 007ba9d8: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007ba9dc: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba9e2: mov eax, 0 */ r_eax = 0x0u;
    /* 007ba9e7: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 007ba9ea: ret  */ FN_RET(0x007ba9d8); r_esp += 4; return;
}

void f_007ba9ec(void) /* sub_7BA9EC */
{
    FN_ENTER(0x007ba9ec);
    /* 007ba9ec: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007ba9f1: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ba9f6: je 0x7ba9fe */ if (fZ) goto L_007ba9fe;
L_007ba9f8:; BB(0x007ba9f8);
    /* 007ba9f8: and eax, 0x5000 */ {  u32 a = r_eax; u32 b = 0x5000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ba9fd: ret  */ FN_RET(0x007ba9ec); r_esp += 4; return;
L_007ba9fe:; BB(0x007ba9fe);
    /* 007ba9fe: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007baa03: ret  */ FN_RET(0x007ba9ec); r_esp += 4; return;
}

void f_007baa04(void) /* sub_7BAA04 */
{
    FN_ENTER(0x007baa04);
    /* 007baa04: mov dword ptr [0xaae180], 0x3f800000 */ W32((u32)(0xaae180u), 0x3f800000u);
    /* 007baa0e: mov dword ptr [0xaae184], 0x41000000 */ W32((u32)(0xaae184u), 0x41000000u);
    /* 007baa18: mov dword ptr [0xaae188], 0x3fc00000 */ W32((u32)(0xaae188u), 0x3fc00000u);
    /* 007baa22: ret  */ FN_RET(0x007baa04); r_esp += 4; return;
}

void f_007baa24(void) /* sub_7BAA24 */
{
    FN_ENTER(0x007baa24);
    /* 007baa24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007baa26: mov word ptr [0xaae19c], ax */ W16((u32)(0xaae19cu), (u16)r_eax);
    /* 007baa2c: mov edx, 0x1000 */ r_edx = 0x1000u;
    /* 007baa31: mov ecx, 0x4000 */ r_ecx = 0x4000u;
    /* 007baa36: mov word ptr [0xaae198], dx */ W16((u32)(0xaae198u), (u16)r_edx);
    /* 007baa3d: mov word ptr [0xaae194], cx */ W16((u32)(0xaae194u), (u16)r_ecx);
    /* 007baa44: ret  */ FN_RET(0x007baa24); r_esp += 4; return;
}

void f_007baa48(void) /* sub_7BAA48 */
{
    FN_ENTER(0x007baa48);
    /* 007baa48: mov dword ptr [0xaae1a4], 0x3f800000 */ W32((u32)(0xaae1a4u), 0x3f800000u);
    /* 007baa52: mov dword ptr [0xaae1a8], 0x41000000 */ W32((u32)(0xaae1a8u), 0x41000000u);
    /* 007baa5c: mov dword ptr [0xaae1ac], 0x3fc00000 */ W32((u32)(0xaae1acu), 0x3fc00000u);
    /* 007baa66: ret  */ FN_RET(0x007baa48); r_esp += 4; return;
}

void f_007baa68(void)
{
    FN_ENTER(0x007baa68);
    /* 007baa68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007baa69: mov ebp, esp */ r_ebp = r_esp;
    /* 007baa6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007baa6d: push 0x8f60ec */ { u32 v = 0x8f60ecu; r_esp -= 4; W32(r_esp, v); }
    /* 007baa72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007baa78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007baa79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007baa80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007baa83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007baa86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007baa89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007baa8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007baa8f: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 007baa94: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007baa9b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7baaa0u); f_005caba4();
    /* 007baaa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007baaa1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007baaa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007baaa6: je 0x7baadf */ if (fZ) goto L_007baadf;
L_007baaa8:; BB(0x007baaa8);
    /* 007baaa8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007baaaf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007baab6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007baab9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007baabf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007baac2: call 0x65c47c */ r_esp -= 4; W32(r_esp, 0x7baac7u); f_0065c47c();
    /* 007baac7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007baaca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007baad1:; BB(0x007baad1);
    /* 007baad1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007baad4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007baadb: mov esp, ebp */ r_esp = r_ebp;
    /* 007baadd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007baade: ret  */ FN_RET(0x007baa68); r_esp += 4; return;
L_007baadf:; BB(0x007baadf);
    /* 007baadf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007baae1: jmp 0x7baad1 */ goto L_007baad1;
}

void f_007baae4(void)
{
    FN_ENTER(0x007baae4);
    /* 007baae4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007baae5: mov ebp, esp */ r_ebp = r_esp;
    /* 007baae7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007baae9: push 0x8f6114 */ { u32 v = 0x8f6114u; r_esp -= 4; W32(r_esp, v); }
    /* 007baaee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007baaf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007baaf5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007baafc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007baaff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bab02: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bab05: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bab08: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bab0b: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bab10: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bab17: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bab1cu); f_005caba4();
    /* 007bab1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bab1d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bab20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bab22: je 0x7bab5b */ if (fZ) goto L_007bab5b;
L_007bab24:; BB(0x007bab24);
    /* 007bab24: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bab2b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bab32: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bab35: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bab3b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bab3e: call 0x6632c8 */ r_esp -= 4; W32(r_esp, 0x7bab43u); f_006632c8();
    /* 007bab43: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bab46: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bab4d:; BB(0x007bab4d);
    /* 007bab4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bab50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bab57: mov esp, ebp */ r_esp = r_ebp;
    /* 007bab59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bab5a: ret  */ FN_RET(0x007baae4); r_esp += 4; return;
L_007bab5b:; BB(0x007bab5b);
    /* 007bab5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bab5d: jmp 0x7bab4d */ goto L_007bab4d;
}

void f_007bab60(void)
{
    FN_ENTER(0x007bab60);
    /* 007bab60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bab61: mov ebp, esp */ r_ebp = r_esp;
    /* 007bab63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bab65: push 0x8f613c */ { u32 v = 0x8f613cu; r_esp -= 4; W32(r_esp, v); }
    /* 007bab6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bab70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bab71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bab78: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bab7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bab7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bab81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bab84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bab87: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 007bab8c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bab93: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bab98u); f_005caba4();
    /* 007bab98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bab99: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bab9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bab9e: je 0x7babd7 */ if (fZ) goto L_007babd7;
L_007baba0:; BB(0x007baba0);
    /* 007baba0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007baba7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007babae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007babb1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007babb7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007babba: call 0x663370 */ r_esp -= 4; W32(r_esp, 0x7babbfu); f_00663370();
    /* 007babbf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007babc2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007babc9:; BB(0x007babc9);
    /* 007babc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007babcc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007babd3: mov esp, ebp */ r_esp = r_ebp;
    /* 007babd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007babd6: ret  */ FN_RET(0x007bab60); r_esp += 4; return;
L_007babd7:; BB(0x007babd7);
    /* 007babd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007babd9: jmp 0x7babc9 */ goto L_007babc9;
}

void f_007babdc(void)
{
    FN_ENTER(0x007babdc);
    /* 007babdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007babdd: mov ebp, esp */ r_ebp = r_esp;
    /* 007babdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007babe1: push 0x8f6164 */ { u32 v = 0x8f6164u; r_esp -= 4; W32(r_esp, v); }
    /* 007babe6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007babec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007babed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007babf4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007babf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007babfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007babfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bac00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bac03: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 007bac08: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bac0f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bac14u); f_005caba4();
    /* 007bac14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bac15: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bac18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bac1a: je 0x7bac53 */ if (fZ) goto L_007bac53;
L_007bac1c:; BB(0x007bac1c);
    /* 007bac1c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bac23: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bac2a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bac2d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bac33: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bac36: call 0x668ec8 */ r_esp -= 4; W32(r_esp, 0x7bac3bu); f_00668ec8();
    /* 007bac3b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bac3e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bac45:; BB(0x007bac45);
    /* 007bac45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bac48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bac4f: mov esp, ebp */ r_esp = r_ebp;
    /* 007bac51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bac52: ret  */ FN_RET(0x007babdc); r_esp += 4; return;
L_007bac53:; BB(0x007bac53);
    /* 007bac53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bac55: jmp 0x7bac45 */ goto L_007bac45;
}

void f_007bac58(void)
{
    FN_ENTER(0x007bac58);
    /* 007bac58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bac59: mov ebp, esp */ r_ebp = r_esp;
    /* 007bac5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bac5d: push 0x8f618c */ { u32 v = 0x8f618cu; r_esp -= 4; W32(r_esp, v); }
    /* 007bac62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bac68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bac69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bac70: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bac73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bac76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bac79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bac7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bac7f: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bac84: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bac8b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bac90u); f_005caba4();
    /* 007bac90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bac91: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bac94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bac96: je 0x7baccf */ if (fZ) goto L_007baccf;
L_007bac98:; BB(0x007bac98);
    /* 007bac98: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bac9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007baca6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007baca9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bacaf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bacb2: call 0x6696a4 */ r_esp -= 4; W32(r_esp, 0x7bacb7u); f_006696a4();
    /* 007bacb7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bacba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bacc1:; BB(0x007bacc1);
    /* 007bacc1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bacc4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007baccb: mov esp, ebp */ r_esp = r_ebp;
    /* 007baccd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bacce: ret  */ FN_RET(0x007bac58); r_esp += 4; return;
L_007baccf:; BB(0x007baccf);
    /* 007baccf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bacd1: jmp 0x7bacc1 */ goto L_007bacc1;
}

void f_007bacd4(void)
{
    FN_ENTER(0x007bacd4);
    /* 007bacd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bacd5: mov ebp, esp */ r_ebp = r_esp;
    /* 007bacd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bacd9: push 0x8f61b4 */ { u32 v = 0x8f61b4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bacde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bace4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bace5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bacec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bacef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bacf2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bacf5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bacf8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bacfb: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bad00: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bad07: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bad0cu); f_005caba4();
    /* 007bad0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bad0d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bad10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bad12: je 0x7bad4b */ if (fZ) goto L_007bad4b;
L_007bad14:; BB(0x007bad14);
    /* 007bad14: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bad1b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bad22: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bad25: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bad2b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bad2e: call 0x669cb4 */ r_esp -= 4; W32(r_esp, 0x7bad33u); f_00669cb4();
    /* 007bad33: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bad36: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bad3d:; BB(0x007bad3d);
    /* 007bad3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bad40: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bad47: mov esp, ebp */ r_esp = r_ebp;
    /* 007bad49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bad4a: ret  */ FN_RET(0x007bacd4); r_esp += 4; return;
L_007bad4b:; BB(0x007bad4b);
    /* 007bad4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bad4d: jmp 0x7bad3d */ goto L_007bad3d;
}

void f_007bad50(void)
{
    FN_ENTER(0x007bad50);
    /* 007bad50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bad51: mov ebp, esp */ r_ebp = r_esp;
    /* 007bad53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bad55: push 0x8f61dc */ { u32 v = 0x8f61dcu; r_esp -= 4; W32(r_esp, v); }
    /* 007bad5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bad60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bad61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bad68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bad6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bad6e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bad71: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bad74: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bad77: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bad7c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bad83: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bad88u); f_005caba4();
    /* 007bad88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bad89: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bad8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bad8e: je 0x7badc7 */ if (fZ) goto L_007badc7;
L_007bad90:; BB(0x007bad90);
    /* 007bad90: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bad97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bad9e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bada1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bada7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007badaa: call 0x66a4c0 */ r_esp -= 4; W32(r_esp, 0x7badafu); f_0066a4c0();
    /* 007badaf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007badb2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007badb9:; BB(0x007badb9);
    /* 007badb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007badbc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007badc3: mov esp, ebp */ r_esp = r_ebp;
    /* 007badc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007badc6: ret  */ FN_RET(0x007bad50); r_esp += 4; return;
L_007badc7:; BB(0x007badc7);
    /* 007badc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007badc9: jmp 0x7badb9 */ goto L_007badb9;
}

void f_007badcc(void)
{
    FN_ENTER(0x007badcc);
    /* 007badcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007badcd: mov ebp, esp */ r_ebp = r_esp;
    /* 007badcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007badd1: push 0x8f6204 */ { u32 v = 0x8f6204u; r_esp -= 4; W32(r_esp, v); }
    /* 007badd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007baddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007baddd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bade4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bade7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007badea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007baded: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007badf0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007badf3: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 007badf8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007badff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bae04u); f_005caba4();
    /* 007bae04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bae05: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bae08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bae0a: je 0x7bae43 */ if (fZ) goto L_007bae43;
L_007bae0c:; BB(0x007bae0c);
    /* 007bae0c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bae13: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bae1a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bae1d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bae23: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bae26: call 0x66a7c0 */ r_esp -= 4; W32(r_esp, 0x7bae2bu); f_0066a7c0();
    /* 007bae2b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bae2e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bae35:; BB(0x007bae35);
    /* 007bae35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bae38: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bae3f: mov esp, ebp */ r_esp = r_ebp;
    /* 007bae41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bae42: ret  */ FN_RET(0x007badcc); r_esp += 4; return;
L_007bae43:; BB(0x007bae43);
    /* 007bae43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bae45: jmp 0x7bae35 */ goto L_007bae35;
}

void f_007bae48(void)
{
    FN_ENTER(0x007bae48);
    /* 007bae48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bae49: mov ebp, esp */ r_ebp = r_esp;
    /* 007bae4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bae4d: push 0x8f622c */ { u32 v = 0x8f622cu; r_esp -= 4; W32(r_esp, v); }
    /* 007bae52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bae58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bae59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bae60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bae63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bae66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bae69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bae6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bae6f: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bae74: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bae7b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bae80u); f_005caba4();
    /* 007bae80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bae81: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bae84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bae86: je 0x7baebf */ if (fZ) goto L_007baebf;
L_007bae88:; BB(0x007bae88);
    /* 007bae88: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bae8f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bae96: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bae99: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bae9f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007baea2: call 0x64266c */ r_esp -= 4; W32(r_esp, 0x7baea7u); f_0064266c();
    /* 007baea7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007baeaa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007baeb1:; BB(0x007baeb1);
    /* 007baeb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007baeb4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007baebb: mov esp, ebp */ r_esp = r_ebp;
    /* 007baebd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007baebe: ret  */ FN_RET(0x007bae48); r_esp += 4; return;
L_007baebf:; BB(0x007baebf);
    /* 007baebf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007baec1: jmp 0x7baeb1 */ goto L_007baeb1;
}

void f_007baec4(void)
{
    FN_ENTER(0x007baec4);
    /* 007baec4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007baec5: mov ebp, esp */ r_ebp = r_esp;
    /* 007baec7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007baec9: push 0x8f6254 */ { u32 v = 0x8f6254u; r_esp -= 4; W32(r_esp, v); }
    /* 007baece: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007baed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007baed5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007baedc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007baedf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007baee2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007baee5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007baee8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007baeeb: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 007baef0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007baef7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7baefcu); f_005caba4();
    /* 007baefc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007baefd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007baf00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007baf02: je 0x7baf3b */ if (fZ) goto L_007baf3b;
L_007baf04:; BB(0x007baf04);
    /* 007baf04: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007baf0b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007baf12: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007baf15: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007baf1b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007baf1e: call 0x64b7ac */ r_esp -= 4; W32(r_esp, 0x7baf23u); f_0064b7ac();
    /* 007baf23: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007baf26: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007baf2d:; BB(0x007baf2d);
    /* 007baf2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007baf30: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007baf37: mov esp, ebp */ r_esp = r_ebp;
    /* 007baf39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007baf3a: ret  */ FN_RET(0x007baec4); r_esp += 4; return;
L_007baf3b:; BB(0x007baf3b);
    /* 007baf3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007baf3d: jmp 0x7baf2d */ goto L_007baf2d;
}

void f_007baf40(void)
{
    FN_ENTER(0x007baf40);
    /* 007baf40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007baf41: mov ebp, esp */ r_ebp = r_esp;
    /* 007baf43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007baf45: push 0x8f627c */ { u32 v = 0x8f627cu; r_esp -= 4; W32(r_esp, v); }
    /* 007baf4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007baf50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007baf51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007baf58: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007baf5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007baf5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007baf61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007baf64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007baf67: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 007baf6c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007baf73: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7baf78u); f_005caba4();
    /* 007baf78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007baf79: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007baf7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007baf7e: je 0x7bafb7 */ if (fZ) goto L_007bafb7;
L_007baf80:; BB(0x007baf80);
    /* 007baf80: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007baf87: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007baf8e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007baf91: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007baf97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007baf9a: call 0x64ef28 */ r_esp -= 4; W32(r_esp, 0x7baf9fu); f_0064ef28();
    /* 007baf9f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bafa2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bafa9:; BB(0x007bafa9);
    /* 007bafa9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bafac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bafb3: mov esp, ebp */ r_esp = r_ebp;
    /* 007bafb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bafb6: ret  */ FN_RET(0x007baf40); r_esp += 4; return;
L_007bafb7:; BB(0x007bafb7);
    /* 007bafb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bafb9: jmp 0x7bafa9 */ goto L_007bafa9;
}

void f_007bafbc(void)
{
    FN_ENTER(0x007bafbc);
    /* 007bafbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bafbd: mov ebp, esp */ r_ebp = r_esp;
    /* 007bafbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bafc1: push 0x8f62a4 */ { u32 v = 0x8f62a4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bafc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bafcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bafcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bafd4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bafd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bafda: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bafdd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bafe0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bafe3: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 007bafe8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bafef: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7baff4u); f_005caba4();
    /* 007baff4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007baff5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007baff8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007baffa: je 0x7bb033 */ if (fZ) goto L_007bb033;
L_007baffc:; BB(0x007baffc);
    /* 007baffc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bb003: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb00a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb00d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb013: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb016: call 0x66cfa4 */ r_esp -= 4; W32(r_esp, 0x7bb01bu); f_0066cfa4();
    /* 007bb01b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb01e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bb025:; BB(0x007bb025);
    /* 007bb025: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb028: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb02f: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb031: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb032: ret  */ FN_RET(0x007bafbc); r_esp += 4; return;
L_007bb033:; BB(0x007bb033);
    /* 007bb033: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb035: jmp 0x7bb025 */ goto L_007bb025;
}

