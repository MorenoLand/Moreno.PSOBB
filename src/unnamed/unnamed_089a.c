#include "protos.h"

void f_0089a712(void) /* sub_89A712 */
{
    FN_ENTER(0x0089a712);
    /* 0089a712: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089a713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089a714: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0089a718: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0089a71c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089a721: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0089a725: fldcw word ptr [esp + 4] */ fcw = R16((u32)(r_esp+0x4u));
    /* 0089a729: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0089a72d: mov dword ptr [0xae9750], eax */ W32((u32)(0xae9750u), r_eax);
    /* 0089a732: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a733: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a734: ret  */ FN_RET(0x0089a712); r_esp += 4; return;
}

void f_0089a735(void) /* sub_89A735 */
{
    FN_ENTER(0x0089a735);
    /* 0089a735: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089a736: mov ebp, esp */ r_ebp = r_esp;
    /* 0089a738: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089a73b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089a73c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a73d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a73e: push 0x88f917 */ { u32 v = 0x88f917u; r_esp -= 4; W32(r_esp, v); }
    /* 0089a743: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0089a745: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0089a74a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089a74c: lea eax, [ebx + 0x30] */ r_eax = (u32)(r_ebx+0x30u);
    /* 0089a74f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089a750: mov dword ptr [ebx], 0x99ba6c */ W32((u32)(r_ebx), 0x99ba6cu);
    /* 0089a756: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x89a75bu); f_0088fd17();
    /* 0089a75b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089a75e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089a760: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 0089a763: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0089a766: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0089a769: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0089a76c: mov dword ptr [ebx + 0x1050], ecx */ W32((u32)(r_ebx+0x1050u), r_ecx);
    /* 0089a772: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0089a775: mov dword ptr [ebx + 0x1054], ecx */ W32((u32)(r_ebx+0x1054u), r_ecx);
    /* 0089a77b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0089a77d: lea edi, [ebx + 0x1030] */ r_edi = (u32)(r_ebx+0x1030u);
    /* 0089a783: lea esi, [eax + 0x28] */ r_esi = (u32)(r_eax+0x28u);
    /* 0089a786: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a787: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089a789: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089a78b: cmp dword ptr [eax + 0x40], esi */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a78e: mov ecx, 0xa34748 */ r_ecx = 0xa34748u;
    /* 0089a793: jne 0x89a79a */ if (!fZ) goto L_0089a79a;
L_0089a795:; BB(0x0089a795);
    /* 0089a795: mov ecx, 0xa346c8 */ r_ecx = 0xa346c8u;
L_0089a79a:; BB(0x0089a79a);
    /* 0089a79a: fld dword ptr [0x99ba7c] */ FPUSH(R_F32((u32)(0x99ba7cu)));
    /* 0089a7a0: mov dword ptr [ebx + 0x2c], ecx */ W32((u32)(r_ebx+0x2cu), r_ecx);
    /* 0089a7a3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0089a7a6: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089a7a9: mov dword ptr [ebx + 0x1068], ecx */ W32((u32)(r_ebx+0x1068u), r_ecx);
    /* 0089a7af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089a7b1: cmp dword ptr [ebp + 0xc], esi */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a7b4: mov dword ptr [ebx + 0x1048], esi */ W32((u32)(r_ebx+0x1048u), r_esi);
    /* 0089a7ba: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0089a7bd: mov dword ptr [ebx + 0x104c], esi */ W32((u32)(r_ebx+0x104cu), r_esi);
    /* 0089a7c3: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 0089a7c6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089a7c9: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0089a7cc: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0089a7cf: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a7d1: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 0089a7d4: je 0x89a827 */ if (fZ) goto L_0089a827;
L_0089a7d6:; BB(0x0089a7d6);
    /* 0089a7d6: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0089a7d9: mov edx, ecx */ r_edx = r_ecx;
    /* 0089a7db: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0089a7de: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0089a7e1: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0089a7e4: mov edx, ecx */ r_edx = r_ecx;
    /* 0089a7e6: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0089a7e9: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 0089a7ec: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0089a7ef: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a7f1: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0089a7f4: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0089a7f7: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089a7fa: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 0089a7fd: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0089a800: shr ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089a803: lea edi, [ebx + 0x1c] */ r_edi = (u32)(r_ebx+0x1cu);
    /* 0089a806: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a808: lea esi, [ebp - 0x10] */ r_esi = (u32)(r_ebp+0xfffffff0u);
    /* 0089a80b: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089a80e: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 0089a811: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0089a814: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a816: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089a819: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 0089a81c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a81e: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0089a821: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a822: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a823: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a824: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a825: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0089a827:; BB(0x0089a827);
    /* 0089a827: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0089a82a: cmp ecx, 0x29 */ {  u32 a = r_ecx; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a82d: je 0x89a83e */ if (fZ) goto L_0089a83e;
L_0089a82f:; BB(0x0089a82f);
    /* 0089a82f: cmp ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a832: je 0x89a83e */ if (fZ) goto L_0089a83e;
L_0089a834:; BB(0x0089a834);
    /* 0089a834: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089a836: mov dword ptr [ebx + 0x14], esi */ W32((u32)(r_ebx+0x14u), r_esi);
    /* 0089a839: jmp 0x89a8cc */ goto L_0089a8cc;
L_0089a83e:; BB(0x0089a83e);
    /* 0089a83e: mov dword ptr [ebx + 0x14], 1 */ W32((u32)(r_ebx+0x14u), 0x1u);
    /* 0089a845: cmp dword ptr [eax + 0x48], esi */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a848: je 0x89a8a9 */ if (fZ) goto L_0089a8a9;
L_0089a84a:; BB(0x0089a84a);
    /* 0089a84a: lea ecx, [ebx + 0x34] */ r_ecx = (u32)(r_ebx+0x34u);
L_0089a84d:; BB(0x0089a84d);
    /* 0089a84d: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0089a850: movzx edx, byte ptr [esi + edx] */ r_edx = (u32)R8((u32)(r_esi+r_edx));
    /* 0089a854: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0089a857: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a85a: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 0089a85d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a85f: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 0089a862: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0089a865: movzx edx, byte ptr [esi + edx - 3] */ r_edx = (u32)R8((u32)(r_esi+r_edx+0xfffffffdu));
    /* 0089a86a: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0089a86d: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 0089a870: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a872: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0089a874: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0089a877: movzx edx, byte ptr [esi + edx - 2] */ r_edx = (u32)R8((u32)(r_esi+r_edx+0xfffffffeu));
    /* 0089a87c: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0089a87f: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089a882: cmp esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a888: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 0089a88b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a88d: fstp dword ptr [ecx - 0xc] */ W_F32((u32)(r_ecx+0xfffffff4u), ST(0)); FPOP();
    /* 0089a890: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0089a893: movzx edx, byte ptr [esi + edx - 1] */ r_edx = (u32)R8((u32)(r_esi+r_edx+0xffffffffu));
    /* 0089a898: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0089a89b: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 0089a89e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a8a0: fstp dword ptr [ecx - 8] */ W_F32((u32)(r_ecx+0xfffffff8u), ST(0)); FPOP();
    /* 0089a8a3: jb 0x89a84d */ if (fC) goto L_0089a84d;
L_0089a8a5:; BB(0x0089a8a5);
    /* 0089a8a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089a8a7: jmp 0x89a8cc */ goto L_0089a8cc;
L_0089a8a9:; BB(0x0089a8a9);
    /* 0089a8a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089a8ab: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0089a8ae: mov ecx, 0x100 */ r_ecx = 0x100u;
L_0089a8b3:; BB(0x0089a8b3);
    /* 0089a8b3: fld1  */ FPUSH(1.0);
    /* 0089a8b5: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0089a8b8: fld1  */ FPUSH(1.0);
    /* 0089a8ba: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0089a8bc: fld1  */ FPUSH(1.0);
    /* 0089a8be: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a8c1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0089a8c2: fstp dword ptr [eax - 0x14] */ W_F32((u32)(r_eax+0xffffffecu), ST(0)); FPOP();
    /* 0089a8c5: fld1  */ FPUSH(1.0);
    /* 0089a8c7: fstp dword ptr [eax - 0x18] */ W_F32((u32)(r_eax+0xffffffe8u), ST(0)); FPOP();
    /* 0089a8ca: jne 0x89a8b3 */ if (!fZ) goto L_0089a8b3;
L_0089a8cc:; BB(0x0089a8cc);
    /* 0089a8cc: mov eax, dword ptr [ebx + 0x1034] */ r_eax = R32((u32)(r_ebx+0x1034u));
    /* 0089a8d2: mov edi, dword ptr [ebx + 0x103c] */ r_edi = R32((u32)(r_ebx+0x103cu));
    /* 0089a8d8: mov ecx, dword ptr [ebx + 0x1038] */ r_ecx = R32((u32)(r_ebx+0x1038u));
    /* 0089a8de: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0089a8e0: mov eax, dword ptr [ebx + 0x1040] */ r_eax = R32((u32)(r_ebx+0x1040u));
    /* 0089a8e6: mov dword ptr [ebx + 0x105c], edi */ W32((u32)(r_ebx+0x105cu), r_edi);
    /* 0089a8ec: mov edi, dword ptr [ebx + 0x1044] */ r_edi = R32((u32)(r_ebx+0x1044u));
    /* 0089a8f2: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0089a8f4: mov eax, dword ptr [ebx + 0x1068] */ r_eax = R32((u32)(r_ebx+0x1068u));
    /* 0089a8fa: lea edx, [ebx + 0x1030] */ r_edx = (u32)(r_ebx+0x1030u);
    /* 0089a900: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0089a902: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0089a904: mov dword ptr [ebx + 0x1060], edi */ W32((u32)(r_ebx+0x1060u), r_edi);
    /* 0089a90a: mov edi, eax */ r_edi = r_eax;
    /* 0089a90c: imul edi, ecx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ecx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a90f: mov dword ptr [ebx + 0x1058], ecx */ W32((u32)(r_ebx+0x1058u), r_ecx);
    /* 0089a915: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089a917: cmp dword ptr [ebx + 0xc], ecx */ {  u32 a = R32((u32)(r_ebx+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a91a: mov dword ptr [ebx + 0x1064], edi */ W32((u32)(r_ebx+0x1064u), r_edi);
    /* 0089a920: je 0x89a978 */ if (fZ) goto L_0089a978;
L_0089a922:; BB(0x0089a922);
    /* 0089a922: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a925: mov esi, dword ptr [ebx + 0x1050] */ r_esi = R32((u32)(r_ebx+0x1050u));
    /* 0089a92b: imul esi, dword ptr [ebx + 0x1034] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebx+0x1034u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a932: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a934: mov esi, dword ptr [ebx + 0x1054] */ r_esi = R32((u32)(r_ebx+0x1054u));
    /* 0089a93a: imul esi, dword ptr [ebx + 0x1040] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebx+0x1040u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a941: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a943: add dword ptr [ebx + 0x18], eax */ { u32 ad = (u32)(r_ebx+0x18u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0089a946: mov eax, dword ptr [ebx + 0x1058] */ r_eax = R32((u32)(r_ebx+0x1058u));
    /* 0089a94c: mov dword ptr [ebx + 0x1038], eax */ W32((u32)(r_ebx+0x1038u), r_eax);
    /* 0089a952: mov eax, dword ptr [ebx + 0x105c] */ r_eax = R32((u32)(r_ebx+0x105cu));
    /* 0089a958: mov dword ptr [ebx + 0x103c], eax */ W32((u32)(r_ebx+0x103cu), r_eax);
    /* 0089a95e: mov eax, dword ptr [ebx + 0x1060] */ r_eax = R32((u32)(r_ebx+0x1060u));
    /* 0089a964: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0089a966: mov dword ptr [ebx + 0x1034], ecx */ W32((u32)(r_ebx+0x1034u), r_ecx);
    /* 0089a96c: mov dword ptr [ebx + 0x1040], ecx */ W32((u32)(r_ebx+0x1040u), r_ecx);
    /* 0089a972: mov dword ptr [ebx + 0x1044], eax */ W32((u32)(r_ebx+0x1044u), r_eax);
L_0089a978:; BB(0x0089a978);
    /* 0089a978: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089a979: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089a97a: mov eax, ebx */ r_eax = r_ebx;
    /* 0089a97c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089a97d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089a97e: ret 0xc */ FN_RET(0x0089a735); r_esp += 16; return;
}

void f_0089aa18(void) /* sub_89AA18 */
{
    FN_ENTER(0x0089aa18);
    /* 0089aa18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089aa19: mov ebp, esp */ r_ebp = r_esp;
    /* 0089aa1b: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089aa1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089aa1f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089aa20: mov esi, ecx */ r_esi = r_ecx;
    /* 0089aa22: mov eax, dword ptr [esi + 0x1058] */ r_eax = R32((u32)(r_esi+0x1058u));
    /* 0089aa28: mov ecx, dword ptr [esi + 0x1068] */ r_ecx = R32((u32)(r_esi+0x1068u));
    /* 0089aa2e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089aa31: mov eax, dword ptr [esi + 0x1064] */ r_eax = R32((u32)(r_esi+0x1064u));
    /* 0089aa37: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0089aa3a: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0089aa3d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089aa40: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0089aa43: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0089aa46: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0089aa49: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0089aa4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089aa4e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089aa4f: mov dword ptr [esi + 0x1064], ecx */ W32((u32)(r_esi+0x1064u), r_ecx);
    /* 0089aa55: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089aa57: cmp dword ptr [esi + 8], eax */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089aa5a: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0089aa5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089aa5e: mov dword ptr [esi + 0x1058], eax */ W32((u32)(r_esi+0x1058u), r_eax);
    /* 0089aa64: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 0089aa67: mov dword ptr [esi + 0x2c], 0xa346c8 */ W32((u32)(r_esi+0x2cu), 0xa346c8u);
    /* 0089aa6e: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
    /* 0089aa71: je 0x89aaa4 */ if (fZ) goto L_0089aaa4;
L_0089aa73:; BB(0x0089aa73);
    /* 0089aa73: lea edi, [esi + 0x1048] */ r_edi = (u32)(r_esi+0x1048u);
    /* 0089aa79: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0089aa7b: lea ebx, [esi + 0x104c] */ r_ebx = (u32)(r_esi+0x104cu);
    /* 0089aa81: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089aa84: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0089aa86: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0089aa88: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 0089aa8b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0089aa8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089aa8f: mov ecx, esi */ r_ecx = r_esi;
    /* 0089aa91: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0089aa93: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89aa98u); f_00899f81();
    /* 0089aa98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089aa9b: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0089aa9d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089aaa0: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0089aaa2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0089aaa4:; BB(0x0089aaa4);
    /* 0089aaa4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089aaa6: lea edi, [esi + 0x1c] */ r_edi = (u32)(r_esi+0x1cu);
    /* 0089aaa9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089aaaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089aaab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089aaac: mov ecx, esi */ r_ecx = r_esi;
    /* 0089aaae: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x89aab1u); call_ind(t); }
    /* 0089aab1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089aab3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089aab4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089aab5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089aab6: mov ecx, esi */ r_ecx = r_esi;
    /* 0089aab8: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x89aabbu); call_ind(t); }
    /* 0089aabb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089aabe: mov dword ptr [esi + 0x1058], eax */ W32((u32)(r_esi+0x1058u), r_eax);
    /* 0089aac4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089aac7: mov dword ptr [esi + 0x1064], eax */ W32((u32)(r_esi+0x1064u), r_eax);
    /* 0089aacd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089aad0: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 0089aad3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089aad6: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 0089aad9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089aadc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089aadd: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0089aae0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089aae1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089aae2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089aae3: ret  */ FN_RET(0x0089aa18); r_esp += 4; return;
}

void f_0089aae4(void) /* sub_89AAE4 */
{
    FN_ENTER(0x0089aae4);
    /* 0089aae4: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089aaea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089aaeb: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0089aaef: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089aaf2: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089aaf4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089aaf6: jae 0x89ab50 */ if (!fC) goto L_0089ab50;
L_0089aaf8:; BB(0x0089aaf8);
    /* 0089aaf8: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089aafa: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089aafb: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0089aafe: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089aaff: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0089ab02: mov esi, eax */ r_esi = r_eax;
L_0089ab04:; BB(0x0089ab04);
    /* 0089ab04: fld dword ptr [edx - 8] */ FPUSH(R_F32((u32)(r_edx+0xfffffff8u)));
    /* 0089ab07: fcomp dword ptr [ecx + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x1cu))); FPOP();
    /* 0089ab0a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089ab0c: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089ab0f: jp 0x89ab4a */ if (fP) goto L_0089ab4a;
L_0089ab11:; BB(0x0089ab11);
    /* 0089ab11: fld dword ptr [edx - 4] */ FPUSH(R_F32((u32)(r_edx+0xfffffffcu)));
    /* 0089ab14: fcomp dword ptr [ecx + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x20u))); FPOP();
    /* 0089ab17: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089ab19: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089ab1c: jp 0x89ab4a */ if (fP) goto L_0089ab4a;
L_0089ab1e:; BB(0x0089ab1e);
    /* 0089ab1e: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0089ab20: fcomp dword ptr [ecx + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x24u))); FPOP();
    /* 0089ab23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089ab25: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089ab28: jp 0x89ab4a */ if (fP) goto L_0089ab4a;
L_0089ab2a:; BB(0x0089ab2a);
    /* 0089ab2a: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0089ab2d: fcomp dword ptr [ecx + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x28u))); FPOP();
    /* 0089ab30: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089ab32: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089ab35: jp 0x89ab4a */ if (fP) goto L_0089ab4a;
L_0089ab37:; BB(0x0089ab37);
    /* 0089ab37: fldz  */ FPUSH(0.0);
    /* 0089ab39: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0089ab3c: fldz  */ FPUSH(0.0);
    /* 0089ab3e: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089ab40: fldz  */ FPUSH(0.0);
    /* 0089ab42: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089ab45: fldz  */ FPUSH(0.0);
    /* 0089ab47: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
L_0089ab4a:; BB(0x0089ab4a);
    /* 0089ab4a: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 0089ab4d: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089ab4e: jne 0x89ab04 */ if (!fZ) goto L_0089ab04;
L_0089ab50:; BB(0x0089ab50);
    /* 0089ab50: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089ab51: ret 4 */ FN_RET(0x0089aae4); r_esp += 8; return;
}

void f_0089ab54(void) /* sub_89AB54 */
{
    FN_ENTER(0x0089ab54);
    /* 0089ab54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089ab55: mov ebp, esp */ r_ebp = r_esp;
    /* 0089ab57: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089ab5a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089ab5d: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ab64: je 0x89ab74 */ if (fZ) goto L_0089ab74;
L_0089ab66:; BB(0x0089ab66);
    /* 0089ab66: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089ab69: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89ab6eu); f_00899f81();
    /* 0089ab6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089ab71: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089ab74:; BB(0x0089ab74);
    /* 0089ab74: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089ab7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089ab7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ab7e: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ab81: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089ab84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ab85: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089ab8b: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ab8e: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ab90: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ab93: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089ab96: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089ab99: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089ab9c: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089ab9f: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089aba2: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89aba7u); f_0089a712();
    /* 0089aba7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089abaa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089abac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089abae: cmp dword ptr [ecx + 0x1058], eax */ {  u32 a = R32((u32)(r_ecx+0x1058u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089abb4: jbe 0x89ac2f */ if ((fC||fZ)) goto L_0089ac2f;
L_0089abb6:; BB(0x0089abb6);
    /* 0089abb6: mov ecx, esi */ r_ecx = r_esi;
    /* 0089abb8: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089abbb: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0089abbe: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089abc1: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089abc4: fld dword ptr [eax + ecx + 8] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x8u)));
    /* 0089abc8: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089abce: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089abd0: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089abd3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089abd5: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089abd8: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089abdb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089abde: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0089abe0: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089abe3: fld dword ptr [eax + ecx + 4] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x4u)));
    /* 0089abe7: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089abed: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089abf0: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089abf3: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089abf6: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089abf9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089abfc: mov byte ptr [edx + 1], cl */ W8((u32)(r_edx+0x1u), (u8)r_ecx);
    /* 0089abff: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089ac02: fld dword ptr [eax + ecx] */ FPUSH(R_F32((u32)(r_eax+r_ecx)));
    /* 0089ac05: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089ac0b: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089ac0e: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089ac11: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089ac14: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089ac17: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089ac1a: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 0089ac1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089ac20: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ac23: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089ac24: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089ac27: cmp esi, dword ptr [ecx + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089ac2d: jb 0x89abb6 */ if (fC) goto L_0089abb6;
L_0089ac2f:; BB(0x0089ac2f);
    /* 0089ac2f: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089ac34: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0089ac37: fldcw word ptr [ebp - 0x18] */ fcw = R16((u32)(r_ebp+0xffffffe8u));
    /* 0089ac3a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089ac3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089ac3c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089ac3d: ret 0xc */ FN_RET(0x0089ab54); r_esp += 16; return;
}

void f_0089ac40(void) /* sub_89AC40 */
{
    FN_ENTER(0x0089ac40);
    /* 0089ac40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089ac41: mov ebp, esp */ r_ebp = r_esp;
    /* 0089ac43: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089ac46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089ac49: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ac50: je 0x89ac60 */ if (fZ) goto L_0089ac60;
L_0089ac52:; BB(0x0089ac52);
    /* 0089ac52: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089ac55: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89ac5au); f_00899f81();
    /* 0089ac5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089ac5d: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089ac60:; BB(0x0089ac60);
    /* 0089ac60: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089ac66: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089ac69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ac6a: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ac6d: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089ac70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ac71: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089ac77: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ac7a: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ac7c: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ac7f: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089ac82: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089ac85: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089ac88: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089ac8b: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089ac8e: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89ac93u); f_0089a712();
    /* 0089ac93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089ac96: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089ac98: cmp dword ptr [eax + 0x1058], esi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089ac9e: jbe 0x89ad52 */ if ((fC||fZ)) goto L_0089ad52;
L_0089aca4:; BB(0x0089aca4);
    /* 0089aca4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089aca6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089aca7:; BB(0x0089aca7);
    /* 0089aca7: mov eax, esi */ r_eax = r_esi;
    /* 0089aca9: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089acac: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089acaf: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089acb2: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089acb5: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089acb8: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089acbe: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089acc0: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089acc3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089acc5: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089acc8: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089accb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089acce: fld dword ptr [ecx + eax + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x4u)));
    /* 0089acd2: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089acd5: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089acdb: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089acde: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089ace1: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089ace4: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089ace7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089acea: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0089aced: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089acf0: fld dword ptr [ecx + eax + 8] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x8u)));
    /* 0089acf4: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089acfa: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089acfd: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089ad00: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089ad03: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089ad06: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089ad09: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089ad0c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089ad0f: fld dword ptr [ecx + eax + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0xcu)));
    /* 0089ad13: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089ad19: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089ad1c: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089ad1f: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089ad22: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089ad25: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089ad28: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089ad2b: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089ad2d: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089ad30: or eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089ad33: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089ad36: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089ad39: or eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089ad3c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0089ad3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089ad41: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ad44: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089ad45: cmp esi, dword ptr [eax + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089ad4b: jb 0x89aca7 */ if (fC) goto L_0089aca7;
L_0089ad51:; BB(0x0089ad51);
    /* 0089ad51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089ad52:; BB(0x0089ad52);
    /* 0089ad52: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089ad57: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089ad5a: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 0089ad5d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089ad5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089ad5f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089ad60: ret 0xc */ FN_RET(0x0089ac40); r_esp += 16; return;
}

void f_0089ad63(void) /* sub_89AD63 */
{
    FN_ENTER(0x0089ad63);
    /* 0089ad63: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089ad64: mov ebp, esp */ r_ebp = r_esp;
    /* 0089ad66: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089ad69: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089ad6c: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ad73: je 0x89ad83 */ if (fZ) goto L_0089ad83;
L_0089ad75:; BB(0x0089ad75);
    /* 0089ad75: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089ad78: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89ad7du); f_00899f81();
    /* 0089ad7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089ad80: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089ad83:; BB(0x0089ad83);
    /* 0089ad83: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089ad89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089ad8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ad8d: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ad90: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089ad93: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ad94: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089ad9a: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ad9d: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ad9f: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ada2: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089ada5: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089ada8: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089adab: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089adae: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089adb1: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89adb6u); f_0089a712();
    /* 0089adb6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089adb9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089adbb: cmp dword ptr [eax + 0x1058], esi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089adc1: jbe 0x89ae53 */ if ((fC||fZ)) goto L_0089ae53;
L_0089adc7:; BB(0x0089adc7);
    /* 0089adc7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089adc9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089adca:; BB(0x0089adca);
    /* 0089adca: mov eax, esi */ r_eax = r_esi;
    /* 0089adcc: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089adcf: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089add2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089add5: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089add8: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089addb: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089ade1: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089ade3: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089ade6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089ade8: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089adeb: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089adee: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089adf1: fld dword ptr [ecx + ebx + 4] */ FPUSH(R_F32((u32)(r_ecx+r_ebx+0x4u)));
    /* 0089adf5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089adf8: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089adfe: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089ae01: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089ae04: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089ae07: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089ae0a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089ae0d: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0089ae10: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089ae13: fld dword ptr [ecx + ebx + 8] */ FPUSH(R_F32((u32)(r_ecx+r_ebx+0x8u)));
    /* 0089ae17: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089ae1d: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089ae20: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089ae23: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089ae26: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089ae29: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089ae2c: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089ae2f: or eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089ae32: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089ae35: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089ae38: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089ae3a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0089ae3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089ae3f: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ae42: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089ae43: cmp esi, dword ptr [eax + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089ae49: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0089ae4c: jb 0x89adca */ if (fC) goto L_0089adca;
L_0089ae52:; BB(0x0089ae52);
    /* 0089ae52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089ae53:; BB(0x0089ae53);
    /* 0089ae53: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089ae58: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0089ae5b: fldcw word ptr [ebp - 0x1c] */ fcw = R16((u32)(r_ebp+0xffffffe4u));
    /* 0089ae5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089ae5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089ae60: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089ae61: ret 0xc */ FN_RET(0x0089ad63); r_esp += 16; return;
}

void f_0089ae64(void) /* sub_89AE64 */
{
    FN_ENTER(0x0089ae64);
    /* 0089ae64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089ae65: mov ebp, esp */ r_ebp = r_esp;
    /* 0089ae67: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089ae6a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089ae6d: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ae74: je 0x89ae84 */ if (fZ) goto L_0089ae84;
L_0089ae76:; BB(0x0089ae76);
    /* 0089ae76: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089ae79: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89ae7eu); f_00899f81();
    /* 0089ae7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089ae81: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089ae84:; BB(0x0089ae84);
    /* 0089ae84: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089ae8a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089ae8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ae8e: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ae91: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089ae94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ae95: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089ae9b: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ae9e: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089aea0: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089aea3: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089aea6: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089aea9: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089aeac: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089aeaf: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089aeb2: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89aeb7u); f_0089a712();
    /* 0089aeb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089aeba: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089aebc: cmp dword ptr [eax + 0x1058], esi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089aec2: jbe 0x89af54 */ if ((fC||fZ)) goto L_0089af54;
L_0089aec8:; BB(0x0089aec8);
    /* 0089aec8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089aeca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089aecb:; BB(0x0089aecb);
    /* 0089aecb: mov eax, esi */ r_eax = r_esi;
    /* 0089aecd: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089aed0: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089aed3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089aed6: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089aed9: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089aedc: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089aee2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089aee4: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089aee7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089aee9: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089aeec: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089aeef: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089aef2: fld dword ptr [ecx + ebx + 4] */ FPUSH(R_F32((u32)(r_ecx+r_ebx+0x4u)));
    /* 0089aef6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089aef9: fmul dword ptr [0x99ba94] */ ST(0) = ST(0) * R_F32((u32)(0x99ba94u));
    /* 0089aeff: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089af02: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089af05: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089af08: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089af0b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089af0e: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0089af11: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089af14: fld dword ptr [ecx + ebx + 8] */ FPUSH(R_F32((u32)(r_ecx+r_ebx+0x8u)));
    /* 0089af18: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089af1e: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089af21: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089af24: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089af27: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089af2a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089af2d: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089af30: or eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089af33: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089af36: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089af39: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089af3b: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0089af3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089af41: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089af42: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089af43: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089af44: cmp esi, dword ptr [eax + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089af4a: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0089af4d: jb 0x89aecb */ if (fC) goto L_0089aecb;
L_0089af53:; BB(0x0089af53);
    /* 0089af53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089af54:; BB(0x0089af54);
    /* 0089af54: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089af59: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0089af5c: fldcw word ptr [ebp - 0x1c] */ fcw = R16((u32)(r_ebp+0xffffffe4u));
    /* 0089af5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089af60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089af61: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089af62: ret 0xc */ FN_RET(0x0089ae64); r_esp += 16; return;
}

void f_0089af65(void) /* sub_89AF65 */
{
    FN_ENTER(0x0089af65);
    /* 0089af65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089af66: mov ebp, esp */ r_ebp = r_esp;
    /* 0089af68: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089af6b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089af6e: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089af75: je 0x89af85 */ if (fZ) goto L_0089af85;
L_0089af77:; BB(0x0089af77);
    /* 0089af77: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089af7a: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89af7fu); f_00899f81();
    /* 0089af7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089af82: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089af85:; BB(0x0089af85);
    /* 0089af85: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089af8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089af8e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089af8f: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089af92: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089af95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089af96: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089af9c: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089af9f: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089afa1: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089afa4: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089afa7: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089afaa: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089afad: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089afb0: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089afb3: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89afb8u); f_0089a712();
    /* 0089afb8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089afbb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089afbd: cmp dword ptr [eax + 0x1058], esi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089afc3: jbe 0x89b055 */ if ((fC||fZ)) goto L_0089b055;
L_0089afc9:; BB(0x0089afc9);
    /* 0089afc9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089afcb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089afcc:; BB(0x0089afcc);
    /* 0089afcc: mov eax, esi */ r_eax = r_esi;
    /* 0089afce: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089afd1: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089afd4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089afd7: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089afda: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089afdd: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089afe3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089afe5: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089afe8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089afea: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089afed: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089aff0: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089aff3: fld dword ptr [ecx + ebx + 4] */ FPUSH(R_F32((u32)(r_ecx+r_ebx+0x4u)));
    /* 0089aff7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089affa: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089b000: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b003: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b006: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b009: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b00c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089b00f: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0089b012: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089b015: fld dword ptr [ecx + ebx + 8] */ FPUSH(R_F32((u32)(r_ecx+r_ebx+0x8u)));
    /* 0089b019: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089b01f: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b022: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b025: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b028: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b02b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089b02e: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b031: or eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b034: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b037: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b03a: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b03c: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0089b03f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b042: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b043: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b044: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089b045: cmp esi, dword ptr [eax + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b04b: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0089b04e: jb 0x89afcc */ if (fC) goto L_0089afcc;
L_0089b054:; BB(0x0089b054);
    /* 0089b054: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089b055:; BB(0x0089b055);
    /* 0089b055: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089b05a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0089b05d: fldcw word ptr [ebp - 0x1c] */ fcw = R16((u32)(r_ebp+0xffffffe4u));
    /* 0089b060: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089b061: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089b062: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089b063: ret 0xc */ FN_RET(0x0089af65); r_esp += 16; return;
}

