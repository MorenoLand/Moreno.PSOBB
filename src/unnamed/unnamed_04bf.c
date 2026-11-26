#include "protos.h"

void f_004bf0a4(void) /* sub_4BF0A4 */
{
    FN_ENTER(0x004bf0a4);
    /* 004bf0a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bf0a5: mov ebp, esp */ r_ebp = r_esp;
    /* 004bf0a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf0a9: push 0x8d12b4 */ { u32 v = 0x8d12b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf0ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bf0b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf0b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bf0bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bf0bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bf0c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004bf0c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004bf0c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004bf0cb: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf0d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004bf0d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf0dcu); f_005caba4();
    /* 004bf0dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bf0dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004bf0e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bf0e2: je 0x4bf107 */ if (fZ) goto L_004bf107;
L_004bf0e4:; BB(0x004bf0e4);
    /* 004bf0e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004bf0eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bf0f2: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf0f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bf0fb: call 0x4bf118 */ r_esp -= 4; W32(r_esp, 0x4bf100u); f_004bf118();
    /* 004bf100: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004bf107:; BB(0x004bf107);
    /* 004bf107: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bf10a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bf111: mov esp, ebp */ r_esp = r_ebp;
    /* 004bf113: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bf114: ret  */ FN_RET(0x004bf0a4); r_esp += 4; return;
}

void f_004bf118(void) /* sub_4BF118 */
{
    FN_ENTER(0x004bf118);
    /* 004bf118: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bf119: mov ebp, esp */ r_ebp = r_esp;
    /* 004bf11b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf11d: push 0x8d1450 */ { u32 v = 0x8d1450u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf122: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bf128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf129: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bf130: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bf136: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bf139: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004bf13c: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004bf13f: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004bf142: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf145: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004bf148: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4bf14du); f_008193cc();
    /* 004bf14d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bf154: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf157: mov dword ptr [ecx], 0xafb668 */ W32((u32)(r_ecx), 0xafb668u);
    /* 004bf15d: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bf160: call 0x78309c */ r_esp -= 4; W32(r_esp, 0x4bf165u); f_0078309c();
    /* 004bf165: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004bf16c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 004bf176: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf178: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf17du); f_005caba4();
    /* 004bf17d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bf17e: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 004bf184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf186: je 0x4bf7f3 */ if (fZ) goto L_004bf7f3;
L_004bf18c:; BB(0x004bf18c);
    /* 004bf18c: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 004bf196: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004bf19d: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf1a0: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004bf1a6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4bf1abu); f_008193cc();
    /* 004bf1ab: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004bf1b1: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_004bf1bb:; BB(0x004bf1bb);
    /* 004bf1bb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf1be: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 004bf1c4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004bf1cb: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 004bf1d2: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf1d4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf1d9u); f_005caba4();
    /* 004bf1d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bf1da: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 004bf1e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf1e2: je 0x4bf7ec */ if (fZ) goto L_004bf7ec;
L_004bf1e8:; BB(0x004bf1e8);
    /* 004bf1e8: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 004bf1ef: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004bf1f6: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf1f9: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004bf1ff: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4bf204u); f_008193cc();
    /* 004bf204: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004bf20a: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_004bf211:; BB(0x004bf211);
    /* 004bf211: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf214: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 004bf21a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004bf221: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 004bf228: mov dword ptr [ecx + 0x84], 0x45fa0000 */ W32((u32)(r_ecx+0x84u), 0x45fa0000u);
    /* 004bf232: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bf235: call 0x7830ac */ r_esp -= 4; W32(r_esp, 0x4bf23au); f_007830ac();
    /* 004bf23a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf23d: mov dword ptr [edx + 0x50], 0x3f800000 */ W32((u32)(r_edx+0x50u), 0x3f800000u);
    /* 004bf244: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bf246: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 004bf249: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 004bf250: mov dword ptr [0xa48488], eax */ W32((u32)(0xa48488u), r_eax);
    /* 004bf255: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 004bf258: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 004bf25f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bf261: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004bf264: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 004bf26b: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
    /* 004bf272: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 004bf279: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
    /* 004bf283: mov dword ptr [edx + 0x74], 0x1e */ W32((u32)(r_edx+0x74u), 0x1eu);
L_004bf28a:; BB(0x004bf28a);
    /* 004bf28a: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 004bf291: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf293: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf298u); f_005caba4();
    /* 004bf298: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf29a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bf29d: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 004bf2a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf2a2: je 0x4bf2e1 */ if (fZ) goto L_004bf2e1;
L_004bf2a4:; BB(0x004bf2a4);
    /* 004bf2a4: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 004bf2ab: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004bf2b2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf2b5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004bf2b8: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004bf2bb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004bf2bd: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 004bf2c0: lea ebx, [edx + 0x5c] */ r_ebx = (u32)(r_edx+0x5cu);
    /* 004bf2c3: lea eax, [esi + edi + 0x9abe8c] */ r_eax = (u32)(r_esi+r_edi+0x9abe8cu);
    /* 004bf2ca: lea esi, [esi + edi + 0x9077d4] */ r_esi = (u32)(r_esi+r_edi+0x9077d4u);
    /* 004bf2d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf2d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bf2d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf2d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf2d5: call 0x4be8b4 */ r_esp -= 4; W32(r_esp, 0x4bf2dau); f_004be8b4();
    /* 004bf2da: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_004bf2e1:; BB(0x004bf2e1);
    /* 004bf2e1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004bf2e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004bf2eb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004bf2ee: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004bf2f1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bf2f4: jl 0x4bf28a */ if ((fS!=fO)) goto L_004bf28a;
L_004bf2f6:; BB(0x004bf2f6);
    /* 004bf2f6: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 004bf2fd: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf2ff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf304u); f_005caba4();
    /* 004bf304: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bf305: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004bf308: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf30a: je 0x4bf3a2 */ if (fZ) goto L_004bf3a2;
L_004bf310:; BB(0x004bf310);
    /* 004bf310: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 004bf317: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004bf31e: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004bf321: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf324: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 004bf32a: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 004bf330: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 004bf336: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf337: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4bf33cu); f_008193cc();
    /* 004bf33c: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004bf343: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 004bf349: mov dword ptr [eax], 0xafb6a8 */ W32((u32)(r_eax), 0xafb6a8u);
    /* 004bf34f: mov ecx, dword ptr [0xa47fc0] */ r_ecx = R32((u32)(0xa47fc0u));
    /* 004bf355: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf357: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4bf35cu); f_005b8610();
    /* 004bf35c: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004bf362: mov ecx, dword ptr [0xa47fc0] */ r_ecx = R32((u32)(0xa47fc0u));
    /* 004bf368: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf36a: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004bf36d: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4bf372u); f_005b8638();
    /* 004bf372: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004bf378: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 004bf37f: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 004bf382: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 004bf385: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004bf388: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004bf38b: fadd dword ptr [edx*4 + 0x907710] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x907710u));
    /* 004bf392: fadd dword ptr [0x9077f8] */ ST(0) = ST(0) + R_F32((u32)(0x9077f8u));
    /* 004bf398: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 004bf39f: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
L_004bf3a2:; BB(0x004bf3a2);
    /* 004bf3a2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004bf3a9: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 004bf3b0: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf3b2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf3b7u); f_005caba4();
    /* 004bf3b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bf3b8: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004bf3bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf3bd: je 0x4bf455 */ if (fZ) goto L_004bf455;
L_004bf3c3:; BB(0x004bf3c3);
    /* 004bf3c3: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 004bf3ca: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 004bf3d1: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004bf3d4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf3d7: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 004bf3dd: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 004bf3e3: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 004bf3e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf3ea: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4bf3efu); f_008193cc();
    /* 004bf3ef: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 004bf3f6: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 004bf3fc: mov dword ptr [eax], 0xafb6a8 */ W32((u32)(r_eax), 0xafb6a8u);
    /* 004bf402: mov ecx, dword ptr [0xa47fc0] */ r_ecx = R32((u32)(0xa47fc0u));
    /* 004bf408: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf40a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4bf40fu); f_005b8610();
    /* 004bf40f: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 004bf415: mov ecx, dword ptr [0xa47fc0] */ r_ecx = R32((u32)(0xa47fc0u));
    /* 004bf41b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf41d: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004bf420: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4bf425u); f_005b8638();
    /* 004bf425: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 004bf42b: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 004bf432: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 004bf435: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 004bf438: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004bf43b: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004bf43e: fadd dword ptr [edx*4 + 0x907710] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x907710u));
    /* 004bf445: fadd dword ptr [0x9077f8] */ ST(0) = ST(0) + R_F32((u32)(0x9077f8u));
    /* 004bf44b: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 004bf452: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
L_004bf455:; BB(0x004bf455);
    /* 004bf455: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004bf45c: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 004bf463: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf465: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf46au); f_005caba4();
    /* 004bf46a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bf46b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004bf46e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf470: je 0x4bf508 */ if (fZ) goto L_004bf508;
L_004bf476:; BB(0x004bf476);
    /* 004bf476: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 004bf47d: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 004bf484: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004bf487: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf48a: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 004bf490: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 004bf496: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 004bf49c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf49d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4bf4a2u); f_008193cc();
    /* 004bf4a2: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004bf4a9: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 004bf4af: mov dword ptr [eax], 0xafb6a8 */ W32((u32)(r_eax), 0xafb6a8u);
    /* 004bf4b5: mov ecx, dword ptr [0xa47fc0] */ r_ecx = R32((u32)(0xa47fc0u));
    /* 004bf4bb: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf4bd: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4bf4c2u); f_005b8610();
    /* 004bf4c2: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 004bf4c8: mov ecx, dword ptr [0xa47fc0] */ r_ecx = R32((u32)(0xa47fc0u));
    /* 004bf4ce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf4d0: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004bf4d3: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4bf4d8u); f_005b8638();
    /* 004bf4d8: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 004bf4de: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 004bf4e5: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 004bf4e8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 004bf4eb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004bf4ee: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004bf4f1: fadd dword ptr [edx*4 + 0x907710] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x907710u));
    /* 004bf4f8: fadd dword ptr [0x9077f8] */ ST(0) = ST(0) + R_F32((u32)(0x9077f8u));
    /* 004bf4fe: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 004bf505: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
L_004bf508:; BB(0x004bf508);
    /* 004bf508: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004bf50f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf511: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf517: call 0x8115f0 */ r_esp -= 4; W32(r_esp, 0x4bf51cu); f_008115f0();
    /* 004bf51c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bf51f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf521: jne 0x4bf642 */ if (!fZ) goto L_004bf642;
L_004bf527:; BB(0x004bf527);
    /* 004bf527: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf52a: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 004bf52d: fld dword ptr [ecx + 0x84] */ FPUSH(R_F32((u32)(r_ecx+0x84u)));
    /* 004bf533: mov ebx, dword ptr [ecx + 0x84] */ r_ebx = R32((u32)(r_ecx+0x84u));
    /* 004bf539: fld dword ptr [ecx + 0x84] */ FPUSH(R_F32((u32)(r_ecx+0x84u)));
    /* 004bf53f: fchs  */ ST(0) = -ST(0);
    /* 004bf541: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004bf543: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bf545: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bf546: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004bf54d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 004bf550: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 004bf553: jae 0x8d1449 */ if (!fC) goto L_008d1449;
L_004bf559:; BB(0x004bf559);
    /* 004bf559: fcom dword ptr [0x9077f4] */ fx_compare(ST(0), R_F32((u32)(0x9077f4u))); 
    /* 004bf55f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bf561: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bf562: jae 0x4bf5c4 */ if (!fC) goto L_004bf5c4;
L_004bf564:; BB(0x004bf564);
    /* 004bf564: fcom dword ptr [0x9077f0] */ fx_compare(ST(0), R_F32((u32)(0x9077f0u))); 
    /* 004bf56a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bf56c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bf56d: jbe 0x4bf5c4 */ if ((fC||fZ)) goto L_004bf5c4;
L_004bf56f:; BB(0x004bf56f);
    /* 004bf56f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bf571: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004bf578: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf57d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf582u); f_005caba4();
    /* 004bf582: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bf583: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004bf586: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf588: je 0x4bf5bb */ if (fZ) goto L_004bf5bb;
L_004bf58a:; BB(0x004bf58a);
    /* 004bf58a: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 004bf591: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 004bf598: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf59b: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf5a1: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 004bf5a4: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf5a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf5a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf5a9: push dword ptr [ebx + 0x8c] */ { u32 v = R32((u32)(r_ebx+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf5af: call 0x4bf7fc */ r_esp -= 4; W32(r_esp, 0x4bf5b4u); f_004bf7fc();
    /* 004bf5b4: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004bf5bb:; BB(0x004bf5bb);
    /* 004bf5bb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004bf5c2: jmp 0x4bf617 */ goto L_004bf617;
L_004bf5c4:; BB(0x004bf5c4);
    /* 004bf5c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bf5c6: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004bf5cd: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf5d2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf5d7u); f_005caba4();
    /* 004bf5d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bf5d8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004bf5db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf5dd: je 0x4bf610 */ if (fZ) goto L_004bf610;
L_004bf5df:; BB(0x004bf5df);
    /* 004bf5df: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004bf5e6: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 004bf5ed: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf5f0: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf5f6: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 004bf5f9: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf5fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf5fc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf5fe: push dword ptr [ebx + 0x8c] */ { u32 v = R32((u32)(r_ebx+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf604: call 0x4bf7fc */ r_esp -= 4; W32(r_esp, 0x4bf609u); f_004bf7fc();
    /* 004bf609: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004bf610:; BB(0x004bf610);
    /* 004bf610: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_004bf617:; BB(0x004bf617);
    /* 004bf617: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004bf61a: fsub dword ptr [0x907884] */ ST(0) = ST(0) - R_F32((u32)(0x907884u));
    /* 004bf620: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf623: fld dword ptr [edx + 0x84] */ FPUSH(R_F32((u32)(r_edx+0x84u)));
    /* 004bf629: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bf62b: fst dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0));
    /* 004bf62e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bf630: fchs  */ ST(0) = -ST(0);
    /* 004bf632: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004bf634: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bf636: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bf637: jb 0x4bf559 */ if (fC) goto L_004bf559;
L_004bf63d:; BB(0x004bf63d);
    /* 004bf63d: jmp 0x4bf74a */ goto L_004bf74a;
L_004bf642:; BB(0x004bf642);
    /* 004bf642: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf645: fld dword ptr [0x9077ec] */ FPUSH(R_F32((u32)(0x9077ecu)));
    /* 004bf64b: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004bf64e: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 004bf651: mov dword ptr [eax + 0x84], 0x45fa0000 */ W32((u32)(r_eax+0x84u), 0x45fa0000u);
    /* 004bf65b: mov dword ptr [ebp - 0x5c], 0x45fa0000 */ W32((u32)(r_ebp+0xffffffa4u), 0x45fa0000u);
    /* 004bf662: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_004bf669:; BB(0x004bf669);
    /* 004bf669: fcom dword ptr [0x9077f4] */ fx_compare(ST(0), R_F32((u32)(0x9077f4u))); 
    /* 004bf66f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bf671: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bf672: jae 0x4bf6d4 */ if (!fC) goto L_004bf6d4;
L_004bf674:; BB(0x004bf674);
    /* 004bf674: fcom dword ptr [0x9077f0] */ fx_compare(ST(0), R_F32((u32)(0x9077f0u))); 
    /* 004bf67a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bf67c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bf67d: jbe 0x4bf6d4 */ if ((fC||fZ)) goto L_004bf6d4;
L_004bf67f:; BB(0x004bf67f);
    /* 004bf67f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bf681: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 004bf688: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf68d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf692u); f_005caba4();
    /* 004bf692: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bf693: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004bf696: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf698: je 0x4bf6cb */ if (fZ) goto L_004bf6cb;
L_004bf69a:; BB(0x004bf69a);
    /* 004bf69a: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 004bf6a1: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 004bf6a8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf6ab: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf6b1: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 004bf6b4: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf6b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf6b7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf6b9: push dword ptr [ebx + 0x8c] */ { u32 v = R32((u32)(r_ebx+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf6bf: call 0x4bf7fc */ r_esp -= 4; W32(r_esp, 0x4bf6c4u); f_004bf7fc();
    /* 004bf6c4: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_004bf6cb:; BB(0x004bf6cb);
    /* 004bf6cb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004bf6d2: jmp 0x4bf727 */ goto L_004bf727;
L_004bf6d4:; BB(0x004bf6d4);
    /* 004bf6d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bf6d6: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 004bf6dd: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf6e2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf6e7u); f_005caba4();
    /* 004bf6e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bf6e8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004bf6eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf6ed: je 0x4bf720 */ if (fZ) goto L_004bf720;
L_004bf6ef:; BB(0x004bf6ef);
    /* 004bf6ef: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 004bf6f6: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 004bf6fd: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf700: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf706: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 004bf709: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf70b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf70c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf70e: push dword ptr [ebx + 0x8c] */ { u32 v = R32((u32)(r_ebx+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf714: call 0x4bf7fc */ r_esp -= 4; W32(r_esp, 0x4bf719u); f_004bf7fc();
    /* 004bf719: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_004bf720:; BB(0x004bf720);
    /* 004bf720: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_004bf727:; BB(0x004bf727);
    /* 004bf727: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 004bf72a: fsub dword ptr [0x907884] */ ST(0) = ST(0) - R_F32((u32)(0x907884u));
    /* 004bf730: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf733: fld dword ptr [edx + 0x84] */ FPUSH(R_F32((u32)(r_edx+0x84u)));
    /* 004bf739: fchs  */ ST(0) = -ST(0);
    /* 004bf73b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004bf73d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bf73f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bf740: jae 0x4bf7b7 */ if (!fC) goto L_004bf7b7;
L_004bf742:; BB(0x004bf742);
    /* 004bf742: fst dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0));
    /* 004bf745: jmp 0x4bf669 */ goto L_004bf669;
L_004bf74a:; BB(0x004bf74a);
    /* 004bf74a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004bf74c:; BB(0x004bf74c);
    /* 004bf74c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004bf753: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bf758: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bf75du); f_005caba4();
    /* 004bf75d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004bf760: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bf763: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004bf766: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf768: je 0x4bf7b0 */ if (fZ) goto L_004bf7b0;
L_004bf76a:; BB(0x004bf76a);
    /* 004bf76a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004bf771: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 004bf778: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf77b: mov ecx, eax */ r_ecx = r_eax;
    /* 004bf77d: call 0x4bf8cc */ r_esp -= 4; W32(r_esp, 0x4bf782u); f_004bf8cc();
    /* 004bf782: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004bf789:; BB(0x004bf789);
    /* 004bf789: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bf78c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004bf78f: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
L_004bf795:; BB(0x004bf795);
    /* 004bf795: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bf798: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004bf79b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004bf79e: mov eax, edx */ r_eax = r_edx;
    /* 004bf7a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bf7a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bf7aa: mov esp, ebp */ r_esp = r_ebp;
    /* 004bf7ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bf7ad: ret 4 */ FN_RET(0x004bf118); r_esp += 8; return;
L_004bf7b0:; BB(0x004bf7b0);
    /* 004bf7b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bf7b2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004bf7b5: jmp 0x4bf789 */ goto L_004bf789;
L_004bf7b7:; BB(0x004bf7b7);
    /* 004bf7b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bf7b9: mov ecx, dword ptr [0xa48488] */ r_ecx = R32((u32)(0xa48488u));
    /* 004bf7bf: mov dword ptr [edx + 0x1c], 2 */ W32((u32)(r_edx+0x1cu), 0x2u);
    /* 004bf7c6: or ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bf7cc: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 004bf7d3: mov dword ptr [0xa48488], ecx */ W32((u32)(0xa48488u), r_ecx);
    /* 004bf7d9: mov dword ptr [edx + 0x54], 0xc2480000 */ W32((u32)(r_edx+0x54u), 0xc2480000u);
    /* 004bf7e0: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
    /* 004bf7ea: jmp 0x4bf795 */ goto L_004bf795;
L_004bf7ec:; BB(0x004bf7ec);
    /* 004bf7ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bf7ee: jmp 0x4bf211 */ goto L_004bf211;
L_004bf7f3:; BB(0x004bf7f3);
    /* 004bf7f3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004bf7f5: jmp 0x4bf1bb */ goto L_004bf1bb;
L_008d1449:; BB(0x008d1449);
    /* 008d1449: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d144b: jmp 0x4bf74c */ goto L_004bf74c;
}

void f_004bf7fc(void) /* sub_4BF7FC */
{
    FN_ENTER(0x004bf7fc);
    /* 004bf7fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004bf7fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bf7fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bf7ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf800: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bf802: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bf804: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 004bf808: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 004bf80c: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 004bf810: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004bf811: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4bf816u); f_008193cc();
    /* 004bf816: mov dword ptr [ebx], 0xafb6b8 */ W32((u32)(r_ebx), 0xafb6b8u);
    /* 004bf81c: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 004bf81f: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 004bf822: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004bf824: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004bf827: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 004bf82a: mov dword ptr [ebx + 0x20], edi */ W32((u32)(r_ebx+0x20u), r_edi);
    /* 004bf82d: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 004bf830: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 004bf833: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004bf835: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 004bf838: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 004bf83b: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 004bf83e: mov edx, dword ptr [ebp*8 + 0x9abe68] */ r_edx = R32((u32)(r_ebp*8+0x9abe68u));
    /* 004bf845: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 004bf848: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf84b: mov edx, dword ptr [ebp*8 + 0x9abe64] */ r_edx = R32((u32)(r_ebp*8+0x9abe64u));
    /* 004bf852: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 004bf855: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004bf859: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 004bf85c: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 004bf85f: je 0x4bf871 */ if (fZ) goto L_004bf871;
L_004bf861:; BB(0x004bf861);
    /* 004bf861: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bf863: call 0x4bf8a0 */ r_esp -= 4; W32(r_esp, 0x4bf868u); f_004bf8a0();
    /* 004bf868: mov eax, ebx */ r_eax = r_ebx;
    /* 004bf86a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bf86b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bf86c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bf86d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bf86e: ret 0x10 */ FN_RET(0x004bf7fc); r_esp += 20; return;
L_004bf871:; BB(0x004bf871);
    /* 004bf871: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004bf874: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 004bf877: mov ebp, dword ptr [ebx + 0x20] */ r_ebp = R32((u32)(r_ebx+0x20u));
    /* 004bf87a: mov dword ptr [eax + 0x7c], ebp */ W32((u32)(r_eax+0x7cu), r_ebp);
    /* 004bf87d: mov esi, dword ptr [ebx + 0x24] */ r_esi = R32((u32)(r_ebx+0x24u));
    /* 004bf880: mov dword ptr [eax + 0x80], esi */ W32((u32)(r_eax+0x80u), r_esi);
    /* 004bf886: call 0x4bf890 */ r_esp -= 4; W32(r_esp, 0x4bf88bu); f_004bf890();
    /* 004bf88b: jmp 0x4bf861 */ goto L_004bf861;
}

void f_004bf860(void)
{
    FN_ENTER(0x004bf860);
    /* 004bf860: adc byte ptr [ebx + 0x38e8cb], cl */ { u32 ad = (u32)(r_ebx+0x38e8cbu); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 004bf866: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004bf868: mov eax, ebx */ r_eax = r_ebx;
    /* 004bf86a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bf86b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bf86c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bf86d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bf86e: ret 0x10 */ FN_RET(0x004bf860); r_esp += 20; return;
}

void f_004bf890(void) /* sub_4BF890 */
{
    FN_ENTER(0x004bf890);
    /* 004bf890: mov eax, dword ptr [0xa48488] */ r_eax = R32((u32)(0xa48488u));
    /* 004bf895: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bf898: mov dword ptr [0xa48488], eax */ W32((u32)(0xa48488u), r_eax);
    /* 004bf89d: ret  */ FN_RET(0x004bf890); r_esp += 4; return;
}

void f_004bf8a0(void) /* sub_4BF8A0 */
{
    FN_ENTER(0x004bf8a0);
    /* 004bf8a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004bf8a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bf8a2: mov edi, ecx */ r_edi = r_ecx;
    /* 004bf8a4: lea ebp, [edi + 0x50] */ r_ebp = (u32)(r_edi+0x50u);
    /* 004bf8a7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bf8a9: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4bf8aeu); f_00830cd8();
    /* 004bf8ae: lea edx, [edi + 0x1c] */ r_edx = (u32)(r_edi+0x1cu);
    /* 004bf8b1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bf8b3: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x4bf8b8u); f_008316b4();
    /* 004bf8b8: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf8bb: push dword ptr [edi + 0x2c] */ { u32 v = R32((u32)(r_edi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf8be: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 004bf8c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bf8c3: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x4bf8c8u); f_0083a314();
    /* 004bf8c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bf8c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bf8ca: ret  */ FN_RET(0x004bf8a0); r_esp += 4; return;
}

void f_004bf8cc(void) /* sub_4BF8CC */
{
    FN_ENTER(0x004bf8cc);
    /* 004bf8cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bf8cd: mov ebp, esp */ r_ebp = r_esp;
    /* 004bf8cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf8d1: push 0x8d146c */ { u32 v = 0x8d146cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bf8d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bf8dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bf8dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bf8e4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bf8e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bf8ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004bf8ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004bf8f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004bf8f3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bf8f6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004bf8f9: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x4bf8feu); f_007b4b48();
    /* 004bf8fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bf905: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bf908: mov edx, dword ptr [0x907770] */ r_edx = R32((u32)(0x907770u));
    /* 004bf90e: mov ebx, dword ptr [0x907774] */ r_ebx = R32((u32)(0x907774u));
    /* 004bf914: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 004bf91a: mov dword ptr [ecx + 0xc4], ebx */ W32((u32)(r_ecx+0xc4u), r_ebx);
    /* 004bf920: lea esi, [ecx + 0xac] */ r_esi = (u32)(r_ecx+0xacu);
    /* 004bf926: mov dword ptr [ecx], 0xafb678 */ W32((u32)(r_ecx), 0xafb678u);
    /* 004bf92c: mov eax, dword ptr [0x9abe60] */ r_eax = R32((u32)(0x9abe60u));
    /* 004bf931: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004bf934: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 004bf93e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bf93f: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 004bf949: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 004bf953: mov dword ptr [ecx + 0xb8], 0x42c80000 */ W32((u32)(r_ecx+0xb8u), 0x42c80000u);
    /* 004bf95d: mov dword ptr [ecx + 0xbc], 0x41100000 */ W32((u32)(r_ecx+0xbcu), 0x41100000u);
    /* 004bf967: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
    /* 004bf971: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
    /* 004bf97b: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
    /* 004bf985: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 004bf98f: mov dword ptr [ecx + 0x38], 0x42aa0000 */ W32((u32)(r_ecx+0x38u), 0x42aa0000u);
    /* 004bf996: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 004bf99d: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 004bf9a4: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x4bf9a9u); f_007b9ccc();
    /* 004bf9a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bf9ac: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x4bf9b1u); f_007b4f54();
    /* 004bf9b1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bf9b4: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004bf9b7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004bf9ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bf9bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bf9c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004bf9c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bf9c7: ret 4 */ FN_RET(0x004bf8cc); r_esp += 8; return;
}

void f_004bf9cc(void) /* sub_4BF9CC */
{
    FN_ENTER(0x004bf9cc);
    /* 004bf9cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bf9cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bf9cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bf9d1: call 0x4bf9e4 */ r_esp -= 4; W32(r_esp, 0x4bf9d6u); f_004bf9e4();
    /* 004bf9d6: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004bf9d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bf9db: call dword ptr [eax*4 + 0x9abdd0] */ { u32 t = R32((u32)(r_eax*4+0x9abdd0u)); r_esp -= 4; W32(r_esp, 0x4bf9e2u); call_ind(t); }
    /* 004bf9e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bf9e3: ret  */ FN_RET(0x004bf9cc); r_esp += 4; return;
}

void f_004bf9e4(void) /* sub_4BF9E4 */
{
    FN_ENTER(0x004bf9e4);
    /* 004bf9e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004bf9e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bf9e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bf9e7: mov edi, ecx */ r_edi = r_ecx;
    /* 004bf9e9: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 004bf9ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf9ee: je 0x4bfaf8 */ if (fZ) goto L_004bfaf8;
L_004bf9f4:; BB(0x004bf9f4);
    /* 004bf9f4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf9f7: je 0x4bfa50 */ if (fZ) goto L_004bfa50;
L_004bf9f9:; BB(0x004bf9f9);
    /* 004bf9f9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bf9fc: jne 0x4bfa12 */ if (!fZ) goto L_004bfa12;
L_004bf9fe:; BB(0x004bf9fe);
    /* 004bf9fe: mov ecx, edi */ r_ecx = r_edi;
    /* 004bfa00: call 0x4bfb54 */ r_esp -= 4; W32(r_esp, 0x4bfa05u); f_004bfb54();
    /* 004bfa05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bfa07: jne 0x4bfac9 */ if (!fZ) goto L_004bfac9;
L_004bfa0d:; BB(0x004bfa0d);
    /* 004bfa0d: jmp 0x4bfacd */ goto L_004bfacd;
L_004bfa12:; BB(0x004bfa12);
    /* 004bfa12: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004bfa15: jne 0x4bfac9 */ if (!fZ) goto L_004bfac9;
L_004bfa1b:; BB(0x004bfa1b);
    /* 004bfa1b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004bfa1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfa1f: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 004bfa22: call 0x783168 */ r_esp -= 4; W32(r_esp, 0x4bfa27u); f_00783168();
    /* 004bfa27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bfa29: je 0x4bfa3d */ if (fZ) goto L_004bfa3d;
L_004bfa2b:; BB(0x004bfa2b);
    /* 004bfa2b: mov dword ptr [edi + 0x54], 0 */ W32((u32)(r_edi+0x54u), 0x0u);
    /* 004bfa32: mov dword ptr [edi + 0x4c], 0 */ W32((u32)(r_edi+0x4cu), 0x0u);
    /* 004bfa39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfa3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bfa3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bfa3c: ret  */ FN_RET(0x004bf9e4); r_esp += 4; return;
L_004bfa3d:; BB(0x004bfa3d);
    /* 004bfa3d: fld dword ptr [0x907738] */ FPUSH(R_F32((u32)(0x907738u)));
    /* 004bfa43: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 004bfa46: fmul dword ptr [edi + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x50u));
    /* 004bfa49: fstp dword ptr [edi + 0x54] */ W_F32((u32)(r_edi+0x54u), ST(0)); FPOP();
    /* 004bfa4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfa4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bfa4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bfa4f: ret  */ FN_RET(0x004bf9e4); r_esp += 4; return;
L_004bfa50:; BB(0x004bfa50);
    /* 004bfa50: mov ecx, edi */ r_ecx = r_edi;
    /* 004bfa52: call 0x4bfb54 */ r_esp -= 4; W32(r_esp, 0x4bfa57u); f_004bfb54();
    /* 004bfa57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfa59: jne 0x4bfaa9 */ if (!fZ) goto L_004bfaa9;
L_004bfa5b:; BB(0x004bfa5b);
    /* 004bfa5b: push dword ptr [edi + 0x54] */ { u32 v = R32((u32)(r_edi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bfa5e: mov dword ptr [edi + 0x4c], 3 */ W32((u32)(r_edi+0x4cu), 0x3u);
    /* 004bfa65: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4bfa6au); f_0082e900();
    /* 004bfa6a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004bfa6d: lea ebp, [edi + 0x20] */ r_ebp = (u32)(r_edi+0x20u);
    /* 004bfa70: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bfa72: call 0x7830fc */ r_esp -= 4; W32(r_esp, 0x4bfa77u); f_007830fc();
    /* 004bfa77: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 004bfa7a: fchs  */ ST(0) = -ST(0);
    /* 004bfa7c: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bfa7f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004bfa83: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bfa85: mov dword ptr [esp], 0x3dcccccd */ W32((u32)(r_esp), 0x3dcccccdu);
    /* 004bfa8c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004bfa90: mov dword ptr [esp + 4], 0xbdcccccd */ W32((u32)(r_esp+0x4u), 0xbdcccccdu);
    /* 004bfa98: mov dword ptr [esp + 0x10], 0x40000000 */ W32((u32)(r_esp+0x10u), 0x40000000u);
    /* 004bfaa0: call 0x783244 */ r_esp -= 4; W32(r_esp, 0x4bfaa5u); f_00783244();
    /* 004bfaa5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfaa6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bfaa7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bfaa8: ret  */ FN_RET(0x004bf9e4); r_esp += 4; return;
L_004bfaa9:; BB(0x004bfaa9);
    /* 004bfaa9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004bfaac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfaad: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 004bfab0: call 0x783168 */ r_esp -= 4; W32(r_esp, 0x4bfab5u); f_00783168();
    /* 004bfab5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bfab7: je 0x4bfac0 */ if (fZ) goto L_004bfac0;
L_004bfab9:; BB(0x004bfab9);
    /* 004bfab9: mov dword ptr [edi + 0x4c], 2 */ W32((u32)(r_edi+0x4cu), 0x2u);
L_004bfac0:; BB(0x004bfac0);
    /* 004bfac0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004bfac3: fmul dword ptr [edi + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x50u));
    /* 004bfac6: fstp dword ptr [edi + 0x54] */ W_F32((u32)(r_edi+0x54u), ST(0)); FPOP();
L_004bfac9:; BB(0x004bfac9);
    /* 004bfac9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfaca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bfacb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bfacc: ret  */ FN_RET(0x004bf9e4); r_esp += 4; return;
L_004bfacd:; BB(0x004bfacd);
    /* 004bfacd: mov dword ptr [edi + 0x4c], 3 */ W32((u32)(r_edi+0x4cu), 0x3u);
    /* 004bfad4: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004bfad7: mov ecx, edi */ r_ecx = r_edi;
    /* 004bfad9: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfade: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfae0: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfae5: push 0xbdcccccd */ { u32 v = 0xbdcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004bfaea: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004bfaef: call 0x783244 */ r_esp -= 4; W32(r_esp, 0x4bfaf4u); f_00783244();
    /* 004bfaf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfaf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bfaf6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bfaf7: ret  */ FN_RET(0x004bf9e4); r_esp += 4; return;
L_004bfaf8:; BB(0x004bfaf8);
    /* 004bfaf8: mov ecx, edi */ r_ecx = r_edi;
    /* 004bfafa: call 0x4bfb54 */ r_esp -= 4; W32(r_esp, 0x4bfaffu); f_004bfb54();
    /* 004bfaff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bfb01: je 0x4bfac9 */ if (fZ) goto L_004bfac9;
L_004bfb03:; BB(0x004bfb03);
    /* 004bfb03: mov eax, dword ptr [0xa48488] */ r_eax = R32((u32)(0xa48488u));
    /* 004bfb08: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfb0d: je 0x4bfb18 */ if (fZ) goto L_004bfb18;
L_004bfb0f:; BB(0x004bfb0f);
    /* 004bfb0f: mov dword ptr [edi + 0x50], 0xbf800000 */ W32((u32)(r_edi+0x50u), 0xbf800000u);
    /* 004bfb16: jmp 0x4bfb1f */ goto L_004bfb1f;
L_004bfb18:; BB(0x004bfb18);
    /* 004bfb18: mov dword ptr [edi + 0x50], 0x3f800000 */ W32((u32)(r_edi+0x50u), 0x3f800000u);
L_004bfb1f:; BB(0x004bfb1f);
    /* 004bfb1f: mov dword ptr [edi + 0x4c], 1 */ W32((u32)(r_edi+0x4cu), 0x1u);
    /* 004bfb26: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 004bfb29: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb2e: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb33: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb38: push 0xbdcccccd */ { u32 v = 0xbdcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb3d: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb42: call 0x783244 */ r_esp -= 4; W32(r_esp, 0x4bfb47u); f_00783244();
    /* 004bfb47: mov dword ptr [edi + 0x54], 0 */ W32((u32)(r_edi+0x54u), 0x0u);
    /* 004bfb4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfb4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bfb50: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bfb51: ret  */ FN_RET(0x004bf9e4); r_esp += 4; return;
}

void f_004bfb54(void) /* sub_4BFB54 */
{
    FN_ENTER(0x004bfb54);
    /* 004bfb54: mov eax, dword ptr [0xa48488] */ r_eax = R32((u32)(0xa48488u));
    /* 004bfb59: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfb5e: je 0x4bfb67 */ if (fZ) goto L_004bfb67;
L_004bfb60:; BB(0x004bfb60);
    /* 004bfb60: mov edx, 1 */ r_edx = 0x1u;
    /* 004bfb65: jmp 0x4bfb69 */ goto L_004bfb69;
L_004bfb67:; BB(0x004bfb67);
    /* 004bfb67: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004bfb69:; BB(0x004bfb69);
    /* 004bfb69: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfb6e: je 0x4bfb77 */ if (fZ) goto L_004bfb77;
L_004bfb70:; BB(0x004bfb70);
    /* 004bfb70: mov eax, 1 */ r_eax = 0x1u;
    /* 004bfb75: jmp 0x4bfb79 */ goto L_004bfb79;
L_004bfb77:; BB(0x004bfb77);
    /* 004bfb77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004bfb79:; BB(0x004bfb79);
    /* 004bfb79: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bfb7b: mov eax, edx */ r_eax = r_edx;
    /* 004bfb7d: ret  */ FN_RET(0x004bfb54); r_esp += 4; return;
}

void f_004bfb80(void) /* sub_4BFB80 */
{
    FN_ENTER(0x004bfb80);
    /* 004bfb80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bfb82: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bfb84: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4bfb89u); f_00520db8();
    /* 004bfb89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bfb8b: je 0x4bfb90 */ if (fZ) goto L_004bfb90;
L_004bfb8d:; BB(0x004bfb8d);
    /* 004bfb8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfb8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bfb8f: ret  */ FN_RET(0x004bfb80); r_esp += 4; return;
L_004bfb90:; BB(0x004bfb90);
    /* 004bfb90: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x4bfb95u); f_00835068();
    /* 004bfb95: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 004bfb9a: and eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004bfb9f: jne 0x4bfd05 */ if (!fZ) goto L_004bfd05;
L_004bfba5:; BB(0x004bfba5);
    /* 004bfba5: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 004bfbab: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 004bfbae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfbb0: je 0x4bfbfb */ if (fZ) goto L_004bfbfb;
L_004bfbb2:; BB(0x004bfbb2);
    /* 004bfbb2: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004bfbb5: mov esi, eax */ r_esi = r_eax;
L_004bfbb7:; BB(0x004bfbb7);
    /* 004bfbb7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfbb9: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x4bfbbeu); f_007a94a0();
    /* 004bfbbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfbbf: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x4bfbc4u); f_0082dbac();
    /* 004bfbc4: mov ecx, dword ptr [0xa47fbc] */ r_ecx = R32((u32)(0xa47fbcu));
    /* 004bfbca: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4bfbcfu); f_00829cc8();
    /* 004bfbcf: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4bfbd4u); f_0082fa9c();
    /* 004bfbd4: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bfbd7: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 004bfbda: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 004bfbdd: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x4bfbe2u); f_00835574();
    /* 004bfbe2: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4bfbe7u); f_0082faac();
    /* 004bfbe7: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4bfbecu); f_0082dab0();
    /* 004bfbec: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x4bfbf1u); f_007a94b0();
    /* 004bfbf1: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 004bfbf4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfbf6: jne 0x4bfbb7 */ if (!fZ) goto L_004bfbb7;
L_004bfbf8:; BB(0x004bfbf8);
    /* 004bfbf8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004bfbfb:; BB(0x004bfbfb);
    /* 004bfbfb: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 004bfc01: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004bfc04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfc06: je 0x4bfc73 */ if (fZ) goto L_004bfc73;
L_004bfc08:; BB(0x004bfc08);
    /* 004bfc08: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004bfc0b: mov esi, ecx */ r_esi = r_ecx;
L_004bfc0d:; BB(0x004bfc0d);
    /* 004bfc0d: mov ecx, esi */ r_ecx = r_esi;
    /* 004bfc0f: call 0x4bfdb0 */ r_esp -= 4; W32(r_esp, 0x4bfc14u); f_004bfdb0();
    /* 004bfc14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfc16: je 0x4bfc60 */ if (fZ) goto L_004bfc60;
L_004bfc18:; BB(0x004bfc18);
    /* 004bfc18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfc1a: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x4bfc1fu); f_007a94a0();
    /* 004bfc1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfc20: mov ecx, dword ptr [0xa47fbc] */ r_ecx = R32((u32)(0xa47fbcu));
    /* 004bfc26: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4bfc2bu); f_00829cc8();
    /* 004bfc2b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4bfc30u); f_0082d7b0();
    /* 004bfc30: lea edx, [esi + 0x50] */ r_edx = (u32)(r_esi+0x50u);
    /* 004bfc33: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfc35: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x4bfc3au); f_00831308();
    /* 004bfc3a: mov edx, dword ptr [0xa47fc0] */ r_edx = R32((u32)(0xa47fc0u));
    /* 004bfc40: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 004bfc43: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004bfc45: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 004bfc4b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfc4d: mov ecx, dword ptr [eax + ecx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ecx*8+0x8u));
    /* 004bfc51: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x4bfc56u); f_00835090();
    /* 004bfc56: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4bfc5bu); f_0082da80();
    /* 004bfc5b: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x4bfc60u); f_007a94b0();
L_004bfc60:; BB(0x004bfc60);
    /* 004bfc60: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 004bfc63: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfc65: jne 0x4bfc0d */ if (!fZ) goto L_004bfc0d;
L_004bfc67:; BB(0x004bfc67);
    /* 004bfc67: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004bfc6a: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 004bfc70: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
L_004bfc73:; BB(0x004bfc73);
    /* 004bfc73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfc75: je 0x4bfcee */ if (fZ) goto L_004bfcee;
L_004bfc77:; BB(0x004bfc77);
    /* 004bfc77: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004bfc7a: mov esi, ecx */ r_esi = r_ecx;
L_004bfc7c:; BB(0x004bfc7c);
    /* 004bfc7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfc7e: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x4bfc83u); f_00830b08();
    /* 004bfc83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfc84: mov ecx, esi */ r_ecx = r_esi;
    /* 004bfc86: call 0x4bfdb0 */ r_esp -= 4; W32(r_esp, 0x4bfc8bu); f_004bfdb0();
    /* 004bfc8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfc8d: je 0x4bfce4 */ if (fZ) goto L_004bfce4;
L_004bfc8f:; BB(0x004bfc8f);
    /* 004bfc8f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfc91: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x4bfc96u); f_007a94a0();
    /* 004bfc96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfc97: mov ecx, dword ptr [0xa47fbc] */ r_ecx = R32((u32)(0xa47fbcu));
    /* 004bfc9d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4bfca2u); f_00829cc8();
    /* 004bfca2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4bfca7u); f_0082d7b0();
    /* 004bfca7: lea edx, [esi + 0x50] */ r_edx = (u32)(r_esi+0x50u);
    /* 004bfcaa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfcac: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x4bfcb1u); f_00831308();
    /* 004bfcb1: mov edx, dword ptr [0xa47fc0] */ r_edx = R32((u32)(0xa47fc0u));
    /* 004bfcb7: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 004bfcba: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004bfcbd: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 004bfcc3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfcc5: mov ecx, dword ptr [eax + ecx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ecx*8+0x8u));
    /* 004bfcc9: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x4bfcceu); f_00835090();
    /* 004bfcce: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004bfcd1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfcd4: je 0x4bfd8c */ if (fZ) goto L_004bfd8c;
L_004bfcda:; BB(0x004bfcda);
    /* 004bfcda: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4bfcdfu); f_0082da80();
    /* 004bfcdf: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x4bfce4u); f_007a94b0();
L_004bfce4:; BB(0x004bfce4);
    /* 004bfce4: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 004bfce7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfce9: jne 0x4bfc7c */ if (!fZ) goto L_004bfc7c;
L_004bfceb:; BB(0x004bfceb);
    /* 004bfceb: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004bfcee:; BB(0x004bfcee);
    /* 004bfcee: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004bfcf2: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bfcf7: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004bfcfb: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 004bfd00: and eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_004bfd05:; BB(0x004bfd05);
    /* 004bfd05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfd07: je 0x4bfd84 */ if (fZ) goto L_004bfd84;
L_004bfd09:; BB(0x004bfd09);
    /* 004bfd09: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 004bfd0f: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 004bfd12: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfd14: je 0x4bfd84 */ if (fZ) goto L_004bfd84;
L_004bfd16:; BB(0x004bfd16);
    /* 004bfd16: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_004bfd19:; BB(0x004bfd19);
    /* 004bfd19: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bfd1b: call 0x4bfdb0 */ r_esp -= 4; W32(r_esp, 0x4bfd20u); f_004bfdb0();
    /* 004bfd20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfd22: je 0x4bfd7a */ if (fZ) goto L_004bfd7a;
L_004bfd24:; BB(0x004bfd24);
    /* 004bfd24: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004bfd26: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004bfd29: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 004bfd2c: mov esi, dword ptr [eax + edx*4 - 4] */ r_esi = R32((u32)(r_eax+r_edx*4+0xfffffffcu));
    /* 004bfd30: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x4bfd35u); f_007a94a0();
    /* 004bfd35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfd36: mov ecx, dword ptr [0xa47fbc] */ r_ecx = R32((u32)(0xa47fbcu));
    /* 004bfd3c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4bfd41u); f_00829cc8();
    /* 004bfd41: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x4bfd46u); f_0082dbac();
    /* 004bfd46: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4bfd4bu); f_0082d7b0();
    /* 004bfd4b: lea edx, [ebx + 0x50] */ r_edx = (u32)(r_ebx+0x50u);
    /* 004bfd4e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfd50: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x4bfd55u); f_00831308();
    /* 004bfd55: mov eax, dword ptr [0xa47fc0] */ r_eax = R32((u32)(0xa47fc0u));
    /* 004bfd5a: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004bfd60: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004bfd62: mov ecx, dword ptr [edx + esi*8 + 8] */ r_ecx = R32((u32)(r_edx+r_esi*8+0x8u));
    /* 004bfd66: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x4bfd6bu); f_00835090();
    /* 004bfd6b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4bfd70u); f_0082da80();
    /* 004bfd70: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4bfd75u); f_0082dab0();
    /* 004bfd75: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x4bfd7au); f_007a94b0();
L_004bfd7a:; BB(0x004bfd7a);
    /* 004bfd7a: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 004bfd7d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bfd7f: jne 0x4bfd19 */ if (!fZ) goto L_004bfd19;
L_004bfd81:; BB(0x004bfd81);
    /* 004bfd81: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004bfd84:; BB(0x004bfd84);
    /* 004bfd84: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x4bfd89u); f_00835078();
    /* 004bfd89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bfd8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bfd8b: ret  */ FN_RET(0x004bfb80); r_esp += 4; return;
L_004bfd8c:; BB(0x004bfd8c);
    /* 004bfd8c: mov edx, dword ptr [0xa47fc0] */ r_edx = R32((u32)(0xa47fc0u));
    /* 004bfd92: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 004bfd95: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004bfd98: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 004bfd9e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfda0: mov ecx, dword ptr [eax + ecx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ecx*8+0x8u));
    /* 004bfda4: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x4bfda9u); f_00835090();
    /* 004bfda9: jmp 0x4bfcda */ goto L_004bfcda;
}

void f_004bfdb0(void) /* sub_4BFDB0 */
{
    FN_ENTER(0x004bfdb0);
    /* 004bfdb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfdb1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bfdb4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bfdb6: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 004bfdb9: fcom dword ptr [0x907734] */ fx_compare(ST(0), R_F32((u32)(0x907734u))); 
    /* 004bfdbf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bfdc1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bfdc2: jb 0x4bfdd3 */ if (fC) goto L_004bfdd3;
L_004bfdc4:; BB(0x004bfdc4);
    /* 004bfdc4: fcom dword ptr [0x907728] */ fx_compare(ST(0), R_F32((u32)(0x907728u))); 
    /* 004bfdca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bfdcc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bfdcd: jbe 0x4bfeff */ if ((fC||fZ)) goto L_004bfeff;
L_004bfdd3:; BB(0x004bfdd3);
    /* 004bfdd3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bfdd5: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 004bfdda: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004bfddc: je 0x4bfde5 */ if (fZ) goto L_004bfde5;
L_004bfdde:; BB(0x004bfdde);
    /* 004bfdde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bfde0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bfde3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bfde4: ret  */ FN_RET(0x004bfdb0); r_esp += 4; return;
L_004bfde5:; BB(0x004bfde5);
    /* 004bfde5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004bfde8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfde9: lea edx, [ebx + 0x1c] */ r_edx = (u32)(r_ebx+0x1cu);
    /* 004bfdec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bfded: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x4bfdf2u); f_00835c3c();
    /* 004bfdf2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bfdf5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004bfdf9: fld dword ptr [0x907730] */ FPUSH(R_F32((u32)(0x907730u)));
    /* 004bfdff: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004bfe01: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bfe03: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bfe04: jb 0x4bfef4 */ if (fC) goto L_004bfef4;
L_004bfe0a:; BB(0x004bfe0a);
    /* 004bfe0a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bfe0c: fcomp dword ptr [0x90772c] */ fx_compare(ST(0), R_F32((u32)(0x90772cu))); FPOP();
    /* 004bfe12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bfe14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bfe15: jb 0x4bfef6 */ if (fC) goto L_004bfef6;
L_004bfe1b:; BB(0x004bfe1b);
    /* 004bfe1b: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 004bfe1e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bfe20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bfe21: jbe 0x4bfe87 */ if ((fC||fZ)) goto L_004bfe87;
L_004bfe23:; BB(0x004bfe23);
    /* 004bfe23: fld dword ptr [0x907724] */ FPUSH(R_F32((u32)(0x907724u)));
    /* 004bfe29: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 004bfe2f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bfe31: fadd dword ptr [ebx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x1cu));
    /* 004bfe34: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 004bfe3a: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 004bfe40: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bfe42: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004bfe44: fadd dword ptr [ebx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x20u));
    /* 004bfe47: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004bfe49: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bfe4b: fadd dword ptr [ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x24u));
    /* 004bfe4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bfe50: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004bfe53: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bfe55: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004bfe59: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004bfe5d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004bfe61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfe62: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004bfe66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfe68: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x4bfe6du); f_0082f09c();
    /* 004bfe6d: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004bfe71: fcomp dword ptr [0x907730] */ fx_compare(ST(0), R_F32((u32)(0x907730u))); FPOP();
    /* 004bfe77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bfe79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bfe7a: jae 0x4bff01 */ if (!fC) goto L_004bff01;
L_004bfe80:; BB(0x004bfe80);
    /* 004bfe80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bfe82: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bfe85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bfe86: ret  */ FN_RET(0x004bfdb0); r_esp += 4; return;
L_004bfe87:; BB(0x004bfe87);
    /* 004bfe87: fld dword ptr [0x907724] */ FPUSH(R_F32((u32)(0x907724u)));
    /* 004bfe8d: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 004bfe93: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bfe95: fsubr dword ptr [ebx + 0x1c] */ ST(0) = R_F32((u32)(r_ebx+0x1cu)) - ST(0);
    /* 004bfe98: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 004bfe9e: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 004bfea4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bfea6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004bfea8: fsubr dword ptr [ebx + 0x20] */ ST(0) = R_F32((u32)(r_ebx+0x20u)) - ST(0);
    /* 004bfeab: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004bfead: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bfeaf: fsubr dword ptr [ebx + 0x24] */ ST(0) = R_F32((u32)(r_ebx+0x24u)) - ST(0);
    /* 004bfeb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bfeb4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004bfeb7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bfeb9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004bfebd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004bfec1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004bfec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bfec6: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004bfeca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfecc: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x4bfed1u); f_0082f09c();
    /* 004bfed1: movsx ecx, word ptr [0xa48a4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 004bfed8: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 004bfedf: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bfee1: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004bfee5: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 004bfee9: fcom dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); 
    /* 004bfeed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bfeef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bfef0: jb 0x4bfef6 */ if (fC) goto L_004bfef6;
L_004bfef2:; BB(0x004bfef2);
    /* 004bfef2: jmp 0x4bff0b */ goto L_004bff0b;
L_004bfef4:; BB(0x004bfef4);
    /* 004bfef4: fstp st(1) */ ST(1) = ST(0); FPOP();
L_004bfef6:; BB(0x004bfef6);
    /* 004bfef6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bfef8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bfefa: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bfefd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bfefe: ret  */ FN_RET(0x004bfdb0); r_esp += 4; return;
L_004bfeff:; BB(0x004bfeff);
    /* 004bfeff: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004bff01:; BB(0x004bff01);
    /* 004bff01: mov eax, 1 */ r_eax = 0x1u;
    /* 004bff06: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bff09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bff0a: ret  */ FN_RET(0x004bfdb0); r_esp += 4; return;
L_004bff0b:; BB(0x004bff0b);
    /* 004bff0b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bff0d: jmp 0x4bff01 */ goto L_004bff01;
}

void f_004bff10(void) /* sub_4BFF10 */
{
    FN_ENTER(0x004bff10);
    /* 004bff10: mov eax, dword ptr [0xa48488] */ r_eax = R32((u32)(0xa48488u));
    /* 004bff15: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bff1a: mov dword ptr [0xa48488], eax */ W32((u32)(0xa48488u), r_eax);
    /* 004bff1f: call 0x4bff28 */ r_esp -= 4; W32(r_esp, 0x4bff24u); f_004bff28();
    /* 004bff24: ret  */ FN_RET(0x004bff10); r_esp += 4; return;
}

void f_004bff28(void) /* sub_4BFF28 */
{
    FN_ENTER(0x004bff28);
    /* 004bff28: mov eax, dword ptr [0xa48488] */ r_eax = R32((u32)(0xa48488u));
    /* 004bff2d: and eax, 0xffffcfff */ {  u32 a = r_eax; u32 b = 0xffffcfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bff32: mov dword ptr [0xa48488], eax */ W32((u32)(0xa48488u), r_eax);
    /* 004bff37: ret  */ FN_RET(0x004bff28); r_esp += 4; return;
}

void f_004bff38(void) /* sub_4BFF38 */
{
    FN_ENTER(0x004bff38);
    /* 004bff38: mov eax, dword ptr [0xa48488] */ r_eax = R32((u32)(0xa48488u));
    /* 004bff3d: or eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bff42: and eax, 0xffffdfff */ {  u32 a = r_eax; u32 b = 0xffffdfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bff47: mov dword ptr [0xa48488], eax */ W32((u32)(0xa48488u), r_eax);
    /* 004bff4c: ret  */ FN_RET(0x004bff38); r_esp += 4; return;
}

void f_004bff50(void) /* sub_4BFF50 */
{
    FN_ENTER(0x004bff50);
    /* 004bff50: mov eax, dword ptr [0xa48488] */ r_eax = R32((u32)(0xa48488u));
    /* 004bff55: or eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bff5a: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bff5f: mov dword ptr [0xa48488], eax */ W32((u32)(0xa48488u), r_eax);
    /* 004bff64: ret  */ FN_RET(0x004bff50); r_esp += 4; return;
}

void f_004bff68(void) /* sub_4BFF68 */
{
    FN_ENTER(0x004bff68);
    /* 004bff68: mov edx, dword ptr [0xa48488] */ r_edx = R32((u32)(0xa48488u));
    /* 004bff6e: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bff74: mov eax, 0 */ r_eax = 0x0u;
    /* 004bff79: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004bff7c: ret  */ FN_RET(0x004bff68); r_esp += 4; return;
}

void f_004bff80(void) /* sub_4BFF80 */
{
    FN_ENTER(0x004bff80);
    /* 004bff80: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 004bff83: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004bff86: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004bff89: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 004bff8c: fsub dword ptr [eax + 0x5c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x5cu));
    /* 004bff8f: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004bff92: fst dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0));
    /* 004bff95: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bff98: je 0x4bffb9 */ if (fZ) goto L_004bffb9;
L_004bff9a:; BB(0x004bff9a);
    /* 004bff9a: fld dword ptr [ecx + 0x44] */ FPUSH(R_F32((u32)(r_ecx+0x44u)));
    /* 004bff9d: fchs  */ ST(0) = -ST(0);
    /* 004bff9f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004bffa1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bffa3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bffa4: jb 0x4bffb3 */ if (fC) goto L_004bffb3;
L_004bffa6:; BB(0x004bffa6);
    /* 004bffa6: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004bffaa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bffaf: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_004bffb3:; BB(0x004bffb3);
    /* 004bffb3: call 0x4bf8a0 */ r_esp -= 4; W32(r_esp, 0x4bffb8u); f_004bf8a0();
    /* 004bffb8: ret  */ FN_RET(0x004bff80); r_esp += 4; return;
L_004bffb9:; BB(0x004bffb9);
    /* 004bffb9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bffbb: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004bffbe: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 004bffc1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004bffc4: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 004bffc7: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004bffca: mov dword ptr [eax + 0x80], edx */ W32((u32)(r_eax+0x80u), r_edx);
    /* 004bffd0: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004bffd3: jmp 0x4bff9a */ goto L_004bff9a;
}

void f_004bffd8(void) /* sub_4BFFD8 */
{
    FN_ENTER(0x004bffd8);
    /* 004bffd8: fld dword ptr [0x907718] */ FPUSH(R_F32((u32)(0x907718u)));
    /* 004bffde: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 004bffe1: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004bffe4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004bffe6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bffe8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bffe9: ja 0x4bfff1 */ if ((!fC&&!fZ)) goto L_004bfff1;
L_004bffeb:; BB(0x004bffeb);
    /* 004bffeb: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004bffed: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 004bfff0: ret  */ FN_RET(0x004bffd8); r_esp += 4; return;
L_004bfff1:; BB(0x004bfff1);
    /* 004bfff1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bfff3: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 004bfff6: ret  */ FN_RET(0x004bffd8); r_esp += 4; return;
}

void f_004bfff8(void) /* sub_4BFFF8 */
{
    FN_ENTER(0x004bfff8);
    /* 004bfff8: mov eax, dword ptr [0x906bcc] */ r_eax = R32((u32)(0x906bccu));
    /* 004bfffd: mov dword ptr [0x9abe90], eax */ W32((u32)(0x9abe90u), r_eax);
    /* 004c0002: mov dword ptr [0x9abe9c], eax */ W32((u32)(0x9abe9cu), r_eax);
    /* 004c0007: ret  */ FN_RET(0x004bfff8); r_esp += 4; return;
}

