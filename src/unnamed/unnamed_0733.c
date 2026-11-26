#include "protos.h"

void f_00733041(void)
{
    FN_ENTER(0x00733041);
    /* 00733041: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 0073304b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073304d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x733052u); f_005caba4();
    /* 00733052: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733055: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00733058: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0073305e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733060: je 0x7332c3 */ if (fZ) goto L_007332c3;
L_00733066:; BB(0x00733066);
    /* 00733066: mov dword ptr [ebp - 0xd4], 1 */ W32((u32)(r_ebp+0xffffff2cu), 0x1u);
    /* 00733070: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00733077: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073307a: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073307d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00733080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733081: call 0x74aa48 */ r_esp -= 4; W32(r_esp, 0x733086u); f_0074aa48();
    /* 00733086: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_00733090:; BB(0x00733090);
    /* 00733090: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00733093: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00733096: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00733099: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00733041); r_esp += 8; return;
L_007332c3:; BB(0x007332c3);
    /* 007332c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007332c5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007332c8: jmp 0x733090 */ goto L_00733090;
}

void f_0073309e(void)
{
    FN_ENTER(0x0073309e);
    /* 0073309e: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 007330a5: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007330a7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7330acu); f_005caba4();
    /* 007330ac: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007330af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007330b2: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 007330b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007330b7: je 0x7332cd */ if (fZ) goto L_007332cd;
L_007330bd:; BB(0x007330bd);
    /* 007330bd: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 007330c4: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 007330cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007330ce: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007330d1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007330d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007330d5: call 0x74bf30 */ r_esp -= 4; W32(r_esp, 0x7330dau); f_0074bf30();
    /* 007330da: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_007330e1:; BB(0x007330e1);
    /* 007330e1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007330e4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007330e7: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 007330ea: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x0073309e); r_esp += 8; return;
L_007332cd:; BB(0x007332cd);
    /* 007332cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007332cf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007332d2: jmp 0x7330e1 */ goto L_007330e1;
}

void f_007330ef(void)
{
    FN_ENTER(0x007330ef);
    /* 007330ef: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 007330f6: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 007330f8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7330fdu); f_005caba4();
    /* 007330fd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733100: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00733103: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00733106: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733108: je 0x7332d7 */ if (fZ) goto L_007332d7;
L_0073310e:; BB(0x0073310e);
    /* 0073310e: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 00733115: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 0073311c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073311f: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00733122: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00733125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733126: call 0x7536f4 */ r_esp -= 4; W32(r_esp, 0x73312bu); f_007536f4();
    /* 0073312b: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00733132:; BB(0x00733132);
    /* 00733132: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00733135: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00733138: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0073313b: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x007330ef); r_esp += 8; return;
L_007332d7:; BB(0x007332d7);
    /* 007332d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007332d9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007332dc: jmp 0x733132 */ goto L_00733132;
}

void f_00733140(void)
{
    FN_ENTER(0x00733140);
    /* 00733140: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 0073314a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0073314c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x733151u); f_005caba4();
    /* 00733151: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733154: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00733157: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0073315d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073315f: je 0x7332e1 */ if (fZ) goto L_007332e1;
L_00733165:; BB(0x00733165);
    /* 00733165: mov dword ptr [ebp - 0x94], 1 */ W32((u32)(r_ebp+0xffffff6cu), 0x1u);
    /* 0073316f: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00733176: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00733179: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073317c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073317f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733180: call 0x75de34 */ r_esp -= 4; W32(r_esp, 0x733185u); f_0075de34();
    /* 00733185: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0073318f:; BB(0x0073318f);
    /* 0073318f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00733192: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00733195: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00733198: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00733140); r_esp += 8; return;
L_007332e1:; BB(0x007332e1);
    /* 007332e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007332e3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007332e6: jmp 0x73318f */ goto L_0073318f;
}

void f_0073319a(void)
{
    FN_ENTER(0x0073319a);
    /* 0073319a: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
    /* 007331a4: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 007331a6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7331abu); f_005caba4();
    /* 007331ab: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007331ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007331b1: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 007331b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007331b9: je 0x7332eb */ if (fZ) goto L_007332eb;
L_007331bf:; BB(0x007331bf);
    /* 007331bf: mov dword ptr [ebp - 0xdc], 1 */ W32((u32)(r_ebp+0xffffff24u), 0x1u);
    /* 007331c9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007331d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007331d3: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007331d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007331d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007331da: call 0x74863c */ r_esp -= 4; W32(r_esp, 0x7331dfu); f_0074863c();
    /* 007331df: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_007331e9:; BB(0x007331e9);
    /* 007331e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007331ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007331ef: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x0073319a); r_esp += 8; return;
L_007332eb:; BB(0x007332eb);
    /* 007332eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007332ed: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007332f0: jmp 0x7331e9 */ goto L_007331e9;
}

void f_007331f2(void)
{
    FN_ENTER(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x007331f2); r_esp += 8; return;
}

void f_007332f8(void) /* sub_7332F8 */
{
    FN_ENTER(0x007332f8);
    /* 007332f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007332f9: mov edi, ecx */ r_edi = r_ecx;
    /* 007332fb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007332fd: push dword ptr [edi + 0x54] */ { u32 v = R32((u32)(r_edi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00733300: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x733305u); f_007be19c();
    /* 00733305: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00733308: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073330a: je 0x733314 */ if (fZ) goto L_00733314;
L_0073330c:; BB(0x0073330c);
    /* 0073330c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073330e: mov word ptr [edi + 0x52], ax */ W16((u32)(r_edi+0x52u), (u16)r_eax);
    /* 00733312: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00733313: ret  */ FN_RET(0x007332f8); r_esp += 4; return;
L_00733314:; BB(0x00733314);
    /* 00733314: mov ecx, edi */ r_ecx = r_edi;
    /* 00733316: call 0x732514 */ r_esp -= 4; W32(r_esp, 0x73331bu); f_00732514();
    /* 0073331b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073331c: ret  */ FN_RET(0x007332f8); r_esp += 4; return;
}

void f_00733320(void) /* sub_733320 */
{
    FN_ENTER(0x00733320);
    /* 00733320: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00733321: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00733322: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00733323: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00733324: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00733327: mov esi, ecx */ r_esi = r_ecx;
    /* 00733329: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0073332c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073332e: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00733332: je 0x7333de */ if (fZ) goto L_007333de;
L_00733338:; BB(0x00733338);
    /* 00733338: call 0x739e28 */ r_esp -= 4; W32(r_esp, 0x73333du); f_00739e28();
    /* 0073333d: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00733340: call 0x739ddc */ r_esp -= 4; W32(r_esp, 0x733345u); f_00739ddc();
    /* 00733345: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 00733348: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073334a: je 0x7333e8 */ if (fZ) goto L_007333e8;
L_00733350:; BB(0x00733350);
    /* 00733350: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00733352: mov ebp, edi */ r_ebp = r_edi;
    /* 00733354: mov edi, eax */ r_edi = r_eax;
L_00733356:; BB(0x00733356);
    /* 00733356: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0073335a: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0073335e: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733361: je 0x7333b4 */ if (fZ) goto L_007333b4;
L_00733363:; BB(0x00733363);
    /* 00733363: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00733366: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0073336a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073336b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073336d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073336e: call 0x732620 */ r_esp -= 4; W32(r_esp, 0x733373u); f_00732620();
    /* 00733373: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733375: je 0x7333a9 */ if (fZ) goto L_007333a9;
L_00733377:; BB(0x00733377);
    /* 00733377: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
    /* 0073337b: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0073337f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733381: je 0x73338f */ if (fZ) goto L_0073338f;
L_00733383:; BB(0x00733383);
    /* 00733383: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00733384: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733386: call 0x739d60 */ r_esp -= 4; W32(r_esp, 0x73338bu); f_00739d60();
    /* 0073338b: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
L_0073338f:; BB(0x0073338f);
    /* 0073338f: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00733393: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733395: je 0x7333a1 */ if (fZ) goto L_007333a1;
L_00733397:; BB(0x00733397);
    /* 00733397: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733398: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073339a: call 0x739ad4 */ r_esp -= 4; W32(r_esp, 0x73339fu); f_00739ad4();
    /* 0073339f: jmp 0x7333a9 */ goto L_007333a9;
L_007333a1:; BB(0x007333a1);
    /* 007333a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007333a2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007333a4: call 0x739ab4 */ r_esp -= 4; W32(r_esp, 0x7333a9u); f_00739ab4();
L_007333a9:; BB(0x007333a9);
    /* 007333a9: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007333ac: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007333af: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007333b2: jl 0x733356 */ if ((fS!=fO)) goto L_00733356;
L_007333b4:; BB(0x007333b4);
    /* 007333b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007333b6: call 0x738f70 */ r_esp -= 4; W32(r_esp, 0x7333bbu); f_00738f70();
    /* 007333bb: movsx edx, word ptr [esi + 0x52] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x52u));
    /* 007333bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007333c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007333c2: call 0x739df4 */ r_esp -= 4; W32(r_esp, 0x7333c7u); f_00739df4();
    /* 007333c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007333c9: call 0x739e0c */ r_esp -= 4; W32(r_esp, 0x7333ceu); f_00739e0c();
    /* 007333ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007333cf: mov ecx, esi */ r_ecx = r_esi;
    /* 007333d1: call 0x73249c */ r_esp -= 4; W32(r_esp, 0x7333d6u); f_0073249c();
    /* 007333d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007333d8: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7333ddu); f_00791748();
    /* 007333dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007333de:; BB(0x007333de);
    /* 007333de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007333e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007333e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007333e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007333e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007333e5: ret 4 */ FN_RET(0x00733320); r_esp += 8; return;
L_007333e8:; BB(0x007333e8);
    /* 007333e8: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007333ea: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7333efu); f_0073ec50();
    /* 007333ef: push dword ptr [esi + 0x54] */ { u32 v = R32((u32)(r_esi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007333f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007333f3: call 0x738e40 */ r_esp -= 4; W32(r_esp, 0x7333f8u); f_00738e40();
    /* 007333f8: mov ebx, eax */ r_ebx = r_eax;
    /* 007333fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007333fd: mov dword ptr [esi + 0x48], 0x30 */ W32((u32)(r_esi+0x48u), 0x30u);
    /* 00733404: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 00733407: jmp 0x733350 */ goto L_00733350;
}

void f_0073340c(void) /* sub_73340C */
{
    FN_ENTER(0x0073340c);
    /* 0073340c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073340d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073340f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00733412: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733414: je 0x733423 */ if (fZ) goto L_00733423;
L_00733416:; BB(0x00733416);
    /* 00733416: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x73341bu); f_00712714();
    /* 0073341b: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 0073341e: call 0x738f70 */ r_esp -= 4; W32(r_esp, 0x733423u); f_00738f70();
L_00733423:; BB(0x00733423);
    /* 00733423: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00733424: ret  */ FN_RET(0x0073340c); r_esp += 4; return;
}

void f_00733428(void) /* sub_733428 */
{
    FN_ENTER(0x00733428);
    /* 00733428: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00733429: mov ebp, esp */ r_ebp = r_esp;
    /* 0073342b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073342d: push 0x8f17e4 */ { u32 v = 0x8f17e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00733432: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00733438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733439: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00733440: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00733443: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00733446: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00733449: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0073344c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0073344f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00733452: call 0x73238c */ r_esp -= 4; W32(r_esp, 0x733457u); f_0073238c();
    /* 00733457: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073345a: mov dword ptr [eax + 0x58], 0x47447c00 */ W32((u32)(r_eax+0x58u), 0x47447c00u);
    /* 00733461: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00733463: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0073346a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73346fu); f_005caba4();
    /* 0073346f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733472: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00733475: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00733478: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073347a: je 0x7334b7 */ if (fZ) goto L_007334b7;
L_0073347c:; BB(0x0073347c);
    /* 0073347c: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00733483: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073348a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073348d: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00733490: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00733493: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733494: call 0x75836c */ r_esp -= 4; W32(r_esp, 0x733499u); f_0075836c();
    /* 00733499: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007334a0:; BB(0x007334a0);
    /* 007334a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007334a3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007334a6: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 007334a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007334ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007334b3: mov esp, ebp */ r_esp = r_ebp;
    /* 007334b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007334b6: ret  */ FN_RET(0x00733428); r_esp += 4; return;
L_007334b7:; BB(0x007334b7);
    /* 007334b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007334b9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007334bc: jmp 0x7334a0 */ goto L_007334a0;
}

void f_007334c0(void) /* sub_7334C0 */
{
    FN_ENTER(0x007334c0);
    /* 007334c0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007334c3: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 007334c6: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 007334c9: call 0x71ba30 */ r_esp -= 4; W32(r_esp, 0x7334ceu); f_0071ba30();
    /* 007334ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007334d1: ret  */ FN_RET(0x007334c0); r_esp += 4; return;
}

void f_007334d4(void) /* sub_7334D4 */
{
    FN_ENTER(0x007334d4);
    /* 007334d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007334d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007334d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007334d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007334d8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007334db: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007334dd: push dword ptr [ebp + 0x54] */ { u32 v = R32((u32)(r_ebp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007334e0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7334e5u); f_0068d5a8();
    /* 007334e5: mov esi, eax */ r_esi = r_eax;
    /* 007334e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007334ea: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007334ec: je 0x7335ba */ if (fZ) goto L_007335ba;
L_007334f2:; BB(0x007334f2);
    /* 007334f2: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 007334f6: mov edx, dword ptr [ebp + 0x4c] */ r_edx = R32((u32)(r_ebp+0x4cu));
    /* 007334f9: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007334fc: mov dword ptr [ebp + 0x4c], edx */ W32((u32)(r_ebp+0x4cu), r_edx);
    /* 007334ff: mov dword ptr [ebp + 0x5c], ebx */ W32((u32)(r_ebp+0x5cu), r_ebx);
    /* 00733502: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00733504: mov word ptr [ebp + 0x50], di */ W16((u32)(r_ebp+0x50u), (u16)r_edi);
    /* 00733508: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073350a: call 0x7332f8 */ r_esp -= 4; W32(r_esp, 0x73350fu); f_007332f8();
    /* 0073350f: mov edi, dword ptr [ebp + 0x5c] */ r_edi = R32((u32)(r_ebp+0x5cu));
    /* 00733512: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 00733515: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733517: je 0x7335ca */ if (fZ) goto L_007335ca;
L_0073351d:; BB(0x0073351d);
    /* 0073351d: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00733521: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00733523: mov esi, eax */ r_esi = r_eax;
L_00733525:; BB(0x00733525);
    /* 00733525: movsx edx, word ptr [edi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 00733528: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0073352c: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073352f: je 0x7335c4 */ if (fZ) goto L_007335c4;
L_00733535:; BB(0x00733535);
    /* 00733535: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00733538: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0073353c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073353d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073353f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733540: call 0x732620 */ r_esp -= 4; W32(r_esp, 0x733545u); f_00732620();
    /* 00733545: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733547: je 0x73357a */ if (fZ) goto L_0073357a;
L_00733549:; BB(0x00733549);
    /* 00733549: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
    /* 0073354d: movsx edx, word ptr [edi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 00733550: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733552: je 0x733560 */ if (fZ) goto L_00733560;
L_00733554:; BB(0x00733554);
    /* 00733554: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00733555: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733557: call 0x739d60 */ r_esp -= 4; W32(r_esp, 0x73355cu); f_00739d60();
    /* 0073355c: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
L_00733560:; BB(0x00733560);
    /* 00733560: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00733564: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733566: je 0x733572 */ if (fZ) goto L_00733572;
L_00733568:; BB(0x00733568);
    /* 00733568: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733569: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073356b: call 0x739ad4 */ r_esp -= 4; W32(r_esp, 0x733570u); f_00739ad4();
    /* 00733570: jmp 0x73357a */ goto L_0073357a;
L_00733572:; BB(0x00733572);
    /* 00733572: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733573: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733575: call 0x739ab4 */ r_esp -= 4; W32(r_esp, 0x73357au); f_00739ab4();
L_0073357a:; BB(0x0073357a);
    /* 0073357a: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0073357d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00733580: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00733583: jl 0x733525 */ if ((fS!=fO)) goto L_00733525;
L_00733585:; BB(0x00733585);
    /* 00733585: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_00733589:; BB(0x00733589);
    /* 00733589: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073358b: call 0x738f70 */ r_esp -= 4; W32(r_esp, 0x733590u); f_00738f70();
    /* 00733590: movsx edx, word ptr [ebp + 0x52] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x52u));
    /* 00733594: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00733595: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733597: call 0x739df4 */ r_esp -= 4; W32(r_esp, 0x73359cu); f_00739df4();
    /* 0073359c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073359e: call 0x739e0c */ r_esp -= 4; W32(r_esp, 0x7335a3u); f_00739e0c();
    /* 007335a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007335a4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007335a6: call 0x73249c */ r_esp -= 4; W32(r_esp, 0x7335abu); f_0073249c();
    /* 007335ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007335ad: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7335b2u); f_00791748();
    /* 007335b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007335b3: mov ecx, esi */ r_ecx = r_esi;
    /* 007335b5: call 0x6936ec */ r_esp -= 4; W32(r_esp, 0x7335bau); f_006936ec();
L_007335ba:; BB(0x007335ba);
    /* 007335ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007335bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007335be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007335bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007335c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007335c1: ret 4 */ FN_RET(0x007334d4); r_esp += 8; return;
L_007335c4:; BB(0x007335c4);
    /* 007335c4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 007335c8: jmp 0x733589 */ goto L_00733589;
L_007335ca:; BB(0x007335ca);
    /* 007335ca: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007335cc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7335d1u); f_0073ec50();
    /* 007335d1: push dword ptr [ebp + 0x54] */ { u32 v = R32((u32)(r_ebp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007335d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007335d5: call 0x738e40 */ r_esp -= 4; W32(r_esp, 0x7335dau); f_00738e40();
    /* 007335da: mov ebx, eax */ r_ebx = r_eax;
    /* 007335dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007335df: mov dword ptr [ebp + 0x48], 0x30 */ W32((u32)(r_ebp+0x48u), 0x30u);
    /* 007335e6: mov dword ptr [ebp + 0x1c], ebx */ W32((u32)(r_ebp+0x1cu), r_ebx);
    /* 007335e9: jmp 0x73351d */ goto L_0073351d;
}

void f_007335f0(void) /* sub_7335F0 */
{
    FN_ENTER(0x007335f0);
    /* 007335f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007335f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007335f3: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 007335f6: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007335f9: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 007335fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007335fe: call 0x78ba3c */ r_esp -= 4; W32(r_esp, 0x733603u); f_0078ba3c();
    /* 00733603: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733605: call 0x73238c */ r_esp -= 4; W32(r_esp, 0x73360au); f_0073238c();
    /* 0073360a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073360c: call 0x78b33c */ r_esp -= 4; W32(r_esp, 0x733611u); f_0078b33c();
    /* 00733611: push dword ptr [ebx + 0x54] */ { u32 v = R32((u32)(r_ebx+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00733614: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x733619u); f_0068d5a8();
    /* 00733619: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073361a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073361c: je 0x733625 */ if (fZ) goto L_00733625;
L_0073361e:; BB(0x0073361e);
    /* 0073361e: mov ecx, eax */ r_ecx = r_eax;
    /* 00733620: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x733625u); f_00693728();
L_00733625:; BB(0x00733625);
    /* 00733625: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00733627: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x73362cu); f_00791748();
    /* 0073362c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073362d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073362e: ret  */ FN_RET(0x007335f0); r_esp += 4; return;
}

void f_00733630(void) /* sub_733630 */
{
    FN_ENTER(0x00733630);
    /* 00733630: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00733631: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00733633: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 00733636: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00733639: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 0073363c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073363e: call 0x73238c */ r_esp -= 4; W32(r_esp, 0x733643u); f_0073238c();
    /* 00733643: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 00733646: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733648: je 0x733670 */ if (fZ) goto L_00733670;
L_0073364a:; BB(0x0073364a);
    /* 0073364a: mov dword ptr [ebx + 0x48], 0x30 */ W32((u32)(r_ebx+0x48u), 0x30u);
    /* 00733651: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733653: call 0x732508 */ r_esp -= 4; W32(r_esp, 0x733658u); f_00732508();
    /* 00733658: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073365a: call 0x732514 */ r_esp -= 4; W32(r_esp, 0x73365fu); f_00732514();
    /* 0073365f: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00733662: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733664: call 0x732534 */ r_esp -= 4; W32(r_esp, 0x733669u); f_00732534();
    /* 00733669: mov eax, 1 */ r_eax = 0x1u;
    /* 0073366e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073366f: ret  */ FN_RET(0x00733630); r_esp += 4; return;
L_00733670:; BB(0x00733670);
    /* 00733670: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00733672: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733674: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x733677u); call_ind(t); }
    /* 00733677: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733679: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073367a: ret  */ FN_RET(0x00733630); r_esp += 4; return;
}

void f_0073367c(void) /* sub_73367C */
{
    FN_ENTER(0x0073367c);
    /* 0073367c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073367d: mov edi, ecx */ r_edi = r_ecx;
    /* 0073367f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00733683: mov ecx, edi */ r_ecx = r_edi;
    /* 00733685: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x73368au); f_008193cc();
    /* 0073368a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0073368e: mov dword ptr [edi], 0xb407e8 */ W32((u32)(r_edi), 0xb407e8u);
    /* 00733694: mov edx, dword ptr [0x9f2f20] */ r_edx = R32((u32)(0x9f2f20u));
    /* 0073369a: mov dword ptr [edi + 0x48], 0x30 */ W32((u32)(r_edi+0x48u), 0x30u);
    /* 007336a1: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 007336a4: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 007336a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007336a9: mov dword ptr [edi + 0x58], 0x47447c00 */ W32((u32)(r_edi+0x58u), 0x47447c00u);
    /* 007336b0: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 007336b3: mov word ptr [edi + 0x50], ax */ W16((u32)(r_edi+0x50u), (u16)r_eax);
    /* 007336b7: mov word ptr [edi + 0x52], ax */ W16((u32)(r_edi+0x52u), (u16)r_eax);
    /* 007336bb: mov word ptr [edi + 0x28], ax */ W16((u32)(r_edi+0x28u), (u16)r_eax);
    /* 007336bf: mov word ptr [edi + 0x2a], ax */ W16((u32)(r_edi+0x2au), (u16)r_eax);
    /* 007336c3: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 007336c6: mov word ptr [edi + 0x30], ax */ W16((u32)(r_edi+0x30u), (u16)r_eax);
    /* 007336ca: mov word ptr [edi + 0x32], ax */ W16((u32)(r_edi+0x32u), (u16)r_eax);
    /* 007336ce: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 007336d1: mov word ptr [edi + 0x38], ax */ W16((u32)(r_edi+0x38u), (u16)r_eax);
    /* 007336d5: mov word ptr [edi + 0x3a], ax */ W16((u32)(r_edi+0x3au), (u16)r_eax);
    /* 007336d9: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 007336dc: mov word ptr [edi + 0x40], ax */ W16((u32)(r_edi+0x40u), (u16)r_eax);
    /* 007336e0: mov word ptr [edi + 0x42], ax */ W16((u32)(r_edi+0x42u), (u16)r_eax);
    /* 007336e4: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 007336e7: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 007336ea: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 007336ed: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 007336f0: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 007336f3: mov eax, edi */ r_eax = r_edi;
    /* 007336f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007336f6: ret 8 */ FN_RET(0x0073367c); r_esp += 12; return;
}

void f_007336fc(void) /* sub_7336FC */
{
    FN_ENTER(0x007336fc);
    /* 007336fc: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00733700: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00733704: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00733707: fadd dword ptr [edx*4 + 0x971298] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x971298u));
    /* 0073370e: fsubr dword ptr [ecx + 0x58] */ ST(0) = R_F32((u32)(r_ecx+0x58u)) - ST(0);
    /* 00733711: ret 4 */ FN_RET(0x007336fc); r_esp += 8; return;
}

void f_00733714(void) /* sub_733714 */
{
    FN_ENTER(0x00733714);
    /* 00733714: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00733715: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00733716: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00733717: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00733719: push dword ptr [ebp + 0x54] */ { u32 v = R32((u32)(r_ebp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073371c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x733721u); f_0068d5a8();
    /* 00733721: mov ebx, eax */ r_ebx = r_eax;
    /* 00733723: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00733726: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733728: je 0x733792 */ if (fZ) goto L_00733792;
L_0073372a:; BB(0x0073372a);
    /* 0073372a: mov edx, dword ptr [ebp + 0x4c] */ r_edx = R32((u32)(r_ebp+0x4cu));
    /* 0073372d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733730: je 0x733738 */ if (fZ) goto L_00733738;
L_00733732:; BB(0x00733732);
    /* 00733732: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00733733: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00733734: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733735: ret 4 */ FN_RET(0x00733714); r_esp += 8; return;
L_00733738:; BB(0x00733738);
    /* 00733738: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0073373c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0073373f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00733740: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00733742: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733743: call 0x732620 */ r_esp -= 4; W32(r_esp, 0x733748u); f_00732620();
    /* 00733748: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073374a: je 0x733792 */ if (fZ) goto L_00733792;
L_0073374c:; BB(0x0073374c);
    /* 0073374c: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0073374f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733751: jne 0x733759 */ if (!fZ) goto L_00733759;
L_00733753:; BB(0x00733753);
    /* 00733753: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00733754: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00733755: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733756: ret 4 */ FN_RET(0x00733714); r_esp += 8; return;
L_00733759:; BB(0x00733759);
    /* 00733759: mov edx, dword ptr [ebp + 0x4c] */ r_edx = R32((u32)(r_ebp+0x4cu));
    /* 0073375c: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
    /* 00733763: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00733766: mov dword ptr [ebp + 0x4c], edx */ W32((u32)(r_ebp+0x4cu), r_edx);
    /* 00733769: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0073376e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073376f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00733771: call 0x733798 */ r_esp -= 4; W32(r_esp, 0x733776u); f_00733798();
    /* 00733776: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0073377b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073377c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073377e: call 0x732960 */ r_esp -= 4; W32(r_esp, 0x733783u); f_00732960();
    /* 00733783: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733785: call 0x6936ec */ r_esp -= 4; W32(r_esp, 0x73378au); f_006936ec();
    /* 0073378a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0073378d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073378f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x733792u); call_ind(t); }
L_00733792:; BB(0x00733792);
    /* 00733792: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00733793: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00733794: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733795: ret 4 */ FN_RET(0x00733714); r_esp += 8; return;
}

void f_00733798(void) /* sub_733798 */
{
    FN_ENTER(0x00733798);
    /* 00733798: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00733799: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073379a: mov esi, ecx */ r_esi = r_ecx;
    /* 0073379c: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 0073379f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007337a1: je 0x7337cd */ if (fZ) goto L_007337cd;
L_007337a3:; BB(0x007337a3);
    /* 007337a3: movsx edx, word ptr [esp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 007337a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007337a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007337ab: call 0x739ad4 */ r_esp -= 4; W32(r_esp, 0x7337b0u); f_00739ad4();
    /* 007337b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007337b2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007337b4: call 0x739df4 */ r_esp -= 4; W32(r_esp, 0x7337b9u); f_00739df4();
    /* 007337b9: mov ecx, esi */ r_ecx = r_esi;
    /* 007337bb: call 0x732934 */ r_esp -= 4; W32(r_esp, 0x7337c0u); f_00732934();
    /* 007337c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007337c2: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7337c7u); f_00791748();
    /* 007337c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007337c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007337c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007337ca: ret 4 */ FN_RET(0x00733798); r_esp += 8; return;
L_007337cd:; BB(0x007337cd);
    /* 007337cd: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007337cf: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7337d4u); f_0073ec50();
    /* 007337d4: push dword ptr [esi + 0x54] */ { u32 v = R32((u32)(r_esi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007337d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007337d8: call 0x738e40 */ r_esp -= 4; W32(r_esp, 0x7337ddu); f_00738e40();
    /* 007337dd: mov ebx, eax */ r_ebx = r_eax;
    /* 007337df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007337e2: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 007337e5: jmp 0x7337a3 */ goto L_007337a3;
}

void f_007337e8(void) /* sub_7337E8 */
{
    FN_ENTER(0x007337e8);
    /* 007337e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007337e9: mov edi, ecx */ r_edi = r_ecx;
    /* 007337eb: mov ecx, edi */ r_ecx = r_edi;
    /* 007337ed: call 0x73238c */ r_esp -= 4; W32(r_esp, 0x7337f2u); f_0073238c();
    /* 007337f2: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 007337f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007337f8: mov ecx, edi */ r_ecx = r_edi;
    /* 007337fa: call 0x732960 */ r_esp -= 4; W32(r_esp, 0x7337ffu); f_00732960();
    /* 007337ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00733800: ret 4 */ FN_RET(0x007337e8); r_esp += 8; return;
}

void f_00733804(void) /* sub_733804 */
{
    FN_ENTER(0x00733804);
    /* 00733804: mov dword ptr [0xa9a874], 0x3f800000 */ W32((u32)(0xa9a874u), 0x3f800000u);
    /* 0073380e: mov dword ptr [0xa9a878], 0x41000000 */ W32((u32)(0xa9a878u), 0x41000000u);
    /* 00733818: mov dword ptr [0xa9a87c], 0x3fc00000 */ W32((u32)(0xa9a87cu), 0x3fc00000u);
    /* 00733822: ret  */ FN_RET(0x00733804); r_esp += 4; return;
}

void f_00733824(void) /* sub_733824 */
{
    FN_ENTER(0x00733824);
    /* 00733824: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00733825: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00733827: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733829: call 0x733848 */ r_esp -= 4; W32(r_esp, 0x73382eu); f_00733848();
    /* 0073382e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00733832: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733834: jne 0x73383a */ if (!fZ) goto L_0073383a;
L_00733836:; BB(0x00733836);
    /* 00733836: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00733837: ret 4 */ FN_RET(0x00733824); r_esp += 8; return;
L_0073383a:; BB(0x0073383a);
    /* 0073383a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073383b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x733840u); f_005c2f74();
    /* 00733840: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00733841: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00733842: ret 4 */ FN_RET(0x00733824); r_esp += 8; return;
}

void f_00733848(void) /* sub_733848 */
{
    FN_ENTER(0x00733848);
    /* 00733848: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00733849: mov ebp, esp */ r_ebp = r_esp;
    /* 0073384b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073384d: push 0x8f1800 */ { u32 v = 0x8f1800u; r_esp -= 4; W32(r_esp, v); }
    /* 00733852: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00733858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733859: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00733860: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00733863: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00733866: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00733869: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073386c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073386f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00733872: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00733879: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073387c: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 0073387f: mov dword ptr [ecx], 0xb40830 */ W32((u32)(r_ecx), 0xb40830u);
    /* 00733885: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00733887: je 0x733891 */ if (fZ) goto L_00733891;
L_00733889:; BB(0x00733889);
    /* 00733889: call 0x4d4438 */ r_esp -= 4; W32(r_esp, 0x73388eu); f_004d4438();
    /* 0073388e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00733891:; BB(0x00733891);
    /* 00733891: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00733898: call 0x7322fc */ r_esp -= 4; W32(r_esp, 0x73389du); f_007322fc();
    /* 0073389d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007338a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007338a7: mov esp, ebp */ r_esp = r_ebp;
    /* 007338a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007338aa: ret  */ FN_RET(0x00733848); r_esp += 4; return;
}

void f_007338ac(void) /* sub_7338AC */
{
    FN_ENTER(0x007338ac);
    /* 007338ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007338ad: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007338b0: mov edi, ecx */ r_edi = r_ecx;
    /* 007338b2: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007338b6: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007338ba: mov ecx, edi */ r_ecx = r_edi;
    /* 007338bc: call 0x73367c */ r_esp -= 4; W32(r_esp, 0x7338c1u); f_0073367c();
    /* 007338c1: mov dword ptr [edi], 0xb40830 */ W32((u32)(r_edi), 0xb40830u);
    /* 007338c7: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 007338cd: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 007338d3: mov edx, dword ptr [0x9f2f24] */ r_edx = R32((u32)(0x9f2f24u));
    /* 007338d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007338db: fstp dword ptr [edi + 0x8c] */ W_F32((u32)(r_edi+0x8cu), ST(0)); FPOP();
    /* 007338e1: fstp dword ptr [edi + 0x90] */ W_F32((u32)(r_edi+0x90u), ST(0)); FPOP();
    /* 007338e7: mov dword ptr [edi + 0xa4], 0x3f800000 */ W32((u32)(r_edi+0xa4u), 0x3f800000u);
    /* 007338f1: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 007338f4: mov dword ptr [edi + 0xa8], 0x3f59999a */ W32((u32)(r_edi+0xa8u), 0x3f59999au);
    /* 007338fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00733900: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 00733903: mov byte ptr [edi + 0x61], al */ W8((u32)(r_edi+0x61u), (u8)r_eax);
    /* 00733906: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 0073390b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0073390d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00733910: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00733913: mov eax, dword ptr [0xaf0354] */ r_eax = R32((u32)(0xaf0354u));
    /* 00733918: fstp dword ptr [edi + 0x6c] */ W_F32((u32)(r_edi+0x6cu), ST(0)); FPOP();
    /* 0073391b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0073391d: mov dword ptr [edi + 0x94], 0 */ W32((u32)(r_edi+0x94u), 0x0u);
    /* 00733927: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0073392b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0073392f: fstp dword ptr [edi + 0x70] */ W_F32((u32)(r_edi+0x70u), ST(0)); FPOP();
    /* 00733932: mov eax, edi */ r_eax = r_edi;
    /* 00733934: mov dword ptr [edi + 0x98], 0 */ W32((u32)(r_edi+0x98u), 0x0u);
    /* 0073393e: mov dword ptr [edi + 0x9c], 0x41a00000 */ W32((u32)(r_edi+0x9cu), 0x41a00000u);
    /* 00733948: mov dword ptr [edi + 0xa0], 0x41700000 */ W32((u32)(r_edi+0xa0u), 0x41700000u);
    /* 00733952: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00733955: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00733956: ret 8 */ FN_RET(0x007338ac); r_esp += 12; return;
}

void f_0073395c(void) /* sub_73395C */
{
    FN_ENTER(0x0073395c);
    /* 0073395c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073395d: mov edi, ecx */ r_edi = r_ecx;
    /* 0073395f: mov ecx, edi */ r_ecx = r_edi;
    /* 00733961: call 0x7323a8 */ r_esp -= 4; W32(r_esp, 0x733966u); f_007323a8();
    /* 00733966: mov ecx, edi */ r_ecx = r_edi;
    /* 00733968: call 0x7334c0 */ r_esp -= 4; W32(r_esp, 0x73396du); f_007334c0();
    /* 0073396d: mov ecx, edi */ r_ecx = r_edi;
    /* 0073396f: call 0x733978 */ r_esp -= 4; W32(r_esp, 0x733974u); f_00733978();
    /* 00733974: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00733975: ret  */ FN_RET(0x0073395c); r_esp += 4; return;
}

void f_00733978(void) /* sub_733978 */
{
    FN_ENTER(0x00733978);
    /* 00733978: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00733979: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073397a: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073397d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073397f: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 00733982: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00733985: je 0x733a0b */ if (fZ) goto L_00733a0b;
L_0073398b:; BB(0x0073398b);
    /* 0073398b: fld dword ptr [0xa9a894] */ FPUSH(R_F32((u32)(0xa9a894u)));
    /* 00733991: fld dword ptr [0xa9a894] */ FPUSH(R_F32((u32)(0xa9a894u)));
    /* 00733997: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00733999: movsx ecx, byte ptr [ebx + 0x60] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x60u));
    /* 0073399d: movzx edx, byte ptr [ebx + 0x61] */ r_edx = (u32)R8((u32)(r_ebx+0x61u));
    /* 007339a1: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007339a5: fld dword ptr [0xa9a890] */ FPUSH(R_F32((u32)(0xa9a890u)));
    /* 007339ab: fld dword ptr [0xa9a890] */ FPUSH(R_F32((u32)(0xa9a890u)));
    /* 007339b1: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 007339b3: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007339b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007339ba: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007339bd: movsx esi, cl */ r_esi = (u32)(i32)(i8)(u8)r_ecx;
    /* 007339c0: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 007339c4: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007339c8: fcom dword ptr [0x9712fc] */ fx_compare(ST(0), R_F32((u32)(0x9712fcu))); 
    /* 007339ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007339d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007339d1: jbe 0x7339e1 */ if ((fC||fZ)) goto L_007339e1;
L_007339d3:; BB(0x007339d3);
    /* 007339d3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007339d5: fld dword ptr [0x9712fc] */ FPUSH(R_F32((u32)(0x9712fcu)));
    /* 007339db: mov byte ptr [ebx + 0x60], 6 */ W8((u32)(r_ebx+0x60u), 0x6u);
    /* 007339df: jmp 0x7339e4 */ goto L_007339e4;
L_007339e1:; BB(0x007339e1);
    /* 007339e1: mov byte ptr [ebx + 0x60], cl */ W8((u32)(r_ebx+0x60u), (u8)r_ecx);
L_007339e4:; BB(0x007339e4);
    /* 007339e4: fld dword ptr [0x971300] */ FPUSH(R_F32((u32)(0x971300u)));
    /* 007339ea: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 007339ed: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007339ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007339f1: jg 0x7339f5 */ if ((!fZ&&fS==fO)) goto L_007339f5;
L_007339f3:; BB(0x007339f3);
    /* 007339f3: mov eax, esi */ r_eax = r_esi;
L_007339f5:; BB(0x007339f5);
    /* 007339f5: mov byte ptr [ebx + 0x61], al */ W8((u32)(r_ebx+0x61u), (u8)r_eax);
    /* 007339f8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007339fc: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733a00: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00733a02: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00733a04: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00733a06: jmp 0x733c2a */ goto L_00733c2a;
L_00733a0b:; BB(0x00733a0b);
    /* 00733a0b: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00733a0e: je 0x733aae */ if (fZ) goto L_00733aae;
L_00733a14:; BB(0x00733a14);
    /* 00733a14: fld dword ptr [0x9712c8] */ FPUSH(R_F32((u32)(0x9712c8u)));
    /* 00733a1a: fld dword ptr [0x9712cc] */ FPUSH(R_F32((u32)(0x9712ccu)));
    /* 00733a20: fld dword ptr [0x9712e0] */ FPUSH(R_F32((u32)(0x9712e0u)));
    /* 00733a26: fld dword ptr [0x9712dc] */ FPUSH(R_F32((u32)(0x9712dcu)));
    /* 00733a2c: movsx ecx, byte ptr [ebx + 0x60] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x60u));
    /* 00733a30: movsx edx, byte ptr [ebx + 0x61] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 00733a34: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00733a36: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00733a3a: fld dword ptr [0x971300] */ FPUSH(R_F32((u32)(0x971300u)));
    /* 00733a40: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00733a42: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00733a46: mov dword ptr [0xa9a894], 0x42a00000 */ W32((u32)(0xa9a894u), 0x42a00000u);
    /* 00733a50: mov dword ptr [0xa9a890], 0x42e66666 */ W32((u32)(0xa9a890u), 0x42e66666u);
    /* 00733a5a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00733a5d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00733a60: movsx esi, cl */ r_esi = (u32)(i32)(i8)(u8)r_ecx;
    /* 00733a63: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00733a67: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733a6b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00733a6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00733a6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00733a70: jbe 0x733a80 */ if ((fC||fZ)) goto L_00733a80;
L_00733a72:; BB(0x00733a72);
    /* 00733a72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00733a74: fld dword ptr [0x971300] */ FPUSH(R_F32((u32)(0x971300u)));
    /* 00733a7a: mov byte ptr [ebx + 0x60], 3 */ W8((u32)(r_ebx+0x60u), 0x3u);
    /* 00733a7e: jmp 0x733a83 */ goto L_00733a83;
L_00733a80:; BB(0x00733a80);
    /* 00733a80: mov byte ptr [ebx + 0x60], cl */ W8((u32)(r_ebx+0x60u), (u8)r_ecx);
L_00733a83:; BB(0x00733a83);
    /* 00733a83: movsx esi, dl */ r_esi = (u32)(i32)(i8)(u8)r_edx;
    /* 00733a86: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00733a8a: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733a8e: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00733a90: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00733a92: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00733a93: jbe 0x733aa6 */ if ((fC||fZ)) goto L_00733aa6;
L_00733a95:; BB(0x00733a95);
    /* 00733a95: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00733a97: fld dword ptr [0x971300] */ FPUSH(R_F32((u32)(0x971300u)));
    /* 00733a9d: mov byte ptr [ebx + 0x61], 3 */ W8((u32)(r_ebx+0x61u), 0x3u);
    /* 00733aa1: jmp 0x733c2a */ goto L_00733c2a;
L_00733aa6:; BB(0x00733aa6);
    /* 00733aa6: mov byte ptr [ebx + 0x61], dl */ W8((u32)(r_ebx+0x61u), (u8)r_edx);
    /* 00733aa9: jmp 0x733c2a */ goto L_00733c2a;
L_00733aae:; BB(0x00733aae);
    /* 00733aae: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00733ab1: je 0x733b4e */ if (fZ) goto L_00733b4e;
L_00733ab7:; BB(0x00733ab7);
    /* 00733ab7: fld dword ptr [0x9712c0] */ FPUSH(R_F32((u32)(0x9712c0u)));
    /* 00733abd: fld dword ptr [0x9712c4] */ FPUSH(R_F32((u32)(0x9712c4u)));
    /* 00733ac3: fld dword ptr [0x9712c0] */ FPUSH(R_F32((u32)(0x9712c0u)));
    /* 00733ac9: fld dword ptr [0x9712c4] */ FPUSH(R_F32((u32)(0x9712c4u)));
    /* 00733acf: movzx edx, byte ptr [ebx + 0x60] */ r_edx = (u32)R8((u32)(r_ebx+0x60u));
    /* 00733ad3: movsx ecx, byte ptr [ebx + 0x61] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 00733ad7: fld dword ptr [0x971300] */ FPUSH(R_F32((u32)(0x971300u)));
    /* 00733add: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00733adf: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00733ae3: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00733ae7: mov dword ptr [0xa9a894], 0 */ W32((u32)(0xa9a894u), 0x0u);
    /* 00733af1: mov dword ptr [0xa9a890], 0x42c80000 */ W32((u32)(0xa9a890u), 0x42c80000u);
    /* 00733afb: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00733afe: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00733b01: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00733b04: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00733b06: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00733b08: jg 0x733b0c */ if ((!fZ&&fS==fO)) goto L_00733b0c;
L_00733b0a:; BB(0x00733b0a);
    /* 00733b0a: mov edx, esi */ r_edx = r_esi;
L_00733b0c:; BB(0x00733b0c);
    /* 00733b0c: mov byte ptr [ebx + 0x60], dl */ W8((u32)(r_ebx+0x60u), (u8)r_edx);
    /* 00733b0f: movsx eax, cl */ r_eax = (u32)(i32)(i8)(u8)r_ecx;
    /* 00733b12: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00733b16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733b1a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00733b1c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00733b1e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00733b1f: jbe 0x733b3c */ if ((fC||fZ)) goto L_00733b3c;
L_00733b21:; BB(0x00733b21);
    /* 00733b21: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00733b23: fld dword ptr [0x971300] */ FPUSH(R_F32((u32)(0x971300u)));
    /* 00733b29: mov byte ptr [ebx + 0x61], 3 */ W8((u32)(r_ebx+0x61u), 0x3u);
    /* 00733b2d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00733b31: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733b35: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00733b37: jmp 0x733c2a */ goto L_00733c2a;
L_00733b3c:; BB(0x00733b3c);
    /* 00733b3c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00733b40: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733b44: mov byte ptr [ebx + 0x61], cl */ W8((u32)(r_ebx+0x61u), (u8)r_ecx);
    /* 00733b47: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00733b49: jmp 0x733c2a */ goto L_00733c2a;
L_00733b4e:; BB(0x00733b4e);
    /* 00733b4e: fld dword ptr [0xa9a894] */ FPUSH(R_F32((u32)(0xa9a894u)));
    /* 00733b54: fld dword ptr [0xa9a894] */ FPUSH(R_F32((u32)(0xa9a894u)));
    /* 00733b5a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00733b5c: movzx eax, byte ptr [ebx + 0x60] */ r_eax = (u32)R8((u32)(r_ebx+0x60u));
    /* 00733b60: movzx edx, byte ptr [ebx + 0x61] */ r_edx = (u32)R8((u32)(r_ebx+0x61u));
    /* 00733b64: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00733b68: fld dword ptr [0xa9a890] */ FPUSH(R_F32((u32)(0xa9a890u)));
    /* 00733b6e: fld dword ptr [0xa9a890] */ FPUSH(R_F32((u32)(0xa9a890u)));
    /* 00733b74: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00733b76: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00733b7a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00733b7d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00733b80: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00733b83: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00733b85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00733b87: jg 0x733b8b */ if ((!fZ&&fS==fO)) goto L_00733b8b;
L_00733b89:; BB(0x00733b89);
    /* 00733b89: mov eax, esi */ r_eax = r_esi;
L_00733b8b:; BB(0x00733b8b);
    /* 00733b8b: mov byte ptr [ebx + 0x60], al */ W8((u32)(r_ebx+0x60u), (u8)r_eax);
    /* 00733b8e: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00733b91: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00733b93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00733b95: jg 0x733b99 */ if ((!fZ&&fS==fO)) goto L_00733b99;
L_00733b97:; BB(0x00733b97);
    /* 00733b97: mov edx, esi */ r_edx = r_esi;
L_00733b99:; BB(0x00733b99);
    /* 00733b99: mov byte ptr [ebx + 0x61], dl */ W8((u32)(r_ebx+0x61u), (u8)r_edx);
    /* 00733b9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733b9e: jne 0x733c14 */ if (!fZ) goto L_00733c14;
L_00733ba0:; BB(0x00733ba0);
    /* 00733ba0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733ba2: jne 0x733bfc */ if (!fZ) goto L_00733bfc;
L_00733ba4:; BB(0x00733ba4);
    /* 00733ba4: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00733ba7: jne 0x733bc1 */ if (!fZ) goto L_00733bc1;
L_00733ba9:; BB(0x00733ba9);
    /* 00733ba9: fld dword ptr [0x971300] */ FPUSH(R_F32((u32)(0x971300u)));
    /* 00733baf: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00733bb3: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733bb7: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00733bbb: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733bbf: jmp 0x733c2a */ goto L_00733c2a;
L_00733bc1:; BB(0x00733bc1);
    /* 00733bc1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00733bc3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00733bc5: and ecx, 0xfffffffd */ {  u32 a = r_ecx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00733bc8: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 00733bcb: call 0x4d4438 */ r_esp -= 4; W32(r_esp, 0x733bd0u); f_004d4438();
    /* 00733bd0: fld dword ptr [0xa9a894] */ FPUSH(R_F32((u32)(0xa9a894u)));
    /* 00733bd6: fld dword ptr [0xa9a890] */ FPUSH(R_F32((u32)(0xa9a890u)));
    /* 00733bdc: fld dword ptr [0x971300] */ FPUSH(R_F32((u32)(0x971300u)));
    /* 00733be2: movsx eax, byte ptr [ebx + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x60u));
    /* 00733be6: movsx edx, byte ptr [ebx + 0x61] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 00733bea: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00733bee: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733bf2: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00733bf6: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733bfa: jmp 0x733c2a */ goto L_00733c2a;
L_00733bfc:; BB(0x00733bfc);
    /* 00733bfc: fld dword ptr [0x971300] */ FPUSH(R_F32((u32)(0x971300u)));
    /* 00733c02: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00733c06: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733c0a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00733c0e: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733c12: jmp 0x733c2a */ goto L_00733c2a;
L_00733c14:; BB(0x00733c14);
    /* 00733c14: fld dword ptr [0x971300] */ FPUSH(R_F32((u32)(0x971300u)));
    /* 00733c1a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00733c1e: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733c22: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00733c26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
L_00733c2a:; BB(0x00733c2a);
    /* 00733c2a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00733c2c: fmul dword ptr [0xaf0358] */ ST(0) = ST(0) * R_F32((u32)(0xaf0358u));
    /* 00733c32: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00733c34: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00733c36: fmul dword ptr [0xaf035c] */ ST(0) = ST(0) * R_F32((u32)(0xaf035cu));
    /* 00733c3c: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00733c3e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00733c40: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00733c42: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 00733c48: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 00733c4e: mov edx, dword ptr [0xaf0350] */ r_edx = R32((u32)(0xaf0350u));
    /* 00733c54: mov eax, dword ptr [0xaf0354] */ r_eax = R32((u32)(0xaf0354u));
    /* 00733c59: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00733c5b: fstp dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0)); FPOP();
    /* 00733c61: fstp dword ptr [ebx + 0x90] */ W_F32((u32)(r_ebx+0x90u), ST(0)); FPOP();
    /* 00733c67: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00733c69: mov dword ptr [ebx + 0x94], 0 */ W32((u32)(r_ebx+0x94u), 0x0u);
    /* 00733c73: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00733c77: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733c7b: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00733c7d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00733c7f: fst dword ptr [ebx + 0x6c] */ W_F32((u32)(r_ebx+0x6cu), ST(0));
    /* 00733c82: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00733c84: mov dword ptr [ebx + 0x98], 0 */ W32((u32)(r_ebx+0x98u), 0x0u);
    /* 00733c8e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00733c92: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733c96: mov dword ptr [ebx + 0x9c], 0x41a00000 */ W32((u32)(r_ebx+0x9cu), 0x41a00000u);
    /* 00733ca0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00733ca2: fchs  */ ST(0) = -ST(0);
    /* 00733ca4: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00733ca6: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00733ca8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00733caa: fst dword ptr [ebx + 0x70] */ W_F32((u32)(r_ebx+0x70u), ST(0));
    /* 00733cad: mov dword ptr [ebx + 0xa0], 0x41700000 */ W32((u32)(r_ebx+0xa0u), 0x41700000u);
    /* 00733cb7: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 00733cbd: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 00733cbf: mov esi, dword ptr [0xaf0350] */ r_esi = R32((u32)(0xaf0350u));
    /* 00733cc5: mov eax, dword ptr [0xaf0354] */ r_eax = R32((u32)(0xaf0354u));
    /* 00733cca: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00733ccc: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00733cce: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00733cd2: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733cd6: fdivp st(4) */ ST(4) = ST(4) / ST(0); FPOP();
    /* 00733cd8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00733cda: fstp dword ptr [ebx + 0xa4] */ W_F32((u32)(r_ebx+0xa4u), ST(0)); FPOP();
    /* 00733ce0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00733ce4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733ce8: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 00733cea: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00733cee: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 00733cf1: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00733cf3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00733cf5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00733cf7: fstp dword ptr [ebx + 0xa8] */ W_F32((u32)(r_ebx+0xa8u), ST(0)); FPOP();
    /* 00733cfd: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00733d01: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00733d04: call 0x719978 */ r_esp -= 4; W32(r_esp, 0x733d09u); f_00719978();
    /* 00733d09: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00733d0d: fdiv dword ptr [0x9712e8] */ ST(0) = ST(0) / R_F32((u32)(0x9712e8u));
    /* 00733d13: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 00733d16: movsx edx, byte ptr [ebx + 0x61] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 00733d1a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00733d1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00733d21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00733d25: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00733d27: fadd dword ptr [0x9712ec] */ ST(0) = ST(0) + R_F32((u32)(0x9712ecu));
    /* 00733d2d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00733d31: call 0x71998c */ r_esp -= 4; W32(r_esp, 0x733d36u); f_0071998c();
    /* 00733d36: fld dword ptr [0x9712e4] */ FPUSH(R_F32((u32)(0x9712e4u)));
    /* 00733d3c: fld dword ptr [ebx + 0xa8] */ FPUSH(R_F32((u32)(r_ebx+0xa8u)));
    /* 00733d42: fld dword ptr [ebx + 0xa4] */ FPUSH(R_F32((u32)(r_ebx+0xa4u)));
    /* 00733d48: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00733d4a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00733d4c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00733d4d: jb 0x733d51 */ if (fC) goto L_00733d51;
L_00733d4f:; BB(0x00733d4f);
    /* 00733d4f: fst st(1) */ ST(1) = ST(0);
L_00733d51:; BB(0x00733d51);
    /* 00733d51: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00733d53: fst dword ptr [ebx + 0xa4] */ W_F32((u32)(r_ebx+0xa4u), ST(0));
    /* 00733d59: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00733d5b: fstp dword ptr [ebx + 0xa8] */ W_F32((u32)(r_ebx+0xa8u), ST(0)); FPOP();
    /* 00733d61: add ebx, 0x64 */ {  u32 a = r_ebx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00733d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00733d65: call 0x4d434c */ r_esp -= 4; W32(r_esp, 0x733d6au); f_004d434c();
    /* 00733d6a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00733d6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00733d6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00733d6f: ret  */ FN_RET(0x00733978); r_esp += 4; return;
}

void f_00733d70(void) /* sub_733D70 */
{
    FN_ENTER(0x00733d70);
    /* 00733d70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00733d71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00733d73: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 00733d76: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733d78: je 0x733d7c */ if (fZ) goto L_00733d7c;
L_00733d7a:; BB(0x00733d7a);
    /* 00733d7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00733d7b: ret  */ FN_RET(0x00733d70); r_esp += 4; return;
L_00733d7c:; BB(0x00733d7c);
    /* 00733d7c: push dword ptr [ebx + 0x54] */ { u32 v = R32((u32)(r_ebx+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00733d7f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x733d84u); f_0068d5a8();
    /* 00733d84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00733d85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733d87: je 0x733dbb */ if (fZ) goto L_00733dbb;
L_00733d89:; BB(0x00733d89);
    /* 00733d89: mov eax, dword ptr [eax + 0x964] */ r_eax = R32((u32)(r_eax+0x964u));
    /* 00733d8f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00733d91: je 0x733da1 */ if (fZ) goto L_00733da1;
L_00733d93:; BB(0x00733d93);
    /* 00733d93: push 0x9f3020 */ { u32 v = 0x9f3020u; r_esp -= 4; W32(r_esp, v); }
    /* 00733d98: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733d9a: call 0x7334d4 */ r_esp -= 4; W32(r_esp, 0x733d9fu); f_007334d4();
    /* 00733d9f: jmp 0x733dad */ goto L_00733dad;
L_00733da1:; BB(0x00733da1);
    /* 00733da1: push 0x9f2f40 */ { u32 v = 0x9f2f40u; r_esp -= 4; W32(r_esp, v); }
    /* 00733da6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733da8: call 0x7334d4 */ r_esp -= 4; W32(r_esp, 0x733dadu); f_007334d4();
L_00733dad:; BB(0x00733dad);
    /* 00733dad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733daf: call 0x733428 */ r_esp -= 4; W32(r_esp, 0x733db4u); f_00733428();
    /* 00733db4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00733db6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733db8: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x733dbbu); call_ind(t); }
L_00733dbb:; BB(0x00733dbb);
    /* 00733dbb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00733dbc: ret  */ FN_RET(0x00733d70); r_esp += 4; return;
}

void f_00733dc0(void) /* sub_733DC0 */
{
    FN_ENTER(0x00733dc0);
    /* 00733dc0: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 00733dc3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733dc5: jne 0x733dc8 */ if (!fZ) goto L_00733dc8;
L_00733dc7:; BB(0x00733dc7);
    /* 00733dc7: ret  */ FN_RET(0x00733dc0); r_esp += 4; return;
L_00733dc8:; BB(0x00733dc8);
    /* 00733dc8: call 0x7335f0 */ r_esp -= 4; W32(r_esp, 0x733dcdu); f_007335f0();
    /* 00733dcd: ret  */ FN_RET(0x00733dc0); r_esp += 4; return;
}

void f_00733dd0(void) /* sub_733DD0 */
{
    FN_ENTER(0x00733dd0);
    /* 00733dd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00733dd1: mov edi, ecx */ r_edi = r_ecx;
    /* 00733dd3: mov ecx, edi */ r_ecx = r_edi;
    /* 00733dd5: call 0x733630 */ r_esp -= 4; W32(r_esp, 0x733ddau); f_00733630();
    /* 00733dda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733ddc: je 0x733de5 */ if (fZ) goto L_00733de5;
L_00733dde:; BB(0x00733dde);
    /* 00733dde: mov ecx, edi */ r_ecx = r_edi;
    /* 00733de0: call 0x733428 */ r_esp -= 4; W32(r_esp, 0x733de5u); f_00733428();
L_00733de5:; BB(0x00733de5);
    /* 00733de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00733de6: ret  */ FN_RET(0x00733dd0); r_esp += 4; return;
}

void f_00733de8(void) /* sub_733DE8 */
{
    FN_ENTER(0x00733de8);
    /* 00733de8: mov dword ptr [0xa9a884], 0x3f800000 */ W32((u32)(0xa9a884u), 0x3f800000u);
    /* 00733df2: mov dword ptr [0xa9a888], 0x41000000 */ W32((u32)(0xa9a888u), 0x41000000u);
    /* 00733dfc: mov dword ptr [0xa9a88c], 0x3fc00000 */ W32((u32)(0xa9a88cu), 0x3fc00000u);
    /* 00733e06: ret  */ FN_RET(0x00733de8); r_esp += 4; return;
}

void f_00733e08(void) /* sub_733E08 */
{
    FN_ENTER(0x00733e08);
    /* 00733e08: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 00733e0b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733e0d: jne 0x733e1f */ if (!fZ) goto L_00733e1f;
L_00733e0f:; BB(0x00733e0f);
    /* 00733e0f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00733e12: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 00733e15: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00733e18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00733e19: call 0x4d434c */ r_esp -= 4; W32(r_esp, 0x733e1eu); f_004d434c();
    /* 00733e1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00733e1f:; BB(0x00733e1f);
    /* 00733e1f: ret  */ FN_RET(0x00733e08); r_esp += 4; return;
}

void f_00733e20(void) /* sub_733E20 */
{
    FN_ENTER(0x00733e20);
    /* 00733e20: mov dword ptr [0xa9a89c], 0x3f800000 */ W32((u32)(0xa9a89cu), 0x3f800000u);
    /* 00733e2a: mov dword ptr [0xa9a8a0], 0x41000000 */ W32((u32)(0xa9a8a0u), 0x41000000u);
    /* 00733e34: mov dword ptr [0xa9a8a4], 0x3fc00000 */ W32((u32)(0xa9a8a4u), 0x3fc00000u);
    /* 00733e3e: ret  */ FN_RET(0x00733e20); r_esp += 4; return;
}

void f_00733e40(void) /* sub_733E40 */
{
    FN_ENTER(0x00733e40);
    /* 00733e40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00733e41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00733e43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00733e45: call 0x733e64 */ r_esp -= 4; W32(r_esp, 0x733e4au); f_00733e64();
    /* 00733e4a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00733e4e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733e50: jne 0x733e56 */ if (!fZ) goto L_00733e56;
L_00733e52:; BB(0x00733e52);
    /* 00733e52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00733e53: ret 4 */ FN_RET(0x00733e40); r_esp += 8; return;
L_00733e56:; BB(0x00733e56);
    /* 00733e56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00733e57: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x733e5cu); f_005c2f74();
    /* 00733e5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00733e5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00733e5e: ret 4 */ FN_RET(0x00733e40); r_esp += 8; return;
}

void f_00733e64(void) /* sub_733E64 */
{
    FN_ENTER(0x00733e64);
    /* 00733e64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00733e65: mov ebp, esp */ r_ebp = r_esp;
    /* 00733e67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00733e69: push 0x8f181c */ { u32 v = 0x8f181cu; r_esp -= 4; W32(r_esp, v); }
    /* 00733e6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00733e74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733e75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00733e7c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00733e7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00733e82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00733e85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00733e88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00733e8b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00733e8e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00733e95: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00733e98: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00733e9b: mov dword ptr [eax], 0xb408d0 */ W32((u32)(r_eax), 0xb408d0u);
    /* 00733ea1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x733ea6u); f_00857e98();
    /* 00733ea6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00733ea9: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00733eac: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x733eb1u); f_00857e98();
    /* 00733eb1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00733eb4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00733eb7: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00733eba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733ebc: je 0x733ed5 */ if (fZ) goto L_00733ed5;
L_00733ebe:; BB(0x00733ebe);
    /* 00733ebe: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00733ec2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00733ec7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00733ecb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00733ece: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_00733ed5:; BB(0x00733ed5);
    /* 00733ed5: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00733ed8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733eda: je 0x733eeb */ if (fZ) goto L_00733eeb;
L_00733edc:; BB(0x00733edc);
    /* 00733edc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x733ee1u); f_007127b0();
    /* 00733ee1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00733ee4: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_00733eeb:; BB(0x00733eeb);
    /* 00733eeb: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00733eee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733ef0: je 0x733f01 */ if (fZ) goto L_00733f01;
L_00733ef2:; BB(0x00733ef2);
    /* 00733ef2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x733ef7u); f_007127b0();
    /* 00733ef7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00733efa: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_00733f01:; BB(0x00733f01);
    /* 00733f01: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00733f08: mov ecx, eax */ r_ecx = r_eax;
    /* 00733f0a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x733f0fu); f_008171e8();
    /* 00733f0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00733f12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00733f19: mov esp, ebp */ r_esp = r_ebp;
    /* 00733f1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733f1c: ret  */ FN_RET(0x00733e64); r_esp += 4; return;
}

void f_00733f20(void) /* sub_733F20 */
{
    FN_ENTER(0x00733f20);
    /* 00733f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00733f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00733f23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00733f25: push 0x8f1838 */ { u32 v = 0x8f1838u; r_esp -= 4; W32(r_esp, v); }
    /* 00733f2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00733f30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733f31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00733f38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00733f3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00733f3e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00733f41: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00733f44: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00733f47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00733f4a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00733f4d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00733f50: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00733f53: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x733f58u); f_008193cc();
    /* 00733f58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00733f5f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00733f62: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00733f65: mov dword ptr [ecx], 0xb408d0 */ W32((u32)(r_ecx), 0xb408d0u);
    /* 00733f6b: mov esi, dword ptr [0x9f30e0] */ r_esi = R32((u32)(0x9f30e0u));
    /* 00733f71: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00733f74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00733f76: mov byte ptr [ecx + 0x1c], al */ W8((u32)(r_ecx+0x1cu), (u8)r_eax);
    /* 00733f79: mov byte ptr [ecx + 0x1d], al */ W8((u32)(r_ecx+0x1du), (u8)r_eax);
    /* 00733f7c: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00733f7f: call 0x734000 */ r_esp -= 4; W32(r_esp, 0x733f84u); f_00734000();
    /* 00733f84: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00733f87: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00733f8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00733f8c: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00733f8f: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00733f92: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00733f95: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00733f98: mov byte ptr [edx + 0x1e], al */ W8((u32)(r_edx+0x1eu), (u8)r_eax);
    /* 00733f9b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00733f9d: mov byte ptr [edx + 0x1f], al */ W8((u32)(r_edx+0x1fu), (u8)r_eax);
    /* 00733fa0: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00733fa3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733fa6: je 0x733fdf */ if (fZ) goto L_00733fdf;
L_00733fa8:; BB(0x00733fa8);
    /* 00733fa8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733fab: je 0x733fdf */ if (fZ) goto L_00733fdf;
L_00733fad:; BB(0x00733fad);
    /* 00733fad: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733fb0: je 0x733fdf */ if (fZ) goto L_00733fdf;
L_00733fb2:; BB(0x00733fb2);
    /* 00733fb2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00733fb3: mov eax, ecx */ r_eax = r_ecx;
    /* 00733fb5: call 0x734091 */ r_esp -= 4; W32(r_esp, 0x733fbau); f_00734091();
    /* 00733fba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00733fbb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00733fbe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00733fc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733fc1: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00733fc4: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x733fc9u); f_00738a40();
    /* 00733fc9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00733fcc: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00733fcf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00733fd2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00733fd9: mov esp, ebp */ r_esp = r_ebp;
    /* 00733fdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733fdc: ret 8 */ FN_RET(0x00733f20); r_esp += 12; return;
L_00733fdf:; BB(0x00733fdf);
    /* 00733fdf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00733fe0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00733fe2: call 0x734079 */ r_esp -= 4; W32(r_esp, 0x733fe7u); f_00734079();
    /* 00733fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00733fe8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00733feb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00733fed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733fee: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00733ff1: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x733ff6u); f_00738a40();
    /* 00733ff6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00733ff9: movsx ecx, byte ptr [eax + 0x1f] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1fu));
    /* 00733ffd: jmp 0x733fb2 */ goto L_00733fb2;
}

