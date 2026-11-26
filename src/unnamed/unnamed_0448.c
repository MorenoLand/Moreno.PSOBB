#include "protos.h"

void f_00448328(void) /* sub_448328 */
{
    FN_ENTER(0x00448328);
    /* 00448328: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 0044832e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00448330: jne 0x44833a */ if (!fZ) goto L_0044833a;
L_00448332:; BB(0x00448332);
    /* 00448332: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00448334: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x44833au); call_ind(t); }
L_0044833a:; BB(0x0044833a);
    /* 0044833a: ret  */ FN_RET(0x00448328); r_esp += 4; return;
}

void f_0044833c(void) /* sub_44833C */
{
    FN_ENTER(0x0044833c);
    /* 0044833c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044833d: mov esi, ecx */ r_esi = r_ecx;
    /* 0044833f: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00448345: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448347: je 0x448350 */ if (fZ) goto L_00448350;
L_00448349:; BB(0x00448349);
    /* 00448349: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044834c: jne 0x44837c */ if (!fZ) goto L_0044837c;
L_0044834e:; BB(0x0044834e);
    /* 0044834e: jmp 0x448375 */ goto L_00448375;
L_00448350:; BB(0x00448350);
    /* 00448350: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00448353: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00448358: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0044835b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044835d: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00448364: mov ecx, esi */ r_ecx = r_esi;
    /* 00448366: call 0x449178 */ r_esp -= 4; W32(r_esp, 0x44836bu); f_00449178();
    /* 0044836b: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
L_00448375:; BB(0x00448375);
    /* 00448375: mov ecx, esi */ r_ecx = r_esi;
    /* 00448377: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x44837cu); f_007aa094();
L_0044837c:; BB(0x0044837c);
    /* 0044837c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044837d: ret  */ FN_RET(0x0044833c); r_esp += 4; return;
}

void f_00448380(void)
{
    FN_ENTER(0x00448380);
    /* 00448380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448381: mov ebp, esp */ r_ebp = r_esp;
    /* 00448383: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00448385: push 0x8ce93c */ { u32 v = 0x8ce93cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044838a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00448390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448391: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00448398: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044839b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044839e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004483a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004483a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004483a7: push 0x518 */ { u32 v = 0x518u; r_esp -= 4; W32(r_esp, v); }
    /* 004483ac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004483b3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4483b8u); f_005caba4();
    /* 004483b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004483b9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004483bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004483be: je 0x4483f7 */ if (fZ) goto L_004483f7;
L_004483c0:; BB(0x004483c0);
    /* 004483c0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004483c7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004483ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004483d1: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004483d7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004483da: call 0x4483fc */ r_esp -= 4; W32(r_esp, 0x4483dfu); f_004483fc();
    /* 004483df: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004483e2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004483e9:; BB(0x004483e9);
    /* 004483e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004483ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004483f3: mov esp, ebp */ r_esp = r_ebp;
    /* 004483f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004483f6: ret  */ FN_RET(0x00448380); r_esp += 4; return;
L_004483f7:; BB(0x004483f7);
    /* 004483f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004483f9: jmp 0x4483e9 */ goto L_004483e9;
}

void f_004483fc(void) /* sub_4483FC */
{
    FN_ENTER(0x004483fc);
    /* 004483fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004483fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004483ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00448401: push 0x8ce96c */ { u32 v = 0x8ce96cu; r_esp -= 4; W32(r_esp, v); }
    /* 00448406: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044840c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044840d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00448414: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00448417: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044841a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0044841d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00448420: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00448423: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00448426: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448429: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044842c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044842f: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x448434u); f_0052c3fc();
    /* 00448434: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044843b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044843e: mov dword ptr [ecx], 0xaf6220 */ W32((u32)(r_ecx), 0xaf6220u);
    /* 00448444: add ecx, 0x498 */ {  u32 a = r_ecx; u32 b = 0x498u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044844a: call 0x57713c */ r_esp -= 4; W32(r_esp, 0x44844fu); f_0057713c();
    /* 0044844f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00448456: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448459: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044845c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044845d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044845f: call dword ptr [edx + 0x14c] */ { u32 t = R32((u32)(r_edx+0x14cu)); r_esp -= 4; W32(r_esp, 0x448465u); call_ind(t); }
    /* 00448465: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448468: call 0x4491cc */ r_esp -= 4; W32(r_esp, 0x44846du); f_004491cc();
    /* 0044846d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448470: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448473: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044847a: mov esp, ebp */ r_esp = r_ebp;
    /* 0044847c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044847d: ret 8 */ FN_RET(0x004483fc); r_esp += 12; return;
}

void f_00448480(void) /* sub_448480 */
{
    FN_ENTER(0x00448480);
    /* 00448480: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00448481: mov ecx, dword ptr [0xa44be8] */ r_ecx = R32((u32)(0xa44be8u));
    /* 00448487: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448489: je 0x448491 */ if (fZ) goto L_00448491;
L_0044848b:; BB(0x0044848b);
    /* 0044848b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044848d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044848f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x448491u); call_ind(t); }
L_00448491:; BB(0x00448491);
    /* 00448491: mov dword ptr [0xa44be8], 0 */ W32((u32)(0xa44be8u), 0x0u);
    /* 0044849b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044849d: mov ebx, eax */ r_ebx = r_eax;
L_0044849f:; BB(0x0044849f);
    /* 0044849f: mov ecx, dword ptr [ebx + 0xa44bd4] */ r_ecx = R32((u32)(r_ebx+0xa44bd4u));
    /* 004484a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004484a7: je 0x4484af */ if (fZ) goto L_004484af;
L_004484a9:; BB(0x004484a9);
    /* 004484a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004484ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004484ad: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4484afu); call_ind(t); }
L_004484af:; BB(0x004484af);
    /* 004484af: mov dword ptr [ebx + 0xa44bd4], 0 */ W32((u32)(r_ebx+0xa44bd4u), 0x0u);
    /* 004484b9: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004484bc: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004484bf: jl 0x44849f */ if ((fS!=fO)) goto L_0044849f;
L_004484c1:; BB(0x004484c1);
    /* 004484c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004484c2: ret  */ FN_RET(0x00448480); r_esp += 4; return;
}

void f_004484c4(void) /* sub_4484C4 */
{
    FN_ENTER(0x004484c4);
    /* 004484c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004484c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004484c7: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004484ca: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004484cf: jne 0x448516 */ if (!fZ) goto L_00448516;
L_004484d1:; BB(0x004484d1);
    /* 004484d1: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 004484d7: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004484dc: jne 0x448516 */ if (!fZ) goto L_00448516;
L_004484de:; BB(0x004484de);
    /* 004484de: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004484e5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004484e8: je 0x448516 */ if (fZ) goto L_00448516;
L_004484ea:; BB(0x004484ea);
    /* 004484ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004484ec: call 0x44851c */ r_esp -= 4; W32(r_esp, 0x4484f1u); f_0044851c();
    /* 004484f1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004484f6: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 004484fc: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 00448503: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00448505: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00448508: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 0044850e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00448510: call dword ptr [eax + 0xf8] */ { u32 t = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, 0x448516u); call_ind(t); }
L_00448516:; BB(0x00448516);
    /* 00448516: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00448517: ret 4 */ FN_RET(0x004484c4); r_esp += 8; return;
}

void f_0044851c(void) /* sub_44851C */
{
    FN_ENTER(0x0044851c);
    /* 0044851c: movzx eax, word ptr [0x9a4dec] */ r_eax = (u32)R16((u32)(0x9a4decu));
    /* 00448523: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448524: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x448529u); f_007b4d18();
    /* 00448529: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044852a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044852c: je 0x448535 */ if (fZ) goto L_00448535;
L_0044852e:; BB(0x0044852e);
    /* 0044852e: mov ecx, eax */ r_ecx = r_eax;
    /* 00448530: call 0x44a2f8 */ r_esp -= 4; W32(r_esp, 0x448535u); f_0044a2f8();
L_00448535:; BB(0x00448535);
    /* 00448535: ret  */ FN_RET(0x0044851c); r_esp += 4; return;
}

void f_00448538(void) /* sub_448538 */
{
    FN_ENTER(0x00448538);
    /* 00448538: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448539: mov esi, ecx */ r_esi = r_ecx;
    /* 0044853b: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0044853e: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00448543: jne 0x44858a */ if (!fZ) goto L_0044858a;
L_00448545:; BB(0x00448545);
    /* 00448545: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0044854b: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00448550: je 0x448554 */ if (fZ) goto L_00448554;
L_00448552:; BB(0x00448552);
    /* 00448552: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00448553: ret  */ FN_RET(0x00448538); r_esp += 4; return;
L_00448554:; BB(0x00448554);
    /* 00448554: mov ecx, esi */ r_ecx = r_esi;
    /* 00448556: call 0x44851c */ r_esp -= 4; W32(r_esp, 0x44855bu); f_0044851c();
    /* 0044855b: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00448561: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00448564: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 0044856a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044856c: jne 0x44858a */ if (!fZ) goto L_0044858a;
L_0044856e:; BB(0x0044856e);
    /* 0044856e: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00448575: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00448578: je 0x44858a */ if (fZ) goto L_0044858a;
L_0044857a:; BB(0x0044857a);
    /* 0044857a: mov dword ptr [esi + 0x37c], 0xb */ W32((u32)(r_esi+0x37cu), 0xbu);
    /* 00448584: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
L_0044858a:; BB(0x0044858a);
    /* 0044858a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044858b: ret  */ FN_RET(0x00448538); r_esp += 4; return;
}

void f_0044858c(void) /* sub_44858C */
{
    FN_ENTER(0x0044858c);
    /* 0044858c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044858d: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00448590: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00448595: jne 0x4485e0 */ if (!fZ) goto L_004485e0;
L_00448597:; BB(0x00448597);
    /* 00448597: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 0044859d: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004485a3: jne 0x4485e0 */ if (!fZ) goto L_004485e0;
L_004485a5:; BB(0x004485a5);
    /* 004485a5: movsx ebp, word ptr [ecx + 0x32e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004485ac: cmp ebp, 9 */ {  u32 a = r_ebp; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004485af: je 0x4485e0 */ if (fZ) goto L_004485e0;
L_004485b1:; BB(0x004485b1);
    /* 004485b1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004485b6: mov word ptr [ecx + 0x340], ax */ W16((u32)(r_ecx+0x340u), (u16)r_eax);
    /* 004485bd: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004485c0: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 004485c6: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004485c9: jne 0x4485e0 */ if (!fZ) goto L_004485e0;
L_004485cb:; BB(0x004485cb);
    /* 004485cb: cmp ebp, 9 */ {  u32 a = r_ebp; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004485ce: je 0x4485e0 */ if (fZ) goto L_004485e0;
L_004485d0:; BB(0x004485d0);
    /* 004485d0: mov dword ptr [ecx + 0x37c], 9 */ W32((u32)(r_ecx+0x37cu), 0x9u);
    /* 004485da: mov dword ptr [ecx + 0x388], ebp */ W32((u32)(r_ecx+0x388u), r_ebp);
L_004485e0:; BB(0x004485e0);
    /* 004485e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004485e1: ret 4 */ FN_RET(0x0044858c); r_esp += 8; return;
}

void f_004485e4(void) /* sub_4485E4 */
{
    FN_ENTER(0x004485e4);
    /* 004485e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004485e5: mov edi, ecx */ r_edi = r_ecx;
    /* 004485e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004485ea: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004485ef: jne 0x448659 */ if (!fZ) goto L_00448659;
L_004485f1:; BB(0x004485f1);
    /* 004485f1: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 004485f7: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004485fc: jne 0x448659 */ if (!fZ) goto L_00448659;
L_004485fe:; BB(0x004485fe);
    /* 004485fe: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00448605: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00448608: je 0x448659 */ if (fZ) goto L_00448659;
L_0044860a:; BB(0x0044860a);
    /* 0044860a: mov ecx, edi */ r_ecx = r_edi;
    /* 0044860c: call 0x44851c */ r_esp -= 4; W32(r_esp, 0x448611u); f_0044851c();
    /* 00448611: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00448616: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044861b: je 0x448659 */ if (fZ) goto L_00448659;
L_0044861d:; BB(0x0044861d);
    /* 0044861d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00448622: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 00448628: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 0044862f: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00448632: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 00448638: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044863b: jne 0x448659 */ if (!fZ) goto L_00448659;
L_0044863d:; BB(0x0044863d);
    /* 0044863d: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00448644: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00448647: je 0x448659 */ if (fZ) goto L_00448659;
L_00448649:; BB(0x00448649);
    /* 00448649: mov dword ptr [edi + 0x37c], 0xa */ W32((u32)(r_edi+0x37cu), 0xau);
    /* 00448653: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
L_00448659:; BB(0x00448659);
    /* 00448659: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044865a: ret 4 */ FN_RET(0x004485e4); r_esp += 8; return;
}

void f_00448660(void) /* sub_448660 */
{
    FN_ENTER(0x00448660);
    /* 00448660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448661: mov ebp, esp */ r_ebp = r_esp;
    /* 00448663: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00448665: push 0x8ce994 */ { u32 v = 0x8ce994u; r_esp -= 4; W32(r_esp, v); }
    /* 0044866a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00448670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448671: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00448678: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044867b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044867e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00448681: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00448684: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00448687: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0044868b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044868e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044868f: mov word ptr [ecx + 0x340], ax */ W16((u32)(r_ecx+0x340u), (u16)r_eax);
    /* 00448696: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44869bu); f_0068d5a8();
    /* 0044869b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044869c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044869f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004486a0: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x4486a5u); f_007706b0();
    /* 004486a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004486a8: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x4486adu); f_00770738();
    /* 004486ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004486af: je 0x448712 */ if (fZ) goto L_00448712;
L_004486b1:; BB(0x004486b1);
    /* 004486b1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004486b8: push 0x39c */ { u32 v = 0x39cu; r_esp -= 4; W32(r_esp, v); }
    /* 004486bd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4486c2u); f_005caba4();
    /* 004486c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004486c3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004486c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004486c8: je 0x4486fe */ if (fZ) goto L_004486fe;
L_004486ca:; BB(0x004486ca);
    /* 004486ca: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004486d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004486d8: push dword ptr [0x9a4df0] */ { u32 v = R32((u32)(0x9a4df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004486de: movzx eax, word ptr [0x9a4dec] */ r_eax = (u32)R16((u32)(0x9a4decu));
    /* 004486e5: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 004486e9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004486ec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004486ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004486f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004486f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004486f2: call 0x449cb4 */ r_esp -= 4; W32(r_esp, 0x4486f7u); f_00449cb4();
    /* 004486f7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004486fe:; BB(0x004486fe);
    /* 004486fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00448701: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 00448707: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044870c: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
L_00448712:; BB(0x00448712);
    /* 00448712: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00448715: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448718: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044871f: mov esp, ebp */ r_esp = r_ebp;
    /* 00448721: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00448722: ret 4 */ FN_RET(0x00448660); r_esp += 8; return;
}

void f_00448728(void) /* sub_448728 */
{
    FN_ENTER(0x00448728);
    /* 00448728: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00448729: mov ebx, esp */ r_ebx = r_esp;
    /* 0044872b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0044872e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044872f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448731: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00448734: mov eax, ecx */ r_eax = r_ecx;
    /* 00448736: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0044873c: mov edx, 0x10000 */ r_edx = 0x10000u;
    /* 00448741: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00448745: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00448747: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0044874c: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00448750: mov edx, 0 */ r_edx = 0x0u;
    /* 00448755: jle 0x448785 */ if ((fZ||fS!=fO)) goto L_00448785;
L_00448757:; BB(0x00448757);
    /* 00448757: mov esi, eax */ r_esi = r_eax;
    /* 00448759: mov ebp, edx */ r_ebp = r_edx;
    /* 0044875b: mov edx, ecx */ r_edx = r_ecx;
L_0044875d:; BB(0x0044875d);
    /* 0044875d: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00448764: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448766: je 0x448785 */ if (fZ) goto L_00448785;
L_00448768:; BB(0x00448768);
    /* 00448768: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0044876c: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448771: jge 0x448785 */ if ((fS==fO)) goto L_00448785;
L_00448773:; BB(0x00448773);
    /* 00448773: mov eax, dword ptr [edi + 0x3ec] */ r_eax = R32((u32)(r_edi+0x3ecu));
    /* 00448779: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044877c: je 0x448793 */ if (fZ) goto L_00448793;
L_0044877e:; BB(0x0044877e);
    /* 0044877e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00448781: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448783: jl 0x44875d */ if ((fS!=fO)) goto L_0044875d;
L_00448785:; BB(0x00448785);
    /* 00448785: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00448789: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044878c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044878d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044878e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044878f: mov esp, ebx */ r_esp = r_ebx;
    /* 00448791: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00448792: ret  */ FN_RET(0x00448728); r_esp += 4; return;
L_00448793:; BB(0x00448793);
    /* 00448793: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00448796: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044879b: jne 0x44877e */ if (!fZ) goto L_0044877e;
L_0044879d:; BB(0x0044879d);
    /* 0044879d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004487a0: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 004487a6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004487a9: mov eax, dword ptr [edi + 0x304] */ r_eax = R32((u32)(r_edi+0x304u));
    /* 004487af: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 004487b5: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004487b9: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 004487bf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004487c3: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4487c8u); f_0082f9c4();
    /* 004487c8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004487cb: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004487cf: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004487d1: fmul qword ptr [0x8fe6c8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6c8u));
    /* 004487d7: fdiv qword ptr [0x8fe6c0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6c0u));
    /* 004487dd: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 004487e0: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004487e4: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004487e9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004487ee: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004487f2: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004487f6: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004487fa: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004487fe: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00448802: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00448808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448809: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044880a: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x44880fu); f_007a9018();
    /* 0044880f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448812: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00448814: jl 0x448885 */ if ((fS!=fO)) goto L_00448885;
L_00448816:; BB(0x00448816);
    /* 00448816: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00448819: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0044881d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0044881f: fmul qword ptr [0x8fe6c8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6c8u));
    /* 00448825: fdiv qword ptr [0x8fe6c0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6c0u));
    /* 0044882b: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0044882e: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00448832: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00448837: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044883c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00448840: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00448844: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00448848: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0044884c: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00448850: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00448856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448857: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00448858: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x44885du); f_007a9018();
    /* 0044885d: mov ecx, eax */ r_ecx = r_eax;
    /* 0044885f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00448862:; BB(0x00448862);
    /* 00448862: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00448868: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0044886c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044886e: jg 0x44877e */ if ((!fZ&&fS==fO)) goto L_0044877e;
L_00448874:; BB(0x00448874);
    /* 00448874: movzx edi, word ptr [edi + 0x1c] */ r_edi = (u32)R16((u32)(r_edi+0x1cu));
    /* 00448878: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0044887c: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00448880: jmp 0x44877e */ goto L_0044877e;
L_00448885:; BB(0x00448885);
    /* 00448885: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00448888: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0044888c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0044888e: fmul qword ptr [0x8fe6c8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6c8u));
    /* 00448894: fdiv qword ptr [0x8fe6c0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6c0u));
    /* 0044889a: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0044889d: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004488a1: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004488a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004488ab: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004488af: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004488b3: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004488b7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004488bb: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004488bf: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004488c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004488c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004488c7: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x4488ccu); f_007a9018();
    /* 004488cc: mov ecx, eax */ r_ecx = r_eax;
    /* 004488ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004488d1: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004488d3: jmp 0x448862 */ goto L_00448862;
}

void f_004488d8(void) /* sub_4488D8 */
{
    FN_ENTER(0x004488d8);
    /* 004488d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004488d9: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004488dc: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 004488e0: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 004488e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004488e5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x4488eau); f_007b4d18();
    /* 004488ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004488eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004488ed: je 0x448b8e */ if (fZ) goto L_00448b8e;
L_004488f3:; BB(0x004488f3);
    /* 004488f3: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 004488f7: mov ecx, 0x10000 */ r_ecx = 0x10000u;
    /* 004488fc: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00448900: mov word ptr [eax + 0x4b4], dx */ W16((u32)(r_eax+0x4b4u), (u16)r_edx);
    /* 00448907: movzx edx, word ptr [ebx + 6] */ r_edx = (u32)R16((u32)(r_ebx+0x6u));
    /* 0044890b: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0044890e: mov word ptr [eax + 0x4b6], dx */ W16((u32)(r_eax+0x4b6u), (u16)r_edx);
    /* 00448915: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00448919: mov word ptr [eax + 0x4b8], dx */ W16((u32)(r_eax+0x4b8u), (u16)r_edx);
    /* 00448920: movzx edx, word ptr [ebx + 0xa] */ r_edx = (u32)R16((u32)(r_ebx+0xau));
    /* 00448924: mov word ptr [eax + 0x4ba], dx */ W16((u32)(r_eax+0x4bau), (u16)r_edx);
    /* 0044892b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044892d: mov ebx, eax */ r_ebx = r_eax;
    /* 0044892f: mov esi, edx */ r_esi = r_edx;
    /* 00448931: mov edi, ecx */ r_edi = r_ecx;
L_00448933:; BB(0x00448933);
    /* 00448933: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 00448939: test edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044893b: jne 0x448949 */ if (!fZ) goto L_00448949;
L_0044893d:; BB(0x0044893d);
    /* 0044893d: movsx eax, word ptr [ebx + esi*2 + 0x4b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*2+0x4b4u));
    /* 00448945: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00448947: jle 0x44895f */ if ((fZ||fS!=fO)) goto L_0044895f;
L_00448949:; BB(0x00448949);
    /* 00448949: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044894c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044894e: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448951: jl 0x448933 */ if ((fS!=fO)) goto L_00448933;
L_00448953:; BB(0x00448953);
    /* 00448953: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00448957: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0044895a: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044895d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044895e: ret  */ FN_RET(0x004488d8); r_esp += 4; return;
L_0044895f:; BB(0x0044895f);
    /* 0044895f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448961: je 0x448b02 */ if (fZ) goto L_00448b02;
L_00448967:; BB(0x00448967);
    /* 00448967: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044896a: je 0x448a82 */ if (fZ) goto L_00448a82;
L_00448970:; BB(0x00448970);
    /* 00448970: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448973: jne 0x4489f1 */ if (!fZ) goto L_004489f1;
L_00448975:; BB(0x00448975);
    /* 00448975: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044897b: jne 0x448949 */ if (!fZ) goto L_00448949;
L_0044897d:; BB(0x0044897d);
    /* 0044897d: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00448983: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 00448989: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0044898f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00448992: and eax, 0xeffffffe */ {  u32 a = r_eax; u32 b = 0xeffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00448997: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 0044899a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044899c: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x4489a1u); f_0052cac0();
    /* 004489a1: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 004489a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004489a6: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 004489a8: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004489aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004489ac: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x4489b2u); call_ind(t); }
    /* 004489b2: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 004489b6: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004489b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004489ba: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004489bd: push 0x9a5504 */ { u32 v = 0x9a5504u; r_esp -= 4; W32(r_esp, v); }
    /* 004489c2: push dword ptr [0xa44be0] */ { u32 v = R32((u32)(0xa44be0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004489c8: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x4489cdu); f_00578aa0();
    /* 004489cd: push 0xa44ae0 */ { u32 v = 0xa44ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 004489d2: call 0x52cc24 */ r_esp -= 4; W32(r_esp, 0x4489d7u); f_0052cc24();
    /* 004489d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004489d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004489db: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 004489de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004489df: push 0x349 */ { u32 v = 0x349u; r_esp -= 4; W32(r_esp, v); }
    /* 004489e4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4489e9u); f_00814298();
    /* 004489e9: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004489ec: jmp 0x448949 */ goto L_00448949;
L_004489f1:; BB(0x004489f1);
    /* 004489f1: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004489f4: jne 0x448949 */ if (!fZ) goto L_00448949;
L_004489fa:; BB(0x004489fa);
    /* 004489fa: test edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448a00: jne 0x448949 */ if (!fZ) goto L_00448949;
L_00448a06:; BB(0x00448a06);
    /* 00448a06: or edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00448a0c: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 00448a12: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00448a18: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00448a1e: and eax, 0xeffffffe */ {  u32 a = r_eax; u32 b = 0xeffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00448a23: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00448a29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00448a2b: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x448a30u); f_0052cac0();
    /* 00448a30: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00448a34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448a35: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a37: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00448a39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00448a3b: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x448a41u); call_ind(t); }
    /* 00448a41: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448a44: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00448a4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448a4b: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448a4e: push 0x9a5504 */ { u32 v = 0x9a5504u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a53: push dword ptr [0xa44be4] */ { u32 v = R32((u32)(0xa44be4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448a59: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x448a5eu); f_00578aa0();
    /* 00448a5e: push 0xa44b20 */ { u32 v = 0xa44b20u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a63: call 0x52cc24 */ r_esp -= 4; W32(r_esp, 0x448a68u); f_0052cc24();
    /* 00448a68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a6c: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00448a6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448a70: push 0x349 */ { u32 v = 0x349u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a75: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x448a7au); f_00814298();
    /* 00448a7a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448a7d: jmp 0x448949 */ goto L_00448949;
L_00448a82:; BB(0x00448a82);
    /* 00448a82: test edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448a88: jne 0x448949 */ if (!fZ) goto L_00448949;
L_00448a8e:; BB(0x00448a8e);
    /* 00448a8e: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00448a94: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 00448a9a: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00448aa0: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00448aa3: and eax, 0xeffffffe */ {  u32 a = r_eax; u32 b = 0xeffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00448aa8: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00448aab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00448aad: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x448ab2u); f_0052cac0();
    /* 00448ab2: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00448ab6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448ab7: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00448ab9: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00448abb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00448abd: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x448ac3u); call_ind(t); }
    /* 00448ac3: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00448ac7: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448acb: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448ace: push 0x9a5504 */ { u32 v = 0x9a5504u; r_esp -= 4; W32(r_esp, v); }
    /* 00448ad3: push dword ptr [0xa44bdc] */ { u32 v = R32((u32)(0xa44bdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00448ad9: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x448adeu); f_00578aa0();
    /* 00448ade: push 0xa44aa0 */ { u32 v = 0xa44aa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448ae3: call 0x52cc24 */ r_esp -= 4; W32(r_esp, 0x448ae8u); f_0052cc24();
    /* 00448ae8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00448aea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448aec: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00448aef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448af0: push 0x349 */ { u32 v = 0x349u; r_esp -= 4; W32(r_esp, v); }
    /* 00448af5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x448afau); f_00814298();
    /* 00448afa: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448afd: jmp 0x448949 */ goto L_00448949;
L_00448b02:; BB(0x00448b02);
    /* 00448b02: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448b08: jne 0x448949 */ if (!fZ) goto L_00448949;
L_00448b0e:; BB(0x00448b0e);
    /* 00448b0e: or edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00448b14: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 00448b1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00448b1c: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x448b21u); f_0052cac0();
    /* 00448b21: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00448b25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448b26: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00448b28: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00448b2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00448b2c: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x448b32u); call_ind(t); }
    /* 00448b32: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00448b36: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448b39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448b3a: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448b3d: push 0x9a5504 */ { u32 v = 0x9a5504u; r_esp -= 4; W32(r_esp, v); }
    /* 00448b42: push dword ptr [0xa44bd4] */ { u32 v = R32((u32)(0xa44bd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448b48: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x448b4du); f_00578aa0();
    /* 00448b4d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448b50: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00448b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448b55: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00448b57: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00448b59: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00448b5b: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x448b61u); call_ind(t); }
    /* 00448b61: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00448b65: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448b69: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448b6c: push 0x9a5504 */ { u32 v = 0x9a5504u; r_esp -= 4; W32(r_esp, v); }
    /* 00448b71: push dword ptr [0xa44bd8] */ { u32 v = R32((u32)(0xa44bd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448b77: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x448b7cu); f_00578aa0();
    /* 00448b7c: push 0xa44a20 */ { u32 v = 0xa44a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00448b81: call 0x52cc24 */ r_esp -= 4; W32(r_esp, 0x448b86u); f_0052cc24();
    /* 00448b86: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448b89: jmp 0x448949 */ goto L_00448949;
L_00448b8e:; BB(0x00448b8e);
    /* 00448b8e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00448b91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00448b92: ret  */ FN_RET(0x004488d8); r_esp += 4; return;
}

void f_00448b94(void) /* sub_448B94 */
{
    FN_ENTER(0x00448b94);
    /* 00448b94: movsx edx, word ptr [ecx + 0x4b4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4b4u));
    /* 00448b9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448b9d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00448b9f: jg 0x448ba6 */ if ((!fZ&&fS==fO)) goto L_00448ba6;
L_00448ba1:; BB(0x00448ba1);
    /* 00448ba1: mov eax, 1 */ r_eax = 0x1u;
L_00448ba6:; BB(0x00448ba6);
    /* 00448ba6: movsx edx, word ptr [ecx + 0x4b6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4b6u));
    /* 00448bad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00448baf: jg 0x448bb4 */ if ((!fZ&&fS==fO)) goto L_00448bb4;
L_00448bb1:; BB(0x00448bb1);
    /* 00448bb1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00448bb4:; BB(0x00448bb4);
    /* 00448bb4: movsx edx, word ptr [ecx + 0x4b8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4b8u));
    /* 00448bbb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00448bbd: jg 0x448bc2 */ if ((!fZ&&fS==fO)) goto L_00448bc2;
L_00448bbf:; BB(0x00448bbf);
    /* 00448bbf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00448bc2:; BB(0x00448bc2);
    /* 00448bc2: movsx edx, word ptr [ecx + 0x4ba] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4bau));
    /* 00448bc9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00448bcb: jg 0x448bd0 */ if ((!fZ&&fS==fO)) goto L_00448bd0;
L_00448bcd:; BB(0x00448bcd);
    /* 00448bcd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00448bd0:; BB(0x00448bd0);
    /* 00448bd0: ret  */ FN_RET(0x00448b94); r_esp += 4; return;
}

void f_00448bd4(void) /* sub_448BD4 */
{
    FN_ENTER(0x00448bd4);
    /* 00448bd4: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00448bda: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00448bdd: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448be3: je 0x448bf7 */ if (fZ) goto L_00448bf7;
L_00448be5:; BB(0x00448be5);
    /* 00448be5: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00448beb: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00448bf1: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
L_00448bf7:; BB(0x00448bf7);
    /* 00448bf7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00448bfa: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448c00: je 0x448c14 */ if (fZ) goto L_00448c14;
L_00448c02:; BB(0x00448c02);
    /* 00448c02: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00448c08: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00448c0e: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
L_00448c14:; BB(0x00448c14);
    /* 00448c14: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00448c17: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448c1d: je 0x448c31 */ if (fZ) goto L_00448c31;
L_00448c1f:; BB(0x00448c1f);
    /* 00448c1f: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00448c25: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00448c2b: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
L_00448c31:; BB(0x00448c31);
    /* 00448c31: mov eax, dword ptr [eax + 0x9c] */ r_eax = R32((u32)(r_eax+0x9cu));
    /* 00448c37: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448c3c: je 0x448c4f */ if (fZ) goto L_00448c4f;
L_00448c3e:; BB(0x00448c3e);
    /* 00448c3e: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00448c44: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00448c49: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
L_00448c4f:; BB(0x00448c4f);
    /* 00448c4f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448c53: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448c57: call 0x7732b8 */ r_esp -= 4; W32(r_esp, 0x448c5cu); f_007732b8();
    /* 00448c5c: ret 8 */ FN_RET(0x00448bd4); r_esp += 12; return;
}

void f_00448c60(void) /* sub_448C60 */
{
    FN_ENTER(0x00448c60);
    /* 00448c60: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00448c66: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00448c69: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448c6f: je 0x448c83 */ if (fZ) goto L_00448c83;
L_00448c71:; BB(0x00448c71);
    /* 00448c71: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00448c77: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00448c7d: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
L_00448c83:; BB(0x00448c83);
    /* 00448c83: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00448c86: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448c8c: je 0x448ca0 */ if (fZ) goto L_00448ca0;
L_00448c8e:; BB(0x00448c8e);
    /* 00448c8e: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00448c94: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00448c9a: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
L_00448ca0:; BB(0x00448ca0);
    /* 00448ca0: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00448ca3: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448ca9: je 0x448cbd */ if (fZ) goto L_00448cbd;
L_00448cab:; BB(0x00448cab);
    /* 00448cab: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00448cb1: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00448cb7: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
L_00448cbd:; BB(0x00448cbd);
    /* 00448cbd: mov eax, dword ptr [eax + 0x9c] */ r_eax = R32((u32)(r_eax+0x9cu));
    /* 00448cc3: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448cc8: je 0x448cdb */ if (fZ) goto L_00448cdb;
L_00448cca:; BB(0x00448cca);
    /* 00448cca: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00448cd0: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00448cd5: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
L_00448cdb:; BB(0x00448cdb);
    /* 00448cdb: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00448ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448ce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448ce2: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448ce6: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448cea: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448cee: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448cf2: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x448cf7u); f_00773afc();
    /* 00448cf7: ret 0x18 */ FN_RET(0x00448c60); r_esp += 28; return;
}

void f_00448cfc(void) /* sub_448CFC */
{
    FN_ENTER(0x00448cfc);
    /* 00448cfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00448cfd: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00448d00: mov edx, dword ptr [0xa44bbc] */ r_edx = R32((u32)(0xa44bbcu));
    /* 00448d06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448d08: mov byte ptr [esp], 0x85 */ W8((u32)(r_esp), 0x85u);
    /* 00448d0c: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 00448d11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448d13: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00448d18: mov ebx, eax */ r_ebx = r_eax;
L_00448d1a:; BB(0x00448d1a);
    /* 00448d1a: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00448d1d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00448d21: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x448d26u); f_008587a5();
    /* 00448d26: mov edx, dword ptr [0xa44bbc] */ r_edx = R32((u32)(0xa44bbcu));
    /* 00448d2c: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00448d30: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00448d34: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00448d38: fdiv dword ptr [0x8fe74c] */ ST(0) = ST(0) / R_F32((u32)(0x8fe74cu));
    /* 00448d3e: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 00448d41: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00448d43: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 00448d47: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 00448d4c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00448d51: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00448d55: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00448d59: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00448d5d: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00448d61: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00448d65: mov word ptr [esp + ebx*2 + 6], cx */ W16((u32)(r_esp+r_ebx*2+0x6u), (u16)r_ecx);
    /* 00448d6a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00448d6d: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448d70: jl 0x448d1a */ if ((fS!=fO)) goto L_00448d1a;
L_00448d72:; BB(0x00448d72);
    /* 00448d72: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00448d75: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x448d7au); f_008003e0();
    /* 00448d7a: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00448d7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00448d7e: ret  */ FN_RET(0x00448cfc); r_esp += 4; return;
}

void f_00448d80(void) /* sub_448D80 */
{
    FN_ENTER(0x00448d80);
    /* 00448d80: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00448d84: movzx eax, word ptr [ecx + 6] */ r_eax = (u32)R16((u32)(r_ecx+0x6u));
    /* 00448d88: mov word ptr [0xa44bcc], ax */ W16((u32)(0xa44bccu), (u16)r_eax);
    /* 00448d8e: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00448d92: mov word ptr [0xa44bce], dx */ W16((u32)(0xa44bceu), (u16)r_edx);
    /* 00448d99: movzx eax, word ptr [ecx + 0xa] */ r_eax = (u32)R16((u32)(r_ecx+0xau));
    /* 00448d9d: mov word ptr [0xa44bd0], ax */ W16((u32)(0xa44bd0u), (u16)r_eax);
    /* 00448da3: ret  */ FN_RET(0x00448d80); r_esp += 4; return;
}

void f_00448da4(void) /* sub_448DA4 */
{
    FN_ENTER(0x00448da4);
    /* 00448da4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00448da5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00448da7: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00448daa: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00448daf: jne 0x448e10 */ if (!fZ) goto L_00448e10;
L_00448db1:; BB(0x00448db1);
    /* 00448db1: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00448db7: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00448dbc: jne 0x448e10 */ if (!fZ) goto L_00448e10;
L_00448dbe:; BB(0x00448dbe);
    /* 00448dbe: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00448dc5: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00448dc8: je 0x448e10 */ if (fZ) goto L_00448e10;
L_00448dca:; BB(0x00448dca);
    /* 00448dca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00448dcc: call 0x44851c */ r_esp -= 4; W32(r_esp, 0x448dd1u); f_0044851c();
    /* 00448dd1: fld dword ptr [0x8fe748] */ FPUSH(R_F32((u32)(0x8fe748u)));
    /* 00448dd7: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00448ddb: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00448de1: fstp dword ptr [ebx + 0x510] */ W_F32((u32)(r_ebx+0x510u), ST(0)); FPOP();
    /* 00448de7: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00448dea: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00448df0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00448df2: jne 0x448e10 */ if (!fZ) goto L_00448e10;
L_00448df4:; BB(0x00448df4);
    /* 00448df4: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00448dfb: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00448dfe: je 0x448e10 */ if (fZ) goto L_00448e10;
L_00448e00:; BB(0x00448e00);
    /* 00448e00: mov dword ptr [ebx + 0x37c], 0xc */ W32((u32)(r_ebx+0x37cu), 0xcu);
    /* 00448e0a: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
L_00448e10:; BB(0x00448e10);
    /* 00448e10: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00448e11: ret 4 */ FN_RET(0x00448da4); r_esp += 8; return;
}

void f_00448e40(void) /* sub_448E40 */
{
    FN_ENTER(0x00448e40);
    /* 00448e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00448e43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00448e45: push 0x8ce9d6 */ { u32 v = 0x8ce9d6u; r_esp -= 4; W32(r_esp, v); }
    /* 00448e4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00448e50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448e51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00448e58: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00448e5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00448e5e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00448e61: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00448e64: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00448e67: mov eax, dword ptr [0xa447bc] */ r_eax = R32((u32)(0xa447bcu));
    /* 00448e6c: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00448e73: mov dword ptr [0xa44bb4], eax */ W32((u32)(0xa44bb4u), r_eax);
    /* 00448e78: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00448e7a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x448e7fu); f_008581c5();
    /* 00448e7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00448e80: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00448e83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448e85: je 0x449171 */ if (fZ) goto L_00449171;
L_00448e8b:; BB(0x00448e8b);
    /* 00448e8b: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 00448e92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00448e99: mov eax, dword ptr [0xa44bb4] */ r_eax = R32((u32)(0xa44bb4u));
    /* 00448e9e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00448ea1: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00448ea7: push dword ptr [edx + 0x138] */ { u32 v = R32((u32)(r_edx+0x138u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448ead: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x448eb2u); f_00511b74();
    /* 00448eb2: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00448eb5: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00448ebc:; BB(0x00448ebc);
    /* 00448ebc: mov dword ptr [0xa44be8], eax */ W32((u32)(0xa44be8u), r_eax);
    /* 00448ec1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00448ec8: mov eax, dword ptr [0xa44bb4] */ r_eax = R32((u32)(0xa44bb4u));
    /* 00448ecd: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00448ecf: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00448ed5: mov esi, dword ptr [edx + 0x148] */ r_esi = R32((u32)(r_edx+0x148u));
    /* 00448edb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448edc: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x448ee1u); f_0078e934();
    /* 00448ee1: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00448ee4: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00448ee6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448ee7: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x448eecu); f_0078e934();
    /* 00448eec: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00448eef: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00448ef1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448ef2: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x448ef7u); f_0078e934();
    /* 00448ef7: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00448efa: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00448efc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448efd: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x448f02u); f_0078e934();
    /* 00448f02: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00448f05: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00448f07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448f08: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x448f0du); f_0078e934();
    /* 00448f0d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448f10: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00448f13: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00448f15:; BB(0x00448f15);
    /* 00448f15: movsx eax, word ptr [ebx*2 + 0x9a5320] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9a5320u));
    /* 00448f1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448f1e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448f1f: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x448f24u); f_0078e934();
    /* 00448f24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448f27: mov dword ptr [ebp + ebx*4 - 0x50], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffb0u), r_eax);
    /* 00448f2b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00448f2e: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448f31: jl 0x448f15 */ if ((fS!=fO)) goto L_00448f15;
L_00448f33:; BB(0x00448f33);
    /* 00448f33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448f35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00448f38:; BB(0x00448f38);
    /* 00448f38: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448f3b: mov edx, dword ptr [ebp + eax*4 - 0x50] */ r_edx = R32((u32)(r_ebp+r_eax*4+0xffffffb0u));
    /* 00448f3f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00448f41: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00448f43: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 00448f46: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00448f49: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x448f4eu); f_008581c5();
    /* 00448f4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00448f4f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00448f52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448f54: je 0x44916a */ if (fZ) goto L_0044916a;
L_00448f5a:; BB(0x00448f5a);
    /* 00448f5a: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00448f61: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00448f68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448f6b: push dword ptr [ebp + eax*4 - 0x50] */ { u32 v = R32((u32)(r_ebp+r_eax*4+0xffffffb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448f6f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00448f72: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x448f77u); f_00511b74();
    /* 00448f77: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00448f7a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00448f81:; BB(0x00448f81);
    /* 00448f81: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448f84: mov dword ptr [eax*4 + 0xa44bd4], edx */ W32((u32)(r_eax*4+0xa44bd4u), r_edx);
    /* 00448f8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00448f92: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00448f95: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00448f98: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448f9b: jl 0x448f38 */ if ((fS!=fO)) goto L_00448f38;
L_00448f9d:; BB(0x00448f9d);
    /* 00448f9d: mov eax, dword ptr [0xa44bb4] */ r_eax = R32((u32)(0xa44bb4u));
    /* 00448fa2: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00448fa8: mov esi, dword ptr [edx + 0x138] */ r_esi = R32((u32)(r_edx+0x138u));
    /* 00448fae: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00448fb0:; BB(0x00448fb0);
    /* 00448fb0: movsx eax, word ptr [ebx*2 + 0x9a5320] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9a5320u));
    /* 00448fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448fb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448fba: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x448fbfu); f_0078e934();
    /* 00448fbf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448fc2: mov dword ptr [ebp + ebx*4 - 0x34], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffccu), r_eax);
    /* 00448fc6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00448fc9: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448fcc: jl 0x448fb0 */ if ((fS!=fO)) goto L_00448fb0;
L_00448fce:; BB(0x00448fce);
    /* 00448fce: push 0xa44a20 */ { u32 v = 0xa44a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00448fd3: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00448fd6: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x448fdbu); f_0052cb44();
    /* 00448fdb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00448fdd: lea eax, [eax + eax + 0xa44a20] */ r_eax = (u32)(r_eax+r_eax+0xa44a20u);
    /* 00448fe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448fe5: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448fe8: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x448fedu); f_0052cb44();
    /* 00448fed: push 0xa44aa0 */ { u32 v = 0xa44aa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448ff2: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448ff5: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x448ffau); f_0052cb44();
    /* 00448ffa: mov ebx, eax */ r_ebx = r_eax;
    /* 00448ffc: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 00448ffe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448fff: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x449004u); f_0078e934();
    /* 00449004: mov dword ptr [ebx*4 + 0xa44aa0], eax */ W32((u32)(r_ebx*4+0xa44aa0u), r_eax);
    /* 0044900b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044900d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044900e: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x449013u); f_0078e934();
    /* 00449013: mov dword ptr [ebx*4 + 0xa44aa4], eax */ W32((u32)(r_ebx*4+0xa44aa4u), r_eax);
    /* 0044901a: mov dword ptr [ebx*4 + 0xa44aa8], 0 */ W32((u32)(r_ebx*4+0xa44aa8u), 0x0u);
    /* 00449025: push 0xa44ae0 */ { u32 v = 0xa44ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044902a: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044902d: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x449032u); f_0052cb44();
    /* 00449032: mov ebx, eax */ r_ebx = r_eax;
    /* 00449034: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00449036: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00449037: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x44903cu); f_0078e934();
    /* 0044903c: mov dword ptr [ebx*4 + 0xa44ae0], eax */ W32((u32)(r_ebx*4+0xa44ae0u), r_eax);
    /* 00449043: mov dword ptr [ebx*4 + 0xa44ae4], 0 */ W32((u32)(r_ebx*4+0xa44ae4u), 0x0u);
    /* 0044904e: push 0xa44b20 */ { u32 v = 0xa44b20u; r_esp -= 4; W32(r_esp, v); }
    /* 00449053: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00449056: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x44905bu); f_0052cb44();
    /* 0044905b: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0044905d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044905e: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x449063u); f_0078e934();
    /* 00449063: mov dword ptr [0xa44b98], eax */ W32((u32)(0xa44b98u), r_eax);
    /* 00449068: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 0044906a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044906b: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x449070u); f_0078e934();
    /* 00449070: mov dword ptr [0xa44ba8], eax */ W32((u32)(0xa44ba8u), r_eax);
    /* 00449075: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00449077: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00449078: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x44907du); f_0078e934();
    /* 0044907d: mov dword ptr [0xa44bac], eax */ W32((u32)(0xa44bacu), r_eax);
    /* 00449082: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00449084: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00449085: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x44908au); f_0078e934();
    /* 0044908a: mov dword ptr [0xa44bb0], eax */ W32((u32)(0xa44bb0u), r_eax);
    /* 0044908f: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00449091: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00449092: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x449097u); f_0078e934();
    /* 00449097: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044909a: mov dword ptr [0xa44b94], eax */ W32((u32)(0xa44b94u), r_eax);
    /* 0044909f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004490a1:; BB(0x004490a1);
    /* 004490a1: push dword ptr [ebx*4 + 0x9a54f0] */ { u32 v = R32((u32)(r_ebx*4+0x9a54f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004490a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004490a9: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4490aeu); f_0078e934();
    /* 004490ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004490b1: mov dword ptr [ebx*4 + 0xa44b68], eax */ W32((u32)(r_ebx*4+0xa44b68u), r_eax);
    /* 004490b8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004490bb: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004490be: jl 0x4490a1 */ if ((fS!=fO)) goto L_004490a1;
L_004490c0:; BB(0x004490c0);
    /* 004490c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004490c2:; BB(0x004490c2);
    /* 004490c2: push dword ptr [ebx*4 + 0x9a54dc] */ { u32 v = R32((u32)(r_ebx*4+0x9a54dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004490c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004490ca: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4490cfu); f_0078e934();
    /* 004490cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004490d2: mov dword ptr [ebx*4 + 0xa44b7c], eax */ W32((u32)(r_ebx*4+0xa44b7cu), r_eax);
    /* 004490d9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004490dc: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004490df: jl 0x4490c2 */ if ((fS!=fO)) goto L_004490c2;
L_004490e1:; BB(0x004490e1);
    /* 004490e1: mov eax, dword ptr [0xa44b98] */ r_eax = R32((u32)(0xa44b98u));
    /* 004490e6: mov ebx, dword ptr [0xa44bac] */ r_ebx = R32((u32)(0xa44bacu));
    /* 004490ec: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 004490ee: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004490f1: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004490f4: mov eax, dword ptr [0xa44b94] */ r_eax = R32((u32)(0xa44b94u));
    /* 004490f9: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 004490fc: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 004490ff: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00449102: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00449105: mov dword ptr [0xa44b60], ecx */ W32((u32)(0xa44b60u), r_ecx);
    /* 0044910b: mov dword ptr [0xa44b64], edi */ W32((u32)(0xa44b64u), r_edi);
    /* 00449111: mov dword ptr [0xa44b90], eax */ W32((u32)(0xa44b90u), r_eax);
    /* 00449116: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x44911bu); f_0077a684();
    /* 0044911b: mov dword ptr [0xa44bc8], eax */ W32((u32)(0xa44bc8u), r_eax);
    /* 00449120: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00449122: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x449127u); f_0077a698();
    /* 00449127: mov dword ptr [0xa44bc4], eax */ W32((u32)(0xa44bc4u), r_eax);
    /* 0044912c: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0044912e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x449133u); f_0077a6b4();
    /* 00449133: mov dword ptr [0xa44bc0], eax */ W32((u32)(0xa44bc0u), r_eax);
    /* 00449138: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0044913a: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x44913fu); f_0077a6cc();
    /* 0044913f: mov dword ptr [0xa44bbc], eax */ W32((u32)(0xa44bbcu), r_eax);
    /* 00449144: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00449146: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x44914bu); f_0077a6cc();
    /* 0044914b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044914e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449151: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00449154: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00449157: mov dword ptr [0xa44bb8], eax */ W32((u32)(0xa44bb8u), r_eax);
    /* 0044915c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044915f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00449166: mov esp, ebp */ r_esp = r_ebp;
    /* 00449168: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449169: ret  */ FN_RET(0x00448e40); r_esp += 4; return;
L_0044916a:; BB(0x0044916a);
    /* 0044916a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044916c: jmp 0x448f81 */ goto L_00448f81;
L_00449171:; BB(0x00449171);
    /* 00449171: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00449173: jmp 0x448ebc */ goto L_00448ebc;
}

void f_00448efe(void)
{
    FN_ENTER(0x00448efe);
    /* 00448efe: xor bl, byte ptr [edx + 0x34] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edx+0x34u)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00448f01: add byte ptr [ebx + 0x3f6a0808], al */ { u32 ad = (u32)(r_ebx+0x3f6a0808u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00448f07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448f08: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x448f0du); f_0078e934();
    /* 00448f0d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448f10: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00448f13: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00448f15:; BB(0x00448f15);
    /* 00448f15: movsx eax, word ptr [ebx*2 + 0x9a5320] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9a5320u));
    /* 00448f1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448f1e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448f1f: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x448f24u); f_0078e934();
    /* 00448f24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448f27: mov dword ptr [ebp + ebx*4 - 0x50], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffb0u), r_eax);
    /* 00448f2b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00448f2e: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448f31: jl 0x448f15 */ if ((fS!=fO)) goto L_00448f15;
L_00448f33:; BB(0x00448f33);
    /* 00448f33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448f35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00448f38:; BB(0x00448f38);
    /* 00448f38: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448f3b: mov edx, dword ptr [ebp + eax*4 - 0x50] */ r_edx = R32((u32)(r_ebp+r_eax*4+0xffffffb0u));
    /* 00448f3f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00448f41: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00448f43: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 00448f46: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00448f49: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x448f4eu); f_008581c5();
    /* 00448f4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00448f4f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00448f52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448f54: je 0x44916a */ if (fZ) goto L_0044916a;
L_00448f5a:; BB(0x00448f5a);
    /* 00448f5a: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00448f61: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00448f68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448f6b: push dword ptr [ebp + eax*4 - 0x50] */ { u32 v = R32((u32)(r_ebp+r_eax*4+0xffffffb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448f6f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00448f72: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x448f77u); f_00511b74();
    /* 00448f77: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00448f7a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00448f81:; BB(0x00448f81);
    /* 00448f81: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448f84: mov dword ptr [eax*4 + 0xa44bd4], edx */ W32((u32)(r_eax*4+0xa44bd4u), r_edx);
    /* 00448f8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00448f92: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00448f95: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00448f98: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448f9b: jl 0x448f38 */ if ((fS!=fO)) goto L_00448f38;
L_00448f9d:; BB(0x00448f9d);
    /* 00448f9d: mov eax, dword ptr [0xa44bb4] */ r_eax = R32((u32)(0xa44bb4u));
    /* 00448fa2: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00448fa8: mov esi, dword ptr [edx + 0x138] */ r_esi = R32((u32)(r_edx+0x138u));
    /* 00448fae: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00448fb0:; BB(0x00448fb0);
    /* 00448fb0: movsx eax, word ptr [ebx*2 + 0x9a5320] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9a5320u));
    /* 00448fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448fb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448fba: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x448fbfu); f_0078e934();
    /* 00448fbf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448fc2: mov dword ptr [ebp + ebx*4 - 0x34], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffccu), r_eax);
    /* 00448fc6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00448fc9: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448fcc: jl 0x448fb0 */ if ((fS!=fO)) goto L_00448fb0;
L_00448fce:; BB(0x00448fce);
    /* 00448fce: push 0xa44a20 */ { u32 v = 0xa44a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00448fd3: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00448fd6: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x448fdbu); f_0052cb44();
    /* 00448fdb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00448fdd: lea eax, [eax + eax + 0xa44a20] */ r_eax = (u32)(r_eax+r_eax+0xa44a20u);
    /* 00448fe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448fe5: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448fe8: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x448fedu); f_0052cb44();
    /* 00448fed: push 0xa44aa0 */ { u32 v = 0xa44aa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448ff2: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00448ff5: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x448ffau); f_0052cb44();
    /* 00448ffa: mov ebx, eax */ r_ebx = r_eax;
    /* 00448ffc: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 00448ffe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00448fff: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x449004u); f_0078e934();
    /* 00449004: mov dword ptr [ebx*4 + 0xa44aa0], eax */ W32((u32)(r_ebx*4+0xa44aa0u), r_eax);
    /* 0044900b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044900d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044900e: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x449013u); f_0078e934();
    /* 00449013: mov dword ptr [ebx*4 + 0xa44aa4], eax */ W32((u32)(r_ebx*4+0xa44aa4u), r_eax);
    /* 0044901a: mov dword ptr [ebx*4 + 0xa44aa8], 0 */ W32((u32)(r_ebx*4+0xa44aa8u), 0x0u);
    /* 00449025: push 0xa44ae0 */ { u32 v = 0xa44ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044902a: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044902d: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x449032u); f_0052cb44();
    /* 00449032: mov ebx, eax */ r_ebx = r_eax;
    /* 00449034: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00449036: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00449037: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x44903cu); f_0078e934();
    /* 0044903c: mov dword ptr [ebx*4 + 0xa44ae0], eax */ W32((u32)(r_ebx*4+0xa44ae0u), r_eax);
    /* 00449043: mov dword ptr [ebx*4 + 0xa44ae4], 0 */ W32((u32)(r_ebx*4+0xa44ae4u), 0x0u);
    /* 0044904e: push 0xa44b20 */ { u32 v = 0xa44b20u; r_esp -= 4; W32(r_esp, v); }
    /* 00449053: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00449056: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x44905bu); f_0052cb44();
    /* 0044905b: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0044905d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044905e: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x449063u); f_0078e934();
    /* 00449063: mov dword ptr [0xa44b98], eax */ W32((u32)(0xa44b98u), r_eax);
    /* 00449068: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 0044906a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044906b: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x449070u); f_0078e934();
    /* 00449070: mov dword ptr [0xa44ba8], eax */ W32((u32)(0xa44ba8u), r_eax);
    /* 00449075: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00449077: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00449078: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x44907du); f_0078e934();
    /* 0044907d: mov dword ptr [0xa44bac], eax */ W32((u32)(0xa44bacu), r_eax);
    /* 00449082: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00449084: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00449085: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x44908au); f_0078e934();
    /* 0044908a: mov dword ptr [0xa44bb0], eax */ W32((u32)(0xa44bb0u), r_eax);
    /* 0044908f: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00449091: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00449092: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x449097u); f_0078e934();
    /* 00449097: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044909a: mov dword ptr [0xa44b94], eax */ W32((u32)(0xa44b94u), r_eax);
    /* 0044909f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004490a1:; BB(0x004490a1);
    /* 004490a1: push dword ptr [ebx*4 + 0x9a54f0] */ { u32 v = R32((u32)(r_ebx*4+0x9a54f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004490a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004490a9: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4490aeu); f_0078e934();
    /* 004490ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004490b1: mov dword ptr [ebx*4 + 0xa44b68], eax */ W32((u32)(r_ebx*4+0xa44b68u), r_eax);
    /* 004490b8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004490bb: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004490be: jl 0x4490a1 */ if ((fS!=fO)) goto L_004490a1;
L_004490c0:; BB(0x004490c0);
    /* 004490c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004490c2:; BB(0x004490c2);
    /* 004490c2: push dword ptr [ebx*4 + 0x9a54dc] */ { u32 v = R32((u32)(r_ebx*4+0x9a54dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004490c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004490ca: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4490cfu); f_0078e934();
    /* 004490cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004490d2: mov dword ptr [ebx*4 + 0xa44b7c], eax */ W32((u32)(r_ebx*4+0xa44b7cu), r_eax);
    /* 004490d9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004490dc: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004490df: jl 0x4490c2 */ if ((fS!=fO)) goto L_004490c2;
L_004490e1:; BB(0x004490e1);
    /* 004490e1: mov eax, dword ptr [0xa44b98] */ r_eax = R32((u32)(0xa44b98u));
    /* 004490e6: mov ebx, dword ptr [0xa44bac] */ r_ebx = R32((u32)(0xa44bacu));
    /* 004490ec: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 004490ee: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004490f1: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004490f4: mov eax, dword ptr [0xa44b94] */ r_eax = R32((u32)(0xa44b94u));
    /* 004490f9: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 004490fc: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 004490ff: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00449102: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00449105: mov dword ptr [0xa44b60], ecx */ W32((u32)(0xa44b60u), r_ecx);
    /* 0044910b: mov dword ptr [0xa44b64], edi */ W32((u32)(0xa44b64u), r_edi);
    /* 00449111: mov dword ptr [0xa44b90], eax */ W32((u32)(0xa44b90u), r_eax);
    /* 00449116: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x44911bu); f_0077a684();
    /* 0044911b: mov dword ptr [0xa44bc8], eax */ W32((u32)(0xa44bc8u), r_eax);
    /* 00449120: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00449122: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x449127u); f_0077a698();
    /* 00449127: mov dword ptr [0xa44bc4], eax */ W32((u32)(0xa44bc4u), r_eax);
    /* 0044912c: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0044912e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x449133u); f_0077a6b4();
    /* 00449133: mov dword ptr [0xa44bc0], eax */ W32((u32)(0xa44bc0u), r_eax);
    /* 00449138: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0044913a: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x44913fu); f_0077a6cc();
    /* 0044913f: mov dword ptr [0xa44bbc], eax */ W32((u32)(0xa44bbcu), r_eax);
    /* 00449144: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00449146: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x44914bu); f_0077a6cc();
    /* 0044914b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044914e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449151: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00449154: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00449157: mov dword ptr [0xa44bb8], eax */ W32((u32)(0xa44bb8u), r_eax);
    /* 0044915c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044915f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00449166: mov esp, ebp */ r_esp = r_ebp;
    /* 00449168: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449169: ret  */ FN_RET(0x00448efe); r_esp += 4; return;
L_0044916a:; BB(0x0044916a);
    /* 0044916a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044916c: jmp 0x448f81 */ goto L_00448f81;
}

