#include "protos.h"

void f_0057c3d0(void) /* sub_57C3D0 */
{
    FN_ENTER(0x0057c3d0);
    /* 0057c3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c3d1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057c3d4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057c3d6: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0057c3da: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c3dd: je 0x57c4fe */ if (fZ) goto L_0057c4fe;
L_0057c3e3:; BB(0x0057c3e3);
    /* 0057c3e3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c3e6: je 0x57c4d1 */ if (fZ) goto L_0057c4d1;
L_0057c3ec:; BB(0x0057c3ec);
    /* 0057c3ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c3ee: jne 0x57c4b0 */ if (!fZ) goto L_0057c4b0;
L_0057c3f4:; BB(0x0057c3f4);
    /* 0057c3f4: mov eax, dword ptr [ebp + 0x4b8] */ r_eax = R32((u32)(r_ebp+0x4b8u));
    /* 0057c3fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c3fc: jne 0x57c42c */ if (!fZ) goto L_0057c42c;
L_0057c3fe:; BB(0x0057c3fe);
    /* 0057c3fe: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c403: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c405: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x57c40au); f_00520ea0();
    /* 0057c40a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c40c: je 0x57c493 */ if (fZ) goto L_0057c493;
L_0057c412:; BB(0x0057c412);
    /* 0057c412: mov dword ptr [ebp + 0x4b8], 1 */ W32((u32)(r_ebp+0x4b8u), 0x1u);
    /* 0057c41c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c41e: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x57c423u); f_005213d8();
    /* 0057c423: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c425: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x57c42au); f_00521410();
    /* 0057c42a: jmp 0x57c493 */ goto L_0057c493;
L_0057c42c:; BB(0x0057c42c);
    /* 0057c42c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c42f: jne 0x57c493 */ if (!fZ) goto L_0057c493;
L_0057c431:; BB(0x0057c431);
    /* 0057c431: fld dword ptr [0x927628] */ FPUSH(R_F32((u32)(0x927628u)));
    /* 0057c437: fadd dword ptr [ebp + 0x4cc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4ccu));
    /* 0057c43d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0057c440: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0057c444: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057c449: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057c44e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057c452: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0057c456: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 0057c45a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0057c45d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0057c461: fstp dword ptr [ebp + 0x4cc] */ W_F32((u32)(r_ebp+0x4ccu), ST(0)); FPOP();
    /* 0057c467: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057c46a: jl 0x57c482 */ if ((fS!=fO)) goto L_0057c482;
L_0057c46c:; BB(0x0057c46c);
    /* 0057c46c: mov dword ptr [ebp + 0x3dc], 0xc */ W32((u32)(r_ebp+0x3dcu), 0xcu);
    /* 0057c476: mov dword ptr [ebp + 0x4b8], 2 */ W32((u32)(r_ebp+0x4b8u), 0x2u);
    /* 0057c480: jmp 0x57c488 */ goto L_0057c488;
L_0057c482:; BB(0x0057c482);
    /* 0057c482: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
L_0057c488:; BB(0x0057c488);
    /* 0057c488: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c48d: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x57c492u); f_00814680();
    /* 0057c492: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0057c493:; BB(0x0057c493);
    /* 0057c493: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0057c496: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c498: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57c49eu); call_ind(t); }
    /* 0057c49e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0057c4a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c4a3: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x57c4a9u); call_ind(t); }
    /* 0057c4a9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c4ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c4ad: ret 4 */ FN_RET(0x0057c3d0); r_esp += 8; return;
L_0057c4b0:; BB(0x0057c4b0);
    /* 0057c4b0: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c4b3: jne 0x57c4dc */ if (!fZ) goto L_0057c4dc;
L_0057c4b5:; BB(0x0057c4b5);
    /* 0057c4b5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0057c4b8: mov dword ptr [ebp + 0x3dc], 0xc */ W32((u32)(r_ebp+0x3dcu), 0xcu);
    /* 0057c4c2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c4c4: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x57c4cau); call_ind(t); }
    /* 0057c4ca: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c4cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c4ce: ret 4 */ FN_RET(0x0057c3d0); r_esp += 8; return;
L_0057c4d1:; BB(0x0057c4d1);
    /* 0057c4d1: mov eax, dword ptr [ebp + 0x4b8] */ r_eax = R32((u32)(r_ebp+0x4b8u));
    /* 0057c4d7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c4da: je 0x57c4e3 */ if (fZ) goto L_0057c4e3;
L_0057c4dc:; BB(0x0057c4dc);
    /* 0057c4dc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c4df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c4e0: ret 4 */ FN_RET(0x0057c3d0); r_esp += 8; return;
L_0057c4e3:; BB(0x0057c4e3);
    /* 0057c4e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c4e5: call 0x57b298 */ r_esp -= 4; W32(r_esp, 0x57c4eau); f_0057b298();
    /* 0057c4ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c4ec: jne 0x57c4dc */ if (!fZ) goto L_0057c4dc;
L_0057c4ee:; BB(0x0057c4ee);
    /* 0057c4ee: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c4f0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c4f2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57c4f7u); f_0051f62c();
    /* 0057c4f7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c4fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c4fb: ret 4 */ FN_RET(0x0057c3d0); r_esp += 8; return;
L_0057c4fe:; BB(0x0057c4fe);
    /* 0057c4fe: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0057c501: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c503: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0057c50a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c50c: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x57c512u); call_ind(t); }
    /* 0057c512: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c514: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0057c51a: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057c51d: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0057c523: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c525: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x57c52au); f_0051f664();
    /* 0057c52a: mov dword ptr [ebp + 0x4cc], 0 */ W32((u32)(r_ebp+0x4ccu), 0x0u);
    /* 0057c534: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c536: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
    /* 0057c53c: mov dword ptr [ebp + 0x4b8], eax */ W32((u32)(r_ebp+0x4b8u), r_eax);
    /* 0057c542: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c545: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c546: ret 4 */ FN_RET(0x0057c3d0); r_esp += 8; return;
}

void f_0057c54c(void) /* sub_57C54C */
{
    FN_ENTER(0x0057c54c);
    /* 0057c54c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c54d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057c54f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057c553: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c556: je 0x57c57a */ if (fZ) goto L_0057c57a;
L_0057c558:; BB(0x0057c558);
    /* 0057c558: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057c55b: jne 0x57c576 */ if (!fZ) goto L_0057c576;
L_0057c55d:; BB(0x0057c55d);
    /* 0057c55d: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c562: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057c564: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x57c569u); f_00520ea0();
    /* 0057c569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057c56b: je 0x57c576 */ if (fZ) goto L_0057c576;
L_0057c56d:; BB(0x0057c56d);
    /* 0057c56d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c56f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057c571: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57c576u); f_0051f62c();
L_0057c576:; BB(0x0057c576);
    /* 0057c576: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057c577: ret 4 */ FN_RET(0x0057c54c); r_esp += 8; return;
L_0057c57a:; BB(0x0057c57a);
    /* 0057c57a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0057c57c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c57e: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0057c585: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057c587: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x57c58du); call_ind(t); }
    /* 0057c58d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c58f: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0057c595: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057c598: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057c59b: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0057c5a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057c5a3: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x57c5a8u); f_0051f664();
    /* 0057c5a8: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 0057c5ab: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 0057c5ae: mov ecx, dword ptr [ebx + 0x58] */ r_ecx = R32((u32)(r_ebx+0x58u));
    /* 0057c5b1: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0057c5b4: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 0057c5b7: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 0057c5ba: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 0057c5bd: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 0057c5c0: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 0057c5c3: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 0057c5c9: mov eax, dword ptr [ebx + 0x3f4] */ r_eax = R32((u32)(r_ebx+0x3f4u));
    /* 0057c5cf: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 0057c5d5: mov dword ptr [ebx + 0x308], ecx */ W32((u32)(r_ebx+0x308u), r_ecx);
    /* 0057c5db: lea ecx, [ebx + 0x3f4] */ r_ecx = (u32)(r_ebx+0x3f4u);
    /* 0057c5e1: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x57c5e4u); call_ind(t); }
    /* 0057c5e4: mov eax, dword ptr [ebx + 0x410] */ r_eax = R32((u32)(r_ebx+0x410u));
    /* 0057c5ea: lea ecx, [ebx + 0x410] */ r_ecx = (u32)(r_ebx+0x410u);
    /* 0057c5f0: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x57c5f3u); call_ind(t); }
    /* 0057c5f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057c5f4: ret 4 */ FN_RET(0x0057c54c); r_esp += 8; return;
}

void f_0057c5f8(void) /* sub_57C5F8 */
{
    FN_ENTER(0x0057c5f8);
    /* 0057c5f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057c5f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057c5fa: mov edi, ecx */ r_edi = r_ecx;
    /* 0057c5fc: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0057c600: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c603: je 0x57c67d */ if (fZ) goto L_0057c67d;
L_0057c605:; BB(0x0057c605);
    /* 0057c605: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c608: je 0x57c647 */ if (fZ) goto L_0057c647;
L_0057c60a:; BB(0x0057c60a);
    /* 0057c60a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c60c: jne 0x57c62e */ if (!fZ) goto L_0057c62e;
L_0057c60e:; BB(0x0057c60e);
    /* 0057c60e: mov ecx, edi */ r_ecx = r_edi;
    /* 0057c610: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57c615u); f_007aa094();
    /* 0057c615: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0057c617: mov ecx, edi */ r_ecx = r_edi;
    /* 0057c619: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57c61fu); call_ind(t); }
    /* 0057c61f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0057c621: mov ecx, edi */ r_ecx = r_edi;
    /* 0057c623: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x57c629u); call_ind(t); }
    /* 0057c629: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057c62a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057c62b: ret 4 */ FN_RET(0x0057c5f8); r_esp += 8; return;
L_0057c62e:; BB(0x0057c62e);
    /* 0057c62e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057c631: jne 0x57c678 */ if (!fZ) goto L_0057c678;
L_0057c633:; BB(0x0057c633);
    /* 0057c633: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0057c639: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057c63c: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0057c642: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057c643: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057c644: ret 4 */ FN_RET(0x0057c5f8); r_esp += 8; return;
L_0057c647:; BB(0x0057c647);
    /* 0057c647: mov eax, dword ptr [edi + 0x410] */ r_eax = R32((u32)(r_edi+0x410u));
    /* 0057c64d: lea ecx, [edi + 0x410] */ r_ecx = (u32)(r_edi+0x410u);
    /* 0057c653: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x57c656u); call_ind(t); }
    /* 0057c656: mov esi, eax */ r_esi = r_eax;
    /* 0057c658: mov edx, dword ptr [edi + 0x3f4] */ r_edx = R32((u32)(r_edi+0x3f4u));
    /* 0057c65e: lea ecx, [edi + 0x3f4] */ r_ecx = (u32)(r_edi+0x3f4u);
    /* 0057c664: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x57c667u); call_ind(t); }
    /* 0057c667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057c669: je 0x57c678 */ if (fZ) goto L_0057c678;
L_0057c66b:; BB(0x0057c66b);
    /* 0057c66b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057c66d: je 0x57c678 */ if (fZ) goto L_0057c678;
L_0057c66f:; BB(0x0057c66f);
    /* 0057c66f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c671: mov ecx, edi */ r_ecx = r_edi;
    /* 0057c673: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57c678u); f_0051f62c();
L_0057c678:; BB(0x0057c678);
    /* 0057c678: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057c679: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057c67a: ret 4 */ FN_RET(0x0057c5f8); r_esp += 8; return;
L_0057c67d:; BB(0x0057c67d);
    /* 0057c67d: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0057c67f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c681: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0057c688: mov ecx, edi */ r_ecx = r_edi;
    /* 0057c68a: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x57c690u); call_ind(t); }
    /* 0057c690: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c692: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0057c698: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057c69b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057c69e: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0057c6a4: mov ecx, edi */ r_ecx = r_edi;
    /* 0057c6a6: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x57c6abu); f_0051f664();
    /* 0057c6ab: lea ecx, [edi + 0x3f4] */ r_ecx = (u32)(r_edi+0x3f4u);
    /* 0057c6b1: call 0x512494 */ r_esp -= 4; W32(r_esp, 0x57c6b6u); f_00512494();
    /* 0057c6b6: lea ecx, [edi + 0x410] */ r_ecx = (u32)(r_edi+0x410u);
    /* 0057c6bc: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x57c6c1u); f_00576c48();
    /* 0057c6c1: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057c6c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057c6c5: call 0x578a20 */ r_esp -= 4; W32(r_esp, 0x57c6cau); f_00578a20();
    /* 0057c6ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c6cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057c6cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057c6cd: ret 4 */ FN_RET(0x0057c5f8); r_esp += 8; return;
}

void f_0057c6d0(void) /* sub_57C6D0 */
{
    FN_ENTER(0x0057c6d0);
    /* 0057c6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c6d1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057c6d4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057c6d6: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0057c6dd: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c6e0: je 0x57c7ae */ if (fZ) goto L_0057c7ae;
L_0057c6e6:; BB(0x0057c6e6);
    /* 0057c6e6: movzx eax, word ptr [ebp + 0x2d8] */ r_eax = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 0057c6ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c6ee: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x57c6f3u); f_0068d5a8();
    /* 0057c6f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c6f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c6f6: je 0x57c795 */ if (fZ) goto L_0057c795;
L_0057c6fc:; BB(0x0057c6fc);
    /* 0057c6fc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0057c6ff: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 0057c705: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0057c708: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 0057c70e: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 0057c714: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0057c718: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057c71c: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0057c722: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x57c727u); f_0082f9c4();
    /* 0057c727: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0057c72a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0057c72e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057c730: fmul qword ptr [0x927590] */ ST(0) = ST(0) * R_F64((u32)(0x927590u));
    /* 0057c736: fdiv qword ptr [0x927588] */ ST(0) = ST(0) / R_F64((u32)(0x927588u));
    /* 0057c73c: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0057c740: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0057c745: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057c74a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0057c74e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0057c752: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0057c756: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0057c75a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0057c75e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c75f: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c762: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x57c767u); f_007a9018();
    /* 0057c767: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057c76a: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057c76f: jl 0x57c795 */ if ((fS!=fO)) goto L_0057c795;
L_0057c771:; BB(0x0057c771);
    /* 0057c771: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0057c777: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057c779: je 0x57c787 */ if (fZ) goto L_0057c787;
L_0057c77b:; BB(0x0057c77b);
    /* 0057c77b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c77d: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x57c782u); f_0051f81c();
    /* 0057c782: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c785: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c786: ret  */ FN_RET(0x0057c6d0); r_esp += 4; return;
L_0057c787:; BB(0x0057c787);
    /* 0057c787: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0057c789: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c78b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57c790u); f_0051f62c();
    /* 0057c790: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c793: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c794: ret  */ FN_RET(0x0057c6d0); r_esp += 4; return;
L_0057c795:; BB(0x0057c795);
    /* 0057c795: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c797: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x57c79cu); f_0051f81c();
    /* 0057c79c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c79e: call 0x57acb8 */ r_esp -= 4; W32(r_esp, 0x57c7a3u); f_0057acb8();
    /* 0057c7a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c7a5: jne 0x57c7ae */ if (!fZ) goto L_0057c7ae;
L_0057c7a7:; BB(0x0057c7a7);
    /* 0057c7a7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c7a9: call 0x57ac74 */ r_esp -= 4; W32(r_esp, 0x57c7aeu); f_0057ac74();
L_0057c7ae:; BB(0x0057c7ae);
    /* 0057c7ae: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c7b2: ret  */ FN_RET(0x0057c6d0); r_esp += 4; return;
}

void f_0057c7b4(void) /* sub_57C7B4 */
{
    FN_ENTER(0x0057c7b4);
    /* 0057c7b4: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0057c7b7: ret  */ FN_RET(0x0057c7b4); r_esp += 4; return;
}

void f_0057c7b8(void) /* sub_57C7B8 */
{
    FN_ENTER(0x0057c7b8);
    /* 0057c7b8: add ecx, 0x4ac */ {  u32 a = r_ecx; u32 b = 0x4acu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c7be: mov eax, ecx */ r_eax = r_ecx;
    /* 0057c7c0: ret  */ FN_RET(0x0057c7b8); r_esp += 4; return;
}

void f_0057c818(void) /* sub_57C818 */
{
    FN_ENTER(0x0057c818);
    /* 0057c818: mov edx, dword ptr [0xa7410c] */ r_edx = R32((u32)(0xa7410cu));
    /* 0057c81e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057c820: mov dword ptr [0xa74104], eax */ W32((u32)(0xa74104u), r_eax);
    /* 0057c825: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057c828: mov dword ptr [0xa74100], eax */ W32((u32)(0xa74100u), r_eax);
    /* 0057c82d: ret  */ FN_RET(0x0057c818); r_esp += 4; return;
}

void f_0057c830(void) /* sub_57C830 */
{
    FN_ENTER(0x0057c830);
    /* 0057c830: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c831: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057c834: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x57c839u); f_00482a20();
    /* 0057c839: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0057c83c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c83e: jne 0x57c852 */ if (!fZ) goto L_0057c852;
L_0057c840:; BB(0x0057c840);
    /* 0057c840: push 0x9beed8 */ { u32 v = 0x9beed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c845: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x57c84au); f_0051f6b0();
    /* 0057c84a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c84b: mov dword ptr [0xa74108], eax */ W32((u32)(0xa74108u), r_eax);
    /* 0057c850: jmp 0x57c862 */ goto L_0057c862;
L_0057c852:; BB(0x0057c852);
    /* 0057c852: push 0x9bee9c */ { u32 v = 0x9bee9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c857: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x57c85cu); f_0051f6b0();
    /* 0057c85c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c85d: mov dword ptr [0xa74108], eax */ W32((u32)(0xa74108u), r_eax);
L_0057c862:; BB(0x0057c862);
    /* 0057c862: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0057c868: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0057c86b: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0057c86e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0057c871: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0057c874: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 0057c877: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0057c87a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0057c87d: mov dword ptr [0xa740f4], 0 */ W32((u32)(0xa740f4u), 0x0u);
    /* 0057c887: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057c889: mov dword ptr [0xa740f8], 0 */ W32((u32)(0xa740f8u), 0x0u);
    /* 0057c893: mov dword ptr [0xa74134], edx */ W32((u32)(0xa74134u), r_edx);
    /* 0057c899: mov dword ptr [0xa74130], edx */ W32((u32)(0xa74130u), r_edx);
    /* 0057c89f: mov dword ptr [0xa740fc], 0 */ W32((u32)(0xa740fcu), 0x0u);
    /* 0057c8a9: mov dword ptr [0xa7412c], ecx */ W32((u32)(0xa7412cu), r_ecx);
    /* 0057c8af: mov dword ptr [0xa74124], eax */ W32((u32)(0xa74124u), r_eax);
    /* 0057c8b4: mov dword ptr [0xa74128], edx */ W32((u32)(0xa74128u), r_edx);
    /* 0057c8ba: mov dword ptr [0xa74120], edx */ W32((u32)(0xa74120u), r_edx);
    /* 0057c8c0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c8c2: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x57c8c7u); f_0077a684();
    /* 0057c8c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c8c8: mov dword ptr [0xa7411c], eax */ W32((u32)(0xa7411cu), r_eax);
    /* 0057c8cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c8cf: mov ebx, eax */ r_ebx = r_eax;
L_0057c8d1:; BB(0x0057c8d1);
    /* 0057c8d1: push dword ptr [ebx + 0x9275f8] */ { u32 v = R32((u32)(r_ebx+0x9275f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c8d7: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x57c8dcu); f_0077a698();
    /* 0057c8dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c8dd: mov dword ptr [ebx + 0xa74114], eax */ W32((u32)(r_ebx+0xa74114u), r_eax);
    /* 0057c8e3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057c8e6: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057c8e9: jl 0x57c8d1 */ if ((fS!=fO)) goto L_0057c8d1;
L_0057c8eb:; BB(0x0057c8eb);
    /* 0057c8eb: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c8ed: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x57c8f2u); f_0077a6b4();
    /* 0057c8f2: mov dword ptr [0xa74110], eax */ W32((u32)(0xa74110u), r_eax);
    /* 0057c8f7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c8f9: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x57c8feu); f_0077a6cc();
    /* 0057c8fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057c901: mov dword ptr [0xa7410c], eax */ W32((u32)(0xa7410cu), r_eax);
    /* 0057c906: call 0x57cdf0 */ r_esp -= 4; W32(r_esp, 0x57c90bu); f_0057cdf0();
    /* 0057c90b: mov eax, dword ptr [0x927578] */ r_eax = R32((u32)(0x927578u));
    /* 0057c910: movzx edx, word ptr [0x92757c] */ r_edx = (u32)R16((u32)(0x92757cu));
    /* 0057c917: movzx ecx, word ptr [0x92757e] */ r_ecx = (u32)R16((u32)(0x92757eu));
    /* 0057c91e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0057c922: movzx eax, word ptr [0x927580] */ r_eax = (u32)R16((u32)(0x927580u));
    /* 0057c929: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 0057c92e: mov edx, dword ptr [0xa74108] */ r_edx = R32((u32)(0xa74108u));
    /* 0057c934: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 0057c939: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0057c93e: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0057c944: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0057c94a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0057c94d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0057c950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c951: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c953: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c958: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c95b: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c95e: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 0057c960: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x57c965u); f_00608470();
    /* 0057c965: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c968: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057c969: ret  */ FN_RET(0x0057c830); r_esp += 4; return;
}

void f_0057c885(void)
{
    FN_ENTER(0x0057c885);
    /* 0057c885: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0057c887: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057c889: mov dword ptr [0xa740f8], 0 */ W32((u32)(0xa740f8u), 0x0u);
    /* 0057c893: mov dword ptr [0xa74134], edx */ W32((u32)(0xa74134u), r_edx);
    /* 0057c899: mov dword ptr [0xa74130], edx */ W32((u32)(0xa74130u), r_edx);
    /* 0057c89f: mov dword ptr [0xa740fc], 0 */ W32((u32)(0xa740fcu), 0x0u);
    /* 0057c8a9: mov dword ptr [0xa7412c], ecx */ W32((u32)(0xa7412cu), r_ecx);
    /* 0057c8af: mov dword ptr [0xa74124], eax */ W32((u32)(0xa74124u), r_eax);
    /* 0057c8b4: mov dword ptr [0xa74128], edx */ W32((u32)(0xa74128u), r_edx);
    /* 0057c8ba: mov dword ptr [0xa74120], edx */ W32((u32)(0xa74120u), r_edx);
    /* 0057c8c0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c8c2: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x57c8c7u); f_0077a684();
    /* 0057c8c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c8c8: mov dword ptr [0xa7411c], eax */ W32((u32)(0xa7411cu), r_eax);
    /* 0057c8cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c8cf: mov ebx, eax */ r_ebx = r_eax;
L_0057c8d1:; BB(0x0057c8d1);
    /* 0057c8d1: push dword ptr [ebx + 0x9275f8] */ { u32 v = R32((u32)(r_ebx+0x9275f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c8d7: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x57c8dcu); f_0077a698();
    /* 0057c8dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c8dd: mov dword ptr [ebx + 0xa74114], eax */ W32((u32)(r_ebx+0xa74114u), r_eax);
    /* 0057c8e3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057c8e6: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057c8e9: jl 0x57c8d1 */ if ((fS!=fO)) goto L_0057c8d1;
L_0057c8eb:; BB(0x0057c8eb);
    /* 0057c8eb: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c8ed: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x57c8f2u); f_0077a6b4();
    /* 0057c8f2: mov dword ptr [0xa74110], eax */ W32((u32)(0xa74110u), r_eax);
    /* 0057c8f7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c8f9: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x57c8feu); f_0077a6cc();
    /* 0057c8fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057c901: mov dword ptr [0xa7410c], eax */ W32((u32)(0xa7410cu), r_eax);
    /* 0057c906: call 0x57cdf0 */ r_esp -= 4; W32(r_esp, 0x57c90bu); f_0057cdf0();
    /* 0057c90b: mov eax, dword ptr [0x927578] */ r_eax = R32((u32)(0x927578u));
    /* 0057c910: movzx edx, word ptr [0x92757c] */ r_edx = (u32)R16((u32)(0x92757cu));
    /* 0057c917: movzx ecx, word ptr [0x92757e] */ r_ecx = (u32)R16((u32)(0x92757eu));
    /* 0057c91e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0057c922: movzx eax, word ptr [0x927580] */ r_eax = (u32)R16((u32)(0x927580u));
    /* 0057c929: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 0057c92e: mov edx, dword ptr [0xa74108] */ r_edx = R32((u32)(0xa74108u));
    /* 0057c934: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 0057c939: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0057c93e: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0057c944: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0057c94a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0057c94d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0057c950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c951: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c953: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c958: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c95b: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c95e: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 0057c960: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x57c965u); f_00608470();
    /* 0057c965: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c968: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057c969: ret  */ FN_RET(0x0057c885); r_esp += 4; return;
}

void f_0057c96c(void) /* sub_57C96C */
{
    FN_ENTER(0x0057c96c);
    /* 0057c96c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057c96d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057c96e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c96f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057c971: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c973: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x57c978u); f_00521840();
    /* 0057c978: mov ecx, dword ptr [0xa74108] */ r_ecx = R32((u32)(0xa74108u));
    /* 0057c97e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c980: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 0057c986: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0057c989: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 0057c98c: push 0x9bef08 */ { u32 v = 0x9bef08u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c991: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 0057c997: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0057c99a: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0057c99d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c99f: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x57c9a4u); f_0051ff3c();
    /* 0057c9a4: mov eax, dword ptr [0xa74108] */ r_eax = R32((u32)(0xa74108u));
    /* 0057c9a9: mov dword ptr [ebp + 0xd8], 0x9bee20 */ W32((u32)(r_ebp+0xd8u), 0x9bee20u);
    /* 0057c9b3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0057c9b9: mov dword ptr [ebp + 0xdc], edx */ W32((u32)(r_ebp+0xdcu), r_edx);
    /* 0057c9bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c9c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c9c2: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0057c9c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c9cb: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x57c9d0u); f_007aa4c8();
    /* 0057c9d0: push dword ptr [0xa74110] */ { u32 v = R32((u32)(0xa74110u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c9d6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c9d8: movzx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xb8u));
    /* 0057c9df: push dword ptr [0xa74114] */ { u32 v = R32((u32)(0xa74114u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c9e5: push dword ptr [0xa7411c] */ { u32 v = R32((u32)(0xa7411cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c9eb: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0057c9f2: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x57c9f7u); f_00520c70();
    /* 0057c9f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c9f9: call 0x57c818 */ r_esp -= 4; W32(r_esp, 0x57c9feu); f_0057c818();
    /* 0057c9fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057ca00: call 0x520380 */ r_esp -= 4; W32(r_esp, 0x57ca05u); f_00520380();
    /* 0057ca05: mov dword ptr [ebp + 0x358], 0x9beeec */ W32((u32)(r_ebp+0x358u), 0x9beeecu);
    /* 0057ca0f: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ca11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057ca13: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x57ca18u); f_00520390();
    /* 0057ca18: mov dword ptr [ebp + 0x384], 0x41200000 */ W32((u32)(r_ebp+0x384u), 0x41200000u);
    /* 0057ca22: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ca24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057ca26: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x57ca2bu); f_00521820();
    /* 0057ca2b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ca2d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057ca2f: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x57ca34u); f_005217fc();
    /* 0057ca34: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0057ca37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057ca39: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0057ca3f: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 0057ca45: mov dword ptr [ebp + 0x3d0], edx */ W32((u32)(r_ebp+0x3d0u), r_edx);
    /* 0057ca4b: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0057ca4e: mov dword ptr [ebp + 0x3d4], edx */ W32((u32)(r_ebp+0x3d4u), r_edx);
    /* 0057ca54: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 0057ca57: mov dword ptr [ebp + 0x3d8], edx */ W32((u32)(r_ebp+0x3d8u), r_edx);
    /* 0057ca5d: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
    /* 0057ca63: mov eax, dword ptr [ebp + 0x3f4] */ r_eax = R32((u32)(r_ebp+0x3f4u));
    /* 0057ca69: lea ecx, [ebp + 0x3f4] */ r_ecx = (u32)(r_ebp+0x3f4u);
    /* 0057ca6f: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x57ca72u); call_ind(t); }
    /* 0057ca72: mov eax, dword ptr [ebp + 0x410] */ r_eax = R32((u32)(r_ebp+0x410u));
    /* 0057ca78: lea ecx, [ebp + 0x410] */ r_ecx = (u32)(r_ebp+0x410u);
    /* 0057ca7e: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x57ca81u); call_ind(t); }
    /* 0057ca81: lea ecx, [ebp + 0x42c] */ r_ecx = (u32)(r_ebp+0x42cu);
    /* 0057ca87: lea eax, [ebp + 0x49c] */ r_eax = (u32)(r_ebp+0x49cu);
    /* 0057ca8d: mov esi, eax */ r_esi = r_eax;
    /* 0057ca8f: mov edi, ecx */ r_edi = r_ecx;
L_0057ca91:; BB(0x0057ca91);
    /* 0057ca91: mov ecx, edi */ r_ecx = r_edi;
    /* 0057ca93: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x57ca98u); f_0057739c();
    /* 0057ca98: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057ca9b: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057ca9d: jg 0x57ca91 */ if ((!fZ&&fS==fO)) goto L_0057ca91;
L_0057ca9f:; BB(0x0057ca9f);
    /* 0057ca9f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0057caa2: mov dword ptr [ebp + 0x4a0], 0 */ W32((u32)(r_ebp+0x4a0u), 0x0u);
    /* 0057caac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057caae: mov dword ptr [ebp + 0x4b8], eax */ W32((u32)(r_ebp+0x4b8u), r_eax);
    /* 0057cab4: mov dword ptr [ebp + 0x4a4], 0 */ W32((u32)(r_ebp+0x4a4u), 0x0u);
    /* 0057cabe: mov dword ptr [ebp + 0x4bc], eax */ W32((u32)(r_ebp+0x4bcu), r_eax);
    /* 0057cac4: mov dword ptr [ebp + 0x4c4], eax */ W32((u32)(r_ebp+0x4c4u), r_eax);
    /* 0057caca: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 0057cad0: mov dword ptr [ebp + 0x4a8], 0 */ W32((u32)(r_ebp+0x4a8u), 0x0u);
    /* 0057cada: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057cadc: mov dword ptr [ebp + 0x4ac], 0 */ W32((u32)(r_ebp+0x4acu), 0x0u);
    /* 0057cae6: mov dword ptr [ebp + 0x4b0], 0 */ W32((u32)(r_ebp+0x4b0u), 0x0u);
    /* 0057caf0: mov dword ptr [ebp + 0x4b4], 0 */ W32((u32)(r_ebp+0x4b4u), 0x0u);
    /* 0057cafa: mov dword ptr [ebp + 0x4cc], 0 */ W32((u32)(r_ebp+0x4ccu), 0x0u);
    /* 0057cb04: mov dword ptr [ebp + 0x4d0], 0 */ W32((u32)(r_ebp+0x4d0u), 0x0u);
    /* 0057cb0e: mov dword ptr [ebp + 0x4d4], 0 */ W32((u32)(r_ebp+0x4d4u), 0x0u);
    /* 0057cb18: mov dword ptr [ebp + 0x4d8], 0 */ W32((u32)(r_ebp+0x4d8u), 0x0u);
    /* 0057cb22: mov dword ptr [ebp + 0x4dc], 0 */ W32((u32)(r_ebp+0x4dcu), 0x0u);
    /* 0057cb2c: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x57cb32u); call_ind(t); }
    /* 0057cb32: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057cb34: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0057cb37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057cb39: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0057cb40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057cb42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cb43: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x57cb49u); call_ind(t); }
    /* 0057cb49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057cb4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057cb4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057cb4c: ret  */ FN_RET(0x0057c96c); r_esp += 4; return;
}

void f_0057cb50(void) /* sub_57CB50 */
{
    FN_ENTER(0x0057cb50);
    /* 0057cb50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cb51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057cb53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057cb55: call 0x57cb74 */ r_esp -= 4; W32(r_esp, 0x57cb5au); f_0057cb74();
    /* 0057cb5a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057cb5e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057cb60: jne 0x57cb66 */ if (!fZ) goto L_0057cb66;
L_0057cb62:; BB(0x0057cb62);
    /* 0057cb62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057cb63: ret 4 */ FN_RET(0x0057cb50); r_esp += 8; return;
L_0057cb66:; BB(0x0057cb66);
    /* 0057cb66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cb67: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x57cb6cu); f_005c2f74();
    /* 0057cb6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057cb6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057cb6e: ret 4 */ FN_RET(0x0057cb50); r_esp += 8; return;
}

void f_0057cb74(void) /* sub_57CB74 */
{
    FN_ENTER(0x0057cb74);
    /* 0057cb74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057cb75: mov ebp, esp */ r_ebp = r_esp;
    /* 0057cb77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057cb79: push 0x8d7934 */ { u32 v = 0x8d7934u; r_esp -= 4; W32(r_esp, v); }
    /* 0057cb7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057cb84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cb85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057cb8c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057cb8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057cb92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0057cb95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057cb98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057cb9b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057cb9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057cba1: mov dword ptr [ecx], 0xb072f8 */ W32((u32)(r_ecx), 0xb072f8u);
    /* 0057cba7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057cbae: call 0x7a9f38 */ r_esp -= 4; W32(r_esp, 0x57cbb3u); f_007a9f38();
    /* 0057cbb3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057cbb6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057cbbd: mov esp, ebp */ r_esp = r_ebp;
    /* 0057cbbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057cbc0: ret  */ FN_RET(0x0057cb74); r_esp += 4; return;
}

void f_0057cbc4(void) /* sub_57CBC4 */
{
    FN_ENTER(0x0057cbc4);
    /* 0057cbc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057cbc5: mov ebp, esp */ r_ebp = r_esp;
    /* 0057cbc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057cbc9: push 0x8d795c */ { u32 v = 0x8d795cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057cbce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057cbd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cbd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057cbdc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057cbdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057cbe2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0057cbe5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057cbe8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057cbeb: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0057cbf0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0057cbf7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x57cbfcu); f_005caba4();
    /* 0057cbfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057cbfd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0057cc00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cc02: je 0x57cc38 */ if (fZ) goto L_0057cc38;
L_0057cc04:; BB(0x0057cc04);
    /* 0057cc04: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0057cc0b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057cc12: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057cc15: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057cc18: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057cc1b: call 0x57cc3c */ r_esp -= 4; W32(r_esp, 0x57cc20u); f_0057cc3c();
    /* 0057cc20: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057cc23: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0057cc2a:; BB(0x0057cc2a);
    /* 0057cc2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057cc2d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057cc34: mov esp, ebp */ r_esp = r_ebp;
    /* 0057cc36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057cc37: ret  */ FN_RET(0x0057cbc4); r_esp += 4; return;
L_0057cc38:; BB(0x0057cc38);
    /* 0057cc38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057cc3a: jmp 0x57cc2a */ goto L_0057cc2a;
}

void f_0057cc3c(void) /* sub_57CC3C */
{
    FN_ENTER(0x0057cc3c);
    /* 0057cc3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057cc3d: mov ebp, esp */ r_ebp = r_esp;
    /* 0057cc3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057cc41: push 0x8d7978 */ { u32 v = 0x8d7978u; r_esp -= 4; W32(r_esp, v); }
    /* 0057cc46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057cc4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cc4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057cc54: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057cc57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057cc5a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0057cc5d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0057cc60: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0057cc63: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0057cc66: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057cc69: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0057cc6c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057cc6f: call 0x7a9e5c */ r_esp -= 4; W32(r_esp, 0x57cc74u); f_007a9e5c();
    /* 0057cc74: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057cc7b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057cc7e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057cc81: mov dword ptr [ebx], 0xb072f8 */ W32((u32)(r_ebx), 0xb072f8u);
    /* 0057cc87: mov eax, dword ptr [0x9bef40] */ r_eax = R32((u32)(0x9bef40u));
    /* 0057cc8c: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0057cc8f: mov dword ptr [ebx + 0xfc], ecx */ W32((u32)(r_ebx+0xfcu), r_ecx);
    /* 0057cc95: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0057cc99: mov word ptr [ebx + 0x100], dx */ W16((u32)(r_ebx+0x100u), (u16)r_edx);
    /* 0057cca0: call 0x57c7b8 */ r_esp -= 4; W32(r_esp, 0x57cca5u); f_0057c7b8();
    /* 0057cca5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057cca8: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ccab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057ccad: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 0057ccb0: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0057ccb3: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 0057ccb6: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0057ccb9: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0057ccbc: mov ecx, dword ptr [edi + 0xfc] */ r_ecx = R32((u32)(r_edi+0xfcu));
    /* 0057ccc2: call 0x57c7b4 */ r_esp -= 4; W32(r_esp, 0x57ccc7u); f_0057c7b4();
    /* 0057ccc7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ccca: mov edi, dword ptr [0xa7413c] */ r_edi = R32((u32)(0xa7413cu));
    /* 0057ccd0: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0057ccd3: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0057ccd9: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0057ccdc: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0057ccdf: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 0057cce5: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0057cce8: mov dword ptr [ecx + 0xd8], 0x9bef44 */ W32((u32)(r_ecx+0xd8u), 0x9bef44u);
    /* 0057ccf2: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0057ccf5: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0057ccfb: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 0057cd01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057cd03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cd04: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0057cd0b: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x57cd10u); f_007aa4c8();
    /* 0057cd10: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057cd13: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057cd16: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057cd19: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057cd1c: movzx edx, word ptr [eax + 0xb8] */ r_edx = (u32)R16((u32)(r_eax+0xb8u));
    /* 0057cd23: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
    /* 0057cd2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057cd2d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057cd34: mov esp, ebp */ r_esp = r_ebp;
    /* 0057cd36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057cd37: ret 8 */ FN_RET(0x0057cc3c); r_esp += 12; return;
}

void f_0057cd3c(void) /* sub_57CD3C */
{
    FN_ENTER(0x0057cd3c);
    /* 0057cd3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057cd3d: mov edi, ecx */ r_edi = r_ecx;
    /* 0057cd3f: mov ecx, edi */ r_ecx = r_edi;
    /* 0057cd41: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57cd46u); f_007aa094();
    /* 0057cd46: mov ecx, dword ptr [edi + 0xfc] */ r_ecx = R32((u32)(r_edi+0xfcu));
    /* 0057cd4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cd4e: je 0x57cd8d */ if (fZ) goto L_0057cd8d;
L_0057cd50:; BB(0x0057cd50);
    /* 0057cd50: call 0x57c7b8 */ r_esp -= 4; W32(r_esp, 0x57cd55u); f_0057c7b8();
    /* 0057cd55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057cd57: mov ecx, dword ptr [edi + 0xfc] */ r_ecx = R32((u32)(r_edi+0xfcu));
    /* 0057cd5d: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 0057cd60: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0057cd63: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0057cd66: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0057cd69: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 0057cd6c: call 0x57c7b4 */ r_esp -= 4; W32(r_esp, 0x57cd71u); f_0057c7b4();
    /* 0057cd71: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0057cd74: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0057cd7a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057cd7c: je 0x57cd8b */ if (fZ) goto L_0057cd8b;
L_0057cd7e:; BB(0x0057cd7e);
    /* 0057cd7e: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0057cd82: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057cd87: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_0057cd8b:; BB(0x0057cd8b);
    /* 0057cd8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057cd8c: ret  */ FN_RET(0x0057cd3c); r_esp += 4; return;
L_0057cd8d:; BB(0x0057cd8d);
    /* 0057cd8d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0057cd91: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057cd96: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0057cd9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057cd9b: ret  */ FN_RET(0x0057cd3c); r_esp += 4; return;
}

void f_0057cd9c(void) /* sub_57CD9C */
{
    FN_ENTER(0x0057cd9c);
    /* 0057cd9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057cd9d: mov edi, ecx */ r_edi = r_ecx;
    /* 0057cd9f: mov eax, dword ptr [0xa7413c] */ r_eax = R32((u32)(0xa7413cu));
    /* 0057cda4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cda6: je 0x57cddf */ if (fZ) goto L_0057cddf;
L_0057cda8:; BB(0x0057cda8);
    /* 0057cda8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x57cdadu); f_0082d7b0();
    /* 0057cdad: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0057cdb0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x57cdb5u); f_0082d838();
    /* 0057cdb5: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0057cdb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057cdba: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57cdbfu); f_0082d8bc();
    /* 0057cdbf: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0057cdc2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x57cdc7u); f_00829cc8();
    /* 0057cdc7: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x57cdccu); f_00578b38();
    /* 0057cdcc: mov ecx, edi */ r_ecx = r_edi;
    /* 0057cdce: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x57cdd3u); f_007aa668();
    /* 0057cdd3: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x57cdd8u); f_0082dab0();
    /* 0057cdd8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57cdddu); f_0082da80();
    /* 0057cddd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057cdde: ret  */ FN_RET(0x0057cd9c); r_esp += 4; return;
L_0057cddf:; BB(0x0057cddf);
    /* 0057cddf: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0057cde3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057cde8: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0057cdec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057cded: ret  */ FN_RET(0x0057cd9c); r_esp += 4; return;
}

void f_0057cdf0(void) /* sub_57CDF0 */
{
    FN_ENTER(0x0057cdf0);
    /* 0057cdf0: call 0x57a298 */ r_esp -= 4; W32(r_esp, 0x57cdf5u); f_0057a298();
    /* 0057cdf5: mov dword ptr [0xa7413c], eax */ W32((u32)(0xa7413cu), r_eax);
    /* 0057cdfa: ret  */ FN_RET(0x0057cdf0); r_esp += 4; return;
}

void f_0057cdfc(void) /* sub_57CDFC */
{
    FN_ENTER(0x0057cdfc);
    /* 0057cdfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cdfd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057cdff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057ce01: call 0x57ce20 */ r_esp -= 4; W32(r_esp, 0x57ce06u); f_0057ce20();
    /* 0057ce06: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057ce0a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057ce0c: jne 0x57ce12 */ if (!fZ) goto L_0057ce12;
L_0057ce0e:; BB(0x0057ce0e);
    /* 0057ce0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057ce0f: ret 4 */ FN_RET(0x0057cdfc); r_esp += 8; return;
L_0057ce12:; BB(0x0057ce12);
    /* 0057ce12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce13: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x57ce18u); f_005c2f74();
    /* 0057ce18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057ce19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057ce1a: ret 4 */ FN_RET(0x0057cdfc); r_esp += 8; return;
}

void f_0057ce20(void) /* sub_57CE20 */
{
    FN_ENTER(0x0057ce20);
    /* 0057ce20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce21: mov ebp, esp */ r_ebp = r_esp;
    /* 0057ce23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce25: push 0x8d7994 */ { u32 v = 0x8d7994u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057ce30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057ce38: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057ce3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057ce3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0057ce41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057ce44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057ce47: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057ce4a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057ce4d: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0057ce53: mov dword ptr [ecx], 0xb07378 */ W32((u32)(r_ecx), 0xb07378u);
    /* 0057ce59: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ce5b: je 0x57ce77 */ if (fZ) goto L_0057ce77;
L_0057ce5d:; BB(0x0057ce5d);
    /* 0057ce5d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057ce60: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0057ce64: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057ce69: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0057ce6d: mov dword ptr [ecx + 0xe0], 0 */ W32((u32)(r_ecx+0xe0u), 0x0u);
L_0057ce77:; BB(0x0057ce77);
    /* 0057ce77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057ce7e: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x57ce83u); f_007b4aec();
    /* 0057ce83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057ce86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057ce8d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057ce8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ce90: ret  */ FN_RET(0x0057ce20); r_esp += 4; return;
}

void f_0057ce94(void) /* sub_57CE94 */
{
    FN_ENTER(0x0057ce94);
    /* 0057ce94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ce97: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057ce9a: mov esi, ecx */ r_esi = r_ecx;
    /* 0057ce9c: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 0057cea2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0057cea5: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0057ceab: lea ebx, [esi + 0xac] */ r_ebx = (u32)(r_esi+0xacu);
    /* 0057ceb1: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0057ceb5: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 0057cebb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057cebf: lea edi, [esi + 0xb8] */ r_edi = (u32)(r_esi+0xb8u);
    /* 0057cec5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057cec7: mov edx, edi */ r_edx = r_edi;
    /* 0057cec9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x57ceceu); f_0082ebac();
    /* 0057cece: mov ecx, dword ptr [esi + 0xe0] */ r_ecx = R32((u32)(r_esi+0xe0u));
    /* 0057ced4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ced6: je 0x57cede */ if (fZ) goto L_0057cede;
L_0057ced8:; BB(0x0057ced8);
    /* 0057ced8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ced9: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x57cedeu); f_00508db8();
L_0057cede:; BB(0x0057cede);
    /* 0057cede: fld dword ptr [0xa74104] */ FPUSH(R_F32((u32)(0xa74104u)));
    /* 0057cee4: fadd dword ptr [esi + 0xdc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xdcu));
    /* 0057ceea: mov eax, dword ptr [esi + 0xf0] */ r_eax = R32((u32)(r_esi+0xf0u));
    /* 0057cef0: fst dword ptr [esi + 0xdc] */ W_F32((u32)(r_esi+0xdcu), ST(0));
    /* 0057cef6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cef8: je 0x57cf54 */ if (fZ) goto L_0057cf54;
L_0057cefa:; BB(0x0057cefa);
    /* 0057cefa: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 0057cf00: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
    /* 0057cf06: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0057cf0c: mov dword ptr [esi + 0xe8], eax */ W32((u32)(r_esi+0xe8u), r_eax);
    /* 0057cf12: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 0057cf18: mov dword ptr [esi + 0xec], eax */ W32((u32)(r_esi+0xecu), r_eax);
    /* 0057cf1e: mov eax, dword ptr [esi + 0xf4] */ r_eax = R32((u32)(r_esi+0xf4u));
    /* 0057cf24: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057cf27: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057cf2a: jg 0x57cf34 */ if ((!fZ&&fS==fO)) goto L_0057cf34;
L_0057cf2c:; BB(0x0057cf2c);
    /* 0057cf2c: mov dword ptr [esi + 0xf4], eax */ W32((u32)(r_esi+0xf4u), r_eax);
    /* 0057cf32: jmp 0x57cf54 */ goto L_0057cf54;
L_0057cf34:; BB(0x0057cf34);
    /* 0057cf34: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057cf36: mov dword ptr [esi + 0xf4], 0 */ W32((u32)(r_esi+0xf4u), 0x0u);
    /* 0057cf40: lea eax, [esi + 0xe4] */ r_eax = (u32)(r_esi+0xe4u);
    /* 0057cf46: mov ecx, esi */ r_ecx = r_esi;
    /* 0057cf48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cf49: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x57cf4eu); f_0057d0b8();
    /* 0057cf4e: fld dword ptr [esi + 0xdc] */ FPUSH(R_F32((u32)(r_esi+0xdcu)));
L_0057cf54:; BB(0x0057cf54);
    /* 0057cf54: fcomp dword ptr [0x9277dc] */ fx_compare(ST(0), R_F32((u32)(0x9277dcu))); FPOP();
    /* 0057cf5a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057cf5c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057cf5d: jb 0x57cf73 */ if (fC) goto L_0057cf73;
L_0057cf5f:; BB(0x0057cf5f);
    /* 0057cf5f: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0057cf63: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057cf68: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0057cf6c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057cf6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057cf70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057cf71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057cf72: ret  */ FN_RET(0x0057ce94); r_esp += 4; return;
L_0057cf73:; BB(0x0057cf73);
    /* 0057cf73: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0057cf76: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057cf78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057cf79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cf7a: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x57cf7fu); f_0077fffc();
    /* 0057cf7f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057cf82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cf84: je 0x57cf9a */ if (fZ) goto L_0057cf9a;
L_0057cf86:; BB(0x0057cf86);
    /* 0057cf86: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0057cf8a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057cf8f: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0057cf93: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057cf96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057cf97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057cf98: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057cf99: ret  */ FN_RET(0x0057ce94); r_esp += 4; return;
L_0057cf9a:; BB(0x0057cf9a);
    /* 0057cf9a: movzx eax, word ptr [esi + 0xf8] */ r_eax = (u32)R16((u32)(r_esi+0xf8u));
    /* 0057cfa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057cfa2: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x57cfa7u); f_007b4d18();
    /* 0057cfa7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057cfa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cfaa: je 0x57d0ae */ if (fZ) goto L_0057d0ae;
L_0057cfb0:; BB(0x0057cfb0);
    /* 0057cfb0: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057cfb6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0057cfb8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057cfba: jle 0x57d0ae */ if ((fZ||fS!=fO)) goto L_0057d0ae;
L_0057cfc0:; BB(0x0057cfc0);
    /* 0057cfc0: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0057cfc4: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0057cfc8: mov ebp, eax */ r_ebp = r_eax;
L_0057cfca:; BB(0x0057cfca);
    /* 0057cfca: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0057cfd1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057cfd2: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x57cfd7u); f_006ea71c();
    /* 0057cfd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057cfd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cfda: je 0x57d09b */ if (fZ) goto L_0057d09b;
L_0057cfe0:; BB(0x0057cfe0);
    /* 0057cfe0: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 0057cfe6: fsub dword ptr [edi + 0x304] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x304u));
    /* 0057cfec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057cfed: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057cff0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x57cff5u); f_0082e900();
    /* 0057cff5: fcomp dword ptr [0x9277d8] */ fx_compare(ST(0), R_F32((u32)(0x9277d8u))); FPOP();
    /* 0057cffb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057cffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057cffe: jae 0x57d09b */ if (!fC) goto L_0057d09b;
L_0057d004:; BB(0x0057d004);
    /* 0057d004: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0057d008: mov edx, dword ptr [esi + 0xac] */ r_edx = R32((u32)(r_esi+0xacu));
    /* 0057d00e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0057d012: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0057d018: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0057d01c: mov edx, dword ptr [esi + 0xb4] */ r_edx = R32((u32)(r_esi+0xb4u));
    /* 0057d022: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0057d026: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0057d02a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x57d02fu); f_0082f9c4();
    /* 0057d02f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d031: je 0x57d09b */ if (fZ) goto L_0057d09b;
L_0057d033:; BB(0x0057d033);
    /* 0057d033: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d035: je 0x57d09b */ if (fZ) goto L_0057d09b;
L_0057d037:; BB(0x0057d037);
    /* 0057d037: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0057d03a: test edx, 0x4000a00 */ {  u32 a = r_edx; u32 b = 0x4000a00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d040: jne 0x57d09b */ if (!fZ) goto L_0057d09b;
L_0057d042:; BB(0x0057d042);
    /* 0057d042: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0057d046: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 0057d04c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d04d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d04e: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x57d053u); f_0078ea50();
    /* 0057d053: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057d056: fld dword ptr [0xa74104] */ FPUSH(R_F32((u32)(0xa74104u)));
    /* 0057d05c: fmul dword ptr [0x9277e0] */ ST(0) = ST(0) * R_F32((u32)(0x9277e0u));
    /* 0057d062: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0057d064: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0057d066: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057d068: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057d069: jb 0x57d09b */ if (fC) goto L_0057d09b;
L_0057d06b:; BB(0x0057d06b);
    /* 0057d06b: mov ecx, dword ptr [0x9277b0] */ r_ecx = R32((u32)(0x9277b0u));
    /* 0057d071: mov eax, dword ptr [0xa74100] */ r_eax = R32((u32)(0xa74100u));
    /* 0057d076: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0057d078: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0057d07c: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0057d081: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0057d085: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0057d089: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d08a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d08b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d08d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d08e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d08f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057d090: mov ecx, edi */ r_ecx = r_edi;
    /* 0057d092: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0057d096: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x57d099u); call_ind(t); }
    /* 0057d099: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0057d09b:; BB(0x0057d09b);
    /* 0057d09b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057d09e: cmp ebx, dword ptr [0xaae168] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaae168u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d0a4: jl 0x57cfca */ if ((fS!=fO)) goto L_0057cfca;
L_0057d0aa:; BB(0x0057d0aa);
    /* 0057d0aa: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_0057d0ae:; BB(0x0057d0ae);
    /* 0057d0ae: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057d0b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057d0b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057d0b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057d0b4: ret  */ FN_RET(0x0057ce94); r_esp += 4; return;
}

