#include "protos.h"

void f_005f7000(void) /* sub_5F7000 */
{
    FN_ENTER(0x005f7000);
    /* 005f7000: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7001: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f7003: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f7005: call 0x5f7024 */ r_esp -= 4; W32(r_esp, 0x5f700au); f_005f7024();
    /* 005f700a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f700e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7010: jne 0x5f7016 */ if (!fZ) goto L_005f7016;
L_005f7012:; BB(0x005f7012);
    /* 005f7012: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f7013: ret 4 */ FN_RET(0x005f7000); r_esp += 8; return;
L_005f7016:; BB(0x005f7016);
    /* 005f7016: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7017: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f701cu); f_005c2f74();
    /* 005f701c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f701d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f701e: ret 4 */ FN_RET(0x005f7000); r_esp += 8; return;
}

void f_005f7024(void) /* sub_5F7024 */
{
    FN_ENTER(0x005f7024);
    /* 005f7024: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7025: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7027: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7029: push 0x8dd804 */ { u32 v = 0x8dd804u; r_esp -= 4; W32(r_esp, v); }
    /* 005f702e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f7034: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7035: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f703c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f703f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f7042: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f7045: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f7048: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f704b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f704e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7051: mov dword ptr [ecx], 0xb18000 */ W32((u32)(r_ecx), 0xb18000u);
    /* 005f7057: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f705e: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f7063u); f_005f8fe8();
    /* 005f7063: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7066: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f706d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f706f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7070: ret  */ FN_RET(0x005f7024); r_esp += 4; return;
}

void f_005f7074(void) /* sub_5F7074 */
{
    FN_ENTER(0x005f7074);
    /* 005f7074: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7075: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7077: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7079: push 0x8dd838 */ { u32 v = 0x8dd838u; r_esp -= 4; W32(r_esp, v); }
    /* 005f707e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f7084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7085: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f708c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f708f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f7092: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f7095: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f7098: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f709b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f709e: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005f70a1: mov eax, ecx */ r_eax = r_ecx;
    /* 005f70a3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f70a6: mov dword ptr [eax], 0xb0cd38 */ W32((u32)(r_eax), 0xb0cd38u);
    /* 005f70ac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f70b3: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x5f70b8u); f_005e3e40();
    /* 005f70b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f70bb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f70bd: jne 0x5f70cf */ if (!fZ) goto L_005f70cf;
L_005f70bf:; BB(0x005f70bf);
    /* 005f70bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f70c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f70c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f70cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f70cc: ret 4 */ FN_RET(0x005f7074); r_esp += 8; return;
L_005f70cf:; BB(0x005f70cf);
    /* 005f70cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f70d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f70d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f70d8u); f_005c2f74();
    /* 005f70d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f70d9: jmp 0x5f70bf */ goto L_005f70bf;
}

void f_005f70dc(void) /* sub_5F70DC */
{
    FN_ENTER(0x005f70dc);
    /* 005f70dc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005f70e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f70e2: je 0x5f70f3 */ if (fZ) goto L_005f70f3;
L_005f70e4:; BB(0x005f70e4);
    /* 005f70e4: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 005f70ea: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f70ed: mov dword ptr [edx + 0x244], eax */ W32((u32)(r_edx+0x244u), r_eax);
L_005f70f3:; BB(0x005f70f3);
    /* 005f70f3: ret  */ FN_RET(0x005f70dc); r_esp += 4; return;
}

void f_005f70f4(void) /* sub_5F70F4 */
{
    FN_ENTER(0x005f70f4);
    /* 005f70f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f70f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f70f6: mov esi, ecx */ r_esi = r_ecx;
    /* 005f70f8: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005f70fa: mov edi, dword ptr [esi + 0xfc] */ r_edi = R32((u32)(r_esi+0xfcu));
    /* 005f7100: mov eax, dword ptr [esi + 0x244] */ r_eax = R32((u32)(r_esi+0x244u));
    /* 005f7106: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f7109: mov dword ptr [esi + 0x244], eax */ W32((u32)(r_esi+0x244u), r_eax);
    /* 005f710f: mov ecx, esi */ r_ecx = r_esi;
    /* 005f7111: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5f7116u); f_005e6334();
    /* 005f7116: lea eax, [esi + 0x248] */ r_eax = (u32)(r_esi+0x248u);
    /* 005f711c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f711d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f711f: mov ecx, esi */ r_ecx = r_esi;
    /* 005f7121: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f7126u); f_005e83c8();
    /* 005f7126: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7128: mov eax, dword ptr [esi + 0x198] */ r_eax = R32((u32)(r_esi+0x198u));
    /* 005f712e: mov edx, dword ptr [esi + 0x244] */ r_edx = R32((u32)(r_esi+0x244u));
    /* 005f7134: mov dword ptr [esi + 0xfc], eax */ W32((u32)(r_esi+0xfcu), r_eax);
    /* 005f713a: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005f713d: mov dword ptr [esi + 0x244], edx */ W32((u32)(r_esi+0x244u), r_edx);
    /* 005f7143: mov ecx, esi */ r_ecx = r_esi;
    /* 005f7145: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5f714au); f_005e6334();
    /* 005f714a: lea eax, [esi + 0x254] */ r_eax = (u32)(r_esi+0x254u);
    /* 005f7150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7151: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7153: mov ecx, esi */ r_ecx = r_esi;
    /* 005f7155: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f715au); f_005e83c8();
    /* 005f715a: mov dword ptr [esi + 0xfc], edi */ W32((u32)(r_esi+0xfcu), r_edi);
    /* 005f7160: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f7161: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f7162: ret  */ FN_RET(0x005f70f4); r_esp += 4; return;
}

void f_005f7164(void) /* sub_5F7164 */
{
    FN_ENTER(0x005f7164);
    /* 005f7164: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f7169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f716c: jne 0x5f7193 */ if (!fZ) goto L_005f7193;
L_005f716e:; BB(0x005f716e);
    /* 005f716e: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 005f7174: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7176: jne 0x5f7193 */ if (!fZ) goto L_005f7193;
L_005f7178:; BB(0x005f7178);
    /* 005f7178: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f717a: je 0x5f7184 */ if (fZ) goto L_005f7184;
L_005f717c:; BB(0x005f717c);
    /* 005f717c: mov ecx, dword ptr [ecx + 0x1ac] */ r_ecx = R32((u32)(r_ecx+0x1acu));
    /* 005f7182: jmp 0x5f718a */ goto L_005f718a;
L_005f7184:; BB(0x005f7184);
    /* 005f7184: mov ecx, dword ptr [ecx + 0x19c] */ r_ecx = R32((u32)(r_ecx+0x19cu));
L_005f718a:; BB(0x005f718a);
    /* 005f718a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f718c: je 0x5f7193 */ if (fZ) goto L_005f7193;
L_005f718e:; BB(0x005f718e);
    /* 005f718e: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5f7193u); f_00831758();
L_005f7193:; BB(0x005f7193);
    /* 005f7193: ret  */ FN_RET(0x005f7164); r_esp += 4; return;
}

void f_005f7194(void) /* sub_5F7194 */
{
    FN_ENTER(0x005f7194);
    /* 005f7194: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7195: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7197: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7199: push 0x8dd860 */ { u32 v = 0x8dd860u; r_esp -= 4; W32(r_esp, v); }
    /* 005f719e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f71a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f71a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f71ac: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f71af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f71b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f71b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f71b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f71bb: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 005f71c1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f71c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f71c6: je 0x5f7291 */ if (fZ) goto L_005f7291;
L_005f71cc:; BB(0x005f71cc);
    /* 005f71cc: mov eax, dword ptr [edx + 0x8b8] */ r_eax = R32((u32)(r_edx+0x8b8u));
    /* 005f71d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f71d4: jne 0x5f7291 */ if (!fZ) goto L_005f7291;
L_005f71da:; BB(0x005f71da);
    /* 005f71da: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f71dd: mov dword ptr [edx + 0x8b8], eax */ W32((u32)(r_edx+0x8b8u), r_eax);
    /* 005f71e3: mov eax, ecx */ r_eax = r_ecx;
    /* 005f71e5: mov edx, dword ptr [eax + 0x244] */ r_edx = R32((u32)(r_eax+0x244u));
    /* 005f71eb: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f71ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f71f0: je 0x5f7245 */ if (fZ) goto L_005f7245;
L_005f71f2:; BB(0x005f71f2);
    /* 005f71f2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005f71f9: mov dword ptr [eax + 0x244], edx */ W32((u32)(r_eax+0x244u), r_edx);
    /* 005f71ff: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7201: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f7206u); f_005caba4();
    /* 005f7206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f7207: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f720a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f720c: je 0x5f7235 */ if (fZ) goto L_005f7235;
L_005f720e:; BB(0x005f720e);
    /* 005f720e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005f7215: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f721c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f721f: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7221: push 0x5f70dc */ { u32 v = 0x5f70dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7226: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7227: mov ecx, eax */ r_ecx = r_eax;
    /* 005f7229: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5f722eu); f_005e5b88();
    /* 005f722e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005f7235:; BB(0x005f7235);
    /* 005f7235: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f723c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f723f: mov edx, dword ptr [eax + 0x244] */ r_edx = R32((u32)(r_eax+0x244u));
L_005f7245:; BB(0x005f7245);
    /* 005f7245: mov ecx, eax */ r_ecx = r_eax;
    /* 005f7247: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7249: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005f724b: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f724e: mov dword ptr [ecx + 0x244], edx */ W32((u32)(r_ecx+0x244u), r_edx);
    /* 005f7254: lea eax, [ecx + 0x248] */ r_eax = (u32)(r_ecx+0x248u);
    /* 005f725a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f725c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f725d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f725e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f725f: call dword ptr [ebx + 0xc8] */ { u32 t = R32((u32)(r_ebx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f7265u); call_ind(t); }
    /* 005f7265: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7268: je 0x5f72a5 */ if (fZ) goto L_005f72a5;
L_005f726a:; BB(0x005f726a);
    /* 005f726a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f726d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f726f: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 005f7275: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005f7277: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005f727a: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
    /* 005f7280: lea ebx, [ecx + 0x254] */ r_ebx = (u32)(r_ecx+0x254u);
    /* 005f7286: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f7288: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7289: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f728a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f728b: call dword ptr [esi + 0xc8] */ { u32 t = R32((u32)(r_esi+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f7291u); call_ind(t); }
L_005f7291:; BB(0x005f7291);
    /* 005f7291: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7294: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7297: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f729a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f72a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005f72a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f72a4: ret  */ FN_RET(0x005f7194); r_esp += 4; return;
L_005f72a5:; BB(0x005f72a5);
    /* 005f72a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f72a8: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 005f72ae: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005f72b0: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005f72b3: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
    /* 005f72b9: lea ebx, [ecx + 0x254] */ r_ebx = (u32)(r_ecx+0x254u);
    /* 005f72bf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f72c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f72c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f72c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f72c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f72c5: call dword ptr [esi + 0xc8] */ { u32 t = R32((u32)(r_esi+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f72cbu); call_ind(t); }
    /* 005f72cb: jmp 0x5f7291 */ goto L_005f7291;
}

void f_005f72d0(void) /* sub_5F72D0 */
{
    FN_ENTER(0x005f72d0);
    /* 005f72d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f72d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f72d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f72d5: push 0x8dd888 */ { u32 v = 0x8dd888u; r_esp -= 4; W32(r_esp, v); }
    /* 005f72da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f72e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f72e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f72e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f72eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f72ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f72f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f72f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f72f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f72fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f72fc: je 0x5f7353 */ if (fZ) goto L_005f7353;
L_005f72fe:; BB(0x005f72fe);
    /* 005f72fe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f7305: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 005f730a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f730fu); f_005caba4();
    /* 005f730f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f7310: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f7313: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7315: je 0x5f734f */ if (fZ) goto L_005f734f;
L_005f7317:; BB(0x005f7317);
    /* 005f7317: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f731e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f7325: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f7328: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f732b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f732c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7332: call 0x5f7364 */ r_esp -= 4; W32(r_esp, 0x5f7337u); f_005f7364();
    /* 005f7337: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f733a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f7341:; BB(0x005f7341);
    /* 005f7341: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7344: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f734b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f734d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f734e: ret  */ FN_RET(0x005f72d0); r_esp += 4; return;
L_005f734f:; BB(0x005f734f);
    /* 005f734f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7351: jmp 0x5f7341 */ goto L_005f7341;
L_005f7353:; BB(0x005f7353);
    /* 005f7353: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7355: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7358: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f735f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7361: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7362: ret  */ FN_RET(0x005f72d0); r_esp += 4; return;
}

void f_005f7364(void) /* sub_5F7364 */
{
    FN_ENTER(0x005f7364);
    /* 005f7364: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f7365: mov edi, ecx */ r_edi = r_ecx;
    /* 005f7367: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f736b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f736f: mov ecx, edi */ r_ecx = r_edi;
    /* 005f7371: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f7376u); f_005f9384();
    /* 005f7376: mov edx, dword ptr [edi + 0x190] */ r_edx = R32((u32)(r_edi+0x190u));
    /* 005f737c: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005f7382: mov dword ptr [edi], 0xb18000 */ W32((u32)(r_edi), 0xb18000u);
    /* 005f7388: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f738b: mov dword ptr [edi + 0x234], 0x5f74f8 */ W32((u32)(r_edi+0x234u), 0x5f74f8u);
    /* 005f7395: mov dword ptr [edi + 0x190], edx */ W32((u32)(r_edi+0x190u), r_edx);
    /* 005f739b: or eax, 0x203 */ {  u32 a = r_eax; u32 b = 0x203u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f73a0: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005f73a6: mov dword ptr [edi + 0x23c], 0x5f7530 */ W32((u32)(r_edi+0x23cu), 0x5f7530u);
    /* 005f73b0: mov eax, edi */ r_eax = r_edi;
    /* 005f73b2: mov dword ptr [edi + 0x238], 0x5f73d4 */ W32((u32)(r_edi+0x238u), 0x5f73d4u);
    /* 005f73bc: mov dword ptr [edi + 0x208], 0x41200000 */ W32((u32)(r_edi+0x208u), 0x41200000u);
    /* 005f73c6: mov dword ptr [edi + 0x244], 0 */ W32((u32)(r_edi+0x244u), 0x0u);
    /* 005f73d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f73d1: ret 8 */ FN_RET(0x005f7364); r_esp += 12; return;
}

void f_005f73d4(void) /* sub_5F73D4 */
{
    FN_ENTER(0x005f73d4);
    /* 005f73d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f73d5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f73d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f73d9: push 0x8dd8b0 */ { u32 v = 0x8dd8b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f73de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f73e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f73e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f73ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f73ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f73f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f73f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f73f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f73fb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005f73fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f7400: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7402: je 0x5f7491 */ if (fZ) goto L_005f7491;
L_005f7408:; BB(0x005f7408);
    /* 005f7408: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f740f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7411: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f7416u); f_005caba4();
    /* 005f7416: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f7417: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f741a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f741c: je 0x5f74a7 */ if (fZ) goto L_005f74a7;
L_005f7422:; BB(0x005f7422);
    /* 005f7422: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f7429: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f7430: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005f7433: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005f7436: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 005f7439: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005f743c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f743f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7440: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7441: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7442: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f7443: call 0x5f74ac */ r_esp -= 4; W32(r_esp, 0x5f7448u); f_005f74ac();
    /* 005f7448: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f744b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f7452:; BB(0x005f7452);
    /* 005f7452: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f7459: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005f745c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005f745f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f7462: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005f7465: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7466: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7467: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7468: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f7469: call 0x5e407c */ r_esp -= 4; W32(r_esp, 0x5f746eu); f_005e407c();
    /* 005f746e: mov esi, eax */ r_esi = r_eax;
    /* 005f7470: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f7473: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7475: je 0x5f7491 */ if (fZ) goto L_005f7491;
L_005f7477:; BB(0x005f7477);
    /* 005f7477: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7479: je 0x5f7491 */ if (fZ) goto L_005f7491;
L_005f747b:; BB(0x005f747b);
    /* 005f747b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f747d: push 0x1bb */ { u32 v = 0x1bbu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7482: mov ecx, esi */ r_ecx = r_esi;
    /* 005f7484: call 0x5e4624 */ r_esp -= 4; W32(r_esp, 0x5f7489u); f_005e4624();
    /* 005f7489: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f748a: mov ecx, esi */ r_ecx = r_esi;
    /* 005f748c: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x5f7491u); f_008172d4();
L_005f7491:; BB(0x005f7491);
    /* 005f7491: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7494: mov eax, ebx */ r_eax = r_ebx;
    /* 005f7496: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f7499: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f749c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f74a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f74a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f74a6: ret  */ FN_RET(0x005f73d4); r_esp += 4; return;
L_005f74a7:; BB(0x005f74a7);
    /* 005f74a7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005f74a9: jmp 0x5f7452 */ goto L_005f7452;
}

void f_005f74ac(void) /* sub_5F74AC */
{
    FN_ENTER(0x005f74ac);
    /* 005f74ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f74ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f74ae: mov edi, ecx */ r_edi = r_ecx;
    /* 005f74b0: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005f74b4: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f74b8: mov ecx, edi */ r_ecx = r_edi;
    /* 005f74ba: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f74be: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f74c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f74c3: call 0x5e43e8 */ r_esp -= 4; W32(r_esp, 0x5f74c8u); f_005e43e8();
    /* 005f74c8: mov dword ptr [edi], 0xb18100 */ W32((u32)(r_edi), 0xb18100u);
    /* 005f74ce: mov eax, dword ptr [ebx + 0x244] */ r_eax = R32((u32)(r_ebx+0x244u));
    /* 005f74d4: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f74d6: je 0x5f74e0 */ if (fZ) goto L_005f74e0;
L_005f74d8:; BB(0x005f74d8);
    /* 005f74d8: mov eax, dword ptr [ebx + 0x1ac] */ r_eax = R32((u32)(r_ebx+0x1acu));
    /* 005f74de: jmp 0x5f74e6 */ goto L_005f74e6;
L_005f74e0:; BB(0x005f74e0);
    /* 005f74e0: mov eax, dword ptr [ebx + 0x19c] */ r_eax = R32((u32)(r_ebx+0x19cu));
L_005f74e6:; BB(0x005f74e6);
    /* 005f74e6: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 005f74e9: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 005f74ec: mov dword ptr [edi + 0x5c], edx */ W32((u32)(r_edi+0x5cu), r_edx);
    /* 005f74ef: mov eax, edi */ r_eax = r_edi;
    /* 005f74f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f74f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f74f3: ret 0x10 */ FN_RET(0x005f74ac); r_esp += 20; return;
}

void f_005f74f8(void)
{
    FN_ENTER(0x005f74f8);
    /* 005f74f8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005f74fc: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005f7500: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7502: je 0x5f752e */ if (fZ) goto L_005f752e;
L_005f7504:; BB(0x005f7504);
    /* 005f7504: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7506: je 0x5f752e */ if (fZ) goto L_005f752e;
L_005f7508:; BB(0x005f7508);
    /* 005f7508: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005f750a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f750b: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 005f7511: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005f7514: mov dword ptr [edx + 0x244], eax */ W32((u32)(r_edx+0x244u), r_eax);
    /* 005f751a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5f751fu); f_0050b510();
    /* 005f751f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f7521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7522: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7523: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7524: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7526: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5f752bu); f_00814298();
    /* 005f752b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005f752e:; BB(0x005f752e);
    /* 005f752e: ret  */ FN_RET(0x005f74f8); r_esp += 4; return;
}

void f_005f7530(void)
{
    FN_ENTER(0x005f7530);
    /* 005f7530: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005f7534: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 005f7539: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f753b: je 0x5f754c */ if (fZ) goto L_005f754c;
L_005f753d:; BB(0x005f753d);
    /* 005f753d: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 005f7543: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005f7546: mov dword ptr [edx + 0x244], eax */ W32((u32)(r_edx+0x244u), r_eax);
L_005f754c:; BB(0x005f754c);
    /* 005f754c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f754d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5f7552u); f_007b4d18();
    /* 005f7552: mov ecx, eax */ r_ecx = r_eax;
    /* 005f7554: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f7557: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7559: je 0x5f7595 */ if (fZ) goto L_005f7595;
L_005f755b:; BB(0x005f755b);
    /* 005f755b: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005f7561: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7563: je 0x5f7595 */ if (fZ) goto L_005f7595;
L_005f7565:; BB(0x005f7565);
    /* 005f7565: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005f7569: cmp edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f756f: jge 0x5f7595 */ if ((fS==fO)) goto L_005f7595;
L_005f7571:; BB(0x005f7571);
    /* 005f7571: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005f7575: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7577: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005f757a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f757c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f757e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7580: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7582: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7584: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7586: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7588: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 005f758c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f758d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5f7592u); f_0050b510();
    /* 005f7592: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005f7595:; BB(0x005f7595);
    /* 005f7595: ret  */ FN_RET(0x005f7530); r_esp += 4; return;
}

void f_005f7598(void) /* sub_5F7598 */
{
    FN_ENTER(0x005f7598);
    /* 005f7598: mov dword ptr [0xa8e090], 0x3f800000 */ W32((u32)(0xa8e090u), 0x3f800000u);
    /* 005f75a2: mov dword ptr [0xa8e094], 0x41000000 */ W32((u32)(0xa8e094u), 0x41000000u);
    /* 005f75ac: mov dword ptr [0xa8e098], 0x3fc00000 */ W32((u32)(0xa8e098u), 0x3fc00000u);
    /* 005f75b6: ret  */ FN_RET(0x005f7598); r_esp += 4; return;
}

void f_005f75b8(void) /* sub_5F75B8 */
{
    FN_ENTER(0x005f75b8);
    /* 005f75b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f75b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f75bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f75bd: push 0x8dd8cc */ { u32 v = 0x8dd8ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005f75c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f75c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f75c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f75d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f75d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f75d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f75d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f75dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f75df: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f75e2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f75e5: mov eax, ecx */ r_eax = r_ecx;
    /* 005f75e7: mov dword ptr [eax], 0xb18180 */ W32((u32)(r_eax), 0xb18180u);
    /* 005f75ed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f75f4: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f75f9u); f_005f8fe8();
    /* 005f75f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f75fc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f75fe: jne 0x5f7610 */ if (!fZ) goto L_005f7610;
L_005f7600:; BB(0x005f7600);
    /* 005f7600: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7603: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f760a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f760c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f760d: ret 4 */ FN_RET(0x005f75b8); r_esp += 8; return;
L_005f7610:; BB(0x005f7610);
    /* 005f7610: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f7613: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7614: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f7619u); f_005c2f74();
    /* 005f7619: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f761a: jmp 0x5f7600 */ goto L_005f7600;
}

void f_005f761c(void) /* sub_5F761C */
{
    FN_ENTER(0x005f761c);
    /* 005f761c: mov edx, ecx */ r_edx = r_ecx;
    /* 005f761e: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f7623: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7625: jne 0x5f7634 */ if (!fZ) goto L_005f7634;
L_005f7627:; BB(0x005f7627);
    /* 005f7627: mov edx, dword ptr [edx + 0x244] */ r_edx = R32((u32)(r_edx+0x244u));
    /* 005f762d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f762f: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f7634u); f_00830c04();
L_005f7634:; BB(0x005f7634);
    /* 005f7634: ret  */ FN_RET(0x005f761c); r_esp += 4; return;
}

void f_005f7638(void) /* sub_5F7638 */
{
    FN_ENTER(0x005f7638);
    /* 005f7638: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7639: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f763c: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 005f7642: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7644: je 0x5f7744 */ if (fZ) goto L_005f7744;
L_005f764a:; BB(0x005f764a);
    /* 005f764a: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 005f7650: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005f7656: mov edx, dword ptr [edx + 0x328] */ r_edx = R32((u32)(r_edx+0x328u));
    /* 005f765c: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005f765f: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f7662: je 0x5f7679 */ if (fZ) goto L_005f7679;
L_005f7664:; BB(0x005f7664);
    /* 005f7664: fld dword ptr [0x92dc60] */ FPUSH(R_F32((u32)(0x92dc60u)));
    /* 005f766a: fld dword ptr [0x92dc5c] */ FPUSH(R_F32((u32)(0x92dc5cu)));
    /* 005f7670: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f7672: mov ebx, 0x4000 */ r_ebx = 0x4000u;
    /* 005f7677: jmp 0x5f76b8 */ goto L_005f76b8;
L_005f7679:; BB(0x005f7679);
    /* 005f7679: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f767c: je 0x5f7696 */ if (fZ) goto L_005f7696;
L_005f767e:; BB(0x005f767e);
    /* 005f767e: fld dword ptr [0x92dc58] */ FPUSH(R_F32((u32)(0x92dc58u)));
    /* 005f7684: fld dword ptr [0x92dc54] */ FPUSH(R_F32((u32)(0x92dc54u)));
    /* 005f768a: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 005f768f: mov ebx, 0xffffc000 */ r_ebx = 0xffffc000u;
    /* 005f7694: jmp 0x5f76b8 */ goto L_005f76b8;
L_005f7696:; BB(0x005f7696);
    /* 005f7696: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f769c: je 0x5f7749 */ if (fZ) goto L_005f7749;
L_005f76a2:; BB(0x005f76a2);
    /* 005f76a2: fld dword ptr [0x92dc50] */ FPUSH(R_F32((u32)(0x92dc50u)));
    /* 005f76a8: fld dword ptr [0x92dc4c] */ FPUSH(R_F32((u32)(0x92dc4cu)));
    /* 005f76ae: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 005f76b3: mov ebx, 0x2000 */ r_ebx = 0x2000u;
L_005f76b8:; BB(0x005f76b8);
    /* 005f76b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f76ba: jne 0x5f7738 */ if (!fZ) goto L_005f7738;
L_005f76bc:; BB(0x005f76bc);
    /* 005f76bc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005f76be: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005f76c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f76c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f76c3: jae 0x5f76d6 */ if (!fC) goto L_005f76d6;
L_005f76c5:; BB(0x005f76c5);
    /* 005f76c5: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 005f76c7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f76c9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f76cb: mov dword ptr [ecx + 0x244], edx */ W32((u32)(r_ecx+0x244u), r_edx);
    /* 005f76d1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f76d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f76d5: ret  */ FN_RET(0x005f7638); r_esp += 4; return;
L_005f76d6:; BB(0x005f76d6);
    /* 005f76d6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005f76d8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f76da: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f76db: jb 0x5f7727 */ if (fC) goto L_005f7727;
L_005f76dd:; BB(0x005f76dd);
    /* 005f76dd: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005f76df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f76e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f76e2: ja 0x5f7727 */ if ((!fC&&!fZ)) goto L_005f7727;
L_005f76e4:; BB(0x005f76e4);
    /* 005f76e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005f76e6: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 005f76e8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005f76ea: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005f76ed: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005f76f0: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005f76f2: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005f76f6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005f76fa: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 005f76fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005f76fe: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005f7700: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005f7702: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005f7706: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005f770b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f7710: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005f7714: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005f7718: fistp dword ptr [ecx + 0x244] */ W32((u32)(r_ecx+0x244u), (u32)fx_int32(ST(0))); FPOP();
    /* 005f771e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005f7722: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f7725: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f7726: ret  */ FN_RET(0x005f7638); r_esp += 4; return;
L_005f7727:; BB(0x005f7727);
    /* 005f7727: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f7729: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f772b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f772d: mov dword ptr [ecx + 0x244], ebx */ W32((u32)(r_ecx+0x244u), r_ebx);
    /* 005f7733: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f7736: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f7737: ret  */ FN_RET(0x005f7638); r_esp += 4; return;
L_005f7738:; BB(0x005f7738);
    /* 005f7738: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f773a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f773c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f773e: mov dword ptr [ecx + 0x244], ebx */ W32((u32)(r_ecx+0x244u), r_ebx);
L_005f7744:; BB(0x005f7744);
    /* 005f7744: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f7747: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f7748: ret  */ FN_RET(0x005f7638); r_esp += 4; return;
L_005f7749:; BB(0x005f7749);
    /* 005f7749: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f774b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f774e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f774f: ret  */ FN_RET(0x005f7638); r_esp += 4; return;
}

void f_005f7750(void) /* sub_5F7750 */
{
    FN_ENTER(0x005f7750);
    /* 005f7750: mov dword ptr [ecx + 0x244], 0 */ W32((u32)(r_ecx+0x244u), 0x0u);
    /* 005f775a: ret  */ FN_RET(0x005f7750); r_esp += 4; return;
}

void f_005f775c(void) /* sub_5F775C */
{
    FN_ENTER(0x005f775c);
    /* 005f775c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f775d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f775f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7761: push 0x8dd8f4 */ { u32 v = 0x8dd8f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7766: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f776c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f776d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f7774: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7777: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f777a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f777d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f7780: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f7783: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f7786: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7788: je 0x5f77df */ if (fZ) goto L_005f77df;
L_005f778a:; BB(0x005f778a);
    /* 005f778a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f7791: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7796: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f779bu); f_005caba4();
    /* 005f779b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f779c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f779f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f77a1: je 0x5f77db */ if (fZ) goto L_005f77db;
L_005f77a3:; BB(0x005f77a3);
    /* 005f77a3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f77aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f77b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f77b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f77b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f77b8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f77be: call 0x5f77f0 */ r_esp -= 4; W32(r_esp, 0x5f77c3u); f_005f77f0();
    /* 005f77c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f77c6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f77cd:; BB(0x005f77cd);
    /* 005f77cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f77d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f77d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f77d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f77da: ret  */ FN_RET(0x005f775c); r_esp += 4; return;
L_005f77db:; BB(0x005f77db);
    /* 005f77db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f77dd: jmp 0x5f77cd */ goto L_005f77cd;
L_005f77df:; BB(0x005f77df);
    /* 005f77df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f77e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f77e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f77eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f77ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f77ee: ret  */ FN_RET(0x005f775c); r_esp += 4; return;
}

void f_005f77f0(void) /* sub_5F77F0 */
{
    FN_ENTER(0x005f77f0);
    /* 005f77f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f77f1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f77f3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f77f7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f77fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f77fd: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f7802u); f_005f9384();
    /* 005f7802: mov dword ptr [ebp], 0xb18180 */ W32((u32)(r_ebp), 0xb18180u);
    /* 005f7809: mov eax, ebp */ r_eax = r_ebp;
    /* 005f780b: mov dword ptr [ebp + 0x244], 0 */ W32((u32)(r_ebp+0x244u), 0x0u);
    /* 005f7815: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7816: ret 8 */ FN_RET(0x005f77f0); r_esp += 12; return;
}

void f_005f781c(void) /* sub_5F781C */
{
    FN_ENTER(0x005f781c);
    /* 005f781c: mov dword ptr [0xa8e09c], 0x3f800000 */ W32((u32)(0xa8e09cu), 0x3f800000u);
    /* 005f7826: mov dword ptr [0xa8e0a0], 0x41000000 */ W32((u32)(0xa8e0a0u), 0x41000000u);
    /* 005f7830: mov dword ptr [0xa8e0a4], 0x3fc00000 */ W32((u32)(0xa8e0a4u), 0x3fc00000u);
    /* 005f783a: ret  */ FN_RET(0x005f781c); r_esp += 4; return;
}

void f_005f783c(void) /* sub_5F783C */
{
    FN_ENTER(0x005f783c);
    /* 005f783c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f783d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f783f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f7841: call 0x5f7860 */ r_esp -= 4; W32(r_esp, 0x5f7846u); f_005f7860();
    /* 005f7846: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f784a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f784c: jne 0x5f7852 */ if (!fZ) goto L_005f7852;
L_005f784e:; BB(0x005f784e);
    /* 005f784e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f784f: ret 4 */ FN_RET(0x005f783c); r_esp += 8; return;
L_005f7852:; BB(0x005f7852);
    /* 005f7852: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7853: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f7858u); f_005c2f74();
    /* 005f7858: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f7859: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f785a: ret 4 */ FN_RET(0x005f783c); r_esp += 8; return;
}

void f_005f7860(void) /* sub_5F7860 */
{
    FN_ENTER(0x005f7860);
    /* 005f7860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7861: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7865: push 0x8dd910 */ { u32 v = 0x8dd910u; r_esp -= 4; W32(r_esp, v); }
    /* 005f786a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f7870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7871: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f7878: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f787b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f787e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f7881: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f7884: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f7887: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f788a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f788d: mov dword ptr [ecx], 0xb18300 */ W32((u32)(r_ecx), 0xb18300u);
    /* 005f7893: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f789a: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f789fu); f_005f8fe8();
    /* 005f789f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f78a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f78a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f78ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f78ac: ret  */ FN_RET(0x005f7860); r_esp += 4; return;
}

void f_005f78b0(void) /* sub_5F78B0 */
{
    FN_ENTER(0x005f78b0);
    /* 005f78b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f78b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f78b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f78b5: push 0x8dd938 */ { u32 v = 0x8dd938u; r_esp -= 4; W32(r_esp, v); }
    /* 005f78ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f78c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f78c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f78c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f78cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f78ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f78d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f78d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f78d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f78da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f78dc: je 0x5f7933 */ if (fZ) goto L_005f7933;
L_005f78de:; BB(0x005f78de);
    /* 005f78de: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f78e5: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f78ea: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f78efu); f_005caba4();
    /* 005f78ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f78f0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f78f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f78f5: je 0x5f792f */ if (fZ) goto L_005f792f;
L_005f78f7:; BB(0x005f78f7);
    /* 005f78f7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f78fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f7905: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f7908: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f790b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f790c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7912: call 0x5f7944 */ r_esp -= 4; W32(r_esp, 0x5f7917u); f_005f7944();
    /* 005f7917: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f791a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f7921:; BB(0x005f7921);
    /* 005f7921: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7924: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f792b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f792d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f792e: ret  */ FN_RET(0x005f78b0); r_esp += 4; return;
L_005f792f:; BB(0x005f792f);
    /* 005f792f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7931: jmp 0x5f7921 */ goto L_005f7921;
L_005f7933:; BB(0x005f7933);
    /* 005f7933: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7935: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7938: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f793f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7941: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7942: ret  */ FN_RET(0x005f78b0); r_esp += 4; return;
}

void f_005f7944(void) /* sub_5F7944 */
{
    FN_ENTER(0x005f7944);
    /* 005f7944: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7945: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f7947: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f794b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f794f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f7951: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f7956u); f_005f9384();
    /* 005f7956: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f795c: mov dword ptr [ebx], 0xb18300 */ W32((u32)(r_ebx), 0xb18300u);
    /* 005f7962: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7965: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f796b: mov eax, ebx */ r_eax = r_ebx;
    /* 005f796d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f796e: ret 8 */ FN_RET(0x005f7944); r_esp += 12; return;
}

void f_005f7974(void) /* sub_5F7974 */
{
    FN_ENTER(0x005f7974);
    /* 005f7974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7975: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7977: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7979: push 0x8dd960 */ { u32 v = 0x8dd960u; r_esp -= 4; W32(r_esp, v); }
    /* 005f797e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f7984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7985: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f798c: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f798f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f7992: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f7995: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f7998: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f799b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f799d: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005f79a3: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005f79aa: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005f79af: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005f79b4: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 005f79bb: mov word ptr [ebp - 0x70], ax */ W16((u32)(r_ebp+0xffffff90u), (u16)r_eax);
    /* 005f79bf: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005f79c2: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005f79c9: mov word ptr [ebp - 0x60], dx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_edx);
    /* 005f79cd: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005f79d4: mov word ptr [ebp - 0x5e], dx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_edx);
    /* 005f79d8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005f79df: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005f79e6: mov dword ptr [ebp - 0x44], 0xffffd556 */ W32((u32)(r_ebp+0xffffffbcu), 0xffffd556u);
    /* 005f79ed: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005f79f1: mov word ptr [ebp - 0x70], ax */ W16((u32)(r_ebp+0xffffff90u), (u16)r_eax);
    /* 005f79f5: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 005f79fb: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7a01: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005f7a04: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 005f7a07: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005f7a0a: mov eax, dword ptr [ebx + 0x1ac] */ r_eax = R32((u32)(r_ebx+0x1acu));
    /* 005f7a10: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005f7a13: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5f7a18u); f_006a2e8c();
    /* 005f7a18: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005f7a1e: mov word ptr [ebp - 0x60], ax */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_eax);
    /* 005f7a22: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7a28: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5f7a2du); f_006a3250();
    /* 005f7a2d: mov esi, dword ptr [ebx + 0xf8] */ r_esi = R32((u32)(r_ebx+0xf8u));
    /* 005f7a33: mov edi, dword ptr [esi + 0x60] */ r_edi = R32((u32)(r_esi+0x60u));
    /* 005f7a36: mov word ptr [ebp - 0x5e], ax */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_eax);
    /* 005f7a3a: movzx eax, word ptr [esi + 0x8a4] */ r_eax = (u32)R16((u32)(r_esi+0x8a4u));
    /* 005f7a41: mov edx, dword ptr [eax*4 + 0x9cb9d0] */ r_edx = R32((u32)(r_eax*4+0x9cb9d0u));
    /* 005f7a48: mov dword ptr [ebp - 0x58], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa8u), 0x3f800000u);
    /* 005f7a4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f7a51: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005f7a54: mov dword ptr [ebp - 0x54], 0x3f19999a */ W32((u32)(r_ebp+0xffffffacu), 0x3f19999au);
    /* 005f7a5b: mov dword ptr [ebp - 0x50], 0x3f000000 */ W32((u32)(r_ebp+0xffffffb0u), 0x3f000000u);
    /* 005f7a62: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 005f7a65: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005f7a68: mov dword ptr [ebp - 0x4c], 0x3e99999a */ W32((u32)(r_ebp+0xffffffb4u), 0x3e99999au);
    /* 005f7a6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7a70: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7a72: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f7a77u); f_005e83c8();
    /* 005f7a77: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 005f7a7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7a7b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7a7d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f7a7f: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f7a84u); f_005e83c8();
    /* 005f7a84: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 005f7a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7a88: call 0x6f1188 */ r_esp -= 4; W32(r_esp, 0x5f7a8du); f_006f1188();
    /* 005f7a8d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f7a90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f7a93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7a95: je 0x5f7ad4 */ if (fZ) goto L_005f7ad4;
L_005f7a97:; BB(0x005f7a97);
    /* 005f7a97: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005f7a9e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7aa0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f7aa5u); f_005caba4();
    /* 005f7aa5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f7aa6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f7aa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7aab: je 0x5f7ad4 */ if (fZ) goto L_005f7ad4;
L_005f7aad:; BB(0x005f7aad);
    /* 005f7aad: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005f7ab4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f7abb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f7abe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ac0: push 0x5fd2b4 */ { u32 v = 0x5fd2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ac5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ac6: mov ecx, eax */ r_ecx = r_eax;
    /* 005f7ac8: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5f7acdu); f_005e5b88();
    /* 005f7acd: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005f7ad4:; BB(0x005f7ad4);
    /* 005f7ad4: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7ad7: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7ada: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7add: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7ae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f7ae7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7ae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7aea: ret  */ FN_RET(0x005f7974); r_esp += 4; return;
}

void f_005f7aec(void) /* sub_5F7AEC */
{
    FN_ENTER(0x005f7aec);
    /* 005f7aec: mov dword ptr [0xa8e0a8], 0x3f800000 */ W32((u32)(0xa8e0a8u), 0x3f800000u);
    /* 005f7af6: mov dword ptr [0xa8e0ac], 0x41000000 */ W32((u32)(0xa8e0acu), 0x41000000u);
    /* 005f7b00: mov dword ptr [0xa8e0b0], 0x3fc00000 */ W32((u32)(0xa8e0b0u), 0x3fc00000u);
    /* 005f7b0a: ret  */ FN_RET(0x005f7aec); r_esp += 4; return;
}

void f_005f7b0c(void) /* sub_5F7B0C */
{
    FN_ENTER(0x005f7b0c);
    /* 005f7b0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b0d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7b0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b11: push 0x8dd97c */ { u32 v = 0x8dd97cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f7b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f7b24: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7b27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f7b2a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f7b2d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f7b30: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f7b33: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f7b36: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f7b39: mov eax, ecx */ r_eax = r_ecx;
    /* 005f7b3b: mov dword ptr [eax], 0xb18460 */ W32((u32)(r_eax), 0xb18460u);
    /* 005f7b41: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f7b48: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f7b4du); f_005f8fe8();
    /* 005f7b4d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f7b50: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7b52: jne 0x5f7b64 */ if (!fZ) goto L_005f7b64;
L_005f7b54:; BB(0x005f7b54);
    /* 005f7b54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7b57: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f7b5e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7b60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7b61: ret 4 */ FN_RET(0x005f7b0c); r_esp += 8; return;
L_005f7b64:; BB(0x005f7b64);
    /* 005f7b64: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f7b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b68: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f7b6du); f_005c2f74();
    /* 005f7b6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f7b6e: jmp 0x5f7b54 */ goto L_005f7b54;
}

void f_005f7b70(void) /* sub_5F7B70 */
{
    FN_ENTER(0x005f7b70);
    /* 005f7b70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b71: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7b74: mov esi, ecx */ r_esi = r_ecx;
    /* 005f7b76: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005f7b7c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005f7b81: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005f7b89: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005f7b8e: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005f7b92: mov dword ptr [esp + 0x14], 0x3f800000 */ W32((u32)(r_esp+0x14u), 0x3f800000u);
    /* 005f7b9a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005f7b9e: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 005f7ba6: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 005f7bab: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 005f7bb3: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 005f7bb8: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 005f7bc0: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 005f7bc8: mov dword ptr [esp + 0x2c], 0xffffd556 */ W32((u32)(r_esp+0x2cu), 0xffffd556u);
    /* 005f7bd0: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005f7bd4: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005f7bd8: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 005f7bde: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7be4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005f7be8: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005f7beb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005f7bef: mov eax, dword ptr [esi + 0x1ac] */ r_eax = R32((u32)(r_esi+0x1acu));
    /* 005f7bf5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005f7bf9: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5f7bfeu); f_006a2e8c();
    /* 005f7bfe: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005f7c04: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 005f7c09: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7c0f: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5f7c14u); f_006a3250();
    /* 005f7c14: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005f7c1a: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 005f7c1f: movzx eax, word ptr [ecx + 0x8a4] */ r_eax = (u32)R16((u32)(r_ecx+0x8a4u));
    /* 005f7c26: mov edx, dword ptr [eax*4 + 0x9cb9d0] */ r_edx = R32((u32)(r_eax*4+0x9cb9d0u));
    /* 005f7c2d: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 005f7c30: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005f7c34: mov ecx, esi */ r_ecx = r_esi;
    /* 005f7c36: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005f7c3a: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 005f7c3e: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 005f7c46: mov dword ptr [esp + 0x1c], 0x3f19999a */ W32((u32)(r_esp+0x1cu), 0x3f19999au);
    /* 005f7c4e: mov dword ptr [esp + 0x20], 0x3f000000 */ W32((u32)(r_esp+0x20u), 0x3f000000u);
    /* 005f7c56: mov dword ptr [esp + 0x24], 0x3e99999a */ W32((u32)(r_esp+0x24u), 0x3e99999au);
    /* 005f7c5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7c5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7c61: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f7c66u); f_005e83c8();
    /* 005f7c66: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 005f7c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7c6b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7c6d: mov ecx, esi */ r_ecx = r_esi;
    /* 005f7c6f: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f7c74u); f_005e83c8();
    /* 005f7c74: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f7c77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7c78: call 0x6f1188 */ r_esp -= 4; W32(r_esp, 0x5f7c7du); f_006f1188();
    /* 005f7c7d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f7c80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f7c81: ret  */ FN_RET(0x005f7b70); r_esp += 4; return;
}

void f_005f7c84(void) /* sub_5F7C84 */
{
    FN_ENTER(0x005f7c84);
    /* 005f7c84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7c85: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7c87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7c89: push 0x8dd9a4 */ { u32 v = 0x8dd9a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7c8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f7c94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7c95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f7c9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7c9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f7ca2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f7ca5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f7ca8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f7cab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f7cae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7cb0: je 0x5f7d07 */ if (fZ) goto L_005f7d07;
L_005f7cb2:; BB(0x005f7cb2);
    /* 005f7cb2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f7cb9: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7cbe: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f7cc3u); f_005caba4();
    /* 005f7cc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f7cc4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f7cc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7cc9: je 0x5f7d03 */ if (fZ) goto L_005f7d03;
L_005f7ccb:; BB(0x005f7ccb);
    /* 005f7ccb: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f7cd2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f7cd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f7cdc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ce0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7ce6: call 0x5f7d18 */ r_esp -= 4; W32(r_esp, 0x5f7cebu); f_005f7d18();
    /* 005f7ceb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7cee: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f7cf5:; BB(0x005f7cf5);
    /* 005f7cf5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7cf8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f7cff: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7d01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7d02: ret  */ FN_RET(0x005f7c84); r_esp += 4; return;
L_005f7d03:; BB(0x005f7d03);
    /* 005f7d03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7d05: jmp 0x5f7cf5 */ goto L_005f7cf5;
L_005f7d07:; BB(0x005f7d07);
    /* 005f7d07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7d09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7d0c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f7d13: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7d15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7d16: ret  */ FN_RET(0x005f7c84); r_esp += 4; return;
}

void f_005f7d18(void) /* sub_5F7D18 */
{
    FN_ENTER(0x005f7d18);
    /* 005f7d18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7d19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f7d1b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7d1f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7d23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f7d25: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f7d2au); f_005f9384();
    /* 005f7d2a: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f7d30: mov dword ptr [ebx], 0xb18460 */ W32((u32)(r_ebx), 0xb18460u);
    /* 005f7d36: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7d39: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f7d3f: mov eax, ebx */ r_eax = r_ebx;
    /* 005f7d41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f7d42: ret 8 */ FN_RET(0x005f7d18); r_esp += 12; return;
}

void f_005f7d48(void) /* sub_5F7D48 */
{
    FN_ENTER(0x005f7d48);
    /* 005f7d48: mov dword ptr [0xa8e0b4], 0x3f800000 */ W32((u32)(0xa8e0b4u), 0x3f800000u);
    /* 005f7d52: mov dword ptr [0xa8e0b8], 0x41000000 */ W32((u32)(0xa8e0b8u), 0x41000000u);
    /* 005f7d5c: mov dword ptr [0xa8e0bc], 0x3fc00000 */ W32((u32)(0xa8e0bcu), 0x3fc00000u);
    /* 005f7d66: ret  */ FN_RET(0x005f7d48); r_esp += 4; return;
}

void f_005f7d68(void) /* sub_5F7D68 */
{
    FN_ENTER(0x005f7d68);
    /* 005f7d68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7d69: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7d6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7d6d: push 0x8dd9c0 */ { u32 v = 0x8dd9c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7d72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f7d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7d79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f7d80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7d83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f7d86: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f7d89: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f7d8c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f7d8f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f7d92: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f7d95: mov eax, ecx */ r_eax = r_ecx;
    /* 005f7d97: mov dword ptr [eax], 0xb185c0 */ W32((u32)(r_eax), 0xb185c0u);
    /* 005f7d9d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f7da4: call 0x5f8fe8 */ r_esp -= 4; W32(r_esp, 0x5f7da9u); f_005f8fe8();
    /* 005f7da9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f7dac: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7dae: jne 0x5f7dc0 */ if (!fZ) goto L_005f7dc0;
L_005f7db0:; BB(0x005f7db0);
    /* 005f7db0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7db3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f7dba: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7dbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7dbd: ret 4 */ FN_RET(0x005f7d68); r_esp += 8; return;
L_005f7dc0:; BB(0x005f7dc0);
    /* 005f7dc0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f7dc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7dc4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f7dc9u); f_005c2f74();
    /* 005f7dc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f7dca: jmp 0x5f7db0 */ goto L_005f7db0;
}

void f_005f7dcc(void) /* sub_5F7DCC */
{
    FN_ENTER(0x005f7dcc);
    /* 005f7dcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7dcd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f7dcf: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f7dd4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7dd7: je 0x5f7df1 */ if (fZ) goto L_005f7df1;
L_005f7dd9:; BB(0x005f7dd9);
    /* 005f7dd9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f7ddc: je 0x5f7de0 */ if (fZ) goto L_005f7de0;
L_005f7dde:; BB(0x005f7dde);
    /* 005f7dde: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f7ddf: ret  */ FN_RET(0x005f7dcc); r_esp += 4; return;
L_005f7de0:; BB(0x005f7de0);
    /* 005f7de0: mov edx, dword ptr [ebx + 0x248] */ r_edx = R32((u32)(r_ebx+0x248u));
    /* 005f7de6: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f7de8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7dea: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f7defu); f_00830c04();
    /* 005f7def: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f7df0: ret  */ FN_RET(0x005f7dcc); r_esp += 4; return;
L_005f7df1:; BB(0x005f7df1);
    /* 005f7df1: mov edx, dword ptr [ebx + 0x248] */ r_edx = R32((u32)(r_ebx+0x248u));
    /* 005f7df7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7df9: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f7dfeu); f_00830c04();
    /* 005f7dfe: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f7e03: jmp 0x5f7dd9 */ goto L_005f7dd9;
}

void f_005f7e08(void) /* sub_5F7E08 */
{
    FN_ENTER(0x005f7e08);
    /* 005f7e08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e09: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7e0c: mov edi, ecx */ r_edi = r_ecx;
    /* 005f7e0e: mov ecx, edi */ r_ecx = r_edi;
    /* 005f7e10: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f7e13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e14: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e16: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f7e1bu); f_005e83c8();
    /* 005f7e1b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f7e1e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e21: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5f7e26u); f_0050b510();
    /* 005f7e26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f7e29: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f7e2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e2e: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005f7e30: mov ecx, edi */ r_ecx = r_edi;
    /* 005f7e32: push dword ptr [0x9c28e0] */ { u32 v = R32((u32)(0x9c28e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7e38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e3b: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f7e41u); call_ind(t); }
    /* 005f7e41: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f7e44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e45: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e47: mov ecx, edi */ r_ecx = r_edi;
    /* 005f7e49: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f7e4eu); f_005e83c8();
    /* 005f7e4e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f7e51: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005f7e53: mov edx, 1 */ r_edx = 0x1u;
    /* 005f7e58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e59: push dword ptr [0x9c28e4] */ { u32 v = R32((u32)(0x9c28e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7e5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e61: mov ecx, edi */ r_ecx = r_edi;
    /* 005f7e63: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f7e69u); call_ind(t); }
    /* 005f7e69: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f7e6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e6d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e6f: mov ecx, edi */ r_ecx = r_edi;
    /* 005f7e71: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f7e76u); f_005e83c8();
    /* 005f7e76: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f7e79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e7b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005f7e7d: mov ecx, edi */ r_ecx = r_edi;
    /* 005f7e7f: push dword ptr [0x9c28e8] */ { u32 v = R32((u32)(0x9c28e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7e85: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e88: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f7e8eu); call_ind(t); }
    /* 005f7e8e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f7e91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e92: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e94: mov ecx, edi */ r_ecx = r_edi;
    /* 005f7e96: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f7e9bu); f_005e83c8();
    /* 005f7e9b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f7e9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ea0: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005f7ea2: mov ecx, edi */ r_ecx = r_edi;
    /* 005f7ea4: push dword ptr [0x9c28ec] */ { u32 v = R32((u32)(0x9c28ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7eaa: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7eac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ead: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f7eb3u); call_ind(t); }
    /* 005f7eb3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f7eb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7eb7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7eb9: mov ecx, edi */ r_ecx = r_edi;
    /* 005f7ebb: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f7ec0u); f_005e83c8();
    /* 005f7ec0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f7ec3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ec5: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005f7ec7: mov ecx, edi */ r_ecx = r_edi;
    /* 005f7ec9: push dword ptr [0x9c28f0] */ { u32 v = R32((u32)(0x9c28f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7ecf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ed2: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f7ed8u); call_ind(t); }
    /* 005f7ed8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f7edb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f7edc: ret  */ FN_RET(0x005f7e08); r_esp += 4; return;
}

void f_005f7ee0(void) /* sub_5F7EE0 */
{
    FN_ENTER(0x005f7ee0);
    /* 005f7ee0: mov eax, dword ptr [ecx + 0x248] */ r_eax = R32((u32)(r_ecx+0x248u));
    /* 005f7ee6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7ee8: jle 0x5f7f00 */ if ((fZ||fS!=fO)) goto L_005f7f00;
L_005f7eea:; BB(0x005f7eea);
    /* 005f7eea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7eec: push 0xffffe000 */ { u32 v = 0xffffe000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ef1: add ecx, 0x248 */ {  u32 a = r_ecx; u32 b = 0x248u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7ef7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ef8: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f7efdu); f_005dd6f8();
    /* 005f7efd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005f7f00:; BB(0x005f7f00);
    /* 005f7f00: ret  */ FN_RET(0x005f7ee0); r_esp += 4; return;
}

void f_005f7f04(void) /* sub_5F7F04 */
{
    FN_ENTER(0x005f7f04);
    /* 005f7f04: mov eax, dword ptr [ecx + 0x248] */ r_eax = R32((u32)(r_ecx+0x248u));
    /* 005f7f0a: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f7f0f: jge 0x5f7f2a */ if ((fS==fO)) goto L_005f7f2a;
L_005f7f11:; BB(0x005f7f11);
    /* 005f7f11: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f16: push 0x2d8 */ { u32 v = 0x2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f1b: add ecx, 0x248 */ {  u32 a = r_ecx; u32 b = 0x248u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7f21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f22: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f7f27u); f_005dd6f8();
    /* 005f7f27: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005f7f2a:; BB(0x005f7f2a);
    /* 005f7f2a: ret  */ FN_RET(0x005f7f04); r_esp += 4; return;
}

void f_005f7f2c(void) /* sub_5F7F2C */
{
    FN_ENTER(0x005f7f2c);
    /* 005f7f2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f2d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7f2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f31: push 0x8dd9e8 */ { u32 v = 0x8dd9e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f7f3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f7f44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7f47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f7f4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f7f4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f7f50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f7f53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f7f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7f58: je 0x5f7faf */ if (fZ) goto L_005f7faf;
L_005f7f5a:; BB(0x005f7f5a);
    /* 005f7f5a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f7f61: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f66: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f7f6bu); f_005caba4();
    /* 005f7f6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f7f6c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f7f6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7f71: je 0x5f7fab */ if (fZ) goto L_005f7fab;
L_005f7f73:; BB(0x005f7f73);
    /* 005f7f73: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f7f7a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f7f81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f7f84: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7f87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f88: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7f8e: call 0x5f7fc0 */ r_esp -= 4; W32(r_esp, 0x5f7f93u); f_005f7fc0();
    /* 005f7f93: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7f96: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f7f9d:; BB(0x005f7f9d);
    /* 005f7f9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7fa0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f7fa7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7fa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7faa: ret  */ FN_RET(0x005f7f2c); r_esp += 4; return;
L_005f7fab:; BB(0x005f7fab);
    /* 005f7fab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7fad: jmp 0x5f7f9d */ goto L_005f7f9d;
L_005f7faf:; BB(0x005f7faf);
    /* 005f7faf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7fb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7fb4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f7fbb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7fbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7fbe: ret  */ FN_RET(0x005f7f2c); r_esp += 4; return;
}

void f_005f7fc0(void) /* sub_5F7FC0 */
{
    FN_ENTER(0x005f7fc0);
    /* 005f7fc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7fc1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f7fc3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7fc7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f7fcb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f7fcd: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f7fd2u); f_005f9384();
    /* 005f7fd2: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f7fd8: mov dword ptr [ebx], 0xb185c0 */ W32((u32)(r_ebx), 0xb185c0u);
    /* 005f7fde: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f7fe1: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f7fe7: mov dword ptr [ebx + 0x248], 0x2000 */ W32((u32)(r_ebx+0x248u), 0x2000u);
    /* 005f7ff1: mov eax, ebx */ r_eax = r_ebx;
    /* 005f7ff3: mov dword ptr [ebx + 0x238], 0x5e4678 */ W32((u32)(r_ebx+0x238u), 0x5e4678u);
    /* 005f7ffd: mov dword ptr [ebx + 0x208], 0x41700000 */ W32((u32)(r_ebx+0x208u), 0x41700000u);
    /* 005f8007: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f8008: ret 8 */ FN_RET(0x005f7fc0); r_esp += 12; return;
}

