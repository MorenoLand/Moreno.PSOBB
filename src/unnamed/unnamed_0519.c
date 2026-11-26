#include "protos.h"

void f_00519024(void) /* sub_519024 */
{
    FN_ENTER(0x00519024);
    /* 00519024: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00519025: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00519027: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519029: call 0x519048 */ r_esp -= 4; W32(r_esp, 0x51902eu); f_00519048();
    /* 0051902e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00519032: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519034: jne 0x51903a */ if (!fZ) goto L_0051903a;
L_00519036:; BB(0x00519036);
    /* 00519036: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519037: ret 4 */ FN_RET(0x00519024); r_esp += 8; return;
L_0051903a:; BB(0x0051903a);
    /* 0051903a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051903b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x519040u); f_005c2f74();
    /* 00519040: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00519041: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519042: ret 4 */ FN_RET(0x00519024); r_esp += 8; return;
}

void f_00519048(void) /* sub_519048 */
{
    FN_ENTER(0x00519048);
    /* 00519048: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519049: mov ebp, esp */ r_ebp = r_esp;
    /* 0051904b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051904d: push 0x8d45d8 */ { u32 v = 0x8d45d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00519052: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00519058: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00519059: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00519060: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00519063: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00519066: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00519069: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0051906c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0051906f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00519072: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00519075: mov dword ptr [ecx], 0xb001a0 */ W32((u32)(r_ecx), 0xb001a0u);
    /* 0051907b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00519082: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x519087u); f_008171e8();
    /* 00519087: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051908a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00519091: mov esp, ebp */ r_esp = r_ebp;
    /* 00519093: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519094: ret  */ FN_RET(0x00519048); r_esp += 4; return;
}

void f_00519098(void) /* sub_519098 */
{
    FN_ENTER(0x00519098);
    /* 00519098: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00519099: mov edx, dword ptr [0xa72de0] */ r_edx = R32((u32)(0xa72de0u));
    /* 0051909f: mov eax, dword ptr [0xa72dec] */ r_eax = R32((u32)(0xa72decu));
    /* 005190a4: cmp eax, dword ptr [edx*4 + 0x920e7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0x920e7cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005190ab: jne 0x5190d2 */ if (!fZ) goto L_005190d2;
L_005190ad:; BB(0x005190ad);
    /* 005190ad: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005190b0: mov dword ptr [0xa72de0], edx */ W32((u32)(0xa72de0u), r_edx);
    /* 005190b6: mov edx, dword ptr [0xa72de4] */ r_edx = R32((u32)(0xa72de4u));
    /* 005190bc: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 005190bf: mov dword ptr [0xa72de4], eax */ W32((u32)(0xa72de4u), r_eax);
    /* 005190c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005190c5: push 0xa72d80 */ { u32 v = 0xa72d80u; r_esp -= 4; W32(r_esp, v); }
    /* 005190ca: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x5190cfu); f_00520c5c();
    /* 005190cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005190d2:; BB(0x005190d2);
    /* 005190d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005190d6: call 0x5190e4 */ r_esp -= 4; W32(r_esp, 0x5190dbu); f_005190e4();
    /* 005190db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005190dc: ret  */ FN_RET(0x00519098); r_esp += 4; return;
}

void f_005190e0(void) /* sub_5190E0 */
{
    FN_ENTER(0x005190e0);
    /* 005190e0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005190e4: mov eax, dword ptr [0xa72dec] */ r_eax = R32((u32)(0xa72decu));
    /* 005190e9: cmp eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005190ec: je 0x5190f3 */ if (fZ) goto L_005190f3;
L_005190ee:; BB(0x005190ee);
    /* 005190ee: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005190f1: jne 0x519114 */ if (!fZ) goto L_00519114;
L_005190f3:; BB(0x005190f3);
    /* 005190f3: mov edx, dword ptr [0xa72de8] */ r_edx = R32((u32)(0xa72de8u));
    /* 005190f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005190fa: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 005190fd: mov dword ptr [0xa72de8], eax */ W32((u32)(0xa72de8u), r_eax);
    /* 00519102: push 0xa72d80 */ { u32 v = 0xa72d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00519107: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x51910cu); f_00520c5c();
    /* 0051910c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051910f: mov eax, dword ptr [0xa72dec] */ r_eax = R32((u32)(0xa72decu));
L_00519114:; BB(0x00519114);
    /* 00519114: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00519117: mov dword ptr [0xa72dec], eax */ W32((u32)(0xa72decu), r_eax);
    /* 0051911c: ret  */ FN_RET(0x005190e0); r_esp += 4; return;
}

void f_005190e4(void) /* sub_5190E4 */
{
    FN_ENTER(0x005190e4);
    /* 005190e4: mov eax, dword ptr [0xa72dec] */ r_eax = R32((u32)(0xa72decu));
    /* 005190e9: cmp eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005190ec: je 0x5190f3 */ if (fZ) goto L_005190f3;
L_005190ee:; BB(0x005190ee);
    /* 005190ee: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005190f1: jne 0x519114 */ if (!fZ) goto L_00519114;
L_005190f3:; BB(0x005190f3);
    /* 005190f3: mov edx, dword ptr [0xa72de8] */ r_edx = R32((u32)(0xa72de8u));
    /* 005190f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005190fa: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 005190fd: mov dword ptr [0xa72de8], eax */ W32((u32)(0xa72de8u), r_eax);
    /* 00519102: push 0xa72d80 */ { u32 v = 0xa72d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00519107: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x51910cu); f_00520c5c();
    /* 0051910c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051910f: mov eax, dword ptr [0xa72dec] */ r_eax = R32((u32)(0xa72decu));
L_00519114:; BB(0x00519114);
    /* 00519114: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00519117: mov dword ptr [0xa72dec], eax */ W32((u32)(0xa72decu), r_eax);
    /* 0051911c: ret  */ FN_RET(0x005190e4); r_esp += 4; return;
}

void f_00519120(void)
{
    FN_ENTER(0x00519120);
    /* 00519120: call 0x51671c */ r_esp -= 4; W32(r_esp, 0x519125u); f_0051671c();
    /* 00519125: mov ecx, dword ptr [0xa72dcc] */ r_ecx = R32((u32)(0xa72dccu));
    /* 0051912b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051912d: je 0x519142 */ if (fZ) goto L_00519142;
L_0051912f:; BB(0x0051912f);
    /* 0051912f: je 0x519138 */ if (fZ) goto L_00519138;
L_00519131:; BB(0x00519131);
    /* 00519131: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00519133: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x519138u); f_004066a8();
L_00519138:; BB(0x00519138);
    /* 00519138: mov dword ptr [0xa72dcc], 0 */ W32((u32)(0xa72dccu), 0x0u);
L_00519142:; BB(0x00519142);
    /* 00519142: ret  */ FN_RET(0x00519120); r_esp += 4; return;
}

void f_00519144(void)
{
    FN_ENTER(0x00519144);
    /* 00519144: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519145: mov ebp, esp */ r_ebp = r_esp;
    /* 00519147: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00519149: push 0x8d4600 */ { u32 v = 0x8d4600u; r_esp -= 4; W32(r_esp, v); }
    /* 0051914e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00519154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00519155: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051915c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051915f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00519162: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00519165: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00519168: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0051916b: push 0x4e4 */ { u32 v = 0x4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00519170: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00519177: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x51917cu); f_005caba4();
    /* 0051917c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051917d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00519180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519182: je 0x5191bb */ if (fZ) goto L_005191bb;
L_00519184:; BB(0x00519184);
    /* 00519184: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0051918b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00519192: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00519195: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051919b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051919e: call 0x5191c0 */ r_esp -= 4; W32(r_esp, 0x5191a3u); f_005191c0();
    /* 005191a3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005191a6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005191ad:; BB(0x005191ad);
    /* 005191ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005191b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005191b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005191b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005191ba: ret  */ FN_RET(0x00519144); r_esp += 4; return;
L_005191bb:; BB(0x005191bb);
    /* 005191bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005191bd: jmp 0x5191ad */ goto L_005191ad;
}

void f_005191b1(void)
{
    FN_ENTER(0x005191b1);
    /* 005191b1: mov dword ptr [0], ecx */ W32((u32)(0x0u), r_ecx);
    /* 005191b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005191b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005191ba: ret  */ FN_RET(0x005191b1); r_esp += 4; return;
}

void f_005191c0(void) /* sub_5191C0 */
{
    FN_ENTER(0x005191c0);
    /* 005191c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005191c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005191c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005191c5: push 0x8d463a */ { u32 v = 0x8d463au; r_esp -= 4; W32(r_esp, v); }
    /* 005191ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005191d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005191d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005191d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005191db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005191de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005191e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005191e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005191e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005191ea: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005191ed: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005191f0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005191f3: call 0x521738 */ r_esp -= 4; W32(r_esp, 0x5191f8u); f_00521738();
    /* 005191f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005191ff: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00519204: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00519209: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051920c: mov dword ptr [eax], 0xafffe0 */ W32((u32)(r_eax), 0xafffe0u);
    /* 00519212: add eax, 0x448 */ {  u32 a = r_eax; u32 b = 0x448u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00519217: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00519219: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051921b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051921c: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x519221u); f_00858736();
    /* 00519221: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00519228: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051922b: mov eax, dword ptr [0x9bb75c] */ r_eax = R32((u32)(0x9bb75cu));
    /* 00519230: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00519233: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519234: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00519237: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x51923cu); f_0051f750();
    /* 0051923c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051923f: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x519244u); f_00521840();
    /* 00519244: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00519247: mov ebx, dword ptr [0xa72dcc] */ r_ebx = R32((u32)(0xa72dccu));
    /* 0051924d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051924f: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 00519255: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00519258: push 0x9bb780 */ { u32 v = 0x9bb780u; r_esp -= 4; W32(r_esp, v); }
    /* 0051925d: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00519260: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 00519266: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00519269: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0051926c: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x519271u); f_0051ff3c();
    /* 00519271: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00519274: fld dword ptr [0x920e70] */ FPUSH(R_F32((u32)(0x920e70u)));
    /* 0051927a: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0051927d: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 00519283: call 0x55aec4 */ r_esp -= 4; W32(r_esp, 0x519288u); f_0055aec4();
    /* 00519288: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051928b: mov eax, dword ptr [0xa72dcc] */ r_eax = R32((u32)(0xa72dccu));
    /* 00519290: mov dword ptr [ecx + 0xd8], 0x9bb6a0 */ W32((u32)(r_ecx+0xd8u), 0x9bb6a0u);
    /* 0051929a: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005192a0: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 005192a6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005192a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005192a9: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 005192b0: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5192b5u); f_007aa4c8();
    /* 005192b5: push dword ptr [0xa72dd4] */ { u32 v = R32((u32)(0xa72dd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005192bb: push dword ptr [0xa72dd8] */ { u32 v = R32((u32)(0xa72dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005192c1: push dword ptr [0xa72ddc] */ { u32 v = R32((u32)(0xa72ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005192c7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005192ca: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005192d1: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005192d8: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x5192ddu); f_00520c70();
    /* 005192dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005192e0: call 0x520350 */ r_esp -= 4; W32(r_esp, 0x5192e5u); f_00520350();
    /* 005192e5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005192e8: mov dword ptr [ecx + 0x358], 0x9bb764 */ W32((u32)(r_ecx+0x358u), 0x9bb764u);
    /* 005192f2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005192f4: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5192f9u); f_00520390();
    /* 005192f9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005192fc: mov dword ptr [ecx + 0x384], 0x41200000 */ W32((u32)(r_ecx+0x384u), 0x41200000u);
    /* 00519306: call 0x51a1fc */ r_esp -= 4; W32(r_esp, 0x51930bu); f_0051a1fc();
    /* 0051930b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051930e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00519311: fld dword ptr [0x920e68] */ FPUSH(R_F32((u32)(0x920e68u)));
    /* 00519317: movsx ebx, word ptr [edx + 2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0051931b: mov ecx, dword ptr [eax + 0x39c] */ r_ecx = R32((u32)(r_eax+0x39cu));
    /* 00519321: movzx edi, word ptr [eax + 0x1c] */ r_edi = (u32)R16((u32)(r_eax+0x1cu));
    /* 00519325: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0051932a: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051932c: mov esi, 0 */ r_esi = 0x0u;
    /* 00519331: mov dword ptr [eax + 0x3a0], esi */ W32((u32)(r_eax+0x3a0u), r_esi);
    /* 00519337: mov dword ptr [eax + 0x3a4], esi */ W32((u32)(r_eax+0x3a4u), r_esi);
    /* 0051933d: jl 0x519341 */ if ((fS!=fO)) goto L_00519341;
L_0051933f:; BB(0x0051933f);
    /* 0051933f: mov ebx, ecx */ r_ebx = r_ecx;
L_00519341:; BB(0x00519341);
    /* 00519341: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00519344: mov dword ptr [eax + 0x39c], ebx */ W32((u32)(r_eax+0x39cu), r_ebx);
    /* 0051934a: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 0051934d: mov dword ptr [eax + 0x3a8], esi */ W32((u32)(r_eax+0x3a8u), r_esi);
    /* 00519353: mov dword ptr [eax + 0x3ac], esi */ W32((u32)(r_eax+0x3acu), r_esi);
    /* 00519359: mov dword ptr [eax + 0x3b0], esi */ W32((u32)(r_eax+0x3b0u), r_esi);
    /* 0051935f: mov dword ptr [eax + 0x3b4], esi */ W32((u32)(r_eax+0x3b4u), r_esi);
    /* 00519365: mov dword ptr [eax + 0x3b8], esi */ W32((u32)(r_eax+0x3b8u), r_esi);
    /* 0051936b: mov dword ptr [eax + 0x3bc], esi */ W32((u32)(r_eax+0x3bcu), r_esi);
    /* 00519371: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00519374: mov word ptr [eax + 0x3cc], di */ W16((u32)(r_eax+0x3ccu), (u16)r_edi);
    /* 0051937b: mov word ptr [eax + 0x3c0], dx */ W16((u32)(r_eax+0x3c0u), (u16)r_edx);
    /* 00519382: mov word ptr [eax + 0x3c2], dx */ W16((u32)(r_eax+0x3c2u), (u16)r_edx);
    /* 00519389: mov word ptr [eax + 0x3c4], dx */ W16((u32)(r_eax+0x3c4u), (u16)r_edx);
    /* 00519390: mov word ptr [eax + 0x3c6], dx */ W16((u32)(r_eax+0x3c6u), (u16)r_edx);
    /* 00519397: mov word ptr [eax + 0x3c8], dx */ W16((u32)(r_eax+0x3c8u), (u16)r_edx);
    /* 0051939e: mov word ptr [eax + 0x3ca], dx */ W16((u32)(r_eax+0x3cau), (u16)r_edx);
    /* 005193a5: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005193a8: mov dword ptr [eax + 0x3d0], edx */ W32((u32)(r_eax+0x3d0u), r_edx);
    /* 005193ae: mov dword ptr [eax + 0x3d4], ecx */ W32((u32)(r_eax+0x3d4u), r_ecx);
    /* 005193b4: mov dword ptr [eax + 0x3d8], ebx */ W32((u32)(r_eax+0x3d8u), r_ebx);
    /* 005193ba: mov dword ptr [eax + 0x3dc], edx */ W32((u32)(r_eax+0x3dcu), r_edx);
    /* 005193c0: mov dword ptr [eax + 0x3e0], ecx */ W32((u32)(r_eax+0x3e0u), r_ecx);
    /* 005193c6: fadd dword ptr [eax + 0x3e0] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3e0u));
    /* 005193cc: fstp dword ptr [eax + 0x3e0] */ W_F32((u32)(r_eax+0x3e0u), ST(0)); FPOP();
    /* 005193d2: mov dword ptr [eax + 0x3e4], ebx */ W32((u32)(r_eax+0x3e4u), r_ebx);
    /* 005193d8: mov dword ptr [eax + 0x3e8], edx */ W32((u32)(r_eax+0x3e8u), r_edx);
    /* 005193de: mov dword ptr [eax + 0x3ec], ecx */ W32((u32)(r_eax+0x3ecu), r_ecx);
    /* 005193e4: mov dword ptr [eax + 0x3f0], ebx */ W32((u32)(r_eax+0x3f0u), r_ebx);
    /* 005193ea: mov dword ptr [eax + 0x3f4], edx */ W32((u32)(r_eax+0x3f4u), r_edx);
    /* 005193f0: mov dword ptr [eax + 0x3f8], ecx */ W32((u32)(r_eax+0x3f8u), r_ecx);
    /* 005193f6: mov dword ptr [eax + 0x3fc], ebx */ W32((u32)(r_eax+0x3fcu), r_ebx);
    /* 005193fc: mov dword ptr [eax + 0x400], edx */ W32((u32)(r_eax+0x400u), r_edx);
    /* 00519402: mov dword ptr [eax + 0x404], ecx */ W32((u32)(r_eax+0x404u), r_ecx);
    /* 00519408: mov dword ptr [eax + 0x408], ebx */ W32((u32)(r_eax+0x408u), r_ebx);
    /* 0051940e: mov dword ptr [eax + 0x40c], edx */ W32((u32)(r_eax+0x40cu), r_edx);
    /* 00519414: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
    /* 0051941a: mov dword ptr [eax + 0x414], ebx */ W32((u32)(r_eax+0x414u), r_ebx);
    /* 00519420: mov dword ptr [eax + 0x418], edx */ W32((u32)(r_eax+0x418u), r_edx);
    /* 00519426: mov dword ptr [eax + 0x41c], ecx */ W32((u32)(r_eax+0x41cu), r_ecx);
    /* 0051942c: mov dword ptr [eax + 0x420], ebx */ W32((u32)(r_eax+0x420u), r_ebx);
    /* 00519432: mov dword ptr [eax + 0x424], edx */ W32((u32)(r_eax+0x424u), r_edx);
    /* 00519438: mov dword ptr [eax + 0x428], ecx */ W32((u32)(r_eax+0x428u), r_ecx);
    /* 0051943e: mov dword ptr [eax + 0x42c], ebx */ W32((u32)(r_eax+0x42cu), r_ebx);
    /* 00519444: mov dword ptr [eax + 0x430], edx */ W32((u32)(r_eax+0x430u), r_edx);
    /* 0051944a: mov dword ptr [eax + 0x434], ecx */ W32((u32)(r_eax+0x434u), r_ecx);
    /* 00519450: mov dword ptr [eax + 0x438], ebx */ W32((u32)(r_eax+0x438u), r_ebx);
    /* 00519456: mov dword ptr [eax + 0x43c], edx */ W32((u32)(r_eax+0x43cu), r_edx);
    /* 0051945c: mov dword ptr [eax + 0x440], ecx */ W32((u32)(r_eax+0x440u), r_ecx);
    /* 00519462: mov dword ptr [eax + 0x444], ebx */ W32((u32)(r_eax+0x444u), r_ebx);
    /* 00519468: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0051946a:; BB(0x0051946a);
    /* 0051946a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0051946d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051946f: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00519472: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00519474: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00519476: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519478: lea ecx, [eax + esi + 0x448] */ r_ecx = (u32)(r_eax+r_esi+0x448u);
    /* 0051947f: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x519484u); f_0057739c();
    /* 00519484: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00519487: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051948a: jge 0x519491 */ if ((fS==fO)) goto L_00519491;
L_0051948c:; BB(0x0051948c);
    /* 0051948c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051948f: jmp 0x51946a */ goto L_0051946a;
L_00519491:; BB(0x00519491);
    /* 00519491: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00519494: mov dword ptr [ecx + 0x4b8], 0 */ W32((u32)(r_ecx+0x4b8u), 0x0u);
    /* 0051949e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005194a0: mov dword ptr [ecx + 0x4bc], eax */ W32((u32)(r_ecx+0x4bcu), r_eax);
    /* 005194a6: mov dword ptr [ecx + 0x4e0], 0 */ W32((u32)(r_ecx+0x4e0u), 0x0u);
    /* 005194b0: mov dword ptr [ecx + 0x4c0], eax */ W32((u32)(r_ecx+0x4c0u), r_eax);
    /* 005194b6: mov dword ptr [ecx + 0x4c4], eax */ W32((u32)(r_ecx+0x4c4u), r_eax);
    /* 005194bc: mov dword ptr [ecx + 0x4c8], eax */ W32((u32)(r_ecx+0x4c8u), r_eax);
    /* 005194c2: mov dword ptr [ecx + 0x4cc], eax */ W32((u32)(r_ecx+0x4ccu), r_eax);
    /* 005194c8: mov dword ptr [ecx + 0x4d0], eax */ W32((u32)(r_ecx+0x4d0u), r_eax);
    /* 005194ce: mov dword ptr [ecx + 0x4d4], eax */ W32((u32)(r_ecx+0x4d4u), r_eax);
    /* 005194d4: mov dword ptr [ecx + 0x4d8], eax */ W32((u32)(r_ecx+0x4d8u), r_eax);
    /* 005194da: mov dword ptr [ecx + 0x4dc], eax */ W32((u32)(r_ecx+0x4dcu), r_eax);
    /* 005194e0: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005194e7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005194e9: call 0x519e20 */ r_esp -= 4; W32(r_esp, 0x5194eeu); f_00519e20();
    /* 005194ee: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005194f1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005194f4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005194f7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005194fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005194fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00519504: mov esp, ebp */ r_esp = r_ebp;
    /* 00519506: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519507: ret 8 */ FN_RET(0x005191c0); r_esp += 12; return;
}

void f_0051950c(void) /* sub_51950C */
{
    FN_ENTER(0x0051950c);
    /* 0051950c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051950d: mov edi, ecx */ r_edi = r_ecx;
    /* 0051950f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00519513: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519516: je 0x51953f */ if (fZ) goto L_0051953f;
L_00519518:; BB(0x00519518);
    /* 00519518: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051951b: jne 0x51953b */ if (!fZ) goto L_0051953b;
L_0051951d:; BB(0x0051951d);
    /* 0051951d: mov eax, dword ptr [edi + 0x3b8] */ r_eax = R32((u32)(r_edi+0x3b8u));
    /* 00519523: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519525: jne 0x51953b */ if (!fZ) goto L_0051953b;
L_00519527:; BB(0x00519527);
    /* 00519527: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00519528: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x51952du); f_008113e4();
    /* 0051952d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051952e: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00519532: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519537: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_0051953b:; BB(0x0051953b);
    /* 0051953b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051953c: ret 4 */ FN_RET(0x0051950c); r_esp += 8; return;
L_0051953f:; BB(0x0051953f);
    /* 0051953f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00519541: mov ecx, edi */ r_ecx = r_edi;
    /* 00519543: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x519549u); call_ind(t); }
    /* 00519549: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051954a: ret 4 */ FN_RET(0x0051950c); r_esp += 8; return;
}

void f_00519550(void) /* sub_519550 */
{
    FN_ENTER(0x00519550);
    /* 00519550: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00519551: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00519552: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00519555: mov esi, ecx */ r_esi = r_ecx;
    /* 00519557: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0051955b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051955e: je 0x519746 */ if (fZ) goto L_00519746;
L_00519564:; BB(0x00519564);
    /* 00519564: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519567: je 0x519724 */ if (fZ) goto L_00519724;
L_0051956d:; BB(0x0051956d);
    /* 0051956d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051956f: jne 0x51973e */ if (!fZ) goto L_0051973e;
L_00519575:; BB(0x00519575);
    /* 00519575: mov eax, dword ptr [esi + 0x4d8] */ r_eax = R32((u32)(r_esi+0x4d8u));
    /* 0051957b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051957d: jne 0x5196f9 */ if (!fZ) goto L_005196f9;
L_00519583:; BB(0x00519583);
    /* 00519583: mov ecx, esi */ r_ecx = r_esi;
    /* 00519585: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51958au); f_007aa094();
    /* 0051958a: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00519590: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00519592: je 0x5195f3 */ if (fZ) goto L_005195f3;
L_00519594:; BB(0x00519594);
    /* 00519594: mov dword ptr [esi + 0x4d8], 1 */ W32((u32)(r_esi+0x4d8u), 0x1u);
    /* 0051959e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005195a1: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005195a5: mov dword ptr [esp], 0xc1200000 */ W32((u32)(r_esp), 0xc1200000u);
    /* 005195ac: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005195b4: mov dword ptr [esp + 8], 0xc1000000 */ W32((u32)(r_esp+0x8u), 0xc1000000u);
    /* 005195bc: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005195bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005195c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005195c1: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x5195c6u); f_00782b64();
    /* 005195c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005195c9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005195cc: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005195cf: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5195d4u); f_0082ebac();
    /* 005195d4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005195d7: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005195d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005195da: call 0x5781d8 */ r_esp -= 4; W32(r_esp, 0x5195dfu); f_005781d8();
    /* 005195df: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005195e3: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005195e8: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 005195ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005195eb: call 0x578824 */ r_esp -= 4; W32(r_esp, 0x5195f0u); f_00578824();
    /* 005195f0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005195f3:; BB(0x005195f3);
    /* 005195f3: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005195f9: fcomp dword ptr [0x920e48] */ fx_compare(ST(0), R_F32((u32)(0x920e48u))); FPOP();
    /* 005195ff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00519601: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00519602: jae 0x5196e7 */ if (!fC) goto L_005196e7;
L_00519608:; BB(0x00519608);
    /* 00519608: mov eax, dword ptr [esi + 0x4d0] */ r_eax = R32((u32)(r_esi+0x4d0u));
    /* 0051960e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00519611: mov dword ptr [esi + 0x4d0], eax */ W32((u32)(r_esi+0x4d0u), r_eax);
    /* 00519617: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051961a: jl 0x5196ac */ if ((fS!=fO)) goto L_005196ac;
L_00519620:; BB(0x00519620);
    /* 00519620: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00519625: mov ecx, esi */ r_ecx = r_esi;
    /* 00519627: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051962c: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x519631u); f_00520c08();
    /* 00519631: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00519635: mov ecx, esi */ r_ecx = r_esi;
    /* 00519637: call 0x520c20 */ r_esp -= 4; W32(r_esp, 0x51963cu); f_00520c20();
    /* 0051963c: mov ebx, eax */ r_ebx = r_eax;
    /* 0051963e: mov edx, dword ptr [esi + 0x300] */ r_edx = R32((u32)(r_esi+0x300u));
    /* 00519644: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00519648: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0051964e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519650: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00519654: mov edx, dword ptr [esi + 0x308] */ r_edx = R32((u32)(r_esi+0x308u));
    /* 0051965a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0051965e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x519663u); f_0082dcbc();
    /* 00519663: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 00519667: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0051966b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0051966f: fld dword ptr [0x920e58] */ FPUSH(R_F32((u32)(0x920e58u)));
    /* 00519675: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 00519679: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0051967d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051967f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x519684u); f_0082ddd8();
    /* 00519684: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 00519688: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0051968c: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00519690: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00519694: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 00519699: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051969a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x51969fu); f_0050b510();
    /* 0051969f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005196a2: mov dword ptr [esi + 0x4d0], 0 */ W32((u32)(r_esi+0x4d0u), 0x0u);
L_005196ac:; BB(0x005196ac);
    /* 005196ac: mov eax, dword ptr [esi + 0x4d4] */ r_eax = R32((u32)(r_esi+0x4d4u));
    /* 005196b2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005196b5: mov dword ptr [esi + 0x4d4], eax */ W32((u32)(r_esi+0x4d4u), r_eax);
    /* 005196bb: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005196be: jl 0x5196e7 */ if ((fS!=fO)) goto L_005196e7;
L_005196c0:; BB(0x005196c0);
    /* 005196c0: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 005196c5: mov ecx, esi */ r_ecx = r_esi;
    /* 005196c7: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5196ccu); f_007879b8();
    /* 005196cc: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005196cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005196d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005196d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005196d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005196d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005196d5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5196dau); f_00814298();
    /* 005196da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005196dd: mov dword ptr [esi + 0x4d4], 0 */ W32((u32)(r_esi+0x4d4u), 0x0u);
L_005196e7:; BB(0x005196e7);
    /* 005196e7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005196e9: mov ecx, esi */ r_ecx = r_esi;
    /* 005196eb: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5196f1u); call_ind(t); }
    /* 005196f1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005196f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005196f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005196f6: ret 4 */ FN_RET(0x00519550); r_esp += 8; return;
L_005196f9:; BB(0x005196f9);
    /* 005196f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005196fc: jne 0x51973e */ if (!fZ) goto L_0051973e;
L_005196fe:; BB(0x005196fe);
    /* 005196fe: fld dword ptr [0x920e54] */ FPUSH(R_F32((u32)(0x920e54u)));
    /* 00519704: fld dword ptr [esi + 0x4e0] */ FPUSH(R_F32((u32)(r_esi+0x4e0u)));
    /* 0051970a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0051970c: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0051970f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00519711: fstp dword ptr [esi + 0x4e0] */ W_F32((u32)(r_esi+0x4e0u), ST(0)); FPOP();
    /* 00519717: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00519719: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 0051971c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051971f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519720: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00519721: ret 4 */ FN_RET(0x00519550); r_esp += 8; return;
L_00519724:; BB(0x00519724);
    /* 00519724: fld dword ptr [esi + 0x4e0] */ FPUSH(R_F32((u32)(r_esi+0x4e0u)));
    /* 0051972a: fcomp dword ptr [0x920e44] */ fx_compare(ST(0), R_F32((u32)(0x920e44u))); FPOP();
    /* 00519730: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00519732: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00519733: jb 0x51973e */ if (fC) goto L_0051973e;
L_00519735:; BB(0x00519735);
    /* 00519735: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00519737: mov ecx, esi */ r_ecx = r_esi;
    /* 00519739: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51973eu); f_0051f62c();
L_0051973e:; BB(0x0051973e);
    /* 0051973e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00519741: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519742: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00519743: ret 4 */ FN_RET(0x00519550); r_esp += 8; return;
L_00519746:; BB(0x00519746);
    /* 00519746: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00519748: mov eax, 7 */ r_eax = 0x7u;
    /* 0051974d: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00519754: mov ecx, esi */ r_ecx = r_esi;
    /* 00519756: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x51975cu); call_ind(t); }
    /* 0051975c: mov dword ptr [esi + 0x4b8], 0 */ W32((u32)(r_esi+0x4b8u), 0x0u);
    /* 00519766: mov ecx, esi */ r_ecx = r_esi;
    /* 00519768: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x51976du); f_00787534();
    /* 0051976d: mov dword ptr [esi + 0x4d0], 4 */ W32((u32)(r_esi+0x4d0u), 0x4u);
    /* 00519777: mov dword ptr [esi + 0x4d4], 0x14 */ W32((u32)(r_esi+0x4d4u), 0x14u);
    /* 00519781: mov dword ptr [esi + 0x4d8], 0 */ W32((u32)(r_esi+0x4d8u), 0x0u);
    /* 0051978b: mov dword ptr [esi + 0x4e0], 0 */ W32((u32)(r_esi+0x4e0u), 0x0u);
    /* 00519795: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00519798: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519799: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051979a: ret 4 */ FN_RET(0x00519550); r_esp += 8; return;
}

void f_005197a0(void) /* sub_5197A0 */
{
    FN_ENTER(0x005197a0);
    /* 005197a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005197a1: mov edi, ecx */ r_edi = r_ecx;
    /* 005197a3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005197a7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005197aa: je 0x519838 */ if (fZ) goto L_00519838;
L_005197b0:; BB(0x005197b0);
    /* 005197b0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005197b3: je 0x5197de */ if (fZ) goto L_005197de;
L_005197b5:; BB(0x005197b5);
    /* 005197b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005197b7: jne 0x5197ce */ if (!fZ) goto L_005197ce;
L_005197b9:; BB(0x005197b9);
    /* 005197b9: mov ecx, edi */ r_ecx = r_edi;
    /* 005197bb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5197c0u); f_007aa094();
    /* 005197c0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005197c2: mov ecx, edi */ r_ecx = r_edi;
    /* 005197c4: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5197cau); call_ind(t); }
    /* 005197ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005197cb: ret 4 */ FN_RET(0x005197a0); r_esp += 8; return;
L_005197ce:; BB(0x005197ce);
    /* 005197ce: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005197d1: jne 0x519834 */ if (!fZ) goto L_00519834;
L_005197d3:; BB(0x005197d3);
    /* 005197d3: mov ecx, edi */ r_ecx = r_edi;
    /* 005197d5: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x5197dau); f_0051f81c();
    /* 005197da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005197db: ret 4 */ FN_RET(0x005197a0); r_esp += 8; return;
L_005197de:; BB(0x005197de);
    /* 005197de: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005197e4: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005197e6: je 0x519834 */ if (fZ) goto L_00519834;
L_005197e8:; BB(0x005197e8);
    /* 005197e8: mov eax, dword ptr [edi + 0x3b0] */ r_eax = R32((u32)(r_edi+0x3b0u));
    /* 005197ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005197f0: jne 0x51982b */ if (!fZ) goto L_0051982b;
L_005197f2:; BB(0x005197f2);
    /* 005197f2: movsx ecx, word ptr [edi + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
    /* 005197f9: movsx edx, word ptr [edi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 00519800: lea eax, [ecx] */ r_eax = (u32)(r_ecx);
    /* 00519802: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00519805: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00519807: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00519809: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051980b: jg 0x51981a */ if ((!fZ&&fS==fO)) goto L_0051981a;
L_0051980d:; BB(0x0051980d);
    /* 0051980d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051980f: mov ecx, edi */ r_ecx = r_edi;
    /* 00519811: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x519816u); f_0051f62c();
    /* 00519816: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00519817: ret 4 */ FN_RET(0x005197a0); r_esp += 8; return;
L_0051981a:; BB(0x0051981a);
    /* 0051981a: push dword ptr [edi + 0x380] */ { u32 v = R32((u32)(r_edi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 00519820: mov ecx, edi */ r_ecx = r_edi;
    /* 00519822: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x519827u); f_0051f62c();
    /* 00519827: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00519828: ret 4 */ FN_RET(0x005197a0); r_esp += 8; return;
L_0051982b:; BB(0x0051982b);
    /* 0051982b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051982d: mov ecx, edi */ r_ecx = r_edi;
    /* 0051982f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x519834u); f_0051f62c();
L_00519834:; BB(0x00519834);
    /* 00519834: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00519835: ret 4 */ FN_RET(0x005197a0); r_esp += 8; return;
L_00519838:; BB(0x00519838);
    /* 00519838: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051983a: mov ecx, edi */ r_ecx = r_edi;
    /* 0051983c: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x519842u); call_ind(t); }
    /* 00519842: mov ecx, edi */ r_ecx = r_edi;
    /* 00519844: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x519849u); f_0061cdb0();
    /* 00519849: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051984e: mov ecx, edi */ r_ecx = r_edi;
    /* 00519850: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x519855u); f_00779df0();
    /* 00519855: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051985a: mov ecx, edi */ r_ecx = r_edi;
    /* 0051985c: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x519861u); f_007879b8();
    /* 00519861: mov ecx, eax */ r_ecx = r_eax;
    /* 00519863: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00519866: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00519868: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519869: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051986a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051986b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051986c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x519871u); f_00814298();
    /* 00519871: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00519874: mov eax, dword ptr [edi + 0x3b0] */ r_eax = R32((u32)(r_edi+0x3b0u));
    /* 0051987a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051987c: je 0x519898 */ if (fZ) goto L_00519898;
L_0051987e:; BB(0x0051987e);
    /* 0051987e: mov dword ptr [edi + 0x4b8], 0 */ W32((u32)(r_edi+0x4b8u), 0x0u);
    /* 00519888: mov eax, 6 */ r_eax = 0x6u;
    /* 0051988d: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00519894: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00519895: ret 4 */ FN_RET(0x005197a0); r_esp += 8; return;
L_00519898:; BB(0x00519898);
    /* 00519898: mov dword ptr [edi + 0x4b8], 0xc0a00000 */ W32((u32)(r_edi+0x4b8u), 0xc0a00000u);
    /* 005198a2: mov eax, 2 */ r_eax = 0x2u;
    /* 005198a7: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005198ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005198af: ret 4 */ FN_RET(0x005197a0); r_esp += 8; return;
}

void f_005198b4(void) /* sub_5198B4 */
{
    FN_ENTER(0x005198b4);
    /* 005198b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005198b5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005198b7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005198bb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005198be: je 0x519919 */ if (fZ) goto L_00519919;
L_005198c0:; BB(0x005198c0);
    /* 005198c0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005198c3: je 0x519915 */ if (fZ) goto L_00519915;
L_005198c5:; BB(0x005198c5);
    /* 005198c5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005198c8: je 0x519902 */ if (fZ) goto L_00519902;
L_005198ca:; BB(0x005198ca);
    /* 005198ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005198cc: jne 0x519915 */ if (!fZ) goto L_00519915;
L_005198ce:; BB(0x005198ce);
    /* 005198ce: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005198d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005198d5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5198dau); f_007aaa30();
    /* 005198da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005198dc: je 0x5198ec */ if (fZ) goto L_005198ec;
L_005198de:; BB(0x005198de);
    /* 005198de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005198e0: call 0x519948 */ r_esp -= 4; W32(r_esp, 0x5198e5u); f_00519948();
    /* 005198e5: add dword ptr [ebp + 0x4c0], -1 */ { u32 ad = (u32)(r_ebp+0x4c0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_005198ec:; BB(0x005198ec);
    /* 005198ec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005198ee: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5198f3u); f_007aa094();
    /* 005198f3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005198f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005198f8: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5198feu); call_ind(t); }
    /* 005198fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005198ff: ret 4 */ FN_RET(0x005198b4); r_esp += 8; return;
L_00519902:; BB(0x00519902);
    /* 00519902: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00519908: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051990a: je 0x519915 */ if (fZ) goto L_00519915;
L_0051990c:; BB(0x0051990c);
    /* 0051990c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051990e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519910: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x519915u); f_0051f62c();
L_00519915:; BB(0x00519915);
    /* 00519915: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519916: ret 4 */ FN_RET(0x005198b4); r_esp += 8; return;
L_00519919:; BB(0x00519919);
    /* 00519919: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0051991c: mov eax, 5 */ r_eax = 0x5u;
    /* 00519921: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00519928: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051992a: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x519930u); call_ind(t); }
    /* 00519930: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00519932: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519934: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x519939u); f_0051f664();
    /* 00519939: mov dword ptr [ebp + 0x4b8], 0 */ W32((u32)(r_ebp+0x4b8u), 0x0u);
    /* 00519943: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519944: ret 4 */ FN_RET(0x005198b4); r_esp += 8; return;
}

void f_00519948(void) /* sub_519948 */
{
    FN_ENTER(0x00519948);
    /* 00519948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00519949: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051994a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051994d: mov edi, ecx */ r_edi = r_ecx;
    /* 0051994f: mov eax, dword ptr [edi + 0x3b8] */ r_eax = R32((u32)(r_edi+0x3b8u));
    /* 00519955: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00519958: jle 0x519960 */ if ((fZ||fS!=fO)) goto L_00519960;
L_0051995a:; BB(0x0051995a);
    /* 0051995a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051995d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051995e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051995f: ret  */ FN_RET(0x00519948); r_esp += 4; return;
L_00519960:; BB(0x00519960);
    /* 00519960: mov eax, 0x40400000 */ r_eax = 0x40400000u;
    /* 00519965: mov edx, dword ptr [edi + 0x3bc] */ r_edx = R32((u32)(r_edi+0x3bcu));
    /* 0051996b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0051996f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00519971: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00519975: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00519978: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051997a: lea ebx, [edi + 0x3dc] */ r_ebx = (u32)(r_edi+0x3dcu);
    /* 00519980: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00519983: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 00519987: lea edx, [eax + edx + 1] */ r_edx = (u32)(r_eax+r_edx+0x1u);
    /* 0051998b: mov eax, dword ptr [edi + 0x3dc] */ r_eax = R32((u32)(r_edi+0x3dcu));
    /* 00519991: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00519995: mov eax, dword ptr [edi + 0x3e0] */ r_eax = R32((u32)(r_edi+0x3e0u));
    /* 0051999b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0051999f: mov eax, dword ptr [edi + 0x3e4] */ r_eax = R32((u32)(r_edi+0x3e4u));
    /* 005199a5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005199a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005199aa: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005199ae: movzx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)R16((u32)(r_edi+0x3ccu));
    /* 005199b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005199b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005199b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005199b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005199b9: call 0x51673c */ r_esp -= 4; W32(r_esp, 0x5199beu); f_0051673c();
    /* 005199be: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005199c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005199c3: je 0x519a27 */ if (fZ) goto L_00519a27;
L_005199c5:; BB(0x005199c5);
    /* 005199c5: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005199ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005199cb: movzx edx, word ptr [edi + 0x3cc] */ r_edx = (u32)R16((u32)(r_edi+0x3ccu));
    /* 005199d2: mov ecx, dword ptr [edi + 0x3b8] */ r_ecx = R32((u32)(r_edi+0x3b8u));
    /* 005199d8: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 005199db: mov dword ptr [edi + 0x3b8], eax */ W32((u32)(r_edi+0x3b8u), r_eax);
    /* 005199e1: mov word ptr [edi + ecx*2 + 0x3c0], dx */ W16((u32)(r_edi+r_ecx*2+0x3c0u), (u16)r_edx);
    /* 005199e9: add word ptr [edi + 0x3cc], 1 */ { u32 ad = (u32)(r_edi+0x3ccu);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005199f1: add dword ptr [edi + 0x3bc], 1 */ { u32 ad = (u32)(r_edi+0x3bcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005199f8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5199fdu); f_0050b510();
    /* 005199fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00519a00: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00519a05: mov ecx, edi */ r_ecx = r_edi;
    /* 00519a07: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x519a0cu); f_007879b8();
    /* 00519a0c: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00519a0f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00519a11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519a12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519a13: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00519a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00519a15: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x519a1au); f_00814298();
    /* 00519a1a: push 0xfffffc00 */ { u32 v = 0xfffffc00u; r_esp -= 4; W32(r_esp, v); }
    /* 00519a1f: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x519a24u); f_00814680();
    /* 00519a24: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00519a27:; BB(0x00519a27);
    /* 00519a27: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00519a2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519a2b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00519a2c: ret  */ FN_RET(0x00519948); r_esp += 4; return;
}

void f_00519a30(void) /* sub_519A30 */
{
    FN_ENTER(0x00519a30);
    /* 00519a30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00519a31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00519a33: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00519a37: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519a3a: je 0x519a78 */ if (fZ) goto L_00519a78;
L_00519a3c:; BB(0x00519a3c);
    /* 00519a3c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519a3f: je 0x519a61 */ if (fZ) goto L_00519a61;
L_00519a41:; BB(0x00519a41);
    /* 00519a41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519a43: jne 0x519a74 */ if (!fZ) goto L_00519a74;
L_00519a45:; BB(0x00519a45);
    /* 00519a45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519a47: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x519a4cu); f_007aa094();
    /* 00519a4c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519a4e: call 0x519ad0 */ r_esp -= 4; W32(r_esp, 0x519a53u); f_00519ad0();
    /* 00519a53: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00519a55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519a57: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x519a5du); call_ind(t); }
    /* 00519a5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519a5e: ret 4 */ FN_RET(0x00519a30); r_esp += 8; return;
L_00519a61:; BB(0x00519a61);
    /* 00519a61: mov eax, dword ptr [ebx + 0x4c0] */ r_eax = R32((u32)(r_ebx+0x4c0u));
    /* 00519a67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519a69: jle 0x519a74 */ if ((fZ||fS!=fO)) goto L_00519a74;
L_00519a6b:; BB(0x00519a6b);
    /* 00519a6b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00519a6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519a6f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x519a74u); f_0051f62c();
L_00519a74:; BB(0x00519a74);
    /* 00519a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519a75: ret 4 */ FN_RET(0x00519a30); r_esp += 8; return;
L_00519a78:; BB(0x00519a78);
    /* 00519a78: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00519a7a: mov eax, 4 */ r_eax = 0x4u;
    /* 00519a7f: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00519a86: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519a88: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x519a8eu); call_ind(t); }
    /* 00519a8e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00519a90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519a92: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x519a97u); f_0051f664();
    /* 00519a97: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 00519a9d: mov dword ptr [ebx + 0x4b8], 0 */ W32((u32)(r_ebx+0x4b8u), 0x0u);
    /* 00519aa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519aa9: jne 0x519a74 */ if (!fZ) goto L_00519a74;
L_00519aab:; BB(0x00519aab);
    /* 00519aab: mov dword ptr [ebx + 0x3b0], 1 */ W32((u32)(r_ebx+0x3b0u), 0x1u);
    /* 00519ab5: mov dword ptr [ebx + 0x4c8], 2 */ W32((u32)(r_ebx+0x4c8u), 0x2u);
    /* 00519abf: mov dword ptr [ebx + 0x4cc], 0x78 */ W32((u32)(r_ebx+0x4ccu), 0x78u);
    /* 00519ac9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519aca: ret 4 */ FN_RET(0x00519a30); r_esp += 8; return;
}

void f_00519ad0(void) /* sub_519AD0 */
{
    FN_ENTER(0x00519ad0);
    /* 00519ad0: mov eax, dword ptr [ecx + 0x4bc] */ r_eax = R32((u32)(r_ecx+0x4bcu));
    /* 00519ad6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519ad8: jne 0x519b10 */ if (!fZ) goto L_00519b10;
L_00519ada:; BB(0x00519ada);
    /* 00519ada: mov edx, dword ptr [ecx + 0x398] */ r_edx = R32((u32)(r_ecx+0x398u));
    /* 00519ae0: mov eax, edx */ r_eax = r_edx;
    /* 00519ae2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00519ae5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00519ae7: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00519ae9: cmp edx, dword ptr [ecx + 0x3b8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x3b8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00519aef: jge 0x519afb */ if ((fS==fO)) goto L_00519afb;
L_00519af1:; BB(0x00519af1);
    /* 00519af1: mov eax, dword ptr [ecx + 0x3b0] */ r_eax = R32((u32)(r_ecx+0x3b0u));
    /* 00519af7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519af9: je 0x519b6a */ if (fZ) goto L_00519b6a;
L_00519afb:; BB(0x00519afb);
    /* 00519afb: mov dword ptr [ecx + 0x4bc], 1 */ W32((u32)(r_ecx+0x4bcu), 0x1u);
    /* 00519b05: mov dword ptr [ecx + 0x4c4], 0 */ W32((u32)(r_ecx+0x4c4u), 0x0u);
    /* 00519b0f: ret  */ FN_RET(0x00519ad0); r_esp += 4; return;
L_00519b10:; BB(0x00519b10);
    /* 00519b10: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00519b13: jne 0x519b6a */ if (!fZ) goto L_00519b6a;
L_00519b15:; BB(0x00519b15);
    /* 00519b15: mov edx, dword ptr [ecx + 0x4c8] */ r_edx = R32((u32)(r_ecx+0x4c8u));
    /* 00519b1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519b1d: jle 0x519b6a */ if ((fZ||fS!=fO)) goto L_00519b6a;
L_00519b1f:; BB(0x00519b1f);
    /* 00519b1f: mov eax, dword ptr [ecx + 0x4c4] */ r_eax = R32((u32)(r_ecx+0x4c4u));
    /* 00519b25: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00519b28: cmp eax, dword ptr [ecx + 0x4cc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4ccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00519b2e: jg 0x519b37 */ if ((!fZ&&fS==fO)) goto L_00519b37;
L_00519b30:; BB(0x00519b30);
    /* 00519b30: mov dword ptr [ecx + 0x4c4], eax */ W32((u32)(r_ecx+0x4c4u), r_eax);
    /* 00519b36: ret  */ FN_RET(0x00519ad0); r_esp += 4; return;
L_00519b37:; BB(0x00519b37);
    /* 00519b37: mov eax, dword ptr [ecx + 0x3b8] */ r_eax = R32((u32)(r_ecx+0x3b8u));
    /* 00519b3d: mov dword ptr [ecx + 0x4c4], 0 */ W32((u32)(r_ecx+0x4c4u), 0x0u);
    /* 00519b47: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00519b49: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00519b4c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00519b4e: jl 0x519b52 */ if ((fS!=fO)) goto L_00519b52;
L_00519b50:; BB(0x00519b50);
    /* 00519b50: mov eax, edx */ r_eax = r_edx;
L_00519b52:; BB(0x00519b52);
    /* 00519b52: mov edx, dword ptr [ecx + 0x39c] */ r_edx = R32((u32)(r_ecx+0x39cu));
    /* 00519b58: sub edx, dword ptr [ecx + 0x3bc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x3bcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00519b5e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00519b60: jl 0x519b64 */ if ((fS!=fO)) goto L_00519b64;
L_00519b62:; BB(0x00519b62);
    /* 00519b62: mov edx, eax */ r_edx = r_eax;
L_00519b64:; BB(0x00519b64);
    /* 00519b64: mov dword ptr [ecx + 0x4c0], edx */ W32((u32)(r_ecx+0x4c0u), r_edx);
L_00519b6a:; BB(0x00519b6a);
    /* 00519b6a: ret  */ FN_RET(0x00519ad0); r_esp += 4; return;
}

void f_00519b6c(void) /* sub_519B6C */
{
    FN_ENTER(0x00519b6c);
    /* 00519b6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519b6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00519b6e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00519b71: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00519b73: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00519b77: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519b7a: je 0x519ccb */ if (fZ) goto L_00519ccb;
L_00519b80:; BB(0x00519b80);
    /* 00519b80: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519b83: je 0x519cb0 */ if (fZ) goto L_00519cb0;
L_00519b89:; BB(0x00519b89);
    /* 00519b89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519b8b: jne 0x519c98 */ if (!fZ) goto L_00519c98;
L_00519b91:; BB(0x00519b91);
    /* 00519b91: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519b93: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x519b98u); f_007aa094();
    /* 00519b98: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00519b9d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519b9f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x519ba4u); f_007aaa30();
    /* 00519ba4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519ba6: jne 0x519bb8 */ if (!fZ) goto L_00519bb8;
L_00519ba8:; BB(0x00519ba8);
    /* 00519ba8: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00519bad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519baf: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x519bb4u); f_007aaa30();
    /* 00519bb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519bb6: je 0x519bd5 */ if (fZ) goto L_00519bd5;
L_00519bb8:; BB(0x00519bb8);
    /* 00519bb8: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 00519bbd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519bbf: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x519bc4u); f_007879b8();
    /* 00519bc4: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00519bc7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00519bc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519bca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519bcb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00519bcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00519bcd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x519bd2u); f_00814298();
    /* 00519bd2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00519bd5:; BB(0x00519bd5);
    /* 00519bd5: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 00519bda: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519bdc: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x519be1u); f_007aaa30();
    /* 00519be1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519be3: je 0x519bf8 */ if (fZ) goto L_00519bf8;
L_00519be5:; BB(0x00519be5);
    /* 00519be5: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00519bea: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00519bed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00519bee: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x519bf3u); f_0050b510();
    /* 00519bf3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00519bf6: jmp 0x519c62 */ goto L_00519c62;
L_00519bf8:; BB(0x00519bf8);
    /* 00519bf8: push 0x41d80000 */ { u32 v = 0x41d80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00519bfd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519bff: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x519c04u); f_007aaa30();
    /* 00519c04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519c06: je 0x519c62 */ if (fZ) goto L_00519c62;
L_00519c08:; BB(0x00519c08);
    /* 00519c08: mov ebx, dword ptr [ebp + 0x60] */ r_ebx = R32((u32)(r_ebp+0x60u));
    /* 00519c0b: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00519c0e: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00519c11: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00519c14: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00519c17: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00519c1b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00519c1f: add ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00519c25: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519c27: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x519c2cu); f_0082dcbc();
    /* 00519c2c: fld dword ptr [0x920e14] */ FPUSH(R_F32((u32)(0x920e14u)));
    /* 00519c32: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00519c34: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00519c37: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00519c3a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519c3c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x519c41u); f_0082ddd8();
    /* 00519c41: fld dword ptr [0x920e14] */ FPUSH(R_F32((u32)(0x920e14u)));
    /* 00519c47: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00519c49: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00519c4d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00519c51: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00519c54: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00519c59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00519c5a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x519c5fu); f_0050b510();
    /* 00519c5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00519c62:; BB(0x00519c62);
    /* 00519c62: fld dword ptr [0x920e1c] */ FPUSH(R_F32((u32)(0x920e1cu)));
    /* 00519c68: fadd dword ptr [ebp + 0x4b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4b8u));
    /* 00519c6e: fld dword ptr [0x920e18] */ FPUSH(R_F32((u32)(0x920e18u)));
    /* 00519c74: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00519c76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00519c78: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00519c7b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519c7d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00519c7e: ja 0x519c82 */ if ((!fC&&!fZ)) goto L_00519c82;
L_00519c80:; BB(0x00519c80);
    /* 00519c80: fst st(1) */ ST(1) = ST(0);
L_00519c82:; BB(0x00519c82);
    /* 00519c82: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00519c84: fstp dword ptr [ebp + 0x4b8] */ W_F32((u32)(r_ebp+0x4b8u), ST(0)); FPOP();
    /* 00519c8a: call dword ptr [edx + 0x1a0] */ { u32 t = R32((u32)(r_edx+0x1a0u)); r_esp -= 4; W32(r_esp, 0x519c90u); call_ind(t); }
    /* 00519c90: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00519c93: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519c94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519c95: ret 4 */ FN_RET(0x00519b6c); r_esp += 8; return;
L_00519c98:; BB(0x00519c98);
    /* 00519c98: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519c9b: jne 0x519cc3 */ if (!fZ) goto L_00519cc3;
L_00519c9d:; BB(0x00519c9d);
    /* 00519c9d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00519ca0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519ca2: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x519ca8u); call_ind(t); }
    /* 00519ca8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00519cab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519cac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519cad: ret 4 */ FN_RET(0x00519b6c); r_esp += 8; return;
L_00519cb0:; BB(0x00519cb0);
    /* 00519cb0: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00519cb6: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00519cb8: je 0x519cc3 */ if (fZ) goto L_00519cc3;
L_00519cba:; BB(0x00519cba);
    /* 00519cba: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00519cbc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519cbe: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x519cc3u); f_0051f62c();
L_00519cc3:; BB(0x00519cc3);
    /* 00519cc3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00519cc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519cc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519cc8: ret 4 */ FN_RET(0x00519b6c); r_esp += 8; return;
L_00519ccb:; BB(0x00519ccb);
    /* 00519ccb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00519cce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519cd0: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x519cd6u); call_ind(t); }
    /* 00519cd6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00519cd9: mov eax, 3 */ r_eax = 0x3u;
    /* 00519cde: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00519ce5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519ce7: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x519cedu); call_ind(t); }
    /* 00519ced: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00519cef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519cf1: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x519cf6u); f_0051f664();
    /* 00519cf6: mov dword ptr [ebp + 0x4b8], 0xc0a00000 */ W32((u32)(r_ebp+0x4b8u), 0xc0a00000u);
    /* 00519d00: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00519d03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519d04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519d05: ret 4 */ FN_RET(0x00519b6c); r_esp += 8; return;
}

void f_00519d08(void) /* sub_519D08 */
{
    FN_ENTER(0x00519d08);
    /* 00519d08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519d09: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00519d0b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00519d0f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519d12: je 0x519d68 */ if (fZ) goto L_00519d68;
L_00519d14:; BB(0x00519d14);
    /* 00519d14: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519d17: je 0x519d51 */ if (fZ) goto L_00519d51;
L_00519d19:; BB(0x00519d19);
    /* 00519d19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519d1b: jne 0x519d64 */ if (!fZ) goto L_00519d64;
L_00519d1d:; BB(0x00519d1d);
    /* 00519d1d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519d1f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x519d24u); f_007aa094();
    /* 00519d24: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00519d29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519d2b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x519d30u); f_007aaa30();
    /* 00519d30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519d32: je 0x519d42 */ if (fZ) goto L_00519d42;
L_00519d34:; BB(0x00519d34);
    /* 00519d34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519d36: call 0x519948 */ r_esp -= 4; W32(r_esp, 0x519d3bu); f_00519948();
    /* 00519d3b: add dword ptr [ebp + 0x4c0], -1 */ { u32 ad = (u32)(r_ebp+0x4c0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00519d42:; BB(0x00519d42);
    /* 00519d42: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00519d45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519d47: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x519d4du); call_ind(t); }
    /* 00519d4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519d4e: ret 4 */ FN_RET(0x00519d08); r_esp += 8; return;
L_00519d51:; BB(0x00519d51);
    /* 00519d51: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00519d57: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519d59: je 0x519d64 */ if (fZ) goto L_00519d64;
L_00519d5b:; BB(0x00519d5b);
    /* 00519d5b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00519d5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519d5f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x519d64u); f_0051f62c();
L_00519d64:; BB(0x00519d64);
    /* 00519d64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519d65: ret 4 */ FN_RET(0x00519d08); r_esp += 8; return;
L_00519d68:; BB(0x00519d68);
    /* 00519d68: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00519d6b: mov eax, 1 */ r_eax = 0x1u;
    /* 00519d70: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00519d77: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519d79: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x519d7fu); call_ind(t); }
    /* 00519d7f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00519d81: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00519d83: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x519d88u); f_0051f664();
    /* 00519d88: mov dword ptr [ebp + 0x4b8], 0xc0a00000 */ W32((u32)(r_ebp+0x4b8u), 0xc0a00000u);
    /* 00519d92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519d93: ret 4 */ FN_RET(0x00519d08); r_esp += 8; return;
}

void f_00519d98(void) /* sub_519D98 */
{
    FN_ENTER(0x00519d98);
    /* 00519d98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00519d99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00519d9b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00519d9f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519da2: je 0x519de0 */ if (fZ) goto L_00519de0;
L_00519da4:; BB(0x00519da4);
    /* 00519da4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519da7: je 0x519dc9 */ if (fZ) goto L_00519dc9;
L_00519da9:; BB(0x00519da9);
    /* 00519da9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519dab: jne 0x519ddc */ if (!fZ) goto L_00519ddc;
L_00519dad:; BB(0x00519dad);
    /* 00519dad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519daf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x519db4u); f_007aa094();
    /* 00519db4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519db6: call 0x519ad0 */ r_esp -= 4; W32(r_esp, 0x519dbbu); f_00519ad0();
    /* 00519dbb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00519dbd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519dbf: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x519dc5u); call_ind(t); }
    /* 00519dc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519dc6: ret 4 */ FN_RET(0x00519d98); r_esp += 8; return;
L_00519dc9:; BB(0x00519dc9);
    /* 00519dc9: mov eax, dword ptr [ebx + 0x4c0] */ r_eax = R32((u32)(r_ebx+0x4c0u));
    /* 00519dcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00519dd1: jle 0x519ddc */ if ((fZ||fS!=fO)) goto L_00519ddc;
L_00519dd3:; BB(0x00519dd3);
    /* 00519dd3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00519dd5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519dd7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x519ddcu); f_0051f62c();
L_00519ddc:; BB(0x00519ddc);
    /* 00519ddc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519ddd: ret 4 */ FN_RET(0x00519d98); r_esp += 8; return;
L_00519de0:; BB(0x00519de0);
    /* 00519de0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00519de2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00519de4: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00519deb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519ded: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x519df3u); call_ind(t); }
    /* 00519df3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00519df5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00519df7: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x519dfcu); f_0051f664();
    /* 00519dfc: mov dword ptr [ebx + 0x4b8], 0xc0a00000 */ W32((u32)(r_ebx+0x4b8u), 0xc0a00000u);
    /* 00519e06: mov dword ptr [ebx + 0x4c8], 1 */ W32((u32)(r_ebx+0x4c8u), 0x1u);
    /* 00519e10: mov dword ptr [ebx + 0x4cc], 0x96 */ W32((u32)(r_ebx+0x4ccu), 0x96u);
    /* 00519e1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00519e1b: ret 4 */ FN_RET(0x00519d98); r_esp += 8; return;
}

void f_00519e20(void) /* sub_519E20 */
{
    FN_ENTER(0x00519e20);
    /* 00519e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00519e23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00519e25: push 0x8d466e */ { u32 v = 0x8d466eu; r_esp -= 4; W32(r_esp, v); }
    /* 00519e2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00519e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00519e31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00519e38: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00519e3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00519e3e: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00519e41: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00519e44: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00519e47: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00519e4a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00519e4d: lea eax, [ecx + 0x4d4] */ r_eax = (u32)(r_ecx+0x4d4u);
    /* 00519e53: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519e56: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00519e59: je 0x51a1b6 */ if (fZ) goto L_0051a1b6;
L_00519e5f:; BB(0x00519e5f);
    /* 00519e5f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519e62: je 0x51a166 */ if (fZ) goto L_0051a166;
L_00519e68:; BB(0x00519e68);
    /* 00519e68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519e6a: jne 0x51a153 */ if (!fZ) goto L_0051a153;
L_00519e70:; BB(0x00519e70);
    /* 00519e70: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x519e75u); f_007aa094();
    /* 00519e75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00519e78: mov eax, dword ptr [eax + 0x4d8] */ r_eax = R32((u32)(r_eax+0x4d8u));
    /* 00519e7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519e80: jne 0x51a0fa */ if (!fZ) goto L_0051a0fa;
L_00519e86:; BB(0x00519e86);
    /* 00519e86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00519e89: mov edx, dword ptr [eax + 0x4d0] */ r_edx = R32((u32)(r_eax+0x4d0u));
    /* 00519e8f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00519e92: mov dword ptr [eax + 0x4d0], edx */ W32((u32)(r_eax+0x4d0u), r_edx);
    /* 00519e98: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519e9b: jne 0x51a034 */ if (!fZ) goto L_0051a034;
L_00519ea1:; BB(0x00519ea1);
    /* 00519ea1: mov dword ptr [eax + 0x4d4], 0 */ W32((u32)(r_eax+0x4d4u), 0x0u);
    /* 00519eab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00519ead: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00519eb0:; BB(0x00519eb0);
    /* 00519eb0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00519eb7: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00519eb9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x519ebeu); f_005caba4();
    /* 00519ebe: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00519ec1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00519ec4: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00519ec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519ec9: je 0x51a18c */ if (fZ) goto L_0051a18c;
L_00519ecf:; BB(0x00519ecf);
    /* 00519ecf: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 00519ed6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00519edd: mov ecx, eax */ r_ecx = r_eax;
    /* 00519edf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00519ee2: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00519ee5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00519ee8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00519eea: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00519eed: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00519eef: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00519ef2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519ef3: lea esi, [edx + ebx + 0x3e8] */ r_esi = (u32)(r_edx+r_ebx+0x3e8u);
    /* 00519efa: mov dword ptr [ebp - 0x74], esi */ W32((u32)(r_ebp+0xffffff8cu), r_esi);
    /* 00519efd: lea edi, [edx + 0x3dc] */ r_edi = (u32)(r_edx+0x3dcu);
    /* 00519f03: mov dword ptr [ebp - 0x70], edi */ W32((u32)(r_ebp+0xffffff90u), r_edi);
    /* 00519f06: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00519f09: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00519f0c: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00519f0f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x519f14u); f_008193cc();
    /* 00519f14: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00519f1b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00519f1e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00519f21: mov dword ptr [ecx], 0xb001a0 */ W32((u32)(r_ecx), 0xb001a0u);
    /* 00519f27: mov ebx, dword ptr [0x9bb760] */ r_ebx = R32((u32)(0x9bb760u));
    /* 00519f2d: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 00519f30: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00519f33: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00519f36: mov edi, dword ptr [ebp - 0x64] */ r_edi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00519f39: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00519f3c: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00519f3f: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 00519f42: mov dword ptr [ecx + 0x28], edi */ W32((u32)(r_ecx+0x28u), r_edi);
    /* 00519f45: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00519f47: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00519f4a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00519f4d: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00519f50: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00519f53: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00519f56: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00519f59: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x519f5eu); f_0082f9c4();
    /* 00519f5e: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 00519f61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519f62: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x519f67u); f_00782868();
    /* 00519f67: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00519f69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00519f6c: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00519f6f: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00519f72: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00519f74: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00519f77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00519f79: fst dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 00519f7c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00519f7e: fmul qword ptr [0x920d60] */ ST(0) = ST(0) * R_F64((u32)(0x920d60u));
    /* 00519f84: fdiv qword ptr [0x920d58] */ ST(0) = ST(0) / R_F64((u32)(0x920d58u));
    /* 00519f8a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00519f8c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00519f8f: fld dword ptr [0x920e04] */ FPUSH(R_F32((u32)(0x920e04u)));
    /* 00519f95: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00519f98: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00519f9b: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 00519f9e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00519fa0: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 00519fa3: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 00519fa7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00519fac: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00519faf: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00519fb2: fistp dword ptr [edx + 0x40] */ W32((u32)(r_edx+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 00519fb5: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 00519fb8: mov eax, dword ptr [0xa72dcc] */ r_eax = R32((u32)(0xa72dccu));
    /* 00519fbd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00519fbf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00519fc1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00519fc3: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 00519fc6: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 00519fc9: mov dword ptr [ebp - 0x60], edi */ W32((u32)(r_ebp+0xffffffa0u), r_edi);
    /* 00519fcc: mov dword ptr [edx + 0x20], 0x40c00000 */ W32((u32)(r_edx+0x20u), 0x40c00000u);
    /* 00519fd3: mov ecx, dword ptr [eax + 0x430] */ r_ecx = R32((u32)(r_eax+0x430u));
    /* 00519fd9: mov ebx, dword ptr [ecx + 0x54] */ r_ebx = R32((u32)(r_ecx+0x54u));
    /* 00519fdc: mov dword ptr [edx + 0x3c], 0x3f800000 */ W32((u32)(r_edx+0x3cu), 0x3f800000u);
    /* 00519fe3: mov dword ptr [edx + 0x48], ebx */ W32((u32)(r_edx+0x48u), r_ebx);
    /* 00519fe6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00519fe8: mov dword ptr [edx + 0x44], edi */ W32((u32)(r_edx+0x44u), r_edi);
    /* 00519feb: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 00519ff2: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 00519ff5: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 00519ff8: fstp dword ptr [edx + 0x4c] */ W_F32((u32)(r_edx+0x4cu), ST(0)); FPOP();
    /* 00519ffb: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 00519ffe: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 0051a005: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 0051a00c: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 0051a013: mov dword ptr [edx + 0x64], 0 */ W32((u32)(r_edx+0x64u), 0x0u);
    /* 0051a01a: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
L_0051a021:; BB(0x0051a021);
    /* 0051a021: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051a028: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051a02b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a02e: jl 0x519eb0 */ if ((fS!=fO)) goto L_00519eb0;
L_0051a034:; BB(0x0051a034);
    /* 0051a034: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a037: mov ecx, dword ptr [eax + 0x4dc] */ r_ecx = R32((u32)(r_eax+0x4dcu));
    /* 0051a03d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51a042u); f_0082dcbc();
    /* 0051a042: fadd dword ptr [0x920e0c] */ ST(0) = ST(0) + R_F32((u32)(0x920e0cu));
    /* 0051a048: fmul dword ptr [0x920df8] */ ST(0) = ST(0) * R_F32((u32)(0x920df8u));
    /* 0051a04e: fadd dword ptr [0x920dfc] */ ST(0) = ST(0) + R_F32((u32)(0x920dfcu));
    /* 0051a054: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a057: fsubr dword ptr [ecx + 0x4b8] */ ST(0) = R_F32((u32)(r_ecx+0x4b8u)) - ST(0);
    /* 0051a05d: fcom dword ptr [0x920df4] */ fx_compare(ST(0), R_F32((u32)(0x920df4u))); 
    /* 0051a063: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051a065: mov edx, dword ptr [ecx + 0x4dc] */ r_edx = R32((u32)(r_ecx+0x4dcu));
    /* 0051a06b: fst dword ptr [ecx + 0x4b8] */ W_F32((u32)(r_ecx+0x4b8u), ST(0));
    /* 0051a071: add edx, 0x700 */ {  u32 a = r_edx; u32 b = 0x700u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051a077: mov dword ptr [ecx + 0x4dc], edx */ W32((u32)(r_ecx+0x4dcu), r_edx);
    /* 0051a07d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051a07e: jae 0x51a09c */ if (!fC) goto L_0051a09c;
L_0051a080:; BB(0x0051a080);
    /* 0051a080: mov eax, ecx */ r_eax = r_ecx;
    /* 0051a082: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 0051a089: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a08c: je 0x51a09c */ if (fZ) goto L_0051a09c;
L_0051a08e:; BB(0x0051a08e);
    /* 0051a08e: mov edx, eax */ r_edx = r_eax;
    /* 0051a090: mov eax, 9 */ r_eax = 0x9u;
    /* 0051a095: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_0051a09c:; BB(0x0051a09c);
    /* 0051a09c: fcomp dword ptr [0x920e3c] */ fx_compare(ST(0), R_F32((u32)(0x920e3cu))); FPOP();
    /* 0051a0a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051a0a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051a0a5: jae 0x51a146 */ if (!fC) goto L_0051a146;
L_0051a0ab:; BB(0x0051a0ab);
    /* 0051a0ab: mov edx, ecx */ r_edx = r_ecx;
    /* 0051a0ad: mov dword ptr [edx + 0x4d8], 1 */ W32((u32)(r_edx+0x4d8u), 0x1u);
    /* 0051a0b7: mov eax, 0xc0a00000 */ r_eax = 0xc0a00000u;
    /* 0051a0bc: mov dword ptr [edx + 0x4b8], eax */ W32((u32)(r_edx+0x4b8u), r_eax);
    /* 0051a0c2: mov dword ptr [edx + 0x4d0], 0 */ W32((u32)(r_edx+0x4d0u), 0x0u);
    /* 0051a0cc: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0d1: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0051a0d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0d5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x51a0dau); f_0050b510();
    /* 0051a0da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a0dd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a0e0: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0e5: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51a0eau); f_007879b8();
    /* 0051a0ea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051a0ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0f0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51a0f5u); f_00814298();
    /* 0051a0f5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a0f8: jmp 0x51a146 */ goto L_0051a146;
L_0051a0fa:; BB(0x0051a0fa);
    /* 0051a0fa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a0fd: jne 0x51a146 */ if (!fZ) goto L_0051a146;
L_0051a0ff:; BB(0x0051a0ff);
    /* 0051a0ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a102: mov eax, dword ptr [eax + 0x4d0] */ r_eax = R32((u32)(r_eax+0x4d0u));
    /* 0051a108: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a10b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a10e: jle 0x51a13d */ if ((fZ||fS!=fO)) goto L_0051a13d;
L_0051a110:; BB(0x0051a110);
    /* 0051a110: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a113: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 0051a119: mov dword ptr [eax + 0x4d0], 0 */ W32((u32)(r_eax+0x4d0u), 0x0u);
    /* 0051a123: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051a126: mov dword ptr [eax + 0x4d4], edx */ W32((u32)(r_eax+0x4d4u), r_edx);
    /* 0051a12c: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a12f: jl 0x51a146 */ if ((fS!=fO)) goto L_0051a146;
L_0051a131:; BB(0x0051a131);
    /* 0051a131: mov dword ptr [eax + 0x4d8], 2 */ W32((u32)(r_eax+0x4d8u), 0x2u);
    /* 0051a13b: jmp 0x51a146 */ goto L_0051a146;
L_0051a13d:; BB(0x0051a13d);
    /* 0051a13d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a140: mov dword ptr [edx + 0x4d0], eax */ W32((u32)(r_edx+0x4d0u), r_eax);
L_0051a146:; BB(0x0051a146);
    /* 0051a146: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a149: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051a14b: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x51a151u); call_ind(t); }
    /* 0051a151: jmp 0x51a173 */ goto L_0051a173;
L_0051a153:; BB(0x0051a153);
    /* 0051a153: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051a156: jne 0x51a173 */ if (!fZ) goto L_0051a173;
L_0051a158:; BB(0x0051a158);
    /* 0051a158: mov eax, ecx */ r_eax = r_ecx;
    /* 0051a15a: mov dword ptr [eax + 0x4d4], 6 */ W32((u32)(r_eax+0x4d4u), 0x6u);
    /* 0051a164: jmp 0x51a173 */ goto L_0051a173;
L_0051a166:; BB(0x0051a166);
    /* 0051a166: mov eax, ecx */ r_eax = r_ecx;
    /* 0051a168: mov edx, dword ptr [eax + 0x4d8] */ r_edx = R32((u32)(r_eax+0x4d8u));
    /* 0051a16e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051a171: je 0x51a195 */ if (fZ) goto L_0051a195;
L_0051a173:; BB(0x0051a173);
    /* 0051a173: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0051a176: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0051a179: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0051a17c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051a17f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051a186: mov esp, ebp */ r_esp = r_ebp;
    /* 0051a188: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a189: ret 4 */ FN_RET(0x00519e20); r_esp += 8; return;
L_0051a18c:; BB(0x0051a18c);
    /* 0051a18c: add dword ptr [ebp - 0x20], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0051a190: jmp 0x51a021 */ goto L_0051a021;
L_0051a195:; BB(0x0051a195);
    /* 0051a195: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0051a19b: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051a19e: je 0x51a1a7 */ if (fZ) goto L_0051a1a7;
L_0051a1a0:; BB(0x0051a1a0);
    /* 0051a1a0: mov eax, 1 */ r_eax = 0x1u;
    /* 0051a1a5: jmp 0x51a1a9 */ goto L_0051a1a9;
L_0051a1a7:; BB(0x0051a1a7);
    /* 0051a1a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0051a1a9:; BB(0x0051a1a9);
    /* 0051a1a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051a1ab: je 0x51a173 */ if (fZ) goto L_0051a173;
L_0051a1ad:; BB(0x0051a1ad);
    /* 0051a1ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1af: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51a1b4u); f_0051f62c();
    /* 0051a1b4: jmp 0x51a173 */ goto L_0051a173;
L_0051a1b6:; BB(0x0051a1b6);
    /* 0051a1b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051a1b8: mov eax, 8 */ r_eax = 0x8u;
    /* 0051a1bd: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0051a1c4: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x51a1cau); call_ind(t); }
    /* 0051a1ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a1cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1cf: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51a1d4u); f_0051f664();
    /* 0051a1d4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a1d7: mov dword ptr [edx + 0x4b8], 0x42c80000 */ W32((u32)(r_edx+0x4b8u), 0x42c80000u);
    /* 0051a1e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051a1e3: mov dword ptr [edx + 0x4d0], eax */ W32((u32)(r_edx+0x4d0u), r_eax);
    /* 0051a1e9: mov dword ptr [edx + 0x4d8], eax */ W32((u32)(r_edx+0x4d8u), r_eax);
    /* 0051a1ef: mov dword ptr [edx + 0x4dc], eax */ W32((u32)(r_edx+0x4dcu), r_eax);
    /* 0051a1f5: jmp 0x51a173 */ goto L_0051a173;
}

