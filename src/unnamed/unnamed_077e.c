#include "protos.h"

void f_0077e084(void) /* sub_77E084 */
{
    FN_ENTER(0x0077e084);
    /* 0077e084: mov byte ptr [0xa9b414], 0 */ W8((u32)(0xa9b414u), 0x0u);
    /* 0077e08b: mov ecx, 0xa9b3a0 */ r_ecx = 0xa9b3a0u;
    /* 0077e090: call 0x77defc */ r_esp -= 4; W32(r_esp, 0x77e095u); f_0077defc();
    /* 0077e095: ret  */ FN_RET(0x0077e084); r_esp += 4; return;
}

void f_0077e098(void) /* sub_77E098 */
{
    FN_ENTER(0x0077e098);
    /* 0077e098: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e099: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077e09b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077e09d: call 0x77e0bc */ r_esp -= 4; W32(r_esp, 0x77e0a2u); f_0077e0bc();
    /* 0077e0a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077e0a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e0a8: jne 0x77e0ae */ if (!fZ) goto L_0077e0ae;
L_0077e0aa:; BB(0x0077e0aa);
    /* 0077e0aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e0ab: ret 4 */ FN_RET(0x0077e098); r_esp += 8; return;
L_0077e0ae:; BB(0x0077e0ae);
    /* 0077e0ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e0af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x77e0b4u); f_005c2f74();
    /* 0077e0b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e0b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e0b6: ret 4 */ FN_RET(0x0077e098); r_esp += 8; return;
}

void f_0077e0bc(void) /* sub_77E0BC */
{
    FN_ENTER(0x0077e0bc);
    /* 0077e0bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e0bd: mov ebp, esp */ r_ebp = r_esp;
    /* 0077e0bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077e0c1: push 0x8f4348 */ { u32 v = 0x8f4348u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e0c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077e0cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077e0cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077e0d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077e0d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077e0da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077e0dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077e0e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077e0e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0077e0e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077e0ed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077e0f0: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077e0f3: mov dword ptr [eax], 0xb445a8 */ W32((u32)(r_eax), 0xb445a8u);
    /* 0077e0f9: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x77e0feu); f_00857e98();
    /* 0077e0fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e0ff: mov dword ptr [0xa9b420], 0 */ W32((u32)(0xa9b420u), 0x0u);
    /* 0077e109: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0077e110: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077e113: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x77e118u); f_008171e8();
    /* 0077e118: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077e11b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077e122: mov esp, ebp */ r_esp = r_ebp;
    /* 0077e124: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e125: ret  */ FN_RET(0x0077e0bc); r_esp += 4; return;
}

void f_0077e128(void) /* sub_77E128 */
{
    FN_ENTER(0x0077e128);
    /* 0077e128: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e129: mov ebp, esp */ r_ebp = r_esp;
    /* 0077e12b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077e12d: push 0x8f437e */ { u32 v = 0x8f437eu; r_esp -= 4; W32(r_esp, v); }
    /* 0077e132: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077e138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077e139: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077e140: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077e143: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077e146: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0077e149: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0077e14c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0077e14f: mov eax, dword ptr [0xa9b420] */ r_eax = R32((u32)(0xa9b420u));
    /* 0077e154: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e156: je 0x77e16f */ if (fZ) goto L_0077e16f;
L_0077e158:; BB(0x0077e158);
    /* 0077e158: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077e15b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077e15e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077e161: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077e164: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077e16b: mov esp, ebp */ r_esp = r_ebp;
    /* 0077e16d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e16e: ret  */ FN_RET(0x0077e128); r_esp += 4; return;
L_0077e16f:; BB(0x0077e16f);
    /* 0077e16f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0077e176: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e178: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x77e17du); f_005caba4();
    /* 0077e17d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0077e180: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077e183: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0077e186: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e188: je 0x77e158 */ if (fZ) goto L_0077e158;
L_0077e18a:; BB(0x0077e18a);
    /* 0077e18a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0077e191: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077e198: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077e19b: mov ecx, eax */ r_ecx = r_eax;
    /* 0077e19d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0077e1a0: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x77e1a5u); f_008193cc();
    /* 0077e1a5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0077e1ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0077e1af: mov dword ptr [eax], 0xb445a8 */ W32((u32)(r_eax), 0xb445a8u);
    /* 0077e1b5: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e1ba: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x77e1bfu); f_008581c5();
    /* 0077e1bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e1c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077e1c3: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0077e1c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e1c8: je 0x77e211 */ if (fZ) goto L_0077e211;
L_0077e1ca:; BB(0x0077e1ca);
    /* 0077e1ca: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0077e1cc:; BB(0x0077e1cc);
    /* 0077e1cc: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0077e1cf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077e1d1: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0077e1d4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077e1d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077e1d8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077e1da: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0077e1dc: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077e1de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077e1df: call 0x77e400 */ r_esp -= 4; W32(r_esp, 0x77e1e4u); f_0077e400();
    /* 0077e1e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e1e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0077e1e8: mov dword ptr [eax + ebx*4 + 0x20], 0 */ W32((u32)(r_eax+r_ebx*4+0x20u), 0x0u);
    /* 0077e1f0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077e1f3: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e1f6: jge 0x77e1fd */ if ((fS==fO)) goto L_0077e1fd;
L_0077e1f8:; BB(0x0077e1f8);
    /* 0077e1f8: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0077e1fb: jmp 0x77e1cc */ goto L_0077e1cc;
L_0077e1fd:; BB(0x0077e1fd);
    /* 0077e1fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0077e200: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0077e207: mov dword ptr [0xa9b420], eax */ W32((u32)(0xa9b420u), r_eax);
    /* 0077e20c: jmp 0x77e158 */ goto L_0077e158;
L_0077e211:; BB(0x0077e211);
    /* 0077e211: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0077e215: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e21a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0077e21e: jmp 0x77e1fd */ goto L_0077e1fd;
}

void f_0077e220(void) /* sub_77E220 */
{
    FN_ENTER(0x0077e220);
    /* 0077e220: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0077e225: mov ecx, dword ptr [0xa9b420] */ r_ecx = R32((u32)(0xa9b420u));
    /* 0077e22b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e22d: je 0x77e23e */ if (fZ) goto L_0077e23e;
L_0077e22f:; BB(0x0077e22f);
    /* 0077e22f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e232: jge 0x77e23e */ if ((fS==fO)) goto L_0077e23e;
L_0077e234:; BB(0x0077e234);
    /* 0077e234: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077e238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077e239: call 0x77e240 */ r_esp -= 4; W32(r_esp, 0x77e23eu); f_0077e240();
L_0077e23e:; BB(0x0077e23e);
    /* 0077e23e: ret  */ FN_RET(0x0077e220); r_esp += 4; return;
}

void f_0077e240(void) /* sub_77E240 */
{
    FN_ENTER(0x0077e240);
    /* 0077e240: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e241: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e242: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e243: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077e245: movzx ebp, word ptr [esp + 0x10] */ r_ebp = (u32)R16((u32)(r_esp+0x10u));
    /* 0077e24a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0077e24e: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 0077e251: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e253: je 0x77e2d9 */ if (fZ) goto L_0077e2d9;
L_0077e259:; BB(0x0077e259);
    /* 0077e259: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 0077e25d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077e25f: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0077e262: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077e264: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077e266: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077e268: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e26a: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0077e26c: mov dword ptr [edx + ecx], esi */ W32((u32)(r_edx+r_ecx), r_esi);
    /* 0077e26f: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0077e272: mov dword ptr [edx + ecx + 4], esi */ W32((u32)(r_edx+r_ecx+0x4u), r_esi);
    /* 0077e276: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0077e279: mov dword ptr [edx + ecx + 8], esi */ W32((u32)(r_edx+r_ecx+0x8u), r_esi);
    /* 0077e27d: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0077e280: mov dword ptr [edx + ecx + 0xc], esi */ W32((u32)(r_edx+r_ecx+0xcu), r_esi);
    /* 0077e284: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 0077e287: mov dword ptr [edx + ecx + 0x10], esi */ W32((u32)(r_edx+r_ecx+0x10u), r_esi);
    /* 0077e28b: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 0077e28e: mov dword ptr [edx + ecx + 0x14], esi */ W32((u32)(r_edx+r_ecx+0x14u), r_esi);
    /* 0077e292: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 0077e295: mov dword ptr [edx + ecx + 0x18], esi */ W32((u32)(r_edx+r_ecx+0x18u), r_esi);
    /* 0077e299: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 0077e29c: mov dword ptr [edx + ecx + 0x1c], esi */ W32((u32)(r_edx+r_ecx+0x1cu), r_esi);
    /* 0077e2a0: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 0077e2a3: mov dword ptr [edx + ecx + 0x20], esi */ W32((u32)(r_edx+r_ecx+0x20u), r_esi);
    /* 0077e2a7: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 0077e2aa: mov dword ptr [edx + ecx + 0x24], esi */ W32((u32)(r_edx+r_ecx+0x24u), r_esi);
    /* 0077e2ae: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 0077e2b1: mov dword ptr [edx + ecx + 0x28], esi */ W32((u32)(r_edx+r_ecx+0x28u), r_esi);
    /* 0077e2b5: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 0077e2b8: mov dword ptr [edx + ecx + 0x2c], esi */ W32((u32)(r_edx+r_ecx+0x2cu), r_esi);
    /* 0077e2bc: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 0077e2bf: mov dword ptr [edx + ecx + 0x30], esi */ W32((u32)(r_edx+r_ecx+0x30u), r_esi);
    /* 0077e2c3: mov esi, dword ptr [eax + 0x34] */ r_esi = R32((u32)(r_eax+0x34u));
    /* 0077e2c6: mov dword ptr [edx + ecx + 0x34], esi */ W32((u32)(r_edx+r_ecx+0x34u), r_esi);
    /* 0077e2ca: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0077e2cd: mov dword ptr [edx + ecx + 0x38], eax */ W32((u32)(r_edx+r_ecx+0x38u), r_eax);
    /* 0077e2d1: mov dword ptr [ebx + ebp*4 + 0x20], 0x78 */ W32((u32)(r_ebx+r_ebp*4+0x20u), 0x78u);
L_0077e2d9:; BB(0x0077e2d9);
    /* 0077e2d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e2da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e2db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e2dc: ret 8 */ FN_RET(0x0077e240); r_esp += 12; return;
}

void f_0077e2e0(void) /* sub_77E2E0 */
{
    FN_ENTER(0x0077e2e0);
    /* 0077e2e0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0077e2e5: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0077e2e9: mov ecx, dword ptr [0xa9b420] */ r_ecx = R32((u32)(0xa9b420u));
    /* 0077e2ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e2f1: je 0x77e300 */ if (fZ) goto L_0077e300;
L_0077e2f3:; BB(0x0077e2f3);
    /* 0077e2f3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077e2f6: jge 0x77e300 */ if ((fS==fO)) goto L_0077e300;
L_0077e2f8:; BB(0x0077e2f8);
    /* 0077e2f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e2f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077e2fa: call 0x77e308 */ r_esp -= 4; W32(r_esp, 0x77e2ffu); f_0077e308();
    /* 0077e2ff: ret  */ FN_RET(0x0077e2e0); r_esp += 4; return;
L_0077e300:; BB(0x0077e300);
    /* 0077e300: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e301: call 0x77e400 */ r_esp -= 4; W32(r_esp, 0x77e306u); f_0077e400();
    /* 0077e306: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e307: ret  */ FN_RET(0x0077e2e0); r_esp += 4; return;
}

void f_0077e308(void) /* sub_77E308 */
{
    FN_ENTER(0x0077e308);
    /* 0077e308: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e309: mov eax, ecx */ r_eax = r_ecx;
    /* 0077e30b: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0077e30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e310: movzx ebp, word ptr [esp + 8] */ r_ebp = (u32)R16((u32)(r_esp+0x8u));
    /* 0077e315: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077e319: je 0x77e398 */ if (fZ) goto L_0077e398;
L_0077e31b:; BB(0x0077e31b);
    /* 0077e31b: lea ebp, [ebp + ebp] */ r_ebp = (u32)(r_ebp+r_ebp);
    /* 0077e31f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077e321: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0077e325: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077e327: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077e329: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077e32b: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e32d: mov ebp, dword ptr [eax + edx] */ r_ebp = R32((u32)(r_eax+r_edx));
    /* 0077e330: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 0077e332: mov ebp, dword ptr [eax + edx + 4] */ r_ebp = R32((u32)(r_eax+r_edx+0x4u));
    /* 0077e336: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 0077e339: mov ebp, dword ptr [eax + edx + 8] */ r_ebp = R32((u32)(r_eax+r_edx+0x8u));
    /* 0077e33d: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 0077e340: mov ebp, dword ptr [eax + edx + 0xc] */ r_ebp = R32((u32)(r_eax+r_edx+0xcu));
    /* 0077e344: mov dword ptr [ecx + 0xc], ebp */ W32((u32)(r_ecx+0xcu), r_ebp);
    /* 0077e347: mov ebp, dword ptr [eax + edx + 0x10] */ r_ebp = R32((u32)(r_eax+r_edx+0x10u));
    /* 0077e34b: mov dword ptr [ecx + 0x10], ebp */ W32((u32)(r_ecx+0x10u), r_ebp);
    /* 0077e34e: mov ebp, dword ptr [eax + edx + 0x14] */ r_ebp = R32((u32)(r_eax+r_edx+0x14u));
    /* 0077e352: mov dword ptr [ecx + 0x14], ebp */ W32((u32)(r_ecx+0x14u), r_ebp);
    /* 0077e355: mov ebp, dword ptr [eax + edx + 0x18] */ r_ebp = R32((u32)(r_eax+r_edx+0x18u));
    /* 0077e359: mov dword ptr [ecx + 0x18], ebp */ W32((u32)(r_ecx+0x18u), r_ebp);
    /* 0077e35c: mov ebp, dword ptr [eax + edx + 0x1c] */ r_ebp = R32((u32)(r_eax+r_edx+0x1cu));
    /* 0077e360: mov dword ptr [ecx + 0x1c], ebp */ W32((u32)(r_ecx+0x1cu), r_ebp);
    /* 0077e363: mov ebp, dword ptr [eax + edx + 0x20] */ r_ebp = R32((u32)(r_eax+r_edx+0x20u));
    /* 0077e367: mov dword ptr [ecx + 0x20], ebp */ W32((u32)(r_ecx+0x20u), r_ebp);
    /* 0077e36a: mov ebp, dword ptr [eax + edx + 0x24] */ r_ebp = R32((u32)(r_eax+r_edx+0x24u));
    /* 0077e36e: mov dword ptr [ecx + 0x24], ebp */ W32((u32)(r_ecx+0x24u), r_ebp);
    /* 0077e371: mov ebp, dword ptr [eax + edx + 0x28] */ r_ebp = R32((u32)(r_eax+r_edx+0x28u));
    /* 0077e375: mov dword ptr [ecx + 0x28], ebp */ W32((u32)(r_ecx+0x28u), r_ebp);
    /* 0077e378: mov ebp, dword ptr [eax + edx + 0x2c] */ r_ebp = R32((u32)(r_eax+r_edx+0x2cu));
    /* 0077e37c: mov dword ptr [ecx + 0x2c], ebp */ W32((u32)(r_ecx+0x2cu), r_ebp);
    /* 0077e37f: mov ebp, dword ptr [eax + edx + 0x30] */ r_ebp = R32((u32)(r_eax+r_edx+0x30u));
    /* 0077e383: mov dword ptr [ecx + 0x30], ebp */ W32((u32)(r_ecx+0x30u), r_ebp);
    /* 0077e386: mov ebp, dword ptr [eax + edx + 0x34] */ r_ebp = R32((u32)(r_eax+r_edx+0x34u));
    /* 0077e38a: mov dword ptr [ecx + 0x34], ebp */ W32((u32)(r_ecx+0x34u), r_ebp);
    /* 0077e38d: mov edx, dword ptr [eax + edx + 0x38] */ r_edx = R32((u32)(r_eax+r_edx+0x38u));
    /* 0077e391: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0077e394: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e395: ret 8 */ FN_RET(0x0077e308); r_esp += 12; return;
L_0077e398:; BB(0x0077e398);
    /* 0077e398: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e399: call 0x77e400 */ r_esp -= 4; W32(r_esp, 0x77e39eu); f_0077e400();
    /* 0077e39e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e39f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e3a0: ret 8 */ FN_RET(0x0077e308); r_esp += 12; return;
}

void f_0077e3a4(void) /* sub_77E3A4 */
{
    FN_ENTER(0x0077e3a4);
    /* 0077e3a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e3a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e3a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e3a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e3a8: lea edx, [ecx + 0x20] */ r_edx = (u32)(r_ecx+0x20u);
    /* 0077e3ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077e3ad: lea ebx, [ecx + 0x30] */ r_ebx = (u32)(r_ecx+0x30u);
    /* 0077e3b0: mov ebp, eax */ r_ebp = r_eax;
    /* 0077e3b2: mov esi, edx */ r_esi = r_edx;
    /* 0077e3b4: mov edi, ecx */ r_edi = r_ecx;
L_0077e3b6:; BB(0x0077e3b6);
    /* 0077e3b6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077e3b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e3ba: je 0x77e3c3 */ if (fZ) goto L_0077e3c3;
L_0077e3bc:; BB(0x0077e3bc);
    /* 0077e3bc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0077e3bf: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0077e3c1: je 0x77e3d2 */ if (fZ) goto L_0077e3d2;
L_0077e3c3:; BB(0x0077e3c3);
    /* 0077e3c3: add ebp, 0x3c */ {  u32 a = r_ebp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077e3c6: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077e3c9: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e3cb: ja 0x77e3b6 */ if ((!fC&&!fZ)) goto L_0077e3b6;
L_0077e3cd:; BB(0x0077e3cd);
    /* 0077e3cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e3ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e3cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e3d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077e3d1: ret  */ FN_RET(0x0077e3a4); r_esp += 4; return;
L_0077e3d2:; BB(0x0077e3d2);
    /* 0077e3d2: mov eax, ebp */ r_eax = r_ebp;
    /* 0077e3d4: add eax, dword ptr [edi + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077e3d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077e3d8: call 0x77e400 */ r_esp -= 4; W32(r_esp, 0x77e3ddu); f_0077e400();
    /* 0077e3dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e3de: jmp 0x77e3c3 */ goto L_0077e3c3;
}

void f_0077e3e0(void) /* sub_77E3E0 */
{
    FN_ENTER(0x0077e3e0);
    /* 0077e3e0: mov dword ptr [0xa9b424], 0x3f800000 */ W32((u32)(0xa9b424u), 0x3f800000u);
    /* 0077e3ea: mov dword ptr [0xa9b428], 0x41000000 */ W32((u32)(0xa9b428u), 0x41000000u);
    /* 0077e3f4: mov dword ptr [0xa9b42c], 0x3fc00000 */ W32((u32)(0xa9b42cu), 0x3fc00000u);
    /* 0077e3fe: ret  */ FN_RET(0x0077e3e0); r_esp += 4; return;
}

void f_0077e400(void) /* sub_77E400 */
{
    FN_ENTER(0x0077e400);
    /* 0077e400: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0077e404: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e406: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0077e408: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 0077e40d: mov word ptr [edx + 4], cx */ W16((u32)(r_edx+0x4u), (u16)r_ecx);
    /* 0077e411: mov word ptr [edx + 6], cx */ W16((u32)(r_edx+0x6u), (u16)r_ecx);
    /* 0077e415: mov word ptr [edx + 8], cx */ W16((u32)(r_edx+0x8u), (u16)r_ecx);
    /* 0077e419: mov word ptr [edx + 0xa], cx */ W16((u32)(r_edx+0xau), (u16)r_ecx);
    /* 0077e41d: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0077e422: mov byte ptr [edx + 0xc], cl */ W8((u32)(r_edx+0xcu), (u8)r_ecx);
    /* 0077e425: mov byte ptr [edx + 0xd], al */ W8((u32)(r_edx+0xdu), (u8)r_eax);
    /* 0077e428: mov byte ptr [edx + 0xe], al */ W8((u32)(r_edx+0xeu), (u8)r_eax);
    /* 0077e42b: mov byte ptr [edx + 0xf], al */ W8((u32)(r_edx+0xfu), (u8)r_eax);
    /* 0077e42e: mov byte ptr [edx + 0x10], cl */ W8((u32)(r_edx+0x10u), (u8)r_ecx);
    /* 0077e431: mov byte ptr [edx + 0x11], al */ W8((u32)(r_edx+0x11u), (u8)r_eax);
    /* 0077e434: mov byte ptr [edx + 0x12], al */ W8((u32)(r_edx+0x12u), (u8)r_eax);
    /* 0077e437: mov byte ptr [edx + 0x13], al */ W8((u32)(r_edx+0x13u), (u8)r_eax);
    /* 0077e43a: mov byte ptr [edx + 0x14], cl */ W8((u32)(r_edx+0x14u), (u8)r_ecx);
    /* 0077e43d: mov byte ptr [edx + 0x15], al */ W8((u32)(r_edx+0x15u), (u8)r_eax);
    /* 0077e440: mov byte ptr [edx + 0x16], al */ W8((u32)(r_edx+0x16u), (u8)r_eax);
    /* 0077e443: mov byte ptr [edx + 0x17], al */ W8((u32)(r_edx+0x17u), (u8)r_eax);
    /* 0077e446: mov byte ptr [edx + 0x18], cl */ W8((u32)(r_edx+0x18u), (u8)r_ecx);
    /* 0077e449: mov byte ptr [edx + 0x19], al */ W8((u32)(r_edx+0x19u), (u8)r_eax);
    /* 0077e44c: mov byte ptr [edx + 0x1a], al */ W8((u32)(r_edx+0x1au), (u8)r_eax);
    /* 0077e44f: mov byte ptr [edx + 0x1b], al */ W8((u32)(r_edx+0x1bu), (u8)r_eax);
    /* 0077e452: mov byte ptr [edx + 0x1c], cl */ W8((u32)(r_edx+0x1cu), (u8)r_ecx);
    /* 0077e455: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0077e458: mov byte ptr [edx + 0x1e], al */ W8((u32)(r_edx+0x1eu), (u8)r_eax);
    /* 0077e45b: mov byte ptr [edx + 0x1f], al */ W8((u32)(r_edx+0x1fu), (u8)r_eax);
    /* 0077e45e: mov byte ptr [edx + 0x20], cl */ W8((u32)(r_edx+0x20u), (u8)r_ecx);
    /* 0077e461: mov byte ptr [edx + 0x21], al */ W8((u32)(r_edx+0x21u), (u8)r_eax);
    /* 0077e464: mov byte ptr [edx + 0x22], al */ W8((u32)(r_edx+0x22u), (u8)r_eax);
    /* 0077e467: mov byte ptr [edx + 0x23], al */ W8((u32)(r_edx+0x23u), (u8)r_eax);
    /* 0077e46a: mov byte ptr [edx + 0x24], cl */ W8((u32)(r_edx+0x24u), (u8)r_ecx);
    /* 0077e46d: mov byte ptr [edx + 0x25], al */ W8((u32)(r_edx+0x25u), (u8)r_eax);
    /* 0077e470: mov byte ptr [edx + 0x26], al */ W8((u32)(r_edx+0x26u), (u8)r_eax);
    /* 0077e473: mov byte ptr [edx + 0x27], al */ W8((u32)(r_edx+0x27u), (u8)r_eax);
    /* 0077e476: mov byte ptr [edx + 0x28], cl */ W8((u32)(r_edx+0x28u), (u8)r_ecx);
    /* 0077e479: mov byte ptr [edx + 0x29], al */ W8((u32)(r_edx+0x29u), (u8)r_eax);
    /* 0077e47c: mov byte ptr [edx + 0x2a], al */ W8((u32)(r_edx+0x2au), (u8)r_eax);
    /* 0077e47f: mov byte ptr [edx + 0x2b], al */ W8((u32)(r_edx+0x2bu), (u8)r_eax);
    /* 0077e482: mov byte ptr [edx + 0x2c], cl */ W8((u32)(r_edx+0x2cu), (u8)r_ecx);
    /* 0077e485: mov byte ptr [edx + 0x2d], al */ W8((u32)(r_edx+0x2du), (u8)r_eax);
    /* 0077e488: mov byte ptr [edx + 0x2e], al */ W8((u32)(r_edx+0x2eu), (u8)r_eax);
    /* 0077e48b: mov byte ptr [edx + 0x2f], al */ W8((u32)(r_edx+0x2fu), (u8)r_eax);
    /* 0077e48e: mov byte ptr [edx + 0x30], cl */ W8((u32)(r_edx+0x30u), (u8)r_ecx);
    /* 0077e491: mov byte ptr [edx + 0x31], al */ W8((u32)(r_edx+0x31u), (u8)r_eax);
    /* 0077e494: mov byte ptr [edx + 0x32], al */ W8((u32)(r_edx+0x32u), (u8)r_eax);
    /* 0077e497: mov byte ptr [edx + 0x33], al */ W8((u32)(r_edx+0x33u), (u8)r_eax);
    /* 0077e49a: mov byte ptr [edx + 0x34], cl */ W8((u32)(r_edx+0x34u), (u8)r_ecx);
    /* 0077e49d: mov byte ptr [edx + 0x35], al */ W8((u32)(r_edx+0x35u), (u8)r_eax);
    /* 0077e4a0: mov byte ptr [edx + 0x36], al */ W8((u32)(r_edx+0x36u), (u8)r_eax);
    /* 0077e4a3: mov byte ptr [edx + 0x37], al */ W8((u32)(r_edx+0x37u), (u8)r_eax);
    /* 0077e4a6: mov byte ptr [edx + 0x38], cl */ W8((u32)(r_edx+0x38u), (u8)r_ecx);
    /* 0077e4a9: mov byte ptr [edx + 0x39], al */ W8((u32)(r_edx+0x39u), (u8)r_eax);
    /* 0077e4ac: mov byte ptr [edx + 0x3a], al */ W8((u32)(r_edx+0x3au), (u8)r_eax);
    /* 0077e4af: mov byte ptr [edx + 0x3b], al */ W8((u32)(r_edx+0x3bu), (u8)r_eax);
    /* 0077e4b2: ret  */ FN_RET(0x0077e400); r_esp += 4; return;
}

void f_0077e4b4(void) /* sub_77E4B4 */
{
    FN_ENTER(0x0077e4b4);
    /* 0077e4b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e4b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077e4b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077e4b9: call 0x77e4d8 */ r_esp -= 4; W32(r_esp, 0x77e4beu); f_0077e4d8();
    /* 0077e4be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077e4c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e4c4: jne 0x77e4ca */ if (!fZ) goto L_0077e4ca;
L_0077e4c6:; BB(0x0077e4c6);
    /* 0077e4c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e4c7: ret 4 */ FN_RET(0x0077e4b4); r_esp += 8; return;
L_0077e4ca:; BB(0x0077e4ca);
    /* 0077e4ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e4cb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x77e4d0u); f_00857e98();
    /* 0077e4d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e4d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e4d2: ret 4 */ FN_RET(0x0077e4b4); r_esp += 8; return;
}

void f_0077e4d8(void) /* sub_77E4D8 */
{
    FN_ENTER(0x0077e4d8);
    /* 0077e4d8: mov dword ptr [ecx], 0xb445b8 */ W32((u32)(r_ecx), 0xb445b8u);
    /* 0077e4de: ret  */ FN_RET(0x0077e4d8); r_esp += 4; return;
}

void f_0077e4e0(void) /* sub_77E4E0 */
{
    FN_ENTER(0x0077e4e0);
    /* 0077e4e0: mov ecx, 0xa9b434 */ r_ecx = 0xa9b434u;
    /* 0077e4e5: call 0x77e4d8 */ r_esp -= 4; W32(r_esp, 0x77e4eau); f_0077e4d8();
    /* 0077e4ea: ret  */ FN_RET(0x0077e4e0); r_esp += 4; return;
}

void f_0077e4ec(void) /* sub_77E4EC */
{
    FN_ENTER(0x0077e4ec);
    /* 0077e4ec: movzx eax, byte ptr [0xa9b430] */ r_eax = (u32)R8((u32)(0xa9b430u));
    /* 0077e4f3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e4f5: jne 0x77e51d */ if (!fZ) goto L_0077e51d;
L_0077e4f7:; BB(0x0077e4f7);
    /* 0077e4f7: mov ecx, 0xa9b434 */ r_ecx = 0xa9b434u;
    /* 0077e4fc: call 0x77e524 */ r_esp -= 4; W32(r_esp, 0x77e501u); f_0077e524();
    /* 0077e501: push 0x77e4e0 */ { u32 v = 0x77e4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e506: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x77e50bu); f_0085909d();
    /* 0077e50b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e50c: movzx eax, byte ptr [0xa9b430] */ r_eax = (u32)R8((u32)(0xa9b430u));
    /* 0077e513: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e518: mov byte ptr [0xa9b430], al */ W8((u32)(0xa9b430u), (u8)r_eax);
L_0077e51d:; BB(0x0077e51d);
    /* 0077e51d: mov eax, 0xa9b434 */ r_eax = 0xa9b434u;
    /* 0077e522: ret  */ FN_RET(0x0077e4ec); r_esp += 4; return;
}

void f_0077e524(void) /* sub_77E524 */
{
    FN_ENTER(0x0077e524);
    /* 0077e524: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e525: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0077e527: mov dword ptr [ebp], 0xb445b8 */ W32((u32)(r_ebp), 0xb445b8u);
    /* 0077e52e: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 0077e535: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x77e53au); f_006dc358();
    /* 0077e53a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e53c: je 0x77e568 */ if (fZ) goto L_0077e568;
L_0077e53e:; BB(0x0077e53e);
    /* 0077e53e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e541: jne 0x77e553 */ if (!fZ) goto L_0077e553;
L_0077e543:; BB(0x0077e543);
    /* 0077e543: mov dword ptr [ebp + 4], 0x9f81c0 */ W32((u32)(r_ebp+0x4u), 0x9f81c0u);
    /* 0077e54a: mov dword ptr [ebp + 8], 0x39 */ W32((u32)(r_ebp+0x8u), 0x39u);
    /* 0077e551: jmp 0x77e576 */ goto L_0077e576;
L_0077e553:; BB(0x0077e553);
    /* 0077e553: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e556: jne 0x77e576 */ if (!fZ) goto L_0077e576;
L_0077e558:; BB(0x0077e558);
    /* 0077e558: mov dword ptr [ebp + 4], 0x9f8280 */ W32((u32)(r_ebp+0x4u), 0x9f8280u);
    /* 0077e55f: mov dword ptr [ebp + 8], 0x26 */ W32((u32)(r_ebp+0x8u), 0x26u);
    /* 0077e566: jmp 0x77e576 */ goto L_0077e576;
L_0077e568:; BB(0x0077e568);
    /* 0077e568: mov dword ptr [ebp + 4], 0x9f80c0 */ W32((u32)(r_ebp+0x4u), 0x9f80c0u);
    /* 0077e56f: mov dword ptr [ebp + 8], 0x50 */ W32((u32)(r_ebp+0x8u), 0x50u);
L_0077e576:; BB(0x0077e576);
    /* 0077e576: mov eax, ebp */ r_eax = r_ebp;
    /* 0077e578: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e579: ret  */ FN_RET(0x0077e524); r_esp += 4; return;
}

void f_0077e57c(void) /* sub_77E57C */
{
    FN_ENTER(0x0077e57c);
    /* 0077e57c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e57d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e57e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e57f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e580: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0077e584: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0077e587: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e589: je 0x77e5e3 */ if (fZ) goto L_0077e5e3;
L_0077e58b:; BB(0x0077e58b);
    /* 0077e58b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0077e58e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e590: jbe 0x77e5e3 */ if ((fC||fZ)) goto L_0077e5e3;
L_0077e592:; BB(0x0077e592);
    /* 0077e592: mov edx, 0 */ r_edx = 0x0u;
    /* 0077e597: jbe 0x77e5d7 */ if ((fC||fZ)) goto L_0077e5d7;
L_0077e599:; BB(0x0077e599);
    /* 0077e599: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 0077e59c: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0077e59f: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0077e5a2: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077e5a4: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0077e5a6:; BB(0x0077e5a6);
    /* 0077e5a6: movzx ebp, byte ptr [ebx] */ r_ebp = (u32)R8((u32)(r_ebx));
    /* 0077e5a9: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e5ab: jne 0x77e5ca */ if (!fZ) goto L_0077e5ca;
L_0077e5ad:; BB(0x0077e5ad);
    /* 0077e5ad: movzx ebp, byte ptr [esi + 1] */ r_ebp = (u32)R8((u32)(r_esi+0x1u));
    /* 0077e5b1: movzx edi, byte ptr [ebx + 1] */ r_edi = (u32)R8((u32)(r_ebx+0x1u));
    /* 0077e5b5: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e5b7: jne 0x77e5ca */ if (!fZ) goto L_0077e5ca;
L_0077e5b9:; BB(0x0077e5b9);
    /* 0077e5b9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e5bc: je 0x77e5ef */ if (fZ) goto L_0077e5ef;
L_0077e5be:; BB(0x0077e5be);
    /* 0077e5be: movzx ebp, byte ptr [esi + 2] */ r_ebp = (u32)R8((u32)(r_esi+0x2u));
    /* 0077e5c2: movzx edi, byte ptr [ebx + 2] */ r_edi = (u32)R8((u32)(r_ebx+0x2u));
    /* 0077e5c6: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e5c8: je 0x77e5e0 */ if (fZ) goto L_0077e5e0;
L_0077e5ca:; BB(0x0077e5ca);
    /* 0077e5ca: add ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077e5cd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077e5d0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0077e5d2: jb 0x77e5a6 */ if (fC) goto L_0077e5a6;
L_0077e5d4:; BB(0x0077e5d4);
    /* 0077e5d4: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0077e5d7:; BB(0x0077e5d7);
    /* 0077e5d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e5d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e5da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e5db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e5dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077e5dd: ret 4 */ FN_RET(0x0077e57c); r_esp += 8; return;
L_0077e5e0:; BB(0x0077e5e0);
    /* 0077e5e0: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0077e5e3:; BB(0x0077e5e3);
    /* 0077e5e3: mov eax, 2 */ r_eax = 0x2u;
    /* 0077e5e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e5e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e5ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e5eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077e5ec: ret 4 */ FN_RET(0x0077e57c); r_esp += 8; return;
L_0077e5ef:; BB(0x0077e5ef);
    /* 0077e5ef: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0077e5f2: jmp 0x77e5e3 */ goto L_0077e5e3;
}

void f_0077e5f4(void) /* sub_77E5F4 */
{
    FN_ENTER(0x0077e5f4);
    /* 0077e5f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e5f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077e5f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077e5f9: call 0x77e618 */ r_esp -= 4; W32(r_esp, 0x77e5feu); f_0077e618();
    /* 0077e5fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077e602: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e604: jne 0x77e60a */ if (!fZ) goto L_0077e60a;
L_0077e606:; BB(0x0077e606);
    /* 0077e606: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e607: ret 4 */ FN_RET(0x0077e5f4); r_esp += 8; return;
L_0077e60a:; BB(0x0077e60a);
    /* 0077e60a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e60b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x77e610u); f_005c2f74();
    /* 0077e610: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e611: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e612: ret 4 */ FN_RET(0x0077e5f4); r_esp += 8; return;
}

void f_0077e618(void) /* sub_77E618 */
{
    FN_ENTER(0x0077e618);
    /* 0077e618: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e619: mov ebp, esp */ r_ebp = r_esp;
    /* 0077e61b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077e61d: push 0x8f4398 */ { u32 v = 0x8f4398u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e622: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077e628: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077e629: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077e630: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077e633: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077e636: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077e639: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077e63c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077e63f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0077e642: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077e649: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077e64c: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0077e64f: mov dword ptr [eax], 0xb44638 */ W32((u32)(r_eax), 0xb44638u);
    /* 0077e655: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e657: je 0x77e66b */ if (fZ) goto L_0077e66b;
L_0077e659:; BB(0x0077e659);
    /* 0077e659: je 0x77e664 */ if (fZ) goto L_0077e664;
L_0077e65b:; BB(0x0077e65b);
    /* 0077e65b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e65d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0077e65f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x77e661u); call_ind(t); }
    /* 0077e661: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0077e664:; BB(0x0077e664);
    /* 0077e664: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0077e66b:; BB(0x0077e66b);
    /* 0077e66b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0077e66e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e670: je 0x77e681 */ if (fZ) goto L_0077e681;
L_0077e672:; BB(0x0077e672);
    /* 0077e672: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x77e677u); f_007127b0();
    /* 0077e677: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077e67a: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0077e681:; BB(0x0077e681);
    /* 0077e681: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0077e688: mov ecx, eax */ r_ecx = r_eax;
    /* 0077e68a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x77e68fu); f_008171e8();
    /* 0077e68f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077e692: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077e699: mov esp, ebp */ r_esp = r_ebp;
    /* 0077e69b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e69c: ret  */ FN_RET(0x0077e618); r_esp += 4; return;
}

void f_0077e6a0(void) /* sub_77E6A0 */
{
    FN_ENTER(0x0077e6a0);
    /* 0077e6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e6a1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0077e6a3: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077e6a6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e6a8: jne 0x77e6e7 */ if (!fZ) goto L_0077e6e7;
L_0077e6aa:; BB(0x0077e6aa);
    /* 0077e6aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077e6ac: je 0x77e6b7 */ if (fZ) goto L_0077e6b7;
L_0077e6ae:; BB(0x0077e6ae);
    /* 0077e6ae: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 0077e6b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e6b3: je 0x77e6e9 */ if (fZ) goto L_0077e6e9;
L_0077e6b5:; BB(0x0077e6b5);
    /* 0077e6b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e6b6: ret  */ FN_RET(0x0077e6a0); r_esp += 4; return;
L_0077e6b7:; BB(0x0077e6b7);
    /* 0077e6b7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077e6b9: jne 0x77e73f */ if (!fZ) goto L_0077e73f;
L_0077e6bf:; BB(0x0077e6bf);
    /* 0077e6bf: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077e6c1: jne 0x77e721 */ if (!fZ) goto L_0077e721;
L_0077e6c3:; BB(0x0077e6c3);
    /* 0077e6c3: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077e6c5: jne 0x77e703 */ if (!fZ) goto L_0077e703;
L_0077e6c7:; BB(0x0077e6c7);
    /* 0077e6c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e6c9: jne 0x77e6e7 */ if (!fZ) goto L_0077e6e7;
L_0077e6cb:; BB(0x0077e6cb);
    /* 0077e6cb: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0077e6ce: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e6d1: je 0x77e6e7 */ if (fZ) goto L_0077e6e7;
L_0077e6d3:; BB(0x0077e6d3);
    /* 0077e6d3: mov eax, dword ptr [0x9f84b4] */ r_eax = R32((u32)(0x9f84b4u));
    /* 0077e6d8: mov dword ptr [ebp + 0x1c], 2 */ W32((u32)(r_ebp+0x1cu), 0x2u);
    /* 0077e6df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e6e1: je 0x77e6e7 */ if (fZ) goto L_0077e6e7;
L_0077e6e3:; BB(0x0077e6e3);
    /* 0077e6e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077e6e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x77e6e7u); call_ind(t); }
L_0077e6e7:; BB(0x0077e6e7);
    /* 0077e6e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e6e8: ret  */ FN_RET(0x0077e6a0); r_esp += 4; return;
L_0077e6e9:; BB(0x0077e6e9);
    /* 0077e6e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077e6eb: call 0x77ec20 */ r_esp -= 4; W32(r_esp, 0x77e6f0u); f_0077ec20();
    /* 0077e6f0: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0077e6f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077e6f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077e6f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077e6f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077e6fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e6fc: call 0x77e760 */ r_esp -= 4; W32(r_esp, 0x77e701u); f_0077e760();
    /* 0077e701: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e702: ret  */ FN_RET(0x0077e6a0); r_esp += 4; return;
L_0077e703:; BB(0x0077e703);
    /* 0077e703: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0077e706: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e709: je 0x77e71f */ if (fZ) goto L_0077e71f;
L_0077e70b:; BB(0x0077e70b);
    /* 0077e70b: mov eax, dword ptr [0x9f84ac] */ r_eax = R32((u32)(0x9f84acu));
    /* 0077e710: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
    /* 0077e717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e719: je 0x77e71f */ if (fZ) goto L_0077e71f;
L_0077e71b:; BB(0x0077e71b);
    /* 0077e71b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077e71d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x77e71fu); call_ind(t); }
L_0077e71f:; BB(0x0077e71f);
    /* 0077e71f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e720: ret  */ FN_RET(0x0077e6a0); r_esp += 4; return;
L_0077e721:; BB(0x0077e721);
    /* 0077e721: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0077e724: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e727: je 0x77e73d */ if (fZ) goto L_0077e73d;
L_0077e729:; BB(0x0077e729);
    /* 0077e729: mov eax, dword ptr [0x9f84ac] */ r_eax = R32((u32)(0x9f84acu));
    /* 0077e72e: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
    /* 0077e735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e737: je 0x77e73d */ if (fZ) goto L_0077e73d;
L_0077e739:; BB(0x0077e739);
    /* 0077e739: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077e73b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x77e73du); call_ind(t); }
L_0077e73d:; BB(0x0077e73d);
    /* 0077e73d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e73e: ret  */ FN_RET(0x0077e6a0); r_esp += 4; return;
L_0077e73f:; BB(0x0077e73f);
    /* 0077e73f: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0077e742: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e745: je 0x77e75b */ if (fZ) goto L_0077e75b;
L_0077e747:; BB(0x0077e747);
    /* 0077e747: mov eax, dword ptr [0x9f84ac] */ r_eax = R32((u32)(0x9f84acu));
    /* 0077e74c: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
    /* 0077e753: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e755: je 0x77e75b */ if (fZ) goto L_0077e75b;
L_0077e757:; BB(0x0077e757);
    /* 0077e757: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077e759: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x77e75bu); call_ind(t); }
L_0077e75b:; BB(0x0077e75b);
    /* 0077e75b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e75c: ret  */ FN_RET(0x0077e6a0); r_esp += 4; return;
}

void f_0077e760(void) /* sub_77E760 */
{
    FN_ENTER(0x0077e760);
    /* 0077e760: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e761: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e762: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e763: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e764: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e765: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0077e767: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0077e769: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0077e76d: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0077e770: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077e772: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0077e775: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0077e778: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077e77a: mov edi, dword ptr [esi + 0x9796bc] */ r_edi = R32((u32)(r_esi+0x9796bcu));
    /* 0077e780: mov esi, dword ptr [esi + 0x9796c0] */ r_esi = R32((u32)(r_esi+0x9796c0u));
    /* 0077e786: call 0x7a61ac */ r_esp -= 4; W32(r_esp, 0x77e78bu); f_007a61ac();
    /* 0077e78b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e78e: jne 0x77e79e */ if (!fZ) goto L_0077e79e;
L_0077e790:; BB(0x0077e790);
    /* 0077e790: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0077e794: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0077e797: mov esi, dword ptr [edx + esi*8 + 0x9796c4] */ r_esi = R32((u32)(r_edx+r_esi*8+0x9796c4u));
L_0077e79e:; BB(0x0077e79e);
    /* 0077e79e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e79f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e7a0: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x77e7a5u); f_00792fe8();
    /* 0077e7a5: mov esi, eax */ r_esi = r_eax;
    /* 0077e7a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077e7aa: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0077e7ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077e7b0: jl 0x77e7c3 */ if ((fS!=fO)) goto L_0077e7c3;
L_0077e7b2:; BB(0x0077e7b2);
    /* 0077e7b2: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0077e7b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e7b7: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0077e7b9: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x77e7beu); f_00792fe8();
    /* 0077e7be: mov ebx, eax */ r_ebx = r_eax;
    /* 0077e7c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077e7c3:; BB(0x0077e7c3);
    /* 0077e7c3: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0077e7c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077e7c9: jl 0x77e7dc */ if ((fS!=fO)) goto L_0077e7dc;
L_0077e7cb:; BB(0x0077e7cb);
    /* 0077e7cb: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0077e7cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e7d0: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0077e7d2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x77e7d7u); f_00792fe8();
    /* 0077e7d7: mov ebx, eax */ r_ebx = r_eax;
    /* 0077e7d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077e7dc:; BB(0x0077e7dc);
    /* 0077e7dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e7de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e7df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077e7e1: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077e7e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e7e6: call 0x77e7f4 */ r_esp -= 4; W32(r_esp, 0x77e7ebu); f_0077e7f4();
    /* 0077e7eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e7ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077e7ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e7ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e7ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077e7f0: ret 0x10 */ FN_RET(0x0077e760); r_esp += 20; return;
}

void f_0077e7f4(void) /* sub_77E7F4 */
{
    FN_ENTER(0x0077e7f4);
    /* 0077e7f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e7f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e7f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e7f7: mov edi, ecx */ r_edi = r_ecx;
    /* 0077e7f9: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0077e7fd: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0077e801: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0077e804: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e806: je 0x77e80e */ if (fZ) goto L_0077e80e;
L_0077e808:; BB(0x0077e808);
    /* 0077e808: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e809: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e80a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077e80b: ret 0x10 */ FN_RET(0x0077e7f4); r_esp += 20; return;
L_0077e80e:; BB(0x0077e80e);
    /* 0077e80e: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0077e811: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e813: jne 0x77e808 */ if (!fZ) goto L_0077e808;
L_0077e815:; BB(0x0077e815);
    /* 0077e815: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0077e818: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e81a: je 0x77e837 */ if (fZ) goto L_0077e837;
L_0077e81c:; BB(0x0077e81c);
    /* 0077e81c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e81e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e820: push 0x9796dc */ { u32 v = 0x9796dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0077e825: push 0x9796d4 */ { u32 v = 0x9796d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e82a: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x77e82fu); f_0073aa40();
    /* 0077e82f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077e832: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0077e835: jmp 0x77e84c */ goto L_0077e84c;
L_0077e837:; BB(0x0077e837);
    /* 0077e837: push 0x9796dc */ { u32 v = 0x9796dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0077e83c: push 0x9796d4 */ { u32 v = 0x9796d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e841: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x77e846u); f_0073a888();
    /* 0077e846: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077e849: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
L_0077e84c:; BB(0x0077e84c);
    /* 0077e84c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e84e: je 0x77e93a */ if (fZ) goto L_0077e93a;
L_0077e854:; BB(0x0077e854);
    /* 0077e854: je 0x77e867 */ if (fZ) goto L_0077e867;
L_0077e856:; BB(0x0077e856);
    /* 0077e856: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0077e859: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e85b: je 0x77e867 */ if (fZ) goto L_0077e867;
L_0077e85d:; BB(0x0077e85d);
    /* 0077e85d: mov ecx, eax */ r_ecx = r_eax;
    /* 0077e85f: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x77e864u); f_00712c00();
    /* 0077e864: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
L_0077e867:; BB(0x0077e867);
    /* 0077e867: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0077e86b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e86d: je 0x77e880 */ if (fZ) goto L_0077e880;
L_0077e86f:; BB(0x0077e86f);
    /* 0077e86f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e871: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0077e875: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e876: mov ecx, eax */ r_ecx = r_eax;
    /* 0077e878: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x77e87du); f_0073ae38();
    /* 0077e87d: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
L_0077e880:; BB(0x0077e880);
    /* 0077e880: mov ecx, eax */ r_ecx = r_eax;
    /* 0077e882: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x77e887u); f_0073b0f0();
    /* 0077e887: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0077e88b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e88e: je 0x77e93a */ if (fZ) goto L_0077e93a;
L_0077e894:; BB(0x0077e894);
    /* 0077e894: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0077e897: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e899: je 0x77e8b1 */ if (fZ) goto L_0077e8b1;
L_0077e89b:; BB(0x0077e89b);
    /* 0077e89b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e89d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e89f: push 0xa9b440 */ { u32 v = 0xa9b440u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e8a4: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x77e8a9u); f_007354fc();
    /* 0077e8a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077e8ac: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0077e8af: jmp 0x77e8c3 */ goto L_0077e8c3;
L_0077e8b1:; BB(0x0077e8b1);
    /* 0077e8b1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e8b3: push 0xa9b440 */ { u32 v = 0xa9b440u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e8b8: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x77e8bdu); f_00735708();
    /* 0077e8bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077e8c0: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
L_0077e8c3:; BB(0x0077e8c3);
    /* 0077e8c3: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0077e8c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e8c8: je 0x77e93a */ if (fZ) goto L_0077e93a;
L_0077e8ca:; BB(0x0077e8ca);
    /* 0077e8ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e8cc: je 0x77e8dc */ if (fZ) goto L_0077e8dc;
L_0077e8ce:; BB(0x0077e8ce);
    /* 0077e8ce: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0077e8d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e8d3: je 0x77e8dc */ if (fZ) goto L_0077e8dc;
L_0077e8d5:; BB(0x0077e8d5);
    /* 0077e8d5: mov ecx, eax */ r_ecx = r_eax;
    /* 0077e8d7: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x77e8dcu); f_00712c00();
L_0077e8dc:; BB(0x0077e8dc);
    /* 0077e8dc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e8de: je 0x77e94e */ if (fZ) goto L_0077e94e;
L_0077e8e0:; BB(0x0077e8e0);
    /* 0077e8e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e8e2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e8e4: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0077e8e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e8e8: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x77e8edu); f_00735c90();
    /* 0077e8ed: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e8ef: je 0x77e940 */ if (fZ) goto L_0077e940;
L_0077e8f1:; BB(0x0077e8f1);
    /* 0077e8f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e8f3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e8f5: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0077e8f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e8f9: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x77e8feu); f_00735c90();
    /* 0077e8fe: push dword ptr [0xa9b448] */ { u32 v = R32((u32)(0xa9b448u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077e904: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0077e907: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x77e90cu); f_00736138();
    /* 0077e90c: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0077e90f: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x77e914u); f_00736458();
    /* 0077e914: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0077e918: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0077e91b: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0077e91e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077e91f: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x77e924u); f_00736510();
    /* 0077e924: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0077e927: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0077e92e: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e933: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
L_0077e93a:; BB(0x0077e93a);
    /* 0077e93a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e93b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e93c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077e93d: ret 0x10 */ FN_RET(0x0077e7f4); r_esp += 20; return;
L_0077e940:; BB(0x0077e940);
    /* 0077e940: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0077e942: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x77e947u); f_0079317c();
    /* 0077e947: mov ebp, eax */ r_ebp = r_eax;
    /* 0077e949: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077e94c: jmp 0x77e8f1 */ goto L_0077e8f1;
L_0077e94e:; BB(0x0077e94e);
    /* 0077e94e: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0077e950: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x77e955u); f_0079317c();
    /* 0077e955: mov esi, eax */ r_esi = r_eax;
    /* 0077e957: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077e95a: jmp 0x77e8e0 */ goto L_0077e8e0;
}

void f_0077e95c(void) /* sub_77E95C */
{
    FN_ENTER(0x0077e95c);
    /* 0077e95c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e95d: mov esi, ecx */ r_esi = r_ecx;
    /* 0077e95f: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0077e962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e964: mov dword ptr [esi + 0x38], 0 */ W32((u32)(r_esi+0x38u), 0x0u);
    /* 0077e96b: jle 0x77e96f */ if ((fZ||fS!=fO)) goto L_0077e96f;
L_0077e96d:; BB(0x0077e96d);
    /* 0077e96d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e96e: ret  */ FN_RET(0x0077e95c); r_esp += 4; return;
L_0077e96f:; BB(0x0077e96f);
    /* 0077e96f: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 0077e976: mov ecx, esi */ r_ecx = r_esi;
    /* 0077e978: call 0x77e9ac */ r_esp -= 4; W32(r_esp, 0x77e97du); f_0077e9ac();
    /* 0077e97d: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 0077e980: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e982: je 0x77e9a2 */ if (fZ) goto L_0077e9a2;
L_0077e984:; BB(0x0077e984);
    /* 0077e984: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0077e987: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077e98a: je 0x77e9a0 */ if (fZ) goto L_0077e9a0;
L_0077e98c:; BB(0x0077e98c);
    /* 0077e98c: mov eax, dword ptr [0x9f84ac] */ r_eax = R32((u32)(0x9f84acu));
    /* 0077e991: mov dword ptr [esi + 0x1c], 1 */ W32((u32)(r_esi+0x1cu), 0x1u);
    /* 0077e998: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e99a: je 0x77e9a0 */ if (fZ) goto L_0077e9a0;
L_0077e99c:; BB(0x0077e99c);
    /* 0077e99c: mov ecx, esi */ r_ecx = r_esi;
    /* 0077e99e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x77e9a0u); call_ind(t); }
L_0077e9a0:; BB(0x0077e9a0);
    /* 0077e9a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e9a1: ret  */ FN_RET(0x0077e95c); r_esp += 4; return;
L_0077e9a2:; BB(0x0077e9a2);
    /* 0077e9a2: mov dword ptr [esi + 0x38], 1 */ W32((u32)(r_esi+0x38u), 0x1u);
    /* 0077e9a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e9aa: ret  */ FN_RET(0x0077e95c); r_esp += 4; return;
}

void f_0077e9ac(void) /* sub_77E9AC */
{
    FN_ENTER(0x0077e9ac);
    /* 0077e9ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077e9ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077e9ae: mov esi, ecx */ r_esi = r_ecx;
    /* 0077e9b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e9b2: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x77e9b7u); f_0082c204();
    /* 0077e9b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e9b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e9ba: jne 0x77e9cb */ if (!fZ) goto L_0077e9cb;
L_0077e9bc:; BB(0x0077e9bc);
    /* 0077e9bc: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 0077e9c3: mov eax, 1 */ r_eax = 0x1u;
    /* 0077e9c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e9c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e9ca: ret  */ FN_RET(0x0077e9ac); r_esp += 4; return;
L_0077e9cb:; BB(0x0077e9cb);
    /* 0077e9cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e9cd: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x77e9d2u); f_007083d4();
    /* 0077e9d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e9d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077e9d5: jne 0x77e9e6 */ if (!fZ) goto L_0077e9e6;
L_0077e9d7:; BB(0x0077e9d7);
    /* 0077e9d7: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 0077e9de: mov eax, 4 */ r_eax = 0x4u;
    /* 0077e9e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077e9e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077e9e5: ret  */ FN_RET(0x0077e9ac); r_esp += 4; return;
L_0077e9e6:; BB(0x0077e9e6);
    /* 0077e9e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077e9e8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x77e9edu); f_006dc358();
    /* 0077e9ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077e9ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077e9f0: je 0x77ea05 */ if (fZ) goto L_0077ea05;
L_0077e9f2:; BB(0x0077e9f2);
    /* 0077e9f2: add dword ptr [esi + 0x20], 1 */ { u32 ad = (u32)(r_esi+0x20u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077e9f6: mov eax, 2 */ r_eax = 0x2u;
    /* 0077e9fb: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 0077ea02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077ea03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ea04: ret  */ FN_RET(0x0077e9ac); r_esp += 4; return;
L_0077ea05:; BB(0x0077ea05);
    /* 0077ea05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077ea07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ea08: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0077ea0b: call 0x82c1e0 */ r_esp -= 4; W32(r_esp, 0x77ea10u); f_0082c1e0();
    /* 0077ea10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077ea11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ea13: jne 0x77ea7d */ if (!fZ) goto L_0077ea7d;
L_0077ea15:; BB(0x0077ea15);
    /* 0077ea15: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0077ea18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ea1a: je 0x77ea22 */ if (fZ) goto L_0077ea22;
L_0077ea1c:; BB(0x0077ea1c);
    /* 0077ea1c: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0077ea1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077ea20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ea21: ret  */ FN_RET(0x0077e9ac); r_esp += 4; return;
L_0077ea22:; BB(0x0077ea22);
    /* 0077ea22: mov dword ptr [esi + 0x28], 1 */ W32((u32)(r_esi+0x28u), 0x1u);
    /* 0077ea29: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0077ea2b: call 0x6c2d8c */ r_esp -= 4; W32(r_esp, 0x77ea30u); f_006c2d8c();
    /* 0077ea30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ea32: jne 0x77ea39 */ if (!fZ) goto L_0077ea39;
L_0077ea34:; BB(0x0077ea34);
    /* 0077ea34: mov ebp, 0x10 */ r_ebp = 0x10u;
L_0077ea39:; BB(0x0077ea39);
    /* 0077ea39: call 0x6c44bc */ r_esp -= 4; W32(r_esp, 0x77ea3eu); f_006c44bc();
    /* 0077ea3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ea3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077ea41: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x77ea46u); f_0082c198();
    /* 0077ea46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077ea49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ea4b: jne 0x77ea75 */ if (!fZ) goto L_0077ea75;
L_0077ea4d:; BB(0x0077ea4d);
    /* 0077ea4d: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x77ea52u); f_006c44ac();
    /* 0077ea52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ea53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077ea55: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x77ea5au); f_0082c198();
    /* 0077ea5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077ea5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ea5f: jne 0x77ea75 */ if (!fZ) goto L_0077ea75;
L_0077ea61:; BB(0x0077ea61);
    /* 0077ea61: call 0x6c44b4 */ r_esp -= 4; W32(r_esp, 0x77ea66u); f_006c44b4();
    /* 0077ea66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ea67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077ea69: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x77ea6eu); f_0082c198();
    /* 0077ea6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077ea71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ea73: je 0x77ea78 */ if (fZ) goto L_0077ea78;
L_0077ea75:; BB(0x0077ea75);
    /* 0077ea75: or ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0077ea78:; BB(0x0077ea78);
    /* 0077ea78: mov eax, ebp */ r_eax = r_ebp;
    /* 0077ea7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077ea7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ea7c: ret  */ FN_RET(0x0077e9ac); r_esp += 4; return;
L_0077ea7d:; BB(0x0077ea7d);
    /* 0077ea7d: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 0077ea84: mov eax, 8 */ r_eax = 0x8u;
    /* 0077ea89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077ea8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ea8b: ret  */ FN_RET(0x0077e9ac); r_esp += 4; return;
}

void f_0077ea8c(void) /* sub_77EA8C */
{
    FN_ENTER(0x0077ea8c);
    /* 0077ea8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077ea8d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0077ea8f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077ea91: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
    /* 0077ea98: call 0x77e9ac */ r_esp -= 4; W32(r_esp, 0x77ea9du); f_0077e9ac();
    /* 0077ea9d: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0077eaa0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077eaa2: jne 0x77eac9 */ if (!fZ) goto L_0077eac9;
L_0077eaa4:; BB(0x0077eaa4);
    /* 0077eaa4: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
L_0077eaa7:; BB(0x0077eaa7);
    /* 0077eaa7: mov eax, dword ptr [edx*8 + 0x9f84a8] */ r_eax = R32((u32)(r_edx*8+0x9f84a8u));
    /* 0077eaae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077eab0: je 0x77eab6 */ if (fZ) goto L_0077eab6;
L_0077eab2:; BB(0x0077eab2);
    /* 0077eab2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077eab4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x77eab6u); call_ind(t); }
L_0077eab6:; BB(0x0077eab6);
    /* 0077eab6: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 0077eab9: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077eabc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077eabe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077eac0: jg 0x77eac4 */ if ((!fZ&&fS==fO)) goto L_0077eac4;
L_0077eac2:; BB(0x0077eac2);
    /* 0077eac2: mov edx, eax */ r_edx = r_eax;
L_0077eac4:; BB(0x0077eac4);
    /* 0077eac4: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 0077eac7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077eac8: ret  */ FN_RET(0x0077ea8c); r_esp += 4; return;
L_0077eac9:; BB(0x0077eac9);
    /* 0077eac9: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0077eacc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077eace: je 0x77eaa7 */ if (fZ) goto L_0077eaa7;
L_0077ead0:; BB(0x0077ead0);
    /* 0077ead0: mov eax, dword ptr [0x9f84a4] */ r_eax = R32((u32)(0x9f84a4u));
    /* 0077ead5: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 0077eadc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077eade: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077eae0: je 0x77eaa7 */ if (fZ) goto L_0077eaa7;
L_0077eae2:; BB(0x0077eae2);
    /* 0077eae2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077eae4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x77eae6u); call_ind(t); }
    /* 0077eae6: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0077eae9: jmp 0x77eaa7 */ goto L_0077eaa7;
}

void f_0077eaec(void) /* sub_77EAEC */
{
    FN_ENTER(0x0077eaec);
    /* 0077eaec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077eaed: mov ebp, esp */ r_ebp = r_esp;
    /* 0077eaef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077eaf1: push 0x8f43c0 */ { u32 v = 0x8f43c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077eaf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077eafc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077eafd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077eb04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077eb07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077eb0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077eb0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077eb10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077eb13: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 0077eb18: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0077eb1f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x77eb24u); f_005caba4();
    /* 0077eb24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077eb25: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0077eb28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077eb2a: je 0x77eb63 */ if (fZ) goto L_0077eb63;
L_0077eb2c:; BB(0x0077eb2c);
    /* 0077eb2c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0077eb33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077eb3a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077eb3d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077eb40: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077eb43: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077eb46: call 0x77eb68 */ r_esp -= 4; W32(r_esp, 0x77eb4bu); f_0077eb68();
    /* 0077eb4b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077eb4e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0077eb55:; BB(0x0077eb55);
    /* 0077eb55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077eb58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077eb5f: mov esp, ebp */ r_esp = r_ebp;
    /* 0077eb61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077eb62: ret  */ FN_RET(0x0077eaec); r_esp += 4; return;
L_0077eb63:; BB(0x0077eb63);
    /* 0077eb63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077eb65: jmp 0x77eb55 */ goto L_0077eb55;
}

void f_0077eb68(void) /* sub_77EB68 */
{
    FN_ENTER(0x0077eb68);
    /* 0077eb68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077eb69: mov ebp, esp */ r_ebp = r_esp;
    /* 0077eb6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077eb6d: push 0x8f43dc */ { u32 v = 0x8f43dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0077eb72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077eb78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077eb79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077eb80: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077eb83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077eb86: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0077eb89: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0077eb8c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0077eb8f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0077eb92: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077eb95: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0077eb98: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0077eb9b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0077eb9e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0077eba1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x77eba6u); f_008193cc();
    /* 0077eba6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077ebad: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0077ebb0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077ebb3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077ebb6: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0077ebb9: mov dword ptr [ecx + 0x40], ebx */ W32((u32)(r_ecx+0x40u), r_ebx);
    /* 0077ebbc: mov dword ptr [ecx], 0xb44638 */ W32((u32)(r_ecx), 0xb44638u);
    /* 0077ebc2: mov eax, dword ptr [0x9f84a0] */ r_eax = R32((u32)(0x9f84a0u));
    /* 0077ebc7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0077ebca: call 0x77ec6c */ r_esp -= 4; W32(r_esp, 0x77ebcfu); f_0077ec6c();
    /* 0077ebcf: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0077ebd2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077ebd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077ebd8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077ebdf: mov esp, ebp */ r_esp = r_ebp;
    /* 0077ebe1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077ebe2: ret 0xc */ FN_RET(0x0077eb68); r_esp += 16; return;
}

void f_0077ebe8(void) /* sub_77EBE8 */
{
    FN_ENTER(0x0077ebe8);
    /* 0077ebe8: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0077ebeb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077ebee: mov eax, 0 */ r_eax = 0x0u;
    /* 0077ebf3: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0077ebf6: ret  */ FN_RET(0x0077ebe8); r_esp += 4; return;
}

void f_0077ebf8(void) /* sub_77EBF8 */
{
    FN_ENTER(0x0077ebf8);
    /* 0077ebf8: mov dword ptr [ecx + 0x40], 1 */ W32((u32)(r_ecx+0x40u), 0x1u);
    /* 0077ebff: ret  */ FN_RET(0x0077ebf8); r_esp += 4; return;
}

void f_0077ec00(void) /* sub_77EC00 */
{
    FN_ENTER(0x0077ec00);
    /* 0077ec00: mov dword ptr [0xa9b440], 0x42840000 */ W32((u32)(0xa9b440u), 0x42840000u);
    /* 0077ec0a: mov dword ptr [0xa9b444], 0x43b48000 */ W32((u32)(0xa9b444u), 0x43b48000u);
    /* 0077ec14: mov dword ptr [0xa9b448], 0x43fe0000 */ W32((u32)(0xa9b448u), 0x43fe0000u);
    /* 0077ec1e: ret  */ FN_RET(0x0077ec00); r_esp += 4; return;
}

void f_0077ec20(void) /* sub_77EC20 */
{
    FN_ENTER(0x0077ec20);
    /* 0077ec20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077ec21: mov edi, ecx */ r_edi = r_ecx;
    /* 0077ec23: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0077ec26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ec28: je 0x77ec50 */ if (fZ) goto L_0077ec50;
L_0077ec2a:; BB(0x0077ec2a);
    /* 0077ec2a: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0077ec2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ec2f: je 0x77ec3d */ if (fZ) goto L_0077ec3d;
L_0077ec31:; BB(0x0077ec31);
    /* 0077ec31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ec33: je 0x77ec42 */ if (fZ) goto L_0077ec42;
L_0077ec35:; BB(0x0077ec35);
    /* 0077ec35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077ec37: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0077ec39: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x77ec3bu); call_ind(t); }
    /* 0077ec3b: jmp 0x77ec42 */ goto L_0077ec42;
L_0077ec3d:; BB(0x0077ec3d);
    /* 0077ec3d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x77ec42u); f_007127b0();
L_0077ec42:; BB(0x0077ec42);
    /* 0077ec42: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
    /* 0077ec49: mov dword ptr [edi + 0x34], 7 */ W32((u32)(r_edi+0x34u), 0x7u);
L_0077ec50:; BB(0x0077ec50);
    /* 0077ec50: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0077ec53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ec55: je 0x77ec6a */ if (fZ) goto L_0077ec6a;
L_0077ec57:; BB(0x0077ec57);
    /* 0077ec57: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x77ec5cu); f_007127b0();
    /* 0077ec5c: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 0077ec63: mov dword ptr [edi + 0x34], 7 */ W32((u32)(r_edi+0x34u), 0x7u);
L_0077ec6a:; BB(0x0077ec6a);
    /* 0077ec6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ec6b: ret  */ FN_RET(0x0077ec20); r_esp += 4; return;
}

void f_0077ec6c(void) /* sub_77EC6C */
{
    FN_ENTER(0x0077ec6c);
    /* 0077ec6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077ec6d: mov esi, ecx */ r_esi = r_ecx;
    /* 0077ec6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077ec71: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 0077ec74: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0077ec77: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0077ec7a: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0077ec7d: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0077ec80: mov ecx, esi */ r_ecx = r_esi;
    /* 0077ec82: call 0x77e9ac */ r_esp -= 4; W32(r_esp, 0x77ec87u); f_0077e9ac();
    /* 0077ec87: mov dword ptr [esi + 0x38], 0 */ W32((u32)(r_esi+0x38u), 0x0u);
    /* 0077ec8e: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 0077ec91: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0077ec94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ec96: je 0x77ecac */ if (fZ) goto L_0077ecac;
L_0077ec98:; BB(0x0077ec98);
    /* 0077ec98: mov eax, dword ptr [0x9f84a4] */ r_eax = R32((u32)(0x9f84a4u));
    /* 0077ec9d: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0077eca4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077eca6: je 0x77ecac */ if (fZ) goto L_0077ecac;
L_0077eca8:; BB(0x0077eca8);
    /* 0077eca8: mov ecx, esi */ r_ecx = r_esi;
    /* 0077ecaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x77ecacu); call_ind(t); }
L_0077ecac:; BB(0x0077ecac);
    /* 0077ecac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ecad: ret  */ FN_RET(0x0077ec6c); r_esp += 4; return;
}

void f_0077ecb0(void) /* sub_77ECB0 */
{
    FN_ENTER(0x0077ecb0);
    /* 0077ecb0: call 0x77ec20 */ r_esp -= 4; W32(r_esp, 0x77ecb5u); f_0077ec20();
    /* 0077ecb5: ret  */ FN_RET(0x0077ecb0); r_esp += 4; return;
}

void f_0077ecb8(void) /* sub_77ECB8 */
{
    FN_ENTER(0x0077ecb8);
    /* 0077ecb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077ecb9: mov edi, ecx */ r_edi = r_ecx;
    /* 0077ecbb: mov ecx, edi */ r_ecx = r_edi;
    /* 0077ecbd: call 0x77ec20 */ r_esp -= 4; W32(r_esp, 0x77ecc2u); f_0077ec20();
    /* 0077ecc2: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0077ecc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ecc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ecc9: mov ecx, edi */ r_ecx = r_edi;
    /* 0077eccb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077eccc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077ecce: call 0x77e760 */ r_esp -= 4; W32(r_esp, 0x77ecd3u); f_0077e760();
    /* 0077ecd3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ecd4: ret  */ FN_RET(0x0077ecb8); r_esp += 4; return;
}

void f_0077ecd8(void) /* sub_77ECD8 */
{
    FN_ENTER(0x0077ecd8);
    /* 0077ecd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077ecd9: mov edi, ecx */ r_edi = r_ecx;
    /* 0077ecdb: mov ecx, edi */ r_ecx = r_edi;
    /* 0077ecdd: call 0x77ec20 */ r_esp -= 4; W32(r_esp, 0x77ece2u); f_0077ec20();
    /* 0077ece2: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0077ece5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ece7: jne 0x77eceb */ if (!fZ) goto L_0077eceb;
L_0077ece9:; BB(0x0077ece9);
    /* 0077ece9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ecea: ret  */ FN_RET(0x0077ecd8); r_esp += 4; return;
L_0077eceb:; BB(0x0077eceb);
    /* 0077eceb: mov ecx, edi */ r_ecx = r_edi;
    /* 0077eced: call 0x77ec20 */ r_esp -= 4; W32(r_esp, 0x77ecf2u); f_0077ec20();
    /* 0077ecf2: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0077ecf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ecf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ecf9: mov ecx, edi */ r_ecx = r_edi;
    /* 0077ecfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ecfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077ecfe: call 0x77e760 */ r_esp -= 4; W32(r_esp, 0x77ed03u); f_0077e760();
    /* 0077ed03: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ed04: ret  */ FN_RET(0x0077ecd8); r_esp += 4; return;
}

void f_0077ed08(void) /* sub_77ED08 */
{
    FN_ENTER(0x0077ed08);
    /* 0077ed08: mov eax, dword ptr [0xa9b450] */ r_eax = R32((u32)(0xa9b450u));
    /* 0077ed0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ed0f: je 0x77ed24 */ if (fZ) goto L_0077ed24;
L_0077ed11:; BB(0x0077ed11);
    /* 0077ed11: je 0x77ed1a */ if (fZ) goto L_0077ed1a;
L_0077ed13:; BB(0x0077ed13);
    /* 0077ed13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ed14: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x77ed19u); f_00858882();
    /* 0077ed19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0077ed1a:; BB(0x0077ed1a);
    /* 0077ed1a: mov dword ptr [0xa9b450], 0 */ W32((u32)(0xa9b450u), 0x0u);
L_0077ed24:; BB(0x0077ed24);
    /* 0077ed24: mov eax, dword ptr [0xa9b454] */ r_eax = R32((u32)(0xa9b454u));
    /* 0077ed29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ed2b: je 0x77ed40 */ if (fZ) goto L_0077ed40;
L_0077ed2d:; BB(0x0077ed2d);
    /* 0077ed2d: je 0x77ed36 */ if (fZ) goto L_0077ed36;
L_0077ed2f:; BB(0x0077ed2f);
    /* 0077ed2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ed30: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x77ed35u); f_00858882();
    /* 0077ed35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0077ed36:; BB(0x0077ed36);
    /* 0077ed36: mov dword ptr [0xa9b454], 0 */ W32((u32)(0xa9b454u), 0x0u);
L_0077ed40:; BB(0x0077ed40);
    /* 0077ed40: ret  */ FN_RET(0x0077ed08); r_esp += 4; return;
}

void f_0077ed44(void) /* sub_77ED44 */
{
    FN_ENTER(0x0077ed44);
    /* 0077ed44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077ed45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077ed46: mov edi, dword ptr [0xa9b454] */ r_edi = R32((u32)(0xa9b454u));
    /* 0077ed4c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ed4e: je 0x77ed68 */ if (fZ) goto L_0077ed68;
L_0077ed50:; BB(0x0077ed50);
    /* 0077ed50: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0077ed54: mov ecx, 0xd28 */ r_ecx = 0xd28u;
    /* 0077ed59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077ed5a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0077ed5d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0077ed5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077ed60: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ed63: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0077ed65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ed66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ed67: ret  */ FN_RET(0x0077ed44); r_esp += 4; return;
L_0077ed68:; BB(0x0077ed68);
    /* 0077ed68: push 0xd28 */ { u32 v = 0xd28u; r_esp -= 4; W32(r_esp, v); }
    /* 0077ed6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077ed6f: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x77ed74u); f_008587c7();
    /* 0077ed74: mov edi, eax */ r_edi = r_eax;
    /* 0077ed76: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077ed79: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ed7b: je 0x77ed98 */ if (fZ) goto L_0077ed98;
L_0077ed7d:; BB(0x0077ed7d);
    /* 0077ed7d: mov esi, 8 */ r_esi = 0x8u;
    /* 0077ed82: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0077ed85: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077ed87: mov byte ptr [edi + 2], dl */ W8((u32)(r_edi+0x2u), (u8)r_edx);
    /* 0077ed8a: mov byte ptr [edi + 3], dl */ W8((u32)(r_edi+0x3u), (u8)r_edx);
    /* 0077ed8d: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
L_0077ed90:; BB(0x0077ed90);
    /* 0077ed90: mov dword ptr [0xa9b454], edi */ W32((u32)(0xa9b454u), r_edi);
    /* 0077ed96: jmp 0x77ed50 */ goto L_0077ed50;
L_0077ed98:; BB(0x0077ed98);
    /* 0077ed98: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0077ed9a: jmp 0x77ed90 */ goto L_0077ed90;
}

void f_0077ed9c(void) /* sub_77ED9C */
{
    FN_ENTER(0x0077ed9c);
    /* 0077ed9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077ed9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077ed9e: mov eax, dword ptr [0xa9b450] */ r_eax = R32((u32)(0xa9b450u));
    /* 0077eda3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077eda5: je 0x77edc1 */ if (fZ) goto L_0077edc1;
L_0077eda7:; BB(0x0077eda7);
    /* 0077eda7: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0077edab: mov edi, eax */ r_edi = r_eax;
    /* 0077edad: mov ecx, 0x2b08 */ r_ecx = 0x2b08u;
    /* 0077edb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077edb3: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0077edb6: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0077edb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077edb9: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077edbc: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0077edbe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077edbf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077edc0: ret  */ FN_RET(0x0077ed9c); r_esp += 4; return;
L_0077edc1:; BB(0x0077edc1);
    /* 0077edc1: push 0x2b08 */ { u32 v = 0x2b08u; r_esp -= 4; W32(r_esp, v); }
    /* 0077edc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077edc8: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x77edcdu); f_008587c7();
    /* 0077edcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077edd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077edd2: je 0x77ee21 */ if (fZ) goto L_0077ee21;
L_0077edd4:; BB(0x0077edd4);
    /* 0077edd4: mov esi, 8 */ r_esi = 0x8u;
    /* 0077edd9: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 0077eddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077edde: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0077ede1: mov byte ptr [eax + 3], dl */ W8((u32)(r_eax+0x3u), (u8)r_edx);
    /* 0077ede4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0077ede7: lea esi, [eax + 8] */ r_esi = (u32)(r_eax+0x8u);
    /* 0077edea: mov ecx, 0x20 */ r_ecx = 0x20u;
L_0077edef:; BB(0x0077edef);
    /* 0077edef: mov edx, 8 */ r_edx = 0x8u;
    /* 0077edf4: mov word ptr [esi + 0xc4], dx */ W16((u32)(r_esi+0xc4u), (u16)r_edx);
    /* 0077edfb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077edfd: mov byte ptr [esi + 0xc6], dl */ W8((u32)(r_esi+0xc6u), (u8)r_edx);
    /* 0077ee03: mov byte ptr [esi + 0xc7], dl */ W8((u32)(r_esi+0xc7u), (u8)r_edx);
    /* 0077ee09: mov dword ptr [esi + 0xc8], edx */ W32((u32)(r_esi+0xc8u), r_edx);
    /* 0077ee0f: add esi, 0x158 */ {  u32 a = r_esi; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077ee15: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0077ee18: jne 0x77edef */ if (!fZ) goto L_0077edef;
L_0077ee1a:; BB(0x0077ee1a);
    /* 0077ee1a: mov dword ptr [0xa9b450], eax */ W32((u32)(0xa9b450u), r_eax);
    /* 0077ee1f: jmp 0x77eda7 */ goto L_0077eda7;
L_0077ee21:; BB(0x0077ee21);
    /* 0077ee21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077ee23: jmp 0x77ee1a */ goto L_0077ee1a;
}

void f_0077ee28(void) /* sub_77EE28 */
{
    FN_ENTER(0x0077ee28);
    /* 0077ee28: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0077ee2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ee2e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0077ee30: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0077ee33: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0077ee36: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0077ee39: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0077ee3c: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0077ee3f: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0077ee42: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0077ee45: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0077ee48: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0077ee4b: ret  */ FN_RET(0x0077ee28); r_esp += 4; return;
}

void f_0077ee4c(void) /* sub_77EE4C */
{
    FN_ENTER(0x0077ee4c);
    /* 0077ee4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077ee4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077ee4e: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077ee51: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 0077ee55: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0077ee59: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0077ee5b: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0077ee5e: lea esi, [eax + 8] */ r_esi = (u32)(r_eax+0x8u);
    /* 0077ee61: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0077ee65: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0077ee68: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0077ee6c: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0077ee70: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0077ee73: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0077ee77: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0077ee7a: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0077ee7e: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0077ee81: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0077ee85: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0077ee88: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0077ee8c: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0077ee8f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0077ee93: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0077ee96: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0077ee9a: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 0077ee9d: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0077eea1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077eea3: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 0077eea5: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0077eea8: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 0077eeab: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 0077eeae: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 0077eeb1: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 0077eeb4: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0077eeb7: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 0077eeba: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 0077eebd: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0077eec0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0077eec3: mov edx, esi */ r_edx = r_esi;
    /* 0077eec5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077eec7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077eec9: jle 0x77efab */ if ((fZ||fS!=fO)) goto L_0077efab;
L_0077eecf:; BB(0x0077eecf);
    /* 0077eecf: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0077eed3: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0077eed7: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
L_0077eedb:; BB(0x0077eedb);
    /* 0077eedb: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 0077eede: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077eee0: jne 0x77ef95 */ if (!fZ) goto L_0077ef95;
L_0077eee6:; BB(0x0077eee6);
    /* 0077eee6: lea ebp, [esp + 0x24] */ r_ebp = (u32)(r_esp+0x24u);
    /* 0077eeea: movzx edi, word ptr [edx + 2] */ r_edi = (u32)R16((u32)(r_edx+0x2u));
    /* 0077eeee: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 0077eef0: cmp edi, dword ptr [ebp] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077eef3: je 0x77efbe */ if (fZ) goto L_0077efbe;
L_0077eef9:; BB(0x0077eef9);
    /* 0077eef9: lea ebp, [esp + 0x2c] */ r_ebp = (u32)(r_esp+0x2cu);
    /* 0077eefd: cmp edi, dword ptr [ebp] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ef00: je 0x77efbe */ if (fZ) goto L_0077efbe;
L_0077ef06:; BB(0x0077ef06);
    /* 0077ef06: lea ebp, [esp + 0x34] */ r_ebp = (u32)(r_esp+0x34u);
    /* 0077ef0a: cmp edi, dword ptr [ebp] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ef0d: je 0x77efbe */ if (fZ) goto L_0077efbe;
L_0077ef13:; BB(0x0077ef13);
    /* 0077ef13: lea ebp, [esp + 0x3c] */ r_ebp = (u32)(r_esp+0x3cu);
    /* 0077ef17: cmp edi, dword ptr [ebp] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ef1a: je 0x77efbe */ if (fZ) goto L_0077efbe;
L_0077ef20:; BB(0x0077ef20);
    /* 0077ef20: lea ebp, [esp + 0x44] */ r_ebp = (u32)(r_esp+0x44u);
    /* 0077ef24: cmp edi, dword ptr [ebp] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ef27: je 0x77efbe */ if (fZ) goto L_0077efbe;
L_0077ef2d:; BB(0x0077ef2d);
    /* 0077ef2d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0077ef2f: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
L_0077ef33:; BB(0x0077ef33);
    /* 0077ef33: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ef35: jne 0x77ef3b */ if (!fZ) goto L_0077ef3b;
L_0077ef37:; BB(0x0077ef37);
    /* 0077ef37: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0077ef39: jmp 0x77ef8f */ goto L_0077ef8f;
L_0077ef3b:; BB(0x0077ef3b);
    /* 0077ef3b: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 0077ef3f: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0077ef43: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 0077ef46: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0077ef4a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0077ef4c: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0077ef50: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077ef52: jle 0x77ef8d */ if ((fZ||fS!=fO)) goto L_0077ef8d;
L_0077ef54:; BB(0x0077ef54);
    /* 0077ef54: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0077ef58: mov edx, ebp */ r_edx = r_ebp;
    /* 0077ef5a: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0077ef5e: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0077ef62: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0077ef65: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_0077ef69:; BB(0x0077ef69);
    /* 0077ef69: movzx ebp, word ptr [ecx] */ r_ebp = (u32)R16((u32)(r_ecx));
    /* 0077ef6c: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ef6e: jne 0x77ef78 */ if (!fZ) goto L_0077ef78;
L_0077ef70:; BB(0x0077ef70);
    /* 0077ef70: movzx ebp, word ptr [ecx + 2] */ r_ebp = (u32)R16((u32)(r_ecx+0x2u));
    /* 0077ef74: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ef76: je 0x77efb1 */ if (fZ) goto L_0077efb1;
L_0077ef78:; BB(0x0077ef78);
    /* 0077ef78: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077ef7b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077ef7e: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077ef80: jl 0x77ef69 */ if ((fS!=fO)) goto L_0077ef69;
L_0077ef82:; BB(0x0077ef82);
    /* 0077ef82: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0077ef86: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0077ef8a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0077ef8d:; BB(0x0077ef8d);
    /* 0077ef8d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0077ef8f:; BB(0x0077ef8f);
    /* 0077ef8f: mov dword ptr [ebx + 4], ebp */ W32((u32)(r_ebx+0x4u), r_ebp);
    /* 0077ef92: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0077ef95:; BB(0x0077ef95);
    /* 0077ef95: add edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077ef98: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077ef9b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077ef9d: jl 0x77eedb */ if ((fS!=fO)) goto L_0077eedb;
L_0077efa3:; BB(0x0077efa3);
    /* 0077efa3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0077efa7: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_0077efab:; BB(0x0077efab);
    /* 0077efab: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077efae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077efaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077efb0: ret  */ FN_RET(0x0077ee4c); r_esp += 4; return;
L_0077efb1:; BB(0x0077efb1);
    /* 0077efb1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0077efb5: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0077efb9: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0077efbc: jmp 0x77ef8f */ goto L_0077ef8f;
L_0077efbe:; BB(0x0077efbe);
    /* 0077efbe: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 0077efc1: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0077efc5: jmp 0x77ef33 */ goto L_0077ef33;
}

void f_0077efcc(void) /* sub_77EFCC */
{
    FN_ENTER(0x0077efcc);
    /* 0077efcc: mov eax, dword ptr [0xa9b454] */ r_eax = R32((u32)(0xa9b454u));
    /* 0077efd1: ret  */ FN_RET(0x0077efcc); r_esp += 4; return;
}

void f_0077efd4(void) /* sub_77EFD4 */
{
    FN_ENTER(0x0077efd4);
    /* 0077efd4: mov eax, dword ptr [0xa9b450] */ r_eax = R32((u32)(0xa9b450u));
    /* 0077efd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077efdb: je 0x77eff0 */ if (fZ) goto L_0077eff0;
L_0077efdd:; BB(0x0077efdd);
    /* 0077efdd: je 0x77efe6 */ if (fZ) goto L_0077efe6;
L_0077efdf:; BB(0x0077efdf);
    /* 0077efdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077efe0: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x77efe5u); f_00858882();
    /* 0077efe5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0077efe6:; BB(0x0077efe6);
    /* 0077efe6: mov dword ptr [0xa9b450], 0 */ W32((u32)(0xa9b450u), 0x0u);
L_0077eff0:; BB(0x0077eff0);
    /* 0077eff0: ret  */ FN_RET(0x0077efd4); r_esp += 4; return;
}

void f_0077eff4(void) /* sub_77EFF4 */
{
    FN_ENTER(0x0077eff4);
    /* 0077eff4: mov eax, dword ptr [0xa9b450] */ r_eax = R32((u32)(0xa9b450u));
    /* 0077eff9: ret  */ FN_RET(0x0077eff4); r_esp += 4; return;
}

void f_0077effc(void) /* sub_77EFFC */
{
    FN_ENTER(0x0077effc);
    /* 0077effc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0077f000: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0077f005: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f007: je 0x77f028 */ if (fZ) goto L_0077f028;
L_0077f009:; BB(0x0077f009);
    /* 0077f009: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077f00c: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f00e: je 0x77f028 */ if (fZ) goto L_0077f028;
L_0077f010:; BB(0x0077f010);
    /* 0077f010: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077f013: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f015: je 0x77f028 */ if (fZ) goto L_0077f028;
L_0077f017:; BB(0x0077f017);
    /* 0077f017: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077f01a: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f01c: je 0x77f028 */ if (fZ) goto L_0077f028;
L_0077f01e:; BB(0x0077f01e);
    /* 0077f01e: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077f021: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f023: je 0x77f028 */ if (fZ) goto L_0077f028;
L_0077f025:; BB(0x0077f025);
    /* 0077f025: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f027: ret  */ FN_RET(0x0077effc); r_esp += 4; return;
L_0077f028:; BB(0x0077f028);
    /* 0077f028: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0077f02b: ret  */ FN_RET(0x0077effc); r_esp += 4; return;
}

