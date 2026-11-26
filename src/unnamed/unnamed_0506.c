#include "protos.h"

void f_005062f9(void)
{
    FN_ENTER(0x005062f9);
}

void f_005063d8(void) /* sub_5063D8 */
{
    FN_ENTER(0x005063d8);
    /* 005063d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005063d9: mov ebx, esp */ r_ebx = r_esp;
    /* 005063db: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005063de: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005063e1: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005063e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005063e8: je 0x5064d9 */ if (fZ) goto L_005064d9;
L_005063ee:; BB(0x005063ee);
    /* 005063ee: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 005063f1: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005063f6: je 0x5064d9 */ if (fZ) goto L_005064d9;
L_005063fc:; BB(0x005063fc);
    /* 005063fc: mov eax, dword ptr [0x91fde0] */ r_eax = R32((u32)(0x91fde0u));
    /* 00506401: mov ecx, dword ptr [0x91fde4] */ r_ecx = R32((u32)(0x91fde4u));
    /* 00506407: mov edx, dword ptr [0x91fde8] */ r_edx = R32((u32)(0x91fde8u));
    /* 0050640d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00506410: mov eax, dword ptr [0x91fdec] */ r_eax = R32((u32)(0x91fdecu));
    /* 00506415: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00506419: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0050641d: mov edx, 0xacc040 */ r_edx = 0xacc040u;
    /* 00506422: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00506426: mov eax, dword ptr [0x91fdf0] */ r_eax = R32((u32)(0x91fdf0u));
    /* 0050642b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050642f: mov eax, dword ptr [0x91fdf4] */ r_eax = R32((u32)(0x91fdf4u));
    /* 00506434: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00506438: mov eax, dword ptr [0x91fdf8] */ r_eax = R32((u32)(0x91fdf8u));
    /* 0050643d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00506441: mov eax, dword ptr [0x91fdfc] */ r_eax = R32((u32)(0x91fdfcu));
    /* 00506446: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0050644a: mov eax, dword ptr [0x91fe00] */ r_eax = R32((u32)(0x91fe00u));
    /* 0050644f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00506453: mov eax, dword ptr [0x91fe04] */ r_eax = R32((u32)(0x91fe04u));
    /* 00506458: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0050645c: mov eax, dword ptr [0x91fe08] */ r_eax = R32((u32)(0x91fe08u));
    /* 00506461: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00506465: mov eax, dword ptr [0x91fe0c] */ r_eax = R32((u32)(0x91fe0cu));
    /* 0050646a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050646e: mov eax, dword ptr [0x91fe10] */ r_eax = R32((u32)(0x91fe10u));
    /* 00506473: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00506477: mov eax, dword ptr [0x91fe14] */ r_eax = R32((u32)(0x91fe14u));
    /* 0050647c: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00506480: mov eax, dword ptr [0x91fe18] */ r_eax = R32((u32)(0x91fe18u));
    /* 00506485: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00506489: mov eax, dword ptr [0x91fe1c] */ r_eax = R32((u32)(0x91fe1cu));
    /* 0050648e: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00506492: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00506495: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x50649au); f_00831308();
    /* 0050649a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050649c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005064a1: mov edx, 0x9ba59c */ r_edx = 0x9ba59cu;
    /* 005064a6: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x5064abu); f_00835e68();
    /* 005064ab: mov edx, dword ptr [0x9ba5b0] */ r_edx = R32((u32)(0x9ba5b0u));
    /* 005064b1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005064b6: call 0x835ee0 */ r_esp -= 4; W32(r_esp, 0x5064bbu); f_00835ee0();
    /* 005064bb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005064be: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005064c3: call 0x835cfc */ r_esp -= 4; W32(r_esp, 0x5064c8u); f_00835cfc();
    /* 005064c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005064ca: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005064cf: mov edx, 1 */ r_edx = 0x1u;
    /* 005064d4: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x5064d9u); f_00835e1c();
L_005064d9:; BB(0x005064d9);
    /* 005064d9: mov esp, ebx */ r_esp = r_ebx;
    /* 005064db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005064dc: ret  */ FN_RET(0x005063d8); r_esp += 4; return;
}

void f_005064e0(void) /* sub_5064E0 */
{
    FN_ENTER(0x005064e0);
    /* 005064e0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005064e4: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005064e9: je 0x50651b */ if (fZ) goto L_0050651b;
L_005064eb:; BB(0x005064eb);
    /* 005064eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005064ed: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005064f2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005064f4: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x5064f9u); f_00835e68();
    /* 005064f9: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005064fe: call 0x835f44 */ r_esp -= 4; W32(r_esp, 0x506503u); f_00835f44();
    /* 00506503: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00506508: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x50650du); f_00835de8();
    /* 0050650d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050650f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00506514: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00506516: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x50651bu); f_00835e1c();
L_0050651b:; BB(0x0050651b);
    /* 0050651b: ret  */ FN_RET(0x005064e0); r_esp += 4; return;
}

void f_0050651c(void) /* sub_50651C */
{
    FN_ENTER(0x0050651c);
    /* 0050651c: mov dword ptr [0xa72b6c], 0x3f800000 */ W32((u32)(0xa72b6cu), 0x3f800000u);
    /* 00506526: mov dword ptr [0xa72b70], 0x41000000 */ W32((u32)(0xa72b70u), 0x41000000u);
    /* 00506530: mov dword ptr [0xa72b74], 0x3fc00000 */ W32((u32)(0xa72b74u), 0x3fc00000u);
    /* 0050653a: ret  */ FN_RET(0x0050651c); r_esp += 4; return;
}

void f_0050653c(void) /* sub_50653C */
{
    FN_ENTER(0x0050653c);
    /* 0050653c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050653f: call 0x505b00 */ r_esp -= 4; W32(r_esp, 0x506544u); f_00505b00();
    /* 00506544: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506546: jne 0x506556 */ if (!fZ) goto L_00506556;
L_00506548:; BB(0x00506548);
    /* 00506548: mov dword ptr [0xa72b78], 0 */ W32((u32)(0xa72b78u), 0x0u);
    /* 00506552: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00506555: ret  */ FN_RET(0x0050653c); r_esp += 4; return;
L_00506556:; BB(0x00506556);
    /* 00506556: mov dword ptr [0xa72b90], 0 */ W32((u32)(0xa72b90u), 0x0u);
    /* 00506560: call 0x502e40 */ r_esp -= 4; W32(r_esp, 0x506565u); f_00502e40();
    /* 00506565: push dword ptr [0xaf0354] */ { u32 v = R32((u32)(0xaf0354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050656b: push dword ptr [0xaf0350] */ { u32 v = R32((u32)(0xaf0350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00506571: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00506572: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00506576: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00506578: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x50657du); f_0082a9dc();
    /* 0050657d: push 0x8800000 */ { u32 v = 0x8800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00506582: mov ecx, dword ptr [0x9ba59c] */ r_ecx = R32((u32)(0x9ba59cu));
    /* 00506588: push 0x901 */ { u32 v = 0x901u; r_esp -= 4; W32(r_esp, v); }
    /* 0050658d: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00506591: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x506596u); f_0082aa0c();
    /* 00506596: mov ecx, 0x9ba59c */ r_ecx = 0x9ba59cu;
    /* 0050659b: mov edx, 2 */ r_edx = 0x2u;
    /* 005065a0: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x5065a5u); f_00829e74();
    /* 005065a5: mov eax, dword ptr [0x9ba59c] */ r_eax = R32((u32)(0x9ba59cu));
    /* 005065aa: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005065ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005065af: je 0x5065ca */ if (fZ) goto L_005065ca;
L_005065b1:; BB(0x005065b1);
    /* 005065b1: mov ecx, 0x9ba59c */ r_ecx = 0x9ba59cu;
    /* 005065b6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5065bbu); f_00829cc8();
    /* 005065bb: call 0x835e40 */ r_esp -= 4; W32(r_esp, 0x5065c0u); f_00835e40();
    /* 005065c0: call 0x83ae98 */ r_esp -= 4; W32(r_esp, 0x5065c5u); f_0083ae98();
    /* 005065c5: call 0x835e60 */ r_esp -= 4; W32(r_esp, 0x5065cau); f_00835e60();
L_005065ca:; BB(0x005065ca);
    /* 005065ca: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5065cfu); f_00807ac0();
    /* 005065cf: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005065d2: jne 0x5065ec */ if (!fZ) goto L_005065ec;
L_005065d4:; BB(0x005065d4);
    /* 005065d4: mov dword ptr [0xa72b78], 0 */ W32((u32)(0xa72b78u), 0x0u);
    /* 005065de: mov dword ptr [0x9ba5b0], 4 */ W32((u32)(0x9ba5b0u), 0x4u);
    /* 005065e8: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005065eb: ret  */ FN_RET(0x0050653c); r_esp += 4; return;
L_005065ec:; BB(0x005065ec);
    /* 005065ec: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005065ef: jl 0x50660e */ if ((fS!=fO)) goto L_0050660e;
L_005065f1:; BB(0x005065f1);
    /* 005065f1: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005065f4: jg 0x50660e */ if ((!fZ&&fS==fO)) goto L_0050660e;
L_005065f6:; BB(0x005065f6);
    /* 005065f6: mov dword ptr [0x9ba5b0], 4 */ W32((u32)(0x9ba5b0u), 0x4u);
    /* 00506600: mov dword ptr [0xa72b78], 1 */ W32((u32)(0xa72b78u), 0x1u);
    /* 0050660a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050660d: ret  */ FN_RET(0x0050653c); r_esp += 4; return;
L_0050660e:; BB(0x0050660e);
    /* 0050660e: mov dword ptr [0x9ba5b0], 3 */ W32((u32)(0x9ba5b0u), 0x3u);
    /* 00506618: mov dword ptr [0xa72b78], 1 */ W32((u32)(0xa72b78u), 0x1u);
    /* 00506622: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00506625: ret  */ FN_RET(0x0050653c); r_esp += 4; return;
}

void f_00506628(void) /* sub_506628 */
{
    FN_ENTER(0x00506628);
    /* 00506628: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00506629: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050662b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050662d: call 0x50664c */ r_esp -= 4; W32(r_esp, 0x506632u); f_0050664c();
    /* 00506632: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00506636: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00506638: jne 0x50663e */ if (!fZ) goto L_0050663e;
L_0050663a:; BB(0x0050663a);
    /* 0050663a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050663b: ret 4 */ FN_RET(0x00506628); r_esp += 8; return;
L_0050663e:; BB(0x0050663e);
    /* 0050663e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050663f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x506644u); f_005c2f74();
    /* 00506644: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00506645: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00506646: ret 4 */ FN_RET(0x00506628); r_esp += 8; return;
}

void f_0050664c(void) /* sub_50664C */
{
    FN_ENTER(0x0050664c);
    /* 0050664c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050664d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050664f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00506651: push 0x8d390c */ { u32 v = 0x8d390cu; r_esp -= 4; W32(r_esp, v); }
    /* 00506656: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050665c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050665d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00506664: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00506667: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050666a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050666d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00506670: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00506673: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00506676: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00506679: mov dword ptr [ecx], 0xafec80 */ W32((u32)(r_ecx), 0xafec80u);
    /* 0050667f: mov dword ptr [0xa72ba4], 0 */ W32((u32)(0xa72ba4u), 0x0u);
    /* 00506689: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00506690: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x506695u); f_008171e8();
    /* 00506695: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00506698: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050669f: mov esp, ebp */ r_esp = r_ebp;
    /* 005066a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005066a2: ret  */ FN_RET(0x0050664c); r_esp += 4; return;
}

void f_005066a4(void) /* sub_5066A4 */
{
    FN_ENTER(0x005066a4);
    /* 005066a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005066a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005066a7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005066ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005066ad: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5066b2u); f_008193cc();
    /* 005066b2: mov dword ptr [ebx], 0xafec80 */ W32((u32)(r_ebx), 0xafec80u);
    /* 005066b8: mov dword ptr [0xa72ba4], ebx */ W32((u32)(0xa72ba4u), r_ebx);
    /* 005066be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005066c0: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 005066c3: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 005066c6: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 005066c9: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 005066cc: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 005066cf: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 005066d2: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 005066d5: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 005066d8: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 005066db: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 005066de: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 005066e1: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 005066e4: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 005066e7: mov dword ptr [ebx + 0x50], edx */ W32((u32)(r_ebx+0x50u), r_edx);
    /* 005066ea: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 005066ed: mov dword ptr [ebx + 0x58], edx */ W32((u32)(r_ebx+0x58u), r_edx);
    /* 005066f0: mov dword ptr [ebx + 0x5c], edx */ W32((u32)(r_ebx+0x5cu), r_edx);
    /* 005066f3: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 005066f6: mov eax, ebx */ r_eax = r_ebx;
    /* 005066f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005066f9: ret 4 */ FN_RET(0x005066a4); r_esp += 8; return;
}

void f_005066fc(void) /* sub_5066FC */
{
    FN_ENTER(0x005066fc);
    /* 005066fc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005066ff: mov edx, ecx */ r_edx = r_ecx;
    /* 00506701: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00506704: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00506706: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00506708: jle 0x50674e */ if ((fZ||fS!=fO)) goto L_0050674e;
L_0050670a:; BB(0x0050670a);
    /* 0050670a: mov dword ptr [edx + 0x1c], 1 */ W32((u32)(r_edx+0x1cu), 0x1u);
    /* 00506711: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00506715: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00506717: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0050671a: mov esi, edx */ r_esi = r_edx;
L_0050671c:; BB(0x0050671c);
    /* 0050671c: mov ecx, dword ptr [esi + ebx*4 + 0x20] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x20u));
    /* 00506720: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506722: je 0x50673e */ if (fZ) goto L_0050673e;
L_00506724:; BB(0x00506724);
    /* 00506724: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x506729u); f_008173b4();
    /* 00506729: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050672b: jne 0x506732 */ if (!fZ) goto L_00506732;
L_0050672d:; BB(0x0050672d);
    /* 0050672d: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00506730: jmp 0x50673e */ goto L_0050673e;
L_00506732:; BB(0x00506732);
    /* 00506732: mov ecx, dword ptr [esi + ebx*4 + 0x20] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x20u));
    /* 00506736: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00506738: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x50673bu); call_ind(t); }
    /* 0050673b: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
L_0050673e:; BB(0x0050673e);
    /* 0050673e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00506741: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00506743: jl 0x50671c */ if ((fS!=fO)) goto L_0050671c;
L_00506745:; BB(0x00506745);
    /* 00506745: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00506749: mov edx, esi */ r_edx = r_esi;
    /* 0050674b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0050674e:; BB(0x0050674e);
    /* 0050674e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00506750: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00506753: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00506756: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00506759: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0050675c: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0050675f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00506762: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00506765: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00506768: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0050676b: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050676e: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00506771: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00506774: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00506777: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050677a: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050677d: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 00506780: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 00506783: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00506786: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00506789: ret  */ FN_RET(0x005066fc); r_esp += 4; return;
}

void f_0050678c(void) /* sub_50678C */
{
    FN_ENTER(0x0050678c);
    /* 0050678c: mov dword ptr [0xa72ba4], 0 */ W32((u32)(0xa72ba4u), 0x0u);
    /* 00506796: ret  */ FN_RET(0x0050678c); r_esp += 4; return;
}

void f_00506798(void) /* sub_506798 */
{
    FN_ENTER(0x00506798);
    /* 00506798: mov ecx, dword ptr [0xa72ba4] */ r_ecx = R32((u32)(0xa72ba4u));
    /* 0050679e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005067a0: je 0x5067a9 */ if (fZ) goto L_005067a9;
L_005067a2:; BB(0x005067a2);
    /* 005067a2: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005067a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005067a7: je 0x5067ac */ if (fZ) goto L_005067ac;
L_005067a9:; BB(0x005067a9);
    /* 005067a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005067ab: ret  */ FN_RET(0x00506798); r_esp += 4; return;
L_005067ac:; BB(0x005067ac);
    /* 005067ac: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005067b0: call 0x5067bc */ r_esp -= 4; W32(r_esp, 0x5067b5u); f_005067bc();
    /* 005067b5: mov eax, 1 */ r_eax = 0x1u;
    /* 005067ba: ret  */ FN_RET(0x00506798); r_esp += 4; return;
}

void f_005067bc(void) /* sub_5067BC */
{
    FN_ENTER(0x005067bc);
    /* 005067bc: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 005067bf: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005067c2: jl 0x5067c7 */ if ((fS!=fO)) goto L_005067c7;
L_005067c4:; BB(0x005067c4);
    /* 005067c4: ret 4 */ FN_RET(0x005067bc); r_esp += 8; return;
L_005067c7:; BB(0x005067c7);
    /* 005067c7: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005067cb: mov dword ptr [ecx + edx*4 + 0x20], eax */ W32((u32)(r_ecx+r_edx*4+0x20u), r_eax);
    /* 005067cf: add dword ptr [ecx + 0x60], 1 */ { u32 ad = (u32)(r_ecx+0x60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005067d3: ret 4 */ FN_RET(0x005067bc); r_esp += 8; return;
}

void f_005067d8(void) /* sub_5067D8 */
{
    FN_ENTER(0x005067d8);
    /* 005067d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005067d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005067db: mov ebx, eax */ r_ebx = r_eax;
L_005067dd:; BB(0x005067dd);
    /* 005067dd: mov ecx, dword ptr [ebx + 0xa72bb0] */ r_ecx = R32((u32)(r_ebx+0xa72bb0u));
    /* 005067e3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005067e6: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005067e9: je 0x5067f0 */ if (fZ) goto L_005067f0;
L_005067eb:; BB(0x005067eb);
    /* 005067eb: call 0x83b7f0 */ r_esp -= 4; W32(r_esp, 0x5067f0u); f_0083b7f0();
L_005067f0:; BB(0x005067f0);
    /* 005067f0: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005067f3: jl 0x5067dd */ if ((fS!=fO)) goto L_005067dd;
L_005067f5:; BB(0x005067f5);
    /* 005067f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005067f6: ret  */ FN_RET(0x005067d8); r_esp += 4; return;
}

void f_005067f8(void) /* sub_5067F8 */
{
    FN_ENTER(0x005067f8);
    /* 005067f8: mov eax, dword ptr [0xa72bb8] */ r_eax = R32((u32)(0xa72bb8u));
    /* 005067fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005067ff: je 0x50683c */ if (fZ) goto L_0050683c;
L_00506801:; BB(0x00506801);
    /* 00506801: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00506805: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506808: jne 0x50681f */ if (!fZ) goto L_0050681f;
L_0050680a:; BB(0x0050680a);
    /* 0050680a: mov ecx, dword ptr [0x9ba8b0] */ r_ecx = R32((u32)(0x9ba8b0u));
    /* 00506810: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00506813: je 0x50683c */ if (fZ) goto L_0050683c;
L_00506815:; BB(0x00506815);
    /* 00506815: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00506819: call 0x83b858 */ r_esp -= 4; W32(r_esp, 0x50681eu); f_0083b858();
    /* 0050681e: ret  */ FN_RET(0x005067f8); r_esp += 4; return;
L_0050681f:; BB(0x0050681f);
    /* 0050681f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00506823: mov ecx, dword ptr [eax*4 + 0xa72bb0] */ r_ecx = R32((u32)(r_eax*4+0xa72bb0u));
    /* 0050682a: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0050682e: call 0x83b858 */ r_esp -= 4; W32(r_esp, 0x506833u); f_0083b858();
    /* 00506833: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00506837: mov dword ptr [0x9ba8b0], eax */ W32((u32)(0x9ba8b0u), r_eax);
L_0050683c:; BB(0x0050683c);
    /* 0050683c: ret  */ FN_RET(0x005067f8); r_esp += 4; return;
}

void f_00506840(void) /* sub_506840 */
{
    FN_ENTER(0x00506840);
    /* 00506840: mov eax, dword ptr [0xa72bb8] */ r_eax = R32((u32)(0xa72bb8u));
    /* 00506845: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00506847: je 0x50685d */ if (fZ) goto L_0050685d;
L_00506849:; BB(0x00506849);
    /* 00506849: mov ecx, dword ptr [0x9ba8b0] */ r_ecx = R32((u32)(0x9ba8b0u));
    /* 0050684f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00506852: je 0x50685d */ if (fZ) goto L_0050685d;
L_00506854:; BB(0x00506854);
    /* 00506854: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00506858: call 0x83b858 */ r_esp -= 4; W32(r_esp, 0x50685du); f_0083b858();
L_0050685d:; BB(0x0050685d);
    /* 0050685d: ret  */ FN_RET(0x00506840); r_esp += 4; return;
}

void f_00506860(void) /* sub_506860 */
{
    FN_ENTER(0x00506860);
    /* 00506860: mov eax, dword ptr [0xa72bb8] */ r_eax = R32((u32)(0xa72bb8u));
    /* 00506865: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00506867: je 0x50687e */ if (fZ) goto L_0050687e;
L_00506869:; BB(0x00506869);
    /* 00506869: mov ecx, dword ptr [0x9ba8b0] */ r_ecx = R32((u32)(0x9ba8b0u));
    /* 0050686f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00506872: je 0x50687e */ if (fZ) goto L_0050687e;
L_00506874:; BB(0x00506874);
    /* 00506874: mov edx, 1 */ r_edx = 0x1u;
    /* 00506879: call 0x83b858 */ r_esp -= 4; W32(r_esp, 0x50687eu); f_0083b858();
L_0050687e:; BB(0x0050687e);
    /* 0050687e: ret  */ FN_RET(0x00506860); r_esp += 4; return;
}

void f_00506880(void) /* sub_506880 */
{
    FN_ENTER(0x00506880);
    /* 00506880: mov dword ptr [0xa72bb8], 1 */ W32((u32)(0xa72bb8u), 0x1u);
    /* 0050688a: ret  */ FN_RET(0x00506880); r_esp += 4; return;
}

void f_0050688c(void) /* sub_50688C */
{
    FN_ENTER(0x0050688c);
    /* 0050688c: call 0x50689c */ r_esp -= 4; W32(r_esp, 0x506891u); f_0050689c();
    /* 00506891: mov dword ptr [0xa72bb8], 0 */ W32((u32)(0xa72bb8u), 0x0u);
    /* 0050689b: ret  */ FN_RET(0x0050688c); r_esp += 4; return;
}

void f_0050689c(void) /* sub_50689C */
{
    FN_ENTER(0x0050689c);
    /* 0050689c: mov eax, dword ptr [0xa72bb8] */ r_eax = R32((u32)(0xa72bb8u));
    /* 005068a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005068a3: jne 0x5068a6 */ if (!fZ) goto L_005068a6;
L_005068a5:; BB(0x005068a5);
    /* 005068a5: ret  */ FN_RET(0x0050689c); r_esp += 4; return;
L_005068a6:; BB(0x005068a6);
    /* 005068a6: call 0x83b880 */ r_esp -= 4; W32(r_esp, 0x5068abu); f_0083b880();
    /* 005068ab: mov dword ptr [0x9ba8b0], 0xffffffff */ W32((u32)(0x9ba8b0u), 0xffffffffu);
    /* 005068b5: ret  */ FN_RET(0x0050689c); r_esp += 4; return;
}

void f_005068b8(void) /* sub_5068B8 */
{
    FN_ENTER(0x005068b8);
    /* 005068b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005068b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005068ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005068bc: mov dword ptr [0xa72ba8], eax */ W32((u32)(0xa72ba8u), r_eax);
    /* 005068c1: mov dword ptr [0xa72bac], eax */ W32((u32)(0xa72bacu), r_eax);
    /* 005068c6: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005068cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005068cd: mov dword ptr [0xa72bb0], edx */ W32((u32)(0xa72bb0u), r_edx);
    /* 005068d3: mov ebx, eax */ r_ebx = r_eax;
    /* 005068d5: mov dword ptr [0xa72bb4], edx */ W32((u32)(0xa72bb4u), r_edx);
    /* 005068db: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005068dd: mov esi, edx */ r_esi = r_edx;
L_005068df:; BB(0x005068df);
    /* 005068df: mov ecx, dword ptr [ebx + 0x9ba8b4] */ r_ecx = R32((u32)(r_ebx+0x9ba8b4u));
    /* 005068e5: mov dword ptr [ebx + 0xa72ba8], ecx */ W32((u32)(r_ebx+0xa72ba8u), r_ecx);
    /* 005068eb: lea ecx, [esi + 0xa72ba8] */ r_ecx = (u32)(r_esi+0xa72ba8u);
    /* 005068f1: call 0x83b69c */ r_esp -= 4; W32(r_esp, 0x5068f6u); f_0083b69c();
    /* 005068f6: mov dword ptr [ebx + 0xa72bb0], eax */ W32((u32)(r_ebx+0xa72bb0u), r_eax);
    /* 005068fc: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005068ff: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00506902: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00506905: jl 0x5068df */ if ((fS!=fO)) goto L_005068df;
L_00506907:; BB(0x00506907);
    /* 00506907: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00506908: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00506909: ret  */ FN_RET(0x005068b8); r_esp += 4; return;
}

void f_0050690c(void) /* sub_50690C */
{
    FN_ENTER(0x0050690c);
    /* 0050690c: mov dword ptr [0xa72bc0], 0x3f800000 */ W32((u32)(0xa72bc0u), 0x3f800000u);
    /* 00506916: mov dword ptr [0xa72bc4], 0x41000000 */ W32((u32)(0xa72bc4u), 0x41000000u);
    /* 00506920: mov dword ptr [0xa72bc8], 0x3fc00000 */ W32((u32)(0xa72bc8u), 0x3fc00000u);
    /* 0050692a: ret  */ FN_RET(0x0050690c); r_esp += 4; return;
}

void f_0050692c(void) /* sub_50692C */
{
    FN_ENTER(0x0050692c);
    /* 0050692c: mov eax, dword ptr [0xa72bcc] */ r_eax = R32((u32)(0xa72bccu));
    /* 00506931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506933: je 0x506945 */ if (fZ) goto L_00506945;
L_00506935:; BB(0x00506935);
    /* 00506935: call 0x506880 */ r_esp -= 4; W32(r_esp, 0x50693au); f_00506880();
    /* 0050693a: mov dword ptr [0xa72bcc], 0 */ W32((u32)(0xa72bccu), 0x0u);
    /* 00506944: ret  */ FN_RET(0x0050692c); r_esp += 4; return;
L_00506945:; BB(0x00506945);
    /* 00506945: call 0x50688c */ r_esp -= 4; W32(r_esp, 0x50694au); f_0050688c();
    /* 0050694a: ret  */ FN_RET(0x0050692c); r_esp += 4; return;
}

void f_0050694c(void) /* sub_50694C */
{
    FN_ENTER(0x0050694c);
    /* 0050694c: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 00506951: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00506953: je 0x50695f */ if (fZ) goto L_0050695f;
L_00506955:; BB(0x00506955);
    /* 00506955: mov dword ptr [0xa72bcc], 1 */ W32((u32)(0xa72bccu), 0x1u);
L_0050695f:; BB(0x0050695f);
    /* 0050695f: ret  */ FN_RET(0x0050694c); r_esp += 4; return;
}

void f_00506960(void) /* sub_506960 */
{
    FN_ENTER(0x00506960);
    /* 00506960: mov dword ptr [0xa72bcc], 0 */ W32((u32)(0xa72bccu), 0x0u);
    /* 0050696a: ret  */ FN_RET(0x00506960); r_esp += 4; return;
}

void f_0050696c(void) /* sub_50696C */
{
    FN_ENTER(0x0050696c);
    /* 0050696c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050696d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050696f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00506971: call 0x506990 */ r_esp -= 4; W32(r_esp, 0x506976u); f_00506990();
    /* 00506976: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050697a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050697c: jne 0x506982 */ if (!fZ) goto L_00506982;
L_0050697e:; BB(0x0050697e);
    /* 0050697e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050697f: ret 4 */ FN_RET(0x0050696c); r_esp += 8; return;
L_00506982:; BB(0x00506982);
    /* 00506982: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00506983: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x506988u); f_005c2f74();
    /* 00506988: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00506989: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050698a: ret 4 */ FN_RET(0x0050696c); r_esp += 8; return;
}

void f_00506990(void) /* sub_506990 */
{
    FN_ENTER(0x00506990);
    /* 00506990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00506991: mov ebp, esp */ r_ebp = r_esp;
    /* 00506993: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00506995: push 0x8d3928 */ { u32 v = 0x8d3928u; r_esp -= 4; W32(r_esp, v); }
    /* 0050699a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005069a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005069a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005069a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005069ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005069ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005069b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005069b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005069b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005069ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005069bd: mov dword ptr [ecx], 0xafecb8 */ W32((u32)(r_ecx), 0xafecb8u);
    /* 005069c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005069ca: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5069cfu); f_008171e8();
    /* 005069cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005069d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005069d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005069db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005069dc: ret  */ FN_RET(0x00506990); r_esp += 4; return;
}

void f_005069e0(void) /* sub_5069E0 */
{
    FN_ENTER(0x005069e0);
    /* 005069e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005069e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005069e3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005069e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005069e9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5069eeu); f_008193cc();
    /* 005069ee: mov dword ptr [ebp], 0xafecb8 */ W32((u32)(r_ebp), 0xafecb8u);
    /* 005069f5: mov eax, ebp */ r_eax = r_ebp;
    /* 005069f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005069f8: ret 4 */ FN_RET(0x005069e0); r_esp += 8; return;
}

void f_005069fc(void) /* sub_5069FC */
{
    FN_ENTER(0x005069fc);
    /* 005069fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005069fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005069ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00506a01: call 0x506a20 */ r_esp -= 4; W32(r_esp, 0x506a06u); f_00506a20();
    /* 00506a06: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00506a0a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00506a0c: jne 0x506a12 */ if (!fZ) goto L_00506a12;
L_00506a0e:; BB(0x00506a0e);
    /* 00506a0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00506a0f: ret 4 */ FN_RET(0x005069fc); r_esp += 8; return;
L_00506a12:; BB(0x00506a12);
    /* 00506a12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00506a13: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x506a18u); f_005c2f74();
    /* 00506a18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00506a19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00506a1a: ret 4 */ FN_RET(0x005069fc); r_esp += 8; return;
}

void f_00506a20(void) /* sub_506A20 */
{
    FN_ENTER(0x00506a20);
    /* 00506a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00506a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00506a23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00506a25: push 0x8d3944 */ { u32 v = 0x8d3944u; r_esp -= 4; W32(r_esp, v); }
    /* 00506a2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00506a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00506a31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00506a38: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00506a3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00506a3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00506a41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00506a44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00506a47: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00506a4a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00506a4d: mov dword ptr [ecx], 0xafedf0 */ W32((u32)(r_ecx), 0xafedf0u);
    /* 00506a53: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00506a5a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x506a5fu); f_008171e8();
    /* 00506a5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00506a62: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00506a69: mov esp, ebp */ r_esp = r_ebp;
    /* 00506a6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00506a6c: ret  */ FN_RET(0x00506a20); r_esp += 4; return;
}

void f_00506a70(void) /* sub_506A70 */
{
    FN_ENTER(0x00506a70);
    /* 00506a70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00506a71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00506a73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00506a75: call 0x506a94 */ r_esp -= 4; W32(r_esp, 0x506a7au); f_00506a94();
    /* 00506a7a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00506a7e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00506a80: jne 0x506a86 */ if (!fZ) goto L_00506a86;
L_00506a82:; BB(0x00506a82);
    /* 00506a82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00506a83: ret 4 */ FN_RET(0x00506a70); r_esp += 8; return;
L_00506a86:; BB(0x00506a86);
    /* 00506a86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00506a87: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x506a8cu); f_005c2f74();
    /* 00506a8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00506a8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00506a8e: ret 4 */ FN_RET(0x00506a70); r_esp += 8; return;
}

void f_00506a94(void) /* sub_506A94 */
{
    FN_ENTER(0x00506a94);
    /* 00506a94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00506a95: mov ebp, esp */ r_ebp = r_esp;
    /* 00506a97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00506a99: push 0x8d3960 */ { u32 v = 0x8d3960u; r_esp -= 4; W32(r_esp, v); }
    /* 00506a9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00506aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00506aa5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00506aac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00506aaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00506ab2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00506ab5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00506ab8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00506abb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00506abe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00506ac1: mov dword ptr [ecx], 0xafee00 */ W32((u32)(r_ecx), 0xafee00u);
    /* 00506ac7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00506ace: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x506ad3u); f_008171e8();
    /* 00506ad3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00506ad6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00506add: mov esp, ebp */ r_esp = r_ebp;
    /* 00506adf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00506ae0: ret  */ FN_RET(0x00506a94); r_esp += 4; return;
}

void f_00506ae4(void) /* sub_506AE4 */
{
    FN_ENTER(0x00506ae4);
    /* 00506ae4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00506ae5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00506ae7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00506ae9: call 0x506b08 */ r_esp -= 4; W32(r_esp, 0x506aeeu); f_00506b08();
    /* 00506aee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00506af2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00506af4: jne 0x506afa */ if (!fZ) goto L_00506afa;
L_00506af6:; BB(0x00506af6);
    /* 00506af6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00506af7: ret 4 */ FN_RET(0x00506ae4); r_esp += 8; return;
L_00506afa:; BB(0x00506afa);
    /* 00506afa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00506afb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x506b00u); f_005c2f74();
    /* 00506b00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00506b01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00506b02: ret 4 */ FN_RET(0x00506ae4); r_esp += 8; return;
}

void f_00506b08(void) /* sub_506B08 */
{
    FN_ENTER(0x00506b08);
    /* 00506b08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00506b09: mov ebp, esp */ r_ebp = r_esp;
    /* 00506b0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00506b0d: push 0x8d397c */ { u32 v = 0x8d397cu; r_esp -= 4; W32(r_esp, v); }
    /* 00506b12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00506b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00506b19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00506b20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00506b23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00506b26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00506b29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00506b2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00506b2f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00506b32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00506b35: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00506b3b: mov dword ptr [ecx], 0xafee10 */ W32((u32)(r_ecx), 0xafee10u);
    /* 00506b41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506b43: je 0x506b5f */ if (fZ) goto L_00506b5f;
L_00506b45:; BB(0x00506b45);
    /* 00506b45: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00506b48: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00506b4c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00506b51: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00506b55: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
L_00506b5f:; BB(0x00506b5f);
    /* 00506b5f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00506b66: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x506b6bu); f_007ba1f0();
    /* 00506b6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00506b6e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00506b75: mov esp, ebp */ r_esp = r_ebp;
    /* 00506b77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00506b78: ret  */ FN_RET(0x00506b08); r_esp += 4; return;
}

void f_00506b7c(void) /* sub_506B7C */
{
    FN_ENTER(0x00506b7c);
    /* 00506b7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00506b7d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00506b7e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00506b81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00506b83: fld dword ptr [0x91ff38] */ FPUSH(R_F32((u32)(0x91ff38u)));
    /* 00506b89: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 00506b8c: fadd dword ptr [ebx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x28u));
    /* 00506b8f: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00506b92: mov ebp, dword ptr [ebx + 0x28] */ r_ebp = R32((u32)(r_ebx+0x28u));
    /* 00506b95: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 00506b98: fadd dword ptr [ebx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2cu));
    /* 00506b9b: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 00506b9e: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00506ba1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00506ba3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00506ba5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00506ba7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00506ba9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00506bab: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00506bae: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00506bb2: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00506bba: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00506bbe: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00506bc6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00506bca: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 00506bd2: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00506bd6: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00506bda: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 00506bde: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00506be1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00506be5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00506be6: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00506be9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00506bea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00506beb: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x506bf0u); f_007a8f28();
    /* 00506bf0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506bf2: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00506bf6: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00506bfa: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00506bfe: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 00506c01: mov dword ptr [ebx + 0x24], ebp */ W32((u32)(r_ebx+0x24u), r_ebp);
    /* 00506c04: lea ebp, [esp + 0x28] */ r_ebp = (u32)(r_esp+0x28u);
    /* 00506c08: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00506c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00506c0d: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00506c10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00506c11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00506c12: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x506c17u); f_007a8f28();
    /* 00506c17: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506c19: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00506c1c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00506c20: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00506c24: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00506c28: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00506c2c: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 00506c2f: fld dword ptr [0x91ff34] */ FPUSH(R_F32((u32)(0x91ff34u)));
    /* 00506c35: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00506c37: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506c39: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 00506c3c: mov dword ptr [ebx + 0x2c], ebp */ W32((u32)(r_ebx+0x2cu), r_ebp);
    /* 00506c3f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506c40: ja 0x506cbd */ if ((!fC&&!fZ)) goto L_00506cbd;
L_00506c46:; BB(0x00506c46);
    /* 00506c46: fld dword ptr [0x91ff30] */ FPUSH(R_F32((u32)(0x91ff30u)));
    /* 00506c4c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00506c4e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00506c50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506c52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506c53: ja 0x506ced */ if ((!fC&&!fZ)) goto L_00506ced;
L_00506c59:; BB(0x00506c59);
    /* 00506c59: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 00506c5c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00506c5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506c60: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506c61: jb 0x506cf3 */ if (fC) goto L_00506cf3;
L_00506c67:; BB(0x00506c67);
    /* 00506c67: fld dword ptr [0x91ff2c] */ FPUSH(R_F32((u32)(0x91ff2cu)));
    /* 00506c6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00506c6f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00506c71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506c73: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506c74: ja 0x506cfb */ if ((!fC&&!fZ)) goto L_00506cfb;
L_00506c7a:; BB(0x00506c7a);
    /* 00506c7a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00506c7c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00506c7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506c80: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506c81: jb 0x506d03 */ if (fC) goto L_00506d03;
L_00506c87:; BB(0x00506c87);
    /* 00506c87: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00506c89: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00506c8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506c8d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506c8f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506c90: ja 0x506d0b */ if ((!fC&&!fZ)) goto L_00506d0b;
L_00506c92:; BB(0x00506c92);
    /* 00506c92: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00506c94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506c96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506c97: ja 0x506d11 */ if ((!fC&&!fZ)) goto L_00506d11;
L_00506c99:; BB(0x00506c99);
    /* 00506c99: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00506c9b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00506c9d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506c9f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506ca0: jb 0x506cc1 */ if (fC) goto L_00506cc1;
L_00506ca2:; BB(0x00506ca2);
    /* 00506ca2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00506ca4: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 00506ca7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506ca9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506caa: jne 0x506cb5 */ if (!fZ) goto L_00506cb5;
L_00506cac:; BB(0x00506cac);
    /* 00506cac: fcom dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); 
    /* 00506cb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506cb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506cb3: je 0x506cd8 */ if (fZ) goto L_00506cd8;
L_00506cb5:; BB(0x00506cb5);
    /* 00506cb5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506cb7: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00506cba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00506cbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00506cbc: ret  */ FN_RET(0x00506b7c); r_esp += 4; return;
L_00506cbd:; BB(0x00506cbd);
    /* 00506cbd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00506cbf: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00506cc1:; BB(0x00506cc1);
    /* 00506cc1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506cc3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506cc5: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00506cc9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00506cce: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00506cd2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00506cd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00506cd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00506cd7: ret  */ FN_RET(0x00506b7c); r_esp += 4; return;
L_00506cd8:; BB(0x00506cd8);
    /* 00506cd8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506cda: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00506cde: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00506ce3: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00506ce7: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00506cea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00506ceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00506cec: ret  */ FN_RET(0x00506b7c); r_esp += 4; return;
L_00506ced:; BB(0x00506ced);
    /* 00506ced: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506cef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506cf1: jmp 0x506cc1 */ goto L_00506cc1;
L_00506cf3:; BB(0x00506cf3);
    /* 00506cf3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506cf5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506cf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506cf9: jmp 0x506cc1 */ goto L_00506cc1;
L_00506cfb:; BB(0x00506cfb);
    /* 00506cfb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506cfd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506cff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506d01: jmp 0x506cc1 */ goto L_00506cc1;
L_00506d03:; BB(0x00506d03);
    /* 00506d03: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00506d05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506d07: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506d09: jmp 0x506cc1 */ goto L_00506cc1;
L_00506d0b:; BB(0x00506d0b);
    /* 00506d0b: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00506d0d: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00506d0f: jmp 0x506cc1 */ goto L_00506cc1;
L_00506d11:; BB(0x00506d11);
    /* 00506d11: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00506d13: jmp 0x506cc1 */ goto L_00506cc1;
}

void f_00506d18(void) /* sub_506D18 */
{
    FN_ENTER(0x00506d18);
    /* 00506d18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00506d19: mov ebp, esp */ r_ebp = r_esp;
    /* 00506d1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00506d1d: push 0x8d3998 */ { u32 v = 0x8d3998u; r_esp -= 4; W32(r_esp, v); }
    /* 00506d22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00506d28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00506d29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00506d30: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00506d33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00506d36: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00506d39: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00506d3c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00506d3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00506d42: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00506d45: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00506d48: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00506d4b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00506d4e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00506d51: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00506d54: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00506d57: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x506d5cu); f_008193cc();
    /* 00506d5c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00506d63: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00506d66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00506d69: mov dword ptr [edx], 0xafee00 */ W32((u32)(r_edx), 0xafee00u);
    /* 00506d6f: mov eax, dword ptr [0x9ba8d8] */ r_eax = R32((u32)(0x9ba8d8u));
    /* 00506d74: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00506d77: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00506d79: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 00506d7c: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00506d7f: mov dword ptr [edx + 0x3c], esi */ W32((u32)(r_edx+0x3cu), r_esi);
    /* 00506d82: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 00506d85: mov dword ptr [edx + 0x40], edi */ W32((u32)(r_edx+0x40u), r_edi);
    /* 00506d88: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00506d8b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00506d8e: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 00506d91: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00506d94: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00506d97: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00506d99: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00506d9c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00506d9f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00506da2: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00506da5: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00506da8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00506dab: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00506dae: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00506db1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00506db3: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00506db6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00506db7: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x506dbcu); f_0082f09c();
    /* 00506dbc: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00506dbf: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00506dc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506dc4: je 0x506dda */ if (fZ) goto L_00506dda;
L_00506dc6:; BB(0x00506dc6);
    /* 00506dc6: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 00506dc9: fdiv dword ptr [0xacc0e8] */ ST(0) = ST(0) / R_F32((u32)(0xacc0e8u));
    /* 00506dcf: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 00506dd2: fdiv dword ptr [0xacc0ec] */ ST(0) = ST(0) / R_F32((u32)(0xacc0ecu));
    /* 00506dd8: jmp 0x506de0 */ goto L_00506de0;
L_00506dda:; BB(0x00506dda);
    /* 00506dda: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 00506ddd: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
L_00506de0:; BB(0x00506de0);
    /* 00506de0: fldz  */ FPUSH(0.0);
    /* 00506de2: fldz  */ FPUSH(0.0);
    /* 00506de4: fld dword ptr [0x91ff18] */ FPUSH(R_F32((u32)(0x91ff18u)));
    /* 00506dea: fld dword ptr [0x91ff18] */ FPUSH(R_F32((u32)(0x91ff18u)));
    /* 00506df0: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00506df2: fchs  */ ST(0) = -ST(0);
    /* 00506df4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00506df6: fnstcw word ptr [ebp - 0x34] */ W16((u32)(r_ebp+0xffffffccu), fcw);
    /* 00506df9: movzx eax, word ptr [ebp - 0x34] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffccu));
    /* 00506dfd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00506e02: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00506e05: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 00506e08: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00506e0a: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00506e0d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00506e0f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00506e11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506e13: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00506e15: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00506e17: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00506e1a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00506e1d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00506e20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506e21: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00506e23: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 00506e25: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506e27: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00506e29: fchs  */ ST(0) = -ST(0);
    /* 00506e2b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00506e2d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00506e2f: jae 0x506e33 */ if (!fC) goto L_00506e33;
L_00506e31:; BB(0x00506e31);
    /* 00506e31: fst st(4) */ ST(4) = ST(0);
L_00506e33:; BB(0x00506e33);
    /* 00506e33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506e34: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00506e36: je 0x506e3a */ if (fZ) goto L_00506e3a;
L_00506e38:; BB(0x00506e38);
    /* 00506e38: fst st(4) */ ST(4) = ST(0);
L_00506e3a:; BB(0x00506e3a);
    /* 00506e3a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506e3c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00506e3e: fnstcw word ptr [ebp - 0x34] */ W16((u32)(r_ebp+0xffffffccu), fcw);
    /* 00506e41: movzx eax, word ptr [ebp - 0x34] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffccu));
    /* 00506e45: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 00506e4a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00506e4d: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 00506e50: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00506e52: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00506e55: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00506e57: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00506e59: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506e5b: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00506e5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00506e5f: fchs  */ ST(0) = -ST(0);
    /* 00506e61: fst dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0));
    /* 00506e64: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 00506e67: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506e68: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00506e6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506e6c: jae 0x506e70 */ if (!fC) goto L_00506e70;
L_00506e6e:; BB(0x00506e6e);
    /* 00506e6e: fst st(1) */ ST(1) = ST(0);
L_00506e70:; BB(0x00506e70);
    /* 00506e70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506e71: mov eax, edx */ r_eax = r_edx;
    /* 00506e73: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00506e75: je 0x506e79 */ if (fZ) goto L_00506e79;
L_00506e77:; BB(0x00506e77);
    /* 00506e77: fst st(1) */ ST(1) = ST(0);
L_00506e79:; BB(0x00506e79);
    /* 00506e79: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506e7b: fchs  */ ST(0) = -ST(0);
    /* 00506e7d: fst dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0));
    /* 00506e80: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 00506e83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00506e86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00506e8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00506e8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00506e90: ret 0x10 */ FN_RET(0x00506d18); r_esp += 20; return;
}

void f_00506e85(void)
{
    FN_ENTER(0x00506e85);
    /* 00506e85: hlt  */ UNSUP(0x00506e85, "hlt");
}

void f_00506e94(void) /* sub_506E94 */
{
    FN_ENTER(0x00506e94);
    /* 00506e94: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00506e9a: mov edx, ecx */ r_edx = r_ecx;
    /* 00506e9c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00506e9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00506ea1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506ea3: je 0x507111 */ if (fZ) goto L_00507111;
L_00506ea9:; BB(0x00506ea9);
    /* 00506ea9: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00506ead: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00506eb1: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 00506eb5: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00506eb9: mov esi, ecx */ r_esi = r_ecx;
    /* 00506ebb: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00506ebf: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
L_00506ec3:; BB(0x00506ec3);
    /* 00506ec3: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
    /* 00506ec6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506ec8: je 0x5070f7 */ if (fZ) goto L_005070f7;
L_00506ece:; BB(0x00506ece);
    /* 00506ece: mov ecx, esi */ r_ecx = r_esi;
    /* 00506ed0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x506ed5u); f_008173b4();
    /* 00506ed5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506ed7: jne 0x506ee1 */ if (!fZ) goto L_00506ee1;
L_00506ed9:; BB(0x00506ed9);
    /* 00506ed9: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
    /* 00506edc: jmp 0x5070f7 */ goto L_005070f7;
L_00506ee1:; BB(0x00506ee1);
    /* 00506ee1: mov ecx, edi */ r_ecx = r_edi;
    /* 00506ee3: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x506ee8u); f_008173b4();
    /* 00506ee8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506eea: jne 0x506ef4 */ if (!fZ) goto L_00506ef4;
L_00506eec:; BB(0x00506eec);
    /* 00506eec: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
    /* 00506eef: jmp 0x5070f7 */ goto L_005070f7;
L_00506ef4:; BB(0x00506ef4);
    /* 00506ef4: fld dword ptr [0x91ff14] */ FPUSH(R_F32((u32)(0x91ff14u)));
    /* 00506efa: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 00506efe: lea ebp, [esi + 0x20] */ r_ebp = (u32)(r_esi+0x20u);
    /* 00506f01: lea ebx, [esi + 0x28] */ r_ebx = (u32)(r_esi+0x28u);
    /* 00506f04: lea edx, [edi + 0x28] */ r_edx = (u32)(r_edi+0x28u);
    /* 00506f07: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00506f0b: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00506f0f: movzx eax, byte ptr [edx + 0x40] */ r_eax = (u32)R8((u32)(r_edx+0x40u));
    /* 00506f13: fld dword ptr [edx + 0x48] */ FPUSH(R_F32((u32)(r_edx+0x48u)));
    /* 00506f16: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00506f19: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00506f1c: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00506f1f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00506f23: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00506f27: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00506f2b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00506f2d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00506f30: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00506f32: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 00506f36: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00506f3a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00506f3e: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 00506f40: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00506f42: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506f44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506f46: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00506f4a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00506f4c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00506f4e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506f4f: jae 0x506f5d */ if (!fC) goto L_00506f5d;
L_00506f51:; BB(0x00506f51);
    /* 00506f51: fld dword ptr [0x91ff14] */ FPUSH(R_F32((u32)(0x91ff14u)));
    /* 00506f57: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00506f5b: jmp 0x506f78 */ goto L_00506f78;
L_00506f5d:; BB(0x00506f5d);
    /* 00506f5d: fld dword ptr [0x91ff10] */ FPUSH(R_F32((u32)(0x91ff10u)));
    /* 00506f63: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00506f67: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00506f69: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506f6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506f6c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00506f6e: jb 0x506f72 */ if (fC) goto L_00506f72;
L_00506f70:; BB(0x00506f70);
    /* 00506f70: fst st(1) */ ST(1) = ST(0);
L_00506f72:; BB(0x00506f72);
    /* 00506f72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506f74: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00506f78:; BB(0x00506f78);
    /* 00506f78: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 00506f7c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506f7e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506f7f: jae 0x506f85 */ if (!fC) goto L_00506f85;
L_00506f81:; BB(0x00506f81);
    /* 00506f81: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506f83: jmp 0x506f9c */ goto L_00506f9c;
L_00506f85:; BB(0x00506f85);
    /* 00506f85: fld dword ptr [0x91ff10] */ FPUSH(R_F32((u32)(0x91ff10u)));
    /* 00506f8b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00506f8d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00506f8f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00506f90: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00506f92: jbe 0x506f96 */ if ((fC||fZ)) goto L_00506f96;
L_00506f94:; BB(0x00506f94);
    /* 00506f94: fst st(1) */ ST(1) = ST(0);
L_00506f96:; BB(0x00506f96);
    /* 00506f96: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00506f98: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00506f9c:; BB(0x00506f9c);
    /* 00506f9c: mov eax, edx */ r_eax = r_edx;
    /* 00506f9e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00506fa1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00506fa3: jne 0x506faa */ if (!fZ) goto L_00506faa;
L_00506fa5:; BB(0x00506fa5);
    /* 00506fa5: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x506faau); f_007a902c();
L_00506faa:; BB(0x00506faa);
    /* 00506faa: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00506fae: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00506fb2: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00506fb7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00506fbc: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00506fc0: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00506fc4: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00506fc8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00506fcc: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00506fd0: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00506fd4: movzx edx, byte ptr [eax + 0x41] */ r_edx = (u32)R8((u32)(r_eax+0x41u));
    /* 00506fd8: movzx ecx, byte ptr [eax + 0x42] */ r_ecx = (u32)R8((u32)(r_eax+0x42u));
    /* 00506fdc: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 00506fe0: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00506fe4: mov dword ptr [esp + 0x7c], 0 */ W32((u32)(r_esp+0x7cu), 0x0u);
    /* 00506fec: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00506fef: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00506ff2: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 00506ff6: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00506ffc: movzx esi, byte ptr [eax + 0x43] */ r_esi = (u32)R8((u32)(r_eax+0x43u));
    /* 00507000: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00507004: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00507009: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050700e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00507012: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00507016: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0050701a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0050701e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00507022: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00507024: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00507027: and ecx, 0xff00 */ {  u32 a = r_ecx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050702d: and edi, 0xffff00ff */ {  u32 a = r_edi; u32 b = 0xffff00ffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00507033: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00507035: and edi, 0xffffff00 */ {  u32 a = r_edi; u32 b = 0xffffff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0050703b: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0050703d: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00507040: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507042: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00507046: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0050704a: and eax, 0xffff00ff */ {  u32 a = r_eax; u32 b = 0xffff00ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050704f: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507051: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 00507058: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 0050705c: and eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00507061: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507063: mov edx, 4 */ r_edx = 0x4u;
    /* 00507068: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0050706f: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00507072: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 00507076: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 00507079: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 0050707d: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 00507081: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 00507083: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00507085: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
    /* 00507089: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0050708c: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00507090: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 00507094: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 00507097: mov dword ptr [ecx + 0xc], ebx */ W32((u32)(r_ecx+0xcu), r_ebx);
    /* 0050709a: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 0050709e: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 005070a1: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 005070a5: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 005070a8: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 005070ab: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 005070ae: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 005070b2: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 005070b6: mov dword ptr [ebx + 0x14], ecx */ W32((u32)(r_ebx+0x14u), r_ecx);
    /* 005070b9: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 005070bd: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005070c0: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 005070c3: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 005070c7: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 005070ca: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 005070ce: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 005070d1: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 005070d4: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 005070d8: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005070db: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 005070df: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005070e1: push 0xc1700000 */ { u32 v = 0xc1700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005070e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005070e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005070e8: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 005070ec: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x5070f1u); f_0082b5d8();
    /* 005070f1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005070f4: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
L_005070f7:; BB(0x005070f7);
    /* 005070f7: mov esi, edi */ r_esi = r_edi;
    /* 005070f9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005070fb: jne 0x506ec3 */ if (!fZ) goto L_00506ec3;
L_00507101:; BB(0x00507101);
    /* 00507101: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 00507105: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00507109: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0050710d: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_00507111:; BB(0x00507111);
    /* 00507111: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x507116u); f_007a9044();
    /* 00507116: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050711c: ret  */ FN_RET(0x00506e94); r_esp += 4; return;
}

