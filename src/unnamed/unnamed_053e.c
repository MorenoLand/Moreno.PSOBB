#include "protos.h"

void f_0053e078(void) /* sub_53E078 */
{
    FN_ENTER(0x0053e078);
    /* 0053e078: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e079: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053e07b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053e07d: call 0x53e110 */ r_esp -= 4; W32(r_esp, 0x53e082u); f_0053e110();
    /* 0053e082: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053e086: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e088: jne 0x53e08e */ if (!fZ) goto L_0053e08e;
L_0053e08a:; BB(0x0053e08a);
    /* 0053e08a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e08b: ret 4 */ FN_RET(0x0053e078); r_esp += 8; return;
L_0053e08e:; BB(0x0053e08e);
    /* 0053e08e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e08f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x53e094u); f_005c2f74();
    /* 0053e094: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053e095: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e096: ret 4 */ FN_RET(0x0053e078); r_esp += 8; return;
}

void f_0053e09c(void) /* sub_53E09C */
{
    FN_ENTER(0x0053e09c);
    /* 0053e09c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e09d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053e09f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053e0a1: call 0x53e0c0 */ r_esp -= 4; W32(r_esp, 0x53e0a6u); f_0053e0c0();
    /* 0053e0a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053e0aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e0ac: jne 0x53e0b2 */ if (!fZ) goto L_0053e0b2;
L_0053e0ae:; BB(0x0053e0ae);
    /* 0053e0ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e0af: ret 4 */ FN_RET(0x0053e09c); r_esp += 8; return;
L_0053e0b2:; BB(0x0053e0b2);
    /* 0053e0b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e0b3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x53e0b8u); f_005c2f74();
    /* 0053e0b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053e0b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e0ba: ret 4 */ FN_RET(0x0053e09c); r_esp += 8; return;
}

void f_0053e0c0(void) /* sub_53E0C0 */
{
    FN_ENTER(0x0053e0c0);
    /* 0053e0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053e0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053e0c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053e0c5: push 0x8d5498 */ { u32 v = 0x8d5498u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e0ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053e0d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e0d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053e0d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053e0db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053e0de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0053e0e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0053e0e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053e0e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053e0ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053e0ed: mov dword ptr [ecx], 0xb02dc0 */ W32((u32)(r_ecx), 0xb02dc0u);
    /* 0053e0f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053e0fa: call 0x53e110 */ r_esp -= 4; W32(r_esp, 0x53e0ffu); f_0053e110();
    /* 0053e0ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053e102: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053e109: mov esp, ebp */ r_esp = r_ebp;
    /* 0053e10b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053e10c: ret  */ FN_RET(0x0053e0c0); r_esp += 4; return;
}

void f_0053e110(void) /* sub_53E110 */
{
    FN_ENTER(0x0053e110);
    /* 0053e110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053e111: mov ebp, esp */ r_ebp = r_esp;
    /* 0053e113: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053e115: push 0x8d54d8 */ { u32 v = 0x8d54d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e11a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053e120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e121: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053e128: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053e12b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053e12e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0053e131: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0053e134: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053e137: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053e13a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053e141: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053e144: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 0053e14a: mov dword ptr [eax], 0xb02be0 */ W32((u32)(r_eax), 0xb02be0u);
    /* 0053e150: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e152: je 0x53e16e */ if (fZ) goto L_0053e16e;
L_0053e154:; BB(0x0053e154);
    /* 0053e154: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0053e158: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053e15d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0053e161: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053e164: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_0053e16e:; BB(0x0053e16e);
    /* 0053e16e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053e171: mov edx, dword ptr [eax + 0x410] */ r_edx = R32((u32)(r_eax+0x410u));
    /* 0053e177: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0053e17b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053e180: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0053e184: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 0053e18e: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x53e193u); f_007b9c8c();
    /* 0053e193: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053e19a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053e19d: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e1a3: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x53e1a8u); f_005769f8();
    /* 0053e1a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053e1af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053e1b2: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x53e1b7u); f_0051f4fc();
    /* 0053e1b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053e1ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053e1c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0053e1c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053e1c4: ret  */ FN_RET(0x0053e110); r_esp += 4; return;
}

void f_0053e1c8(void) /* sub_53E1C8 */
{
    FN_ENTER(0x0053e1c8);
    /* 0053e1c8: mov eax, dword ptr [0xa73774] */ r_eax = R32((u32)(0xa73774u));
    /* 0053e1cd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053e1d0: jge 0x53e1db */ if ((fS==fO)) goto L_0053e1db;
L_0053e1d2:; BB(0x0053e1d2);
    /* 0053e1d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053e1d5: mov dword ptr [0xa73774], eax */ W32((u32)(0xa73774u), r_eax);
    /* 0053e1da: ret  */ FN_RET(0x0053e1c8); r_esp += 4; return;
L_0053e1db:; BB(0x0053e1db);
    /* 0053e1db: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053e1de: jle 0x53e212 */ if ((fZ||fS!=fO)) goto L_0053e212;
L_0053e1e0:; BB(0x0053e1e0);
    /* 0053e1e0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e1e3: je 0x53e1ef */ if (fZ) goto L_0053e1ef;
L_0053e1e5:; BB(0x0053e1e5);
    /* 0053e1e5: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e1e8: je 0x53e1ef */ if (fZ) goto L_0053e1ef;
L_0053e1ea:; BB(0x0053e1ea);
    /* 0053e1ea: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e1ed: jne 0x53e1d2 */ if (!fZ) goto L_0053e1d2;
L_0053e1ef:; BB(0x0053e1ef);
    /* 0053e1ef: mov edx, dword ptr [0xa73770] */ r_edx = R32((u32)(0xa73770u));
    /* 0053e1f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e1f6: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 0053e1f9: mov dword ptr [0xa73770], eax */ W32((u32)(0xa73770u), r_eax);
    /* 0053e1fe: push 0xa73700 */ { u32 v = 0xa73700u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e203: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x53e208u); f_00520c5c();
    /* 0053e208: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e20b: mov eax, dword ptr [0xa73774] */ r_eax = R32((u32)(0xa73774u));
    /* 0053e210: jmp 0x53e1d2 */ goto L_0053e1d2;
L_0053e212:; BB(0x0053e212);
    /* 0053e212: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x53e217u); f_0082d7b0();
    /* 0053e217: call 0x520c54 */ r_esp -= 4; W32(r_esp, 0x53e21cu); f_00520c54();
    /* 0053e21c: mov ecx, dword ptr [0xa73770] */ r_ecx = R32((u32)(0xa73770u));
    /* 0053e222: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e223: lea eax, [ecx + 0xc] */ r_eax = (u32)(r_ecx+0xcu);
    /* 0053e226: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e228: mov edx, 0xa73700 */ r_edx = 0xa73700u;
    /* 0053e22d: mov dword ptr [0xa73770], eax */ W32((u32)(0xa73770u), r_eax);
    /* 0053e232: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x53e237u); f_00830aa0();
    /* 0053e237: mov eax, dword ptr [0xa73770] */ r_eax = R32((u32)(0xa73770u));
    /* 0053e23c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e23d: lea edx, [eax + 0xc] */ r_edx = (u32)(r_eax+0xcu);
    /* 0053e240: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e242: mov dword ptr [0xa73770], edx */ W32((u32)(0xa73770u), r_edx);
    /* 0053e248: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x53e24du); f_0082eab8();
    /* 0053e24d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x53e252u); f_0082da80();
    /* 0053e252: mov eax, dword ptr [0xa73774] */ r_eax = R32((u32)(0xa73774u));
    /* 0053e257: jmp 0x53e1d2 */ goto L_0053e1d2;
}

void f_0053e220(void)
{
    FN_ENTER(0x0053e220);
    goto L_0053e220;
L_0053e1d2:; BB(0x0053e1d2);
    /* 0053e1d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053e1d5: mov dword ptr [0xa73774], eax */ W32((u32)(0xa73774u), r_eax);
    /* 0053e1da: ret  */ FN_RET(0x0053e220); r_esp += 4; return;
L_0053e220:; BB(0x0053e220);
    /* 0053e220: cmpsd dword ptr [esi], dword ptr es:[edi] */ { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;  }
    /* 0053e221: add byte ptr [ecx - 0x73], dl */ { u32 ad = (u32)(r_ecx+0xffffff8du);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0053e224: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e225: or al, 0x33 */ {  u32 a = (u8)r_eax; u32 b = 0x33u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053e227: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0053e228: mov edx, 0xa73700 */ r_edx = 0xa73700u;
    /* 0053e22d: mov dword ptr [0xa73770], eax */ W32((u32)(0xa73770u), r_eax);
    /* 0053e232: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x53e237u); f_00830aa0();
    /* 0053e237: mov eax, dword ptr [0xa73770] */ r_eax = R32((u32)(0xa73770u));
    /* 0053e23c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e23d: lea edx, [eax + 0xc] */ r_edx = (u32)(r_eax+0xcu);
    /* 0053e240: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053e242: mov dword ptr [0xa73770], edx */ W32((u32)(0xa73770u), r_edx);
    /* 0053e248: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x53e24du); f_0082eab8();
    /* 0053e24d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x53e252u); f_0082da80();
    /* 0053e252: mov eax, dword ptr [0xa73774] */ r_eax = R32((u32)(0xa73774u));
    /* 0053e257: jmp 0x53e1d2 */ goto L_0053e1d2;
}

void f_0053e25c(void) /* sub_53E25C */
{
    FN_ENTER(0x0053e25c);
    /* 0053e25c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e25d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053e25f: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 0053e265: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e26a: jne 0x53e2b3 */ if (!fZ) goto L_0053e2b3;
L_0053e26c:; BB(0x0053e26c);
    /* 0053e26c: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0053e272: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e274: jne 0x53e2a8 */ if (!fZ) goto L_0053e2a8;
L_0053e276:; BB(0x0053e276);
    /* 0053e276: mov eax, dword ptr [ebx + 0x474] */ r_eax = R32((u32)(r_ebx+0x474u));
    /* 0053e27c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053e27f: jge 0x53e293 */ if ((fS==fO)) goto L_0053e293;
L_0053e281:; BB(0x0053e281);
    /* 0053e281: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e283: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053e285: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53e28au); f_0051f62c();
    /* 0053e28a: add dword ptr [ebx + 0x474], 1 */ { u32 ad = (u32)(r_ebx+0x474u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053e291: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e292: ret  */ FN_RET(0x0053e25c); r_esp += 4; return;
L_0053e293:; BB(0x0053e293);
    /* 0053e293: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e295: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053e297: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53e29cu); f_0051f62c();
    /* 0053e29c: mov dword ptr [ebx + 0x474], 0 */ W32((u32)(r_ebx+0x474u), 0x0u);
    /* 0053e2a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e2a7: ret  */ FN_RET(0x0053e25c); r_esp += 4; return;
L_0053e2a8:; BB(0x0053e2a8);
    /* 0053e2a8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e2aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053e2ac: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53e2b1u); f_0051f62c();
    /* 0053e2b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e2b2: ret  */ FN_RET(0x0053e25c); r_esp += 4; return;
L_0053e2b3:; BB(0x0053e2b3);
    /* 0053e2b3: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e2b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053e2b7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53e2bcu); f_0051f62c();
    /* 0053e2bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e2bd: ret  */ FN_RET(0x0053e25c); r_esp += 4; return;
}

void f_0053e2c0(void) /* sub_53E2C0 */
{
    FN_ENTER(0x0053e2c0);
    /* 0053e2c0: mov eax, dword ptr [0xa73724] */ r_eax = R32((u32)(0xa73724u));
    /* 0053e2c5: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0053e2cb: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0053e2ce: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0053e2d1: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0053e2d7: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0053e2da: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0053e2dd: ret  */ FN_RET(0x0053e2c0); r_esp += 4; return;
}

void f_0053e2e0(void) /* sub_53E2E0 */
{
    FN_ENTER(0x0053e2e0);
    /* 0053e2e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053e2e1: mov esi, ecx */ r_esi = r_ecx;
    /* 0053e2e3: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 0053e2e9: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053e2eb: jne 0x53e30e */ if (!fZ) goto L_0053e30e;
L_0053e2ed:; BB(0x0053e2ed);
    /* 0053e2ed: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053e2ef: je 0x53e30a */ if (fZ) goto L_0053e30a;
L_0053e2f1:; BB(0x0053e2f1);
    /* 0053e2f1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0053e2f3: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053e2f6: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 0053e2fc: mov ecx, esi */ r_ecx = r_esi;
    /* 0053e2fe: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53e303u); f_0051f62c();
    /* 0053e303: mov eax, 1 */ r_eax = 0x1u;
    /* 0053e308: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053e309: ret  */ FN_RET(0x0053e2e0); r_esp += 4; return;
L_0053e30a:; BB(0x0053e30a);
    /* 0053e30a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e30c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053e30d: ret  */ FN_RET(0x0053e2e0); r_esp += 4; return;
L_0053e30e:; BB(0x0053e30e);
    /* 0053e30e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0053e310: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053e313: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 0053e319: mov ecx, esi */ r_ecx = r_esi;
    /* 0053e31b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53e320u); f_0051f62c();
    /* 0053e320: mov dword ptr [esi + 0x414], 0 */ W32((u32)(r_esi+0x414u), 0x0u);
    /* 0053e32a: mov eax, 1 */ r_eax = 0x1u;
    /* 0053e32f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053e330: ret  */ FN_RET(0x0053e2e0); r_esp += 4; return;
}

void f_0053e320(void)
{
    FN_ENTER(0x0053e320);
    /* 0053e320: mov dword ptr [esi + 0x414], 0 */ W32((u32)(r_esi+0x414u), 0x0u);
    /* 0053e32a: mov eax, 1 */ r_eax = 0x1u;
    /* 0053e32f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053e330: ret  */ FN_RET(0x0053e320); r_esp += 4; return;
}

void f_0053e334(void) /* sub_53E334 */
{
    FN_ENTER(0x0053e334);
    /* 0053e334: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053e335: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053e337: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 0053e33d: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 0053e340: fcom dword ptr [0x92373c] */ fx_compare(ST(0), R_F32((u32)(0x92373cu))); 
    /* 0053e346: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053e348: fstp dword ptr [ebp + 0x3fc] */ W_F32((u32)(r_ebp+0x3fcu), ST(0)); FPOP();
    /* 0053e34e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053e34f: jae 0x53e35e */ if (!fC) goto L_0053e35e;
L_0053e351:; BB(0x0053e351);
    /* 0053e351: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053e354: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053e356: call dword ptr [eax + 0x190] */ { u32 t = R32((u32)(r_eax+0x190u)); r_esp -= 4; W32(r_esp, 0x53e35cu); call_ind(t); }
    /* 0053e35c: jmp 0x53e369 */ goto L_0053e369;
L_0053e35e:; BB(0x0053e35e);
    /* 0053e35e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053e361: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053e363: call dword ptr [eax + 0x18c] */ { u32 t = R32((u32)(r_eax+0x18cu)); r_esp -= 4; W32(r_esp, 0x53e369u); call_ind(t); }
L_0053e369:; BB(0x0053e369);
    /* 0053e369: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0053e36f: mov eax, dword ptr [ebp + 0x3fc] */ r_eax = R32((u32)(r_ebp+0x3fcu));
    /* 0053e375: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0053e378: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053e379: ret  */ FN_RET(0x0053e334); r_esp += 4; return;
}

void f_0053e37c(void) /* sub_53E37C */
{
    FN_ENTER(0x0053e37c);
    /* 0053e37c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053e37d: mov edi, ecx */ r_edi = r_ecx;
    /* 0053e37f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053e383: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e386: je 0x53e4ce */ if (fZ) goto L_0053e4ce;
L_0053e38c:; BB(0x0053e38c);
    /* 0053e38c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053e38f: je 0x53e48c */ if (fZ) goto L_0053e48c;
L_0053e395:; BB(0x0053e395);
    /* 0053e395: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e398: je 0x53e457 */ if (fZ) goto L_0053e457;
L_0053e39e:; BB(0x0053e39e);
    /* 0053e39e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e3a0: jne 0x53e444 */ if (!fZ) goto L_0053e444;
L_0053e3a6:; BB(0x0053e3a6);
    /* 0053e3a6: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e3a8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53e3adu); f_007aa094();
    /* 0053e3ad: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e3b2: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e3b4: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x53e3b9u); f_00520ea0();
    /* 0053e3b9: mov eax, dword ptr [edi + 0x478] */ r_eax = R32((u32)(r_edi+0x478u));
    /* 0053e3bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e3c1: je 0x53e41c */ if (fZ) goto L_0053e41c;
L_0053e3c3:; BB(0x0053e3c3);
    /* 0053e3c3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e3c6: jne 0x53e40e */ if (!fZ) goto L_0053e40e;
L_0053e3c8:; BB(0x0053e3c8);
    /* 0053e3c8: mov eax, dword ptr [edi + 0x4c0] */ r_eax = R32((u32)(r_edi+0x4c0u));
    /* 0053e3ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e3d0: jne 0x53e405 */ if (!fZ) goto L_0053e405;
L_0053e3d2:; BB(0x0053e3d2);
    /* 0053e3d2: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0053e3d8: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053e3dd: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0053e3e3: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0053e3e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e3eb: jne 0x53e3f6 */ if (!fZ) goto L_0053e3f6;
L_0053e3ed:; BB(0x0053e3ed);
    /* 0053e3ed: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e3ef: call 0x53e538 */ r_esp -= 4; W32(r_esp, 0x53e3f4u); f_0053e538();
    /* 0053e3f4: jmp 0x53e3fb */ goto L_0053e3fb;
L_0053e3f6:; BB(0x0053e3f6);
    /* 0053e3f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e3f9: jne 0x53e405 */ if (!fZ) goto L_0053e405;
L_0053e3fb:; BB(0x0053e3fb);
    /* 0053e3fb: mov dword ptr [edi + 0x478], 3 */ W32((u32)(r_edi+0x478u), 0x3u);
L_0053e405:; BB(0x0053e405);
    /* 0053e405: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e407: call 0x540eb8 */ r_esp -= 4; W32(r_esp, 0x53e40cu); f_00540eb8();
    /* 0053e40c: jmp 0x53e42f */ goto L_0053e42f;
L_0053e40e:; BB(0x0053e40e);
    /* 0053e40e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e411: jne 0x53e42f */ if (!fZ) goto L_0053e42f;
L_0053e413:; BB(0x0053e413);
    /* 0053e413: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e415: call 0x540eb8 */ r_esp -= 4; W32(r_esp, 0x53e41au); f_00540eb8();
    /* 0053e41a: jmp 0x53e42f */ goto L_0053e42f;
L_0053e41c:; BB(0x0053e41c);
    /* 0053e41c: mov eax, dword ptr [edi + 0x408] */ r_eax = R32((u32)(r_edi+0x408u));
    /* 0053e422: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053e425: mov dword ptr [edi + 0x408], eax */ W32((u32)(r_edi+0x408u), r_eax);
    /* 0053e42b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053e42d: jle 0x53e490 */ if ((fZ||fS!=fO)) goto L_0053e490;
L_0053e42f:; BB(0x0053e42f);
    /* 0053e42f: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e431: call 0x542484 */ r_esp -= 4; W32(r_esp, 0x53e436u); f_00542484();
    /* 0053e436: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053e438: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e43a: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53e440u); call_ind(t); }
    /* 0053e440: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053e441: ret 4 */ FN_RET(0x0053e37c); r_esp += 8; return;
L_0053e444:; BB(0x0053e444);
    /* 0053e444: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053e447: jne 0x53e48c */ if (!fZ) goto L_0053e48c;
L_0053e449:; BB(0x0053e449);
    /* 0053e449: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053e44b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e44d: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x53e453u); call_ind(t); }
    /* 0053e453: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053e454: ret 4 */ FN_RET(0x0053e37c); r_esp += 8; return;
L_0053e457:; BB(0x0053e457);
    /* 0053e457: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053e459: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e45b: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x53e461u); call_ind(t); }
    /* 0053e461: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e463: jne 0x53e48c */ if (!fZ) goto L_0053e48c;
L_0053e465:; BB(0x0053e465);
    /* 0053e465: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0053e46b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e46d: je 0x53e48c */ if (fZ) goto L_0053e48c;
L_0053e46f:; BB(0x0053e46f);
    /* 0053e46f: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053e472: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0053e478: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0053e47e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e481: je 0x53e4c1 */ if (fZ) goto L_0053e4c1;
L_0053e483:; BB(0x0053e483);
    /* 0053e483: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e485: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e487: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53e48cu); f_0051f62c();
L_0053e48c:; BB(0x0053e48c);
    /* 0053e48c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053e48d: ret 4 */ FN_RET(0x0053e37c); r_esp += 8; return;
L_0053e490:; BB(0x0053e490);
    /* 0053e490: mov dword ptr [edi + 0x4c0], 2 */ W32((u32)(r_edi+0x4c0u), 0x2u);
    /* 0053e49a: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 0053e4a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053e4a2: mov dword ptr [edi + 0x478], 1 */ W32((u32)(r_edi+0x478u), 0x1u);
    /* 0053e4ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e4ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e4ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e4af: push 0x13f */ { u32 v = 0x13fu; r_esp -= 4; W32(r_esp, v); }
    /* 0053e4b4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x53e4b9u); f_00814298();
    /* 0053e4b9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e4bc: jmp 0x53e42f */ goto L_0053e42f;
L_0053e4c1:; BB(0x0053e4c1);
    /* 0053e4c1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e4c3: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e4c5: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53e4cau); f_0051f62c();
    /* 0053e4ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053e4cb: ret 4 */ FN_RET(0x0053e37c); r_esp += 8; return;
L_0053e4ce:; BB(0x0053e4ce);
    /* 0053e4ce: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e4d0: call 0x53e548 */ r_esp -= 4; W32(r_esp, 0x53e4d5u); f_0053e548();
    /* 0053e4d5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e4d7: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e4d9: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53e4deu); f_0051f664();
    /* 0053e4de: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0053e4e4: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053e4e6: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053e4eb: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0053e4f1: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e4f3: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x53e4f9u); call_ind(t); }
    /* 0053e4f9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0053e4fc: mov dword ptr [edi + 0x4b0], 0 */ W32((u32)(r_edi+0x4b0u), 0x0u);
    /* 0053e506: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053e50b: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0053e50e: mov dword ptr [edi + 0x4b4], 0x3e4ccccd */ W32((u32)(r_edi+0x4b4u), 0x3e4ccccdu);
    /* 0053e518: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e51a: mov dword ptr [edi + 0x4b8], 0x3f800000 */ W32((u32)(r_edi+0x4b8u), 0x3f800000u);
    /* 0053e524: call 0x53eac8 */ r_esp -= 4; W32(r_esp, 0x53e529u); f_0053eac8();
    /* 0053e529: mov dword ptr [edi + 0x478], 0 */ W32((u32)(r_edi+0x478u), 0x0u);
    /* 0053e533: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053e534: ret 4 */ FN_RET(0x0053e37c); r_esp += 8; return;
}

void f_0053e500(void)
{
    FN_ENTER(0x0053e500);
    /* 0053e500: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0053e502: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0053e504: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0053e506: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053e50b: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0053e50e: mov dword ptr [edi + 0x4b4], 0x3e4ccccd */ W32((u32)(r_edi+0x4b4u), 0x3e4ccccdu);
    /* 0053e518: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e51a: mov dword ptr [edi + 0x4b8], 0x3f800000 */ W32((u32)(r_edi+0x4b8u), 0x3f800000u);
    /* 0053e524: call 0x53eac8 */ r_esp -= 4; W32(r_esp, 0x53e529u); f_0053eac8();
    /* 0053e529: mov dword ptr [edi + 0x478], 0 */ W32((u32)(r_edi+0x478u), 0x0u);
    /* 0053e533: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053e534: ret 4 */ FN_RET(0x0053e500); r_esp += 8; return;
}

void f_0053e538(void) /* sub_53E538 */
{
    FN_ENTER(0x0053e538);
    /* 0053e538: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0053e53e: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e541: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0053e547: ret  */ FN_RET(0x0053e538); r_esp += 4; return;
}

void f_0053e548(void) /* sub_53E548 */
{
    FN_ENTER(0x0053e548);
    /* 0053e548: mov eax, dword ptr [ecx + 0x404] */ r_eax = R32((u32)(r_ecx+0x404u));
    /* 0053e54e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053e551: jne 0x53e569 */ if (!fZ) goto L_0053e569;
L_0053e553:; BB(0x0053e553);
    /* 0053e553: mov dword ptr [ecx + 0x404], 4 */ W32((u32)(r_ecx+0x404u), 0x4u);
    /* 0053e55d: mov eax, 3 */ r_eax = 0x3u;
    /* 0053e562: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
L_0053e569:; BB(0x0053e569);
    /* 0053e569: ret  */ FN_RET(0x0053e548); r_esp += 4; return;
}

void f_0053e56c(void) /* sub_53E56C */
{
    FN_ENTER(0x0053e56c);
    /* 0053e56c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053e56d: mov edi, ecx */ r_edi = r_ecx;
    /* 0053e56f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053e573: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e576: je 0x53e5d5 */ if (fZ) goto L_0053e5d5;
L_0053e578:; BB(0x0053e578);
    /* 0053e578: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e57b: je 0x53e5b0 */ if (fZ) goto L_0053e5b0;
L_0053e57d:; BB(0x0053e57d);
    /* 0053e57d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e57f: jne 0x53e5d1 */ if (!fZ) goto L_0053e5d1;
L_0053e581:; BB(0x0053e581);
    /* 0053e581: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e583: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53e588u); f_007aa094();
    /* 0053e588: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e58d: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e58f: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x53e594u); f_00520ea0();
    /* 0053e594: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e596: call 0x540eb8 */ r_esp -= 4; W32(r_esp, 0x53e59bu); f_00540eb8();
    /* 0053e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e59d: call 0x542470 */ r_esp -= 4; W32(r_esp, 0x53e5a2u); f_00542470();
    /* 0053e5a2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053e5a4: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e5a6: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53e5acu); call_ind(t); }
    /* 0053e5ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053e5ad: ret 4 */ FN_RET(0x0053e56c); r_esp += 8; return;
L_0053e5b0:; BB(0x0053e5b0);
    /* 0053e5b0: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0053e5b6: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e5bb: je 0x53e5d1 */ if (fZ) goto L_0053e5d1;
L_0053e5bd:; BB(0x0053e5bd);
    /* 0053e5bd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053e5bf: mov dword ptr [edi + 0x40c], 0 */ W32((u32)(r_edi+0x40cu), 0x0u);
    /* 0053e5c9: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e5cb: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x53e5d1u); call_ind(t); }
L_0053e5d1:; BB(0x0053e5d1);
    /* 0053e5d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053e5d2: ret 4 */ FN_RET(0x0053e56c); r_esp += 8; return;
L_0053e5d5:; BB(0x0053e5d5);
    /* 0053e5d5: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e5d7: call 0x53e548 */ r_esp -= 4; W32(r_esp, 0x53e5dcu); f_0053e548();
    /* 0053e5dc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e5de: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e5e0: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53e5e5u); f_0051f664();
    /* 0053e5e5: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0053e5eb: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053e5ed: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053e5f2: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0053e5f8: mov ecx, edi */ r_ecx = r_edi;
    /* 0053e5fa: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x53e600u); call_ind(t); }
    /* 0053e600: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0053e603: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e608: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0053e60b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053e60c: ret 4 */ FN_RET(0x0053e56c); r_esp += 8; return;
}

void f_0053e610(void) /* sub_53E610 */
{
    FN_ENTER(0x0053e610);
    /* 0053e610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053e611: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e612: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053e615: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053e617: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0053e61b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e61e: je 0x53e63e */ if (fZ) goto L_0053e63e;
L_0053e620:; BB(0x0053e620);
    /* 0053e620: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e623: je 0x53e636 */ if (fZ) goto L_0053e636;
L_0053e625:; BB(0x0053e625);
    /* 0053e625: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e627: jne 0x53e636 */ if (!fZ) goto L_0053e636;
L_0053e629:; BB(0x0053e629);
    /* 0053e629: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0053e62d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053e632: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_0053e636:; BB(0x0053e636);
    /* 0053e636: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053e639: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e63a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053e63b: ret 4 */ FN_RET(0x0053e610); r_esp += 8; return;
L_0053e63e:; BB(0x0053e63e);
    /* 0053e63e: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0053e644: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e647: je 0x53e6d2 */ if (fZ) goto L_0053e6d2;
L_0053e64d:; BB(0x0053e64d);
    /* 0053e64d: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053e650: lea ebx, [ebp + 0x300] */ r_ebx = (u32)(r_ebp+0x300u);
    /* 0053e656: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e657: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053e65a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e65c: push dword ptr [0xa73768] */ { u32 v = R32((u32)(0xa73768u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053e662: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x53e667u); f_00578aa0();
    /* 0053e667: fld dword ptr [0x923720] */ FPUSH(R_F32((u32)(0x923720u)));
    /* 0053e66d: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0053e673: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053e678: mov edx, dword ptr [ebp + 0x300] */ r_edx = R32((u32)(r_ebp+0x300u));
    /* 0053e67e: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0053e684: mov eax, dword ptr [ebp + 0x304] */ r_eax = R32((u32)(r_ebp+0x304u));
    /* 0053e68a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0053e68e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0053e692: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0053e696: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 0053e69c: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0053e6a0: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0053e6a4: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0053e6a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e6a9: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x53e6aeu); f_005787d0();
    /* 0053e6ae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e6b1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053e6b3: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x53e6b8u); f_0051f894();
    /* 0053e6b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053e6ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e6bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e6bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e6bd: push 0x143 */ { u32 v = 0x143u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e6c2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x53e6c7u); f_00814298();
    /* 0053e6c7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e6ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053e6cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e6ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053e6cf: ret 4 */ FN_RET(0x0053e610); r_esp += 8; return;
L_0053e6d2:; BB(0x0053e6d2);
    /* 0053e6d2: movzx eax, word ptr [ebp + 0x4d0] */ r_eax = (u32)R16((u32)(r_ebp+0x4d0u));
    /* 0053e6d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e6da: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x53e6dfu); f_007b4d18();
    /* 0053e6df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053e6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053e6e1: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0053e6e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053e6e9: mov ecx, eax */ r_ecx = r_eax;
    /* 0053e6eb: call dword ptr [edx + 0x1dc] */ { u32 t = R32((u32)(r_edx+0x1dcu)); r_esp -= 4; W32(r_esp, 0x53e6f1u); call_ind(t); }
    /* 0053e6f1: jmp 0x53e64d */ goto L_0053e64d;
}

void f_0053e6f8(void) /* sub_53E6F8 */
{
    FN_ENTER(0x0053e6f8);
    /* 0053e6f8: mov edx, dword ptr [0xa7375c] */ r_edx = R32((u32)(0xa7375cu));
    /* 0053e6fe: mov eax, dword ptr [ecx + 0x4bc] */ r_eax = R32((u32)(r_ecx+0x4bcu));
    /* 0053e704: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0053e706: mov eax, dword ptr [ecx + 0x4bc] */ r_eax = R32((u32)(r_ecx+0x4bcu));
    /* 0053e70c: mov edx, dword ptr [0xa73758] */ r_edx = R32((u32)(0xa73758u));
    /* 0053e712: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0053e714: ret  */ FN_RET(0x0053e6f8); r_esp += 4; return;
}

void f_0053e718(void)
{
    FN_ENTER(0x0053e718);
    /* 0053e718: mov ecx, dword ptr [0xa73768] */ r_ecx = R32((u32)(0xa73768u));
    /* 0053e71e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e720: je 0x53e734 */ if (fZ) goto L_0053e734;
L_0053e722:; BB(0x0053e722);
    /* 0053e722: je 0x53e72a */ if (fZ) goto L_0053e72a;
L_0053e724:; BB(0x0053e724);
    /* 0053e724: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e726: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053e728: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x53e72au); call_ind(t); }
L_0053e72a:; BB(0x0053e72a);
    /* 0053e72a: mov dword ptr [0xa73768], 0 */ W32((u32)(0xa73768u), 0x0u);
L_0053e734:; BB(0x0053e734);
    /* 0053e734: mov ecx, dword ptr [0xa7376c] */ r_ecx = R32((u32)(0xa7376cu));
    /* 0053e73a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e73c: je 0x53e750 */ if (fZ) goto L_0053e750;
L_0053e73e:; BB(0x0053e73e);
    /* 0053e73e: je 0x53e746 */ if (fZ) goto L_0053e746;
L_0053e740:; BB(0x0053e740);
    /* 0053e740: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e742: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053e744: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x53e746u); call_ind(t); }
L_0053e746:; BB(0x0053e746);
    /* 0053e746: mov dword ptr [0xa7376c], 0 */ W32((u32)(0xa7376cu), 0x0u);
L_0053e750:; BB(0x0053e750);
    /* 0053e750: mov ecx, dword ptr [0xa73724] */ r_ecx = R32((u32)(0xa73724u));
    /* 0053e756: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e758: je 0x53e76d */ if (fZ) goto L_0053e76d;
L_0053e75a:; BB(0x0053e75a);
    /* 0053e75a: je 0x53e763 */ if (fZ) goto L_0053e763;
L_0053e75c:; BB(0x0053e75c);
    /* 0053e75c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e75e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x53e763u); f_004066a8();
L_0053e763:; BB(0x0053e763);
    /* 0053e763: mov dword ptr [0xa73724], 0 */ W32((u32)(0xa73724u), 0x0u);
L_0053e76d:; BB(0x0053e76d);
    /* 0053e76d: ret  */ FN_RET(0x0053e718); r_esp += 4; return;
}

void f_0053e770(void)
{
    FN_ENTER(0x0053e770);
    /* 0053e770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053e771: mov ebp, esp */ r_ebp = r_esp;
    /* 0053e773: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053e775: push 0x8d5524 */ { u32 v = 0x8d5524u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e77a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053e780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e781: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053e788: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053e78b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053e78e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0053e791: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0053e794: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0053e797: push 0x4d4 */ { u32 v = 0x4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e79c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0053e7a3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x53e7a8u); f_005caba4();
    /* 0053e7a8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053e7ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053e7ae: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053e7b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e7b3: je 0x53e851 */ if (fZ) goto L_0053e851;
L_0053e7b9:; BB(0x0053e7b9);
    /* 0053e7b9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0053e7c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053e7c7: mov ecx, eax */ r_ecx = r_eax;
    /* 0053e7c9: mov eax, dword ptr [0xaca360] */ r_eax = R32((u32)(0xaca360u));
    /* 0053e7ce: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0053e7d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e7d2: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0053e7d5: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x53e7dau); f_005216f4();
    /* 0053e7da: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053e7e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053e7e4: mov dword ptr [eax], 0xb02be0 */ W32((u32)(r_eax), 0xb02be0u);
    /* 0053e7ea: lea ecx, [eax + 0x3d4] */ r_ecx = (u32)(r_eax+0x3d4u);
    /* 0053e7f0: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x53e7f5u); f_00576a48();
    /* 0053e7f5: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053e7fc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053e7ff: mov eax, dword ptr [0x9bcea8] */ r_eax = R32((u32)(0x9bcea8u));
    /* 0053e804: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053e807: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0053e80a: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x53e80fu); f_0051f750();
    /* 0053e80f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053e812: mov dword ptr [ecx + 0x3d0], 0 */ W32((u32)(r_ecx+0x3d0u), 0x0u);
    /* 0053e81c: call 0x53e858 */ r_esp -= 4; W32(r_esp, 0x53e821u); f_0053e858();
    /* 0053e821: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053e824: mov dword ptr [ecx + 0x3cc], 0 */ W32((u32)(r_ecx+0x3ccu), 0x0u);
    /* 0053e82e: mov dword ptr [ecx + 0x3c8], ecx */ W32((u32)(r_ecx+0x3c8u), r_ecx);
    /* 0053e834: call 0x5424d8 */ r_esp -= 4; W32(r_esp, 0x53e839u); f_005424d8();
    /* 0053e839: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0053e840:; BB(0x0053e840);
    /* 0053e840: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053e843: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053e846: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053e84d: mov esp, ebp */ r_esp = r_ebp;
    /* 0053e84f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053e850: ret  */ FN_RET(0x0053e770); r_esp += 4; return;
L_0053e851:; BB(0x0053e851);
    /* 0053e851: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e853: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053e856: jmp 0x53e840 */ goto L_0053e840;
}

void f_0053e858(void) /* sub_53E858 */
{
    FN_ENTER(0x0053e858);
    /* 0053e858: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053e85b: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 0053e861: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053e864: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053e868: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053e86d: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053e872: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053e876: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053e87a: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053e87e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053e881: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0053e885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e887: jne 0x53e892 */ if (!fZ) goto L_0053e892;
L_0053e889:; BB(0x0053e889);
    /* 0053e889: call 0x53e8b4 */ r_esp -= 4; W32(r_esp, 0x53e88eu); f_0053e8b4();
    /* 0053e88e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053e891: ret  */ FN_RET(0x0053e858); r_esp += 4; return;
L_0053e892:; BB(0x0053e892);
    /* 0053e892: call 0x53e89c */ r_esp -= 4; W32(r_esp, 0x53e897u); f_0053e89c();
    /* 0053e897: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053e89a: ret  */ FN_RET(0x0053e858); r_esp += 4; return;
}

void f_0053e89c(void) /* sub_53E89C */
{
    FN_ENTER(0x0053e89c);
    /* 0053e89c: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0053e8a2: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053e8a7: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e8ac: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0053e8b2: ret  */ FN_RET(0x0053e89c); r_esp += 4; return;
}

void f_0053e8b4(void) /* sub_53E8B4 */
{
    FN_ENTER(0x0053e8b4);
    /* 0053e8b4: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0053e8ba: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053e8bf: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e8c4: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0053e8ca: ret  */ FN_RET(0x0053e8b4); r_esp += 4; return;
}

void f_0053e8cc(void) /* sub_53E8CC */
{
    FN_ENTER(0x0053e8cc);
    /* 0053e8cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053e8cd: mov esi, ecx */ r_esi = r_ecx;
    /* 0053e8cf: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x53e8d4u); f_004f7c84();
    /* 0053e8d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e8d6: jne 0x53e91d */ if (!fZ) goto L_0053e91d;
L_0053e8d8:; BB(0x0053e8d8);
    /* 0053e8d8: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0053e8de: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e8e1: je 0x53e929 */ if (fZ) goto L_0053e929;
L_0053e8e3:; BB(0x0053e8e3);
    /* 0053e8e3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053e8e5: mov ecx, esi */ r_ecx = r_esi;
    /* 0053e8e7: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x53e8edu); call_ind(t); }
    /* 0053e8ed: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e8f0: je 0x53e903 */ if (fZ) goto L_0053e903;
L_0053e8f2:; BB(0x0053e8f2);
    /* 0053e8f2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053e8f4: mov ecx, esi */ r_ecx = r_esi;
    /* 0053e8f6: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x53e8fcu); call_ind(t); }
    /* 0053e8fc: mov ecx, esi */ r_ecx = r_esi;
    /* 0053e8fe: call 0x53e95c */ r_esp -= 4; W32(r_esp, 0x53e903u); f_0053e95c();
L_0053e903:; BB(0x0053e903);
    /* 0053e903: mov ecx, esi */ r_ecx = r_esi;
    /* 0053e905: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x53e90au); f_0055ce28();
    /* 0053e90a: mov ecx, esi */ r_ecx = r_esi;
    /* 0053e90c: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x53e911u); f_006401f0();
    /* 0053e911: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053e913: mov ecx, esi */ r_ecx = r_esi;
    /* 0053e915: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x53e91bu); call_ind(t); }
    /* 0053e91b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053e91c: ret  */ FN_RET(0x0053e8cc); r_esp += 4; return;
L_0053e91d:; BB(0x0053e91d);
    /* 0053e91d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053e91f: mov ecx, esi */ r_ecx = r_esi;
    /* 0053e921: call dword ptr [eax + 0x1d0] */ { u32 t = R32((u32)(r_eax+0x1d0u)); r_esp -= 4; W32(r_esp, 0x53e927u); call_ind(t); }
    /* 0053e927: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053e928: ret  */ FN_RET(0x0053e8cc); r_esp += 4; return;
L_0053e929:; BB(0x0053e929);
    /* 0053e929: movzx eax, word ptr [esi + 0x4d0] */ r_eax = (u32)R16((u32)(r_esi+0x4d0u));
    /* 0053e930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e931: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x53e936u); f_007b4d18();
    /* 0053e936: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053e937: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0053e93d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e93f: je 0x53e94c */ if (fZ) goto L_0053e94c;
L_0053e941:; BB(0x0053e941);
    /* 0053e941: mov ecx, eax */ r_ecx = r_eax;
    /* 0053e943: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x53e948u); f_008173b4();
    /* 0053e948: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e94a: jne 0x53e8e3 */ if (!fZ) goto L_0053e8e3;
L_0053e94c:; BB(0x0053e94c);
    /* 0053e94c: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0053e950: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053e955: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0053e959: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053e95a: ret  */ FN_RET(0x0053e8cc); r_esp += 4; return;
}

void f_0053e95c(void) /* sub_53E95C */
{
    FN_ENTER(0x0053e95c);
    /* 0053e95c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053e95d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e95e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053e961: mov eax, dword ptr [ecx + 0x4c0] */ r_eax = R32((u32)(r_ecx+0x4c0u));
    /* 0053e967: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e969: je 0x53eac2 */ if (fZ) goto L_0053eac2;
L_0053e96f:; BB(0x0053e96f);
    /* 0053e96f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e972: je 0x53ea88 */ if (fZ) goto L_0053ea88;
L_0053e978:; BB(0x0053e978);
    /* 0053e978: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e97b: jne 0x53e9c0 */ if (!fZ) goto L_0053e9c0;
L_0053e97d:; BB(0x0053e97d);
    /* 0053e97d: fld dword ptr [ecx + 0x4ac] */ FPUSH(R_F32((u32)(r_ecx+0x4acu)));
    /* 0053e983: fcom dword ptr [0x92370c] */ fx_compare(ST(0), R_F32((u32)(0x92370cu))); 
    /* 0053e989: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053e98b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053e98c: jae 0x53e99e */ if (!fC) goto L_0053e99e;
L_0053e98e:; BB(0x0053e98e);
    /* 0053e98e: fld dword ptr [0x923700] */ FPUSH(R_F32((u32)(0x923700u)));
    /* 0053e994: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053e996: fstp dword ptr [ecx + 0x4ac] */ W_F32((u32)(r_ecx+0x4acu), ST(0)); FPOP();
    /* 0053e99c: jmp 0x53e9b5 */ goto L_0053e9b5;
L_0053e99e:; BB(0x0053e99e);
    /* 0053e99e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053e9a0: mov dword ptr [ecx + 0x4c0], 0 */ W32((u32)(r_ecx+0x4c0u), 0x0u);
    /* 0053e9aa: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0053e9af: mov dword ptr [ecx + 0x4ac], eax */ W32((u32)(r_ecx+0x4acu), r_eax);
L_0053e9b5:; BB(0x0053e9b5);
    /* 0053e9b5: call 0x53eac8 */ r_esp -= 4; W32(r_esp, 0x53e9bau); f_0053eac8();
    /* 0053e9ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053e9bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e9be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053e9bf: ret  */ FN_RET(0x0053e95c); r_esp += 4; return;
L_0053e9c0:; BB(0x0053e9c0);
    /* 0053e9c0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053e9c3: jne 0x53eac2 */ if (!fZ) goto L_0053eac2;
L_0053e9c9:; BB(0x0053e9c9);
    /* 0053e9c9: mov edx, dword ptr [ecx + 0x4c8] */ r_edx = R32((u32)(r_ecx+0x4c8u));
    /* 0053e9cf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053e9d2: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0053e9d5: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0053e9d8: fcomp dword ptr [0x923704] */ fx_compare(ST(0), R_F32((u32)(0x923704u))); FPOP();
    /* 0053e9de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053e9e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053e9e1: jb 0x53ea7c */ if (fC) goto L_0053ea7c;
L_0053e9e7:; BB(0x0053e9e7);
    /* 0053e9e7: mov ebp, dword ptr [ecx + 0x4cc] */ r_ebp = R32((u32)(r_ecx+0x4ccu));
    /* 0053e9ed: mov edx, dword ptr [ecx + 0x4c4] */ r_edx = R32((u32)(r_ecx+0x4c4u));
    /* 0053e9f3: mov ebx, dword ptr [edx*4 + 0x9bcf20] */ r_ebx = R32((u32)(r_edx*4+0x9bcf20u));
    /* 0053e9fa: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 0053e9fd: mov dword ptr [ecx + 0x4cc], eax */ W32((u32)(r_ecx+0x4ccu), r_eax);
    /* 0053ea03: mov dword ptr [ecx + 0x4c8], 0 */ W32((u32)(r_ecx+0x4c8u), 0x0u);
    /* 0053ea0d: movsx eax, byte ptr [ebx + ebp] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp));
    /* 0053ea11: cmp eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ea14: je 0x53ea67 */ if (fZ) goto L_0053ea67;
L_0053ea16:; BB(0x0053ea16);
    /* 0053ea16: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ea19: jne 0x53ea56 */ if (!fZ) goto L_0053ea56;
L_0053ea1b:; BB(0x0053ea1b);
    /* 0053ea1b: mov dword ptr [ecx + 0x4c0], 0 */ W32((u32)(r_ecx+0x4c0u), 0x0u);
    /* 0053ea25: mov eax, dword ptr [0x923728] */ r_eax = R32((u32)(0x923728u));
    /* 0053ea2a: mov edx, dword ptr [0x92372c] */ r_edx = R32((u32)(0x92372cu));
    /* 0053ea30: mov ebx, dword ptr [0x923730] */ r_ebx = R32((u32)(0x923730u));
    /* 0053ea36: mov ebp, dword ptr [0x923734] */ r_ebp = R32((u32)(0x923734u));
    /* 0053ea3c: mov dword ptr [ecx + 0x4ac], eax */ W32((u32)(r_ecx+0x4acu), r_eax);
    /* 0053ea42: mov dword ptr [ecx + 0x4b0], edx */ W32((u32)(r_ecx+0x4b0u), r_edx);
    /* 0053ea48: mov dword ptr [ecx + 0x4b4], ebx */ W32((u32)(r_ecx+0x4b4u), r_ebx);
    /* 0053ea4e: mov dword ptr [ecx + 0x4b8], ebp */ W32((u32)(r_ecx+0x4b8u), r_ebp);
    /* 0053ea54: jmp 0x53ea71 */ goto L_0053ea71;
L_0053ea56:; BB(0x0053ea56);
    /* 0053ea56: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ea59: jne 0x53ea71 */ if (!fZ) goto L_0053ea71;
L_0053ea5b:; BB(0x0053ea5b);
    /* 0053ea5b: mov dword ptr [ecx + 0x4ac], 0x3f800000 */ W32((u32)(r_ecx+0x4acu), 0x3f800000u);
    /* 0053ea65: jmp 0x53ea71 */ goto L_0053ea71;
L_0053ea67:; BB(0x0053ea67);
    /* 0053ea67: mov dword ptr [ecx + 0x4ac], 0 */ W32((u32)(r_ecx+0x4acu), 0x0u);
L_0053ea71:; BB(0x0053ea71);
    /* 0053ea71: call 0x53eac8 */ r_esp -= 4; W32(r_esp, 0x53ea76u); f_0053eac8();
    /* 0053ea76: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053ea79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053ea7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ea7b: ret  */ FN_RET(0x0053e95c); r_esp += 4; return;
L_0053ea7c:; BB(0x0053ea7c);
    /* 0053ea7c: mov dword ptr [ecx + 0x4c8], edx */ W32((u32)(r_ecx+0x4c8u), r_edx);
    /* 0053ea82: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053ea85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053ea86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ea87: ret  */ FN_RET(0x0053e95c); r_esp += 4; return;
L_0053ea88:; BB(0x0053ea88);
    /* 0053ea88: fld dword ptr [ecx + 0x4ac] */ FPUSH(R_F32((u32)(r_ecx+0x4acu)));
    /* 0053ea8e: fcom dword ptr [0x923708] */ fx_compare(ST(0), R_F32((u32)(0x923708u))); 
    /* 0053ea94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053ea96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ea97: jbe 0x53eaa9 */ if ((fC||fZ)) goto L_0053eaa9;
L_0053ea99:; BB(0x0053ea99);
    /* 0053ea99: fld dword ptr [0x923700] */ FPUSH(R_F32((u32)(0x923700u)));
    /* 0053ea9f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0053eaa1: fstp dword ptr [ecx + 0x4ac] */ W_F32((u32)(r_ecx+0x4acu), ST(0)); FPOP();
    /* 0053eaa7: jmp 0x53eabd */ goto L_0053eabd;
L_0053eaa9:; BB(0x0053eaa9);
    /* 0053eaa9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053eaab: mov dword ptr [ecx + 0x4c0], 0 */ W32((u32)(r_ecx+0x4c0u), 0x0u);
    /* 0053eab5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053eab7: mov dword ptr [ecx + 0x4ac], eax */ W32((u32)(r_ecx+0x4acu), r_eax);
L_0053eabd:; BB(0x0053eabd);
    /* 0053eabd: call 0x53eac8 */ r_esp -= 4; W32(r_esp, 0x53eac2u); f_0053eac8();
L_0053eac2:; BB(0x0053eac2);
    /* 0053eac2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053eac5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053eac6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053eac7: ret  */ FN_RET(0x0053e95c); r_esp += 4; return;
}

void f_0053eac8(void) /* sub_53EAC8 */
{
    FN_ENTER(0x0053eac8);
    /* 0053eac8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053eacb: fld dword ptr [0x9236fc] */ FPUSH(R_F32((u32)(0x9236fcu)));
    /* 0053ead1: fld dword ptr [ecx + 0x4b4] */ FPUSH(R_F32((u32)(r_ecx+0x4b4u)));
    /* 0053ead7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0053ead9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053eadc: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053eae0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053eae5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053eae9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053eaed: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0053eaf1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053eaf4: fld dword ptr [ecx + 0x4b8] */ FPUSH(R_F32((u32)(r_ecx+0x4b8u)));
    /* 0053eafa: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0053eafc: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0053eb00: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053eb03: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053eb07: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053eb0c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053eb10: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053eb14: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0053eb18: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053eb1b: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0053eb20: fld dword ptr [ecx + 0x4ac] */ FPUSH(R_F32((u32)(r_ecx+0x4acu)));
    /* 0053eb26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0053eb28: fmul dword ptr [0x9236f8] */ ST(0) = ST(0) * R_F32((u32)(0x9236f8u));
    /* 0053eb2e: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0053eb31: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053eb34: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053eb36: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053eb39: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053eb3d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053eb42: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053eb46: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053eb4a: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0053eb4e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053eb51: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0053eb56: fld dword ptr [ecx + 0x4b0] */ FPUSH(R_F32((u32)(r_ecx+0x4b0u)));
    /* 0053eb5c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0053eb5e: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053eb61: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053eb63: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053eb66: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053eb6a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053eb6f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053eb73: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053eb77: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0053eb7b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053eb7e: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0053eb83: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053eb85: mov dword ptr [ecx + 0x4bc], edx */ W32((u32)(r_ecx+0x4bcu), r_edx);
    /* 0053eb8b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053eb8e: ret  */ FN_RET(0x0053eac8); r_esp += 4; return;
}

void f_0053eb90(void) /* sub_53EB90 */
{
    FN_ENTER(0x0053eb90);
    /* 0053eb90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053eb91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053eb92: mov edi, ecx */ r_edi = r_ecx;
    /* 0053eb94: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x53eb99u); f_004f7c84();
    /* 0053eb99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eb9b: jne 0x53edfe */ if (!fZ) goto L_0053edfe;
L_0053eba1:; BB(0x0053eba1);
    /* 0053eba1: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0053eba7: test eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053ebac: jne 0x53ed4b */ if (!fZ) goto L_0053ed4b;
L_0053ebb2:; BB(0x0053ebb2);
    /* 0053ebb2: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x53ebb7u); f_00694cc8();
    /* 0053ebb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ebb9: je 0x53ebde */ if (fZ) goto L_0053ebde;
L_0053ebbb:; BB(0x0053ebbb);
    /* 0053ebbb: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ebc0: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ebc2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053ebc4: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053ebca: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053ebd0: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x53ebd3u); call_ind(t); }
    /* 0053ebd3: mov ebp, eax */ r_ebp = r_eax;
    /* 0053ebd5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053ebd7: jne 0x53ebfc */ if (!fZ) goto L_0053ebfc;
L_0053ebd9:; BB(0x0053ebd9);
    /* 0053ebd9: jmp 0x53ed4b */ goto L_0053ed4b;
L_0053ebde:; BB(0x0053ebde);
    /* 0053ebde: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ebe3: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ebe5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053ebe7: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ebec: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x53ebefu); call_ind(t); }
    /* 0053ebef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053ebf1: je 0x53ed4b */ if (fZ) goto L_0053ed4b;
L_0053ebf7:; BB(0x0053ebf7);
    /* 0053ebf7: mov ebp, 1 */ r_ebp = 0x1u;
L_0053ebfc:; BB(0x0053ebfc);
    /* 0053ebfc: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0053ec02: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ec08: je 0x53ec15 */ if (fZ) goto L_0053ec15;
L_0053ec0a:; BB(0x0053ec0a);
    /* 0053ec0a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053ec0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ec0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ec0e: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ec10: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x53ec15u); f_00520cf8();
L_0053ec15:; BB(0x0053ec15);
    /* 0053ec15: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ec17: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x53ec1cu); f_00520608();
    /* 0053ec1c: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0053ec1f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x53ec24u); f_00829cc8();
    /* 0053ec24: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0053ec2a: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0053ec30: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x53ec35u); f_00520d08();
    /* 0053ec35: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x53ec3au); f_00578b38();
    /* 0053ec3a: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053ec3c: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ec3e: call dword ptr [edx + 0x1cc] */ { u32 t = R32((u32)(r_edx+0x1ccu)); r_esp -= 4; W32(r_esp, 0x53ec44u); call_ind(t); }
    /* 0053ec44: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x53ec49u); f_0082d7b0();
    /* 0053ec49: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0053ec4c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x53ec51u); f_0082d838();
    /* 0053ec51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ec53: push dword ptr [edi + 0x3fc] */ { u32 v = R32((u32)(r_edi+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053ec59: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053ec5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ec5d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x53ec62u); f_00830b74();
    /* 0053ec62: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0053ec65: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053ec67: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x53ec6cu); f_0082d8bc();
    /* 0053ec6c: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0053ec73: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ec76: je 0x53ee9f */ if (fZ) goto L_0053ee9f;
L_0053ec7c:; BB(0x0053ec7c);
    /* 0053ec7c: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ec7f: je 0x53ee9f */ if (fZ) goto L_0053ee9f;
L_0053ec85:; BB(0x0053ec85);
    /* 0053ec85: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ec88: je 0x53ee17 */ if (fZ) goto L_0053ee17;
L_0053ec8e:; BB(0x0053ec8e);
    /* 0053ec8e: mov dword ptr [0xa73774], 0 */ W32((u32)(0xa73774u), 0x0u);
    /* 0053ec98: lea edx, [edi + 0x41c] */ r_edx = (u32)(r_edi+0x41cu);
    /* 0053ec9e: mov ecx, 0x53e1c8 */ r_ecx = 0x53e1c8u;
    /* 0053eca3: mov dword ptr [0xa73770], edx */ W32((u32)(0xa73770u), r_edx);
    /* 0053eca9: mov edx, dword ptr [0x9236e0] */ r_edx = R32((u32)(0x9236e0u));
    /* 0053ecaf: mov dword ptr [edi + 0x440], edx */ W32((u32)(r_edi+0x440u), r_edx);
    /* 0053ecb5: mov edx, dword ptr [0x9236e4] */ r_edx = R32((u32)(0x9236e4u));
    /* 0053ecbb: mov dword ptr [edi + 0x444], edx */ W32((u32)(r_edi+0x444u), r_edx);
    /* 0053ecc1: mov edx, dword ptr [0x9236e8] */ r_edx = R32((u32)(0x9236e8u));
    /* 0053ecc7: mov dword ptr [edi + 0x448], edx */ W32((u32)(r_edi+0x448u), r_edx);
    /* 0053eccd: mov edx, dword ptr [0x9236d4] */ r_edx = R32((u32)(0x9236d4u));
    /* 0053ecd3: mov dword ptr [edi + 0x428], edx */ W32((u32)(r_edi+0x428u), r_edx);
    /* 0053ecd9: mov edx, dword ptr [0x9236d8] */ r_edx = R32((u32)(0x9236d8u));
    /* 0053ecdf: mov dword ptr [edi + 0x42c], edx */ W32((u32)(r_edi+0x42cu), r_edx);
    /* 0053ece5: mov edx, dword ptr [0x9236dc] */ r_edx = R32((u32)(0x9236dcu));
    /* 0053eceb: mov dword ptr [edi + 0x430], edx */ W32((u32)(r_edi+0x430u), r_edx);
    /* 0053ecf1: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x53ecf6u); f_0082fac4();
    /* 0053ecf6: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ecf9: je 0x53ee0b */ if (fZ) goto L_0053ee0b;
L_0053ecff:; BB(0x0053ecff);
    /* 0053ecff: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ed01: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x53ed06u); f_007aa7b8();
L_0053ed06:; BB(0x0053ed06);
    /* 0053ed06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053ed08: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x53ed0du); f_0082fac4();
L_0053ed0d:; BB(0x0053ed0d);
    /* 0053ed0d: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0053ed14: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ed17: je 0x53ed1e */ if (fZ) goto L_0053ed1e;
L_0053ed19:; BB(0x0053ed19);
    /* 0053ed19: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ed1c: jne 0x53ed2d */ if (!fZ) goto L_0053ed2d;
L_0053ed1e:; BB(0x0053ed1e);
    /* 0053ed1e: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0053ed24: lea ecx, [edi + 0x3d4] */ r_ecx = (u32)(r_edi+0x3d4u);
    /* 0053ed2a: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x53ed2du); call_ind(t); }
L_0053ed2d:; BB(0x0053ed2d);
    /* 0053ed2d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x53ed32u); f_0082da80();
    /* 0053ed32: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x53ed37u); f_0082dab0();
    /* 0053ed37: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0053ed3c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0053ed41: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ed43: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x53ed48u); f_00520610();
    /* 0053ed48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ed49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053ed4a: ret  */ FN_RET(0x0053eb90); r_esp += 4; return;
L_0053ed4b:; BB(0x0053ed4b);
    /* 0053ed4b: mov eax, dword ptr [0x9236e0] */ r_eax = R32((u32)(0x9236e0u));
    /* 0053ed50: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 0053ed56: mov edx, dword ptr [0x9236e4] */ r_edx = R32((u32)(0x9236e4u));
    /* 0053ed5c: mov dword ptr [edi + 0x444], edx */ W32((u32)(r_edi+0x444u), r_edx);
    /* 0053ed62: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 0053ed68: mov ebp, dword ptr [0x9236e8] */ r_ebp = R32((u32)(0x9236e8u));
    /* 0053ed6e: mov dword ptr [edi + 0x448], ebp */ W32((u32)(r_edi+0x448u), r_ebp);
    /* 0053ed74: mov eax, dword ptr [0x9236d4] */ r_eax = R32((u32)(0x9236d4u));
    /* 0053ed79: mov ebp, dword ptr [edi + 0x308] */ r_ebp = R32((u32)(r_edi+0x308u));
    /* 0053ed7f: mov dword ptr [edi + 0x428], eax */ W32((u32)(r_edi+0x428u), r_eax);
    /* 0053ed85: mov eax, dword ptr [0x9236d8] */ r_eax = R32((u32)(0x9236d8u));
    /* 0053ed8a: mov dword ptr [edi + 0x42c], eax */ W32((u32)(r_edi+0x42cu), r_eax);
    /* 0053ed90: mov eax, dword ptr [0x9236dc] */ r_eax = R32((u32)(0x9236dcu));
    /* 0053ed95: mov dword ptr [edi + 0x430], eax */ W32((u32)(r_edi+0x430u), r_eax);
    /* 0053ed9b: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0053eda1: mov dword ptr [edi + 0x434], eax */ W32((u32)(r_edi+0x434u), r_eax);
    /* 0053eda7: mov dword ptr [edi + 0x438], edx */ W32((u32)(r_edi+0x438u), r_edx);
    /* 0053edad: mov dword ptr [edi + 0x43c], ebp */ W32((u32)(r_edi+0x43cu), r_ebp);
    /* 0053edb3: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 0053edb9: mov dword ptr [edi + 0x420], edx */ W32((u32)(r_edi+0x420u), r_edx);
    /* 0053edbf: mov dword ptr [edi + 0x424], ebp */ W32((u32)(r_edi+0x424u), r_ebp);
    /* 0053edc5: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 0053edcb: mov dword ptr [edi + 0x450], edx */ W32((u32)(r_edi+0x450u), r_edx);
    /* 0053edd1: mov dword ptr [edi + 0x454], ebp */ W32((u32)(r_edi+0x454u), r_ebp);
    /* 0053edd7: mov dword ptr [edi + 0x458], eax */ W32((u32)(r_edi+0x458u), r_eax);
    /* 0053eddd: mov dword ptr [edi + 0x45c], edx */ W32((u32)(r_edi+0x45cu), r_edx);
    /* 0053ede3: mov dword ptr [edi + 0x460], ebp */ W32((u32)(r_edi+0x460u), r_ebp);
    /* 0053ede9: mov dword ptr [edi + 0x464], eax */ W32((u32)(r_edi+0x464u), r_eax);
    /* 0053edef: mov dword ptr [edi + 0x468], edx */ W32((u32)(r_edi+0x468u), r_edx);
    /* 0053edf5: mov dword ptr [edi + 0x46c], ebp */ W32((u32)(r_edi+0x46cu), r_ebp);
    /* 0053edfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053edfc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053edfd: ret  */ FN_RET(0x0053eb90); r_esp += 4; return;
L_0053edfe:; BB(0x0053edfe);
    /* 0053edfe: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053ee00: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ee02: call dword ptr [eax + 0x1d4] */ { u32 t = R32((u32)(r_eax+0x1d4u)); r_esp -= 4; W32(r_esp, 0x53ee08u); call_ind(t); }
    /* 0053ee08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ee09: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053ee0a: ret  */ FN_RET(0x0053eb90); r_esp += 4; return;
L_0053ee0b:; BB(0x0053ee0b);
    /* 0053ee0b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ee0d: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x53ee12u); f_007aa668();
    /* 0053ee12: jmp 0x53ed06 */ goto L_0053ed06;
L_0053ee17:; BB(0x0053ee17);
    /* 0053ee17: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 0053ee1a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053ee1c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x53ee21u); f_00830c04();
    /* 0053ee21: mov edx, dword ptr [0x9236e0] */ r_edx = R32((u32)(0x9236e0u));
    /* 0053ee27: mov dword ptr [0xa73774], 0xffffffff */ W32((u32)(0xa73774u), 0xffffffffu);
    /* 0053ee31: lea eax, [edi + 0x41c] */ r_eax = (u32)(r_edi+0x41cu);
    /* 0053ee37: mov ecx, 0x53e1c8 */ r_ecx = 0x53e1c8u;
    /* 0053ee3c: mov dword ptr [0xa73770], eax */ W32((u32)(0xa73770u), r_eax);
    /* 0053ee41: mov dword ptr [edi + 0x440], edx */ W32((u32)(r_edi+0x440u), r_edx);
    /* 0053ee47: mov ebp, dword ptr [0x9236e4] */ r_ebp = R32((u32)(0x9236e4u));
    /* 0053ee4d: mov dword ptr [edi + 0x444], ebp */ W32((u32)(r_edi+0x444u), r_ebp);
    /* 0053ee53: mov eax, dword ptr [0x9236e8] */ r_eax = R32((u32)(0x9236e8u));
    /* 0053ee58: mov dword ptr [edi + 0x448], eax */ W32((u32)(r_edi+0x448u), r_eax);
    /* 0053ee5e: mov eax, dword ptr [0x9236d4] */ r_eax = R32((u32)(0x9236d4u));
    /* 0053ee63: mov dword ptr [edi + 0x428], eax */ W32((u32)(r_edi+0x428u), r_eax);
    /* 0053ee69: mov eax, dword ptr [0x9236d8] */ r_eax = R32((u32)(0x9236d8u));
    /* 0053ee6e: mov dword ptr [edi + 0x42c], eax */ W32((u32)(r_edi+0x42cu), r_eax);
    /* 0053ee74: mov eax, dword ptr [0x9236dc] */ r_eax = R32((u32)(0x9236dcu));
    /* 0053ee79: mov dword ptr [edi + 0x430], eax */ W32((u32)(r_edi+0x430u), r_eax);
    /* 0053ee7f: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x53ee84u); f_0082fac4();
    /* 0053ee84: push dword ptr [edi + 0x418] */ { u32 v = R32((u32)(r_edi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053ee8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053ee8b: call 0x52d2b0 */ r_esp -= 4; W32(r_esp, 0x53ee90u); f_0052d2b0();
    /* 0053ee90: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ee93: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053ee95: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x53ee9au); f_0082fac4();
    /* 0053ee9a: jmp 0x53ed0d */ goto L_0053ed0d;
L_0053ee9f:; BB(0x0053ee9f);
    /* 0053ee9f: mov edx, dword ptr [edi + 0x3d4] */ r_edx = R32((u32)(r_edi+0x3d4u));
    /* 0053eea5: lea ecx, [edi + 0x3d4] */ r_ecx = (u32)(r_edi+0x3d4u);
    /* 0053eeab: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x53eeaeu); call_ind(t); }
    /* 0053eeae: mov ecx, edi */ r_ecx = r_edi;
    /* 0053eeb0: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x53eeb5u); f_008173d0();
    /* 0053eeb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eeb7: jne 0x53ed0d */ if (!fZ) goto L_0053ed0d;
L_0053eebd:; BB(0x0053eebd);
    /* 0053eebd: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0053eec4: jmp 0x53ec85 */ goto L_0053ec85;
}

void f_0053eecc(void) /* sub_53EECC */
{
    FN_ENTER(0x0053eecc);
    /* 0053eecc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053eecd: mov edi, ecx */ r_edi = r_ecx;
    /* 0053eecf: mov ecx, edi */ r_ecx = r_edi;
    /* 0053eed1: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x53eed6u); f_0051f814();
    /* 0053eed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053eed8: je 0x53eee1 */ if (fZ) goto L_0053eee1;
L_0053eeda:; BB(0x0053eeda);
    /* 0053eeda: mov ecx, edi */ r_ecx = r_edi;
    /* 0053eedc: call 0x53e858 */ r_esp -= 4; W32(r_esp, 0x53eee1u); f_0053e858();
L_0053eee1:; BB(0x0053eee1);
    /* 0053eee1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053eee2: ret  */ FN_RET(0x0053eecc); r_esp += 4; return;
}

void f_0053eee4(void) /* sub_53EEE4 */
{
    FN_ENTER(0x0053eee4);
    /* 0053eee4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0053eee8: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053eeeb: ja 0x53efe2 */ if ((!fC&&!fZ)) goto L_0053efe2;
L_0053eef1:; BB(0x0053eef1);
    /* 0053eef1: mov eax, dword ptr [eax*4 + 0x9234a0] */ r_eax = R32((u32)(r_eax*4+0x9234a0u));
    /* 0053eef8: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053eee4); r_esp += 12; return;
}

void f_0053eefa(void)
{
    FN_ENTER(0x0053eefa);
    /* 0053eefa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053eefe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053eeff: call 0x53efe8 */ r_esp -= 4; W32(r_esp, 0x53ef04u); f_0053efe8();
    /* 0053ef04: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053eefa); r_esp += 12; return;
}

void f_0053ef09(void)
{
    FN_ENTER(0x0053ef09);
    /* 0053ef09: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053ef0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef0e: call 0x53f074 */ r_esp -= 4; W32(r_esp, 0x53ef13u); f_0053f074();
    /* 0053ef13: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053ef09); r_esp += 12; return;
}

void f_0053ef18(void)
{
    FN_ENTER(0x0053ef18);
    /* 0053ef18: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053ef1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef1d: call 0x53f0f4 */ r_esp -= 4; W32(r_esp, 0x53ef22u); f_0053f0f4();
    /* 0053ef22: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053ef18); r_esp += 12; return;
}

void f_0053ef27(void)
{
    FN_ENTER(0x0053ef27);
    /* 0053ef27: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0053ef2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef2c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053ef2e: call dword ptr [eax + 0x1c8] */ { u32 t = R32((u32)(r_eax+0x1c8u)); r_esp -= 4; W32(r_esp, 0x53ef34u); call_ind(t); }
    /* 0053ef34: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053ef27); r_esp += 12; return;
}

void f_0053ef39(void)
{
    FN_ENTER(0x0053ef39);
    /* 0053ef39: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053ef3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef3e: call 0x53f2b4 */ r_esp -= 4; W32(r_esp, 0x53ef43u); f_0053f2b4();
    /* 0053ef43: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053ef39); r_esp += 12; return;
}

void f_0053ef48(void)
{
    FN_ENTER(0x0053ef48);
    /* 0053ef48: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053ef4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef4d: call 0x53f5ec */ r_esp -= 4; W32(r_esp, 0x53ef52u); f_0053f5ec();
    /* 0053ef52: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053ef48); r_esp += 12; return;
}

void f_0053ef57(void)
{
    FN_ENTER(0x0053ef57);
    /* 0053ef57: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053ef5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef5c: call 0x53f6fc */ r_esp -= 4; W32(r_esp, 0x53ef61u); f_0053f6fc();
    /* 0053ef61: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053ef57); r_esp += 12; return;
}

void f_0053ef66(void)
{
    FN_ENTER(0x0053ef66);
    /* 0053ef66: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053ef6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef6b: call 0x53f928 */ r_esp -= 4; W32(r_esp, 0x53ef70u); f_0053f928();
    /* 0053ef70: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053ef66); r_esp += 12; return;
}

void f_0053ef72(void)
{
    FN_ENTER(0x0053ef72);
    /* 0053ef72: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053ef76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef77: call 0x53fa3c */ r_esp -= 4; W32(r_esp, 0x53ef7cu); f_0053fa3c();
    /* 0053ef7c: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053ef72); r_esp += 12; return;
}

void f_0053ef7e(void)
{
    FN_ENTER(0x0053ef7e);
    /* 0053ef7e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053ef82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef83: call 0x53fe00 */ r_esp -= 4; W32(r_esp, 0x53ef88u); f_0053fe00();
    /* 0053ef88: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053ef7e); r_esp += 12; return;
}

void f_0053ef8a(void)
{
    FN_ENTER(0x0053ef8a);
    /* 0053ef8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053ef8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef8f: call 0x540574 */ r_esp -= 4; W32(r_esp, 0x53ef94u); f_00540574();
    /* 0053ef94: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053ef8a); r_esp += 12; return;
}

void f_0053ef96(void)
{
    FN_ENTER(0x0053ef96);
    /* 0053ef96: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053ef9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef9b: call 0x540cb0 */ r_esp -= 4; W32(r_esp, 0x53efa0u); f_00540cb0();
    /* 0053efa0: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053ef96); r_esp += 12; return;
}

void f_0053efa2(void)
{
    FN_ENTER(0x0053efa2);
    /* 0053efa2: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0053efa6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053efa7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053efa9: call dword ptr [eax + 0x1c4] */ { u32 t = R32((u32)(r_eax+0x1c4u)); r_esp -= 4; W32(r_esp, 0x53efafu); call_ind(t); }
    /* 0053efaf: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053efa2); r_esp += 12; return;
}

void f_0053efb1(void)
{
    FN_ENTER(0x0053efb1);
    /* 0053efb1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0053efb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053efb6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053efb8: call dword ptr [eax + 0x1c0] */ { u32 t = R32((u32)(r_eax+0x1c0u)); r_esp -= 4; W32(r_esp, 0x53efbeu); call_ind(t); }
    /* 0053efbe: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053efb1); r_esp += 12; return;
}

void f_0053efc0(void)
{
    FN_ENTER(0x0053efc0);
    /* 0053efc0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053efc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053efc5: call 0x540ee0 */ r_esp -= 4; W32(r_esp, 0x53efcau); f_00540ee0();
    /* 0053efca: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053efc0); r_esp += 12; return;
}

void f_0053efcc(void)
{
    FN_ENTER(0x0053efcc);
    /* 0053efcc: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053efd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053efd1: call 0x540ff4 */ r_esp -= 4; W32(r_esp, 0x53efd6u); f_00540ff4();
    /* 0053efd6: jmp 0x53efe2 */ goto L_0053efe2;
L_0053efe2:; BB(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053efcc); r_esp += 12; return;
}

void f_0053efd8(void)
{
    FN_ENTER(0x0053efd8);
    /* 0053efd8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053efdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053efdd: call 0x5423a0 */ r_esp -= 4; W32(r_esp, 0x53efe2u); f_005423a0();
    /* 0053efe2: ret 8 */ FN_RET(0x0053efd8); r_esp += 12; return;
}

void f_0053efe2(void)
{
    FN_ENTER(0x0053efe2);
    /* 0053efe2: ret 8 */ FN_RET(0x0053efe2); r_esp += 12; return;
}

void f_0053efe8(void) /* sub_53EFE8 */
{
    FN_ENTER(0x0053efe8);
    /* 0053efe8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053efe9: mov edi, ecx */ r_edi = r_ecx;
    /* 0053efeb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053efef: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eff2: je 0x53f03a */ if (fZ) goto L_0053f03a;
L_0053eff4:; BB(0x0053eff4);
    /* 0053eff4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053eff7: je 0x53f036 */ if (fZ) goto L_0053f036;
L_0053eff9:; BB(0x0053eff9);
    /* 0053eff9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053effc: je 0x53f036 */ if (fZ) goto L_0053f036;
L_0053effe:; BB(0x0053effe);
    /* 0053effe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f000: jne 0x53f036 */ if (!fZ) goto L_0053f036;
L_0053f002:; BB(0x0053f002);
    /* 0053f002: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f004: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53f009u); f_007aa094();
    /* 0053f009: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f00e: push dword ptr [edi + 0x490] */ { u32 v = R32((u32)(r_edi+0x490u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053f014: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0053f017: fadd dword ptr [edi + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3f4u));
    /* 0053f01d: push dword ptr [edi + 0x48c] */ { u32 v = R32((u32)(r_edi+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053f023: fst dword ptr [edi + 0x400] */ W_F32((u32)(r_edi+0x400u), ST(0));
    /* 0053f029: fstp dword ptr [edi + 0x304] */ W_F32((u32)(r_edi+0x304u), ST(0)); FPOP();
    /* 0053f02f: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f031: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x53f036u); f_00520adc();
L_0053f036:; BB(0x0053f036);
    /* 0053f036: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f037: ret 4 */ FN_RET(0x0053efe8); r_esp += 8; return;
L_0053f03a:; BB(0x0053f03a);
    /* 0053f03a: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0053f03d: fadd dword ptr [edi + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3f4u));
    /* 0053f043: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0053f046: fstp dword ptr [edi + 0x400] */ W_F32((u32)(r_edi+0x400u), ST(0)); FPOP();
    /* 0053f04c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053f04e: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0053f055: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x53f05au); f_0082dcbc();
    /* 0053f05a: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0053f05d: fstp dword ptr [edi + 0x48c] */ W_F32((u32)(r_edi+0x48cu), ST(0)); FPOP();
    /* 0053f063: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x53f068u); f_0082ddd8();
    /* 0053f068: fstp dword ptr [edi + 0x490] */ W_F32((u32)(r_edi+0x490u), ST(0)); FPOP();
    /* 0053f06e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f06f: ret 4 */ FN_RET(0x0053efe8); r_esp += 8; return;
}

