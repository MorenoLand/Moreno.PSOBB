#include "protos.h"

void f_0050d4b4(void) /* sub_50D4B4 */
{
    FN_ENTER(0x0050d4b4);
    /* 0050d4b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050d4b5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050d4b8: mov edi, ecx */ r_edi = r_ecx;
    /* 0050d4ba: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0050d4bd: mov dword ptr [esp], 0x9202ec */ W32((u32)(r_esp), 0x9202ecu);
    /* 0050d4c4: mov dword ptr [esp + 4], 0x9202f0 */ W32((u32)(r_esp+0x4u), 0x9202f0u);
    /* 0050d4cc: push dword ptr [esp + eax*4] */ { u32 v = R32((u32)(r_esp+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d4cf: push 0x9202f4 */ { u32 v = 0x9202f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d4d4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d4d6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50d4dbu); f_0061cdb0();
    /* 0050d4db: mov eax, dword ptr [0x9bb1c8] */ r_eax = R32((u32)(0x9bb1c8u));
    /* 0050d4e0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d4e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d4e4: push dword ptr [edi + 0x70] */ { u32 v = R32((u32)(r_edi+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d4e7: push 0x9202fc */ { u32 v = 0x9202fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d4ec: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d4ee: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50d4f3u); f_0061cdb0();
    /* 0050d4f3: push dword ptr [edi + 0x80] */ { u32 v = R32((u32)(r_edi+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d4f9: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d4fe: push 0xf0020 */ { u32 v = 0xf0020u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d503: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50d508u); f_0061cdb0();
    /* 0050d508: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0050d50e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0050d511: push dword ptr [edx*8 + 0x9ba8f4] */ { u32 v = R32((u32)(r_edx*8+0x9ba8f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d518: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d51a: push dword ptr [edi + 0x74] */ { u32 v = R32((u32)(r_edi+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d51d: push 0x92030c */ { u32 v = 0x92030cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d522: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d524: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50d529u); f_0061cdb0();
    /* 0050d529: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050d52c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050d52d: ret  */ FN_RET(0x0050d4b4); r_esp += 4; return;
}

void f_0050d530(void) /* sub_50D530 */
{
    FN_ENTER(0x0050d530);
    /* 0050d530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d531: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d533: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d535: push 0x8d3f84 */ { u32 v = 0x8d3f84u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d53a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050d540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d541: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050d548: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050d54b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050d54e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0050d551: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0050d554: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0050d557: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0050d55a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0050d561: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d566: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50d56bu); f_005caba4();
    /* 0050d56b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d56c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0050d56f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d571: je 0x50d5d8 */ if (fZ) goto L_0050d5d8;
L_0050d573:; BB(0x0050d573);
    /* 0050d573: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0050d57a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050d581: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050d584: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050d587: lea ebx, [eax + 0x1c] */ r_ebx = (u32)(r_eax+0x1cu);
    /* 0050d58a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050d58c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d58d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d58e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d58f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d590: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d591: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d592: call 0x508b68 */ r_esp -= 4; W32(r_esp, 0x50d597u); f_00508b68();
    /* 0050d597: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050d59a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0050d5a1:; BB(0x0050d5a1);
    /* 0050d5a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050d5a4: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 0050d5a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050d5ae: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d5b0: mov dword ptr [ecx + 0x60], 1 */ W32((u32)(r_ecx+0x60u), 0x1u);
    /* 0050d5b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d5b9: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 0050d5bc: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 0050d5bf: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0050d5c2: call 0x4f70d0 */ r_esp -= 4; W32(r_esp, 0x50d5c7u); f_004f70d0();
    /* 0050d5c7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050d5ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050d5cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050d5d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d5d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d5d7: ret  */ FN_RET(0x0050d530); r_esp += 4; return;
L_0050d5d8:; BB(0x0050d5d8);
    /* 0050d5d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050d5da: jmp 0x50d5a1 */ goto L_0050d5a1;
}

void f_0050d5dc(void)
{
    FN_ENTER(0x0050d5dc);
    /* 0050d5dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d5dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d5df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d5e1: push 0x8d3fac */ { u32 v = 0x8d3facu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d5e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050d5ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d5ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050d5f4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050d5f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050d5fa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0050d5fd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0050d600: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0050d603: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d608: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0050d60f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50d614u); f_005caba4();
    /* 0050d614: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050d617: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050d61a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0050d61d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050d61f: je 0x50d8d3 */ if (fZ) goto L_0050d8d3;
L_0050d625:; BB(0x0050d625);
    /* 0050d625: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0050d62c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050d633: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d639: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d63b: call 0x4f7330 */ r_esp -= 4; W32(r_esp, 0x50d640u); f_004f7330();
    /* 0050d640: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050d643: mov dword ptr [ecx], 0xaff3b8 */ W32((u32)(r_ecx), 0xaff3b8u);
    /* 0050d649: mov eax, dword ptr [0x9bb1c4] */ r_eax = R32((u32)(0x9bb1c4u));
    /* 0050d64e: mov ebx, dword ptr [0x9bb1c8] */ r_ebx = R32((u32)(0x9bb1c8u));
    /* 0050d654: mov dword ptr [ecx + 0x60], 1 */ W32((u32)(r_ecx+0x60u), 0x1u);
    /* 0050d65b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0050d65e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0050d660: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050d662: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 0050d665: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 0050d668: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 0050d66b: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 0050d66e: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0050d671: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0050d674: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d676: jne 0x50d6b4 */ if (!fZ) goto L_0050d6b4;
L_0050d678:; BB(0x0050d678);
    /* 0050d678: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0050d67a:; BB(0x0050d67a);
    /* 0050d67a: lea edi, [eax + eax*4] */ r_edi = (u32)(r_eax+r_eax*4);
    /* 0050d67d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d67f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d681: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0050d683: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d685: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d687: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d689: add edi, dword ptr [0xa72cd0] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d68f: mov esi, 0x9bb100 */ r_esi = 0x9bb100u;
    /* 0050d694: mov ecx, 0x98 */ r_ecx = 0x98u;
    /* 0050d699: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d69a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0050d69d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050d69f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d6a0: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050d6a3: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0050d6a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6a8: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d6ad: jl 0x50d67a */ if ((fS!=fO)) goto L_0050d67a;
L_0050d6af:; BB(0x0050d6af);
    /* 0050d6af: jmp 0x50d8ea */ goto L_0050d8ea;
L_0050d6b4:; BB(0x0050d6b4);
    /* 0050d6b4: mov ecx, dword ptr [0xa72cd0] */ r_ecx = R32((u32)(0xa72cd0u));
    /* 0050d6ba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050d6bd: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 0050d6c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6c4: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6c6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6c8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6ca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6cc: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6ce: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 0050d6d4: mov esi, 0xa72c28 */ r_esi = 0xa72c28u;
    /* 0050d6d9: mov edi, ecx */ r_edi = r_ecx;
L_0050d6db:; BB(0x0050d6db);
    /* 0050d6db: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0050d6dd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d6e0: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0050d6e2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050d6e5: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050d6e7: jne 0x50d6db */ if (!fZ) goto L_0050d6db;
L_0050d6e9:; BB(0x0050d6e9);
    /* 0050d6e9: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0050d6ec: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d6ee: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d6f0: mov ebx, dword ptr [ecx + 0x10] */ r_ebx = R32((u32)(r_ecx+0x10u));
    /* 0050d6f3: mov dword ptr [0xa72c38], ebx */ W32((u32)(0xa72c38u), r_ebx);
    /* 0050d6f9: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d6fb: mov esi, dword ptr [ecx + 0x14] */ r_esi = R32((u32)(r_ecx+0x14u));
    /* 0050d6fe: lea ebx, [edi + 0x50] */ r_ebx = (u32)(r_edi+0x50u);
    /* 0050d701: mov dword ptr [0xa72c3c], esi */ W32((u32)(0xa72c3cu), r_esi);
    /* 0050d707: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d708: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0050d70b: mov dword ptr [0xa72c40], eax */ W32((u32)(0xa72c40u), r_eax);
    /* 0050d710: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0050d713: mov dword ptr [0xa72c44], edx */ W32((u32)(0xa72c44u), r_edx);
    /* 0050d719: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0050d71c: mov dword ptr [0xa72c48], eax */ W32((u32)(0xa72c48u), r_eax);
    /* 0050d721: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0050d724: mov dword ptr [0xa72c4c], eax */ W32((u32)(0xa72c4cu), r_eax);
    /* 0050d729: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0050d72c: mov dword ptr [0xa72c50], eax */ W32((u32)(0xa72c50u), r_eax);
    /* 0050d731: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0050d734: mov dword ptr [0xa72c54], eax */ W32((u32)(0xa72c54u), r_eax);
    /* 0050d739: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0050d73c: mov dword ptr [0xa72c58], eax */ W32((u32)(0xa72c58u), r_eax);
    /* 0050d741: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0050d744: mov dword ptr [0xa72c5c], eax */ W32((u32)(0xa72c5cu), r_eax);
    /* 0050d749: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0050d74c: mov dword ptr [0xa72c60], eax */ W32((u32)(0xa72c60u), r_eax);
    /* 0050d751: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0050d754: mov dword ptr [0xa72c64], eax */ W32((u32)(0xa72c64u), r_eax);
    /* 0050d759: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0050d75c: mov dword ptr [0xa72c68], eax */ W32((u32)(0xa72c68u), r_eax);
    /* 0050d761: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 0050d764: mov dword ptr [0xa72c6c], eax */ W32((u32)(0xa72c6cu), r_eax);
    /* 0050d769: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 0050d76c: mov dword ptr [0xa72c70], eax */ W32((u32)(0xa72c70u), r_eax);
    /* 0050d771: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 0050d774: mov dword ptr [0xa72c74], eax */ W32((u32)(0xa72c74u), r_eax);
    /* 0050d779: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 0050d77c: mov dword ptr [0xa72c78], eax */ W32((u32)(0xa72c78u), r_eax);
    /* 0050d781: mov eax, dword ptr [ecx + 0x54] */ r_eax = R32((u32)(r_ecx+0x54u));
    /* 0050d784: mov dword ptr [0xa72c7c], eax */ W32((u32)(0xa72c7cu), r_eax);
    /* 0050d789: mov eax, dword ptr [ecx + 0x58] */ r_eax = R32((u32)(r_ecx+0x58u));
    /* 0050d78c: mov dword ptr [0xa72c80], eax */ W32((u32)(0xa72c80u), r_eax);
    /* 0050d791: mov eax, dword ptr [ecx + 0x5c] */ r_eax = R32((u32)(r_ecx+0x5cu));
    /* 0050d794: mov dword ptr [0xa72c84], eax */ W32((u32)(0xa72c84u), r_eax);
    /* 0050d799: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0050d79c: mov dword ptr [0xa72c88], eax */ W32((u32)(0xa72c88u), r_eax);
    /* 0050d7a1: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 0050d7a4: mov dword ptr [0xa72c8c], eax */ W32((u32)(0xa72c8cu), r_eax);
    /* 0050d7a9: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 0050d7ac: mov dword ptr [0xa72c90], eax */ W32((u32)(0xa72c90u), r_eax);
    /* 0050d7b1: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 0050d7b4: mov dword ptr [0xa72c94], eax */ W32((u32)(0xa72c94u), r_eax);
    /* 0050d7b9: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 0050d7bc: mov dword ptr [0xa72c98], eax */ W32((u32)(0xa72c98u), r_eax);
    /* 0050d7c1: mov eax, dword ptr [ecx + 0x74] */ r_eax = R32((u32)(r_ecx+0x74u));
    /* 0050d7c4: mov dword ptr [0xa72c9c], eax */ W32((u32)(0xa72c9cu), r_eax);
    /* 0050d7c9: mov eax, dword ptr [ecx + 0x78] */ r_eax = R32((u32)(r_ecx+0x78u));
    /* 0050d7cc: mov dword ptr [0xa72ca0], eax */ W32((u32)(0xa72ca0u), r_eax);
    /* 0050d7d1: mov eax, dword ptr [ecx + 0x7c] */ r_eax = R32((u32)(r_ecx+0x7cu));
    /* 0050d7d4: mov dword ptr [0xa72ca4], eax */ W32((u32)(0xa72ca4u), r_eax);
    /* 0050d7d9: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 0050d7df: mov dword ptr [0xa72ca8], eax */ W32((u32)(0xa72ca8u), r_eax);
    /* 0050d7e4: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 0050d7ea: mov dword ptr [0xa72cac], eax */ W32((u32)(0xa72cacu), r_eax);
    /* 0050d7ef: movzx eax, byte ptr [ecx + 0x88] */ r_eax = (u32)R8((u32)(r_ecx+0x88u));
    /* 0050d7f6: mov byte ptr [0xa72cb0], al */ W8((u32)(0xa72cb0u), (u8)r_eax);
    /* 0050d7fb: movzx eax, byte ptr [ecx + 0x89] */ r_eax = (u32)R8((u32)(r_ecx+0x89u));
    /* 0050d802: mov byte ptr [0xa72cb1], al */ W8((u32)(0xa72cb1u), (u8)r_eax);
    /* 0050d807: movzx eax, byte ptr [ecx + 0x8a] */ r_eax = (u32)R8((u32)(r_ecx+0x8au));
    /* 0050d80e: mov byte ptr [0xa72cb2], al */ W8((u32)(0xa72cb2u), (u8)r_eax);
    /* 0050d813: movzx eax, byte ptr [ecx + 0x8b] */ r_eax = (u32)R8((u32)(r_ecx+0x8bu));
    /* 0050d81a: mov byte ptr [0xa72cb3], al */ W8((u32)(0xa72cb3u), (u8)r_eax);
    /* 0050d81f: movzx eax, byte ptr [ecx + 0x8c] */ r_eax = (u32)R8((u32)(r_ecx+0x8cu));
    /* 0050d826: mov byte ptr [0xa72cb4], al */ W8((u32)(0xa72cb4u), (u8)r_eax);
    /* 0050d82b: movzx eax, byte ptr [ecx + 0x8d] */ r_eax = (u32)R8((u32)(r_ecx+0x8du));
    /* 0050d832: mov byte ptr [0xa72cb5], al */ W8((u32)(0xa72cb5u), (u8)r_eax);
    /* 0050d837: movzx eax, byte ptr [ecx + 0x8e] */ r_eax = (u32)R8((u32)(r_ecx+0x8eu));
    /* 0050d83e: mov byte ptr [0xa72cb6], al */ W8((u32)(0xa72cb6u), (u8)r_eax);
    /* 0050d843: movzx eax, byte ptr [ecx + 0x8f] */ r_eax = (u32)R8((u32)(r_ecx+0x8fu));
    /* 0050d84a: mov byte ptr [0xa72cb7], al */ W8((u32)(0xa72cb7u), (u8)r_eax);
    /* 0050d84f: movzx eax, byte ptr [ecx + 0x90] */ r_eax = (u32)R8((u32)(r_ecx+0x90u));
    /* 0050d856: mov byte ptr [0xa72cb8], al */ W8((u32)(0xa72cb8u), (u8)r_eax);
    /* 0050d85b: movzx eax, byte ptr [ecx + 0x91] */ r_eax = (u32)R8((u32)(r_ecx+0x91u));
    /* 0050d862: mov byte ptr [0xa72cb9], al */ W8((u32)(0xa72cb9u), (u8)r_eax);
    /* 0050d867: movzx eax, byte ptr [ecx + 0x92] */ r_eax = (u32)R8((u32)(r_ecx+0x92u));
    /* 0050d86e: mov byte ptr [0xa72cba], al */ W8((u32)(0xa72cbau), (u8)r_eax);
    /* 0050d873: movzx eax, byte ptr [ecx + 0x93] */ r_eax = (u32)R8((u32)(r_ecx+0x93u));
    /* 0050d87a: mov byte ptr [0xa72cbb], al */ W8((u32)(0xa72cbbu), (u8)r_eax);
    /* 0050d87f: movzx eax, byte ptr [ecx + 0x94] */ r_eax = (u32)R8((u32)(r_ecx+0x94u));
    /* 0050d886: mov byte ptr [0xa72cbc], al */ W8((u32)(0xa72cbcu), (u8)r_eax);
    /* 0050d88b: movzx eax, byte ptr [ecx + 0x95] */ r_eax = (u32)R8((u32)(r_ecx+0x95u));
    /* 0050d892: mov byte ptr [0xa72cbd], al */ W8((u32)(0xa72cbdu), (u8)r_eax);
    /* 0050d897: movzx eax, byte ptr [ecx + 0x96] */ r_eax = (u32)R8((u32)(r_ecx+0x96u));
    /* 0050d89e: mov byte ptr [0xa72cbe], al */ W8((u32)(0xa72cbeu), (u8)r_eax);
    /* 0050d8a3: movzx ecx, byte ptr [ecx + 0x97] */ r_ecx = (u32)R8((u32)(r_ecx+0x97u));
    /* 0050d8aa: mov byte ptr [0xa72cbf], cl */ W8((u32)(0xa72cbfu), (u8)r_ecx);
    /* 0050d8b0: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0050d8b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d8b4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50d8b9u); f_0061cdb0();
    /* 0050d8b9: mov eax, edi */ r_eax = r_edi;
    /* 0050d8bb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d8bd: push dword ptr [eax + 0x80] */ { u32 v = R32((u32)(r_eax+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d8c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d8c4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x50d8c9u); f_00858900();
    /* 0050d8c9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050d8cc: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0050d8d3:; BB(0x0050d8d3);
    /* 0050d8d3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050d8d6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050d8d9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050d8dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050d8df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050d8e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d8e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d8e9: ret  */ FN_RET(0x0050d5dc); r_esp += 4; return;
L_0050d8ea:; BB(0x0050d8ea);
    /* 0050d8ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0050d8ec:; BB(0x0050d8ec);
    /* 0050d8ec: lea edi, [eax + eax*4] */ r_edi = (u32)(r_eax+r_eax*4);
    /* 0050d8ef: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8f1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8f3: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8f5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8f7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8f9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8fb: add edi, dword ptr [0xa72ccc] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d901: mov esi, 0x9bb100 */ r_esi = 0x9bb100u;
    /* 0050d906: mov ecx, 0x98 */ r_ecx = 0x98u;
    /* 0050d90b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d90c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0050d90f: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050d911: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d912: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050d915: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0050d917: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d91a: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d91d: jl 0x50d8ec */ if ((fS!=fO)) goto L_0050d8ec;
L_0050d91f:; BB(0x0050d91f);
    /* 0050d91f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050d922: mov esi, dword ptr [eax + 0x70] */ r_esi = R32((u32)(r_eax+0x70u));
    /* 0050d925: jmp 0x50d6b4 */ goto L_0050d6b4;
}

void f_0050d92c(void) /* sub_50D92C */
{
    FN_ENTER(0x0050d92c);
    /* 0050d92c: push dword ptr [0xa72cd0] */ { u32 v = R32((u32)(0xa72cd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d932: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x50d937u); f_00857e98();
    /* 0050d937: mov dword ptr [0xa72cd0], 0 */ W32((u32)(0xa72cd0u), 0x0u);
    /* 0050d941: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d942: ret  */ FN_RET(0x0050d92c); r_esp += 4; return;
}

void f_0050d944(void) /* sub_50D944 */
{
    FN_ENTER(0x0050d944);
    /* 0050d944: push dword ptr [0xa72ccc] */ { u32 v = R32((u32)(0xa72cccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d94a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x50d94fu); f_00857e98();
    /* 0050d94f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d950: mov ecx, dword ptr [0xa72cc8] */ r_ecx = R32((u32)(0xa72cc8u));
    /* 0050d956: mov dword ptr [0xa72ccc], 0 */ W32((u32)(0xa72cccu), 0x0u);
    /* 0050d960: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d962: je 0x50d977 */ if (fZ) goto L_0050d977;
L_0050d964:; BB(0x0050d964);
    /* 0050d964: je 0x50d96d */ if (fZ) goto L_0050d96d;
L_0050d966:; BB(0x0050d966);
    /* 0050d966: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d968: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x50d96du); f_004066a8();
L_0050d96d:; BB(0x0050d96d);
    /* 0050d96d: mov dword ptr [0xa72cc8], 0 */ W32((u32)(0xa72cc8u), 0x0u);
L_0050d977:; BB(0x0050d977);
    /* 0050d977: mov ecx, dword ptr [0xa72cc4] */ r_ecx = R32((u32)(0xa72cc4u));
    /* 0050d97d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050d97f: je 0x50d99c */ if (fZ) goto L_0050d99c;
L_0050d981:; BB(0x0050d981);
    /* 0050d981: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x50d986u); f_00829de0();
    /* 0050d986: push dword ptr [0xa72cc4] */ { u32 v = R32((u32)(0xa72cc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d98c: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x50d991u); f_0082e960();
    /* 0050d991: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d992: mov dword ptr [0xa72cc4], 0 */ W32((u32)(0xa72cc4u), 0x0u);
L_0050d99c:; BB(0x0050d99c);
    /* 0050d99c: ret  */ FN_RET(0x0050d944); r_esp += 4; return;
}

void f_0050d9a0(void) /* sub_50D9A0 */
{
    FN_ENTER(0x0050d9a0);
    /* 0050d9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050d9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050d9a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d9a5: push 0x8d3fd4 */ { u32 v = 0x8d3fd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d9aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050d9b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d9b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050d9b8: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050d9bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050d9be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050d9c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050d9c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050d9c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d9c9: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0050d9cc: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0050d9cf: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0050d9d2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0050d9d5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0050d9d8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050d9db: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0050d9de: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050d9e1: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 0050d9e4: mov edi, 0x920320 */ r_edi = 0x920320u;
L_0050d9e9:; BB(0x0050d9e9);
    /* 0050d9e9: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0050d9eb: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d9ee: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0050d9f0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050d9f3: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050d9f5: jne 0x50d9e9 */ if (!fZ) goto L_0050d9e9;
L_0050d9f7:; BB(0x0050d9f7);
    /* 0050d9f7: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x50d9fcu); f_00807ac0();
    /* 0050d9fc: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d9ff: jge 0x50da1d */ if ((fS==fO)) goto L_0050da1d;
L_0050da01:; BB(0x0050da01);
    /* 0050da01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050da03: jl 0x50dac6 */ if ((fS!=fO)) goto L_0050dac6;
L_0050da09:; BB(0x0050da09);
    /* 0050da09: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0050da0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050da0d: push 0x920330 */ { u32 v = 0x920330u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050da13: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x50da18u); f_00858bf5();
    /* 0050da18: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050da1b: jmp 0x50da2f */ goto L_0050da2f;
L_0050da1d:; BB(0x0050da1d);
    /* 0050da1d: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0050da20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050da21: push 0x920348 */ { u32 v = 0x920348u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050da27: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x50da2cu); f_00858bf5();
    /* 0050da2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050da2f:; BB(0x0050da2f);
    /* 0050da2f: push 0x2600 */ { u32 v = 0x2600u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da34: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x50da39u); f_008581c5();
    /* 0050da39: mov dword ptr [0xa72ccc], eax */ W32((u32)(0xa72cccu), r_eax);
    /* 0050da3e: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0050da41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050da42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050da43: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x50da48u); f_005b9910();
    /* 0050da48: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0050da4f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da54: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x50da59u); f_008581c5();
    /* 0050da59: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050da5c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0050da5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050da61: je 0x50dac2 */ if (fZ) goto L_0050dac2;
L_0050da63:; BB(0x0050da63);
    /* 0050da63: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0050da6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050da71: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050da74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050da76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050da77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050da78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050da79: push 0x9bb1a8 */ { u32 v = 0x9bb1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da7e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da80: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x50da85u); f_005b7a84();
    /* 0050da85: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050da88: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0050da8f:; BB(0x0050da8f);
    /* 0050da8f: mov dword ptr [0xa72cc8], eax */ W32((u32)(0xa72cc8u), r_eax);
    /* 0050da94: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050da9b: push 0x920360 */ { u32 v = 0x920360u; r_esp -= 4; W32(r_esp, v); }
    /* 0050daa0: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x50daa5u); f_008009dc();
    /* 0050daa5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050daa6: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050daa9: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050daac: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050daaf: mov dword ptr [0xa72cc4], eax */ W32((u32)(0xa72cc4u), r_eax);
    /* 0050dab4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050dab7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050dabe: mov esp, ebp */ r_esp = r_ebp;
    /* 0050dac0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050dac1: ret  */ FN_RET(0x0050d9a0); r_esp += 4; return;
L_0050dac2:; BB(0x0050dac2);
    /* 0050dac2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050dac4: jmp 0x50da8f */ goto L_0050da8f;
L_0050dac6:; BB(0x0050dac6);
    /* 0050dac6: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050dac9: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050dacc: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050dacf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050dad2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050dad9: mov esp, ebp */ r_esp = r_ebp;
    /* 0050dadb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050dadc: ret  */ FN_RET(0x0050d9a0); r_esp += 4; return;
}

void f_0050dae0(void) /* sub_50DAE0 */
{
    FN_ENTER(0x0050dae0);
    /* 0050dae0: push 0x13000 */ { u32 v = 0x13000u; r_esp -= 4; W32(r_esp, v); }
    /* 0050dae5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x50daeau); f_008581c5();
    /* 0050daea: mov dword ptr [0xa72cd0], eax */ W32((u32)(0xa72cd0u), r_eax);
    /* 0050daef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050daf0: push dword ptr [0x9bb1b8] */ { u32 v = R32((u32)(0x9bb1b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050daf6: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x50dafbu); f_005b9910();
    /* 0050dafb: mov edx, eax */ r_edx = r_eax;
    /* 0050dafd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050db00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050db02: jl 0x50db17 */ if ((fS!=fO)) goto L_0050db17;
L_0050db04:; BB(0x0050db04);
    /* 0050db04: mov eax, 0x1af286bd */ r_eax = 0x1af286bdu;
    /* 0050db09: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0050db0c: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0050db0e: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0050db10: mov dword ptr [0x9bb1c8], edx */ W32((u32)(0x9bb1c8u), r_edx);
    /* 0050db16: ret  */ FN_RET(0x0050dae0); r_esp += 4; return;
L_0050db17:; BB(0x0050db17);
    /* 0050db17: mov dword ptr [0x9bb1c8], 0 */ W32((u32)(0x9bb1c8u), 0x0u);
    /* 0050db21: ret  */ FN_RET(0x0050dae0); r_esp += 4; return;
}

void f_0050db24(void) /* sub_50DB24 */
{
    FN_ENTER(0x0050db24);
    /* 0050db24: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0050db27: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0050db2b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050db30: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0050db34: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 0050db3b: call 0x4f7454 */ r_esp -= 4; W32(r_esp, 0x50db40u); f_004f7454();
    /* 0050db40: ret  */ FN_RET(0x0050db24); r_esp += 4; return;
}

void f_0050db44(void) /* sub_50DB44 */
{
    FN_ENTER(0x0050db44);
    /* 0050db44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050db45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050db47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050db49: call 0x50db68 */ r_esp -= 4; W32(r_esp, 0x50db4eu); f_0050db68();
    /* 0050db4e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050db52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050db54: jne 0x50db5a */ if (!fZ) goto L_0050db5a;
L_0050db56:; BB(0x0050db56);
    /* 0050db56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050db57: ret 4 */ FN_RET(0x0050db44); r_esp += 8; return;
L_0050db5a:; BB(0x0050db5a);
    /* 0050db5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050db5b: call 0x5083bc */ r_esp -= 4; W32(r_esp, 0x50db60u); f_005083bc();
    /* 0050db60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050db61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050db62: ret 4 */ FN_RET(0x0050db44); r_esp += 8; return;
}

void f_0050db68(void) /* sub_50DB68 */
{
    FN_ENTER(0x0050db68);
    /* 0050db68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050db69: mov ebp, esp */ r_ebp = r_esp;
    /* 0050db6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050db6d: push 0x8d3ff0 */ { u32 v = 0x8d3ff0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050db72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050db78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050db79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050db80: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050db83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050db86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050db89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050db8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050db8f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0050db92: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050db95: mov dword ptr [ecx], 0xaff4a8 */ W32((u32)(r_ecx), 0xaff4a8u);
    /* 0050db9b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050dba2: call 0x508368 */ r_esp -= 4; W32(r_esp, 0x50dba7u); f_00508368();
    /* 0050dba7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050dbaa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050dbb1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050dbb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050dbb4: ret  */ FN_RET(0x0050db68); r_esp += 4; return;
}

void f_0050dbb8(void) /* sub_50DBB8 */
{
    FN_ENTER(0x0050dbb8);
    /* 0050dbb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050dbb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050dbba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050dbbb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050dbbc: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050dbbf: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0050dbc1: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0050dbc4: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
    /* 0050dbcb: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050dbce: je 0x50dc2c */ if (fZ) goto L_0050dc2c;
L_0050dbd0:; BB(0x0050dbd0);
    /* 0050dbd0: fld dword ptr [ebp + 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0x5cu)));
    /* 0050dbd3: fcomp dword ptr [0x920444] */ fx_compare(ST(0), R_F32((u32)(0x920444u))); FPOP();
    /* 0050dbd9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050dbdb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050dbdc: jb 0x50dc01 */ if (fC) goto L_0050dc01;
L_0050dbde:; BB(0x0050dbde);
    /* 0050dbde: push dword ptr [ebp + 0x44] */ { u32 v = R32((u32)(r_ebp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050dbe1: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x50dbe6u); f_0082e900();
    /* 0050dbe6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0050dbea: lea eax, [ebp + 0x74] */ r_eax = (u32)(r_ebp+0x74u);
    /* 0050dbed: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0050dbf0: lea edx, [ebp + 0x34] */ r_edx = (u32)(r_ebp+0x34u);
    /* 0050dbf3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0050dbf7: call 0x4d63b0 */ r_esp -= 4; W32(r_esp, 0x50dbfcu); f_004d63b0();
    /* 0050dbfc: jmp 0x50dd3b */ goto L_0050dd3b;
L_0050dc01:; BB(0x0050dc01);
    /* 0050dc01: lea ecx, [ebp + 0x74] */ r_ecx = (u32)(r_ebp+0x74u);
    /* 0050dc04: lea edx, [ebp + 0x40] */ r_edx = (u32)(r_ebp+0x40u);
    /* 0050dc07: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x50dc0cu); f_0082ebac();
    /* 0050dc0c: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0050dc0f: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 0050dc12: mov ebx, dword ptr [ebp + 0x48] */ r_ebx = R32((u32)(r_ebp+0x48u));
    /* 0050dc15: mov dword ptr [ebp + 0x118], eax */ W32((u32)(r_ebp+0x118u), r_eax);
    /* 0050dc1b: mov dword ptr [ebp + 0x11c], edx */ W32((u32)(r_ebp+0x11cu), r_edx);
    /* 0050dc21: mov dword ptr [ebp + 0x120], ebx */ W32((u32)(r_ebp+0x120u), r_ebx);
    /* 0050dc27: jmp 0x50dd3b */ goto L_0050dd3b;
L_0050dc2c:; BB(0x0050dc2c);
    /* 0050dc2c: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 0050dc30: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050dc32: jne 0x50e599 */ if (!fZ) goto L_0050e599;
L_0050dc38:; BB(0x0050dc38);
    /* 0050dc38: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 0050dc3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dc40: jne 0x50dc83 */ if (!fZ) goto L_0050dc83;
L_0050dc42:; BB(0x0050dc42);
    /* 0050dc42: mov eax, dword ptr [ebp + 0xa0] */ r_eax = R32((u32)(r_ebp+0xa0u));
    /* 0050dc48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dc4a: jne 0x50dc83 */ if (!fZ) goto L_0050dc83;
L_0050dc4c:; BB(0x0050dc4c);
    /* 0050dc4c: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0050dc52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dc54: jne 0x50dc83 */ if (!fZ) goto L_0050dc83;
L_0050dc56:; BB(0x0050dc56);
    /* 0050dc56: movzx esi, word ptr [ebp + 0x26] */ r_esi = (u32)R16((u32)(r_ebp+0x26u));
    /* 0050dc5a: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dc60: jne 0x50e444 */ if (!fZ) goto L_0050e444;
L_0050dc66:; BB(0x0050dc66);
    /* 0050dc66: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0050dc69: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 0050dc6c: mov ebx, dword ptr [ebp + 0x48] */ r_ebx = R32((u32)(r_ebp+0x48u));
    /* 0050dc6f: mov dword ptr [ebp + 0x118], eax */ W32((u32)(r_ebp+0x118u), r_eax);
    /* 0050dc75: mov dword ptr [ebp + 0x11c], edx */ W32((u32)(r_ebp+0x11cu), r_edx);
    /* 0050dc7b: mov dword ptr [ebp + 0x120], ebx */ W32((u32)(r_ebp+0x120u), r_ebx);
    /* 0050dc81: jmp 0x50dce5 */ goto L_0050dce5;
L_0050dc83:; BB(0x0050dc83);
    /* 0050dc83: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0050dc88: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x50dc8du); f_0082d990();
    /* 0050dc8d: movzx eax, word ptr [ebp + 0x26] */ r_eax = (u32)R16((u32)(r_ebp+0x26u));
    /* 0050dc91: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050dc93: je 0x50dca2 */ if (fZ) goto L_0050dca2;
L_0050dc95:; BB(0x0050dc95);
    /* 0050dc95: lea eax, [ebp + 0xc0] */ r_eax = (u32)(r_ebp+0xc0u);
    /* 0050dc9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050dc9c: call 0x83ba24 */ r_esp -= 4; W32(r_esp, 0x50dca1u); f_0083ba24();
    /* 0050dca1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0050dca2:; BB(0x0050dca2);
    /* 0050dca2: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0050dca8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050dcaa: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x50dcafu); f_00830c04();
    /* 0050dcaf: mov edx, dword ptr [ebp + 0x9c] */ r_edx = R32((u32)(r_ebp+0x9cu));
    /* 0050dcb5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050dcb7: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x50dcbcu); f_0082e9e4();
    /* 0050dcbc: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 0050dcc2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050dcc4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50dcc9u); f_0082d8bc();
    /* 0050dcc9: lea edx, [ebp + 0x40] */ r_edx = (u32)(r_ebp+0x40u);
    /* 0050dccc: lea eax, [ebp + 0x118] */ r_eax = (u32)(r_ebp+0x118u);
    /* 0050dcd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050dcd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050dcd4: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x50dcd9u); f_0083a610();
    /* 0050dcd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050dcdc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x50dce1u); f_0082da80();
    /* 0050dce1: movzx esi, word ptr [ebp + 0x26] */ r_esi = (u32)R16((u32)(r_ebp+0x26u));
L_0050dce5:; BB(0x0050dce5);
    /* 0050dce5: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dceb: je 0x50dd2d */ if (fZ) goto L_0050dd2d;
L_0050dced:; BB(0x0050dced);
    /* 0050dced: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0050dcf1: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 0050dcf7: fld dword ptr [ebp + 0x118] */ FPUSH(R_F32((u32)(r_ebp+0x118u)));
    /* 0050dcfd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0050dcff: fld dword ptr [ebp + 0x11c] */ FPUSH(R_F32((u32)(r_ebp+0x11cu)));
    /* 0050dd05: fld dword ptr [ebp + 0x120] */ FPUSH(R_F32((u32)(r_ebp+0x120u)));
    /* 0050dd0b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050dd0d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0050dd0f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050dd11: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050dd13: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050dd15: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0050dd19: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050dd1b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0050dd1f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0050dd23: lea ecx, [ebp + 0x74] */ r_ecx = (u32)(r_ebp+0x74u);
    /* 0050dd26: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x50dd2bu); f_0082ebac();
    /* 0050dd2b: jmp 0x50dd3b */ goto L_0050dd3b;
L_0050dd2d:; BB(0x0050dd2d);
    /* 0050dd2d: lea ecx, [ebp + 0x74] */ r_ecx = (u32)(r_ebp+0x74u);
    /* 0050dd30: lea edx, [ebp + 0x118] */ r_edx = (u32)(r_ebp+0x118u);
    /* 0050dd36: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x50dd3bu); f_0082ebac();
L_0050dd3b:; BB(0x0050dd3b);
    /* 0050dd3b: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0050dd3e: movzx eax, byte ptr [ecx + 0x88] */ r_eax = (u32)R8((u32)(r_ecx+0x88u));
    /* 0050dd45: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050dd47: je 0x50dd7d */ if (fZ) goto L_0050dd7d;
L_0050dd49:; BB(0x0050dd49);
    /* 0050dd49: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0050dd4c: fcomp dword ptr [ebp + 0x78] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x78u))); FPOP();
    /* 0050dd4f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050dd51: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050dd52: ja 0x50dd59 */ if ((!fC&&!fZ)) goto L_0050dd59;
L_0050dd54:; BB(0x0050dd54);
    /* 0050dd54: fld dword ptr [ebp + 0x44] */ FPUSH(R_F32((u32)(r_ebp+0x44u)));
    /* 0050dd57: jmp 0x50dd80 */ goto L_0050dd80;
L_0050dd59:; BB(0x0050dd59);
    /* 0050dd59: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50dd5eu); f_008587a5();
    /* 0050dd5e: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0050dd61: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0050dd65: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 0050dd69: fdiv dword ptr [0x920440] */ ST(0) = ST(0) / R_F32((u32)(0x920440u));
    /* 0050dd6f: fmul dword ptr [ecx + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x3cu));
    /* 0050dd72: fadd dword ptr [ecx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x34u));
    /* 0050dd75: fmul dword ptr [ecx + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x60u));
    /* 0050dd78: fst dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0));
    /* 0050dd7b: jmp 0x50dd80 */ goto L_0050dd80;
L_0050dd7d:; BB(0x0050dd7d);
    /* 0050dd7d: fld dword ptr [ebp + 0x44] */ FPUSH(R_F32((u32)(r_ebp+0x44u)));
L_0050dd80:; BB(0x0050dd80);
    /* 0050dd80: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 0050dd83: fmul dword ptr [ecx + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x50u));
    /* 0050dd86: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 0050dd89: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 0050dd8c: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 0050dd8f: movzx esi, word ptr [ebp + 0x26] */ r_esi = (u32)R16((u32)(r_ebp+0x26u));
    /* 0050dd93: fld dword ptr [ebp + 0x60] */ FPUSH(R_F32((u32)(r_ebp+0x60u)));
    /* 0050dd96: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050dd98: fst dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0));
    /* 0050dd9b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050dd9d: fmul dword ptr [ecx + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x50u));
    /* 0050dda0: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 0050dda3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050dda5: fadd dword ptr [ecx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x54u));
    /* 0050dda8: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ddae: fst dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0));
    /* 0050ddb1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050ddb3: fmul dword ptr [ecx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x2cu));
    /* 0050ddb6: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 0050ddb9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050ddbb: fmul dword ptr [ecx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x2cu));
    /* 0050ddbe: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 0050ddc1: je 0x50ddd5 */ if (fZ) goto L_0050ddd5;
L_0050ddc3:; BB(0x0050ddc3);
    /* 0050ddc3: fld dword ptr [ebp + 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xb4u)));
    /* 0050ddc9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050ddcb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050ddcd: fadd dword ptr [ebp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x5cu));
    /* 0050ddd0: fst dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0));
    /* 0050ddd3: jmp 0x50dddf */ goto L_0050dddf;
L_0050ddd5:; BB(0x0050ddd5);
    /* 0050ddd5: fld dword ptr [ebp + 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0x5cu)));
    /* 0050ddd8: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0050ddda: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050dddc: fst dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0));
L_0050dddf:; BB(0x0050dddf);
    /* 0050dddf: fcom dword ptr [ecx + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x58u))); 
    /* 0050dde2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050dde4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050dde5: fld dword ptr [0x92043c] */ FPUSH(R_F32((u32)(0x92043cu)));
    /* 0050ddeb: fld dword ptr [0x92043c] */ FPUSH(R_F32((u32)(0x92043cu)));
    /* 0050ddf1: fld dword ptr [0x92043c] */ FPUSH(R_F32((u32)(0x92043cu)));
    /* 0050ddf7: jae 0x50de02 */ if (!fC) goto L_0050de02;
L_0050ddf9:; BB(0x0050ddf9);
    /* 0050ddf9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050ddfb: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0050ddfd: fmul dword ptr [ebp + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x64u));
    /* 0050de00: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0050de02:; BB(0x0050de02);
    /* 0050de02: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0050de04: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0050de06: fcom dword ptr [ecx + 0x5c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x5cu))); 
    /* 0050de09: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050de0b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050de0c: jae 0x50de17 */ if (!fC) goto L_0050de17;
L_0050de0e:; BB(0x0050de0e);
    /* 0050de0e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050de10: fld dword ptr [ebp + 0x68] */ FPUSH(R_F32((u32)(r_ebp+0x68u)));
    /* 0050de13: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0050de15: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0050de17:; BB(0x0050de17);
    /* 0050de17: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050de19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050de1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050de1d: movzx edx, word ptr [ebp + 0x24] */ r_edx = (u32)R16((u32)(r_ebp+0x24u));
    /* 0050de21: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050de22: mov eax, edx */ r_eax = r_edx;
    /* 0050de24: ja 0x50de28 */ if ((!fC&&!fZ)) goto L_0050de28;
L_0050de26:; BB(0x0050de26);
    /* 0050de26: fst st(1) */ ST(1) = ST(0);
L_0050de28:; BB(0x0050de28);
    /* 0050de28: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050de2a: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050de2f: je 0x50de3c */ if (fZ) goto L_0050de3c;
L_0050de31:; BB(0x0050de31);
    /* 0050de31: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050de37: je 0x50de3c */ if (fZ) goto L_0050de3c;
L_0050de39:; BB(0x0050de39);
    /* 0050de39: fmul dword ptr [ebp + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x4cu));
L_0050de3c:; BB(0x0050de3c);
    /* 0050de3c: movzx ebx, word ptr [ebp + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050de40: mov edi, dword ptr [ebx*4 + 0xaaee20] */ r_edi = R32((u32)(r_ebx*4+0xaaee20u));
    /* 0050de47: mov edi, dword ptr [edi + 0x28] */ r_edi = R32((u32)(r_edi+0x28u));
    /* 0050de4a: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 0050de4c: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050de52: je 0x50e027 */ if (fZ) goto L_0050e027;
L_0050de58:; BB(0x0050de58);
    /* 0050de58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050de5a: je 0x50df86 */ if (fZ) goto L_0050df86;
L_0050de60:; BB(0x0050de60);
    /* 0050de60: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050de66: je 0x50def0 */ if (fZ) goto L_0050def0;
L_0050de6c:; BB(0x0050de6c);
    /* 0050de6c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0050de6e: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050de74: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 0050de77: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050de79: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050de7b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050de7c: jae 0x50de88 */ if (!fC) goto L_0050de88;
L_0050de7e:; BB(0x0050de7e);
    /* 0050de7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050de80: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050de86: jmp 0x50de97 */ goto L_0050de97;
L_0050de88:; BB(0x0050de88);
    /* 0050de88: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050de8a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050de8c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050de8d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050de8f: jb 0x50de93 */ if (fC) goto L_0050de93;
L_0050de91:; BB(0x0050de91);
    /* 0050de91: fst st(2) */ ST(2) = ST(0);
L_0050de93:; BB(0x0050de93);
    /* 0050de93: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050de95: fmul st(3) */ ST(0) = ST(0) * ST(3);
L_0050de97:; BB(0x0050de97);
    /* 0050de97: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 0050de9a: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050de9c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050de9e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050de9f: jae 0x50deab */ if (!fC) goto L_0050deab;
L_0050dea1:; BB(0x0050dea1);
    /* 0050dea1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050dea3: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050dea9: jmp 0x50deba */ goto L_0050deba;
L_0050deab:; BB(0x0050deab);
    /* 0050deab: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050dead: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050deaf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050deb0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050deb2: jb 0x50deb6 */ if (fC) goto L_0050deb6;
L_0050deb4:; BB(0x0050deb4);
    /* 0050deb4: fst st(3) */ ST(3) = ST(0);
L_0050deb6:; BB(0x0050deb6);
    /* 0050deb6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050deb8: fmul st(4) */ ST(0) = ST(0) * ST(4);
L_0050deba:; BB(0x0050deba);
    /* 0050deba: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 0050debd: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050debf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050dec1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050dec2: jae 0x50ded4 */ if (!fC) goto L_0050ded4;
L_0050dec4:; BB(0x0050dec4);
    /* 0050dec4: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 0050dec6: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0050dec8: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0050deca: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050ded0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050ded2: jmp 0x50dee5 */ goto L_0050dee5;
L_0050ded4:; BB(0x0050ded4);
    /* 0050ded4: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0050ded6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050ded8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050ded9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050dedb: jb 0x50dedf */ if (fC) goto L_0050dedf;
L_0050dedd:; BB(0x0050dedd);
    /* 0050dedd: fst st(4) */ ST(4) = ST(0);
L_0050dedf:; BB(0x0050dedf);
    /* 0050dedf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050dee1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050dee3: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
L_0050dee5:; BB(0x0050dee5);
    /* 0050dee5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050dee7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050dee9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050deeb: jmp 0x50e01a */ goto L_0050e01a;
L_0050def0:; BB(0x0050def0);
    /* 0050def0: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0050def2: fmul dword ptr [ecx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x6cu));
    /* 0050def5: fadd dword ptr [ebp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x50u));
    /* 0050def8: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050defe: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050df00: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050df02: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050df03: jbe 0x50df13 */ if ((fC||fZ)) goto L_0050df13;
L_0050df05:; BB(0x0050df05);
    /* 0050df05: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050df07: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050df0d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050df0f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050df11: jmp 0x50df24 */ goto L_0050df24;
L_0050df13:; BB(0x0050df13);
    /* 0050df13: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050df15: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050df17: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050df19: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050df1a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050df1c: jb 0x50df20 */ if (fC) goto L_0050df20;
L_0050df1e:; BB(0x0050df1e);
    /* 0050df1e: fst st(3) */ ST(3) = ST(0);
L_0050df20:; BB(0x0050df20);
    /* 0050df20: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050df22: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
L_0050df24:; BB(0x0050df24);
    /* 0050df24: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0050df26: fmul dword ptr [ecx + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x70u));
    /* 0050df29: fadd dword ptr [ebp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x54u));
    /* 0050df2c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050df2e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050df30: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050df31: jae 0x50df41 */ if (!fC) goto L_0050df41;
L_0050df33:; BB(0x0050df33);
    /* 0050df33: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050df35: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050df3b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050df3d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050df3f: jmp 0x50df50 */ goto L_0050df50;
L_0050df41:; BB(0x0050df41);
    /* 0050df41: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050df43: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050df45: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050df46: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050df48: jb 0x50df4c */ if (fC) goto L_0050df4c;
L_0050df4a:; BB(0x0050df4a);
    /* 0050df4a: fst st(3) */ ST(3) = ST(0);
L_0050df4c:; BB(0x0050df4c);
    /* 0050df4c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050df4e: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
L_0050df50:; BB(0x0050df50);
    /* 0050df50: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0050df52: fmul dword ptr [ecx + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x74u));
    /* 0050df55: fadd dword ptr [ebp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x58u));
    /* 0050df58: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050df5a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050df5c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050df5d: jae 0x50df72 */ if (!fC) goto L_0050df72;
L_0050df5f:; BB(0x0050df5f);
    /* 0050df5f: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 0050df61: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0050df63: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0050df65: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050df6b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050df6d: jmp 0x50e01a */ goto L_0050e01a;
L_0050df72:; BB(0x0050df72);
    /* 0050df72: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050df74: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050df76: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050df77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050df79: jb 0x50df7d */ if (fC) goto L_0050df7d;
L_0050df7b:; BB(0x0050df7b);
    /* 0050df7b: fst st(1) */ ST(1) = ST(0);
L_0050df7d:; BB(0x0050df7d);
    /* 0050df7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050df7f: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0050df81: jmp 0x50e01a */ goto L_0050e01a;
L_0050df86:; BB(0x0050df86);
    /* 0050df86: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0050df88: fmul dword ptr [ecx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x6cu));
    /* 0050df8b: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 0050df8e: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050df94: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050df96: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050df98: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050df99: jbe 0x50dfa9 */ if ((fC||fZ)) goto L_0050dfa9;
L_0050df9b:; BB(0x0050df9b);
    /* 0050df9b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050df9d: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050dfa3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050dfa5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050dfa7: jmp 0x50dfba */ goto L_0050dfba;
L_0050dfa9:; BB(0x0050dfa9);
    /* 0050dfa9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050dfab: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050dfad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050dfaf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050dfb0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050dfb2: jb 0x50dfb6 */ if (fC) goto L_0050dfb6;
L_0050dfb4:; BB(0x0050dfb4);
    /* 0050dfb4: fst st(3) */ ST(3) = ST(0);
L_0050dfb6:; BB(0x0050dfb6);
    /* 0050dfb6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050dfb8: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
L_0050dfba:; BB(0x0050dfba);
    /* 0050dfba: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0050dfbc: fmul dword ptr [ecx + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x70u));
    /* 0050dfbf: fadd dword ptr [ecx + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x80u));
    /* 0050dfc5: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050dfc7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050dfc9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050dfca: jae 0x50dfda */ if (!fC) goto L_0050dfda;
L_0050dfcc:; BB(0x0050dfcc);
    /* 0050dfcc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050dfce: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050dfd4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050dfd6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050dfd8: jmp 0x50dfe9 */ goto L_0050dfe9;
L_0050dfda:; BB(0x0050dfda);
    /* 0050dfda: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050dfdc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050dfde: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050dfdf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050dfe1: jb 0x50dfe5 */ if (fC) goto L_0050dfe5;
L_0050dfe3:; BB(0x0050dfe3);
    /* 0050dfe3: fst st(3) */ ST(3) = ST(0);
L_0050dfe5:; BB(0x0050dfe5);
    /* 0050dfe5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050dfe7: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
L_0050dfe9:; BB(0x0050dfe9);
    /* 0050dfe9: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0050dfeb: fmul dword ptr [ecx + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x74u));
    /* 0050dfee: fadd dword ptr [ecx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x84u));
    /* 0050dff4: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050dff6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050dff8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050dff9: jae 0x50e00b */ if (!fC) goto L_0050e00b;
L_0050dffb:; BB(0x0050dffb);
    /* 0050dffb: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 0050dffd: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0050dfff: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0050e001: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e007: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050e009: jmp 0x50e01a */ goto L_0050e01a;
L_0050e00b:; BB(0x0050e00b);
    /* 0050e00b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050e00d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e00f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e010: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e012: jb 0x50e016 */ if (fC) goto L_0050e016;
L_0050e014:; BB(0x0050e014);
    /* 0050e014: fst st(1) */ ST(1) = ST(0);
L_0050e016:; BB(0x0050e016);
    /* 0050e016: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e018: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
L_0050e01a:; BB(0x0050e01a);
    /* 0050e01a: fld dword ptr [0x92043c] */ FPUSH(R_F32((u32)(0x92043cu)));
    /* 0050e020: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050e022: jmp 0x50e1b9 */ goto L_0050e1b9;
L_0050e027:; BB(0x0050e027);
    /* 0050e027: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e029: je 0x50e135 */ if (fZ) goto L_0050e135;
L_0050e02f:; BB(0x0050e02f);
    /* 0050e02f: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e035: je 0x50e0af */ if (fZ) goto L_0050e0af;
L_0050e037:; BB(0x0050e037);
    /* 0050e037: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0050e039: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e03f: fld dword ptr [ebp + 0x50] */ FPUSH(R_F32((u32)(r_ebp+0x50u)));
    /* 0050e042: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050e044: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e046: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e047: jae 0x50e055 */ if (!fC) goto L_0050e055;
L_0050e049:; BB(0x0050e049);
    /* 0050e049: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e04b: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e051: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050e053: jmp 0x50e060 */ goto L_0050e060;
L_0050e055:; BB(0x0050e055);
    /* 0050e055: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050e057: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e059: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e05a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050e05c: jb 0x50e060 */ if (fC) goto L_0050e060;
L_0050e05e:; BB(0x0050e05e);
    /* 0050e05e: fst st(2) */ ST(2) = ST(0);
L_0050e060:; BB(0x0050e060);
    /* 0050e060: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 0050e063: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050e065: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e067: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e068: jae 0x50e076 */ if (!fC) goto L_0050e076;
L_0050e06a:; BB(0x0050e06a);
    /* 0050e06a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e06c: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e072: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e074: jmp 0x50e081 */ goto L_0050e081;
L_0050e076:; BB(0x0050e076);
    /* 0050e076: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050e078: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e07a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e07b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e07d: jb 0x50e081 */ if (fC) goto L_0050e081;
L_0050e07f:; BB(0x0050e07f);
    /* 0050e07f: fst st(1) */ ST(1) = ST(0);
L_0050e081:; BB(0x0050e081);
    /* 0050e081: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 0050e084: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050e086: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e088: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e089: jae 0x50e097 */ if (!fC) goto L_0050e097;
L_0050e08b:; BB(0x0050e08b);
    /* 0050e08b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e08d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e08f: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e095: jmp 0x50e0a4 */ goto L_0050e0a4;
L_0050e097:; BB(0x0050e097);
    /* 0050e097: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050e099: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e09b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e09c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e09e: jb 0x50e0a2 */ if (fC) goto L_0050e0a2;
L_0050e0a0:; BB(0x0050e0a0);
    /* 0050e0a0: fst st(1) */ ST(1) = ST(0);
L_0050e0a2:; BB(0x0050e0a2);
    /* 0050e0a2: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0050e0a4:; BB(0x0050e0a4);
    /* 0050e0a4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050e0a6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050e0a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e0aa: jmp 0x50e1b9 */ goto L_0050e1b9;
L_0050e0af:; BB(0x0050e0af);
    /* 0050e0af: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0050e0b1: fmul dword ptr [ecx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x6cu));
    /* 0050e0b4: fadd dword ptr [ebp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x50u));
    /* 0050e0b7: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e0bd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050e0bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e0c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e0c2: jbe 0x50e0d0 */ if ((fC||fZ)) goto L_0050e0d0;
L_0050e0c4:; BB(0x0050e0c4);
    /* 0050e0c4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050e0c6: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e0cc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050e0ce: jmp 0x50e0dd */ goto L_0050e0dd;
L_0050e0d0:; BB(0x0050e0d0);
    /* 0050e0d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e0d2: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050e0d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e0d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e0d7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050e0d9: jb 0x50e0dd */ if (fC) goto L_0050e0dd;
L_0050e0db:; BB(0x0050e0db);
    /* 0050e0db: fst st(3) */ ST(3) = ST(0);
L_0050e0dd:; BB(0x0050e0dd);
    /* 0050e0dd: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0050e0df: fmul dword ptr [ecx + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x70u));
    /* 0050e0e2: fadd dword ptr [ebp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x54u));
    /* 0050e0e5: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050e0e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e0e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e0ea: jae 0x50e0f8 */ if (!fC) goto L_0050e0f8;
L_0050e0ec:; BB(0x0050e0ec);
    /* 0050e0ec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e0ee: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e0f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e0f6: jmp 0x50e103 */ goto L_0050e103;
L_0050e0f8:; BB(0x0050e0f8);
    /* 0050e0f8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050e0fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e0fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e0fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e0ff: jb 0x50e103 */ if (fC) goto L_0050e103;
L_0050e101:; BB(0x0050e101);
    /* 0050e101: fst st(1) */ ST(1) = ST(0);
L_0050e103:; BB(0x0050e103);
    /* 0050e103: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0050e105: fmul dword ptr [ecx + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x74u));
    /* 0050e108: fadd dword ptr [ebp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x58u));
    /* 0050e10b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050e10d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e10f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e110: jae 0x50e123 */ if (!fC) goto L_0050e123;
L_0050e112:; BB(0x0050e112);
    /* 0050e112: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e114: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0050e116: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e11c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050e11e: jmp 0x50e1b9 */ goto L_0050e1b9;
L_0050e123:; BB(0x0050e123);
    /* 0050e123: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 0050e125: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e127: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e128: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0050e12a: jb 0x50e12e */ if (fC) goto L_0050e12e;
L_0050e12c:; BB(0x0050e12c);
    /* 0050e12c: fst st(5) */ ST(5) = ST(0);
L_0050e12e:; BB(0x0050e12e);
    /* 0050e12e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e130: jmp 0x50e1b9 */ goto L_0050e1b9;
L_0050e135:; BB(0x0050e135);
    /* 0050e135: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0050e137: fmul dword ptr [ecx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x6cu));
    /* 0050e13a: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 0050e13d: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e143: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050e145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e148: jbe 0x50e156 */ if ((fC||fZ)) goto L_0050e156;
L_0050e14a:; BB(0x0050e14a);
    /* 0050e14a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050e14c: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e152: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050e154: jmp 0x50e163 */ goto L_0050e163;
L_0050e156:; BB(0x0050e156);
    /* 0050e156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e158: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050e15a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e15c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e15d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050e15f: jb 0x50e163 */ if (fC) goto L_0050e163;
L_0050e161:; BB(0x0050e161);
    /* 0050e161: fst st(3) */ ST(3) = ST(0);
L_0050e163:; BB(0x0050e163);
    /* 0050e163: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0050e165: fmul dword ptr [ecx + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x70u));
    /* 0050e168: fadd dword ptr [ecx + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x80u));
    /* 0050e16e: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050e170: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e172: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e173: jae 0x50e181 */ if (!fC) goto L_0050e181;
L_0050e175:; BB(0x0050e175);
    /* 0050e175: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e177: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e17d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e17f: jmp 0x50e18c */ goto L_0050e18c;
L_0050e181:; BB(0x0050e181);
    /* 0050e181: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050e183: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e185: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e186: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e188: jb 0x50e18c */ if (fC) goto L_0050e18c;
L_0050e18a:; BB(0x0050e18a);
    /* 0050e18a: fst st(1) */ ST(1) = ST(0);
L_0050e18c:; BB(0x0050e18c);
    /* 0050e18c: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0050e18e: fmul dword ptr [ecx + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x74u));
    /* 0050e191: fadd dword ptr [ecx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x84u));
    /* 0050e197: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050e199: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e19b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e19c: jae 0x50e1ac */ if (!fC) goto L_0050e1ac;
L_0050e19e:; BB(0x0050e19e);
    /* 0050e19e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e1a0: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0050e1a2: fld dword ptr [0x920438] */ FPUSH(R_F32((u32)(0x920438u)));
    /* 0050e1a8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050e1aa: jmp 0x50e1b9 */ goto L_0050e1b9;
L_0050e1ac:; BB(0x0050e1ac);
    /* 0050e1ac: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 0050e1ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e1b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e1b1: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0050e1b3: jb 0x50e1b7 */ if (fC) goto L_0050e1b7;
L_0050e1b5:; BB(0x0050e1b5);
    /* 0050e1b5: fst st(5) */ ST(5) = ST(0);
L_0050e1b7:; BB(0x0050e1b7);
    /* 0050e1b7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0050e1b9:; BB(0x0050e1b9);
    /* 0050e1b9: fld dword ptr [0x920434] */ FPUSH(R_F32((u32)(0x920434u)));
    /* 0050e1bf: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0050e1c1: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0050e1c3: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0050e1c5: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0050e1c7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050e1c9: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 0050e1cd: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 0050e1d2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e1d7: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0050e1db: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0050e1df: fistp qword ptr [esp + 0x3c] */ W64((u32)(r_esp+0x3cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0050e1e3: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050e1e7: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 0050e1eb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050e1ed: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 0050e1f1: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 0050e1f6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e1fb: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0050e1ff: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0050e203: fistp qword ptr [esp + 0x3c] */ W64((u32)(r_esp+0x3cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0050e207: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050e20b: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0050e20f: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 0050e213: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 0050e218: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e21d: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0050e221: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0050e225: fistp qword ptr [esp + 0x3c] */ W64((u32)(r_esp+0x3cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0050e229: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050e22d: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0050e231: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0050e234: shl edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0050e237: and edi, 0xff0000 */ {  u32 a = r_edi; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0050e23d: or esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0050e23f: and esi, 0xffff00ff */ {  u32 a = r_esi; u32 b = 0xffff00ffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0050e245: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0050e248: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050e24d: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0050e24f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e251: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 0050e255: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 0050e25a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e25f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0050e263: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0050e267: fistp qword ptr [esp + 0x3c] */ W64((u32)(r_esp+0x3cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0050e26b: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050e26f: movzx eax, byte ptr [esp + 0x3c] */ r_eax = (u32)R8((u32)(r_esp+0x3cu));
    /* 0050e274: and esi, 0xffffff00 */ {  u32 a = r_esi; u32 b = 0xffffff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0050e27a: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0050e27c: mov dword ptr [ebp + 0x94], esi */ W32((u32)(r_ebp+0x94u), r_esi);
    /* 0050e282: fcom dword ptr [ecx + 0x54] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x54u))); 
    /* 0050e285: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e287: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e288: je 0x50e537 */ if (fZ) goto L_0050e537;
L_0050e28e:; BB(0x0050e28e);
    /* 0050e28e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e290: movzx eax, byte ptr [ecx + 0x88] */ r_eax = (u32)R8((u32)(r_ecx+0x88u));
    /* 0050e297: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050e299: je 0x50e2a4 */ if (fZ) goto L_0050e2a4;
L_0050e29b:; BB(0x0050e29b);
    /* 0050e29b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050e29d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e29f: jmp 0x50e37a */ goto L_0050e37a;
L_0050e2a4:; BB(0x0050e2a4);
    /* 0050e2a4: fld dword ptr [ecx + 0x64] */ FPUSH(R_F32((u32)(r_ecx+0x64u)));
    /* 0050e2a7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050e2a9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050e2ab: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 0050e2af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2b0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0050e2b3: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x50e2b8u); f_0082e900();
    /* 0050e2b8: fcomp dword ptr [0x920428] */ fx_compare(ST(0), R_F32((u32)(0x920428u))); FPOP();
    /* 0050e2be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e2c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e2c1: jbe 0x50e2cd */ if ((fC||fZ)) goto L_0050e2cd;
L_0050e2c3:; BB(0x0050e2c3);
    /* 0050e2c3: fld dword ptr [0x920428] */ FPUSH(R_F32((u32)(0x920428u)));
    /* 0050e2c9: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
L_0050e2cd:; BB(0x0050e2cd);
    /* 0050e2cd: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 0050e2d0: fcomp dword ptr [0x920438] */ fx_compare(ST(0), R_F32((u32)(0x920438u))); FPOP();
    /* 0050e2d6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e2d8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e2d9: jae 0x50e328 */ if (!fC) goto L_0050e328;
L_0050e2db:; BB(0x0050e2db);
    /* 0050e2db: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0050e2df: fmul dword ptr [0x920430] */ ST(0) = ST(0) * R_F32((u32)(0x920430u));
    /* 0050e2e5: fdiv dword ptr [0x92042c] */ ST(0) = ST(0) / R_F32((u32)(0x92042cu));
    /* 0050e2eb: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0050e2ee: movzx ebx, word ptr [ebp + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050e2f2: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 0050e2f6: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 0050e2fb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e300: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0050e304: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0050e308: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0050e30c: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050e310: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0050e314: add word ptr [ebp + 0x9a], ax */ { u32 ad = (u32)(r_ebp+0x9au);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0050e31b: movzx eax, byte ptr [edx + 0x88] */ r_eax = (u32)R8((u32)(r_edx+0x88u));
    /* 0050e322: movzx edx, word ptr [ebp + 0x24] */ r_edx = (u32)R16((u32)(r_ebp+0x24u));
    /* 0050e326: jmp 0x50e37a */ goto L_0050e37a;
L_0050e328:; BB(0x0050e328);
    /* 0050e328: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0050e32c: fmul dword ptr [0x920430] */ ST(0) = ST(0) * R_F32((u32)(0x920430u));
    /* 0050e332: fdiv dword ptr [0x92042c] */ ST(0) = ST(0) / R_F32((u32)(0x92042cu));
    /* 0050e338: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0050e33b: movzx ebx, word ptr [ebp + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050e33f: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 0050e343: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 0050e348: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e34d: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0050e351: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0050e355: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0050e359: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050e35d: movzx eax, word ptr [ebp + 0x9a] */ r_eax = (u32)R16((u32)(r_ebp+0x9au));
    /* 0050e364: sub eax, dword ptr [esp + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050e368: mov word ptr [ebp + 0x9a], ax */ W16((u32)(r_ebp+0x9au), (u16)r_eax);
    /* 0050e36f: movzx eax, byte ptr [edx + 0x88] */ r_eax = (u32)R8((u32)(r_edx+0x88u));
    /* 0050e376: movzx edx, word ptr [ebp + 0x24] */ r_edx = (u32)R16((u32)(r_ebp+0x24u));
L_0050e37a:; BB(0x0050e37a);
    /* 0050e37a: mov ebx, dword ptr [ebx*4 + 0xaaee20] */ r_ebx = R32((u32)(r_ebx*4+0xaaee20u));
    /* 0050e381: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 0050e384: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 0050e387: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050e389: je 0x50e3c3 */ if (fZ) goto L_0050e3c3;
L_0050e38b:; BB(0x0050e38b);
    /* 0050e38b: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050e38e: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0050e392: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0050e396: fmul dword ptr [ebp + 0x5c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x5cu));
    /* 0050e399: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 0050e39d: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 0050e3a2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e3a7: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0050e3ab: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0050e3af: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0050e3b3: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050e3b7: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0050e3bb: mov byte ptr [ebp + 0x98], al */ W8((u32)(r_ebp+0x98u), (u8)r_eax);
    /* 0050e3c1: jmp 0x50e3e3 */ goto L_0050e3e3;
L_0050e3c3:; BB(0x0050e3c3);
    /* 0050e3c3: movzx eax, byte ptr [ebp + 0x98] */ r_eax = (u32)R8((u32)(r_ebp+0x98u));
    /* 0050e3ca: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050e3cd: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0050e3d0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050e3d2: jg 0x50e3dd */ if ((!fZ&&fS==fO)) goto L_0050e3dd;
L_0050e3d4:; BB(0x0050e3d4);
    /* 0050e3d4: mov byte ptr [ebp + 0x98], 0 */ W8((u32)(r_ebp+0x98u), 0x0u);
    /* 0050e3db: jmp 0x50e3e3 */ goto L_0050e3e3;
L_0050e3dd:; BB(0x0050e3dd);
    /* 0050e3dd: mov byte ptr [ebp + 0x98], al */ W8((u32)(r_ebp+0x98u), (u8)r_eax);
L_0050e3e3:; BB(0x0050e3e3);
    /* 0050e3e3: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050e3e6: jne 0x50e4a3 */ if (!fZ) goto L_0050e4a3;
L_0050e3ec:; BB(0x0050e3ec);
    /* 0050e3ec: fld dword ptr [ebp + 0x110] */ FPUSH(R_F32((u32)(r_ebp+0x110u)));
    /* 0050e3f2: fadd dword ptr [ebp + 0x114] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x114u));
    /* 0050e3f8: mov eax, dword ptr [ebp + 0x10c] */ r_eax = R32((u32)(r_ebp+0x10cu));
    /* 0050e3fe: fst dword ptr [ebp + 0x110] */ W_F32((u32)(r_ebp+0x110u), ST(0));
    /* 0050e404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e406: je 0x50e433 */ if (fZ) goto L_0050e433;
L_0050e408:; BB(0x0050e408);
    /* 0050e408: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050e40b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050e40e: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0050e412: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0050e416: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0050e419: fadd dword ptr [edx*4 + 0x9203b0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9203b0u));
    /* 0050e420: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050e422: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e424: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e425: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e427: jb 0x50e42b */ if (fC) goto L_0050e42b;
L_0050e429:; BB(0x0050e429);
    /* 0050e429: fst st(1) */ ST(1) = ST(0);
L_0050e42b:; BB(0x0050e42b);
    /* 0050e42b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e42d: fstp dword ptr [ebp + 0x110] */ W_F32((u32)(r_ebp+0x110u), ST(0)); FPOP();
L_0050e433:; BB(0x0050e433);
    /* 0050e433: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e435: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0050e437: call 0x50e618 */ r_esp -= 4; W32(r_esp, 0x50e43cu); f_0050e618();
    /* 0050e43c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050e43f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050e440: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050e441: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050e442: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e443: ret  */ FN_RET(0x0050dbb8); r_esp += 4; return;
L_0050e444:; BB(0x0050e444);
    /* 0050e444: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0050e449: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x50e44eu); f_0082d990();
    /* 0050e44e: lea eax, [ebp + 0xc0] */ r_eax = (u32)(r_ebp+0xc0u);
    /* 0050e454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e455: call 0x83ba24 */ r_esp -= 4; W32(r_esp, 0x50e45au); f_0083ba24();
    /* 0050e45a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050e45b: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0050e461: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e463: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x50e468u); f_00830c04();
    /* 0050e468: mov edx, dword ptr [ebp + 0x9c] */ r_edx = R32((u32)(r_ebp+0x9cu));
    /* 0050e46e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e470: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x50e475u); f_0082e9e4();
    /* 0050e475: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 0050e47b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e47d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50e482u); f_0082d8bc();
    /* 0050e482: lea edx, [ebp + 0x40] */ r_edx = (u32)(r_ebp+0x40u);
    /* 0050e485: lea eax, [ebp + 0x118] */ r_eax = (u32)(r_ebp+0x118u);
    /* 0050e48b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e48c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e48d: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x50e492u); f_0083a610();
    /* 0050e492: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e495: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x50e49au); f_0082da80();
    /* 0050e49a: movzx esi, word ptr [ebp + 0x26] */ r_esi = (u32)R16((u32)(r_ebp+0x26u));
    /* 0050e49e: jmp 0x50dce5 */ goto L_0050dce5;
L_0050e4a3:; BB(0x0050e4a3);
    /* 0050e4a3: movzx eax, word ptr [ebp + 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0x28u));
    /* 0050e4a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e4a8: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x50e4adu); f_007b4d18();
    /* 0050e4ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050e4ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e4b0: je 0x50e600 */ if (fZ) goto L_0050e600;
L_0050e4b6:; BB(0x0050e4b6);
    /* 0050e4b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050e4b8: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e4ba: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x50e4bdu); call_ind(t); }
    /* 0050e4bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e4bf: je 0x50e3ec */ if (fZ) goto L_0050e3ec;
L_0050e4c5:; BB(0x0050e4c5);
    /* 0050e4c5: movzx edx, word ptr [ebp + 0x24] */ r_edx = (u32)R16((u32)(r_ebp+0x24u));
    /* 0050e4c9: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050e4cc: jne 0x50e4f6 */ if (!fZ) goto L_0050e4f6;
L_0050e4ce:; BB(0x0050e4ce);
    /* 0050e4ce: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0050e4d0: fsub dword ptr [ebp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x34u));
    /* 0050e4d3: fstp dword ptr [ebp + 0x80] */ W_F32((u32)(r_ebp+0x80u), ST(0)); FPOP();
    /* 0050e4d9: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0050e4dc: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 0050e4df: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 0050e4e5: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0050e4e8: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 0050e4eb: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 0050e4f1: jmp 0x50e3ec */ goto L_0050e3ec;
L_0050e4f6:; BB(0x0050e4f6);
    /* 0050e4f6: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0050e4fa: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e4ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e501: call 0x6ea73c */ r_esp -= 4; W32(r_esp, 0x50e506u); f_006ea73c();
    /* 0050e506: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e509: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0050e50d: fsub dword ptr [ebp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x34u));
    /* 0050e510: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0050e514: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 0050e517: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0050e51b: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 0050e51e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050e520: fstp dword ptr [ebp + 0x80] */ W_F32((u32)(r_ebp+0x80u), ST(0)); FPOP();
    /* 0050e526: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 0050e52c: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 0050e532: jmp 0x50e3ec */ goto L_0050e3ec;
L_0050e537:; BB(0x0050e537);
    /* 0050e537: fcom dword ptr [ecx + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x34u))); 
    /* 0050e53a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e53c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e53d: jne 0x50e28e */ if (!fZ) goto L_0050e28e;
L_0050e543:; BB(0x0050e543);
    /* 0050e543: fcom dword ptr [ecx + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x30u))); 
    /* 0050e546: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e548: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e549: jne 0x50e28e */ if (!fZ) goto L_0050e28e;
L_0050e54f:; BB(0x0050e54f);
    /* 0050e54f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e551: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050e553: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e555: fld dword ptr [ecx + 0x60] */ FPUSH(R_F32((u32)(r_ecx+0x60u)));
    /* 0050e558: fmul dword ptr [0x920430] */ ST(0) = ST(0) * R_F32((u32)(0x920430u));
    /* 0050e55e: fdiv dword ptr [0x92042c] */ ST(0) = ST(0) / R_F32((u32)(0x92042cu));
    /* 0050e564: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 0050e568: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 0050e56d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e572: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0050e576: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0050e57a: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0050e57e: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050e582: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0050e586: add word ptr [ebp + 0x9a], ax */ { u32 ad = (u32)(r_ebp+0x9au);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0050e58d: movzx eax, byte ptr [ecx + 0x88] */ r_eax = (u32)R8((u32)(r_ecx+0x88u));
    /* 0050e594: jmp 0x50e37a */ goto L_0050e37a;
L_0050e599:; BB(0x0050e599);
    /* 0050e599: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0050e59e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x50e5a3u); f_0082d990();
    /* 0050e5a3: movzx eax, word ptr [ebp + 0x26] */ r_eax = (u32)R16((u32)(r_ebp+0x26u));
    /* 0050e5a7: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050e5a9: je 0x50e5b8 */ if (fZ) goto L_0050e5b8;
L_0050e5ab:; BB(0x0050e5ab);
    /* 0050e5ab: lea eax, [ebp + 0xc0] */ r_eax = (u32)(r_ebp+0xc0u);
    /* 0050e5b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e5b2: call 0x83ba24 */ r_esp -= 4; W32(r_esp, 0x50e5b7u); f_0083ba24();
    /* 0050e5b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0050e5b8:; BB(0x0050e5b8);
    /* 0050e5b8: mov edx, dword ptr [ebp + 0x9c] */ r_edx = R32((u32)(r_ebp+0x9cu));
    /* 0050e5be: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e5c0: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x50e5c5u); f_0082e9e4();
    /* 0050e5c5: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 0050e5cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e5cd: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50e5d2u); f_0082d8bc();
    /* 0050e5d2: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0050e5d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e5da: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x50e5dfu); f_00830c04();
    /* 0050e5df: lea edx, [ebp + 0x40] */ r_edx = (u32)(r_ebp+0x40u);
    /* 0050e5e2: lea eax, [ebp + 0x118] */ r_eax = (u32)(r_ebp+0x118u);
    /* 0050e5e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e5e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e5ea: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x50e5efu); f_0083a610();
    /* 0050e5ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e5f2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x50e5f7u); f_0082da80();
    /* 0050e5f7: movzx esi, word ptr [ebp + 0x26] */ r_esi = (u32)R16((u32)(r_ebp+0x26u));
    /* 0050e5fb: jmp 0x50dce5 */ goto L_0050dce5;
L_0050e600:; BB(0x0050e600);
    /* 0050e600: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0050e604: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e609: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0050e60d: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050e610: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050e611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050e612: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050e613: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e614: ret  */ FN_RET(0x0050dbb8); r_esp += 4; return;
}

