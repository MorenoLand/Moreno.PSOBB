#include "protos.h"

void f_0067f5b4(void) /* sub_67F5B4 */
{
    FN_ENTER(0x0067f5b4);
    /* 0067f5b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067f5b5: mov ebp, esp */ r_ebp = r_esp;
    /* 0067f5b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f5b9: push 0x8ea47e */ { u32 v = 0x8ea47eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f5be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067f5c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f5c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067f5cc: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067f5cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067f5d2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0067f5d5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0067f5d8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0067f5db: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0067f5de: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0067f5e1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0067f5e4: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0067f5e7: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0067f5ea: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0067f5ed: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0067f5f0: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0067f5f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f5f5: je 0x67f5fd */ if (fZ) goto L_0067f5fd;
L_0067f5f7:; BB(0x0067f5f7);
    /* 0067f5f7: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0067f5fb: jmp 0x67f602 */ goto L_0067f602;
L_0067f5fd:; BB(0x0067f5fd);
    /* 0067f5fd: mov edx, 0xffff */ r_edx = 0xffffu;
L_0067f602:; BB(0x0067f602);
    /* 0067f602: mov eax, ecx */ r_eax = r_ecx;
    /* 0067f604: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 0067f607: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f609: je 0x67f684 */ if (fZ) goto L_0067f684;
L_0067f60b:; BB(0x0067f60b);
    /* 0067f60b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f60e: jne 0x67f643 */ if (!fZ) goto L_0067f643;
L_0067f610:; BB(0x0067f610);
    /* 0067f610: mov esi, ecx */ r_esi = r_ecx;
    /* 0067f612: mov word ptr [ebp - 0x6c], dx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_edx);
    /* 0067f616: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 0067f619: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067f61d: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0067f622: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0067f626: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 0067f629: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0067f62d: and ecx, 0xffef */ {  u32 a = r_ecx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067f633: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 0067f637: mov dword ptr [esi + 0x24], 0 */ W32((u32)(r_esi+0x24u), 0x0u);
    /* 0067f63e: jmp 0x67f8bc */ goto L_0067f8bc;
L_0067f643:; BB(0x0067f643);
    /* 0067f643: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067f646: jne 0x67f8bc */ if (!fZ) goto L_0067f8bc;
L_0067f64c:; BB(0x0067f64c);
    /* 0067f64c: mov eax, ecx */ r_eax = r_ecx;
    /* 0067f64e: mov word ptr [ebp - 0x6c], dx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_edx);
    /* 0067f652: lea ecx, [eax + 0x2c] */ r_ecx = (u32)(r_eax+0x2cu);
    /* 0067f655: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067f657: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f658: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f659: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f65a: push 0xae */ { u32 v = 0xaeu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f65f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67f664u); f_00814298();
    /* 0067f664: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f667: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f66a: call 0x67fa2c */ r_esp -= 4; W32(r_esp, 0x67f66fu); f_0067fa2c();
    /* 0067f66f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f672: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067f676: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067f67b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0067f67f: jmp 0x67f8bc */ goto L_0067f8bc;
L_0067f684:; BB(0x0067f684);
    /* 0067f684: mov eax, ecx */ r_eax = r_ecx;
    /* 0067f686: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0067f689: mov word ptr [ebp - 0x6c], dx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_edx);
    /* 0067f68d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f68f: je 0x67f6a7 */ if (fZ) goto L_0067f6a7;
L_0067f691:; BB(0x0067f691);
    /* 0067f691: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0067f694: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x67f699u); f_008173b4();
    /* 0067f699: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067f69b: jne 0x67f8bc */ if (!fZ) goto L_0067f8bc;
L_0067f6a1:; BB(0x0067f6a1);
    /* 0067f6a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f6a4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
L_0067f6a7:; BB(0x0067f6a7);
    /* 0067f6a7: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0067f6aa: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067f6ac: jne 0x67f6ba */ if (!fZ) goto L_0067f6ba;
L_0067f6ae:; BB(0x0067f6ae);
    /* 0067f6ae: mov dword ptr [eax + 0x24], 2 */ W32((u32)(r_eax+0x24u), 0x2u);
    /* 0067f6b5: jmp 0x67f8bc */ goto L_0067f8bc;
L_0067f6ba:; BB(0x0067f6ba);
    /* 0067f6ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f6bc: je 0x67f703 */ if (fZ) goto L_0067f703;
L_0067f6be:; BB(0x0067f6be);
    /* 0067f6be: mov eax, dword ptr [eax + ecx*4 + 0x50] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x50u));
    /* 0067f6c2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067f6c5: jl 0x67f707 */ if ((fS!=fO)) goto L_0067f707;
L_0067f6c7:; BB(0x0067f6c7);
    /* 0067f6c7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067f6ca: jg 0x67f707 */ if ((!fZ&&fS==fO)) goto L_0067f707;
L_0067f6cc:; BB(0x0067f6cc);
    /* 0067f6cc: movzx eax, word ptr [0xa903b4] */ r_eax = (u32)R16((u32)(0xa903b4u));
    /* 0067f6d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f6d4: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67f6d9u); f_007b4d18();
    /* 0067f6d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067f6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f6dc: je 0x67f8d3 */ if (fZ) goto L_0067f8d3;
L_0067f6e2:; BB(0x0067f6e2);
    /* 0067f6e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f6e5: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0067f6e8: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0067f6eb: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 0067f6ee: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0067f6f1: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 0067f6f4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0067f6f7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0067f6fa: mov eax, dword ptr [edx + ecx*4 + 0x50] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 0067f6fe: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 0067f701: jmp 0x67f707 */ goto L_0067f707;
L_0067f703:; BB(0x0067f703);
    /* 0067f703: mov eax, dword ptr [eax + ecx*4 + 0x50] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x50u));
L_0067f707:; BB(0x0067f707);
    /* 0067f707: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f709: jne 0x67f712 */ if (!fZ) goto L_0067f712;
L_0067f70b:; BB(0x0067f70b);
    /* 0067f70b: mov esi, 1 */ r_esi = 0x1u;
    /* 0067f710: jmp 0x67f714 */ goto L_0067f714;
L_0067f712:; BB(0x0067f712);
    /* 0067f712: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0067f714:; BB(0x0067f714);
    /* 0067f714: lea ebx, [edx - 1] */ r_ebx = (u32)(r_edx+0xffffffffu);
    /* 0067f717: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f719: jne 0x67f71f */ if (!fZ) goto L_0067f71f;
L_0067f71b:; BB(0x0067f71b);
    /* 0067f71b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0067f71d: jmp 0x67f724 */ goto L_0067f724;
L_0067f71f:; BB(0x0067f71f);
    /* 0067f71f: mov ebx, 1 */ r_ebx = 0x1u;
L_0067f724:; BB(0x0067f724);
    /* 0067f724: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 0067f727: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 0067f72a: mov byte ptr [ebp - 0x5c], dl */ W8((u32)(r_ebp+0xffffffa4u), (u8)r_edx);
    /* 0067f72d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f730: fild dword ptr [edx + ecx*4 + 0x70] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4+0x70u)));
    /* 0067f734: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0067f737: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f73a: je 0x67f9d9 */ if (fZ) goto L_0067f9d9;
L_0067f740:; BB(0x0067f740);
    /* 0067f740: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f743: je 0x67f986 */ if (fZ) goto L_0067f986;
L_0067f749:; BB(0x0067f749);
    /* 0067f749: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f74c: je 0x67f900 */ if (fZ) goto L_0067f900;
L_0067f752:; BB(0x0067f752);
    /* 0067f752: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f754: je 0x67f842 */ if (fZ) goto L_0067f842;
L_0067f75a:; BB(0x0067f75a);
    /* 0067f75a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f75d: jne 0x67f7af */ if (!fZ) goto L_0067f7af;
L_0067f75f:; BB(0x0067f75f);
    /* 0067f75f: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0067f766: push 0x1a4 */ { u32 v = 0x1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f76b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67f770u); f_005caba4();
    /* 0067f770: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f773: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f776: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0067f779: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f77b: je 0x67f8e5 */ if (fZ) goto L_0067f8e5;
L_0067f781:; BB(0x0067f781);
    /* 0067f781: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0067f788: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067f78f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f791: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0067f794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f795: call 0x6802c0 */ r_esp -= 4; W32(r_esp, 0x67f79au); f_006802c0();
    /* 0067f79a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0067f7a1:; BB(0x0067f7a1);
    /* 0067f7a1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067f7a4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f7a7: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0067f7aa: jmp 0x67f88d */ goto L_0067f88d;
L_0067f7af:; BB(0x0067f7af);
    /* 0067f7af: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f7b2: jne 0x67f838 */ if (!fZ) goto L_0067f838;
L_0067f7b8:; BB(0x0067f7b8);
    /* 0067f7b8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0067f7bf: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f7c4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67f7c9u); f_005caba4();
    /* 0067f7c9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f7cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f7cf: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0067f7d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f7d4: je 0x67f8ef */ if (fZ) goto L_0067f8ef;
L_0067f7da:; BB(0x0067f7da);
    /* 0067f7da: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 0067f7e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067f7e8: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f7ea: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0067f7ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f7ee: call 0x683858 */ r_esp -= 4; W32(r_esp, 0x67f7f3u); f_00683858();
    /* 0067f7f3: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0067f7fa:; BB(0x0067f7fa);
    /* 0067f7fa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067f7fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f800: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0067f803: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067f80a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0067f80c:; BB(0x0067f80c);
    /* 0067f80c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f80f: mov eax, dword ptr [eax + ebx*4 + 0x60] */ r_eax = R32((u32)(r_eax+r_ebx*4+0x60u));
    /* 0067f813: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0067f816: jae 0x67f825 */ if (!fC) goto L_0067f825;
L_0067f818:; BB(0x0067f818);
    /* 0067f818: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f81a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f81c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f81d: call 0x67d3ec */ r_esp -= 4; W32(r_esp, 0x67f822u); f_0067d3ec();
    /* 0067f822: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067f825:; BB(0x0067f825);
    /* 0067f825: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067f828: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067f82b: jl 0x67f80c */ if ((fS!=fO)) goto L_0067f80c;
L_0067f82d:; BB(0x0067f82d);
    /* 0067f82d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f830: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0067f833: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0067f836: jmp 0x67f88d */ goto L_0067f88d;
L_0067f838:; BB(0x0067f838);
    /* 0067f838: mov eax, edx */ r_eax = r_edx;
    /* 0067f83a: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0067f83d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0067f840: jmp 0x67f88d */ goto L_0067f88d;
L_0067f842:; BB(0x0067f842);
    /* 0067f842: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0067f849: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f84e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67f853u); f_005caba4();
    /* 0067f853: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f856: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f859: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0067f85c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f85e: je 0x67f8f9 */ if (fZ) goto L_0067f8f9;
L_0067f864:; BB(0x0067f864);
    /* 0067f864: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0067f86b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067f872: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f874: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0067f877: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f878: call 0x680ba0 */ r_esp -= 4; W32(r_esp, 0x67f87du); f_00680ba0();
    /* 0067f87d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0067f884:; BB(0x0067f884);
    /* 0067f884: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067f887: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f88a: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
L_0067f88d:; BB(0x0067f88d);
    /* 0067f88d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067f890: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f893: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067f897: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067f89c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0067f8a0: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 0067f8a3: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0067f8a7: or ecx, 0xffff0010 */ {  u32 a = r_ecx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0067f8ad: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 0067f8b1: add dword ptr [esi + 0x20], 1 */ { u32 ad = (u32)(r_esi+0x20u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067f8b5: mov dword ptr [esi + 0x24], 1 */ W32((u32)(r_esi+0x24u), 0x1u);
L_0067f8bc:; BB(0x0067f8bc);
    /* 0067f8bc: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067f8bf: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067f8c2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067f8c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067f8c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067f8cf: mov esp, ebp */ r_esp = r_ebp;
    /* 0067f8d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067f8d2: ret  */ FN_RET(0x0067f5b4); r_esp += 4; return;
L_0067f8d3:; BB(0x0067f8d3);
    /* 0067f8d3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f8d6: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0067f8d9: mov eax, dword ptr [edx + ecx*4 + 0x50] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 0067f8dd: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 0067f8e0: jmp 0x67f707 */ goto L_0067f707;
L_0067f8e5:; BB(0x0067f8e5);
    /* 0067f8e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067f8e7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f8ea: jmp 0x67f7a1 */ goto L_0067f7a1;
L_0067f8ef:; BB(0x0067f8ef);
    /* 0067f8ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067f8f1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f8f4: jmp 0x67f7fa */ goto L_0067f7fa;
L_0067f8f9:; BB(0x0067f8f9);
    /* 0067f8f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067f8fb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f8fe: jmp 0x67f884 */ goto L_0067f884;
L_0067f900:; BB(0x0067f900);
    /* 0067f900: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0067f907: push 0x1b0 */ { u32 v = 0x1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f90c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67f911u); f_005caba4();
    /* 0067f911: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f914: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f917: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067f91a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f91c: je 0x67f97f */ if (fZ) goto L_0067f97f;
L_0067f91e:; BB(0x0067f91e);
    /* 0067f91e: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0067f925: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067f92c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f92e: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0067f931: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f932: call 0x682594 */ r_esp -= 4; W32(r_esp, 0x67f937u); f_00682594();
    /* 0067f937: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0067f93e:; BB(0x0067f93e);
    /* 0067f93e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067f941: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f944: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0067f947: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067f94e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0067f950:; BB(0x0067f950);
    /* 0067f950: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f953: mov eax, dword ptr [eax + ebx*4 + 0x60] */ r_eax = R32((u32)(r_eax+r_ebx*4+0x60u));
    /* 0067f957: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0067f95a: jae 0x67f969 */ if (!fC) goto L_0067f969;
L_0067f95c:; BB(0x0067f95c);
    /* 0067f95c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f95e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f961: call 0x67d3ec */ r_esp -= 4; W32(r_esp, 0x67f966u); f_0067d3ec();
    /* 0067f966: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067f969:; BB(0x0067f969);
    /* 0067f969: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067f96c: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067f96f: jl 0x67f950 */ if ((fS!=fO)) goto L_0067f950;
L_0067f971:; BB(0x0067f971);
    /* 0067f971: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f974: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0067f977: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0067f97a: jmp 0x67f88d */ goto L_0067f88d;
L_0067f97f:; BB(0x0067f97f);
    /* 0067f97f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067f981: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f984: jmp 0x67f93e */ goto L_0067f93e;
L_0067f986:; BB(0x0067f986);
    /* 0067f986: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0067f98d: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f992: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67f997u); f_005caba4();
    /* 0067f997: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f99a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f99d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067f9a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f9a2: je 0x67f9d2 */ if (fZ) goto L_0067f9d2;
L_0067f9a4:; BB(0x0067f9a4);
    /* 0067f9a4: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0067f9ab: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0067f9b2: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f9b4: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0067f9b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f9b8: call 0x68416c */ r_esp -= 4; W32(r_esp, 0x67f9bdu); f_0068416c();
    /* 0067f9bd: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0067f9c4:; BB(0x0067f9c4);
    /* 0067f9c4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067f9c7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f9ca: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0067f9cd: jmp 0x67f88d */ goto L_0067f88d;
L_0067f9d2:; BB(0x0067f9d2);
    /* 0067f9d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067f9d4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f9d7: jmp 0x67f9c4 */ goto L_0067f9c4;
L_0067f9d9:; BB(0x0067f9d9);
    /* 0067f9d9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0067f9e0: push 0x1cc */ { u32 v = 0x1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f9e5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67f9eau); f_005caba4();
    /* 0067f9ea: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f9ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f9f0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067f9f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f9f5: je 0x67fa25 */ if (fZ) goto L_0067fa25;
L_0067f9f7:; BB(0x0067f9f7);
    /* 0067f9f7: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0067f9fe: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0067fa05: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fa07: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0067fa0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa0b: call 0x6814dc */ r_esp -= 4; W32(r_esp, 0x67fa10u); f_006814dc();
    /* 0067fa10: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0067fa17:; BB(0x0067fa17);
    /* 0067fa17: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067fa1a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fa1d: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0067fa20: jmp 0x67f88d */ goto L_0067f88d;
L_0067fa25:; BB(0x0067fa25);
    /* 0067fa25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fa27: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067fa2a: jmp 0x67fa17 */ goto L_0067fa17;
}

void f_0067fa2c(void) /* sub_67FA2C */
{
    FN_ENTER(0x0067fa2c);
    /* 0067fa2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa2d: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fa32: mov edx, dword ptr [0xa903b8] */ r_edx = R32((u32)(0xa903b8u));
    /* 0067fa38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0067fa3a: jle 0x67fe71 */ if ((fZ||fS!=fO)) goto L_0067fe71;
L_0067fa40:; BB(0x0067fa40);
    /* 0067fa40: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0067fa44: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0067fa48: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0067fa4c: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fa4e: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0067fa52: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0067fa55: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067fa57: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0067fa5a: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_0067fe71:; BB(0x0067fe71);
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x0067fa2c); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

