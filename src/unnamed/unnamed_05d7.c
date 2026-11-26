#include "protos.h"

void f_005d7014(void) /* sub_5D7014 */
{
    FN_ENTER(0x005d7014);
    /* 005d7014: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7015: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7017: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7019: push 0x8da704 */ { u32 v = 0x8da704u; r_esp -= 4; W32(r_esp, v); }
    /* 005d701e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d7024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7025: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d702c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d702f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d7032: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d7035: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d7038: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d703b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d703e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d7045: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7048: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d704b: mov dword ptr [eax], 0xb0d61c */ W32((u32)(r_eax), 0xb0d61cu);
    /* 005d7051: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d7056u); f_00857e98();
    /* 005d7056: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d7057: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d705a: mov dword ptr [eax], 0xb0d60c */ W32((u32)(r_eax), 0xb0d60cu);
    /* 005d7060: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d7063: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d706a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d706c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d706d: ret  */ FN_RET(0x005d7014); r_esp += 4; return;
}

void f_005d7070(void) /* sub_5D7070 */
{
    FN_ENTER(0x005d7070);
    /* 005d7070: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7071: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d7073: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d7075: call 0x5d6e1c */ r_esp -= 4; W32(r_esp, 0x5d707au); f_005d6e1c();
    /* 005d707a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d707e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7080: jne 0x5d7086 */ if (!fZ) goto L_005d7086;
L_005d7082:; BB(0x005d7082);
    /* 005d7082: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d7083: ret 4 */ FN_RET(0x005d7070); r_esp += 8; return;
L_005d7086:; BB(0x005d7086);
    /* 005d7086: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7087: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d708cu); f_00857e98();
    /* 005d708c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d708d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d708e: ret 4 */ FN_RET(0x005d7070); r_esp += 8; return;
}

void f_005d7094(void) /* sub_5D7094 */
{
    FN_ENTER(0x005d7094);
    /* 005d7094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7095: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7097: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7099: push 0x8da720 */ { u32 v = 0x8da720u; r_esp -= 4; W32(r_esp, v); }
    /* 005d709e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d70a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d70a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d70ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d70af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d70b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005d70b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005d70b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005d70bb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d70be: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d70c1: mov eax, ecx */ r_eax = r_ecx;
    /* 005d70c3: mov dword ptr [eax], 0xb0d644 */ W32((u32)(r_eax), 0xb0d644u);
    /* 005d70c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d70d0: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5d70d5u); f_008171e8();
    /* 005d70d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d70d8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d70da: jne 0x5d70ec */ if (!fZ) goto L_005d70ec;
L_005d70dc:; BB(0x005d70dc);
    /* 005d70dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d70df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d70e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d70e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d70e9: ret 4 */ FN_RET(0x005d7094); r_esp += 8; return;
L_005d70ec:; BB(0x005d70ec);
    /* 005d70ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d70ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d70f0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d70f5u); f_005c2f74();
    /* 005d70f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d70f6: jmp 0x5d70dc */ goto L_005d70dc;
}

void f_005d70f8(void) /* sub_5D70F8 */
{
    FN_ENTER(0x005d70f8);
    /* 005d70f8: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005d70fb: ret  */ FN_RET(0x005d70f8); r_esp += 4; return;
}

void f_005d70fc(void) /* sub_5D70FC */
{
    FN_ENTER(0x005d70fc);
    /* 005d70fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d70fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d70fe: mov edi, ecx */ r_edi = r_ecx;
    /* 005d7100: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005d7104: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005d7108: mov dword ptr [edi], 0xb0d608 */ W32((u32)(r_edi), 0xb0d608u);
    /* 005d710e: lea edx, [eax + eax + 0x118] */ r_edx = (u32)(r_eax+r_eax+0x118u);
    /* 005d7115: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d7118: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d711a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d711c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d711d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d7122u); f_008581c5();
    /* 005d7122: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 005d7125: mov dword ptr [edi + 0xc], ebx */ W32((u32)(r_edi+0xcu), r_ebx);
    /* 005d7128: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d712a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d712b: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 005d712e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d712f: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7133: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 005d7136: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7137: call 0x7081b4 */ r_esp -= 4; W32(r_esp, 0x5d713cu); f_007081b4();
    /* 005d713c: mov dword ptr [edi + 0x14], 1 */ W32((u32)(r_edi+0x14u), 0x1u);
    /* 005d7143: mov eax, edi */ r_eax = r_edi;
    /* 005d7145: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d7148: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d7149: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d714a: ret 0xc */ FN_RET(0x005d70fc); r_esp += 16; return;
}

void f_005d7150(void) /* sub_5D7150 */
{
    FN_ENTER(0x005d7150);
    /* 005d7150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7151: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7153: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7155: push 0x8da75a */ { u32 v = 0x8da75au; r_esp -= 4; W32(r_esp, v); }
    /* 005d715a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d7160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7161: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d7168: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d716b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d716e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005d7171: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005d7174: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005d7177: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d717a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d717d: mov dword ptr [ecx], 0xb0d60c */ W32((u32)(r_ecx), 0xb0d60cu);
    /* 005d7183: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005d7186: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d7189: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d718c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d7193: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d7196: mov dword ptr [ecx], 0xb0d614 */ W32((u32)(r_ecx), 0xb0d614u);
    /* 005d719c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d719e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005d71a1: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005d71a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d71a6: je 0x5d7251 */ if (fZ) goto L_005d7251;
L_005d71ac:; BB(0x005d71ac);
    /* 005d71ac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d71af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d71b1: je 0x5d7251 */ if (fZ) goto L_005d7251;
L_005d71b7:; BB(0x005d71b7);
    /* 005d71b7: mov eax, edx */ r_eax = r_edx;
    /* 005d71b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d71ba: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d71bfu); f_008581c5();
    /* 005d71bf: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d71c2: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005d71c5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d71c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d71c9: call 0x5c749c */ r_esp -= 4; W32(r_esp, 0x5d71ceu); f_005c749c();
    /* 005d71ce: mov ebx, eax */ r_ebx = r_eax;
    /* 005d71d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d71d3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d71d5: je 0x5d7249 */ if (fZ) goto L_005d7249;
L_005d71d7:; BB(0x005d71d7);
    /* 005d71d7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d71da: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005d71dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d71df: je 0x5d7249 */ if (fZ) goto L_005d7249;
L_005d71e1:; BB(0x005d71e1);
    /* 005d71e1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d71e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d71e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d71e6: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x5d71ebu); f_005b9910();
    /* 005d71eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d71ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005d71f0: jle 0x5d7249 */ if ((fZ||fS!=fO)) goto L_005d7249;
L_005d71f2:; BB(0x005d71f2);
    /* 005d71f2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d71f5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d71f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d71f9: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d71fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d71fd: call 0x7882bc */ r_esp -= 4; W32(r_esp, 0x5d7202u); f_007882bc();
    /* 005d7202: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d7205: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7208: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005d720b: call 0x5b9d58 */ r_esp -= 4; W32(r_esp, 0x5d7210u); f_005b9d58();
    /* 005d7210: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d7217: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d721a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d721d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d7220: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005d7223: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 005d7226: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005d7229: call 0x5ba264 */ r_esp -= 4; W32(r_esp, 0x5d722eu); f_005ba264();
    /* 005d722e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d7231: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005d7234: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005d7237: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005d723a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d7241: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005d7244: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5d7249u); f_008171e8();
L_005d7249:; BB(0x005d7249);
    /* 005d7249: call 0x5c7468 */ r_esp -= 4; W32(r_esp, 0x5d724eu); f_005c7468();
    /* 005d724e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
L_005d7251:; BB(0x005d7251);
    /* 005d7251: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d7254: mov eax, ecx */ r_eax = r_ecx;
    /* 005d7256: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d7259: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d7260: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7262: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7263: ret 8 */ FN_RET(0x005d7150); r_esp += 12; return;
}

void f_005d7268(void) /* sub_5D7268 */
{
    FN_ENTER(0x005d7268);
    /* 005d7268: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7269: mov ebp, esp */ r_ebp = r_esp;
    /* 005d726b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d726d: push 0x8da792 */ { u32 v = 0x8da792u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7272: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d7278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7279: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d7280: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7283: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d7286: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005d7289: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005d728c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005d728f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7292: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d7295: mov dword ptr [ecx], 0xb0d60c */ W32((u32)(r_ecx), 0xb0d60cu);
    /* 005d729b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005d729e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d72a1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d72a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d72ab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d72ae: mov dword ptr [ecx], 0xb0d61c */ W32((u32)(r_ecx), 0xb0d61cu);
    /* 005d72b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d72b6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005d72b9: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005d72bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d72be: je 0x5d7371 */ if (fZ) goto L_005d7371;
L_005d72c4:; BB(0x005d72c4);
    /* 005d72c4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d72c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d72c9: je 0x5d7371 */ if (fZ) goto L_005d7371;
L_005d72cf:; BB(0x005d72cf);
    /* 005d72cf: mov eax, edx */ r_eax = r_edx;
    /* 005d72d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d72d2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d72d7u); f_008581c5();
    /* 005d72d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d72d8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d72db: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005d72de: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d72e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d72e2: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 005d72e7: call 0x5bc0b0 */ r_esp -= 4; W32(r_esp, 0x5d72ecu); f_005bc0b0();
    /* 005d72ec: mov ebx, eax */ r_ebx = r_eax;
    /* 005d72ee: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d72f0: je 0x5d7386 */ if (fZ) goto L_005d7386;
L_005d72f6:; BB(0x005d72f6);
    /* 005d72f6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d72f9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d72fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d72fe: je 0x5d7371 */ if (fZ) goto L_005d7371;
L_005d7300:; BB(0x005d7300);
    /* 005d7300: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d7303: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7304: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 005d7309: call 0x5bc050 */ r_esp -= 4; W32(r_esp, 0x5d730eu); f_005bc050();
    /* 005d730e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7310: jle 0x5d736e */ if ((fZ||fS!=fO)) goto L_005d736e;
L_005d7312:; BB(0x005d7312);
    /* 005d7312: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d7315: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d7318: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7319: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d731c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d731d: call 0x7882bc */ r_esp -= 4; W32(r_esp, 0x5d7322u); f_007882bc();
    /* 005d7322: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d7325: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7328: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005d732b: call 0x5b9d58 */ r_esp -= 4; W32(r_esp, 0x5d7330u); f_005b9d58();
    /* 005d7330: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d7337: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d733a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d733d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d7340: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005d7343: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 005d7346: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005d7349: call 0x5ba264 */ r_esp -= 4; W32(r_esp, 0x5d734eu); f_005ba264();
    /* 005d734e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d7351: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005d7354: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005d7357: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005d735a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d7361: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005d7364: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5d7369u); f_008171e8();
    /* 005d7369: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d736c: jmp 0x5d7371 */ goto L_005d7371;
L_005d736e:; BB(0x005d736e);
    /* 005d736e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
L_005d7371:; BB(0x005d7371);
    /* 005d7371: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d7374: mov eax, ecx */ r_eax = r_ecx;
    /* 005d7376: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d7379: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d7380: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7382: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7383: ret 8 */ FN_RET(0x005d7268); r_esp += 12; return;
L_005d7386:; BB(0x005d7386);
    /* 005d7386: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d7389: jmp 0x5d7371 */ goto L_005d7371;
}

void f_005d738c(void) /* sub_5D738C */
{
    FN_ENTER(0x005d738c);
    /* 005d738c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d738d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d738e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d738f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d7391: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x5d7396u); f_005b7a28();
    /* 005d7396: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d7399: je 0x5d739f */ if (fZ) goto L_005d739f;
L_005d739b:; BB(0x005d739b);
    /* 005d739b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d739c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d739d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d739e: ret  */ FN_RET(0x005d738c); r_esp += 4; return;
L_005d739f:; BB(0x005d739f);
    /* 005d739f: push dword ptr [0x9c27ac] */ { u32 v = R32((u32)(0x9c27acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d73a5: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x5d73aau); f_005b7a44();
    /* 005d73aa: mov ebp, eax */ r_ebp = r_eax;
    /* 005d73ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d73af: mov eax, ebp */ r_eax = r_ebp;
    /* 005d73b1: call 0x5d73e4 */ r_esp -= 4; W32(r_esp, 0x5d73b6u); f_005d73e4();
    /* 005d73b6: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 005d73b9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d73bb: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5d73c0u); f_0082a7d8();
    /* 005d73c0: push dword ptr [0x9c27ac] */ { u32 v = R32((u32)(0x9c27acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d73c6: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x5d73cbu); f_005b9008();
    /* 005d73cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d73cc: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 005d73d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d73d5: call 0x5d7400 */ r_esp -= 4; W32(r_esp, 0x5d73dau); f_005d7400();
    /* 005d73da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d73db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d73dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d73dd: ret  */ FN_RET(0x005d738c); r_esp += 4; return;
}

void f_005d73e4(void) /* sub_5D73E4 */
{
    FN_ENTER(0x005d73e4);
    /* 005d73e4: mov edx, dword ptr [0xa8da18] */ r_edx = R32((u32)(0xa8da18u));
    /* 005d73ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d73ec: je 0x5d73fd */ if (fZ) goto L_005d73fd;
L_005d73ee:; BB(0x005d73ee);
    /* 005d73ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d73f0: je 0x5d73fd */ if (fZ) goto L_005d73fd;
L_005d73f2:; BB(0x005d73f2);
    /* 005d73f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d73f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d73f4: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5d73f9u); f_00788154();
    /* 005d73f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d73fc: ret  */ FN_RET(0x005d73e4); r_esp += 4; return;
L_005d73fd:; BB(0x005d73fd);
    /* 005d73fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d73ff: ret  */ FN_RET(0x005d73e4); r_esp += 4; return;
}

void f_005d7400(void) /* sub_5D7400 */
{
    FN_ENTER(0x005d7400);
    /* 005d7400: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d7401: mov edi, ecx */ r_edi = r_ecx;
    /* 005d7403: mov ecx, edi */ r_ecx = r_edi;
    /* 005d7405: call 0x5d6e98 */ r_esp -= 4; W32(r_esp, 0x5d740au); f_005d6e98();
    /* 005d740a: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005d740d: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d7410: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 005d7413: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7415: je 0x5d742a */ if (fZ) goto L_005d742a;
L_005d7417:; BB(0x005d7417);
    /* 005d7417: mov dword ptr [0xa8da1c], 0 */ W32((u32)(0xa8da1cu), 0x0u);
    /* 005d7421: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005d7424: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7427: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
L_005d742a:; BB(0x005d742a);
    /* 005d742a: mov dword ptr [edi + 0x18], 0 */ W32((u32)(r_edi+0x18u), 0x0u);
    /* 005d7431: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d7432: ret  */ FN_RET(0x005d7400); r_esp += 4; return;
}

void f_005d7434(void) /* sub_5D7434 */
{
    FN_ENTER(0x005d7434);
    /* 005d7434: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d7435: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7436: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7437: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d743a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d743c: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x5d7441u); f_005b7a28();
    /* 005d7441: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7444: je 0x5d744d */ if (fZ) goto L_005d744d;
L_005d7446:; BB(0x005d7446);
    /* 005d7446: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d7449: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d744a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d744b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d744c: ret  */ FN_RET(0x005d7434); r_esp += 4; return;
L_005d744d:; BB(0x005d744d);
    /* 005d744d: push dword ptr [0x9c27ac] */ { u32 v = R32((u32)(0x9c27acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7453: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x5d7458u); f_005b7a44();
    /* 005d7458: mov ebp, eax */ r_ebp = r_eax;
    /* 005d745a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d745d: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 005d7460: mov eax, ebp */ r_eax = r_ebp;
    /* 005d7462: call 0x5d73e4 */ r_esp -= 4; W32(r_esp, 0x5d7467u); f_005d73e4();
    /* 005d7467: mov ecx, eax */ r_ecx = r_eax;
    /* 005d7469: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005d7471: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 005d7475: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d7477: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 005d747b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d747d: mov ebp, eax */ r_ebp = r_eax;
    /* 005d747f: mov esi, ecx */ r_esi = r_ecx;
L_005d7481:; BB(0x005d7481);
    /* 005d7481: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005d7483: jae 0x5d74ff */ if (!fC) goto L_005d74ff;
L_005d7489:; BB(0x005d7489);
    /* 005d7489: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005d748d: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 005d7491: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7492: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d7493: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7494: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005d7498: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005d749c: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5d74a1u); f_0083b124();
    /* 005d74a1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005d74a5: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d74a8: and edx, 0xffffffe0 */ {  u32 a = r_edx; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005d74ab: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d74ad: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005d74b1: cmp edx, 0x4e4a434d */ {  u32 a = r_edx; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d74b7: je 0x5d74e5 */ if (fZ) goto L_005d74e5;
L_005d74b9:; BB(0x005d74b9);
    /* 005d74b9: cmp edx, 0x4e4a544c */ {  u32 a = r_edx; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d74bf: jne 0x5d74ce */ if (!fZ) goto L_005d74ce;
L_005d74c1:; BB(0x005d74c1);
    /* 005d74c1: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 005d74c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d74c6: je 0x5d7522 */ if (fZ) goto L_005d7522;
L_005d74c8:; BB(0x005d74c8);
    /* 005d74c8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005d74cc: jmp 0x5d7481 */ goto L_005d7481;
L_005d74ce:; BB(0x005d74ce);
    /* 005d74ce: cmp edx, 0x4e4d444d */ {  u32 a = r_edx; u32 b = 0x4e4d444du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d74d4: je 0x5d74dc */ if (fZ) goto L_005d74dc;
L_005d74d6:; BB(0x005d74d6);
    /* 005d74d6: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005d74da: jmp 0x5d7481 */ goto L_005d7481;
L_005d74dc:; BB(0x005d74dc);
    /* 005d74dc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005d74e0: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 005d74e3: jmp 0x5d7481 */ goto L_005d7481;
L_005d74e5:; BB(0x005d74e5);
    /* 005d74e5: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d74e8: jl 0x5d74f0 */ if ((fS!=fO)) goto L_005d74f0;
L_005d74ea:; BB(0x005d74ea);
    /* 005d74ea: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005d74ee: jmp 0x5d7481 */ goto L_005d7481;
L_005d74f0:; BB(0x005d74f0);
    /* 005d74f0: mov edx, ebp */ r_edx = r_ebp;
    /* 005d74f2: mov dword ptr [ebx + edx*4 + 0x2c], eax */ W32((u32)(r_ebx+r_edx*4+0x2cu), r_eax);
    /* 005d74f6: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005d74fa: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d74fd: jmp 0x5d7481 */ goto L_005d7481;
L_005d74ff:; BB(0x005d74ff);
    /* 005d74ff: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005d7503: push dword ptr [0x9c27ac] */ { u32 v = R32((u32)(0x9c27acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7509: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x5d750eu); f_005b9008();
    /* 005d750e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d750f: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 005d7516: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d7518: call 0x5d7400 */ r_esp -= 4; W32(r_esp, 0x5d751du); f_005d7400();
    /* 005d751d: jmp 0x5d7446 */ goto L_005d7446;
L_005d7522:; BB(0x005d7522);
    /* 005d7522: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 005d7525: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d7527: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005d752b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d752e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7530: je 0x5d7564 */ if (fZ) goto L_005d7564;
L_005d7532:; BB(0x005d7532);
    /* 005d7532: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005d7536: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005d7539: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d753b: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 005d753e: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d7540: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
L_005d7544:; BB(0x005d7544);
    /* 005d7544: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d7546: mov dword ptr [edx + eax], 0xa8d9dc */ W32((u32)(r_edx+r_eax), 0xa8d9dcu);
    /* 005d754d: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 005d7550: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d7553: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d7556: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005d7559: jb 0x5d7544 */ if (fC) goto L_005d7544;
L_005d755b:; BB(0x005d755b);
    /* 005d755b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005d755f: jmp 0x5d7481 */ goto L_005d7481;
L_005d7564:; BB(0x005d7564);
    /* 005d7564: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005d7568: jmp 0x5d7481 */ goto L_005d7481;
}

void f_005d751e(void)
{
    FN_ENTER(0x005d751e);
    /* 005d751e: and al, 0xff */ {  u32 a = (u8)r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    UNSUP(0x005d7520, "falls out of decoded code");
}

void f_005d7570(void) /* sub_5D7570 */
{
    FN_ENTER(0x005d7570);
    /* 005d7570: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 005d7573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7575: jne 0x5d7596 */ if (!fZ) goto L_005d7596;
L_005d7577:; BB(0x005d7577);
    /* 005d7577: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005d757b: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005d757e: mov dword ptr [ecx + 0x18], 1 */ W32((u32)(r_ecx+0x18u), 0x1u);
    /* 005d7585: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005d7588: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d758b: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 005d758e: mov eax, 1 */ r_eax = 0x1u;
    /* 005d7593: ret 4 */ FN_RET(0x005d7570); r_esp += 8; return;
L_005d7596:; BB(0x005d7596);
    /* 005d7596: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7598: ret 4 */ FN_RET(0x005d7570); r_esp += 8; return;
}

void f_005d759c(void) /* sub_5D759C */
{
    FN_ENTER(0x005d759c);
    /* 005d759c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d759d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d759e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d759f: mov edi, ecx */ r_edi = r_ecx;
    /* 005d75a1: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 005d75a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d75a7: je 0x5d75fd */ if (fZ) goto L_005d75fd;
L_005d75a9:; BB(0x005d75a9);
    /* 005d75a9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d75ac: jne 0x5d75d2 */ if (!fZ) goto L_005d75d2;
L_005d75ae:; BB(0x005d75ae);
    /* 005d75ae: mov edx, dword ptr [0xa8da10] */ r_edx = R32((u32)(0xa8da10u));
    /* 005d75b4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005d75b7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d75b9: je 0x5d75c2 */ if (fZ) goto L_005d75c2;
L_005d75bb:; BB(0x005d75bb);
    /* 005d75bb: mov eax, 1 */ r_eax = 0x1u;
    /* 005d75c0: jmp 0x5d75c4 */ goto L_005d75c4;
L_005d75c2:; BB(0x005d75c2);
    /* 005d75c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d75c4:; BB(0x005d75c4);
    /* 005d75c4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d75c7: jne 0x5d764c */ if (!fZ) goto L_005d764c;
L_005d75cd:; BB(0x005d75cd);
    /* 005d75cd: jmp 0x5d7650 */ goto L_005d7650;
L_005d75d2:; BB(0x005d75d2);
    /* 005d75d2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d75d5: jne 0x5d764c */ if (!fZ) goto L_005d764c;
L_005d75d7:; BB(0x005d75d7);
    /* 005d75d7: mov eax, dword ptr [0xa8da14] */ r_eax = R32((u32)(0xa8da14u));
    /* 005d75dc: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005d75df: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d75e2: je 0x5d75eb */ if (fZ) goto L_005d75eb;
L_005d75e4:; BB(0x005d75e4);
    /* 005d75e4: mov eax, 1 */ r_eax = 0x1u;
    /* 005d75e9: jmp 0x5d75ed */ goto L_005d75ed;
L_005d75eb:; BB(0x005d75eb);
    /* 005d75eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d75ed:; BB(0x005d75ed);
    /* 005d75ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d75f0: jne 0x5d764c */ if (!fZ) goto L_005d764c;
L_005d75f2:; BB(0x005d75f2);
    /* 005d75f2: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 005d75f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d75fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d75fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d75fc: ret  */ FN_RET(0x005d759c); r_esp += 4; return;
L_005d75fd:; BB(0x005d75fd);
    /* 005d75fd: mov esi, dword ptr [0xa8da10] */ r_esi = R32((u32)(0xa8da10u));
    /* 005d7603: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7605: je 0x5d764c */ if (fZ) goto L_005d764c;
L_005d7607:; BB(0x005d7607);
    /* 005d7607: mov eax, dword ptr [0xa8da14] */ r_eax = R32((u32)(0xa8da14u));
    /* 005d760c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d760e: je 0x5d764c */ if (fZ) goto L_005d764c;
L_005d7610:; BB(0x005d7610);
    /* 005d7610: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 005d7613: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005d7616: shl ebp, 0x11 */ { u32 c = (17u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 005d7619: add ebp, dword ptr [0xa8da0c] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa8da0cu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d761f: je 0x5d7645 */ if (fZ) goto L_005d7645;
L_005d7621:; BB(0x005d7621);
    /* 005d7621: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7622: mov ecx, esi */ r_ecx = r_esi;
    /* 005d7624: call 0x5d7570 */ r_esp -= 4; W32(r_esp, 0x5d7629u); f_005d7570();
    /* 005d7629: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d762c: jne 0x5d7645 */ if (!fZ) goto L_005d7645;
L_005d762e:; BB(0x005d762e);
    /* 005d762e: mov dword ptr [esi + 0x24], ebp */ W32((u32)(r_esi+0x24u), r_ebp);
    /* 005d7631: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7633: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005d7636: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 005d7639: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005d763c: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 005d763f: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005d7642: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
L_005d7645:; BB(0x005d7645);
    /* 005d7645: mov dword ptr [edi + 0x20], 2 */ W32((u32)(r_edi+0x20u), 0x2u);
L_005d764c:; BB(0x005d764c);
    /* 005d764c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d764d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d764e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d764f: ret  */ FN_RET(0x005d759c); r_esp += 4; return;
L_005d7650:; BB(0x005d7650);
    /* 005d7650: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005d7653: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 005d7656: mov edx, dword ptr [0xa8da10] */ r_edx = R32((u32)(0xa8da10u));
    /* 005d765c: mov ebp, dword ptr [edx + 0x30] */ r_ebp = R32((u32)(r_edx+0x30u));
    /* 005d765f: mov dword ptr [edi + 0x30], ebp */ W32((u32)(r_edi+0x30u), r_ebp);
    /* 005d7662: mov esi, dword ptr [0xa8da10] */ r_esi = R32((u32)(0xa8da10u));
    /* 005d7668: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 005d766b: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 005d766e: mov eax, dword ptr [0xa8da10] */ r_eax = R32((u32)(0xa8da10u));
    /* 005d7673: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 005d7676: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005d7679: mov eax, dword ptr [0xa8da10] */ r_eax = R32((u32)(0xa8da10u));
    /* 005d767e: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005d7681: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 005d7684: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 005d7687: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 005d768a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d768c: je 0x5d76a8 */ if (fZ) goto L_005d76a8;
L_005d768e:; BB(0x005d768e);
    /* 005d768e: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7691: mov ecx, dword ptr [0xa8da14] */ r_ecx = R32((u32)(0xa8da14u));
    /* 005d7697: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7698: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
    /* 005d769f: call 0x5d76b4 */ r_esp -= 4; W32(r_esp, 0x5d76a4u); f_005d76b4();
    /* 005d76a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d76a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d76a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d76a7: ret  */ FN_RET(0x005d759c); r_esp += 4; return;
L_005d76a8:; BB(0x005d76a8);
    /* 005d76a8: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 005d76af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d76b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d76b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d76b2: ret  */ FN_RET(0x005d759c); r_esp += 4; return;
}

void f_005d76b4(void) /* sub_5D76B4 */
{
    FN_ENTER(0x005d76b4);
    /* 005d76b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d76b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d76b6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d76b8: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005d76bc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d76be: je 0x5d76d3 */ if (fZ) goto L_005d76d3;
L_005d76c0:; BB(0x005d76c0);
    /* 005d76c0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d76c4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d76c6: call 0x5d7570 */ r_esp -= 4; W32(r_esp, 0x5d76cbu); f_005d7570();
    /* 005d76cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d76ce: jne 0x5d76d3 */ if (!fZ) goto L_005d76d3;
L_005d76d0:; BB(0x005d76d0);
    /* 005d76d0: mov dword ptr [ebp + 0x24], ebx */ W32((u32)(r_ebp+0x24u), r_ebx);
L_005d76d3:; BB(0x005d76d3);
    /* 005d76d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d76d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d76d5: ret 8 */ FN_RET(0x005d76b4); r_esp += 12; return;
}

void f_005d76d8(void) /* sub_5D76D8 */
{
    FN_ENTER(0x005d76d8);
    /* 005d76d8: call 0x5e562c */ r_esp -= 4; W32(r_esp, 0x5d76ddu); f_005e562c();
    /* 005d76dd: call 0x5d76e8 */ r_esp -= 4; W32(r_esp, 0x5d76e2u); f_005d76e8();
    /* 005d76e2: call 0x5d7728 */ r_esp -= 4; W32(r_esp, 0x5d76e7u); f_005d7728();
    /* 005d76e7: ret  */ FN_RET(0x005d76d8); r_esp += 4; return;
}

void f_005d76e8(void) /* sub_5D76E8 */
{
    FN_ENTER(0x005d76e8);
    /* 005d76e8: push dword ptr [0xa8da0c] */ { u32 v = R32((u32)(0xa8da0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d76ee: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d76f3u); f_00857e98();
    /* 005d76f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d76f4: mov ecx, dword ptr [0xa8da10] */ r_ecx = R32((u32)(0xa8da10u));
    /* 005d76fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d76fc: je 0x5d7704 */ if (fZ) goto L_005d7704;
L_005d76fe:; BB(0x005d76fe);
    /* 005d76fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7700: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d7702: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5d7704u); call_ind(t); }
L_005d7704:; BB(0x005d7704);
    /* 005d7704: mov ecx, dword ptr [0xa8da14] */ r_ecx = R32((u32)(0xa8da14u));
    /* 005d770a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d770c: je 0x5d7714 */ if (fZ) goto L_005d7714;
L_005d770e:; BB(0x005d770e);
    /* 005d770e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7710: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d7712: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5d7714u); call_ind(t); }
L_005d7714:; BB(0x005d7714);
    /* 005d7714: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7716: mov dword ptr [0xa8da14], eax */ W32((u32)(0xa8da14u), r_eax);
    /* 005d771b: mov dword ptr [0xa8da10], eax */ W32((u32)(0xa8da10u), r_eax);
    /* 005d7720: mov dword ptr [0xa8da0c], eax */ W32((u32)(0xa8da0cu), r_eax);
    /* 005d7725: ret  */ FN_RET(0x005d76e8); r_esp += 4; return;
}

void f_005d7728(void) /* sub_5D7728 */
{
    FN_ENTER(0x005d7728);
    /* 005d7728: push dword ptr [0xa8da18] */ { u32 v = R32((u32)(0xa8da18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d772e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d7733u); f_00857e98();
    /* 005d7733: mov dword ptr [0xa8da18], 0 */ W32((u32)(0xa8da18u), 0x0u);
    /* 005d773d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d773e: ret  */ FN_RET(0x005d7728); r_esp += 4; return;
}

void f_005d7740(void) /* sub_5D7740 */
{
    FN_ENTER(0x005d7740);
    /* 005d7740: push dword ptr [0xa8d9fc] */ { u32 v = R32((u32)(0xa8d9fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7746: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d774bu); f_00857e98();
    /* 005d774b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d774c: mov ecx, dword ptr [0xa8da04] */ r_ecx = R32((u32)(0xa8da04u));
    /* 005d7752: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7754: je 0x5d775c */ if (fZ) goto L_005d775c;
L_005d7756:; BB(0x005d7756);
    /* 005d7756: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7758: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d775a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5d775cu); call_ind(t); }
L_005d775c:; BB(0x005d775c);
    /* 005d775c: mov ecx, dword ptr [0xa8da00] */ r_ecx = R32((u32)(0xa8da00u));
    /* 005d7762: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7764: je 0x5d776c */ if (fZ) goto L_005d776c;
L_005d7766:; BB(0x005d7766);
    /* 005d7766: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7768: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d776a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5d776cu); call_ind(t); }
L_005d776c:; BB(0x005d776c);
    /* 005d776c: mov ecx, dword ptr [0xa8da08] */ r_ecx = R32((u32)(0xa8da08u));
    /* 005d7772: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7774: je 0x5d777d */ if (fZ) goto L_005d777d;
L_005d7776:; BB(0x005d7776);
    /* 005d7776: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7778: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5d777du); f_004066a8();
L_005d777d:; BB(0x005d777d);
    /* 005d777d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d777f: mov dword ptr [0xa8d9f8], eax */ W32((u32)(0xa8d9f8u), r_eax);
    /* 005d7784: mov dword ptr [0xa8da08], eax */ W32((u32)(0xa8da08u), r_eax);
    /* 005d7789: mov dword ptr [0xa8da04], eax */ W32((u32)(0xa8da04u), r_eax);
    /* 005d778e: mov dword ptr [0xa8da00], eax */ W32((u32)(0xa8da00u), r_eax);
    /* 005d7793: mov dword ptr [0xa8d9fc], eax */ W32((u32)(0xa8d9fcu), r_eax);
    /* 005d7798: ret  */ FN_RET(0x005d7740); r_esp += 4; return;
}

void f_005d779c(void) /* sub_5D779C */
{
    FN_ENTER(0x005d779c);
    /* 005d779c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d779d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d779f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d77a1: push 0x8da7b8 */ { u32 v = 0x8da7b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d77a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d77ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d77ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d77b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d77b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d77ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d77bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d77c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d77c3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d77c5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005d77cc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d77d1u); f_005caba4();
    /* 005d77d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d77d2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d77d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d77d7: je 0x5d77fc */ if (fZ) goto L_005d77fc;
L_005d77d9:; BB(0x005d77d9);
    /* 005d77d9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005d77e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d77e7: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d77ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d77f0: call 0x5d780c */ r_esp -= 4; W32(r_esp, 0x5d77f5u); f_005d780c();
    /* 005d77f5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005d77fc:; BB(0x005d77fc);
    /* 005d77fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d77ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d7806: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7808: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7809: ret  */ FN_RET(0x005d779c); r_esp += 4; return;
}

void f_005d780c(void) /* sub_5D780C */
{
    FN_ENTER(0x005d780c);
    /* 005d780c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d780d: mov edi, ecx */ r_edi = r_ecx;
    /* 005d780f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7813: mov ecx, edi */ r_ecx = r_edi;
    /* 005d7815: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5d781au); f_008193cc();
    /* 005d781a: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005d781e: mov dword ptr [edi], 0xb0d644 */ W32((u32)(r_edi), 0xb0d644u);
    /* 005d7824: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7829: mov edx, dword ptr [0x9c27b0] */ r_edx = R32((u32)(0x9c27b0u));
    /* 005d782f: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005d7832: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005d7836: mov eax, edi */ r_eax = r_edi;
    /* 005d7838: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d7839: ret 4 */ FN_RET(0x005d780c); r_esp += 8; return;
}

void f_005d7820(void)
{
    FN_ENTER(0x005d7820);
    /* 005d7820: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7821: salc  */ UNSUP(0x005d7821, "salc ");
    /* 005d7822: mov al, 0 */ r_eax = (r_eax & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 005d7824: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7829: mov edx, dword ptr [0x9c27b0] */ r_edx = R32((u32)(0x9c27b0u));
    /* 005d782f: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005d7832: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005d7836: mov eax, edi */ r_eax = r_edi;
    /* 005d7838: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d7839: ret 4 */ FN_RET(0x005d7820); r_esp += 8; return;
}

void f_005d783c(void) /* sub_5D783C */
{
    FN_ENTER(0x005d783c);
    /* 005d783c: mov eax, dword ptr [0xa8da00] */ r_eax = R32((u32)(0xa8da00u));
    /* 005d7841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7843: je 0x5d785c */ if (fZ) goto L_005d785c;
L_005d7845:; BB(0x005d7845);
    /* 005d7845: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 005d7848: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d784a: je 0x5d785c */ if (fZ) goto L_005d785c;
L_005d784c:; BB(0x005d784c);
    /* 005d784c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005d784f: cmp edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d7853: je 0x5d785f */ if (fZ) goto L_005d785f;
L_005d7855:; BB(0x005d7855);
    /* 005d7855: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 005d7858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d785a: jne 0x5d784c */ if (!fZ) goto L_005d784c;
L_005d785c:; BB(0x005d785c);
    /* 005d785c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d785e: ret  */ FN_RET(0x005d783c); r_esp += 4; return;
L_005d785f:; BB(0x005d785f);
    /* 005d785f: mov eax, 1 */ r_eax = 0x1u;
    /* 005d7864: ret  */ FN_RET(0x005d783c); r_esp += 4; return;
}

void f_005d7868(void) /* sub_5D7868 */
{
    FN_ENTER(0x005d7868);
    /* 005d7868: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7869: mov ebp, esp */ r_ebp = r_esp;
    /* 005d786b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d786d: push 0x8da7e0 */ { u32 v = 0x8da7e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7872: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d7878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7879: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d7880: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7883: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d7886: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005d7889: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005d788c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005d788f: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005d7892: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7894: je 0x5d78fe */ if (fZ) goto L_005d78fe;
L_005d7896:; BB(0x005d7896);
    /* 005d7896: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d7898: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d789du); f_005d2890();
    /* 005d789d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d789f: je 0x5d78fe */ if (fZ) goto L_005d78fe;
L_005d78a1:; BB(0x005d78a1);
    /* 005d78a1: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 005d78a5: movsx esi, word ptr [eax + 6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 005d78a9: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d78ac: je 0x5d78fe */ if (fZ) goto L_005d78fe;
L_005d78ae:; BB(0x005d78ae);
    /* 005d78ae: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d78b1: je 0x5d78fe */ if (fZ) goto L_005d78fe;
L_005d78b3:; BB(0x005d78b3);
    /* 005d78b3: movzx ecx, byte ptr [ebx] */ r_ecx = (u32)R8((u32)(r_ebx));
    /* 005d78b6: movsx eax, word ptr [ecx*2 + 0x92c53c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x92c53cu));
    /* 005d78be: mov ebx, dword ptr [0xa8da04] */ r_ebx = R32((u32)(0xa8da04u));
    /* 005d78c4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d78c6: movsx edx, word ptr [ecx*2 + 0x92c534] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x92c534u));
    /* 005d78ce: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d78d1: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d78d3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d78d6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d78d8: je 0x5d78fe */ if (fZ) goto L_005d78fe;
L_005d78da:; BB(0x005d78da);
    /* 005d78da: mov ecx, dword ptr [0xa8d9fc] */ r_ecx = R32((u32)(0xa8d9fcu));
    /* 005d78e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d78e2: je 0x5d78fe */ if (fZ) goto L_005d78fe;
L_005d78e4:; BB(0x005d78e4);
    /* 005d78e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d78e6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005d78e9:; BB(0x005d78e9);
    /* 005d78e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d78ec: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 005d78ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d78f1: je 0x5d791a */ if (fZ) goto L_005d791a;
L_005d78f3:; BB(0x005d78f3);
    /* 005d78f3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d78f6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d78f9: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d78fc: jl 0x5d78e9 */ if ((fS!=fO)) goto L_005d78e9;
L_005d78fe:; BB(0x005d78fe);
    /* 005d78fe: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d7901: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d7904: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7907: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005d790c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d790f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d7916: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7918: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7919: ret  */ FN_RET(0x005d7868); r_esp += 4; return;
L_005d791a:; BB(0x005d791a);
    /* 005d791a: mov dword ptr [ecx + eax*4], 1 */ W32((u32)(r_ecx+r_eax*4), 0x1u);
    /* 005d7921: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7923: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005d792a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d792fu); f_005caba4();
    /* 005d792f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d7930: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d7933: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7935: je 0x5d7966 */ if (fZ) goto L_005d7966;
L_005d7937:; BB(0x005d7937);
    /* 005d7937: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005d793e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d7945: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d7948: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d794b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d794e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d7951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7952: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7953: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7954: push dword ptr [0xa8da04] */ { u32 v = R32((u32)(0xa8da04u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d795a: call 0x5d7980 */ r_esp -= 4; W32(r_esp, 0x5d795fu); f_005d7980();
    /* 005d795f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005d7966:; BB(0x005d7966);
    /* 005d7966: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d7969: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d796c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d796f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7972: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d7975: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d797c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d797e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d797f: ret  */ FN_RET(0x005d7868); r_esp += 4; return;
}

void f_005d7980(void) /* sub_5D7980 */
{
    FN_ENTER(0x005d7980);
    /* 005d7980: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7981: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d7983: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7987: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d7989: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5d798eu); f_008193cc();
    /* 005d798e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005d7992: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d7996: mov dword ptr [ebx], 0xb0d634 */ W32((u32)(r_ebx), 0xb0d634u);
    /* 005d799c: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 005d799f: mov dword ptr [ebx + 0x20], 1 */ W32((u32)(r_ebx+0x20u), 0x1u);
    /* 005d79a6: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 005d79a9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005d79ad: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 005d79b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d79b2: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 005d79b5: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005d79b8: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 005d79bb: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 005d79be: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 005d79c1: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 005d79c4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d79c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d79c7: ret 0x10 */ FN_RET(0x005d7980); r_esp += 20; return;
}

void f_005d79cc(void) /* sub_5D79CC */
{
    FN_ENTER(0x005d79cc);
    /* 005d79cc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d79cf: mov eax, dword ptr [0xa8da00] */ r_eax = R32((u32)(0xa8da00u));
    /* 005d79d4: mov edx, dword ptr [0xa8da04] */ r_edx = R32((u32)(0xa8da04u));
    /* 005d79da: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005d79dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d79df: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005d79e3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
L_005d79e7:; BB(0x005d79e7);
    /* 005d79e7: mov ecx, dword ptr [esp + eax*4] */ r_ecx = R32((u32)(r_esp+r_eax*4));
    /* 005d79ea: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d79ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d79ef: je 0x5d7a04 */ if (fZ) goto L_005d7a04;
L_005d79f1:; BB(0x005d79f1);
    /* 005d79f1: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005d79f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d79f6: je 0x5d7a04 */ if (fZ) goto L_005d7a04;
L_005d79f8:; BB(0x005d79f8);
    /* 005d79f8: cmp edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d79fb: je 0x5d7a0d */ if (fZ) goto L_005d7a0d;
L_005d79fd:; BB(0x005d79fd);
    /* 005d79fd: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005d7a00: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7a02: jne 0x5d79f8 */ if (!fZ) goto L_005d79f8;
L_005d7a04:; BB(0x005d7a04);
    /* 005d7a04: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d7a07: jl 0x5d79e7 */ if ((fS!=fO)) goto L_005d79e7;
L_005d7a09:; BB(0x005d7a09);
    /* 005d7a09: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d7a0c: ret  */ FN_RET(0x005d79cc); r_esp += 4; return;
L_005d7a0d:; BB(0x005d7a0d);
    /* 005d7a0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7a0f: je 0x5d7a17 */ if (fZ) goto L_005d7a17;
L_005d7a11:; BB(0x005d7a11);
    /* 005d7a11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a13: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d7a15: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5d7a17u); call_ind(t); }
L_005d7a17:; BB(0x005d7a17);
    /* 005d7a17: mov eax, dword ptr [0xa8d9fc] */ r_eax = R32((u32)(0xa8d9fcu));
    /* 005d7a1c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005d7a20: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 005d7a27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d7a2a: ret  */ FN_RET(0x005d79cc); r_esp += 4; return;
}

void f_005d7a2c(void) /* sub_5D7A2C */
{
    FN_ENTER(0x005d7a2c);
    /* 005d7a2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a2e: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005d7a32: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005d7a36: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7a38: je 0x5d7a63 */ if (fZ) goto L_005d7a63;
L_005d7a3a:; BB(0x005d7a3a);
    /* 005d7a3a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7a3c: je 0x5d7a63 */ if (fZ) goto L_005d7a63;
L_005d7a3e:; BB(0x005d7a3e);
    /* 005d7a3e: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 005d7a43: mov ecx, dword ptr [0xa8da08] */ r_ecx = R32((u32)(0xa8da08u));
    /* 005d7a49: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 005d7a4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a4d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5d7a52u); f_005b8610();
    /* 005d7a52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a54: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 005d7a56: mov ecx, dword ptr [0xa8da08] */ r_ecx = R32((u32)(0xa8da08u));
    /* 005d7a5c: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x5d7a61u); f_005b8624();
    /* 005d7a61: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_005d7a63:; BB(0x005d7a63);
    /* 005d7a63: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d7a64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d7a65: ret  */ FN_RET(0x005d7a2c); r_esp += 4; return;
}

void f_005d7a68(void) /* sub_5D7A68 */
{
    FN_ENTER(0x005d7a68);
    /* 005d7a68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a6b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005d7a6f: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005d7a73: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 005d7a77: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7a79: je 0x5d7ab1 */ if (fZ) goto L_005d7ab1;
L_005d7a7b:; BB(0x005d7a7b);
    /* 005d7a7b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7a7d: je 0x5d7ab1 */ if (fZ) goto L_005d7ab1;
L_005d7a7f:; BB(0x005d7a7f);
    /* 005d7a7f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7a81: je 0x5d7ab1 */ if (fZ) goto L_005d7ab1;
L_005d7a83:; BB(0x005d7a83);
    /* 005d7a83: mov ecx, dword ptr [0xa8da08] */ r_ecx = R32((u32)(0xa8da08u));
    /* 005d7a89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a8b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5d7a90u); f_005b8610();
    /* 005d7a90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a92: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 005d7a94: mov ecx, dword ptr [0xa8da08] */ r_ecx = R32((u32)(0xa8da08u));
    /* 005d7a9a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x5d7a9fu); f_005b8624();
    /* 005d7a9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7aa1: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 005d7aa3: mov ecx, dword ptr [0xa8da08] */ r_ecx = R32((u32)(0xa8da08u));
    /* 005d7aa9: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x5d7aaeu); f_005b8638();
    /* 005d7aae: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
L_005d7ab1:; BB(0x005d7ab1);
    /* 005d7ab1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7ab2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d7ab3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d7ab4: ret  */ FN_RET(0x005d7a68); r_esp += 4; return;
}

void f_005d7ab8(void) /* sub_5D7AB8 */
{
    FN_ENTER(0x005d7ab8);
    /* 005d7ab8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ab9: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005d7abd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7abf: je 0x5d7ad2 */ if (fZ) goto L_005d7ad2;
L_005d7ac1:; BB(0x005d7ac1);
    /* 005d7ac1: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7ac5: mov ecx, dword ptr [0xa8da08] */ r_ecx = R32((u32)(0xa8da08u));
    /* 005d7acb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5d7ad0u); f_005b8610();
    /* 005d7ad0: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_005d7ad2:; BB(0x005d7ad2);
    /* 005d7ad2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d7ad3: ret  */ FN_RET(0x005d7ab8); r_esp += 4; return;
}

void f_005d7ad4(void) /* sub_5D7AD4 */
{
    FN_ENTER(0x005d7ad4);
    /* 005d7ad4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ad5: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005d7ad9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7adb: je 0x5d7aec */ if (fZ) goto L_005d7aec;
L_005d7add:; BB(0x005d7add);
    /* 005d7add: mov ecx, dword ptr [0xa8da08] */ r_ecx = R32((u32)(0xa8da08u));
    /* 005d7ae3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ae5: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x5d7aeau); f_005b8624();
    /* 005d7aea: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_005d7aec:; BB(0x005d7aec);
    /* 005d7aec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d7aed: ret  */ FN_RET(0x005d7ad4); r_esp += 4; return;
}

void f_005d7af0(void) /* sub_5D7AF0 */
{
    FN_ENTER(0x005d7af0);
    /* 005d7af0: mov eax, dword ptr [0xa8da00] */ r_eax = R32((u32)(0xa8da00u));
    /* 005d7af5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7af7: je 0x5d7b10 */ if (fZ) goto L_005d7b10;
L_005d7af9:; BB(0x005d7af9);
    /* 005d7af9: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 005d7afc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7afe: je 0x5d7b10 */ if (fZ) goto L_005d7b10;
L_005d7b00:; BB(0x005d7b00);
    /* 005d7b00: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005d7b03: cmp edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7b07: je 0x5d7b13 */ if (fZ) goto L_005d7b13;
L_005d7b09:; BB(0x005d7b09);
    /* 005d7b09: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 005d7b0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7b0e: jne 0x5d7b00 */ if (!fZ) goto L_005d7b00;
L_005d7b10:; BB(0x005d7b10);
    /* 005d7b10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7b12: ret  */ FN_RET(0x005d7af0); r_esp += 4; return;
L_005d7b13:; BB(0x005d7b13);
    /* 005d7b13: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d7b16: ret  */ FN_RET(0x005d7af0); r_esp += 4; return;
}

void f_005d7b18(void) /* sub_5D7B18 */
{
    FN_ENTER(0x005d7b18);
    /* 005d7b18: call 0x5d7b20 */ r_esp -= 4; W32(r_esp, 0x5d7b1du); f_005d7b20();
    /* 005d7b1d: ret  */ FN_RET(0x005d7b18); r_esp += 4; return;
}

void f_005d7b20(void) /* sub_5D7B20 */
{
    FN_ENTER(0x005d7b20);
    /* 005d7b20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b21: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x5d7b26u); f_005d7b60();
    /* 005d7b26: mov edx, dword ptr [0xa8da04] */ r_edx = R32((u32)(0xa8da04u));
    /* 005d7b2c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7b2e: je 0x5d7b5b */ if (fZ) goto L_005d7b5b;
L_005d7b30:; BB(0x005d7b30);
    /* 005d7b30: mov eax, dword ptr [0xa8da00] */ r_eax = R32((u32)(0xa8da00u));
    /* 005d7b35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7b37: je 0x5d7b5b */ if (fZ) goto L_005d7b5b;
L_005d7b39:; BB(0x005d7b39);
    /* 005d7b39: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 005d7b3c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7b3e: je 0x5d7b5b */ if (fZ) goto L_005d7b5b;
L_005d7b40:; BB(0x005d7b40);
    /* 005d7b40: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005d7b42: mov ecx, esi */ r_ecx = r_esi;
    /* 005d7b44: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d7b47u); call_ind(t); }
    /* 005d7b47: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 005d7b4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7b4c: jne 0x5d7b5b */ if (!fZ) goto L_005d7b5b;
L_005d7b4e:; BB(0x005d7b4e);
    /* 005d7b4e: push dword ptr [0xa8da00] */ { u32 v = R32((u32)(0xa8da00u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7b54: mov ecx, esi */ r_ecx = r_esi;
    /* 005d7b56: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x5d7b5bu); f_008172d4();
L_005d7b5b:; BB(0x005d7b5b);
    /* 005d7b5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d7b5c: ret  */ FN_RET(0x005d7b20); r_esp += 4; return;
}

void f_005d7b60(void) /* sub_5D7B60 */
{
    FN_ENTER(0x005d7b60);
    /* 005d7b60: mov ecx, dword ptr [0xa8da14] */ r_ecx = R32((u32)(0xa8da14u));
    /* 005d7b66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7b68: je 0x5d7b6f */ if (fZ) goto L_005d7b6f;
L_005d7b6a:; BB(0x005d7b6a);
    /* 005d7b6a: call 0x5d7b80 */ r_esp -= 4; W32(r_esp, 0x5d7b6fu); f_005d7b80();
L_005d7b6f:; BB(0x005d7b6f);
    /* 005d7b6f: mov ecx, dword ptr [0xa8da10] */ r_ecx = R32((u32)(0xa8da10u));
    /* 005d7b75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7b77: je 0x5d7b7e */ if (fZ) goto L_005d7b7e;
L_005d7b79:; BB(0x005d7b79);
    /* 005d7b79: call 0x5d7b80 */ r_esp -= 4; W32(r_esp, 0x5d7b7eu); f_005d7b80();
L_005d7b7e:; BB(0x005d7b7e);
    /* 005d7b7e: ret  */ FN_RET(0x005d7b60); r_esp += 4; return;
}

void f_005d7b80(void) /* sub_5D7B80 */
{
    FN_ENTER(0x005d7b80);
    /* 005d7b80: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 005d7b83: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7b86: je 0x5d7b9e */ if (fZ) goto L_005d7b9e;
L_005d7b88:; BB(0x005d7b88);
    /* 005d7b88: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7b8b: jne 0x5d7b93 */ if (!fZ) goto L_005d7b93;
L_005d7b8d:; BB(0x005d7b8d);
    /* 005d7b8d: call 0x5d7ba4 */ r_esp -= 4; W32(r_esp, 0x5d7b92u); f_005d7ba4();
    /* 005d7b92: ret  */ FN_RET(0x005d7b80); r_esp += 4; return;
L_005d7b93:; BB(0x005d7b93);
    /* 005d7b93: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d7b96: jne 0x5d7ba3 */ if (!fZ) goto L_005d7ba3;
L_005d7b98:; BB(0x005d7b98);
    /* 005d7b98: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d7b9a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5d7b9du); call_ind(t); }
    /* 005d7b9d: ret  */ FN_RET(0x005d7b80); r_esp += 4; return;
L_005d7b9e:; BB(0x005d7b9e);
    /* 005d7b9e: call 0x5d7bfc */ r_esp -= 4; W32(r_esp, 0x5d7ba3u); f_005d7bfc();
L_005d7ba3:; BB(0x005d7ba3);
    /* 005d7ba3: ret  */ FN_RET(0x005d7b80); r_esp += 4; return;
}

void f_005d7ba4(void) /* sub_5D7BA4 */
{
    FN_ENTER(0x005d7ba4);
    /* 005d7ba4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ba5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d7ba7: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7baa: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5d7bafu); f_0086dc94();
    /* 005d7baf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d7bb0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d7bb3: je 0x5d7bca */ if (fZ) goto L_005d7bca;
L_005d7bb5:; BB(0x005d7bb5);
    /* 005d7bb5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7bb8: je 0x5d7bcc */ if (fZ) goto L_005d7bcc;
L_005d7bba:; BB(0x005d7bba);
    /* 005d7bba: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 005d7bbd: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d7bc0: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_005d7bc3:; BB(0x005d7bc3);
    /* 005d7bc3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d7bc5: call 0x5d7bd8 */ r_esp -= 4; W32(r_esp, 0x5d7bcau); f_005d7bd8();
L_005d7bca:; BB(0x005d7bca);
    /* 005d7bca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d7bcb: ret  */ FN_RET(0x005d7ba4); r_esp += 4; return;
L_005d7bcc:; BB(0x005d7bcc);
    /* 005d7bcc: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 005d7bcf: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d7bd2: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 005d7bd5: jmp 0x5d7bc3 */ goto L_005d7bc3;
}

void f_005d7bd8(void) /* sub_5D7BD8 */
{
    FN_ENTER(0x005d7bd8);
    /* 005d7bd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7bd9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d7bdb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d7bdd: call 0x5d6e98 */ r_esp -= 4; W32(r_esp, 0x5d7be2u); f_005d6e98();
    /* 005d7be2: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 005d7be5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7be7: je 0x5d7bf2 */ if (fZ) goto L_005d7bf2;
L_005d7be9:; BB(0x005d7be9);
    /* 005d7be9: mov dword ptr [ebx + 0x18], 1 */ W32((u32)(r_ebx+0x18u), 0x1u);
    /* 005d7bf0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d7bf1: ret  */ FN_RET(0x005d7bd8); r_esp += 4; return;
L_005d7bf2:; BB(0x005d7bf2);
    /* 005d7bf2: mov dword ptr [ebx + 0x18], 4 */ W32((u32)(r_ebx+0x18u), 0x4u);
    /* 005d7bf9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d7bfa: ret  */ FN_RET(0x005d7bd8); r_esp += 4; return;
}

void f_005d7bfc(void) /* sub_5D7BFC */
{
    FN_ENTER(0x005d7bfc);
    /* 005d7bfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7bfd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d7bff: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005d7c02: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d7c04: jne 0x5d7c23 */ if (!fZ) goto L_005d7c23;
L_005d7c06:; BB(0x005d7c06);
    /* 005d7c06: mov eax, dword ptr [0xa8da1c] */ r_eax = R32((u32)(0xa8da1cu));
    /* 005d7c0b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d7c0e: je 0x5d7c45 */ if (fZ) goto L_005d7c45;
L_005d7c10:; BB(0x005d7c10);
    /* 005d7c10: mov dword ptr [0xa8da1c], 1 */ W32((u32)(0xa8da1cu), 0x1u);
    /* 005d7c1a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005d7c1d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d7c20: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
L_005d7c23:; BB(0x005d7c23);
    /* 005d7c23: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7c26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d7c28: call 0x5d7c48 */ r_esp -= 4; W32(r_esp, 0x5d7c2du); f_005d7c48();
    /* 005d7c2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7c2f: je 0x5d7c45 */ if (fZ) goto L_005d7c45;
L_005d7c31:; BB(0x005d7c31);
    /* 005d7c31: push dword ptr [0xa8da18] */ { u32 v = R32((u32)(0xa8da18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7c37: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d7c39: call 0x5d7c88 */ r_esp -= 4; W32(r_esp, 0x5d7c3eu); f_005d7c88();
    /* 005d7c3e: mov dword ptr [ebp + 0x18], 2 */ W32((u32)(r_ebp+0x18u), 0x2u);
L_005d7c45:; BB(0x005d7c45);
    /* 005d7c45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7c46: ret  */ FN_RET(0x005d7bfc); r_esp += 4; return;
}

void f_005d7c48(void) /* sub_5D7C48 */
{
    FN_ENTER(0x005d7c48);
    /* 005d7c48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c49: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d7c4b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005d7c4e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d7c51: je 0x5d7c5a */ if (fZ) goto L_005d7c5a;
L_005d7c53:; BB(0x005d7c53);
    /* 005d7c53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_005d7c56:; BB(0x005d7c56);
    /* 005d7c56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7c57: ret 4 */ FN_RET(0x005d7c48); r_esp += 8; return;
L_005d7c5a:; BB(0x005d7c5a);
    /* 005d7c5a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d7c5c: call 0x5d6e98 */ r_esp -= 4; W32(r_esp, 0x5d7c61u); f_005d6e98();
    /* 005d7c61: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7c65: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7c68: call 0x86dab0 */ r_esp -= 4; W32(r_esp, 0x5d7c6du); f_0086dab0();
    /* 005d7c6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7c70: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005d7c73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7c75: je 0x5d7c56 */ if (fZ) goto L_005d7c56;
L_005d7c77:; BB(0x005d7c77);
    /* 005d7c77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c78: call 0x86dc64 */ r_esp -= 4; W32(r_esp, 0x5d7c7du); f_0086dc64();
    /* 005d7c7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d7c7e: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 005d7c81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7c84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7c85: ret 4 */ FN_RET(0x005d7c48); r_esp += 8; return;
}

void f_005d7c88(void) /* sub_5D7C88 */
{
    FN_ENTER(0x005d7c88);
    /* 005d7c88: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7c8c: push dword ptr [ecx + 0x10] */ { u32 v = R32((u32)(r_ecx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7c8f: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7c92: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5d7c97u); f_0086db64();
    /* 005d7c97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d7c9a: ret 4 */ FN_RET(0x005d7c88); r_esp += 8; return;
}

void f_005d7ca0(void) /* sub_5D7CA0 */
{
    FN_ENTER(0x005d7ca0);
    /* 005d7ca0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ca1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d7ca3: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7ca7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7cab: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7caf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d7cb1: call 0x5d70fc */ r_esp -= 4; W32(r_esp, 0x5d7cb6u); f_005d70fc();
    /* 005d7cb6: mov dword ptr [ebx], 0xb0d624 */ W32((u32)(r_ebx), 0xb0d624u);
    /* 005d7cbc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7cbe: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 005d7cc1: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 005d7cc4: mov eax, ebx */ r_eax = r_ebx;
    /* 005d7cc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d7cc7: ret 0xc */ FN_RET(0x005d7ca0); r_esp += 16; return;
}

void f_005d7ccc(void) /* sub_5D7CCC */
{
    FN_ENTER(0x005d7ccc);
    /* 005d7ccc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ccd: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7ccf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7cd1: push 0x8da83e */ { u32 v = 0x8da83eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7cd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d7cdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7cdd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d7ce4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7ce7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d7cea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d7ced: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d7cf0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d7cf3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7cf8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005d7cff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d7d04u); f_008581c5();
    /* 005d7d04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d7d05: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d7d08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7d0a: je 0x5d7ef4 */ if (fZ) goto L_005d7ef4;
L_005d7d10:; BB(0x005d7d10);
    /* 005d7d10: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005d7d17: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d7d1e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d7d21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d7d23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d26: push 0x9c2794 */ { u32 v = 0x9c2794u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d2b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d2d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5d7d32u); f_005b7a84();
    /* 005d7d32: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d7d35: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005d7d3c:; BB(0x005d7d3c);
    /* 005d7d3c: mov dword ptr [0xa8da08], eax */ W32((u32)(0xa8da08u), r_eax);
    /* 005d7d41: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d7d48: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005d7d4f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d51: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d7d56u); f_005caba4();
    /* 005d7d56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d7d57: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d7d5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7d5c: je 0x5d7eed */ if (fZ) goto L_005d7eed;
L_005d7d62:; BB(0x005d7d62);
    /* 005d7d62: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005d7d69: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d7d70: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d7d73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d75: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5d7d7au); f_008193cc();
    /* 005d7d7a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d7d7d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005d7d84:; BB(0x005d7d84);
    /* 005d7d84: mov dword ptr [0xa8da00], eax */ W32((u32)(0xa8da00u), r_eax);
    /* 005d7d89: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d7d90: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005d7d97: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d99: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d7d9eu); f_005caba4();
    /* 005d7d9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d7d9f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d7da2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7da4: je 0x5d7ee6 */ if (fZ) goto L_005d7ee6;
L_005d7daa:; BB(0x005d7daa);
    /* 005d7daa: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 005d7db1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005d7db8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d7dbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7dbd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5d7dc2u); f_008193cc();
    /* 005d7dc2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d7dc5: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005d7dcc:; BB(0x005d7dcc);
    /* 005d7dcc: mov dword ptr [0xa8da04], eax */ W32((u32)(0xa8da04u), r_eax);
    /* 005d7dd1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d7dd8: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7dda: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d7ddfu); f_008581c5();
    /* 005d7ddf: mov edx, eax */ r_edx = r_eax;
    /* 005d7de1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7de4: mov dword ptr [0xa8d9fc], edx */ W32((u32)(0xa8d9fcu), r_edx);
    /* 005d7dea: mov dword ptr [0xa8d9f8], 0 */ W32((u32)(0xa8d9f8u), 0x0u);
    /* 005d7df4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7df6: je 0x5d7ecf */ if (fZ) goto L_005d7ecf;
L_005d7dfc:; BB(0x005d7dfc);
    /* 005d7dfc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7dfe: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005d7e00: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e06: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005d7e09: mov ecx, dword ptr [0xa8d9fc] */ r_ecx = R32((u32)(0xa8d9fcu));
    /* 005d7e0f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005d7e12: mov ebx, dword ptr [0xa8d9fc] */ r_ebx = R32((u32)(0xa8d9fcu));
    /* 005d7e18: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 005d7e1b: mov esi, dword ptr [0xa8d9fc] */ r_esi = R32((u32)(0xa8d9fcu));
    /* 005d7e21: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 005d7e24: mov edi, dword ptr [0xa8d9fc] */ r_edi = R32((u32)(0xa8d9fcu));
    /* 005d7e2a: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 005d7e2d: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e33: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005d7e36: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e3c: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005d7e3f: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e45: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005d7e48: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e4e: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005d7e51: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e57: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005d7e5a: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e60: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005d7e63: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e69: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 005d7e6c: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e72: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 005d7e75: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e7b: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005d7e7e: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e84: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 005d7e87: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e8d: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005d7e90: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e96: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 005d7e99: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7e9f: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 005d7ea2: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7ea8: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 005d7eab: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7eb1: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 005d7eb4: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7eba: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 005d7ebd: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7ec3: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 005d7ec6: mov edx, dword ptr [0xa8d9fc] */ r_edx = R32((u32)(0xa8d9fcu));
    /* 005d7ecc: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
L_005d7ecf:; BB(0x005d7ecf);
    /* 005d7ecf: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d7ed2: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d7ed5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d7ed8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d7edb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d7ee2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7ee4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7ee5: ret  */ FN_RET(0x005d7ccc); r_esp += 4; return;
L_005d7ee6:; BB(0x005d7ee6);
    /* 005d7ee6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d7ee8: jmp 0x5d7dcc */ goto L_005d7dcc;
L_005d7eed:; BB(0x005d7eed);
    /* 005d7eed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d7eef: jmp 0x5d7d84 */ goto L_005d7d84;
L_005d7ef4:; BB(0x005d7ef4);
    /* 005d7ef4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d7ef6: jmp 0x5d7d3c */ goto L_005d7d3c;
}

void f_005d7efc(void) /* sub_5D7EFC */
{
    FN_ENTER(0x005d7efc);
    /* 005d7efc: call 0x5d8034 */ r_esp -= 4; W32(r_esp, 0x5d7f01u); f_005d8034();
    /* 005d7f01: call 0x5d7f0c */ r_esp -= 4; W32(r_esp, 0x5d7f06u); f_005d7f0c();
    /* 005d7f06: call 0x5e5ad0 */ r_esp -= 4; W32(r_esp, 0x5d7f0bu); f_005e5ad0();
    /* 005d7f0b: ret  */ FN_RET(0x005d7efc); r_esp += 4; return;
}

void f_005d7f0c(void) /* sub_5D7F0C */
{
    FN_ENTER(0x005d7f0c);
    /* 005d7f0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f0d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7f0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f11: push 0x8da87e */ { u32 v = 0x8da87eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d7f1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d7f24: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7f27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d7f2a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005d7f2d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005d7f30: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005d7f33: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f35: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005d7f3c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d7f41u); f_008581c5();
    /* 005d7f41: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d7f44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7f47: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d7f4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7f4c: je 0x5d8028 */ if (fZ) goto L_005d8028;
L_005d7f52:; BB(0x005d7f52);
    /* 005d7f52: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005d7f59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d7f60: mov ecx, eax */ r_ecx = r_eax;
    /* 005d7f62: push 0x1bd */ { u32 v = 0x1bdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f67: push 0xb5 */ { u32 v = 0xb5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f6c: push dword ptr [0x9c27a4] */ { u32 v = R32((u32)(0x9c27a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7f72: call 0x5d7ca0 */ r_esp -= 4; W32(r_esp, 0x5d7f77u); f_005d7ca0();
    /* 005d7f77: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d7f7a: mov dword ptr [eax], 0xb0d654 */ W32((u32)(r_eax), 0xb0d654u);
    /* 005d7f80: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d7f82: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 005d7f85: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_005d7f88:; BB(0x005d7f88);
    /* 005d7f88: mov dword ptr [0xa8da14], eax */ W32((u32)(0xa8da14u), r_eax);
    /* 005d7f8d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d7f94: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005d7f9b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f9d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d7fa2u); f_008581c5();
    /* 005d7fa2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d7fa5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7fa8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d7fab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7fad: je 0x5d8021 */ if (fZ) goto L_005d8021;
L_005d7faf:; BB(0x005d7faf);
    /* 005d7faf: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005d7fb6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d7fbd: mov ecx, eax */ r_ecx = r_eax;
    /* 005d7fbf: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fc4: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fc9: push dword ptr [0x9c27a8] */ { u32 v = R32((u32)(0x9c27a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d7fcf: call 0x5d7ca0 */ r_esp -= 4; W32(r_esp, 0x5d7fd4u); f_005d7ca0();
    /* 005d7fd4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d7fd7: mov dword ptr [eax], 0xb0d62c */ W32((u32)(r_eax), 0xb0d62cu);
    /* 005d7fdd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d7fdf: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 005d7fe2: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005d7fe5: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005d7fe8: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 005d7feb: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005d7fee: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 005d7ff1: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 005d7ff4: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_005d7ff7:; BB(0x005d7ff7);
    /* 005d7ff7: mov dword ptr [0xa8da10], eax */ W32((u32)(0xa8da10u), r_eax);
    /* 005d7ffc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8003: push 0x300000 */ { u32 v = 0x300000u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8008: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d800du); f_008581c5();
    /* 005d800d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d800e: mov dword ptr [0xa8da0c], eax */ W32((u32)(0xa8da0cu), r_eax);
    /* 005d8013: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8016: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d801d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d801f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8020: ret  */ FN_RET(0x005d7f0c); r_esp += 4; return;
L_005d8021:; BB(0x005d8021);
    /* 005d8021: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d8023: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d8026: jmp 0x5d7ff7 */ goto L_005d7ff7;
L_005d8028:; BB(0x005d8028);
    /* 005d8028: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d802a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d802d: jmp 0x5d7f88 */ goto L_005d7f88;
}

