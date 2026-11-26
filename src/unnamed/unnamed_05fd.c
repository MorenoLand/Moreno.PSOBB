#include "protos.h"

void f_005fd048(void) /* sub_5FD048 */
{
    FN_ENTER(0x005fd048);
    /* 005fd048: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd049: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd04b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd04d: push 0x8de35c */ { u32 v = 0x8de35cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd052: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fd058: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd059: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fd060: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd063: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fd066: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005fd069: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005fd06c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005fd06f: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 005fd075: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fd078: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd07a: je 0x5fd0cf */ if (fZ) goto L_005fd0cf;
L_005fd07c:; BB(0x005fd07c);
    /* 005fd07c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005fd083: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd085: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fd08au); f_005caba4();
    /* 005fd08a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fd08d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd090: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005fd093: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd095: je 0x5fd0cf */ if (fZ) goto L_005fd0cf;
L_005fd097:; BB(0x005fd097);
    /* 005fd097: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005fd09e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fd0a5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd0a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005fd0aa: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0ac: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005fd0b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0b4: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fd0ba: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5fd0bfu); f_005e5cac();
    /* 005fd0bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd0c2: mov dword ptr [eax], 0xb0f2c0 */ W32((u32)(r_eax), 0xb0f2c0u);
    /* 005fd0c8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005fd0cf:; BB(0x005fd0cf);
    /* 005fd0cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd0d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fd0d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd0db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd0dc: ret  */ FN_RET(0x005fd048); r_esp += 4; return;
}

void f_005fd0e0(void) /* sub_5FD0E0 */
{
    FN_ENTER(0x005fd0e0);
    /* 005fd0e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd0e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0e5: push 0x8de384 */ { u32 v = 0x8de384u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fd0f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd0f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fd0f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd0fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fd0fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fd101: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fd104: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fd107: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fd10a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd10c: je 0x5fd163 */ if (fZ) goto L_005fd163;
L_005fd10e:; BB(0x005fd10e);
    /* 005fd10e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fd115: push 0x278 */ { u32 v = 0x278u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd11a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fd11fu); f_005caba4();
    /* 005fd11f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fd120: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fd123: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd125: je 0x5fd15f */ if (fZ) goto L_005fd15f;
L_005fd127:; BB(0x005fd127);
    /* 005fd127: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fd12e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fd135: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fd138: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fd13b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd13c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fd142: call 0x5fd174 */ r_esp -= 4; W32(r_esp, 0x5fd147u); f_005fd174();
    /* 005fd147: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fd14a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fd151:; BB(0x005fd151);
    /* 005fd151: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd154: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fd15b: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd15d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd15e: ret  */ FN_RET(0x005fd0e0); r_esp += 4; return;
L_005fd15f:; BB(0x005fd15f);
    /* 005fd15f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd161: jmp 0x5fd151 */ goto L_005fd151;
L_005fd163:; BB(0x005fd163);
    /* 005fd163: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd165: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd168: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fd16f: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd171: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd172: ret  */ FN_RET(0x005fd0e0); r_esp += 4; return;
}

void f_005fd174(void) /* sub_5FD174 */
{
    FN_ENTER(0x005fd174);
    /* 005fd174: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd175: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd177: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd179: push 0x8de3a0 */ { u32 v = 0x8de3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd17e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fd184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd185: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fd18c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd18f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fd192: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fd195: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fd198: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fd19b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fd19e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fd1a1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fd1a4: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fd1a9u); f_005e959c();
    /* 005fd1a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fd1b0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fd1b3: mov dword ptr [ecx], 0xb1ae60 */ W32((u32)(r_ecx), 0xb1ae60u);
    /* 005fd1b9: lea esi, [ecx + 0x240] */ r_esi = (u32)(r_ecx+0x240u);
    /* 005fd1bf: add ecx, 0x244 */ {  u32 a = r_ecx; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd1c5: mov ebx, 0xa */ r_ebx = 0xau;
L_005fd1ca:; BB(0x005fd1ca);
    /* 005fd1ca: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005fd1cf: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 005fd1d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fd1d4: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 005fd1d8: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd1db: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005fd1de: jne 0x5fd1ca */ if (!fZ) goto L_005fd1ca;
L_005fd1e0:; BB(0x005fd1e0);
    /* 005fd1e0: mov ecx, esi */ r_ecx = r_esi;
    /* 005fd1e2: call 0x6a2e30 */ r_esp -= 4; W32(r_esp, 0x5fd1e7u); f_006a2e30();
    /* 005fd1e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fd1ea: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fd1ed: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd1f0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd1f3: mov edx, dword ptr [eax + 0x1dc] */ r_edx = R32((u32)(r_eax+0x1dcu));
    /* 005fd1f9: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd1fc: mov byte ptr [eax + 0x1c0], 2 */ W8((u32)(r_eax+0x1c0u), 0x2u);
    /* 005fd203: mov dword ptr [eax + 0x1dc], edx */ W32((u32)(r_eax+0x1dcu), r_edx);
    /* 005fd209: mov byte ptr [eax + 0x1c4], 3 */ W8((u32)(r_eax+0x1c4u), 0x3u);
    /* 005fd210: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd213: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fd21a: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd21c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd21d: ret 8 */ FN_RET(0x005fd174); r_esp += 12; return;
}

void f_005fd220(void) /* sub_5FD220 */
{
    FN_ENTER(0x005fd220);
    /* 005fd220: mov dword ptr [0xa8e1fc], 0x3f800000 */ W32((u32)(0xa8e1fcu), 0x3f800000u);
    /* 005fd22a: mov dword ptr [0xa8e200], 0x41000000 */ W32((u32)(0xa8e200u), 0x41000000u);
    /* 005fd234: mov dword ptr [0xa8e204], 0x3fc00000 */ W32((u32)(0xa8e204u), 0x3fc00000u);
    /* 005fd23e: ret  */ FN_RET(0x005fd220); r_esp += 4; return;
}

void f_005fd240(void) /* sub_5FD240 */
{
    FN_ENTER(0x005fd240);
    /* 005fd240: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd241: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fd243: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fd245: call 0x5fd264 */ r_esp -= 4; W32(r_esp, 0x5fd24au); f_005fd264();
    /* 005fd24a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fd24e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd250: jne 0x5fd256 */ if (!fZ) goto L_005fd256;
L_005fd252:; BB(0x005fd252);
    /* 005fd252: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fd253: ret 4 */ FN_RET(0x005fd240); r_esp += 8; return;
L_005fd256:; BB(0x005fd256);
    /* 005fd256: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd257: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fd25cu); f_005c2f74();
    /* 005fd25c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fd25d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fd25e: ret 4 */ FN_RET(0x005fd240); r_esp += 8; return;
}

void f_005fd264(void) /* sub_5FD264 */
{
    FN_ENTER(0x005fd264);
    /* 005fd264: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd265: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd267: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd269: push 0x8de3bc */ { u32 v = 0x8de3bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd26e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fd274: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd275: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fd27c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd27f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fd282: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fd285: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fd288: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fd28b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fd28e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fd291: mov dword ptr [ecx], 0xb1afe0 */ W32((u32)(r_ecx), 0xb1afe0u);
    /* 005fd297: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fd29e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fd2a3u); f_005e61c8();
    /* 005fd2a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd2a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fd2ad: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd2af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd2b0: ret  */ FN_RET(0x005fd264); r_esp += 4; return;
}

void f_005fd2b4(void) /* sub_5FD2B4 */
{
    FN_ENTER(0x005fd2b4);
    /* 005fd2b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005fd2b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd2ba: je 0x5fd2d1 */ if (fZ) goto L_005fd2d1;
L_005fd2bc:; BB(0x005fd2bc);
    /* 005fd2bc: mov dword ptr [eax + 0x68], 0x3fcccccd */ W32((u32)(r_eax+0x68u), 0x3fcccccdu);
    /* 005fd2c3: mov dword ptr [eax + 0x6c], 0x3fcccccd */ W32((u32)(r_eax+0x6cu), 0x3fcccccdu);
    /* 005fd2ca: mov dword ptr [eax + 0x70], 0x3fcccccd */ W32((u32)(r_eax+0x70u), 0x3fcccccdu);
L_005fd2d1:; BB(0x005fd2d1);
    /* 005fd2d1: ret  */ FN_RET(0x005fd2b4); r_esp += 4; return;
}

void f_005fd2d4(void) /* sub_5FD2D4 */
{
    FN_ENTER(0x005fd2d4);
    /* 005fd2d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd2d5: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd2d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd2d9: push 0x8de3e4 */ { u32 v = 0x8de3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd2de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fd2e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd2e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fd2ec: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd2ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fd2f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fd2f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fd2f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fd2fb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fd2fd: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005fd303: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005fd30a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005fd30f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005fd314: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 005fd31b: mov word ptr [ebp - 0x70], ax */ W16((u32)(r_ebp+0xffffff90u), (u16)r_eax);
    /* 005fd31f: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005fd322: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005fd329: mov word ptr [ebp - 0x60], dx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_edx);
    /* 005fd32d: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005fd334: mov word ptr [ebp - 0x5e], dx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_edx);
    /* 005fd338: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005fd33f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005fd346: mov dword ptr [ebp - 0x44], 0xffffd556 */ W32((u32)(r_ebp+0xffffffbcu), 0xffffd556u);
    /* 005fd34d: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005fd351: mov word ptr [ebp - 0x70], ax */ W16((u32)(r_ebp+0xffffff90u), (u16)r_eax);
    /* 005fd355: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 005fd35b: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd361: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005fd364: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 005fd367: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005fd36a: mov eax, dword ptr [ebx + 0x1ac] */ r_eax = R32((u32)(r_ebx+0x1acu));
    /* 005fd370: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005fd373: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5fd378u); f_006a2e8c();
    /* 005fd378: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005fd37e: mov word ptr [ebp - 0x60], ax */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_eax);
    /* 005fd382: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd388: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5fd38du); f_006a3250();
    /* 005fd38d: mov esi, dword ptr [ebx + 0xf8] */ r_esi = R32((u32)(r_ebx+0xf8u));
    /* 005fd393: mov edi, dword ptr [esi + 0x60] */ r_edi = R32((u32)(r_esi+0x60u));
    /* 005fd396: mov word ptr [ebp - 0x5e], ax */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_eax);
    /* 005fd39a: movzx eax, word ptr [esi + 0x8a4] */ r_eax = (u32)R16((u32)(r_esi+0x8a4u));
    /* 005fd3a1: mov edx, dword ptr [eax*4 + 0x9cb9d0] */ r_edx = R32((u32)(r_eax*4+0x9cb9d0u));
    /* 005fd3a8: mov dword ptr [ebp - 0x58], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa8u), 0x3f800000u);
    /* 005fd3af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fd3b1: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005fd3b4: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005fd3bb: mov dword ptr [ebp - 0x50], 0x3f800000 */ W32((u32)(r_ebp+0xffffffb0u), 0x3f800000u);
    /* 005fd3c2: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 005fd3c5: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005fd3c8: mov dword ptr [ebp - 0x4c], 0x3f333333 */ W32((u32)(r_ebp+0xffffffb4u), 0x3f333333u);
    /* 005fd3cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3d0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3d2: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fd3d7u); f_005e83c8();
    /* 005fd3d7: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 005fd3da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3db: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fd3df: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fd3e4u); f_005e83c8();
    /* 005fd3e4: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 005fd3e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3e8: call 0x6f1188 */ r_esp -= 4; W32(r_esp, 0x5fd3edu); f_006f1188();
    /* 005fd3ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fd3f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd3f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd3f5: je 0x5fd434 */ if (fZ) goto L_005fd434;
L_005fd3f7:; BB(0x005fd3f7);
    /* 005fd3f7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005fd3fe: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd400: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fd405u); f_005caba4();
    /* 005fd405: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fd406: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005fd409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd40b: je 0x5fd434 */ if (fZ) goto L_005fd434;
L_005fd40d:; BB(0x005fd40d);
    /* 005fd40d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005fd414: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fd41b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd41e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd420: push 0x5fd2b4 */ { u32 v = 0x5fd2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd425: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd426: mov ecx, eax */ r_ecx = r_eax;
    /* 005fd428: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5fd42du); f_005e5b88();
    /* 005fd42d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005fd434:; BB(0x005fd434);
    /* 005fd434: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fd437: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fd43a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd43d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd440: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fd447: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd449: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd44a: ret  */ FN_RET(0x005fd2d4); r_esp += 4; return;
}

void f_005fd44c(void) /* sub_5FD44C */
{
    FN_ENTER(0x005fd44c);
    /* 005fd44c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd44d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd44f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd451: push 0x8de40c */ { u32 v = 0x8de40cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd456: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fd45c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd45d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fd464: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd467: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fd46a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fd46d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fd470: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fd473: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fd476: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd478: je 0x5fd4cf */ if (fZ) goto L_005fd4cf;
L_005fd47a:; BB(0x005fd47a);
    /* 005fd47a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fd481: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd486: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fd48bu); f_005caba4();
    /* 005fd48b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fd48c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fd48f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd491: je 0x5fd4cb */ if (fZ) goto L_005fd4cb;
L_005fd493:; BB(0x005fd493);
    /* 005fd493: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fd49a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fd4a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fd4a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fd4a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd4a8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fd4ae: call 0x5fd4e0 */ r_esp -= 4; W32(r_esp, 0x5fd4b3u); f_005fd4e0();
    /* 005fd4b3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fd4b6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fd4bd:; BB(0x005fd4bd);
    /* 005fd4bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd4c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fd4c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd4c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd4ca: ret  */ FN_RET(0x005fd44c); r_esp += 4; return;
L_005fd4cb:; BB(0x005fd4cb);
    /* 005fd4cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd4cd: jmp 0x5fd4bd */ goto L_005fd4bd;
L_005fd4cf:; BB(0x005fd4cf);
    /* 005fd4cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd4d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd4d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fd4db: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd4dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd4de: ret  */ FN_RET(0x005fd44c); r_esp += 4; return;
}

void f_005fd4e0(void) /* sub_5FD4E0 */
{
    FN_ENTER(0x005fd4e0);
    /* 005fd4e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd4e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fd4e3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fd4e7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fd4eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fd4ed: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fd4f2u); f_005e959c();
    /* 005fd4f2: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005fd4f8: mov dword ptr [ebx], 0xb1afe0 */ W32((u32)(r_ebx), 0xb1afe0u);
    /* 005fd4fe: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd501: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005fd507: mov eax, ebx */ r_eax = r_ebx;
    /* 005fd509: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fd50a: ret 8 */ FN_RET(0x005fd4e0); r_esp += 12; return;
}

void f_005fd510(void) /* sub_5FD510 */
{
    FN_ENTER(0x005fd510);
    /* 005fd510: mov dword ptr [0xa8e208], 0x3f800000 */ W32((u32)(0xa8e208u), 0x3f800000u);
    /* 005fd51a: mov dword ptr [0xa8e20c], 0x41000000 */ W32((u32)(0xa8e20cu), 0x41000000u);
    /* 005fd524: mov dword ptr [0xa8e210], 0x3fc00000 */ W32((u32)(0xa8e210u), 0x3fc00000u);
    /* 005fd52e: ret  */ FN_RET(0x005fd510); r_esp += 4; return;
}

void f_005fd530(void) /* sub_5FD530 */
{
    FN_ENTER(0x005fd530);
    /* 005fd530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd531: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd533: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd535: push 0x8de428 */ { u32 v = 0x8de428u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd53a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fd540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd541: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fd548: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd54b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fd54e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fd551: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fd554: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fd557: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fd55a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fd55d: mov eax, ecx */ r_eax = r_ecx;
    /* 005fd55f: mov dword ptr [eax], 0xb1b140 */ W32((u32)(r_eax), 0xb1b140u);
    /* 005fd565: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fd56c: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fd571u); f_005e61c8();
    /* 005fd571: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fd574: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fd576: jne 0x5fd588 */ if (!fZ) goto L_005fd588;
L_005fd578:; BB(0x005fd578);
    /* 005fd578: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd57b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fd582: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd584: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd585: ret 4 */ FN_RET(0x005fd530); r_esp += 8; return;
L_005fd588:; BB(0x005fd588);
    /* 005fd588: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd58b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd58c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fd591u); f_005c2f74();
    /* 005fd591: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fd592: jmp 0x5fd578 */ goto L_005fd578;
}

void f_005fd594(void) /* sub_5FD594 */
{
    FN_ENTER(0x005fd594);
    /* 005fd594: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fd595: mov edi, ecx */ r_edi = r_ecx;
    /* 005fd597: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005fd59e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fd5a1: jne 0x5fd61f */ if (!fZ) goto L_005fd61f;
L_005fd5a3:; BB(0x005fd5a3);
    /* 005fd5a3: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005fd5aa: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd5ad: jne 0x5fd5f1 */ if (!fZ) goto L_005fd5f1;
L_005fd5af:; BB(0x005fd5af);
    /* 005fd5af: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5b4: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5b9: lea eax, [edi + 0x24c] */ r_eax = (u32)(r_edi+0x24cu);
    /* 005fd5bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5c0: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fd5c5u); f_005dd728();
    /* 005fd5c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005fd5c8: fld dword ptr [0x92dfb4] */ FPUSH(R_F32((u32)(0x92dfb4u)));
    /* 005fd5ce: fcomp dword ptr [edi + 0x24c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x24cu))); FPOP();
    /* 005fd5d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fd5d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fd5d7: ja 0x5fd61f */ if ((!fC&&!fZ)) goto L_005fd61f;
L_005fd5d9:; BB(0x005fd5d9);
    /* 005fd5d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5db: push 0xffffd556 */ { u32 v = 0xffffd556u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5e0: add edi, 0x240 */ {  u32 a = r_edi; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005fd5e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5e7: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fd5ecu); f_005dd6f8();
    /* 005fd5ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fd5ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fd5f0: ret  */ FN_RET(0x005fd594); r_esp += 4; return;
L_005fd5f1:; BB(0x005fd5f1);
    /* 005fd5f1: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fd5f4: jne 0x5fd61f */ if (!fZ) goto L_005fd61f;
L_005fd5f6:; BB(0x005fd5f6);
    /* 005fd5f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5f8: push 0x3fcccccd */ { u32 v = 0x3fcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5fd: lea eax, [edi + 0x24c] */ r_eax = (u32)(r_edi+0x24cu);
    /* 005fd603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd604: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fd609u); f_005dd728();
    /* 005fd609: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd60b: push 0x2aaa */ { u32 v = 0x2aaau; r_esp -= 4; W32(r_esp, v); }
    /* 005fd610: add edi, 0x240 */ {  u32 a = r_edi; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005fd616: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fd617: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fd61cu); f_005dd6f8();
    /* 005fd61c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005fd61f:; BB(0x005fd61f);
    /* 005fd61f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fd620: ret  */ FN_RET(0x005fd594); r_esp += 4; return;
}

void f_005fd624(void) /* sub_5FD624 */
{
    FN_ENTER(0x005fd624);
    /* 005fd624: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fd625: mov esi, ecx */ r_esi = r_ecx;
    /* 005fd627: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 005fd62e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fd631: jne 0x5fd6b8 */ if (!fZ) goto L_005fd6b8;
L_005fd637:; BB(0x005fd637);
    /* 005fd637: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005fd63e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd641: jne 0x5fd684 */ if (!fZ) goto L_005fd684;
L_005fd643:; BB(0x005fd643);
    /* 005fd643: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd648: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd64d: lea eax, [esi + 0x240] */ r_eax = (u32)(r_esi+0x240u);
    /* 005fd653: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd654: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fd659u); f_005dd6f8();
    /* 005fd659: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd65c: mov eax, dword ptr [esi + 0x240] */ r_eax = R32((u32)(r_esi+0x240u));
    /* 005fd662: cmp eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fd667: jl 0x5fd6b8 */ if ((fS!=fO)) goto L_005fd6b8;
L_005fd669:; BB(0x005fd669);
    /* 005fd669: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 005fd66e: push 0xbdcccccd */ { u32 v = 0xbdcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd673: add esi, 0x24c */ {  u32 a = r_esi; u32 b = 0x24cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fd679: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fd67a: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fd67fu); f_005dd728();
    /* 005fd67f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fd682: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fd683: ret  */ FN_RET(0x005fd624); r_esp += 4; return;
L_005fd684:; BB(0x005fd684);
    /* 005fd684: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fd687: jne 0x5fd6b8 */ if (!fZ) goto L_005fd6b8;
L_005fd689:; BB(0x005fd689);
    /* 005fd689: push 0xc0333333 */ { u32 v = 0xc0333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd68e: push 0xbf333333 */ { u32 v = 0xbf333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd693: lea eax, [esi + 0x24c] */ r_eax = (u32)(r_esi+0x24cu);
    /* 005fd699: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd69a: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fd69fu); f_005dd728();
    /* 005fd69f: push 0xffff8000 */ { u32 v = 0xffff8000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6a4: push 0xffffeaab */ { u32 v = 0xffffeaabu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6a9: add esi, 0x240 */ {  u32 a = r_esi; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fd6af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6b0: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fd6b5u); f_005dd6f8();
    /* 005fd6b5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005fd6b8:; BB(0x005fd6b8);
    /* 005fd6b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fd6b9: ret  */ FN_RET(0x005fd624); r_esp += 4; return;
}

void f_005fd6bc(void) /* sub_5FD6BC */
{
    FN_ENTER(0x005fd6bc);
    /* 005fd6bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6be: sub esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd6c4: mov edi, ecx */ r_edi = r_ecx;
    /* 005fd6c6: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005fd6cd: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd6d0: jne 0x5fd8a3 */ if (!fZ) goto L_005fd8a3;
L_005fd6d6:; BB(0x005fd6d6);
    /* 005fd6d6: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005fd6dd: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd6e0: jne 0x5fd8a3 */ if (!fZ) goto L_005fd8a3;
L_005fd6e6:; BB(0x005fd6e6);
    /* 005fd6e6: mov ecx, edi */ r_ecx = r_edi;
    /* 005fd6e8: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5fd6edu); f_005e90b0();
    /* 005fd6ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd6ef: je 0x5fd8a3 */ if (fZ) goto L_005fd8a3;
L_005fd6f5:; BB(0x005fd6f5);
    /* 005fd6f5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005fd6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6f9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd6fb: mov ecx, edi */ r_ecx = r_edi;
    /* 005fd6fd: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fd702u); f_005e83c8();
    /* 005fd702: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5fd707u); f_008587a5();
    /* 005fd707: mov edx, dword ptr [edi + 0x250] */ r_edx = R32((u32)(r_edi+0x250u));
    /* 005fd70d: mov dword ptr [esp + 0xc0], eax */ W32((u32)(r_esp+0xc0u), r_eax);
    /* 005fd714: fild dword ptr [esp + 0xc0] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xc0u)));
    /* 005fd71b: fdiv dword ptr [0x92df9c] */ ST(0) = ST(0) / R_F32((u32)(0x92df9cu));
    /* 005fd721: fmul dword ptr [0x92dfa0] */ ST(0) = ST(0) * R_F32((u32)(0x92dfa0u));
    /* 005fd727: fnstcw word ptr [esp + 0xc8] */ W16((u32)(r_esp+0xc8u), fcw);
    /* 005fd72e: movzx eax, word ptr [esp + 0xc8] */ r_eax = (u32)R16((u32)(r_esp+0xc8u));
    /* 005fd736: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005fd73b: mov dword ptr [esp + 0xd0], eax */ W32((u32)(r_esp+0xd0u), r_eax);
    /* 005fd742: fldcw word ptr [esp + 0xd0] */ fcw = R16((u32)(r_esp+0xd0u));
    /* 005fd749: fistp dword ptr [esp + 0xd8] */ W32((u32)(r_esp+0xd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005fd750: fldcw word ptr [esp + 0xc8] */ fcw = R16((u32)(r_esp+0xc8u));
    /* 005fd757: mov ebp, dword ptr [esp + 0xd8] */ r_ebp = R32((u32)(r_esp+0xd8u));
    /* 005fd75e: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005fd761: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd763: jne 0x5fd787 */ if (!fZ) goto L_005fd787;
L_005fd765:; BB(0x005fd765);
    /* 005fd765: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005fd768: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd769: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005fd76f: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fd772: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd773: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd774: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5fd779u); f_006e2f20();
    /* 005fd779: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd77c: mov edx, dword ptr [edi + 0x250] */ r_edx = R32((u32)(r_edi+0x250u));
    /* 005fd782: jmp 0x5fd881 */ goto L_005fd881;
L_005fd787:; BB(0x005fd787);
    /* 005fd787: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd78a: jne 0x5fd7ce */ if (!fZ) goto L_005fd7ce;
L_005fd78c:; BB(0x005fd78c);
    /* 005fd78c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005fd78f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd791: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd792: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x5fd797u); f_00780630();
    /* 005fd797: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd79a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd79c: je 0x5fd7ac */ if (fZ) goto L_005fd7ac;
L_005fd79e:; BB(0x005fd79e);
    /* 005fd79e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005fd7a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd7a3: je 0x5fd7ac */ if (fZ) goto L_005fd7ac;
L_005fd7a5:; BB(0x005fd7a5);
    /* 005fd7a5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005fd7a8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
L_005fd7ac:; BB(0x005fd7ac);
    /* 005fd7ac: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005fd7af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd7b0: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005fd7b6: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fd7b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd7ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd7bb: call 0x6dd7e4 */ r_esp -= 4; W32(r_esp, 0x5fd7c0u); f_006dd7e4();
    /* 005fd7c0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd7c3: mov edx, dword ptr [edi + 0x250] */ r_edx = R32((u32)(r_edi+0x250u));
    /* 005fd7c9: jmp 0x5fd881 */ goto L_005fd881;
L_005fd7ce:; BB(0x005fd7ce);
    /* 005fd7ce: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005fd7d4: mov eax, dword ptr [ecx + 0x8d0] */ r_eax = R32((u32)(r_ecx+0x8d0u));
    /* 005fd7da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005fd7dc: jl 0x5fd881 */ if ((fS!=fO)) goto L_005fd881;
L_005fd7e2:; BB(0x005fd7e2);
    /* 005fd7e2: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fd7e5: jg 0x5fd881 */ if ((!fZ&&fS==fO)) goto L_005fd881;
L_005fd7eb:; BB(0x005fd7eb);
    /* 005fd7eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd7ed: je 0x5fd881 */ if (fZ) goto L_005fd881;
L_005fd7f3:; BB(0x005fd7f3);
    /* 005fd7f3: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005fd7f7: mov dword ptr [esp + 0xe0], ebx */ W32((u32)(r_esp+0xe0u), r_ebx);
    /* 005fd7fe: mov dword ptr [esp + 0xe4], esi */ W32((u32)(r_esp+0xe4u), r_esi);
    /* 005fd805: mov eax, 0xb */ r_eax = 0xbu;
    /* 005fd80a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005fd80c:; BB(0x005fd80c);
    /* 005fd80c: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 005fd811: mov word ptr [edx], si */ W16((u32)(r_edx), (u16)r_esi);
    /* 005fd814: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005fd816: mov word ptr [edx + 2], si */ W16((u32)(r_edx+0x2u), (u16)r_esi);
    /* 005fd81a: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 005fd81d: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fd820: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005fd823: jne 0x5fd80c */ if (!fZ) goto L_005fd80c;
L_005fd825:; BB(0x005fd825);
    /* 005fd825: mov ebx, dword ptr [esp + 0xe0] */ r_ebx = R32((u32)(r_esp+0xe0u));
    /* 005fd82c: mov esi, dword ptr [esp + 0xe4] */ r_esi = R32((u32)(r_esp+0xe4u));
    /* 005fd833: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 005fd83b: movzx eax, word ptr [ecx + 0x8d4] */ r_eax = (u32)R16((u32)(r_ecx+0x8d4u));
    /* 005fd842: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 005fd847: movzx edx, word ptr [ecx + 0x8d6] */ r_edx = (u32)R16((u32)(r_ecx+0x8d6u));
    /* 005fd84e: mov eax, dword ptr [edi + 0x250] */ r_eax = R32((u32)(r_edi+0x250u));
    /* 005fd854: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd857: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 005fd85c: je 0x5fd9ff */ if (fZ) goto L_005fd9ff;
L_005fd862:; BB(0x005fd862);
    /* 005fd862: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005fd865: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005fd869: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd86b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd86c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd86d: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fd873: call 0x6e6bf4 */ r_esp -= 4; W32(r_esp, 0x5fd878u); f_006e6bf4();
    /* 005fd878: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd87b: mov edx, dword ptr [edi + 0x250] */ r_edx = R32((u32)(r_edi+0x250u));
L_005fd881:; BB(0x005fd881);
    /* 005fd881: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fd884: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fd887: jle 0x5fd898 */ if ((fZ||fS!=fO)) goto L_005fd898;
L_005fd889:; BB(0x005fd889);
    /* 005fd889: mov dword ptr [edi + 0x250], 0 */ W32((u32)(r_edi+0x250u), 0x0u);
    /* 005fd893: jmp 0x5fd9f6 */ goto L_005fd9f6;
L_005fd898:; BB(0x005fd898);
    /* 005fd898: mov dword ptr [edi + 0x250], edx */ W32((u32)(r_edi+0x250u), r_edx);
    /* 005fd89e: jmp 0x5fd9f6 */ goto L_005fd9f6;
L_005fd8a3:; BB(0x005fd8a3);
    /* 005fd8a3: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005fd8a9: mov dword ptr [esp + 0x6c], 0 */ W32((u32)(r_esp+0x6cu), 0x0u);
    /* 005fd8b1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005fd8b6: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005fd8bb: mov dword ptr [esp + 0x7c], 0x3f800000 */ W32((u32)(r_esp+0x7cu), 0x3f800000u);
    /* 005fd8c3: mov word ptr [esp + 0x68], ax */ W16((u32)(r_esp+0x68u), (u16)r_eax);
    /* 005fd8c8: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 005fd8ce: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 005fd8d2: mov word ptr [esp + 0x78], dx */ W16((u32)(r_esp+0x78u), (u16)r_edx);
    /* 005fd8d7: mov dword ptr [esp + 0x8c], 0 */ W32((u32)(r_esp+0x8cu), 0x0u);
    /* 005fd8e2: mov word ptr [esp + 0x7a], dx */ W16((u32)(r_esp+0x7au), (u16)r_edx);
    /* 005fd8e7: mov dword ptr [esp + 0x88], 0 */ W32((u32)(r_esp+0x88u), 0x0u);
    /* 005fd8f2: mov dword ptr [esp + 0x84], 0 */ W32((u32)(r_esp+0x84u), 0x0u);
    /* 005fd8fd: mov dword ptr [esp + 0x80], 0 */ W32((u32)(r_esp+0x80u), 0x0u);
    /* 005fd908: mov dword ptr [esp + 0x94], 0xffffd556 */ W32((u32)(r_esp+0x94u), 0xffffd556u);
    /* 005fd913: movzx ebp, word ptr [ecx + 0x1c] */ r_ebp = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005fd917: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd91d: mov word ptr [esp + 0x68], bp */ W16((u32)(r_esp+0x68u), (u16)r_ebp);
    /* 005fd922: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 005fd926: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005fd929: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 005fd92d: mov eax, dword ptr [edi + 0x1ac] */ r_eax = R32((u32)(r_edi+0x1acu));
    /* 005fd933: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 005fd937: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5fd93cu); f_006a2e8c();
    /* 005fd93c: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005fd942: mov word ptr [esp + 0x78], ax */ W16((u32)(r_esp+0x78u), (u16)r_eax);
    /* 005fd947: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fd94d: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5fd952u); f_006a3250();
    /* 005fd952: mov word ptr [esp + 0x7a], ax */ W16((u32)(r_esp+0x7au), (u16)r_eax);
    /* 005fd957: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005fd95d: movzx edx, word ptr [eax + 0x8a4] */ r_edx = (u32)R16((u32)(r_eax+0x8a4u));
    /* 005fd964: mov ecx, edi */ r_ecx = r_edi;
    /* 005fd966: mov ebp, dword ptr [edx*4 + 0x9cb9d0] */ r_ebp = R32((u32)(r_edx*4+0x9cb9d0u));
    /* 005fd96d: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005fd96f: mov dword ptr [esp + 0x7c], ebp */ W32((u32)(r_esp+0x7cu), r_ebp);
    /* 005fd973: lea eax, [esp + 0xb0] */ r_eax = (u32)(r_esp+0xb0u);
    /* 005fd97a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd97b: call dword ptr [edx + 0xec] */ { u32 t = R32((u32)(r_edx+0xecu)); r_esp -= 4; W32(r_esp, 0x5fd981u); call_ind(t); }
    /* 005fd981: mov eax, dword ptr [esp + 0xb0] */ r_eax = R32((u32)(r_esp+0xb0u));
    /* 005fd988: mov edx, dword ptr [esp + 0xb4] */ r_edx = R32((u32)(r_esp+0xb4u));
    /* 005fd98f: mov ebp, dword ptr [esp + 0xb8] */ r_ebp = R32((u32)(r_esp+0xb8u));
    /* 005fd996: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 005fd99d: mov eax, dword ptr [esp + 0xbc] */ r_eax = R32((u32)(r_esp+0xbcu));
    /* 005fd9a4: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 005fd9ab: mov ecx, edi */ r_ecx = r_edi;
    /* 005fd9ad: mov dword ptr [esp + 0x88], ebp */ W32((u32)(r_esp+0x88u), r_ebp);
    /* 005fd9b4: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 005fd9bb: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005fd9c1: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 005fd9c4: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 005fd9cb: lea eax, [esp + 0x98] */ r_eax = (u32)(r_esp+0x98u);
    /* 005fd9d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd9d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd9d5: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fd9dau); f_005e83c8();
    /* 005fd9da: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 005fd9e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd9e2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd9e4: mov ecx, edi */ r_ecx = r_edi;
    /* 005fd9e6: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fd9ebu); f_005e83c8();
    /* 005fd9eb: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 005fd9ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd9f0: call 0x6f1188 */ r_esp -= 4; W32(r_esp, 0x5fd9f5u); f_006f1188();
    /* 005fd9f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005fd9f6:; BB(0x005fd9f6);
    /* 005fd9f6: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fd9fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd9fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fd9fe: ret  */ FN_RET(0x005fd6bc); r_esp += 4; return;
L_005fd9ff:; BB(0x005fd9ff);
    /* 005fd9ff: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005fda02: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005fda06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fda07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fda08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fda09: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fda0f: call 0x6f2570 */ r_esp -= 4; W32(r_esp, 0x5fda14u); f_006f2570();
    /* 005fda14: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fda17: mov edx, dword ptr [edi + 0x250] */ r_edx = R32((u32)(r_edi+0x250u));
    /* 005fda1d: jmp 0x5fd881 */ goto L_005fd881;
}

void f_005fda24(void) /* sub_5FDA24 */
{
    FN_ENTER(0x005fda24);
    /* 005fda24: mov eax, ecx */ r_eax = r_ecx;
    /* 005fda26: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 005fda2d: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fda30: jne 0x5fda98 */ if (!fZ) goto L_005fda98;
L_005fda32:; BB(0x005fda32);
    /* 005fda32: movzx edx, byte ptr [eax + 0xf4] */ r_edx = (u32)R8((u32)(r_eax+0xf4u));
    /* 005fda39: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fda3c: jne 0x5fda69 */ if (!fZ) goto L_005fda69;
L_005fda3e:; BB(0x005fda3e);
    /* 005fda3e: mov edx, dword ptr [0xa8d84c] */ r_edx = R32((u32)(0xa8d84cu));
    /* 005fda44: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fda47: jne 0x5fda57 */ if (!fZ) goto L_005fda57;
L_005fda49:; BB(0x005fda49);
    /* 005fda49: mov edx, dword ptr [eax + 0x240] */ r_edx = R32((u32)(r_eax+0x240u));
    /* 005fda4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fda51: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5fda56u); f_0082e9e4();
    /* 005fda56: ret  */ FN_RET(0x005fda24); r_esp += 4; return;
L_005fda57:; BB(0x005fda57);
    /* 005fda57: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fda5a: jne 0x5fda98 */ if (!fZ) goto L_005fda98;
L_005fda5c:; BB(0x005fda5c);
    /* 005fda5c: add eax, 0x244 */ {  u32 a = r_eax; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fda61: mov ecx, eax */ r_ecx = r_eax;
    /* 005fda63: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5fda68u); f_00831290();
    /* 005fda68: ret  */ FN_RET(0x005fda24); r_esp += 4; return;
L_005fda69:; BB(0x005fda69);
    /* 005fda69: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fda6c: jne 0x5fda98 */ if (!fZ) goto L_005fda98;
L_005fda6e:; BB(0x005fda6e);
    /* 005fda6e: mov edx, dword ptr [0xa8d84c] */ r_edx = R32((u32)(0xa8d84cu));
    /* 005fda74: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fda77: jne 0x5fda86 */ if (!fZ) goto L_005fda86;
L_005fda79:; BB(0x005fda79);
    /* 005fda79: add eax, 0x244 */ {  u32 a = r_eax; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fda7e: mov ecx, eax */ r_ecx = r_eax;
    /* 005fda80: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5fda85u); f_0082d838();
    /* 005fda85: ret  */ FN_RET(0x005fda24); r_esp += 4; return;
L_005fda86:; BB(0x005fda86);
    /* 005fda86: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fda89: jne 0x5fda98 */ if (!fZ) goto L_005fda98;
L_005fda8b:; BB(0x005fda8b);
    /* 005fda8b: mov edx, dword ptr [eax + 0x240] */ r_edx = R32((u32)(r_eax+0x240u));
    /* 005fda91: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fda93: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fda98u); f_00830c04();
L_005fda98:; BB(0x005fda98);
    /* 005fda98: ret  */ FN_RET(0x005fda24); r_esp += 4; return;
}

void f_005fda9c(void) /* sub_5FDA9C */
{
    FN_ENTER(0x005fda9c);
    /* 005fda9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fda9d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fda9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fdaa1: push 0x8de450 */ { u32 v = 0x8de450u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdaa6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fdaac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdaad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fdab4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fdab7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fdaba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fdabd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fdac0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fdac3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fdac6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdac8: je 0x5fdb1f */ if (fZ) goto L_005fdb1f;
L_005fdaca:; BB(0x005fdaca);
    /* 005fdaca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fdad1: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdad6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fdadbu); f_005caba4();
    /* 005fdadb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fdadc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fdadf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdae1: je 0x5fdb1b */ if (fZ) goto L_005fdb1b;
L_005fdae3:; BB(0x005fdae3);
    /* 005fdae3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fdaea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fdaf1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fdaf4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fdaf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdaf8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fdafe: call 0x5fdb30 */ r_esp -= 4; W32(r_esp, 0x5fdb03u); f_005fdb30();
    /* 005fdb03: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fdb06: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fdb0d:; BB(0x005fdb0d);
    /* 005fdb0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdb10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fdb17: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdb19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdb1a: ret  */ FN_RET(0x005fda9c); r_esp += 4; return;
L_005fdb1b:; BB(0x005fdb1b);
    /* 005fdb1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fdb1d: jmp 0x5fdb0d */ goto L_005fdb0d;
L_005fdb1f:; BB(0x005fdb1f);
    /* 005fdb1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fdb21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdb24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fdb2b: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdb2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdb2e: ret  */ FN_RET(0x005fda9c); r_esp += 4; return;
}

void f_005fdb30(void) /* sub_5FDB30 */
{
    FN_ENTER(0x005fdb30);
    /* 005fdb30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdb31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdb32: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fdb34: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005fdb38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdb39: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fdb3b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fdb3f: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fdb44u); f_005e959c();
    /* 005fdb44: mov edx, dword ptr [ebp + 0x1dc] */ r_edx = R32((u32)(r_ebp+0x1dcu));
    /* 005fdb4a: mov dword ptr [ebp], 0xb1b140 */ W32((u32)(r_ebp), 0xb1b140u);
    /* 005fdb51: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005fdb54: mov dword ptr [ebp + 0x1dc], edx */ W32((u32)(r_ebp+0x1dcu), r_edx);
    /* 005fdb5a: mov dword ptr [ebp + 0x240], 0 */ W32((u32)(r_ebp+0x240u), 0x0u);
    /* 005fdb64: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 005fdb68: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fdb6b: jne 0x5fdbd3 */ if (!fZ) goto L_005fdbd3;
L_005fdb6d:; BB(0x005fdb6d);
    /* 005fdb6d: movzx eax, byte ptr [ebx + 2] */ r_eax = (u32)R8((u32)(r_ebx+0x2u));
    /* 005fdb71: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fdb74: je 0x5fdbb5 */ if (fZ) goto L_005fdbb5;
L_005fdb76:; BB(0x005fdb76);
    /* 005fdb76: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fdb79: jne 0x5fdb9b */ if (!fZ) goto L_005fdb9b;
L_005fdb7b:; BB(0x005fdb7b);
    /* 005fdb7b: mov dword ptr [ebp + 0x244], 0 */ W32((u32)(r_ebp+0x244u), 0x0u);
    /* 005fdb85: mov dword ptr [ebp + 0x248], 0 */ W32((u32)(r_ebp+0x248u), 0x0u);
    /* 005fdb8f: mov dword ptr [ebp + 0x24c], 0 */ W32((u32)(r_ebp+0x24cu), 0x0u);
    /* 005fdb99: jmp 0x5fdbd3 */ goto L_005fdbd3;
L_005fdb9b:; BB(0x005fdb9b);
    /* 005fdb9b: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fdb9e: jne 0x5fdbd3 */ if (!fZ) goto L_005fdbd3;
L_005fdba0:; BB(0x005fdba0);
    /* 005fdba0: mov dword ptr [ebp + 0x250], 0 */ W32((u32)(r_ebp+0x250u), 0x0u);
    /* 005fdbaa: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fdbad: mov dword ptr [ebp + 0x1dc], edx */ W32((u32)(r_ebp+0x1dcu), r_edx);
    /* 005fdbb3: jmp 0x5fdbd3 */ goto L_005fdbd3;
L_005fdbb5:; BB(0x005fdbb5);
    /* 005fdbb5: mov dword ptr [ebp + 0x244], 0x3f800000 */ W32((u32)(r_ebp+0x244u), 0x3f800000u);
    /* 005fdbbf: mov dword ptr [ebp + 0x248], 0x3f800000 */ W32((u32)(r_ebp+0x248u), 0x3f800000u);
    /* 005fdbc9: mov dword ptr [ebp + 0x24c], 0x3f800000 */ W32((u32)(r_ebp+0x24cu), 0x3f800000u);
L_005fdbd3:; BB(0x005fdbd3);
    /* 005fdbd3: mov eax, ebp */ r_eax = r_ebp;
    /* 005fdbd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fdbd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdbd7: ret 8 */ FN_RET(0x005fdb30); r_esp += 12; return;
}

void f_005fdbdc(void) /* sub_5FDBDC */
{
    FN_ENTER(0x005fdbdc);
    /* 005fdbdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdbdd: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fdbe4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdbe7: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005fdbeb: jne 0x5fdc90 */ if (!fZ) goto L_005fdc90;
L_005fdbf1:; BB(0x005fdbf1);
    /* 005fdbf1: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fdbf8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdbfb: jne 0x5fdc90 */ if (!fZ) goto L_005fdc90;
L_005fdc01:; BB(0x005fdc01);
    /* 005fdc01: mov eax, dword ptr [ecx + 0x250] */ r_eax = R32((u32)(r_ecx+0x250u));
    /* 005fdc07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fdc09: je 0x5fdc63 */ if (fZ) goto L_005fdc63;
L_005fdc0b:; BB(0x005fdc0b);
    /* 005fdc0b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fdc0e: jne 0x5fdc30 */ if (!fZ) goto L_005fdc30;
L_005fdc10:; BB(0x005fdc10);
    /* 005fdc10: fld dword ptr [0x92df80] */ FPUSH(R_F32((u32)(0x92df80u)));
    /* 005fdc16: fld dword ptr [0x92df88] */ FPUSH(R_F32((u32)(0x92df88u)));
    /* 005fdc1c: fld dword ptr [0x92df88] */ FPUSH(R_F32((u32)(0x92df88u)));
    /* 005fdc22: fld dword ptr [0x92df88] */ FPUSH(R_F32((u32)(0x92df88u)));
    /* 005fdc28: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005fdc2a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005fdc2c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005fdc2e: jmp 0x5fdc7b */ goto L_005fdc7b;
L_005fdc30:; BB(0x005fdc30);
    /* 005fdc30: fld dword ptr [0x92df88] */ FPUSH(R_F32((u32)(0x92df88u)));
    /* 005fdc36: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fdc39: jne 0x5fdc4f */ if (!fZ) goto L_005fdc4f;
L_005fdc3b:; BB(0x005fdc3b);
    /* 005fdc3b: fld dword ptr [0x92df88] */ FPUSH(R_F32((u32)(0x92df88u)));
    /* 005fdc41: fld dword ptr [0x92df88] */ FPUSH(R_F32((u32)(0x92df88u)));
    /* 005fdc47: fld dword ptr [0x92df80] */ FPUSH(R_F32((u32)(0x92df80u)));
    /* 005fdc4d: jmp 0x5fdc7b */ goto L_005fdc7b;
L_005fdc4f:; BB(0x005fdc4f);
    /* 005fdc4f: fld dword ptr [0x92df88] */ FPUSH(R_F32((u32)(0x92df88u)));
    /* 005fdc55: fld dword ptr [0x92df88] */ FPUSH(R_F32((u32)(0x92df88u)));
    /* 005fdc5b: fld dword ptr [0x92df84] */ FPUSH(R_F32((u32)(0x92df84u)));
    /* 005fdc61: jmp 0x5fdc7b */ goto L_005fdc7b;
L_005fdc63:; BB(0x005fdc63);
    /* 005fdc63: fld dword ptr [0x92df88] */ FPUSH(R_F32((u32)(0x92df88u)));
    /* 005fdc69: fld dword ptr [0x92df88] */ FPUSH(R_F32((u32)(0x92df88u)));
    /* 005fdc6f: fld dword ptr [0x92df7c] */ FPUSH(R_F32((u32)(0x92df7cu)));
    /* 005fdc75: fld dword ptr [0x92df80] */ FPUSH(R_F32((u32)(0x92df80u)));
L_005fdc7b:; BB(0x005fdc7b);
    /* 005fdc7b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005fdc7d: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 005fdc7f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005fdc81: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 005fdc84: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 005fdc87: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 005fdc8a: mov eax, ebx */ r_eax = r_ebx;
    /* 005fdc8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fdc8d: ret 4 */ FN_RET(0x005fdbdc); r_esp += 8; return;
L_005fdc90:; BB(0x005fdc90);
    /* 005fdc90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdc91: call 0x5e7b8c */ r_esp -= 4; W32(r_esp, 0x5fdc96u); f_005e7b8c();
    /* 005fdc96: mov eax, ebx */ r_eax = r_ebx;
    /* 005fdc98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fdc99: ret 4 */ FN_RET(0x005fdbdc); r_esp += 8; return;
}

void f_005fdc9c(void) /* sub_5FDC9C */
{
    FN_ENTER(0x005fdc9c);
    /* 005fdc9c: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fdca3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdca6: jne 0x5fdce0 */ if (!fZ) goto L_005fdce0;
L_005fdca8:; BB(0x005fdca8);
    /* 005fdca8: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fdcaf: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdcb2: jne 0x5fdce0 */ if (!fZ) goto L_005fdce0;
L_005fdcb4:; BB(0x005fdcb4);
    /* 005fdcb4: mov eax, dword ptr [ecx + 0x250] */ r_eax = R32((u32)(r_ecx+0x250u));
    /* 005fdcba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fdcbc: je 0x5fdcda */ if (fZ) goto L_005fdcda;
L_005fdcbe:; BB(0x005fdcbe);
    /* 005fdcbe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fdcc1: jne 0x5fdcc9 */ if (!fZ) goto L_005fdcc9;
L_005fdcc3:; BB(0x005fdcc3);
    /* 005fdcc3: mov eax, 0xff00ffff */ r_eax = 0xff00ffffu;
    /* 005fdcc8: ret  */ FN_RET(0x005fdc9c); r_esp += 4; return;
L_005fdcc9:; BB(0x005fdcc9);
    /* 005fdcc9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fdccc: jne 0x5fdcd4 */ if (!fZ) goto L_005fdcd4;
L_005fdcce:; BB(0x005fdcce);
    /* 005fdcce: mov eax, 0xffffff00 */ r_eax = 0xffffff00u;
    /* 005fdcd3: ret  */ FN_RET(0x005fdc9c); r_esp += 4; return;
L_005fdcd4:; BB(0x005fdcd4);
    /* 005fdcd4: mov eax, 0xffffffc0 */ r_eax = 0xffffffc0u;
    /* 005fdcd9: ret  */ FN_RET(0x005fdc9c); r_esp += 4; return;
L_005fdcda:; BB(0x005fdcda);
    /* 005fdcda: mov eax, 0xffff8000 */ r_eax = 0xffff8000u;
    /* 005fdcdf: ret  */ FN_RET(0x005fdc9c); r_esp += 4; return;
L_005fdce0:; BB(0x005fdce0);
    /* 005fdce0: call 0x5e7c88 */ r_esp -= 4; W32(r_esp, 0x5fdce5u); f_005e7c88();
    /* 005fdce5: ret  */ FN_RET(0x005fdc9c); r_esp += 4; return;
}

void f_005fdce8(void) /* sub_5FDCE8 */
{
    FN_ENTER(0x005fdce8);
    /* 005fdce8: mov dword ptr [0xa8e214], 0x3f800000 */ W32((u32)(0xa8e214u), 0x3f800000u);
    /* 005fdcf2: mov dword ptr [0xa8e218], 0x41000000 */ W32((u32)(0xa8e218u), 0x41000000u);
    /* 005fdcfc: mov dword ptr [0xa8e21c], 0x3fc00000 */ W32((u32)(0xa8e21cu), 0x3fc00000u);
    /* 005fdd06: ret  */ FN_RET(0x005fdce8); r_esp += 4; return;
}

void f_005fdd08(void) /* sub_5FDD08 */
{
    FN_ENTER(0x005fdd08);
    /* 005fdd08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd09: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdd0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd0d: push 0x8de46c */ { u32 v = 0x8de46cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fdd18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fdd20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fdd23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fdd26: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fdd29: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fdd2c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fdd2f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fdd32: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fdd35: mov eax, ecx */ r_eax = r_ecx;
    /* 005fdd37: mov dword ptr [eax], 0xb1b2a0 */ W32((u32)(r_eax), 0xb1b2a0u);
    /* 005fdd3d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fdd44: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fdd49u); f_005e61c8();
    /* 005fdd49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fdd4c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fdd4e: jne 0x5fdd60 */ if (!fZ) goto L_005fdd60;
L_005fdd50:; BB(0x005fdd50);
    /* 005fdd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fdd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdd5d: ret 4 */ FN_RET(0x005fdd08); r_esp += 8; return;
L_005fdd60:; BB(0x005fdd60);
    /* 005fdd60: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fdd63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd64: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fdd69u); f_005c2f74();
    /* 005fdd69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fdd6a: jmp 0x5fdd50 */ goto L_005fdd50;
}

void f_005fdd6c(void) /* sub_5FDD6C */
{
    FN_ENTER(0x005fdd6c);
    /* 005fdd6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd6d: mov esi, ecx */ r_esi = r_ecx;
    /* 005fdd6f: mov ecx, esi */ r_ecx = r_esi;
    /* 005fdd71: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5fdd76u); f_005e90b0();
    /* 005fdd76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdd78: je 0x5fdd91 */ if (fZ) goto L_005fdd91;
L_005fdd7a:; BB(0x005fdd7a);
    /* 005fdd7a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd7c: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005fdd82: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 005fdd85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd87: call 0x6eeeb4 */ r_esp -= 4; W32(r_esp, 0x5fdd8cu); f_006eeeb4();
    /* 005fdd8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fdd8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fdd90: ret  */ FN_RET(0x005fdd6c); r_esp += 4; return;
L_005fdd91:; BB(0x005fdd91);
    /* 005fdd91: mov ecx, esi */ r_ecx = r_esi;
    /* 005fdd93: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5fdd98u); f_005e90e8();
    /* 005fdd98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fdd99: ret  */ FN_RET(0x005fdd6c); r_esp += 4; return;
}

void f_005fdd9c(void) /* sub_5FDD9C */
{
    FN_ENTER(0x005fdd9c);
    /* 005fdd9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdd9d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdd9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fdda1: push 0x8de494 */ { u32 v = 0x8de494u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdda6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fddac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fddad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fddb4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fddb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fddba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fddbd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fddc0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fddc3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fddc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fddc8: je 0x5fde1f */ if (fZ) goto L_005fde1f;
L_005fddca:; BB(0x005fddca);
    /* 005fddca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fddd1: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005fddd6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fdddbu); f_005caba4();
    /* 005fdddb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fdddc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fdddf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdde1: je 0x5fde1b */ if (fZ) goto L_005fde1b;
L_005fdde3:; BB(0x005fdde3);
    /* 005fdde3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fddea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fddf1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fddf4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fddf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fddf8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fddfe: call 0x5fde30 */ r_esp -= 4; W32(r_esp, 0x5fde03u); f_005fde30();
    /* 005fde03: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fde06: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fde0d:; BB(0x005fde0d);
    /* 005fde0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fde10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fde17: mov esp, ebp */ r_esp = r_ebp;
    /* 005fde19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fde1a: ret  */ FN_RET(0x005fdd9c); r_esp += 4; return;
L_005fde1b:; BB(0x005fde1b);
    /* 005fde1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fde1d: jmp 0x5fde0d */ goto L_005fde0d;
L_005fde1f:; BB(0x005fde1f);
    /* 005fde1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fde21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fde24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fde2b: mov esp, ebp */ r_esp = r_ebp;
    /* 005fde2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fde2e: ret  */ FN_RET(0x005fdd9c); r_esp += 4; return;
}

void f_005fde30(void) /* sub_5FDE30 */
{
    FN_ENTER(0x005fde30);
    /* 005fde30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fde31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fde33: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fde37: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fde3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fde3d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fde42u); f_005e959c();
    /* 005fde42: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005fde48: mov dword ptr [ebx], 0xb1b2a0 */ W32((u32)(r_ebx), 0xb1b2a0u);
    /* 005fde4e: or edx, 0x62 */ {  u32 a = r_edx; u32 b = 0x62u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fde51: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005fde57: mov dword ptr [ebx + 0x1a0], 0x3e4ccccd */ W32((u32)(r_ebx+0x1a0u), 0x3e4ccccdu);
    /* 005fde61: mov eax, ebx */ r_eax = r_ebx;
    /* 005fde63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fde64: ret 8 */ FN_RET(0x005fde30); r_esp += 12; return;
}

void f_005fde68(void) /* sub_5FDE68 */
{
    FN_ENTER(0x005fde68);
    /* 005fde68: mov dword ptr [0xa8e220], 0x3f800000 */ W32((u32)(0xa8e220u), 0x3f800000u);
    /* 005fde72: mov dword ptr [0xa8e224], 0x41000000 */ W32((u32)(0xa8e224u), 0x41000000u);
    /* 005fde7c: mov dword ptr [0xa8e228], 0x3fc00000 */ W32((u32)(0xa8e228u), 0x3fc00000u);
    /* 005fde86: ret  */ FN_RET(0x005fde68); r_esp += 4; return;
}

void f_005fde88(void) /* sub_5FDE88 */
{
    FN_ENTER(0x005fde88);
    /* 005fde88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fde89: mov ebp, esp */ r_ebp = r_esp;
    /* 005fde8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fde8d: push 0x8de4b0 */ { u32 v = 0x8de4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fde92: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fde98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fde99: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fdea0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fdea3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fdea6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fdea9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fdeac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fdeaf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fdeb2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fdeb5: mov eax, ecx */ r_eax = r_ecx;
    /* 005fdeb7: mov dword ptr [eax], 0xb1b400 */ W32((u32)(r_eax), 0xb1b400u);
    /* 005fdebd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fdec4: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fdec9u); f_005e61c8();
    /* 005fdec9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fdecc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fdece: jne 0x5fdee0 */ if (!fZ) goto L_005fdee0;
L_005fded0:; BB(0x005fded0);
    /* 005fded0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fded3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fdeda: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdedc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdedd: ret 4 */ FN_RET(0x005fde88); r_esp += 8; return;
L_005fdee0:; BB(0x005fdee0);
    /* 005fdee0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fdee3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdee4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fdee9u); f_005c2f74();
    /* 005fdee9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fdeea: jmp 0x5fded0 */ goto L_005fded0;
}

void f_005fdeec(void) /* sub_5FDEEC */
{
    FN_ENTER(0x005fdeec);
    /* 005fdeec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fdeed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fdeee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdeef: mov esi, ecx */ r_esi = r_ecx;
    /* 005fdef1: mov ebp, dword ptr [0xa8d84c] */ r_ebp = R32((u32)(0xa8d84cu));
    /* 005fdef7: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 005fdefe: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdf01: jne 0x5fdf6a */ if (!fZ) goto L_005fdf6a;
L_005fdf03:; BB(0x005fdf03);
    /* 005fdf03: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005fdf0a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdf0d: je 0x5fdfcf */ if (fZ) goto L_005fdfcf;
L_005fdf13:; BB(0x005fdf13);
    /* 005fdf13: cmp ebp, dword ptr [esi + 0x264] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x264u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdf19: jne 0x5fdf2c */ if (!fZ) goto L_005fdf2c;
L_005fdf1b:; BB(0x005fdf1b);
    /* 005fdf1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf1d: push dword ptr [esi + 0x26c] */ { u32 v = R32((u32)(r_esi+0x26cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fdf23: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fdf25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf27: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5fdf2cu); f_00830b74();
L_005fdf2c:; BB(0x005fdf2c);
    /* 005fdf2c: mov edi, dword ptr [esi + 0x268] */ r_edi = R32((u32)(r_esi+0x268u));
L_005fdf32:; BB(0x005fdf32);
    /* 005fdf32: cmp ebp, dword ptr [esi + 0x254] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x254u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdf38: je 0x5fdf42 */ if (fZ) goto L_005fdf42;
L_005fdf3a:; BB(0x005fdf3a);
    /* 005fdf3a: cmp ebp, dword ptr [esi + 0x25c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x25cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdf40: jne 0x5fdf4b */ if (!fZ) goto L_005fdf4b;
L_005fdf42:; BB(0x005fdf42);
    /* 005fdf42: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fdf44: mov edx, edi */ r_edx = r_edi;
    /* 005fdf46: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fdf4bu); f_00830c04();
L_005fdf4b:; BB(0x005fdf4b);
    /* 005fdf4b: cmp ebp, dword ptr [esi + 0x258] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x258u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdf51: je 0x5fdf5b */ if (fZ) goto L_005fdf5b;
L_005fdf53:; BB(0x005fdf53);
    /* 005fdf53: cmp ebp, dword ptr [esi + 0x260] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fdf59: jne 0x5fdfcb */ if (!fZ) goto L_005fdfcb;
L_005fdf5b:; BB(0x005fdf5b);
    /* 005fdf5b: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005fdf5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fdf5f: mov edx, edi */ r_edx = r_edi;
    /* 005fdf61: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fdf66u); f_00830c04();
    /* 005fdf66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdf67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fdf68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fdf69: ret  */ FN_RET(0x005fdeec); r_esp += 4; return;
L_005fdf6a:; BB(0x005fdf6a);
    /* 005fdf6a: cmp ebp, dword ptr [esi + 0x264] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x264u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdf70: jne 0x5fdf81 */ if (!fZ) goto L_005fdf81;
L_005fdf72:; BB(0x005fdf72);
    /* 005fdf72: mov edx, dword ptr [esi + 0x268] */ r_edx = R32((u32)(r_esi+0x268u));
    /* 005fdf78: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fdf7a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fdf7c: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5fdf81u); f_0082e9e4();
L_005fdf81:; BB(0x005fdf81);
    /* 005fdf81: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 005fdf86: mov ecx, dword ptr [esi + 0x268] */ r_ecx = R32((u32)(r_esi+0x268u));
    /* 005fdf8c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fdf8e: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fdf90: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005fdf93: mov edi, edx */ r_edi = r_edx;
    /* 005fdf95: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005fdf97: cmp ebp, dword ptr [esi + 0x254] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x254u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdf9d: je 0x5fdfa7 */ if (fZ) goto L_005fdfa7;
L_005fdf9f:; BB(0x005fdf9f);
    /* 005fdf9f: cmp ebp, dword ptr [esi + 0x25c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x25cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdfa5: jne 0x5fdfb0 */ if (!fZ) goto L_005fdfb0;
L_005fdfa7:; BB(0x005fdfa7);
    /* 005fdfa7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fdfa9: mov edx, edi */ r_edx = r_edi;
    /* 005fdfab: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fdfb0u); f_00830c04();
L_005fdfb0:; BB(0x005fdfb0);
    /* 005fdfb0: cmp ebp, dword ptr [esi + 0x258] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x258u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdfb6: je 0x5fdfc0 */ if (fZ) goto L_005fdfc0;
L_005fdfb8:; BB(0x005fdfb8);
    /* 005fdfb8: cmp ebp, dword ptr [esi + 0x260] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fdfbe: jne 0x5fdfcb */ if (!fZ) goto L_005fdfcb;
L_005fdfc0:; BB(0x005fdfc0);
    /* 005fdfc0: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005fdfc2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fdfc4: mov edx, edi */ r_edx = r_edi;
    /* 005fdfc6: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fdfcbu); f_00830c04();
L_005fdfcb:; BB(0x005fdfcb);
    /* 005fdfcb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdfcc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fdfcd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fdfce: ret  */ FN_RET(0x005fdeec); r_esp += 4; return;
L_005fdfcf:; BB(0x005fdfcf);
    /* 005fdfcf: cmp ebp, dword ptr [esi + 0x264] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x264u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdfd5: jne 0x5fdfe6 */ if (!fZ) goto L_005fdfe6;
L_005fdfd7:; BB(0x005fdfd7);
    /* 005fdfd7: mov edx, dword ptr [esi + 0x268] */ r_edx = R32((u32)(r_esi+0x268u));
    /* 005fdfdd: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fdfdf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fdfe1: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5fdfe6u); f_0082e9e4();
L_005fdfe6:; BB(0x005fdfe6);
    /* 005fdfe6: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 005fdfeb: mov ecx, dword ptr [esi + 0x268] */ r_ecx = R32((u32)(r_esi+0x268u));
    /* 005fdff1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fdff3: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fdff5: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005fdff8: mov edi, edx */ r_edi = r_edx;
    /* 005fdffa: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005fdffc: jmp 0x5fdf32 */ goto L_005fdf32;
}

