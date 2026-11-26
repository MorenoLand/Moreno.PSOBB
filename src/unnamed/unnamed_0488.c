#include "protos.h"

void f_00488024(void) /* sub_488024 */
{
    FN_ENTER(0x00488024);
    /* 00488024: mov eax, dword ptr [ecx + 0xb4] */ r_eax = R32((u32)(r_ecx+0xb4u));
    /* 0048802a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048802d: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 00488033: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00488036: jle 0x488046 */ if ((fZ||fS!=fO)) goto L_00488046;
L_00488038:; BB(0x00488038);
    /* 00488038: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0048803c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00488041: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00488045: ret  */ FN_RET(0x00488024); r_esp += 4; return;
L_00488046:; BB(0x00488046);
    /* 00488046: ret  */ FN_RET(0x00488024); r_esp += 4; return;
}

void f_00488048(void) /* sub_488048 */
{
    FN_ENTER(0x00488048);
    /* 00488048: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488049: mov ebp, esp */ r_ebp = r_esp;
    /* 0048804b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048804d: push 0x8cfd2e */ { u32 v = 0x8cfd2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00488052: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00488058: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488059: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00488060: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00488063: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00488066: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00488069: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0048806c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0048806f: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 00488074: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0048807b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x488080u); f_005caba4();
    /* 00488080: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00488083: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488086: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00488089: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048808b: je 0x488186 */ if (fZ) goto L_00488186;
L_00488091:; BB(0x00488091);
    /* 00488091: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00488098: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048809f: mov ecx, eax */ r_ecx = r_eax;
    /* 004880a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004880a4: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004880a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004880a8: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x4880adu); f_007b4b48();
    /* 004880ad: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004880b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004880b7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004880ba: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 004880bd: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
    /* 004880c3: mov dword ptr [ecx], 0xaf8b08 */ W32((u32)(r_ecx), 0xaf8b08u);
    /* 004880c9: mov eax, dword ptr [0x9a691c] */ r_eax = R32((u32)(0x9a691cu));
    /* 004880ce: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004880d1: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 004880d3: mov dword ptr [ecx + 0xc8], ebx */ W32((u32)(r_ecx+0xc8u), r_ebx);
    /* 004880d9: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 004880dc: mov dword ptr [ecx + 0xcc], esi */ W32((u32)(r_ecx+0xccu), r_esi);
    /* 004880e2: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 004880e5: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 004880eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004880ed: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
    /* 004880f7: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 004880fd: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 00488103: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 00488109: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
    /* 0048810f: call 0x4881bc */ r_esp -= 4; W32(r_esp, 0x488114u); f_004881bc();
    /* 00488114: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00488116:; BB(0x00488116);
    /* 00488116: mov edx, dword ptr [esi*4 + 0x900fa8] */ r_edx = R32((u32)(r_esi*4+0x900fa8u));
    /* 0048811d: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00488120: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00488122: add ebx, dword ptr [ebp - 0x14] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00488125: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
    /* 0048812b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048812d: je 0x488158 */ if (fZ) goto L_00488158;
L_0048812f:; BB(0x0048812f);
    /* 0048812f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00488132: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00488135: jl 0x488116 */ if ((fS!=fO)) goto L_00488116;
L_00488137:; BB(0x00488137);
    /* 00488137: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0048813e:; BB(0x0048813e);
    /* 0048813e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00488141: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00488144: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00488147: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048814a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048814d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00488154: mov esp, ebp */ r_esp = r_ebp;
    /* 00488156: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488157: ret  */ FN_RET(0x00488048); r_esp += 4; return;
L_00488158:; BB(0x00488158);
    /* 00488158: push dword ptr [edx*4 + 0x900fb0] */ { u32 v = R32((u32)(r_edx*4+0x900fb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048815f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00488162: lea ecx, [eax + 0xc8] */ r_ecx = (u32)(r_eax+0xc8u);
    /* 00488168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488169: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x48816eu); f_00509590();
    /* 0048816e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488171: mov dword ptr [ebx + 0xd4], eax */ W32((u32)(r_ebx+0xd4u), r_eax);
    /* 00488177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488179: je 0x48812f */ if (fZ) goto L_0048812f;
L_0048817b:; BB(0x0048817b);
    /* 0048817b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048817d: mov ecx, eax */ r_ecx = r_eax;
    /* 0048817f: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x488184u); f_00508efc();
    /* 00488184: jmp 0x48812f */ goto L_0048812f;
L_00488186:; BB(0x00488186);
    /* 00488186: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00488188: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048818b: jmp 0x48813e */ goto L_0048813e;
}

void f_004881bc(void) /* sub_4881BC */
{
    FN_ENTER(0x004881bc);
    /* 004881bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004881be: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 004881c4: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 004881ca: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 004881d0: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 004881d6: mov dword ptr [ecx + 0xe4], eax */ W32((u32)(r_ecx+0xe4u), r_eax);
    /* 004881dc: mov dword ptr [ecx + 0xe8], eax */ W32((u32)(r_ecx+0xe8u), r_eax);
    /* 004881e2: mov dword ptr [ecx + 0xec], eax */ W32((u32)(r_ecx+0xecu), r_eax);
    /* 004881e8: mov dword ptr [ecx + 0xf0], eax */ W32((u32)(r_ecx+0xf0u), r_eax);
    /* 004881ee: mov dword ptr [ecx + 0xf4], eax */ W32((u32)(r_ecx+0xf4u), r_eax);
    /* 004881f4: ret  */ FN_RET(0x004881bc); r_esp += 4; return;
}

void f_004881f8(void) /* sub_4881F8 */
{
    FN_ENTER(0x004881f8);
    /* 004881f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004881f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004881fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004881fd: call 0x48821c */ r_esp -= 4; W32(r_esp, 0x488202u); f_0048821c();
    /* 00488202: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00488206: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00488208: jne 0x48820e */ if (!fZ) goto L_0048820e;
L_0048820a:; BB(0x0048820a);
    /* 0048820a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048820b: ret 4 */ FN_RET(0x004881f8); r_esp += 8; return;
L_0048820e:; BB(0x0048820e);
    /* 0048820e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048820f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x488214u); f_005c2f74();
    /* 00488214: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00488215: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00488216: ret 4 */ FN_RET(0x004881f8); r_esp += 8; return;
}

void f_0048821c(void) /* sub_48821C */
{
    FN_ENTER(0x0048821c);
    /* 0048821c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048821d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048821f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00488221: push 0x8cfd48 */ { u32 v = 0x8cfd48u; r_esp -= 4; W32(r_esp, v); }
    /* 00488226: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048822c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048822d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00488234: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00488237: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048823a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048823d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00488240: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00488243: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00488246: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048824d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00488250: mov eax, dword ptr [ecx + 0x54] */ r_eax = R32((u32)(r_ecx+0x54u));
    /* 00488253: mov dword ptr [ecx], 0xaf8bb0 */ W32((u32)(r_ecx), 0xaf8bb0u);
    /* 00488259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048825b: je 0x48826e */ if (fZ) goto L_0048826e;
L_0048825d:; BB(0x0048825d);
    /* 0048825d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048825e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x488263u); f_005cdcc0();
    /* 00488263: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00488264: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00488267: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
L_0048826e:; BB(0x0048826e);
    /* 0048826e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00488275: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x48827au); f_008171e8();
    /* 0048827a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048827d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00488284: mov esp, ebp */ r_esp = r_ebp;
    /* 00488286: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488287: ret  */ FN_RET(0x0048821c); r_esp += 4; return;
}

void f_00488288(void) /* sub_488288 */
{
    FN_ENTER(0x00488288);
    /* 00488288: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00488289: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048828a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048828b: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048828e: mov edi, ecx */ r_edi = r_ecx;
    /* 00488290: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x488295u); f_004f7c84();
    /* 00488295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488297: je 0x4882a0 */ if (fZ) goto L_004882a0;
L_00488299:; BB(0x00488299);
    /* 00488299: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048829c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048829d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048829e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048829f: ret  */ FN_RET(0x00488288); r_esp += 4; return;
L_004882a0:; BB(0x004882a0);
    /* 004882a0: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4882a5u); f_00520db8();
    /* 004882a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004882a7: jne 0x488299 */ if (!fZ) goto L_00488299;
L_004882a9:; BB(0x004882a9);
    /* 004882a9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004882ac: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 004882af: mov ebp, dword ptr [edi + 0x38] */ r_ebp = R32((u32)(r_edi+0x38u));
    /* 004882b2: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 004882b5: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 004882b8: cmp eax, dword ptr [0x9a6924] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9a6924u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004882be: mov dword ptr [edi + 0x4c], edx */ W32((u32)(r_edi+0x4cu), r_edx);
    /* 004882c1: mov dword ptr [edi + 0x50], ebp */ W32((u32)(r_edi+0x50u), r_ebp);
    /* 004882c4: jl 0x488651 */ if ((fS!=fO)) goto L_00488651;
L_004882ca:; BB(0x004882ca);
    /* 004882ca: cmp eax, dword ptr [0x9a6920] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9a6920u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004882d0: jg 0x488646 */ if ((!fZ&&fS==fO)) goto L_00488646;
L_004882d6:; BB(0x004882d6);
    /* 004882d6: lea ebp, [edi + 0x3c] */ r_ebp = (u32)(r_edi+0x3cu);
    /* 004882d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004882db: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4882e0u); f_0083173c();
    /* 004882e0: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004882e4: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 004882e8: fcomp dword ptr [0x901080] */ fx_compare(ST(0), R_F32((u32)(0x901080u))); FPOP();
    /* 004882ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004882f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004882f1: jbe 0x48863e */ if ((fC||fZ)) goto L_0048863e;
L_004882f7:; BB(0x004882f7);
    /* 004882f7: movzx eax, word ptr [edi + 0x20] */ r_eax = (u32)R16((u32)(r_edi+0x20u));
    /* 004882fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004882fc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x488301u); f_0068d5a8();
    /* 00488301: mov esi, eax */ r_esi = r_eax;
    /* 00488303: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00488304: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x488309u); f_0048e100();
    /* 00488309: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048830c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048830e: je 0x488636 */ if (fZ) goto L_00488636;
L_00488314:; BB(0x00488314);
    /* 00488314: fld dword ptr [0x90107c] */ FPUSH(R_F32((u32)(0x90107cu)));
    /* 0048831a: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0048831d: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00488320: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00488324: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00488327: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048832a: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0048832d: lea esi, [edi + 0x30] */ r_esi = (u32)(r_edi+0x30u);
    /* 00488330: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00488334: mov edx, esi */ r_edx = r_esi;
    /* 00488336: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48833bu); f_0082f9c4();
    /* 0048833b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048833e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x488343u); f_0083173c();
    /* 00488343: fcomp dword ptr [0x901080] */ fx_compare(ST(0), R_F32((u32)(0x901080u))); FPOP();
    /* 00488349: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048834b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048834c: jbe 0x4883f5 */ if ((fC||fZ)) goto L_004883f5;
L_00488352:; BB(0x00488352);
    /* 00488352: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00488355: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48835au); f_0082df08();
    /* 0048835a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048835c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0048835f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00488363: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00488367: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0048836b: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 0048836e: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00488370: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 00488373: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00488375: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00488377: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00488379: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0048837c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00488380: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00488384: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00488388: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0048838b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048838f: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 00488392: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00488396: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48839bu); f_0082df08();
    /* 0048839b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048839d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004883a0: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004883a4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4883a9u); f_0082ebac();
    /* 004883a9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004883ac: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4883b1u); f_0083173c();
    /* 004883b1: fcomp dword ptr [0x901080] */ fx_compare(ST(0), R_F32((u32)(0x901080u))); FPOP();
    /* 004883b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004883b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004883ba: jbe 0x4883f5 */ if ((fC||fZ)) goto L_004883f5;
L_004883bc:; BB(0x004883bc);
    /* 004883bc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004883bf: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4883c4u); f_0082df08();
    /* 004883c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004883c6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004883c9: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 004883cd: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004883cf: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004883d3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004883d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004883d9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004883db: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004883dd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004883df: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004883e1: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 004883e4: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004883e7: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 004883eb: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 004883ee: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 004883f2: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
L_004883f5:; BB(0x004883f5);
    /* 004883f5: mov ecx, esi */ r_ecx = r_esi;
    /* 004883f7: mov edx, ebp */ r_edx = r_ebp;
    /* 004883f9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4883feu); f_0082ebac();
    /* 004883fe: mov ecx, dword ptr [edi + 0x54] */ r_ecx = R32((u32)(r_edi+0x54u));
    /* 00488401: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488403: je 0x488458 */ if (fZ) goto L_00488458;
L_00488405:; BB(0x00488405);
    /* 00488405: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00488406: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x48840bu); f_00508db8();
    /* 0048840b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0048840f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00488412: mov ebp, dword ptr [edi + 0x34] */ r_ebp = R32((u32)(r_edi+0x34u));
    /* 00488415: mov esi, dword ptr [edi + 0x38] */ r_esi = R32((u32)(r_edi+0x38u));
    /* 00488418: lea edx, [edi + 0x48] */ r_edx = (u32)(r_edi+0x48u);
    /* 0048841b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0048841f: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00488423: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00488427: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48842cu); f_0082f9c4();
    /* 0048842c: lea ebp, [esp + 0x18] */ r_ebp = (u32)(r_esp+0x18u);
    /* 00488430: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00488434: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00488438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488439: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048843a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048843b: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x488440u); f_007a8d98();
    /* 00488440: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488443: mov ecx, dword ptr [edi + 0x54] */ r_ecx = R32((u32)(r_edi+0x54u));
    /* 00488446: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0048844e: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00488452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488453: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x488458u); f_00508dd0();
L_00488458:; BB(0x00488458);
    /* 00488458: mov ecx, edi */ r_ecx = r_edi;
    /* 0048845a: call 0x488668 */ r_esp -= 4; W32(r_esp, 0x48845fu); f_00488668();
    /* 0048845f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488461: je 0x488477 */ if (fZ) goto L_00488477;
L_00488463:; BB(0x00488463);
    /* 00488463: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00488467: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048846c: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00488470: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00488473: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488474: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00488475: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00488476: ret  */ FN_RET(0x00488288); r_esp += 4; return;
L_00488477:; BB(0x00488477);
    /* 00488477: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 0048847d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0048847f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00488481: jle 0x4885e9 */ if ((fZ||fS!=fO)) goto L_004885e9;
L_00488487:; BB(0x00488487);
    /* 00488487: mov dword ptr [esp + 0x68], ebx */ W32((u32)(r_esp+0x68u), r_ebx);
L_0048848b:; BB(0x0048848b);
    /* 0048848b: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00488492: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488494: je 0x4885da */ if (fZ) goto L_004885da;
L_0048849a:; BB(0x0048849a);
    /* 0048849a: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 0048849e: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 004884a2: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 004884a5: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004884a8: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004884ac: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004884b0: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004884b3: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004884b7: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 004884ba: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004884be: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004884c1: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004884c5: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 004884c8: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004884cc: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 004884cf: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004884d3: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4884d8u); f_0082f9c4();
    /* 004884d8: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 004884dc: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4884e1u); f_0083173c();
    /* 004884e1: fcom dword ptr [0x901080] */ fx_compare(ST(0), R_F32((u32)(0x901080u))); 
    /* 004884e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004884e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004884ea: fld dword ptr [0x901078] */ FPUSH(R_F32((u32)(0x901078u)));
    /* 004884f0: jbe 0x48851e */ if ((fC||fZ)) goto L_0048851e;
L_004884f2:; BB(0x004884f2);
    /* 004884f2: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004884f6: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004884f8: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004884fc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004884fe: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00488502: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00488506: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00488508: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0048850a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0048850c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048850e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00488510: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00488514: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00488516: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0048851a: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_0048851e:; BB(0x0048851e);
    /* 0048851e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00488520: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488522: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488523: ja 0x48865c */ if ((!fC&&!fZ)) goto L_0048865c;
L_00488529:; BB(0x00488529);
    /* 00488529: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 0048852d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00488531: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 00488535: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00488538: mov esi, edx */ r_esi = r_edx;
L_0048853a:; BB(0x0048853a);
    /* 0048853a: fld dword ptr [0x901030] */ FPUSH(R_F32((u32)(0x901030u)));
    /* 00488540: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00488544: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 00488547: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0048854a: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0048854d: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0048854f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00488551: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00488553: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00488555: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00488559: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0048855b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048855d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048855f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488561: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488562: jae 0x48856a */ if (!fC) goto L_0048856a;
L_00488564:; BB(0x00488564);
    /* 00488564: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00488566: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00488568: jmp 0x4885ac */ goto L_004885ac;
L_0048856a:; BB(0x0048856a);
    /* 0048856a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0048856c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048856e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048856f: jb 0x4885ac */ if (fC) goto L_004885ac;
L_00488571:; BB(0x00488571);
    /* 00488571: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00488575: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00488579: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0048857d: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00488581: mov edx, esi */ r_edx = r_esi;
    /* 00488583: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00488587: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0048858b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x488590u); f_0082f9c4();
    /* 00488590: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 00488598: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0048859c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4885a1u); f_0083173c();
    /* 004885a1: fcomp dword ptr [0x90102c] */ fx_compare(ST(0), R_F32((u32)(0x90102cu))); FPOP();
    /* 004885a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004885a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004885aa: jbe 0x4885f4 */ if ((fC||fZ)) goto L_004885f4;
L_004885ac:; BB(0x004885ac);
    /* 004885ac: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 004885b0: fadd dword ptr [esp + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x6cu));
    /* 004885b4: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004885b8: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 004885bc: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 004885c0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4885c5u); f_0082ebac();
    /* 004885c5: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 004885c9: fcomp dword ptr [esp + 0x70] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x70u))); FPOP();
    /* 004885cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004885cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004885d0: jbe 0x48853a */ if ((fC||fZ)) goto L_0048853a;
L_004885d6:; BB(0x004885d6);
    /* 004885d6: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
L_004885da:; BB(0x004885da);
    /* 004885da: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004885dd: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004885df: jl 0x48848b */ if ((fS!=fO)) goto L_0048848b;
L_004885e5:; BB(0x004885e5);
    /* 004885e5: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
L_004885e9:; BB(0x004885e9);
    /* 004885e9: add dword ptr [edi + 0x2c], 1 */ { u32 ad = (u32)(r_edi+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004885ed: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004885f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004885f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004885f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004885f3: ret  */ FN_RET(0x00488288); r_esp += 4; return;
L_004885f4:; BB(0x004885f4);
    /* 004885f4: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 004885f8: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004885fd: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00488600: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x488605u); f_0048e9d4();
    /* 00488605: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488608: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 0048860c: fild dword ptr [esp + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x5cu)));
    /* 00488610: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00488612: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00488616: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00488618: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0048861d: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00488621: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488622: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00488623: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00488625: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00488626: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048862a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048862c: push dword ptr [edi + 0x14] */ { u32 v = R32((u32)(r_edi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048862f: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x488632u); call_ind(t); }
    /* 00488632: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00488634: jmp 0x4885da */ goto L_004885da;
L_00488636:; BB(0x00488636);
    /* 00488636: lea esi, [edi + 0x30] */ r_esi = (u32)(r_edi+0x30u);
    /* 00488639: jmp 0x4883f5 */ goto L_004883f5;
L_0048863e:; BB(0x0048863e);
    /* 0048863e: lea esi, [edi + 0x30] */ r_esi = (u32)(r_edi+0x30u);
    /* 00488641: jmp 0x4883f5 */ goto L_004883f5;
L_00488646:; BB(0x00488646);
    /* 00488646: lea ebp, [edi + 0x3c] */ r_ebp = (u32)(r_edi+0x3cu);
    /* 00488649: lea esi, [edi + 0x30] */ r_esi = (u32)(r_edi+0x30u);
    /* 0048864c: jmp 0x4883f5 */ goto L_004883f5;
L_00488651:; BB(0x00488651);
    /* 00488651: lea ebp, [edi + 0x3c] */ r_ebp = (u32)(r_edi+0x3cu);
    /* 00488654: lea esi, [edi + 0x30] */ r_esi = (u32)(r_edi+0x30u);
    /* 00488657: jmp 0x4883f5 */ goto L_004883f5;
L_0048865c:; BB(0x0048865c);
    /* 0048865c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048865e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00488660: jmp 0x4885da */ goto L_004885da;
}

void f_00488668(void) /* sub_488668 */
{
    FN_ENTER(0x00488668);
    /* 00488668: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048866b: movzx eax, byte ptr [0xa46d3c] */ r_eax = (u32)R8((u32)(0xa46d3cu));
    /* 00488672: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00488674: jne 0x48868a */ if (!fZ) goto L_0048868a;
L_00488676:; BB(0x00488676);
    /* 00488676: mov dword ptr [0xa46d40], 0xc3480000 */ W32((u32)(0xa46d40u), 0xc3480000u);
    /* 00488680: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00488685: mov byte ptr [0xa46d3c], al */ W8((u32)(0xa46d3cu), (u8)r_eax);
L_0048868a:; BB(0x0048868a);
    /* 0048868a: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 0048868d: fcom dword ptr [0xa46d40] */ fx_compare(ST(0), R_F32((u32)(0xa46d40u))); 
    /* 00488693: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488695: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488696: jb 0x4886a3 */ if (fC) goto L_004886a3;
L_00488698:; BB(0x00488698);
    /* 00488698: fcom dword ptr [0x901038] */ fx_compare(ST(0), R_F32((u32)(0x901038u))); 
    /* 0048869e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004886a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004886a1: jbe 0x4886ae */ if ((fC||fZ)) goto L_004886ae;
L_004886a3:; BB(0x004886a3);
    /* 004886a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004886a5: mov eax, 1 */ r_eax = 0x1u;
    /* 004886aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004886ad: ret  */ FN_RET(0x00488668); r_esp += 4; return;
L_004886ae:; BB(0x004886ae);
    /* 004886ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004886b0: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004886b3: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004886b6: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004886be: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004886c1: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004886c5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004886c8: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4886cdu); f_0083173c();
    /* 004886cd: fcomp dword ptr [0x901034] */ fx_compare(ST(0), R_F32((u32)(0x901034u))); FPOP();
    /* 004886d3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004886d5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004886d6: jbe 0x4886e1 */ if ((fC||fZ)) goto L_004886e1;
L_004886d8:; BB(0x004886d8);
    /* 004886d8: mov eax, 1 */ r_eax = 0x1u;
    /* 004886dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004886e0: ret  */ FN_RET(0x00488668); r_esp += 4; return;
L_004886e1:; BB(0x004886e1);
    /* 004886e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004886e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004886e6: ret  */ FN_RET(0x00488668); r_esp += 4; return;
}

void f_004886e8(void) /* sub_4886E8 */
{
    FN_ENTER(0x004886e8);
    /* 004886e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004886e9: mov ebp, esp */ r_ebp = r_esp;
    /* 004886eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004886ed: push 0x8cfd70 */ { u32 v = 0x8cfd70u; r_esp -= 4; W32(r_esp, v); }
    /* 004886f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004886f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004886f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00488700: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00488703: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00488706: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00488709: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048870c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048870f: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00488711: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00488718: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48871du); f_005caba4();
    /* 0048871d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048871e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00488721: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488723: je 0x488764 */ if (fZ) goto L_00488764;
L_00488725:; BB(0x00488725);
    /* 00488725: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0048872c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00488733: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 00488737: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048873a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048873b: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048873e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00488741: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00488744: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00488747: call 0x488768 */ r_esp -= 4; W32(r_esp, 0x48874cu); f_00488768();
    /* 0048874c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048874f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00488756:; BB(0x00488756);
    /* 00488756: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00488759: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00488760: mov esp, ebp */ r_esp = r_ebp;
    /* 00488762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488763: ret  */ FN_RET(0x004886e8); r_esp += 4; return;
L_00488764:; BB(0x00488764);
    /* 00488764: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00488766: jmp 0x488756 */ goto L_00488756;
}

void f_00488768(void) /* sub_488768 */
{
    FN_ENTER(0x00488768);
    /* 00488768: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488769: mov ebp, esp */ r_ebp = r_esp;
    /* 0048876b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048876d: push 0x8cfd8c */ { u32 v = 0x8cfd8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00488772: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00488778: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488779: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00488780: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00488783: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00488786: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00488789: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0048878c: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0048878f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00488792: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00488795: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00488798: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0048879b: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0048879e: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004887a1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004887a4: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004887a7: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004887aa: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004887ad: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 004887b1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004887b4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4887b9u); f_008193cc();
    /* 004887b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004887c0: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004887c3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004887c6: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 004887c9: fcomp dword ptr [0x90105c] */ fx_compare(ST(0), R_F32((u32)(0x90105cu))); FPOP();
    /* 004887cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004887d1: mov word ptr [edx + 0x20], bx */ W16((u32)(r_edx+0x20u), (u16)r_ebx);
    /* 004887d5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004887d6: mov dword ptr [edx], 0xaf8bb0 */ W32((u32)(r_edx), 0xaf8bb0u);
    /* 004887dc: mov ecx, dword ptr [0x9a6928] */ r_ecx = R32((u32)(0x9a6928u));
    /* 004887e2: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 004887e5: ja 0x4887f0 */ if ((!fC&&!fZ)) goto L_004887f0;
L_004887e7:; BB(0x004887e7);
    /* 004887e7: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 004887ee: jmp 0x4887f6 */ goto L_004887f6;
L_004887f0:; BB(0x004887f0);
    /* 004887f0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004887f3: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
L_004887f6:; BB(0x004887f6);
    /* 004887f6: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004887f9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004887fc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004887fe: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00488801: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00488804: mov dword ptr [edx + 0x40], ebx */ W32((u32)(r_edx+0x40u), r_ebx);
    /* 00488807: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0048880a: mov dword ptr [edx + 0x44], edi */ W32((u32)(r_edx+0x44u), r_edi);
    /* 0048880d: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00488810: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x488815u); f_0083173c();
    /* 00488815: fcomp dword ptr [0x901054] */ fx_compare(ST(0), R_F32((u32)(0x901054u))); FPOP();
    /* 0048881b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048881d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048881e: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 00488821: ja 0x48882a */ if ((!fC&&!fZ)) goto L_0048882a;
L_00488823:; BB(0x00488823);
    /* 00488823: mov dword ptr [esi + 0x40], 0x3f800000 */ W32((u32)(r_esi+0x40u), 0x3f800000u);
L_0048882a:; BB(0x0048882a);
    /* 0048882a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048882d: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0048882f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00488831: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00488834: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00488837: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 0048883a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0048883d: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 00488840: mov dword ptr [esi + 0x38], ebx */ W32((u32)(r_esi+0x38u), r_ebx);
    /* 00488843: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 00488846: mov edi, dword ptr [edx + 0x34] */ r_edi = R32((u32)(r_edx+0x34u));
    /* 00488849: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0048884c: mov dword ptr [edx + 0x48], esi */ W32((u32)(r_edx+0x48u), r_esi);
    /* 0048884f: mov dword ptr [edx + 0x4c], edi */ W32((u32)(r_edx+0x4cu), r_edi);
    /* 00488852: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00488855: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x48885au); f_0077a6cc();
    /* 0048885a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048885b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0048885e: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00488861: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00488864: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00488868: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048886d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00488870: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00488873: fist dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0)));
    /* 00488876: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00488879: fcomp dword ptr [0x90105c] */ fx_compare(ST(0), R_F32((u32)(0x90105cu))); FPOP();
    /* 0048887f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488881: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00488884: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488885: je 0x4888f6 */ if (fZ) goto L_004888f6;
L_00488887:; BB(0x00488887);
    /* 00488887: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
L_0048888a:; BB(0x0048888a);
    /* 0048888a: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0048888c: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x488891u); f_0077a6cc();
    /* 00488891: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00488894: fld dword ptr [0x90105c] */ FPUSH(R_F32((u32)(0x90105cu)));
    /* 0048889a: push 0x214 */ { u32 v = 0x214u; r_esp -= 4; W32(r_esp, v); }
    /* 0048889f: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 004888a2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004888a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004888a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004888a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004888a9: ja 0x4888ad */ if ((!fC&&!fZ)) goto L_004888ad;
L_004888ab:; BB(0x004888ab);
    /* 004888ab: fst st(1) */ ST(1) = ST(0);
L_004888ad:; BB(0x004888ad);
    /* 004888ad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004888af: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 004888b2: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004888b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004888b6: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4888bbu); f_00509590();
    /* 004888bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004888be: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004888c1: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 004888c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004888c6: je 0x4888d4 */ if (fZ) goto L_004888d4;
L_004888c8:; BB(0x004888c8);
    /* 004888c8: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004888ca: mov ecx, eax */ r_ecx = r_eax;
    /* 004888cc: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4888d1u); f_00508efc();
    /* 004888d1: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
L_004888d4:; BB(0x004888d4);
    /* 004888d4: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004888d7: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004888da: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004888dd: mov eax, edx */ r_eax = r_edx;
    /* 004888df: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 004888e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004888e9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004888f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004888f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004888f3: ret 0x14 */ FN_RET(0x00488768); r_esp += 24; return;
L_004888f6:; BB(0x004888f6);
    /* 004888f6: mov dword ptr [ecx + 0x1c], 0x14 */ W32((u32)(r_ecx+0x1cu), 0x14u);
    /* 004888fd: jmp 0x48888a */ goto L_0048888a;
}

void f_00488900(void) /* sub_488900 */
{
    FN_ENTER(0x00488900);
    /* 00488900: mov dword ptr [0xa46d44], 0x3f800000 */ W32((u32)(0xa46d44u), 0x3f800000u);
    /* 0048890a: mov dword ptr [0xa46d48], 0x41000000 */ W32((u32)(0xa46d48u), 0x41000000u);
    /* 00488914: mov dword ptr [0xa46d4c], 0x3fc00000 */ W32((u32)(0xa46d4cu), 0x3fc00000u);
    /* 0048891e: ret  */ FN_RET(0x00488900); r_esp += 4; return;
}

void f_00488920(void) /* sub_488920 */
{
    FN_ENTER(0x00488920);
    /* 00488920: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00488921: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00488923: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00488925: call 0x488944 */ r_esp -= 4; W32(r_esp, 0x48892au); f_00488944();
    /* 0048892a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0048892e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00488930: jne 0x488936 */ if (!fZ) goto L_00488936;
L_00488932:; BB(0x00488932);
    /* 00488932: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00488933: ret 4 */ FN_RET(0x00488920); r_esp += 8; return;
L_00488936:; BB(0x00488936);
    /* 00488936: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00488937: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x48893cu); f_005c2f74();
    /* 0048893c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048893d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048893e: ret 4 */ FN_RET(0x00488920); r_esp += 8; return;
}

void f_00488944(void) /* sub_488944 */
{
    FN_ENTER(0x00488944);
    /* 00488944: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488945: mov ebp, esp */ r_ebp = r_esp;
    /* 00488947: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00488949: push 0x8cfda8 */ { u32 v = 0x8cfda8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048894e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00488954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488955: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048895c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048895f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00488962: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00488965: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00488968: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048896b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048896e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00488975: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00488978: mov dword ptr [edx], 0xaf8c40 */ W32((u32)(r_edx), 0xaf8c40u);
    /* 0048897e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00488980:; BB(0x00488980);
    /* 00488980: mov eax, dword ptr [edx + esi*4 + 0x444] */ r_eax = R32((u32)(r_edx+r_esi*4+0x444u));
    /* 00488987: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0048898a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048898c: je 0x4889a3 */ if (fZ) goto L_004889a3;
L_0048898e:; BB(0x0048898e);
    /* 0048898e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048898f: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x488994u); f_005cdcc0();
    /* 00488994: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00488995: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00488998: mov dword ptr [edx + ebx*2 + 0x444], 0 */ W32((u32)(r_edx+r_ebx*2+0x444u), 0x0u);
L_004889a3:; BB(0x004889a3);
    /* 004889a3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004889a6: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004889a9: jl 0x488980 */ if ((fS!=fO)) goto L_00488980;
L_004889ab:; BB(0x004889ab);
    /* 004889ab: mov ecx, dword ptr [edx + 0x460] */ r_ecx = R32((u32)(r_edx+0x460u));
    /* 004889b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004889b3: je 0x4889c7 */ if (fZ) goto L_004889c7;
L_004889b5:; BB(0x004889b5);
    /* 004889b5: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x4889bau); f_005883f0();
    /* 004889ba: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004889bd: mov dword ptr [edx + 0x460], 0 */ W32((u32)(r_edx+0x460u), 0x0u);
L_004889c7:; BB(0x004889c7);
    /* 004889c7: mov ecx, edx */ r_ecx = r_edx;
    /* 004889c9: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4889ceu); f_007b9c8c();
    /* 004889ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004889d1: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 004889d7: mov dword ptr [eax*4 + 0xa46dc4], 0 */ W32((u32)(r_eax*4+0xa46dc4u), 0x0u);
    /* 004889e2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004889e9: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x4889eeu); f_0078638c();
    /* 004889ee: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004889f1: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004889f4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004889f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004889fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00488a01: mov esp, ebp */ r_esp = r_ebp;
    /* 00488a03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488a04: ret  */ FN_RET(0x00488944); r_esp += 4; return;
}

void f_00488a08(void) /* sub_488A08 */
{
    FN_ENTER(0x00488a08);
    /* 00488a08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00488a09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00488a0a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00488a0d: mov esi, ecx */ r_esi = r_ecx;
    /* 00488a0f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x488a14u); f_004f7c84();
    /* 00488a14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488a16: je 0x488a1e */ if (fZ) goto L_00488a1e;
L_00488a18:; BB(0x00488a18);
    /* 00488a18: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00488a1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00488a1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00488a1d: ret  */ FN_RET(0x00488a08); r_esp += 4; return;
L_00488a1e:; BB(0x00488a1e);
    /* 00488a1e: call 0x48e560 */ r_esp -= 4; W32(r_esp, 0x488a23u); f_0048e560();
    /* 00488a23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488a25: je 0x488b88 */ if (fZ) goto L_00488b88;
L_00488a2b:; BB(0x00488a2b);
    /* 00488a2b: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00488a2e: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00488a31: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00488a34: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00488a37: mov eax, dword ptr [esi + 0x388] */ r_eax = R32((u32)(r_esi+0x388u));
    /* 00488a3d: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 00488a40: mov dword ptr [esi + 0x4c], ebx */ W32((u32)(r_esi+0x4cu), r_ebx);
    /* 00488a43: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00488a46: mov eax, dword ptr [eax*4 + 0x9a69d0] */ r_eax = R32((u32)(r_eax*4+0x9a69d0u));
    /* 00488a4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488a4f: je 0x488a55 */ if (fZ) goto L_00488a55;
L_00488a51:; BB(0x00488a51);
    /* 00488a51: mov ecx, esi */ r_ecx = r_esi;
    /* 00488a53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x488a55u); call_ind(t); }
L_00488a55:; BB(0x00488a55);
    /* 00488a55: mov ecx, esi */ r_ecx = r_esi;
    /* 00488a57: call 0x488ba8 */ r_esp -= 4; W32(r_esp, 0x488a5cu); f_00488ba8();
    /* 00488a5c: mov ecx, esi */ r_ecx = r_esi;
    /* 00488a5e: call 0x488f84 */ r_esp -= 4; W32(r_esp, 0x488a63u); f_00488f84();
    /* 00488a63: mov ecx, esi */ r_ecx = r_esi;
    /* 00488a65: call 0x4890e0 */ r_esp -= 4; W32(r_esp, 0x488a6au); f_004890e0();
    /* 00488a6a: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00488a70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488a72: je 0x488a86 */ if (fZ) goto L_00488a86;
L_00488a74:; BB(0x00488a74);
    /* 00488a74: mov ecx, esi */ r_ecx = r_esi;
    /* 00488a76: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x488a7bu); f_007b6880();
    /* 00488a7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00488a7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00488a7e: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x488a83u); f_006946a8();
    /* 00488a83: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00488a86:; BB(0x00488a86);
    /* 00488a86: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00488a8b: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00488a8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00488a8f: call 0x490228 */ r_esp -= 4; W32(r_esp, 0x488a94u); f_00490228();
    /* 00488a94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488a97: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00488a9d: mov edx, 0xff7f5126 */ r_edx = 0xff7f5126u;
    /* 00488aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488aa4: je 0x488aab */ if (fZ) goto L_00488aab;
L_00488aa6:; BB(0x00488aa6);
    /* 00488aa6: mov edx, 0xffffa24c */ r_edx = 0xffffa24cu;
L_00488aab:; BB(0x00488aab);
    /* 00488aab: mov eax, 1 */ r_eax = 0x1u;
    /* 00488ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488ab1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488ab2: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00488ab7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00488ab8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00488ab9: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x488abeu); f_0080575c();
    /* 00488abe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488ac1: mov ecx, esi */ r_ecx = r_esi;
    /* 00488ac3: call 0x4890fc */ r_esp -= 4; W32(r_esp, 0x488ac8u); f_004890fc();
    /* 00488ac8: mov ecx, esi */ r_ecx = r_esi;
    /* 00488aca: call 0x489150 */ r_esp -= 4; W32(r_esp, 0x488acfu); f_00489150();
    /* 00488acf: mov ecx, esi */ r_ecx = r_esi;
    /* 00488ad1: call 0x48919c */ r_esp -= 4; W32(r_esp, 0x488ad6u); f_0048919c();
    /* 00488ad6: mov ecx, esi */ r_ecx = r_esi;
    /* 00488ad8: call 0x4891e0 */ r_esp -= 4; W32(r_esp, 0x488addu); f_004891e0();
    /* 00488add: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00488ae1: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00488ae5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00488ae7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00488ae9: mov ebp, eax */ r_ebp = r_eax;
L_00488aeb:; BB(0x00488aeb);
    /* 00488aeb: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00488aee: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 00488af1: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00488af4: mov ecx, dword ptr [esi + ebp*4 + 0x444] */ r_ecx = R32((u32)(r_esi+r_ebp*4+0x444u));
    /* 00488afb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488afd: je 0x488b64 */ if (fZ) goto L_00488b64;
L_00488aff:; BB(0x00488aff);
    /* 00488aff: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00488b03: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00488b07: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00488b0a: mov edx, dword ptr [ebx + 0x9011cc] */ r_edx = R32((u32)(r_ebx+0x9011ccu));
    /* 00488b10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00488b12: jl 0x488b5b */ if ((fS!=fO)) goto L_00488b5b;
L_00488b14:; BB(0x00488b14);
    /* 00488b14: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00488b16: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00488b18: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00488b1b: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00488b1d: mov edx, dword ptr [edi + esi + 0x454] */ r_edx = R32((u32)(r_edi+r_esi+0x454u));
    /* 00488b24: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00488b27: mov edx, dword ptr [ebx + 0x9011cc] */ r_edx = R32((u32)(r_ebx+0x9011ccu));
    /* 00488b2d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00488b2f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00488b31: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00488b34: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00488b36: mov edx, dword ptr [edi + esi + 0x458] */ r_edx = R32((u32)(r_edi+r_esi+0x458u));
    /* 00488b3d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00488b41: mov edx, dword ptr [ebx + 0x9011cc] */ r_edx = R32((u32)(r_ebx+0x9011ccu));
    /* 00488b47: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00488b49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00488b4b: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00488b4e: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00488b50: mov edx, dword ptr [edi + esi + 0x45c] */ r_edx = R32((u32)(r_edi+r_esi+0x45cu));
    /* 00488b57: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_00488b5b:; BB(0x00488b5b);
    /* 00488b5b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00488b5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00488b5f: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x488b64u); f_00508db8();
L_00488b64:; BB(0x00488b64);
    /* 00488b64: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00488b67: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00488b6a: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00488b6d: jl 0x488aeb */ if ((fS!=fO)) goto L_00488aeb;
L_00488b73:; BB(0x00488b73);
    /* 00488b73: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00488b77: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00488b7b: add dword ptr [esi + 0x3d0], 1 */ { u32 ad = (u32)(r_esi+0x3d0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00488b82: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00488b85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00488b86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00488b87: ret  */ FN_RET(0x00488a08); r_esp += 4; return;
L_00488b88:; BB(0x00488b88);
    /* 00488b88: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00488b8c: mov dword ptr [esi + 0x380], 0 */ W32((u32)(r_esi+0x380u), 0x0u);
    /* 00488b96: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00488b9b: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00488b9f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00488ba2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00488ba3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00488ba4: ret  */ FN_RET(0x00488a08); r_esp += 4; return;
}

void f_00488ba8(void) /* sub_488BA8 */
{
    FN_ENTER(0x00488ba8);
    /* 00488ba8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488ba9: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00488bac: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00488bae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00488bb0: call 0x488de8 */ r_esp -= 4; W32(r_esp, 0x488bb5u); f_00488de8();
    /* 00488bb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488bb7: je 0x488c0e */ if (fZ) goto L_00488c0e;
L_00488bb9:; BB(0x00488bb9);
    /* 00488bb9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00488bbb: call 0x488e18 */ r_esp -= 4; W32(r_esp, 0x488bc0u); f_00488e18();
    /* 00488bc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488bc2: je 0x488c0e */ if (fZ) goto L_00488c0e;
L_00488bc4:; BB(0x00488bc4);
    /* 00488bc4: fld dword ptr [0x901314] */ FPUSH(R_F32((u32)(0x901314u)));
    /* 00488bca: fld dword ptr [ebp + 0x3c0] */ FPUSH(R_F32((u32)(r_ebp+0x3c0u)));
    /* 00488bd0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00488bd2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488bd4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488bd5: je 0x488c42 */ if (fZ) goto L_00488c42;
L_00488bd7:; BB(0x00488bd7);
    /* 00488bd7: fld dword ptr [0x9010bc] */ FPUSH(R_F32((u32)(0x9010bcu)));
    /* 00488bdd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00488bdf: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00488be1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00488be3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00488be5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488be7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488be8: mov dword ptr [ebp + 0x3c4], 0 */ W32((u32)(r_ebp+0x3c4u), 0x0u);
    /* 00488bf2: jbe 0x488c03 */ if ((fC||fZ)) goto L_00488c03;
L_00488bf4:; BB(0x00488bf4);
    /* 00488bf4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00488bf6: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00488bfb: mov dword ptr [ebp + 0x3c0], eax */ W32((u32)(r_ebp+0x3c0u), r_eax);
    /* 00488c01: jmp 0x488c09 */ goto L_00488c09;
L_00488c03:; BB(0x00488c03);
    /* 00488c03: fstp dword ptr [ebp + 0x3c0] */ W_F32((u32)(r_ebp+0x3c0u), ST(0)); FPOP();
L_00488c09:; BB(0x00488c09);
    /* 00488c09: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00488c0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488c0d: ret  */ FN_RET(0x00488ba8); r_esp += 4; return;
L_00488c0e:; BB(0x00488c0e);
    /* 00488c0e: fld dword ptr [0x901310] */ FPUSH(R_F32((u32)(0x901310u)));
    /* 00488c14: fld dword ptr [0x9010a0] */ FPUSH(R_F32((u32)(0x9010a0u)));
    /* 00488c1a: fadd dword ptr [ebp + 0x3c0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3c0u));
    /* 00488c20: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00488c22: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488c24: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488c25: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00488c27: ja 0x488c2b */ if ((!fC&&!fZ)) goto L_00488c2b;
L_00488c29:; BB(0x00488c29);
    /* 00488c29: fst st(1) */ ST(1) = ST(0);
L_00488c2b:; BB(0x00488c2b);
    /* 00488c2b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00488c2d: fstp dword ptr [ebp + 0x3c0] */ W_F32((u32)(r_ebp+0x3c0u), ST(0)); FPOP();
    /* 00488c33: mov dword ptr [ebp + 0x3c4], 0 */ W32((u32)(r_ebp+0x3c4u), 0x0u);
    /* 00488c3d: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00488c40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488c41: ret  */ FN_RET(0x00488ba8); r_esp += 4; return;
L_00488c42:; BB(0x00488c42);
    /* 00488c42: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00488c44: fld dword ptr [0x9010b8] */ FPUSH(R_F32((u32)(0x9010b8u)));
    /* 00488c4a: fadd dword ptr [ebp + 0x3c4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3c4u));
    /* 00488c50: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00488c52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488c54: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488c55: jbe 0x488c6c */ if ((fC||fZ)) goto L_00488c6c;
L_00488c57:; BB(0x00488c57);
    /* 00488c57: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00488c59: fld dword ptr [0x901314] */ FPUSH(R_F32((u32)(0x901314u)));
    /* 00488c5f: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00488c64: mov dword ptr [ebp + 0x3c4], eax */ W32((u32)(r_ebp+0x3c4u), r_eax);
    /* 00488c6a: jmp 0x488c72 */ goto L_00488c72;
L_00488c6c:; BB(0x00488c6c);
    /* 00488c6c: fst dword ptr [ebp + 0x3c4] */ W_F32((u32)(r_ebp+0x3c4u), ST(0));
L_00488c72:; BB(0x00488c72);
    /* 00488c72: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00488c74: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488c76: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488c77: jne 0x488c09 */ if (!fZ) goto L_00488c09;
L_00488c79:; BB(0x00488c79);
    /* 00488c79: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x488c7eu); f_0052cf54();
    /* 00488c7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488c80: je 0x488dcf */ if (fZ) goto L_00488dcf;
L_00488c86:; BB(0x00488c86);
    /* 00488c86: mov ecx, dword ptr [ebp + 0x380] */ r_ecx = R32((u32)(r_ebp+0x380u));
    /* 00488c8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488c8e: je 0x488dcf */ if (fZ) goto L_00488dcf;
L_00488c94:; BB(0x00488c94);
    /* 00488c94: call 0x49e2f8 */ r_esp -= 4; W32(r_esp, 0x488c99u); f_0049e2f8();
    /* 00488c99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488c9b: jne 0x488dcf */ if (!fZ) goto L_00488dcf;
L_00488ca1:; BB(0x00488ca1);
    /* 00488ca1: movzx eax, byte ptr [0xa46d94] */ r_eax = (u32)R8((u32)(0xa46d94u));
    /* 00488ca8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00488caa: jne 0x488cc0 */ if (!fZ) goto L_00488cc0;
L_00488cac:; BB(0x00488cac);
    /* 00488cac: mov dword ptr [0xa46d98], 0x42200000 */ W32((u32)(0xa46d98u), 0x42200000u);
    /* 00488cb6: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00488cbb: mov byte ptr [0xa46d94], al */ W8((u32)(0xa46d94u), (u8)r_eax);
L_00488cc0:; BB(0x00488cc0);
    /* 00488cc0: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 00488cc4: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 00488cc8: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 00488ccc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00488cce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00488cd0: mov ebx, eax */ r_ebx = r_eax;
    /* 00488cd2: mov esi, edx */ r_esi = r_edx;
L_00488cd4:; BB(0x00488cd4);
    /* 00488cd4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x488cd9u); f_008587a5();
    /* 00488cd9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00488cdd: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00488ce1: fdiv dword ptr [0x901304] */ ST(0) = ST(0) / R_F32((u32)(0x901304u));
    /* 00488ce7: fadd dword ptr [0x901308] */ ST(0) = ST(0) + R_F32((u32)(0x901308u));
    /* 00488ced: fmul dword ptr [0x9010b4] */ ST(0) = ST(0) * R_F32((u32)(0x9010b4u));
    /* 00488cf3: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00488cf7: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00488cfc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00488d01: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00488d05: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00488d09: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00488d0d: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00488d11: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00488d15: add edi, dword ptr [ebx + 0x9010a8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x9010a8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00488d1b: add edi, dword ptr [ebp + 0x60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x60u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00488d1e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x488d23u); f_008587a5();
    /* 00488d23: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00488d27: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00488d2b: fdiv dword ptr [0x901300] */ ST(0) = ST(0) / R_F32((u32)(0x901300u));
    /* 00488d31: fmul dword ptr [0xa46d98] */ ST(0) = ST(0) * R_F32((u32)(0xa46d98u));
    /* 00488d37: mov eax, dword ptr [ebp + 0x454] */ r_eax = R32((u32)(r_ebp+0x454u));
    /* 00488d3d: fadd dword ptr [0x9010a4] */ ST(0) = ST(0) + R_F32((u32)(0x9010a4u));
    /* 00488d43: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00488d47: mov ecx, edi */ r_ecx = r_edi;
    /* 00488d49: mov dword ptr [esp + esi], eax */ W32((u32)(r_esp+r_esi), r_eax);
    /* 00488d4c: mov eax, dword ptr [ebp + 0x458] */ r_eax = R32((u32)(r_ebp+0x458u));
    /* 00488d52: mov dword ptr [esp + esi + 4], eax */ W32((u32)(r_esp+r_esi+0x4u), r_eax);
    /* 00488d56: mov eax, dword ptr [ebp + 0x45c] */ r_eax = R32((u32)(r_ebp+0x45cu));
    /* 00488d5c: mov dword ptr [esp + esi + 8], eax */ W32((u32)(r_esp+r_esi+0x8u), r_eax);
    /* 00488d60: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x488d65u); f_0082dcbc();
    /* 00488d65: fmul dword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x58u));
    /* 00488d69: fadd dword ptr [esp + esi] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_esi));
    /* 00488d6c: fstp dword ptr [esp + esi] */ W_F32((u32)(r_esp+r_esi), ST(0)); FPOP();
    /* 00488d6f: mov dword ptr [esp + esi + 4], 0 */ W32((u32)(r_esp+r_esi+0x4u), 0x0u);
    /* 00488d77: mov ecx, edi */ r_ecx = r_edi;
    /* 00488d79: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x488d7eu); f_0082ddd8();
    /* 00488d7e: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00488d82: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00488d84: fadd dword ptr [esp + esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_esi+0x8u));
    /* 00488d88: fstp dword ptr [esp + esi + 8] */ W_F32((u32)(r_esp+r_esi+0x8u), ST(0)); FPOP();
    /* 00488d8c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00488d8f: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00488d94: lea edi, [ecx + esi] */ r_edi = (u32)(r_ecx+r_esi);
    /* 00488d97: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00488d98: call 0x490168 */ r_esp -= 4; W32(r_esp, 0x488d9du); f_00490168();
    /* 00488d9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488da0: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00488da3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00488da6: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00488da9: jl 0x488cd4 */ if ((fS!=fO)) goto L_00488cd4;
L_00488daf:; BB(0x00488daf);
    /* 00488daf: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 00488db3: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 00488db7: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00488dbb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00488dbe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00488dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488dc1: push dword ptr [ebp + 0x38c] */ { u32 v = R32((u32)(r_ebp+0x38cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00488dc7: call 0x48cc04 */ r_esp -= 4; W32(r_esp, 0x488dccu); f_0048cc04();
    /* 00488dcc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00488dcf:; BB(0x00488dcf);
    /* 00488dcf: mov dword ptr [ebp + 0x3c0], 0 */ W32((u32)(r_ebp+0x3c0u), 0x0u);
    /* 00488dd9: mov dword ptr [ebp + 0x3c4], 0 */ W32((u32)(r_ebp+0x3c4u), 0x0u);
    /* 00488de3: jmp 0x488c09 */ goto L_00488c09;
}

void f_00488de8(void) /* sub_488DE8 */
{
    FN_ENTER(0x00488de8);
    /* 00488de8: mov eax, dword ptr [ecx + 0x388] */ r_eax = R32((u32)(r_ecx+0x388u));
    /* 00488dee: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488df1: jne 0x488e15 */ if (!fZ) goto L_00488e15;
L_00488df3:; BB(0x00488df3);
    /* 00488df3: movzx eax, word ptr [ecx + 0x410] */ r_eax = (u32)R16((u32)(r_ecx+0x410u));
    /* 00488dfa: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00488dff: je 0x488e15 */ if (fZ) goto L_00488e15;
L_00488e01:; BB(0x00488e01);
    /* 00488e01: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00488e04: fcomp dword ptr [0x9010c0] */ fx_compare(ST(0), R_F32((u32)(0x9010c0u))); FPOP();
    /* 00488e0a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488e0c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488e0d: ja 0x488e15 */ if ((!fC&&!fZ)) goto L_00488e15;
L_00488e0f:; BB(0x00488e0f);
    /* 00488e0f: mov eax, 1 */ r_eax = 0x1u;
    /* 00488e14: ret  */ FN_RET(0x00488de8); r_esp += 4; return;
L_00488e15:; BB(0x00488e15);
    /* 00488e15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00488e17: ret  */ FN_RET(0x00488de8); r_esp += 4; return;
}

void f_00488e18(void) /* sub_488E18 */
{
    FN_ENTER(0x00488e18);
    /* 00488e18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00488e19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00488e1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00488e1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00488e1c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00488e1f: mov esi, ecx */ r_esi = r_ecx;
    /* 00488e21: movzx eax, word ptr [esi + 0x410] */ r_eax = (u32)R16((u32)(r_esi+0x410u));
    /* 00488e28: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488e2d: je 0x488f78 */ if (fZ) goto L_00488f78;
L_00488e33:; BB(0x00488e33);
    /* 00488e33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488e34: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x488e39u); f_0068d5a8();
    /* 00488e39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00488e3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00488e3c: je 0x488f78 */ if (fZ) goto L_00488f78;
L_00488e42:; BB(0x00488e42);
    /* 00488e42: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00488e45: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 00488e48: fld dword ptr [esi + 0x454] */ FPUSH(R_F32((u32)(r_esi+0x454u)));
    /* 00488e4e: mov ebp, dword ptr [esi + 0x454] */ r_ebp = R32((u32)(r_esi+0x454u));
    /* 00488e54: fld dword ptr [esi + 0x45c] */ FPUSH(R_F32((u32)(r_esi+0x45cu)));
    /* 00488e5a: fld dword ptr [esi + 0x3c0] */ FPUSH(R_F32((u32)(r_esi+0x3c0u)));
    /* 00488e60: fcomp dword ptr [0x9012f8] */ fx_compare(ST(0), R_F32((u32)(0x9012f8u))); FPOP();
    /* 00488e66: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488e68: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488e69: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00488e71: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00488e74: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00488e78: mov ebx, dword ptr [esi + 0x45c] */ r_ebx = R32((u32)(r_esi+0x45cu));
    /* 00488e7e: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00488e82: mov ebp, dword ptr [esi + 0x458] */ r_ebp = R32((u32)(r_esi+0x458u));
    /* 00488e88: je 0x488f26 */ if (fZ) goto L_00488f26;
L_00488e8e:; BB(0x00488e8e);
    /* 00488e8e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00488e90: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00488e92:; BB(0x00488e92);
    /* 00488e92: movzx eax, byte ptr [0xa46d54] */ r_eax = (u32)R8((u32)(0xa46d54u));
    /* 00488e99: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00488e9d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00488e9f: jne 0x488eb5 */ if (!fZ) goto L_00488eb5;
L_00488ea1:; BB(0x00488ea1);
    /* 00488ea1: mov dword ptr [0xa46d58], 0x42b40000 */ W32((u32)(0xa46d58u), 0x42b40000u);
    /* 00488eab: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00488eb0: mov byte ptr [0xa46d54], al */ W8((u32)(0xa46d54u), (u8)r_eax);
L_00488eb5:; BB(0x00488eb5);
    /* 00488eb5: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00488eb9: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00488ebc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00488ec0: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00488ec4: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00488ec8: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x488ecdu); f_0082dcbc();
    /* 00488ecd: fld dword ptr [0xa46d58] */ FPUSH(R_F32((u32)(0xa46d58u)));
    /* 00488ed3: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00488ed6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00488ed8: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00488edc: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00488ee0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00488ee8: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x488eedu); f_0082ddd8();
    /* 00488eed: fld dword ptr [0xa46d58] */ FPUSH(R_F32((u32)(0xa46d58u)));
    /* 00488ef3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00488ef5: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 00488ef9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00488efd: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00488f01: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00488f04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488f05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00488f06: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x488f0bu); f_00836208();
    /* 00488f0b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488f0e: fcomp dword ptr [0x9010c4] */ fx_compare(ST(0), R_F32((u32)(0x9010c4u))); FPOP();
    /* 00488f14: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488f16: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488f17: ja 0x488f78 */ if ((!fC&&!fZ)) goto L_00488f78;
L_00488f19:; BB(0x00488f19);
    /* 00488f19: mov eax, 1 */ r_eax = 0x1u;
    /* 00488f1e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00488f21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00488f22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488f23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00488f24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00488f25: ret  */ FN_RET(0x00488e18); r_esp += 4; return;
L_00488f26:; BB(0x00488f26);
    /* 00488f26: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00488f29: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00488f2b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00488f2f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00488f31: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00488f33: fmul qword ptr [0x9011b8] */ ST(0) = ST(0) * R_F64((u32)(0x9011b8u));
    /* 00488f39: fdiv qword ptr [0x9011b0] */ ST(0) = ST(0) / R_F64((u32)(0x9011b0u));
    /* 00488f3f: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00488f43: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00488f48: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00488f4d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00488f51: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00488f55: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00488f59: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00488f5d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00488f61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00488f62: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00488f65: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x488f6au); f_007a9018();
    /* 00488f6a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00488f6d: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00488f72: jle 0x488e92 */ if ((fZ||fS!=fO)) goto L_00488e92;
L_00488f78:; BB(0x00488f78);
    /* 00488f78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00488f7a: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00488f7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00488f7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00488f7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00488f80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00488f81: ret  */ FN_RET(0x00488e18); r_esp += 4; return;
}

void f_00488f84(void) /* sub_488F84 */
{
    FN_ENTER(0x00488f84);
    /* 00488f84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00488f85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00488f87: mov eax, dword ptr [ebx + 0x3e4] */ r_eax = R32((u32)(r_ebx+0x3e4u));
    /* 00488f8d: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00488f90: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00488f93: fld dword ptr [ebx + 0x3e8] */ FPUSH(R_F32((u32)(r_ebx+0x3e8u)));
    /* 00488f99: fadd dword ptr [ebx + 0x3ec] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3ecu));
    /* 00488f9f: mov eax, dword ptr [ebx + 0x3e0] */ r_eax = R32((u32)(r_ebx+0x3e0u));
    /* 00488fa5: fst dword ptr [ebx + 0x3e8] */ W_F32((u32)(r_ebx+0x3e8u), ST(0));
    /* 00488fab: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00488fae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00488fb0: fadd dword ptr [edx*4 + 0x9011a8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9011a8u));
    /* 00488fb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00488fb9: jne 0x488fd0 */ if (!fZ) goto L_00488fd0;
L_00488fbb:; BB(0x00488fbb);
    /* 00488fbb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00488fbd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488fbf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488fc0: ja 0x489044 */ if ((!fC&&!fZ)) goto L_00489044;
L_00488fc6:; BB(0x00488fc6);
    /* 00488fc6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00488fc8: fstp dword ptr [ebx + 0x3e8] */ W_F32((u32)(r_ebx+0x3e8u), ST(0)); FPOP();
    /* 00488fce: jmp 0x48900c */ goto L_0048900c;
L_00488fd0:; BB(0x00488fd0);
    /* 00488fd0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00488fd3: jne 0x489008 */ if (!fZ) goto L_00489008;
L_00488fd5:; BB(0x00488fd5);
    /* 00488fd5: fld dword ptr [0x9012f0] */ FPUSH(R_F32((u32)(0x9012f0u)));
    /* 00488fdb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00488fdd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00488fdf: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00488fe1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00488fe3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00488fe4: jae 0x488fea */ if (!fC) goto L_00488fea;
L_00488fe6:; BB(0x00488fe6);
    /* 00488fe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00488fe8: jmp 0x48900c */ goto L_0048900c;
L_00488fea:; BB(0x00488fea);
    /* 00488fea: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 00488ff0: fstp dword ptr [ebx + 0x3e8] */ W_F32((u32)(r_ebx+0x3e8u), ST(0)); FPOP();
    /* 00488ff6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00488ff8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00488ffa: push dword ptr [eax*8 + 0x9a6944] */ { u32 v = R32((u32)(r_eax*8+0x9a6944u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489001: call 0x489050 */ r_esp -= 4; W32(r_esp, 0x489006u); f_00489050();
    /* 00489006: jmp 0x48900c */ goto L_0048900c;
L_00489008:; BB(0x00489008);
    /* 00489008: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048900a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0048900c:; BB(0x0048900c);
    /* 0048900c: fld dword ptr [ebx + 0x3f0] */ FPUSH(R_F32((u32)(r_ebx+0x3f0u)));
    /* 00489012: fcom dword ptr [0x9012ec] */ fx_compare(ST(0), R_F32((u32)(0x9012ecu))); 
    /* 00489018: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048901a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048901b: je 0x48904a */ if (fZ) goto L_0048904a;
L_0048901d:; BB(0x0048901d);
    /* 0048901d: fld dword ptr [ebx + 0x3f4] */ FPUSH(R_F32((u32)(r_ebx+0x3f4u)));
    /* 00489023: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00489025: fcom dword ptr [0x9012e8] */ fx_compare(ST(0), R_F32((u32)(0x9012e8u))); 
    /* 0048902b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048902d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048902e: jb 0x48903c */ if (fC) goto L_0048903c;
L_00489030:; BB(0x00489030);
    /* 00489030: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00489032: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00489034: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 0048903a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048903b: ret  */ FN_RET(0x00488f84); r_esp += 4; return;
L_0048903c:; BB(0x0048903c);
    /* 0048903c: fstp dword ptr [ebx + 0x3f0] */ W_F32((u32)(r_ebx+0x3f0u), ST(0)); FPOP();
    /* 00489042: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489043: ret  */ FN_RET(0x00488f84); r_esp += 4; return;
L_00489044:; BB(0x00489044);
    /* 00489044: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00489046: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00489048: jmp 0x48900c */ goto L_0048900c;
L_0048904a:; BB(0x0048904a);
    /* 0048904a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048904c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048904d: ret  */ FN_RET(0x00488f84); r_esp += 4; return;
}

