#include "protos.h"

void f_008060d8(void) /* sub_8060D8 */
{
    FN_ENTER(0x008060d8);
    /* 008060d8: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 008060dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008060df: je 0x8060e8 */ if (fZ) goto L_008060e8;
L_008060e1:; BB(0x008060e1);
    /* 008060e1: mov dword ptr [eax + 4], 0x8f */ W32((u32)(r_eax+0x4u), 0x8fu);
L_008060e8:; BB(0x008060e8);
    /* 008060e8: ret  */ FN_RET(0x008060d8); r_esp += 4; return;
}

void f_008060ec(void) /* sub_8060EC */
{
    FN_ENTER(0x008060ec);
    /* 008060ec: mov eax, dword ptr [0xaafc8c] */ r_eax = R32((u32)(0xaafc8cu));
    /* 008060f1: call dword ptr [eax*4 + 0xa11470] */ { u32 t = R32((u32)(r_eax*4+0xa11470u)); r_esp -= 4; W32(r_esp, 0x8060f8u); call_ind(t); }
    /* 008060f8: ret  */ FN_RET(0x008060ec); r_esp += 4; return;
}

void f_008060fc(void) /* sub_8060FC */
{
    FN_ENTER(0x008060fc);
    /* 008060fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008060fd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00806100: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00806102: movsx eax, byte ptr [0xaafc88] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaafc88u));
    /* 00806109: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080610b: je 0x80617c */ if (fZ) goto L_0080617c;
L_0080610d:; BB(0x0080610d);
    /* 0080610d: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 00806113: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806115: je 0x80617c */ if (fZ) goto L_0080617c;
L_00806117:; BB(0x00806117);
    /* 00806117: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0080611c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080611e: jne 0x806175 */ if (!fZ) goto L_00806175;
L_00806120:; BB(0x00806120);
    /* 00806120: movsx eax, word ptr [ecx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 00806124: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00806126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00806128: jle 0x806165 */ if ((fZ||fS!=fO)) goto L_00806165;
L_0080612a:; BB(0x0080612a);
    /* 0080612a: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0080612d: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00806131: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00806134: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00806136: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00806138: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 0080613b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080613d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0080613f:; BB(0x0080613f);
    /* 0080613f: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 00806142: mov esi, dword ptr [eax + edi + 0x30] */ r_esi = R32((u32)(r_eax+r_edi+0x30u));
    /* 00806146: and esi, 0xfffeffff */ {  u32 a = r_esi; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0080614c: mov dword ptr [eax + edi + 0x30], esi */ W32((u32)(r_eax+r_edi+0x30u), r_esi);
    /* 00806150: movsx esi, word ptr [ecx + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 00806154: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00806157: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080615a: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080615c: jl 0x80613f */ if ((fS!=fO)) goto L_0080613f;
L_0080615e:; BB(0x0080615e);
    /* 0080615e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00806161: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00806165:; BB(0x00806165);
    /* 00806165: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00806167: call 0x806184 */ r_esp -= 4; W32(r_esp, 0x80616cu); f_00806184();
    /* 0080616c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0080616e: call dword ptr [eax*4 + 0xa11478] */ { u32 t = R32((u32)(r_eax*4+0xa11478u)); r_esp -= 4; W32(r_esp, 0x806175u); call_ind(t); }
L_00806175:; BB(0x00806175);
    /* 00806175: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00806177: call 0x8061e0 */ r_esp -= 4; W32(r_esp, 0x80617cu); f_008061e0();
L_0080617c:; BB(0x0080617c);
    /* 0080617c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080617f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00806180: ret  */ FN_RET(0x008060fc); r_esp += 4; return;
}

void f_00806184(void) /* sub_806184 */
{
    FN_ENTER(0x00806184);
    /* 00806184: mov eax, dword ptr [0xaafc4c] */ r_eax = R32((u32)(0xaafc4cu));
    /* 00806189: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080618b: je 0x806193 */ if (fZ) goto L_00806193;
L_0080618d:; BB(0x0080618d);
    /* 0080618d: mov eax, 2 */ r_eax = 0x2u;
    /* 00806192: ret  */ FN_RET(0x00806184); r_esp += 4; return;
L_00806193:; BB(0x00806193);
    /* 00806193: mov eax, dword ptr [0xaafc80] */ r_eax = R32((u32)(0xaafc80u));
    /* 00806198: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080619b: je 0x8061d9 */ if (fZ) goto L_008061d9;
L_0080619d:; BB(0x0080619d);
    /* 0080619d: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x8061a2u); f_007a61a4();
    /* 008061a2: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008061a5: jl 0x8061d6 */ if ((fS!=fO)) goto L_008061d6;
L_008061a7:; BB(0x008061a7);
    /* 008061a7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008061aa: jg 0x8061d6 */ if ((!fZ&&fS==fO)) goto L_008061d6;
L_008061ac:; BB(0x008061ac);
    /* 008061ac: mov eax, dword ptr [0xaafc9c] */ r_eax = R32((u32)(0xaafc9cu));
    /* 008061b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008061b3: jle 0x8061d6 */ if ((fZ||fS!=fO)) goto L_008061d6;
L_008061b5:; BB(0x008061b5);
    /* 008061b5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008061b8: jle 0x8061d0 */ if ((fZ||fS!=fO)) goto L_008061d0;
L_008061ba:; BB(0x008061ba);
    /* 008061ba: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008061bd: jne 0x8061c5 */ if (!fZ) goto L_008061c5;
L_008061bf:; BB(0x008061bf);
    /* 008061bf: mov eax, 4 */ r_eax = 0x4u;
    /* 008061c4: ret  */ FN_RET(0x00806184); r_esp += 4; return;
L_008061c5:; BB(0x008061c5);
    /* 008061c5: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008061c8: jne 0x8061d6 */ if (!fZ) goto L_008061d6;
L_008061ca:; BB(0x008061ca);
    /* 008061ca: mov eax, 4 */ r_eax = 0x4u;
    /* 008061cf: ret  */ FN_RET(0x00806184); r_esp += 4; return;
L_008061d0:; BB(0x008061d0);
    /* 008061d0: mov eax, 1 */ r_eax = 0x1u;
    /* 008061d5: ret  */ FN_RET(0x00806184); r_esp += 4; return;
L_008061d6:; BB(0x008061d6);
    /* 008061d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008061d8: ret  */ FN_RET(0x00806184); r_esp += 4; return;
L_008061d9:; BB(0x008061d9);
    /* 008061d9: mov eax, 3 */ r_eax = 0x3u;
    /* 008061de: ret  */ FN_RET(0x00806184); r_esp += 4; return;
}

void f_008061e0(void) /* sub_8061E0 */
{
    FN_ENTER(0x008061e0);
    /* 008061e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008061e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008061e2: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008061e8: mov edi, ecx */ r_edi = r_ecx;
    /* 008061ea: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 008061ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008061f1: jne 0x8061fc */ if (!fZ) goto L_008061fc;
L_008061f3:; BB(0x008061f3);
    /* 008061f3: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008061f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008061fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008061fb: ret  */ FN_RET(0x008061e0); r_esp += 4; return;
L_008061fc:; BB(0x008061fc);
    /* 008061fc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x806201u); f_0061cdb0();
    /* 00806201: mov eax, dword ptr [0xaafc34] */ r_eax = R32((u32)(0xaafc34u));
    /* 00806206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806208: je 0x80620c */ if (fZ) goto L_0080620c;
L_0080620a:; BB(0x0080620a);
    /* 0080620a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x80620cu); call_ind(t); }
L_0080620c:; BB(0x0080620c);
    /* 0080620c: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00806211: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00806214: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806216: je 0x806222 */ if (fZ) goto L_00806222;
L_00806218:; BB(0x00806218);
    /* 00806218: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x80621du); f_00829cc8();
    /* 0080621d: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
L_00806222:; BB(0x00806222);
    /* 00806222: mov ebp, dword ptr [eax + 0x10] */ r_ebp = R32((u32)(r_eax+0x10u));
    /* 00806225: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x80622au); f_00835068();
    /* 0080622a: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0080622f: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00806235: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0080623a: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 0080623e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806240: je 0x806b02 */ if (fZ) goto L_00806b02;
L_00806246:; BB(0x00806246);
    /* 00806246: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00806249: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0080624d: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00806251: lea ecx, [ebp + 0x10] */ r_ecx = (u32)(r_ebp+0x10u);
    /* 00806254: mov esi, ebp */ r_esi = r_ebp;
    /* 00806256: mov ebp, eax */ r_ebp = r_eax;
    /* 00806258: mov ebx, ecx */ r_ebx = r_ecx;
L_0080625a:; BB(0x0080625a);
    /* 0080625a: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0080625d: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806263: je 0x806ae9 */ if (fZ) goto L_00806ae9;
L_00806269:; BB(0x00806269);
    /* 00806269: test edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080626f: jne 0x8066b7 */ if (!fZ) goto L_008066b7;
L_00806275:; BB(0x00806275);
    /* 00806275: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080627b: je 0x8064a2 */ if (fZ) goto L_008064a2;
L_00806281:; BB(0x00806281);
    /* 00806281: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x806286u); f_0082d7b0();
    /* 00806286: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 00806289: mov ecx, edi */ r_ecx = r_edi;
    /* 0080628b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x806290u); f_0082d838();
    /* 00806290: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00806292: mov edx, 1 */ r_edx = 0x1u;
    /* 00806297: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x80629cu); f_00830df8();
    /* 0080629c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0080629e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080629f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008062a3: call 0x806b80 */ r_esp -= 4; W32(r_esp, 0x8062a8u); f_00806b80();
    /* 008062a8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x8062adu); f_006dc358();
    /* 008062ad: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 008062b0: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 008062b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008062b5: je 0x806498 */ if (fZ) goto L_00806498;
L_008062bb:; BB(0x008062bb);
    /* 008062bb: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 008062bf: mov edi, eax */ r_edi = r_eax;
    /* 008062c1: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008062c5: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008062c9: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 008062cd: mov ebx, edx */ r_ebx = r_edx;
L_008062cf:; BB(0x008062cf);
    /* 008062cf: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 008062d2: test esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008062d8: je 0x806480 */ if (fZ) goto L_00806480;
L_008062de:; BB(0x008062de);
    /* 008062de: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008062e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008062e2: je 0x806480 */ if (fZ) goto L_00806480;
L_008062e8:; BB(0x008062e8);
    /* 008062e8: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 008062eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008062ed: je 0x806480 */ if (fZ) goto L_00806480;
L_008062f3:; BB(0x008062f3);
    /* 008062f3: mov ecx, dword ptr [0xaafc80] */ r_ecx = R32((u32)(0xaafc80u));
    /* 008062f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008062fb: mov eax, 0 */ r_eax = 0x0u;
    /* 00806300: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00806303: test esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806309: mov edx, 0 */ r_edx = 0x0u;
    /* 0080630e: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00806311: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806313: je 0x806480 */ if (fZ) goto L_00806480;
L_00806319:; BB(0x00806319);
    /* 00806319: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080631f: je 0x806329 */ if (fZ) goto L_00806329;
L_00806321:; BB(0x00806321);
    /* 00806321: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x806326u); f_0082dbac();
    /* 00806326: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
L_00806329:; BB(0x00806329);
    /* 00806329: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080632f: je 0x806349 */ if (fZ) goto L_00806349;
L_00806331:; BB(0x00806331);
    /* 00806331: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 00806334: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806336: je 0x806349 */ if (fZ) goto L_00806349;
L_00806338:; BB(0x00806338);
    /* 00806338: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0080633b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080633d: je 0x806349 */ if (fZ) goto L_00806349;
L_0080633f:; BB(0x0080633f);
    /* 0080633f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00806341: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00806343: call dword ptr [ebp + 0xc] */ { u32 t = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, 0x806346u); call_ind(t); }
    /* 00806346: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
L_00806349:; BB(0x00806349);
    /* 00806349: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 0080634b: test esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806351: je 0x806356 */ if (fZ) goto L_00806356;
L_00806353:; BB(0x00806353);
    /* 00806353: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_00806356:; BB(0x00806356);
    /* 00806356: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080635c: jne 0x806b27 */ if (!fZ) goto L_00806b27;
L_00806362:; BB(0x00806362);
    /* 00806362: mov esi, dword ptr [0xaafc3c] */ r_esi = R32((u32)(0xaafc3cu));
    /* 00806368: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080636a: je 0x8063c6 */ if (fZ) goto L_008063c6;
L_0080636c:; BB(0x0080636c);
    /* 0080636c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00806370: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 00806374: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00806377: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 0080637b: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0080637e: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00806382: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 00806385: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 00806389: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x80638eu); f_0082ebac();
    /* 0080638e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00806392: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 00806395: add esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00806398: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 0080639c: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 0080639f: add esi, dword ptr [ebp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008063a2: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 008063a6: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 008063a9: add esi, dword ptr [ebp + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008063ac: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 008063b0: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 008063b4: lea esi, [esp + 0x44] */ r_esi = (u32)(r_esp+0x44u);
    /* 008063b8: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008063bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008063bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008063bd: call dword ptr [0xaafc3c] */ { u32 t = R32((u32)(0xaafc3cu)); r_esp -= 4; W32(r_esp, 0x8063c3u); call_ind(t); }
    /* 008063c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008063c6:; BB(0x008063c6);
    /* 008063c6: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 008063c9: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008063ce: je 0x80641d */ if (fZ) goto L_0080641d;
L_008063d0:; BB(0x008063d0);
    /* 008063d0: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 008063d2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008063d4: je 0x806445 */ if (fZ) goto L_00806445;
L_008063d6:; BB(0x008063d6);
    /* 008063d6: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 008063d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008063db: je 0x806445 */ if (fZ) goto L_00806445;
L_008063dd:; BB(0x008063dd);
    /* 008063dd: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 008063e2: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 008063e5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x8063eau); f_00829cc8();
    /* 008063ea: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008063ed: movzx eax, byte ptr [esi + 0xe] */ r_eax = (u32)R8((u32)(r_esi+0xeu));
    /* 008063f1: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008063f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008063f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008063f8: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008063fb: call 0x504c04 */ r_esp -= 4; W32(r_esp, 0x806400u); f_00504c04();
    /* 00806400: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806403: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00806406: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00806408: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x80640du); f_00835574();
    /* 0080640d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080640f: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00806413: call 0x504c78 */ r_esp -= 4; W32(r_esp, 0x806418u); f_00504c78();
    /* 00806418: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0080641b: jmp 0x806445 */ goto L_00806445;
L_0080641d:; BB(0x0080641d);
    /* 0080641d: call 0x482a28 */ r_esp -= 4; W32(r_esp, 0x806422u); f_00482a28();
    /* 00806422: movzx esi, ax */ r_esi = (u32)(u16)r_eax;
    /* 00806425: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806427: jne 0x806435 */ if (!fZ) goto L_00806435;
L_00806429:; BB(0x00806429);
    /* 00806429: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0080642b: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x806430u); f_00835090();
    /* 00806430: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806433: jmp 0x806445 */ goto L_00806445;
L_00806435:; BB(0x00806435);
    /* 00806435: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806438: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0080643b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0080643d: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x806442u); f_00835574();
    /* 00806442: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_00806445:; BB(0x00806445);
    /* 00806445: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806447: jne 0x806b1a */ if (!fZ) goto L_00806b1a;
L_0080644d:; BB(0x0080644d);
    /* 0080644d: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080644f: je 0x806467 */ if (fZ) goto L_00806467;
L_00806451:; BB(0x00806451);
    /* 00806451: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 00806454: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806456: je 0x806467 */ if (fZ) goto L_00806467;
L_00806458:; BB(0x00806458);
    /* 00806458: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0080645b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080645d: je 0x806467 */ if (fZ) goto L_00806467;
L_0080645f:; BB(0x0080645f);
    /* 0080645f: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00806461: call dword ptr [ebp + 0x10] */ { u32 t = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, 0x806464u); call_ind(t); }
    /* 00806464: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_00806467:; BB(0x00806467);
    /* 00806467: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806469: je 0x806470 */ if (fZ) goto L_00806470;
L_0080646b:; BB(0x0080646b);
    /* 0080646b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x806470u); f_0082dab0();
L_00806470:; BB(0x00806470);
    /* 00806470: mov ecx, dword ptr [0xaafc38] */ r_ecx = R32((u32)(0xaafc38u));
    /* 00806476: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806478: je 0x806480 */ if (fZ) goto L_00806480;
L_0080647a:; BB(0x0080647a);
    /* 0080647a: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080647d: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x80647fu); call_ind(t); }
    /* 0080647f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00806480:; BB(0x00806480);
    /* 00806480: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00806483: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00806486: jne 0x8062cf */ if (!fZ) goto L_008062cf;
L_0080648c:; BB(0x0080648c);
    /* 0080648c: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00806490: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00806494: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_00806498:; BB(0x00806498);
    /* 00806498: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x80649du); f_0082da80();
    /* 0080649d: jmp 0x806ae9 */ goto L_00806ae9;
L_008064a2:; BB(0x008064a2);
    /* 008064a2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8064a7u); f_0082d7b0();
    /* 008064a7: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 008064aa: mov ecx, edi */ r_ecx = r_edi;
    /* 008064ac: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x8064b1u); f_0082d838();
    /* 008064b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008064b3: mov edx, 1 */ r_edx = 0x1u;
    /* 008064b8: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x8064bdu); f_00830df8();
    /* 008064bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008064bf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008064c0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008064c4: call 0x806b80 */ r_esp -= 4; W32(r_esp, 0x8064c9u); f_00806b80();
    /* 008064c9: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x8064ceu); f_006dc358();
    /* 008064ce: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 008064d1: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 008064d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008064d6: je 0x8066ad */ if (fZ) goto L_008066ad;
L_008064dc:; BB(0x008064dc);
    /* 008064dc: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 008064e0: mov edi, eax */ r_edi = r_eax;
    /* 008064e2: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008064e6: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008064ea: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 008064ee: mov ebx, edx */ r_ebx = r_edx;
L_008064f0:; BB(0x008064f0);
    /* 008064f0: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008064f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008064f4: je 0x806695 */ if (fZ) goto L_00806695;
L_008064fa:; BB(0x008064fa);
    /* 008064fa: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 008064fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008064ff: je 0x806695 */ if (fZ) goto L_00806695;
L_00806505:; BB(0x00806505);
    /* 00806505: mov ecx, dword ptr [0xaafc80] */ r_ecx = R32((u32)(0xaafc80u));
    /* 0080650b: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 0080650e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806510: mov eax, 0 */ r_eax = 0x0u;
    /* 00806515: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00806518: test esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080651e: mov edx, 0 */ r_edx = 0x0u;
    /* 00806523: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00806526: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806528: je 0x806695 */ if (fZ) goto L_00806695;
L_0080652e:; BB(0x0080652e);
    /* 0080652e: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806534: je 0x80653e */ if (fZ) goto L_0080653e;
L_00806536:; BB(0x00806536);
    /* 00806536: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x80653bu); f_0082dbac();
    /* 0080653b: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
L_0080653e:; BB(0x0080653e);
    /* 0080653e: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806544: je 0x80655e */ if (fZ) goto L_0080655e;
L_00806546:; BB(0x00806546);
    /* 00806546: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 00806549: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080654b: je 0x80655e */ if (fZ) goto L_0080655e;
L_0080654d:; BB(0x0080654d);
    /* 0080654d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00806550: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806552: je 0x80655e */ if (fZ) goto L_0080655e;
L_00806554:; BB(0x00806554);
    /* 00806554: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00806556: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00806558: call dword ptr [ebp + 0xc] */ { u32 t = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, 0x80655bu); call_ind(t); }
    /* 0080655b: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
L_0080655e:; BB(0x0080655e);
    /* 0080655e: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 00806560: test esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806566: je 0x80656b */ if (fZ) goto L_0080656b;
L_00806568:; BB(0x00806568);
    /* 00806568: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_0080656b:; BB(0x0080656b);
    /* 0080656b: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806571: jne 0x806b3e */ if (!fZ) goto L_00806b3e;
L_00806577:; BB(0x00806577);
    /* 00806577: mov esi, dword ptr [0xaafc3c] */ r_esi = R32((u32)(0xaafc3cu));
    /* 0080657d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080657f: je 0x8065db */ if (fZ) goto L_008065db;
L_00806581:; BB(0x00806581);
    /* 00806581: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00806585: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00806589: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0080658c: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00806590: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00806593: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00806597: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0080659a: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0080659e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x8065a3u); f_0082ebac();
    /* 008065a3: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008065a7: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 008065aa: add esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008065ad: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 008065b1: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 008065b4: add esi, dword ptr [ebp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008065b7: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 008065bb: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 008065be: add esi, dword ptr [ebp + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008065c1: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 008065c5: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 008065c9: lea esi, [esp + 0x2c] */ r_esi = (u32)(r_esp+0x2cu);
    /* 008065cd: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008065d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008065d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008065d2: call dword ptr [0xaafc3c] */ { u32 t = R32((u32)(0xaafc3cu)); r_esp -= 4; W32(r_esp, 0x8065d8u); call_ind(t); }
    /* 008065d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008065db:; BB(0x008065db);
    /* 008065db: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 008065de: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008065e3: je 0x806632 */ if (fZ) goto L_00806632;
L_008065e5:; BB(0x008065e5);
    /* 008065e5: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 008065e7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008065e9: je 0x80665a */ if (fZ) goto L_0080665a;
L_008065eb:; BB(0x008065eb);
    /* 008065eb: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 008065ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008065f0: je 0x80665a */ if (fZ) goto L_0080665a;
L_008065f2:; BB(0x008065f2);
    /* 008065f2: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 008065f7: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 008065fa: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x8065ffu); f_00829cc8();
    /* 008065ff: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00806602: movzx eax, byte ptr [esi + 0xe] */ r_eax = (u32)R8((u32)(r_esi+0xeu));
    /* 00806606: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0080660a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080660c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080660d: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00806610: call 0x504c04 */ r_esp -= 4; W32(r_esp, 0x806615u); f_00504c04();
    /* 00806615: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806618: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0080661b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0080661d: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x806622u); f_00835574();
    /* 00806622: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00806624: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00806628: call 0x504c78 */ r_esp -= 4; W32(r_esp, 0x80662du); f_00504c78();
    /* 0080662d: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806630: jmp 0x80665a */ goto L_0080665a;
L_00806632:; BB(0x00806632);
    /* 00806632: call 0x482a28 */ r_esp -= 4; W32(r_esp, 0x806637u); f_00482a28();
    /* 00806637: movzx esi, ax */ r_esi = (u32)(u16)r_eax;
    /* 0080663a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080663c: jne 0x80664a */ if (!fZ) goto L_0080664a;
L_0080663e:; BB(0x0080663e);
    /* 0080663e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00806640: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x806645u); f_00835090();
    /* 00806645: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806648: jmp 0x80665a */ goto L_0080665a;
L_0080664a:; BB(0x0080664a);
    /* 0080664a: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080664d: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00806650: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00806652: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x806657u); f_00835574();
    /* 00806657: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_0080665a:; BB(0x0080665a);
    /* 0080665a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080665c: jne 0x806b31 */ if (!fZ) goto L_00806b31;
L_00806662:; BB(0x00806662);
    /* 00806662: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806664: je 0x80667c */ if (fZ) goto L_0080667c;
L_00806666:; BB(0x00806666);
    /* 00806666: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 00806669: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080666b: je 0x80667c */ if (fZ) goto L_0080667c;
L_0080666d:; BB(0x0080666d);
    /* 0080666d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00806670: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806672: je 0x80667c */ if (fZ) goto L_0080667c;
L_00806674:; BB(0x00806674);
    /* 00806674: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00806676: call dword ptr [ebp + 0x10] */ { u32 t = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, 0x806679u); call_ind(t); }
    /* 00806679: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_0080667c:; BB(0x0080667c);
    /* 0080667c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080667e: je 0x806685 */ if (fZ) goto L_00806685;
L_00806680:; BB(0x00806680);
    /* 00806680: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x806685u); f_0082dab0();
L_00806685:; BB(0x00806685);
    /* 00806685: mov ecx, dword ptr [0xaafc38] */ r_ecx = R32((u32)(0xaafc38u));
    /* 0080668b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080668d: je 0x806695 */ if (fZ) goto L_00806695;
L_0080668f:; BB(0x0080668f);
    /* 0080668f: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806692: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x806694u); call_ind(t); }
    /* 00806694: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00806695:; BB(0x00806695);
    /* 00806695: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00806698: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0080669b: jne 0x8064f0 */ if (!fZ) goto L_008064f0;
L_008066a1:; BB(0x008066a1);
    /* 008066a1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 008066a5: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 008066a9: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_008066ad:; BB(0x008066ad);
    /* 008066ad: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x8066b2u); f_0082da80();
    /* 008066b2: jmp 0x806ae9 */ goto L_00806ae9;
L_008066b7:; BB(0x008066b7);
    /* 008066b7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8066bcu); f_0082d7b0();
    /* 008066bc: mov edi, dword ptr [0xaafc9c] */ r_edi = R32((u32)(0xaafc9cu));
    /* 008066c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_008066c4:; BB(0x008066c4);
    /* 008066c4: mov eax, edx */ r_eax = r_edx;
    /* 008066c6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008066c9: cmp edi, dword ptr [eax*4 + 0x97f1c8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax*4+0x97f1c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008066d0: je 0x806b76 */ if (fZ) goto L_00806b76;
L_008066d6:; BB(0x008066d6);
    /* 008066d6: mov eax, dword ptr [edx*4 + 0x97f1c8] */ r_eax = R32((u32)(r_edx*4+0x97f1c8u));
    /* 008066dd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008066e0: jne 0x8066c4 */ if (!fZ) goto L_008066c4;
L_008066e2:; BB(0x008066e2);
    /* 008066e2: mov edx, 1 */ r_edx = 0x1u;
L_008066e7:; BB(0x008066e7);
    /* 008066e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008066e9: jne 0x8068e6 */ if (!fZ) goto L_008068e6;
L_008066ef:; BB(0x008066ef);
    /* 008066ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008066f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008066f2: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008066f6: call 0x806b80 */ r_esp -= 4; W32(r_esp, 0x8066fbu); f_00806b80();
    /* 008066fb: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x806700u); f_006dc358();
    /* 00806700: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00806703: mov edi, dword ptr [esi + 0x2c] */ r_edi = R32((u32)(r_esi+0x2cu));
    /* 00806706: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806708: je 0x806ae4 */ if (fZ) goto L_00806ae4;
L_0080670e:; BB(0x0080670e);
    /* 0080670e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00806712: mov ebx, eax */ r_ebx = r_eax;
    /* 00806714: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00806718: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0080671c: lea edx, [esi + 4] */ r_edx = (u32)(r_esi+0x4u);
    /* 0080671f: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_00806723:; BB(0x00806723);
    /* 00806723: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00806725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806727: je 0x8068c9 */ if (fZ) goto L_008068c9;
L_0080672d:; BB(0x0080672d);
    /* 0080672d: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00806730: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806732: je 0x8068c9 */ if (fZ) goto L_008068c9;
L_00806738:; BB(0x00806738);
    /* 00806738: mov ecx, dword ptr [0xaafc80] */ r_ecx = R32((u32)(0xaafc80u));
    /* 0080673e: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 00806741: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806743: mov eax, 0 */ r_eax = 0x0u;
    /* 00806748: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0080674b: test esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806751: mov edx, 0 */ r_edx = 0x0u;
    /* 00806756: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00806759: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080675b: je 0x8068c9 */ if (fZ) goto L_008068c9;
L_00806761:; BB(0x00806761);
    /* 00806761: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806767: je 0x806771 */ if (fZ) goto L_00806771;
L_00806769:; BB(0x00806769);
    /* 00806769: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x80676eu); f_0082dbac();
    /* 0080676e: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
L_00806771:; BB(0x00806771);
    /* 00806771: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806777: je 0x806791 */ if (fZ) goto L_00806791;
L_00806779:; BB(0x00806779);
    /* 00806779: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0080677c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080677e: je 0x806791 */ if (fZ) goto L_00806791;
L_00806780:; BB(0x00806780);
    /* 00806780: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00806783: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806785: je 0x806791 */ if (fZ) goto L_00806791;
L_00806787:; BB(0x00806787);
    /* 00806787: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00806789: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0080678b: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x80678eu); call_ind(t); }
    /* 0080678e: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
L_00806791:; BB(0x00806791);
    /* 00806791: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 00806793: test esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806799: je 0x80679e */ if (fZ) goto L_0080679e;
L_0080679b:; BB(0x0080679b);
    /* 0080679b: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_0080679e:; BB(0x0080679e);
    /* 0080679e: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008067a4: jne 0x806b55 */ if (!fZ) goto L_00806b55;
L_008067aa:; BB(0x008067aa);
    /* 008067aa: mov edx, dword ptr [0xaafc3c] */ r_edx = R32((u32)(0xaafc3cu));
    /* 008067b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008067b2: je 0x80680e */ if (fZ) goto L_0080680e;
L_008067b4:; BB(0x008067b4);
    /* 008067b4: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 008067b8: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008067bb: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
    /* 008067bf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008067c2: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 008067c6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008067c9: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 008067cd: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008067d1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x8067d6u); f_0082ebac();
    /* 008067d6: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008067da: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 008067dd: add edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008067e0: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 008067e4: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 008067e7: add esi, dword ptr [ebp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008067ea: mov dword ptr [esp + 0x78], esi */ W32((u32)(r_esp+0x78u), r_esi);
    /* 008067ee: lea esi, [esp + 0x68] */ r_esi = (u32)(r_esp+0x68u);
    /* 008067f2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 008067f5: add edx, dword ptr [ebp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008067f8: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 008067fc: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 00806800: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806803: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00806804: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00806805: call dword ptr [0xaafc3c] */ { u32 t = R32((u32)(0xaafc3cu)); r_esp -= 4; W32(r_esp, 0x80680bu); call_ind(t); }
    /* 0080680b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080680e:; BB(0x0080680e);
    /* 0080680e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806811: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806816: je 0x806866 */ if (fZ) goto L_00806866;
L_00806818:; BB(0x00806818);
    /* 00806818: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0080681a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080681c: je 0x80688e */ if (fZ) goto L_0080688e;
L_0080681e:; BB(0x0080681e);
    /* 0080681e: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00806821: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806823: je 0x80688e */ if (fZ) goto L_0080688e;
L_00806825:; BB(0x00806825);
    /* 00806825: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 0080682b: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0080682e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x806833u); f_00829cc8();
    /* 00806833: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00806836: movzx edx, byte ptr [esi + 0xe] */ r_edx = (u32)R8((u32)(r_esi+0xeu));
    /* 0080683a: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0080683e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00806840: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00806841: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00806844: call 0x504c04 */ r_esp -= 4; W32(r_esp, 0x806849u); f_00504c04();
    /* 00806849: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080684c: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0080684f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00806851: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x806856u); f_00835574();
    /* 00806856: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00806858: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0080685c: call 0x504c78 */ r_esp -= 4; W32(r_esp, 0x806861u); f_00504c78();
    /* 00806861: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806864: jmp 0x80688e */ goto L_0080688e;
L_00806866:; BB(0x00806866);
    /* 00806866: call 0x482a28 */ r_esp -= 4; W32(r_esp, 0x80686bu); f_00482a28();
    /* 0080686b: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0080686e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806870: jne 0x80687e */ if (!fZ) goto L_0080687e;
L_00806872:; BB(0x00806872);
    /* 00806872: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00806874: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x806879u); f_00835090();
    /* 00806879: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0080687c: jmp 0x80688e */ goto L_0080688e;
L_0080687e:; BB(0x0080687e);
    /* 0080687e: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806881: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00806884: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00806886: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x80688bu); f_00835574();
    /* 0080688b: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_0080688e:; BB(0x0080688e);
    /* 0080688e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806890: jne 0x806b48 */ if (!fZ) goto L_00806b48;
L_00806896:; BB(0x00806896);
    /* 00806896: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806898: je 0x8068b0 */ if (fZ) goto L_008068b0;
L_0080689a:; BB(0x0080689a);
    /* 0080689a: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0080689d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080689f: je 0x8068b0 */ if (fZ) goto L_008068b0;
L_008068a1:; BB(0x008068a1);
    /* 008068a1: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 008068a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008068a6: je 0x8068b0 */ if (fZ) goto L_008068b0;
L_008068a8:; BB(0x008068a8);
    /* 008068a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008068aa: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x8068adu); call_ind(t); }
    /* 008068ad: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_008068b0:; BB(0x008068b0);
    /* 008068b0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008068b2: je 0x8068b9 */ if (fZ) goto L_008068b9;
L_008068b4:; BB(0x008068b4);
    /* 008068b4: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x8068b9u); f_0082dab0();
L_008068b9:; BB(0x008068b9);
    /* 008068b9: mov edx, dword ptr [0xaafc38] */ r_edx = R32((u32)(0xaafc38u));
    /* 008068bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008068c1: je 0x8068c9 */ if (fZ) goto L_008068c9;
L_008068c3:; BB(0x008068c3);
    /* 008068c3: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008068c6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x8068c8u); call_ind(t); }
    /* 008068c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008068c9:; BB(0x008068c9);
    /* 008068c9: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008068cc: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008068cf: jne 0x806723 */ if (!fZ) goto L_00806723;
L_008068d5:; BB(0x008068d5);
    /* 008068d5: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 008068d9: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 008068dd: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 008068e1: jmp 0x806ae4 */ goto L_00806ae4;
L_008068e6:; BB(0x008068e6);
    /* 008068e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008068e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008068e9: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008068ed: call 0x806b80 */ r_esp -= 4; W32(r_esp, 0x8068f2u); f_00806b80();
    /* 008068f2: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x8068f7u); f_006dc358();
    /* 008068f7: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 008068fa: mov edi, dword ptr [esi + 0x2c] */ r_edi = R32((u32)(r_esi+0x2cu));
    /* 008068fd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008068ff: je 0x806ae4 */ if (fZ) goto L_00806ae4;
L_00806905:; BB(0x00806905);
    /* 00806905: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00806909: mov ebx, eax */ r_ebx = r_eax;
    /* 0080690b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0080690f: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00806913: lea edx, [esi + 4] */ r_edx = (u32)(r_esi+0x4u);
    /* 00806916: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
L_0080691a:; BB(0x0080691a);
    /* 0080691a: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 0080691d: test esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806923: je 0x806acc */ if (fZ) goto L_00806acc;
L_00806929:; BB(0x00806929);
    /* 00806929: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0080692b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080692d: je 0x806acc */ if (fZ) goto L_00806acc;
L_00806933:; BB(0x00806933);
    /* 00806933: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00806936: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806938: je 0x806acc */ if (fZ) goto L_00806acc;
L_0080693e:; BB(0x0080693e);
    /* 0080693e: mov ecx, dword ptr [0xaafc80] */ r_ecx = R32((u32)(0xaafc80u));
    /* 00806944: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806946: mov eax, 0 */ r_eax = 0x0u;
    /* 0080694b: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0080694e: test esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806954: mov edx, 0 */ r_edx = 0x0u;
    /* 00806959: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0080695c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080695e: je 0x806acc */ if (fZ) goto L_00806acc;
L_00806964:; BB(0x00806964);
    /* 00806964: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080696a: je 0x806974 */ if (fZ) goto L_00806974;
L_0080696c:; BB(0x0080696c);
    /* 0080696c: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x806971u); f_0082dbac();
    /* 00806971: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
L_00806974:; BB(0x00806974);
    /* 00806974: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080697a: je 0x806994 */ if (fZ) goto L_00806994;
L_0080697c:; BB(0x0080697c);
    /* 0080697c: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0080697f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806981: je 0x806994 */ if (fZ) goto L_00806994;
L_00806983:; BB(0x00806983);
    /* 00806983: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00806986: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806988: je 0x806994 */ if (fZ) goto L_00806994;
L_0080698a:; BB(0x0080698a);
    /* 0080698a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080698c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0080698e: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x806991u); call_ind(t); }
    /* 00806991: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
L_00806994:; BB(0x00806994);
    /* 00806994: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 00806996: test esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080699c: je 0x8069a1 */ if (fZ) goto L_008069a1;
L_0080699e:; BB(0x0080699e);
    /* 0080699e: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_008069a1:; BB(0x008069a1);
    /* 008069a1: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008069a7: jne 0x806b6c */ if (!fZ) goto L_00806b6c;
L_008069ad:; BB(0x008069ad);
    /* 008069ad: mov edx, dword ptr [0xaafc3c] */ r_edx = R32((u32)(0xaafc3cu));
    /* 008069b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008069b5: je 0x806a11 */ if (fZ) goto L_00806a11;
L_008069b7:; BB(0x008069b7);
    /* 008069b7: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 008069bb: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008069be: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 008069c2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008069c5: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 008069c9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008069cc: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 008069d0: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008069d4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x8069d9u); f_0082ebac();
    /* 008069d9: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008069dd: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 008069e0: add edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008069e3: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 008069e7: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 008069ea: add esi, dword ptr [ebp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008069ed: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
    /* 008069f1: lea esi, [esp + 0x50] */ r_esi = (u32)(r_esp+0x50u);
    /* 008069f5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 008069f8: add edx, dword ptr [ebp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008069fb: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 008069ff: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00806a03: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806a06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00806a07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00806a08: call dword ptr [0xaafc3c] */ { u32 t = R32((u32)(0xaafc3cu)); r_esp -= 4; W32(r_esp, 0x806a0eu); call_ind(t); }
    /* 00806a0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00806a11:; BB(0x00806a11);
    /* 00806a11: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806a14: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806a19: je 0x806a69 */ if (fZ) goto L_00806a69;
L_00806a1b:; BB(0x00806a1b);
    /* 00806a1b: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00806a1d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806a1f: je 0x806a91 */ if (fZ) goto L_00806a91;
L_00806a21:; BB(0x00806a21);
    /* 00806a21: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00806a24: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806a26: je 0x806a91 */ if (fZ) goto L_00806a91;
L_00806a28:; BB(0x00806a28);
    /* 00806a28: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00806a2e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00806a31: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x806a36u); f_00829cc8();
    /* 00806a36: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00806a39: movzx edx, byte ptr [esi + 0xe] */ r_edx = (u32)R8((u32)(r_esi+0xeu));
    /* 00806a3d: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00806a41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00806a43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00806a44: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00806a47: call 0x504c04 */ r_esp -= 4; W32(r_esp, 0x806a4cu); f_00504c04();
    /* 00806a4c: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806a4f: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00806a52: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00806a54: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x806a59u); f_00835574();
    /* 00806a59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00806a5b: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00806a5f: call 0x504c78 */ r_esp -= 4; W32(r_esp, 0x806a64u); f_00504c78();
    /* 00806a64: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806a67: jmp 0x806a91 */ goto L_00806a91;
L_00806a69:; BB(0x00806a69);
    /* 00806a69: call 0x482a28 */ r_esp -= 4; W32(r_esp, 0x806a6eu); f_00482a28();
    /* 00806a6e: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00806a71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806a73: jne 0x806a81 */ if (!fZ) goto L_00806a81;
L_00806a75:; BB(0x00806a75);
    /* 00806a75: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00806a77: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x806a7cu); f_00835090();
    /* 00806a7c: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806a7f: jmp 0x806a91 */ goto L_00806a91;
L_00806a81:; BB(0x00806a81);
    /* 00806a81: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806a84: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00806a87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00806a89: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x806a8eu); f_00835574();
    /* 00806a8e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_00806a91:; BB(0x00806a91);
    /* 00806a91: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806a93: jne 0x806b5f */ if (!fZ) goto L_00806b5f;
L_00806a99:; BB(0x00806a99);
    /* 00806a99: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806a9b: je 0x806ab3 */ if (fZ) goto L_00806ab3;
L_00806a9d:; BB(0x00806a9d);
    /* 00806a9d: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00806aa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806aa2: je 0x806ab3 */ if (fZ) goto L_00806ab3;
L_00806aa4:; BB(0x00806aa4);
    /* 00806aa4: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00806aa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806aa9: je 0x806ab3 */ if (fZ) goto L_00806ab3;
L_00806aab:; BB(0x00806aab);
    /* 00806aab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00806aad: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x806ab0u); call_ind(t); }
    /* 00806ab0: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_00806ab3:; BB(0x00806ab3);
    /* 00806ab3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806ab5: je 0x806abc */ if (fZ) goto L_00806abc;
L_00806ab7:; BB(0x00806ab7);
    /* 00806ab7: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x806abcu); f_0082dab0();
L_00806abc:; BB(0x00806abc);
    /* 00806abc: mov edx, dword ptr [0xaafc38] */ r_edx = R32((u32)(0xaafc38u));
    /* 00806ac2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806ac4: je 0x806acc */ if (fZ) goto L_00806acc;
L_00806ac6:; BB(0x00806ac6);
    /* 00806ac6: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806ac9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x806acbu); call_ind(t); }
    /* 00806acb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00806acc:; BB(0x00806acc);
    /* 00806acc: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00806acf: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00806ad2: jne 0x80691a */ if (!fZ) goto L_0080691a;
L_00806ad8:; BB(0x00806ad8);
    /* 00806ad8: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00806adc: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00806ae0: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_00806ae4:; BB(0x00806ae4);
    /* 00806ae4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x806ae9u); f_0082da80();
L_00806ae9:; BB(0x00806ae9);
    /* 00806ae9: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00806aec: add ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00806aef: add esi, 0x34 */ {  u32 a = r_esi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00806af2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806af4: jne 0x80625a */ if (!fZ) goto L_0080625a;
L_00806afa:; BB(0x00806afa);
    /* 00806afa: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00806afe: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_00806b02:; BB(0x00806b02);
    /* 00806b02: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00806b07: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00806b0c: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x806b11u); f_00835078();
    /* 00806b11: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00806b17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00806b18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00806b19: ret  */ FN_RET(0x008061e0); r_esp += 4; return;
L_00806b1a:; BB(0x00806b1a);
    /* 00806b1a: call 0x502c30 */ r_esp -= 4; W32(r_esp, 0x806b1fu); f_00502c30();
    /* 00806b1f: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806b22: jmp 0x80644d */ goto L_0080644d;
L_00806b27:; BB(0x00806b27);
    /* 00806b27: call 0x502b14 */ r_esp -= 4; W32(r_esp, 0x806b2cu); f_00502b14();
    /* 00806b2c: jmp 0x806362 */ goto L_00806362;
L_00806b31:; BB(0x00806b31);
    /* 00806b31: call 0x502c30 */ r_esp -= 4; W32(r_esp, 0x806b36u); f_00502c30();
    /* 00806b36: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806b39: jmp 0x806662 */ goto L_00806662;
L_00806b3e:; BB(0x00806b3e);
    /* 00806b3e: call 0x502b14 */ r_esp -= 4; W32(r_esp, 0x806b43u); f_00502b14();
    /* 00806b43: jmp 0x806577 */ goto L_00806577;
L_00806b48:; BB(0x00806b48);
    /* 00806b48: call 0x502c30 */ r_esp -= 4; W32(r_esp, 0x806b4du); f_00502c30();
    /* 00806b4d: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806b50: jmp 0x806896 */ goto L_00806896;
L_00806b55:; BB(0x00806b55);
    /* 00806b55: call 0x502b14 */ r_esp -= 4; W32(r_esp, 0x806b5au); f_00502b14();
    /* 00806b5a: jmp 0x8067aa */ goto L_008067aa;
L_00806b5f:; BB(0x00806b5f);
    /* 00806b5f: call 0x502c30 */ r_esp -= 4; W32(r_esp, 0x806b64u); f_00502c30();
    /* 00806b64: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00806b67: jmp 0x806a99 */ goto L_00806a99;
L_00806b6c:; BB(0x00806b6c);
    /* 00806b6c: call 0x502b14 */ r_esp -= 4; W32(r_esp, 0x806b71u); f_00502b14();
    /* 00806b71: jmp 0x8069ad */ goto L_008069ad;
L_00806b76:; BB(0x00806b76);
    /* 00806b76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00806b78: jmp 0x8066e7 */ goto L_008066e7;
}

void f_00806b80(void) /* sub_806B80 */
{
    FN_ENTER(0x00806b80);
    /* 00806b80: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00806b83: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00806b87: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00806b8a: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00806b8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806b8f: je 0x806db1 */ if (fZ) goto L_00806db1;
L_00806b95:; BB(0x00806b95);
    /* 00806b95: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 00806b99: mov ebx, eax */ r_ebx = r_eax;
    /* 00806b9b: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 00806b9f: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 00806ba3: mov esi, edx */ r_esi = r_edx;
L_00806ba5:; BB(0x00806ba5);
    /* 00806ba5: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 00806ba9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806bab: je 0x806bbc */ if (fZ) goto L_00806bbc;
L_00806bad:; BB(0x00806bad);
    /* 00806bad: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00806bb0: test ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806bb6: je 0x806d99 */ if (fZ) goto L_00806d99;
L_00806bbc:; BB(0x00806bbc);
    /* 00806bbc: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00806bbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806bc0: je 0x806d99 */ if (fZ) goto L_00806d99;
L_00806bc6:; BB(0x00806bc6);
    /* 00806bc6: mov edi, dword ptr [0xaafc80] */ r_edi = R32((u32)(0xaafc80u));
    /* 00806bcc: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00806bcf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806bd1: mov eax, 0 */ r_eax = 0x0u;
    /* 00806bd6: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00806bd9: test ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806bdf: mov edx, 0 */ r_edx = 0x0u;
    /* 00806be4: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00806be7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806be9: je 0x806d99 */ if (fZ) goto L_00806d99;
L_00806bef:; BB(0x00806bef);
    /* 00806bef: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806bf2: je 0x806bfc */ if (fZ) goto L_00806bfc;
L_00806bf4:; BB(0x00806bf4);
    /* 00806bf4: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x806bf9u); f_0082dbac();
    /* 00806bf9: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
L_00806bfc:; BB(0x00806bfc);
    /* 00806bfc: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806bff: je 0x806c1b */ if (fZ) goto L_00806c1b;
L_00806c01:; BB(0x00806c01);
    /* 00806c01: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00806c04: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806c06: je 0x806c1b */ if (fZ) goto L_00806c1b;
L_00806c08:; BB(0x00806c08);
    /* 00806c08: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00806c0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806c0d: je 0x806c1b */ if (fZ) goto L_00806c1b;
L_00806c0f:; BB(0x00806c0f);
    /* 00806c0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00806c11: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00806c13: mov ecx, eax */ r_ecx = r_eax;
    /* 00806c15: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x806c18u); call_ind(t); }
    /* 00806c18: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
L_00806c1b:; BB(0x00806c1b);
    /* 00806c1b: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00806c1d: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806c23: je 0x806c27 */ if (fZ) goto L_00806c27;
L_00806c25:; BB(0x00806c25);
    /* 00806c25: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
L_00806c27:; BB(0x00806c27);
    /* 00806c27: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806c2a: je 0x806c35 */ if (fZ) goto L_00806c35;
L_00806c2c:; BB(0x00806c2c);
    /* 00806c2c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806c2e: je 0x806c35 */ if (fZ) goto L_00806c35;
L_00806c30:; BB(0x00806c30);
    /* 00806c30: call 0x502b14 */ r_esp -= 4; W32(r_esp, 0x806c35u); f_00502b14();
L_00806c35:; BB(0x00806c35);
    /* 00806c35: mov eax, dword ptr [0xaafc3c] */ r_eax = R32((u32)(0xaafc3cu));
    /* 00806c3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806c3c: je 0x806c98 */ if (fZ) goto L_00806c98;
L_00806c3e:; BB(0x00806c3e);
    /* 00806c3e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00806c41: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00806c44: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00806c47: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00806c4a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00806c4e: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00806c51: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00806c55: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00806c59: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 00806c5c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x806c61u); f_0082ebac();
    /* 00806c61: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00806c65: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00806c68: add eax, dword ptr [edi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00806c6b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00806c6f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00806c72: add eax, dword ptr [edi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00806c75: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00806c79: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00806c7c: add eax, dword ptr [edi + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00806c7f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00806c83: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00806c86: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00806c8a: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806c8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806c8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00806c8f: call dword ptr [0xaafc3c] */ { u32 t = R32((u32)(0xaafc3cu)); r_esp -= 4; W32(r_esp, 0x806c95u); call_ind(t); }
    /* 00806c95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00806c98:; BB(0x00806c98);
    /* 00806c98: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00806c9b: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806ca0: je 0x806d54 */ if (fZ) goto L_00806d54;
L_00806ca6:; BB(0x00806ca6);
    /* 00806ca6: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806cab: je 0x806ce3 */ if (fZ) goto L_00806ce3;
L_00806cad:; BB(0x00806cad);
    /* 00806cad: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00806caf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806cb1: je 0x806db7 */ if (fZ) goto L_00806db7;
L_00806cb7:; BB(0x00806cb7);
    /* 00806cb7: movzx eax, byte ptr [eax + 0xf] */ r_eax = (u32)R8((u32)(r_eax+0xfu));
    /* 00806cbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806cbc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x806cc1u); f_0061cdb0();
    /* 00806cc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00806cc2:; BB(0x00806cc2);
    /* 00806cc2: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00806cc7: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00806cca: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x806ccfu); f_00829cc8();
    /* 00806ccf: mov ecx, edi */ r_ecx = r_edi;
    /* 00806cd1: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x806cd6u); f_00835090();
    /* 00806cd6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x806cdbu); f_0061cdb0();
    /* 00806cdb: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00806cde: jmp 0x806d5e */ goto L_00806d5e;
L_00806ce3:; BB(0x00806ce3);
    /* 00806ce3: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806ce8: je 0x806d05 */ if (fZ) goto L_00806d05;
L_00806cea:; BB(0x00806cea);
    /* 00806cea: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00806cec: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00806cf0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806cf2: je 0x806d5e */ if (fZ) goto L_00806d5e;
L_00806cf4:; BB(0x00806cf4);
    /* 00806cf4: mov edx, dword ptr [0xa16380] */ r_edx = R32((u32)(0xa16380u));
    /* 00806cfa: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806cfd: je 0x806dc4 */ if (fZ) goto L_00806dc4;
L_00806d03:; BB(0x00806d03);
    /* 00806d03: jmp 0x806d5e */ goto L_00806d5e;
L_00806d05:; BB(0x00806d05);
    /* 00806d05: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00806d07: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00806d0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806d0d: je 0x806d5e */ if (fZ) goto L_00806d5e;
L_00806d0f:; BB(0x00806d0f);
    /* 00806d0f: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00806d12: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806d14: je 0x806d5e */ if (fZ) goto L_00806d5e;
L_00806d16:; BB(0x00806d16);
    /* 00806d16: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00806d1b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00806d1e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x806d23u); f_00829cc8();
    /* 00806d23: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00806d27: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00806d2a: movzx eax, byte ptr [edx + 0xe] */ r_eax = (u32)R8((u32)(r_edx+0xeu));
    /* 00806d2e: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 00806d32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00806d34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806d35: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00806d38: call 0x504c04 */ r_esp -= 4; W32(r_esp, 0x806d3du); f_00504c04();
    /* 00806d3d: mov ecx, edi */ r_ecx = r_edi;
    /* 00806d3f: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x806d44u); f_00835090();
    /* 00806d44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00806d46: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00806d4a: call 0x504c78 */ r_esp -= 4; W32(r_esp, 0x806d4fu); f_00504c78();
    /* 00806d4f: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00806d52: jmp 0x806d5e */ goto L_00806d5e;
L_00806d54:; BB(0x00806d54);
    /* 00806d54: mov ecx, edi */ r_ecx = r_edi;
    /* 00806d56: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x806d5bu); f_00835090();
    /* 00806d5b: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
L_00806d5e:; BB(0x00806d5e);
    /* 00806d5e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806d60: jne 0x806e43 */ if (!fZ) goto L_00806e43;
L_00806d66:; BB(0x00806d66);
    /* 00806d66: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806d68: je 0x806d80 */ if (fZ) goto L_00806d80;
L_00806d6a:; BB(0x00806d6a);
    /* 00806d6a: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00806d6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806d6f: je 0x806d80 */ if (fZ) goto L_00806d80;
L_00806d71:; BB(0x00806d71);
    /* 00806d71: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00806d74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806d76: je 0x806d80 */ if (fZ) goto L_00806d80;
L_00806d78:; BB(0x00806d78);
    /* 00806d78: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 00806d7a: call dword ptr [edi + 0x10] */ { u32 t = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, 0x806d7du); call_ind(t); }
    /* 00806d7d: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
L_00806d80:; BB(0x00806d80);
    /* 00806d80: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00806d82: je 0x806d89 */ if (fZ) goto L_00806d89;
L_00806d84:; BB(0x00806d84);
    /* 00806d84: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x806d89u); f_0082dab0();
L_00806d89:; BB(0x00806d89);
    /* 00806d89: mov ecx, dword ptr [0xaafc38] */ r_ecx = R32((u32)(0xaafc38u));
    /* 00806d8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806d91: je 0x806d99 */ if (fZ) goto L_00806d99;
L_00806d93:; BB(0x00806d93);
    /* 00806d93: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00806d96: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x806d98u); call_ind(t); }
    /* 00806d98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00806d99:; BB(0x00806d99);
    /* 00806d99: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00806d9c: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00806d9f: jne 0x806ba5 */ if (!fZ) goto L_00806ba5;
L_00806da5:; BB(0x00806da5);
    /* 00806da5: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 00806da9: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 00806dad: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
L_00806db1:; BB(0x00806db1);
    /* 00806db1: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00806db4: ret 8 */ FN_RET(0x00806b80); r_esp += 12; return;
L_00806db7:; BB(0x00806db7);
    /* 00806db7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00806db9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x806dbeu); f_0061cdb0();
    /* 00806dbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00806dbf: jmp 0x806cc2 */ goto L_00806cc2;
L_00806dc4:; BB(0x00806dc4);
    /* 00806dc4: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00806dc8: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00806dcb: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00806dcf: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00806dd2: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00806dd6: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00806dd9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00806ddd: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00806de1: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 00806de4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x806de9u); f_0082ebac();
    /* 00806de9: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00806ded: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00806df1: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00806df4: add eax, dword ptr [edi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00806df7: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00806dfb: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00806dfe: add eax, dword ptr [edi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00806e01: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00806e05: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00806e08: add eax, dword ptr [edi + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00806e0b: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00806e11: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00806e15: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00806e18: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00806e1c: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00806e20: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00806e23: mov word ptr [esp + 0x38], di */ W16((u32)(r_esp+0x38u), (u16)r_edi);
    /* 00806e28: movzx ecx, byte ptr [ecx + 0xf] */ r_ecx = (u32)R8((u32)(r_ecx+0xfu));
    /* 00806e2c: mov byte ptr [esp + 0x3a], cl */ W8((u32)(r_esp+0x3au), (u8)r_ecx);
    /* 00806e30: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00806e34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00806e35: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x806e3au); f_0061cdb0();
    /* 00806e3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00806e3b: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00806e3e: jmp 0x806d5e */ goto L_00806d5e;
L_00806e43:; BB(0x00806e43);
    /* 00806e43: call 0x502c30 */ r_esp -= 4; W32(r_esp, 0x806e48u); f_00502c30();
    /* 00806e48: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00806e4b: jmp 0x806d66 */ goto L_00806d66;
}

void f_00806e50(void) /* sub_806E50 */
{
    FN_ENTER(0x00806e50);
    /* 00806e50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00806e51: mov eax, dword ptr [0xaafc48] */ r_eax = R32((u32)(0xaafc48u));
    /* 00806e56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806e58: je 0x806e6b */ if (fZ) goto L_00806e6b;
L_00806e5a:; BB(0x00806e5a);
    /* 00806e5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806e5b: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x806e60u); f_0082e960();
    /* 00806e60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00806e61: mov dword ptr [0xaafc48], 0 */ W32((u32)(0xaafc48u), 0x0u);
L_00806e6b:; BB(0x00806e6b);
    /* 00806e6b: mov eax, dword ptr [0xaafc4c] */ r_eax = R32((u32)(0xaafc4cu));
    /* 00806e70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806e72: je 0x806e85 */ if (fZ) goto L_00806e85;
L_00806e74:; BB(0x00806e74);
    /* 00806e74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806e75: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x806e7au); f_0082e960();
    /* 00806e7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00806e7b: mov dword ptr [0xaafc4c], 0 */ W32((u32)(0xaafc4cu), 0x0u);
L_00806e85:; BB(0x00806e85);
    /* 00806e85: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 00806e8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806e8c: je 0x806e9f */ if (fZ) goto L_00806e9f;
L_00806e8e:; BB(0x00806e8e);
    /* 00806e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806e8f: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x806e94u); f_0082e960();
    /* 00806e94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00806e95: mov dword ptr [0xaafc6c], 0 */ W32((u32)(0xaafc6cu), 0x0u);
L_00806e9f:; BB(0x00806e9f);
    /* 00806e9f: mov eax, dword ptr [0xaafc68] */ r_eax = R32((u32)(0xaafc68u));
    /* 00806ea4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806ea6: je 0x806eb9 */ if (fZ) goto L_00806eb9;
L_00806ea8:; BB(0x00806ea8);
    /* 00806ea8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806ea9: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x806eaeu); f_0082e960();
    /* 00806eae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00806eaf: mov dword ptr [0xaafc68], 0 */ W32((u32)(0xaafc68u), 0x0u);
L_00806eb9:; BB(0x00806eb9);
    /* 00806eb9: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00806ebe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806ec0: je 0x806eda */ if (fZ) goto L_00806eda;
L_00806ec2:; BB(0x00806ec2);
    /* 00806ec2: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00806ec5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806ec7: je 0x806eda */ if (fZ) goto L_00806eda;
L_00806ec9:; BB(0x00806ec9);
    /* 00806ec9: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x806eceu); f_00829de0();
    /* 00806ece: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00806ed3: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
L_00806eda:; BB(0x00806eda);
    /* 00806eda: mov eax, dword ptr [0xaafc70] */ r_eax = R32((u32)(0xaafc70u));
    /* 00806edf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806ee1: je 0x806ef4 */ if (fZ) goto L_00806ef4;
L_00806ee3:; BB(0x00806ee3);
    /* 00806ee3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806ee4: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x806ee9u); f_0082e960();
    /* 00806ee9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00806eea: mov dword ptr [0xaafc70], 0 */ W32((u32)(0xaafc70u), 0x0u);
L_00806ef4:; BB(0x00806ef4);
    /* 00806ef4: call 0x77ffe0 */ r_esp -= 4; W32(r_esp, 0x806ef9u); f_0077ffe0();
    /* 00806ef9: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00806efe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806f00: je 0x806f51 */ if (fZ) goto L_00806f51;
L_00806f02:; BB(0x00806f02);
    /* 00806f02: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
    /* 00806f07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806f09: je 0x806f51 */ if (fZ) goto L_00806f51;
L_00806f0b:; BB(0x00806f0b);
    /* 00806f0b: mov ecx, dword ptr [0xaafc2c] */ r_ecx = R32((u32)(0xaafc2cu));
    /* 00806f11: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00806f13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806f15: je 0x806f3e */ if (fZ) goto L_00806f3e;
L_00806f17:; BB(0x00806f17);
    /* 00806f17: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00806f1a: mov ebx, edx */ r_ebx = r_edx;
    /* 00806f1c: jmp 0x806f23 */ goto L_00806f23;
L_00806f1e:; BB(0x00806f1e);
    /* 00806f1e: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
L_00806f23:; BB(0x00806f23);
    /* 00806f23: mov ecx, dword ptr [eax + ebx*4] */ r_ecx = R32((u32)(r_eax+r_ebx*4));
    /* 00806f26: call 0x834f64 */ r_esp -= 4; W32(r_esp, 0x806f2bu); f_00834f64();
    /* 00806f2b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00806f2e: cmp ebx, dword ptr [0xaafc2c] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaafc2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806f34: jne 0x806f1e */ if (!fZ) goto L_00806f1e;
L_00806f36:; BB(0x00806f36);
    /* 00806f36: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00806f39: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
L_00806f3e:; BB(0x00806f3e);
    /* 00806f3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806f3f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x806f44u); f_00857e98();
    /* 00806f44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00806f45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00806f47: mov dword ptr [0xaafc30], eax */ W32((u32)(0xaafc30u), r_eax);
    /* 00806f4c: mov dword ptr [0xaafc2c], eax */ W32((u32)(0xaafc2cu), r_eax);
L_00806f51:; BB(0x00806f51);
    /* 00806f51: mov eax, dword ptr [0xaafc74] */ r_eax = R32((u32)(0xaafc74u));
    /* 00806f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806f58: je 0x806f6b */ if (fZ) goto L_00806f6b;
L_00806f5a:; BB(0x00806f5a);
    /* 00806f5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806f5b: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x806f60u); f_0082e960();
    /* 00806f60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00806f61: mov dword ptr [0xaafc74], 0 */ W32((u32)(0xaafc74u), 0x0u);
L_00806f6b:; BB(0x00806f6b);
    /* 00806f6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00806f6d: mov dword ptr [0xa9bcac], eax */ W32((u32)(0xa9bcacu), r_eax);
    /* 00806f72: mov dword ptr [0xaafca4], eax */ W32((u32)(0xaafca4u), r_eax);
    /* 00806f77: call 0x5ba25c */ r_esp -= 4; W32(r_esp, 0x806f7cu); f_005ba25c();
    /* 00806f7c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00806f7e: push dword ptr [0xa114c8] */ { u32 v = R32((u32)(0xa114c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00806f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806f85: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x806f8au); f_008598c0();
    /* 00806f8a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00806f8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00806f8f: jne 0x806f9c */ if (!fZ) goto L_00806f9c;
L_00806f91:; BB(0x00806f91);
    /* 00806f91: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 00806f96: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x806f9bu); f_005ba214();
    /* 00806f9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00806f9c:; BB(0x00806f9c);
    /* 00806f9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00806f9d: ret  */ FN_RET(0x00806e50); r_esp += 4; return;
}

void f_00806fa0(void) /* sub_806FA0 */
{
    FN_ENTER(0x00806fa0);
    /* 00806fa0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00806fa3: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00806fa7: mov dword ptr [0xaafca0], edx */ W32((u32)(0xaafca0u), r_edx);
    /* 00806fad: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00806fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00806fb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00806fb2: call 0x80bf28 */ r_esp -= 4; W32(r_esp, 0x806fb7u); f_0080bf28();
    /* 00806fb7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00806fba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806fbd: jne 0x806fc7 */ if (!fZ) goto L_00806fc7;
L_00806fbf:; BB(0x00806fbf);
    /* 00806fbf: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00806fc2: mov dword ptr [0xaafc9c], eax */ W32((u32)(0xaafc9cu), r_eax);
L_00806fc7:; BB(0x00806fc7);
    /* 00806fc7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00806fca: ret  */ FN_RET(0x00806fa0); r_esp += 4; return;
}

void f_00806fcc(void) /* sub_806FCC */
{
    FN_ENTER(0x00806fcc);
    /* 00806fcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00806fcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00806fce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00806fcf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00806fd0: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00806fd3: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00806fd9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806fdb: je 0x80702a */ if (fZ) goto L_0080702a;
L_00806fdd:; BB(0x00806fdd);
    /* 00806fdd: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
    /* 00806fe2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806fe4: je 0x80702a */ if (fZ) goto L_0080702a;
L_00806fe6:; BB(0x00806fe6);
    /* 00806fe6: mov edx, dword ptr [0xaafc2c] */ r_edx = R32((u32)(0xaafc2cu));
    /* 00806fec: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00806fee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00806ff0: jne 0x806ff9 */ if (!fZ) goto L_00806ff9;
L_00806ff2:; BB(0x00806ff2);
    /* 00806ff2: jmp 0x807011 */ goto L_00807011;
L_00806ff4:; BB(0x00806ff4);
    /* 00806ff4: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
L_00806ff9:; BB(0x00806ff9);
    /* 00806ff9: mov ecx, dword ptr [eax + ebx*4] */ r_ecx = R32((u32)(r_eax+r_ebx*4));
    /* 00806ffc: call 0x834f64 */ r_esp -= 4; W32(r_esp, 0x807001u); f_00834f64();
    /* 00807001: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00807004: cmp ebx, dword ptr [0xaafc2c] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaafc2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080700a: jne 0x806ff4 */ if (!fZ) goto L_00806ff4;
L_0080700c:; BB(0x0080700c);
    /* 0080700c: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
L_00807011:; BB(0x00807011);
    /* 00807011: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00807012: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x807017u); f_00857e98();
    /* 00807017: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00807018: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 0080701e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00807020: mov dword ptr [0xaafc30], eax */ W32((u32)(0xaafc30u), r_eax);
    /* 00807025: mov dword ptr [0xaafc2c], eax */ W32((u32)(0xaafc2cu), r_eax);
L_0080702a:; BB(0x0080702a);
    /* 0080702a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080702c: je 0x807046 */ if (fZ) goto L_00807046;
L_0080702e:; BB(0x0080702e);
    /* 0080702e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00807031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807033: je 0x807046 */ if (fZ) goto L_00807046;
L_00807035:; BB(0x00807035);
    /* 00807035: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x80703au); f_00829de0();
    /* 0080703a: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 0080703f: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
L_00807046:; BB(0x00807046);
    /* 00807046: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0080704a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080704b: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00807051: call 0x80bf28 */ r_esp -= 4; W32(r_esp, 0x807056u); f_0080bf28();
    /* 00807056: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00807059: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080705c: je 0x8072fb */ if (fZ) goto L_008072fb;
L_00807062:; BB(0x00807062);
    /* 00807062: push dword ptr [0xa114c8] */ { u32 v = R32((u32)(0xa114c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00807068: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x80706du); f_005ba214();
    /* 0080706d: mov dword ptr [0xaafca4], 0 */ W32((u32)(0xaafca4u), 0x0u);
    /* 00807077: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0080707b: mov dword ptr [0xaafc8c], 0xffffffff */ W32((u32)(0xaafc8cu), 0xffffffffu);
    /* 00807085: push 0x97d368 */ { u32 v = 0x97d368u; r_esp -= 4; W32(r_esp, v); }
    /* 0080708a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080708b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080708c: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x807091u); f_0078e574();
    /* 00807091: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00807095: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00807096: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80709bu); f_005b9328();
    /* 0080709b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080709e: cmp eax, dword ptr [0xaafc60] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafc60u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008070a4: jg 0x8070d0 */ if ((!fZ&&fS==fO)) goto L_008070d0;
L_008070a6:; BB(0x008070a6);
    /* 008070a6: mov edx, dword ptr [0xaafc74] */ r_edx = R32((u32)(0xaafc74u));
    /* 008070ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008070ae: je 0x8070c8 */ if (fZ) goto L_008070c8;
L_008070b0:; BB(0x008070b0);
    /* 008070b0: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008070b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008070b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008070b6: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x8070bbu); f_005b9bf4();
    /* 008070bb: mov ebx, eax */ r_ebx = r_eax;
    /* 008070bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008070c0: mov dword ptr [0xaafca4], ebx */ W32((u32)(0xaafca4u), r_ebx);
    /* 008070c6: jmp 0x8070d6 */ goto L_008070d6;
L_008070c8:; BB(0x008070c8);
    /* 008070c8: mov ebx, dword ptr [0xaafca4] */ r_ebx = R32((u32)(0xaafca4u));
    /* 008070ce: jmp 0x8070d6 */ goto L_008070d6;
L_008070d0:; BB(0x008070d0);
    /* 008070d0: mov ebx, dword ptr [0xaafca4] */ r_ebx = R32((u32)(0xaafca4u));
L_008070d6:; BB(0x008070d6);
    /* 008070d6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008070d8: je 0x80710d */ if (fZ) goto L_0080710d;
L_008070da:; BB(0x008070da);
    /* 008070da: mov edx, dword ptr [0xa114b0] */ r_edx = R32((u32)(0xa114b0u));
    /* 008070e0: mov edi, 0xa114b0 */ r_edi = 0xa114b0u;
    /* 008070e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008070e7: je 0x80710d */ if (fZ) goto L_0080710d;
L_008070e9:; BB(0x008070e9);
    /* 008070e9: mov edx, dword ptr [0xa114b0] */ r_edx = R32((u32)(0xa114b0u));
L_008070ef:; BB(0x008070ef);
    /* 008070ef: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008070f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008070f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008070f3: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x8070f8u); f_008598c0();
    /* 008070f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008070fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008070fd: je 0x8072ed */ if (fZ) goto L_008072ed;
L_00807103:; BB(0x00807103);
    /* 00807103: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00807106: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00807109: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080710b: jne 0x8070ef */ if (!fZ) goto L_008070ef;
L_0080710d:; BB(0x0080710d);
    /* 0080710d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080710f: je 0x807216 */ if (fZ) goto L_00807216;
L_00807115:; BB(0x00807115);
    /* 00807115: movsx edi, word ptr [ebx + 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x8u));
    /* 00807119: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080711b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080711d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080711f: je 0x807145 */ if (fZ) goto L_00807145;
L_00807121:; BB(0x00807121);
    /* 00807121: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00807124: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 00807127: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00807129: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0080712b: lea ebx, [eax + ebx*4] */ r_ebx = (u32)(r_eax+r_ebx*4);
    /* 0080712e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00807130: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00807132: lea edx, [edx + ebx + 0x28] */ r_edx = (u32)(r_edx+r_ebx+0x28u);
L_00807136:; BB(0x00807136);
    /* 00807136: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00807138: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080713b: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080713e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807141: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807143: jne 0x807136 */ if (!fZ) goto L_00807136;
L_00807145:; BB(0x00807145);
    /* 00807145: mov dword ptr [0xaafc2c], ecx */ W32((u32)(0xaafc2cu), r_ecx);
    /* 0080714b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080714d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080714f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00807150: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x807155u); f_008581c5();
    /* 00807155: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00807156: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 0080715c: mov dword ptr [0xaafc30], eax */ W32((u32)(0xaafc30u), r_eax);
    /* 00807161: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00807164: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00807168: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080716a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080716c: je 0x807216 */ if (fZ) goto L_00807216;
L_00807172:; BB(0x00807172);
    /* 00807172: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 00807176: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
L_0080717a:; BB(0x0080717a);
    /* 0080717a: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 0080717d: mov ebp, dword ptr [eax + 0x28] */ r_ebp = R32((u32)(r_eax+0x28u));
    /* 00807180: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807182: je 0x8071be */ if (fZ) goto L_008071be;
L_00807184:; BB(0x00807184);
    /* 00807184: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00807188: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
L_0080718c:; BB(0x0080718c);
    /* 0080718c: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0080718e: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00807191: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807196: je 0x80719a */ if (fZ) goto L_0080719a;
L_00807198:; BB(0x00807198);
    /* 00807198: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
L_0080719a:; BB(0x0080719a);
    /* 0080719a: mov ecx, edi */ r_ecx = r_edi;
    /* 0080719c: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x8071a1u); f_00834c58();
    /* 008071a1: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
    /* 008071a6: mov dword ptr [eax + ebx*4], edi */ W32((u32)(r_eax+r_ebx*4), r_edi);
    /* 008071a9: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008071ac: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008071af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008071b2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008071b4: jne 0x80718c */ if (!fZ) goto L_0080718c;
L_008071b6:; BB(0x008071b6);
    /* 008071b6: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 008071ba: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
L_008071be:; BB(0x008071be);
    /* 008071be: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 008071c1: mov ebp, dword ptr [eax + 0x2c] */ r_ebp = R32((u32)(r_eax+0x2cu));
    /* 008071c4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008071c6: je 0x807202 */ if (fZ) goto L_00807202;
L_008071c8:; BB(0x008071c8);
    /* 008071c8: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 008071cc: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
L_008071d0:; BB(0x008071d0);
    /* 008071d0: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008071d2: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008071d5: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008071da: je 0x8071de */ if (fZ) goto L_008071de;
L_008071dc:; BB(0x008071dc);
    /* 008071dc: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
L_008071de:; BB(0x008071de);
    /* 008071de: mov ecx, edi */ r_ecx = r_edi;
    /* 008071e0: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x8071e5u); f_00834c58();
    /* 008071e5: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
    /* 008071ea: mov dword ptr [eax + ebx*4], edi */ W32((u32)(r_eax+r_ebx*4), r_edi);
    /* 008071ed: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008071f0: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008071f3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008071f6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008071f8: jne 0x8071d0 */ if (!fZ) goto L_008071d0;
L_008071fa:; BB(0x008071fa);
    /* 008071fa: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 008071fe: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
L_00807202:; BB(0x00807202);
    /* 00807202: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00807205: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00807208: jne 0x80717a */ if (!fZ) goto L_0080717a;
L_0080720e:; BB(0x0080720e);
    /* 0080720e: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00807212: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
L_00807216:; BB(0x00807216);
    /* 00807216: mov eax, esi */ r_eax = r_esi;
    /* 00807218: call 0x807320 */ r_esp -= 4; W32(r_esp, 0x80721du); f_00807320();
    /* 0080721d: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00807223: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807225: je 0x807297 */ if (fZ) goto L_00807297;
L_00807227:; BB(0x00807227);
    /* 00807227: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0080722a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080722c: je 0x807297 */ if (fZ) goto L_00807297;
L_0080722e:; BB(0x0080722e);
    /* 0080722e: call 0x482a28 */ r_esp -= 4; W32(r_esp, 0x807233u); f_00482a28();
    /* 00807233: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00807236: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00807239: je 0x807265 */ if (fZ) goto L_00807265;
L_0080723b:; BB(0x0080723b);
    /* 0080723b: mov edx, dword ptr [0xaafc98] */ r_edx = R32((u32)(0xaafc98u));
    /* 00807241: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 00807245: push 0x97f1f8 */ { u32 v = 0x97f1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080724a: push dword ptr [ebp + edx*8] */ { u32 v = R32((u32)(r_ebp+r_edx*8)); r_esp -= 4; W32(r_esp, v); }
    /* 0080724e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080724f: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x807254u); f_0078e574();
    /* 00807254: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00807258: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00807259: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80725eu); f_005b9328();
    /* 0080725e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00807261: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00807263: jg 0x807281 */ if ((!fZ&&fS==fO)) goto L_00807281;
L_00807265:; BB(0x00807265);
    /* 00807265: mov edx, dword ptr [0xaafc98] */ r_edx = R32((u32)(0xaafc98u));
    /* 0080726b: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0080726f: push 0x97f200 */ { u32 v = 0x97f200u; r_esp -= 4; W32(r_esp, v); }
    /* 00807274: push dword ptr [ebp + edx*8] */ { u32 v = R32((u32)(r_ebp+r_edx*8)); r_esp -= 4; W32(r_esp, v); }
    /* 00807278: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00807279: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80727eu); f_0078e574();
    /* 0080727e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00807281:; BB(0x00807281);
    /* 00807281: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00807287: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0080728b: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080728e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080728f: call 0x81a7d8 */ r_esp -= 4; W32(r_esp, 0x807294u); f_0081a7d8();
    /* 00807294: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00807297:; BB(0x00807297);
    /* 00807297: mov eax, esi */ r_eax = r_esi;
    /* 00807299: call 0x80739c */ r_esp -= 4; W32(r_esp, 0x80729eu); f_0080739c();
    /* 0080729e: mov eax, esi */ r_eax = r_esi;
    /* 008072a0: call 0x8073f4 */ r_esp -= 4; W32(r_esp, 0x8072a5u); f_008073f4();
    /* 008072a5: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 008072aa: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x8072afu); f_005ba214();
    /* 008072af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008072b0: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 008072b5: mov byte ptr [0xaafc88], 1 */ W8((u32)(0xaafc88u), 0x1u);
    /* 008072bc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008072be: mov dword ptr [0xaafc80], edx */ W32((u32)(0xaafc80u), r_edx);
    /* 008072c4: mov dword ptr [0xaafc7c], 0 */ W32((u32)(0xaafc7cu), 0x0u);
    /* 008072ce: mov dword ptr [0xaafc3c], edx */ W32((u32)(0xaafc3cu), r_edx);
    /* 008072d4: mov dword ptr [0xaafc38], edx */ W32((u32)(0xaafc38u), r_edx);
    /* 008072da: mov dword ptr [0xaafc34], edx */ W32((u32)(0xaafc34u), r_edx);
    /* 008072e0: call 0x807448 */ r_esp -= 4; W32(r_esp, 0x8072e5u); f_00807448();
    /* 008072e5: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008072e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008072e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008072ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008072eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008072ec: ret  */ FN_RET(0x00806fcc); r_esp += 4; return;
L_008072ed:; BB(0x008072ed);
    /* 008072ed: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 008072f0: mov dword ptr [0xaafc8c], edx */ W32((u32)(0xaafc8cu), r_edx);
    /* 008072f6: jmp 0x80710d */ goto L_0080710d;
L_008072fb:; BB(0x008072fb);
    /* 008072fb: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008072ff: call 0x80bee8 */ r_esp -= 4; W32(r_esp, 0x807304u); f_0080bee8();
    /* 00807304: mov ebp, eax */ r_ebp = r_eax;
    /* 00807306: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00807309: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0080730d: mov esi, dword ptr [ebp + edx*8 + 4] */ r_esi = R32((u32)(r_ebp+r_edx*8+0x4u));
    /* 00807311: mov dword ptr [0xaafc98], edx */ W32((u32)(0xaafc98u), r_edx);
    /* 00807317: jmp 0x807062 */ goto L_00807062;
}

