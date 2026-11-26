#include "protos.h"

void f_0059b088(void) /* sub_59B088 */
{
    FN_ENTER(0x0059b088);
    /* 0059b088: mov eax, dword ptr [0xa74708] */ r_eax = R32((u32)(0xa74708u));
    /* 0059b08d: cmp eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b090: je 0x59b0ad */ if (fZ) goto L_0059b0ad;
L_0059b092:; BB(0x0059b092);
    /* 0059b092: cmp eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b095: jne 0x59b0db */ if (!fZ) goto L_0059b0db;
L_0059b097:; BB(0x0059b097);
    /* 0059b097: mov eax, dword ptr [0xa74704] */ r_eax = R32((u32)(0xa74704u));
    /* 0059b09c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0059b0a1: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x59b0a6u); f_00578b38();
    /* 0059b0a6: mov eax, dword ptr [0xa74708] */ r_eax = R32((u32)(0xa74708u));
    /* 0059b0ab: jmp 0x59b0db */ goto L_0059b0db;
L_0059b0ad:; BB(0x0059b0ad);
    /* 0059b0ad: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0059b0b2: mov edx, dword ptr [0xa74700] */ r_edx = R32((u32)(0xa74700u));
    /* 0059b0b8: mov dword ptr [0xa74704], eax */ W32((u32)(0xa74704u), r_eax);
    /* 0059b0bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b0be: and eax, 0xffff7fff */ {  u32 a = r_eax; u32 b = 0xffff7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059b0c3: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0059b0c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b0c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b0ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059b0cc: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x59b0d1u); f_0082fa0c();
    /* 0059b0d1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x59b0d6u); f_0082dbac();
    /* 0059b0d6: mov eax, dword ptr [0xa74708] */ r_eax = R32((u32)(0xa74708u));
L_0059b0db:; BB(0x0059b0db);
    /* 0059b0db: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059b0de: mov dword ptr [0xa74708], eax */ W32((u32)(0xa74708u), r_eax);
    /* 0059b0e3: ret  */ FN_RET(0x0059b088); r_esp += 4; return;
}

void f_0059b0e4(void) /* sub_59B0E4 */
{
    FN_ENTER(0x0059b0e4);
    /* 0059b0e4: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0059b0ea: mov dword ptr [eax + 4], 0x41b00000 */ W32((u32)(r_eax+0x4u), 0x41b00000u);
    /* 0059b0f1: ret  */ FN_RET(0x0059b0e4); r_esp += 4; return;
}

void f_0059b0f4(void) /* sub_59B0F4 */
{
    FN_ENTER(0x0059b0f4);
    /* 0059b0f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b0f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059b0f7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059b0fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059b0fd: call 0x520638 */ r_esp -= 4; W32(r_esp, 0x59b102u); f_00520638();
    /* 0059b102: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b104: je 0x59b119 */ if (fZ) goto L_0059b119;
L_0059b106:; BB(0x0059b106);
    /* 0059b106: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 0059b10c: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059b10f: mov dword ptr [ebx + 0x3d0], edx */ W32((u32)(r_ebx+0x3d0u), r_edx);
    /* 0059b115: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059b116: ret 4 */ FN_RET(0x0059b0f4); r_esp += 8; return;
L_0059b119:; BB(0x0059b119);
    /* 0059b119: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 0059b11f: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059b122: mov dword ptr [ebx + 0x3d0], edx */ W32((u32)(r_ebx+0x3d0u), r_edx);
    /* 0059b128: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059b129: ret 4 */ FN_RET(0x0059b0f4); r_esp += 8; return;
}

void f_0059b12c(void) /* sub_59B12C */
{
    FN_ENTER(0x0059b12c);
    /* 0059b12c: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 0059b132: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b135: je 0x59b13f */ if (fZ) goto L_0059b13f;
L_0059b137:; BB(0x0059b137);
    /* 0059b137: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b139: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59b13eu); f_0051f62c();
    /* 0059b13e: ret  */ FN_RET(0x0059b12c); r_esp += 4; return;
L_0059b13f:; BB(0x0059b13f);
    /* 0059b13f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b141: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59b146u); f_0051f62c();
    /* 0059b146: ret  */ FN_RET(0x0059b12c); r_esp += 4; return;
}

void f_0059b148(void) /* sub_59B148 */
{
    FN_ENTER(0x0059b148);
    /* 0059b148: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 0059b14e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b151: je 0x59b15b */ if (fZ) goto L_0059b15b;
L_0059b153:; BB(0x0059b153);
    /* 0059b153: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b155: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59b15au); f_0051f62c();
    /* 0059b15a: ret  */ FN_RET(0x0059b148); r_esp += 4; return;
L_0059b15b:; BB(0x0059b15b);
    /* 0059b15b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b15d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59b162u); f_0051f62c();
    /* 0059b162: ret  */ FN_RET(0x0059b148); r_esp += 4; return;
}

void f_0059b164(void)
{
    FN_ENTER(0x0059b164);
    /* 0059b164: mov ecx, dword ptr [0xa746f8] */ r_ecx = R32((u32)(0xa746f8u));
    /* 0059b16a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b16c: je 0x59b181 */ if (fZ) goto L_0059b181;
L_0059b16e:; BB(0x0059b16e);
    /* 0059b16e: je 0x59b177 */ if (fZ) goto L_0059b177;
L_0059b170:; BB(0x0059b170);
    /* 0059b170: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b172: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x59b177u); f_0044bbac();
L_0059b177:; BB(0x0059b177);
    /* 0059b177: mov dword ptr [0xa746f8], 0 */ W32((u32)(0xa746f8u), 0x0u);
L_0059b181:; BB(0x0059b181);
    /* 0059b181: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59b186u); f_0061cdb0();
    /* 0059b186: mov ecx, dword ptr [0xa7470c] */ r_ecx = R32((u32)(0xa7470cu));
    /* 0059b18c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059b18e: je 0x59b1a3 */ if (fZ) goto L_0059b1a3;
L_0059b190:; BB(0x0059b190);
    /* 0059b190: je 0x59b199 */ if (fZ) goto L_0059b199;
L_0059b192:; BB(0x0059b192);
    /* 0059b192: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b194: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x59b199u); f_004066a8();
L_0059b199:; BB(0x0059b199);
    /* 0059b199: mov dword ptr [0xa7470c], 0 */ W32((u32)(0xa7470cu), 0x0u);
L_0059b1a3:; BB(0x0059b1a3);
    /* 0059b1a3: ret  */ FN_RET(0x0059b164); r_esp += 4; return;
}

void f_0059b1a4(void)
{
    FN_ENTER(0x0059b1a4);
    /* 0059b1a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b1a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b1a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059b1a9: push 0x8d8664 */ { u32 v = 0x8d8664u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b1ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059b1b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b1b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059b1bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059b1bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059b1c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0059b1c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0059b1c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0059b1cb: push 0x4f8 */ { u32 v = 0x4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b1d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0059b1d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x59b1dcu); f_005caba4();
    /* 0059b1dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059b1dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059b1e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b1e2: je 0x59b21b */ if (fZ) goto L_0059b21b;
L_0059b1e4:; BB(0x0059b1e4);
    /* 0059b1e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0059b1eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059b1f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059b1f5: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059b1fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059b1fe: call 0x59b220 */ r_esp -= 4; W32(r_esp, 0x59b203u); f_0059b220();
    /* 0059b203: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059b206: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0059b20d:; BB(0x0059b20d);
    /* 0059b20d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b210: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059b217: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b219: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b21a: ret  */ FN_RET(0x0059b1a4); r_esp += 4; return;
L_0059b21b:; BB(0x0059b21b);
    /* 0059b21b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059b21d: jmp 0x59b20d */ goto L_0059b20d;
}

void f_0059b220(void) /* sub_59B220 */
{
    FN_ENTER(0x0059b220);
    /* 0059b220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b221: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b223: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059b225: push 0x8d86b4 */ { u32 v = 0x8d86b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b22a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059b230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b231: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059b238: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059b23b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059b23e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0059b241: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0059b244: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0059b247: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059b24a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059b24d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0059b250: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059b253: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x59b258u); f_005216f4();
    /* 0059b258: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059b25f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059b262: mov dword ptr [ecx], 0xb09c60 */ W32((u32)(r_ecx), 0xb09c60u);
    /* 0059b268: add ecx, 0x404 */ {  u32 a = r_ecx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059b26e: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x59b273u); f_005122f8();
    /* 0059b273: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0059b27a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059b27d: lea ebx, [edi + 0x424] */ r_ebx = (u32)(r_edi+0x424u);
    /* 0059b283: mov esi, 0xb */ r_esi = 0xbu;
    /* 0059b288: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0059b28a:; BB(0x0059b28a);
    /* 0059b28a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0059b28f: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 0059b292: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059b294: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 0059b298: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0059b29b: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059b29e: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0059b2a1: jne 0x59b28a */ if (!fZ) goto L_0059b28a;
L_0059b2a3:; BB(0x0059b2a3);
    /* 0059b2a3: mov dword ptr [edi + 0x420], 0 */ W32((u32)(r_edi+0x420u), 0x0u);
    /* 0059b2ad: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059b2b0: add eax, 0x47c */ {  u32 a = r_eax; u32 b = 0x47cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059b2b5: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0059b2ba: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059b2bf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b2c1: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059b2c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b2c4: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x59b2c9u); f_00858736();
    /* 0059b2c9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0059b2d0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059b2d3: mov eax, dword ptr [0x9bff40] */ r_eax = R32((u32)(0x9bff40u));
    /* 0059b2d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059b2db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b2dc: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0059b2df: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x59b2e4u); f_0051f750();
    /* 0059b2e4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059b2e7: call 0x59d8b8 */ r_esp -= 4; W32(r_esp, 0x59b2ecu); f_0059d8b8();
    /* 0059b2ec: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059b2ef: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059b2f2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059b2f5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059b2f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b2fb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059b302: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b305: ret 8 */ FN_RET(0x0059b220); r_esp += 12; return;
}

void f_0059b308(void) /* sub_59B308 */
{
    FN_ENTER(0x0059b308);
    /* 0059b308: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059b309: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059b30a: mov edi, ecx */ r_edi = r_ecx;
    /* 0059b30c: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x59b311u); f_004f7c84();
    /* 0059b311: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b313: je 0x59b322 */ if (fZ) goto L_0059b322;
L_0059b315:; BB(0x0059b315);
    /* 0059b315: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059b317: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b319: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x59b31fu); call_ind(t); }
    /* 0059b31f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059b320: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059b321: ret  */ FN_RET(0x0059b308); r_esp += 4; return;
L_0059b322:; BB(0x0059b322);
    /* 0059b322: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059b324: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b326: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x59b32cu); call_ind(t); }
    /* 0059b32c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b32f: je 0x59b3ad */ if (fZ) goto L_0059b3ad;
L_0059b331:; BB(0x0059b331);
    /* 0059b331: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0059b338: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b339: call 0x51f8bc */ r_esp -= 4; W32(r_esp, 0x59b33eu); f_0051f8bc();
    /* 0059b33e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059b33f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b341: je 0x59b359 */ if (fZ) goto L_0059b359;
L_0059b343:; BB(0x0059b343);
    /* 0059b343: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0059b34a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b34b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59b350u); f_007b4d18();
    /* 0059b350: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059b351: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b353: je 0x59b3f4 */ if (fZ) goto L_0059b3f4;
L_0059b359:; BB(0x0059b359);
    /* 0059b359: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059b35b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b35d: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x59b363u); call_ind(t); }
    /* 0059b363: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b365: call 0x59c770 */ r_esp -= 4; W32(r_esp, 0x59b36au); f_0059c770();
    /* 0059b36a: fld dword ptr [0x9299b0] */ FPUSH(R_F32((u32)(0x9299b0u)));
    /* 0059b370: fadd dword ptr [edi + 0x3cc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3ccu));
    /* 0059b376: fcom dword ptr [0x9299ac] */ fx_compare(ST(0), R_F32((u32)(0x9299acu))); 
    /* 0059b37c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059b37e: movzx edx, word ptr [edi + 0x3c8] */ r_edx = (u32)R16((u32)(r_edi+0x3c8u));
    /* 0059b385: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059b388: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0059b38b: mov word ptr [edi + 0x3c8], dx */ W16((u32)(r_edi+0x3c8u), (u16)r_edx);
    /* 0059b392: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059b393: jb 0x59b3a5 */ if (fC) goto L_0059b3a5;
L_0059b395:; BB(0x0059b395);
    /* 0059b395: fld dword ptr [0x9299a8] */ FPUSH(R_F32((u32)(0x9299a8u)));
    /* 0059b39b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0059b39d: fstp dword ptr [edi + 0x3cc] */ W_F32((u32)(r_edi+0x3ccu), ST(0)); FPOP();
    /* 0059b3a3: jmp 0x59b3d9 */ goto L_0059b3d9;
L_0059b3a5:; BB(0x0059b3a5);
    /* 0059b3a5: fstp dword ptr [edi + 0x3cc] */ W_F32((u32)(r_edi+0x3ccu), ST(0)); FPOP();
    /* 0059b3ab: jmp 0x59b3d9 */ goto L_0059b3d9;
L_0059b3ad:; BB(0x0059b3ad);
    /* 0059b3ad: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0059b3b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059b3b2: mov ebx, eax */ r_ebx = r_eax;
L_0059b3b4:; BB(0x0059b3b4);
    /* 0059b3b4: movzx edx, word ptr [edi + ebx*2 + 0x3ec] */ r_edx = (u32)R16((u32)(r_edi+r_ebx*2+0x3ecu));
    /* 0059b3bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b3bd: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59b3c2u); f_007b4d18();
    /* 0059b3c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059b3c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b3c5: je 0x59b3ce */ if (fZ) goto L_0059b3ce;
L_0059b3c7:; BB(0x0059b3c7);
    /* 0059b3c7: mov ecx, eax */ r_ecx = r_eax;
    /* 0059b3c9: call 0x59ad68 */ r_esp -= 4; W32(r_esp, 0x59b3ceu); f_0059ad68();
L_0059b3ce:; BB(0x0059b3ce);
    /* 0059b3ce: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059b3d1: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b3d4: jl 0x59b3b4 */ if ((fS!=fO)) goto L_0059b3b4;
L_0059b3d6:; BB(0x0059b3d6);
    /* 0059b3d6: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0059b3d9:; BB(0x0059b3d9);
    /* 0059b3d9: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b3db: call 0x59c744 */ r_esp -= 4; W32(r_esp, 0x59b3e0u); f_0059c744();
    /* 0059b3e0: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b3e2: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x59b3e7u); f_006401f0();
    /* 0059b3e7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059b3e9: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b3eb: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59b3f1u); call_ind(t); }
    /* 0059b3f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059b3f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059b3f3: ret  */ FN_RET(0x0059b308); r_esp += 4; return;
L_0059b3f4:; BB(0x0059b3f4);
    /* 0059b3f4: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b3f6: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x59b3fbu); f_00520f68();
    /* 0059b3fb: jmp 0x59b359 */ goto L_0059b359;
}

void f_0059b400(void) /* sub_59B400 */
{
    FN_ENTER(0x0059b400);
    /* 0059b400: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059b401: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059b402: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b403: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b404: mov edi, ecx */ r_edi = r_ecx;
    /* 0059b406: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x59b40bu); f_004f7c84();
    /* 0059b40b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b40e: je 0x59b624 */ if (fZ) goto L_0059b624;
L_0059b414:; BB(0x0059b414);
    /* 0059b414: lea esi, [edi + 0x47c] */ r_esi = (u32)(r_edi+0x47cu);
    /* 0059b41a: mov ecx, esi */ r_ecx = r_esi;
    /* 0059b41c: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x59b421u); f_005771a4();
    /* 0059b421: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0059b427: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b428: mov ecx, esi */ r_ecx = r_esi;
    /* 0059b42a: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x59b42fu); f_0057725c();
    /* 0059b42f: mov ebp, eax */ r_ebp = r_eax;
    /* 0059b431: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0059b437: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059b43a: je 0x59b616 */ if (fZ) goto L_0059b616;
L_0059b440:; BB(0x0059b440);
    /* 0059b440: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x59b445u); f_00694cc8();
    /* 0059b445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b447: je 0x59b46c */ if (fZ) goto L_0059b46c;
L_0059b449:; BB(0x0059b449);
    /* 0059b449: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b44e: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b450: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0059b452: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059b458: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059b45e: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x59b461u); call_ind(t); }
    /* 0059b461: mov ebx, eax */ r_ebx = r_eax;
    /* 0059b463: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059b465: jne 0x59b48a */ if (!fZ) goto L_0059b48a;
L_0059b467:; BB(0x0059b467);
    /* 0059b467: jmp 0x59b616 */ goto L_0059b616;
L_0059b46c:; BB(0x0059b46c);
    /* 0059b46c: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b471: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b473: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0059b475: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b47a: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x59b47du); call_ind(t); }
    /* 0059b47d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059b47f: je 0x59b616 */ if (fZ) goto L_0059b616;
L_0059b485:; BB(0x0059b485);
    /* 0059b485: mov ebx, 1 */ r_ebx = 0x1u;
L_0059b48a:; BB(0x0059b48a);
    /* 0059b48a: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0059b490: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059b493: je 0x59b4a0 */ if (fZ) goto L_0059b4a0;
L_0059b495:; BB(0x0059b495);
    /* 0059b495: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059b497: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b498: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b499: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b49b: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x59b4a0u); f_00520cf8();
L_0059b4a0:; BB(0x0059b4a0);
    /* 0059b4a0: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b4a2: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x59b4a7u); f_00520608();
    /* 0059b4a7: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0059b4aa: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x59b4afu); f_00829cc8();
    /* 0059b4af: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0059b4b5: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0059b4bb: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x59b4c0u); f_00520d08();
    /* 0059b4c0: mov ecx, dword ptr [0xa746f8] */ r_ecx = R32((u32)(0xa746f8u));
    /* 0059b4c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b4c8: movsx edx, word ptr [edi + 0x3c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x3c8u));
    /* 0059b4cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b4d0: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x59b4d5u); f_0052ddac();
    /* 0059b4d5: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0059b4db: push dword ptr [edi + 0x3cc] */ { u32 v = R32((u32)(r_edi+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059b4e1: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059b4e7: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0059b4ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b4ef: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x59b4f4u); f_00618a44();
    /* 0059b4f4: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x59b4f9u); f_00578b38();
    /* 0059b4f9: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0059b4ff: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059b502: jne 0x59b524 */ if (!fZ) goto L_0059b524;
L_0059b504:; BB(0x0059b504);
    /* 0059b504: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b506: je 0x59b542 */ if (fZ) goto L_0059b542;
L_0059b508:; BB(0x0059b508);
    /* 0059b508: mov edx, dword ptr [edi + 0x47c] */ r_edx = R32((u32)(r_edi+0x47cu));
    /* 0059b50e: mov ecx, esi */ r_ecx = r_esi;
    /* 0059b510: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x59b513u); call_ind(t); }
    /* 0059b513: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b515: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x59b51au); f_008173d0();
    /* 0059b51a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b51c: jne 0x59b5d5 */ if (!fZ) goto L_0059b5d5;
L_0059b522:; BB(0x0059b522);
    /* 0059b522: jmp 0x59b542 */ goto L_0059b542;
L_0059b524:; BB(0x0059b524);
    /* 0059b524: mov edx, dword ptr [edi + 0x404] */ r_edx = R32((u32)(r_edi+0x404u));
    /* 0059b52a: lea ecx, [edi + 0x404] */ r_ecx = (u32)(r_edi+0x404u);
    /* 0059b530: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x59b533u); call_ind(t); }
    /* 0059b533: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b535: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x59b53au); f_008173d0();
    /* 0059b53a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b53c: jne 0x59b5d5 */ if (!fZ) goto L_0059b5d5;
L_0059b542:; BB(0x0059b542);
    /* 0059b542: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x59b547u); f_0082d7b0();
    /* 0059b547: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0059b54a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x59b54fu); f_0082d838();
    /* 0059b54f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b551: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b556: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059b558: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b55a: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x59b55fu); f_00830b74();
    /* 0059b55f: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0059b562: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059b564: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x59b569u); f_0082d8bc();
    /* 0059b569: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059b56b: mov dword ptr [0xa74708], edx */ W32((u32)(0xa74708u), r_edx);
    /* 0059b571: mov dword ptr [0xa74704], edx */ W32((u32)(0xa74704u), r_edx);
    /* 0059b577: mov edx, dword ptr [edi + 0x400] */ r_edx = R32((u32)(r_edi+0x400u));
    /* 0059b57d: mov dword ptr [0xa74700], edx */ W32((u32)(0xa74700u), r_edx);
    /* 0059b583: lea edx, [edi + 0x3d4] */ r_edx = (u32)(r_edi+0x3d4u);
    /* 0059b589: mov dword ptr [0xa746fc], edx */ W32((u32)(0xa746fcu), r_edx);
    /* 0059b58f: mov ecx, 0x59b088 */ r_ecx = 0x59b088u;
    /* 0059b594: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x59b599u); f_0082fac4();
    /* 0059b599: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0059b59f: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059b5a5: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0059b5ab: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b5ae: je 0x59b61b */ if (fZ) goto L_0059b61b;
L_0059b5b0:; BB(0x0059b5b0);
    /* 0059b5b0: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b5b2: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x59b5b7u); f_007aa7b8();
L_0059b5b7:; BB(0x0059b5b7);
    /* 0059b5b7: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0059b5bd: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0059b5c3: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0059b5c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059b5cb: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x59b5d0u); f_0082fac4();
    /* 0059b5d0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x59b5d5u); f_0082da80();
L_0059b5d5:; BB(0x0059b5d5);
    /* 0059b5d5: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0059b5db: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059b5de: jne 0x59b5f1 */ if (!fZ) goto L_0059b5f1;
L_0059b5e0:; BB(0x0059b5e0);
    /* 0059b5e0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b5e2: je 0x59b600 */ if (fZ) goto L_0059b600;
L_0059b5e4:; BB(0x0059b5e4);
    /* 0059b5e4: mov eax, dword ptr [edi + 0x47c] */ r_eax = R32((u32)(r_edi+0x47cu));
    /* 0059b5ea: mov ecx, esi */ r_ecx = r_esi;
    /* 0059b5ec: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x59b5efu); call_ind(t); }
    /* 0059b5ef: jmp 0x59b600 */ goto L_0059b600;
L_0059b5f1:; BB(0x0059b5f1);
    /* 0059b5f1: mov eax, dword ptr [edi + 0x404] */ r_eax = R32((u32)(r_edi+0x404u));
    /* 0059b5f7: lea ecx, [edi + 0x404] */ r_ecx = (u32)(r_edi+0x404u);
    /* 0059b5fd: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x59b600u); call_ind(t); }
L_0059b600:; BB(0x0059b600);
    /* 0059b600: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0059b605: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0059b60a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b60c: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x59b611u); f_00520610();
    /* 0059b611: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x59b616u); f_0082dab0();
L_0059b616:; BB(0x0059b616);
    /* 0059b616: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059b617: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b618: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059b619: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059b61a: ret  */ FN_RET(0x0059b400); r_esp += 4; return;
L_0059b61b:; BB(0x0059b61b);
    /* 0059b61b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b61d: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x59b622u); f_007aa668();
    /* 0059b622: jmp 0x59b5b7 */ goto L_0059b5b7;
L_0059b624:; BB(0x0059b624);
    /* 0059b624: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059b626: mov ecx, edi */ r_ecx = r_edi;
    /* 0059b628: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x59b62eu); call_ind(t); }
    /* 0059b62e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059b62f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b630: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059b631: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059b632: ret  */ FN_RET(0x0059b400); r_esp += 4; return;
}

void f_0059b634(void) /* sub_59B634 */
{
    FN_ENTER(0x0059b634);
    /* 0059b634: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x59b639u); f_0051f814();
    /* 0059b639: ret  */ FN_RET(0x0059b634); r_esp += 4; return;
}

void f_0059b63c(void) /* sub_59B63C */
{
    FN_ENTER(0x0059b63c);
    /* 0059b63c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059b63d: mov esi, ecx */ r_esi = r_ecx;
    /* 0059b63f: mov ecx, esi */ r_ecx = r_esi;
    /* 0059b641: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x59b646u); f_0051f814();
    /* 0059b646: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b64b: mov ecx, esi */ r_ecx = r_esi;
    /* 0059b64d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059b64f: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b654: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x59b657u); call_ind(t); }
    /* 0059b657: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059b659: je 0x59b716 */ if (fZ) goto L_0059b716;
L_0059b65f:; BB(0x0059b65f);
    /* 0059b65f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059b661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b662: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b663: mov ecx, esi */ r_ecx = r_esi;
    /* 0059b665: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x59b66au); f_00520cf8();
    /* 0059b66a: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0059b66d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x59b672u); f_00829cc8();
    /* 0059b672: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x59b677u); f_0082d7b0();
    /* 0059b677: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0059b67a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x59b67fu); f_0082d838();
    /* 0059b67f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b681: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b686: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059b688: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b68a: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x59b68fu); f_00830b74();
    /* 0059b68f: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0059b692: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059b694: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x59b699u); f_0082d8bc();
    /* 0059b699: mov ecx, dword ptr [0xa746f8] */ r_ecx = R32((u32)(0xa746f8u));
    /* 0059b69f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b6a1: movzx eax, word ptr [esi + 0x3c8] */ r_eax = (u32)R16((u32)(r_esi+0x3c8u));
    /* 0059b6a8: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059b6ab: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0059b6ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b6af: mov word ptr [esi + 0x3c8], dx */ W16((u32)(r_esi+0x3c8u), (u16)r_edx);
    /* 0059b6b6: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x59b6bbu); f_0052ddac();
    /* 0059b6bb: fld dword ptr [0x929984] */ FPUSH(R_F32((u32)(0x929984u)));
    /* 0059b6c1: fadd dword ptr [esi + 0x3cc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3ccu));
    /* 0059b6c7: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0059b6cc: fst dword ptr [esi + 0x3cc] */ W_F32((u32)(r_esi+0x3ccu), ST(0));
    /* 0059b6d2: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b6d5: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0059b6d9: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0059b6e0: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059b6e5: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0059b6ea: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x59b6efu); f_00618a44();
    /* 0059b6ef: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x59b6f4u); f_00578b38();
    /* 0059b6f4: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059b6f7: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x59b6fcu); f_0082e1e8();
    /* 0059b6fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059b6fd: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x59b702u); f_0082dab0();
    /* 0059b702: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0059b707: and eax, 0xfffdffff */ {  u32 a = r_eax; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059b70c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0059b711: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x59b716u); f_0082da80();
L_0059b716:; BB(0x0059b716);
    /* 0059b716: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059b717: ret  */ FN_RET(0x0059b63c); r_esp += 4; return;
}

void f_0059b718(void) /* sub_59B718 */
{
    FN_ENTER(0x0059b718);
    /* 0059b718: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059b719: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b71a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059b71b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059b71d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059b721: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059b724: ja 0x59ba36 */ if ((!fC&&!fZ)) goto L_0059ba36;
L_0059b72a:; BB(0x0059b72a);
    /* 0059b72a: mov eax, dword ptr [eax*4 + 0x929868] */ r_eax = R32((u32)(r_eax*4+0x929868u));
    /* 0059b731: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0059ba36:; BB(0x0059ba36);
    /* 0059ba36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ba39: ret 8 */ FN_RET(0x0059b718); r_esp += 12; return;
}

void f_0059b733(void)
{
    FN_ENTER(0x0059b733);
    /* 0059b733: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b737: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b738: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b73a: call 0x59bbe8 */ r_esp -= 4; W32(r_esp, 0x59b73fu); f_0059bbe8();
    /* 0059b73f: jmp 0x59ba36 */ goto L_0059ba36;
L_0059ba36:; BB(0x0059ba36);
    /* 0059ba36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ba39: ret 8 */ FN_RET(0x0059b733); r_esp += 12; return;
}

void f_0059b744(void)
{
    FN_ENTER(0x0059b744);
    /* 0059b744: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b749: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b74b: call 0x59bcac */ r_esp -= 4; W32(r_esp, 0x59b750u); f_0059bcac();
    /* 0059b750: jmp 0x59ba36 */ goto L_0059ba36;
L_0059ba36:; BB(0x0059ba36);
    /* 0059ba36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ba39: ret 8 */ FN_RET(0x0059b744); r_esp += 12; return;
}

void f_0059b755(void)
{
    FN_ENTER(0x0059b755);
    /* 0059b755: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b75a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b75c: call 0x59bd94 */ r_esp -= 4; W32(r_esp, 0x59b761u); f_0059bd94();
    /* 0059b761: jmp 0x59ba36 */ goto L_0059ba36;
L_0059ba36:; BB(0x0059ba36);
    /* 0059ba36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ba39: ret 8 */ FN_RET(0x0059b755); r_esp += 12; return;
}

void f_0059b766(void)
{
    FN_ENTER(0x0059b766);
    /* 0059b766: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b76a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b76b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b76d: call 0x59c1a0 */ r_esp -= 4; W32(r_esp, 0x59b772u); f_0059c1a0();
    /* 0059b772: jmp 0x59ba36 */ goto L_0059ba36;
L_0059ba36:; BB(0x0059ba36);
    /* 0059ba36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ba39: ret 8 */ FN_RET(0x0059b766); r_esp += 12; return;
}

void f_0059b777(void)
{
    FN_ENTER(0x0059b777);
    /* 0059b777: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b77b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b77c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b77e: call 0x59c844 */ r_esp -= 4; W32(r_esp, 0x59b783u); f_0059c844();
    /* 0059b783: jmp 0x59ba36 */ goto L_0059ba36;
L_0059ba36:; BB(0x0059ba36);
    /* 0059ba36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ba39: ret 8 */ FN_RET(0x0059b777); r_esp += 12; return;
}

void f_0059b788(void)
{
    FN_ENTER(0x0059b788);
    /* 0059b788: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b78c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b78d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b78f: call 0x59d064 */ r_esp -= 4; W32(r_esp, 0x59b794u); f_0059d064();
    /* 0059b794: jmp 0x59ba36 */ goto L_0059ba36;
L_0059ba36:; BB(0x0059ba36);
    /* 0059ba36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ba39: ret 8 */ FN_RET(0x0059b788); r_esp += 12; return;
}

void f_0059b799(void)
{
    FN_ENTER(0x0059b799);
    /* 0059b799: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b79d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b7a0: je 0x59ba3c */ if (fZ) goto L_0059ba3c;
L_0059b7a6:; BB(0x0059b7a6);
    /* 0059b7a6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b7aa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b7ad: je 0x59b8b6 */ if (fZ) goto L_0059b8b6;
L_0059b7b3:; BB(0x0059b7b3);
    /* 0059b7b3: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b7b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b7b9: jne 0x59b88b */ if (!fZ) goto L_0059b88b;
L_0059b7bf:; BB(0x0059b7bf);
    /* 0059b7bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b7c1: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59b7c6u); f_007aa094();
    /* 0059b7c6: mov eax, dword ptr [ebp + 0x4f0] */ r_eax = R32((u32)(r_ebp+0x4f0u));
    /* 0059b7cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b7ce: jne 0x59b86f */ if (!fZ) goto L_0059b86f;
L_0059b7d4:; BB(0x0059b7d4);
    /* 0059b7d4: fld dword ptr [0x92997c] */ FPUSH(R_F32((u32)(0x92997cu)));
    /* 0059b7da: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 0059b7e0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059b7e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059b7e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059b7e5: jbe 0x59b82c */ if ((fC||fZ)) goto L_0059b82c;
L_0059b7e7:; BB(0x0059b7e7);
    /* 0059b7e7: fld dword ptr [0x9299c0] */ FPUSH(R_F32((u32)(0x9299c0u)));
    /* 0059b7ed: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0059b7ef: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059b7f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059b7f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059b7f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059b7f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059b7f8: jb 0x59b802 */ if (fC) goto L_0059b802;
L_0059b7fa:; BB(0x0059b7fa);
    /* 0059b7fa: fstp dword ptr [ebp + 0x400] */ W_F32((u32)(r_ebp+0x400u), ST(0)); FPOP();
    /* 0059b800: jmp 0x59b866 */ goto L_0059b866;
L_0059b802:; BB(0x0059b802);
    /* 0059b802: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059b804: mov edx, dword ptr [ebp + 0x3d0] */ r_edx = R32((u32)(r_ebp+0x3d0u));
    /* 0059b80a: mov esi, dword ptr [ebp + 0x404] */ r_esi = R32((u32)(r_ebp+0x404u));
    /* 0059b810: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059b812: mov dword ptr [ebp + 0x400], eax */ W32((u32)(r_ebp+0x400u), r_eax);
    /* 0059b818: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059b81b: mov dword ptr [ebp + 0x3d0], edx */ W32((u32)(r_ebp+0x3d0u), r_edx);
    /* 0059b821: lea ecx, [ebp + 0x404] */ r_ecx = (u32)(r_ebp+0x404u);
    /* 0059b827: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x59b82au); call_ind(t); }
    /* 0059b82a: jmp 0x59b866 */ goto L_0059b866;
L_0059b82c:; BB(0x0059b82c);
    /* 0059b82c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0059b82e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059b830: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 0059b836: lea ecx, [ebp + 0x404] */ r_ecx = (u32)(r_ebp+0x404u);
    /* 0059b83c: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x59b83fu); call_ind(t); }
    /* 0059b83f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b841: je 0x59b866 */ if (fZ) goto L_0059b866;
L_0059b843:; BB(0x0059b843);
    /* 0059b843: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0059b849: mov dword ptr [ebp + 0x4ec], 0 */ W32((u32)(r_ebp+0x4ecu), 0x0u);
    /* 0059b853: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059b856: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0059b85c: mov dword ptr [ebp + 0x4f0], 1 */ W32((u32)(r_ebp+0x4f0u), 0x1u);
L_0059b866:; BB(0x0059b866);
    /* 0059b866: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b868: call 0x59bbc0 */ r_esp -= 4; W32(r_esp, 0x59b86du); f_0059bbc0();
    /* 0059b86d: jmp 0x59b87b */ goto L_0059b87b;
L_0059b86f:; BB(0x0059b86f);
    /* 0059b86f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b872: jne 0x59b87b */ if (!fZ) goto L_0059b87b;
L_0059b874:; BB(0x0059b874);
    /* 0059b874: add dword ptr [ebp + 0x4ec], 1 */ { u32 ad = (u32)(r_ebp+0x4ecu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0059b87b:; BB(0x0059b87b);
    /* 0059b87b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059b87e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b880: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59b886u); call_ind(t); }
    /* 0059b886: jmp 0x59ba36 */ goto L_0059ba36;
L_0059b88b:; BB(0x0059b88b);
    /* 0059b88b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b88f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059b892: jne 0x59ba36 */ if (!fZ) goto L_0059ba36;
L_0059b898:; BB(0x0059b898);
    /* 0059b898: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0059b89e: mov dword ptr [ebp + 0x400], 0x3f800000 */ W32((u32)(r_ebp+0x400u), 0x3f800000u);
    /* 0059b8a8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059b8ab: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0059b8b1: jmp 0x59ba36 */ goto L_0059ba36;
L_0059b8b6:; BB(0x0059b8b6);
    /* 0059b8b6: mov eax, dword ptr [ebp + 0x4ec] */ r_eax = R32((u32)(r_ebp+0x4ecu));
    /* 0059b8bc: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059b8bf: jl 0x59ba36 */ if ((fS!=fO)) goto L_0059ba36;
L_0059b8c5:; BB(0x0059b8c5);
    /* 0059b8c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b8c7: call 0x59b148 */ r_esp -= 4; W32(r_esp, 0x59b8ccu); f_0059b148();
    /* 0059b8cc: jmp 0x59ba36 */ goto L_0059ba36;
L_0059ba36:; BB(0x0059ba36);
    /* 0059ba36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ba39: ret 8 */ FN_RET(0x0059b799); r_esp += 12; return;
L_0059ba3c:; BB(0x0059ba3c);
    /* 0059ba3c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ba3e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ba40: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59ba45u); f_0051f664();
    /* 0059ba45: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059ba48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ba4a: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x59ba50u); call_ind(t); }
    /* 0059ba50: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059ba53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ba55: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x59ba5bu); call_ind(t); }
    /* 0059ba5b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059ba5e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ba60: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x59ba66u); call_ind(t); }
    /* 0059ba66: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0059ba68:; BB(0x0059ba68);
    /* 0059ba68: movzx eax, word ptr [ebp + esi*2 + 0x3ec] */ r_eax = (u32)R16((u32)(r_ebp+r_esi*2+0x3ecu));
    /* 0059ba70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ba71: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59ba76u); f_007b4d18();
    /* 0059ba76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ba79: je 0x59ba82 */ if (fZ) goto L_0059ba82;
L_0059ba7b:; BB(0x0059ba7b);
    /* 0059ba7b: mov ecx, eax */ r_ecx = r_eax;
    /* 0059ba7d: call 0x59ac9c */ r_esp -= 4; W32(r_esp, 0x59ba82u); f_0059ac9c();
L_0059ba82:; BB(0x0059ba82);
    /* 0059ba82: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059ba85: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ba88: jl 0x59ba68 */ if ((fS!=fO)) goto L_0059ba68;
L_0059ba8a:; BB(0x0059ba8a);
    /* 0059ba8a: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0059ba90: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059ba93: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ba96: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0059ba9c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0059ba9e:; BB(0x0059ba9e);
    /* 0059ba9e: movzx eax, word ptr [ebp + esi*2 + 0x3ec] */ r_eax = (u32)R16((u32)(r_ebp+r_esi*2+0x3ecu));
    /* 0059baa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059baa7: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59baacu); f_007b4d18();
    /* 0059baac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059baad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059baaf: je 0x59bab8 */ if (fZ) goto L_0059bab8;
L_0059bab1:; BB(0x0059bab1);
    /* 0059bab1: mov ecx, eax */ r_ecx = r_eax;
    /* 0059bab3: call 0x59ac64 */ r_esp -= 4; W32(r_esp, 0x59bab8u); f_0059ac64();
L_0059bab8:; BB(0x0059bab8);
    /* 0059bab8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059babb: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059babe: jl 0x59ba9e */ if ((fS!=fO)) goto L_0059ba9e;
L_0059bac0:; BB(0x0059bac0);
    /* 0059bac0: mov edx, dword ptr [ebp + 0x404] */ r_edx = R32((u32)(r_ebp+0x404u));
    /* 0059bac6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059bac8: mov dword ptr [ebp + 0x4ec], eax */ W32((u32)(r_ebp+0x4ecu), r_eax);
    /* 0059bace: mov dword ptr [ebp + 0x4f0], eax */ W32((u32)(r_ebp+0x4f0u), r_eax);
    /* 0059bad4: lea ecx, [ebp + 0x404] */ r_ecx = (u32)(r_ebp+0x404u);
    /* 0059bada: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x59baddu); call_ind(t); }
    /* 0059badd: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0059bae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059bae1: call 0x578a68 */ r_esp -= 4; W32(r_esp, 0x59bae6u); f_00578a68();
    /* 0059bae6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059bae7: jmp 0x59ba36 */ goto L_0059ba36;
}

void f_0059b8d1(void)
{
    FN_ENTER(0x0059b8d1);
    /* 0059b8d1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b8d5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b8d8: je 0x59baec */ if (fZ) goto L_0059baec;
L_0059b8de:; BB(0x0059b8de);
    /* 0059b8de: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b8e2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b8e5: je 0x59ba08 */ if (fZ) goto L_0059ba08;
L_0059b8eb:; BB(0x0059b8eb);
    /* 0059b8eb: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b8ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b8f1: jne 0x59b9e4 */ if (!fZ) goto L_0059b9e4;
L_0059b8f7:; BB(0x0059b8f7);
    /* 0059b8f7: fld dword ptr [ebp + 0x408] */ FPUSH(R_F32((u32)(r_ebp+0x408u)));
    /* 0059b8fd: fcomp dword ptr [0x929978] */ fx_compare(ST(0), R_F32((u32)(0x929978u))); FPOP();
    /* 0059b903: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059b905: lea esi, [ebp + 0x404] */ r_esi = (u32)(r_ebp+0x404u);
    /* 0059b90b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059b90c: jb 0x59b91c */ if (fC) goto L_0059b91c;
L_0059b90e:; BB(0x0059b90e);
    /* 0059b90e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b910: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59b915u); f_007aa094();
    /* 0059b915: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b917: call 0x59cfac */ r_esp -= 4; W32(r_esp, 0x59b91cu); f_0059cfac();
L_0059b91c:; BB(0x0059b91c);
    /* 0059b91c: mov eax, dword ptr [ebp + 0x4f0] */ r_eax = R32((u32)(r_ebp+0x4f0u));
    /* 0059b922: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b924: jne 0x59b998 */ if (!fZ) goto L_0059b998;
L_0059b926:; BB(0x0059b926);
    /* 0059b926: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 0059b92c: mov ecx, esi */ r_ecx = r_esi;
    /* 0059b92e: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x59b931u); call_ind(t); }
    /* 0059b931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b933: je 0x59b9d0 */ if (fZ) goto L_0059b9d0;
L_0059b939:; BB(0x0059b939);
    /* 0059b939: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0059b93f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0059b942: mov dword ptr [ebp + 0x4ec], 0 */ W32((u32)(r_ebp+0x4ecu), 0x0u);
    /* 0059b94c: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059b94f: mov dword ptr [ebp + 0x4f0], 1 */ W32((u32)(r_ebp+0x4f0u), 0x1u);
    /* 0059b959: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0059b95f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b961: call dword ptr [edx + 0x178] */ { u32 t = R32((u32)(r_edx+0x178u)); r_esp -= 4; W32(r_esp, 0x59b967u); call_ind(t); }
    /* 0059b967: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059b96a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b96c: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x59b972u); call_ind(t); }
    /* 0059b972: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0059b974:; BB(0x0059b974);
    /* 0059b974: movzx eax, word ptr [ebp + esi*2 + 0x3ec] */ r_eax = (u32)R16((u32)(r_ebp+r_esi*2+0x3ecu));
    /* 0059b97c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b97d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59b982u); f_007b4d18();
    /* 0059b982: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059b983: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b985: je 0x59b98e */ if (fZ) goto L_0059b98e;
L_0059b987:; BB(0x0059b987);
    /* 0059b987: mov ecx, eax */ r_ecx = r_eax;
    /* 0059b989: call 0x59ad4c */ r_esp -= 4; W32(r_esp, 0x59b98eu); f_0059ad4c();
L_0059b98e:; BB(0x0059b98e);
    /* 0059b98e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059b991: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b994: jl 0x59b974 */ if ((fS!=fO)) goto L_0059b974;
L_0059b996:; BB(0x0059b996);
    /* 0059b996: jmp 0x59b9d0 */ goto L_0059b9d0;
L_0059b998:; BB(0x0059b998);
    /* 0059b998: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b99b: jne 0x59b9d0 */ if (!fZ) goto L_0059b9d0;
L_0059b99d:; BB(0x0059b99d);
    /* 0059b99d: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 0059b9a3: fcom dword ptr [0x929980] */ fx_compare(ST(0), R_F32((u32)(0x929980u))); 
    /* 0059b9a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059b9ab: add dword ptr [ebp + 0x4ec], 1 */ { u32 ad = (u32)(r_ebp+0x4ecu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0059b9b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059b9b3: jae 0x59b9c3 */ if (!fC) goto L_0059b9c3;
L_0059b9b5:; BB(0x0059b9b5);
    /* 0059b9b5: fld dword ptr [0x9299c0] */ FPUSH(R_F32((u32)(0x9299c0u)));
    /* 0059b9bb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0059b9bd: fst dword ptr [ebp + 0x400] */ W_F32((u32)(r_ebp+0x400u), ST(0));
L_0059b9c3:; BB(0x0059b9c3);
    /* 0059b9c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059b9c5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059b9c8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b9ca: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59b9d0u); call_ind(t); }
L_0059b9d0:; BB(0x0059b9d0);
    /* 0059b9d0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059b9d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b9d5: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59b9dbu); call_ind(t); }
    /* 0059b9db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059b9dd: call 0x59bbc0 */ r_esp -= 4; W32(r_esp, 0x59b9e2u); f_0059bbc0();
    /* 0059b9e2: jmp 0x59ba36 */ goto L_0059ba36;
L_0059b9e4:; BB(0x0059b9e4);
    /* 0059b9e4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059b9e8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059b9eb: jne 0x59ba36 */ if (!fZ) goto L_0059ba36;
L_0059b9ed:; BB(0x0059b9ed);
    /* 0059b9ed: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0059b9f3: mov dword ptr [ebp + 0x400], 0x3f800000 */ W32((u32)(r_ebp+0x400u), 0x3f800000u);
    /* 0059b9fd: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ba00: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0059ba06: jmp 0x59ba36 */ goto L_0059ba36;
L_0059ba08:; BB(0x0059ba08);
    /* 0059ba08: mov eax, dword ptr [ebp + 0x4ec] */ r_eax = R32((u32)(r_ebp+0x4ecu));
    /* 0059ba0e: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ba11: jl 0x59ba36 */ if ((fS!=fO)) goto L_0059ba36;
L_0059ba13:; BB(0x0059ba13);
    /* 0059ba13: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ba15: call 0x59b12c */ r_esp -= 4; W32(r_esp, 0x59ba1au); f_0059b12c();
    /* 0059ba1a: jmp 0x59ba36 */ goto L_0059ba36;
L_0059ba36:; BB(0x0059ba36);
    /* 0059ba36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ba39: ret 8 */ FN_RET(0x0059b8d1); r_esp += 12; return;
L_0059baec:; BB(0x0059baec);
    /* 0059baec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059baee: mov eax, 7 */ r_eax = 0x7u;
    /* 0059baf3: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0059bafa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059bafc: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59bb01u); f_0051f664();
    /* 0059bb01: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0059bb07: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0059bb0a: or eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059bb0d: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0059bb13: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059bb15: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x59bb1bu); call_ind(t); }
    /* 0059bb1b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059bb1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059bb20: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x59bb26u); call_ind(t); }
    /* 0059bb26: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059bb29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059bb2b: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x59bb31u); call_ind(t); }
    /* 0059bb31: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0059bb33:; BB(0x0059bb33);
    /* 0059bb33: movzx eax, word ptr [ebp + esi*2 + 0x3ec] */ r_eax = (u32)R16((u32)(r_ebp+r_esi*2+0x3ecu));
    /* 0059bb3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059bb3c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59bb41u); f_007b4d18();
    /* 0059bb41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059bb42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bb44: je 0x59bb4d */ if (fZ) goto L_0059bb4d;
L_0059bb46:; BB(0x0059bb46);
    /* 0059bb46: mov ecx, eax */ r_ecx = r_eax;
    /* 0059bb48: call 0x59ac9c */ r_esp -= 4; W32(r_esp, 0x59bb4du); f_0059ac9c();
L_0059bb4d:; BB(0x0059bb4d);
    /* 0059bb4d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059bb50: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059bb53: jl 0x59bb33 */ if ((fS!=fO)) goto L_0059bb33;
L_0059bb55:; BB(0x0059bb55);
    /* 0059bb55: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 0059bb5b: lea ecx, [ebp + 0x404] */ r_ecx = (u32)(r_ebp+0x404u);
    /* 0059bb61: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x59bb64u); call_ind(t); }
    /* 0059bb64: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0059bb67: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0059bb69:; BB(0x0059bb69);
    /* 0059bb69: movzx eax, word ptr [ebp + esi*2 + 0x3ec] */ r_eax = (u32)R16((u32)(r_ebp+r_esi*2+0x3ecu));
    /* 0059bb71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059bb72: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59bb77u); f_007b4d18();
    /* 0059bb77: mov ebx, eax */ r_ebx = r_eax;
    /* 0059bb79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059bb7c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bb7e: je 0x59bb8e */ if (fZ) goto L_0059bb8e;
L_0059bb80:; BB(0x0059bb80);
    /* 0059bb80: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059bb82: call 0x59acb8 */ r_esp -= 4; W32(r_esp, 0x59bb87u); f_0059acb8();
    /* 0059bb87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059bb89: call 0x59ac80 */ r_esp -= 4; W32(r_esp, 0x59bb8eu); f_0059ac80();
L_0059bb8e:; BB(0x0059bb8e);
    /* 0059bb8e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059bb91: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059bb94: jl 0x59bb69 */ if ((fS!=fO)) goto L_0059bb69;
L_0059bb96:; BB(0x0059bb96);
    /* 0059bb96: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0059bb99: mov dword ptr [ebp + 0x400], 0 */ W32((u32)(r_ebp+0x400u), 0x0u);
    /* 0059bba3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059bba5: mov dword ptr [ebp + 0x4ec], eax */ W32((u32)(r_ebp+0x4ecu), r_eax);
    /* 0059bbab: mov dword ptr [ebp + 0x4f0], eax */ W32((u32)(r_ebp+0x4f0u), r_eax);
    /* 0059bbb1: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0059bbb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbb5: call 0x578a68 */ r_esp -= 4; W32(r_esp, 0x59bbbau); f_00578a68();
    /* 0059bbba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059bbbb: jmp 0x59ba36 */ goto L_0059ba36;
}

void f_0059ba1c(void)
{
    FN_ENTER(0x0059ba1c);
    /* 0059ba1c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059ba20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ba21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ba23: call 0x59d3d0 */ r_esp -= 4; W32(r_esp, 0x59ba28u); f_0059d3d0();
    /* 0059ba28: jmp 0x59ba36 */ goto L_0059ba36;
L_0059ba36:; BB(0x0059ba36);
    /* 0059ba36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ba39: ret 8 */ FN_RET(0x0059ba1c); r_esp += 12; return;
}

void f_0059ba2a(void)
{
    FN_ENTER(0x0059ba2a);
    /* 0059ba2a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059ba2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ba2f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ba31: call 0x59d848 */ r_esp -= 4; W32(r_esp, 0x59ba36u); f_0059d848();
    /* 0059ba36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059ba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ba39: ret 8 */ FN_RET(0x0059ba2a); r_esp += 12; return;
}

void f_0059bbc0(void) /* sub_59BBC0 */
{
    FN_ENTER(0x0059bbc0);
    /* 0059bbc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbc1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059bbc3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059bbc5: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbca: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x59bbcfu); f_007879b8();
    /* 0059bbcf: mov ecx, eax */ r_ecx = r_eax;
    /* 0059bbd1: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0059bbd4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059bbd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbd9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbdb: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x59bbe0u); f_008144b0();
    /* 0059bbe0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059bbe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059bbe4: ret  */ FN_RET(0x0059bbc0); r_esp += 4; return;
}

void f_0059bbe8(void) /* sub_59BBE8 */
{
    FN_ENTER(0x0059bbe8);
    /* 0059bbe8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbe9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059bbeb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059bbef: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bbf2: je 0x59bc3a */ if (fZ) goto L_0059bc3a;
L_0059bbf4:; BB(0x0059bbf4);
    /* 0059bbf4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059bbf7: je 0x59bc36 */ if (fZ) goto L_0059bc36;
L_0059bbf9:; BB(0x0059bbf9);
    /* 0059bbf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059bbfb: jne 0x59bc36 */ if (!fZ) goto L_0059bc36;
L_0059bbfd:; BB(0x0059bbfd);
    /* 0059bbfd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059bbff: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59bc04u); f_007aa094();
    /* 0059bc04: mov eax, dword ptr [ebx + 0x404] */ r_eax = R32((u32)(r_ebx+0x404u));
    /* 0059bc0a: lea ecx, [ebx + 0x404] */ r_ecx = (u32)(r_ebx+0x404u);
    /* 0059bc10: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x59bc13u); call_ind(t); }
    /* 0059bc13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059bc15: je 0x59bc36 */ if (fZ) goto L_0059bc36;
L_0059bc17:; BB(0x0059bc17);
    /* 0059bc17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bc19: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0059bc1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059bc1d: call 0x578658 */ r_esp -= 4; W32(r_esp, 0x59bc22u); f_00578658();
    /* 0059bc22: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0059bc26: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059bc2b: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0059bc2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059bc32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059bc33: ret 4 */ FN_RET(0x0059bbe8); r_esp += 8; return;
L_0059bc36:; BB(0x0059bc36);
    /* 0059bc36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059bc37: ret 4 */ FN_RET(0x0059bbe8); r_esp += 8; return;
L_0059bc3a:; BB(0x0059bc3a);
    /* 0059bc3a: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 0059bc40: mov eax, 6 */ r_eax = 0x6u;
    /* 0059bc45: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0059bc4c: or edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059bc4f: mov dword ptr [ebx + 0x3d0], edx */ W32((u32)(r_ebx+0x3d0u), r_edx);
    /* 0059bc55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059bc57: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x59bc5cu); f_0051f894();
    /* 0059bc5c: mov dword ptr [ebx + 0x4ec], 0 */ W32((u32)(r_ebx+0x4ecu), 0x0u);
    /* 0059bc66: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0059bc6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059bc6d: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x59bc72u); f_005787fc();
    /* 0059bc72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059bc73: lea ecx, [ebx + 0x404] */ r_ecx = (u32)(r_ebx+0x404u);
    /* 0059bc79: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x59bc7eu); f_00512458();
    /* 0059bc7e: mov dword ptr [ebx + 0x400], 0 */ W32((u32)(r_ebx+0x400u), 0x0u);
    /* 0059bc88: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bc8d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059bc8f: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x59bc94u); f_007879b8();
    /* 0059bc94: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059bc97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059bc99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bc9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bc9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bc9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059bc9d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59bca2u); f_00814298();
    /* 0059bca2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059bca5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059bca6: ret 4 */ FN_RET(0x0059bbe8); r_esp += 8; return;
}

void f_0059bcac(void) /* sub_59BCAC */
{
    FN_ENTER(0x0059bcac);
    /* 0059bcac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059bcad: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059bcb0: mov edi, ecx */ r_edi = r_ecx;
    /* 0059bcb2: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059bcb6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bcb9: je 0x59bd78 */ if (fZ) goto L_0059bd78;
L_0059bcbf:; BB(0x0059bcbf);
    /* 0059bcbf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bcc2: je 0x59bd5a */ if (fZ) goto L_0059bd5a;
L_0059bcc8:; BB(0x0059bcc8);
    /* 0059bcc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bcca: jne 0x59bd47 */ if (!fZ) goto L_0059bd47;
L_0059bccc:; BB(0x0059bccc);
    /* 0059bccc: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bcce: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59bcd3u); f_007aa094();
    /* 0059bcd3: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 0059bcd9: mov edx, dword ptr [edi + 0x310] */ r_edx = R32((u32)(r_edi+0x310u));
    /* 0059bcdf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059bce2: mov eax, dword ptr [edi + 0x314] */ r_eax = R32((u32)(r_edi+0x314u));
    /* 0059bce8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059bcec: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059bcf0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059bcf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059bcf4: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x59bcf9u); f_007828e4();
    /* 0059bcf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059bcfa: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059bcfd: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0059bd01: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0059bd05: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0059bd09: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bd0b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059bd0e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059bd12: call 0x520b10 */ r_esp -= 4; W32(r_esp, 0x59bd17u); f_00520b10();
    /* 0059bd17: fld dword ptr [0x929970] */ FPUSH(R_F32((u32)(0x929970u)));
    /* 0059bd1d: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0059bd23: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0059bd25: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0059bd2b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0059bd2d: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0059bd33: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 0059bd39: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bd3b: call 0x59bbc0 */ r_esp -= 4; W32(r_esp, 0x59bd40u); f_0059bbc0();
    /* 0059bd40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059bd43: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059bd44: ret 4 */ FN_RET(0x0059bcac); r_esp += 8; return;
L_0059bd47:; BB(0x0059bd47);
    /* 0059bd47: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bd4a: jne 0x59bd71 */ if (!fZ) goto L_0059bd71;
L_0059bd4c:; BB(0x0059bd4c);
    /* 0059bd4c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bd4e: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x59bd53u); f_0051f81c();
    /* 0059bd53: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059bd56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059bd57: ret 4 */ FN_RET(0x0059bcac); r_esp += 8; return;
L_0059bd5a:; BB(0x0059bd5a);
    /* 0059bd5a: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0059bd60: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059bd62: je 0x59bd71 */ if (fZ) goto L_0059bd71;
L_0059bd64:; BB(0x0059bd64);
    /* 0059bd64: push dword ptr [edi + 0x380] */ { u32 v = R32((u32)(r_edi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059bd6a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bd6c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59bd71u); f_0051f62c();
L_0059bd71:; BB(0x0059bd71);
    /* 0059bd71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059bd74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059bd75: ret 4 */ FN_RET(0x0059bcac); r_esp += 8; return;
L_0059bd78:; BB(0x0059bd78);
    /* 0059bd78: mov eax, 5 */ r_eax = 0x5u;
    /* 0059bd7d: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0059bd84: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bd86: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59bd8bu); f_007aa094();
    /* 0059bd8b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059bd8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059bd8f: ret 4 */ FN_RET(0x0059bcac); r_esp += 8; return;
}

void f_0059bd94(void) /* sub_59BD94 */
{
    FN_ENTER(0x0059bd94);
    /* 0059bd94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059bd95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059bd96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bd97: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059bd9a: mov edi, ecx */ r_edi = r_ecx;
    /* 0059bd9c: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0059bda0: movzx eax, word ptr [edi + 0x3ee] */ r_eax = (u32)R16((u32)(r_edi+0x3eeu));
    /* 0059bda7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059bda8: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59bdadu); f_007b4d18();
    /* 0059bdad: mov ebx, eax */ r_ebx = r_eax;
    /* 0059bdaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059bdb2: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bdb5: je 0x59c0ce */ if (fZ) goto L_0059c0ce;
L_0059bdbb:; BB(0x0059bdbb);
    /* 0059bdbb: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bdbe: je 0x59beb2 */ if (fZ) goto L_0059beb2;
L_0059bdc4:; BB(0x0059bdc4);
    /* 0059bdc4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bdc6: jne 0x59be83 */ if (!fZ) goto L_0059be83;
L_0059bdcc:; BB(0x0059bdcc);
    /* 0059bdcc: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bdce: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59bdd3u); f_007aa094();
    /* 0059bdd3: mov esi, dword ptr [edi + 0x4ec] */ r_esi = R32((u32)(r_edi+0x4ecu));
    /* 0059bdd9: mov edx, dword ptr [edi + 0x4f0] */ r_edx = R32((u32)(r_edi+0x4f0u));
    /* 0059bddf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059bde2: mov dword ptr [edi + 0x4ec], esi */ W32((u32)(r_edi+0x4ecu), r_esi);
    /* 0059bde8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bdea: je 0x59bf7c */ if (fZ) goto L_0059bf7c;
L_0059bdf0:; BB(0x0059bdf0);
    /* 0059bdf0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bdf3: je 0x59bf0f */ if (fZ) goto L_0059bf0f;
L_0059bdf9:; BB(0x0059bdf9);
    /* 0059bdf9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059bdfc: jl 0x59be5f */ if ((fS!=fO)) goto L_0059be5f;
L_0059bdfe:; BB(0x0059bdfe);
    /* 0059bdfe: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059be01: jg 0x59be3f */ if ((!fZ&&fS==fO)) goto L_0059be3f;
L_0059be03:; BB(0x0059be03);
    /* 0059be03: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0059be09: fcomp dword ptr [0x92996c] */ fx_compare(ST(0), R_F32((u32)(0x92996cu))); FPOP();
    /* 0059be0f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059be11: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059be12: jb 0x59be1d */ if (fC) goto L_0059be1d;
L_0059be14:; BB(0x0059be14);
    /* 0059be14: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059be17: je 0x59beca */ if (fZ) goto L_0059beca;
L_0059be1d:; BB(0x0059be1d);
    /* 0059be1d: mov edx, dword ptr [edi + 0xb0] */ r_edx = R32((u32)(r_edi+0xb0u));
    /* 0059be23: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059be26: je 0x59be5f */ if (fZ) goto L_0059be5f;
L_0059be28:; BB(0x0059be28);
    /* 0059be28: mov dword ptr [edi + 0x4f0], 5 */ W32((u32)(r_edi+0x4f0u), 0x5u);
    /* 0059be32: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059be34: je 0x59be5f */ if (fZ) goto L_0059be5f;
L_0059be36:; BB(0x0059be36);
    /* 0059be36: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059be38: call 0x59ac54 */ r_esp -= 4; W32(r_esp, 0x59be3du); f_0059ac54();
    /* 0059be3d: jmp 0x59be5f */ goto L_0059be5f;
L_0059be3f:; BB(0x0059be3f);
    /* 0059be3f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059be42: jne 0x59be5f */ if (!fZ) goto L_0059be5f;
L_0059be44:; BB(0x0059be44);
    /* 0059be44: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0059be47: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0059be4a: fcomp dword ptr [0x929968] */ fx_compare(ST(0), R_F32((u32)(0x929968u))); FPOP();
    /* 0059be50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059be52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059be53: jb 0x59be5f */ if (fC) goto L_0059be5f;
L_0059be55:; BB(0x0059be55);
    /* 0059be55: mov dword ptr [edi + 0x4f0], 5 */ W32((u32)(r_edi+0x4f0u), 0x5u);
L_0059be5f:; BB(0x0059be5f);
    /* 0059be5f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059be61: mov ecx, edi */ r_ecx = r_edi;
    /* 0059be63: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59be69u); call_ind(t); }
    /* 0059be69: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059be6b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059be6d: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x59be73u); call_ind(t); }
    /* 0059be73: mov ecx, edi */ r_ecx = r_edi;
    /* 0059be75: call 0x59bbc0 */ r_esp -= 4; W32(r_esp, 0x59be7au); f_0059bbc0();
    /* 0059be7a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059be7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059be7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059be7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059be80: ret 4 */ FN_RET(0x0059bd94); r_esp += 8; return;
L_0059be83:; BB(0x0059be83);
    /* 0059be83: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059be86: jne 0x59bec1 */ if (!fZ) goto L_0059bec1;
L_0059be88:; BB(0x0059be88);
    /* 0059be88: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059be8a: je 0x59be93 */ if (fZ) goto L_0059be93;
L_0059be8c:; BB(0x0059be8c);
    /* 0059be8c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059be8e: call 0x59ac54 */ r_esp -= 4; W32(r_esp, 0x59be93u); f_0059ac54();
L_0059be93:; BB(0x0059be93);
    /* 0059be93: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059be99: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059be9c: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0059bea2: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bea4: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x59bea9u); f_00520f68();
    /* 0059bea9: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059beac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059bead: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059beae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059beaf: ret 4 */ FN_RET(0x0059bd94); r_esp += 8; return;
L_0059beb2:; BB(0x0059beb2);
    /* 0059beb2: mov eax, dword ptr [edi + 0x4f0] */ r_eax = R32((u32)(r_edi+0x4f0u));
    /* 0059beb8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bebb: je 0x59c0b5 */ if (fZ) goto L_0059c0b5;
L_0059bec1:; BB(0x0059bec1);
    /* 0059bec1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059bec4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059bec5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059bec6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059bec7: ret 4 */ FN_RET(0x0059bd94); r_esp += 8; return;
L_0059beca:; BB(0x0059beca);
    /* 0059beca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059becc: je 0x59bed7 */ if (fZ) goto L_0059bed7;
L_0059bece:; BB(0x0059bece);
    /* 0059bece: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059bed0: call 0x59ac04 */ r_esp -= 4; W32(r_esp, 0x59bed5u); f_0059ac04();
    /* 0059bed5: jmp 0x59bedc */ goto L_0059bedc;
L_0059bed7:; BB(0x0059bed7);
    /* 0059bed7: mov eax, 3 */ r_eax = 0x3u;
L_0059bedc:; BB(0x0059bedc);
    /* 0059bedc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bedf: jne 0x59bef7 */ if (!fZ) goto L_0059bef7;
L_0059bee1:; BB(0x0059bee1);
    /* 0059bee1: mov dword ptr [edi + 0x4f0], 2 */ W32((u32)(r_edi+0x4f0u), 0x2u);
    /* 0059beeb: mov ecx, edi */ r_ecx = r_edi;
    /* 0059beed: call 0x59c108 */ r_esp -= 4; W32(r_esp, 0x59bef2u); f_0059c108();
    /* 0059bef2: jmp 0x59be1d */ goto L_0059be1d;
L_0059bef7:; BB(0x0059bef7);
    /* 0059bef7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059befa: jne 0x59be1d */ if (!fZ) goto L_0059be1d;
L_0059bf00:; BB(0x0059bf00);
    /* 0059bf00: mov dword ptr [edi + 0x4f0], 2 */ W32((u32)(r_edi+0x4f0u), 0x2u);
    /* 0059bf0a: jmp 0x59be1d */ goto L_0059be1d;
L_0059bf0f:; BB(0x0059bf0f);
    /* 0059bf0f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bf11: je 0x59bf30 */ if (fZ) goto L_0059bf30;
L_0059bf13:; BB(0x0059bf13);
    /* 0059bf13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059bf15: call 0x59abe8 */ r_esp -= 4; W32(r_esp, 0x59bf1au); f_0059abe8();
    /* 0059bf1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bf1c: jne 0x59bf2a */ if (!fZ) goto L_0059bf2a;
L_0059bf1e:; BB(0x0059bf1e);
    /* 0059bf1e: mov dword ptr [edi + 0x4f0], 5 */ W32((u32)(r_edi+0x4f0u), 0x5u);
    /* 0059bf28: jmp 0x59bf59 */ goto L_0059bf59;
L_0059bf2a:; BB(0x0059bf2a);
    /* 0059bf2a: mov esi, dword ptr [edi + 0x4ec] */ r_esi = R32((u32)(r_edi+0x4ecu));
L_0059bf30:; BB(0x0059bf30);
    /* 0059bf30: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0059bf34: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0059bf38: fcomp dword ptr [0x929964] */ fx_compare(ST(0), R_F32((u32)(0x929964u))); FPOP();
    /* 0059bf3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059bf40: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059bf41: jb 0x59bf59 */ if (fC) goto L_0059bf59;
L_0059bf43:; BB(0x0059bf43);
    /* 0059bf43: mov dword ptr [edi + 0x4f0], 3 */ W32((u32)(r_edi+0x4f0u), 0x3u);
    /* 0059bf4d: mov eax, 4 */ r_eax = 0x4u;
    /* 0059bf52: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_0059bf59:; BB(0x0059bf59);
    /* 0059bf59: push 0x1df */ { u32 v = 0x1dfu; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf5e: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bf60: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x59bf65u); f_007879b8();
    /* 0059bf65: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0059bf68: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059bf6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf6d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf6f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x59bf74u); f_008144b0();
    /* 0059bf74: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059bf77: jmp 0x59be5f */ goto L_0059be5f;
L_0059bf7c:; BB(0x0059bf7c);
    /* 0059bf7c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bf7e: je 0x59c062 */ if (fZ) goto L_0059c062;
L_0059bf84:; BB(0x0059bf84);
    /* 0059bf84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059bf86: call 0x59abe8 */ r_esp -= 4; W32(r_esp, 0x59bf8bu); f_0059abe8();
    /* 0059bf8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bf8d: jne 0x59bf9a */ if (!fZ) goto L_0059bf9a;
L_0059bf8f:; BB(0x0059bf8f);
    /* 0059bf8f: mov esi, dword ptr [edi + 0x4ec] */ r_esi = R32((u32)(r_edi+0x4ecu));
    /* 0059bf95: jmp 0x59c062 */ goto L_0059c062;
L_0059bf9a:; BB(0x0059bf9a);
    /* 0059bf9a: push dword ptr [edi + 0x398] */ { u32 v = R32((u32)(r_edi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059bfa0: mov dword ptr [edi + 0x4ec], 0 */ W32((u32)(r_edi+0x4ecu), 0x0u);
    /* 0059bfaa: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x59bfafu); f_00520f3c();
    /* 0059bfaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059bfb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bfb2: je 0x59c053 */ if (fZ) goto L_0059c053;
L_0059bfb8:; BB(0x0059bfb8);
    /* 0059bfb8: cmp edi, dword ptr [edi + 0x398] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edi+0x398u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bfbe: je 0x59c088 */ if (fZ) goto L_0059c088;
L_0059bfc4:; BB(0x0059bfc4);
    /* 0059bfc4: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bfc6: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x59bfcbu); f_005213d8();
    /* 0059bfcb: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bfcd: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x59bfd2u); f_00521410();
    /* 0059bfd2: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 0059bfd8: fcomp dword ptr [0x929960] */ fx_compare(ST(0), R_F32((u32)(0x929960u))); FPOP();
    /* 0059bfde: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059bfe0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059bfe1: jb 0x59bfef */ if (fC) goto L_0059bfef;
L_0059bfe3:; BB(0x0059bfe3);
    /* 0059bfe3: mov dword ptr [edi + 0x4f0], 4 */ W32((u32)(r_edi+0x4f0u), 0x4u);
    /* 0059bfed: jmp 0x59c017 */ goto L_0059c017;
L_0059bfef:; BB(0x0059bfef);
    /* 0059bfef: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0059bff5: mov eax, 1 */ r_eax = 0x1u;
    /* 0059bffa: mov dword ptr [edi + 0x4f0], eax */ W32((u32)(r_edi+0x4f0u), r_eax);
    /* 0059c000: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0059c007: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059c00a: mov dword ptr [edi + 0x3d0], edx */ W32((u32)(r_edi+0x3d0u), r_edx);
    /* 0059c010: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c012: call 0x59c164 */ r_esp -= 4; W32(r_esp, 0x59c017u); f_0059c164();
L_0059c017:; BB(0x0059c017);
    /* 0059c017: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0059c01d: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0059c023: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0059c025: fmul qword ptr [0x9298e8] */ ST(0) = ST(0) * R_F64((u32)(0x9298e8u));
    /* 0059c02b: fdiv qword ptr [0x9298e0] */ ST(0) = ST(0) / R_F64((u32)(0x9298e0u));
    /* 0059c031: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0059c035: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0059c03a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059c03f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0059c043: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0059c047: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0059c04a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0059c04e: jmp 0x59be5f */ goto L_0059be5f;
L_0059c053:; BB(0x0059c053);
    /* 0059c053: mov dword ptr [edi + 0x4f0], 4 */ W32((u32)(r_edi+0x4f0u), 0x4u);
    /* 0059c05d: jmp 0x59be5f */ goto L_0059be5f;
L_0059c062:; BB(0x0059c062);
    /* 0059c062: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0059c066: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0059c06a: fcomp dword ptr [0x92995c] */ fx_compare(ST(0), R_F32((u32)(0x92995cu))); FPOP();
    /* 0059c070: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059c072: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059c073: jb 0x59be5f */ if (fC) goto L_0059be5f;
L_0059c079:; BB(0x0059c079);
    /* 0059c079: mov dword ptr [edi + 0x4f0], 5 */ W32((u32)(r_edi+0x4f0u), 0x5u);
    /* 0059c083: jmp 0x59be5f */ goto L_0059be5f;
L_0059c088:; BB(0x0059c088);
    /* 0059c088: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0059c08e: mov eax, 1 */ r_eax = 0x1u;
    /* 0059c093: mov dword ptr [edi + 0x4f0], eax */ W32((u32)(r_edi+0x4f0u), r_eax);
    /* 0059c099: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0059c0a0: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059c0a3: mov dword ptr [edi + 0x3d0], edx */ W32((u32)(r_edi+0x3d0u), r_edx);
    /* 0059c0a9: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c0ab: call 0x59c164 */ r_esp -= 4; W32(r_esp, 0x59c0b0u); f_0059c164();
    /* 0059c0b0: jmp 0x59be5f */ goto L_0059be5f;
L_0059c0b5:; BB(0x0059c0b5);
    /* 0059c0b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c0b7: call 0x59c180 */ r_esp -= 4; W32(r_esp, 0x59c0bcu); f_0059c180();
    /* 0059c0bc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c0be: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c0c0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59c0c5u); f_0051f62c();
    /* 0059c0c5: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059c0c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059c0c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059c0ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059c0cb: ret 4 */ FN_RET(0x0059bd94); r_esp += 8; return;
L_0059c0ce:; BB(0x0059c0ce);
    /* 0059c0ce: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c0d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059c0d2: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0059c0d9: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c0db: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59c0e0u); f_0051f664();
    /* 0059c0e0: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059c0e6: or eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059c0e9: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0059c0ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059c0f1: mov dword ptr [edi + 0x4ec], edx */ W32((u32)(r_edi+0x4ecu), r_edx);
    /* 0059c0f7: mov dword ptr [edi + 0x4f0], edx */ W32((u32)(r_edi+0x4f0u), r_edx);
    /* 0059c0fd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059c100: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059c101: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059c102: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059c103: ret 4 */ FN_RET(0x0059bd94); r_esp += 8; return;
}

void f_0059bf80(void)
{
    FN_ENTER(0x0059bf80);
    goto L_0059bf80;
L_0059be5f:; BB(0x0059be5f);
    /* 0059be5f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059be61: mov ecx, edi */ r_ecx = r_edi;
    /* 0059be63: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59be69u); call_ind(t); }
    /* 0059be69: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059be6b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059be6d: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x59be73u); call_ind(t); }
    /* 0059be73: mov ecx, edi */ r_ecx = r_edi;
    /* 0059be75: call 0x59bbc0 */ r_esp -= 4; W32(r_esp, 0x59be7au); f_0059bbc0();
    /* 0059be7a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059be7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059be7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059be7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059be80: ret 4 */ FN_RET(0x0059bf80); r_esp += 8; return;
L_0059bf80:; BB(0x0059bf80);
    /* 0059bf80: fiadd word ptr [eax] */ ST(0) = ST(0) + (long double)(i16)R16((u32)(r_eax));
    /* 0059bf82: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0059bf84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059bf86: call 0x59abe8 */ r_esp -= 4; W32(r_esp, 0x59bf8bu); f_0059abe8();
    /* 0059bf8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bf8d: jne 0x59bf9a */ if (!fZ) goto L_0059bf9a;
L_0059bf8f:; BB(0x0059bf8f);
    /* 0059bf8f: mov esi, dword ptr [edi + 0x4ec] */ r_esi = R32((u32)(r_edi+0x4ecu));
    /* 0059bf95: jmp 0x59c062 */ goto L_0059c062;
L_0059bf9a:; BB(0x0059bf9a);
    /* 0059bf9a: push dword ptr [edi + 0x398] */ { u32 v = R32((u32)(r_edi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059bfa0: mov dword ptr [edi + 0x4ec], 0 */ W32((u32)(r_edi+0x4ecu), 0x0u);
    /* 0059bfaa: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x59bfafu); f_00520f3c();
    /* 0059bfaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059bfb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bfb2: je 0x59c053 */ if (fZ) goto L_0059c053;
L_0059bfb8:; BB(0x0059bfb8);
    /* 0059bfb8: cmp edi, dword ptr [edi + 0x398] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edi+0x398u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bfbe: je 0x59c088 */ if (fZ) goto L_0059c088;
L_0059bfc4:; BB(0x0059bfc4);
    /* 0059bfc4: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bfc6: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x59bfcbu); f_005213d8();
    /* 0059bfcb: mov ecx, edi */ r_ecx = r_edi;
    /* 0059bfcd: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x59bfd2u); f_00521410();
    /* 0059bfd2: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 0059bfd8: fcomp dword ptr [0x929960] */ fx_compare(ST(0), R_F32((u32)(0x929960u))); FPOP();
    /* 0059bfde: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059bfe0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059bfe1: jb 0x59bfef */ if (fC) goto L_0059bfef;
L_0059bfe3:; BB(0x0059bfe3);
    /* 0059bfe3: mov dword ptr [edi + 0x4f0], 4 */ W32((u32)(r_edi+0x4f0u), 0x4u);
    /* 0059bfed: jmp 0x59c017 */ goto L_0059c017;
L_0059bfef:; BB(0x0059bfef);
    /* 0059bfef: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0059bff5: mov eax, 1 */ r_eax = 0x1u;
    /* 0059bffa: mov dword ptr [edi + 0x4f0], eax */ W32((u32)(r_edi+0x4f0u), r_eax);
    /* 0059c000: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0059c007: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059c00a: mov dword ptr [edi + 0x3d0], edx */ W32((u32)(r_edi+0x3d0u), r_edx);
    /* 0059c010: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c012: call 0x59c164 */ r_esp -= 4; W32(r_esp, 0x59c017u); f_0059c164();
L_0059c017:; BB(0x0059c017);
    /* 0059c017: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0059c01d: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0059c023: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0059c025: fmul qword ptr [0x9298e8] */ ST(0) = ST(0) * R_F64((u32)(0x9298e8u));
    /* 0059c02b: fdiv qword ptr [0x9298e0] */ ST(0) = ST(0) / R_F64((u32)(0x9298e0u));
    /* 0059c031: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0059c035: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0059c03a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059c03f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0059c043: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0059c047: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0059c04a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0059c04e: jmp 0x59be5f */ goto L_0059be5f;
L_0059c053:; BB(0x0059c053);
    /* 0059c053: mov dword ptr [edi + 0x4f0], 4 */ W32((u32)(r_edi+0x4f0u), 0x4u);
    /* 0059c05d: jmp 0x59be5f */ goto L_0059be5f;
L_0059c062:; BB(0x0059c062);
    /* 0059c062: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0059c066: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0059c06a: fcomp dword ptr [0x92995c] */ fx_compare(ST(0), R_F32((u32)(0x92995cu))); FPOP();
    /* 0059c070: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059c072: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059c073: jb 0x59be5f */ if (fC) goto L_0059be5f;
L_0059c079:; BB(0x0059c079);
    /* 0059c079: mov dword ptr [edi + 0x4f0], 5 */ W32((u32)(r_edi+0x4f0u), 0x5u);
    /* 0059c083: jmp 0x59be5f */ goto L_0059be5f;
L_0059c088:; BB(0x0059c088);
    /* 0059c088: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0059c08e: mov eax, 1 */ r_eax = 0x1u;
    /* 0059c093: mov dword ptr [edi + 0x4f0], eax */ W32((u32)(r_edi+0x4f0u), r_eax);
    /* 0059c099: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0059c0a0: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059c0a3: mov dword ptr [edi + 0x3d0], edx */ W32((u32)(r_edi+0x3d0u), r_edx);
    /* 0059c0a9: mov ecx, edi */ r_ecx = r_edi;
    /* 0059c0ab: call 0x59c164 */ r_esp -= 4; W32(r_esp, 0x59c0b0u); f_0059c164();
    /* 0059c0b0: jmp 0x59be5f */ goto L_0059be5f;
}

