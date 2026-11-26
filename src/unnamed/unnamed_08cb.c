#include "protos.h"

void f_008cb083(void) /* __finite */
{
    FN_ENTER(0x008cb083);
    /* 008cb083: mov ax, word ptr [esp + 0xa] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esp+0xau))) & 0xffffu);
    /* 008cb088: and ax, 0x7ff0 */ {  u32 a = (u16)r_eax; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008cb08c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb08e: cmp ax, 0x7ff0 */ {  u32 a = (u16)r_eax; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 008cb092: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008cb095: mov eax, ecx */ r_eax = r_ecx;
    /* 008cb097: ret  */ FN_RET(0x008cb083); r_esp += 4; return;
}

void f_008cb098(void) /* __snprintf */
{
    FN_ENTER(0x008cb098);
    /* 008cb098: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008cb099: mov ebp, esp */ r_ebp = r_esp;
    /* 008cb09b: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008cb09e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008cb0a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb0a2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008cb0a5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008cb0a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb0a9: lea eax, [ebp + 0x14] */ r_eax = (u32)(r_ebp+0x14u);
    /* 008cb0ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb0ad: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb0b0: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 008cb0b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb0b4: mov dword ptr [ebp - 0x14], 0x42 */ W32((u32)(r_ebp+0xffffffecu), 0x42u);
    /* 008cb0bb: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008cb0be: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 008cb0c1: call 0x860772 */ r_esp -= 4; W32(r_esp, 0x8cb0c6u); f_00860772();
    /* 008cb0c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cb0c9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb0cb: mov edi, eax */ r_edi = r_eax;
    /* 008cb0cd: je 0x8cb0e9 */ if (fZ) goto L_008cb0e9;
L_008cb0cf:; BB(0x008cb0cf);
    /* 008cb0cf: dec dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008cb0d2: js 0x8cb0dc */ if (fS) goto L_008cb0dc;
L_008cb0d4:; BB(0x008cb0d4);
    /* 008cb0d4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008cb0d7: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 008cb0da: jmp 0x8cb0e9 */ goto L_008cb0e9;
L_008cb0dc:; BB(0x008cb0dc);
    /* 008cb0dc: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 008cb0df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb0e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008cb0e2: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x8cb0e7u); f_0085cd86();
    /* 008cb0e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb0e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008cb0e9:; BB(0x008cb0e9);
    /* 008cb0e9: mov eax, edi */ r_eax = r_edi;
    /* 008cb0eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008cb0ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008cb0ed: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008cb0ee: ret  */ FN_RET(0x008cb098); r_esp += 4; return;
}

void f_008cb0f0(void) /* _longjmp */
{
    FN_ENTER(0x008cb0f0);
    /* 008cb0f0: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008cb0f4: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 008cb0f6: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 008cb0f9: cmp esi, dword ptr fs:[0] */ {  u32 a = r_esi; u32 b = R32((u32)(TEB)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb100: je 0x8cb10b */ if (fZ) goto L_008cb10b;
L_008cb102:; BB(0x008cb102);
    /* 008cb102: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb103: call 0x8578cc */ r_esp -= 4; W32(r_esp, 0x8cb108u); f_008578cc();
    /* 008cb108: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008cb10b:; BB(0x008cb10b);
    /* 008cb10b: cmp esi, 0 */ {  u32 a = r_esi; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb10e: je 0x8cb140 */ if (fZ) goto L_008cb140;
L_008cb110:; BB(0x008cb110);
    /* 008cb110: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 008cb113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb114: call 0x8cb57f */ r_esp -= 4; W32(r_esp, 0x8cb119u); f_008cb57f();
    /* 008cb119: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008cb11b: je 0x8cb133 */ if (fZ) goto L_008cb133;
L_008cb11d:; BB(0x008cb11d);
    /* 008cb11d: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 008cb120: cmp eax, 0x56433230 */ {  u32 a = r_eax; u32 b = 0x56433230u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb125: jne 0x8cb133 */ if (!fZ) goto L_008cb133;
L_008cb127:; BB(0x008cb127);
    /* 008cb127: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 008cb12a: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008cb12c: je 0x8cb140 */ if (fZ) goto L_008cb140;
L_008cb12e:; BB(0x008cb12e);
    /* 008cb12e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cb12f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8cb131u); call_ind(t); }
    /* 008cb131: jmp 0x8cb140 */ goto L_008cb140;
L_008cb133:; BB(0x008cb133);
    /* 008cb133: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 008cb136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb137: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb138: call 0x85790e */ r_esp -= 4; W32(r_esp, 0x8cb13du); f_0085790e();
    /* 008cb13d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008cb140:; BB(0x008cb140);
    /* 008cb140: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008cb142: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 008cb145: call 0x8579a2 */ r_esp -= 4; W32(r_esp, 0x8cb14au); f_008579a2();
    /* 008cb14a: mov edx, ebx */ r_edx = r_ebx;
    /* 008cb14c: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 008cb14f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 008cb152: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 008cb155: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008cb159: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008cb15c: adc eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 008cb15f: mov esp, dword ptr [edx + 0x10] */ r_esp = R32((u32)(r_edx+0x10u));
    /* 008cb162: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cb165: jmp dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); jmp_ind(t); return; }
}

void f_008cb16c(void) /* __setjmp3 */
{
    FN_ENTER(0x008cb16c);
    /* 008cb16c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008cb170: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 008cb172: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 008cb175: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 008cb178: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
    /* 008cb17b: mov dword ptr [edx + 0x10], esp */ W32((u32)(r_edx+0x10u), r_esp);
    /* 008cb17e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008cb181: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 008cb184: mov dword ptr [edx + 0x20], 0x56433230 */ W32((u32)(r_edx+0x20u), 0x56433230u);
    /* 008cb18b: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 008cb192: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008cb198: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 008cb19b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb19e: jne 0x8cb1a9 */ if (!fZ) goto L_008cb1a9;
L_008cb1a0:; BB(0x008cb1a0);
    /* 008cb1a0: mov dword ptr [edx + 0x1c], 0xffffffff */ W32((u32)(r_edx+0x1cu), 0xffffffffu);
    /* 008cb1a7: jmp 0x8cb1e4 */ goto L_008cb1e4;
L_008cb1a9:; BB(0x008cb1a9);
    /* 008cb1a9: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008cb1ad: or ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008cb1af: je 0x8cb1bb */ if (fZ) goto L_008cb1bb;
L_008cb1b1:; BB(0x008cb1b1);
    /* 008cb1b1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008cb1b5: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 008cb1b8: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008cb1b9: jne 0x8cb1c3 */ if (!fZ) goto L_008cb1c3;
L_008cb1bb:; BB(0x008cb1bb);
    /* 008cb1bb: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 008cb1be: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 008cb1c1: jmp 0x8cb1e4 */ goto L_008cb1e4;
L_008cb1c3:; BB(0x008cb1c3);
    /* 008cb1c3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008cb1c7: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 008cb1ca: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008cb1cb: je 0x8cb1e4 */ if (fZ) goto L_008cb1e4;
L_008cb1cd:; BB(0x008cb1cd);
    /* 008cb1cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb1ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb1cf: lea esi, [esp + 0x1c] */ r_esi = (u32)(r_esp+0x1cu);
    /* 008cb1d3: lea edi, [edx + 0x28] */ r_edi = (u32)(r_edx+0x28u);
    /* 008cb1d6: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cb1d9: jbe 0x8cb1e0 */ if ((fC||fZ)) goto L_008cb1e0;
L_008cb1db:; BB(0x008cb1db);
    /* 008cb1db: mov ecx, 6 */ r_ecx = 0x6u;
L_008cb1e0:; BB(0x008cb1e0);
    /* 008cb1e0: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008cb1e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008cb1e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008cb1e4:; BB(0x008cb1e4);
    /* 008cb1e4: sub eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008cb1e6: ret  */ FN_RET(0x008cb16c); r_esp += 4; return;
}

void f_008cb1e8(void) /* __ftol */
{
    FN_ENTER(0x008cb1e8);
    /* 008cb1e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008cb1e9: mov ebp, esp */ r_ebp = r_esp;
    /* 008cb1eb: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cb1ee: wait  */ ;
    /* 008cb1ef: fnstcw word ptr [ebp - 2] */ W16((u32)(r_ebp+0xfffffffeu), fcw);
    /* 008cb1f2: wait  */ ;
    /* 008cb1f3: mov ax, word ptr [ebp - 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffeu))) & 0xffffu);
    /* 008cb1f7: or ah, 0xc */ {  u32 a = (u8)(r_eax>>8); u32 b = 0xcu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb1fa: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 008cb1fe: fldcw word ptr [ebp - 4] */ fcw = R16((u32)(r_ebp+0xfffffffcu));
    /* 008cb201: fistp qword ptr [ebp - 0xc] */ W64((u32)(r_ebp+0xfffffff4u), (u64)fx_int64(ST(0))); FPOP();
    /* 008cb204: fldcw word ptr [ebp - 2] */ fcw = R16((u32)(r_ebp+0xfffffffeu));
    /* 008cb207: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008cb20a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008cb20d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008cb20e: ret  */ FN_RET(0x008cb1e8); r_esp += 4; return;
}

void f_008cb210(void) /* __aullshr */
{
    FN_ENTER(0x008cb210);
    /* 008cb210: cmp cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008cb213: jae 0x8cb22a */ if (!fC) goto L_008cb22a;
L_008cb215:; BB(0x008cb215);
    /* 008cb215: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008cb218: jae 0x8cb220 */ if (!fC) goto L_008cb220;
L_008cb21a:; BB(0x008cb21a);
    /* 008cb21a: shrd eax, edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 b = r_edx; u32 r = a; if (c) { r = (a >> c) | (b << (32 - c)); fC = (a >> (c - 1)) & 1; r_eax = r; fZ = (r == 0); fS = r >> 31; fP = !__builtin_parity(r & 0xffu); fO = ((r ^ a) >> 31) & 1; } }
    /* 008cb21d: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008cb21f: ret  */ FN_RET(0x008cb210); r_esp += 4; return;
L_008cb220:; BB(0x008cb220);
    /* 008cb220: mov eax, edx */ r_eax = r_edx;
    /* 008cb222: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008cb224: and cl, 0x1f */ {  u32 a = (u8)r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb227: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008cb229: ret  */ FN_RET(0x008cb210); r_esp += 4; return;
L_008cb22a:; BB(0x008cb22a);
    /* 008cb22a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008cb22c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb22e: ret  */ FN_RET(0x008cb210); r_esp += 4; return;
}

void f_008cb22f(void) /* __vsnprintf */
{
    FN_ENTER(0x008cb22f);
    /* 008cb22f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008cb230: mov ebp, esp */ r_ebp = r_esp;
    /* 008cb232: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008cb235: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008cb238: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb239: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008cb23c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb23d: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb240: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008cb243: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb246: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 008cb249: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb24a: mov dword ptr [ebp - 0x14], 0x42 */ W32((u32)(r_ebp+0xffffffecu), 0x42u);
    /* 008cb251: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008cb254: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 008cb257: call 0x860772 */ r_esp -= 4; W32(r_esp, 0x8cb25cu); f_00860772();
    /* 008cb25c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cb25f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb261: mov edi, eax */ r_edi = r_eax;
    /* 008cb263: je 0x8cb27f */ if (fZ) goto L_008cb27f;
L_008cb265:; BB(0x008cb265);
    /* 008cb265: dec dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008cb268: js 0x8cb272 */ if (fS) goto L_008cb272;
L_008cb26a:; BB(0x008cb26a);
    /* 008cb26a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008cb26d: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 008cb270: jmp 0x8cb27f */ goto L_008cb27f;
L_008cb272:; BB(0x008cb272);
    /* 008cb272: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 008cb275: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb276: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008cb278: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x8cb27du); f_0085cd86();
    /* 008cb27d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb27e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008cb27f:; BB(0x008cb27f);
    /* 008cb27f: mov eax, edi */ r_eax = r_edi;
    /* 008cb281: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008cb282: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008cb283: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008cb284: ret  */ FN_RET(0x008cb22f); r_esp += 4; return;
}

void f_008cb285(void) /* __access */
{
    FN_ENTER(0x008cb285);
    /* 008cb285: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb289: call dword ptr [0x8f8150] */ { u32 t = R32((u32)(0x8f8150u)); r_esp -= 4; W32(r_esp, 0x8cb28fu); call_ind(t); }
    /* 008cb28f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb292: jne 0x8cb2a5 */ if (!fZ) goto L_008cb2a5;
L_008cb294:; BB(0x008cb294);
    /* 008cb294: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8cb29au); call_ind(t); }
    /* 008cb29a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb29b: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x8cb2a0u); f_00859de8();
    /* 008cb2a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008cb2a1:; BB(0x008cb2a1);
    /* 008cb2a1: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb2a4: ret  */ FN_RET(0x008cb285); r_esp += 4; return;
L_008cb2a5:; BB(0x008cb2a5);
    /* 008cb2a5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb2a7: je 0x8cb2c8 */ if (fZ) goto L_008cb2c8;
L_008cb2a9:; BB(0x008cb2a9);
    /* 008cb2a9: test byte ptr [esp + 8], 2 */ {  u32 a = R8((u32)(r_esp+0x8u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb2ae: je 0x8cb2c8 */ if (fZ) goto L_008cb2c8;
L_008cb2b0:; BB(0x008cb2b0);
    /* 008cb2b0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8cb2b5u); f_00859dd6();
    /* 008cb2b5: mov dword ptr [eax], 0xd */ W32((u32)(r_eax), 0xdu);
    /* 008cb2bb: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x8cb2c0u); f_00859ddf();
    /* 008cb2c0: mov dword ptr [eax], 5 */ W32((u32)(r_eax), 0x5u);
    /* 008cb2c6: jmp 0x8cb2a1 */ goto L_008cb2a1;
L_008cb2c8:; BB(0x008cb2c8);
    /* 008cb2c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb2ca: ret  */ FN_RET(0x008cb285); r_esp += 4; return;
}

void f_008cb2ca(void)
{
    FN_ENTER(0x008cb2ca);
    /* 008cb2ca: ret  */ FN_RET(0x008cb2ca); r_esp += 4; return;
}

void f_008cb2cb(void) /* __mbsnbcpy */
{
    FN_ENTER(0x008cb2cb);
    /* 008cb2cb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008cb2cc: mov ebp, esp */ r_ebp = r_esp;
    /* 008cb2ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb2cf: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008cb2d2: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008cb2d5: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8cb2dau); f_0085c583();
    /* 008cb2da: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 008cb2dd: cmp eax, dword ptr [0xaf0838] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb2e3: je 0x8cb2ea */ if (fZ) goto L_008cb2ea;
L_008cb2e5:; BB(0x008cb2e5);
    /* 008cb2e5: call 0x866438 */ r_esp -= 4; W32(r_esp, 0x8cb2eau); f_00866438();
L_008cb2ea:; BB(0x008cb2ea);
    /* 008cb2ea: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb2ee: jne 0x8cb301 */ if (!fZ) goto L_008cb301;
L_008cb2f0:; BB(0x008cb2f0);
    /* 008cb2f0: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb2f3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb2f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb2f7: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x8cb2fcu); f_00858900();
    /* 008cb2fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008cb2ff: jmp 0x8cb349 */ goto L_008cb349;
L_008cb301:; BB(0x008cb301);
    /* 008cb301: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008cb304: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb306: je 0x8cb346 */ if (fZ) goto L_008cb346;
L_008cb308:; BB(0x008cb308);
    /* 008cb308: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb309: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008cb30c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_008cb30d:; BB(0x008cb30d);
    /* 008cb30d: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008cb30f: movzx ebx, dl */ r_ebx = (u32)(u8)r_edx;
    /* 008cb312: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb313: test byte ptr [ebx + eax + 0x1d], 4 */ {  u32 a = R8((u32)(r_ebx+r_eax+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb318: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008cb31a: je 0x8cb34c */ if (fZ) goto L_008cb34c;
L_008cb31c:; BB(0x008cb31c);
    /* 008cb31c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008cb31d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008cb31e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb320: je 0x8cb358 */ if (fZ) goto L_008cb358;
L_008cb322:; BB(0x008cb322);
    /* 008cb322: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008cb324: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb325: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008cb327: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008cb328: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008cb329: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb32b: jne 0x8cb352 */ if (!fZ) goto L_008cb352;
L_008cb32d:; BB(0x008cb32d);
    /* 008cb32d: mov byte ptr [edi - 2], dl */ W8((u32)(r_edi+0xfffffffeu), (u8)r_edx);
L_008cb330:; BB(0x008cb330);
    /* 008cb330: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb332: je 0x8cb344 */ if (fZ) goto L_008cb344;
L_008cb334:; BB(0x008cb334);
    /* 008cb334: mov edx, ecx */ r_edx = r_ecx;
    /* 008cb336: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008cb339: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008cb33b: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008cb33d: mov ecx, edx */ r_ecx = r_edx;
    /* 008cb33f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb342: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
L_008cb344:; BB(0x008cb344);
    /* 008cb344: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008cb345: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008cb346:; BB(0x008cb346);
    /* 008cb346: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008cb349:; BB(0x008cb349);
    /* 008cb349: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008cb34a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008cb34b: ret  */ FN_RET(0x008cb2cb); r_esp += 4; return;
L_008cb34c:; BB(0x008cb34c);
    /* 008cb34c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008cb34d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008cb34e: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb350: je 0x8cb330 */ if (fZ) goto L_008cb330;
L_008cb352:; BB(0x008cb352);
    /* 008cb352: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb354: jne 0x8cb30d */ if (!fZ) goto L_008cb30d;
L_008cb356:; BB(0x008cb356);
    /* 008cb356: jmp 0x8cb344 */ goto L_008cb344;
L_008cb358:; BB(0x008cb358);
    /* 008cb358: mov byte ptr [edi - 1], 0 */ W8((u32)(r_edi+0xffffffffu), 0x0u);
    /* 008cb35c: jmp 0x8cb344 */ goto L_008cb344;
}

void f_008cb35e(void) /* __mbsstr */
{
    FN_ENTER(0x008cb35e);
    /* 008cb35e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008cb35f: mov ebp, esp */ r_ebp = r_esp;
    /* 008cb361: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008cb362: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8cb367u); f_0085c583();
    /* 008cb367: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 008cb36a: cmp eax, dword ptr [0xaf0838] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb370: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008cb373: je 0x8cb37d */ if (fZ) goto L_008cb37d;
L_008cb375:; BB(0x008cb375);
    /* 008cb375: call 0x866438 */ r_esp -= 4; W32(r_esp, 0x8cb37au); f_00866438();
    /* 008cb37a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008cb37d:; BB(0x008cb37d);
    /* 008cb37d: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb381: jne 0x8cb392 */ if (!fZ) goto L_008cb392;
L_008cb383:; BB(0x008cb383);
    /* 008cb383: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb386: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb389: call 0x859a50 */ r_esp -= 4; W32(r_esp, 0x8cb38eu); f_00859a50();
    /* 008cb38e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb38f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb390: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008cb391: ret  */ FN_RET(0x008cb35e); r_esp += 4; return;
L_008cb392:; BB(0x008cb392);
    /* 008cb392: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008cb395: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008cb398: jne 0x8cb39f */ if (!fZ) goto L_008cb39f;
L_008cb39a:; BB(0x008cb39a);
    /* 008cb39a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008cb39d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008cb39e: ret  */ FN_RET(0x008cb35e); r_esp += 4; return;
L_008cb39f:; BB(0x008cb39f);
    /* 008cb39f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cb3a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb3a1: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008cb3a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb3a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb3a6: mov edi, esi */ r_edi = r_esi;
    /* 008cb3a8: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x8cb3adu); f_0085d760();
    /* 008cb3ad: mov ebx, esi */ r_ebx = r_esi;
    /* 008cb3af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb3b0: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008cb3b2: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x8cb3b7u); f_0085d760();
    /* 008cb3b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb3b8: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008cb3ba: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008cb3bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb3be: je 0x8cb405 */ if (fZ) goto L_008cb405;
L_008cb3c0:; BB(0x008cb3c0);
    /* 008cb3c0: sub esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_008cb3c3:; BB(0x008cb3c3);
    /* 008cb3c3: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cb3c5: ja 0x8cb405 */ if ((!fC&&!fZ)) goto L_008cb405;
L_008cb3c7:; BB(0x008cb3c7);
    /* 008cb3c7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008cb3c9: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb3cb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008cb3ce: je 0x8cb3e2 */ if (fZ) goto L_008cb3e2;
L_008cb3d0:; BB(0x008cb3d0);
    /* 008cb3d0: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008cb3d2: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb3d4: je 0x8cb40c */ if (fZ) goto L_008cb40c;
L_008cb3d6:; BB(0x008cb3d6);
    /* 008cb3d6: cmp byte ptr [esi + eax], cl */ {  u32 a = R8((u32)(r_esi+r_eax)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008cb3d9: jne 0x8cb3e2 */ if (!fZ) goto L_008cb3e2;
L_008cb3db:; BB(0x008cb3db);
    /* 008cb3db: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008cb3dc: cmp byte ptr [esi + eax], 0 */ {  u32 a = R8((u32)(r_esi+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008cb3e0: jne 0x8cb3d0 */ if (!fZ) goto L_008cb3d0;
L_008cb3e2:; BB(0x008cb3e2);
    /* 008cb3e2: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008cb3e5: je 0x8cb40c */ if (fZ) goto L_008cb40c;
L_008cb3e7:; BB(0x008cb3e7);
    /* 008cb3e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008cb3ea: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 008cb3ed: mov al, byte ptr [eax + ecx + 0x1d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x1du))) & 0xffu);
    /* 008cb3f1: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008cb3f3: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008cb3f4: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008cb3f5: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb3f7: je 0x8cb400 */ if (fZ) goto L_008cb400;
L_008cb3f9:; BB(0x008cb3f9);
    /* 008cb3f9: cmp byte ptr [edi], 0 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008cb3fc: je 0x8cb405 */ if (fZ) goto L_008cb405;
L_008cb3fe:; BB(0x008cb3fe);
    /* 008cb3fe: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008cb3ff: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008cb400:; BB(0x008cb400);
    /* 008cb400: cmp byte ptr [edi], 0 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008cb403: jne 0x8cb3c3 */ if (!fZ) goto L_008cb3c3;
L_008cb405:; BB(0x008cb405);
    /* 008cb405: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008cb407:; BB(0x008cb407);
    /* 008cb407: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008cb408: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008cb409: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008cb40a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008cb40b: ret  */ FN_RET(0x008cb35e); r_esp += 4; return;
L_008cb40c:; BB(0x008cb40c);
    /* 008cb40c: mov eax, edi */ r_eax = r_edi;
    /* 008cb40e: jmp 0x8cb407 */ goto L_008cb407;
}

void f_008cb410(void) /* __mbsnbicmp */
{
    FN_ENTER(0x008cb410);
    /* 008cb410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008cb411: mov ebp, esp */ r_ebp = r_esp;
    /* 008cb413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008cb414: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008cb415: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8cb41au); f_0085c583();
    /* 008cb41a: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 008cb41d: cmp eax, dword ptr [0xaf0838] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb423: je 0x8cb42a */ if (fZ) goto L_008cb42a;
L_008cb425:; BB(0x008cb425);
    /* 008cb425: call 0x866438 */ r_esp -= 4; W32(r_esp, 0x8cb42au); f_00866438();
L_008cb42a:; BB(0x008cb42a);
    /* 008cb42a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008cb42c: cmp dword ptr [ebp + 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb42f: jne 0x8cb435 */ if (!fZ) goto L_008cb435;
L_008cb431:; BB(0x008cb431);
    /* 008cb431: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cb433: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008cb434: ret  */ FN_RET(0x008cb410); r_esp += 4; return;
L_008cb435:; BB(0x008cb435);
    /* 008cb435: cmp dword ptr [eax + 8], edx */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb438: jne 0x8cb44d */ if (!fZ) goto L_008cb44d;
L_008cb43a:; BB(0x008cb43a);
    /* 008cb43a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb43d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb440: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb443: call 0x85a1fe */ r_esp -= 4; W32(r_esp, 0x8cb448u); f_0085a1fe();
    /* 008cb448: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008cb44b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008cb44c: ret  */ FN_RET(0x008cb410); r_esp += 4; return;
L_008cb44d:; BB(0x008cb44d);
    /* 008cb44d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cb44e: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008cb451: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
L_008cb452:; BB(0x008cb452);
    /* 008cb452: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008cb455: movzx si, byte ptr [ecx] */ r_esi = (r_esi & 0xffff0000u) | (((u32)R8((u32)(r_ecx))) & 0xffffu);
    /* 008cb459: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008cb45c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb45d: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008cb460: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 008cb463: movzx esi, byte ptr [ebp - 8] */ r_esi = (u32)R8((u32)(r_ebp+0xfffffff8u));
    /* 008cb467: test byte ptr [esi + eax + 0x1d], 4 */ {  u32 a = R8((u32)(r_esi+r_eax+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb46c: je 0x8cb4cb */ if (fZ) goto L_008cb4cb;
L_008cb46e:; BB(0x008cb46e);
    /* 008cb46e: cmp dword ptr [ebp + 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb471: jne 0x8cb48c */ if (!fZ) goto L_008cb48c;
L_008cb473:; BB(0x008cb473);
    /* 008cb473: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008cb476: test byte ptr [ecx + eax + 0x1d], 4 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb47b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 008cb47e: jne 0x8cb571 */ if (!fZ) goto L_008cb571;
L_008cb484:; BB(0x008cb484);
    /* 008cb484: mov si, dx */ r_esi = (r_esi & 0xffff0000u) | (((u16)r_edx) & 0xffffu);
    /* 008cb487: jmp 0x8cb555 */ goto L_008cb555;
L_008cb48c:; BB(0x008cb48c);
    /* 008cb48c: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008cb48e: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008cb490: jne 0x8cb497 */ if (!fZ) goto L_008cb497;
L_008cb492:; BB(0x008cb492);
    /* 008cb492: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 008cb495: jmp 0x8cb4e3 */ goto L_008cb4e3;
L_008cb497:; BB(0x008cb497);
    /* 008cb497: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008cb499: mov dh, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu) << 8);
    /* 008cb49c: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008cb49f: mov dl, cl */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008cb4a1: mov si, dx */ r_esi = (r_esi & 0xffff0000u) | (((u16)r_edx) & 0xffffu);
    /* 008cb4a4: cmp si, word ptr [eax + 0x10] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 008cb4a8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 008cb4ab: jb 0x8cb4b9 */ if (fC) goto L_008cb4b9;
L_008cb4ad:; BB(0x008cb4ad);
    /* 008cb4ad: cmp si, word ptr [eax + 0x12] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_eax+0x12u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cb4b1: ja 0x8cb4b9 */ if ((!fC&&!fZ)) goto L_008cb4b9;
L_008cb4b3:; BB(0x008cb4b3);
    /* 008cb4b3: add si, word ptr [eax + 0x14] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_eax+0x14u)); u32 r = (a + b) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008cb4b7: jmp 0x8cb4e7 */ goto L_008cb4e7;
L_008cb4b9:; BB(0x008cb4b9);
    /* 008cb4b9: cmp si, word ptr [eax + 0x16] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_eax+0x16u)); u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 008cb4bd: jb 0x8cb4e7 */ if (fC) goto L_008cb4e7;
L_008cb4bf:; BB(0x008cb4bf);
    /* 008cb4bf: cmp si, word ptr [eax + 0x18] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cb4c3: ja 0x8cb4e7 */ if ((!fC&&!fZ)) goto L_008cb4e7;
L_008cb4c5:; BB(0x008cb4c5);
    /* 008cb4c5: add si, word ptr [eax + 0x1a] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_eax+0x1au)); u32 r = (a + b) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008cb4c9: jmp 0x8cb4e7 */ goto L_008cb4e7;
L_008cb4cb:; BB(0x008cb4cb);
    /* 008cb4cb: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 008cb4cf: lea edx, [ecx + eax] */ r_edx = (u32)(r_ecx+r_eax);
    /* 008cb4d2: test byte ptr [edx + 0x1d], 0x10 */ {  u32 a = R8((u32)(r_edx+0x1du)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb4d6: je 0x8cb4e0 */ if (fZ) goto L_008cb4e0;
L_008cb4d8:; BB(0x008cb4d8);
    /* 008cb4d8: movsx cx, byte ptr [edx + 0x11d] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(r_edx+0x11du))) & 0xffffu);
L_008cb4e0:; BB(0x008cb4e0);
    /* 008cb4e0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_008cb4e3:; BB(0x008cb4e3);
    /* 008cb4e3: mov si, word ptr [ebp - 8] */ r_esi = (r_esi & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
L_008cb4e7:; BB(0x008cb4e7);
    /* 008cb4e7: movzx cx, byte ptr [edi] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)R8((u32)(r_edi))) & 0xffffu);
    /* 008cb4eb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008cb4ec: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008cb4ef: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 008cb4f2: test byte ptr [ecx + eax + 0x1d], 4 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb4f7: je 0x8cb540 */ if (fZ) goto L_008cb540;
L_008cb4f9:; BB(0x008cb4f9);
    /* 008cb4f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008cb4fb: cmp dword ptr [ebp + 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb4fe: je 0x8cb509 */ if (fZ) goto L_008cb509;
L_008cb500:; BB(0x008cb500);
    /* 008cb500: mov cl, byte ptr [edi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008cb502: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008cb505: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008cb507: jne 0x8cb50e */ if (!fZ) goto L_008cb50e;
L_008cb509:; BB(0x008cb509);
    /* 008cb509: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008cb50c: jmp 0x8cb558 */ goto L_008cb558;
L_008cb50e:; BB(0x008cb50e);
    /* 008cb50e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008cb510: mov dh, byte ptr [ebp - 4] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu) << 8);
    /* 008cb513: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008cb514: mov dl, cl */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008cb516: mov cx, dx */ r_ecx = (r_ecx & 0xffff0000u) | (((u16)r_edx) & 0xffffu);
    /* 008cb519: cmp cx, word ptr [eax + 0x10] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 008cb51d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008cb520: jb 0x8cb52e */ if (fC) goto L_008cb52e;
L_008cb522:; BB(0x008cb522);
    /* 008cb522: cmp cx, word ptr [eax + 0x12] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_eax+0x12u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cb526: ja 0x8cb52e */ if ((!fC&&!fZ)) goto L_008cb52e;
L_008cb528:; BB(0x008cb528);
    /* 008cb528: add cx, word ptr [eax + 0x14] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_eax+0x14u)); u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008cb52c: jmp 0x8cb55c */ goto L_008cb55c;
L_008cb52e:; BB(0x008cb52e);
    /* 008cb52e: cmp cx, word ptr [eax + 0x16] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_eax+0x16u)); u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 008cb532: jb 0x8cb55c */ if (fC) goto L_008cb55c;
L_008cb534:; BB(0x008cb534);
    /* 008cb534: cmp cx, word ptr [eax + 0x18] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cb538: ja 0x8cb55c */ if ((!fC&&!fZ)) goto L_008cb55c;
L_008cb53a:; BB(0x008cb53a);
    /* 008cb53a: add cx, word ptr [eax + 0x1a] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_eax+0x1au)); u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008cb53e: jmp 0x8cb55c */ goto L_008cb55c;
L_008cb540:; BB(0x008cb540);
    /* 008cb540: movzx ecx, word ptr [ebp - 4] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 008cb544: lea edx, [ecx + eax] */ r_edx = (u32)(r_ecx+r_eax);
    /* 008cb547: test byte ptr [edx + 0x1d], 0x10 */ {  u32 a = R8((u32)(r_edx+0x1du)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008cb54b: je 0x8cb555 */ if (fZ) goto L_008cb555;
L_008cb54d:; BB(0x008cb54d);
    /* 008cb54d: movsx cx, byte ptr [edx + 0x11d] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(r_edx+0x11du))) & 0xffffu);
L_008cb555:; BB(0x008cb555);
    /* 008cb555: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_008cb558:; BB(0x008cb558);
    /* 008cb558: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_008cb55c:; BB(0x008cb55c);
    /* 008cb55c: cmp cx, si */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_esi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cb55f: jne 0x8cb577 */ if (!fZ) goto L_008cb577;
L_008cb561:; BB(0x008cb561);
    /* 008cb561: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008cb563: cmp si, dx */ {  u32 a = (u16)r_esi; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008cb566: je 0x8cb571 */ if (fZ) goto L_008cb571;
L_008cb568:; BB(0x008cb568);
    /* 008cb568: cmp dword ptr [ebp + 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cb56b: jne 0x8cb452 */ if (!fZ) goto L_008cb452;
L_008cb571:; BB(0x008cb571);
    /* 008cb571: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008cb573:; BB(0x008cb573);
    /* 008cb573: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008cb574: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008cb575: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008cb576: ret  */ FN_RET(0x008cb410); r_esp += 4; return;
L_008cb577:; BB(0x008cb577);
    /* 008cb577: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008cb579: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008cb57c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008cb57d: jmp 0x8cb573 */ goto L_008cb573;
}

void f_008cb59c(void)
{
    FN_ENTER(0x008cb59c);
    /* 008cb59c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008cb59f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008cb5a1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008cb5a3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb5a5: cmp eax, 0xc0000005 */ {  u32 a = r_eax; u32 b = 0xc0000005u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008cb5aa: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008cb5ad: mov eax, ecx */ r_eax = r_ecx;
    /* 008cb5af: ret  */ FN_RET(0x008cb59c); r_esp += 4; return;
}

void f_008cb5b0(void)
{
    FN_ENTER(0x008cb5b0);
    /* 008cb5b0: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008cb5b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008cb5b5: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008cb5b9: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8cb5beu); f_0085e5e7();
    /* 008cb5be: ret 4 */ FN_RET(0x008cb5b0); r_esp += 8; return;
}

void f_008cb5d0(void)
{
    FN_ENTER(0x008cb5d0);
    /* 008cb5d0: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 008cb5d6: jmp 0x8941f4 */ f_008941f4(); return;
}

void f_008cb5db(void)
{
    FN_ENTER(0x008cb5db);
    /* 008cb5db: mov eax, 0x9a0218 */ r_eax = 0x9a0218u;
    /* 008cb5e0: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb5e5(void)
{
    FN_ENTER(0x008cb5e5);
    /* 008cb5e5: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb5e8: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb5edu); f_00857e98();
    /* 008cb5ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb5ee: ret  */ FN_RET(0x008cb5e5); r_esp += 4; return;
}

void f_008cb5ef(void)
{
    FN_ENTER(0x008cb5ef);
    /* 008cb5ef: push dword ptr [ebp - 0x5c] */ { u32 v = R32((u32)(r_ebp+0xffffffa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb5f2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb5f7u); f_00857e98();
    /* 008cb5f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb5f8: ret  */ FN_RET(0x008cb5ef); r_esp += 4; return;
}

void f_008cb5f9(void)
{
    FN_ENTER(0x008cb5f9);
    /* 008cb5f9: push dword ptr [ebp - 0x48] */ { u32 v = R32((u32)(r_ebp+0xffffffb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb5fc: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb601u); f_00857e98();
    /* 008cb601: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb602: ret  */ FN_RET(0x008cb5f9); r_esp += 4; return;
}

void f_008cb603(void)
{
    FN_ENTER(0x008cb603);
    /* 008cb603: mov eax, 0x9a024c */ r_eax = 0x9a024cu;
    /* 008cb608: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb60d(void)
{
    FN_ENTER(0x008cb60d);
    /* 008cb60d: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb610: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb615u); f_00857e98();
    /* 008cb615: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb616: ret  */ FN_RET(0x008cb60d); r_esp += 4; return;
}

void f_008cb617(void)
{
    FN_ENTER(0x008cb617);
    /* 008cb617: mov eax, 0x9a0270 */ r_eax = 0x9a0270u;
    /* 008cb61c: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb621(void)
{
    FN_ENTER(0x008cb621);
    /* 008cb621: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb624: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb629u); f_00857e98();
    /* 008cb629: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb62a: ret  */ FN_RET(0x008cb621); r_esp += 4; return;
}

void f_008cb62b(void)
{
    FN_ENTER(0x008cb62b);
    /* 008cb62b: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb62e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb633u); f_00857e98();
    /* 008cb633: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb634: ret  */ FN_RET(0x008cb62b); r_esp += 4; return;
}

void f_008cb635(void)
{
    FN_ENTER(0x008cb635);
    /* 008cb635: mov eax, 0x9a029c */ r_eax = 0x9a029cu;
    /* 008cb63a: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb63f(void)
{
    FN_ENTER(0x008cb63f);
    /* 008cb63f: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb642: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb647u); f_00857e98();
    /* 008cb647: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb648: ret  */ FN_RET(0x008cb63f); r_esp += 4; return;
}

void f_008cb649(void)
{
    FN_ENTER(0x008cb649);
    /* 008cb649: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb64c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb651u); f_00857e98();
    /* 008cb651: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb652: ret  */ FN_RET(0x008cb649); r_esp += 4; return;
}

void f_008cb653(void)
{
    FN_ENTER(0x008cb653);
    /* 008cb653: mov eax, 0x9a02c8 */ r_eax = 0x9a02c8u;
    /* 008cb658: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb65d(void)
{
    FN_ENTER(0x008cb65d);
    /* 008cb65d: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb660: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb665u); f_00857e98();
    /* 008cb665: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb666: ret  */ FN_RET(0x008cb65d); r_esp += 4; return;
}

void f_008cb667(void)
{
    FN_ENTER(0x008cb667);
    /* 008cb667: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb66a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb66fu); f_00857e98();
    /* 008cb66f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb670: ret  */ FN_RET(0x008cb667); r_esp += 4; return;
}

void f_008cb671(void)
{
    FN_ENTER(0x008cb671);
    /* 008cb671: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb674: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb679u); f_00857e98();
    /* 008cb679: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb67a: ret  */ FN_RET(0x008cb671); r_esp += 4; return;
}

void f_008cb67b(void)
{
    FN_ENTER(0x008cb67b);
    /* 008cb67b: mov eax, 0x9a02fc */ r_eax = 0x9a02fcu;
    /* 008cb680: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb685(void)
{
    FN_ENTER(0x008cb685);
    /* 008cb685: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb688: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb68du); f_00857e98();
    /* 008cb68d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb68e: ret  */ FN_RET(0x008cb685); r_esp += 4; return;
}

void f_008cb68f(void)
{
    FN_ENTER(0x008cb68f);
    /* 008cb68f: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb692: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb697u); f_00857e98();
    /* 008cb697: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb698: ret  */ FN_RET(0x008cb68f); r_esp += 4; return;
}

void f_008cb699(void)
{
    FN_ENTER(0x008cb699);
    /* 008cb699: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb69c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb6a1u); f_00857e98();
    /* 008cb6a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb6a2: ret  */ FN_RET(0x008cb699); r_esp += 4; return;
}

void f_008cb6a3(void)
{
    FN_ENTER(0x008cb6a3);
    /* 008cb6a3: mov eax, 0x9a0330 */ r_eax = 0x9a0330u;
    /* 008cb6a8: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb6ad(void)
{
    FN_ENTER(0x008cb6ad);
    /* 008cb6ad: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb6b0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb6b5u); f_00857e98();
    /* 008cb6b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb6b6: ret  */ FN_RET(0x008cb6ad); r_esp += 4; return;
}

void f_008cb6b7(void)
{
    FN_ENTER(0x008cb6b7);
    /* 008cb6b7: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb6ba: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb6bfu); f_00857e98();
    /* 008cb6bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb6c0: ret  */ FN_RET(0x008cb6b7); r_esp += 4; return;
}

void f_008cb6c1(void)
{
    FN_ENTER(0x008cb6c1);
    /* 008cb6c1: mov eax, 0x9a035c */ r_eax = 0x9a035cu;
    /* 008cb6c6: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb6cb(void)
{
    FN_ENTER(0x008cb6cb);
    /* 008cb6cb: push dword ptr [ebp - 0x44] */ { u32 v = R32((u32)(r_ebp+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb6ce: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb6d3u); f_00857e98();
    /* 008cb6d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb6d4: ret  */ FN_RET(0x008cb6cb); r_esp += 4; return;
}

void f_008cb6d5(void)
{
    FN_ENTER(0x008cb6d5);
    /* 008cb6d5: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb6d8: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb6ddu); f_00857e98();
    /* 008cb6dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb6de: ret  */ FN_RET(0x008cb6d5); r_esp += 4; return;
}

void f_008cb6df(void)
{
    FN_ENTER(0x008cb6df);
    /* 008cb6df: mov eax, 0x9a0388 */ r_eax = 0x9a0388u;
    /* 008cb6e4: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb6e9(void)
{
    FN_ENTER(0x008cb6e9);
    /* 008cb6e9: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb6ec: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb6f1u); f_00857e98();
    /* 008cb6f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb6f2: ret  */ FN_RET(0x008cb6e9); r_esp += 4; return;
}

void f_008cb6f3(void)
{
    FN_ENTER(0x008cb6f3);
    /* 008cb6f3: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb6f6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb6fbu); f_00857e98();
    /* 008cb6fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb6fc: ret  */ FN_RET(0x008cb6f3); r_esp += 4; return;
}

void f_008cb6fd(void)
{
    FN_ENTER(0x008cb6fd);
    /* 008cb6fd: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb700: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb705u); f_00857e98();
    /* 008cb705: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb706: ret  */ FN_RET(0x008cb6fd); r_esp += 4; return;
}

void f_008cb707(void)
{
    FN_ENTER(0x008cb707);
    /* 008cb707: mov eax, 0x9a03bc */ r_eax = 0x9a03bcu;
    /* 008cb70c: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb711(void)
{
    FN_ENTER(0x008cb711);
    /* 008cb711: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008cb714: jmp 0x899f6b */ f_00899f6b(); return;
}

void f_008cb719(void)
{
    FN_ENTER(0x008cb719);
    /* 008cb719: mov eax, 0x9a03e0 */ r_eax = 0x9a03e0u;
    /* 008cb71e: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb723(void)
{
    FN_ENTER(0x008cb723);
    /* 008cb723: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb726: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb72bu); f_00857e98();
    /* 008cb72b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb72c: ret  */ FN_RET(0x008cb723); r_esp += 4; return;
}

void f_008cb72d(void)
{
    FN_ENTER(0x008cb72d);
    /* 008cb72d: mov eax, 0x9a0404 */ r_eax = 0x9a0404u;
    /* 008cb732: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb737(void)
{
    FN_ENTER(0x008cb737);
    /* 008cb737: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb73a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb73fu); f_00857e98();
    /* 008cb73f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb740: ret  */ FN_RET(0x008cb737); r_esp += 4; return;
}

void f_008cb741(void)
{
    FN_ENTER(0x008cb741);
    /* 008cb741: mov eax, 0x9a0428 */ r_eax = 0x9a0428u;
    /* 008cb746: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb74b(void)
{
    FN_ENTER(0x008cb74b);
    /* 008cb74b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008cb74e: jmp 0x899f6b */ f_00899f6b(); return;
}

void f_008cb753(void)
{
    FN_ENTER(0x008cb753);
    /* 008cb753: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb756: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb75bu); f_00857e98();
    /* 008cb75b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb75c: ret  */ FN_RET(0x008cb753); r_esp += 4; return;
}

void f_008cb75d(void)
{
    FN_ENTER(0x008cb75d);
    /* 008cb75d: mov eax, 0x9a0454 */ r_eax = 0x9a0454u;
    /* 008cb762: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb767(void)
{
    FN_ENTER(0x008cb767);
    /* 008cb767: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb76a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb76fu); f_00857e98();
    /* 008cb76f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb770: ret  */ FN_RET(0x008cb767); r_esp += 4; return;
}

void f_008cb771(void)
{
    FN_ENTER(0x008cb771);
    /* 008cb771: mov eax, 0x9a0478 */ r_eax = 0x9a0478u;
    /* 008cb776: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb77b(void)
{
    FN_ENTER(0x008cb77b);
    /* 008cb77b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008cb77e: jmp 0x899f6b */ f_00899f6b(); return;
}

void f_008cb783(void)
{
    FN_ENTER(0x008cb783);
    /* 008cb783: mov eax, 0x9a049c */ r_eax = 0x9a049cu;
    /* 008cb788: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb78d(void)
{
    FN_ENTER(0x008cb78d);
    /* 008cb78d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb790: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb795u); f_00857e98();
    /* 008cb795: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb796: ret  */ FN_RET(0x008cb78d); r_esp += 4; return;
}

void f_008cb797(void)
{
    FN_ENTER(0x008cb797);
    /* 008cb797: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb79a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb79fu); f_00857e98();
    /* 008cb79f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb7a0: ret  */ FN_RET(0x008cb797); r_esp += 4; return;
}

void f_008cb7a1(void)
{
    FN_ENTER(0x008cb7a1);
    /* 008cb7a1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb7a4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb7a9u); f_00857e98();
    /* 008cb7a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb7aa: ret  */ FN_RET(0x008cb7a1); r_esp += 4; return;
}

void f_008cb7ab(void)
{
    FN_ENTER(0x008cb7ab);
    /* 008cb7ab: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb7ae: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb7b3u); f_00857e98();
    /* 008cb7b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb7b4: ret  */ FN_RET(0x008cb7ab); r_esp += 4; return;
}

void f_008cb7b5(void)
{
    FN_ENTER(0x008cb7b5);
    /* 008cb7b5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb7b8: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb7bdu); f_00857e98();
    /* 008cb7bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb7be: ret  */ FN_RET(0x008cb7b5); r_esp += 4; return;
}

void f_008cb7bf(void)
{
    FN_ENTER(0x008cb7bf);
    /* 008cb7bf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb7c2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb7c7u); f_00857e98();
    /* 008cb7c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb7c8: ret  */ FN_RET(0x008cb7bf); r_esp += 4; return;
}

void f_008cb7c9(void)
{
    FN_ENTER(0x008cb7c9);
    /* 008cb7c9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb7cc: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb7d1u); f_00857e98();
    /* 008cb7d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb7d2: ret  */ FN_RET(0x008cb7c9); r_esp += 4; return;
}

void f_008cb7d3(void)
{
    FN_ENTER(0x008cb7d3);
    /* 008cb7d3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb7d6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb7dbu); f_00857e98();
    /* 008cb7db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb7dc: ret  */ FN_RET(0x008cb7d3); r_esp += 4; return;
}

void f_008cb7dd(void)
{
    FN_ENTER(0x008cb7dd);
    /* 008cb7dd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb7e0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb7e5u); f_00857e98();
    /* 008cb7e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb7e6: ret  */ FN_RET(0x008cb7dd); r_esp += 4; return;
}

void f_008cb7e7(void)
{
    FN_ENTER(0x008cb7e7);
    /* 008cb7e7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb7ea: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb7efu); f_00857e98();
    /* 008cb7ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb7f0: ret  */ FN_RET(0x008cb7e7); r_esp += 4; return;
}

void f_008cb7f1(void)
{
    FN_ENTER(0x008cb7f1);
    /* 008cb7f1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb7f4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb7f9u); f_00857e98();
    /* 008cb7f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb7fa: ret  */ FN_RET(0x008cb7f1); r_esp += 4; return;
}

void f_008cb7fb(void)
{
    FN_ENTER(0x008cb7fb);
    /* 008cb7fb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb7fe: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb803u); f_00857e98();
    /* 008cb803: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb804: ret  */ FN_RET(0x008cb7fb); r_esp += 4; return;
}

void f_008cb805(void)
{
    FN_ENTER(0x008cb805);
    /* 008cb805: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb808: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb80du); f_00857e98();
    /* 008cb80d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb80e: ret  */ FN_RET(0x008cb805); r_esp += 4; return;
}

void f_008cb80f(void)
{
    FN_ENTER(0x008cb80f);
    /* 008cb80f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb812: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb817u); f_00857e98();
    /* 008cb817: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb818: ret  */ FN_RET(0x008cb80f); r_esp += 4; return;
}

void f_008cb819(void)
{
    FN_ENTER(0x008cb819);
    /* 008cb819: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb81c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb821u); f_00857e98();
    /* 008cb821: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb822: ret  */ FN_RET(0x008cb819); r_esp += 4; return;
}

void f_008cb823(void)
{
    FN_ENTER(0x008cb823);
    /* 008cb823: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb826: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb82bu); f_00857e98();
    /* 008cb82b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb82c: ret  */ FN_RET(0x008cb823); r_esp += 4; return;
}

void f_008cb82d(void)
{
    FN_ENTER(0x008cb82d);
    /* 008cb82d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb830: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb835u); f_00857e98();
    /* 008cb835: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb836: ret  */ FN_RET(0x008cb82d); r_esp += 4; return;
}

void f_008cb837(void)
{
    FN_ENTER(0x008cb837);
    /* 008cb837: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb83a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb83fu); f_00857e98();
    /* 008cb83f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb840: ret  */ FN_RET(0x008cb837); r_esp += 4; return;
}

void f_008cb841(void)
{
    FN_ENTER(0x008cb841);
    /* 008cb841: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb844: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb849u); f_00857e98();
    /* 008cb849: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb84a: ret  */ FN_RET(0x008cb841); r_esp += 4; return;
}

void f_008cb84b(void)
{
    FN_ENTER(0x008cb84b);
    /* 008cb84b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb84e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb853u); f_00857e98();
    /* 008cb853: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb854: ret  */ FN_RET(0x008cb84b); r_esp += 4; return;
}

void f_008cb855(void)
{
    FN_ENTER(0x008cb855);
    /* 008cb855: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb858: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb85du); f_00857e98();
    /* 008cb85d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb85e: ret  */ FN_RET(0x008cb855); r_esp += 4; return;
}

void f_008cb85f(void)
{
    FN_ENTER(0x008cb85f);
    /* 008cb85f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb862: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb867u); f_00857e98();
    /* 008cb867: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb868: ret  */ FN_RET(0x008cb85f); r_esp += 4; return;
}

void f_008cb869(void)
{
    FN_ENTER(0x008cb869);
    /* 008cb869: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb86c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb871u); f_00857e98();
    /* 008cb871: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb872: ret  */ FN_RET(0x008cb869); r_esp += 4; return;
}

void f_008cb873(void)
{
    FN_ENTER(0x008cb873);
    /* 008cb873: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb876: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb87bu); f_00857e98();
    /* 008cb87b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb87c: ret  */ FN_RET(0x008cb873); r_esp += 4; return;
}

void f_008cb87d(void)
{
    FN_ENTER(0x008cb87d);
    /* 008cb87d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb880: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb885u); f_00857e98();
    /* 008cb885: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb886: ret  */ FN_RET(0x008cb87d); r_esp += 4; return;
}

void f_008cb887(void)
{
    FN_ENTER(0x008cb887);
    /* 008cb887: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb88a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb88fu); f_00857e98();
    /* 008cb88f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb890: ret  */ FN_RET(0x008cb887); r_esp += 4; return;
}

void f_008cb891(void)
{
    FN_ENTER(0x008cb891);
    /* 008cb891: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb894: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb899u); f_00857e98();
    /* 008cb899: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb89a: ret  */ FN_RET(0x008cb891); r_esp += 4; return;
}

void f_008cb89b(void)
{
    FN_ENTER(0x008cb89b);
    /* 008cb89b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb89e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb8a3u); f_00857e98();
    /* 008cb8a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb8a4: ret  */ FN_RET(0x008cb89b); r_esp += 4; return;
}

void f_008cb8a5(void)
{
    FN_ENTER(0x008cb8a5);
    /* 008cb8a5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb8a8: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb8adu); f_00857e98();
    /* 008cb8ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb8ae: ret  */ FN_RET(0x008cb8a5); r_esp += 4; return;
}

void f_008cb8af(void)
{
    FN_ENTER(0x008cb8af);
    /* 008cb8af: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb8b2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb8b7u); f_00857e98();
    /* 008cb8b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb8b8: ret  */ FN_RET(0x008cb8af); r_esp += 4; return;
}

void f_008cb8b9(void)
{
    FN_ENTER(0x008cb8b9);
    /* 008cb8b9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb8bc: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb8c1u); f_00857e98();
    /* 008cb8c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb8c2: ret  */ FN_RET(0x008cb8b9); r_esp += 4; return;
}

void f_008cb8c3(void)
{
    FN_ENTER(0x008cb8c3);
    /* 008cb8c3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb8c6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb8cbu); f_00857e98();
    /* 008cb8cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb8cc: ret  */ FN_RET(0x008cb8c3); r_esp += 4; return;
}

void f_008cb8cd(void)
{
    FN_ENTER(0x008cb8cd);
    /* 008cb8cd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb8d0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb8d5u); f_00857e98();
    /* 008cb8d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb8d6: ret  */ FN_RET(0x008cb8cd); r_esp += 4; return;
}

void f_008cb8d7(void)
{
    FN_ENTER(0x008cb8d7);
    /* 008cb8d7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb8da: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb8dfu); f_00857e98();
    /* 008cb8df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb8e0: ret  */ FN_RET(0x008cb8d7); r_esp += 4; return;
}

void f_008cb8e1(void)
{
    FN_ENTER(0x008cb8e1);
    /* 008cb8e1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb8e4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb8e9u); f_00857e98();
    /* 008cb8e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb8ea: ret  */ FN_RET(0x008cb8e1); r_esp += 4; return;
}

void f_008cb8eb(void)
{
    FN_ENTER(0x008cb8eb);
    /* 008cb8eb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb8ee: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb8f3u); f_00857e98();
    /* 008cb8f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb8f4: ret  */ FN_RET(0x008cb8eb); r_esp += 4; return;
}

void f_008cb8f5(void)
{
    FN_ENTER(0x008cb8f5);
    /* 008cb8f5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb8f8: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb8fdu); f_00857e98();
    /* 008cb8fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb8fe: ret  */ FN_RET(0x008cb8f5); r_esp += 4; return;
}

void f_008cb8ff(void)
{
    FN_ENTER(0x008cb8ff);
    /* 008cb8ff: mov eax, 0x9a05e0 */ r_eax = 0x9a05e0u;
    /* 008cb904: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb909(void)
{
    FN_ENTER(0x008cb909);
    /* 008cb909: mov eax, 0x9a0630 */ r_eax = 0x9a0630u;
    /* 008cb90e: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb913(void)
{
    FN_ENTER(0x008cb913);
    /* 008cb913: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008cb916: jmp 0x8a89ea */ f_008a89ea(); return;
}

void f_008cb91b(void)
{
    FN_ENTER(0x008cb91b);
    /* 008cb91b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008cb91e: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb921: jmp 0x8a8953 */ f_008a8953(); return;
}

void f_008cb926(void)
{
    FN_ENTER(0x008cb926);
    /* 008cb926: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008cb929: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb92c: jmp 0x8a8953 */ f_008a8953(); return;
}

void f_008cb931(void)
{
    FN_ENTER(0x008cb931);
    /* 008cb931: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008cb934: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb937: jmp 0x8a8953 */ f_008a8953(); return;
}

void f_008cb93c(void)
{
    FN_ENTER(0x008cb93c);
    /* 008cb93c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008cb93f: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb942: jmp 0x8a8953 */ f_008a8953(); return;
}

void f_008cb947(void)
{
    FN_ENTER(0x008cb947);
    /* 008cb947: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008cb94a: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb94d: jmp 0x8a8953 */ f_008a8953(); return;
}

void f_008cb952(void)
{
    FN_ENTER(0x008cb952);
    /* 008cb952: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008cb955: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb958: jmp 0x8a8953 */ f_008a8953(); return;
}

void f_008cb95d(void)
{
    FN_ENTER(0x008cb95d);
    /* 008cb95d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008cb960: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb963: jmp 0x8a8953 */ f_008a8953(); return;
}

void f_008cb968(void)
{
    FN_ENTER(0x008cb968);
    /* 008cb968: mov eax, 0x9a068c */ r_eax = 0x9a068cu;
    /* 008cb96d: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb972(void)
{
    FN_ENTER(0x008cb972);
    /* 008cb972: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb975: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb97au); f_00857e98();
    /* 008cb97a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb97b: ret  */ FN_RET(0x008cb972); r_esp += 4; return;
}

void f_008cb97c(void)
{
    FN_ENTER(0x008cb97c);
    /* 008cb97c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb97f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb984u); f_00857e98();
    /* 008cb984: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb985: ret  */ FN_RET(0x008cb97c); r_esp += 4; return;
}

void f_008cb986(void)
{
    FN_ENTER(0x008cb986);
    /* 008cb986: mov eax, 0x9a0714 */ r_eax = 0x9a0714u;
    /* 008cb98b: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb990(void)
{
    FN_ENTER(0x008cb990);
    /* 008cb990: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cb993: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8cb998u); f_00857e98();
    /* 008cb998: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cb999: ret  */ FN_RET(0x008cb990); r_esp += 4; return;
}

void f_008cb99a(void)
{
    FN_ENTER(0x008cb99a);
    /* 008cb99a: mov eax, 0x9a0738 */ r_eax = 0x9a0738u;
    /* 008cb99f: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb9b0(void)
{
    FN_ENTER(0x008cb9b0);
    /* 008cb9b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008cb9b3: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb9b6: jmp 0x8c35b0 */ f_008c35b0(); return;
}

void f_008cb9bb(void)
{
    FN_ENTER(0x008cb9bb);
    /* 008cb9bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008cb9be: add ecx, 0x1468 */ {  u32 a = r_ecx; u32 b = 0x1468u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb9c4: jmp 0x8c8650 */ f_008c8650(); return;
}

void f_008cb9c9(void)
{
    FN_ENTER(0x008cb9c9);
    goto L_008cb9c9;
L_008c35a0:; BB(0x008c35a0);
    /* 008c35a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c35a1: call dword ptr [0x8f81b0] */ { u32 t = R32((u32)(0x8f81b0u)); r_esp -= 4; W32(r_esp, 0x8c35a7u); call_ind(t); }
    /* 008c35a7: ret  */ FN_RET(0x008cb9c9); r_esp += 4; return;
L_008cb9c9:; BB(0x008cb9c9);
    /* 008cb9c9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008cb9cc: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb9cf: jmp 0x8c35a0 */ goto L_008c35a0;
}

void f_008cb9d4(void)
{
    FN_ENTER(0x008cb9d4);
    /* 008cb9d4: mov eax, 0x9a0758 */ r_eax = 0x9a0758u;
    /* 008cb9d9: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cb9e0(void)
{
    FN_ENTER(0x008cb9e0);
    goto L_008cb9e0;
L_008c35a0:; BB(0x008c35a0);
    /* 008c35a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c35a1: call dword ptr [0x8f81b0] */ { u32 t = R32((u32)(0x8f81b0u)); r_esp -= 4; W32(r_esp, 0x8c35a7u); call_ind(t); }
    /* 008c35a7: ret  */ FN_RET(0x008cb9e0); r_esp += 4; return;
L_008cb9e0:; BB(0x008cb9e0);
    /* 008cb9e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008cb9e3: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb9e6: jmp 0x8c35a0 */ goto L_008c35a0;
}

void f_008cb9eb(void)
{
    FN_ENTER(0x008cb9eb);
    /* 008cb9eb: mov eax, 0x9a0790 */ r_eax = 0x9a0790u;
    /* 008cb9f0: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cba00(void)
{
    FN_ENTER(0x008cba00);
    /* 008cba00: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 008cba06: jmp 0x8c76b0 */ f_008c76b0(); return;
}

void f_008cba0b(void)
{
    FN_ENTER(0x008cba0b);
    /* 008cba0b: mov eax, 0x9a07b8 */ r_eax = 0x9a07b8u;
    /* 008cba10: jmp 0x857a43 */ f_00857a43(); return;
}

void f_008cba15(void)
{
    FN_ENTER(0x008cba15);
    /* 008cba15: mov ecx, 0xaeb490 */ r_ecx = 0xaeb490u;
    /* 008cba1a: call 0x8c9aa0 */ r_esp -= 4; W32(r_esp, 0x8cba1fu); f_008c9aa0();
    /* 008cba1f: push 0x8cba2b */ { u32 v = 0x8cba2bu; r_esp -= 4; W32(r_esp, v); }
    /* 008cba24: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x8cba29u); f_0085909d();
    /* 008cba29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cba2a: ret  */ FN_RET(0x008cba15); r_esp += 4; return;
}

void f_008cba2b(void) /* sub_8CBA2B */
{
    FN_ENTER(0x008cba2b);
    goto L_008cba2b;
L_008c9acf:; BB(0x008c9acf);
    /* 008c9acf: push 0xa3a558 */ { u32 v = 0xa3a558u; r_esp -= 4; W32(r_esp, v); }
    /* 008c9ad4: call dword ptr [0x8f8120] */ { u32 t = R32((u32)(0x8f8120u)); r_esp -= 4; W32(r_esp, 0x8c9adau); call_ind(t); }
    /* 008c9ada: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c9adc: jge 0x8c9af7 */ if ((fS==fO)) goto L_008c9af7;
L_008c9ade:; BB(0x008c9ade);
    /* 008c9ade: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9adf: mov esi, 0xaeb430 */ r_esi = 0xaeb430u;
L_008c9ae4:; BB(0x008c9ae4);
    /* 008c9ae4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9ae5: call 0x8c9b03 */ r_esp -= 4; W32(r_esp, 0x8c9aeau); f_008c9b03();
    /* 008c9aea: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9aed: cmp esi, 0xaeb490 */ {  u32 a = r_esi; u32 b = 0xaeb490u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c9af3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c9af4: jl 0x8c9ae4 */ if ((fS!=fO)) goto L_008c9ae4;
L_008c9af6:; BB(0x008c9af6);
    /* 008c9af6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008c9af7:; BB(0x008c9af7);
    /* 008c9af7: ret  */ FN_RET(0x008cba2b); r_esp += 4; return;
L_008cba2b:; BB(0x008cba2b);
    /* 008cba2b: mov ecx, 0xaeb490 */ r_ecx = 0xaeb490u;
    /* 008cba30: jmp 0x8c9acf */ goto L_008c9acf;
}

