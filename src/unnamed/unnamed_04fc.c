#include "protos.h"

void f_004fc320(void) /* sub_4FC320 */
{
    FN_ENTER(0x004fc320);
    /* 004fc320: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fc321: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc323: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4fc328u); f_00807ac0();
    /* 004fc328: mov eax, dword ptr [eax*4 + 0xa06be0] */ r_eax = R32((u32)(r_eax*4+0xa06be0u));
    /* 004fc32f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc331: je 0x4fc35e */ if (fZ) goto L_004fc35e;
L_004fc333:; BB(0x004fc333);
    /* 004fc333: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc337: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 004fc33d: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004fc340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc344: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc346: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fc348: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fc34b: mov dword ptr [edi + 0xf0], eax */ W32((u32)(r_edi+0xf0u), r_eax);
    /* 004fc351: mov dword ptr [edi + 0xfc], edx */ W32((u32)(r_edi+0xfcu), r_edx);
    /* 004fc357: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x4fc359u); call_ind(t); }
    /* 004fc359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fc35a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fc35b: ret 4 */ FN_RET(0x004fc320); r_esp += 8; return;
L_004fc35e:; BB(0x004fc35e);
    /* 004fc35e: mov dword ptr [edi + 0xf0], 0 */ W32((u32)(r_edi+0xf0u), 0x0u);
    /* 004fc368: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fc36a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fc36b: ret 4 */ FN_RET(0x004fc320); r_esp += 8; return;
}

void f_004fc370(void) /* sub_4FC370 */
{
    FN_ENTER(0x004fc370);
    /* 004fc370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc371: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc373: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc375: push 0x8d3404 */ { u32 v = 0x8d3404u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc37a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fc380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc381: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004fc388: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc38b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004fc38e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004fc391: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004fc394: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004fc397: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004fc39a: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc3a0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004fc3a3: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004fc3a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc3a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc3aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc3ac: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004fc3b3: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fc3b8u); f_007c1100();
    /* 004fc3b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc3ba: jne 0x4fc3ca */ if (!fZ) goto L_004fc3ca;
L_004fc3bc:; BB(0x004fc3bc);
    /* 004fc3bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc3bf: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 004fc3c5: jmp 0x4fc4b0 */ goto L_004fc4b0;
L_004fc3ca:; BB(0x004fc3ca);
    /* 004fc3ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc3cd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc3cf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc3d1: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fc3d4: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc3da: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004fc3dd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc3df: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc3e1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc3e3: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004fc3ea: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4fc3efu); f_007c09fc();
    /* 004fc3ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc3f1: je 0x4fc3fd */ if (fZ) goto L_004fc3fd;
L_004fc3f3:; BB(0x004fc3f3);
    /* 004fc3f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc3f6: add dword ptr [eax + 0xec], 1 */ { u32 ad = (u32)(r_eax+0xecu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004fc3fd:; BB(0x004fc3fd);
    /* 004fc3fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc400: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc402: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc404: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fc407: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc40d: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004fc410: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc412: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc414: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc416: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004fc41d: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4fc422u); f_007c09fc();
    /* 004fc422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc424: je 0x4fc43a */ if (fZ) goto L_004fc43a;
L_004fc426:; BB(0x004fc426);
    /* 004fc426: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc429: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 004fc42f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fc432: mov dword ptr [eax + 0xec], edx */ W32((u32)(r_eax+0xecu), r_edx);
    /* 004fc438: jmp 0x4fc443 */ goto L_004fc443;
L_004fc43a:; BB(0x004fc43a);
    /* 004fc43a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc43d: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
L_004fc443:; BB(0x004fc443);
    /* 004fc443: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc445: jne 0x4fc4a7 */ if (!fZ) goto L_004fc4a7;
L_004fc447:; BB(0x004fc447);
    /* 004fc447: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc449: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc44b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fc44e: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc454: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004fc457: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc459: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc45b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc45d: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004fc464: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4fc469u); f_007c09fc();
    /* 004fc469: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc46b: jne 0x4fcc7b */ if (!fZ) goto L_004fcc7b;
L_004fc471:; BB(0x004fc471);
    /* 004fc471: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc474: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc476: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc478: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fc47b: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc481: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004fc484: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc486: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc488: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc48a: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004fc491: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4fc496u); f_007c09fc();
    /* 004fc496: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc498: jne 0x4fcbc8 */ if (!fZ) goto L_004fcbc8;
L_004fc49e:; BB(0x004fc49e);
    /* 004fc49e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc4a1: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
L_004fc4a7:; BB(0x004fc4a7);
    /* 004fc4a7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc4aa: je 0x4fd79f */ if (fZ) goto L_004fd79f;
L_004fc4b0:; BB(0x004fc4b0);
    /* 004fc4b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc4b2: jge 0x4fc4c3 */ if ((fS==fO)) goto L_004fc4c3;
L_004fc4b4:; BB(0x004fc4b4);
    /* 004fc4b4: mov dword ptr [eax + 0xec], 0xd */ W32((u32)(r_eax+0xecu), 0xdu);
    /* 004fc4be: mov edx, 0xd */ r_edx = 0xdu;
L_004fc4c3:; BB(0x004fc4c3);
    /* 004fc4c3: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc4c6: jle 0x4fc4d2 */ if ((fZ||fS!=fO)) goto L_004fc4d2;
L_004fc4c8:; BB(0x004fc4c8);
    /* 004fc4c8: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
L_004fc4d2:; BB(0x004fc4d2);
    /* 004fc4d2: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 004fc4d8: mov eax, dword ptr [eax + 0xf4] */ r_eax = R32((u32)(r_eax+0xf4u));
    /* 004fc4de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc4e0: jl 0x4fd78c */ if ((fS!=fO)) goto L_004fd78c;
L_004fc4e6:; BB(0x004fc4e6);
    /* 004fc4e6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004fc4e9:; BB(0x004fc4e9);
    /* 004fc4e9: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc4eb: jle 0x4fc4fa */ if ((fZ||fS!=fO)) goto L_004fc4fa;
L_004fc4ed:; BB(0x004fc4ed);
    /* 004fc4ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc4f0: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
L_004fc4fa:; BB(0x004fc4fa);
    /* 004fc4fa: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc500: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc503: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fc506: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004fc509: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc50b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc50d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc50f: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004fc516: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fc51bu); f_007c1100();
    /* 004fc51b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc51d: jne 0x4fc52d */ if (!fZ) goto L_004fc52d;
L_004fc51f:; BB(0x004fc51f);
    /* 004fc51f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc522: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fc528: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc52d:; BB(0x004fc52d);
    /* 004fc52d: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc533: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc536: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fc539: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004fc53c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc53e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc540: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fc542: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004fc549: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4fc54eu); f_007c1160();
    /* 004fc54e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc550: je 0x4fc8b7 */ if (fZ) goto L_004fc8b7;
L_004fc556:; BB(0x004fc556);
    /* 004fc556: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc559: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fc55f: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 004fc562: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc565: ja 0x4fc8ac */ if ((!fC&&!fZ)) goto L_004fc8ac;
L_004fc56b:; BB(0x004fc56b);
    /* 004fc56b: mov eax, dword ptr [eax*4 + 0x91ece8] */ r_eax = R32((u32)(r_eax*4+0x91ece8u));
    /* 004fc572: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004fc8ac:; BB(0x004fc8ac);
    /* 004fc8ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8af: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fc8b5: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8b7:; BB(0x004fc8b7);
    /* 004fc8b7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8ba: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fcbc8:; BB(0x004fcbc8);
    /* 004fcbc8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcbcb: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
L_004fcbce:; BB(0x004fcbce);
    /* 004fcbce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcbd1: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004fcbd4: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fcbd8: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcbdb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbde: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcbe0: jle 0x4fcbe6 */ if ((fZ||fS!=fO)) goto L_004fcbe6;
L_004fcbe2:; BB(0x004fcbe2);
    /* 004fcbe2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fcbe4: jmp 0x4fcbec */ goto L_004fcbec;
L_004fcbe6:; BB(0x004fcbe6);
    /* 004fcbe6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fcbe8: jge 0x4fcbec */ if ((fS==fO)) goto L_004fcbec;
L_004fcbea:; BB(0x004fcbea);
    /* 004fcbea: mov esi, eax */ r_esi = r_eax;
L_004fcbec:; BB(0x004fcbec);
    /* 004fcbec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcbef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbf0: call 0x4f7fb0 */ r_esp -= 4; W32(r_esp, 0x4fcbf5u); f_004f7fb0();
    /* 004fcbf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcbf7: je 0x4fcbce */ if (fZ) goto L_004fcbce;
L_004fcbf9:; BB(0x004fcbf9);
    /* 004fcbf9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fcbfb: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcbfe: je 0x4fcbce */ if (fZ) goto L_004fcbce;
L_004fcc00:; BB(0x004fcc00);
    /* 004fcc00: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcc03: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 004fcc06: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 004fcc09: mov dword ptr [ebx + 0x1c], edi */ W32((u32)(r_ebx+0x1cu), r_edi);
    /* 004fcc0c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004fcc0f: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004fcc12: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004fcc15: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 004fcc18: mov dword ptr [ebx + 0x48], edi */ W32((u32)(r_ebx+0x48u), r_edi);
    /* 004fcc1b: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 004fcc1e: mov dword ptr [ebx + 0x50], ecx */ W32((u32)(r_ebx+0x50u), r_ecx);
    /* 004fcc21: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fcc23: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fcc26: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 004fcc2b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fcc2e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004fcc30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcc31: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fcc36u); f_00810160();
    /* 004fcc36: mov ebx, eax */ r_ebx = r_eax;
    /* 004fcc38: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fcc3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fcc3c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fcc41u); f_008123d8();
    /* 004fcc41: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fcc44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcc47: mov ecx, eax */ r_ecx = r_eax;
    /* 004fcc49: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fcc4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fcc4d: jle 0x4fd8a0 */ if ((fZ||fS!=fO)) goto L_004fd8a0;
L_004fcc53:; BB(0x004fcc53);
    /* 004fcc53: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fcc56: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcc59: je 0x4fcc69 */ if (fZ) goto L_004fcc69;
L_004fcc5b:; BB(0x004fcc5b);
    /* 004fcc5b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcc5e: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fcc62: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcc64: jne 0x4fcc69 */ if (!fZ) goto L_004fcc69;
L_004fcc66:; BB(0x004fcc66);
    /* 004fcc66: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fcc69:; BB(0x004fcc69);
    /* 004fcc69: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fcc6c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcc6f: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcc72: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcc74: jl 0x4fcc53 */ if ((fS!=fO)) goto L_004fcc53;
L_004fcc76:; BB(0x004fcc76);
    /* 004fcc76: jmp 0x4fd8a0 */ goto L_004fd8a0;
L_004fcc7b:; BB(0x004fcc7b);
    /* 004fcc7b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcc7e: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
L_004fcc81:; BB(0x004fcc81);
    /* 004fcc81: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcc84: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004fcc87: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fcc8b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcc8e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fcc91: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcc93: jle 0x4fcc99 */ if ((fZ||fS!=fO)) goto L_004fcc99;
L_004fcc95:; BB(0x004fcc95);
    /* 004fcc95: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fcc97: jmp 0x4fcc9f */ goto L_004fcc9f;
L_004fcc99:; BB(0x004fcc99);
    /* 004fcc99: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fcc9b: jge 0x4fcc9f */ if ((fS==fO)) goto L_004fcc9f;
L_004fcc9d:; BB(0x004fcc9d);
    /* 004fcc9d: mov esi, eax */ r_esi = r_eax;
L_004fcc9f:; BB(0x004fcc9f);
    /* 004fcc9f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcca2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fcca3: call 0x4f7fb0 */ r_esp -= 4; W32(r_esp, 0x4fcca8u); f_004f7fb0();
    /* 004fcca8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fccaa: je 0x4fcc81 */ if (fZ) goto L_004fcc81;
L_004fccac:; BB(0x004fccac);
    /* 004fccac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fccae: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fccb1: je 0x4fcc81 */ if (fZ) goto L_004fcc81;
L_004fccb3:; BB(0x004fccb3);
    /* 004fccb3: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fccb6: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 004fccb9: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 004fccbc: mov dword ptr [ebx + 0x1c], edi */ W32((u32)(r_ebx+0x1cu), r_edi);
    /* 004fccbf: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004fccc2: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004fccc5: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004fccc8: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 004fcccb: mov dword ptr [ebx + 0x48], edi */ W32((u32)(r_ebx+0x48u), r_edi);
    /* 004fccce: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 004fccd1: mov dword ptr [ebx + 0x50], ecx */ W32((u32)(r_ebx+0x50u), r_ecx);
    /* 004fccd4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fccd6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fccd9: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 004fccde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fcce1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004fcce3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcce4: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fcce9u); f_00810160();
    /* 004fcce9: mov ebx, eax */ r_ebx = r_eax;
    /* 004fcceb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fccee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fccef: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fccf4u); f_008123d8();
    /* 004fccf4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fccf7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fccfa: mov ecx, eax */ r_ecx = r_eax;
    /* 004fccfc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fccfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fcd00: jle 0x4fcd25 */ if ((fZ||fS!=fO)) goto L_004fcd25;
L_004fcd02:; BB(0x004fcd02);
    /* 004fcd02: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fcd05: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcd08: je 0x4fcd18 */ if (fZ) goto L_004fcd18;
L_004fcd0a:; BB(0x004fcd0a);
    /* 004fcd0a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcd0d: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fcd11: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcd13: jne 0x4fcd18 */ if (!fZ) goto L_004fcd18;
L_004fcd15:; BB(0x004fcd15);
    /* 004fcd15: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fcd18:; BB(0x004fcd18);
    /* 004fcd18: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fcd1b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcd1e: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcd21: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcd23: jl 0x4fcd02 */ if ((fS!=fO)) goto L_004fcd02;
L_004fcd25:; BB(0x004fcd25);
    /* 004fcd25: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fcd2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fcd2d:; BB(0x004fcd2d);
    /* 004fcd2d: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fcd30: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcd33: je 0x4fcd43 */ if (fZ) goto L_004fcd43;
L_004fcd35:; BB(0x004fcd35);
    /* 004fcd35: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcd38: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fcd3c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcd3e: jne 0x4fcd43 */ if (!fZ) goto L_004fcd43;
L_004fcd40:; BB(0x004fcd40);
    /* 004fcd40: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fcd43:; BB(0x004fcd43);
    /* 004fcd43: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fcd46: movsx ecx, word ptr [ecx + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fcd4a: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcd4d: je 0x4fcd5d */ if (fZ) goto L_004fcd5d;
L_004fcd4f:; BB(0x004fcd4f);
    /* 004fcd4f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcd52: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fcd56: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcd58: jne 0x4fcd5d */ if (!fZ) goto L_004fcd5d;
L_004fcd5a:; BB(0x004fcd5a);
    /* 004fcd5a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fcd5d:; BB(0x004fcd5d);
    /* 004fcd5d: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcd60: lea ecx, [eax + 0x44] */ r_ecx = (u32)(r_eax+0x44u);
    /* 004fcd63: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcd69: jl 0x4fcd2d */ if ((fS!=fO)) goto L_004fcd2d;
L_004fcd6b:; BB(0x004fcd6b);
    /* 004fcd6b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcd6e: mov dword ptr [eax + 0x44], edi */ W32((u32)(r_eax+0x44u), r_edi);
    /* 004fcd71: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 004fcd74: jmp 0x4fc471 */ goto L_004fc471;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd78c:; BB(0x004fd78c);
    /* 004fd78c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd78f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd792: mov edx, eax */ r_edx = r_eax;
    /* 004fd794: mov dword ptr [ecx + 0xf8], eax */ W32((u32)(r_ecx+0xf8u), r_eax);
    /* 004fd79a: jmp 0x4fc4e9 */ goto L_004fc4e9;
L_004fd79f:; BB(0x004fd79f);
    /* 004fd79f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd7a1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd7a3: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fd7a6: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd7ac: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004fd7af: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd7b1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd7b3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd7b5: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004fd7bc: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4fd7c1u); f_007c09fc();
    /* 004fd7c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd7c3: je 0x4fd810 */ if (fZ) goto L_004fd810;
L_004fd7c5:; BB(0x004fd7c5);
    /* 004fd7c5: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd7cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd7ce: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fd7d1: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004fd7d4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd7d6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd7d8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd7da: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004fd7e1: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fd7e6u); f_007c1100();
    /* 004fd7e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd7e8: je 0x4fd7fe */ if (fZ) goto L_004fd7fe;
L_004fd7ea:; BB(0x004fd7ea);
    /* 004fd7ea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd7ed: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 004fd7f3: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd7f6: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 004fd7fc: jmp 0x4fd808 */ goto L_004fd808;
L_004fd7fe:; BB(0x004fd7fe);
    /* 004fd7fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd801: add dword ptr [eax + 0xf8], 1 */ { u32 ad = (u32)(r_eax+0xf8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004fd808:; BB(0x004fd808);
    /* 004fd808: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd80b: call 0x4fdcb0 */ r_esp -= 4; W32(r_esp, 0x4fd810u); f_004fdcb0();
L_004fd810:; BB(0x004fd810);
    /* 004fd810: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd813: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd815: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd817: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fd81a: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd820: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004fd823: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd825: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd827: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd829: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004fd830: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4fd835u); f_007c09fc();
    /* 004fd835: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd837: jne 0x4fd847 */ if (!fZ) goto L_004fd847;
L_004fd839:; BB(0x004fd839);
    /* 004fd839: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd83c: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 004fd842: jmp 0x4fc4b0 */ goto L_004fc4b0;
L_004fd847:; BB(0x004fd847);
    /* 004fd847: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd84d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd850: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fd853: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004fd856: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd858: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd85a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd85c: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004fd863: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fd868u); f_007c1100();
    /* 004fd868: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd86a: je 0x4fd880 */ if (fZ) goto L_004fd880;
L_004fd86c:; BB(0x004fd86c);
    /* 004fd86c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd86f: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 004fd875: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd878: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 004fd87e: jmp 0x4fd88a */ goto L_004fd88a;
L_004fd880:; BB(0x004fd880);
    /* 004fd880: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd883: add dword ptr [eax + 0xf8], -1 */ { u32 ad = (u32)(r_eax+0xf8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004fd88a:; BB(0x004fd88a);
    /* 004fd88a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd88d: call 0x4fdcb0 */ r_esp -= 4; W32(r_esp, 0x4fd892u); f_004fdcb0();
    /* 004fd892: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd895: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 004fd89b: jmp 0x4fc4b0 */ goto L_004fc4b0;
L_004fd8a0:; BB(0x004fd8a0);
    /* 004fd8a0: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fd8a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fd8a8:; BB(0x004fd8a8);
    /* 004fd8a8: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fd8ab: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd8ae: je 0x4fd8be */ if (fZ) goto L_004fd8be;
L_004fd8b0:; BB(0x004fd8b0);
    /* 004fd8b0: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd8b3: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fd8b7: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd8b9: jne 0x4fd8be */ if (!fZ) goto L_004fd8be;
L_004fd8bb:; BB(0x004fd8bb);
    /* 004fd8bb: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fd8be:; BB(0x004fd8be);
    /* 004fd8be: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fd8c1: movsx ecx, word ptr [ecx + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fd8c5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd8c8: je 0x4fd8d8 */ if (fZ) goto L_004fd8d8;
L_004fd8ca:; BB(0x004fd8ca);
    /* 004fd8ca: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd8cd: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fd8d1: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd8d3: jne 0x4fd8d8 */ if (!fZ) goto L_004fd8d8;
L_004fd8d5:; BB(0x004fd8d5);
    /* 004fd8d5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fd8d8:; BB(0x004fd8d8);
    /* 004fd8d8: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd8db: lea ecx, [eax + 0x44] */ r_ecx = (u32)(r_eax+0x44u);
    /* 004fd8de: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd8e4: jl 0x4fd8a8 */ if ((fS!=fO)) goto L_004fd8a8;
L_004fd8e6:; BB(0x004fd8e6);
    /* 004fd8e6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd8e9: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 004fd8ef: mov dword ptr [eax + 0x44], edi */ W32((u32)(r_eax+0x44u), r_edi);
    /* 004fd8f2: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 004fd8f5: jmp 0x4fc4a7 */ goto L_004fc4a7;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc370); r_esp += 4; return;
}

void f_004fc574(void)
{
    FN_ENTER(0x004fc574);
    /* 004fc574: mov ebx, dword ptr [0xaafca0] */ r_ebx = R32((u32)(0xaafca0u));
    /* 004fc57a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc57b: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fc580u); f_00810160();
    /* 004fc580: mov edi, eax */ r_edi = r_eax;
    /* 004fc582: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc583: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fc588u); f_008123d8();
    /* 004fc588: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fc58b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc58e: mov edx, eax */ r_edx = r_eax;
    /* 004fc590: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fc592: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc594: jle 0x4fcd79 */ if ((fZ||fS!=fO)) goto L_004fcd79;
L_004fc59a:; BB(0x004fc59a);
    /* 004fc59a: movsx edx, word ptr [edi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fc59d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc5a0: je 0x4fc638 */ if (fZ) goto L_004fc638;
L_004fc5a6:; BB(0x004fc5a6);
    /* 004fc5a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc5a9: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 004fc5ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc5ad: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc5b3: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc5b8u); f_004f80e0();
    /* 004fc5b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc5bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc5bc: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc5c2: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc5c7u); f_004f80e0();
    /* 004fc5c7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc5ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc5cb: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc5d1: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc5d6u); f_004f80e0();
    /* 004fc5d6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc5d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc5da: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc5e0: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc5e5u); f_004f80e0();
    /* 004fc5e5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc5e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc5e9: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc5ef: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc5f4u); f_004f80e0();
    /* 004fc5f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc5f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc5f8: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc5fe: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc603u); f_004f80e0();
    /* 004fc603: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc606: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc607: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc60d: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc612u); f_004f80e0();
    /* 004fc612: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc615: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc616: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc61c: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc621u); f_004f80e0();
    /* 004fc621: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc624: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc625: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc62b: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc630u); f_004f80e0();
    /* 004fc630: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004fc635: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
L_004fc638:; BB(0x004fc638);
    /* 004fc638: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fc63b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc63e: add edi, 0x44 */ {  u32 a = r_edi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc641: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc643: jl 0x4fc59a */ if ((fS!=fO)) goto L_004fc59a;
L_004fc649:; BB(0x004fc649);
    /* 004fc649: jmp 0x4fcd79 */ goto L_004fcd79;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fcd79:; BB(0x004fcd79);
    /* 004fcd79: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004fcd7b:; BB(0x004fcd7b);
    /* 004fcd7b: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fcd81: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004fcd84: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fcd86: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004fcd89: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fcd8b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fcd8d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fcd8f: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fcd91: movsx edx, word ptr [edi + ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+r_ecx));
    /* 004fcd95: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcd98: je 0x4fce38 */ if (fZ) goto L_004fce38;
L_004fcd9e:; BB(0x004fcd9e);
    /* 004fcd9e: mov ebx, dword ptr [edi + ecx + 0x40] */ r_ebx = R32((u32)(r_edi+r_ecx+0x40u));
    /* 004fcda2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcda5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fcda6: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcdac: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fcdb1u); f_004f80e0();
    /* 004fcdb1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcdb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fcdb5: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcdbb: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fcdc0u); f_004f80e0();
    /* 004fcdc0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcdc3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fcdc4: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcdca: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fcdcfu); f_004f80e0();
    /* 004fcdcf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcdd2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fcdd3: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcdd9: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fcddeu); f_004f80e0();
    /* 004fcdde: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcde1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fcde2: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcde8: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fcdedu); f_004f80e0();
    /* 004fcded: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcdf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fcdf1: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcdf7: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fcdfcu); f_004f80e0();
    /* 004fcdfc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcdff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fce00: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fce06: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fce0bu); f_004f80e0();
    /* 004fce0b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fce0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fce0f: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fce15: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fce1au); f_004f80e0();
    /* 004fce1a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fce1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fce1e: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fce24: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fce29u); f_004f80e0();
    /* 004fce29: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fce2f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fce34: mov word ptr [edi + edx], ax */ W16((u32)(r_edi+r_edx), (u16)r_eax);
L_004fce38:; BB(0x004fce38);
    /* 004fce38: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fce3b: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fce41: jl 0x4fcd7b */ if ((fS!=fO)) goto L_004fcd7b;
L_004fce47:; BB(0x004fce47);
    /* 004fce47: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fce4d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fce4e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fce50: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fce55u); f_00810160();
    /* 004fce55: mov esi, eax */ r_esi = r_eax;
    /* 004fce57: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fce58: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fce5du); f_008123d8();
    /* 004fce5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fce60: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fce62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fce64: jle 0x4fce7b */ if ((fZ||fS!=fO)) goto L_004fce7b;
L_004fce66:; BB(0x004fce66);
    /* 004fce66: movsx edx, word ptr [esi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fce69: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fce6c: je 0x4fce71 */ if (fZ) goto L_004fce71;
L_004fce6e:; BB(0x004fce6e);
    /* 004fce6e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fce71:; BB(0x004fce71);
    /* 004fce71: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fce74: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fce77: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fce79: jl 0x4fce66 */ if ((fS!=fO)) goto L_004fce66;
L_004fce7b:; BB(0x004fce7b);
    /* 004fce7b: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fce81: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fce83:; BB(0x004fce83);
    /* 004fce83: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fce86: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fce89: je 0x4fce8e */ if (fZ) goto L_004fce8e;
L_004fce8b:; BB(0x004fce8b);
    /* 004fce8b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fce8e:; BB(0x004fce8e);
    /* 004fce8e: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fce91: movsx ecx, word ptr [ecx + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fce95: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fce98: je 0x4fce9d */ if (fZ) goto L_004fce9d;
L_004fce9a:; BB(0x004fce9a);
    /* 004fce9a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fce9d:; BB(0x004fce9d);
    /* 004fce9d: movsx ecx, word ptr [eax + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x44u));
    /* 004fcea1: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcea4: je 0x4fcea9 */ if (fZ) goto L_004fcea9;
L_004fcea6:; BB(0x004fcea6);
    /* 004fcea6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fcea9:; BB(0x004fcea9);
    /* 004fcea9: movsx ecx, word ptr [eax + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x88u));
    /* 004fceb0: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fceb3: je 0x4fceb8 */ if (fZ) goto L_004fceb8;
L_004fceb5:; BB(0x004fceb5);
    /* 004fceb5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fceb8:; BB(0x004fceb8);
    /* 004fceb8: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcebb: lea ecx, [eax + 0xcc] */ r_ecx = (u32)(r_eax+0xccu);
    /* 004fcec1: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcec7: jl 0x4fce83 */ if ((fS!=fO)) goto L_004fce83;
L_004fcec9:; BB(0x004fcec9);
    /* 004fcec9: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcecc: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 004fced1: mov edi, dword ptr [esi + 0x58] */ r_edi = R32((u32)(r_esi+0x58u));
    /* 004fced4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fced7: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 004fceda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcedb: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 004fcedd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004fcedf: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fcee4u); f_00810160();
    /* 004fcee4: mov ebx, eax */ r_ebx = r_eax;
    /* 004fcee6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fcee9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fceea: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fceefu); f_008123d8();
    /* 004fceef: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fcef2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcef5: mov ecx, eax */ r_ecx = r_eax;
    /* 004fcef7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fcef9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fcefb: jle 0x4fcf1d */ if ((fZ||fS!=fO)) goto L_004fcf1d;
L_004fcefd:; BB(0x004fcefd);
    /* 004fcefd: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fcf00: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcf03: je 0x4fcf10 */ if (fZ) goto L_004fcf10;
L_004fcf05:; BB(0x004fcf05);
    /* 004fcf05: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fcf09: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcf0b: jne 0x4fcf10 */ if (!fZ) goto L_004fcf10;
L_004fcf0d:; BB(0x004fcf0d);
    /* 004fcf0d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fcf10:; BB(0x004fcf10);
    /* 004fcf10: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fcf13: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcf16: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcf19: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcf1b: jl 0x4fcefd */ if ((fS!=fO)) goto L_004fcefd;
L_004fcf1d:; BB(0x004fcf1d);
    /* 004fcf1d: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fcf23: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fcf25:; BB(0x004fcf25);
    /* 004fcf25: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fcf28: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcf2b: je 0x4fcf38 */ if (fZ) goto L_004fcf38;
L_004fcf2d:; BB(0x004fcf2d);
    /* 004fcf2d: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fcf31: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcf33: jne 0x4fcf38 */ if (!fZ) goto L_004fcf38;
L_004fcf35:; BB(0x004fcf35);
    /* 004fcf35: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fcf38:; BB(0x004fcf38);
    /* 004fcf38: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fcf3b: movsx ecx, word ptr [ecx + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fcf3f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcf42: je 0x4fcf4f */ if (fZ) goto L_004fcf4f;
L_004fcf44:; BB(0x004fcf44);
    /* 004fcf44: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fcf48: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcf4a: jne 0x4fcf4f */ if (!fZ) goto L_004fcf4f;
L_004fcf4c:; BB(0x004fcf4c);
    /* 004fcf4c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fcf4f:; BB(0x004fcf4f);
    /* 004fcf4f: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcf52: lea ecx, [eax + 0x44] */ r_ecx = (u32)(r_eax+0x44u);
    /* 004fcf55: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcf5b: jl 0x4fcf25 */ if ((fS!=fO)) goto L_004fcf25;
L_004fcf5d:; BB(0x004fcf5d);
    /* 004fcf5d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcf60: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fcf66: mov dword ptr [eax + 0x44], edi */ W32((u32)(r_eax+0x44u), r_edi);
    /* 004fcf69: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc574); r_esp += 4; return;
}

void f_004fc64e(void)
{
    FN_ENTER(0x004fc64e);
    /* 004fc64e: mov ebx, dword ptr [0xaafca0] */ r_ebx = R32((u32)(0xaafca0u));
    /* 004fc654: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc655: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fc65au); f_00810160();
    /* 004fc65a: mov edi, eax */ r_edi = r_eax;
    /* 004fc65c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc65d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fc662u); f_008123d8();
    /* 004fc662: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fc665: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc668: mov edx, eax */ r_edx = r_eax;
    /* 004fc66a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fc66c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc66e: jle 0x4fcf6e */ if ((fZ||fS!=fO)) goto L_004fcf6e;
L_004fc674:; BB(0x004fc674);
    /* 004fc674: movsx edx, word ptr [edi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fc677: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc67a: je 0x4fc723 */ if (fZ) goto L_004fc723;
L_004fc680:; BB(0x004fc680);
    /* 004fc680: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc683: movsx ecx, word ptr [edi + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 004fc687: mov ebx, dword ptr [edx + 0x58] */ r_ebx = R32((u32)(r_edx+0x58u));
    /* 004fc68a: cmp ecx, dword ptr [ebx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc68c: jne 0x4fc723 */ if (!fZ) goto L_004fc723;
L_004fc692:; BB(0x004fc692);
    /* 004fc692: mov ecx, edx */ r_ecx = r_edx;
    /* 004fc694: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 004fc697: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc698: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc69e: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc6a3u); f_004f80e0();
    /* 004fc6a3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc6a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6a7: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc6ad: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc6b2u); f_004f80e0();
    /* 004fc6b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc6b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6b6: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc6bc: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc6c1u); f_004f80e0();
    /* 004fc6c1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc6c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6c5: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc6cb: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc6d0u); f_004f80e0();
    /* 004fc6d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc6d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6d4: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc6da: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc6dfu); f_004f80e0();
    /* 004fc6df: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc6e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6e3: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc6e9: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc6eeu); f_004f80e0();
    /* 004fc6ee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc6f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc6f2: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc6f8: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc6fdu); f_004f80e0();
    /* 004fc6fd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc700: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc701: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc707: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc70cu); f_004f80e0();
    /* 004fc70c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc70f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc710: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fc716: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fc71bu); f_004f80e0();
    /* 004fc71b: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004fc720: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
L_004fc723:; BB(0x004fc723);
    /* 004fc723: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fc726: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc729: add edi, 0x44 */ {  u32 a = r_edi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc72c: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc72e: jl 0x4fc674 */ if ((fS!=fO)) goto L_004fc674;
L_004fc734:; BB(0x004fc734);
    /* 004fc734: jmp 0x4fcf6e */ goto L_004fcf6e;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fcf6e:; BB(0x004fcf6e);
    /* 004fcf6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcf70:; BB(0x004fcf70);
    /* 004fcf70: mov eax, dword ptr [0xa727bc] */ r_eax = R32((u32)(0xa727bcu));
    /* 004fcf75: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 004fcf78: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcf7a: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004fcf7d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcf7f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcf81: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcf83: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcf85: movsx ecx, word ptr [esi + eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+r_eax));
    /* 004fcf89: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcf8c: je 0x4fd03e */ if (fZ) goto L_004fd03e;
L_004fcf92:; BB(0x004fcf92);
    /* 004fcf92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcf95: movsx ecx, word ptr [esi + eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+r_eax+0xcu));
    /* 004fcf9a: mov edi, dword ptr [edx + 0x58] */ r_edi = R32((u32)(r_edx+0x58u));
    /* 004fcf9d: cmp ecx, dword ptr [edi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcf9f: jne 0x4fd03e */ if (!fZ) goto L_004fd03e;
L_004fcfa5:; BB(0x004fcfa5);
    /* 004fcfa5: mov ecx, edx */ r_ecx = r_edx;
    /* 004fcfa7: mov edi, dword ptr [esi + eax + 0x40] */ r_edi = R32((u32)(r_esi+r_eax+0x40u));
    /* 004fcfab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fcfac: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcfb2: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fcfb7u); f_004f80e0();
    /* 004fcfb7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcfba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fcfbb: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcfc1: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fcfc6u); f_004f80e0();
    /* 004fcfc6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcfc9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fcfca: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcfd0: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fcfd5u); f_004f80e0();
    /* 004fcfd5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcfd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fcfd9: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcfdf: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fcfe4u); f_004f80e0();
    /* 004fcfe4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcfe7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fcfe8: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcfee: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fcff3u); f_004f80e0();
    /* 004fcff3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcff6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fcff7: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcffd: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fd002u); f_004f80e0();
    /* 004fd002: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd005: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd006: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd00c: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fd011u); f_004f80e0();
    /* 004fd011: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd014: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd015: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd01b: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fd020u); f_004f80e0();
    /* 004fd020: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd023: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd024: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd02a: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fd02fu); f_004f80e0();
    /* 004fd02f: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd035: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fd03a: mov word ptr [esi + edx], ax */ W16((u32)(r_esi+r_edx), (u16)r_eax);
L_004fd03e:; BB(0x004fd03e);
    /* 004fd03e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd041: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd047: jl 0x4fcf70 */ if ((fS!=fO)) goto L_004fcf70;
L_004fd04d:; BB(0x004fd04d);
    /* 004fd04d: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fd053: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd054: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd056: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd05bu); f_00810160();
    /* 004fd05b: mov esi, eax */ r_esi = r_eax;
    /* 004fd05d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd05e: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd063u); f_008123d8();
    /* 004fd063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd066: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd068: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd06a: jle 0x4fd081 */ if ((fZ||fS!=fO)) goto L_004fd081;
L_004fd06c:; BB(0x004fd06c);
    /* 004fd06c: movsx edx, word ptr [esi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fd06f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd072: je 0x4fd077 */ if (fZ) goto L_004fd077;
L_004fd074:; BB(0x004fd074);
    /* 004fd074: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fd077:; BB(0x004fd077);
    /* 004fd077: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd07a: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd07d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd07f: jl 0x4fd06c */ if ((fS!=fO)) goto L_004fd06c;
L_004fd081:; BB(0x004fd081);
    /* 004fd081: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fd087: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fd089:; BB(0x004fd089);
    /* 004fd089: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fd08c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd08f: je 0x4fd094 */ if (fZ) goto L_004fd094;
L_004fd091:; BB(0x004fd091);
    /* 004fd091: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fd094:; BB(0x004fd094);
    /* 004fd094: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fd097: movsx ecx, word ptr [ecx + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fd09b: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd09e: je 0x4fd0a3 */ if (fZ) goto L_004fd0a3;
L_004fd0a0:; BB(0x004fd0a0);
    /* 004fd0a0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fd0a3:; BB(0x004fd0a3);
    /* 004fd0a3: movsx ecx, word ptr [eax + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x44u));
    /* 004fd0a7: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd0aa: je 0x4fd0af */ if (fZ) goto L_004fd0af;
L_004fd0ac:; BB(0x004fd0ac);
    /* 004fd0ac: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fd0af:; BB(0x004fd0af);
    /* 004fd0af: movsx ecx, word ptr [eax + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x88u));
    /* 004fd0b6: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd0b9: je 0x4fd0be */ if (fZ) goto L_004fd0be;
L_004fd0bb:; BB(0x004fd0bb);
    /* 004fd0bb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fd0be:; BB(0x004fd0be);
    /* 004fd0be: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd0c1: lea ecx, [eax + 0xcc] */ r_ecx = (u32)(r_eax+0xccu);
    /* 004fd0c7: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd0cd: jl 0x4fd089 */ if ((fS!=fO)) goto L_004fd089;
L_004fd0cf:; BB(0x004fd0cf);
    /* 004fd0cf: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd0d2: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 004fd0d7: mov edi, dword ptr [esi + 0x58] */ r_edi = R32((u32)(r_esi+0x58u));
    /* 004fd0da: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd0dd: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 004fd0e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd0e1: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 004fd0e3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004fd0e5: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd0eau); f_00810160();
    /* 004fd0ea: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd0ec: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd0ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd0f0: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd0f5u); f_008123d8();
    /* 004fd0f5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd0f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd0fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd0fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fd0ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd101: jle 0x4fd123 */ if ((fZ||fS!=fO)) goto L_004fd123;
L_004fd103:; BB(0x004fd103);
    /* 004fd103: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd106: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd109: je 0x4fd116 */ if (fZ) goto L_004fd116;
L_004fd10b:; BB(0x004fd10b);
    /* 004fd10b: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd10f: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd111: jne 0x4fd116 */ if (!fZ) goto L_004fd116;
L_004fd113:; BB(0x004fd113);
    /* 004fd113: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fd116:; BB(0x004fd116);
    /* 004fd116: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd119: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd11c: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd11f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd121: jl 0x4fd103 */ if ((fS!=fO)) goto L_004fd103;
L_004fd123:; BB(0x004fd123);
    /* 004fd123: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fd129: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fd12b:; BB(0x004fd12b);
    /* 004fd12b: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fd12e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd131: je 0x4fd13e */ if (fZ) goto L_004fd13e;
L_004fd133:; BB(0x004fd133);
    /* 004fd133: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fd137: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd139: jne 0x4fd13e */ if (!fZ) goto L_004fd13e;
L_004fd13b:; BB(0x004fd13b);
    /* 004fd13b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fd13e:; BB(0x004fd13e);
    /* 004fd13e: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fd141: movsx ecx, word ptr [ecx + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fd145: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd148: je 0x4fd155 */ if (fZ) goto L_004fd155;
L_004fd14a:; BB(0x004fd14a);
    /* 004fd14a: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fd14e: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd150: jne 0x4fd155 */ if (!fZ) goto L_004fd155;
L_004fd152:; BB(0x004fd152);
    /* 004fd152: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fd155:; BB(0x004fd155);
    /* 004fd155: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd158: lea ecx, [eax + 0x44] */ r_ecx = (u32)(r_eax+0x44u);
    /* 004fd15b: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd161: jl 0x4fd12b */ if ((fS!=fO)) goto L_004fd12b;
L_004fd163:; BB(0x004fd163);
    /* 004fd163: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd166: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fd16c: mov dword ptr [eax + 0x44], edi */ W32((u32)(r_eax+0x44u), r_edi);
    /* 004fd16f: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc64e); r_esp += 4; return;
}

void f_004fc739(void)
{
    FN_ENTER(0x004fc739);
    /* 004fc739: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc73c: mov dword ptr [eax + 0x118], 0xb */ W32((u32)(r_eax+0x118u), 0xbu);
    /* 004fc746: mov edx, 1 */ r_edx = 0x1u;
    /* 004fc74b: mov dword ptr [eax + 0x114], 1 */ W32((u32)(r_eax+0x114u), 0x1u);
    /* 004fc755: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc739); r_esp += 4; return;
}

void f_004fc75a(void)
{
    FN_ENTER(0x004fc75a);
    /* 004fc75a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc75d: mov dword ptr [eax + 0x118], 0xa */ W32((u32)(r_eax+0x118u), 0xau);
    /* 004fc767: mov edx, 1 */ r_edx = 0x1u;
    /* 004fc76c: mov dword ptr [eax + 0x114], 1 */ W32((u32)(r_eax+0x114u), 0x1u);
    /* 004fc776: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc75a); r_esp += 4; return;
}

void f_004fc77b(void)
{
    FN_ENTER(0x004fc77b);
    /* 004fc77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc77e: mov eax, 2 */ r_eax = 0x2u;
    /* 004fc783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fc787: mov edx, dword ptr [edx + 0x114] */ r_edx = R32((u32)(r_edx+0x114u));
    /* 004fc78d: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc77b); r_esp += 4; return;
}

void f_004fc792(void)
{
    FN_ENTER(0x004fc792);
    /* 004fc792: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc795: mov dword ptr [eax + 0x118], 8 */ W32((u32)(r_eax+0x118u), 0x8u);
    /* 004fc79f: mov edx, 1 */ r_edx = 0x1u;
    /* 004fc7a4: mov dword ptr [eax + 0x114], 1 */ W32((u32)(r_eax+0x114u), 0x1u);
    /* 004fc7ae: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc792); r_esp += 4; return;
}

void f_004fc7b3(void)
{
    FN_ENTER(0x004fc7b3);
    /* 004fc7b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc7b6: mov dword ptr [eax + 0x118], 7 */ W32((u32)(r_eax+0x118u), 0x7u);
    /* 004fc7c0: mov edx, 1 */ r_edx = 0x1u;
    /* 004fc7c5: mov dword ptr [eax + 0x114], 1 */ W32((u32)(r_eax+0x114u), 0x1u);
    /* 004fc7cf: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc7b3); r_esp += 4; return;
}

void f_004fc7d4(void)
{
    FN_ENTER(0x004fc7d4);
    /* 004fc7d4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc7d7: call 0x4fe084 */ r_esp -= 4; W32(r_esp, 0x4fc7dcu); f_004fe084();
    /* 004fc7dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc7df: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fc7e5: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc7d4); r_esp += 4; return;
}

void f_004fc7e0(void)
{
    FN_ENTER(0x004fc7e0);
    /* 004fc7e0: nop  */ ;
    /* 004fc7e1: adc al, 1 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fc7e3: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004fc7e5: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc7e0); r_esp += 4; return;
}

void f_004fc7ea(void)
{
    FN_ENTER(0x004fc7ea);
    /* 004fc7ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc7ed: call 0x4fe3b0 */ r_esp -= 4; W32(r_esp, 0x4fc7f2u); f_004fe3b0();
    /* 004fc7f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc7f5: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fc7fb: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc7ea); r_esp += 4; return;
}

void f_004fc800(void)
{
    FN_ENTER(0x004fc800);
    /* 004fc800: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc803: call 0x4fe054 */ r_esp -= 4; W32(r_esp, 0x4fc808u); f_004fe054();
    /* 004fc808: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc80b: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fc811: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc800); r_esp += 4; return;
}

void f_004fc816(void)
{
    FN_ENTER(0x004fc816);
    /* 004fc816: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc819: call 0x4fdd40 */ r_esp -= 4; W32(r_esp, 0x4fc81eu); f_004fdd40();
    /* 004fc81e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc821: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fc827: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc816); r_esp += 4; return;
}

void f_004fc82c(void)
{
    FN_ENTER(0x004fc82c);
    /* 004fc82c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc82f: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fc835: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc82c); r_esp += 4; return;
}

void f_004fc83a(void)
{
    FN_ENTER(0x004fc83a);
    /* 004fc83a: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 004fc83f: fld dword ptr [0x91ed44] */ FPUSH(R_F32((u32)(0x91ed44u)));
    /* 004fc845: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 004fc848: movsx edx, word ptr [eax + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004fc84c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004fc84f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc851: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fc854: mov ebx, 0 */ r_ebx = 0x0u;
    /* 004fc859: mov esi, 0 */ r_esi = 0x0u;
    /* 004fc85e: jle 0x4fd24c */ if ((fZ||fS!=fO)) goto L_004fd24c;
L_004fc864:; BB(0x004fc864);
    /* 004fc864: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_004fc867:; BB(0x004fc867);
    /* 004fc867: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004fc869: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fc86b: jl 0x4fc89d */ if ((fS!=fO)) goto L_004fc89d;
L_004fc86d:; BB(0x004fc86d);
    /* 004fc86d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc870: lea ecx, [edi + 4] */ r_ecx = (u32)(r_edi+0x4u);
    /* 004fc873: lea edx, [eax + 0x1c] */ r_edx = (u32)(r_eax+0x1cu);
    /* 004fc876: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc877: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc878: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x4fc87du); f_0078ea2c();
    /* 004fc87d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc880: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fc883: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004fc886: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004fc888: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004fc88a: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fc88e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004fc88f: jbe 0x4fc89b */ if ((fC||fZ)) goto L_004fc89b;
L_004fc891:; BB(0x004fc891);
    /* 004fc891: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004fc894: mov ebx, edi */ r_ebx = r_edi;
    /* 004fc896: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004fc899: jmp 0x4fc89d */ goto L_004fc89d;
L_004fc89b:; BB(0x004fc89b);
    /* 004fc89b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004fc89d:; BB(0x004fc89d);
    /* 004fc89d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8a0: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8a3: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc8a5: jl 0x4fc867 */ if ((fS!=fO)) goto L_004fc867;
L_004fc8a7:; BB(0x004fc8a7);
    /* 004fc8a7: jmp 0x4fd174 */ goto L_004fd174;
L_004fc8c0:; BB(0x004fc8c0);
    /* 004fc8c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8c2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc8c8:; BB(0x004fc8c8);
    /* 004fc8c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc8cb: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fc8d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc8d3: je 0x4fd6b5 */ if (fZ) goto L_004fd6b5;
L_004fc8d9:; BB(0x004fc8d9);
    /* 004fc8d9: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4fc8deu); f_004f82dc();
    /* 004fc8de: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc8e0: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc8e2: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004fc8e7:; BB(0x004fc8e7);
    /* 004fc8e7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc8e9: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8eb: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8ed:; BB(0x004fc8ed);
    /* 004fc8ed: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc8ef: je 0x4fc903 */ if (fZ) goto L_004fc903;
L_004fc8f1:; BB(0x004fc8f1);
    /* 004fc8f1: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc8f4: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc8f7: jne 0x4fc907 */ if (!fZ) goto L_004fc907;
L_004fc8f9:; BB(0x004fc8f9);
    /* 004fc8f9: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc8fc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc8ff: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc901: jne 0x4fc8e7 */ if (!fZ) goto L_004fc8e7;
L_004fc903:; BB(0x004fc903);
    /* 004fc903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc905: jmp 0x4fc90c */ goto L_004fc90c;
L_004fc907:; BB(0x004fc907);
    /* 004fc907: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc909: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc90c:; BB(0x004fc90c);
    /* 004fc90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc90e: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc914:; BB(0x004fc914);
    /* 004fc914: mov edi, ecx */ r_edi = r_ecx;
    /* 004fc916: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004fc91b:; BB(0x004fc91b);
    /* 004fc91b: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004fc91d: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc91f: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc921:; BB(0x004fc921);
    /* 004fc921: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc923: je 0x4fc937 */ if (fZ) goto L_004fc937;
L_004fc925:; BB(0x004fc925);
    /* 004fc925: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004fc928: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fc92b: jne 0x4fc93b */ if (!fZ) goto L_004fc93b;
L_004fc92d:; BB(0x004fc92d);
    /* 004fc92d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fc930: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fc933: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004fc935: jne 0x4fc91b */ if (!fZ) goto L_004fc91b;
L_004fc937:; BB(0x004fc937);
    /* 004fc937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fc939: jmp 0x4fc940 */ goto L_004fc940;
L_004fc93b:; BB(0x004fc93b);
    /* 004fc93b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fc93d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fc940:; BB(0x004fc940);
    /* 004fc940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc942: jne 0x4fc97e */ if (!fZ) goto L_004fc97e;
L_004fc944:; BB(0x004fc944);
    /* 004fc944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc947: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fc94d: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fc957: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc959: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fc95f:; BB(0x004fc95f);
    /* 004fc95f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fc963: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fc968: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fc96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc96f: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004fc979: jmp 0x4fcade */ goto L_004fcade;
L_004fc97e:; BB(0x004fc97e);
    /* 004fc97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc981: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc984: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004fc98a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004fc98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc98e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4fc993u); f_00858900();
    /* 004fc993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc996: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc999: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004fc99f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9a2: je 0x4fd416 */ if (fZ) goto L_004fd416;
L_004fc9a8:; BB(0x004fc9a8);
    /* 004fc9a8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9ab: je 0x4fc9d7 */ if (fZ) goto L_004fc9d7;
L_004fc9ad:; BB(0x004fc9ad);
    /* 004fc9ad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9b0: jne 0x4fc9c1 */ if (!fZ) goto L_004fc9c1;
L_004fc9b2:; BB(0x004fc9b2);
    /* 004fc9b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9b7: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fc9bcu); f_004fd914();
    /* 004fc9bc: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9c1:; BB(0x004fc9c1);
    /* 004fc9c1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9c4: jne 0x4fcaad */ if (!fZ) goto L_004fcaad;
L_004fc9ca:; BB(0x004fc9ca);
    /* 004fc9ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9cd: call 0x4fe9cc */ r_esp -= 4; W32(r_esp, 0x4fc9d2u); f_004fe9cc();
    /* 004fc9d2: jmp 0x4fcaad */ goto L_004fcaad;
L_004fc9d7:; BB(0x004fc9d7);
    /* 004fc9d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fc9da: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fc9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc9df: je 0x4fcaad */ if (fZ) goto L_004fcaad;
L_004fc9e5:; BB(0x004fc9e5);
    /* 004fc9e5: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc9ea: jg 0x4fd406 */ if ((!fZ&&fS==fO)) goto L_004fd406;
L_004fc9f0:; BB(0x004fc9f0);
    /* 004fc9f0: push 0x8800 */ { u32 v = 0x8800u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc9f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fc9fau); f_008581c5();
    /* 004fc9fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fc9fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca02: je 0x4fd3f6 */ if (fZ) goto L_004fd3f6;
L_004fca08:; BB(0x004fca08);
    /* 004fca08: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca0e: mov esi, eax */ r_esi = r_eax;
    /* 004fca10: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fca15u); f_00810160();
    /* 004fca15: mov ebx, eax */ r_ebx = r_eax;
    /* 004fca17: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fca1d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fca22u); f_008123d8();
    /* 004fca22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fca25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fca27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fca29: jle 0x4fd25a */ if ((fZ||fS!=fO)) goto L_004fd25a;
L_004fca2f:; BB(0x004fca2f);
    /* 004fca2f: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fca32: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fca35: je 0x4fca9e */ if (fZ) goto L_004fca9e;
L_004fca37:; BB(0x004fca37);
    /* 004fca37: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004fca39: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fca3c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fca3e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004fca41: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fca44: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004fca47: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004fca4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fca4d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004fca50: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fca53: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004fca56: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fca59: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004fca5c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fca5f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004fca62: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fca65: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004fca68: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fca6b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004fca6e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fca71: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004fca74: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fca77: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004fca7a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fca7d: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004fca80: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fca83: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004fca86: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fca89: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004fca8c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fca8f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004fca92: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fca95: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004fca98: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fca9b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fca9e:; BB(0x004fca9e);
    /* 004fca9e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fcaa1: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcaa4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fcaa6: jl 0x4fca2f */ if ((fS!=fO)) goto L_004fca2f;
L_004fcaa8:; BB(0x004fcaa8);
    /* 004fcaa8: jmp 0x4fd25a */ goto L_004fd25a;
L_004fcaad:; BB(0x004fcaad);
    /* 004fcaad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcab0: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004fcab6: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004fcac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcac2: je 0x4fcade */ if (fZ) goto L_004fcade;
L_004fcac4:; BB(0x004fcac4);
    /* 004fcac4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fcac8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcacd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fcad1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcad4: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004fcade:; BB(0x004fcade);
    /* 004fcade: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcae1: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fcae5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fcae8: jne 0x4fd727 */ if (!fZ) goto L_004fd727;
L_004fcaee:; BB(0x004fcaee);
    /* 004fcaee: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf3: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcaf8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcafdu); f_0061cdb0();
    /* 004fcafd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fcb02:; BB(0x004fcb02);
    /* 004fcb02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb0b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004fcb0e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004fcb11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb13: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fcb17: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004fcb1e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4fcb23u); f_007c1100();
    /* 004fcb23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb25: je 0x4fcb9a */ if (fZ) goto L_004fcb9a;
L_004fcb27:; BB(0x004fcb27);
    /* 004fcb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fcb2a: mov eax, dword ptr [eax + 0xec] */ r_eax = R32((u32)(r_eax+0xecu));
    /* 004fcb30: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb32: jne 0x4fcb7b */ if (!fZ) goto L_004fcb7b;
L_004fcb34:; BB(0x004fcb34);
    /* 004fcb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb36: jne 0x4fcb57 */ if (!fZ) goto L_004fcb57;
L_004fcb38:; BB(0x004fcb38);
    /* 004fcb38: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb3f: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb44: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb47: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb52u); f_0061cdb0();
    /* 004fcb52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb55: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb57:; BB(0x004fcb57);
    /* 004fcb57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fcb5a: je 0x4fcb38 */ if (fZ) goto L_004fcb38;
L_004fcb5c:; BB(0x004fcb5c);
    /* 004fcb5c: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb63: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb68: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb6b: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb71: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb76u); f_0061cdb0();
    /* 004fcb76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb79: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb7b:; BB(0x004fcb7b);
    /* 004fcb7b: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcb82: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb87: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcb8a: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcb90: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcb95u); f_0061cdb0();
    /* 004fcb95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fcb98: jmp 0x4fcbb7 */ goto L_004fcbb7;
L_004fcb9a:; BB(0x004fcb9a);
    /* 004fcb9a: push dword ptr [ebx*4 + 0x9b931c] */ { u32 v = R32((u32)(r_ebx*4+0x9b931cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fcba1: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004fcba6: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004fcba9: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fcbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcbaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fcbb4u); f_0061cdb0();
    /* 004fcbb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fcbb7:; BB(0x004fcbb7);
    /* 004fcbb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fcbba: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fcbbd: jl 0x4fcb02 */ if ((fS!=fO)) goto L_004fcb02;
L_004fcbc3:; BB(0x004fcbc3);
    /* 004fcbc3: jmp 0x4fd8fa */ goto L_004fd8fa;
L_004fd174:; BB(0x004fd174);
    /* 004fd174: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd176: je 0x4fd1ed */ if (fZ) goto L_004fd1ed;
L_004fd178:; BB(0x004fd178);
    /* 004fd178: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd17b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd17e: mov dword ptr [ecx + 0x58], ebx */ W32((u32)(r_ecx+0x58u), r_ebx);
    /* 004fd181: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 004fd184: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd187: mov dword ptr [ecx + 0x1c], edi */ W32((u32)(r_ecx+0x1cu), r_edi);
    /* 004fd18a: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 004fd18d: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 004fd190: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd193: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 004fd196: mov dword ptr [ecx + 0x48], edi */ W32((u32)(r_ecx+0x48u), r_edi);
    /* 004fd199: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 004fd19c: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 004fd19f: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004fd1a1: mov ebx, dword ptr [0xaafca0] */ r_ebx = R32((u32)(0xaafca0u));
    /* 004fd1a7: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004fd1aa: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004fd1ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd1ad: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd1b2u); f_00810160();
    /* 004fd1b2: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd1b4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd1b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd1b8: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd1bdu); f_008123d8();
    /* 004fd1bd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd1c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd1c3: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd1c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fd1c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd1c9: jle 0x4fd1fb */ if ((fZ||fS!=fO)) goto L_004fd1fb;
L_004fd1cb:; BB(0x004fd1cb);
    /* 004fd1cb: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd1ce: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd1d1: je 0x4fd1de */ if (fZ) goto L_004fd1de;
L_004fd1d3:; BB(0x004fd1d3);
    /* 004fd1d3: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd1d7: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd1d9: jne 0x4fd1de */ if (!fZ) goto L_004fd1de;
L_004fd1db:; BB(0x004fd1db);
    /* 004fd1db: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fd1de:; BB(0x004fd1de);
    /* 004fd1de: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd1e1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd1e4: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd1e7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd1e9: jl 0x4fd1cb */ if ((fS!=fO)) goto L_004fd1cb;
L_004fd1eb:; BB(0x004fd1eb);
    /* 004fd1eb: jmp 0x4fd1fb */ goto L_004fd1fb;
L_004fd1ed:; BB(0x004fd1ed);
    /* 004fd1ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd1f0: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fd1f6: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fd1fb:; BB(0x004fd1fb);
    /* 004fd1fb: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fd201: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fd203:; BB(0x004fd203);
    /* 004fd203: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fd206: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd209: je 0x4fd216 */ if (fZ) goto L_004fd216;
L_004fd20b:; BB(0x004fd20b);
    /* 004fd20b: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fd20f: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd211: jne 0x4fd216 */ if (!fZ) goto L_004fd216;
L_004fd213:; BB(0x004fd213);
    /* 004fd213: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fd216:; BB(0x004fd216);
    /* 004fd216: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fd219: movsx ecx, word ptr [ecx + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fd21d: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd220: je 0x4fd22d */ if (fZ) goto L_004fd22d;
L_004fd222:; BB(0x004fd222);
    /* 004fd222: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fd226: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd228: jne 0x4fd22d */ if (!fZ) goto L_004fd22d;
L_004fd22a:; BB(0x004fd22a);
    /* 004fd22a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004fd22d:; BB(0x004fd22d);
    /* 004fd22d: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd230: lea ecx, [eax + 0x44] */ r_ecx = (u32)(r_eax+0x44u);
    /* 004fd233: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd239: jl 0x4fd203 */ if ((fS!=fO)) goto L_004fd203;
L_004fd23b:; BB(0x004fd23b);
    /* 004fd23b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd23e: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fd244: mov dword ptr [eax + 0x44], edi */ W32((u32)(r_eax+0x44u), r_edi);
    /* 004fd247: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fd24c:; BB(0x004fd24c);
    /* 004fd24c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd24f: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004fd255: jmp 0x4fc8c0 */ goto L_004fc8c0;
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd262:; BB(0x004fd262);
    /* 004fd262: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd265: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd268: je 0x4fd2d1 */ if (fZ) goto L_004fd2d1;
L_004fd26a:; BB(0x004fd26a);
    /* 004fd26a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd26c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd26f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd272: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd274: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd277: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd27a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd27d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd280: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd283: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd286: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd289: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd28c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd28f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd292: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd295: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd298: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd29b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd29e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd2a1: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd2a4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd2a7: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd2aa: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd2ad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd2b0: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd2b3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd2b6: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd2b9: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd2bc: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd2bf: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd2c2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd2c5: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd2c8: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd2cb: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd2ce: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd2d1:; BB(0x004fd2d1);
    /* 004fd2d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd2d4: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd2d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd2dc: jl 0x4fd262 */ if ((fS!=fO)) goto L_004fd262;
L_004fd2de:; BB(0x004fd2de);
    /* 004fd2de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd2e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2e4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd2e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd2eb: jle 0x4fd31f */ if ((fZ||fS!=fO)) goto L_004fd31f;
L_004fd2ed:; BB(0x004fd2ed);
    /* 004fd2ed: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004fd2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f2: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4fd2f7u); f_00807ac8();
    /* 004fd2f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2fa: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2fc:; BB(0x004fd2fc);
    /* 004fd2fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd302: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004fd305: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004fd308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd30a: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd30fu); f_004f7fc0();
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd312: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004fd315: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd318: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd31b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd31d: jl 0x4fd2ed */ if ((fS!=fO)) goto L_004fd2ed;
L_004fd31f:; BB(0x004fd31f);
    /* 004fd31f: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd324: jbe 0x4fd340 */ if ((fC||fZ)) goto L_004fd340;
L_004fd326:; BB(0x004fd326);
    /* 004fd326: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd330u); f_0061cdb0();
    /* 004fd330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd331:; BB(0x004fd331);
    /* 004fd331: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd335: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd33au); f_00857e98();
    /* 004fd33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd33b: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd340:; BB(0x004fd340);
    /* 004fd340: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd342: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd344: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd349: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd34f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd352: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004fd358: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004fd35e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004fd364: mov edx, eax */ r_edx = r_eax;
    /* 004fd366: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd36c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd370: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd376: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd37bu); f_0086b6b8();
    /* 004fd37b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd37e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd381: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004fd384: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd388: jle 0x4fd3b3 */ if ((fZ||fS!=fO)) goto L_004fd3b3;
L_004fd38a:; BB(0x004fd38a);
    /* 004fd38a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd38d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd392: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd397: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd399: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd39d: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd3a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3a8u); f_0061cdb0();
    /* 004fd3a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd3ae: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd3b1: jl 0x4fd38a */ if ((fS!=fO)) goto L_004fd38a;
L_004fd3b3:; BB(0x004fd3b3);
    /* 004fd3b3: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3b9: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3c3u); f_0061cdb0();
    /* 004fd3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3c6: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3cc: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd3d6u); f_0061cdb0();
    /* 004fd3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd3dc: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e2: push dword ptr [ecx + 0x100] */ { u32 v = R32((u32)(r_ecx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd3e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ec: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd3f1u); f_004f743c();
    /* 004fd3f1: jmp 0x4fd331 */ goto L_004fd331;
L_004fd3f6:; BB(0x004fd3f6);
    /* 004fd3f6: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd400u); f_0061cdb0();
    /* 004fd400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd401: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd406:; BB(0x004fd406);
    /* 004fd406: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd40b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd410u); f_0061cdb0();
    /* 004fd410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd411: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd416:; BB(0x004fd416);
    /* 004fd416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd419: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004fd41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd41e: jle 0x4fcaad */ if ((fZ||fS!=fO)) goto L_004fcaad;
L_004fd424:; BB(0x004fd424);
    /* 004fd424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd428: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004fd42b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd42f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd431: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd433: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd434: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4fd439u); f_008581c5();
    /* 004fd439: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fd43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd441: je 0x4fd6a5 */ if (fZ) goto L_004fd6a5;
L_004fd447:; BB(0x004fd447);
    /* 004fd447: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd44d: mov esi, eax */ r_esi = r_eax;
    /* 004fd44f: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd454u); f_00810160();
    /* 004fd454: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd456: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd45c: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd461u); f_008123d8();
    /* 004fd461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd468: jle 0x4fd4f9 */ if ((fZ||fS!=fO)) goto L_004fd4f9;
L_004fd46e:; BB(0x004fd46e);
    /* 004fd46e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd471: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd474: je 0x4fd4eb */ if (fZ) goto L_004fd4eb;
L_004fd476:; BB(0x004fd476);
    /* 004fd476: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd479: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fd47d: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004fd480: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd482: jne 0x4fd4eb */ if (!fZ) goto L_004fd4eb;
L_004fd484:; BB(0x004fd484);
    /* 004fd484: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004fd486: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004fd489: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004fd48b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004fd48e: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004fd491: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004fd494: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004fd497: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004fd49a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fd49d: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004fd4a0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fd4a3: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004fd4a6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fd4a9: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004fd4ac: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fd4af: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004fd4b2: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fd4b5: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fd4b8: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fd4bb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004fd4be: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fd4c1: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004fd4c4: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fd4c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004fd4ca: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fd4cd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004fd4d0: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fd4d3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004fd4d6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fd4d9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004fd4dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fd4df: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004fd4e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004fd4e5: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004fd4e8: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd4eb:; BB(0x004fd4eb);
    /* 004fd4eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd4ee: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd4f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd4f3: jl 0x4fd46e */ if ((fS!=fO)) goto L_004fd46e;
L_004fd4f9:; BB(0x004fd4f9);
    /* 004fd4f9: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fd4ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fd501:; BB(0x004fd501);
    /* 004fd501: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fd504: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd507: je 0x4fd57e */ if (fZ) goto L_004fd57e;
L_004fd509:; BB(0x004fd509);
    /* 004fd509: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd50c: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fd510: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004fd513: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd515: jne 0x4fd57e */ if (!fZ) goto L_004fd57e;
L_004fd517:; BB(0x004fd517);
    /* 004fd517: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004fd519: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004fd51c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004fd51f: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004fd521: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004fd524: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004fd527: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004fd52a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004fd52d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004fd530: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004fd533: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004fd536: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004fd539: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004fd53c: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004fd53f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004fd542: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004fd545: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004fd548: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004fd54b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004fd54e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004fd551: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004fd554: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004fd557: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004fd55a: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004fd55d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004fd560: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004fd563: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004fd566: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004fd569: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004fd56c: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004fd56f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004fd572: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004fd575: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004fd578: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004fd57b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fd57e:; BB(0x004fd57e);
    /* 004fd57e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd581: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd584: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd589: jl 0x4fd501 */ if ((fS!=fO)) goto L_004fd501;
L_004fd58f:; BB(0x004fd58f);
    /* 004fd58f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd595: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd598: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd59a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd59c: jle 0x4fd5c3 */ if ((fZ||fS!=fO)) goto L_004fd5c3;
L_004fd59e:; BB(0x004fd59e);
    /* 004fd59e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5a6: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 004fd5a9: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fd5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5ae: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fd5b3u); f_004f7fc0();
    /* 004fd5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5b6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd5b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd5bc: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fd5bf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd5c1: jl 0x4fd59e */ if ((fS!=fO)) goto L_004fd59e;
L_004fd5c3:; BB(0x004fd5c3);
    /* 004fd5c3: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd5c9: ja 0x4fd65a */ if ((!fC&&!fZ)) goto L_004fd65a;
L_004fd5cf:; BB(0x004fd5cf);
    /* 004fd5cf: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd5d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5d7: je 0x4fd646 */ if (fZ) goto L_004fd646;
L_004fd5d9:; BB(0x004fd5d9);
    /* 004fd5d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd5dd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004fd5e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd5e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd5eb: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fd5f1: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 004fd5f7: push dword ptr [edx + 0x104] */ { u32 v = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd5fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd601: push dword ptr [edx + 0x100] */ { u32 v = R32((u32)(r_edx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4fd60cu); f_0086b6b8();
    /* 004fd60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd60f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd612: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fd615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd619: jle 0x4fd674 */ if ((fZ||fS!=fO)) goto L_004fd674;
L_004fd61b:; BB(0x004fd61b);
    /* 004fd61b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd61e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004fd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fd623: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004fd626: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd628: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd62e: add ecx, dword ptr [edx + 0x100] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fd634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd639u); f_0061cdb0();
    /* 004fd639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd63c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd63f: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd642: jl 0x4fd61b */ if ((fS!=fO)) goto L_004fd61b;
L_004fd644:; BB(0x004fd644);
    /* 004fd644: jmp 0x4fd674 */ goto L_004fd674;
L_004fd646:; BB(0x004fd646);
    /* 004fd646: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd648: push dword ptr [ecx + 0x104] */ { u32 v = R32((u32)(r_ecx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd64e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd653: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4fd658u); f_004f743c();
    /* 004fd658: jmp 0x4fd665 */ goto L_004fd665;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: push 0x91edb4 */ { u32 v = 0x91edb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd65f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd664u); f_0061cdb0();
    /* 004fd664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fd665:; BB(0x004fd665);
    /* 004fd665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4fd66eu); f_00857e98();
    /* 004fd66e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd66f: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd674:; BB(0x004fd674);
    /* 004fd674: push dword ptr [eax + 0x100] */ { u32 v = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd67a: push 0x91edc4 */ { u32 v = 0x91edc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd67f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd684u); f_0061cdb0();
    /* 004fd684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd687: push dword ptr [eax + 0x104] */ { u32 v = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd68d: push 0x91edd8 */ { u32 v = 0x91edd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd692: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd697u); f_0061cdb0();
    /* 004fd697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd69a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd69d: mov ebx, dword ptr [eax + 0x100] */ r_ebx = R32((u32)(r_eax+0x100u));
    /* 004fd6a3: jmp 0x4fd646 */ goto L_004fd646;
L_004fd6a5:; BB(0x004fd6a5);
    /* 004fd6a5: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6aa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fd6afu); f_0061cdb0();
    /* 004fd6af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd6b0: jmp 0x4fcaad */ goto L_004fcaad;
L_004fd6b5:; BB(0x004fd6b5);
    /* 004fd6b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004fd6bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fd6c3u); f_005caba4();
    /* 004fd6c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd6c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd6c9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fd6cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd6ce: je 0x4fd720 */ if (fZ) goto L_004fd720;
L_004fd6d0:; BB(0x004fd6d0);
    /* 004fd6d0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004fd6d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd6de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6e4: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fd6ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd6ec: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4fd6f1u); f_004f8184();
    /* 004fd6f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004fd6f8:; BB(0x004fd6f8);
    /* 004fd6f8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd6fe: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004fd704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd70b: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd70d: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4fd712u); f_004f8378();
    /* 004fd712: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd715: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004fd71b: jmp 0x4fc8d9 */ goto L_004fc8d9;
L_004fd720:; BB(0x004fd720);
    /* 004fd720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd722: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd725: jmp 0x4fd6f8 */ goto L_004fd6f8;
L_004fd727:; BB(0x004fd727);
    /* 004fd727: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004fd72a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd72b: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4fd730u); f_006a6f78();
    /* 004fd730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd733: jne 0x4fd746 */ if (!fZ) goto L_004fd746;
L_004fd735:; BB(0x004fd735);
    /* 004fd735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd738: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd73d: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd741: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd746:; BB(0x004fd746);
    /* 004fd746: jle 0x4fcaee */ if ((fZ||fS!=fO)) goto L_004fcaee;
L_004fd74c:; BB(0x004fd74c);
    /* 004fd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd74f: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004fd753: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004fd756: je 0x4fd772 */ if (fZ) goto L_004fd772;
L_004fd758:; BB(0x004fd758);
    /* 004fd758: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd75a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd75c: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd761u); f_004fd914();
    /* 004fd761: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd764: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd769: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd76d: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd772:; BB(0x004fd772);
    /* 004fd772: mov ecx, eax */ r_ecx = r_eax;
    /* 004fd774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd776: call 0x4fd914 */ r_esp -= 4; W32(r_esp, 0x4fd77bu); f_004fd914();
    /* 004fd77b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd77e: mov eax, 1 */ r_eax = 0x1u;
    /* 004fd783: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004fd787: jmp 0x4fcaee */ goto L_004fcaee;
L_004fd8fa:; BB(0x004fd8fa);
    /* 004fd8fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd8fd: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd900: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd903: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd906: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd90d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd90f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd910: ret  */ FN_RET(0x004fc83a); r_esp += 4; return;
}

