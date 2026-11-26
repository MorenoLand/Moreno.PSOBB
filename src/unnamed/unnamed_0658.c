#include "protos.h"

void f_00658054(void) /* sub_658054 */
{
    FN_ENTER(0x00658054);
    /* 00658054: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00658055: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658058: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065805a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0065805c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065805e: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 00658065: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
    /* 0065806d: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00658075: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065807b: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658081: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x658084u); call_ind(t); }
    /* 00658084: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658087: je 0x65808e */ if (fZ) goto L_0065808e;
L_00658089:; BB(0x00658089);
    /* 00658089: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065808c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065808d: ret  */ FN_RET(0x00658054); r_esp += 4; return;
L_0065808e:; BB(0x0065808e);
    /* 0065808e: mov ecx, dword ptr [0xa8f7b8] */ r_ecx = R32((u32)(0xa8f7b8u));
    /* 00658094: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x658099u); f_00829cc8();
    /* 00658099: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65809eu); f_0082d7b0();
    /* 0065809e: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 006580a1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6580a6u); f_0082d838();
    /* 006580a6: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 006580a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006580ab: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6580b0u); f_0082d8bc();
    /* 006580b0: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x6580b5u); f_00835068();
    /* 006580b5: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 006580bb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006580bd: je 0x6580e1 */ if (fZ) goto L_006580e1;
L_006580bf:; BB(0x006580bf);
    /* 006580bf: mov ecx, dword ptr [0xa8f7bc] */ r_ecx = R32((u32)(0xa8f7bcu));
    /* 006580c5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006580c7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6580ccu); f_005b8610();
    /* 006580cc: push dword ptr [ebx + 0xb4] */ { u32 v = R32((u32)(r_ebx+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006580d2: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 006580d8: mov ecx, eax */ r_ecx = r_eax;
    /* 006580da: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x6580dfu); f_00835574();
    /* 006580df: jmp 0x658139 */ goto L_00658139;
L_006580e1:; BB(0x006580e1);
    /* 006580e1: mov ecx, dword ptr [0xa8f7bc] */ r_ecx = R32((u32)(0xa8f7bcu));
    /* 006580e7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006580e9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6580eeu); f_005b8610();
    /* 006580ee: mov ecx, eax */ r_ecx = r_eax;
    /* 006580f0: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x6580f5u); f_00835090();
    /* 006580f5: mov edx, dword ptr [ebx + 0xd4] */ r_edx = R32((u32)(r_ebx+0xd4u));
    /* 006580fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006580fd: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006580ff: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00658102: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00658104: jle 0x658139 */ if ((fZ||fS!=fO)) goto L_00658139;
L_00658106:; BB(0x00658106);
    /* 00658106: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0065810a: mov esi, ebx */ r_esi = r_ebx;
    /* 0065810c: mov ebx, eax */ r_ebx = r_eax;
L_0065810e:; BB(0x0065810e);
    /* 0065810e: push dword ptr [esp + ebx*4] */ { u32 v = R32((u32)(r_esp+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00658111: mov ecx, dword ptr [0xa8f7bc] */ r_ecx = R32((u32)(0xa8f7bcu));
    /* 00658117: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65811cu); f_005b8610();
    /* 0065811c: mov ecx, eax */ r_ecx = r_eax;
    /* 0065811e: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x658123u); f_00835090();
    /* 00658123: mov edx, dword ptr [esi + 0xd4] */ r_edx = R32((u32)(r_esi+0xd4u));
    /* 00658129: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065812c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0065812e: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00658131: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658133: jl 0x65810e */ if ((fS!=fO)) goto L_0065810e;
L_00658135:; BB(0x00658135);
    /* 00658135: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_00658139:; BB(0x00658139);
    /* 00658139: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x65813eu); f_00835078();
    /* 0065813e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x658143u); f_0082da80();
    /* 00658143: jmp 0x658089 */ goto L_00658089;
}

void f_00658148(void) /* sub_658148 */
{
    FN_ENTER(0x00658148);
    /* 00658148: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00658149: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065814c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065814e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00658152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658154: je 0x65815e */ if (fZ) goto L_0065815e;
L_00658156:; BB(0x00658156);
    /* 00658156: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00658159: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065815c: je 0x658165 */ if (fZ) goto L_00658165;
L_0065815e:; BB(0x0065815e);
    /* 0065815e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00658161: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00658162: ret 8 */ FN_RET(0x00658148); r_esp += 12; return;
L_00658165:; BB(0x00658165);
    /* 00658165: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00658169: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0065816f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00658172: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00658178: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065817a: jne 0x65815e */ if (!fZ) goto L_0065815e;
L_0065817c:; BB(0x0065817c);
    /* 0065817c: mov eax, dword ptr [ebx + 0xbc] */ r_eax = R32((u32)(r_ebx+0xbcu));
    /* 00658182: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00658185: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00658188: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0065818b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0065818e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00658190: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00658193: fadd dword ptr [edx*4 + 0x937b50] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937b50u));
    /* 0065819a: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
    /* 006581a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006581a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006581a4: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x6581a9u); f_007b52c4();
    /* 006581a9: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 006581af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006581b1: je 0x65815e */ if (fZ) goto L_0065815e;
L_006581b3:; BB(0x006581b3);
    /* 006581b3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006581b7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006581bc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006581c0: mov dword ptr [ebx + 0xdc], 0 */ W32((u32)(r_ebx+0xdcu), 0x0u);
    /* 006581ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006581cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006581ce: ret 8 */ FN_RET(0x00658148); r_esp += 12; return;
}

void f_006581d4(void) /* sub_6581D4 */
{
    FN_ENTER(0x006581d4);
    /* 006581d4: mov ecx, dword ptr [0xa8f7b8] */ r_ecx = R32((u32)(0xa8f7b8u));
    /* 006581da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006581dc: je 0x6581f9 */ if (fZ) goto L_006581f9;
L_006581de:; BB(0x006581de);
    /* 006581de: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x6581e3u); f_00829de0();
    /* 006581e3: push dword ptr [0xa8f7b8] */ { u32 v = R32((u32)(0xa8f7b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006581e9: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6581eeu); f_0082e960();
    /* 006581ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006581ef: mov dword ptr [0xa8f7b8], 0 */ W32((u32)(0xa8f7b8u), 0x0u);
L_006581f9:; BB(0x006581f9);
    /* 006581f9: mov ecx, dword ptr [0xa8f7bc] */ r_ecx = R32((u32)(0xa8f7bcu));
    /* 006581ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00658201: je 0x658216 */ if (fZ) goto L_00658216;
L_00658203:; BB(0x00658203);
    /* 00658203: je 0x65820c */ if (fZ) goto L_0065820c;
L_00658205:; BB(0x00658205);
    /* 00658205: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658207: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65820cu); f_004066a8();
L_0065820c:; BB(0x0065820c);
    /* 0065820c: mov dword ptr [0xa8f7bc], 0 */ W32((u32)(0xa8f7bcu), 0x0u);
L_00658216:; BB(0x00658216);
    /* 00658216: ret  */ FN_RET(0x006581d4); r_esp += 4; return;
}

void f_00658218(void)
{
    FN_ENTER(0x00658218);
    /* 00658218: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658219: mov ebp, esp */ r_ebp = r_esp;
    /* 0065821b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065821d: push 0x8e700c */ { u32 v = 0x8e700cu; r_esp -= 4; W32(r_esp, v); }
    /* 00658222: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00658228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658229: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00658230: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658233: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00658236: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00658239: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065823c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065823f: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00658244: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065824b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x658250u); f_005caba4();
    /* 00658250: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658251: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00658254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658256: je 0x65828f */ if (fZ) goto L_0065828f;
L_00658258:; BB(0x00658258);
    /* 00658258: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065825f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00658266: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658269: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065826f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658272: call 0x658294 */ r_esp -= 4; W32(r_esp, 0x658277u); f_00658294();
    /* 00658277: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065827a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00658281:; BB(0x00658281);
    /* 00658281: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658284: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065828b: mov esp, ebp */ r_esp = r_ebp;
    /* 0065828d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065828e: ret  */ FN_RET(0x00658218); r_esp += 4; return;
L_0065828f:; BB(0x0065828f);
    /* 0065828f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00658291: jmp 0x658281 */ goto L_00658281;
}

void f_00658294(void) /* sub_658294 */
{
    FN_ENTER(0x00658294);
    /* 00658294: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658295: mov ebp, esp */ r_ebp = r_esp;
    /* 00658297: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00658299: push 0x8e7028 */ { u32 v = 0x8e7028u; r_esp -= 4; W32(r_esp, v); }
    /* 0065829e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006582a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006582a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006582ac: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006582af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006582b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006582b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006582b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006582bb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006582be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006582c1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006582c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006582c7: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x6582ccu); f_00619df0();
    /* 006582cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006582d3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006582d6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006582d9: mov dword ptr [ecx], 0xb32340 */ W32((u32)(r_ecx), 0xb32340u);
    /* 006582df: mov eax, dword ptr [0x9c7c98] */ r_eax = R32((u32)(0x9c7c98u));
    /* 006582e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006582e5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006582e8: call dword ptr [0xb32354] */ { u32 t = R32((u32)(0xb32354u)); r_esp -= 4; W32(r_esp, 0x6582eeu); call_ind(t); }
    /* 006582ee: mov ecx, dword ptr [0xa8f7bc] */ r_ecx = R32((u32)(0xa8f7bcu));
    /* 006582f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006582f6: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6582fbu); f_005b8638();
    /* 006582fb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006582fe: mov dword ptr [ecx + 0xb8], 0x3f800000 */ W32((u32)(r_ecx+0xb8u), 0x3f800000u);
    /* 00658308: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0065830e: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 00658318: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065831a: push 0x9c7c9c */ { u32 v = 0x9c7c9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065831f: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x658324u); f_007b9a88();
    /* 00658324: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00658327: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x65832cu); f_007b999c();
    /* 0065832c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065832d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658330: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x658335u); f_007b4f54();
    /* 00658335: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658338: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065833b: mov dword ptr [ecx + 0xc0], 0x44480000 */ W32((u32)(r_ecx+0xc0u), 0x44480000u);
    /* 00658345: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00658347: mov dword ptr [ecx + 0xc4], 0x42f00000 */ W32((u32)(r_ecx+0xc4u), 0x42f00000u);
    /* 00658351: mov dword ptr [ecx + 0xd4], edx */ W32((u32)(r_ecx+0xd4u), r_edx);
    /* 00658357: mov dword ptr [ecx + 0xd8], edx */ W32((u32)(r_ecx+0xd8u), r_edx);
    /* 0065835d: movzx ebx, word ptr [eax] */ r_ebx = (u32)R16((u32)(r_eax));
    /* 00658360: movzx esi, word ptr [eax + 2] */ r_esi = (u32)R16((u32)(r_eax+0x2u));
    /* 00658364: movzx edi, word ptr [eax + 4] */ r_edi = (u32)R16((u32)(r_eax+0x4u));
    /* 00658368: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 0065836c: mov word ptr [ebp - 0x60], bx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_ebx);
    /* 00658370: mov word ptr [ebp - 0x5e], si */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_esi);
    /* 00658374: mov dword ptr [ebp - 0x30], 2 */ W32((u32)(r_ebp+0xffffffd0u), 0x2u);
    /* 0065837b: mov word ptr [ebp - 0x5c], di */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_edi);
    /* 0065837f: mov word ptr [ebp - 0x5a], dx */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_edx);
    /* 00658383: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00658387: mov word ptr [ebp - 0x58], dx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edx);
    /* 0065838b: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0065838f: mov word ptr [ebp - 0x56], dx */ W16((u32)(r_ebp+0xffffffaau), (u16)r_edx);
    /* 00658393: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00658396: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00658399: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0065839c: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0065839f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006583a2: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006583a5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006583a8: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006583ab: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006583ae: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006583b1: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006583b4: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006583b7: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006583ba: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 006583bd: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006583c0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006583c3: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006583c6: mov dword ptr [ebp - 0x3c], 0x43200000 */ W32((u32)(r_ebp+0xffffffc4u), 0x43200000u);
    /* 006583cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006583ce: mov dword ptr [ebp - 0x38], 0x42c80000 */ W32((u32)(r_ebp+0xffffffc8u), 0x42c80000u);
    /* 006583d5: mov dword ptr [ebp - 0x34], 0x42200000 */ W32((u32)(r_ebp+0xffffffccu), 0x42200000u);
    /* 006583dc: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x6583e1u); f_0065f960();
    /* 006583e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006583e2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006583e5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006583e8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006583eb: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006583ee: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 006583f4: mov eax, edx */ r_eax = r_edx;
    /* 006583f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006583f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00658400: mov esp, ebp */ r_esp = r_ebp;
    /* 00658402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658403: ret 8 */ FN_RET(0x00658294); r_esp += 12; return;
}

void f_00658408(void) /* sub_658408 */
{
    FN_ENTER(0x00658408);
    /* 00658408: call 0x6585e4 */ r_esp -= 4; W32(r_esp, 0x65840du); f_006585e4();
    /* 0065840d: ret  */ FN_RET(0x00658408); r_esp += 4; return;
}

void f_00658410(void) /* sub_658410 */
{
    FN_ENTER(0x00658410);
    /* 00658410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658411: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658414: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00658416: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0065841c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0065841e: jne 0x6584c3 */ if (!fZ) goto L_006584c3;
L_00658424:; BB(0x00658424);
    /* 00658424: mov ecx, dword ptr [0xa9cd68] */ r_ecx = R32((u32)(0xa9cd68u));
    /* 0065842a: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 00658430: mov dword ptr [ebp + 0xd4], 0 */ W32((u32)(r_ebp+0xd4u), 0x0u);
    /* 0065843a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065843c: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00658440: mov ebx, edx */ r_ebx = r_edx;
    /* 00658442: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00658446: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0065844a: mov edi, ebp */ r_edi = r_ebp;
    /* 0065844c: mov ebp, eax */ r_ebp = r_eax;
    /* 0065844e: mov esi, ecx */ r_esi = r_ecx;
L_00658450:; BB(0x00658450);
    /* 00658450: push dword ptr [ebx + 0x937b60] */ { u32 v = R32((u32)(r_ebx+0x937b60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658456: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00658457: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x65845cu); f_006bb450();
    /* 0065845c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065845f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658461: je 0x65846a */ if (fZ) goto L_0065846a;
L_00658463:; BB(0x00658463);
    /* 00658463: add dword ptr [edi + 0xd4], 1 */ { u32 ad = (u32)(r_edi+0xd4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0065846a:; BB(0x0065846a);
    /* 0065846a: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065846d: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658470: jl 0x658450 */ if ((fS!=fO)) goto L_00658450;
L_00658472:; BB(0x00658472);
    /* 00658472: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00658476: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0065847a: mov eax, ebp */ r_eax = r_ebp;
    /* 0065847c: mov ebp, edi */ r_ebp = r_edi;
    /* 0065847e: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
    /* 00658484: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00658486: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0065848a: jle 0x6584ab */ if ((fZ||fS!=fO)) goto L_006584ab;
L_0065848c:; BB(0x0065848c);
    /* 0065848c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065848e: je 0x6584ab */ if (fZ) goto L_006584ab;
L_00658490:; BB(0x00658490);
    /* 00658490: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00658493: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00658495: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658497: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658498: push 0x4df */ { u32 v = 0x4dfu; r_esp -= 4; W32(r_esp, v); }
    /* 0065849d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6584a2u); f_00814298();
    /* 006584a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006584a5: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
L_006584ab:; BB(0x006584ab);
    /* 006584ab: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006584ae: je 0x658510 */ if (fZ) goto L_00658510;
L_006584b0:; BB(0x006584b0);
    /* 006584b0: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 006584b6: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006584b9: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
L_006584bf:; BB(0x006584bf);
    /* 006584bf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006584c1: jne 0x6584c8 */ if (!fZ) goto L_006584c8;
L_006584c3:; BB(0x006584c3);
    /* 006584c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006584c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006584c7: ret  */ FN_RET(0x00658410); r_esp += 4; return;
L_006584c8:; BB(0x006584c8);
    /* 006584c8: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 006584ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006584d0: je 0x6584c3 */ if (fZ) goto L_006584c3;
L_006584d2:; BB(0x006584d2);
    /* 006584d2: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 006584d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006584d8: jl 0x6584c3 */ if ((fS!=fO)) goto L_006584c3;
L_006584da:; BB(0x006584da);
    /* 006584da: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006584e0: jg 0x6584c3 */ if ((!fZ&&fS==fO)) goto L_006584c3;
L_006584e2:; BB(0x006584e2);
    /* 006584e2: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 006584e8: movzx eax, word ptr [edx + ecx*4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4));
    /* 006584ec: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 006584f0: movzx eax, word ptr [edx + ecx*4 + 2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4+0x2u));
    /* 006584f5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006584f7: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006584fc: mov eax, 1 */ r_eax = 0x1u;
    /* 00658501: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00658505: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00658508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658509: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x65850eu); f_007b5038();
    /* 0065850e: jmp 0x6584c3 */ goto L_006584c3;
L_00658510:; BB(0x00658510);
    /* 00658510: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00658514: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00658516: mov edi, eax */ r_edi = r_eax;
L_00658518:; BB(0x00658518);
    /* 00658518: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00658519: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x65851eu); f_0068d5a8();
    /* 0065851e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065851f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658521: je 0x65854c */ if (fZ) goto L_0065854c;
L_00658523:; BB(0x00658523);
    /* 00658523: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 00658529: cmp edx, dword ptr [eax + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065852f: jne 0x65854c */ if (!fZ) goto L_0065854c;
L_00658531:; BB(0x00658531);
    /* 00658531: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00658534: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00658537: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658539: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x65853eu); f_0078ea50();
    /* 0065853e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00658541: fcomp dword ptr [0x937b78] */ fx_compare(ST(0), R_F32((u32)(0x937b78u))); FPOP();
    /* 00658547: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00658549: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065854a: jb 0x65855d */ if (fC) goto L_0065855d;
L_0065854c:; BB(0x0065854c);
    /* 0065854c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065854f: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658552: jl 0x658518 */ if ((fS!=fO)) goto L_00658518;
L_00658554:; BB(0x00658554);
    /* 00658554: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00658558: jmp 0x6584b0 */ goto L_006584b0;
L_0065855d:; BB(0x0065855d);
    /* 0065855d: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00658561: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 00658567: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065856a: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 00658570: jmp 0x6584bf */ goto L_006584bf;
}

void f_00658578(void) /* sub_658578 */
{
    FN_ENTER(0x00658578);
    /* 00658578: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00658579: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065857a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065857c: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0065857f: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00658583: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00658588: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065858b: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00658590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658591: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658592: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x658597u); f_0078ea50();
    /* 00658597: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0065859a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0065859d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065859f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006585a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006585a3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006585a4: jbe 0x6585b0 */ if ((fC||fZ)) goto L_006585b0;
L_006585a6:; BB(0x006585a6);
    /* 006585a6: mov eax, 1 */ r_eax = 0x1u;
    /* 006585ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006585ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006585ad: ret 8 */ FN_RET(0x00658578); r_esp += 12; return;
L_006585b0:; BB(0x006585b0);
    /* 006585b0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006585b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006585b6: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006585ba: call 0x7ba468 */ r_esp -= 4; W32(r_esp, 0x6585bfu); f_007ba468();
    /* 006585bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006585c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006585c1: ret 8 */ FN_RET(0x00658578); r_esp += 12; return;
}

void f_006585c4(void) /* sub_6585C4 */
{
    FN_ENTER(0x006585c4);
    /* 006585c4: mov dword ptr [0xa8f7ac], 0x3f800000 */ W32((u32)(0xa8f7acu), 0x3f800000u);
    /* 006585ce: mov dword ptr [0xa8f7b0], 0x41000000 */ W32((u32)(0xa8f7b0u), 0x41000000u);
    /* 006585d8: mov dword ptr [0xa8f7b4], 0x3fc00000 */ W32((u32)(0xa8f7b4u), 0x3fc00000u);
    /* 006585e2: ret  */ FN_RET(0x006585c4); r_esp += 4; return;
}

void f_006585e4(void) /* sub_6585E4 */
{
    FN_ENTER(0x006585e4);
    /* 006585e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006585e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006585e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006585e8: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 006585ee: mov ebx, eax */ r_ebx = r_eax;
    /* 006585f0: mov esi, edx */ r_esi = r_edx;
L_006585f2:; BB(0x006585f2);
    /* 006585f2: push dword ptr [ebx + 0x937b60] */ { u32 v = R32((u32)(r_ebx+0x937b60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006585f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006585f9: call 0x6bb394 */ r_esp -= 4; W32(r_esp, 0x6585feu); f_006bb394();
    /* 006585fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00658601: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00658604: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00658607: jl 0x6585f2 */ if ((fS!=fO)) goto L_006585f2;
L_00658609:; BB(0x00658609);
    /* 00658609: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065860a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065860b: ret  */ FN_RET(0x006585e4); r_esp += 4; return;
}

void f_0065860c(void) /* sub_65860C */
{
    FN_ENTER(0x0065860c);
    /* 0065860c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065860d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065860f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00658611: push 0x8e7050 */ { u32 v = 0x8e7050u; r_esp -= 4; W32(r_esp, v); }
    /* 00658616: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065861c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065861d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00658624: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658627: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065862a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065862d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00658630: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00658633: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00658638: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065863f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x658644u); f_008581c5();
    /* 00658644: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658645: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00658648: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065864a: je 0x6586ac */ if (fZ) goto L_006586ac;
L_0065864c:; BB(0x0065864c);
    /* 0065864c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00658653: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065865a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065865d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065865f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658662: push 0x9c7c88 */ { u32 v = 0x9c7c88u; r_esp -= 4; W32(r_esp, v); }
    /* 00658667: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658669: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65866eu); f_005b7a84();
    /* 0065866e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658671: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00658678:; BB(0x00658678);
    /* 00658678: mov dword ptr [0xa8f7bc], ecx */ W32((u32)(0xa8f7bcu), r_ecx);
    /* 0065867e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00658685: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658687: je 0x65868e */ if (fZ) goto L_0065868e;
L_00658689:; BB(0x00658689);
    /* 00658689: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x65868eu); f_005b90d0();
L_0065868e:; BB(0x0065868e);
    /* 0065868e: push 0x937c28 */ { u32 v = 0x937c28u; r_esp -= 4; W32(r_esp, v); }
    /* 00658693: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x658698u); f_008009dc();
    /* 00658698: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658699: mov dword ptr [0xa8f7b8], eax */ W32((u32)(0xa8f7b8u), r_eax);
    /* 0065869e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006586a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006586a8: mov esp, ebp */ r_esp = r_ebp;
    /* 006586aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006586ab: ret  */ FN_RET(0x0065860c); r_esp += 4; return;
L_006586ac:; BB(0x006586ac);
    /* 006586ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006586ae: jmp 0x658678 */ goto L_00658678;
}

void f_006586b0(void) /* sub_6586B0 */
{
    FN_ENTER(0x006586b0);
    /* 006586b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006586b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006586b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006586b5: call 0x6586d4 */ r_esp -= 4; W32(r_esp, 0x6586bau); f_006586d4();
    /* 006586ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006586be: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006586c0: jne 0x6586c6 */ if (!fZ) goto L_006586c6;
L_006586c2:; BB(0x006586c2);
    /* 006586c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006586c3: ret 4 */ FN_RET(0x006586b0); r_esp += 8; return;
L_006586c6:; BB(0x006586c6);
    /* 006586c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006586c7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6586ccu); f_005c2f74();
    /* 006586cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006586cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006586ce: ret 4 */ FN_RET(0x006586b0); r_esp += 8; return;
}

void f_006586d4(void) /* sub_6586D4 */
{
    FN_ENTER(0x006586d4);
    /* 006586d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006586d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006586d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006586d9: push 0x8e706c */ { u32 v = 0x8e706cu; r_esp -= 4; W32(r_esp, v); }
    /* 006586de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006586e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006586e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006586ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006586ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006586f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006586f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006586f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006586fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006586fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00658705: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658708: mov dword ptr [eax], 0xb32440 */ W32((u32)(r_eax), 0xb32440u);
    /* 0065870e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065870f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x658714u); f_007b4e84();
    /* 00658714: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658715: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658718: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x65871du); f_007b9c8c();
    /* 0065871d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658720: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 00658726: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658728: je 0x658744 */ if (fZ) goto L_00658744;
L_0065872a:; BB(0x0065872a);
    /* 0065872a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065872d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00658731: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00658736: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0065873a: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
L_00658744:; BB(0x00658744);
    /* 00658744: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065874b: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x658750u); f_006296c8();
    /* 00658750: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658753: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065875a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065875c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065875d: ret  */ FN_RET(0x006586d4); r_esp += 4; return;
}

void f_00658760(void) /* sub_658760 */
{
    FN_ENTER(0x00658760);
    /* 00658760: mov eax, dword ptr [ecx + 0xf4] */ r_eax = R32((u32)(r_ecx+0xf4u));
    /* 00658766: mov edx, dword ptr [ecx + 0xf0] */ r_edx = R32((u32)(r_ecx+0xf0u));
    /* 0065876c: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065876f: mov dword ptr [ecx + 0xf4], eax */ W32((u32)(r_ecx+0xf4u), r_eax);
    /* 00658775: add edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065877b: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 00658781: ret  */ FN_RET(0x00658760); r_esp += 4; return;
}

void f_00658784(void) /* sub_658784 */
{
    FN_ENTER(0x00658784);
    /* 00658784: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00658785: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658786: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00658788: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x65878du); f_00807e78();
    /* 0065878d: mov ecx, eax */ r_ecx = r_eax;
    /* 0065878f: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 00658792: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00658795: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00658797: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00658799: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065879a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065879b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065879c: push dword ptr [eax + ecx*8 + 0x932184] */ { u32 v = R32((u32)(r_eax+r_ecx*8+0x932184u)); r_esp -= 4; W32(r_esp, v); }
    /* 006587a3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6587a8u); f_00814298();
    /* 006587a8: mov dword ptr [ebp + 0xe8], 1 */ W32((u32)(r_ebp+0xe8u), 0x1u);
    /* 006587b2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006587b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006587b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006587b7: ret  */ FN_RET(0x00658784); r_esp += 4; return;
}

void f_006587b8(void) /* sub_6587B8 */
{
    FN_ENTER(0x006587b8);
    /* 006587b8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006587ba: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x6587bdu); call_ind(t); }
    /* 006587bd: ret  */ FN_RET(0x006587b8); r_esp += 4; return;
}

void f_006587c0(void) /* sub_6587C0 */
{
    FN_ENTER(0x006587c0);
    /* 006587c0: call 0x6299fc */ r_esp -= 4; W32(r_esp, 0x6587c5u); f_006299fc();
    /* 006587c5: ret  */ FN_RET(0x006587c0); r_esp += 4; return;
}

void f_006587c8(void) /* sub_6587C8 */
{
    FN_ENTER(0x006587c8);
    /* 006587c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006587c9: mov edi, ecx */ r_edi = r_ecx;
    /* 006587cb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006587cd: mov ecx, edi */ r_ecx = r_edi;
    /* 006587cf: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 006587d4: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006587d9: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6587dcu); call_ind(t); }
    /* 006587dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006587de: jne 0x6587f1 */ if (!fZ) goto L_006587f1;
L_006587e0:; BB(0x006587e0);
    /* 006587e0: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 006587e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006587e8: je 0x6587ef */ if (fZ) goto L_006587ef;
L_006587ea:; BB(0x006587ea);
    /* 006587ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x6587efu); f_00508f48();
L_006587ef:; BB(0x006587ef);
    /* 006587ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006587f0: ret  */ FN_RET(0x006587c8); r_esp += 4; return;
L_006587f1:; BB(0x006587f1);
    /* 006587f1: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 006587f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006587f9: je 0x658800 */ if (fZ) goto L_00658800;
L_006587fb:; BB(0x006587fb);
    /* 006587fb: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x658800u); f_00509580();
L_00658800:; BB(0x00658800);
    /* 00658800: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 00658806: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658808: jne 0x658813 */ if (!fZ) goto L_00658813;
L_0065880a:; BB(0x0065880a);
    /* 0065880a: mov ecx, edi */ r_ecx = r_edi;
    /* 0065880c: call 0x65893c */ r_esp -= 4; W32(r_esp, 0x658811u); f_0065893c();
    /* 00658811: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00658812: ret  */ FN_RET(0x006587c8); r_esp += 4; return;
L_00658813:; BB(0x00658813);
    /* 00658813: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00658816: jne 0x65881f */ if (!fZ) goto L_0065881f;
L_00658818:; BB(0x00658818);
    /* 00658818: mov ecx, edi */ r_ecx = r_edi;
    /* 0065881a: call 0x658824 */ r_esp -= 4; W32(r_esp, 0x65881fu); f_00658824();
L_0065881f:; BB(0x0065881f);
    /* 0065881f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00658820: ret  */ FN_RET(0x006587c8); r_esp += 4; return;
}

void f_00658824(void) /* sub_658824 */
{
    FN_ENTER(0x00658824);
    /* 00658824: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658825: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00658827: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0065882c: cmp eax, dword ptr [0xa8f7e8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8f7e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658832: je 0x658851 */ if (fZ) goto L_00658851;
L_00658834:; BB(0x00658834);
    /* 00658834: mov ecx, dword ptr [0xa8f7e4] */ r_ecx = R32((u32)(0xa8f7e4u));
    /* 0065883a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065883c: je 0x65884c */ if (fZ) goto L_0065884c;
L_0065883e:; BB(0x0065883e);
    /* 0065883e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00658840: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00658842: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00658844: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x658847u); call_ind(t); }
    /* 00658847: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
L_0065884c:; BB(0x0065884c);
    /* 0065884c: mov dword ptr [0xa8f7e8], eax */ W32((u32)(0xa8f7e8u), r_eax);
L_00658851:; BB(0x00658851);
    /* 00658851: mov ecx, dword ptr [0xa8f800] */ r_ecx = R32((u32)(0xa8f800u));
    /* 00658857: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65885cu); f_00829cc8();
    /* 0065885c: mov eax, dword ptr [0xa8f7e4] */ r_eax = R32((u32)(0xa8f7e4u));
    /* 00658861: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658863: je 0x658879 */ if (fZ) goto L_00658879;
L_00658865:; BB(0x00658865);
    /* 00658865: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00658867: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x65886cu); f_00835f78();
    /* 0065886c: mov ecx, dword ptr [0xa8f7e4] */ r_ecx = R32((u32)(0xa8f7e4u));
    /* 00658872: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00658874: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00658876: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x658879u); call_ind(t); }
L_00658879:; BB(0x00658879);
    /* 00658879: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65887eu); f_0082d7b0();
    /* 0065887e: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00658881: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x658886u); f_0082d838();
    /* 00658886: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00658889: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065888b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x658890u); f_0082d8bc();
    /* 00658890: mov ecx, dword ptr [0xa8f7f4] */ r_ecx = R32((u32)(0xa8f7f4u));
    /* 00658896: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65889bu); f_00831758();
    /* 0065889b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6588a0u); f_0082dbac();
    /* 006588a0: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006588a5: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 006588aa: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006588ad: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006588b2: mov edx, dword ptr [ebp + 0x8c] */ r_edx = R32((u32)(r_ebp+0x8cu));
    /* 006588b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006588ba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006588bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006588be: lea eax, [edx + edx + 0x9c7ce0] */ r_eax = (u32)(r_edx+r_edx+0x9c7ce0u);
    /* 006588c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006588c6: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6588cbu); f_0082d710();
    /* 006588cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006588cc: mov ecx, dword ptr [0xa8f7f8] */ r_ecx = R32((u32)(0xa8f7f8u));
    /* 006588d2: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6588d7u); f_00831758();
    /* 006588d7: mov edx, dword ptr [ebp + 0xf0] */ r_edx = R32((u32)(r_ebp+0xf0u));
    /* 006588dd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006588df: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6588e4u); f_0082d8bc();
    /* 006588e4: mov eax, dword ptr [0xa8f7fc] */ r_eax = R32((u32)(0xa8f7fcu));
    /* 006588e9: movzx ebp, word ptr [ebp + 0x8c] */ r_ebp = (u32)R16((u32)(r_ebp+0x8cu));
    /* 006588f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006588f1: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006588f4: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x6588f9u); f_0081a588();
    /* 006588f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006588fc: mov ecx, dword ptr [0xa8f7fc] */ r_ecx = R32((u32)(0xa8f7fcu));
    /* 00658902: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x658907u); f_00831758();
    /* 00658907: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065890c: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x658911u); f_0082d710();
    /* 00658911: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658912: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00658917: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0065891c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x658921u); f_0082dab0();
    /* 00658921: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x658926u); f_0082da80();
    /* 00658926: mov ecx, dword ptr [0xa8f7e4] */ r_ecx = R32((u32)(0xa8f7e4u));
    /* 0065892c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065892e: je 0x65893a */ if (fZ) goto L_0065893a;
L_00658930:; BB(0x00658930);
    /* 00658930: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00658932: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x658935u); call_ind(t); }
    /* 00658935: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x65893au); f_0083603c();
L_0065893a:; BB(0x0065893a);
    /* 0065893a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065893b: ret  */ FN_RET(0x00658824); r_esp += 4; return;
}

void f_0065893c(void) /* sub_65893C */
{
    FN_ENTER(0x0065893c);
    /* 0065893c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065893d: mov edi, ecx */ r_edi = r_ecx;
    /* 0065893f: mov ecx, dword ptr [0xa8f800] */ r_ecx = R32((u32)(0xa8f800u));
    /* 00658945: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65894au); f_00829cc8();
    /* 0065894a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65894fu); f_0082d7b0();
    /* 0065894f: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00658952: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x658957u); f_0082d838();
    /* 00658957: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0065895a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065895c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x658961u); f_0082d8bc();
    /* 00658961: mov ecx, dword ptr [0xa8f7f4] */ r_ecx = R32((u32)(0xa8f7f4u));
    /* 00658967: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65896cu); f_00831758();
    /* 0065896c: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x658971u); f_0082dbac();
    /* 00658971: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00658976: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0065897b: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065897e: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00658983: mov edx, dword ptr [edi + 0x8c] */ r_edx = R32((u32)(r_edi+0x8cu));
    /* 00658989: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065898b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065898d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065898f: lea eax, [edx + edx + 0x9c7ce0] */ r_eax = (u32)(r_edx+r_edx+0x9c7ce0u);
    /* 00658996: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658997: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x65899cu); f_0082d710();
    /* 0065899c: mov eax, dword ptr [0xa8f7fc] */ r_eax = R32((u32)(0xa8f7fcu));
    /* 006589a1: movzx edi, word ptr [edi + 0x8c] */ r_edi = (u32)R16((u32)(r_edi+0x8cu));
    /* 006589a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006589a9: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006589ac: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x6589b1u); f_0081a588();
    /* 006589b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006589b4: mov ecx, dword ptr [0xa8f7fc] */ r_ecx = R32((u32)(0xa8f7fcu));
    /* 006589ba: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6589bfu); f_00831758();
    /* 006589bf: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006589c4: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6589c9u); f_0082d710();
    /* 006589c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006589ca: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 006589cf: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006589d4: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6589d9u); f_0082dab0();
    /* 006589d9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6589deu); f_0082da80();
    /* 006589de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006589df: ret  */ FN_RET(0x0065893c); r_esp += 4; return;
}

void f_006589e0(void) /* sub_6589E0 */
{
    FN_ENTER(0x006589e0);
    /* 006589e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006589e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006589e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006589e5: call 0x629a64 */ r_esp -= 4; W32(r_esp, 0x6589eau); f_00629a64();
    /* 006589ea: fld dword ptr [0x937c50] */ FPUSH(R_F32((u32)(0x937c50u)));
    /* 006589f0: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 006589f3: push dword ptr [ebp + 0x8c] */ { u32 v = R32((u32)(r_ebp+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006589f9: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 006589fc: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 006589ff: fstp dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0)); FPOP();
    /* 00658a02: push 0x937cc8 */ { u32 v = 0x937cc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a07: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 00658a0a: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a0f: mov dword ptr [ebp + 0x7c], edx */ W32((u32)(r_ebp+0x7cu), r_edx);
    /* 00658a12: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x658a17u); f_0061cdb0();
    /* 00658a17: mov ecx, dword ptr [ebp + 0x8c] */ r_ecx = R32((u32)(r_ebp+0x8cu));
    /* 00658a1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00658a1f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00658a21: mov edx, 9 */ r_edx = 0x9u;
    /* 00658a26: jg 0x658a2a */ if ((!fZ&&fS==fO)) goto L_00658a2a;
L_00658a28:; BB(0x00658a28);
    /* 00658a28: mov ecx, eax */ r_ecx = r_eax;
L_00658a2a:; BB(0x00658a2a);
    /* 00658a2a: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658a2d: jl 0x658a31 */ if ((fS!=fO)) goto L_00658a31;
L_00658a2f:; BB(0x00658a2f);
    /* 00658a2f: mov ecx, edx */ r_ecx = r_edx;
L_00658a31:; BB(0x00658a31);
    /* 00658a31: mov dword ptr [ebp + 0x8c], ecx */ W32((u32)(r_ebp+0x8cu), r_ecx);
    /* 00658a37: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00658a3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658a3b: ret  */ FN_RET(0x006589e0); r_esp += 4; return;
}

void f_00658a3c(void) /* sub_658A3C */
{
    FN_ENTER(0x00658a3c);
    /* 00658a3c: mov ecx, dword ptr [0xa8f7e4] */ r_ecx = R32((u32)(0xa8f7e4u));
    /* 00658a42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658a44: je 0x658a58 */ if (fZ) goto L_00658a58;
L_00658a46:; BB(0x00658a46);
    /* 00658a46: je 0x658a4e */ if (fZ) goto L_00658a4e;
L_00658a48:; BB(0x00658a48);
    /* 00658a48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a4a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00658a4c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x658a4eu); call_ind(t); }
L_00658a4e:; BB(0x00658a4e);
    /* 00658a4e: mov dword ptr [0xa8f7e4], 0 */ W32((u32)(0xa8f7e4u), 0x0u);
L_00658a58:; BB(0x00658a58);
    /* 00658a58: mov ecx, dword ptr [0xa8f7f0] */ r_ecx = R32((u32)(0xa8f7f0u));
    /* 00658a5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658a60: je 0x658a75 */ if (fZ) goto L_00658a75;
L_00658a62:; BB(0x00658a62);
    /* 00658a62: je 0x658a6b */ if (fZ) goto L_00658a6b;
L_00658a64:; BB(0x00658a64);
    /* 00658a64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a66: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x658a6bu); f_004066a8();
L_00658a6b:; BB(0x00658a6b);
    /* 00658a6b: mov dword ptr [0xa8f7f0], 0 */ W32((u32)(0xa8f7f0u), 0x0u);
L_00658a75:; BB(0x00658a75);
    /* 00658a75: push dword ptr [0xa8f800] */ { u32 v = R32((u32)(0xa8f800u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658a7b: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x658a80u); f_00800b5c();
    /* 00658a80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00658a82: mov dword ptr [0xa8f800], eax */ W32((u32)(0xa8f800u), r_eax);
    /* 00658a87: mov dword ptr [0xa8f7e8], eax */ W32((u32)(0xa8f7e8u), r_eax);
    /* 00658a8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658a8d: ret  */ FN_RET(0x00658a3c); r_esp += 4; return;
}

void f_00658a90(void)
{
    FN_ENTER(0x00658a90);
    /* 00658a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00658a93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00658a95: push 0x8e7094 */ { u32 v = 0x8e7094u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00658aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658aa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00658aa8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658aab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00658aae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00658ab1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00658ab4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00658ab7: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00658abc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00658ac3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x658ac8u); f_005caba4();
    /* 00658ac8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658ac9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00658acc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658ace: je 0x658b07 */ if (fZ) goto L_00658b07;
L_00658ad0:; BB(0x00658ad0);
    /* 00658ad0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00658ad7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00658ade: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658ae1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658ae7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658aea: call 0x658b0c */ r_esp -= 4; W32(r_esp, 0x658aefu); f_00658b0c();
    /* 00658aef: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658af2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00658af9:; BB(0x00658af9);
    /* 00658af9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658afc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00658b03: mov esp, ebp */ r_esp = r_ebp;
    /* 00658b05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658b06: ret  */ FN_RET(0x00658a90); r_esp += 4; return;
L_00658b07:; BB(0x00658b07);
    /* 00658b07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00658b09: jmp 0x658af9 */ goto L_00658af9;
}

void f_00658b0c(void) /* sub_658B0C */
{
    FN_ENTER(0x00658b0c);
    /* 00658b0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658b0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00658b0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00658b11: push 0x8e70b0 */ { u32 v = 0x8e70b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00658b16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00658b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658b1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00658b24: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658b27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00658b2a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00658b2d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00658b30: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00658b33: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00658b36: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658b39: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00658b3c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00658b3f: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x658b44u); f_0062998c();
    /* 00658b44: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00658b4b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658b4e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00658b51: mov dword ptr [ecx], 0xb32440 */ W32((u32)(r_ecx), 0xb32440u);
    /* 00658b57: mov eax, dword ptr [0x9c7da0] */ r_eax = R32((u32)(0x9c7da0u));
    /* 00658b5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658b5d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00658b60: call 0x629718 */ r_esp -= 4; W32(r_esp, 0x658b65u); f_00629718();
    /* 00658b65: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658b68: movzx ebx, word ptr [0xa8f7ec] */ r_ebx = (u32)R16((u32)(0xa8f7ecu));
    /* 00658b6f: mov dword ptr [ecx + 0xec], 0x14 */ W32((u32)(r_ecx+0xecu), 0x14u);
    /* 00658b79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00658b7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658b7d: push 0x9c7da4 */ { u32 v = 0x9c7da4u; r_esp -= 4; W32(r_esp, v); }
    /* 00658b82: mov dword ptr [ecx + 0xe8], eax */ W32((u32)(r_ecx+0xe8u), r_eax);
    /* 00658b88: mov dword ptr [ecx + 0xf0], eax */ W32((u32)(r_ecx+0xf0u), r_eax);
    /* 00658b8e: mov dword ptr [ecx + 0xf4], eax */ W32((u32)(r_ecx+0xf4u), r_eax);
    /* 00658b94: mov dword ptr [ecx + 0xf8], eax */ W32((u32)(r_ecx+0xf8u), r_eax);
    /* 00658b9a: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 00658ba0: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 00658ba3: mov word ptr [ecx + 0xa], bx */ W16((u32)(r_ecx+0xau), (u16)r_ebx);
    /* 00658ba7: mov word ptr [0xa8f7ec], dx */ W16((u32)(0xa8f7ecu), (u16)r_edx);
    /* 00658bae: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00658bb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00658bb2: mov edi, 9 */ r_edi = 0x9u;
    /* 00658bb7: jg 0x658bbb */ if ((!fZ&&fS==fO)) goto L_00658bbb;
L_00658bb9:; BB(0x00658bb9);
    /* 00658bb9: mov eax, esi */ r_eax = r_esi;
L_00658bbb:; BB(0x00658bbb);
    /* 00658bbb: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658bbe: jl 0x658bc2 */ if ((fS!=fO)) goto L_00658bc2;
L_00658bc0:; BB(0x00658bc0);
    /* 00658bc0: mov eax, edi */ r_eax = r_edi;
L_00658bc2:; BB(0x00658bc2);
    /* 00658bc2: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 00658bc8: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x658bcdu); f_007b9a88();
    /* 00658bcd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658bd0: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00658bd3: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00658bd8: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00658bdb: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x658be0u); f_007b4f54();
    /* 00658be0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658be3: fld dword ptr [0x937c4c] */ FPUSH(R_F32((u32)(0x937c4cu)));
    /* 00658be9: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 00658bec: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00658bee: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00658bf1: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00658bf4: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00658bf7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00658bfa: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00658bfd: fadd dword ptr [ebp - 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd4u));
    /* 00658c00: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00658c03: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00658c06: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00658c08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00658c09: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x658c0eu); f_0050981c();
    /* 00658c0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00658c11: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658c14: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658c17: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00658c1a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00658c1d: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 00658c23: mov eax, edx */ r_eax = r_edx;
    /* 00658c25: mov dword ptr [edx + 0x98], 3 */ W32((u32)(r_edx+0x98u), 0x3u);
    /* 00658c2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658c32: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00658c39: mov esp, ebp */ r_esp = r_ebp;
    /* 00658c3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658c3c: ret 8 */ FN_RET(0x00658b0c); r_esp += 12; return;
}

void f_00658c40(void) /* sub_658C40 */
{
    FN_ENTER(0x00658c40);
    /* 00658c40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00658c41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00658c42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658c43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00658c44: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00658c49: movzx edx, byte ptr [0xa8f7c4] */ r_edx = (u32)R8((u32)(0xa8f7c4u));
    /* 00658c50: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00658c53: jne 0x658c85 */ if (!fZ) goto L_00658c85;
L_00658c55:; BB(0x00658c55);
    /* 00658c55: mov ecx, dword ptr [0xaca350] */ r_ecx = R32((u32)(0xaca350u));
    /* 00658c5b: mov ebx, dword ptr [0xaca354] */ r_ebx = R32((u32)(0xaca354u));
    /* 00658c61: mov dword ptr [0xa8f7c8], ecx */ W32((u32)(0xa8f7c8u), r_ecx);
    /* 00658c67: mov ecx, dword ptr [0xaca34c] */ r_ecx = R32((u32)(0xaca34cu));
    /* 00658c6d: mov dword ptr [0xa8f7cc], ebx */ W32((u32)(0xa8f7ccu), r_ebx);
    /* 00658c73: mov dword ptr [0xa8f7d0], ecx */ W32((u32)(0xa8f7d0u), r_ecx);
    /* 00658c79: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00658c7f: mov byte ptr [0xa8f7c4], dl */ W8((u32)(0xa8f7c4u), (u8)r_edx);
L_00658c85:; BB(0x00658c85);
    /* 00658c85: mov ebx, 0xa8f7c8 */ r_ebx = 0xa8f7c8u;
    /* 00658c8a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00658c8c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658c8e: je 0x658cc9 */ if (fZ) goto L_00658cc9;
L_00658c90:; BB(0x00658c90);
    /* 00658c90: mov ecx, dword ptr [0x9c7da0] */ r_ecx = R32((u32)(0x9c7da0u));
L_00658c96:; BB(0x00658c96);
    /* 00658c96: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 00658c99: mov ebp, esi */ r_ebp = r_esi;
    /* 00658c9b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658c9d: je 0x658cb9 */ if (fZ) goto L_00658cb9;
L_00658c9f:; BB(0x00658c9f);
    /* 00658c9f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658ca1: je 0x658cb9 */ if (fZ) goto L_00658cb9;
L_00658ca3:; BB(0x00658ca3);
    /* 00658ca3: mov edx, ebp */ r_edx = r_ebp;
    /* 00658ca5: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 00658ca8: cmp ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658cab: jne 0x658cb5 */ if (!fZ) goto L_00658cb5;
L_00658cad:; BB(0x00658cad);
    /* 00658cad: movzx edi, word ptr [edx + 0xa] */ r_edi = (u32)R16((u32)(r_edx+0xau));
    /* 00658cb1: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658cb3: je 0x658cbb */ if (fZ) goto L_00658cbb;
L_00658cb5:; BB(0x00658cb5);
    /* 00658cb5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658cb7: jne 0x658c9f */ if (!fZ) goto L_00658c9f;
L_00658cb9:; BB(0x00658cb9);
    /* 00658cb9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00658cbb:; BB(0x00658cbb);
    /* 00658cbb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658cbd: jne 0x658ccb */ if (!fZ) goto L_00658ccb;
L_00658cbf:; BB(0x00658cbf);
    /* 00658cbf: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00658cc2: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00658cc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658cc7: jne 0x658c96 */ if (!fZ) goto L_00658c96;
L_00658cc9:; BB(0x00658cc9);
    /* 00658cc9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00658ccb:; BB(0x00658ccb);
    /* 00658ccb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00658ccd: je 0x658cd9 */ if (fZ) goto L_00658cd9;
L_00658ccf:; BB(0x00658ccf);
    /* 00658ccf: mov dword ptr [edx + 0xe8], 1 */ W32((u32)(r_edx+0xe8u), 0x1u);
L_00658cd9:; BB(0x00658cd9);
    /* 00658cd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00658cda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658cdb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00658cdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00658cdd: ret  */ FN_RET(0x00658c40); r_esp += 4; return;
}

void f_00658ce0(void) /* sub_658CE0 */
{
    FN_ENTER(0x00658ce0);
    /* 00658ce0: mov dword ptr [0xa8f7d8], 0x3f800000 */ W32((u32)(0xa8f7d8u), 0x3f800000u);
    /* 00658cea: mov dword ptr [0xa8f7dc], 0x41000000 */ W32((u32)(0xa8f7dcu), 0x41000000u);
    /* 00658cf4: mov dword ptr [0xa8f7e0], 0x3fc00000 */ W32((u32)(0xa8f7e0u), 0x3fc00000u);
    /* 00658cfe: ret  */ FN_RET(0x00658ce0); r_esp += 4; return;
}

void f_00658d00(void) /* sub_658D00 */
{
    FN_ENTER(0x00658d00);
    /* 00658d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00658d03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00658d05: push 0x8e70d8 */ { u32 v = 0x8e70d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00658d0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00658d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658d11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00658d18: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658d1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00658d1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00658d21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00658d24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00658d27: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00658d2c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00658d33: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x658d38u); f_008581c5();
    /* 00658d38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658d39: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00658d3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658d3e: je 0x658df9 */ if (fZ) goto L_00658df9;
L_00658d44:; BB(0x00658d44);
    /* 00658d44: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00658d4b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00658d52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658d55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00658d57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658d58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658d59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658d5a: push 0x9c7d90 */ { u32 v = 0x9c7d90u; r_esp -= 4; W32(r_esp, v); }
    /* 00658d5f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00658d61: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x658d66u); f_005b7a84();
    /* 00658d66: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658d69: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00658d70:; BB(0x00658d70);
    /* 00658d70: mov dword ptr [0xa8f7f0], eax */ W32((u32)(0xa8f7f0u), r_eax);
    /* 00658d75: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00658d7c: push 0x937cd8 */ { u32 v = 0x937cd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00658d81: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x658d86u); f_008009dc();
    /* 00658d86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658d87: mov ecx, dword ptr [0xa8f7f0] */ r_ecx = R32((u32)(0xa8f7f0u));
    /* 00658d8d: mov dword ptr [0xa8f800], eax */ W32((u32)(0xa8f800u), r_eax);
    /* 00658d92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658d94: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x658d99u); f_005b8610();
    /* 00658d99: mov ecx, dword ptr [0xa8f7f0] */ r_ecx = R32((u32)(0xa8f7f0u));
    /* 00658d9f: mov dword ptr [0xa8f7f4], eax */ W32((u32)(0xa8f7f4u), r_eax);
    /* 00658da4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00658da6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x658dabu); f_005b8610();
    /* 00658dab: mov ecx, dword ptr [0xa8f7f0] */ r_ecx = R32((u32)(0xa8f7f0u));
    /* 00658db1: mov dword ptr [0xa8f7f8], eax */ W32((u32)(0xa8f7f8u), r_eax);
    /* 00658db6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00658db8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x658dbdu); f_005b8610();
    /* 00658dbd: mov dword ptr [0xa8f7fc], eax */ W32((u32)(0xa8f7fcu), r_eax);
    /* 00658dc2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00658dc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00658dc6: push dword ptr [0xa8f7f8] */ { u32 v = R32((u32)(0xa8f7f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658dcc: mov word ptr [0xa8f7ec], ax */ W16((u32)(0xa8f7ecu), (u16)r_eax);
    /* 00658dd2: mov dword ptr [0xa8f7e8], eax */ W32((u32)(0xa8f7e8u), r_eax);
    /* 00658dd7: mov dword ptr [0xa8f7e4], eax */ W32((u32)(0xa8f7e4u), r_eax);
    /* 00658ddc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658dde: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x658de3u); f_0066f3d4();
    /* 00658de3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00658de6: mov dword ptr [0xa8f7e4], eax */ W32((u32)(0xa8f7e4u), r_eax);
    /* 00658deb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658dee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00658df5: mov esp, ebp */ r_esp = r_ebp;
    /* 00658df7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658df8: ret  */ FN_RET(0x00658d00); r_esp += 4; return;
L_00658df9:; BB(0x00658df9);
    /* 00658df9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00658dfb: jmp 0x658d70 */ goto L_00658d70;
}

void f_00658daf(void)
{
    FN_ENTER(0x00658daf);
    /* 00658daf: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 00658db1: mov dword ptr [0xa8f7f8], eax */ W32((u32)(0xa8f7f8u), r_eax);
    /* 00658db6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00658db8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x658dbdu); f_005b8610();
    /* 00658dbd: mov dword ptr [0xa8f7fc], eax */ W32((u32)(0xa8f7fcu), r_eax);
    /* 00658dc2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00658dc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00658dc6: push dword ptr [0xa8f7f8] */ { u32 v = R32((u32)(0xa8f7f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658dcc: mov word ptr [0xa8f7ec], ax */ W16((u32)(0xa8f7ecu), (u16)r_eax);
    /* 00658dd2: mov dword ptr [0xa8f7e8], eax */ W32((u32)(0xa8f7e8u), r_eax);
    /* 00658dd7: mov dword ptr [0xa8f7e4], eax */ W32((u32)(0xa8f7e4u), r_eax);
    /* 00658ddc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658dde: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x658de3u); f_0066f3d4();
    /* 00658de3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00658de6: mov dword ptr [0xa8f7e4], eax */ W32((u32)(0xa8f7e4u), r_eax);
    /* 00658deb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658dee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00658df5: mov esp, ebp */ r_esp = r_ebp;
    /* 00658df7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658df8: ret  */ FN_RET(0x00658daf); r_esp += 4; return;
}

void f_00658e00(void) /* sub_658E00 */
{
    FN_ENTER(0x00658e00);
    /* 00658e00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00658e01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00658e03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00658e05: call 0x658e24 */ r_esp -= 4; W32(r_esp, 0x658e0au); f_00658e24();
    /* 00658e0a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00658e0e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00658e10: jne 0x658e16 */ if (!fZ) goto L_00658e16;
L_00658e12:; BB(0x00658e12);
    /* 00658e12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00658e13: ret 4 */ FN_RET(0x00658e00); r_esp += 8; return;
L_00658e16:; BB(0x00658e16);
    /* 00658e16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00658e17: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x658e1cu); f_005c2f74();
    /* 00658e1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658e1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00658e1e: ret 4 */ FN_RET(0x00658e00); r_esp += 8; return;
}

void f_00658e24(void) /* sub_658E24 */
{
    FN_ENTER(0x00658e24);
    /* 00658e24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658e25: mov ebp, esp */ r_ebp = r_esp;
    /* 00658e27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00658e29: push 0x8e70f4 */ { u32 v = 0x8e70f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00658e2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00658e34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658e35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00658e3c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658e3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00658e42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00658e45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00658e48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00658e4b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00658e4e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00658e55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658e58: mov dword ptr [eax], 0xb32560 */ W32((u32)(r_eax), 0xb32560u);
    /* 00658e5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658e5f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x658e64u); f_007b4e84();
    /* 00658e64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658e65: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658e68: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x658e6du); f_007b9c8c();
    /* 00658e6d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00658e74: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658e77: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x658e7cu); f_006296c8();
    /* 00658e7c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658e7f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00658e86: mov esp, ebp */ r_esp = r_ebp;
    /* 00658e88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658e89: ret  */ FN_RET(0x00658e24); r_esp += 4; return;
}

void f_00658e8c(void) /* sub_658E8C */
{
    FN_ENTER(0x00658e8c);
    /* 00658e8c: mov ecx, dword ptr [0xa8f80c] */ r_ecx = R32((u32)(0xa8f80cu));
    /* 00658e92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00658e94: je 0x658ea9 */ if (fZ) goto L_00658ea9;
L_00658e96:; BB(0x00658e96);
    /* 00658e96: je 0x658e9f */ if (fZ) goto L_00658e9f;
L_00658e98:; BB(0x00658e98);
    /* 00658e98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658e9a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x658e9fu); f_004066a8();
L_00658e9f:; BB(0x00658e9f);
    /* 00658e9f: mov dword ptr [0xa8f80c], 0 */ W32((u32)(0xa8f80cu), 0x0u);
L_00658ea9:; BB(0x00658ea9);
    /* 00658ea9: ret  */ FN_RET(0x00658e8c); r_esp += 4; return;
}

void f_00658eac(void)
{
    FN_ENTER(0x00658eac);
    /* 00658eac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658ead: mov ebp, esp */ r_ebp = r_esp;
    /* 00658eaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00658eb1: push 0x8e711c */ { u32 v = 0x8e711cu; r_esp -= 4; W32(r_esp, v); }
    /* 00658eb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00658ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658ebd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00658ec4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658ec7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00658eca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00658ecd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00658ed0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00658ed3: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00658ed8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00658edf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x658ee4u); f_005caba4();
    /* 00658ee4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658ee5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00658ee8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658eea: je 0x658f23 */ if (fZ) goto L_00658f23;
L_00658eec:; BB(0x00658eec);
    /* 00658eec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00658ef3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00658efa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658efd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658f03: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658f06: call 0x658f28 */ r_esp -= 4; W32(r_esp, 0x658f0bu); f_00658f28();
    /* 00658f0b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00658f0e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00658f15:; BB(0x00658f15);
    /* 00658f15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658f18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00658f1f: mov esp, ebp */ r_esp = r_ebp;
    /* 00658f21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658f22: ret  */ FN_RET(0x00658eac); r_esp += 4; return;
L_00658f23:; BB(0x00658f23);
    /* 00658f23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00658f25: jmp 0x658f15 */ goto L_00658f15;
}

void f_00658f28(void) /* sub_658F28 */
{
    FN_ENTER(0x00658f28);
    /* 00658f28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658f29: mov ebp, esp */ r_ebp = r_esp;
    /* 00658f2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00658f2d: push 0x8e7138 */ { u32 v = 0x8e7138u; r_esp -= 4; W32(r_esp, v); }
    /* 00658f32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00658f38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658f39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00658f40: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658f43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00658f46: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00658f49: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00658f4c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00658f4f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00658f52: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00658f55: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00658f58: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00658f5b: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x658f60u); f_0062998c();
    /* 00658f60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00658f67: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658f6a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00658f6d: mov dword ptr [ecx], 0xb32560 */ W32((u32)(r_ecx), 0xb32560u);
    /* 00658f73: mov eax, dword ptr [0x9c7e08] */ r_eax = R32((u32)(0x9c7e08u));
    /* 00658f78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658f79: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00658f7c: call dword ptr [0xb32574] */ { u32 t = R32((u32)(0xb32574u)); r_esp -= 4; W32(r_esp, 0x658f82u); call_ind(t); }
    /* 00658f82: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658f85: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x658f8au); f_0062974c();
    /* 00658f8a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658f8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658f8f: push 0x9c7e0c */ { u32 v = 0x9c7e0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00658f94: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x658f99u); f_007b9a88();
    /* 00658f99: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00658f9c: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x658fa1u); f_007b999c();
    /* 00658fa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00658fa2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658fa5: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x658faau); f_007b4f54();
    /* 00658faa: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658fad: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 00658fb3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00658fb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00658fb7: mov dword ptr [ebx + 0xd0], 0 */ W32((u32)(r_ebx+0xd0u), 0x0u);
    /* 00658fc1: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00658fc6: jg 0x658fca */ if ((!fZ&&fS==fO)) goto L_00658fca;
L_00658fc8:; BB(0x00658fc8);
    /* 00658fc8: mov eax, edx */ r_eax = r_edx;
L_00658fca:; BB(0x00658fca);
    /* 00658fca: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00658fcd: jl 0x658fd1 */ if ((fS!=fO)) goto L_00658fd1;
L_00658fcf:; BB(0x00658fcf);
    /* 00658fcf: mov eax, ecx */ r_eax = r_ecx;
L_00658fd1:; BB(0x00658fd1);
    /* 00658fd1: mov dword ptr [ebx + 0xc8], eax */ W32((u32)(r_ebx+0xc8u), r_eax);
    /* 00658fd7: mov dword ptr [ebx + 0xe8], 0 */ W32((u32)(r_ebx+0xe8u), 0x0u);
    /* 00658fe1: mov eax, ebx */ r_eax = r_ebx;
    /* 00658fe3: mov dword ptr [ebx + 0xec], 0 */ W32((u32)(r_ebx+0xecu), 0x0u);
    /* 00658fed: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00658ff0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658ff3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00658ffa: mov esp, ebp */ r_esp = r_ebp;
    /* 00658ffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658ffd: ret 8 */ FN_RET(0x00658f28); r_esp += 12; return;
}

