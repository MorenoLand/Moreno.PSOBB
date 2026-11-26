#include "protos.h"

void f_0077d578(void) /* sub_77D578 */
{
    FN_ENTER(0x0077d578);
    /* 0077d578: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077d57b: movzx edx, word ptr [0xa9b360] */ r_edx = (u32)R16((u32)(0xa9b360u));
    /* 0077d582: mov eax, edx */ r_eax = r_edx;
    /* 0077d584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077d586: jle 0x77d61f */ if ((fZ||fS!=fO)) goto L_0077d61f;
L_0077d58c:; BB(0x0077d58c);
    /* 0077d58c: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0077d590: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0077d594: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0077d597:; BB(0x0077d597);
    /* 0077d597: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0077d599: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0077d59c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077d59e: jle 0x77d5e7 */ if ((fZ||fS!=fO)) goto L_0077d5e7;
L_0077d5a0:; BB(0x0077d5a0);
    /* 0077d5a0: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0077d5a3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077d5a5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077d5a7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077d5a9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077d5ab: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0077d5ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077d5b0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077d5b2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077d5b4: lea ebx, [eax + eax + 0x20] */ r_ebx = (u32)(r_eax+r_eax+0x20u);
L_0077d5b8:; BB(0x0077d5b8);
    /* 0077d5b8: lea edx, [esi + 0xa9b220] */ r_edx = (u32)(r_esi+0xa9b220u);
    /* 0077d5be: lea eax, [ebx + 0xa9b220] */ r_eax = (u32)(r_ebx+0xa9b220u);
    /* 0077d5c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077d5c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077d5c6: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x77d5cbu); f_00857fed();
    /* 0077d5cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d5ce: movzx edx, word ptr [0xa9b360] */ r_edx = (u32)R16((u32)(0xa9b360u));
    /* 0077d5d5: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077d5d8: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077d5db: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077d5de: mov eax, edx */ r_eax = r_edx;
    /* 0077d5e0: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0077d5e3: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077d5e5: jl 0x77d5b8 */ if ((fS!=fO)) goto L_0077d5b8;
L_0077d5e7:; BB(0x0077d5e7);
    /* 0077d5e7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077d5e9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077d5eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077d5ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077d5ef: mov word ptr [edi*8 + 0xa9b220], cx */ W16((u32)(r_edi*8+0xa9b220u), (u16)r_ecx);
    /* 0077d5f7: jle 0x77d606 */ if ((fZ||fS!=fO)) goto L_0077d606;
L_0077d5f9:; BB(0x0077d5f9);
    /* 0077d5f9: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077d5fc: mov word ptr [0xa9b360], dx */ W16((u32)(0xa9b360u), (u16)r_edx);
    /* 0077d603: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
L_0077d606:; BB(0x0077d606);
    /* 0077d606: mov dword ptr [0xa9b364], 0x1e */ W32((u32)(0xa9b364u), 0x1eu);
    /* 0077d610: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077d612: jg 0x77d597 */ if ((!fZ&&fS==fO)) goto L_0077d597;
L_0077d614:; BB(0x0077d614);
    /* 0077d614: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0077d618: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0077d61c: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0077d61f:; BB(0x0077d61f);
    /* 0077d61f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d622: ret  */ FN_RET(0x0077d578); r_esp += 4; return;
}

void f_0077d624(void) /* sub_77D624 */
{
    FN_ENTER(0x0077d624);
    /* 0077d624: mov dword ptr [0xa9b368], 0x3f800000 */ W32((u32)(0xa9b368u), 0x3f800000u);
    /* 0077d62e: mov dword ptr [0xa9b36c], 0x41000000 */ W32((u32)(0xa9b36cu), 0x41000000u);
    /* 0077d638: mov dword ptr [0xa9b370], 0x3fc00000 */ W32((u32)(0xa9b370u), 0x3fc00000u);
    /* 0077d642: ret  */ FN_RET(0x0077d624); r_esp += 4; return;
}

void f_0077d644(void) /* sub_77D644 */
{
    FN_ENTER(0x0077d644);
    /* 0077d644: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d649: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d64b: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d650: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x77d655u); f_0086b688();
    /* 0077d655: mov dword ptr [0xa9b364], 0x1e */ W32((u32)(0xa9b364u), 0x1eu);
    /* 0077d65f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077d661: mov word ptr [0xa9b360], ax */ W16((u32)(0xa9b360u), (u16)r_eax);
    /* 0077d667: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d66a: ret  */ FN_RET(0x0077d644); r_esp += 4; return;
}

void f_0077d66c(void) /* sub_77D66C */
{
    FN_ENTER(0x0077d66c);
    /* 0077d66c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077d670: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d671: mov edi, eax */ r_edi = r_eax;
    /* 0077d673: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d678: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x77d67du); f_006c1bd4();
    /* 0077d67d: lea edx, [edi + edi*4] */ r_edx = (u32)(r_edi+r_edi*4);
    /* 0077d680: lea ecx, [edi + edx*8] */ r_ecx = (u32)(r_edi+r_edx*8);
    /* 0077d683: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077d685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d687: lea eax, [ecx + eax + 0x1ad0] */ r_eax = (u32)(r_ecx+r_eax+0x1ad0u);
    /* 0077d68e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d68f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d690: ret  */ FN_RET(0x0077d66c); r_esp += 4; return;
}

void f_0077d670(void) /* sub_77D670 */
{
    FN_ENTER(0x0077d670);
    /* 0077d670: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d671: mov edi, eax */ r_edi = r_eax;
    /* 0077d673: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d678: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x77d67du); f_006c1bd4();
    /* 0077d67d: lea edx, [edi + edi*4] */ r_edx = (u32)(r_edi+r_edi*4);
    /* 0077d680: lea ecx, [edi + edx*8] */ r_ecx = (u32)(r_edi+r_edx*8);
    /* 0077d683: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077d685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d687: lea eax, [ecx + eax + 0x1ad0] */ r_eax = (u32)(r_ecx+r_eax+0x1ad0u);
    /* 0077d68e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d68f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d690: ret  */ FN_RET(0x0077d670); r_esp += 4; return;
}

void f_0077d694(void) /* sub_77D694 */
{
    FN_ENTER(0x0077d694);
    /* 0077d694: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d695: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d696: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d697: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0077d69b: call 0x77d670 */ r_esp -= 4; W32(r_esp, 0x77d6a0u); f_0077d670();
    /* 0077d6a0: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0077d6a4: mov edi, eax */ r_edi = r_eax;
    /* 0077d6a6: mov ecx, 0xa4 */ r_ecx = 0xa4u;
    /* 0077d6ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077d6ac: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0077d6af: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0077d6b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d6b2: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d6b5: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0077d6b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d6b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d6b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d6ba: ret  */ FN_RET(0x0077d694); r_esp += 4; return;
}

void f_0077d6bc(void) /* sub_77D6BC */
{
    FN_ENTER(0x0077d6bc);
    /* 0077d6bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d6bd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077d6c1: call 0x77d670 */ r_esp -= 4; W32(r_esp, 0x77d6c6u); f_0077d670();
    /* 0077d6c6: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0077d6cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d6cd: ret  */ FN_RET(0x0077d6bc); r_esp += 4; return;
}

void f_0077d6d0(void) /* sub_77D6D0 */
{
    FN_ENTER(0x0077d6d0);
    /* 0077d6d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d6d1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077d6d5: call 0x77d670 */ r_esp -= 4; W32(r_esp, 0x77d6dau); f_0077d670();
    /* 0077d6da: call 0x77d6e8 */ r_esp -= 4; W32(r_esp, 0x77d6dfu); f_0077d6e8();
    /* 0077d6df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d6e0: ret  */ FN_RET(0x0077d6d0); r_esp += 4; return;
}

void f_0077d6e4(void) /* sub_77D6E4 */
{
    FN_ENTER(0x0077d6e4);
    /* 0077d6e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077d6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d6e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d6ea: mov edi, eax */ r_edi = r_eax;
    /* 0077d6ec: call 0x718480 */ r_esp -= 4; W32(r_esp, 0x77d6f1u); f_00718480();
    /* 0077d6f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d6f3: jne 0x77d6fa */ if (!fZ) goto L_0077d6fa;
L_0077d6f5:; BB(0x0077d6f5);
    /* 0077d6f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d6f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d6f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d6f9: ret  */ FN_RET(0x0077d6e4); r_esp += 4; return;
L_0077d6fa:; BB(0x0077d6fa);
    /* 0077d6fa: call 0x71849c */ r_esp -= 4; W32(r_esp, 0x77d6ffu); f_0071849c();
    /* 0077d6ff: mov eax, edi */ r_eax = r_edi;
    /* 0077d701: call 0x77d714 */ r_esp -= 4; W32(r_esp, 0x77d706u); f_0077d714();
    /* 0077d706: mov eax, 1 */ r_eax = 0x1u;
    /* 0077d70b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d70c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d70d: ret  */ FN_RET(0x0077d6e4); r_esp += 4; return;
}

void f_0077d6e8(void)
{
    FN_ENTER(0x0077d6e8);
    /* 0077d6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d6e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d6ea: mov edi, eax */ r_edi = r_eax;
    /* 0077d6ec: call 0x718480 */ r_esp -= 4; W32(r_esp, 0x77d6f1u); f_00718480();
    /* 0077d6f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d6f3: jne 0x77d6fa */ if (!fZ) goto L_0077d6fa;
L_0077d6f5:; BB(0x0077d6f5);
    /* 0077d6f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d6f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d6f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d6f9: ret  */ FN_RET(0x0077d6e8); r_esp += 4; return;
L_0077d6fa:; BB(0x0077d6fa);
    /* 0077d6fa: call 0x71849c */ r_esp -= 4; W32(r_esp, 0x77d6ffu); f_0071849c();
    /* 0077d6ff: mov eax, edi */ r_eax = r_edi;
    /* 0077d701: call 0x77d714 */ r_esp -= 4; W32(r_esp, 0x77d706u); f_0077d714();
    /* 0077d706: mov eax, 1 */ r_eax = 0x1u;
    /* 0077d70b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d70c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d70d: ret  */ FN_RET(0x0077d6e8); r_esp += 4; return;
}

void f_0077d714(void) /* sub_77D714 */
{
    FN_ENTER(0x0077d714);
    /* 0077d714: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d715: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d716: mov esi, eax */ r_esi = r_eax;
    /* 0077d718: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0077d71a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d71d: je 0x77d743 */ if (fZ) goto L_0077d743;
L_0077d71f:; BB(0x0077d71f);
    /* 0077d71f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d722: jne 0x77d731 */ if (!fZ) goto L_0077d731;
L_0077d724:; BB(0x0077d724);
    /* 0077d724: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077d727: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d728: call 0x7076a0 */ r_esp -= 4; W32(r_esp, 0x77d72du); f_007076a0();
    /* 0077d72d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d72e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d72f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d730: ret  */ FN_RET(0x0077d714); r_esp += 4; return;
L_0077d731:; BB(0x0077d731);
    /* 0077d731: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077d734: jne 0x77d77a */ if (!fZ) goto L_0077d77a;
L_0077d736:; BB(0x0077d736);
    /* 0077d736: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077d739: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d73a: call 0x77dd44 */ r_esp -= 4; W32(r_esp, 0x77d73fu); f_0077dd44();
    /* 0077d73f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d740: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d741: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d742: ret  */ FN_RET(0x0077d714); r_esp += 4; return;
L_0077d743:; BB(0x0077d743);
    /* 0077d743: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077d749: call 0x718ee4 */ r_esp -= 4; W32(r_esp, 0x77d74eu); f_00718ee4();
    /* 0077d74e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d74f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d751: je 0x77d770 */ if (fZ) goto L_0077d770;
L_0077d753:; BB(0x0077d753);
    /* 0077d753: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077d759: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x77d75eu); f_00716ba0();
    /* 0077d75e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d75f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d761: jne 0x77d770 */ if (!fZ) goto L_0077d770;
L_0077d763:; BB(0x0077d763);
    /* 0077d763: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077d766: mov eax, esi */ r_eax = r_esi;
    /* 0077d768: call 0x77d784 */ r_esp -= 4; W32(r_esp, 0x77d76du); f_0077d784();
    /* 0077d76d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d76e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d76f: ret  */ FN_RET(0x0077d714); r_esp += 4; return;
L_0077d770:; BB(0x0077d770);
    /* 0077d770: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077d773: mov eax, esi */ r_eax = r_esi;
    /* 0077d775: call 0x77d7d0 */ r_esp -= 4; W32(r_esp, 0x77d77au); f_0077d7d0();
L_0077d77a:; BB(0x0077d77a);
    /* 0077d77a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d77b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d77c: ret  */ FN_RET(0x0077d714); r_esp += 4; return;
}

void f_0077d784(void) /* sub_77D784 */
{
    FN_ENTER(0x0077d784);
    /* 0077d784: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d785: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d786: mov edi, eax */ r_edi = r_eax;
    /* 0077d788: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 0077d78b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d78d: jne 0x77d792 */ if (!fZ) goto L_0077d792;
L_0077d78f:; BB(0x0077d78f);
    /* 0077d78f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d790: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d791: ret  */ FN_RET(0x0077d784); r_esp += 4; return;
L_0077d792:; BB(0x0077d792);
    /* 0077d792: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077d798: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x77d79du); f_0068d5a8();
    /* 0077d79d: mov esi, eax */ r_esi = r_eax;
    /* 0077d79f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d7a2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d7a4: je 0x77d7b0 */ if (fZ) goto L_0077d7b0;
L_0077d7a6:; BB(0x0077d7a6);
    /* 0077d7a6: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x77d7abu); f_007a61a4();
    /* 0077d7ab: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077d7ae: je 0x77d7b3 */ if (fZ) goto L_0077d7b3;
L_0077d7b0:; BB(0x0077d7b0);
    /* 0077d7b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d7b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d7b2: ret  */ FN_RET(0x0077d784); r_esp += 4; return;
L_0077d7b3:; BB(0x0077d7b3);
    /* 0077d7b3: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d7b5: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x77d7bau); f_006936b4();
    /* 0077d7ba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0077d7c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077d7c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d7c2: call 0x7f32ac */ r_esp -= 4; W32(r_esp, 0x77d7c7u); f_007f32ac();
    /* 0077d7c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d7c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d7c9: ret  */ FN_RET(0x0077d784); r_esp += 4; return;
}

void f_0077d7d0(void) /* sub_77D7D0 */
{
    FN_ENTER(0x0077d7d0);
    /* 0077d7d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d7d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077d7d2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077d7d5: mov esi, eax */ r_esi = r_eax;
    /* 0077d7d7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077d7dd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x77d7e2u); f_0068d5a8();
    /* 0077d7e2: mov ebx, eax */ r_ebx = r_eax;
    /* 0077d7e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d7e7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d7e9: je 0x77d82e */ if (fZ) goto L_0077d82e;
L_0077d7eb:; BB(0x0077d7eb);
    /* 0077d7eb: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0077d7ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d7f0: jne 0x77d7f8 */ if (!fZ) goto L_0077d7f8;
L_0077d7f2:; BB(0x0077d7f2);
    /* 0077d7f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d7f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077d7f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d7f7: ret  */ FN_RET(0x0077d7d0); r_esp += 4; return;
L_0077d7f8:; BB(0x0077d7f8);
    /* 0077d7f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d7f9: call 0x6b96a4 */ r_esp -= 4; W32(r_esp, 0x77d7feu); f_006b96a4();
    /* 0077d7fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d7ff: call 0x77cbc0 */ r_esp -= 4; W32(r_esp, 0x77d804u); f_0077cbc0();
    /* 0077d804: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d807: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0077d809: ja 0x77d811 */ if ((!fC&&!fZ)) goto L_0077d811;
L_0077d80b:; BB(0x0077d80b);
    /* 0077d80b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d80e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077d80f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d810: ret  */ FN_RET(0x0077d7d0); r_esp += 4; return;
L_0077d811:; BB(0x0077d811);
    /* 0077d811: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x77d816u); f_007a61a4();
    /* 0077d816: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d819: je 0x77d834 */ if (fZ) goto L_0077d834;
L_0077d81b:; BB(0x0077d81b);
    /* 0077d81b: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d820: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d821: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0077d825: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077d826: call 0x7184f8 */ r_esp -= 4; W32(r_esp, 0x77d82bu); f_007184f8();
    /* 0077d82b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077d82e:; BB(0x0077d82e);
    /* 0077d82e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d831: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077d832: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d833: ret  */ FN_RET(0x0077d7d0); r_esp += 4; return;
L_0077d834:; BB(0x0077d834);
    /* 0077d834: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0077d83a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077d83c: mov byte ptr [esp], dl */ W8((u32)(r_esp), (u8)r_edx);
    /* 0077d83f: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 0077d843: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0077d848: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0077d84c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d84d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d84f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077d853: call 0x7d3950 */ r_esp -= 4; W32(r_esp, 0x77d858u); f_007d3950();
    /* 0077d858: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d85b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077d85c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d85d: ret  */ FN_RET(0x0077d7d0); r_esp += 4; return;
}

void f_0077d860(void) /* sub_77D860 */
{
    FN_ENTER(0x0077d860);
    /* 0077d860: mov dword ptr [0xa9b380], 0x3f800000 */ W32((u32)(0xa9b380u), 0x3f800000u);
    /* 0077d86a: mov dword ptr [0xa9b384], 0x41000000 */ W32((u32)(0xa9b384u), 0x41000000u);
    /* 0077d874: mov dword ptr [0xa9b388], 0x3fc00000 */ W32((u32)(0xa9b388u), 0x3fc00000u);
    /* 0077d87e: ret  */ FN_RET(0x0077d860); r_esp += 4; return;
}

void f_0077d880(void) /* sub_77D880 */
{
    FN_ENTER(0x0077d880);
    /* 0077d880: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d881: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0077d883: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d885: jne 0x77d889 */ if (!fZ) goto L_0077d889;
L_0077d887:; BB(0x0077d887);
    /* 0077d887: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d888: ret  */ FN_RET(0x0077d880); r_esp += 4; return;
L_0077d889:; BB(0x0077d889);
    /* 0077d889: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0077d88c: shr eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0077d88f: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077d892: call 0x77d8a0 */ r_esp -= 4; W32(r_esp, 0x77d897u); f_0077d8a0();
    /* 0077d897: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d898: ret  */ FN_RET(0x0077d880); r_esp += 4; return;
}

void f_0077d89c(void) /* sub_77D89C */
{
    FN_ENTER(0x0077d89c);
    /* 0077d89c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077d8a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d8a2: jl 0x77d8be */ if ((fS!=fO)) goto L_0077d8be;
L_0077d8a4:; BB(0x0077d8a4);
    /* 0077d8a4: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077d8a7: jl 0x77d8aa */ if ((fS!=fO)) goto L_0077d8aa;
L_0077d8a9:; BB(0x0077d8a9);
    /* 0077d8a9: ret  */ FN_RET(0x0077d89c); r_esp += 4; return;
L_0077d8aa:; BB(0x0077d8aa);
    /* 0077d8aa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077d8ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077d8ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077d8ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077d8af: push dword ptr [eax*4 + 0x979670] */ { u32 v = R32((u32)(r_eax*4+0x979670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077d8b6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x77d8bbu); f_00814298();
    /* 0077d8bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0077d8be:; BB(0x0077d8be);
    /* 0077d8be: ret  */ FN_RET(0x0077d89c); r_esp += 4; return;
}

void f_0077d8a0(void) /* sub_77D8A0 */
{
    FN_ENTER(0x0077d8a0);
    /* 0077d8a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d8a2: jl 0x77d8be */ if ((fS!=fO)) goto L_0077d8be;
L_0077d8a4:; BB(0x0077d8a4);
    /* 0077d8a4: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077d8a7: jl 0x77d8aa */ if ((fS!=fO)) goto L_0077d8aa;
L_0077d8a9:; BB(0x0077d8a9);
    /* 0077d8a9: ret  */ FN_RET(0x0077d8a0); r_esp += 4; return;
L_0077d8aa:; BB(0x0077d8aa);
    /* 0077d8aa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077d8ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077d8ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077d8ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077d8af: push dword ptr [eax*4 + 0x979670] */ { u32 v = R32((u32)(r_eax*4+0x979670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077d8b6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x77d8bbu); f_00814298();
    /* 0077d8bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0077d8be:; BB(0x0077d8be);
    /* 0077d8be: ret  */ FN_RET(0x0077d8a0); r_esp += 4; return;
}

void f_0077d8c0(void) /* sub_77D8C0 */
{
    FN_ENTER(0x0077d8c0);
    /* 0077d8c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d8c1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0077d8c5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0077d8c7: call 0x77d8d4 */ r_esp -= 4; W32(r_esp, 0x77d8ccu); f_0077d8d4();
    /* 0077d8cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d8cd: ret  */ FN_RET(0x0077d8c0); r_esp += 4; return;
}

void f_0077d8d0(void) /* sub_77D8D0 */
{
    FN_ENTER(0x0077d8d0);
    /* 0077d8d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077d8d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d8d5: mov edi, eax */ r_edi = r_eax;
    /* 0077d8d7: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d8dc: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x77d8e1u); f_006c1bd4();
    /* 0077d8e1: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0077d8e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077d8e6: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077d8e8: lea ecx, [edi + edx*4] */ r_ecx = (u32)(r_edi+r_edx*4);
    /* 0077d8eb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077d8ed: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077d8ef: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d8f1: lea eax, [ecx + eax + 0x15f0] */ r_eax = (u32)(r_ecx+r_eax+0x15f0u);
    /* 0077d8f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d8f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d8fa: ret  */ FN_RET(0x0077d8d0); r_esp += 4; return;
}

void f_0077d8d4(void) /* sub_77D8D4 */
{
    FN_ENTER(0x0077d8d4);
    /* 0077d8d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d8d5: mov edi, eax */ r_edi = r_eax;
    /* 0077d8d7: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d8dc: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x77d8e1u); f_006c1bd4();
    /* 0077d8e1: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0077d8e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077d8e6: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077d8e8: lea ecx, [edi + edx*4] */ r_ecx = (u32)(r_edi+r_edx*4);
    /* 0077d8eb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077d8ed: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077d8ef: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d8f1: lea eax, [ecx + eax + 0x15f0] */ r_eax = (u32)(r_ecx+r_eax+0x15f0u);
    /* 0077d8f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d8f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077d8fa: ret  */ FN_RET(0x0077d8d4); r_esp += 4; return;
}

void f_0077d8fc(void) /* sub_77D8FC */
{
    FN_ENTER(0x0077d8fc);
    /* 0077d8fc: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0077d8ff: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d904: je 0x77d90c */ if (fZ) goto L_0077d90c;
L_0077d906:; BB(0x0077d906);
    /* 0077d906: mov eax, 1 */ r_eax = 0x1u;
    /* 0077d90b: ret  */ FN_RET(0x0077d8fc); r_esp += 4; return;
L_0077d90c:; BB(0x0077d90c);
    /* 0077d90c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d90e: ret  */ FN_RET(0x0077d8fc); r_esp += 4; return;
}

void f_0077d910(void) /* sub_77D910 */
{
    FN_ENTER(0x0077d910);
    /* 0077d910: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d911: mov esi, ecx */ r_esi = r_ecx;
    /* 0077d913: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d915: call 0x77d948 */ r_esp -= 4; W32(r_esp, 0x77d91au); f_0077d948();
    /* 0077d91a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d91c: je 0x77d93a */ if (fZ) goto L_0077d93a;
L_0077d91e:; BB(0x0077d91e);
    /* 0077d91e: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0077d922: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d924: jne 0x77d933 */ if (!fZ) goto L_0077d933;
L_0077d926:; BB(0x0077d926);
    /* 0077d926: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d92b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x77d930u); f_0079317c();
    /* 0077d930: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d931: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d932: ret  */ FN_RET(0x0077d910); r_esp += 4; return;
L_0077d933:; BB(0x0077d933);
    /* 0077d933: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d936: mov eax, esi */ r_eax = r_esi;
    /* 0077d938: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d939: ret  */ FN_RET(0x0077d910); r_esp += 4; return;
L_0077d93a:; BB(0x0077d93a);
    /* 0077d93a: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 0077d93f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x77d944u); f_0079317c();
    /* 0077d944: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d945: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d946: ret  */ FN_RET(0x0077d910); r_esp += 4; return;
}

void f_0077d948(void) /* sub_77D948 */
{
    FN_ENTER(0x0077d948);
    /* 0077d948: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0077d94a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d94c: jne 0x77d952 */ if (!fZ) goto L_0077d952;
L_0077d94e:; BB(0x0077d94e);
    /* 0077d94e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d950: je 0x77d958 */ if (fZ) goto L_0077d958;
L_0077d952:; BB(0x0077d952);
    /* 0077d952: mov eax, 1 */ r_eax = 0x1u;
    /* 0077d957: ret  */ FN_RET(0x0077d948); r_esp += 4; return;
L_0077d958:; BB(0x0077d958);
    /* 0077d958: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d95a: ret  */ FN_RET(0x0077d948); r_esp += 4; return;
}

void f_0077d95c(void) /* sub_77D95C */
{
    FN_ENTER(0x0077d95c);
    /* 0077d95c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0077d95e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077d960: je 0x77d97c */ if (fZ) goto L_0077d97c;
L_0077d962:; BB(0x0077d962);
    /* 0077d962: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0077d966: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d968: jne 0x77d976 */ if (!fZ) goto L_0077d976;
L_0077d96a:; BB(0x0077d96a);
    /* 0077d96a: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d96f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x77d974u); f_0079317c();
    /* 0077d974: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d975: ret  */ FN_RET(0x0077d95c); r_esp += 4; return;
L_0077d976:; BB(0x0077d976);
    /* 0077d976: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077d979: mov eax, ecx */ r_eax = r_ecx;
    /* 0077d97b: ret  */ FN_RET(0x0077d95c); r_esp += 4; return;
L_0077d97c:; BB(0x0077d97c);
    /* 0077d97c: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d981: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x77d986u); f_0079317c();
    /* 0077d986: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d987: ret  */ FN_RET(0x0077d95c); r_esp += 4; return;
}

void f_0077d988(void) /* sub_77D988 */
{
    FN_ENTER(0x0077d988);
    /* 0077d988: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077d989: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077d98d: call 0x77d8d4 */ r_esp -= 4; W32(r_esp, 0x77d992u); f_0077d8d4();
    /* 0077d992: mov dword ptr [0xa9b418], eax */ W32((u32)(0xa9b418u), r_eax);
    /* 0077d997: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077d998: ret  */ FN_RET(0x0077d988); r_esp += 4; return;
}

void f_0077d99c(void) /* sub_77D99C */
{
    FN_ENTER(0x0077d99c);
    /* 0077d99c: mov edx, dword ptr [0xa9b418] */ r_edx = R32((u32)(0xa9b418u));
    /* 0077d9a2: movzx ecx, word ptr [edx + 0x30] */ r_ecx = (u32)R16((u32)(r_edx+0x30u));
    /* 0077d9a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077d9a8: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0077d9ab: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d9b1: je 0x77d9b8 */ if (fZ) goto L_0077d9b8;
L_0077d9b3:; BB(0x0077d9b3);
    /* 0077d9b3: mov eax, 1 */ r_eax = 0x1u;
L_0077d9b8:; BB(0x0077d9b8);
    /* 0077d9b8: movzx ecx, word ptr [edx + 0x32] */ r_ecx = (u32)R16((u32)(r_edx+0x32u));
    /* 0077d9bc: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0077d9bf: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d9c5: je 0x77d9ca */ if (fZ) goto L_0077d9ca;
L_0077d9c7:; BB(0x0077d9c7);
    /* 0077d9c7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077d9ca:; BB(0x0077d9ca);
    /* 0077d9ca: movzx ecx, word ptr [edx + 0x34] */ r_ecx = (u32)R16((u32)(r_edx+0x34u));
    /* 0077d9ce: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0077d9d1: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d9d7: je 0x77d9dc */ if (fZ) goto L_0077d9dc;
L_0077d9d9:; BB(0x0077d9d9);
    /* 0077d9d9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077d9dc:; BB(0x0077d9dc);
    /* 0077d9dc: movzx edx, word ptr [edx + 0x36] */ r_edx = (u32)R16((u32)(r_edx+0x36u));
    /* 0077d9e0: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0077d9e3: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077d9e9: je 0x77d9ee */ if (fZ) goto L_0077d9ee;
L_0077d9eb:; BB(0x0077d9eb);
    /* 0077d9eb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0077d9ee:; BB(0x0077d9ee);
    /* 0077d9ee: ret  */ FN_RET(0x0077d99c); r_esp += 4; return;
}

void f_0077d9f0(void) /* sub_77D9F0 */
{
    FN_ENTER(0x0077d9f0);
    /* 0077d9f0: mov edx, dword ptr [0xa9b418] */ r_edx = R32((u32)(0xa9b418u));
    /* 0077d9f6: movsx ecx, byte ptr [edx + 0x38] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x38u));
    /* 0077d9fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077d9fc: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d9ff: jne 0x77da06 */ if (!fZ) goto L_0077da06;
L_0077da01:; BB(0x0077da01);
    /* 0077da01: mov eax, 1 */ r_eax = 0x1u;
L_0077da06:; BB(0x0077da06);
    /* 0077da06: movsx ecx, byte ptr [edx + 0x3c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x3cu));
    /* 0077da0a: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077da0d: jne 0x77da12 */ if (!fZ) goto L_0077da12;
L_0077da0f:; BB(0x0077da0f);
    /* 0077da0f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077da12:; BB(0x0077da12);
    /* 0077da12: movsx ecx, byte ptr [edx + 0x40] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x40u));
    /* 0077da16: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077da19: jne 0x77da1e */ if (!fZ) goto L_0077da1e;
L_0077da1b:; BB(0x0077da1b);
    /* 0077da1b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077da1e:; BB(0x0077da1e);
    /* 0077da1e: movsx ecx, byte ptr [edx + 0x44] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x44u));
    /* 0077da22: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077da25: jne 0x77da2a */ if (!fZ) goto L_0077da2a;
L_0077da27:; BB(0x0077da27);
    /* 0077da27: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077da2a:; BB(0x0077da2a);
    /* 0077da2a: movsx ecx, byte ptr [edx + 0x48] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x48u));
    /* 0077da2e: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077da31: jne 0x77da36 */ if (!fZ) goto L_0077da36;
L_0077da33:; BB(0x0077da33);
    /* 0077da33: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077da36:; BB(0x0077da36);
    /* 0077da36: movsx ecx, byte ptr [edx + 0x4c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x4cu));
    /* 0077da3a: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077da3d: jne 0x77da42 */ if (!fZ) goto L_0077da42;
L_0077da3f:; BB(0x0077da3f);
    /* 0077da3f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077da42:; BB(0x0077da42);
    /* 0077da42: movsx ecx, byte ptr [edx + 0x50] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x50u));
    /* 0077da46: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077da49: jne 0x77da4e */ if (!fZ) goto L_0077da4e;
L_0077da4b:; BB(0x0077da4b);
    /* 0077da4b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077da4e:; BB(0x0077da4e);
    /* 0077da4e: movsx ecx, byte ptr [edx + 0x54] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x54u));
    /* 0077da52: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077da55: jne 0x77da5a */ if (!fZ) goto L_0077da5a;
L_0077da57:; BB(0x0077da57);
    /* 0077da57: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077da5a:; BB(0x0077da5a);
    /* 0077da5a: movsx ecx, byte ptr [edx + 0x58] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x58u));
    /* 0077da5e: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077da61: jne 0x77da66 */ if (!fZ) goto L_0077da66;
L_0077da63:; BB(0x0077da63);
    /* 0077da63: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077da66:; BB(0x0077da66);
    /* 0077da66: movsx ecx, byte ptr [edx + 0x5c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x5cu));
    /* 0077da6a: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077da6d: jne 0x77da72 */ if (!fZ) goto L_0077da72;
L_0077da6f:; BB(0x0077da6f);
    /* 0077da6f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077da72:; BB(0x0077da72);
    /* 0077da72: movsx ecx, byte ptr [edx + 0x60] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x60u));
    /* 0077da76: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077da79: jne 0x77da7e */ if (!fZ) goto L_0077da7e;
L_0077da7b:; BB(0x0077da7b);
    /* 0077da7b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077da7e:; BB(0x0077da7e);
    /* 0077da7e: movsx edx, byte ptr [edx + 0x64] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+0x64u));
    /* 0077da82: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077da85: jne 0x77da8a */ if (!fZ) goto L_0077da8a;
L_0077da87:; BB(0x0077da87);
    /* 0077da87: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0077da8a:; BB(0x0077da8a);
    /* 0077da8a: ret  */ FN_RET(0x0077d9f0); r_esp += 4; return;
}

void f_0077da8c(void) /* sub_77DA8C */
{
    FN_ENTER(0x0077da8c);
    /* 0077da8c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0077da90: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0077da93: and eax, 0xffffffe0 */ {  u32 a = r_eax; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077da96: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0077da99: or dword ptr [ecx], 1 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0077da9c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077da9e: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077daa0: or eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077daa4: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0077daa7: ret 8 */ FN_RET(0x0077da8c); r_esp += 12; return;
}

void f_0077daac(void) /* sub_77DAAC */
{
    FN_ENTER(0x0077daac);
    /* 0077daac: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077dab0: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0077dab4: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0077dab7: shl edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0077daba: or eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077dabe: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077dac0: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0077dac4: shl edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0077dac7: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077dac9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077dacd: mov word ptr [ecx + edx*2 + 0x30], ax */ W16((u32)(r_ecx+r_edx*2+0x30u), (u16)r_eax);
    /* 0077dad2: or dword ptr [ecx], 1 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077dad5: ret 0x14 */ FN_RET(0x0077daac); r_esp += 24; return;
}

void f_0077dad8(void) /* sub_77DAD8 */
{
    FN_ENTER(0x0077dad8);
    /* 0077dad8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077dad9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077dadb: movsx edx, byte ptr [ebx + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x38u));
    /* 0077dadf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077dae1: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077dae4: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077daea:; BB(0x0077daea);
    /* 0077daea: movsx edx, byte ptr [ebx + 0x3c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x3cu));
    /* 0077daee: mov eax, 1 */ r_eax = 0x1u;
    /* 0077daf3: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077daf6: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077dafc:; BB(0x0077dafc);
    /* 0077dafc: movsx edx, byte ptr [ebx + 0x40] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x40u));
    /* 0077db00: mov eax, 2 */ r_eax = 0x2u;
    /* 0077db05: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077db08: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077db0e:; BB(0x0077db0e);
    /* 0077db0e: movsx edx, byte ptr [ebx + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x44u));
    /* 0077db12: mov eax, 3 */ r_eax = 0x3u;
    /* 0077db17: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077db1a: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077db1c:; BB(0x0077db1c);
    /* 0077db1c: movsx edx, byte ptr [ebx + 0x48] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x48u));
    /* 0077db20: mov eax, 4 */ r_eax = 0x4u;
    /* 0077db25: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077db28: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077db2a:; BB(0x0077db2a);
    /* 0077db2a: movsx edx, byte ptr [ebx + 0x4c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x4cu));
    /* 0077db2e: mov eax, 5 */ r_eax = 0x5u;
    /* 0077db33: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077db36: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077db38:; BB(0x0077db38);
    /* 0077db38: movsx edx, byte ptr [ebx + 0x50] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x50u));
    /* 0077db3c: mov eax, 6 */ r_eax = 0x6u;
    /* 0077db41: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077db44: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077db46:; BB(0x0077db46);
    /* 0077db46: movsx edx, byte ptr [ebx + 0x54] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x54u));
    /* 0077db4a: mov eax, 7 */ r_eax = 0x7u;
    /* 0077db4f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077db52: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077db54:; BB(0x0077db54);
    /* 0077db54: movsx edx, byte ptr [ebx + 0x58] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x58u));
    /* 0077db58: mov eax, 8 */ r_eax = 0x8u;
    /* 0077db5d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077db60: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077db62:; BB(0x0077db62);
    /* 0077db62: movsx edx, byte ptr [ebx + 0x5c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x5cu));
    /* 0077db66: mov eax, 9 */ r_eax = 0x9u;
    /* 0077db6b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077db6e: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077db70:; BB(0x0077db70);
    /* 0077db70: movsx edx, byte ptr [ebx + 0x60] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x60u));
    /* 0077db74: mov eax, 0xa */ r_eax = 0xau;
    /* 0077db79: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077db7c: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077db7e:; BB(0x0077db7e);
    /* 0077db7e: movsx edx, byte ptr [ebx + 0x64] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x64u));
    /* 0077db82: mov eax, 0xb */ r_eax = 0xbu;
    /* 0077db87: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077db8a: je 0x77db91 */ if (fZ) goto L_0077db91;
L_0077db8c:; BB(0x0077db8c);
    /* 0077db8c: mov eax, 0xc */ r_eax = 0xcu;
L_0077db91:; BB(0x0077db91);
    /* 0077db91: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077db94: jl 0x77db9a */ if ((fS!=fO)) goto L_0077db9a;
L_0077db96:; BB(0x0077db96);
    /* 0077db96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077db97: ret 0x14 */ FN_RET(0x0077dad8); r_esp += 24; return;
L_0077db9a:; BB(0x0077db9a);
    /* 0077db9a: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077db9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077dba0: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077dba4: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077dba8: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077dbac: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077dbb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077dbb1: call 0x77dbc0 */ r_esp -= 4; W32(r_esp, 0x77dbb6u); f_0077dbc0();
    /* 0077dbb6: or dword ptr [ebx], 1 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077dbb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077dbba: ret 0x14 */ FN_RET(0x0077dad8); r_esp += 24; return;
}

void f_0077dbc0(void) /* sub_77DBC0 */
{
    FN_ENTER(0x0077dbc0);
    /* 0077dbc0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077dbc4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0077dbc8: mov byte ptr [ecx + eax*4 + 0x38], dl */ W8((u32)(r_ecx+r_eax*4+0x38u), (u8)r_edx);
    /* 0077dbcc: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077dbd0: mov byte ptr [ecx + eax*4 + 0x39], dl */ W8((u32)(r_ecx+r_eax*4+0x39u), (u8)r_edx);
    /* 0077dbd4: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0077dbd8: mov byte ptr [ecx + eax*4 + 0x3a], dl */ W8((u32)(r_ecx+r_eax*4+0x3au), (u8)r_edx);
    /* 0077dbdc: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0077dbe0: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0077dbe3: or edx, dword ptr [esp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077dbe7: mov byte ptr [ecx + eax*4 + 0x3b], dl */ W8((u32)(r_ecx+r_eax*4+0x3bu), (u8)r_edx);
    /* 0077dbeb: ret 0x18 */ FN_RET(0x0077dbc0); r_esp += 28; return;
}

void f_0077dbf0(void) /* sub_77DBF0 */
{
    FN_ENTER(0x0077dbf0);
    /* 0077dbf0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077dbf4: movzx edx, word ptr [ecx + eax*2 + 0x30] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x30u));
    /* 0077dbf9: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0077dbfc: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077dc02: je 0x77dc0c */ if (fZ) goto L_0077dc0c;
L_0077dc04:; BB(0x0077dc04);
    /* 0077dc04: mov eax, 1 */ r_eax = 0x1u;
    /* 0077dc09: ret 4 */ FN_RET(0x0077dbf0); r_esp += 8; return;
L_0077dc0c:; BB(0x0077dc0c);
    /* 0077dc0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077dc0e: ret 4 */ FN_RET(0x0077dbf0); r_esp += 8; return;
}

void f_0077dc14(void) /* sub_77DC14 */
{
    FN_ENTER(0x0077dc14);
    /* 0077dc14: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0077dc18: mov eax, 0xff */ r_eax = 0xffu;
    /* 0077dc1d: mov word ptr [ecx + edx*2 + 0x30], ax */ W16((u32)(r_ecx+r_edx*2+0x30u), (u16)r_eax);
    /* 0077dc22: ret 4 */ FN_RET(0x0077dc14); r_esp += 8; return;
}

void f_0077dc28(void) /* sub_77DC28 */
{
    FN_ENTER(0x0077dc28);
    /* 0077dc28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077dc29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077dc2b: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0077dc2f: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077dc32: jge 0x77dc56 */ if ((fS==fO)) goto L_0077dc56;
L_0077dc34:; BB(0x0077dc34);
    /* 0077dc34: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0077dc37: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077dc39: lea edx, [ebx + eax + 0x38] */ r_edx = (u32)(r_ebx+r_eax+0x38u);
    /* 0077dc3d: lea eax, [edx + 4] */ r_eax = (u32)(r_edx+0x4u);
    /* 0077dc40: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0077dc42: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077dc44: lea ecx, [ecx + ecx + 0x2c] */ r_ecx = (u32)(r_ecx+r_ecx+0x2cu);
    /* 0077dc48: and ecx, 0xfffffffc */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0077dc4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077dc4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077dc4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077dc4e: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77dc53u); f_0086b6b8();
    /* 0077dc53: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077dc56:; BB(0x0077dc56);
    /* 0077dc56: mov byte ptr [ebx + 0x64], 0xff */ W8((u32)(r_ebx+0x64u), 0xffu);
    /* 0077dc5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077dc5c: mov byte ptr [ebx + 0x65], al */ W8((u32)(r_ebx+0x65u), (u8)r_eax);
    /* 0077dc5f: mov byte ptr [ebx + 0x66], al */ W8((u32)(r_ebx+0x66u), (u8)r_eax);
    /* 0077dc62: mov byte ptr [ebx + 0x67], al */ W8((u32)(r_ebx+0x67u), (u8)r_eax);
    /* 0077dc65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077dc66: ret 4 */ FN_RET(0x0077dc28); r_esp += 8; return;
}

void f_0077dc6c(void) /* sub_77DC6C */
{
    FN_ENTER(0x0077dc6c);
    /* 0077dc6c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077dc70: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077dc73: jge 0x77dcd9 */ if ((fS==fO)) goto L_0077dcd9;
L_0077dc75:; BB(0x0077dc75);
    /* 0077dc75: mov edx, eax */ r_edx = r_eax;
    /* 0077dc77: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077dc79: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077dc7c: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077dc7f: jl 0x77dcc7 */ if ((fS!=fO)) goto L_0077dcc7;
L_0077dc81:; BB(0x0077dc81);
    /* 0077dc81: movsx edx, byte ptr [ecx + eax*4 + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax*4+0x38u));
    /* 0077dc86: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077dc89: je 0x77dcdc */ if (fZ) goto L_0077dcdc;
L_0077dc8b:; BB(0x0077dc8b);
    /* 0077dc8b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077dc8e: movsx edx, byte ptr [ecx + eax*4 + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax*4+0x38u));
    /* 0077dc93: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077dc96: je 0x77dcdc */ if (fZ) goto L_0077dcdc;
L_0077dc98:; BB(0x0077dc98);
    /* 0077dc98: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077dc9b: movsx edx, byte ptr [ecx + eax*4 + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax*4+0x38u));
    /* 0077dca0: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077dca3: je 0x77dcdc */ if (fZ) goto L_0077dcdc;
L_0077dca5:; BB(0x0077dca5);
    /* 0077dca5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077dca8: movsx edx, byte ptr [ecx + eax*4 + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax*4+0x38u));
    /* 0077dcad: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077dcb0: je 0x77dcdc */ if (fZ) goto L_0077dcdc;
L_0077dcb2:; BB(0x0077dcb2);
    /* 0077dcb2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077dcb5: movsx edx, byte ptr [ecx + eax*4 + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax*4+0x38u));
    /* 0077dcba: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077dcbd: je 0x77dcdc */ if (fZ) goto L_0077dcdc;
L_0077dcbf:; BB(0x0077dcbf);
    /* 0077dcbf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077dcc2: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077dcc5: jl 0x77dc81 */ if ((fS!=fO)) goto L_0077dc81;
L_0077dcc7:; BB(0x0077dcc7);
    /* 0077dcc7: movsx edx, byte ptr [ecx + eax*4 + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax*4+0x38u));
    /* 0077dccc: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077dccf: je 0x77dcdc */ if (fZ) goto L_0077dcdc;
L_0077dcd1:; BB(0x0077dcd1);
    /* 0077dcd1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077dcd4: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077dcd7: jl 0x77dcc7 */ if ((fS!=fO)) goto L_0077dcc7;
L_0077dcd9:; BB(0x0077dcd9);
    /* 0077dcd9: ret 4 */ FN_RET(0x0077dc6c); r_esp += 8; return;
L_0077dcdc:; BB(0x0077dcdc);
    /* 0077dcdc: ret 4 */ FN_RET(0x0077dc6c); r_esp += 8; return;
}

void f_0077dce0(void) /* sub_77DCE0 */
{
    FN_ENTER(0x0077dce0);
    /* 0077dce0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077dce1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077dce3: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 0077dce6: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0077dce8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077dcec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077dced: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x77dcf2u); f_00857dec();
    /* 0077dcf2: or dword ptr [ebx], 1 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0077dcf5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077dcf7: mov word ptr [ebx + 0x28], ax */ W16((u32)(r_ebx+0x28u), (u16)r_eax);
    /* 0077dcfb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077dcfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077dcff: ret 4 */ FN_RET(0x0077dce0); r_esp += 8; return;
}

void f_0077dd04(void) /* sub_77DD04 */
{
    FN_ENTER(0x0077dd04);
    /* 0077dd04: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077dd08: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0077dd0b: and edx, 0xfffffe1f */ {  u32 a = r_edx; u32 b = 0xfffffe1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0077dd11: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0077dd14: or dword ptr [ecx], 1 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0077dd17: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077dd19: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0077dd1c: ret 4 */ FN_RET(0x0077dd04); r_esp += 8; return;
}

void f_0077dd20(void) /* sub_77DD20 */
{
    FN_ENTER(0x0077dd20);
    /* 0077dd20: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077dd24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077dd26: je 0x77dd2d */ if (fZ) goto L_0077dd2d;
L_0077dd28:; BB(0x0077dd28);
    /* 0077dd28: mov eax, 1 */ r_eax = 0x1u;
L_0077dd2d:; BB(0x0077dd2d);
    /* 0077dd2d: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0077dd30: or dword ptr [ecx], 1 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0077dd33: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0077dd39: shl eax, 9 */ { u32 c = (9u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0077dd3c: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077dd3e: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0077dd41: ret 4 */ FN_RET(0x0077dd20); r_esp += 8; return;
}

void f_0077dd44(void) /* sub_77DD44 */
{
    FN_ENTER(0x0077dd44);
    /* 0077dd44: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077dd47: mov byte ptr [esp + 4], 7 */ W8((u32)(r_esp+0x4u), 0x7u);
    /* 0077dd4c: mov byte ptr [esp + 5], 0x11 */ W8((u32)(r_esp+0x5u), 0x11u);
    /* 0077dd51: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x77dd56u); f_006dc358();
    /* 0077dd56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077dd58: je 0x77dd5e */ if (fZ) goto L_0077dd5e;
L_0077dd5a:; BB(0x0077dd5a);
    /* 0077dd5a: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077dd5d: ret  */ FN_RET(0x0077dd44); r_esp += 4; return;
L_0077dd5e:; BB(0x0077dd5e);
    /* 0077dd5e: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0077dd62: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0077dd64: call 0x77d8d4 */ r_esp -= 4; W32(r_esp, 0x77dd69u); f_0077d8d4();
    /* 0077dd69: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0077dd6f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0077dd73: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0077dd76: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0077dd7a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0077dd7e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0077dd81: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0077dd85: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0077dd88: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0077dd8c: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0077dd8f: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0077dd93: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0077dd96: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0077dd9a: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0077dd9d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0077dda1: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0077dda4: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0077dda8: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0077ddab: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0077ddaf: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0077ddb2: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0077ddb6: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0077ddb9: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0077ddbd: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0077ddc0: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0077ddc4: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0077ddc7: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0077ddcb: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0077ddce: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0077ddd2: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0077ddd5: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0077ddd8: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0077dddc: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0077dde0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x77dde5u); f_008003e0();
    /* 0077dde5: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077dde8: ret  */ FN_RET(0x0077dd44); r_esp += 4; return;
}

void f_0077ddec(void) /* sub_77DDEC */
{
    FN_ENTER(0x0077ddec);
    /* 0077ddec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077dded: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077ddee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077ddef: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0077ddf3: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x77ddf8u); f_006dc358();
    /* 0077ddf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ddfa: je 0x77de00 */ if (fZ) goto L_0077de00;
L_0077ddfc:; BB(0x0077ddfc);
    /* 0077ddfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077ddfd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ddfe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ddff: ret  */ FN_RET(0x0077ddec); r_esp += 4; return;
L_0077de00:; BB(0x0077de00);
    /* 0077de00: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077de03: lea edi, [ebp + 8] */ r_edi = (u32)(r_ebp+0x8u);
    /* 0077de06: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x77de0bu); f_0068d5a8();
    /* 0077de0b: mov esi, eax */ r_esi = r_eax;
    /* 0077de0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077de10: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077de12: je 0x77ddfc */ if (fZ) goto L_0077ddfc;
L_0077de14:; BB(0x0077de14);
    /* 0077de14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077de15: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0077de19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077de1a: call 0x77e220 */ r_esp -= 4; W32(r_esp, 0x77de1fu); f_0077e220();
    /* 0077de1f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077de25: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0077de27: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0077de2b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077de2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077de2d: call 0x718554 */ r_esp -= 4; W32(r_esp, 0x77de32u); f_00718554();
    /* 0077de32: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077de35: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0077de38: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077de3e: je 0x77ddfc */ if (fZ) goto L_0077ddfc;
L_0077de40:; BB(0x0077de40);
    /* 0077de40: movsx eax, byte ptr [0xa9b414] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa9b414u));
    /* 0077de47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077de49: jle 0x77de55 */ if ((fZ||fS!=fO)) goto L_0077de55;
L_0077de4b:; BB(0x0077de4b);
    /* 0077de4b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077de4e: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 0077de51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077de53: jg 0x77de4b */ if ((!fZ&&fS==fO)) goto L_0077de4b;
L_0077de55:; BB(0x0077de55);
    /* 0077de55: mov dword ptr [0xa9b3cc], edx */ W32((u32)(0xa9b3ccu), r_edx);
    /* 0077de5b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077de5e: mov byte ptr [0xa9b414], al */ W8((u32)(0xa9b414u), (u8)r_eax);
    /* 0077de63: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0077de66: mov dword ptr [0xa9b3d0], eax */ W32((u32)(0xa9b3d0u), r_eax);
    /* 0077de6b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0077de6e: mov dword ptr [0xa9b3d4], edx */ W32((u32)(0xa9b3d4u), r_edx);
    /* 0077de74: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0077de77: mov dword ptr [0xa9b3d8], ecx */ W32((u32)(0xa9b3d8u), r_ecx);
    /* 0077de7d: mov esi, dword ptr [ebp + 0x18] */ r_esi = R32((u32)(r_ebp+0x18u));
    /* 0077de80: mov dword ptr [0xa9b3dc], esi */ W32((u32)(0xa9b3dcu), r_esi);
    /* 0077de86: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 0077de89: mov dword ptr [0xa9b3e0], edi */ W32((u32)(0xa9b3e0u), r_edi);
    /* 0077de8f: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0077de92: mov dword ptr [0xa9b3e4], eax */ W32((u32)(0xa9b3e4u), r_eax);
    /* 0077de97: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077de9a: mov dword ptr [0xa9b3e8], eax */ W32((u32)(0xa9b3e8u), r_eax);
    /* 0077de9f: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0077dea2: mov dword ptr [0xa9b3ec], eax */ W32((u32)(0xa9b3ecu), r_eax);
    /* 0077dea7: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 0077deaa: mov dword ptr [0xa9b3f0], eax */ W32((u32)(0xa9b3f0u), r_eax);
    /* 0077deaf: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0077deb2: mov dword ptr [0xa9b3f4], eax */ W32((u32)(0xa9b3f4u), r_eax);
    /* 0077deb7: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 0077deba: mov dword ptr [0xa9b3f8], eax */ W32((u32)(0xa9b3f8u), r_eax);
    /* 0077debf: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0077dec2: mov dword ptr [0xa9b3fc], eax */ W32((u32)(0xa9b3fcu), r_eax);
    /* 0077dec7: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0077deca: mov dword ptr [0xa9b400], eax */ W32((u32)(0xa9b400u), r_eax);
    /* 0077decf: mov ebp, dword ptr [ebp + 0x40] */ r_ebp = R32((u32)(r_ebp+0x40u));
    /* 0077ded2: mov dword ptr [0xa9b404], ebp */ W32((u32)(0xa9b404u), r_ebp);
    /* 0077ded8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077ded9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077deda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077dedb: ret  */ FN_RET(0x0077ddec); r_esp += 4; return;
}

void f_0077dedc(void) /* sub_77DEDC */
{
    FN_ENTER(0x0077dedc);
    /* 0077dedc: mov dword ptr [0xa9b408], 0x3f800000 */ W32((u32)(0xa9b408u), 0x3f800000u);
    /* 0077dee6: mov dword ptr [0xa9b40c], 0x41000000 */ W32((u32)(0xa9b40cu), 0x41000000u);
    /* 0077def0: mov dword ptr [0xa9b410], 0x3fc00000 */ W32((u32)(0xa9b410u), 0x3fc00000u);
    /* 0077defa: ret  */ FN_RET(0x0077dedc); r_esp += 4; return;
}

void f_0077defc(void) /* sub_77DEFC */
{
    FN_ENTER(0x0077defc);
    /* 0077defc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077defe: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0077df00: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0077df04: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0077df07: mov edx, 0xff */ r_edx = 0xffu;
    /* 0077df0c: mov word ptr [ecx + 0x30], dx */ W16((u32)(r_ecx+0x30u), (u16)r_edx);
    /* 0077df10: mov word ptr [ecx + 0x32], dx */ W16((u32)(r_ecx+0x32u), (u16)r_edx);
    /* 0077df14: mov word ptr [ecx + 0x34], dx */ W16((u32)(r_ecx+0x34u), (u16)r_edx);
    /* 0077df18: mov word ptr [ecx + 0x36], dx */ W16((u32)(r_ecx+0x36u), (u16)r_edx);
    /* 0077df1c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0077df21: mov byte ptr [ecx + 0x38], dl */ W8((u32)(r_ecx+0x38u), (u8)r_edx);
    /* 0077df24: mov byte ptr [ecx + 0x39], al */ W8((u32)(r_ecx+0x39u), (u8)r_eax);
    /* 0077df27: mov byte ptr [ecx + 0x3a], al */ W8((u32)(r_ecx+0x3au), (u8)r_eax);
    /* 0077df2a: mov byte ptr [ecx + 0x3b], al */ W8((u32)(r_ecx+0x3bu), (u8)r_eax);
    /* 0077df2d: mov byte ptr [ecx + 0x3c], dl */ W8((u32)(r_ecx+0x3cu), (u8)r_edx);
    /* 0077df30: mov byte ptr [ecx + 0x3d], al */ W8((u32)(r_ecx+0x3du), (u8)r_eax);
    /* 0077df33: mov byte ptr [ecx + 0x3e], al */ W8((u32)(r_ecx+0x3eu), (u8)r_eax);
    /* 0077df36: mov byte ptr [ecx + 0x3f], al */ W8((u32)(r_ecx+0x3fu), (u8)r_eax);
    /* 0077df39: mov byte ptr [ecx + 0x40], dl */ W8((u32)(r_ecx+0x40u), (u8)r_edx);
    /* 0077df3c: mov byte ptr [ecx + 0x41], al */ W8((u32)(r_ecx+0x41u), (u8)r_eax);
    /* 0077df3f: mov byte ptr [ecx + 0x42], al */ W8((u32)(r_ecx+0x42u), (u8)r_eax);
    /* 0077df42: mov byte ptr [ecx + 0x43], al */ W8((u32)(r_ecx+0x43u), (u8)r_eax);
    /* 0077df45: mov byte ptr [ecx + 0x44], dl */ W8((u32)(r_ecx+0x44u), (u8)r_edx);
    /* 0077df48: mov byte ptr [ecx + 0x45], al */ W8((u32)(r_ecx+0x45u), (u8)r_eax);
    /* 0077df4b: mov byte ptr [ecx + 0x46], al */ W8((u32)(r_ecx+0x46u), (u8)r_eax);
    /* 0077df4e: mov byte ptr [ecx + 0x47], al */ W8((u32)(r_ecx+0x47u), (u8)r_eax);
    /* 0077df51: mov byte ptr [ecx + 0x48], dl */ W8((u32)(r_ecx+0x48u), (u8)r_edx);
    /* 0077df54: mov byte ptr [ecx + 0x49], al */ W8((u32)(r_ecx+0x49u), (u8)r_eax);
    /* 0077df57: mov byte ptr [ecx + 0x4a], al */ W8((u32)(r_ecx+0x4au), (u8)r_eax);
    /* 0077df5a: mov byte ptr [ecx + 0x4b], al */ W8((u32)(r_ecx+0x4bu), (u8)r_eax);
    /* 0077df5d: mov byte ptr [ecx + 0x4c], dl */ W8((u32)(r_ecx+0x4cu), (u8)r_edx);
    /* 0077df60: mov byte ptr [ecx + 0x4d], al */ W8((u32)(r_ecx+0x4du), (u8)r_eax);
    /* 0077df63: mov byte ptr [ecx + 0x4e], al */ W8((u32)(r_ecx+0x4eu), (u8)r_eax);
    /* 0077df66: mov byte ptr [ecx + 0x4f], al */ W8((u32)(r_ecx+0x4fu), (u8)r_eax);
    /* 0077df69: mov byte ptr [ecx + 0x50], dl */ W8((u32)(r_ecx+0x50u), (u8)r_edx);
    /* 0077df6c: mov byte ptr [ecx + 0x51], al */ W8((u32)(r_ecx+0x51u), (u8)r_eax);
    /* 0077df6f: mov byte ptr [ecx + 0x52], al */ W8((u32)(r_ecx+0x52u), (u8)r_eax);
    /* 0077df72: mov byte ptr [ecx + 0x53], al */ W8((u32)(r_ecx+0x53u), (u8)r_eax);
    /* 0077df75: mov byte ptr [ecx + 0x54], dl */ W8((u32)(r_ecx+0x54u), (u8)r_edx);
    /* 0077df78: mov byte ptr [ecx + 0x55], al */ W8((u32)(r_ecx+0x55u), (u8)r_eax);
    /* 0077df7b: mov byte ptr [ecx + 0x56], al */ W8((u32)(r_ecx+0x56u), (u8)r_eax);
    /* 0077df7e: mov byte ptr [ecx + 0x57], al */ W8((u32)(r_ecx+0x57u), (u8)r_eax);
    /* 0077df81: mov byte ptr [ecx + 0x58], dl */ W8((u32)(r_ecx+0x58u), (u8)r_edx);
    /* 0077df84: mov byte ptr [ecx + 0x59], al */ W8((u32)(r_ecx+0x59u), (u8)r_eax);
    /* 0077df87: mov byte ptr [ecx + 0x5a], al */ W8((u32)(r_ecx+0x5au), (u8)r_eax);
    /* 0077df8a: mov byte ptr [ecx + 0x5b], al */ W8((u32)(r_ecx+0x5bu), (u8)r_eax);
    /* 0077df8d: mov byte ptr [ecx + 0x5c], dl */ W8((u32)(r_ecx+0x5cu), (u8)r_edx);
    /* 0077df90: mov byte ptr [ecx + 0x5d], al */ W8((u32)(r_ecx+0x5du), (u8)r_eax);
    /* 0077df93: mov byte ptr [ecx + 0x5e], al */ W8((u32)(r_ecx+0x5eu), (u8)r_eax);
    /* 0077df96: mov byte ptr [ecx + 0x5f], al */ W8((u32)(r_ecx+0x5fu), (u8)r_eax);
    /* 0077df99: mov byte ptr [ecx + 0x60], dl */ W8((u32)(r_ecx+0x60u), (u8)r_edx);
    /* 0077df9c: mov byte ptr [ecx + 0x61], al */ W8((u32)(r_ecx+0x61u), (u8)r_eax);
    /* 0077df9f: mov byte ptr [ecx + 0x62], al */ W8((u32)(r_ecx+0x62u), (u8)r_eax);
    /* 0077dfa2: mov byte ptr [ecx + 0x63], al */ W8((u32)(r_ecx+0x63u), (u8)r_eax);
    /* 0077dfa5: mov byte ptr [ecx + 0x64], dl */ W8((u32)(r_ecx+0x64u), (u8)r_edx);
    /* 0077dfa8: mov byte ptr [ecx + 0x65], al */ W8((u32)(r_ecx+0x65u), (u8)r_eax);
    /* 0077dfab: mov byte ptr [ecx + 0x66], al */ W8((u32)(r_ecx+0x66u), (u8)r_eax);
    /* 0077dfae: mov byte ptr [ecx + 0x67], al */ W8((u32)(r_ecx+0x67u), (u8)r_eax);
    /* 0077dfb1: ret  */ FN_RET(0x0077defc); r_esp += 4; return;
}

void f_0077df80(void)
{
    FN_ENTER(0x0077df80);
    /* 0077df80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077df81: mov byte ptr [ecx + 0x58], dl */ W8((u32)(r_ecx+0x58u), (u8)r_edx);
    /* 0077df84: mov byte ptr [ecx + 0x59], al */ W8((u32)(r_ecx+0x59u), (u8)r_eax);
    /* 0077df87: mov byte ptr [ecx + 0x5a], al */ W8((u32)(r_ecx+0x5au), (u8)r_eax);
    /* 0077df8a: mov byte ptr [ecx + 0x5b], al */ W8((u32)(r_ecx+0x5bu), (u8)r_eax);
    /* 0077df8d: mov byte ptr [ecx + 0x5c], dl */ W8((u32)(r_ecx+0x5cu), (u8)r_edx);
    /* 0077df90: mov byte ptr [ecx + 0x5d], al */ W8((u32)(r_ecx+0x5du), (u8)r_eax);
    /* 0077df93: mov byte ptr [ecx + 0x5e], al */ W8((u32)(r_ecx+0x5eu), (u8)r_eax);
    /* 0077df96: mov byte ptr [ecx + 0x5f], al */ W8((u32)(r_ecx+0x5fu), (u8)r_eax);
    /* 0077df99: mov byte ptr [ecx + 0x60], dl */ W8((u32)(r_ecx+0x60u), (u8)r_edx);
    /* 0077df9c: mov byte ptr [ecx + 0x61], al */ W8((u32)(r_ecx+0x61u), (u8)r_eax);
    /* 0077df9f: mov byte ptr [ecx + 0x62], al */ W8((u32)(r_ecx+0x62u), (u8)r_eax);
    /* 0077dfa2: mov byte ptr [ecx + 0x63], al */ W8((u32)(r_ecx+0x63u), (u8)r_eax);
    /* 0077dfa5: mov byte ptr [ecx + 0x64], dl */ W8((u32)(r_ecx+0x64u), (u8)r_edx);
    /* 0077dfa8: mov byte ptr [ecx + 0x65], al */ W8((u32)(r_ecx+0x65u), (u8)r_eax);
    /* 0077dfab: mov byte ptr [ecx + 0x66], al */ W8((u32)(r_ecx+0x66u), (u8)r_eax);
    /* 0077dfae: mov byte ptr [ecx + 0x67], al */ W8((u32)(r_ecx+0x67u), (u8)r_eax);
    /* 0077dfb1: ret  */ FN_RET(0x0077df80); r_esp += 4; return;
}

void f_0077dfb4(void) /* sub_77DFB4 */
{
    FN_ENTER(0x0077dfb4);
    /* 0077dfb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077dfb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077dfb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077dfb7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077dfb8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077dfb9: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0077dfbd: lea ebx, [eax + 0x15f0] */ r_ebx = (u32)(r_eax+0x15f0u);
    /* 0077dfc3: push 0x9796a0 */ { u32 v = 0x9796a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077dfc8: call 0x5b9554 */ r_esp -= 4; W32(r_esp, 0x77dfcdu); f_005b9554();
    /* 0077dfcd: mov esi, eax */ r_esi = r_eax;
    /* 0077dfcf: push 0x4e0 */ { u32 v = 0x4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077dfd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077dfd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077dfd6: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77dfdbu); f_0086b6b8();
    /* 0077dfdb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077dfdc: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x77dfe1u); f_0082e960();
    /* 0077dfe1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077dfe4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0077dfe6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077dfe8: mov esi, 0xe4 */ r_esi = 0xe4u;
    /* 0077dfed: mov ebp, eax */ r_ebp = r_eax;
L_0077dfef:; BB(0x0077dfef);
    /* 0077dfef: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077dff4: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x77dff9u); f_006c1bd4();
    /* 0077dff9: mov edi, eax */ r_edi = r_eax;
    /* 0077dffb: lea edx, [ebp + edi + 0x15f4] */ r_edx = (u32)(r_ebp+r_edi+0x15f4u);
    /* 0077e002: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0077e006: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e007: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x77e00cu); f_0079317c();
    /* 0077e00c: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e00e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077e00f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0077e013: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e014: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x77e019u); f_00857dec();
    /* 0077e019: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077e01c: mov ecx, dword ptr [ebp + edi + 0x15f0] */ r_ecx = R32((u32)(r_ebp+r_edi+0x15f0u));
    /* 0077e023: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077e025: mov word ptr [ebp + edi + 0x1618], dx */ W16((u32)(r_ebp+r_edi+0x1618u), (u16)r_edx);
    /* 0077e02d: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0077e030: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077e033: mov dword ptr [ebp + edi + 0x15f0], ecx */ W32((u32)(r_ebp+r_edi+0x15f0u), r_ecx);
    /* 0077e03a: add ebp, 0x68 */ {  u32 a = r_ebp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077e03d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077e040: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077e043: jl 0x77dfef */ if ((fS!=fO)) goto L_0077dfef;
L_0077e045:; BB(0x0077e045);
    /* 0077e045: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e048: jge 0x77e07c */ if ((fS==fO)) goto L_0077e07c;
L_0077e04a:; BB(0x0077e04a);
    /* 0077e04a: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0077e04d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077e04f: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077e051: lea esi, [ebx + eax*4] */ r_esi = (u32)(r_ebx+r_eax*4);
    /* 0077e054: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077e056: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077e058: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0077e05a:; BB(0x0077e05a);
    /* 0077e05a: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077e05f: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x77e064u); f_006c1bd4();
    /* 0077e064: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e065: lea ecx, [esi + eax + 0x15f0] */ r_ecx = (u32)(r_esi+r_eax+0x15f0u);
    /* 0077e06c: call 0x77defc */ r_esp -= 4; W32(r_esp, 0x77e071u); f_0077defc();
    /* 0077e071: add esi, 0x68 */ {  u32 a = r_esi; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077e074: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077e077: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e07a: jl 0x77e05a */ if ((fS!=fO)) goto L_0077e05a;
L_0077e07c:; BB(0x0077e07c);
    /* 0077e07c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e07d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e07e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e07f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e080: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077e081: ret  */ FN_RET(0x0077dfb4); r_esp += 4; return;
}

