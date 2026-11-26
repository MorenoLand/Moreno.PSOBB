#include "protos.h"

void f_00428164(void) /* sub_428164 */
{
    FN_ENTER(0x00428164);
    /* 00428164: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00428165: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00428166: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428167: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00428168: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042816b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042816d: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00428170: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428172: jne 0x42817c */ if (!fZ) goto L_0042817c;
L_00428174:; BB(0x00428174);
    /* 00428174: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00428177: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00428178: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428179: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042817a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042817b: ret  */ FN_RET(0x00428164); r_esp += 4; return;
L_0042817c:; BB(0x0042817c);
    /* 0042817c: mov ecx, dword ptr [0xa4381c] */ r_ecx = R32((u32)(0xa4381cu));
    /* 00428182: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x428187u); f_00829cc8();
    /* 00428187: mov ebp, dword ptr [0xa438bc] */ r_ebp = R32((u32)(0xa438bcu));
    /* 0042818d: fld dword ptr [0x8fc578] */ FPUSH(R_F32((u32)(0x8fc578u)));
    /* 00428193: mov edi, dword ptr [0xa438c8] */ r_edi = R32((u32)(0xa438c8u));
    /* 00428199: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0042819c: fmul dword ptr [0x8fc64c] */ ST(0) = ST(0) * R_F32((u32)(0x8fc64cu));
    /* 004281a2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004281a4: movzx esi, word ptr [edi + 4] */ r_esi = (u32)R16((u32)(r_edi+0x4u));
    /* 004281a8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004281ab: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004281af: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004281b4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004281b8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004281bc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004281c0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004281c3: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 004281c8: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 004281cb: fmul dword ptr [0x8fc648] */ ST(0) = ST(0) * R_F32((u32)(0x8fc648u));
    /* 004281d1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004281d3: mov ebp, dword ptr [0xa438cc] */ r_ebp = R32((u32)(0xa438ccu));
    /* 004281d9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004281dc: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004281e0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004281e5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004281e9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004281ed: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004281f1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004281f4: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 004281f9: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004281fc: and esi, 0x3fff */ {  u32 a = r_esi; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00428202: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00428207: jle 0x4282ea */ if ((fZ||fS!=fO)) goto L_004282ea;
L_0042820d:; BB(0x0042820d);
    /* 0042820d: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00428211: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00428215: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
L_00428219:; BB(0x00428219);
    /* 00428219: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0042821c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0042821d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428220: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428223: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00428225: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00428227: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 0042822a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042822c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042822e: jle 0x4282de */ if ((fZ||fS!=fO)) goto L_004282de;
L_00428234:; BB(0x00428234);
    /* 00428234: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428237: jl 0x4282a5 */ if ((fS!=fO)) goto L_004282a5;
L_00428239:; BB(0x00428239);
    /* 00428239: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0042823d: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00428241: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00428245: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00428249: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 0042824c: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
L_00428250:; BB(0x00428250);
    /* 00428250: movzx esi, word ptr [ebp] */ r_esi = (u32)R16((u32)(r_ebp));
    /* 00428254: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428256: mov word ptr [edi + 2], si */ W16((u32)(r_edi+0x2u), (u16)r_esi);
    /* 0042825a: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 0042825e: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428260: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 00428264: movzx esi, word ptr [ebp + 4] */ r_esi = (u32)R16((u32)(r_ebp+0x4u));
    /* 00428268: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042826a: mov word ptr [edi + 8], si */ W16((u32)(r_edi+0x8u), (u16)r_esi);
    /* 0042826e: movzx esi, word ptr [ebp + 6] */ r_esi = (u32)R16((u32)(r_ebp+0x6u));
    /* 00428272: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428274: mov word ptr [edi + 0xa], si */ W16((u32)(r_edi+0xau), (u16)r_esi);
    /* 00428278: movzx esi, word ptr [ebp + 8] */ r_esi = (u32)R16((u32)(r_ebp+0x8u));
    /* 0042827c: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042827e: mov word ptr [edi + 0xe], si */ W16((u32)(r_edi+0xeu), (u16)r_esi);
    /* 00428282: movzx esi, word ptr [ebp + 0xa] */ r_esi = (u32)R16((u32)(r_ebp+0xau));
    /* 00428286: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428288: mov word ptr [edi + 0x10], si */ W16((u32)(r_edi+0x10u), (u16)r_esi);
    /* 0042828c: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042828f: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00428292: add edi, 0x12 */ {  u32 a = r_edi; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428295: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428297: jle 0x428250 */ if ((fZ||fS!=fO)) goto L_00428250;
L_00428299:; BB(0x00428299);
    /* 00428299: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0042829d: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004282a1: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_004282a5:; BB(0x004282a5);
    /* 004282a5: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004282a9: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 004282ad: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 004282b1: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
L_004282b5:; BB(0x004282b5);
    /* 004282b5: movzx esi, word ptr [ebp] */ r_esi = (u32)R16((u32)(r_ebp));
    /* 004282b9: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004282bb: mov word ptr [edi + 2], si */ W16((u32)(r_edi+0x2u), (u16)r_esi);
    /* 004282bf: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 004282c3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004282c5: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 004282c9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004282cc: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004282cf: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004282d2: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004282d4: jl 0x4282b5 */ if ((fS!=fO)) goto L_004282b5;
L_004282d6:; BB(0x004282d6);
    /* 004282d6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004282da: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_004282de:; BB(0x004282de);
    /* 004282de: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004282e0: jl 0x428219 */ if ((fS!=fO)) goto L_00428219;
L_004282e6:; BB(0x004282e6);
    /* 004282e6: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_004282ea:; BB(0x004282ea);
    /* 004282ea: mov edx, dword ptr [0xa438c0] */ r_edx = R32((u32)(0xa438c0u));
    /* 004282f0: mov ebp, dword ptr [0xa438c4] */ r_ebp = R32((u32)(0xa438c4u));
    /* 004282f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004282f8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004282fa: jle 0x428314 */ if ((fZ||fS!=fO)) goto L_00428314;
L_004282fc:; BB(0x004282fc);
    /* 004282fc: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004282ff: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 00428302: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00428304: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00428306: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00428309: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042830c: cmp eax, dword ptr [0xa438c4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa438c4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428312: jl 0x4282fc */ if ((fS!=fO)) goto L_004282fc;
L_00428314:; BB(0x00428314);
    /* 00428314: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x428319u); f_0082d7b0();
    /* 00428319: mov ecx, dword ptr [0xa438bc] */ r_ecx = R32((u32)(0xa438bcu));
    /* 0042831f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x428324u); f_0082d838();
    /* 00428324: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00428326: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00428329: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042832b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042832d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x428332u); f_00830b74();
    /* 00428332: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00428335: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428337: je 0x4283b0 */ if (fZ) goto L_004283b0;
L_00428339:; BB(0x00428339);
    /* 00428339: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 0042833f: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 00428344: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0042834a: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 00428350: or ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00428356: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 0042835b: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00428361: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 00428367: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0042836c: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00428371: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x428376u); f_0082d6fc();
    /* 00428376: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 0042837b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00428381: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00428384: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x428389u); f_0082e1e8();
    /* 00428389: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042838c: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00428391: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00428397: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 0042839d: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 004283a2: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 004283a8: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 004283ae: jmp 0x4283c4 */ goto L_004283c4;
L_004283b0:; BB(0x004283b0);
    /* 004283b0: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 004283b5: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004283bb: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004283be: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4283c3u); f_0082e1e8();
    /* 004283c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004283c4:; BB(0x004283c4);
    /* 004283c4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4283c9u); f_0082da80();
    /* 004283c9: mov edx, dword ptr [0xa438c0] */ r_edx = R32((u32)(0xa438c0u));
    /* 004283cf: mov ecx, dword ptr [0xa438c4] */ r_ecx = R32((u32)(0xa438c4u));
    /* 004283d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004283d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004283d9: jle 0x4283f0 */ if ((fZ||fS!=fO)) goto L_004283f0;
L_004283db:; BB(0x004283db);
    /* 004283db: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 004283dd: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004283e0: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 004283e2: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004283e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004283e8: cmp eax, dword ptr [0xa438c4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa438c4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004283ee: jl 0x4283db */ if ((fS!=fO)) goto L_004283db;
L_004283f0:; BB(0x004283f0);
    /* 004283f0: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004283f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004283f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004283f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004283f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004283f7: ret  */ FN_RET(0x00428164); r_esp += 4; return;
}

void f_004281a2(void)
{
    FN_ENTER(0x004281a2);
    /* 004281a2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004281a4: movzx esi, word ptr [edi + 4] */ r_esi = (u32)R16((u32)(r_edi+0x4u));
    /* 004281a8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004281ab: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004281af: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004281b4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004281b8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004281bc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004281c0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004281c3: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 004281c8: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 004281cb: fmul dword ptr [0x8fc648] */ ST(0) = ST(0) * R_F32((u32)(0x8fc648u));
    /* 004281d1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004281d3: mov ebp, dword ptr [0xa438cc] */ r_ebp = R32((u32)(0xa438ccu));
    /* 004281d9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004281dc: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004281e0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004281e5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004281e9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004281ed: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004281f1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004281f4: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 004281f9: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004281fc: and esi, 0x3fff */ {  u32 a = r_esi; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00428202: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00428207: jle 0x4282ea */ if ((fZ||fS!=fO)) goto L_004282ea;
L_0042820d:; BB(0x0042820d);
    /* 0042820d: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00428211: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00428215: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
L_00428219:; BB(0x00428219);
    /* 00428219: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0042821c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0042821d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428220: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428223: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00428225: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00428227: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 0042822a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042822c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042822e: jle 0x4282de */ if ((fZ||fS!=fO)) goto L_004282de;
L_00428234:; BB(0x00428234);
    /* 00428234: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428237: jl 0x4282a5 */ if ((fS!=fO)) goto L_004282a5;
L_00428239:; BB(0x00428239);
    /* 00428239: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0042823d: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00428241: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00428245: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00428249: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 0042824c: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
L_00428250:; BB(0x00428250);
    /* 00428250: movzx esi, word ptr [ebp] */ r_esi = (u32)R16((u32)(r_ebp));
    /* 00428254: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428256: mov word ptr [edi + 2], si */ W16((u32)(r_edi+0x2u), (u16)r_esi);
    /* 0042825a: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 0042825e: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428260: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 00428264: movzx esi, word ptr [ebp + 4] */ r_esi = (u32)R16((u32)(r_ebp+0x4u));
    /* 00428268: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042826a: mov word ptr [edi + 8], si */ W16((u32)(r_edi+0x8u), (u16)r_esi);
    /* 0042826e: movzx esi, word ptr [ebp + 6] */ r_esi = (u32)R16((u32)(r_ebp+0x6u));
    /* 00428272: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428274: mov word ptr [edi + 0xa], si */ W16((u32)(r_edi+0xau), (u16)r_esi);
    /* 00428278: movzx esi, word ptr [ebp + 8] */ r_esi = (u32)R16((u32)(r_ebp+0x8u));
    /* 0042827c: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042827e: mov word ptr [edi + 0xe], si */ W16((u32)(r_edi+0xeu), (u16)r_esi);
    /* 00428282: movzx esi, word ptr [ebp + 0xa] */ r_esi = (u32)R16((u32)(r_ebp+0xau));
    /* 00428286: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428288: mov word ptr [edi + 0x10], si */ W16((u32)(r_edi+0x10u), (u16)r_esi);
    /* 0042828c: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042828f: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00428292: add edi, 0x12 */ {  u32 a = r_edi; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428295: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428297: jle 0x428250 */ if ((fZ||fS!=fO)) goto L_00428250;
L_00428299:; BB(0x00428299);
    /* 00428299: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0042829d: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004282a1: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_004282a5:; BB(0x004282a5);
    /* 004282a5: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004282a9: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 004282ad: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 004282b1: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
L_004282b5:; BB(0x004282b5);
    /* 004282b5: movzx esi, word ptr [ebp] */ r_esi = (u32)R16((u32)(r_ebp));
    /* 004282b9: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004282bb: mov word ptr [edi + 2], si */ W16((u32)(r_edi+0x2u), (u16)r_esi);
    /* 004282bf: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 004282c3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004282c5: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 004282c9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004282cc: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004282cf: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004282d2: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004282d4: jl 0x4282b5 */ if ((fS!=fO)) goto L_004282b5;
L_004282d6:; BB(0x004282d6);
    /* 004282d6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004282da: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_004282de:; BB(0x004282de);
    /* 004282de: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004282e0: jl 0x428219 */ if ((fS!=fO)) goto L_00428219;
L_004282e6:; BB(0x004282e6);
    /* 004282e6: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_004282ea:; BB(0x004282ea);
    /* 004282ea: mov edx, dword ptr [0xa438c0] */ r_edx = R32((u32)(0xa438c0u));
    /* 004282f0: mov ebp, dword ptr [0xa438c4] */ r_ebp = R32((u32)(0xa438c4u));
    /* 004282f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004282f8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004282fa: jle 0x428314 */ if ((fZ||fS!=fO)) goto L_00428314;
L_004282fc:; BB(0x004282fc);
    /* 004282fc: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004282ff: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 00428302: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00428304: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00428306: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00428309: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042830c: cmp eax, dword ptr [0xa438c4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa438c4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428312: jl 0x4282fc */ if ((fS!=fO)) goto L_004282fc;
L_00428314:; BB(0x00428314);
    /* 00428314: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x428319u); f_0082d7b0();
    /* 00428319: mov ecx, dword ptr [0xa438bc] */ r_ecx = R32((u32)(0xa438bcu));
    /* 0042831f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x428324u); f_0082d838();
    /* 00428324: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00428326: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00428329: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042832b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042832d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x428332u); f_00830b74();
    /* 00428332: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00428335: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428337: je 0x4283b0 */ if (fZ) goto L_004283b0;
L_00428339:; BB(0x00428339);
    /* 00428339: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 0042833f: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 00428344: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0042834a: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 00428350: or ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00428356: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 0042835b: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00428361: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 00428367: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0042836c: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00428371: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x428376u); f_0082d6fc();
    /* 00428376: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 0042837b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00428381: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00428384: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x428389u); f_0082e1e8();
    /* 00428389: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042838c: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00428391: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00428397: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 0042839d: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 004283a2: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 004283a8: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 004283ae: jmp 0x4283c4 */ goto L_004283c4;
L_004283b0:; BB(0x004283b0);
    /* 004283b0: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 004283b5: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004283bb: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004283be: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4283c3u); f_0082e1e8();
    /* 004283c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004283c4:; BB(0x004283c4);
    /* 004283c4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4283c9u); f_0082da80();
    /* 004283c9: mov edx, dword ptr [0xa438c0] */ r_edx = R32((u32)(0xa438c0u));
    /* 004283cf: mov ecx, dword ptr [0xa438c4] */ r_ecx = R32((u32)(0xa438c4u));
    /* 004283d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004283d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004283d9: jle 0x4283f0 */ if ((fZ||fS!=fO)) goto L_004283f0;
L_004283db:; BB(0x004283db);
    /* 004283db: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 004283dd: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004283e0: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 004283e2: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004283e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004283e8: cmp eax, dword ptr [0xa438c4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa438c4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004283ee: jl 0x4283db */ if ((fS!=fO)) goto L_004283db;
L_004283f0:; BB(0x004283f0);
    /* 004283f0: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004283f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004283f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004283f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004283f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004283f7: ret  */ FN_RET(0x004281a2); r_esp += 4; return;
}

void f_004281f1(void)
{
    FN_ENTER(0x004281f1);
    /* 004281f1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004281f4: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 004281f9: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004281fc: and esi, 0x3fff */ {  u32 a = r_esi; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00428202: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00428207: jle 0x4282ea */ if ((fZ||fS!=fO)) goto L_004282ea;
L_0042820d:; BB(0x0042820d);
    /* 0042820d: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00428211: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00428215: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
L_00428219:; BB(0x00428219);
    /* 00428219: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0042821c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0042821d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428220: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428223: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00428225: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00428227: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 0042822a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042822c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042822e: jle 0x4282de */ if ((fZ||fS!=fO)) goto L_004282de;
L_00428234:; BB(0x00428234);
    /* 00428234: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428237: jl 0x4282a5 */ if ((fS!=fO)) goto L_004282a5;
L_00428239:; BB(0x00428239);
    /* 00428239: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0042823d: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00428241: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00428245: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00428249: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 0042824c: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
L_00428250:; BB(0x00428250);
    /* 00428250: movzx esi, word ptr [ebp] */ r_esi = (u32)R16((u32)(r_ebp));
    /* 00428254: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428256: mov word ptr [edi + 2], si */ W16((u32)(r_edi+0x2u), (u16)r_esi);
    /* 0042825a: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 0042825e: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428260: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 00428264: movzx esi, word ptr [ebp + 4] */ r_esi = (u32)R16((u32)(r_ebp+0x4u));
    /* 00428268: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042826a: mov word ptr [edi + 8], si */ W16((u32)(r_edi+0x8u), (u16)r_esi);
    /* 0042826e: movzx esi, word ptr [ebp + 6] */ r_esi = (u32)R16((u32)(r_ebp+0x6u));
    /* 00428272: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428274: mov word ptr [edi + 0xa], si */ W16((u32)(r_edi+0xau), (u16)r_esi);
    /* 00428278: movzx esi, word ptr [ebp + 8] */ r_esi = (u32)R16((u32)(r_ebp+0x8u));
    /* 0042827c: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042827e: mov word ptr [edi + 0xe], si */ W16((u32)(r_edi+0xeu), (u16)r_esi);
    /* 00428282: movzx esi, word ptr [ebp + 0xa] */ r_esi = (u32)R16((u32)(r_ebp+0xau));
    /* 00428286: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428288: mov word ptr [edi + 0x10], si */ W16((u32)(r_edi+0x10u), (u16)r_esi);
    /* 0042828c: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042828f: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00428292: add edi, 0x12 */ {  u32 a = r_edi; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428295: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428297: jle 0x428250 */ if ((fZ||fS!=fO)) goto L_00428250;
L_00428299:; BB(0x00428299);
    /* 00428299: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0042829d: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004282a1: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_004282a5:; BB(0x004282a5);
    /* 004282a5: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004282a9: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 004282ad: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 004282b1: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
L_004282b5:; BB(0x004282b5);
    /* 004282b5: movzx esi, word ptr [ebp] */ r_esi = (u32)R16((u32)(r_ebp));
    /* 004282b9: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004282bb: mov word ptr [edi + 2], si */ W16((u32)(r_edi+0x2u), (u16)r_esi);
    /* 004282bf: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 004282c3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004282c5: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 004282c9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004282cc: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004282cf: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004282d2: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004282d4: jl 0x4282b5 */ if ((fS!=fO)) goto L_004282b5;
L_004282d6:; BB(0x004282d6);
    /* 004282d6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004282da: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_004282de:; BB(0x004282de);
    /* 004282de: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004282e0: jl 0x428219 */ if ((fS!=fO)) goto L_00428219;
L_004282e6:; BB(0x004282e6);
    /* 004282e6: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_004282ea:; BB(0x004282ea);
    /* 004282ea: mov edx, dword ptr [0xa438c0] */ r_edx = R32((u32)(0xa438c0u));
    /* 004282f0: mov ebp, dword ptr [0xa438c4] */ r_ebp = R32((u32)(0xa438c4u));
    /* 004282f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004282f8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004282fa: jle 0x428314 */ if ((fZ||fS!=fO)) goto L_00428314;
L_004282fc:; BB(0x004282fc);
    /* 004282fc: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004282ff: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 00428302: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00428304: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00428306: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00428309: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042830c: cmp eax, dword ptr [0xa438c4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa438c4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428312: jl 0x4282fc */ if ((fS!=fO)) goto L_004282fc;
L_00428314:; BB(0x00428314);
    /* 00428314: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x428319u); f_0082d7b0();
    /* 00428319: mov ecx, dword ptr [0xa438bc] */ r_ecx = R32((u32)(0xa438bcu));
    /* 0042831f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x428324u); f_0082d838();
    /* 00428324: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00428326: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00428329: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042832b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042832d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x428332u); f_00830b74();
    /* 00428332: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00428335: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428337: je 0x4283b0 */ if (fZ) goto L_004283b0;
L_00428339:; BB(0x00428339);
    /* 00428339: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 0042833f: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 00428344: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0042834a: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 00428350: or ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00428356: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 0042835b: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00428361: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 00428367: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0042836c: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00428371: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x428376u); f_0082d6fc();
    /* 00428376: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 0042837b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00428381: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00428384: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x428389u); f_0082e1e8();
    /* 00428389: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042838c: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00428391: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00428397: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 0042839d: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 004283a2: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 004283a8: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 004283ae: jmp 0x4283c4 */ goto L_004283c4;
L_004283b0:; BB(0x004283b0);
    /* 004283b0: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 004283b5: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004283bb: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004283be: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4283c3u); f_0082e1e8();
    /* 004283c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004283c4:; BB(0x004283c4);
    /* 004283c4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4283c9u); f_0082da80();
    /* 004283c9: mov edx, dword ptr [0xa438c0] */ r_edx = R32((u32)(0xa438c0u));
    /* 004283cf: mov ecx, dword ptr [0xa438c4] */ r_ecx = R32((u32)(0xa438c4u));
    /* 004283d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004283d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004283d9: jle 0x4283f0 */ if ((fZ||fS!=fO)) goto L_004283f0;
L_004283db:; BB(0x004283db);
    /* 004283db: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 004283dd: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004283e0: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 004283e2: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004283e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004283e8: cmp eax, dword ptr [0xa438c4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa438c4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004283ee: jl 0x4283db */ if ((fS!=fO)) goto L_004283db;
L_004283f0:; BB(0x004283f0);
    /* 004283f0: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004283f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004283f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004283f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004283f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004283f7: ret  */ FN_RET(0x004281f1); r_esp += 4; return;
}

void f_004283f8(void) /* sub_4283F8 */
{
    FN_ENTER(0x004283f8);
    /* 004283f8: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 004283fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004283fd: je 0x428444 */ if (fZ) goto L_00428444;
L_004283ff:; BB(0x004283ff);
    /* 004283ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428402: jne 0x42841a */ if (!fZ) goto L_0042841a;
L_00428404:; BB(0x00428404);
    /* 00428404: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 00428407: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042840a: cmp eax, dword ptr [ecx + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042840d: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00428410: jle 0x42847f */ if ((fZ||fS!=fO)) goto L_0042847f;
L_00428412:; BB(0x00428412);
    /* 00428412: mov dword ptr [ecx + 0x44], 2 */ W32((u32)(r_ecx+0x44u), 0x2u);
    /* 00428419: ret  */ FN_RET(0x004283f8); r_esp += 4; return;
L_0042841a:; BB(0x0042841a);
    /* 0042841a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042841d: jne 0x42847f */ if (!fZ) goto L_0042847f;
L_0042841f:; BB(0x0042841f);
    /* 0042841f: fld dword ptr [0x8fc55c] */ FPUSH(R_F32((u32)(0x8fc55cu)));
    /* 00428425: fadd dword ptr [ecx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x34u));
    /* 00428428: fcom dword ptr [0x8fc558] */ fx_compare(ST(0), R_F32((u32)(0x8fc558u))); 
    /* 0042842e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00428430: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 00428433: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00428434: jae 0x42847f */ if (!fC) goto L_0042847f;
L_00428436:; BB(0x00428436);
    /* 00428436: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042843a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042843f: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00428443: ret  */ FN_RET(0x004283f8); r_esp += 4; return;
L_00428444:; BB(0x00428444);
    /* 00428444: fld dword ptr [0x8fc554] */ FPUSH(R_F32((u32)(0x8fc554u)));
    /* 0042844a: fadd dword ptr [ecx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x34u));
    /* 0042844d: fcom dword ptr [ecx + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x38u))); 
    /* 00428450: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00428452: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00428455: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00428456: jb 0x428466 */ if (fC) goto L_00428466;
L_00428458:; BB(0x00428458);
    /* 00428458: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042845a: mov dword ptr [ecx + 0x44], 1 */ W32((u32)(r_ecx+0x44u), 0x1u);
    /* 00428461: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00428464: jmp 0x428469 */ goto L_00428469;
L_00428466:; BB(0x00428466);
    /* 00428466: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
L_00428469:; BB(0x00428469);
    /* 00428469: mov eax, dword ptr [0xa438bc] */ r_eax = R32((u32)(0xa438bcu));
    /* 0042846e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428470: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00428473: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00428476: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00428479: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0042847c: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
L_0042847f:; BB(0x0042847f);
    /* 0042847f: ret  */ FN_RET(0x004283f8); r_esp += 4; return;
}

void f_00428480(void) /* sub_428480 */
{
    FN_ENTER(0x00428480);
    /* 00428480: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00428481: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00428482: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428483: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00428484: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428487: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00428489: mov ecx, dword ptr [0xa4381c] */ r_ecx = R32((u32)(0xa4381cu));
    /* 0042848f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x428494u); f_00829cc8();
    /* 00428494: fld dword ptr [0x8fc550] */ FPUSH(R_F32((u32)(0x8fc550u)));
    /* 0042849a: mov edi, dword ptr [0xa438c8] */ r_edi = R32((u32)(0xa438c8u));
    /* 004284a0: mov ebp, dword ptr [0xa438cc] */ r_ebp = R32((u32)(0xa438ccu));
    /* 004284a6: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 004284a9: fmul dword ptr [0x8fc64c] */ ST(0) = ST(0) * R_F32((u32)(0x8fc64cu));
    /* 004284af: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004284b1: movzx esi, word ptr [edi + 4] */ r_esi = (u32)R16((u32)(r_edi+0x4u));
    /* 004284b5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004284b8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004284bc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004284c1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004284c5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004284c9: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004284cd: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004284d0: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 004284d5: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 004284d8: fmul dword ptr [0x8fc648] */ ST(0) = ST(0) * R_F32((u32)(0x8fc648u));
    /* 004284de: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004284e0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004284e3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004284e7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004284ec: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004284f0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004284f4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004284f8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004284fb: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004284fe: and esi, 0x3fff */ {  u32 a = r_esi; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00428504: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00428509: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0042850e: jle 0x4285f1 */ if ((fZ||fS!=fO)) goto L_004285f1;
L_00428514:; BB(0x00428514);
    /* 00428514: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00428518: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0042851c: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
L_00428520:; BB(0x00428520);
    /* 00428520: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 00428523: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00428524: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428527: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042852a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042852c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042852e: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 00428531: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00428533: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00428535: jle 0x4285e5 */ if ((fZ||fS!=fO)) goto L_004285e5;
L_0042853b:; BB(0x0042853b);
    /* 0042853b: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042853e: jl 0x4285ac */ if ((fS!=fO)) goto L_004285ac;
L_00428540:; BB(0x00428540);
    /* 00428540: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00428544: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00428548: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0042854c: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00428550: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 00428553: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
L_00428557:; BB(0x00428557);
    /* 00428557: movzx esi, word ptr [ebp] */ r_esi = (u32)R16((u32)(r_ebp));
    /* 0042855b: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042855d: mov word ptr [edi + 2], si */ W16((u32)(r_edi+0x2u), (u16)r_esi);
    /* 00428561: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 00428565: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428567: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 0042856b: movzx esi, word ptr [ebp + 4] */ r_esi = (u32)R16((u32)(r_ebp+0x4u));
    /* 0042856f: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428571: mov word ptr [edi + 8], si */ W16((u32)(r_edi+0x8u), (u16)r_esi);
    /* 00428575: movzx esi, word ptr [ebp + 6] */ r_esi = (u32)R16((u32)(r_ebp+0x6u));
    /* 00428579: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042857b: mov word ptr [edi + 0xa], si */ W16((u32)(r_edi+0xau), (u16)r_esi);
    /* 0042857f: movzx esi, word ptr [ebp + 8] */ r_esi = (u32)R16((u32)(r_ebp+0x8u));
    /* 00428583: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428585: mov word ptr [edi + 0xe], si */ W16((u32)(r_edi+0xeu), (u16)r_esi);
    /* 00428589: movzx esi, word ptr [ebp + 0xa] */ r_esi = (u32)R16((u32)(r_ebp+0xau));
    /* 0042858d: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042858f: mov word ptr [edi + 0x10], si */ W16((u32)(r_edi+0x10u), (u16)r_esi);
    /* 00428593: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00428596: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00428599: add edi, 0x12 */ {  u32 a = r_edi; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042859c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042859e: jle 0x428557 */ if ((fZ||fS!=fO)) goto L_00428557;
L_004285a0:; BB(0x004285a0);
    /* 004285a0: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 004285a4: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004285a8: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_004285ac:; BB(0x004285ac);
    /* 004285ac: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004285b0: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 004285b4: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 004285b8: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
L_004285bc:; BB(0x004285bc);
    /* 004285bc: movzx esi, word ptr [ebp] */ r_esi = (u32)R16((u32)(r_ebp));
    /* 004285c0: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004285c2: mov word ptr [edi + 2], si */ W16((u32)(r_edi+0x2u), (u16)r_esi);
    /* 004285c6: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 004285ca: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004285cc: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 004285d0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004285d3: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004285d6: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004285d9: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004285db: jl 0x4285bc */ if ((fS!=fO)) goto L_004285bc;
L_004285dd:; BB(0x004285dd);
    /* 004285dd: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004285e1: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_004285e5:; BB(0x004285e5);
    /* 004285e5: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004285e7: jl 0x428520 */ if ((fS!=fO)) goto L_00428520;
L_004285ed:; BB(0x004285ed);
    /* 004285ed: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_004285f1:; BB(0x004285f1);
    /* 004285f1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4285f6u); f_0082d7b0();
    /* 004285f6: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004285f9: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004285fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004285fe: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00428601: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x428606u); f_00830b74();
    /* 00428606: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 00428609: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042860b: je 0x428684 */ if (fZ) goto L_00428684;
L_0042860d:; BB(0x0042860d);
    /* 0042860d: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 00428613: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 00428618: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0042861e: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 00428624: or ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0042862a: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 0042862f: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00428635: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 0042863b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00428640: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00428645: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x42864au); f_0082d6fc();
    /* 0042864a: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 0042864f: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00428655: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00428658: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x42865du); f_0082e1e8();
    /* 0042865d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428660: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00428665: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 0042866b: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 00428671: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00428676: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 0042867c: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 00428682: jmp 0x428698 */ goto L_00428698;
L_00428684:; BB(0x00428684);
    /* 00428684: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 00428689: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0042868f: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00428692: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x428697u); f_0082e1e8();
    /* 00428697: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00428698:; BB(0x00428698);
    /* 00428698: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x42869du); f_0082da80();
    /* 0042869d: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004286a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004286a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004286a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004286a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004286a4: ret  */ FN_RET(0x00428480); r_esp += 4; return;
}

void f_004286a8(void) /* sub_4286A8 */
{
    FN_ENTER(0x004286a8);
    /* 004286a8: mov dword ptr [0xa438b4], 0x42f00000 */ W32((u32)(0xa438b4u), 0x42f00000u);
    /* 004286b2: mov dword ptr [0xa438b0], 0xc2280000 */ W32((u32)(0xa438b0u), 0xc2280000u);
    /* 004286bc: ret  */ FN_RET(0x004286a8); r_esp += 4; return;
}

void f_004286c0(void) /* sub_4286C0 */
{
    FN_ENTER(0x004286c0);
    /* 004286c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004286c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004286c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004286c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004286c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004286c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004286c7: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004286cb: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 004286cf: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 004286d3: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 004286d7: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 004286d9: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 004286dc: mov dword ptr [ebx + 0xc], edi */ W32((u32)(r_ebx+0xcu), r_edi);
    /* 004286df: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004286e2: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004286e4: lea eax, [edx + edx + 1] */ r_eax = (u32)(r_edx+r_edx+0x1u);
    /* 004286e8: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 004286eb: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004286ee: lea eax, [edi + eax + 5] */ r_eax = (u32)(r_edi+r_eax+0x5u);
    /* 004286f2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004286f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004286f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4286fau); f_008581c5();
    /* 004286fa: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 004286fd: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 00428700: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00428702: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00428705: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428707: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428709: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042870c: lea edi, [edx + esi + 3] */ r_edi = (u32)(r_edx+r_esi+0x3u);
    /* 00428710: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428712: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428714: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00428715: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42871au); f_008581c5();
    /* 0042871a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042871d: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 00428720: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 00428723: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00428726: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00428728: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042872a: jle 0x428741 */ if ((fZ||fS!=fO)) goto L_00428741;
L_0042872c:; BB(0x0042872c);
    /* 0042872c: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 00428730: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00428733: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00428736: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00428739: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042873c: cmp edx, dword ptr [ebx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042873f: jl 0x42872c */ if ((fS!=fO)) goto L_0042872c;
L_00428741:; BB(0x00428741);
    /* 00428741: mov edx, 0x242 */ r_edx = 0x242u;
    /* 00428746: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00428749: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 0042874c: imul ebp, dword ptr [ebx + 4] */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)R32((u32)(r_ebx+0x4u)); r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00428750: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00428752: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00428755: mov word ptr [eax + 2], bp */ W16((u32)(r_eax+0x2u), (u16)r_ebp);
    /* 00428759: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0042875c: mov word ptr [eax + 4], si */ W16((u32)(r_eax+0x4u), (u16)r_esi);
    /* 00428760: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00428762: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 00428765: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00428767: mov ebp, edx */ r_ebp = r_edx;
    /* 00428769: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042876c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042876e: jle 0x4287b3 */ if ((fZ||fS!=fO)) goto L_004287b3;
L_00428770:; BB(0x00428770);
    /* 00428770: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00428772: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00428775: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00428777: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00428779: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042877c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042877e: jle 0x4287ab */ if ((fZ||fS!=fO)) goto L_004287ab;
L_00428780:; BB(0x00428780);
    /* 00428780: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 00428783: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00428785: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 00428789: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 0042878d: mov word ptr [eax + 6], bp */ W16((u32)(r_eax+0x6u), (u16)r_ebp);
    /* 00428791: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00428795: mov word ptr [eax + 0xa], dx */ W16((u32)(r_eax+0xau), (u16)r_edx);
    /* 00428799: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0042879b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042879e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004287a1: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004287a4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004287a7: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004287a9: jl 0x428780 */ if ((fS!=fO)) goto L_00428780;
L_004287ab:; BB(0x004287ab);
    /* 004287ab: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004287ae: cmp ecx, dword ptr [ebx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004287b1: jl 0x428770 */ if ((fS!=fO)) goto L_00428770;
L_004287b3:; BB(0x004287b3);
    /* 004287b3: mov esi, 0xff */ r_esi = 0xffu;
    /* 004287b8: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 004287bb: mov word ptr [eax + 2], si */ W16((u32)(r_eax+0x2u), (u16)r_esi);
    /* 004287bf: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 004287c2: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 004287c5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004287c8: imul esi, dword ptr [ebx] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebx)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004287cb: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004287ce: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004287d0: lea edx, [eax + eax + 1] */ r_edx = (u32)(r_eax+r_eax+0x1u);
    /* 004287d4: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004287d7: or edx, 0x29 */ {  u32 a = r_edx; u32 b = 0x29u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004287da: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 004287dc: mov ebp, esi */ r_ebp = r_esi;
    /* 004287de: shl ebp, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 004287e1: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 004287e4: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004287e7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004287e9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004287eb: jle 0x428888 */ if ((fZ||fS!=fO)) goto L_00428888;
L_004287f1:; BB(0x004287f1);
    /* 004287f1: fld dword ptr [0x8fc544] */ FPUSH(R_F32((u32)(0x8fc544u)));
    /* 004287f7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004287fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004287fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004287fe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00428800:; BB(0x00428800);
    /* 00428800: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00428802: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00428804: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00428806: mov dword ptr [edi + 4], ebx */ W32((u32)(r_edi+0x4u), r_ebx);
    /* 00428809: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0042880b: mov dword ptr [edi + 8], ebx */ W32((u32)(r_edi+0x8u), r_ebx);
    /* 0042880e: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 00428811: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 00428814: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 00428817: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042881a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042881d: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042881f: jl 0x428800 */ if ((fS!=fO)) goto L_00428800;
L_00428821:; BB(0x00428821);
    /* 00428821: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00428824:; BB(0x00428824);
    /* 00428824: mov dword ptr [edi], 0xff */ W32((u32)(r_edi), 0xffu);
    /* 0042882a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0042882d: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00428830: fst dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0));
    /* 00428833: fst dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0));
    /* 00428836: fst dword ptr [ebx + 0x28] */ W_F32((u32)(r_ebx+0x28u), ST(0));
    /* 00428839: fst dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0));
    /* 0042883c: fst dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0));
    /* 0042883f: fst dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0));
    /* 00428842: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 00428845: mov dword ptr [ebx + 0x30], 0x17 */ W32((u32)(r_ebx+0x30u), 0x17u);
    /* 0042884c: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0042884f: mov dword ptr [ebx + 0x50], 0x3f800000 */ W32((u32)(r_ebx+0x50u), 0x3f800000u);
    /* 00428856: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00428859: lea ebp, [ebx + 0x18] */ r_ebp = (u32)(r_ebx+0x18u);
    /* 0042885c: mov dword ptr [ebx + 0x34], ebp */ W32((u32)(r_ebx+0x34u), r_ebp);
    /* 0042885f: mov dword ptr [ebx + 0x54], 0x3f800000 */ W32((u32)(r_ebx+0x54u), 0x3f800000u);
    /* 00428866: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00428868: mov dword ptr [ebx + 0x44], esi */ W32((u32)(r_ebx+0x44u), r_esi);
    /* 0042886b: mov dword ptr [ebx + 0x48], esi */ W32((u32)(r_ebx+0x48u), r_esi);
    /* 0042886e: mov dword ptr [ebx + 0x58], 0x3f800000 */ W32((u32)(r_ebx+0x58u), 0x3f800000u);
    /* 00428875: mov dword ptr [ebx + 0x4c], esi */ W32((u32)(r_ebx+0x4cu), r_esi);
    /* 00428878: mov dword ptr [ebx + 0x5c], esi */ W32((u32)(r_ebx+0x5cu), r_esi);
    /* 0042887b: mov dword ptr [ebx + 0x60], esi */ W32((u32)(r_ebx+0x60u), r_esi);
    /* 0042887e: mov eax, ebx */ r_eax = r_ebx;
    /* 00428880: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00428881: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00428882: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428883: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00428884: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00428885: ret 0x10 */ FN_RET(0x004286c0); r_esp += 20; return;
L_00428888:; BB(0x00428888);
    /* 00428888: fld dword ptr [0x8fc544] */ FPUSH(R_F32((u32)(0x8fc544u)));
    /* 0042888e: jmp 0x428824 */ goto L_00428824;
}

void f_00428890(void) /* sub_428890 */
{
    FN_ENTER(0x00428890);
    /* 00428890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428891: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00428892: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428895: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 00428899: mov ebp, eax */ r_ebp = r_eax;
    /* 0042889b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042889c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042889e: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4288a3u); f_007828e4();
    /* 004288a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004288a4: fcom dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); 
    /* 004288a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004288aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004288ab: jbe 0x4288d0 */ if ((fC||fZ)) goto L_004288d0;
L_004288ad:; BB(0x004288ad);
    /* 004288ad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004288af: fld dword ptr [0x8fc534] */ FPUSH(R_F32((u32)(0x8fc534u)));
    /* 004288b5: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004288b9: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 004288c0: mov dword ptr [ebp + 4], 0x3f800000 */ W32((u32)(r_ebp+0x4u), 0x3f800000u);
    /* 004288c7: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 004288ce: jmp 0x428945 */ goto L_00428945;
L_004288d0:; BB(0x004288d0);
    /* 004288d0: fdiv dword ptr [esp + 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x18u));
    /* 004288d4: fmul dword ptr [0x8fc53c] */ ST(0) = ST(0) * R_F32((u32)(0x8fc53cu));
    /* 004288da: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004288dd: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004288e1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004288e6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004288ea: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004288ee: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004288f2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004288f5: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004288f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004288fb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x428900u); f_0082ddd8();
    /* 00428900: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00428904: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00428908: fadd dword ptr [0x8fc538] */ ST(0) = ST(0) + R_F32((u32)(0x8fc538u));
    /* 0042890e: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00428912: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00428916: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00428918: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x42891du); f_0082dcbc();
    /* 0042891d: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00428920: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00428923: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428925: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428927: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00428929: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042892b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042892d: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00428930: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 00428933: mov dword ptr [ebp + 4], 0x3f800000 */ W32((u32)(r_ebp+0x4u), 0x3f800000u);
    /* 0042893a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042893b: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x428940u); f_00782868();
    /* 00428940: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00428942: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00428945:; BB(0x00428945);
    /* 00428945: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00428949: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042894c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042894d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042894e: ret  */ FN_RET(0x00428890); r_esp += 4; return;
}

void f_004288a0(void)
{
    FN_ENTER(0x004288a0);
    /* 004288a0: mov al, byte ptr [0xd8590035] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xd8590035u))) & 0xffu);
    /* 004288a5: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 004288a6: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004288a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004288aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004288ab: jbe 0x4288d0 */ if ((fC||fZ)) goto L_004288d0;
L_004288ad:; BB(0x004288ad);
    /* 004288ad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004288af: fld dword ptr [0x8fc534] */ FPUSH(R_F32((u32)(0x8fc534u)));
    /* 004288b5: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004288b9: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 004288c0: mov dword ptr [ebp + 4], 0x3f800000 */ W32((u32)(r_ebp+0x4u), 0x3f800000u);
    /* 004288c7: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 004288ce: jmp 0x428945 */ goto L_00428945;
L_004288d0:; BB(0x004288d0);
    /* 004288d0: fdiv dword ptr [esp + 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x18u));
    /* 004288d4: fmul dword ptr [0x8fc53c] */ ST(0) = ST(0) * R_F32((u32)(0x8fc53cu));
    /* 004288da: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004288dd: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004288e1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004288e6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004288ea: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004288ee: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004288f2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004288f5: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004288f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004288fb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x428900u); f_0082ddd8();
    /* 00428900: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00428904: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00428908: fadd dword ptr [0x8fc538] */ ST(0) = ST(0) + R_F32((u32)(0x8fc538u));
    /* 0042890e: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00428912: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00428916: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00428918: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x42891du); f_0082dcbc();
    /* 0042891d: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00428920: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00428923: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428925: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428927: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00428929: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042892b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042892d: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00428930: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 00428933: mov dword ptr [ebp + 4], 0x3f800000 */ W32((u32)(r_ebp+0x4u), 0x3f800000u);
    /* 0042893a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042893b: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x428940u); f_00782868();
    /* 00428940: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00428942: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00428945:; BB(0x00428945);
    /* 00428945: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00428949: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042894c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042894d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042894e: ret  */ FN_RET(0x004288a0); r_esp += 4; return;
}

void f_00428950(void) /* sub_428950 */
{
    FN_ENTER(0x00428950);
    /* 00428950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428951: mov ebp, esp */ r_ebp = r_esp;
    /* 00428953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00428955: push 0x8cdb62 */ { u32 v = 0x8cdb62u; r_esp -= 4; W32(r_esp, v); }
    /* 0042895a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00428960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428961: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00428968: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042896b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0042896e: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 00428971: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00428974: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 00428977: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 0042897c: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00428982: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00428985: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00428988: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0042898b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0042898e: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 00428998: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0042899a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42899fu); f_008581c5();
    /* 0042899f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004289a0: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 004289a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004289a8: je 0x42932c */ if (fZ) goto L_0042932c;
L_004289ae:; BB(0x004289ae);
    /* 004289ae: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 004289b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004289bf: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004289c2: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004289c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004289c9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004289cb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004289cd: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004289cf: call 0x4286c0 */ r_esp -= 4; W32(r_esp, 0x4289d4u); f_004286c0();
    /* 004289d4: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004289da: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_004289e4:; BB(0x004289e4);
    /* 004289e4: mov dword ptr [0xa43908], eax */ W32((u32)(0xa43908u), r_eax);
    /* 004289e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004289f0: mov eax, dword ptr [0xa43908] */ r_eax = R32((u32)(0xa43908u));
    /* 004289f5: fld dword ptr [0xa438b4] */ FPUSH(R_F32((u32)(0xa438b4u)));
    /* 004289fb: fdiv dword ptr [0x8fc530] */ ST(0) = ST(0) / R_F32((u32)(0x8fc530u));
    /* 00428a01: fld dword ptr [0x8fc52c] */ FPUSH(R_F32((u32)(0x8fc52cu)));
    /* 00428a07: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00428a0a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428a0c: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00428a0f: fld dword ptr [0x8fc52c] */ FPUSH(R_F32((u32)(0x8fc52cu)));
    /* 00428a15: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428a17: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00428a1a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00428a1d: lea esi, [edx + 8] */ r_esi = (u32)(r_edx+0x8u);
    /* 00428a20: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00428a22:; BB(0x00428a22);
    /* 00428a22: fst dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0));
    /* 00428a25: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00428a27:; BB(0x00428a27);
    /* 00428a27: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00428a2c: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00428a2f: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00428a32: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428a34: fst dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0));
    /* 00428a37: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428a39: fstp dword ptr [ebp - 0x78] */ W_F32((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 00428a3c: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00428a3e: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428a41: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00428a42: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00428a43: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 00428a46: call 0x428890 */ r_esp -= 4; W32(r_esp, 0x428a4bu); f_00428890();
    /* 00428a4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428a4e: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00428a51: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428a53: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00428a55: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00428a58: fsub dword ptr [ebp - 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00428a5b: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00428a5e: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00428a61: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00428a64: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00428a67: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00428a6a: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00428a6d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00428a70: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00428a73: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 00428a76: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428a79: cmp ebx, 0xb */ {  u32 a = r_ebx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428a7c: jge 0x428a86 */ if ((fS==fO)) goto L_00428a86;
L_00428a7e:; BB(0x00428a7e);
    /* 00428a7e: fld dword ptr [0x8fc52c] */ FPUSH(R_F32((u32)(0x8fc52cu)));
    /* 00428a84: jmp 0x428a27 */ goto L_00428a27;
L_00428a86:; BB(0x00428a86);
    /* 00428a86: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00428a89: fsub dword ptr [ebp - 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00428a8c: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00428a8f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428a92: cmp edi, 0xb */ {  u32 a = r_edi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428a95: jge 0x428a9f */ if ((fS==fO)) goto L_00428a9f;
L_00428a97:; BB(0x00428a97);
    /* 00428a97: fld dword ptr [0x8fc52c] */ FPUSH(R_F32((u32)(0x8fc52cu)));
    /* 00428a9d: jmp 0x428a22 */ goto L_00428a22;
L_00428a9f:; BB(0x00428a9f);
    /* 00428a9f: fld dword ptr [0x8fc64c] */ FPUSH(R_F32((u32)(0x8fc64cu)));
    /* 00428aa5: fld dword ptr [0x8fc524] */ FPUSH(R_F32((u32)(0x8fc524u)));
    /* 00428aab: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428aae: fld dword ptr [0x8fc648] */ FPUSH(R_F32((u32)(0x8fc648u)));
    /* 00428ab4: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00428ab7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428ab9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428abb: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428abe: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428ac2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428ac7: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428aca: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428acd: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428ad0: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428ad3: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ad5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428ad8: mov word ptr [0xa438e8], cx */ W16((u32)(0xa438e8u), (u16)r_ecx);
    /* 00428adf: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00428ae2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428ae4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428ae6: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428ae9: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428aed: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428af2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428af5: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428af8: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428afb: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428afe: mov ebx, dword ptr [ebp - 0x4c] */ r_ebx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428b01: mov word ptr [0xa438d0], bx */ W16((u32)(0xa438d0u), (u16)r_ebx);
    /* 00428b08: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00428b0b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428b0d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428b0f: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428b12: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428b16: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428b1b: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428b1e: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428b21: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428b24: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428b27: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428b2a: mov word ptr [0xa438ea], si */ W16((u32)(0xa438eau), (u16)r_esi);
    /* 00428b31: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00428b34: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428b36: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428b38: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428b3b: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428b3f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428b44: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428b47: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428b4a: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428b4d: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428b50: mov edi, dword ptr [ebp - 0x4c] */ r_edi = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428b53: mov word ptr [0xa438d2], di */ W16((u32)(0xa438d2u), (u16)r_edi);
    /* 00428b5a: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 00428b5d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428b5f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428b61: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428b64: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428b68: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428b6d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428b70: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428b73: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428b76: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428b79: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428b7c: mov word ptr [0xa438ec], ax */ W16((u32)(0xa438ecu), (u16)r_eax);
    /* 00428b82: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 00428b85: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428b87: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428b89: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428b8c: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428b90: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428b95: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428b98: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428b9b: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428b9e: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428ba1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428ba4: mov word ptr [0xa438d4], ax */ W16((u32)(0xa438d4u), (u16)r_eax);
    /* 00428baa: fld dword ptr [edx + 0x50] */ FPUSH(R_F32((u32)(r_edx+0x50u)));
    /* 00428bad: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428baf: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428bb1: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428bb4: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428bb8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428bbd: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428bc0: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428bc3: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428bc6: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428bc9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428bcc: mov word ptr [0xa438ee], ax */ W16((u32)(0xa438eeu), (u16)r_eax);
    /* 00428bd2: fld dword ptr [edx + 0x50] */ FPUSH(R_F32((u32)(r_edx+0x50u)));
    /* 00428bd5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428bd7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428bd9: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428bdc: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428be0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428be5: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428be8: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428beb: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428bee: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428bf1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428bf4: mov word ptr [0xa438d6], ax */ W16((u32)(0xa438d6u), (u16)r_eax);
    /* 00428bfa: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 00428bfd: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428bff: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428c01: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428c04: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c08: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428c0d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428c10: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428c13: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428c16: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c19: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428c1c: mov word ptr [0xa438f0], ax */ W16((u32)(0xa438f0u), (u16)r_eax);
    /* 00428c22: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 00428c25: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428c27: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428c29: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428c2c: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c30: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428c35: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428c38: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428c3b: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428c3e: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c41: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428c44: mov word ptr [0xa438d8], ax */ W16((u32)(0xa438d8u), (u16)r_eax);
    /* 00428c4a: fld dword ptr [edx + 0x80] */ FPUSH(R_F32((u32)(r_edx+0x80u)));
    /* 00428c50: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428c52: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428c54: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428c57: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c5b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428c60: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428c63: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428c66: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428c69: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c6c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428c6f: mov word ptr [0xa438f2], ax */ W16((u32)(0xa438f2u), (u16)r_eax);
    /* 00428c75: fld dword ptr [edx + 0x80] */ FPUSH(R_F32((u32)(r_edx+0x80u)));
    /* 00428c7b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428c7d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428c7f: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428c82: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c86: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428c8b: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428c8e: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428c91: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428c94: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c97: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428c9a: mov word ptr [0xa438da], ax */ W16((u32)(0xa438dau), (u16)r_eax);
    /* 00428ca0: fld dword ptr [edx + 0x98] */ FPUSH(R_F32((u32)(r_edx+0x98u)));
    /* 00428ca6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428ca8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428caa: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428cad: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428cb1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428cb6: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428cb9: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428cbc: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428cbf: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428cc2: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428cc5: mov word ptr [0xa438f4], ax */ W16((u32)(0xa438f4u), (u16)r_eax);
    /* 00428ccb: fld dword ptr [edx + 0x98] */ FPUSH(R_F32((u32)(r_edx+0x98u)));
    /* 00428cd1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428cd3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428cd5: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428cd8: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428cdc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428ce1: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428ce4: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428ce7: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428cea: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428ced: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428cf0: mov word ptr [0xa438dc], ax */ W16((u32)(0xa438dcu), (u16)r_eax);
    /* 00428cf6: fld dword ptr [edx + 0xb0] */ FPUSH(R_F32((u32)(r_edx+0xb0u)));
    /* 00428cfc: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428cfe: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428d00: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428d03: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d07: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428d0c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428d0f: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428d12: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428d15: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d18: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428d1b: mov word ptr [0xa438f6], ax */ W16((u32)(0xa438f6u), (u16)r_eax);
    /* 00428d21: fld dword ptr [edx + 0xb0] */ FPUSH(R_F32((u32)(r_edx+0xb0u)));
    /* 00428d27: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428d29: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428d2b: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428d2e: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d32: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428d37: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428d3a: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428d3d: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428d40: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d43: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428d46: mov word ptr [0xa438de], ax */ W16((u32)(0xa438deu), (u16)r_eax);
    /* 00428d4c: fld dword ptr [edx + 0xc8] */ FPUSH(R_F32((u32)(r_edx+0xc8u)));
    /* 00428d52: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428d54: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428d56: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428d59: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d5d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428d62: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428d65: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428d68: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428d6b: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d6e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428d71: mov word ptr [0xa438f8], ax */ W16((u32)(0xa438f8u), (u16)r_eax);
    /* 00428d77: fld dword ptr [edx + 0xc8] */ FPUSH(R_F32((u32)(r_edx+0xc8u)));
    /* 00428d7d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428d7f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428d81: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428d84: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d88: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428d8d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428d90: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428d93: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428d96: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d99: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428d9c: mov word ptr [0xa438e0], ax */ W16((u32)(0xa438e0u), (u16)r_eax);
    /* 00428da2: fld dword ptr [edx + 0xe0] */ FPUSH(R_F32((u32)(r_edx+0xe0u)));
    /* 00428da8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428daa: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428dac: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428daf: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428db3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428db8: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428dbb: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428dbe: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428dc1: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428dc4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428dc7: mov word ptr [0xa438fa], ax */ W16((u32)(0xa438fau), (u16)r_eax);
    /* 00428dcd: fld dword ptr [edx + 0xe0] */ FPUSH(R_F32((u32)(r_edx+0xe0u)));
    /* 00428dd3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428dd5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428dd7: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428dda: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428dde: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428de3: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428de6: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428de9: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428dec: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428def: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428df2: mov word ptr [0xa438e2], ax */ W16((u32)(0xa438e2u), (u16)r_eax);
    /* 00428df8: fld dword ptr [edx + 0xf8] */ FPUSH(R_F32((u32)(r_edx+0xf8u)));
    /* 00428dfe: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00428e00: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428e02: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00428e04: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00428e06: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428e09: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428e0d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428e12: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428e15: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428e18: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428e1b: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428e1e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428e21: mov word ptr [0xa438fc], ax */ W16((u32)(0xa438fcu), (u16)r_eax);
    /* 00428e27: fld dword ptr [edx + 0xf8] */ FPUSH(R_F32((u32)(r_edx+0xf8u)));
    /* 00428e2d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00428e2f: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00428e36: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00428e38: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428e3b: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428e3f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428e44: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428e47: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428e4a: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428e4d: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428e50: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428e53: mov word ptr [0xa438e4], ax */ W16((u32)(0xa438e4u), (u16)r_eax);
    /* 00428e59: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x428e5eu); f_008581c5();
    /* 00428e5e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00428e61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428e64: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00428e67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428e69: je 0x429322 */ if (fZ) goto L_00429322;
L_00428e6f:; BB(0x00428e6f);
    /* 00428e6f: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 00428e76: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00428e7d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00428e80: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428e84: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e86: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e88: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e8a: call 0x4286c0 */ r_esp -= 4; W32(r_esp, 0x428e8fu); f_004286c0();
    /* 00428e8f: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00428e96:; BB(0x00428e96);
    /* 00428e96: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e99: mov dword ptr [0xa43900], eax */ W32((u32)(0xa43900u), r_eax);
    /* 00428e9e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00428ea5: fld dword ptr [0x8fc520] */ FPUSH(R_F32((u32)(0x8fc520u)));
    /* 00428eab: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 00428eae: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00428eb1: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428eb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00428eb6:; BB(0x00428eb6);
    /* 00428eb6: fld dword ptr [0x8fc51c] */ FPUSH(R_F32((u32)(0x8fc51cu)));
    /* 00428ebc: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00428ebf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00428ec1:; BB(0x00428ec1);
    /* 00428ec1: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ec6: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00428ec9: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00428ecc: fld dword ptr [0x8fc52c] */ FPUSH(R_F32((u32)(0x8fc52cu)));
    /* 00428ed2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00428ed4: fst dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0));
    /* 00428ed7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428ed9: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 00428edc: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00428ede: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428ee1: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00428ee2: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00428ee3: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 00428ee6: call 0x428890 */ r_esp -= 4; W32(r_esp, 0x428eebu); f_00428890();
    /* 00428eeb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428eee: fadd dword ptr [0x8fc518] */ ST(0) = ST(0) + R_F32((u32)(0x8fc518u));
    /* 00428ef4: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00428ef7: fld dword ptr [0x8fc514] */ FPUSH(R_F32((u32)(0x8fc514u)));
    /* 00428efd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00428eff: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00428f01: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00428f04: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428f06: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00428f09: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00428f0b: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00428f0e: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00428f11: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00428f14: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00428f17: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00428f1a: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00428f1d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428f20: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 00428f23: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428f26: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428f29: jge 0x428f2f */ if ((fS==fO)) goto L_00428f2f;
L_00428f2b:; BB(0x00428f2b);
    /* 00428f2b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00428f2d: jmp 0x428ec1 */ goto L_00428ec1;
L_00428f2f:; BB(0x00428f2f);
    /* 00428f2f: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00428f32: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00428f34: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00428f37: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428f3a: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428f3d: jl 0x428eb6 */ if ((fS!=fO)) goto L_00428eb6;
L_00428f43:; BB(0x00428f43);
    /* 00428f43: mov eax, dword ptr [0xa43900] */ r_eax = R32((u32)(0xa43900u));
    /* 00428f48: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 00428f4b: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 00428f4f: and edx, 0xc000 */ {  u32 a = r_edx; u32 b = 0xc000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00428f55: movzx ecx, word ptr [ebx + 0x10] */ r_ecx = (u32)R16((u32)(r_ebx+0x10u));
    /* 00428f59: or edx, 0xffff0005 */ {  u32 a = r_edx; u32 b = 0xffff0005u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00428f5f: mov word ptr [ebx + 0xe], dx */ W16((u32)(r_ebx+0xeu), (u16)r_edx);
    /* 00428f63: or ecx, 0xffff0900 */ {  u32 a = r_ecx; u32 b = 0xffff0900u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00428f69: mov word ptr [ebx + 0x10], cx */ W16((u32)(r_ebx+0x10u), (u16)r_ecx);
    /* 00428f6d: mov ecx, 0x300 */ r_ecx = 0x300u;
    /* 00428f72: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00428f74: mov esi, dword ptr [0xa43900] */ r_esi = R32((u32)(0xa43900u));
    /* 00428f7a: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00428f7d: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00428f80: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00428f82: lea ebx, [edi + eax + 6] */ r_ebx = (u32)(r_edi+r_eax+0x6u);
    /* 00428f86: mov eax, 0x400 */ r_eax = 0x400u;
L_00428f8b:; BB(0x00428f8b);
    /* 00428f8b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00428f8d: mov word ptr [ebx + 4], si */ W16((u32)(r_ebx+0x4u), (u16)r_esi);
    /* 00428f91: mov word ptr [ebx + 6], ax */ W16((u32)(r_ebx+0x6u), (u16)r_eax);
    /* 00428f95: mov word ptr [ebx + 0xa], si */ W16((u32)(r_ebx+0xau), (u16)r_esi);
    /* 00428f99: mov word ptr [ebx + 0xc], cx */ W16((u32)(r_ebx+0xcu), (u16)r_ecx);
    /* 00428f9d: mov edi, 0x100 */ r_edi = 0x100u;
    /* 00428fa2: mov word ptr [ebx + 0x10], di */ W16((u32)(r_ebx+0x10u), (u16)r_edi);
    /* 00428fa6: mov word ptr [ebx + 0x12], ax */ W16((u32)(r_ebx+0x12u), (u16)r_eax);
    /* 00428faa: mov word ptr [ebx + 0x16], di */ W16((u32)(r_ebx+0x16u), (u16)r_edi);
    /* 00428fae: mov word ptr [ebx + 0x18], cx */ W16((u32)(r_ebx+0x18u), (u16)r_ecx);
    /* 00428fb2: mov esi, 0x200 */ r_esi = 0x200u;
    /* 00428fb7: mov word ptr [ebx + 0x1c], si */ W16((u32)(r_ebx+0x1cu), (u16)r_esi);
    /* 00428fbb: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
    /* 00428fbf: mov word ptr [ebx + 0x22], si */ W16((u32)(r_ebx+0x22u), (u16)r_esi);
    /* 00428fc3: mov word ptr [ebx + 0x24], cx */ W16((u32)(r_ebx+0x24u), (u16)r_ecx);
    /* 00428fc7: mov esi, 0x300 */ r_esi = 0x300u;
    /* 00428fcc: mov word ptr [ebx + 0x28], si */ W16((u32)(r_ebx+0x28u), (u16)r_esi);
    /* 00428fd0: mov word ptr [ebx + 0x2a], ax */ W16((u32)(r_ebx+0x2au), (u16)r_eax);
    /* 00428fd4: mov word ptr [ebx + 0x2e], si */ W16((u32)(r_ebx+0x2eu), (u16)r_esi);
    /* 00428fd8: mov word ptr [ebx + 0x30], cx */ W16((u32)(r_ebx+0x30u), (u16)r_ecx);
    /* 00428fdc: mov esi, 0x400 */ r_esi = 0x400u;
    /* 00428fe1: mov word ptr [ebx + 0x34], si */ W16((u32)(r_ebx+0x34u), (u16)r_esi);
    /* 00428fe5: mov word ptr [ebx + 0x36], ax */ W16((u32)(r_ebx+0x36u), (u16)r_eax);
    /* 00428fe9: mov word ptr [ebx + 0x3a], si */ W16((u32)(r_ebx+0x3au), (u16)r_esi);
    /* 00428fed: mov word ptr [ebx + 0x3c], cx */ W16((u32)(r_ebx+0x3cu), (u16)r_ecx);
    /* 00428ff1: mov eax, ecx */ r_eax = r_ecx;
    /* 00428ff3: add ecx, 0xffffff00 */ {  u32 a = r_ecx; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428ff9: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 00428ffc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00428fff: add ebx, 0x3e */ {  u32 a = r_ebx; u32 b = 0x3eu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00429002: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429005: jl 0x428f8b */ if ((fS!=fO)) goto L_00428f8b;
L_00429007:; BB(0x00429007);
    /* 00429007: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0042900e: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00429010: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x429015u); f_008581c5();
    /* 00429015: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00429016: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0042901c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042901e: je 0x42931b */ if (fZ) goto L_0042931b;
L_00429024:; BB(0x00429024);
    /* 00429024: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0042902b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00429032: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00429035: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042903b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042903c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042903e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00429040: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00429042: call 0x4286c0 */ r_esp -= 4; W32(r_esp, 0x429047u); f_004286c0();
    /* 00429047: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042904d: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00429054:; BB(0x00429054);
    /* 00429054: mov dword ptr [0xa43904], eax */ W32((u32)(0xa43904u), r_eax);
    /* 00429059: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00429060: mov ecx, dword ptr [0xa43820] */ r_ecx = R32((u32)(0xa43820u));
    /* 00429066: mov esi, dword ptr [ecx + 0x42c] */ r_esi = R32((u32)(r_ecx+0x42cu));
    /* 0042906c: mov ebx, dword ptr [esi + 0x38] */ r_ebx = R32((u32)(r_esi+0x38u));
    /* 0042906f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 00429072: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00429075: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 00429077: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042907a: mov eax, 0x408 */ r_eax = 0x408u;
    /* 0042907f: mov word ptr [ecx + 0xc], ax */ W16((u32)(r_ecx+0xcu), (u16)r_eax);
    /* 00429083: lea edx, [ecx + 0x10] */ r_edx = (u32)(r_ecx+0x10u);
    /* 00429086: mov eax, 0x242 */ r_eax = 0x242u;
    /* 0042908b: mov edi, 0 */ r_edi = 0x0u;
    /* 00429090: mov dword ptr [0xa438c8], edx */ W32((u32)(0xa438c8u), r_edx);
    /* 00429096: mov word ptr [ecx + 0x10], ax */ W16((u32)(r_ecx+0x10u), (u16)r_eax);
    /* 0042909a: movzx eax, word ptr [ecx + 0x14] */ r_eax = (u32)R16((u32)(r_ecx+0x14u));
    /* 0042909e: add ecx, 0x16 */ {  u32 a = r_ecx; u32 b = 0x16u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004290a1: and eax, 0x3fff */ {  u32 a = r_eax; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004290a6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004290a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004290ab: mov eax, 0 */ r_eax = 0x0u;
    /* 004290b0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004290b3: jle 0x42914b */ if ((fZ||fS!=fO)) goto L_0042914b;
L_004290b9:; BB(0x004290b9);
    /* 004290b9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004290bc: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004290bf: jl 0x42912b */ if ((fS!=fO)) goto L_0042912b;
L_004290c1:; BB(0x004290c1);
    /* 004290c1: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
    /* 004290c4: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_004290c7:; BB(0x004290c7);
    /* 004290c7: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004290ca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004290cb: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004290cd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004290cf: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004290d2: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004290d4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004290d7: movsx eax, word ptr [ecx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 004290db: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004290dc: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004290de: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004290e0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004290e3: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004290e6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004290e9: movsx eax, word ptr [ecx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 004290ed: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004290ee: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004290f0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004290f2: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 004290f5: add edi, dword ptr [ebp - 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004290f8: movsx eax, word ptr [ecx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004290fc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004290fd: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004290ff: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00429101: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00429104: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429106: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00429109: movsx eax, word ptr [ecx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 0042910d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0042910e: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429111: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429113: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00429115: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00429118: add edi, dword ptr [ebp - 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042911b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042911e: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429121: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00429124: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00429127: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429129: jle 0x4290c7 */ if ((fZ||fS!=fO)) goto L_004290c7;
L_0042912b:; BB(0x0042912b);
    /* 0042912b: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0042912e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0042912f: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429132: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429134: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00429136: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00429139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0042913c: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042913e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00429141: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429144: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00429147: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429149: jl 0x42912b */ if ((fS!=fO)) goto L_0042912b;
L_0042914b:; BB(0x0042914b);
    /* 0042914b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042914d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042914f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00429150: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x429155u); f_008581c5();
    /* 00429155: mov ecx, eax */ r_ecx = r_eax;
    /* 00429157: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042915a: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042915d: mov dword ptr [0xa438cc], ecx */ W32((u32)(0xa438ccu), r_ecx);
    /* 00429163: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00429165: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00429167: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0042916a: jle 0x429217 */ if ((fZ||fS!=fO)) goto L_00429217;
L_00429170:; BB(0x00429170);
    /* 00429170: fld dword ptr [0x8fc64c] */ FPUSH(R_F32((u32)(0x8fc64cu)));
    /* 00429176: fld dword ptr [0x8fc524] */ FPUSH(R_F32((u32)(0x8fc524u)));
    /* 0042917c: fld dword ptr [0x8fc648] */ FPUSH(R_F32((u32)(0x8fc648u)));
L_00429182:; BB(0x00429182);
    /* 00429182: movsx eax, word ptr [ebx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00429185: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00429186: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00429188: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042918b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042918d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042918f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00429192: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00429195: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00429197: jle 0x4291fd */ if ((fZ||fS!=fO)) goto L_004291fd;
L_00429199:; BB(0x00429199);
    /* 00429199: movsx eax, word ptr [ebx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0042919c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0042919f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004291a1: fld dword ptr [esi + edx*8] */ FPUSH(R_F32((u32)(r_esi+r_edx*8)));
    /* 004291a4: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004291a6: add ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004291a9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004291ab: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 004291ae: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 004291b2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004291b7: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004291ba: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 004291bd: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004291c0: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 004291c3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004291c6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004291c9: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 004291cc: fld dword ptr [esi + edx*8 + 8] */ FPUSH(R_F32((u32)(r_esi+r_edx*8+0x8u)));
    /* 004291d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004291d2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004291d4: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 004291d7: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 004291db: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004291e0: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004291e3: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 004291e6: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004291e9: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 004291ec: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004291ef: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 004291f3: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004291f6: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004291f9: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004291fb: jl 0x429199 */ if ((fS!=fO)) goto L_00429199;
L_004291fd:; BB(0x004291fd);
    /* 004291fd: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00429200: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00429203: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00429206: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00429209: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042920b: jl 0x429182 */ if ((fS!=fO)) goto L_00429182;
L_00429211:; BB(0x00429211);
    /* 00429211: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429213: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429215: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00429217:; BB(0x00429217);
    /* 00429217: mov edx, dword ptr [0xa43820] */ r_edx = R32((u32)(0xa43820u));
    /* 0042921d: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00429223: mov ebx, dword ptr [ecx + 0x38] */ r_ebx = R32((u32)(r_ecx+0x38u));
    /* 00429226: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00429229: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0042922b: movzx eax, word ptr [edi + 6] */ r_eax = (u32)R16((u32)(r_edi+0x6u));
    /* 0042922f: mov dword ptr [0xa438c4], 0 */ W32((u32)(0xa438c4u), 0x0u);
    /* 00429239: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0042923c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042923e: mov ebx, esi */ r_ebx = r_esi;
    /* 00429240: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00429242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00429244: jle 0x42926f */ if ((fZ||fS!=fO)) goto L_0042926f;
L_00429246:; BB(0x00429246);
    /* 00429246: fld dword ptr [0x8fc508] */ FPUSH(R_F32((u32)(0x8fc508u)));
L_0042924c:; BB(0x0042924c);
    /* 0042924c: fcom dword ptr [esi + 4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x4u))); 
    /* 0042924f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429251: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 00429254: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429255: jae 0x429260 */ if (!fC) goto L_00429260;
L_00429257:; BB(0x00429257);
    /* 00429257: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042925a: mov dword ptr [0xa438c4], ecx */ W32((u32)(0xa438c4u), r_ecx);
L_00429260:; BB(0x00429260);
    /* 00429260: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00429263: lea esi, [edi + 0x14] */ r_esi = (u32)(r_edi+0x14u);
    /* 00429266: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00429269: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042926b: jl 0x42924c */ if ((fS!=fO)) goto L_0042924c;
L_0042926d:; BB(0x0042926d);
    /* 0042926d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0042926f:; BB(0x0042926f);
    /* 0042926f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429271: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429273: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429275: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429277: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429278: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42927du); f_008581c5();
    /* 0042927d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00429280: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429283: mov edi, eax */ r_edi = r_eax;
    /* 00429285: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00429288: mov dword ptr [0xa438c0], edi */ W32((u32)(0xa438c0u), r_edi);
    /* 0042928e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00429290: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00429292: jle 0x429304 */ if ((fZ||fS!=fO)) goto L_00429304;
L_00429294:; BB(0x00429294);
    /* 00429294: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00429297: fcomp dword ptr [0x8fc508] */ fx_compare(ST(0), R_F32((u32)(0x8fc508u))); FPOP();
    /* 0042929d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042929f: lea esi, [ebx + 4] */ r_esi = (u32)(r_ebx+0x4u);
    /* 004292a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004292a3: jbe 0x4292f7 */ if ((fC||fZ)) goto L_004292f7;
L_004292a5:; BB(0x004292a5);
    /* 004292a5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004292a8: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 004292aa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004292ac: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004292af: mov dword ptr [edx + 8], 0xc1000000 */ W32((u32)(r_edx+0x8u), 0xc1000000u);
    /* 004292b6: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4292bbu); f_008587a5();
    /* 004292bb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004292be: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004292c1: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 004292c4: fdiv dword ptr [0x8fc510] */ ST(0) = ST(0) / R_F32((u32)(0x8fc510u));
    /* 004292ca: fmul dword ptr [0x8fc50c] */ ST(0) = ST(0) * R_F32((u32)(0x8fc50cu));
    /* 004292d0: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 004292d3: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 004292d7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004292dc: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004292df: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 004292e2: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004292e5: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 004292e8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004292eb: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004292ee: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 004292f1: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004292f4: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_004292f7:; BB(0x004292f7);
    /* 004292f7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004292fa: lea ebx, [esi + 0x14] */ r_ebx = (u32)(r_esi+0x14u);
    /* 004292fd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00429300: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00429302: jl 0x429294 */ if ((fS!=fO)) goto L_00429294;
L_00429304:; BB(0x00429304);
    /* 00429304: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00429307: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042930a: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042930d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429310: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00429317: mov esp, ebp */ r_esp = r_ebp;
    /* 00429319: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042931a: ret  */ FN_RET(0x00428950); r_esp += 4; return;
L_0042931b:; BB(0x0042931b);
    /* 0042931b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042931d: jmp 0x429054 */ goto L_00429054;
L_00429322:; BB(0x00429322);
    /* 00429322: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429324: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00429327: jmp 0x428e96 */ goto L_00428e96;
L_0042932c:; BB(0x0042932c);
    /* 0042932c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042932e: jmp 0x4289e4 */ goto L_004289e4;
}

void f_00428b8b(void)
{
    FN_ENTER(0x00428b8b);
    /* 00428b8b: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00428b8c: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428b90: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428b95: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428b98: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428b9b: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428b9e: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428ba1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428ba4: mov word ptr [0xa438d4], ax */ W16((u32)(0xa438d4u), (u16)r_eax);
    /* 00428baa: fld dword ptr [edx + 0x50] */ FPUSH(R_F32((u32)(r_edx+0x50u)));
    /* 00428bad: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428baf: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428bb1: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428bb4: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428bb8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428bbd: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428bc0: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428bc3: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428bc6: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428bc9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428bcc: mov word ptr [0xa438ee], ax */ W16((u32)(0xa438eeu), (u16)r_eax);
    /* 00428bd2: fld dword ptr [edx + 0x50] */ FPUSH(R_F32((u32)(r_edx+0x50u)));
    /* 00428bd5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428bd7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428bd9: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428bdc: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428be0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428be5: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428be8: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428beb: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428bee: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428bf1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428bf4: mov word ptr [0xa438d6], ax */ W16((u32)(0xa438d6u), (u16)r_eax);
    /* 00428bfa: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 00428bfd: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428bff: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428c01: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428c04: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c08: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428c0d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428c10: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428c13: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428c16: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c19: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428c1c: mov word ptr [0xa438f0], ax */ W16((u32)(0xa438f0u), (u16)r_eax);
    /* 00428c22: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 00428c25: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428c27: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428c29: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428c2c: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c30: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428c35: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428c38: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428c3b: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428c3e: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c41: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428c44: mov word ptr [0xa438d8], ax */ W16((u32)(0xa438d8u), (u16)r_eax);
    /* 00428c4a: fld dword ptr [edx + 0x80] */ FPUSH(R_F32((u32)(r_edx+0x80u)));
    /* 00428c50: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428c52: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428c54: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428c57: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c5b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428c60: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428c63: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428c66: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428c69: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c6c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428c6f: mov word ptr [0xa438f2], ax */ W16((u32)(0xa438f2u), (u16)r_eax);
    /* 00428c75: fld dword ptr [edx + 0x80] */ FPUSH(R_F32((u32)(r_edx+0x80u)));
    /* 00428c7b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428c7d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428c7f: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428c82: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c86: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428c8b: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428c8e: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428c91: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428c94: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428c97: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428c9a: mov word ptr [0xa438da], ax */ W16((u32)(0xa438dau), (u16)r_eax);
    /* 00428ca0: fld dword ptr [edx + 0x98] */ FPUSH(R_F32((u32)(r_edx+0x98u)));
    /* 00428ca6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428ca8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428caa: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428cad: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428cb1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428cb6: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428cb9: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428cbc: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428cbf: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428cc2: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428cc5: mov word ptr [0xa438f4], ax */ W16((u32)(0xa438f4u), (u16)r_eax);
    /* 00428ccb: fld dword ptr [edx + 0x98] */ FPUSH(R_F32((u32)(r_edx+0x98u)));
    /* 00428cd1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428cd3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428cd5: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428cd8: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428cdc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428ce1: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428ce4: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428ce7: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428cea: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428ced: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428cf0: mov word ptr [0xa438dc], ax */ W16((u32)(0xa438dcu), (u16)r_eax);
    /* 00428cf6: fld dword ptr [edx + 0xb0] */ FPUSH(R_F32((u32)(r_edx+0xb0u)));
    /* 00428cfc: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428cfe: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428d00: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428d03: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d07: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428d0c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428d0f: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428d12: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428d15: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d18: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428d1b: mov word ptr [0xa438f6], ax */ W16((u32)(0xa438f6u), (u16)r_eax);
    /* 00428d21: fld dword ptr [edx + 0xb0] */ FPUSH(R_F32((u32)(r_edx+0xb0u)));
    /* 00428d27: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428d29: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428d2b: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428d2e: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d32: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428d37: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428d3a: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428d3d: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428d40: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d43: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428d46: mov word ptr [0xa438de], ax */ W16((u32)(0xa438deu), (u16)r_eax);
    /* 00428d4c: fld dword ptr [edx + 0xc8] */ FPUSH(R_F32((u32)(r_edx+0xc8u)));
    /* 00428d52: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428d54: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428d56: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428d59: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d5d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428d62: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428d65: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428d68: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428d6b: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d6e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428d71: mov word ptr [0xa438f8], ax */ W16((u32)(0xa438f8u), (u16)r_eax);
    /* 00428d77: fld dword ptr [edx + 0xc8] */ FPUSH(R_F32((u32)(r_edx+0xc8u)));
    /* 00428d7d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428d7f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428d81: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428d84: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d88: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428d8d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428d90: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428d93: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428d96: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428d99: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428d9c: mov word ptr [0xa438e0], ax */ W16((u32)(0xa438e0u), (u16)r_eax);
    /* 00428da2: fld dword ptr [edx + 0xe0] */ FPUSH(R_F32((u32)(r_edx+0xe0u)));
    /* 00428da8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00428daa: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428dac: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428daf: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428db3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428db8: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428dbb: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428dbe: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428dc1: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428dc4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428dc7: mov word ptr [0xa438fa], ax */ W16((u32)(0xa438fau), (u16)r_eax);
    /* 00428dcd: fld dword ptr [edx + 0xe0] */ FPUSH(R_F32((u32)(r_edx+0xe0u)));
    /* 00428dd3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00428dd5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00428dd7: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428dda: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428dde: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428de3: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428de6: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428de9: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428dec: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428def: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428df2: mov word ptr [0xa438e2], ax */ W16((u32)(0xa438e2u), (u16)r_eax);
    /* 00428df8: fld dword ptr [edx + 0xf8] */ FPUSH(R_F32((u32)(r_edx+0xf8u)));
    /* 00428dfe: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00428e00: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428e02: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00428e04: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00428e06: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428e09: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428e0d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428e12: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428e15: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428e18: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428e1b: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428e1e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428e21: mov word ptr [0xa438fc], ax */ W16((u32)(0xa438fcu), (u16)r_eax);
    /* 00428e27: fld dword ptr [edx + 0xf8] */ FPUSH(R_F32((u32)(r_edx+0xf8u)));
    /* 00428e2d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00428e2f: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00428e36: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00428e38: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 00428e3b: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 00428e3f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00428e44: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428e47: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 00428e4a: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00428e4d: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00428e50: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428e53: mov word ptr [0xa438e4], ax */ W16((u32)(0xa438e4u), (u16)r_eax);
    /* 00428e59: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x428e5eu); f_008581c5();
    /* 00428e5e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00428e61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428e64: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00428e67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428e69: je 0x429322 */ if (fZ) goto L_00429322;
L_00428e6f:; BB(0x00428e6f);
    /* 00428e6f: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 00428e76: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00428e7d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00428e80: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428e84: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e86: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e88: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e8a: call 0x4286c0 */ r_esp -= 4; W32(r_esp, 0x428e8fu); f_004286c0();
    /* 00428e8f: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00428e96:; BB(0x00428e96);
    /* 00428e96: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e99: mov dword ptr [0xa43900], eax */ W32((u32)(0xa43900u), r_eax);
    /* 00428e9e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00428ea5: fld dword ptr [0x8fc520] */ FPUSH(R_F32((u32)(0x8fc520u)));
    /* 00428eab: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 00428eae: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00428eb1: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428eb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00428eb6:; BB(0x00428eb6);
    /* 00428eb6: fld dword ptr [0x8fc51c] */ FPUSH(R_F32((u32)(0x8fc51cu)));
    /* 00428ebc: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00428ebf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00428ec1:; BB(0x00428ec1);
    /* 00428ec1: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ec6: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00428ec9: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00428ecc: fld dword ptr [0x8fc52c] */ FPUSH(R_F32((u32)(0x8fc52cu)));
    /* 00428ed2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00428ed4: fst dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0));
    /* 00428ed7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428ed9: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 00428edc: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00428ede: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428ee1: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00428ee2: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00428ee3: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 00428ee6: call 0x428890 */ r_esp -= 4; W32(r_esp, 0x428eebu); f_00428890();
    /* 00428eeb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428eee: fadd dword ptr [0x8fc518] */ ST(0) = ST(0) + R_F32((u32)(0x8fc518u));
    /* 00428ef4: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00428ef7: fld dword ptr [0x8fc514] */ FPUSH(R_F32((u32)(0x8fc514u)));
    /* 00428efd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00428eff: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00428f01: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00428f04: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00428f06: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00428f09: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00428f0b: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00428f0e: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00428f11: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00428f14: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00428f17: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00428f1a: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00428f1d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428f20: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 00428f23: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428f26: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428f29: jge 0x428f2f */ if ((fS==fO)) goto L_00428f2f;
L_00428f2b:; BB(0x00428f2b);
    /* 00428f2b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00428f2d: jmp 0x428ec1 */ goto L_00428ec1;
L_00428f2f:; BB(0x00428f2f);
    /* 00428f2f: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00428f32: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00428f34: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00428f37: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00428f3a: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428f3d: jl 0x428eb6 */ if ((fS!=fO)) goto L_00428eb6;
L_00428f43:; BB(0x00428f43);
    /* 00428f43: mov eax, dword ptr [0xa43900] */ r_eax = R32((u32)(0xa43900u));
    /* 00428f48: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 00428f4b: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 00428f4f: and edx, 0xc000 */ {  u32 a = r_edx; u32 b = 0xc000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00428f55: movzx ecx, word ptr [ebx + 0x10] */ r_ecx = (u32)R16((u32)(r_ebx+0x10u));
    /* 00428f59: or edx, 0xffff0005 */ {  u32 a = r_edx; u32 b = 0xffff0005u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00428f5f: mov word ptr [ebx + 0xe], dx */ W16((u32)(r_ebx+0xeu), (u16)r_edx);
    /* 00428f63: or ecx, 0xffff0900 */ {  u32 a = r_ecx; u32 b = 0xffff0900u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00428f69: mov word ptr [ebx + 0x10], cx */ W16((u32)(r_ebx+0x10u), (u16)r_ecx);
    /* 00428f6d: mov ecx, 0x300 */ r_ecx = 0x300u;
    /* 00428f72: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00428f74: mov esi, dword ptr [0xa43900] */ r_esi = R32((u32)(0xa43900u));
    /* 00428f7a: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00428f7d: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00428f80: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00428f82: lea ebx, [edi + eax + 6] */ r_ebx = (u32)(r_edi+r_eax+0x6u);
    /* 00428f86: mov eax, 0x400 */ r_eax = 0x400u;
L_00428f8b:; BB(0x00428f8b);
    /* 00428f8b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00428f8d: mov word ptr [ebx + 4], si */ W16((u32)(r_ebx+0x4u), (u16)r_esi);
    /* 00428f91: mov word ptr [ebx + 6], ax */ W16((u32)(r_ebx+0x6u), (u16)r_eax);
    /* 00428f95: mov word ptr [ebx + 0xa], si */ W16((u32)(r_ebx+0xau), (u16)r_esi);
    /* 00428f99: mov word ptr [ebx + 0xc], cx */ W16((u32)(r_ebx+0xcu), (u16)r_ecx);
    /* 00428f9d: mov edi, 0x100 */ r_edi = 0x100u;
    /* 00428fa2: mov word ptr [ebx + 0x10], di */ W16((u32)(r_ebx+0x10u), (u16)r_edi);
    /* 00428fa6: mov word ptr [ebx + 0x12], ax */ W16((u32)(r_ebx+0x12u), (u16)r_eax);
    /* 00428faa: mov word ptr [ebx + 0x16], di */ W16((u32)(r_ebx+0x16u), (u16)r_edi);
    /* 00428fae: mov word ptr [ebx + 0x18], cx */ W16((u32)(r_ebx+0x18u), (u16)r_ecx);
    /* 00428fb2: mov esi, 0x200 */ r_esi = 0x200u;
    /* 00428fb7: mov word ptr [ebx + 0x1c], si */ W16((u32)(r_ebx+0x1cu), (u16)r_esi);
    /* 00428fbb: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
    /* 00428fbf: mov word ptr [ebx + 0x22], si */ W16((u32)(r_ebx+0x22u), (u16)r_esi);
    /* 00428fc3: mov word ptr [ebx + 0x24], cx */ W16((u32)(r_ebx+0x24u), (u16)r_ecx);
    /* 00428fc7: mov esi, 0x300 */ r_esi = 0x300u;
    /* 00428fcc: mov word ptr [ebx + 0x28], si */ W16((u32)(r_ebx+0x28u), (u16)r_esi);
    /* 00428fd0: mov word ptr [ebx + 0x2a], ax */ W16((u32)(r_ebx+0x2au), (u16)r_eax);
    /* 00428fd4: mov word ptr [ebx + 0x2e], si */ W16((u32)(r_ebx+0x2eu), (u16)r_esi);
    /* 00428fd8: mov word ptr [ebx + 0x30], cx */ W16((u32)(r_ebx+0x30u), (u16)r_ecx);
    /* 00428fdc: mov esi, 0x400 */ r_esi = 0x400u;
    /* 00428fe1: mov word ptr [ebx + 0x34], si */ W16((u32)(r_ebx+0x34u), (u16)r_esi);
    /* 00428fe5: mov word ptr [ebx + 0x36], ax */ W16((u32)(r_ebx+0x36u), (u16)r_eax);
    /* 00428fe9: mov word ptr [ebx + 0x3a], si */ W16((u32)(r_ebx+0x3au), (u16)r_esi);
    /* 00428fed: mov word ptr [ebx + 0x3c], cx */ W16((u32)(r_ebx+0x3cu), (u16)r_ecx);
    /* 00428ff1: mov eax, ecx */ r_eax = r_ecx;
    /* 00428ff3: add ecx, 0xffffff00 */ {  u32 a = r_ecx; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428ff9: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 00428ffc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00428fff: add ebx, 0x3e */ {  u32 a = r_ebx; u32 b = 0x3eu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00429002: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429005: jl 0x428f8b */ if ((fS!=fO)) goto L_00428f8b;
L_00429007:; BB(0x00429007);
    /* 00429007: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0042900e: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00429010: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x429015u); f_008581c5();
    /* 00429015: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00429016: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0042901c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042901e: je 0x42931b */ if (fZ) goto L_0042931b;
L_00429024:; BB(0x00429024);
    /* 00429024: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0042902b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00429032: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00429035: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042903b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042903c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042903e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00429040: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00429042: call 0x4286c0 */ r_esp -= 4; W32(r_esp, 0x429047u); f_004286c0();
    /* 00429047: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0042904d: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00429054:; BB(0x00429054);
    /* 00429054: mov dword ptr [0xa43904], eax */ W32((u32)(0xa43904u), r_eax);
    /* 00429059: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00429060: mov ecx, dword ptr [0xa43820] */ r_ecx = R32((u32)(0xa43820u));
    /* 00429066: mov esi, dword ptr [ecx + 0x42c] */ r_esi = R32((u32)(r_ecx+0x42cu));
    /* 0042906c: mov ebx, dword ptr [esi + 0x38] */ r_ebx = R32((u32)(r_esi+0x38u));
    /* 0042906f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 00429072: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00429075: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 00429077: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042907a: mov eax, 0x408 */ r_eax = 0x408u;
    /* 0042907f: mov word ptr [ecx + 0xc], ax */ W16((u32)(r_ecx+0xcu), (u16)r_eax);
    /* 00429083: lea edx, [ecx + 0x10] */ r_edx = (u32)(r_ecx+0x10u);
    /* 00429086: mov eax, 0x242 */ r_eax = 0x242u;
    /* 0042908b: mov edi, 0 */ r_edi = 0x0u;
    /* 00429090: mov dword ptr [0xa438c8], edx */ W32((u32)(0xa438c8u), r_edx);
    /* 00429096: mov word ptr [ecx + 0x10], ax */ W16((u32)(r_ecx+0x10u), (u16)r_eax);
    /* 0042909a: movzx eax, word ptr [ecx + 0x14] */ r_eax = (u32)R16((u32)(r_ecx+0x14u));
    /* 0042909e: add ecx, 0x16 */ {  u32 a = r_ecx; u32 b = 0x16u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004290a1: and eax, 0x3fff */ {  u32 a = r_eax; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004290a6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004290a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004290ab: mov eax, 0 */ r_eax = 0x0u;
    /* 004290b0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004290b3: jle 0x42914b */ if ((fZ||fS!=fO)) goto L_0042914b;
L_004290b9:; BB(0x004290b9);
    /* 004290b9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004290bc: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004290bf: jl 0x42912b */ if ((fS!=fO)) goto L_0042912b;
L_004290c1:; BB(0x004290c1);
    /* 004290c1: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
    /* 004290c4: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_004290c7:; BB(0x004290c7);
    /* 004290c7: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004290ca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004290cb: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004290cd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004290cf: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004290d2: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004290d4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004290d7: movsx eax, word ptr [ecx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 004290db: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004290dc: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004290de: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004290e0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004290e3: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004290e6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004290e9: movsx eax, word ptr [ecx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 004290ed: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004290ee: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004290f0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004290f2: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 004290f5: add edi, dword ptr [ebp - 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004290f8: movsx eax, word ptr [ecx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004290fc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004290fd: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004290ff: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00429101: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00429104: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429106: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00429109: movsx eax, word ptr [ecx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 0042910d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0042910e: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429111: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429113: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00429115: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00429118: add edi, dword ptr [ebp - 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042911b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042911e: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429121: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00429124: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00429127: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429129: jle 0x4290c7 */ if ((fZ||fS!=fO)) goto L_004290c7;
L_0042912b:; BB(0x0042912b);
    /* 0042912b: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0042912e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0042912f: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429132: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429134: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00429136: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00429139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0042913c: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042913e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00429141: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429144: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00429147: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429149: jl 0x42912b */ if ((fS!=fO)) goto L_0042912b;
L_0042914b:; BB(0x0042914b);
    /* 0042914b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042914d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042914f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00429150: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x429155u); f_008581c5();
    /* 00429155: mov ecx, eax */ r_ecx = r_eax;
    /* 00429157: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042915a: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042915d: mov dword ptr [0xa438cc], ecx */ W32((u32)(0xa438ccu), r_ecx);
    /* 00429163: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00429165: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00429167: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0042916a: jle 0x429217 */ if ((fZ||fS!=fO)) goto L_00429217;
L_00429170:; BB(0x00429170);
    /* 00429170: fld dword ptr [0x8fc64c] */ FPUSH(R_F32((u32)(0x8fc64cu)));
    /* 00429176: fld dword ptr [0x8fc524] */ FPUSH(R_F32((u32)(0x8fc524u)));
    /* 0042917c: fld dword ptr [0x8fc648] */ FPUSH(R_F32((u32)(0x8fc648u)));
L_00429182:; BB(0x00429182);
    /* 00429182: movsx eax, word ptr [ebx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00429185: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00429186: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00429188: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042918b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042918d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042918f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00429192: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00429195: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00429197: jle 0x4291fd */ if ((fZ||fS!=fO)) goto L_004291fd;
L_00429199:; BB(0x00429199);
    /* 00429199: movsx eax, word ptr [ebx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0042919c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0042919f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004291a1: fld dword ptr [esi + edx*8] */ FPUSH(R_F32((u32)(r_esi+r_edx*8)));
    /* 004291a4: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004291a6: add ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004291a9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004291ab: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 004291ae: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 004291b2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004291b7: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004291ba: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 004291bd: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004291c0: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 004291c3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004291c6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004291c9: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 004291cc: fld dword ptr [esi + edx*8 + 8] */ FPUSH(R_F32((u32)(r_esi+r_edx*8+0x8u)));
    /* 004291d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004291d2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004291d4: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 004291d7: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 004291db: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004291e0: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004291e3: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 004291e6: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004291e9: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 004291ec: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004291ef: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 004291f3: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004291f6: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004291f9: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004291fb: jl 0x429199 */ if ((fS!=fO)) goto L_00429199;
L_004291fd:; BB(0x004291fd);
    /* 004291fd: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00429200: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00429203: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00429206: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00429209: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042920b: jl 0x429182 */ if ((fS!=fO)) goto L_00429182;
L_00429211:; BB(0x00429211);
    /* 00429211: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429213: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429215: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00429217:; BB(0x00429217);
    /* 00429217: mov edx, dword ptr [0xa43820] */ r_edx = R32((u32)(0xa43820u));
    /* 0042921d: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00429223: mov ebx, dword ptr [ecx + 0x38] */ r_ebx = R32((u32)(r_ecx+0x38u));
    /* 00429226: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00429229: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0042922b: movzx eax, word ptr [edi + 6] */ r_eax = (u32)R16((u32)(r_edi+0x6u));
    /* 0042922f: mov dword ptr [0xa438c4], 0 */ W32((u32)(0xa438c4u), 0x0u);
    /* 00429239: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0042923c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042923e: mov ebx, esi */ r_ebx = r_esi;
    /* 00429240: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00429242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00429244: jle 0x42926f */ if ((fZ||fS!=fO)) goto L_0042926f;
L_00429246:; BB(0x00429246);
    /* 00429246: fld dword ptr [0x8fc508] */ FPUSH(R_F32((u32)(0x8fc508u)));
L_0042924c:; BB(0x0042924c);
    /* 0042924c: fcom dword ptr [esi + 4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x4u))); 
    /* 0042924f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429251: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 00429254: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429255: jae 0x429260 */ if (!fC) goto L_00429260;
L_00429257:; BB(0x00429257);
    /* 00429257: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042925a: mov dword ptr [0xa438c4], ecx */ W32((u32)(0xa438c4u), r_ecx);
L_00429260:; BB(0x00429260);
    /* 00429260: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00429263: lea esi, [edi + 0x14] */ r_esi = (u32)(r_edi+0x14u);
    /* 00429266: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00429269: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042926b: jl 0x42924c */ if ((fS!=fO)) goto L_0042924c;
L_0042926d:; BB(0x0042926d);
    /* 0042926d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0042926f:; BB(0x0042926f);
    /* 0042926f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429271: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429273: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429275: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429277: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429278: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42927du); f_008581c5();
    /* 0042927d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00429280: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429283: mov edi, eax */ r_edi = r_eax;
    /* 00429285: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00429288: mov dword ptr [0xa438c0], edi */ W32((u32)(0xa438c0u), r_edi);
    /* 0042928e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00429290: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00429292: jle 0x429304 */ if ((fZ||fS!=fO)) goto L_00429304;
L_00429294:; BB(0x00429294);
    /* 00429294: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00429297: fcomp dword ptr [0x8fc508] */ fx_compare(ST(0), R_F32((u32)(0x8fc508u))); FPOP();
    /* 0042929d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042929f: lea esi, [ebx + 4] */ r_esi = (u32)(r_ebx+0x4u);
    /* 004292a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004292a3: jbe 0x4292f7 */ if ((fC||fZ)) goto L_004292f7;
L_004292a5:; BB(0x004292a5);
    /* 004292a5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004292a8: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 004292aa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004292ac: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004292af: mov dword ptr [edx + 8], 0xc1000000 */ W32((u32)(r_edx+0x8u), 0xc1000000u);
    /* 004292b6: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4292bbu); f_008587a5();
    /* 004292bb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004292be: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004292c1: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 004292c4: fdiv dword ptr [0x8fc510] */ ST(0) = ST(0) / R_F32((u32)(0x8fc510u));
    /* 004292ca: fmul dword ptr [0x8fc50c] */ ST(0) = ST(0) * R_F32((u32)(0x8fc50cu));
    /* 004292d0: fnstcw word ptr [ebp - 0x5c] */ W16((u32)(r_ebp+0xffffffa4u), fcw);
    /* 004292d3: movzx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 004292d7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004292dc: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004292df: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 004292e2: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004292e5: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 004292e8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004292eb: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004292ee: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 004292f1: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004292f4: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_004292f7:; BB(0x004292f7);
    /* 004292f7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004292fa: lea ebx, [esi + 0x14] */ r_ebx = (u32)(r_esi+0x14u);
    /* 004292fd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00429300: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00429302: jl 0x429294 */ if ((fS!=fO)) goto L_00429294;
L_00429304:; BB(0x00429304);
    /* 00429304: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00429307: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042930a: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042930d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429310: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00429317: mov esp, ebp */ r_esp = r_ebp;
    /* 00429319: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042931a: ret  */ FN_RET(0x00428b8b); r_esp += 4; return;
L_0042931b:; BB(0x0042931b);
    /* 0042931b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042931d: jmp 0x429054 */ goto L_00429054;
L_00429322:; BB(0x00429322);
    /* 00429322: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429324: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00429327: jmp 0x428e96 */ goto L_00428e96;
}

