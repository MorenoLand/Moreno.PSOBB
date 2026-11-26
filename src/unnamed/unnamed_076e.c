#include "protos.h"

void f_0076e38c(void) /* sub_76E38C */
{
    FN_ENTER(0x0076e38c);
    /* 0076e38c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076e38f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0076e393: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e396: jne 0x76e39e */ if (!fZ) goto L_0076e39e;
L_0076e398:; BB(0x0076e398);
    /* 0076e398: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
L_0076e39e:; BB(0x0076e39e);
    /* 0076e39e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076e3a0: jl 0x76e3af */ if ((fS!=fO)) goto L_0076e3af;
L_0076e3a2:; BB(0x0076e3a2);
    /* 0076e3a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076e3a5: jg 0x76e3af */ if ((!fZ&&fS==fO)) goto L_0076e3af;
L_0076e3a7:; BB(0x0076e3a7);
    /* 0076e3a7: mov dword ptr [ecx + 0x3b4], eax */ W32((u32)(r_ecx+0x3b4u), r_eax);
    /* 0076e3ad: jmp 0x76e3b9 */ goto L_0076e3b9;
L_0076e3af:; BB(0x0076e3af);
    /* 0076e3af: mov dword ptr [ecx + 0x3b4], 0 */ W32((u32)(r_ecx+0x3b4u), 0x0u);
L_0076e3b9:; BB(0x0076e3b9);
    /* 0076e3b9: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 0076e3bf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0076e3c2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0076e3c6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076e3cb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0076e3cf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0076e3d3: fistp dword ptr [ecx + 0x3b8] */ W32((u32)(r_ecx+0x3b8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0076e3d9: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0076e3dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076e3df: ret 4 */ FN_RET(0x0076e38c); r_esp += 8; return;
}

void f_0076e3e4(void) /* sub_76E3E4 */
{
    FN_ENTER(0x0076e3e4);
    /* 0076e3e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e3e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e3e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076e3e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076e3e8: mov esi, ecx */ r_esi = r_ecx;
    /* 0076e3ea: mov ecx, esi */ r_ecx = r_esi;
    /* 0076e3ec: mov eax, dword ptr [0xa9b078] */ r_eax = R32((u32)(0xa9b078u));
    /* 0076e3f1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e3f3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e3f5: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0076e3f8: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076e3fa: push dword ptr [edi + 0x9f7ae8] */ { u32 v = R32((u32)(r_edi+0x9f7ae8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e400: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x76e405u); f_00787550();
    /* 0076e405: mov eax, dword ptr [esi + 0x3b4] */ r_eax = R32((u32)(r_esi+0x3b4u));
    /* 0076e40b: push dword ptr [edi + eax*4 + 0x9f7aec] */ { u32 v = R32((u32)(r_edi+r_eax*4+0x9f7aecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e412: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x76e417u); f_0077a684();
    /* 0076e417: mov ebp, eax */ r_ebp = r_eax;
    /* 0076e419: mov edx, dword ptr [esi + 0x3b4] */ r_edx = R32((u32)(r_esi+0x3b4u));
    /* 0076e41f: push dword ptr [edi + edx*4 + 0x9f7aec] */ { u32 v = R32((u32)(r_edi+r_edx*4+0x9f7aecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e426: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x76e42bu); f_0077a698();
    /* 0076e42b: mov ebx, eax */ r_ebx = r_eax;
    /* 0076e42d: mov edx, dword ptr [esi + 0x3b4] */ r_edx = R32((u32)(r_esi+0x3b4u));
    /* 0076e433: push dword ptr [edi + edx*4 + 0x9f7aec] */ { u32 v = R32((u32)(r_edi+r_edx*4+0x9f7aecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e43a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x76e43fu); f_0077a6b4();
    /* 0076e43f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076e442: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e443: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076e444: mov ecx, esi */ r_ecx = r_esi;
    /* 0076e446: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076e447: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x76e44cu); f_007868f8();
    /* 0076e44c: mov eax, dword ptr [esi + 0x3b4] */ r_eax = R32((u32)(r_esi+0x3b4u));
    /* 0076e452: push dword ptr [edi + eax*4 + 0x9f7aec] */ { u32 v = R32((u32)(r_edi+r_eax*4+0x9f7aecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e459: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x76e45eu); f_0077a6cc();
    /* 0076e45e: mov dword ptr [esi + 0x394], eax */ W32((u32)(r_esi+0x394u), r_eax);
    /* 0076e464: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076e465: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076e466: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076e467: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076e468: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076e469: ret  */ FN_RET(0x0076e3e4); r_esp += 4; return;
}

void f_0076e46c(void) /* sub_76E46C */
{
    FN_ENTER(0x0076e46c);
    /* 0076e46c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076e46d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076e46f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e473: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e477: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076e479: call 0x521bbc */ r_esp -= 4; W32(r_esp, 0x76e47eu); f_00521bbc();
    /* 0076e47e: mov dword ptr [ebp], 0xb43e60 */ W32((u32)(r_ebp), 0xb43e60u);
    /* 0076e485: mov eax, ebp */ r_eax = r_ebp;
    /* 0076e487: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076e488: ret 8 */ FN_RET(0x0076e46c); r_esp += 12; return;
}

void f_0076e48c(void) /* sub_76E48C */
{
    FN_ENTER(0x0076e48c);
    /* 0076e48c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e48d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e48e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076e48f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076e490: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076e493: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076e495: mov edx, dword ptr [ebp + 0x3bc] */ r_edx = R32((u32)(r_ebp+0x3bcu));
    /* 0076e49b: shl edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0076e49e: add edx, dword ptr [esp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076e4a2: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0076e4a6: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0076e4a9: lea ecx, [ebp + 0x168] */ r_ecx = (u32)(r_ebp+0x168u);
    /* 0076e4af: mov esi, eax */ r_esi = r_eax;
    /* 0076e4b1: mov edi, ebp */ r_edi = r_ebp;
    /* 0076e4b3: mov ebp, edx */ r_ebp = r_edx;
    /* 0076e4b5: mov ebx, ecx */ r_ebx = r_ecx;
L_0076e4b7:; BB(0x0076e4b7);
    /* 0076e4b7: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0076e4be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076e4c0: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0076e4c8: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0076e4d0: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x76e4d5u); f_00763498();
    /* 0076e4d5: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076e4d8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0076e4dc: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0076e4e0: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076e4e3: fadd dword ptr [eax*4 + 0x977ae8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x977ae8u));
    /* 0076e4ea: fmul dword ptr [0x977b44] */ ST(0) = ST(0) * R_F32((u32)(0x977b44u));
    /* 0076e4f0: fadd dword ptr [0x977b40] */ ST(0) = ST(0) + R_F32((u32)(0x977b40u));
    /* 0076e4f6: mov dword ptr [edi + 0x3d8], ebp */ W32((u32)(r_edi+0x3d8u), r_ebp);
    /* 0076e4fc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0076e500: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x76e505u); f_0082d7b0();
    /* 0076e505: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076e507: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x76e50cu); f_00830cd8();
    /* 0076e50c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076e50e: mov edx, ebp */ r_edx = r_ebp;
    /* 0076e510: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76e515u); f_0082d8bc();
    /* 0076e515: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076e518: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e519: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0076e51d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076e51f: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x76e524u); f_00830aa0();
    /* 0076e524: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76e529u); f_0082da80();
    /* 0076e529: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0076e52c: fcom dword ptr [0x977b3c] */ fx_compare(ST(0), R_F32((u32)(0x977b3cu))); 
    /* 0076e532: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076e534: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076e535: jae 0x76e540 */ if (!fC) goto L_0076e540;
L_0076e537:; BB(0x0076e537);
    /* 0076e537: fmul dword ptr [0x977b38] */ ST(0) = ST(0) * R_F32((u32)(0x977b38u));
    /* 0076e53d: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
L_0076e540:; BB(0x0076e540);
    /* 0076e540: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076e544: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0076e548: mov ecx, edi */ r_ecx = r_edi;
    /* 0076e54a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0076e54e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076e552: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0076e556: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0076e55a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e55c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e55d: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x76e562u); f_007b4c58();
    /* 0076e562: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e564: je 0x76e56d */ if (fZ) goto L_0076e56d;
L_0076e566:; BB(0x0076e566);
    /* 0076e566: mov eax, 1 */ r_eax = 0x1u;
    /* 0076e56b: jmp 0x76e56f */ goto L_0076e56f;
L_0076e56d:; BB(0x0076e56d);
    /* 0076e56d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076e56f:; BB(0x0076e56f);
    /* 0076e56f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e571: je 0x76e4b7 */ if (fZ) goto L_0076e4b7;
L_0076e577:; BB(0x0076e577);
    /* 0076e577: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0076e57b: mov eax, esi */ r_eax = r_esi;
    /* 0076e57d: mov ebp, edi */ r_ebp = r_edi;
    /* 0076e57f: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0076e585: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0076e589: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0076e58c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0076e590: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0076e593: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0076e596: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076e598: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x76e59du); f_0078730c();
    /* 0076e59d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0076e5a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076e5a2: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x76e5a8u); call_ind(t); }
    /* 0076e5a8: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0076e5af: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e5b2: je 0x76e5dc */ if (fZ) goto L_0076e5dc;
L_0076e5b4:; BB(0x0076e5b4);
    /* 0076e5b4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e5b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e5b7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076e5ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076e5bc: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76e5c2u); call_ind(t); }
    /* 0076e5c2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e5c4: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076e5c7: mov eax, 1 */ r_eax = 0x1u;
    /* 0076e5cc: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0076e5d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076e5d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e5d6: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76e5dcu); call_ind(t); }
L_0076e5dc:; BB(0x0076e5dc);
    /* 0076e5dc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076e5df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076e5e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076e5e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076e5e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076e5e3: ret 8 */ FN_RET(0x0076e48c); r_esp += 12; return;
}

void f_0076e5e8(void) /* sub_76E5E8 */
{
    FN_ENTER(0x0076e5e8);
    /* 0076e5e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076e5e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076e5ea: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076e5ed: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076e5ef: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0076e5f6: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e5f9: je 0x76e603 */ if (fZ) goto L_0076e603;
L_0076e5fb:; BB(0x0076e5fb);
    /* 0076e5fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076e5fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076e5ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076e600: ret 0xc */ FN_RET(0x0076e5e8); r_esp += 16; return;
L_0076e603:; BB(0x0076e603);
    /* 0076e603: mov eax, 0x42480000 */ r_eax = 0x42480000u;
    /* 0076e608: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0076e60c: mov eax, dword ptr [ebp + 0x3bc] */ r_eax = R32((u32)(r_ebp+0x3bcu));
    /* 0076e612: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076e614: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0076e618: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0076e61a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0076e61d: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0076e620: imul eax, eax, 0x5555 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5555u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0076e626: add eax, dword ptr [esp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e62a: movzx ebx, ax */ r_ebx = (u32)(u16)r_eax;
    /* 0076e62d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x76e632u); f_0082d7b0();
    /* 0076e632: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076e634: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x76e639u); f_00830cd8();
    /* 0076e639: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0076e63d: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e640: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e642: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076e644: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0076e648: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e64a: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x76e64fu); f_00830b74();
    /* 0076e64f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076e651: mov edx, ebx */ r_edx = r_ebx;
    /* 0076e653: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76e658u); f_0082d8bc();
    /* 0076e658: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076e65b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e65c: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0076e660: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076e662: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x76e667u); f_00830aa0();
    /* 0076e667: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76e66cu); f_0082da80();
    /* 0076e66c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076e66f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e670: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0076e674: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076e676: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076e677: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e67b: call 0x76e6e8 */ r_esp -= 4; W32(r_esp, 0x76e680u); f_0076e6e8();
    /* 0076e680: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e682: je 0x76e6dd */ if (fZ) goto L_0076e6dd;
L_0076e684:; BB(0x0076e684);
    /* 0076e684: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0076e687: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0076e68b: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0076e68f: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0076e692: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0076e695: mov dword ptr [ebp + 0x40], ebx */ W32((u32)(r_ebp+0x40u), r_ebx);
    /* 0076e698: mov dword ptr [ebp + 0x3d4], 3 */ W32((u32)(r_ebp+0x3d4u), 0x3u);
    /* 0076e6a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076e6a4: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x76e6a9u); f_0078730c();
    /* 0076e6a9: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0076e6b0: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e6b3: je 0x76e6dd */ if (fZ) goto L_0076e6dd;
L_0076e6b5:; BB(0x0076e6b5);
    /* 0076e6b5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e6b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e6b8: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076e6bb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076e6bd: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76e6c3u); call_ind(t); }
    /* 0076e6c3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e6c5: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076e6c8: mov eax, 0xb */ r_eax = 0xbu;
    /* 0076e6cd: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0076e6d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076e6d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e6d7: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76e6ddu); call_ind(t); }
L_0076e6dd:; BB(0x0076e6dd);
    /* 0076e6dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076e6e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076e6e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076e6e2: ret 0xc */ FN_RET(0x0076e5e8); r_esp += 16; return;
}

void f_0076e6e8(void) /* sub_76E6E8 */
{
    FN_ENTER(0x0076e6e8);
    /* 0076e6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e6e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e6ea: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0076e6ee: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0076e6f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e6f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e6f5: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x76e6fau); f_007b4c58();
    /* 0076e6fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e6fc: je 0x76e73a */ if (fZ) goto L_0076e73a;
L_0076e6fe:; BB(0x0076e6fe);
    /* 0076e6fe: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e700: je 0x76e719 */ if (fZ) goto L_0076e719;
L_0076e702:; BB(0x0076e702);
    /* 0076e702: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076e704: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e705: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e706: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x76e70bu); f_0077fffc();
    /* 0076e70b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076e70e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e710: je 0x76e719 */ if (fZ) goto L_0076e719;
L_0076e712:; BB(0x0076e712);
    /* 0076e712: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076e714: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076e715: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076e716: ret 0xc */ FN_RET(0x0076e6e8); r_esp += 16; return;
L_0076e719:; BB(0x0076e719);
    /* 0076e719: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0076e71d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076e71f: je 0x76e741 */ if (fZ) goto L_0076e741;
L_0076e721:; BB(0x0076e721);
    /* 0076e721: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0076e725: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e726: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e727: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x76e72cu); f_007a9180();
    /* 0076e72c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0076e72f: fcomp dword ptr [0x977a84] */ fx_compare(ST(0), R_F32((u32)(0x977a84u))); FPOP();
    /* 0076e735: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076e737: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076e738: jae 0x76e741 */ if (!fC) goto L_0076e741;
L_0076e73a:; BB(0x0076e73a);
    /* 0076e73a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076e73c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076e73d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076e73e: ret 0xc */ FN_RET(0x0076e6e8); r_esp += 16; return;
L_0076e741:; BB(0x0076e741);
    /* 0076e741: mov eax, 1 */ r_eax = 0x1u;
    /* 0076e746: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076e747: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076e748: ret 0xc */ FN_RET(0x0076e6e8); r_esp += 16; return;
}

void f_0076e74c(void) /* sub_76E74C */
{
    FN_ENTER(0x0076e74c);
    /* 0076e74c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076e74d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076e74f: mov eax, dword ptr [ebx + 0x3b4] */ r_eax = R32((u32)(r_ebx+0x3b4u));
    /* 0076e755: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e757: jne 0x76e78d */ if (!fZ) goto L_0076e78d;
L_0076e759:; BB(0x0076e759);
    /* 0076e759: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0076e760: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076e763: je 0x76e7c4 */ if (fZ) goto L_0076e7c4;
L_0076e765:; BB(0x0076e765);
    /* 0076e765: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e767: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e768: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0076e76a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076e76c: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76e772u); call_ind(t); }
    /* 0076e772: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e774: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0076e776: mov eax, 9 */ r_eax = 0x9u;
    /* 0076e77b: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0076e782: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076e784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e785: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76e78bu); call_ind(t); }
    /* 0076e78b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076e78c: ret  */ FN_RET(0x0076e74c); r_esp += 4; return;
L_0076e78d:; BB(0x0076e78d);
    /* 0076e78d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076e790: jne 0x76e7c4 */ if (!fZ) goto L_0076e7c4;
L_0076e792:; BB(0x0076e792);
    /* 0076e792: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0076e799: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076e79c: je 0x76e7c4 */ if (fZ) goto L_0076e7c4;
L_0076e79e:; BB(0x0076e79e);
    /* 0076e79e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e7a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e7a1: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0076e7a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076e7a5: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76e7abu); call_ind(t); }
    /* 0076e7ab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e7ad: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0076e7af: mov eax, 0xf */ r_eax = 0xfu;
    /* 0076e7b4: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0076e7bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076e7bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e7be: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76e7c4u); call_ind(t); }
L_0076e7c4:; BB(0x0076e7c4);
    /* 0076e7c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076e7c5: ret  */ FN_RET(0x0076e74c); r_esp += 4; return;
}

void f_0076e7c8(void) /* sub_76E7C8 */
{
    FN_ENTER(0x0076e7c8);
    /* 0076e7c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e7c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076e7ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076e7cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076e7cc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076e7cf: mov esi, ecx */ r_esi = r_ecx;
    /* 0076e7d1: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 0076e7d7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0076e7d9: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0076e7dd: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0076e7df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e7e1: je 0x76e9d4 */ if (fZ) goto L_0076e9d4;
L_0076e7e7:; BB(0x0076e7e7);
    /* 0076e7e7: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x76e7ecu); f_007b51c4();
    /* 0076e7ec: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0076e7ef: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076e7f1: je 0x76e806 */ if (fZ) goto L_0076e806;
L_0076e7f3:; BB(0x0076e7f3);
    /* 0076e7f3: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e7f7: mov ecx, esi */ r_ecx = r_esi;
    /* 0076e7f9: call 0x7b8618 */ r_esp -= 4; W32(r_esp, 0x76e7feu); f_007b8618();
    /* 0076e7fe: mov ebp, 0x80000 */ r_ebp = 0x80000u;
    /* 0076e803: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
L_0076e806:; BB(0x0076e806);
    /* 0076e806: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076e808: je 0x76e817 */ if (fZ) goto L_0076e817;
L_0076e80a:; BB(0x0076e80a);
    /* 0076e80a: mov ecx, esi */ r_ecx = r_esi;
    /* 0076e80c: call 0x7b8980 */ r_esp -= 4; W32(r_esp, 0x76e811u); f_007b8980();
    /* 0076e811: or ebp, 0x100000 */ {  u32 a = r_ebp; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0076e817:; BB(0x0076e817);
    /* 0076e817: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0076e81d: test dword ptr [eax + 0x18], ebp */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e820: je 0x76e9c2 */ if (fZ) goto L_0076e9c2;
L_0076e826:; BB(0x0076e826);
    /* 0076e826: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0076e82a: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0076e82e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0076e830:; BB(0x0076e830);
    /* 0076e830: mov ebx, dword ptr [ebp + 0xaad6e0] */ r_ebx = R32((u32)(r_ebp+0xaad6e0u));
    /* 0076e836: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0076e839: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e83b: je 0x76e9ce */ if (fZ) goto L_0076e9ce;
L_0076e841:; BB(0x0076e841);
    /* 0076e841: movzx eax, word ptr [ebx + 0x96] */ r_eax = (u32)R16((u32)(r_ebx+0x96u));
    /* 0076e848: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e84b: jne 0x76e9b5 */ if (!fZ) goto L_0076e9b5;
L_0076e851:; BB(0x0076e851);
    /* 0076e851: cmp ebx, dword ptr [esi + 0xac] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e857: je 0x76e9b5 */ if (fZ) goto L_0076e9b5;
L_0076e85d:; BB(0x0076e85d);
    /* 0076e85d: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e860: mov ecx, esi */ r_ecx = r_esi;
    /* 0076e862: call 0x521ba4 */ r_esp -= 4; W32(r_esp, 0x76e867u); f_00521ba4();
    /* 0076e867: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e869: je 0x76e9b5 */ if (fZ) goto L_0076e9b5;
L_0076e86f:; BB(0x0076e86f);
    /* 0076e86f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e871: je 0x76e87f */ if (fZ) goto L_0076e87f;
L_0076e873:; BB(0x0076e873);
    /* 0076e873: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076e874: mov ecx, edi */ r_ecx = r_edi;
    /* 0076e876: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x76e87bu); f_00521b18();
    /* 0076e87b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e87d: je 0x76e8bb */ if (fZ) goto L_0076e8bb;
L_0076e87f:; BB(0x0076e87f);
    /* 0076e87f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e884: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e88a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0076e88c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076e88e: call dword ptr [eax + 0x74] */ { u32 t = R32((u32)(r_eax+0x74u)); r_esp -= 4; W32(r_esp, 0x76e891u); call_ind(t); }
    /* 0076e891: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e893: je 0x76e8b0 */ if (fZ) goto L_0076e8b0;
L_0076e895:; BB(0x0076e895);
    /* 0076e895: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0076e899: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e89a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076e89b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0076e89d: mov ecx, esi */ r_ecx = r_esi;
    /* 0076e89f: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x76e8a2u); call_ind(t); }
    /* 0076e8a2: mov eax, 1 */ r_eax = 0x1u;
    /* 0076e8a7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0076e8ab: jmp 0x76e9b5 */ goto L_0076e9b5;
L_0076e8b0:; BB(0x0076e8b0);
    /* 0076e8b0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0076e8b3: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076e8b8: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_0076e8bb:; BB(0x0076e8bb);
    /* 0076e8bb: mov ecx, dword ptr [ebx + 0xa8] */ r_ecx = R32((u32)(r_ebx+0xa8u));
    /* 0076e8c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076e8c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076e8c5: jle 0x76e9b5 */ if ((fZ||fS!=fO)) goto L_0076e9b5;
L_0076e8cb:; BB(0x0076e8cb);
    /* 0076e8cb: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076e8ce: jl 0x76e97c */ if ((fS!=fO)) goto L_0076e97c;
L_0076e8d4:; BB(0x0076e8d4);
    /* 0076e8d4: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0076e8d8: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0076e8db: lea eax, [ecx - 6] */ r_eax = (u32)(r_ecx+0xfffffffau);
    /* 0076e8de: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0076e8e2: mov ebp, eax */ r_ebp = r_eax;
    /* 0076e8e4: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0076e8e7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e8e9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0076e8eb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e8ed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e8ef: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0076e8f1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e8f3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0076e8f5:; BB(0x0076e8f5);
    /* 0076e8f5: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 0076e8fb: mov esi, dword ptr [eax + edi + 0x18] */ r_esi = R32((u32)(r_eax+r_edi+0x18u));
    /* 0076e8ff: and esi, 0xfbffffff */ {  u32 a = r_esi; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0076e905: mov dword ptr [eax + edi + 0x18], esi */ W32((u32)(r_eax+r_edi+0x18u), r_esi);
    /* 0076e909: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 0076e90f: mov esi, dword ptr [eax + edi + 0x44] */ r_esi = R32((u32)(r_eax+r_edi+0x44u));
    /* 0076e913: and esi, 0xfbffffff */ {  u32 a = r_esi; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0076e919: mov dword ptr [eax + edi + 0x44], esi */ W32((u32)(r_eax+r_edi+0x44u), r_esi);
    /* 0076e91d: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 0076e923: mov esi, dword ptr [eax + edi + 0x70] */ r_esi = R32((u32)(r_eax+r_edi+0x70u));
    /* 0076e927: and esi, 0xfbffffff */ {  u32 a = r_esi; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0076e92d: mov dword ptr [eax + edi + 0x70], esi */ W32((u32)(r_eax+r_edi+0x70u), r_esi);
    /* 0076e931: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 0076e937: mov esi, dword ptr [eax + edi + 0x9c] */ r_esi = R32((u32)(r_eax+r_edi+0x9cu));
    /* 0076e93e: and esi, 0xfbffffff */ {  u32 a = r_esi; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0076e944: mov dword ptr [eax + edi + 0x9c], esi */ W32((u32)(r_eax+r_edi+0x9cu), r_esi);
    /* 0076e94b: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 0076e951: mov esi, dword ptr [eax + edi + 0xc8] */ r_esi = R32((u32)(r_eax+r_edi+0xc8u));
    /* 0076e958: and esi, 0xfbffffff */ {  u32 a = r_esi; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0076e95e: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076e961: mov dword ptr [eax + edi + 0xc8], esi */ W32((u32)(r_eax+r_edi+0xc8u), r_esi);
    /* 0076e968: add eax, 0xdc */ {  u32 a = r_eax; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e96d: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076e96f: jle 0x76e8f5 */ if ((fZ||fS!=fO)) goto L_0076e8f5;
L_0076e971:; BB(0x0076e971);
    /* 0076e971: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0076e975: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0076e979: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0076e97c:; BB(0x0076e97c);
    /* 0076e97c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0076e97f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0076e982: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e984: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0076e986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e98a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0076e98c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e98e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0076e990:; BB(0x0076e990);
    /* 0076e990: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 0076e996: mov esi, dword ptr [eax + edi + 0x18] */ r_esi = R32((u32)(r_eax+r_edi+0x18u));
    /* 0076e99a: and esi, 0xfbffffff */ {  u32 a = r_esi; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0076e9a0: mov dword ptr [eax + edi + 0x18], esi */ W32((u32)(r_eax+r_edi+0x18u), r_esi);
    /* 0076e9a4: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076e9a7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076e9aa: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076e9ac: jl 0x76e990 */ if ((fS!=fO)) goto L_0076e990;
L_0076e9ae:; BB(0x0076e9ae);
    /* 0076e9ae: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0076e9b2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0076e9b5:; BB(0x0076e9b5);
    /* 0076e9b5: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076e9b8: jl 0x76e830 */ if ((fS!=fO)) goto L_0076e830;
L_0076e9be:; BB(0x0076e9be);
    /* 0076e9be: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_0076e9c2:; BB(0x0076e9c2);
    /* 0076e9c2: mov eax, ebx */ r_eax = r_ebx;
    /* 0076e9c4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076e9c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076e9c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076e9c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076e9ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076e9cb: ret 0xc */ FN_RET(0x0076e7c8); r_esp += 16; return;
L_0076e9ce:; BB(0x0076e9ce);
    /* 0076e9ce: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0076e9d2: jmp 0x76e9c2 */ goto L_0076e9c2;
L_0076e9d4:; BB(0x0076e9d4);
    /* 0076e9d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076e9d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076e9d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076e9da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076e9db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076e9dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076e9dd: ret 0xc */ FN_RET(0x0076e7c8); r_esp += 16; return;
}

void f_0076e9e0(void)
{
    FN_ENTER(0x0076e9e0);
    /* 0076e9e0: mov dword ptr [0xa9b0ec], 0x3f800000 */ W32((u32)(0xa9b0ecu), 0x3f800000u);
    /* 0076e9ea: mov ecx, 0xa9b114 */ r_ecx = 0xa9b114u;
    /* 0076e9ef: mov dword ptr [0xa9b0f0], 0x41000000 */ W32((u32)(0xa9b0f0u), 0x41000000u);
    /* 0076e9f9: mov dword ptr [0xa9b0f4], 0x3fc00000 */ W32((u32)(0xa9b0f4u), 0x3fc00000u);
    /* 0076ea03: mov dword ptr [0xa9b0e8], 0x3fd55555 */ W32((u32)(0xa9b0e8u), 0x3fd55555u);
    /* 0076ea0d: mov dword ptr [0xa9b0e4], 0x3fd55555 */ W32((u32)(0xa9b0e4u), 0x3fd55555u);
    /* 0076ea17: mov dword ptr [0xa9b0e0], 0x41200000 */ W32((u32)(0xa9b0e0u), 0x41200000u);
    /* 0076ea21: call 0x76d92c */ r_esp -= 4; W32(r_esp, 0x76ea26u); f_0076d92c();
    /* 0076ea26: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ea2b: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x76ea30u); f_0085909d();
    /* 0076ea30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076ea31: ret  */ FN_RET(0x0076e9e0); r_esp += 4; return;
}

void f_0076ea34(void) /* sub_76EA34 */
{
    FN_ENTER(0x0076ea34);
    /* 0076ea34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ea35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ea36: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076ea39: mov esi, ecx */ r_esi = r_ecx;
    /* 0076ea3b: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0076ea3f: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0076ea46: lea ecx, [esi + 0x168] */ r_ecx = (u32)(r_esi+0x168u);
    /* 0076ea4c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0076ea54: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0076ea5c: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x76ea61u); f_00763498();
    /* 0076ea61: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076ea64: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0076ea68: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0076ea6c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076ea6f: fadd dword ptr [eax*4 + 0x977ae0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x977ae0u));
    /* 0076ea76: fmul dword ptr [0x977b18] */ ST(0) = ST(0) * R_F32((u32)(0x977b18u));
    /* 0076ea7c: fadd dword ptr [0x977b14] */ ST(0) = ST(0) + R_F32((u32)(0x977b14u));
    /* 0076ea82: mov dword ptr [esi + 0x3d8], ebx */ W32((u32)(r_esi+0x3d8u), r_ebx);
    /* 0076ea88: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0076ea8c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x76ea91u); f_0082d7b0();
    /* 0076ea91: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076ea93: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x76ea98u); f_00830cd8();
    /* 0076ea98: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076ea9a: mov edx, ebx */ r_edx = r_ebx;
    /* 0076ea9c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76eaa1u); f_0082d8bc();
    /* 0076eaa1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076eaa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076eaa5: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0076eaa9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076eaab: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x76eab0u); f_00830aa0();
    /* 0076eab0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76eab5u); f_0082da80();
    /* 0076eab5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0076eab8: fcom dword ptr [0x977b10] */ fx_compare(ST(0), R_F32((u32)(0x977b10u))); 
    /* 0076eabe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076eac0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076eac1: jae 0x76eac9 */ if (!fC) goto L_0076eac9;
L_0076eac3:; BB(0x0076eac3);
    /* 0076eac3: fmul dword ptr [0x977b0c] */ ST(0) = ST(0) * R_F32((u32)(0x977b0cu));
L_0076eac9:; BB(0x0076eac9);
    /* 0076eac9: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0076eacd: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0076eacf: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076ead3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0076ead6: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0076eada: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0076eadd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076eae0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076eae1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076eae2: ret 8 */ FN_RET(0x0076ea34); r_esp += 12; return;
}

void f_0076eae8(void) /* sub_76EAE8 */
{
    FN_ENTER(0x0076eae8);
    /* 0076eae8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076eae9: mov ebp, esp */ r_ebp = r_esp;
    /* 0076eaeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076eaed: push 0x8f3f0c */ { u32 v = 0x8f3f0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076eaf2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076eaf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076eaf9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076eb00: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076eb03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076eb06: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076eb09: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076eb0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076eb0f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0076eb14: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0076eb1b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76eb20u); f_008581c5();
    /* 0076eb20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076eb21: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0076eb24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076eb26: je 0x76ebce */ if (fZ) goto L_0076ebce;
L_0076eb2c:; BB(0x0076eb2c);
    /* 0076eb2c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0076eb33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076eb3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076eb3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076eb3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076eb40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076eb41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076eb42: push 0x9f7b3c */ { u32 v = 0x9f7b3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076eb47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076eb49: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x76eb4eu); f_005b7a84();
    /* 0076eb4e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076eb51: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0076eb58:; BB(0x0076eb58);
    /* 0076eb58: mov dword ptr [0xa9b0f8], edx */ W32((u32)(0xa9b0f8u), r_edx);
    /* 0076eb5e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076eb65: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076eb67: je 0x76eb90 */ if (fZ) goto L_0076eb90;
L_0076eb69:; BB(0x0076eb69);
    /* 0076eb69: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0076eb6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076eb71: je 0x76eb90 */ if (fZ) goto L_0076eb90;
L_0076eb73:; BB(0x0076eb73);
    /* 0076eb73: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0076eb79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076eb7b: je 0x76eb90 */ if (fZ) goto L_0076eb90;
L_0076eb7d:; BB(0x0076eb7d);
    /* 0076eb7d: call 0x76f1b8 */ r_esp -= 4; W32(r_esp, 0x76eb82u); f_0076f1b8();
    /* 0076eb82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076eb85: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076eb8c: mov esp, ebp */ r_esp = r_ebp;
    /* 0076eb8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076eb8f: ret  */ FN_RET(0x0076eae8); r_esp += 4; return;
L_0076eb90:; BB(0x0076eb90);
    /* 0076eb90: push dword ptr [0x9f7b3c] */ { u32 v = R32((u32)(0x9f7b3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076eb96: push 0x92b154 */ { u32 v = 0x92b154u; r_esp -= 4; W32(r_esp, v); }
    /* 0076eb9b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x76eba0u); f_0061cdb0();
    /* 0076eba0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076eba3: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076eba9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ebab: je 0x76ebc0 */ if (fZ) goto L_0076ebc0;
L_0076ebad:; BB(0x0076ebad);
    /* 0076ebad: je 0x76ebb6 */ if (fZ) goto L_0076ebb6;
L_0076ebaf:; BB(0x0076ebaf);
    /* 0076ebaf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ebb1: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x76ebb6u); f_004066a8();
L_0076ebb6:; BB(0x0076ebb6);
    /* 0076ebb6: mov dword ptr [0xa9b0f8], 0 */ W32((u32)(0xa9b0f8u), 0x0u);
L_0076ebc0:; BB(0x0076ebc0);
    /* 0076ebc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076ebc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076ebca: mov esp, ebp */ r_esp = r_ebp;
    /* 0076ebcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ebcd: ret  */ FN_RET(0x0076eae8); r_esp += 4; return;
L_0076ebce:; BB(0x0076ebce);
    /* 0076ebce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076ebd0: jmp 0x76eb58 */ goto L_0076eb58;
}

void f_0076ebd4(void) /* sub_76EBD4 */
{
    FN_ENTER(0x0076ebd4);
    /* 0076ebd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ebd5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076ebd8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076ebda: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076ebdc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076ebdf: push dword ptr [ebp + 0x3d8] */ { u32 v = R32((u32)(r_ebp+0x3d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076ebe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ebe6: call 0x76ea34 */ r_esp -= 4; W32(r_esp, 0x76ebebu); f_0076ea34();
    /* 0076ebeb: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0076ebee: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0076ebf2: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0076ebf5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076ebf9: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0076ebfc: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0076ebff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076ec01: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x76ec06u); f_0078730c();
    /* 0076ec06: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076ec09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ec0a: ret  */ FN_RET(0x0076ebd4); r_esp += 4; return;
}

void f_0076ec0c(void) /* sub_76EC0C */
{
    FN_ENTER(0x0076ec0c);
    /* 0076ec0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ec0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ec0e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076ec10: mov edx, dword ptr [ebp + 0x414] */ r_edx = R32((u32)(r_ebp+0x414u));
    /* 0076ec16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ec18: mov dword ptr [ebp + 0x3d0], 0x3c */ W32((u32)(r_ebp+0x3d0u), 0x3cu);
    /* 0076ec22: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0076ec25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076ec27: jle 0x76ec3f */ if ((fZ||fS!=fO)) goto L_0076ec3f;
L_0076ec29:; BB(0x0076ec29);
    /* 0076ec29: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0076ec2c:; BB(0x0076ec2c);
    /* 0076ec2c: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0076ec2e: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0076ec31: mov dword ptr [edi + eax*4], ecx */ W32((u32)(r_edi+r_eax*4), r_ecx);
    /* 0076ec34: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076ec37: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076ec3a: jl 0x76ec2c */ if ((fS!=fO)) goto L_0076ec2c;
L_0076ec3c:; BB(0x0076ec3c);
    /* 0076ec3c: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0076ec3f:; BB(0x0076ec3f);
    /* 0076ec3f: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0076ec46: mov ecx, dword ptr [ebp + 0x410] */ r_ecx = R32((u32)(r_ebp+0x410u));
    /* 0076ec4c: lea eax, [ebp + 0x3e4] */ r_eax = (u32)(r_ebp+0x3e4u);
    /* 0076ec52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ec53: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x76ec58u); f_007b9ccc();
    /* 0076ec58: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0076ec5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ec5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ec5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ec5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ec60: push 0x6ed */ { u32 v = 0x6edu; r_esp -= 4; W32(r_esp, v); }
    /* 0076ec65: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x76ec6au); f_00814298();
    /* 0076ec6a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076ec6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ec6e: ret  */ FN_RET(0x0076ec0c); r_esp += 4; return;
}

void f_0076ec70(void) /* sub_76EC70 */
{
    FN_ENTER(0x0076ec70);
    /* 0076ec70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ec71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ec72: mov edx, dword ptr [ecx + 0x414] */ r_edx = R32((u32)(r_ecx+0x414u));
    /* 0076ec78: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 0076ec7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ec7d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076ec7f: jle 0x76ec97 */ if ((fZ||fS!=fO)) goto L_0076ec97;
L_0076ec81:; BB(0x0076ec81);
    /* 0076ec81: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0076ec84:; BB(0x0076ec84);
    /* 0076ec84: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0076ec86: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 0076ec89: mov dword ptr [edi + eax*4], ebp */ W32((u32)(r_edi+r_eax*4), r_ebp);
    /* 0076ec8c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076ec8f: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076ec92: jl 0x76ec84 */ if ((fS!=fO)) goto L_0076ec84;
L_0076ec94:; BB(0x0076ec94);
    /* 0076ec94: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0076ec97:; BB(0x0076ec97);
    /* 0076ec97: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0076ec9e: mov ecx, dword ptr [ecx + 0x410] */ r_ecx = R32((u32)(r_ecx+0x410u));
    /* 0076eca4: push 0x9f77c4 */ { u32 v = 0x9f77c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076eca9: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x76ecaeu); f_007b9ccc();
    /* 0076ecae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076ecaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ecb0: ret  */ FN_RET(0x0076ec70); r_esp += 4; return;
}

void f_0076ecb4(void) /* sub_76ECB4 */
{
    FN_ENTER(0x0076ecb4);
    /* 0076ecb4: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 0076ecba: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ecbf: je 0x76eccc */ if (fZ) goto L_0076eccc;
L_0076ecc1:; BB(0x0076ecc1);
    /* 0076ecc1: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ecc6: mov dword ptr [ecx + 0x3c0], eax */ W32((u32)(r_ecx+0x3c0u), r_eax);
L_0076eccc:; BB(0x0076eccc);
    /* 0076eccc: ret  */ FN_RET(0x0076ecb4); r_esp += 4; return;
}

void f_0076ecd0(void) /* sub_76ECD0 */
{
    FN_ENTER(0x0076ecd0);
    /* 0076ecd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ecd1: mov ebx, esp */ r_ebx = r_esp;
    /* 0076ecd3: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0076ecd6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ecd7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ecd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ecd9: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076ecdf: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076ece1: mov edx, dword ptr [ebp + 0x414] */ r_edx = R32((u32)(r_ebp+0x414u));
    /* 0076ece7: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0076ecea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ecec: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076ecee: jle 0x76ed00 */ if ((fZ||fS!=fO)) goto L_0076ed00;
L_0076ecf0:; BB(0x0076ecf0);
    /* 0076ecf0: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0076ecf2: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0076ecf5: mov dword ptr [edi + eax*4], esi */ W32((u32)(r_edi+r_eax*4), r_esi);
    /* 0076ecf8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076ecfb: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076ecfe: jl 0x76ecf0 */ if ((fS!=fO)) goto L_0076ecf0;
L_0076ed00:; BB(0x0076ed00);
    /* 0076ed00: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0076ed07: mov ecx, dword ptr [ebp + 0x410] */ r_ecx = R32((u32)(r_ebp+0x410u));
    /* 0076ed0d: push 0x9f7798 */ { u32 v = 0x9f7798u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ed12: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x76ed17u); f_007b9ccc();
    /* 0076ed17: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0076ed1a: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ed1f: jne 0x76ed2c */ if (!fZ) goto L_0076ed2c;
L_0076ed21:; BB(0x0076ed21);
    /* 0076ed21: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0076ed24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076ed26: call dword ptr [eax + 0xd0] */ { u32 t = R32((u32)(r_eax+0xd0u)); r_esp -= 4; W32(r_esp, 0x76ed2cu); call_ind(t); }
L_0076ed2c:; BB(0x0076ed2c);
    /* 0076ed2c: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 0076ed33: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ed36: jne 0x76edbf */ if (!fZ) goto L_0076edbf;
L_0076ed3c:; BB(0x0076ed3c);
    /* 0076ed3c: mov edi, dword ptr [0xa9b068] */ r_edi = R32((u32)(0xa9b068u));
    /* 0076ed42: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ed44: je 0x76edba */ if (fZ) goto L_0076edba;
L_0076ed46:; BB(0x0076ed46);
    /* 0076ed46: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0076ed4b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x76ed50u); f_0082d990();
    /* 0076ed50: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 0076ed53: mov ecx, esi */ r_ecx = r_esi;
    /* 0076ed55: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x76ed5au); f_0082d838();
    /* 0076ed5a: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0076ed5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076ed5f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76ed64u); f_0082d8bc();
    /* 0076ed64: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 0076ed68: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x76ed6du); f_00831650();
    /* 0076ed6d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0076ed70: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0076ed74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ed76: mov edi, eax */ r_edi = r_eax;
L_0076ed78:; BB(0x0076ed78);
    /* 0076ed78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ed7a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ed7b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ed7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ed7e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0076ed82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ed83: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0076ed87: call 0x661448 */ r_esp -= 4; W32(r_esp, 0x76ed8cu); f_00661448();
    /* 0076ed8c: mov ebp, eax */ r_ebp = r_eax;
    /* 0076ed8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ed90: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076ed92: call 0x660ec4 */ r_esp -= 4; W32(r_esp, 0x76ed97u); f_00660ec4();
    /* 0076ed97: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 0076ed9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ed9c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076ed9e: call 0x661124 */ r_esp -= 4; W32(r_esp, 0x76eda3u); f_00661124();
    /* 0076eda3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076eda6: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076eda9: jl 0x76ed78 */ if ((fS!=fO)) goto L_0076ed78;
L_0076edab:; BB(0x0076edab);
    /* 0076edab: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0076edb0: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x76edb5u); f_0082eb80();
    /* 0076edb5: jmp 0x76ee34 */ goto L_0076ee34;
L_0076edba:; BB(0x0076edba);
    /* 0076edba: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 0076edbd: jmp 0x76ee34 */ goto L_0076ee34;
L_0076edbf:; BB(0x0076edbf);
    /* 0076edbf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076edc2: jne 0x76ee31 */ if (!fZ) goto L_0076ee31;
L_0076edc4:; BB(0x0076edc4);
    /* 0076edc4: mov edi, dword ptr [0xa9b068] */ r_edi = R32((u32)(0xa9b068u));
    /* 0076edca: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076edcc: je 0x76ee2c */ if (fZ) goto L_0076ee2c;
L_0076edce:; BB(0x0076edce);
    /* 0076edce: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0076edd3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x76edd8u); f_0082d990();
    /* 0076edd8: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 0076eddb: mov ecx, esi */ r_ecx = r_esi;
    /* 0076eddd: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x76ede2u); f_0082d838();
    /* 0076ede2: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0076ede5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076ede7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76edecu); f_0082d8bc();
    /* 0076edec: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0076edf0: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x76edf5u); f_00831650();
    /* 0076edf5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0076edf8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076edfa: mov edi, eax */ r_edi = r_eax;
L_0076edfc:; BB(0x0076edfc);
    /* 0076edfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076edfe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076edff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee00: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee03: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0076ee07: call 0x661448 */ r_esp -= 4; W32(r_esp, 0x76ee0cu); f_00661448();
    /* 0076ee0c: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0076ee10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee11: mov ecx, eax */ r_ecx = r_eax;
    /* 0076ee13: call 0x661124 */ r_esp -= 4; W32(r_esp, 0x76ee18u); f_00661124();
    /* 0076ee18: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076ee1b: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076ee1e: jl 0x76edfc */ if ((fS!=fO)) goto L_0076edfc;
L_0076ee20:; BB(0x0076ee20);
    /* 0076ee20: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0076ee25: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x76ee2au); f_0082eb80();
    /* 0076ee2a: jmp 0x76ee34 */ goto L_0076ee34;
L_0076ee2c:; BB(0x0076ee2c);
    /* 0076ee2c: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 0076ee2f: jmp 0x76ee34 */ goto L_0076ee34;
L_0076ee31:; BB(0x0076ee31);
    /* 0076ee31: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
L_0076ee34:; BB(0x0076ee34);
    /* 0076ee34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ee36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee39: push 0x6ee */ { u32 v = 0x6eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee3e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x76ee43u); f_00814298();
    /* 0076ee43: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076ee49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ee4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076ee4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076ee4c: mov esp, ebx */ r_esp = r_ebx;
    /* 0076ee4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076ee4f: ret  */ FN_RET(0x0076ecd0); r_esp += 4; return;
}

void f_0076ee50(void) /* sub_76EE50 */
{
    FN_ENTER(0x0076ee50);
    /* 0076ee50: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076ee53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ee55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee58: push 0x6ec */ { u32 v = 0x6ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee5d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x76ee62u); f_00814298();
    /* 0076ee62: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076ee65: ret  */ FN_RET(0x0076ee50); r_esp += 4; return;
}

void f_0076ee68(void) /* sub_76EE68 */
{
    FN_ENTER(0x0076ee68);
    /* 0076ee68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee69: mov ebx, esp */ r_ebx = r_esp;
    /* 0076ee6b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0076ee6e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee6f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ee71: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076ee74: mov esi, ecx */ r_esi = r_ecx;
    /* 0076ee76: mov edx, dword ptr [esi + 0x414] */ r_edx = R32((u32)(r_esi+0x414u));
    /* 0076ee7c: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 0076ee7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ee81: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076ee83: jle 0x76ee96 */ if ((fZ||fS!=fO)) goto L_0076ee96;
L_0076ee85:; BB(0x0076ee85);
    /* 0076ee85: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0076ee87: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0076ee8a: mov dword ptr [ebp + eax*4], ecx */ W32((u32)(r_ebp+r_eax*4), r_ecx);
    /* 0076ee8e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076ee91: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076ee94: jl 0x76ee85 */ if ((fS!=fO)) goto L_0076ee85;
L_0076ee96:; BB(0x0076ee96);
    /* 0076ee96: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0076ee9d: mov ecx, dword ptr [esi + 0x410] */ r_ecx = R32((u32)(r_esi+0x410u));
    /* 0076eea3: push 0x9f776c */ { u32 v = 0x9f776cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076eea8: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x76eeadu); f_007b9ccc();
    /* 0076eead: mov edi, dword ptr [0xa9b068] */ r_edi = R32((u32)(0xa9b068u));
    /* 0076eeb3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076eeb5: je 0x76ef27 */ if (fZ) goto L_0076ef27;
L_0076eeb7:; BB(0x0076eeb7);
    /* 0076eeb7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0076eebc: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x76eec1u); f_0082d990();
    /* 0076eec1: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0076eec4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076eec6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x76eecbu); f_0082d838();
    /* 0076eecb: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0076eece: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076eed0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76eed5u); f_0082d8bc();
    /* 0076eed5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0076eed8: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x76eeddu); f_00831650();
    /* 0076eedd: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 0076eee1: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 0076eee5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076eee7: mov edi, eax */ r_edi = r_eax;
L_0076eee9:; BB(0x0076eee9);
    /* 0076eee9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076eeeb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076eeec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076eeed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076eeef: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 0076eef3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076eef4: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 0076eef8: call 0x661448 */ r_esp -= 4; W32(r_esp, 0x76eefdu); f_00661448();
    /* 0076eefd: mov esi, eax */ r_esi = r_eax;
    /* 0076eeff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ef01: mov ecx, esi */ r_ecx = r_esi;
    /* 0076ef03: call 0x660ec4 */ r_esp -= 4; W32(r_esp, 0x76ef08u); f_00660ec4();
    /* 0076ef08: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0076ef0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ef0c: mov ecx, esi */ r_ecx = r_esi;
    /* 0076ef0e: call 0x661124 */ r_esp -= 4; W32(r_esp, 0x76ef13u); f_00661124();
    /* 0076ef13: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076ef16: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076ef19: jl 0x76eee9 */ if ((fS!=fO)) goto L_0076eee9;
L_0076ef1b:; BB(0x0076ef1b);
    /* 0076ef1b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0076ef20: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x76ef25u); f_0082eb80();
    /* 0076ef25: jmp 0x76ef2a */ goto L_0076ef2a;
L_0076ef27:; BB(0x0076ef27);
    /* 0076ef27: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
L_0076ef2a:; BB(0x0076ef2a);
    /* 0076ef2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ef2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ef2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ef2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ef2f: push 0x6eb */ { u32 v = 0x6ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0076ef34: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x76ef39u); f_00814298();
    /* 0076ef39: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076ef3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ef3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076ef3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076ef3f: mov esp, ebx */ r_esp = r_ebx;
    /* 0076ef41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076ef42: ret  */ FN_RET(0x0076ee68); r_esp += 4; return;
}

void f_0076ef44(void) /* sub_76EF44 */
{
    FN_ENTER(0x0076ef44);
    /* 0076ef44: mov eax, dword ptr [ecx + 0x3b4] */ r_eax = R32((u32)(r_ecx+0x3b4u));
    /* 0076ef4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ef4c: jne 0x76ef6d */ if (!fZ) goto L_0076ef6d;
L_0076ef4e:; BB(0x0076ef4e);
    /* 0076ef4e: mov eax, dword ptr [ecx + 0x3b8] */ r_eax = R32((u32)(r_ecx+0x3b8u));
    /* 0076ef54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ef56: jne 0x76ef63 */ if (!fZ) goto L_0076ef63;
L_0076ef58:; BB(0x0076ef58);
    /* 0076ef58: mov dword ptr [ecx + 0x3c4], 4 */ W32((u32)(r_ecx+0x3c4u), 0x4u);
    /* 0076ef62: ret  */ FN_RET(0x0076ef44); r_esp += 4; return;
L_0076ef63:; BB(0x0076ef63);
    /* 0076ef63: mov dword ptr [ecx + 0x3c4], 8 */ W32((u32)(r_ecx+0x3c4u), 0x8u);
L_0076ef6d:; BB(0x0076ef6d);
    /* 0076ef6d: ret  */ FN_RET(0x0076ef44); r_esp += 4; return;
}

void f_0076ef70(void) /* sub_76EF70 */
{
    FN_ENTER(0x0076ef70);
    /* 0076ef70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ef71: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076ef74: mov esi, ecx */ r_esi = r_ecx;
    /* 0076ef76: mov eax, dword ptr [esi + 0x3c0] */ r_eax = R32((u32)(r_esi+0x3c0u));
    /* 0076ef7c: and eax, 0xffffef40 */ {  u32 a = r_eax; u32 b = 0xffffef40u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0076ef81: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0076ef85: mov dword ptr [esi + 0x3c0], eax */ W32((u32)(r_esi+0x3c0u), r_eax);
    /* 0076ef8b: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0076ef8e: mov dword ptr [esi + 0x3c4], ecx */ W32((u32)(r_esi+0x3c4u), r_ecx);
    /* 0076ef94: movsx ecx, word ptr [edx + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x10u));
    /* 0076ef98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076ef9a: jl 0x76efa3 */ if ((fS!=fO)) goto L_0076efa3;
L_0076ef9c:; BB(0x0076ef9c);
    /* 0076ef9c: mov word ptr [esi + 0xb8], cx */ W16((u32)(r_esi+0xb8u), (u16)r_ecx);
L_0076efa3:; BB(0x0076efa3);
    /* 0076efa3: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0076efa6: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076efa8: mov dword ptr [esi + 0x3c0], eax */ W32((u32)(r_esi+0x3c0u), r_eax);
    /* 0076efae: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076efb3: je 0x76efe4 */ if (fZ) goto L_0076efe4;
L_0076efb5:; BB(0x0076efb5);
    /* 0076efb5: mov ecx, esi */ r_ecx = r_esi;
    /* 0076efb7: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x76efbcu); f_007751b0();
    /* 0076efbc: fld dword ptr [0x977b08] */ FPUSH(R_F32((u32)(0x977b08u)));
    /* 0076efc2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0076efc4: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0076efc7: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0076efcb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076efd0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0076efd4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0076efd8: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0076efdb: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0076efde: mov eax, dword ptr [esi + 0x3c0] */ r_eax = R32((u32)(r_esi+0x3c0u));
L_0076efe4:; BB(0x0076efe4);
    /* 0076efe4: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076efe9: je 0x76eff6 */ if (fZ) goto L_0076eff6;
L_0076efeb:; BB(0x0076efeb);
    /* 0076efeb: and eax, 0xfffff0ff */ {  u32 a = r_eax; u32 b = 0xfffff0ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0076eff0: mov dword ptr [esi + 0x3c0], eax */ W32((u32)(r_esi+0x3c0u), r_eax);
L_0076eff6:; BB(0x0076eff6);
    /* 0076eff6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076eff9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076effa: ret 4 */ FN_RET(0x0076ef70); r_esp += 8; return;
}

