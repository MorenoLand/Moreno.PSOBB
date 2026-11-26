#include "protos.h"

void f_0086f530(void) /* sub_86F530 */
{
    FN_ENTER(0x0086f530);
    /* 0086f530: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f531: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f532: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086f535: mov esi, ecx */ r_esi = r_ecx;
    /* 0086f537: mov edx, dword ptr [esi + 0xb48] */ r_edx = R32((u32)(r_esi+0xb48u));
    /* 0086f53d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f53f: je 0x86f554 */ if (fZ) goto L_0086f554;
L_0086f541:; BB(0x0086f541);
    /* 0086f541: mov eax, dword ptr [esi + 0xb50] */ r_eax = R32((u32)(r_esi+0xb50u));
    /* 0086f547: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f549: je 0x86f554 */ if (fZ) goto L_0086f554;
L_0086f54b:; BB(0x0086f54b);
    /* 0086f54b: cmp dword ptr [esi + 0xb20], 0 */ {  u32 a = R32((u32)(r_esi+0xb20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f552: jne 0x86f55c */ if (!fZ) goto L_0086f55c;
L_0086f554:; BB(0x0086f554);
    /* 0086f554: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086f556: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086f559: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086f55a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086f55b: ret  */ FN_RET(0x0086f530); r_esp += 4; return;
L_0086f55c:; BB(0x0086f55c);
    /* 0086f55c: cmp dword ptr [esi + 0xb08], 0 */ {  u32 a = R32((u32)(r_esi+0xb08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f563: je 0x86f554 */ if (fZ) goto L_0086f554;
L_0086f565:; BB(0x0086f565);
    /* 0086f565: mov ebx, dword ptr [esi + 0xb1c] */ r_ebx = R32((u32)(r_esi+0xb1cu));
    /* 0086f56b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0086f56d: jle 0x86f680 */ if ((fZ||fS!=fO)) goto L_0086f680;
L_0086f573:; BB(0x0086f573);
    /* 0086f573: mov edx, 0x1000 */ r_edx = 0x1000u;
    /* 0086f578: cmp ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086f57e: jge 0x86f582 */ if ((fS==fO)) goto L_0086f582;
L_0086f580:; BB(0x0086f580);
    /* 0086f580: mov edx, ebx */ r_edx = r_ebx;
L_0086f582:; BB(0x0086f582);
    /* 0086f582: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0086f586: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0086f589: mov edi, eax */ r_edi = r_eax;
    /* 0086f58b: mov ebp, edx */ r_ebp = r_edx;
L_0086f58d:; BB(0x0086f58d);
    /* 0086f58d: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0086f591: mov ecx, esi */ r_ecx = r_esi;
    /* 0086f593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086f594: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086f596: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0086f598: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086f59a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086f59b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f59c: call 0x86fed8 */ r_esp -= 4; W32(r_esp, 0x86f5a1u); f_0086fed8();
    /* 0086f5a1: mov edx, eax */ r_edx = r_eax;
    /* 0086f5a3: mov eax, dword ptr [esi + 0xb0c] */ r_eax = R32((u32)(r_esi+0xb0cu));
    /* 0086f5a9: mov eax, dword ptr [esi + eax*4 + 0x708] */ r_eax = R32((u32)(r_esi+r_eax*4+0x708u));
    /* 0086f5b0: cmp eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f5b4: jne 0x86f5d7 */ if (!fZ) goto L_0086f5d7;
L_0086f5b6:; BB(0x0086f5b6);
    /* 0086f5b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f5b8: je 0x86f5d7 */ if (fZ) goto L_0086f5d7;
L_0086f5ba:; BB(0x0086f5ba);
    /* 0086f5ba: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0086f5bc: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086f5be: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0086f5c0: jle 0x86f66d */ if ((fZ||fS!=fO)) goto L_0086f66d;
L_0086f5c6:; BB(0x0086f5c6);
    /* 0086f5c6: cmp ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086f5cc: mov ebp, 0x1000 */ r_ebp = 0x1000u;
    /* 0086f5d1: jge 0x86f5d5 */ if ((fS==fO)) goto L_0086f5d5;
L_0086f5d3:; BB(0x0086f5d3);
    /* 0086f5d3: mov ebp, ebx */ r_ebp = r_ebx;
L_0086f5d5:; BB(0x0086f5d5);
    /* 0086f5d5: jmp 0x86f58d */ goto L_0086f58d;
L_0086f5d7:; BB(0x0086f5d7);
    /* 0086f5d7: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0086f5db: mov ecx, esi */ r_ecx = r_esi;
    /* 0086f5dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086f5de: push 0x99a508 */ { u32 v = 0x99a508u; r_esp -= 4; W32(r_esp, v); }
    /* 0086f5e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086f5e5: call 0x86fd54 */ r_esp -= 4; W32(r_esp, 0x86f5eau); f_0086fd54();
    /* 0086f5ea: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0086f5ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f5ef: jne 0x86f659 */ if (!fZ) goto L_0086f659;
L_0086f5f1:; BB(0x0086f5f1);
    /* 0086f5f1: movzx eax, byte ptr [esi + 0x700] */ r_eax = (u32)R8((u32)(r_esi+0x700u));
    /* 0086f5f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f5fa: je 0x86f615 */ if (fZ) goto L_0086f615;
L_0086f5fc:; BB(0x0086f5fc);
    /* 0086f5fc: mov eax, dword ptr [esi + 0xb0c] */ r_eax = R32((u32)(r_esi+0xb0cu));
    /* 0086f602: mov ecx, esi */ r_ecx = r_esi;
    /* 0086f604: push dword ptr [esi + eax*4 + 0x708] */ { u32 v = R32((u32)(r_esi+r_eax*4+0x708u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f60b: call 0x86fe60 */ r_esp -= 4; W32(r_esp, 0x86f610u); f_0086fe60();
    /* 0086f610: jmp 0x86f58d */ goto L_0086f58d;
L_0086f615:; BB(0x0086f615);
    /* 0086f615: mov edx, dword ptr [esi + 0xb08] */ r_edx = R32((u32)(r_esi+0xb08u));
    /* 0086f61b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f61d: je 0x86f638 */ if (fZ) goto L_0086f638;
L_0086f61f:; BB(0x0086f61f);
    /* 0086f61f: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0086f620: mov dword ptr [esi + 0xb08], edx */ W32((u32)(r_esi+0xb08u), r_edx);
    /* 0086f626: je 0x86f638 */ if (fZ) goto L_0086f638;
L_0086f628:; BB(0x0086f628);
    /* 0086f628: mov eax, dword ptr [esi + 0xb0c] */ r_eax = R32((u32)(r_esi+0xb0cu));
    /* 0086f62e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086f62f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0086f632: mov dword ptr [esi + 0xb0c], eax */ W32((u32)(r_esi+0xb0cu), r_eax);
L_0086f638:; BB(0x0086f638);
    /* 0086f638: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f63a: je 0x86f740 */ if (fZ) goto L_0086f740;
L_0086f640:; BB(0x0086f640);
    /* 0086f640: mov eax, dword ptr [esi + 0xb0c] */ r_eax = R32((u32)(r_esi+0xb0cu));
    /* 0086f646: mov ecx, esi */ r_ecx = r_esi;
    /* 0086f648: push dword ptr [esi + eax*4 + 0x708] */ { u32 v = R32((u32)(r_esi+r_eax*4+0x708u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f64f: call 0x86fe60 */ r_esp -= 4; W32(r_esp, 0x86f654u); f_0086fe60();
    /* 0086f654: jmp 0x86f58d */ goto L_0086f58d;
L_0086f659:; BB(0x0086f659);
    /* 0086f659: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f65d: mov ecx, esi */ r_ecx = r_esi;
    /* 0086f65f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f663: call 0x86fec4 */ r_esp -= 4; W32(r_esp, 0x86f668u); f_0086fec4();
    /* 0086f668: jmp 0x86f58d */ goto L_0086f58d;
L_0086f66d:; BB(0x0086f66d);
    /* 0086f66d: mov edx, dword ptr [esi + 0xb48] */ r_edx = R32((u32)(r_esi+0xb48u));
    /* 0086f673: mov ebx, dword ptr [esi + 0xb1c] */ r_ebx = R32((u32)(r_esi+0xb1cu));
    /* 0086f679: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0086f67d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0086f680:; BB(0x0086f680);
    /* 0086f680: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0086f682: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0086f686: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086f688: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f689: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0086f68d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f68e: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0086f692: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f693: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0086f697: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f698: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f699: push dword ptr [esi + 0xb28] */ { u32 v = R32((u32)(r_esi+0xb28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f69f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f6a0: call dword ptr [eax + 0x2c] */ { u32 t = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, 0x86f6a3u); call_ind(t); }
    /* 0086f6a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0086f6a5: jl 0x86f554 */ if ((fS!=fO)) goto L_0086f554;
L_0086f6ab:; BB(0x0086f6ab);
    /* 0086f6ab: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f6af: push dword ptr [esi + 0xb50] */ { u32 v = R32((u32)(r_esi+0xb50u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f6b5: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f6b9: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x86f6beu); f_0086b6b8();
    /* 0086f6be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086f6c1: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0086f6c5: cmp edx, dword ptr [esi + 0xb1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0xb1cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086f6cb: jae 0x86f6ea */ if (!fC) goto L_0086f6ea;
L_0086f6cd:; BB(0x0086f6cd);
    /* 0086f6cd: mov eax, dword ptr [esi + 0xb50] */ r_eax = R32((u32)(r_esi+0xb50u));
    /* 0086f6d3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086f6d5: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f6d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f6da: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f6de: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x86f6e3u); f_0086b6b8();
    /* 0086f6e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086f6e6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_0086f6ea:; BB(0x0086f6ea);
    /* 0086f6ea: mov eax, dword ptr [esi + 0xb48] */ r_eax = R32((u32)(r_esi+0xb48u));
    /* 0086f6f0: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0086f6f2: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f6f6: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f6fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f6fb: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f6ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086f700: call dword ptr [ebx + 0x4c] */ { u32 t = R32((u32)(r_ebx+0x4cu)); r_esp -= 4; W32(r_esp, 0x86f703u); call_ind(t); }
    /* 0086f703: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0086f707: mov eax, dword ptr [esi + 0xb14] */ r_eax = R32((u32)(r_esi+0xb14u));
    /* 0086f70d: add edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086f711: add edx, dword ptr [esi + 0xb28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0xb28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086f717: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086f719: jb 0x86f738 */ if (fC) goto L_0086f738;
L_0086f71b:; BB(0x0086f71b);
    /* 0086f71b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086f71d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086f71f: jae 0x86f71b */ if (!fC) goto L_0086f71b;
L_0086f721:; BB(0x0086f721);
    /* 0086f721: mov dword ptr [esi + 0xb28], edx */ W32((u32)(r_esi+0xb28u), r_edx);
L_0086f727:; BB(0x0086f727);
    /* 0086f727: dec dword ptr [esi + 0xb20] */ { u32 ad = (u32)(r_esi+0xb20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086f72d: mov eax, 1 */ r_eax = 0x1u;
    /* 0086f732: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086f735: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086f736: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086f737: ret  */ FN_RET(0x0086f530); r_esp += 4; return;
L_0086f738:; BB(0x0086f738);
    /* 0086f738: mov dword ptr [esi + 0xb28], edx */ W32((u32)(r_esi+0xb28u), r_edx);
    /* 0086f73e: jmp 0x86f727 */ goto L_0086f727;
L_0086f740:; BB(0x0086f740);
    /* 0086f740: mov eax, edi */ r_eax = r_edi;
    /* 0086f742: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0086f746: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0086f749: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f74a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086f74c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086f74d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x86f752u); f_0086b688();
    /* 0086f752: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086f755: mov edx, dword ptr [esi + 0xb48] */ r_edx = R32((u32)(r_esi+0xb48u));
    /* 0086f75b: mov ebx, dword ptr [esi + 0xb1c] */ r_ebx = R32((u32)(r_esi+0xb1cu));
    /* 0086f761: jmp 0x86f680 */ goto L_0086f680;
}

void f_0086f768(void) /* sub_86F768 */
{
    FN_ENTER(0x0086f768);
    /* 0086f768: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f769: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086f76a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f76b: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086f76e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0086f770: mov ebx, dword ptr [esp + 0x60] */ r_ebx = R32((u32)(r_esp+0x60u));
    /* 0086f774: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f776: je 0x86f9f4 */ if (fZ) goto L_0086f9f4;
L_0086f77c:; BB(0x0086f77c);
    /* 0086f77c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f77e: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86f783u); f_0086e9d8();
    /* 0086f783: lea esi, [ebp + 0x2f0] */ r_esi = (u32)(r_ebp+0x2f0u);
    /* 0086f789: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f78b: je 0x86f79c */ if (fZ) goto L_0086f79c;
L_0086f78d:; BB(0x0086f78d);
    /* 0086f78d: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0086f792: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f793: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f794: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x86f799u); f_00858900();
    /* 0086f799: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0086f79c:; BB(0x0086f79c);
    /* 0086f79c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f79d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f79f: call 0x86fb98 */ r_esp -= 4; W32(r_esp, 0x86f7a4u); f_0086fb98();
    /* 0086f7a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f7a6: jne 0x86f9ed */ if (!fZ) goto L_0086f9ed;
L_0086f7ac:; BB(0x0086f7ac);
    /* 0086f7ac: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0086f7af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f7b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086f7b2: call 0x86fcfc */ r_esp -= 4; W32(r_esp, 0x86f7b7u); f_0086fcfc();
    /* 0086f7b7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f7b9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0086f7bd: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0086f7c0: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 0086f7c5: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0086f7c9: fadd dword ptr [ebx*4 + 0x99a4e8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x99a4e8u));
    /* 0086f7d0: fmul qword ptr [0x99a4f0] */ ST(0) = ST(0) * R_F64((u32)(0x99a4f0u));
    /* 0086f7d6: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 0086f7da: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 0086f7df: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0086f7e4: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0086f7e8: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 0086f7ec: fistp qword ptr [esp + 0x48] */ W64((u32)(r_esp+0x48u), (u64)fx_int64(ST(0))); FPOP();
    /* 0086f7f0: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0086f7f4: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0086f7f8: cmp dword ptr [ebp + 0xb44], 0 */ {  u32 a = R32((u32)(r_ebp+0xb44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f7ff: je 0x86f9cf */ if (fZ) goto L_0086f9cf;
L_0086f805:; BB(0x0086f805);
    /* 0086f805: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f807: je 0x86f9cf */ if (fZ) goto L_0086f9cf;
L_0086f80d:; BB(0x0086f80d);
    /* 0086f80d: lea eax, [ebp + 0xb30] */ r_eax = (u32)(r_ebp+0xb30u);
    /* 0086f813: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0086f816: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0086f81a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0086f81c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0086f820: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 0086f823: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0086f826: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0086f82a: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0086f82d: movzx edx, word ptr [esp + 0x10] */ r_edx = (u32)R16((u32)(r_esp+0x10u));
    /* 0086f832: mov word ptr [eax + 0x10], dx */ W16((u32)(r_eax+0x10u), (u16)r_edx);
    /* 0086f836: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086f838: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0086f83c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0086f840: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0086f844: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0086f848: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0086f84c: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0086f850: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0086f854: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0086f858: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0086f85c: mov dword ptr [esp + 0x14], 0x24 */ W32((u32)(r_esp+0x14u), 0x24u);
    /* 0086f864: movzx edx, byte ptr [ebp + 0xb90] */ r_edx = (u32)R8((u32)(r_ebp+0xb90u));
    /* 0086f86b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f86d: je 0x86f879 */ if (fZ) goto L_0086f879;
L_0086f86f:; BB(0x0086f86f);
    /* 0086f86f: mov dword ptr [esp + 0x18], 0x18180 */ W32((u32)(r_esp+0x18u), 0x18180u);
    /* 0086f877: jmp 0x86f881 */ goto L_0086f881;
L_0086f879:; BB(0x0086f879);
    /* 0086f879: mov dword ptr [esp + 0x18], 0x10180 */ W32((u32)(r_esp+0x18u), 0x10180u);
L_0086f881:; BB(0x0086f881);
    /* 0086f881: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0086f885: mov edx, dword ptr [0x99f960] */ r_edx = R32((u32)(0x99f960u));
    /* 0086f88b: mov esi, dword ptr [0x99f964] */ r_esi = R32((u32)(0x99f964u));
    /* 0086f891: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0086f895: mov eax, dword ptr [0x99f95c] */ r_eax = R32((u32)(0x99f95cu));
    /* 0086f89a: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0086f89e: mov eax, dword ptr [0x99f968] */ r_eax = R32((u32)(0x99f968u));
    /* 0086f8a3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0086f8a7: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0086f8ab: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0086f8af: movzx eax, byte ptr [ebp + 0xb42] */ r_eax = (u32)R8((u32)(r_ebp+0xb42u));
    /* 0086f8b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f8b8: je 0x86f8c5 */ if (fZ) goto L_0086f8c5;
L_0086f8ba:; BB(0x0086f8ba);
    /* 0086f8ba: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0086f8be: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0086f8c1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
L_0086f8c5:; BB(0x0086f8c5);
    /* 0086f8c5: mov esi, dword ptr [ebp + 0xb44] */ r_esi = R32((u32)(r_ebp+0xb44u));
    /* 0086f8cb: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0086f8cd: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0086f8d1: lea eax, [ebp + 0xb48] */ r_eax = (u32)(r_ebp+0xb48u);
    /* 0086f8d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086f8d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086f8da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f8db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f8dc: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x86f8dfu); call_ind(t); }
    /* 0086f8df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0086f8e1: jl 0x86fa32 */ if ((fS!=fO)) goto L_0086fa32;
L_0086f8e7:; BB(0x0086f8e7);
    /* 0086f8e7: mov dword ptr [ebp + 0xb14], ebx */ W32((u32)(r_ebp+0xb14u), r_ebx);
    /* 0086f8ed: shr ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0086f8f0: mov edx, dword ptr [ebp + 0xb48] */ r_edx = R32((u32)(r_ebp+0xb48u));
    /* 0086f8f6: mov dword ptr [ebp + 0xb18], 0x10 */ W32((u32)(r_ebp+0xb18u), 0x10u);
    /* 0086f900: lea eax, [ebp + 0xb4c] */ r_eax = (u32)(r_ebp+0xb4cu);
    /* 0086f906: mov dword ptr [ebp + 0xb1c], ebx */ W32((u32)(r_ebp+0xb1cu), r_ebx);
    /* 0086f90c: mov dword ptr [ebp + 0xb20], 0xf */ W32((u32)(r_ebp+0xb20u), 0xfu);
    /* 0086f916: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 0086f918: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086f919: push 0x99f83c */ { u32 v = 0x99f83cu; r_esp -= 4; W32(r_esp, v); }
    /* 0086f91e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f91f: call dword ptr [ebx] */ { u32 t = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, 0x86f921u); call_ind(t); }
    /* 0086f921: cmp dword ptr [ebp + 0xb4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xb4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f928: je 0x86fa27 */ if (fZ) goto L_0086fa27;
L_0086f92e:; BB(0x0086f92e);
    /* 0086f92e: mov eax, dword ptr [ebp + 0xb18] */ r_eax = R32((u32)(r_ebp+0xb18u));
    /* 0086f934: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086f936: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086f938: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086f93a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086f93b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x86f940u); f_008581c5();
    /* 0086f940: mov ebx, eax */ r_ebx = r_eax;
    /* 0086f942: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086f945: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f947: je 0x86fa1c */ if (fZ) goto L_0086fa1c;
L_0086f94d:; BB(0x0086f94d);
    /* 0086f94d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086f94f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086f951: mov edx, dword ptr [ebp + 0xb18] */ r_edx = R32((u32)(r_ebp+0xb18u));
    /* 0086f957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0086f959: jbe 0x86f97c */ if ((fC||fZ)) goto L_0086f97c;
L_0086f95b:; BB(0x0086f95b);
    /* 0086f95b: add eax, dword ptr [ebp + 0xb1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xb1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086f961: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0086f964: mov dword ptr [ebx + esi*8], edx */ W32((u32)(r_ebx+r_esi*8), r_edx);
    /* 0086f967: mov edx, dword ptr [ebp + 0xb88] */ r_edx = R32((u32)(r_ebp+0xb88u));
    /* 0086f96d: mov dword ptr [ebx + esi*8 + 4], edx */ W32((u32)(r_ebx+r_esi*8+0x4u), r_edx);
    /* 0086f971: mov edx, dword ptr [ebp + 0xb18] */ r_edx = R32((u32)(r_ebp+0xb18u));
    /* 0086f977: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086f978: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086f97a: jb 0x86f95b */ if (fC) goto L_0086f95b;
L_0086f97c:; BB(0x0086f97c);
    /* 0086f97c: mov esi, dword ptr [ebp + 0xb4c] */ r_esi = R32((u32)(r_ebp+0xb4cu));
    /* 0086f982: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086f984: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f985: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f986: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086f987: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x86f98au); call_ind(t); }
    /* 0086f98a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0086f98c: jl 0x86fa0a */ if ((fS!=fO)) goto L_0086fa0a;
L_0086f98e:; BB(0x0086f98e);
    /* 0086f98e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086f98f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x86f994u); f_00857e98();
    /* 0086f994: push dword ptr [ebp + 0xb1c] */ { u32 v = R32((u32)(r_ebp+0xb1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f99a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x86f99fu); f_008581c5();
    /* 0086f99f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086f9a2: mov dword ptr [ebp + 0xb50], eax */ W32((u32)(r_ebp+0xb50u), r_eax);
    /* 0086f9a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f9aa: je 0x86f9ff */ if (fZ) goto L_0086f9ff;
L_0086f9ac:; BB(0x0086f9ac);
    /* 0086f9ac: mov eax, dword ptr [ebp + 0xb48] */ r_eax = R32((u32)(r_ebp+0xb48u));
    /* 0086f9b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0086f9b4: push dword ptr [ebp + 0xb2c] */ { u32 v = R32((u32)(r_ebp+0xb2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086f9ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086f9bb: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x86f9beu); call_ind(t); }
    /* 0086f9be: mov dword ptr [ebp + 0x6fc], 1 */ W32((u32)(r_ebp+0x6fcu), 0x1u);
    /* 0086f9c8: mov eax, 1 */ r_eax = 0x1u;
    /* 0086f9cd: jmp 0x86f9d1 */ goto L_0086f9d1;
L_0086f9cf:; BB(0x0086f9cf);
    /* 0086f9cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0086f9d1:; BB(0x0086f9d1);
    /* 0086f9d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086f9d3: je 0x86f9ed */ if (fZ) goto L_0086f9ed;
L_0086f9d5:; BB(0x0086f9d5);
    /* 0086f9d5: mov dword ptr [ebp + 0x6fc], 1 */ W32((u32)(r_ebp+0x6fcu), 0x1u);
    /* 0086f9df: mov eax, 1 */ r_eax = 0x1u;
    /* 0086f9e4: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086f9e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086f9e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086f9e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086f9ea: ret 4 */ FN_RET(0x0086f768); r_esp += 8; return;
L_0086f9ed:; BB(0x0086f9ed);
    /* 0086f9ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086f9ef: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86f9f4u); f_0086e9d8();
L_0086f9f4:; BB(0x0086f9f4);
    /* 0086f9f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086f9f6: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086f9f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086f9fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086f9fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086f9fc: ret 4 */ FN_RET(0x0086f768); r_esp += 8; return;
L_0086f9ff:; BB(0x0086f9ff);
    /* 0086f9ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086fa01: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86fa06u); f_0086e9d8();
    /* 0086fa06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086fa08: jmp 0x86f9d1 */ goto L_0086f9d1;
L_0086fa0a:; BB(0x0086fa0a);
    /* 0086fa0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fa0b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x86fa10u); f_00857e98();
    /* 0086fa10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086fa11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086fa13: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86fa18u); f_0086e9d8();
    /* 0086fa18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086fa1a: jmp 0x86f9d1 */ goto L_0086f9d1;
L_0086fa1c:; BB(0x0086fa1c);
    /* 0086fa1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086fa1e: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86fa23u); f_0086e9d8();
    /* 0086fa23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086fa25: jmp 0x86f9d1 */ goto L_0086f9d1;
L_0086fa27:; BB(0x0086fa27);
    /* 0086fa27: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086fa29: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86fa2eu); f_0086e9d8();
    /* 0086fa2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086fa30: jmp 0x86f9d1 */ goto L_0086f9d1;
L_0086fa32:; BB(0x0086fa32);
    /* 0086fa32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0086fa34: call 0x86e9d8 */ r_esp -= 4; W32(r_esp, 0x86fa39u); f_0086e9d8();
    /* 0086fa39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086fa3b: jmp 0x86f9d1 */ goto L_0086f9d1;
}

void f_0086fa40(void) /* sub_86FA40 */
{
    FN_ENTER(0x0086fa40);
    /* 0086fa40: mov eax, dword ptr [0xae9720] */ r_eax = R32((u32)(0xae9720u));
    /* 0086fa45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086fa47: je 0x86fa5a */ if (fZ) goto L_0086fa5a;
L_0086fa49:; BB(0x0086fa49);
    /* 0086fa49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086fa4a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x86fa4fu); f_00857e98();
    /* 0086fa4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086fa50: mov dword ptr [0xae9720], 0 */ W32((u32)(0xae9720u), 0x0u);
L_0086fa5a:; BB(0x0086fa5a);
    /* 0086fa5a: ret  */ FN_RET(0x0086fa40); r_esp += 4; return;
}

void f_0086fa5c(void) /* sub_86FA5C */
{
    FN_ENTER(0x0086fa5c);
    /* 0086fa5c: push 0x5cc0 */ { u32 v = 0x5cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086fa61: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x86fa66u); f_008581c5();
    /* 0086fa66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086fa67: mov dword ptr [0xae9720], eax */ W32((u32)(0xae9720u), r_eax);
    /* 0086fa6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086fa6e: je 0x86fb03 */ if (fZ) goto L_0086fb03;
L_0086fa74:; BB(0x0086fa74);
    /* 0086fa74: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086fa76: lea ecx, [eax + 0xb98] */ r_ecx = (u32)(r_eax+0xb98u);
    /* 0086fa7c: mov byte ptr [0xae96e0], dl */ W8((u32)(0xae96e0u), (u8)r_edx);
    /* 0086fa82: mov dword ptr [0xae96e4], eax */ W32((u32)(0xae96e4u), r_eax);
    /* 0086fa87: mov byte ptr [0xae96e8], dl */ W8((u32)(0xae96e8u), (u8)r_edx);
    /* 0086fa8d: mov dword ptr [0xae96ec], ecx */ W32((u32)(0xae96ecu), r_ecx);
    /* 0086fa93: mov byte ptr [0xae96f0], dl */ W8((u32)(0xae96f0u), (u8)r_edx);
    /* 0086fa99: lea ecx, [eax + 0x1730] */ r_ecx = (u32)(r_eax+0x1730u);
    /* 0086fa9f: mov dword ptr [0xae96f4], ecx */ W32((u32)(0xae96f4u), r_ecx);
    /* 0086faa5: lea ecx, [eax + 0x22c8] */ r_ecx = (u32)(r_eax+0x22c8u);
    /* 0086faab: mov byte ptr [0xae96f8], dl */ W8((u32)(0xae96f8u), (u8)r_edx);
    /* 0086fab1: mov dword ptr [0xae96fc], ecx */ W32((u32)(0xae96fcu), r_ecx);
    /* 0086fab7: mov byte ptr [0xae9700], dl */ W8((u32)(0xae9700u), (u8)r_edx);
    /* 0086fabd: lea ecx, [eax + 0x2e60] */ r_ecx = (u32)(r_eax+0x2e60u);
    /* 0086fac3: mov dword ptr [0xae9704], ecx */ W32((u32)(0xae9704u), r_ecx);
    /* 0086fac9: lea ecx, [eax + 0x39f8] */ r_ecx = (u32)(r_eax+0x39f8u);
    /* 0086facf: mov byte ptr [0xae9708], dl */ W8((u32)(0xae9708u), (u8)r_edx);
    /* 0086fad5: mov dword ptr [0xae970c], ecx */ W32((u32)(0xae970cu), r_ecx);
    /* 0086fadb: mov byte ptr [0xae9710], dl */ W8((u32)(0xae9710u), (u8)r_edx);
    /* 0086fae1: lea ecx, [eax + 0x4590] */ r_ecx = (u32)(r_eax+0x4590u);
    /* 0086fae7: add eax, 0x5128 */ {  u32 a = r_eax; u32 b = 0x5128u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086faec: mov dword ptr [0xae9714], ecx */ W32((u32)(0xae9714u), r_ecx);
    /* 0086faf2: mov byte ptr [0xae9718], dl */ W8((u32)(0xae9718u), (u8)r_edx);
    /* 0086faf8: mov dword ptr [0xae971c], eax */ W32((u32)(0xae971cu), r_eax);
    /* 0086fafd: mov eax, 1 */ r_eax = 0x1u;
    /* 0086fb02: ret  */ FN_RET(0x0086fa5c); r_esp += 4; return;
L_0086fb03:; BB(0x0086fb03);
    /* 0086fb03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086fb05: ret  */ FN_RET(0x0086fa5c); r_esp += 4; return;
}

void f_0086fb08(void) /* sub_86FB08 */
{
    FN_ENTER(0x0086fb08);
    /* 0086fb08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086fb09: mov esi, ecx */ r_esi = r_ecx;
    /* 0086fb0b: mov ecx, esi */ r_ecx = r_esi;
    /* 0086fb0d: call 0x86ece4 */ r_esp -= 4; W32(r_esp, 0x86fb12u); f_0086ece4();
    /* 0086fb12: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0086fb15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086fb17: je 0x86fb29 */ if (fZ) goto L_0086fb29;
L_0086fb19:; BB(0x0086fb19);
    /* 0086fb19: push dword ptr [esi + 0xb84] */ { u32 v = R32((u32)(r_esi+0xb84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fb1f: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x86fb25u); call_ind(t); }
    /* 0086fb25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086fb27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086fb28: ret  */ FN_RET(0x0086fb08); r_esp += 4; return;
L_0086fb29:; BB(0x0086fb29);
    /* 0086fb29: mov eax, 1 */ r_eax = 0x1u;
    /* 0086fb2e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086fb2f: ret  */ FN_RET(0x0086fb08); r_esp += 4; return;
}

void f_0086fb30(void) /* sub_86FB30 */
{
    FN_ENTER(0x0086fb30);
    /* 0086fb30: mov eax, ecx */ r_eax = r_ecx;
    /* 0086fb32: mov byte ptr [eax + 0x2d0], 1 */ W8((u32)(r_eax+0x2d0u), 0x1u);
    /* 0086fb39: lea ecx, [eax + 0x2d4] */ r_ecx = (u32)(r_eax+0x2d4u);
    /* 0086fb3f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086fb41: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0086fb43: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0086fb46: lea ecx, [eax + 0x2e0] */ r_ecx = (u32)(r_eax+0x2e0u);
    /* 0086fb4c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086fb4e: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0086fb50: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0086fb53: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0086fb56: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0086fb59: ret  */ FN_RET(0x0086fb30); r_esp += 4; return;
}

void f_0086fb5c(void) /* sub_86FB5C */
{
    FN_ENTER(0x0086fb5c);
    /* 0086fb5c: call 0x86fb64 */ r_esp -= 4; W32(r_esp, 0x86fb61u); f_0086fb64();
    /* 0086fb61: ret  */ FN_RET(0x0086fb5c); r_esp += 4; return;
}

void f_0086fb64(void) /* sub_86FB64 */
{
    FN_ENTER(0x0086fb64);
    /* 0086fb64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086fb65: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0086fb67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086fb69: movzx edx, byte ptr [ebp + 0x2d0] */ r_edx = (u32)R8((u32)(r_ebp+0x2d0u));
    /* 0086fb70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086fb72: jne 0x86fb7b */ if (!fZ) goto L_0086fb7b;
L_0086fb74:; BB(0x0086fb74);
    /* 0086fb74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086fb75: call 0x8700c0 */ r_esp -= 4; W32(r_esp, 0x86fb7au); f_008700c0();
    /* 0086fb7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086fb7b:; BB(0x0086fb7b);
    /* 0086fb7b: lea ecx, [ebp + 0x2e0] */ r_ecx = (u32)(r_ebp+0x2e0u);
    /* 0086fb81: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086fb83: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0086fb85: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0086fb88: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0086fb8b: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0086fb8e: mov byte ptr [ebp + 0x2d0], 1 */ W8((u32)(r_ebp+0x2d0u), 0x1u);
    /* 0086fb95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086fb96: ret  */ FN_RET(0x0086fb64); r_esp += 4; return;
}

void f_0086fb98(void) /* sub_86FB98 */
{
    FN_ENTER(0x0086fb98);
    /* 0086fb98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fb99: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086fb9c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0086fb9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0086fba0: call 0x86fb64 */ r_esp -= 4; W32(r_esp, 0x86fba5u); f_0086fb64();
    /* 0086fba5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086fba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086fba8: push 0x8000080 */ { u32 v = 0x8000080u; r_esp -= 4; W32(r_esp, v); }
    /* 0086fbad: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0086fbaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086fbb0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086fbb2: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0086fbb7: push dword ptr [esp + 0x60] */ { u32 v = R32((u32)(r_esp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fbbb: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x86fbc1u); call_ind(t); }
    /* 0086fbc1: mov dword ptr [ebx + 0x2d4], eax */ W32((u32)(r_ebx+0x2d4u), r_eax);
    /* 0086fbc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086fbc9: je 0x86fc4f */ if (fZ) goto L_0086fc4f;
L_0086fbcf:; BB(0x0086fbcf);
    /* 0086fbcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086fbd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086fbd2: call dword ptr [0x8f8138] */ { u32 t = R32((u32)(0x8f8138u)); r_esp -= 4; W32(r_esp, 0x86fbd8u); call_ind(t); }
    /* 0086fbd8: mov dword ptr [ebx + 0x2d8], eax */ W32((u32)(r_ebx+0x2d8u), r_eax);
    /* 0086fbde: lea edx, [ebx + 0x2d4] */ r_edx = (u32)(r_ebx+0x2d4u);
    /* 0086fbe4: mov eax, dword ptr [0xa24e40] */ r_eax = R32((u32)(0xa24e40u));
    /* 0086fbe9: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0086fbed: mov eax, dword ptr [0xa24e44] */ r_eax = R32((u32)(0xa24e44u));
    /* 0086fbf2: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0086fbf6: mov eax, dword ptr [0xa24e48] */ r_eax = R32((u32)(0xa24e48u));
    /* 0086fbfb: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0086fbff: mov eax, dword ptr [0xa24e4c] */ r_eax = R32((u32)(0xa24e4cu));
    /* 0086fc04: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0086fc08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086fc0a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0086fc0d: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0086fc11: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0086fc15: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0086fc19: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0086fc1d: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0086fc21: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0086fc23: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0086fc27: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0086fc2a: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0086fc2e: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0086fc31: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0086fc35: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0086fc38: call 0x8701e0 */ r_esp -= 4; W32(r_esp, 0x86fc3du); f_008701e0();
    /* 0086fc3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086fc3f: jne 0x86fc48 */ if (!fZ) goto L_0086fc48;
L_0086fc41:; BB(0x0086fc41);
    /* 0086fc41: mov byte ptr [ebx + 0x2d0], 0 */ W8((u32)(r_ebx+0x2d0u), 0x0u);
L_0086fc48:; BB(0x0086fc48);
    /* 0086fc48: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086fc4b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086fc4c: ret 4 */ FN_RET(0x0086fb98); r_esp += 8; return;
L_0086fc4f:; BB(0x0086fc4f);
    /* 0086fc4f: mov eax, 0xffffff80 */ r_eax = 0xffffff80u;
    /* 0086fc54: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086fc57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086fc58: ret 4 */ FN_RET(0x0086fb98); r_esp += 8; return;
}

void f_0086fc5c(void) /* sub_86FC5C */
{
    FN_ENTER(0x0086fc5c);
    /* 0086fc5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fc5d: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086fc60: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0086fc62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0086fc64: call 0x86fb64 */ r_esp -= 4; W32(r_esp, 0x86fc69u); f_0086fb64();
    /* 0086fc69: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0086fc6d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086fc6f: lea edx, [ebx + 0x2e0] */ r_edx = (u32)(r_ebx+0x2e0u);
    /* 0086fc75: mov dword ptr [ebx + 0x2e0], eax */ W32((u32)(r_ebx+0x2e0u), r_eax);
    /* 0086fc7b: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0086fc7f: mov dword ptr [ebx + 0x2e8], ecx */ W32((u32)(r_ebx+0x2e8u), r_ecx);
    /* 0086fc85: mov dword ptr [ebx + 0x2ec], ecx */ W32((u32)(r_ebx+0x2ecu), r_ecx);
    /* 0086fc8b: mov dword ptr [ebx + 0x2e4], eax */ W32((u32)(r_ebx+0x2e4u), r_eax);
    /* 0086fc91: mov eax, dword ptr [0xa24e50] */ r_eax = R32((u32)(0xa24e50u));
    /* 0086fc96: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0086fc9a: mov eax, dword ptr [0xa24e54] */ r_eax = R32((u32)(0xa24e54u));
    /* 0086fc9f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0086fca3: mov eax, dword ptr [0xa24e58] */ r_eax = R32((u32)(0xa24e58u));
    /* 0086fca8: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0086fcac: mov eax, dword ptr [0xa24e5c] */ r_eax = R32((u32)(0xa24e5cu));
    /* 0086fcb1: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0086fcb5: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0086fcb9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0086fcbc: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0086fcc0: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0086fcc4: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0086fcc8: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0086fccc: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0086fcce: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0086fcd2: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0086fcd5: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0086fcd9: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0086fcdc: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0086fce0: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0086fce3: call 0x8701e0 */ r_esp -= 4; W32(r_esp, 0x86fce8u); f_008701e0();
    /* 0086fce8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086fcea: jne 0x86fcf3 */ if (!fZ) goto L_0086fcf3;
L_0086fcec:; BB(0x0086fcec);
    /* 0086fcec: mov byte ptr [ebx + 0x2d0], 0 */ W8((u32)(r_ebx+0x2d0u), 0x0u);
L_0086fcf3:; BB(0x0086fcf3);
    /* 0086fcf3: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086fcf6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086fcf7: ret 8 */ FN_RET(0x0086fc5c); r_esp += 12; return;
}

void f_0086fcfc(void) /* sub_86FCFC */
{
    FN_ENTER(0x0086fcfc);
    /* 0086fcfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fcfd: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0086fd01: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086fd03: je 0x86fd4d */ if (fZ) goto L_0086fd4d;
L_0086fd05:; BB(0x0086fd05);
    /* 0086fd05: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086fd07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fd08: call 0x87346c */ r_esp -= 4; W32(r_esp, 0x86fd0du); f_0087346c();
    /* 0086fd0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086fd10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086fd12: je 0x86fd4d */ if (fZ) goto L_0086fd4d;
L_0086fd14:; BB(0x0086fd14);
    /* 0086fd14: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0086fd19: mov word ptr [ebx], cx */ W16((u32)(r_ebx), (u16)r_ecx);
    /* 0086fd1c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0086fd1f: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 0086fd23: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0086fd26: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0086fd29: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0086fd2c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0086fd2e: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0086fd31: mov word ptr [ebx + 0xc], ax */ W16((u32)(r_ebx+0xcu), (u16)r_eax);
    /* 0086fd35: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0086fd38: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 0086fd3b: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0086fd40: mov word ptr [ebx + 0xe], ax */ W16((u32)(r_ebx+0xeu), (u16)r_eax);
    /* 0086fd44: mov eax, 1 */ r_eax = 0x1u;
    /* 0086fd49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086fd4a: ret 4 */ FN_RET(0x0086fcfc); r_esp += 8; return;
L_0086fd4d:; BB(0x0086fd4d);
    /* 0086fd4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086fd4f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086fd50: ret 4 */ FN_RET(0x0086fcfc); r_esp += 8; return;
}

void f_0086fd54(void) /* sub_86FD54 */
{
    FN_ENTER(0x0086fd54);
    /* 0086fd54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086fd55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086fd56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086fd57: sub esp, 0x204 */ {  u32 a = r_esp; u32 b = 0x204u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086fd5d: mov esi, ecx */ r_esi = r_ecx;
    /* 0086fd5f: mov edi, dword ptr [esp + 0x218] */ r_edi = R32((u32)(r_esp+0x218u));
    /* 0086fd66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086fd68: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0086fd6a: mov ecx, edi */ r_ecx = r_edi;
    /* 0086fd6c: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086fd6e: je 0x86fd78 */ if (fZ) goto L_0086fd78;
L_0086fd70:; BB(0x0086fd70);
    /* 0086fd70: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086fd71: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086fd72: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0086fd74: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086fd76: jne 0x86fd70 */ if (!fZ) goto L_0086fd70;
L_0086fd78:; BB(0x0086fd78);
    /* 0086fd78: mov ebp, eax */ r_ebp = r_eax;
    /* 0086fd7a: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 0086fd7d: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086fd83: jbe 0x86fd8a */ if ((fC||fZ)) goto L_0086fd8a;
L_0086fd85:; BB(0x0086fd85);
    /* 0086fd85: mov ebp, 0xfe */ r_ebp = 0xfeu;
L_0086fd8a:; BB(0x0086fd8a);
    /* 0086fd8a: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0086fd8e: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0086fd93: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fd95: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x86fd9au); f_00858900();
    /* 0086fd9a: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0086fd9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fd9f: call 0x8cab7c */ r_esp -= 4; W32(r_esp, 0x86fda4u); f_008cab7c();
    /* 0086fda4: push dword ptr [esp + 0x224] */ { u32 v = R32((u32)(r_esp+0x224u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fdab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086fdac: call 0x8734bc */ r_esp -= 4; W32(r_esp, 0x86fdb1u); f_008734bc();
    /* 0086fdb1: mov edi, eax */ r_edi = r_eax;
    /* 0086fdb3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086fdb6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086fdb8: je 0x86fe4b */ if (fZ) goto L_0086fe4b;
L_0086fdbe:; BB(0x0086fdbe);
    /* 0086fdbe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086fdc0: cmp dword ptr [edi + 8], 0 */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086fdc4: jle 0x86fe1c */ if ((fZ||fS!=fO)) goto L_0086fe1c;
L_0086fdc6:; BB(0x0086fdc6);
    /* 0086fdc6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_0086fdc9:; BB(0x0086fdc9);
    /* 0086fdc9: lea ecx, [esp + 0x104] */ r_ecx = (u32)(r_esp+0x104u);
    /* 0086fdd0: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0086fdd2: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0086fdd7: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fdda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fddb: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x86fde0u); f_00858900();
    /* 0086fde0: lea edx, [esp + 0x110] */ r_edx = (u32)(r_esp+0x110u);
    /* 0086fde7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fde8: call 0x8cab7c */ r_esp -= 4; W32(r_esp, 0x86fdedu); f_008cab7c();
    /* 0086fded: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0086fdf1: lea edx, [esp + 0x114] */ r_edx = (u32)(r_esp+0x114u);
    /* 0086fdf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086fdf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fdfa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fdfb: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x86fe00u); f_008598c0();
    /* 0086fe00: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086fe03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086fe05: jne 0x86fe13 */ if (!fZ) goto L_0086fe13;
L_0086fe07:; BB(0x0086fe07);
    /* 0086fe07: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0086fe09: mov edx, ebp */ r_edx = r_ebp;
    /* 0086fe0b: add edx, dword ptr [ecx + esi*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi*4)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086fe0e: cmp byte ptr [edx], 0x3d */ {  u32 a = R8((u32)(r_edx)); u32 b = 0x3du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086fe11: je 0x86fe45 */ if (fZ) goto L_0086fe45;
L_0086fe13:; BB(0x0086fe13);
    /* 0086fe13: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086fe14: cmp esi, dword ptr [edi + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086fe17: jl 0x86fdc9 */ if ((fS!=fO)) goto L_0086fdc9;
L_0086fe19:; BB(0x0086fe19);
    /* 0086fe19: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0086fe1c:; BB(0x0086fe1c);
    /* 0086fe1c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0086fe1e:; BB(0x0086fe1e);
    /* 0086fe1e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086fe20: je 0x86fe4f */ if (fZ) goto L_0086fe4f;
L_0086fe22:; BB(0x0086fe22);
    /* 0086fe22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fe23: call 0x85a0ff */ r_esp -= 4; W32(r_esp, 0x86fe28u); f_0085a0ff();
    /* 0086fe28: mov ecx, dword ptr [esp + 0x220] */ r_ecx = R32((u32)(r_esp+0x220u));
    /* 0086fe2f: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0086fe31: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0086fe34: mov eax, 1 */ r_eax = 0x1u;
    /* 0086fe39: add esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086fe3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086fe40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086fe41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086fe42: ret 0xc */ FN_RET(0x0086fd54); r_esp += 16; return;
L_0086fe45:; BB(0x0086fe45);
    /* 0086fe45: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0086fe48: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086fe49: jmp 0x86fe1e */ goto L_0086fe1e;
L_0086fe4b:; BB(0x0086fe4b);
    /* 0086fe4b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086fe4d: jmp 0x86fe1e */ goto L_0086fe1e;
L_0086fe4f:; BB(0x0086fe4f);
    /* 0086fe4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086fe51: add esp, 0x204 */ {  u32 a = r_esp; u32 b = 0x204u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086fe57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086fe58: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086fe59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086fe5a: ret 0xc */ FN_RET(0x0086fd54); r_esp += 16; return;
}

void f_0086fe60(void) /* sub_86FE60 */
{
    FN_ENTER(0x0086fe60);
    /* 0086fe60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086fe61: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0086fe63: movzx eax, byte ptr [ebp + 0x2d0] */ r_eax = (u32)R8((u32)(r_ebp+0x2d0u));
    /* 0086fe6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086fe6c: jne 0x86fea7 */ if (!fZ) goto L_0086fea7;
L_0086fe6e:; BB(0x0086fe6e);
    /* 0086fe6e: cmp dword ptr [ebp + 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086fe72: je 0x86feb0 */ if (fZ) goto L_0086feb0;
L_0086fe74:; BB(0x0086fe74);
    /* 0086fe74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086fe75: call 0x871d2c */ r_esp -= 4; W32(r_esp, 0x86fe7au); f_00871d2c();
    /* 0086fe7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086fe7b: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0086fe7f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086fe81: jge 0x86fe9e */ if ((fS==fO)) goto L_0086fe9e;
L_0086fe83:; BB(0x0086fe83);
    /* 0086fe83: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0086fe86: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0086fe8a: push dword ptr [eax + edx*8 + 4] */ { u32 v = R32((u32)(r_eax+r_edx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fe8e: push dword ptr [eax + edx*8] */ { u32 v = R32((u32)(r_eax+r_edx*8)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fe91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086fe92: call 0x871778 */ r_esp -= 4; W32(r_esp, 0x86fe97u); f_00871778();
    /* 0086fe97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086fe9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086fe9b: ret 4 */ FN_RET(0x0086fe60); r_esp += 8; return;
L_0086fe9e:; BB(0x0086fe9e);
    /* 0086fe9e: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 0086fea3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086fea4: ret 4 */ FN_RET(0x0086fe60); r_esp += 8; return;
L_0086fea7:; BB(0x0086fea7);
    /* 0086fea7: mov eax, 0xffffff76 */ r_eax = 0xffffff76u;
    /* 0086feac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086fead: ret 4 */ FN_RET(0x0086fe60); r_esp += 8; return;
L_0086feb0:; BB(0x0086feb0);
    /* 0086feb0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086feb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086feb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086feb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086feb5: call 0x871778 */ r_esp -= 4; W32(r_esp, 0x86febau); f_00871778();
    /* 0086feba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086febd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086febe: ret 4 */ FN_RET(0x0086fe60); r_esp += 8; return;
}

void f_0086fed8(void) /* sub_86FED8 */
{
    FN_ENTER(0x0086fed8);
    /* 0086fed8: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fedc: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fee0: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fee4: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fee8: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086feec: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fef0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fef1: call 0x873508 */ r_esp -= 4; W32(r_esp, 0x86fef6u); f_00873508();
    /* 0086fef6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086fef9: ret 0x18 */ FN_RET(0x0086fed8); r_esp += 28; return;
}

void f_0086fefc(void)
{
    FN_ENTER(0x0086fefc);
    /* 0086fefc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086fefd: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0086ff01: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0086ff05: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0086ff08: imul edx, dword ptr [esp + 0x10] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x10u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0086ff0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff11: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ff15: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ff17: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x86ff1du); call_ind(t); }
    /* 0086ff1d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0086ff20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086ff21: ret  */ FN_RET(0x0086fefc); r_esp += 4; return;
}

void f_0086ff24(void)
{
    FN_ENTER(0x0086ff24);
    /* 0086ff24: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0086ff28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ff2a: je 0x86ff64 */ if (fZ) goto L_0086ff64;
L_0086ff2c:; BB(0x0086ff2c);
    /* 0086ff2c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ff2f: jne 0x86ff48 */ if (!fZ) goto L_0086ff48;
L_0086ff31:; BB(0x0086ff31);
    /* 0086ff31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff35: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0086ff39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff3a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0086ff3e: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ff40: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x86ff46u); call_ind(t); }
    /* 0086ff46: jmp 0x86ff79 */ goto L_0086ff79;
L_0086ff48:; BB(0x0086ff48);
    /* 0086ff48: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ff4b: jne 0x86ff79 */ if (!fZ) goto L_0086ff79;
L_0086ff4d:; BB(0x0086ff4d);
    /* 0086ff4d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff51: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0086ff55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff56: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0086ff5a: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ff5c: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x86ff62u); call_ind(t); }
    /* 0086ff62: jmp 0x86ff79 */ goto L_0086ff79;
L_0086ff64:; BB(0x0086ff64);
    /* 0086ff64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086ff66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff68: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0086ff6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff6d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0086ff71: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ff73: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x86ff79u); call_ind(t); }
L_0086ff79:; BB(0x0086ff79);
    /* 0086ff79: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x86ff7fu); call_ind(t); }
    /* 0086ff7f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086ff82: jne 0x86ff8a */ if (!fZ) goto L_0086ff8a;
L_0086ff84:; BB(0x0086ff84);
    /* 0086ff84: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0086ff89: ret  */ FN_RET(0x0086ff24); r_esp += 4; return;
L_0086ff8a:; BB(0x0086ff8a);
    /* 0086ff8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ff8c: ret  */ FN_RET(0x0086ff24); r_esp += 4; return;
}

void f_0086ff90(void)
{
    FN_ENTER(0x0086ff90);
    /* 0086ff90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086ff91: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0086ff95: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ff97: je 0x86ffaf */ if (fZ) goto L_0086ffaf;
L_0086ff99:; BB(0x0086ff99);
    /* 0086ff99: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0086ff9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ff9e: je 0x86ffaf */ if (fZ) goto L_0086ffaf;
L_0086ffa0:; BB(0x0086ffa0);
    /* 0086ffa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ffa1: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x86ffa7u); call_ind(t); }
    /* 0086ffa7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086ffa9: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0086ffac: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
L_0086ffaf:; BB(0x0086ffaf);
    /* 0086ffaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ffb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086ffb2: ret  */ FN_RET(0x0086ff90); r_esp += 4; return;
}

void f_0086ffb4(void)
{
    FN_ENTER(0x0086ffb4);
    /* 0086ffb4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086ffb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086ffba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ffbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ffbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ffbe: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ffc0: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x86ffc6u); call_ind(t); }
    /* 0086ffc6: ret  */ FN_RET(0x0086ffb4); r_esp += 4; return;
}

void f_0086ffc8(void) /* sub_86FFC8 */
{
    FN_ENTER(0x0086ffc8);
    /* 0086ffc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ffc9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086ffca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ffcb: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0086ffcf: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0086ffd3: imul ebx, dword ptr [esp + 0x18] */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)R32((u32)(r_esp+0x18u)); r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0086ffd8: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 0086ffdb: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0086ffde: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0086ffe0: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086ffe2: jbe 0x870018 */ if ((fC||fZ)) goto L_00870018;
L_0086ffe4:; BB(0x0086ffe4);
    /* 0086ffe4: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0086ffe6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ffe8: jne 0x86fff2 */ if (!fZ) goto L_0086fff2;
L_0086ffea:; BB(0x0086ffea);
    /* 0086ffea: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0086ffec:; BB(0x0086ffec);
    /* 0086ffec: mov eax, ebx */ r_eax = r_ebx;
    /* 0086ffee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086ffef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086fff0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086fff1: ret  */ FN_RET(0x0086ffc8); r_esp += 4; return;
L_0086fff2:; BB(0x0086fff2);
    /* 0086fff2: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0086fff4: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086fff6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086fff7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fff8: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0086fffc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fffd: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x870002u); f_0086b6b8();
    /* 00870002: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870005: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00870008: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0087000b: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fC = (r < a); }
    /* 0087000d: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 00870010: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 00870013: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 00870016: jmp 0x86ffec */ goto L_0086ffec;
L_00870018:; BB(0x00870018);
    /* 00870018: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0087001a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087001c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087001d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087001e: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00870022: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00870023: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x870028u); f_0086b6b8();
    /* 00870028: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087002b: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0087002e: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00870031: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 00870033: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 00870036: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 00870039: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 0087003c: jmp 0x86ffec */ goto L_0086ffec;
}

