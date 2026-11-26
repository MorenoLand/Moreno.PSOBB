#include "protos.h"

void f_0054d3d4(void) /* sub_54D3D4 */
{
    FN_ENTER(0x0054d3d4);
    /* 0054d3d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054d3d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d3d6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054d3d8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0054d3dc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d3df: je 0x54d506 */ if (fZ) goto L_0054d506;
L_0054d3e5:; BB(0x0054d3e5);
    /* 0054d3e5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d3e8: je 0x54d4ed */ if (fZ) goto L_0054d4ed;
L_0054d3ee:; BB(0x0054d3ee);
    /* 0054d3ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d3f0: jne 0x54d4d8 */ if (!fZ) goto L_0054d4d8;
L_0054d3f6:; BB(0x0054d3f6);
    /* 0054d3f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d3f8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54d3fdu); f_007aa094();
    /* 0054d3fd: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d402: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d404: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x54d409u); f_00520ea0();
    /* 0054d409: mov eax, dword ptr [ebp + 0x4d4] */ r_eax = R32((u32)(r_ebp+0x4d4u));
    /* 0054d40f: mov edx, dword ptr [ebp + 0x4d8] */ r_edx = R32((u32)(r_ebp+0x4d8u));
    /* 0054d415: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054d418: mov dword ptr [ebp + 0x4d4], eax */ W32((u32)(r_ebp+0x4d4u), r_eax);
    /* 0054d41e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d420: jne 0x54d47b */ if (!fZ) goto L_0054d47b;
L_0054d422:; BB(0x0054d422);
    /* 0054d422: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054d425: jle 0x54d45a */ if ((fZ||fS!=fO)) goto L_0054d45a;
L_0054d427:; BB(0x0054d427);
    /* 0054d427: mov dword ptr [ebp + 0x4d8], 1 */ W32((u32)(r_ebp+0x4d8u), 0x1u);
    /* 0054d431: push 0x269 */ { u32 v = 0x269u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d436: mov eax, 3 */ r_eax = 0x3u;
    /* 0054d43b: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0054d442: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d444: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54d449u); f_007879b8();
    /* 0054d449: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0054d44c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054d44e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d44f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d450: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054d451: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054d452: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54d457u); f_00814298();
    /* 0054d457: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054d45a:; BB(0x0054d45a);
    /* 0054d45a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d45c: call 0x54c9a8 */ r_esp -= 4; W32(r_esp, 0x54d461u); f_0054c9a8();
    /* 0054d461: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 0054d466: push dword ptr [ebp + 0x3b0] */ { u32 v = R32((u32)(r_ebp+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d46c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d46e: push dword ptr [ebp + 0x3a8] */ { u32 v = R32((u32)(r_ebp+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d474: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x54d479u); f_005207c4();
    /* 0054d479: jmp 0x54d49b */ goto L_0054d49b;
L_0054d47b:; BB(0x0054d47b);
    /* 0054d47b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d47e: jne 0x54d49b */ if (!fZ) goto L_0054d49b;
L_0054d480:; BB(0x0054d480);
    /* 0054d480: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d482: call 0x54d8ac */ r_esp -= 4; W32(r_esp, 0x54d487u); f_0054d8ac();
    /* 0054d487: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0054d48d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054d48f: je 0x54d49b */ if (fZ) goto L_0054d49b;
L_0054d491:; BB(0x0054d491);
    /* 0054d491: mov dword ptr [ebp + 0x4d8], 2 */ W32((u32)(r_ebp+0x4d8u), 0x2u);
L_0054d49b:; BB(0x0054d49b);
    /* 0054d49b: mov eax, dword ptr [ebp + 0x3dc] */ r_eax = R32((u32)(r_ebp+0x3dcu));
    /* 0054d4a1: lea ecx, [ebp + 0x3dc] */ r_ecx = (u32)(r_ebp+0x3dcu);
    /* 0054d4a7: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x54d4aau); call_ind(t); }
    /* 0054d4aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054d4ac: je 0x54d501 */ if (fZ) goto L_0054d501;
L_0054d4ae:; BB(0x0054d4ae);
    /* 0054d4ae: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0054d4b4: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0054d4b7: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054d4ba: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0054d4c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d4c2: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x54d4c8u); call_ind(t); }
    /* 0054d4c8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054d4cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d4cd: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x54d4d3u); call_ind(t); }
    /* 0054d4d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d4d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054d4d5: ret 4 */ FN_RET(0x0054d3d4); r_esp += 8; return;
L_0054d4d8:; BB(0x0054d4d8);
    /* 0054d4d8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054d4db: jne 0x54d501 */ if (!fZ) goto L_0054d501;
L_0054d4dd:; BB(0x0054d4dd);
    /* 0054d4dd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054d4e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d4e2: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x54d4e8u); call_ind(t); }
    /* 0054d4e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d4e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054d4ea: ret 4 */ FN_RET(0x0054d3d4); r_esp += 8; return;
L_0054d4ed:; BB(0x0054d4ed);
    /* 0054d4ed: mov eax, dword ptr [ebp + 0x4d8] */ r_eax = R32((u32)(r_ebp+0x4d8u));
    /* 0054d4f3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054d4f6: jne 0x54d501 */ if (!fZ) goto L_0054d501;
L_0054d4f8:; BB(0x0054d4f8);
    /* 0054d4f8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d4fa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d4fc: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54d501u); f_0051f62c();
L_0054d501:; BB(0x0054d501);
    /* 0054d501: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d502: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054d503: ret 4 */ FN_RET(0x0054d3d4); r_esp += 8; return;
L_0054d506:; BB(0x0054d506);
    /* 0054d506: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d508: mov eax, 1 */ r_eax = 0x1u;
    /* 0054d50d: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0054d514: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d516: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54d51bu); f_0051f664();
    /* 0054d51b: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0054d521: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0054d524: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054d527: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054d52a: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0054d530: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d532: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x54d538u); call_ind(t); }
    /* 0054d538: mov eax, dword ptr [ebp + 0x3dc] */ r_eax = R32((u32)(r_ebp+0x3dcu));
    /* 0054d53e: lea ecx, [ebp + 0x3dc] */ r_ecx = (u32)(r_ebp+0x3dcu);
    /* 0054d544: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x54d547u); call_ind(t); }
    /* 0054d547: push 0x267 */ { u32 v = 0x267u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d54c: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 0054d54f: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 0054d552: mov edi, dword ptr [ebp + 0x58] */ r_edi = R32((u32)(r_ebp+0x58u));
    /* 0054d555: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054d557: mov dword ptr [ebp + 0x4d4], ecx */ W32((u32)(r_ebp+0x4d4u), r_ecx);
    /* 0054d55d: mov dword ptr [ebp + 0x4d8], ecx */ W32((u32)(r_ebp+0x4d8u), r_ecx);
    /* 0054d563: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0054d566: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0054d569: mov dword ptr [ebp + 0x40], edi */ W32((u32)(r_ebp+0x40u), r_edi);
    /* 0054d56c: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 0054d56f: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 0054d572: mov dword ptr [ebp + 0x4c], edi */ W32((u32)(r_ebp+0x4cu), r_edi);
    /* 0054d575: mov dword ptr [ebp + 0x300], eax */ W32((u32)(r_ebp+0x300u), r_eax);
    /* 0054d57b: mov dword ptr [ebp + 0x304], edx */ W32((u32)(r_ebp+0x304u), r_edx);
    /* 0054d581: mov dword ptr [ebp + 0x308], edi */ W32((u32)(r_ebp+0x308u), r_edi);
    /* 0054d587: mov dword ptr [ebp + 0x490], ecx */ W32((u32)(r_ebp+0x490u), r_ecx);
    /* 0054d58d: mov dword ptr [ebp + 0x494], ecx */ W32((u32)(r_ebp+0x494u), r_ecx);
    /* 0054d593: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054d595: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54d59au); f_007879b8();
    /* 0054d59a: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0054d59d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054d59f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d5a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d5a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d5a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054d5a3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54d5a8u); f_00814298();
    /* 0054d5a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054d5ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d5ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054d5ad: ret 4 */ FN_RET(0x0054d3d4); r_esp += 8; return;
}

void f_0054d5b0(void) /* sub_54D5B0 */
{
    FN_ENTER(0x0054d5b0);
    /* 0054d5b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054d5b1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054d5b4: mov edi, ecx */ r_edi = r_ecx;
    /* 0054d5b6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0054d5ba: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d5bd: je 0x54d645 */ if (fZ) goto L_0054d645;
L_0054d5c3:; BB(0x0054d5c3);
    /* 0054d5c3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d5c6: jne 0x54d62e */ if (!fZ) goto L_0054d62e;
L_0054d5c8:; BB(0x0054d5c8);
    /* 0054d5c8: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d5cd: mov ecx, edi */ r_ecx = r_edi;
    /* 0054d5cf: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x54d5d4u); f_00520ea0();
    /* 0054d5d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d5d6: je 0x54d62e */ if (fZ) goto L_0054d62e;
L_0054d5d8:; BB(0x0054d5d8);
    /* 0054d5d8: mov ecx, edi */ r_ecx = r_edi;
    /* 0054d5da: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x54d5dfu); f_005213d8();
    /* 0054d5df: mov ecx, edi */ r_ecx = r_edi;
    /* 0054d5e1: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x54d5e6u); f_00521410();
    /* 0054d5e6: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0054d5ec: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0054d5f2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0054d5f4: fmul qword ptr [0x924130] */ ST(0) = ST(0) * R_F64((u32)(0x924130u));
    /* 0054d5fa: fdiv qword ptr [0x924128] */ ST(0) = ST(0) / R_F64((u32)(0x924128u));
    /* 0054d600: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0054d603: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0054d607: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054d60c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054d610: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0054d614: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054d617: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0054d61a: mov eax, dword ptr [edi + 0x4c4] */ r_eax = R32((u32)(r_edi+0x4c4u));
    /* 0054d620: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d623: je 0x54d635 */ if (fZ) goto L_0054d635;
L_0054d625:; BB(0x0054d625);
    /* 0054d625: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d627: mov ecx, edi */ r_ecx = r_edi;
    /* 0054d629: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54d62eu); f_0051f62c();
L_0054d62e:; BB(0x0054d62e);
    /* 0054d62e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054d631: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054d632: ret 4 */ FN_RET(0x0054d5b0); r_esp += 8; return;
L_0054d635:; BB(0x0054d635);
    /* 0054d635: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d637: mov ecx, edi */ r_ecx = r_edi;
    /* 0054d639: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54d63eu); f_0051f62c();
    /* 0054d63e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054d641: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054d642: ret 4 */ FN_RET(0x0054d5b0); r_esp += 8; return;
L_0054d645:; BB(0x0054d645);
    /* 0054d645: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d647: mov ecx, edi */ r_ecx = r_edi;
    /* 0054d649: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54d64eu); f_0051f664();
    /* 0054d64e: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0054d654: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0054d656: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054d659: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0054d65f: mov ecx, edi */ r_ecx = r_edi;
    /* 0054d661: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x54d667u); call_ind(t); }
    /* 0054d667: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 0054d66a: mov edx, dword ptr [edi + 0x54] */ r_edx = R32((u32)(r_edi+0x54u));
    /* 0054d66d: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0054d670: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 0054d673: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0054d676: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 0054d679: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054d67c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054d67d: ret 4 */ FN_RET(0x0054d5b0); r_esp += 8; return;
}

void f_0054d680(void) /* sub_54D680 */
{
    FN_ENTER(0x0054d680);
    /* 0054d680: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0054d687: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054d68a: je 0x54d693 */ if (fZ) goto L_0054d693;
L_0054d68c:; BB(0x0054d68c);
    /* 0054d68c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d68e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54d693u); f_0051f62c();
L_0054d693:; BB(0x0054d693);
    /* 0054d693: ret  */ FN_RET(0x0054d680); r_esp += 4; return;
}

void f_0054d724(void) /* sub_54D724 */
{
    FN_ENTER(0x0054d724);
    /* 0054d724: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054d725: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054d728: mov dword ptr [0xa738ec], 0 */ W32((u32)(0xa738ecu), 0x0u);
    /* 0054d732: mov dword ptr [0xa738f0], 0 */ W32((u32)(0xa738f0u), 0x0u);
    /* 0054d73c: mov dword ptr [0xa738f4], 0 */ W32((u32)(0xa738f4u), 0x0u);
    /* 0054d746: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x54d74bu); f_00482a20();
    /* 0054d74b: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0054d74e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d750: jne 0x54d764 */ if (!fZ) goto L_0054d764;
L_0054d752:; BB(0x0054d752);
    /* 0054d752: push 0x9bd578 */ { u32 v = 0x9bd578u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d757: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x54d75cu); f_0051f6b0();
    /* 0054d75c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054d75d: mov dword ptr [0xa7390c], eax */ W32((u32)(0xa7390cu), r_eax);
    /* 0054d762: jmp 0x54d774 */ goto L_0054d774;
L_0054d764:; BB(0x0054d764);
    /* 0054d764: push 0x9bd534 */ { u32 v = 0x9bd534u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d769: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x54d76eu); f_0051f6b0();
    /* 0054d76e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054d76f: mov dword ptr [0xa7390c], eax */ W32((u32)(0xa7390cu), r_eax);
L_0054d774:; BB(0x0054d774);
    /* 0054d774: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d776: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x54d77bu); f_0077a684();
    /* 0054d77b: mov dword ptr [0xa7391c], eax */ W32((u32)(0xa7391cu), r_eax);
    /* 0054d780: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d782: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x54d787u); f_0077a698();
    /* 0054d787: mov dword ptr [0xa73918], eax */ W32((u32)(0xa73918u), r_eax);
    /* 0054d78c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d78e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x54d793u); f_0077a6b4();
    /* 0054d793: mov dword ptr [0xa73914], eax */ W32((u32)(0xa73914u), r_eax);
    /* 0054d798: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d79a: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x54d79fu); f_0077a6cc();
    /* 0054d79f: mov edx, eax */ r_edx = r_eax;
    /* 0054d7a1: fld dword ptr [0x924174] */ FPUSH(R_F32((u32)(0x924174u)));
    /* 0054d7a7: mov dword ptr [0xa73910], edx */ W32((u32)(0xa73910u), r_edx);
    /* 0054d7ad: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0054d7af: mov dword ptr [0xa73930], edi */ W32((u32)(0xa73930u), r_edi);
    /* 0054d7b5: mov dword ptr [0xa7392c], edi */ W32((u32)(0xa7392cu), r_edi);
    /* 0054d7bb: mov dword ptr [0xa73928], edi */ W32((u32)(0xa73928u), r_edi);
    /* 0054d7c1: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0054d7c4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0054d7c6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054d7c8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054d7c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054d7cb: jae 0x54d7cf */ if (!fC) goto L_0054d7cf;
L_0054d7cd:; BB(0x0054d7cd);
    /* 0054d7cd: fst st(1) */ ST(1) = ST(0);
L_0054d7cf:; BB(0x0054d7cf);
    /* 0054d7cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054d7d1: fstp dword ptr [0x9bd4a8] */ W_F32((u32)(0x9bd4a8u), ST(0)); FPOP();
    /* 0054d7d7: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0054d7da: mov edx, dword ptr [0xa7390c] */ r_edx = R32((u32)(0xa7390cu));
    /* 0054d7e0: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0054d7e6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0054d7e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054d7ea: mov dword ptr [0xa73920], edi */ W32((u32)(0xa73920u), r_edi);
    /* 0054d7f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054d7f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054d7f3: jae 0x54d7f7 */ if (!fC) goto L_0054d7f7;
L_0054d7f5:; BB(0x0054d7f5);
    /* 0054d7f5: fst st(1) */ ST(1) = ST(0);
L_0054d7f7:; BB(0x0054d7f7);
    /* 0054d7f7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054d7f9: fstp dword ptr [0x9bd4b8] */ W_F32((u32)(0x9bd4b8u), ST(0)); FPOP();
    /* 0054d7ff: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0054d802: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0054d805: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0054d808: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0054d80b: mov dword ptr [0xa73924], eax */ W32((u32)(0xa73924u), r_eax);
    /* 0054d810: mov eax, dword ptr [0x924118] */ r_eax = R32((u32)(0x924118u));
    /* 0054d815: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0054d819: movzx eax, word ptr [0x92411c] */ r_eax = (u32)R16((u32)(0x92411cu));
    /* 0054d820: mov word ptr [esp + 0x18], ax */ W16((u32)(r_esp+0x18u), (u16)r_eax);
    /* 0054d825: movzx eax, word ptr [0x92411e] */ r_eax = (u32)R16((u32)(0x92411eu));
    /* 0054d82c: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 0054d831: movzx eax, word ptr [0x924120] */ r_eax = (u32)R16((u32)(0x924120u));
    /* 0054d838: mov word ptr [esp + 0x1c], ax */ W16((u32)(r_esp+0x1cu), (u16)r_eax);
    /* 0054d83d: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0054d843: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0054d847: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0054d84b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054d84c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d84e: push dword ptr [0x9bd3ac] */ { u32 v = R32((u32)(0x9bd3acu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d854: push dword ptr [ecx + 0xc] */ { u32 v = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d857: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d85a: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d85c: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x54d861u); f_00608470();
    /* 0054d861: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054d864: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054d865: ret  */ FN_RET(0x0054d724); r_esp += 4; return;
}

void f_0054d868(void) /* sub_54D868 */
{
    FN_ENTER(0x0054d868);
    /* 0054d868: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d869: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054d86b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054d86f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d872: je 0x54d895 */ if (fZ) goto L_0054d895;
L_0054d874:; BB(0x0054d874);
    /* 0054d874: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d877: je 0x54d888 */ if (fZ) goto L_0054d888;
L_0054d879:; BB(0x0054d879);
    /* 0054d879: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054d87b: jne 0x54d891 */ if (!fZ) goto L_0054d891;
L_0054d87d:; BB(0x0054d87d);
    /* 0054d87d: add dword ptr [ebx + 0x4d4], 1 */ { u32 ad = (u32)(r_ebx+0x4d4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054d884: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054d885: ret 4 */ FN_RET(0x0054d868); r_esp += 8; return;
L_0054d888:; BB(0x0054d888);
    /* 0054d888: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d88a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054d88c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54d891u); f_0051f62c();
L_0054d891:; BB(0x0054d891);
    /* 0054d891: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054d892: ret 4 */ FN_RET(0x0054d868); r_esp += 8; return;
L_0054d895:; BB(0x0054d895);
    /* 0054d895: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d897: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054d899: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54d89eu); f_0051f664();
    /* 0054d89e: mov dword ptr [ebx + 0x4d4], 0 */ W32((u32)(r_ebx+0x4d4u), 0x0u);
    /* 0054d8a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054d8a9: ret 4 */ FN_RET(0x0054d868); r_esp += 8; return;
}

void f_0054d8ac(void) /* sub_54D8AC */
{
    FN_ENTER(0x0054d8ac);
    /* 0054d8ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054d8ad: mov edi, ecx */ r_edi = r_ecx;
    /* 0054d8af: mov ecx, edi */ r_ecx = r_edi;
    /* 0054d8b1: push 0x41a80000 */ { u32 v = 0x41a80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d8b6: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54d8bbu); f_007aaa30();
    /* 0054d8bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054d8bd: je 0x54d8c6 */ if (fZ) goto L_0054d8c6;
L_0054d8bf:; BB(0x0054d8bf);
    /* 0054d8bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0054d8c1: call 0x54be70 */ r_esp -= 4; W32(r_esp, 0x54d8c6u); f_0054be70();
L_0054d8c6:; BB(0x0054d8c6);
    /* 0054d8c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054d8c7: ret  */ FN_RET(0x0054d8ac); r_esp += 4; return;
}

void f_0054d8c8(void) /* sub_54D8C8 */
{
    FN_ENTER(0x0054d8c8);
    /* 0054d8c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d8c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0054d8cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d8cd: push 0x8d5d20 */ { u32 v = 0x8d5d20u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d8d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054d8d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054d8d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054d8e0: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054d8e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054d8e6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0054d8e9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0054d8ec: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0054d8ef: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0054d8f2: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x54d8f7u); f_00521840();
    /* 0054d8f7: mov ebx, dword ptr [0xa7390c] */ r_ebx = R32((u32)(0xa7390cu));
    /* 0054d8fd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d900: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d902: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0054d908: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0054d90b: push 0x9bd3a0 */ { u32 v = 0x9bd3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d910: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0054d913: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 0054d919: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0054d91c: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0054d91f: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x54d924u); f_0051ff3c();
    /* 0054d924: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d927: mov ebx, dword ptr [0xa7390c] */ r_ebx = R32((u32)(0xa7390cu));
    /* 0054d92d: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0054d933: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0054d936: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0054d938: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054d93d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054d93e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0054d941: mov dword ptr [ecx + 0xd8], 0x9bd460 */ W32((u32)(r_ecx+0xd8u), 0x9bd460u);
    /* 0054d94b: mov esi, dword ptr [ebx + 0x430] */ r_esi = R32((u32)(r_ebx+0x430u));
    /* 0054d951: mov dword ptr [ecx + 0xdc], esi */ W32((u32)(r_ecx+0xdcu), r_esi);
    /* 0054d957: mov word ptr [ecx + 0xb8], di */ W16((u32)(r_ecx+0xb8u), (u16)r_edi);
    /* 0054d95e: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x54d963u); f_007aa4c8();
    /* 0054d963: push dword ptr [0xa73914] */ { u32 v = R32((u32)(0xa73914u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d969: push dword ptr [0xa73918] */ { u32 v = R32((u32)(0xa73918u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d96f: push dword ptr [0xa7391c] */ { u32 v = R32((u32)(0xa7391cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d975: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d978: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0054d97f: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0054d986: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x54d98bu); f_00520c70();
    /* 0054d98b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d98e: call 0x520380 */ r_esp -= 4; W32(r_esp, 0x54d993u); f_00520380();
    /* 0054d993: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d996: mov dword ptr [ecx + 0x358], 0x9bd58c */ W32((u32)(r_ecx+0x358u), 0x9bd58cu);
    /* 0054d9a0: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d9a2: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x54d9a7u); f_00520390();
    /* 0054d9a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d9aa: mov dword ptr [ecx + 0x384], 0x41a00000 */ W32((u32)(r_ecx+0x384u), 0x41a00000u);
    /* 0054d9b4: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d9b6: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x54d9bbu); f_00521820();
    /* 0054d9bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d9be: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d9c0: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x54d9c5u); f_005217fc();
    /* 0054d9c5: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d9c8: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0054d9cb: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0054d9ce: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0054d9d1: mov edi, dword ptr [esi + 0x3dc] */ r_edi = R32((u32)(r_esi+0x3dcu));
    /* 0054d9d7: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 0054d9dd: mov dword ptr [esi + 0x3cc], 0 */ W32((u32)(r_esi+0x3ccu), 0x0u);
    /* 0054d9e7: mov dword ptr [esi + 0x3d4], edx */ W32((u32)(r_esi+0x3d4u), r_edx);
    /* 0054d9ed: mov dword ptr [esi + 0x3d8], ebx */ W32((u32)(r_esi+0x3d8u), r_ebx);
    /* 0054d9f3: lea ecx, [esi + 0x3dc] */ r_ecx = (u32)(r_esi+0x3dcu);
    /* 0054d9f9: mov dword ptr [esi + 0x3c8], 1 */ W32((u32)(r_esi+0x3c8u), 0x1u);
    /* 0054da03: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x54da06u); call_ind(t); }
    /* 0054da06: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0054da08:; BB(0x0054da08);
    /* 0054da08: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054da0b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0054da0e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054da10: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0054da13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0054da15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0054da17: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0054da19: lea ecx, [edx + esi + 0x3f8] */ r_ecx = (u32)(r_edx+r_esi+0x3f8u);
    /* 0054da20: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x54da25u); f_0057739c();
    /* 0054da25: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0054da28: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054da2b: jl 0x54da08 */ if ((fS!=fO)) goto L_0054da08;
L_0054da2d:; BB(0x0054da2d);
    /* 0054da2d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054da30: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054da35: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0054da38: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0054da3b: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0054da3e: mov dword ptr [ebx + 0x468], eax */ W32((u32)(r_ebx+0x468u), r_eax);
    /* 0054da44: mov dword ptr [ebx + 0x46c], edx */ W32((u32)(r_ebx+0x46cu), r_edx);
    /* 0054da4a: mov dword ptr [ebx + 0x470], ecx */ W32((u32)(r_ebx+0x470u), r_ecx);
    /* 0054da50: mov dword ptr [ebx + 0x474], eax */ W32((u32)(r_ebx+0x474u), r_eax);
    /* 0054da56: mov dword ptr [ebx + 0x478], edx */ W32((u32)(r_ebx+0x478u), r_edx);
    /* 0054da5c: mov dword ptr [ebx + 0x47c], ecx */ W32((u32)(r_ebx+0x47cu), r_ecx);
    /* 0054da62: mov dword ptr [ebx + 0x480], eax */ W32((u32)(r_ebx+0x480u), r_eax);
    /* 0054da68: mov dword ptr [ebx + 0x484], edx */ W32((u32)(r_ebx+0x484u), r_edx);
    /* 0054da6e: mov dword ptr [ebx + 0x488], ecx */ W32((u32)(r_ebx+0x488u), r_ecx);
    /* 0054da74: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0054da76: mov dword ptr [ebx + 0x48c], esi */ W32((u32)(r_ebx+0x48cu), r_esi);
    /* 0054da7c: mov dword ptr [ebx + 0x490], esi */ W32((u32)(r_ebx+0x490u), r_esi);
    /* 0054da82: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 0054da85: mov dword ptr [ebx + 0x494], esi */ W32((u32)(r_ebx+0x494u), r_esi);
    /* 0054da8b: mov dword ptr [ebx + 0x498], esi */ W32((u32)(r_ebx+0x498u), r_esi);
    /* 0054da91: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x54da96u); f_005caba4();
    /* 0054da96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054da97: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0054da9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054da9c: je 0x54dc8a */ if (fZ) goto L_0054dc8a;
L_0054daa2:; BB(0x0054daa2);
    /* 0054daa2: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0054daa9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054dab0: mov eax, ebx */ r_eax = r_ebx;
    /* 0054dab2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0054dab5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dab7: push 0x9bd3cc */ { u32 v = 0x9bd3ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0054dabc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054dabd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054dabe: call 0x521c5c */ r_esp -= 4; W32(r_esp, 0x54dac3u); f_00521c5c();
    /* 0054dac3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0054dac6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0054dacd:; BB(0x0054dacd);
    /* 0054dacd: mov eax, ebx */ r_eax = r_ebx;
    /* 0054dacf: mov dword ptr [eax + 0x49c], edx */ W32((u32)(r_eax+0x49cu), r_edx);
    /* 0054dad5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054dadc: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0054dae3: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dae8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x54daedu); f_005caba4();
    /* 0054daed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054daee: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0054daf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054daf3: je 0x54dc83 */ if (fZ) goto L_0054dc83;
L_0054daf9:; BB(0x0054daf9);
    /* 0054daf9: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0054db00: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054db07: mov eax, ebx */ r_eax = r_ebx;
    /* 0054db09: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0054db0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054db0e: push 0x9bd3f8 */ { u32 v = 0x9bd3f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054db13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054db14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054db15: call 0x521c5c */ r_esp -= 4; W32(r_esp, 0x54db1au); f_00521c5c();
    /* 0054db1a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0054db1d: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0054db24:; BB(0x0054db24);
    /* 0054db24: mov eax, ebx */ r_eax = r_ebx;
    /* 0054db26: mov dword ptr [eax + 0x4a0], edx */ W32((u32)(r_eax+0x4a0u), r_edx);
    /* 0054db2c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054db33: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0054db3a: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0054db3f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x54db44u); f_005caba4();
    /* 0054db44: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054db47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054db4a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0054db4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054db4f: je 0x54dc79 */ if (fZ) goto L_0054dc79;
L_0054db55:; BB(0x0054db55);
    /* 0054db55: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0054db5c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0054db63: mov ecx, eax */ r_ecx = r_eax;
    /* 0054db65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054db67: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x54db6cu); f_007b4b48();
    /* 0054db6c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0054db73:; BB(0x0054db73);
    /* 0054db73: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054db76: mov edx, ebx */ r_edx = r_ebx;
    /* 0054db78: mov dword ptr [edx + 0x4a4], eax */ W32((u32)(r_edx+0x4a4u), r_eax);
    /* 0054db7e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054db85: mov ecx, eax */ r_ecx = r_eax;
    /* 0054db87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054db89: push 0x9bd424 */ { u32 v = 0x9bd424u; r_esp -= 4; W32(r_esp, v); }
    /* 0054db8e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x54db93u); f_007b9a88();
    /* 0054db93: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0054db9a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0054db9c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x54dba1u); f_008581c5();
    /* 0054dba1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054dba4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054dba7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0054dbaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dbac: je 0x54dc6f */ if (fZ) goto L_0054dc6f;
L_0054dbb2:; BB(0x0054dbb2);
    /* 0054dbb2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0054dbb9: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0054dbc0: mov ecx, eax */ r_ecx = r_eax;
    /* 0054dbc2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dbc4: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x54dbc9u); f_00521a4c();
    /* 0054dbc9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0054dbd0:; BB(0x0054dbd0);
    /* 0054dbd0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054dbd3: mov edx, ebx */ r_edx = r_ebx;
    /* 0054dbd5: mov dword ptr [edx + 0x4a8], eax */ W32((u32)(r_edx+0x4a8u), r_eax);
    /* 0054dbdb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054dbe2: push 0x80000080 */ { u32 v = 0x80000080u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dbe7: push 0xff5050ff */ { u32 v = 0xff5050ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054dbec: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x54dbf1u); f_00578cc4();
    /* 0054dbf1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054dbf4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054dbf6: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0054dbf8: mov dword ptr [ecx + 0x4e4], 0 */ W32((u32)(r_ecx+0x4e4u), 0x0u);
    /* 0054dc02: mov dword ptr [ecx + 0x4ac], eax */ W32((u32)(r_ecx+0x4acu), r_eax);
    /* 0054dc08: mov dword ptr [ecx + 0x4e8], 0 */ W32((u32)(r_ecx+0x4e8u), 0x0u);
    /* 0054dc12: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dc14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054dc16: mov dword ptr [ecx + 0x4d4], eax */ W32((u32)(r_ecx+0x4d4u), r_eax);
    /* 0054dc1c: mov dword ptr [ecx + 0x4d8], eax */ W32((u32)(r_ecx+0x4d8u), r_eax);
    /* 0054dc22: mov dword ptr [ecx + 0x4dc], eax */ W32((u32)(r_ecx+0x4dcu), r_eax);
    /* 0054dc28: mov dword ptr [ecx + 0x4e0], eax */ W32((u32)(r_ecx+0x4e0u), r_eax);
    /* 0054dc2e: mov edx, 1 */ r_edx = 0x1u;
    /* 0054dc33: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 0054dc3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054dc3b: call dword ptr [ebx + 0x164] */ { u32 t = R32((u32)(r_ebx+0x164u)); r_esp -= 4; W32(r_esp, 0x54dc41u); call_ind(t); }
    /* 0054dc41: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054dc44: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054dc47: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054dc4a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054dc4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054dc4f: mov dword ptr [edx + 0x4c8], eax */ W32((u32)(r_edx+0x4c8u), r_eax);
    /* 0054dc55: mov dword ptr [edx + 0x4cc], eax */ W32((u32)(r_edx+0x4ccu), r_eax);
    /* 0054dc5b: mov dword ptr [edx + 0x4d0], eax */ W32((u32)(r_edx+0x4d0u), r_eax);
    /* 0054dc61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054dc64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054dc6b: mov esp, ebp */ r_esp = r_ebp;
    /* 0054dc6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054dc6e: ret  */ FN_RET(0x0054d8c8); r_esp += 4; return;
L_0054dc6f:; BB(0x0054dc6f);
    /* 0054dc6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054dc71: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054dc74: jmp 0x54dbd0 */ goto L_0054dbd0;
L_0054dc79:; BB(0x0054dc79);
    /* 0054dc79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054dc7b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054dc7e: jmp 0x54db73 */ goto L_0054db73;
L_0054dc83:; BB(0x0054dc83);
    /* 0054dc83: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054dc85: jmp 0x54db24 */ goto L_0054db24;
L_0054dc8a:; BB(0x0054dc8a);
    /* 0054dc8a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054dc8c: jmp 0x54dacd */ goto L_0054dacd;
}

void f_0054dc94(void) /* sub_54DC94 */
{
    FN_ENTER(0x0054dc94);
    /* 0054dc94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054dc95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054dc97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054dc99: call 0x54dcb8 */ r_esp -= 4; W32(r_esp, 0x54dc9eu); f_0054dcb8();
    /* 0054dc9e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054dca2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054dca4: jne 0x54dcaa */ if (!fZ) goto L_0054dcaa;
L_0054dca6:; BB(0x0054dca6);
    /* 0054dca6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054dca7: ret 4 */ FN_RET(0x0054dc94); r_esp += 8; return;
L_0054dcaa:; BB(0x0054dcaa);
    /* 0054dcaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054dcab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x54dcb0u); f_005c2f74();
    /* 0054dcb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054dcb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054dcb2: ret 4 */ FN_RET(0x0054dc94); r_esp += 8; return;
}

void f_0054dca0(void)
{
    FN_ENTER(0x0054dca0);
    /* 0054dca0: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054dca2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054dca4: jne 0x54dcaa */ if (!fZ) goto L_0054dcaa;
L_0054dca6:; BB(0x0054dca6);
    /* 0054dca6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054dca7: ret 4 */ FN_RET(0x0054dca0); r_esp += 8; return;
L_0054dcaa:; BB(0x0054dcaa);
    /* 0054dcaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054dcab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x54dcb0u); f_005c2f74();
    /* 0054dcb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054dcb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054dcb2: ret 4 */ FN_RET(0x0054dca0); r_esp += 8; return;
}

void f_0054dcb8(void) /* sub_54DCB8 */
{
    FN_ENTER(0x0054dcb8);
    /* 0054dcb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054dcb9: mov ebp, esp */ r_ebp = r_esp;
    /* 0054dcbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054dcbd: push 0x8d5d3c */ { u32 v = 0x8d5d3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054dcc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054dcc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054dcc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054dcd0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054dcd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054dcd6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0054dcd9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0054dcdc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0054dcdf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0054dce2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054dce5: mov dword ptr [ecx], 0xb03e40 */ W32((u32)(r_ecx), 0xb03e40u);
    /* 0054dceb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054dcf2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x54dcf7u); f_008171e8();
    /* 0054dcf7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054dcfa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054dd01: mov esp, ebp */ r_esp = r_ebp;
    /* 0054dd03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054dd04: ret  */ FN_RET(0x0054dcb8); r_esp += 4; return;
}

void f_0054dd08(void) /* sub_54DD08 */
{
    FN_ENTER(0x0054dd08);
    /* 0054dd08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd09: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054dd0b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054dd0d: call 0x54dd2c */ r_esp -= 4; W32(r_esp, 0x54dd12u); f_0054dd2c();
    /* 0054dd12: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054dd16: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054dd18: jne 0x54dd1e */ if (!fZ) goto L_0054dd1e;
L_0054dd1a:; BB(0x0054dd1a);
    /* 0054dd1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054dd1b: ret 4 */ FN_RET(0x0054dd08); r_esp += 8; return;
L_0054dd1e:; BB(0x0054dd1e);
    /* 0054dd1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd1f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x54dd24u); f_005c2f74();
    /* 0054dd24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054dd25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054dd26: ret 4 */ FN_RET(0x0054dd08); r_esp += 8; return;
}

void f_0054dd2c(void) /* sub_54DD2C */
{
    FN_ENTER(0x0054dd2c);
    /* 0054dd2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd2d: mov ebp, esp */ r_ebp = r_esp;
    /* 0054dd2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd31: push 0x8d5d58 */ { u32 v = 0x8d5d58u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054dd3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054dd44: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054dd47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054dd4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0054dd4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0054dd50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0054dd53: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0054dd56: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054dd59: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 0054dd5f: mov dword ptr [ecx], 0xb03e60 */ W32((u32)(r_ecx), 0xb03e60u);
    /* 0054dd65: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dd67: je 0x54dd83 */ if (fZ) goto L_0054dd83;
L_0054dd69:; BB(0x0054dd69);
    /* 0054dd69: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054dd6c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054dd70: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054dd75: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054dd79: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
L_0054dd83:; BB(0x0054dd83);
    /* 0054dd83: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054dd8a: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x54dd8fu); f_005219f0();
    /* 0054dd8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054dd92: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054dd99: mov esp, ebp */ r_esp = r_ebp;
    /* 0054dd9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054dd9c: ret  */ FN_RET(0x0054dd2c); r_esp += 4; return;
}

void f_0054dda0(void) /* sub_54DDA0 */
{
    FN_ENTER(0x0054dda0);
    /* 0054dda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054dda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054dda3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054dda5: push 0x8d5d74 */ { u32 v = 0x8d5d74u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ddaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054ddb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ddb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054ddb8: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054ddbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054ddbe: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0054ddc1: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0054ddc4: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0054ddc7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0054ddca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054ddcd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0054ddd0: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0054ddd3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054ddd6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0054ddd9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0054dddc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0054dddf: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x54dde4u); f_008193cc();
    /* 0054dde4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054ddeb: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054ddee: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054ddf1: mov dword ptr [esi], 0xb03e40 */ W32((u32)(r_esi), 0xb03e40u);
    /* 0054ddf7: mov eax, dword ptr [0x9bd5c4] */ r_eax = R32((u32)(0x9bd5c4u));
    /* 0054ddfc: mov dword ptr [esi + 0x30], 0 */ W32((u32)(r_esi+0x30u), 0x0u);
    /* 0054de03: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0054de06: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054de09: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0054de0c: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 0054de0f: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0054de12: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 0054de15: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0054de18: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0054de1b: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 0054de1e: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0054de21: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0054de24: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054de27: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0054de2a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x54de2fu); f_0082f9c4();
    /* 0054de2f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054de32: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0054de35: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0054de3c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x54de41u); f_0082dcbc();
    /* 0054de41: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054de44: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054de47: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0054de4a: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 0054de51: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0054de54: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x54de59u); f_0082ddd8();
    /* 0054de59: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054de5c: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 0054de5f: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0054de62: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054de65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054de66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054de67: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x54de6cu); f_007829cc();
    /* 0054de6c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054de6f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054de72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054de74: je 0x54de8d */ if (fZ) goto L_0054de8d;
L_0054de76:; BB(0x0054de76);
    /* 0054de76: push 0xffffe800 */ { u32 v = 0xffffe800u; r_esp -= 4; W32(r_esp, v); }
    /* 0054de7b: lea eax, [edx + 0x20] */ r_eax = (u32)(r_edx+0x20u);
    /* 0054de7e: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054de81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054de82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054de83: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x54de88u); f_00782b64();
    /* 0054de88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054de8b: jmp 0x54dea2 */ goto L_0054dea2;
L_0054de8d:; BB(0x0054de8d);
    /* 0054de8d: push 0x1800 */ { u32 v = 0x1800u; r_esp -= 4; W32(r_esp, v); }
    /* 0054de92: lea eax, [edx + 0x20] */ r_eax = (u32)(r_edx+0x20u);
    /* 0054de95: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054de98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054de99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054de9a: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x54de9fu); f_00782b64();
    /* 0054de9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0054dea2:; BB(0x0054dea2);
    /* 0054dea2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054dea5: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054dea8: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054deab: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054deae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054deb1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054deb8: mov esp, ebp */ r_esp = r_ebp;
    /* 0054deba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054debb: ret 0x10 */ FN_RET(0x0054dda0); r_esp += 20; return;
}

void f_0054dec0(void) /* sub_54DEC0 */
{
    FN_ENTER(0x0054dec0);
    /* 0054dec0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054dec1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054dec3: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0054dec6: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0054deca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054decb: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x54ded0u); f_0051f8d8();
    /* 0054ded0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054ded1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ded3: je 0x54dee4 */ if (fZ) goto L_0054dee4;
L_0054ded5:; BB(0x0054ded5);
    /* 0054ded5: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0054ded9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054dede: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0054dee2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054dee3: ret  */ FN_RET(0x0054dec0); r_esp += 4; return;
L_0054dee4:; BB(0x0054dee4);
    /* 0054dee4: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054dee7: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x54deecu); f_00520f3c();
    /* 0054deec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054deed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054deef: jne 0x54df00 */ if (!fZ) goto L_0054df00;
L_0054def1:; BB(0x0054def1);
    /* 0054def1: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0054def5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054defa: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0054defe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054deff: ret  */ FN_RET(0x0054dec0); r_esp += 4; return;
L_0054df00:; BB(0x0054df00);
    /* 0054df00: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0054df03: movsx eax, word ptr [edx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x32cu));
    /* 0054df0a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054df0d: jne 0x54df1e */ if (!fZ) goto L_0054df1e;
L_0054df0f:; BB(0x0054df0f);
    /* 0054df0f: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0054df13: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054df18: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0054df1c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054df1d: ret  */ FN_RET(0x0054dec0); r_esp += 4; return;
L_0054df1e:; BB(0x0054df1e);
    /* 0054df1e: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0054df21: fcom dword ptr [0x92447c] */ fx_compare(ST(0), R_F32((u32)(0x92447cu))); 
    /* 0054df27: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054df29: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054df2a: ja 0x54df3d */ if ((!fC&&!fZ)) goto L_0054df3d;
L_0054df2c:; BB(0x0054df2c);
    /* 0054df2c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054df2e: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0054df32: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054df37: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0054df3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054df3c: ret  */ FN_RET(0x0054dec0); r_esp += 4; return;
L_0054df3d:; BB(0x0054df3d);
    /* 0054df3d: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 0054df40: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0054df42: fstp dword ptr [edx + 0x30c] */ W_F32((u32)(r_edx+0x30cu), ST(0)); FPOP();
    /* 0054df48: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 0054df4b: fmul dword ptr [ebx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x2cu));
    /* 0054df4e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0054df51: fstp dword ptr [eax + 0x314] */ W_F32((u32)(r_eax+0x314u), ST(0)); FPOP();
    /* 0054df57: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0054df5a: fmul dword ptr [0x924478] */ ST(0) = ST(0) * R_F32((u32)(0x924478u));
    /* 0054df60: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
    /* 0054df63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054df64: ret  */ FN_RET(0x0054dec0); r_esp += 4; return;
}

void f_0054df68(void) /* sub_54DF68 */
{
    FN_ENTER(0x0054df68);
    /* 0054df68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054df69: mov ebp, esp */ r_ebp = r_esp;
    /* 0054df6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054df6d: push 0x8d5d90 */ { u32 v = 0x8d5d90u; r_esp -= 4; W32(r_esp, v); }
    /* 0054df72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054df78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054df79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054df80: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054df83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054df86: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0054df89: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0054df8c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0054df8f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0054df92: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054df95: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0054df98: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054df9b: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0054df9e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054dfa1: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0054dfa4: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0054dfa7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0054dfaa: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0054dfad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054dfb0: call 0x521bbc */ r_esp -= 4; W32(r_esp, 0x54dfb5u); f_00521bbc();
    /* 0054dfb5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054dfbc: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054dfbf: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054dfc2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054dfc5: mov dword ptr [eax + 0xc8], ebx */ W32((u32)(r_eax+0xc8u), r_ebx);
    /* 0054dfcb: mov dword ptr [eax], 0xb03e60 */ W32((u32)(r_eax), 0xb03e60u);
    /* 0054dfd1: mov edx, dword ptr [0x9bd5c8] */ r_edx = R32((u32)(0x9bd5c8u));
    /* 0054dfd7: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0054dfda: mov dword ptr [eax + 0xc0], 0 */ W32((u32)(r_eax+0xc0u), 0x0u);
    /* 0054dfe4: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
    /* 0054dfee: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0054dff0: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 0054dff3: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 0054dff6: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 0054dff9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0054dffc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054dfff: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0054e002: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x54e007u); f_0082dcbc();
    /* 0054e007: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054e00a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054e00d: fstp dword ptr [eax + 0xb0] */ W_F32((u32)(r_eax+0xb0u), ST(0)); FPOP();
    /* 0054e013: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 0054e01d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x54e022u); f_0082ddd8();
    /* 0054e022: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054e025: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054e028: mov ebx, dword ptr [0x924438] */ r_ebx = R32((u32)(0x924438u));
    /* 0054e02e: mov esi, dword ptr [0x924440] */ r_esi = R32((u32)(0x924440u));
    /* 0054e034: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 0054e03a: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054e03d: fstp dword ptr [edx + 0xb8] */ W_F32((u32)(r_edx+0xb8u), ST(0)); FPOP();
    /* 0054e043: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 0054e046: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0054e04c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054e04f: mov dword ptr [ecx + 0x14], 1 */ W32((u32)(r_ecx+0x14u), 0x1u);
    /* 0054e056: add edi, 0xffffc000 */ {  u32 a = r_edi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054e05c: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054e05f: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 0054e062: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 0054e065: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 0054e068: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e06a: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e06c: push 0x210 */ { u32 v = 0x210u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e072: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e073: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x54e078u); f_0050a664();
    /* 0054e078: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054e07b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054e07e: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 0054e084: mov ecx, eax */ r_ecx = r_eax;
    /* 0054e086: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x54e08bu); f_00509580();
    /* 0054e08b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054e08e: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054e091: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054e094: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054e097: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054e09a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054e0a1: mov esp, ebp */ r_esp = r_ebp;
    /* 0054e0a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054e0a4: ret 0x18 */ FN_RET(0x0054df68); r_esp += 28; return;
}

