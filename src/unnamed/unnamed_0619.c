#include "protos.h"

void f_00619050(void) /* sub_619050 */
{
    FN_ENTER(0x00619050);
    /* 00619050: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00619051: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00619052: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00619055: mov esi, ecx */ r_esi = r_ecx;
    /* 00619057: movsx edx, word ptr [esi + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 0061905b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0061905d: jl 0x619192 */ if ((fS!=fO)) goto L_00619192;
L_00619063:; BB(0x00619063);
    /* 00619063: cmp edx, 0xb4f */ {  u32 a = r_edx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619069: jg 0x619192 */ if ((!fZ&&fS==fO)) goto L_00619192;
L_0061906f:; BB(0x0061906f);
    /* 0061906f: mov ecx, dword ptr [0xab02b8] */ r_ecx = R32((u32)(0xab02b8u));
    /* 00619075: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00619077: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00619079: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0061907c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061907e: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00619081: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00619084: mov ebx, dword ptr [eax + ecx + 4] */ r_ebx = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00619088: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0061908c: mov eax, dword ptr [eax + ecx + 8] */ r_eax = R32((u32)(r_eax+r_ecx+0x8u));
    /* 00619090: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00619094: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 0061909b: mov ecx, esi */ r_ecx = r_esi;
    /* 0061909d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006190a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006190a1: call 0x787710 */ r_esp -= 4; W32(r_esp, 0x6190a6u); f_00787710();
    /* 006190a6: movsx eax, word ptr [esi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 006190aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006190ac: jl 0x6190d9 */ if ((fS!=fO)) goto L_006190d9;
L_006190ae:; BB(0x006190ae);
    /* 006190ae: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006190b3: jg 0x6190d9 */ if ((!fZ&&fS==fO)) goto L_006190d9;
L_006190b5:; BB(0x006190b5);
    /* 006190b5: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006190b8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006190ba: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006190bc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006190bf: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006190c1: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 006190c6: mov dword ptr [edx + eax], ebx */ W32((u32)(r_edx+r_eax), r_ebx);
    /* 006190c9: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006190cd: mov dword ptr [edx + eax + 4], ebx */ W32((u32)(r_edx+r_eax+0x4u), r_ebx);
    /* 006190d1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006190d5: mov dword ptr [edx + eax + 8], ebx */ W32((u32)(r_edx+r_eax+0x8u), r_ebx);
L_006190d9:; BB(0x006190d9);
    /* 006190d9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006190dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006190dd: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006190df: mov ecx, esi */ r_ecx = r_esi;
    /* 006190e1: call dword ptr [edx + 0x144] */ { u32 t = R32((u32)(r_edx+0x144u)); r_esp -= 4; W32(r_esp, 0x6190e7u); call_ind(t); }
    /* 006190e7: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006190e9: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 006190ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006190ed: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6190f2u); f_0050b510();
    /* 006190f2: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006190f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006190f5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6190fau); f_0050b510();
    /* 006190fa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006190fd: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x619102u); f_00807ac0();
    /* 00619102: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619105: jl 0x619116 */ if ((fS!=fO)) goto L_00619116;
L_00619107:; BB(0x00619107);
    /* 00619107: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061910a: jle 0x619128 */ if ((fZ||fS!=fO)) goto L_00619128;
L_0061910c:; BB(0x0061910c);
    /* 0061910c: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061910f: jl 0x619116 */ if ((fS!=fO)) goto L_00619116;
L_00619111:; BB(0x00619111);
    /* 00619111: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619114: jle 0x619128 */ if ((fZ||fS!=fO)) goto L_00619128;
L_00619116:; BB(0x00619116);
    /* 00619116: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00619118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061911a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061911b: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 00619120: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x619125u); f_00814298();
    /* 00619125: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00619128:; BB(0x00619128);
    /* 00619128: mov ebx, dword ptr [0xaae168] */ r_ebx = R32((u32)(0xaae168u));
    /* 0061912e: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 00619133: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619135: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619137: jge 0x61917e */ if ((fS==fO)) goto L_0061917e;
L_00619139:; BB(0x00619139);
    /* 00619139: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 00619140: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619142: je 0x619177 */ if (fZ) goto L_00619177;
L_00619144:; BB(0x00619144);
    /* 00619144: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619146: je 0x619177 */ if (fZ) goto L_00619177;
L_00619148:; BB(0x00619148);
    /* 00619148: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0061914b: cmp edx, dword ptr [0x9bdd3c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9bdd3cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619151: jne 0x619177 */ if (!fZ) goto L_00619177;
L_00619153:; BB(0x00619153);
    /* 00619153: mov edx, dword ptr [ecx + 0x370] */ r_edx = R32((u32)(r_ecx+0x370u));
    /* 00619159: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061915b: jne 0x619177 */ if (!fZ) goto L_00619177;
L_0061915d:; BB(0x0061915d);
    /* 0061915d: movsx edx, word ptr [esi + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x28u));
    /* 00619161: cmp dx, word ptr [ecx + 0x28] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ecx+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00619165: jne 0x619177 */ if (!fZ) goto L_00619177;
L_00619167:; BB(0x00619167);
    /* 00619167: call 0x555974 */ r_esp -= 4; W32(r_esp, 0x61916cu); f_00555974();
    /* 0061916c: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00619171: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00619177:; BB(0x00619177);
    /* 00619177: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0061917a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061917c: jl 0x619139 */ if ((fS!=fO)) goto L_00619139;
L_0061917e:; BB(0x0061917e);
    /* 0061917e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061917f: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x619184u); f_008113bc();
    /* 00619184: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00619185: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00619189: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061918e: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_00619192:; BB(0x00619192);
    /* 00619192: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00619195: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619196: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00619197: ret  */ FN_RET(0x00619050); r_esp += 4; return;
}

void f_00619198(void) /* sub_619198 */
{
    FN_ENTER(0x00619198);
    /* 00619198: fld dword ptr [ecx + 0x38c] */ FPUSH(R_F32((u32)(r_ecx+0x38cu)));
    /* 0061919e: fsub dword ptr [0xa8eb70] */ ST(0) = ST(0) - R_F32((u32)(0xa8eb70u));
    /* 006191a4: fcom dword ptr [0x9307e8] */ fx_compare(ST(0), R_F32((u32)(0x9307e8u))); 
    /* 006191aa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006191ac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006191ad: jb 0x6191b6 */ if (fC) goto L_006191b6;
L_006191af:; BB(0x006191af);
    /* 006191af: fstp dword ptr [ecx + 0x38c] */ W_F32((u32)(r_ecx+0x38cu), ST(0)); FPOP();
    /* 006191b5: ret  */ FN_RET(0x00619198); r_esp += 4; return;
L_006191b6:; BB(0x006191b6);
    /* 006191b6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006191b8: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006191bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006191bf: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 006191c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006191c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006191c8: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 006191cf: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x6191d4u); f_007b52c4();
    /* 006191d4: ret  */ FN_RET(0x00619198); r_esp += 4; return;
}

void f_006191d8(void) /* sub_6191D8 */
{
    FN_ENTER(0x006191d8);
    /* 006191d8: fld dword ptr [ecx + 0x390] */ FPUSH(R_F32((u32)(r_ecx+0x390u)));
    /* 006191de: fsub dword ptr [0xa8eb74] */ ST(0) = ST(0) - R_F32((u32)(0xa8eb74u));
    /* 006191e4: fcom dword ptr [0x9307e4] */ fx_compare(ST(0), R_F32((u32)(0x9307e4u))); 
    /* 006191ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006191ec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006191ed: jae 0x619206 */ if (!fC) goto L_00619206;
L_006191ef:; BB(0x006191ef);
    /* 006191ef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006191f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006191f3: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 006191f9: mov edx, 5 */ r_edx = 0x5u;
    /* 006191fe: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00619205: ret  */ FN_RET(0x006191d8); r_esp += 4; return;
L_00619206:; BB(0x00619206);
    /* 00619206: fstp dword ptr [ecx + 0x390] */ W_F32((u32)(r_ecx+0x390u), ST(0)); FPOP();
    /* 0061920c: ret  */ FN_RET(0x006191d8); r_esp += 4; return;
}

void f_00619210(void) /* sub_619210 */
{
    FN_ENTER(0x00619210);
    /* 00619210: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00619211: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00619214: mov edi, ecx */ r_edi = r_ecx;
    /* 00619216: fild dword ptr [edi + 0x388] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x388u)));
    /* 0061921c: fadd dword ptr [0x93080c] */ ST(0) = ST(0) + R_F32((u32)(0x93080cu));
    /* 00619222: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00619225: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00619229: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061922e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00619232: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00619236: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0061923a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0061923d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00619241: mov dword ptr [edi + 0x388], ecx */ W32((u32)(r_edi+0x388u), r_ecx);
    /* 00619247: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x61924cu); f_0082dcbc();
    /* 0061924c: fld dword ptr [0x930804] */ FPUSH(R_F32((u32)(0x930804u)));
    /* 00619252: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00619254: fadd dword ptr [0x9307ec] */ ST(0) = ST(0) + R_F32((u32)(0x9307ecu));
    /* 0061925a: fst dword ptr [edi + 0x384] */ W_F32((u32)(r_edi+0x384u), ST(0));
    /* 00619260: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00619263: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00619266: lea eax, [edi + 0x398] */ r_eax = (u32)(r_edi+0x398u);
    /* 0061926c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00619270: mov ecx, edi */ r_ecx = r_edi;
    /* 00619272: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x619277u); f_00772b44();
    /* 00619277: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 0061927d: add eax, 0x147 */ {  u32 a = r_eax; u32 b = 0x147u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619282: mov dword ptr [edi + 0x394], eax */ W32((u32)(r_edi+0x394u), r_eax);
    /* 00619288: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061928b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061928c: ret  */ FN_RET(0x00619210); r_esp += 4; return;
}

void f_00619290(void) /* sub_619290 */
{
    FN_ENTER(0x00619290);
    /* 00619290: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00619291: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00619294: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00619296: fild dword ptr [ebx + 0x388] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x388u)));
    /* 0061929c: fadd dword ptr [0x93080c] */ ST(0) = ST(0) + R_F32((u32)(0x93080cu));
    /* 006192a2: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006192a5: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006192a9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006192ae: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006192b2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006192b6: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006192ba: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006192bd: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006192c1: mov dword ptr [ebx + 0x388], ecx */ W32((u32)(r_ebx+0x388u), r_ecx);
    /* 006192c7: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6192ccu); f_0082dcbc();
    /* 006192cc: fld dword ptr [0x930804] */ FPUSH(R_F32((u32)(0x930804u)));
    /* 006192d2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006192d4: fadd dword ptr [0x9307ec] */ ST(0) = ST(0) + R_F32((u32)(0x9307ecu));
    /* 006192da: fst dword ptr [ebx + 0x384] */ W_F32((u32)(r_ebx+0x384u), ST(0));
    /* 006192e0: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006192e3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006192e6: lea eax, [ebx + 0x398] */ r_eax = (u32)(r_ebx+0x398u);
    /* 006192ec: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006192f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006192f2: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x6192f7u); f_00772b44();
    /* 006192f7: fld dword ptr [0xa8eb74] */ FPUSH(R_F32((u32)(0xa8eb74u)));
    /* 006192fd: fadd dword ptr [ebx + 0x390] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x390u));
    /* 00619303: fcom dword ptr [0x9307e0] */ fx_compare(ST(0), R_F32((u32)(0x9307e0u))); 
    /* 00619309: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061930b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061930c: ja 0x619319 */ if ((!fC&&!fZ)) goto L_00619319;
L_0061930e:; BB(0x0061930e);
    /* 0061930e: fstp dword ptr [ebx + 0x390] */ W_F32((u32)(r_ebx+0x390u), ST(0)); FPOP();
    /* 00619314: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00619317: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619318: ret  */ FN_RET(0x00619290); r_esp += 4; return;
L_00619319:; BB(0x00619319);
    /* 00619319: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0061931b: push 0x8000004 */ { u32 v = 0x8000004u; r_esp -= 4; W32(r_esp, v); }
    /* 00619320: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00619322: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00619327: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 0061932d: mov edx, 3 */ r_edx = 0x3u;
    /* 00619332: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00619334: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
    /* 0061933b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x619340u); f_007b52ec();
    /* 00619340: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00619342: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00619344: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00619346: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61934bu); f_007b52c4();
    /* 0061934b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061934e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061934f: ret  */ FN_RET(0x00619290); r_esp += 4; return;
}

void f_00619350(void) /* sub_619350 */
{
    FN_ENTER(0x00619350);
    /* 00619350: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00619351: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00619354: mov esi, ecx */ r_esi = r_ecx;
    /* 00619356: fild dword ptr [esi + 0x388] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x388u)));
    /* 0061935c: fadd dword ptr [0x93080c] */ ST(0) = ST(0) + R_F32((u32)(0x93080cu));
    /* 00619362: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00619365: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00619369: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061936e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00619372: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00619376: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0061937a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0061937d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00619381: mov dword ptr [esi + 0x388], ecx */ W32((u32)(r_esi+0x388u), r_ecx);
    /* 00619387: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x61938cu); f_0082dcbc();
    /* 0061938c: fld dword ptr [0x930804] */ FPUSH(R_F32((u32)(0x930804u)));
    /* 00619392: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00619394: fadd dword ptr [0x9307ec] */ ST(0) = ST(0) + R_F32((u32)(0x9307ecu));
    /* 0061939a: fst dword ptr [esi + 0x384] */ W_F32((u32)(r_esi+0x384u), ST(0));
    /* 006193a0: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006193a3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006193a6: lea eax, [esi + 0x398] */ r_eax = (u32)(r_esi+0x398u);
    /* 006193ac: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006193b0: mov ecx, esi */ r_ecx = r_esi;
    /* 006193b2: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x6193b7u); f_00772b44();
    /* 006193b7: fld dword ptr [0xa8eb70] */ FPUSH(R_F32((u32)(0xa8eb70u)));
    /* 006193bd: fadd dword ptr [esi + 0x38c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38cu));
    /* 006193c3: fcom dword ptr [0x9307dc] */ fx_compare(ST(0), R_F32((u32)(0x9307dcu))); 
    /* 006193c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006193cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006193cc: jbe 0x6193ec */ if ((fC||fZ)) goto L_006193ec;
L_006193ce:; BB(0x006193ce);
    /* 006193ce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006193d0: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 006193d5: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 006193db: mov edx, 2 */ r_edx = 0x2u;
    /* 006193e0: mov word ptr [esi + 0x32e], dx */ W16((u32)(r_esi+0x32eu), (u16)r_edx);
    /* 006193e7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006193ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006193eb: ret  */ FN_RET(0x00619350); r_esp += 4; return;
L_006193ec:; BB(0x006193ec);
    /* 006193ec: fstp dword ptr [esi + 0x38c] */ W_F32((u32)(r_esi+0x38cu), ST(0)); FPOP();
    /* 006193f2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006193f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006193f6: ret  */ FN_RET(0x00619350); r_esp += 4; return;
}

void f_006193f8(void) /* sub_6193F8 */
{
    FN_ENTER(0x006193f8);
    /* 006193f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006193f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006193fa: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006193fd: mov edi, ecx */ r_edi = r_ecx;
    /* 006193ff: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00619403: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0061940a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061940c: je 0x61946e */ if (fZ) goto L_0061946e;
L_0061940e:; BB(0x0061940e);
    /* 0061940e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00619413: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00619417: mov ecx, edi */ r_ecx = r_edi;
    /* 00619419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061941a: call 0x772e60 */ r_esp -= 4; W32(r_esp, 0x61941fu); f_00772e60();
    /* 0061941f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619421: jne 0x619455 */ if (!fZ) goto L_00619455;
L_00619423:; BB(0x00619423);
    /* 00619423: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619425: je 0x61947c */ if (fZ) goto L_0061947c;
L_00619427:; BB(0x00619427);
    /* 00619427: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0061942a: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0061942d: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00619430: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00619433: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00619437: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_0061943b:; BB(0x0061943b);
    /* 0061943b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0061943e: push 0x930848 */ { u32 v = 0x930848u; r_esp -= 4; W32(r_esp, v); }
    /* 00619443: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00619445: push 0xffff0000 */ { u32 v = 0xffff0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061944a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061944b: call 0x78a468 */ r_esp -= 4; W32(r_esp, 0x619450u); f_0078a468();
    /* 00619450: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00619453: jmp 0x61946e */ goto L_0061946e;
L_00619455:; BB(0x00619455);
    /* 00619455: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061945a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0061945e: mov ecx, edi */ r_ecx = r_edi;
    /* 00619460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619461: call 0x7732b8 */ r_esp -= 4; W32(r_esp, 0x619466u); f_007732b8();
    /* 00619466: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00619469: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061946a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061946b: ret 8 */ FN_RET(0x006193f8); r_esp += 12; return;
L_0061946e:; BB(0x0061946e);
    /* 0061946e: fld dword ptr [0x9307d4] */ FPUSH(R_F32((u32)(0x9307d4u)));
    /* 00619474: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00619477: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00619478: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00619479: ret 8 */ FN_RET(0x006193f8); r_esp += 12; return;
L_0061947c:; BB(0x0061947c);
    /* 0061947c: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00619482: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00619488: mov ecx, dword ptr [edi + 0x308] */ r_ecx = R32((u32)(r_edi+0x308u));
    /* 0061948e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00619491: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00619495: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00619499: jmp 0x61943b */ goto L_0061943b;
}

void f_006194e4(void)
{
    FN_ENTER(0x006194e4);
    /* 006194e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006194e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006194e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006194e9: push 0x8e18f8 */ { u32 v = 0x8e18f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006194ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006194f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006194f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006194fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006194ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00619502: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00619505: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00619508: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061950b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00619510: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00619517: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61951cu); f_008581c5();
    /* 0061951c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061951d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00619520: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619522: je 0x619563 */ if (fZ) goto L_00619563;
L_00619524:; BB(0x00619524);
    /* 00619524: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061952b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00619532: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00619535: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00619537: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619539: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061953a: push 0x9c4b8c */ { u32 v = 0x9c4b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061953f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00619541: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x619546u); f_005b7a84();
    /* 00619546: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00619549: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00619550:; BB(0x00619550);
    /* 00619550: mov dword ptr [0xa8eb88], eax */ W32((u32)(0xa8eb88u), r_eax);
    /* 00619555: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00619558: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061955f: mov esp, ebp */ r_esp = r_ebp;
    /* 00619561: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00619562: ret  */ FN_RET(0x006194e4); r_esp += 4; return;
L_00619563:; BB(0x00619563);
    /* 00619563: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619565: jmp 0x619550 */ goto L_00619550;
}

void f_00619568(void) /* sub_619568 */
{
    FN_ENTER(0x00619568);
    /* 00619568: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00619569: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061956b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061956d: call 0x61958c */ r_esp -= 4; W32(r_esp, 0x619572u); f_0061958c();
    /* 00619572: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00619576: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619578: jne 0x61957e */ if (!fZ) goto L_0061957e;
L_0061957a:; BB(0x0061957a);
    /* 0061957a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061957b: ret 4 */ FN_RET(0x00619568); r_esp += 8; return;
L_0061957e:; BB(0x0061957e);
    /* 0061957e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061957f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x619584u); f_005c2f74();
    /* 00619584: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00619585: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619586: ret 4 */ FN_RET(0x00619568); r_esp += 8; return;
}

void f_0061958c(void) /* sub_61958C */
{
    FN_ENTER(0x0061958c);
    /* 0061958c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061958d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061958f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00619591: push 0x8e1914 */ { u32 v = 0x8e1914u; r_esp -= 4; W32(r_esp, v); }
    /* 00619596: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061959c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061959d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006195a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006195a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006195aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006195ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006195b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006195b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006195b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006195bd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006195c0: mov dword ptr [eax], 0xb269a0 */ W32((u32)(r_eax), 0xb269a0u);
    /* 006195c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006195c7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6195ccu); f_007b4e84();
    /* 006195cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006195cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006195d0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6195d5u); f_007b9c8c();
    /* 006195d5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006195d8: push dword ptr [eax + 0x33c] */ { u32 v = R32((u32)(r_eax+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006195de: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6195e3u); f_00857e98();
    /* 006195e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006195e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006195eb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006195ee: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x6195f3u); f_00770660();
    /* 006195f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006195f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006195fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006195ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00619600: ret  */ FN_RET(0x0061958c); r_esp += 4; return;
}

void f_00619604(void)
{
    FN_ENTER(0x00619604);
    /* 00619604: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00619605: mov ebp, esp */ r_ebp = r_esp;
    /* 00619607: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00619609: push 0x8e193c */ { u32 v = 0x8e193cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061960e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00619614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619615: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061961c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061961f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00619622: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00619625: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00619628: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061962b: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 00619630: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00619637: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61963cu); f_005caba4();
    /* 0061963c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061963d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00619640: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619642: je 0x61967b */ if (fZ) goto L_0061967b;
L_00619644:; BB(0x00619644);
    /* 00619644: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061964b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00619652: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00619655: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061965b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061965e: call 0x619680 */ r_esp -= 4; W32(r_esp, 0x619663u); f_00619680();
    /* 00619663: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00619666: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061966d:; BB(0x0061966d);
    /* 0061966d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00619670: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00619677: mov esp, ebp */ r_esp = r_ebp;
    /* 00619679: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061967a: ret  */ FN_RET(0x00619604); r_esp += 4; return;
L_0061967b:; BB(0x0061967b);
    /* 0061967b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061967d: jmp 0x61966d */ goto L_0061966d;
}

void f_00619680(void) /* sub_619680 */
{
    FN_ENTER(0x00619680);
    /* 00619680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00619681: mov ebp, esp */ r_ebp = r_esp;
    /* 00619683: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00619685: push 0x8e1958 */ { u32 v = 0x8e1958u; r_esp -= 4; W32(r_esp, v); }
    /* 0061968a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00619690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619691: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00619698: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061969b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061969e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006196a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006196a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006196a7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006196aa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006196ad: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006196b0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006196b3: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x6196b8u); f_00770748();
    /* 006196b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006196bf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006196c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006196c5: mov dword ptr [ecx], 0xb269a0 */ W32((u32)(r_ecx), 0xb269a0u);
    /* 006196cb: mov eax, dword ptr [0x9c4bcc] */ r_eax = R32((u32)(0x9c4bccu));
    /* 006196d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006196d1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006196d4: call dword ptr [0xb269b4] */ { u32 t = R32((u32)(0xb269b4u)); r_esp -= 4; W32(r_esp, 0x6196dau); call_ind(t); }
    /* 006196da: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006196dd: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006196e0: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006196e3: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 006196e6: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 006196ec: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 006196f2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006196f5: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 006196fb: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00619701: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00619707: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0061970d: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00619713: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00619719: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061971c: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00619722: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00619725: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0061972b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0061972e: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00619734: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00619737: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0061973d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00619740: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x619745u); f_0077a1f4();
    /* 00619745: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00619747: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61974cu); f_008581c5();
    /* 0061974c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061974d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00619750: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00619752: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619753: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00619759: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61975eu); f_007b9a88();
    /* 0061975e: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00619761: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x619766u); f_007b999c();
    /* 00619766: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00619767: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061976a: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61976fu); f_007b4f54();
    /* 0061976f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00619772: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00619778: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0061977e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00619781: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00619784: mov ebx, dword ptr [ecx + 0x33c] */ r_ebx = R32((u32)(r_ecx+0x33cu));
    /* 0061978a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061978d: mov dword ptr [ebx + 4], 0 */ W32((u32)(r_ebx+0x4u), 0x0u);
    /* 00619794: mov edi, dword ptr [esi + 0x33c] */ r_edi = R32((u32)(r_esi+0x33cu));
    /* 0061979a: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 006197a1: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 006197a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006197a9: jne 0x6197b2 */ if (!fZ) goto L_006197b2;
L_006197ab:; BB(0x006197ab);
    /* 006197ab: call 0x619a84 */ r_esp -= 4; W32(r_esp, 0x6197b0u); f_00619a84();
    /* 006197b0: jmp 0x6197b7 */ goto L_006197b7;
L_006197b2:; BB(0x006197b2);
    /* 006197b2: call 0x619a18 */ r_esp -= 4; W32(r_esp, 0x6197b7u); f_00619a18();
L_006197b7:; BB(0x006197b7);
    /* 006197b7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006197ba: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006197bd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006197c0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006197c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006197c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006197cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006197cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006197d0: ret 8 */ FN_RET(0x00619680); r_esp += 12; return;
}

void f_006197d4(void) /* sub_6197D4 */
{
    FN_ENTER(0x006197d4);
    /* 006197d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006197d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006197d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006197d7: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006197dd: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 006197e3: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006197e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006197eb: mov ebx, eax */ r_ebx = r_eax;
    /* 006197ed: mov eax, edx */ r_eax = r_edx;
    /* 006197ef: mov esi, ecx */ r_esi = r_ecx;
L_006197f1:; BB(0x006197f1);
    /* 006197f1: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006197f3: jge 0x61993e */ if ((fS==fO)) goto L_0061993e;
L_006197f9:; BB(0x006197f9);
    /* 006197f9: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00619800: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619802: je 0x619936 */ if (fZ) goto L_00619936;
L_00619808:; BB(0x00619808);
    /* 00619808: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061980a: je 0x619936 */ if (fZ) goto L_00619936;
L_00619810:; BB(0x00619810);
    /* 00619810: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00619813: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619819: jne 0x619936 */ if (!fZ) goto L_00619936;
L_0061981f:; BB(0x0061981f);
    /* 0061981f: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00619823: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619829: je 0x619936 */ if (fZ) goto L_00619936;
L_0061982f:; BB(0x0061982f);
    /* 0061982f: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619835: jge 0x619936 */ if ((fS==fO)) goto L_00619936;
L_0061983b:; BB(0x0061983b);
    /* 0061983b: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 00619841: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619847: jne 0x619936 */ if (!fZ) goto L_00619936;
L_0061984d:; BB(0x0061984d);
    /* 0061984d: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
    /* 00619853: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619855: jne 0x6198ce */ if (!fZ) goto L_006198ce;
L_00619857:; BB(0x00619857);
    /* 00619857: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0061985b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061985c: push dword ptr [esi + 0x33c] */ { u32 v = R32((u32)(r_esi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00619862: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00619865: push dword ptr [esi + 0x40] */ { u32 v = R32((u32)(r_esi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00619868: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061986b: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061986e: call 0x7b97d0 */ r_esp -= 4; W32(r_esp, 0x619873u); f_007b97d0();
    /* 00619873: lea edx, [esp + 0x98] */ r_edx = (u32)(r_esp+0x98u);
    /* 0061987a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061987b: lea eax, [edi + 0x758] */ r_eax = (u32)(r_edi+0x758u);
    /* 00619881: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619882: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00619885: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00619888: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061988b: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x619890u); f_007b97a0();
    /* 00619890: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 00619894: lea edx, [esp + 0xac] */ r_edx = (u32)(r_esp+0xacu);
    /* 0061989b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061989c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061989d: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x6198a2u); f_0083d2fc();
    /* 006198a2: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006198a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006198a7: jne 0x6198b9 */ if (!fZ) goto L_006198b9;
L_006198a9:; BB(0x006198a9);
    /* 006198a9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006198ae: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006198b4: jmp 0x619936 */ goto L_00619936;
L_006198b9:; BB(0x006198b9);
    /* 006198b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006198ba: mov ecx, esi */ r_ecx = r_esi;
    /* 006198bc: call 0x619948 */ r_esp -= 4; W32(r_esp, 0x6198c1u); f_00619948();
    /* 006198c1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006198c6: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006198cc: jmp 0x619936 */ goto L_00619936;
L_006198ce:; BB(0x006198ce);
    /* 006198ce: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006198d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006198d2: push dword ptr [esi + 0x33c] */ { u32 v = R32((u32)(r_esi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006198d8: push dword ptr [esi + 0x40] */ { u32 v = R32((u32)(r_esi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006198db: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006198de: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006198e1: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x6198e6u); f_007b97a0();
    /* 006198e6: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 006198ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006198eb: lea eax, [edi + 0x758] */ r_eax = (u32)(r_edi+0x758u);
    /* 006198f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006198f2: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006198f5: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006198f8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006198fb: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x619900u); f_007b97a0();
    /* 00619900: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00619904: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 00619908: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619909: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061990a: call 0x83dbd4 */ r_esp -= 4; W32(r_esp, 0x61990fu); f_0083dbd4();
    /* 0061990f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00619912: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619914: jne 0x619923 */ if (!fZ) goto L_00619923;
L_00619916:; BB(0x00619916);
    /* 00619916: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0061991b: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619921: jmp 0x619936 */ goto L_00619936;
L_00619923:; BB(0x00619923);
    /* 00619923: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00619924: mov ecx, esi */ r_ecx = r_esi;
    /* 00619926: call 0x619948 */ r_esp -= 4; W32(r_esp, 0x61992bu); f_00619948();
    /* 0061992b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00619930: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00619936:; BB(0x00619936);
    /* 00619936: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00619939: jmp 0x6197f1 */ goto L_006197f1;
L_0061993e:; BB(0x0061993e);
    /* 0061993e: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00619944: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619945: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00619946: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00619947: ret  */ FN_RET(0x006197d4); r_esp += 4; return;
}

void f_00619948(void) /* sub_619948 */
{
    FN_ENTER(0x00619948);
    /* 00619948: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061994b: mov eax, dword ptr [ecx + 0x340] */ r_eax = R32((u32)(r_ecx+0x340u));
    /* 00619951: cmp eax, dword ptr [ecx + 0x344] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x344u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619957: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0061995a: jge 0x619968 */ if ((fS==fO)) goto L_00619968;
L_0061995c:; BB(0x0061995c);
    /* 0061995c: mov dword ptr [ecx + 0x340], edx */ W32((u32)(r_ecx+0x340u), r_edx);
    /* 00619962: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00619965: ret 4 */ FN_RET(0x00619948); r_esp += 8; return;
L_00619968:; BB(0x00619968);
    /* 00619968: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0061996c: mov dword ptr [ecx + 0x340], 0 */ W32((u32)(r_ecx+0x340u), 0x0u);
    /* 00619976: movsx eax, word ptr [edx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0061997d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00619982: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00619985: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00619988: fmul dword ptr [0x930864] */ ST(0) = ST(0) * R_F32((u32)(0x930864u));
    /* 0061998e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00619992: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00619997: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061999c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006199a0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006199a4: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006199a8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006199ac: movsx eax, word ptr [esp + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 006199b1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006199b4: jg 0x6199b8 */ if ((!fZ&&fS==fO)) goto L_006199b8;
L_006199b6:; BB(0x006199b6);
    /* 006199b6: mov eax, ecx */ r_eax = r_ecx;
L_006199b8:; BB(0x006199b8);
    /* 006199b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006199b9: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006199bd: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x6199c2u); f_00777414();
    /* 006199c2: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 006199c6: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x6199cbu); f_00775270();
    /* 006199cb: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006199ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006199d0: jle 0x6199d8 */ if ((fZ||fS!=fO)) goto L_006199d8;
L_006199d2:; BB(0x006199d2);
    /* 006199d2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006199d5: ret 4 */ FN_RET(0x00619948); r_esp += 8; return;
L_006199d8:; BB(0x006199d8);
    /* 006199d8: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006199dc: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006199df: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006199e5: jne 0x6199d2 */ if (!fZ) goto L_006199d2;
L_006199e7:; BB(0x006199e7);
    /* 006199e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006199e9: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006199ed: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x6199f2u); f_00770b58();
    /* 006199f2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006199f5: ret 4 */ FN_RET(0x00619948); r_esp += 8; return;
}

void f_006199f8(void) /* sub_6199F8 */
{
    FN_ENTER(0x006199f8);
    /* 006199f8: mov dword ptr [0xa8eb94], 0x3f800000 */ W32((u32)(0xa8eb94u), 0x3f800000u);
    /* 00619a02: mov dword ptr [0xa8eb98], 0x41000000 */ W32((u32)(0xa8eb98u), 0x41000000u);
    /* 00619a0c: mov dword ptr [0xa8eb9c], 0x3fc00000 */ W32((u32)(0xa8eb9cu), 0x3fc00000u);
    /* 00619a16: ret  */ FN_RET(0x006199f8); r_esp += 4; return;
}

void f_00619a18(void) /* sub_619A18 */
{
    FN_ENTER(0x00619a18);
    /* 00619a18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00619a19: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00619a1f: mov edi, dword ptr [ecx + 0x38] */ r_edi = R32((u32)(r_ecx+0x38u));
    /* 00619a22: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619a24: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00619a27: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00619a2a: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 00619a2d: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 00619a30: mov edi, dword ptr [ecx + 0x3c] */ r_edi = R32((u32)(r_ecx+0x3cu));
    /* 00619a33: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 00619a36: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 00619a39: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 00619a3c: mov edi, dword ptr [ecx + 0x33c] */ r_edi = R32((u32)(r_ecx+0x33cu));
    /* 00619a42: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 00619a45: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 00619a48: mov edi, dword ptr [ecx + 0x33c] */ r_edi = R32((u32)(r_ecx+0x33cu));
    /* 00619a4e: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 00619a51: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 00619a54: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00619a5a: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 00619a61: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00619a67: mov dword ptr [eax + 0x18], 0x18002 */ W32((u32)(r_eax+0x18u), 0x18002u);
    /* 00619a6e: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 00619a74: mov dword ptr [ecx + 0x340], edx */ W32((u32)(r_ecx+0x340u), r_edx);
    /* 00619a7a: mov dword ptr [ecx + 0x344], eax */ W32((u32)(r_ecx+0x344u), r_eax);
    /* 00619a80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00619a81: ret  */ FN_RET(0x00619a18); r_esp += 4; return;
}

void f_00619a84(void) /* sub_619A84 */
{
    FN_ENTER(0x00619a84);
    /* 00619a84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00619a85: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00619a8b: mov edi, dword ptr [ecx + 0x38] */ r_edi = R32((u32)(r_ecx+0x38u));
    /* 00619a8e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619a90: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00619a93: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 00619a96: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 00619a99: mov edi, dword ptr [ecx + 0x3c] */ r_edi = R32((u32)(r_ecx+0x3cu));
    /* 00619a9c: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 00619a9f: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 00619aa2: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 00619aa5: mov edi, dword ptr [ecx + 0x33c] */ r_edi = R32((u32)(r_ecx+0x33cu));
    /* 00619aab: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 00619aae: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 00619ab1: mov edi, dword ptr [ecx + 0x33c] */ r_edi = R32((u32)(r_ecx+0x33cu));
    /* 00619ab7: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 00619aba: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 00619abd: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00619ac3: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 00619aca: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00619ad0: mov dword ptr [eax + 0x18], 0x18002 */ W32((u32)(r_eax+0x18u), 0x18002u);
    /* 00619ad7: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 00619add: mov dword ptr [ecx + 0x340], edx */ W32((u32)(r_ecx+0x340u), r_edx);
    /* 00619ae3: mov dword ptr [ecx + 0x344], eax */ W32((u32)(r_ecx+0x344u), r_eax);
    /* 00619ae9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00619aea: ret  */ FN_RET(0x00619a84); r_esp += 4; return;
}

void f_00619aec(void) /* sub_619AEC */
{
    FN_ENTER(0x00619aec);
    /* 00619aec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00619aed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00619aef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00619af1: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x619af6u); f_00619b10();
    /* 00619af6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00619afa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619afc: jne 0x619b02 */ if (!fZ) goto L_00619b02;
L_00619afe:; BB(0x00619afe);
    /* 00619afe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619aff: ret 4 */ FN_RET(0x00619aec); r_esp += 8; return;
L_00619b02:; BB(0x00619b02);
    /* 00619b02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00619b03: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x619b08u); f_005c2f74();
    /* 00619b08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00619b09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619b0a: ret 4 */ FN_RET(0x00619aec); r_esp += 8; return;
}

void f_00619b10(void) /* sub_619B10 */
{
    FN_ENTER(0x00619b10);
    /* 00619b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00619b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00619b13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00619b15: push 0x8e1974 */ { u32 v = 0x8e1974u; r_esp -= 4; W32(r_esp, v); }
    /* 00619b1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00619b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619b21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00619b28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00619b2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00619b2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00619b31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00619b34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00619b37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00619b3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00619b3d: mov dword ptr [ecx], 0xb26b40 */ W32((u32)(r_ecx), 0xb26b40u);
    /* 00619b43: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00619b4a: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x619b4fu); f_006131f4();
    /* 00619b4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00619b52: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00619b59: mov esp, ebp */ r_esp = r_ebp;
    /* 00619b5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00619b5c: ret  */ FN_RET(0x00619b10); r_esp += 4; return;
}

void f_00619b60(void) /* sub_619B60 */
{
    FN_ENTER(0x00619b60);
    /* 00619b60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00619b61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00619b63: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 00619b69: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619b6c: je 0x619bc8 */ if (fZ) goto L_00619bc8;
L_00619b6e:; BB(0x00619b6e);
    /* 00619b6e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619b71: jne 0x619b9a */ if (!fZ) goto L_00619b9a;
L_00619b73:; BB(0x00619b73);
    /* 00619b73: movzx eax, word ptr [ebx + 0xc8] */ r_eax = (u32)R16((u32)(r_ebx+0xc8u));
    /* 00619b7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619b7b: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x619b80u); f_00816eec();
    /* 00619b80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00619b81: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00619b84: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619b87: je 0x619be0 */ if (fZ) goto L_00619be0;
L_00619b89:; BB(0x00619b89);
    /* 00619b89: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00619b8f: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619b92: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00619b98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619b99: ret  */ FN_RET(0x00619b60); r_esp += 4; return;
L_00619b9a:; BB(0x00619b9a);
    /* 00619b9a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619b9d: jne 0x619bb7 */ if (!fZ) goto L_00619bb7;
L_00619b9f:; BB(0x00619b9f);
    /* 00619b9f: movzx eax, word ptr [ebx + 0xc8] */ r_eax = (u32)R16((u32)(r_ebx+0xc8u));
    /* 00619ba6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619ba7: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x619bacu); f_00816eec();
    /* 00619bac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00619bad: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00619bb0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00619bb3: jne 0x619bde */ if (!fZ) goto L_00619bde;
L_00619bb5:; BB(0x00619bb5);
    /* 00619bb5: jmp 0x619bf8 */ goto L_00619bf8;
L_00619bb7:; BB(0x00619bb7);
    /* 00619bb7: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00619bbd: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619bc0: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00619bc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619bc7: ret  */ FN_RET(0x00619b60); r_esp += 4; return;
L_00619bc8:; BB(0x00619bc8);
    /* 00619bc8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00619bca: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x619bcfu); f_00619c10();
    /* 00619bcf: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00619bd5: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619bd8: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
L_00619bde:; BB(0x00619bde);
    /* 00619bde: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619bdf: ret  */ FN_RET(0x00619b60); r_esp += 4; return;
L_00619be0:; BB(0x00619be0);
    /* 00619be0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00619be2: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x619be7u); f_00619c10();
    /* 00619be7: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00619bed: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619bf0: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00619bf6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619bf7: ret  */ FN_RET(0x00619b60); r_esp += 4; return;
L_00619bf8:; BB(0x00619bf8);
    /* 00619bf8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00619bfa: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x619bffu); f_00619c10();
    /* 00619bff: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00619c05: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619c08: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00619c0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619c0f: ret  */ FN_RET(0x00619b60); r_esp += 4; return;
}

void f_00619c10(void) /* sub_619C10 */
{
    FN_ENTER(0x00619c10);
    /* 00619c10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00619c11: mov esi, ecx */ r_esi = r_ecx;
    /* 00619c13: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 00619c19: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619c1b: je 0x619c1f */ if (fZ) goto L_00619c1f;
L_00619c1d:; BB(0x00619c1d);
    /* 00619c1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00619c1e: ret  */ FN_RET(0x00619c10); r_esp += 4; return;
L_00619c1f:; BB(0x00619c1f);
    /* 00619c1f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x619c24u); f_00807ac0();
    /* 00619c24: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00619c27: mov edx, dword ptr [eax*4 + 0x9c4bf0] */ r_edx = R32((u32)(r_eax*4+0x9c4bf0u));
    /* 00619c2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619c30: jl 0x619c43 */ if ((fS!=fO)) goto L_00619c43;
L_00619c32:; BB(0x00619c32);
    /* 00619c32: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00619c35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00619c37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619c39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00619c3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619c3b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x619c40u); f_00814298();
    /* 00619c40: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00619c43:; BB(0x00619c43);
    /* 00619c43: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00619c44: ret  */ FN_RET(0x00619c10); r_esp += 4; return;
}

void f_00619c48(void) /* sub_619C48 */
{
    FN_ENTER(0x00619c48);
    /* 00619c48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00619c49: mov edi, ecx */ r_edi = r_ecx;
    /* 00619c4b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x619c50u); f_00807ac0();
    /* 00619c50: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619c53: jl 0x619c65 */ if ((fS!=fO)) goto L_00619c65;
L_00619c55:; BB(0x00619c55);
    /* 00619c55: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619c58: jg 0x619c65 */ if ((!fZ&&fS==fO)) goto L_00619c65;
L_00619c5a:; BB(0x00619c5a);
    /* 00619c5a: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 00619c5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619c61: jne 0x619c65 */ if (!fZ) goto L_00619c65;
L_00619c63:; BB(0x00619c63);
    /* 00619c63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00619c64: ret  */ FN_RET(0x00619c48); r_esp += 4; return;
L_00619c65:; BB(0x00619c65);
    /* 00619c65: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 00619c6b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619c6d: jne 0x619c71 */ if (!fZ) goto L_00619c71;
L_00619c6f:; BB(0x00619c6f);
    /* 00619c6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00619c70: ret  */ FN_RET(0x00619c48); r_esp += 4; return;
L_00619c71:; BB(0x00619c71);
    /* 00619c71: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 00619c76: mov ecx, edi */ r_ecx = r_edi;
    /* 00619c78: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x619c7du); f_006134c8();
    /* 00619c7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00619c80: jne 0x619c6f */ if (!fZ) goto L_00619c6f;
L_00619c82:; BB(0x00619c82);
    /* 00619c82: mov dword ptr [edi + 0xac], 1 */ W32((u32)(r_edi+0xacu), 0x1u);
    /* 00619c8c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00619c8e: mov ecx, edi */ r_ecx = r_edi;
    /* 00619c90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00619c92: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x619c97u); f_007b52c4();
    /* 00619c97: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x619c9cu); f_00807ac0();
    /* 00619c9c: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00619c9f: mov edx, dword ptr [eax*4 + 0x9c4be0] */ r_edx = R32((u32)(r_eax*4+0x9c4be0u));
    /* 00619ca6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619ca8: jl 0x619c6f */ if ((fS!=fO)) goto L_00619c6f;
L_00619caa:; BB(0x00619caa);
    /* 00619caa: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00619cad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00619caf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619cb1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00619cb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619cb3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x619cb8u); f_00814298();
    /* 00619cb8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00619cbb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00619cbc: ret  */ FN_RET(0x00619c48); r_esp += 4; return;
}

void f_00619cc0(void) /* sub_619CC0 */
{
    FN_ENTER(0x00619cc0);
    /* 00619cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00619cc1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00619cc3: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 00619cc9: fadd dword ptr [ebp + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb8u));
    /* 00619ccf: fcom dword ptr [ebp + 0xb4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xb4u))); 
    /* 00619cd5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00619cd7: mov edx, dword ptr [ebp + 0xb4] */ r_edx = R32((u32)(r_ebp+0xb4u));
    /* 00619cdd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00619cde: jbe 0x619cf4 */ if ((fC||fZ)) goto L_00619cf4;
L_00619ce0:; BB(0x00619ce0);
    /* 00619ce0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00619ce2: mov dword ptr [ebp + 0xac], 2 */ W32((u32)(r_ebp+0xacu), 0x2u);
    /* 00619cec: mov dword ptr [ebp + 0xb0], edx */ W32((u32)(r_ebp+0xb0u), r_edx);
    /* 00619cf2: jmp 0x619cfa */ goto L_00619cfa;
L_00619cf4:; BB(0x00619cf4);
    /* 00619cf4: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
L_00619cfa:; BB(0x00619cfa);
    /* 00619cfa: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x619cffu); f_00807ac0();
    /* 00619cff: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00619d02: mov edx, dword ptr [eax*4 + 0x9c4be4] */ r_edx = R32((u32)(r_eax*4+0x9c4be4u));
    /* 00619d09: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619d0b: jl 0x619d1e */ if ((fS!=fO)) goto L_00619d1e;
L_00619d0d:; BB(0x00619d0d);
    /* 00619d0d: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00619d10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00619d12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619d13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619d14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00619d15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619d16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x619d1bu); f_00814298();
    /* 00619d1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00619d1e:; BB(0x00619d1e);
    /* 00619d1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00619d1f: ret  */ FN_RET(0x00619cc0); r_esp += 4; return;
}

void f_00619d20(void) /* sub_619D20 */
{
    FN_ENTER(0x00619d20);
    /* 00619d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00619d21: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00619d23: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x619d28u); f_00807ac0();
    /* 00619d28: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619d2b: jl 0x619d3d */ if ((fS!=fO)) goto L_00619d3d;
L_00619d2d:; BB(0x00619d2d);
    /* 00619d2d: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619d30: jg 0x619d3d */ if ((!fZ&&fS==fO)) goto L_00619d3d;
L_00619d32:; BB(0x00619d32);
    /* 00619d32: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 00619d37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619d39: jne 0x619d3d */ if (!fZ) goto L_00619d3d;
L_00619d3b:; BB(0x00619d3b);
    /* 00619d3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00619d3c: ret  */ FN_RET(0x00619d20); r_esp += 4; return;
L_00619d3d:; BB(0x00619d3d);
    /* 00619d3d: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 00619d43: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00619d45: jne 0x619d82 */ if (!fZ) goto L_00619d82;
L_00619d47:; BB(0x00619d47);
    /* 00619d47: mov dword ptr [ebp + 0xac], 3 */ W32((u32)(r_ebp+0xacu), 0x3u);
    /* 00619d51: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00619d53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00619d55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00619d57: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x619d5cu); f_007b52ec();
    /* 00619d5c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x619d61u); f_00807ac0();
    /* 00619d61: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00619d64: mov edx, dword ptr [eax*4 + 0x9c4be8] */ r_edx = R32((u32)(r_eax*4+0x9c4be8u));
    /* 00619d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619d6d: jl 0x619d80 */ if ((fS!=fO)) goto L_00619d80;
L_00619d6f:; BB(0x00619d6f);
    /* 00619d6f: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00619d72: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00619d74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619d75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619d76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00619d77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619d78: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x619d7du); f_00814298();
    /* 00619d7d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00619d80:; BB(0x00619d80);
    /* 00619d80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00619d81: ret  */ FN_RET(0x00619d20); r_esp += 4; return;
L_00619d82:; BB(0x00619d82);
    /* 00619d82: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00619d87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00619d89: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x619d8eu); f_006134c8();
    /* 00619d8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619d90: jne 0x619d80 */ if (!fZ) goto L_00619d80;
L_00619d92:; BB(0x00619d92);
    /* 00619d92: jmp 0x619d47 */ goto L_00619d47;
}

void f_00619d94(void) /* sub_619D94 */
{
    FN_ENTER(0x00619d94);
    /* 00619d94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00619d95: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00619d97: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 00619d9d: fsub dword ptr [ebp + 0xb8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xb8u));
    /* 00619da3: fcom dword ptr [0x930870] */ fx_compare(ST(0), R_F32((u32)(0x930870u))); 
    /* 00619da9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00619dab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00619dac: jae 0x619dc4 */ if (!fC) goto L_00619dc4;
L_00619dae:; BB(0x00619dae);
    /* 00619dae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00619db0: mov dword ptr [ebp + 0xac], 0 */ W32((u32)(r_ebp+0xacu), 0x0u);
    /* 00619dba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00619dbc: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 00619dc2: jmp 0x619dca */ goto L_00619dca;
L_00619dc4:; BB(0x00619dc4);
    /* 00619dc4: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
L_00619dca:; BB(0x00619dca);
    /* 00619dca: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x619dcfu); f_00807ac0();
    /* 00619dcf: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00619dd2: mov edx, dword ptr [eax*4 + 0x9c4bec] */ r_edx = R32((u32)(r_eax*4+0x9c4becu));
    /* 00619dd9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619ddb: jl 0x619dee */ if ((fS!=fO)) goto L_00619dee;
L_00619ddd:; BB(0x00619ddd);
    /* 00619ddd: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00619de0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00619de2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619de3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619de4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00619de5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619de6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x619debu); f_00814298();
    /* 00619deb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00619dee:; BB(0x00619dee);
    /* 00619dee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00619def: ret  */ FN_RET(0x00619d94); r_esp += 4; return;
}

void f_00619dbb(void)
{
    FN_ENTER(0x00619dbb);
    /* 00619dbb: ror byte ptr [ecx + 0xb085], 0 */ { u32 ad = (u32)(r_ecx+0xb085u); u32 c = (0u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 00619dc2: jmp 0x619dca */ goto L_00619dca;
L_00619dca:; BB(0x00619dca);
    /* 00619dca: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x619dcfu); f_00807ac0();
    /* 00619dcf: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00619dd2: mov edx, dword ptr [eax*4 + 0x9c4bec] */ r_edx = R32((u32)(r_eax*4+0x9c4becu));
    /* 00619dd9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619ddb: jl 0x619dee */ if ((fS!=fO)) goto L_00619dee;
L_00619ddd:; BB(0x00619ddd);
    /* 00619ddd: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00619de0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00619de2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619de3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619de4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00619de5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619de6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x619debu); f_00814298();
    /* 00619deb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00619dee:; BB(0x00619dee);
    /* 00619dee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00619def: ret  */ FN_RET(0x00619dbb); r_esp += 4; return;
}

void f_00619df0(void) /* sub_619DF0 */
{
    FN_ENTER(0x00619df0);
    /* 00619df0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00619df1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00619df3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00619df7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00619df9: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x619dfeu); f_006132e4();
    /* 00619dfe: mov dword ptr [ebx], 0xb26b40 */ W32((u32)(r_ebx), 0xb26b40u);
    /* 00619e04: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619e06: mov dword ptr [ebx + 0xcc], edx */ W32((u32)(r_ebx+0xccu), r_edx);
    /* 00619e0c: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 00619e12: mov dword ptr [ebx + 0xc8], 0xffffffff */ W32((u32)(r_ebx+0xc8u), 0xffffffffu);
    /* 00619e1c: mov dword ptr [ebx + 0xac], edx */ W32((u32)(r_ebx+0xacu), r_edx);
    /* 00619e22: mov eax, ebx */ r_eax = r_ebx;
    /* 00619e24: mov dword ptr [ebx + 0xb8], 0x3f800000 */ W32((u32)(r_ebx+0xb8u), 0x3f800000u);
    /* 00619e2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619e2f: ret 4 */ FN_RET(0x00619df0); r_esp += 8; return;
}

void f_00619e34(void) /* sub_619E34 */
{
    FN_ENTER(0x00619e34);
    /* 00619e34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00619e35: mov edi, ecx */ r_edi = r_ecx;
    /* 00619e37: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x619e3cu); f_004f7c84();
    /* 00619e3c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00619e3f: je 0x619ee8 */ if (fZ) goto L_00619ee8;
L_00619e45:; BB(0x00619e45);
    /* 00619e45: mov eax, dword ptr [0xa8eba4] */ r_eax = R32((u32)(0xa8eba4u));
    /* 00619e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619e4c: je 0x619e71 */ if (fZ) goto L_00619e71;
L_00619e4e:; BB(0x00619e4e);
    /* 00619e4e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00619e50: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 00619e56: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00619e58: mov dword ptr [edi + 0xac], edx */ W32((u32)(r_edi+0xacu), r_edx);
    /* 00619e5e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00619e61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619e62: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 00619e68: mov ecx, edi */ r_ecx = r_edi;
    /* 00619e6a: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x619e6fu); f_007b52ec();
    /* 00619e6f: jmp 0x619e78 */ goto L_00619e78;
L_00619e71:; BB(0x00619e71);
    /* 00619e71: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00619e73: mov ecx, edi */ r_ecx = r_edi;
    /* 00619e75: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x619e78u); call_ind(t); }
L_00619e78:; BB(0x00619e78);
    /* 00619e78: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00619e7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619e80: je 0x619eea */ if (fZ) goto L_00619eea;
L_00619e82:; BB(0x00619e82);
    /* 00619e82: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619e85: je 0x619ea3 */ if (fZ) goto L_00619ea3;
L_00619e87:; BB(0x00619e87);
    /* 00619e87: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619e8a: jne 0x619e95 */ if (!fZ) goto L_00619e95;
L_00619e8c:; BB(0x00619e8c);
    /* 00619e8c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00619e8e: mov ecx, edi */ r_ecx = r_edi;
    /* 00619e90: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x619e93u); call_ind(t); }
    /* 00619e93: jmp 0x619eaa */ goto L_00619eaa;
L_00619e95:; BB(0x00619e95);
    /* 00619e95: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619e98: jne 0x619eaa */ if (!fZ) goto L_00619eaa;
L_00619e9a:; BB(0x00619e9a);
    /* 00619e9a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00619e9c: mov ecx, edi */ r_ecx = r_edi;
    /* 00619e9e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x619ea1u); call_ind(t); }
    /* 00619ea1: jmp 0x619eaa */ goto L_00619eaa;
L_00619ea3:; BB(0x00619ea3);
    /* 00619ea3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00619ea5: mov ecx, edi */ r_ecx = r_edi;
    /* 00619ea7: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x619eaau); call_ind(t); }
L_00619eaa:; BB(0x00619eaa);
    /* 00619eaa: mov edx, dword ptr [edi + 0xd0] */ r_edx = R32((u32)(r_edi+0xd0u));
    /* 00619eb0: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00619eb3: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00619eb6: je 0x619ed1 */ if (fZ) goto L_00619ed1;
L_00619eb8:; BB(0x00619eb8);
    /* 00619eb8: movzx ecx, word ptr [edi + 0x60] */ r_ecx = (u32)R16((u32)(r_edi+0x60u));
    /* 00619ebc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00619ebe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619ebf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619ec0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00619ec1: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00619ec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619ec7: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x619eccu); f_008056b0();
    /* 00619ecc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00619ecf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00619ed0: ret  */ FN_RET(0x00619e34); r_esp += 4; return;
L_00619ed1:; BB(0x00619ed1);
    /* 00619ed1: movzx ecx, word ptr [edi + 0x60] */ r_ecx = (u32)R16((u32)(r_edi+0x60u));
    /* 00619ed5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00619ed7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619ed8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619ed9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00619eda: push 0xffff0000 */ { u32 v = 0xffff0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00619edf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619ee0: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x619ee5u); f_008056b0();
    /* 00619ee5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00619ee8:; BB(0x00619ee8);
    /* 00619ee8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00619ee9: ret  */ FN_RET(0x00619e34); r_esp += 4; return;
L_00619eea:; BB(0x00619eea);
    /* 00619eea: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00619eec: mov ecx, edi */ r_ecx = r_edi;
    /* 00619eee: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x619ef1u); call_ind(t); }
    /* 00619ef1: jmp 0x619eaa */ goto L_00619eaa;
}

void f_00619ef4(void) /* sub_619EF4 */
{
    FN_ENTER(0x00619ef4);
    /* 00619ef4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00619ef5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00619ef7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00619ef9: call 0x619f18 */ r_esp -= 4; W32(r_esp, 0x619efeu); f_00619f18();
    /* 00619efe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00619f02: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619f04: jne 0x619f0a */ if (!fZ) goto L_00619f0a;
L_00619f06:; BB(0x00619f06);
    /* 00619f06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619f07: ret 4 */ FN_RET(0x00619ef4); r_esp += 8; return;
L_00619f0a:; BB(0x00619f0a);
    /* 00619f0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00619f0b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x619f10u); f_005c2f74();
    /* 00619f10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00619f11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619f12: ret 4 */ FN_RET(0x00619ef4); r_esp += 8; return;
}

void f_00619f18(void) /* sub_619F18 */
{
    FN_ENTER(0x00619f18);
    /* 00619f18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00619f19: mov ebp, esp */ r_ebp = r_esp;
    /* 00619f1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00619f1d: push 0x8e1990 */ { u32 v = 0x8e1990u; r_esp -= 4; W32(r_esp, v); }
    /* 00619f22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00619f28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619f29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00619f30: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00619f33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00619f36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00619f39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00619f3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00619f3f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00619f42: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00619f49: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00619f4c: mov dword ptr [eax], 0xb26c40 */ W32((u32)(r_eax), 0xb26c40u);
    /* 00619f52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619f53: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x619f58u); f_007b4e84();
    /* 00619f58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00619f59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00619f5c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x619f61u); f_007b9c8c();
    /* 00619f61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00619f68: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00619f6b: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x619f70u); f_00619b10();
    /* 00619f70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00619f73: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00619f7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00619f7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00619f7d: ret  */ FN_RET(0x00619f18); r_esp += 4; return;
}

void f_00619f80(void) /* sub_619F80 */
{
    FN_ENTER(0x00619f80);
    /* 00619f80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00619f81: mov edi, ecx */ r_edi = r_ecx;
    /* 00619f83: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00619f85: mov ecx, edi */ r_ecx = r_edi;
    /* 00619f87: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00619f8d: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00619f93: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x619f96u); call_ind(t); }
    /* 00619f96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619f98: je 0x61a086 */ if (fZ) goto L_0061a086;
L_00619f9e:; BB(0x00619f9e);
    /* 00619f9e: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00619fa3: mov ecx, edi */ r_ecx = r_edi;
    /* 00619fa5: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x619faau); f_00613244();
    /* 00619faa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00619fac: je 0x61a086 */ if (fZ) goto L_0061a086;
L_00619fb2:; BB(0x00619fb2);
    /* 00619fb2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x619fb7u); f_0082d7b0();
    /* 00619fb7: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00619fba: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x619fbfu); f_0082d838();
    /* 00619fbf: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00619fc2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00619fc4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x619fc9u); f_0082d8bc();
    /* 00619fc9: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 00619fcf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00619fd1: je 0x619fda */ if (fZ) goto L_00619fda;
L_00619fd3:; BB(0x00619fd3);
    /* 00619fd3: mov edx, 1 */ r_edx = 0x1u;
    /* 00619fd8: jmp 0x619fdc */ goto L_00619fdc;
L_00619fda:; BB(0x00619fda);
    /* 00619fda: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00619fdc:; BB(0x00619fdc);
    /* 00619fdc: mov eax, dword ptr [0xa8eba8] */ r_eax = R32((u32)(0xa8eba8u));
    /* 00619fe1: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00619fe4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x619fe9u); f_00829cc8();
    /* 00619fe9: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00619fef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619ff1: jne 0x61a06d */ if (!fZ) goto L_0061a06d;
L_00619ff3:; BB(0x00619ff3);
    /* 00619ff3: mov edi, dword ptr [edi + 0x34] */ r_edi = R32((u32)(r_edi+0x34u));
    /* 00619ff6: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 00619ff9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x619ffeu); f_0082d838();
    /* 00619ffe: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a001: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a006u); f_008321d8();
    /* 0061a006: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a007: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0061a00a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61a00fu); f_0082d7b0();
    /* 0061a00f: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061a012: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a017u); f_0082d838();
    /* 0061a017: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a01a: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a01fu); f_008321d8();
    /* 0061a01f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a020: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a025u); f_0082da80();
    /* 0061a025: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61a02au); f_0082dbac();
    /* 0061a02a: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0061a02d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61a032u); f_0082d7b0();
    /* 0061a032: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061a035: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a03au); f_0082d838();
    /* 0061a03a: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a03d: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a042u); f_008321d8();
    /* 0061a042: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a043: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a048u); f_0082da80();
    /* 0061a048: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0061a04b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61a050u); f_0082d7b0();
    /* 0061a050: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061a053: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a058u); f_0082d838();
    /* 0061a058: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a05b: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a060u); f_008321d8();
    /* 0061a060: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a061: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a066u); f_0082da80();
    /* 0061a066: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61a06bu); f_0082dab0();
    /* 0061a06b: jmp 0x61a081 */ goto L_0061a081;
L_0061a06d:; BB(0x0061a06d);
    /* 0061a06d: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a073: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0061a076: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 0061a07c: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61a081u); f_0083bd00();
L_0061a081:; BB(0x0061a081);
    /* 0061a081: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a086u); f_0082da80();
L_0061a086:; BB(0x0061a086);
    /* 0061a086: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061a087: ret  */ FN_RET(0x00619f80); r_esp += 4; return;
}

