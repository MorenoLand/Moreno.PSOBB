#include "protos.h"

void f_0062c044(void) /* sub_62C044 */
{
    FN_ENTER(0x0062c044);
    /* 0062c044: mov dword ptr [0xa8ee5c], 0xbcbf258c */ W32((u32)(0xa8ee5cu), 0xbcbf258cu);
    /* 0062c04e: ret  */ FN_RET(0x0062c044); r_esp += 4; return;
}

void f_0062c050(void) /* sub_62C050 */
{
    FN_ENTER(0x0062c050);
    /* 0062c050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c051: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c055: push 0x8e331c */ { u32 v = 0x8e331cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c05a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062c060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c061: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062c068: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c06b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062c06e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062c071: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062c074: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062c077: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c07c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062c083: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62c088u); f_008581c5();
    /* 0062c088: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062c089: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062c08c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c08e: je 0x62c118 */ if (fZ) goto L_0062c118;
L_0062c094:; BB(0x0062c094);
    /* 0062c094: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062c09b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062c0a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062c0a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062c0a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0aa: push 0x9c5f5c */ { u32 v = 0x9c5f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0b1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62c0b6u); f_005b7a84();
    /* 0062c0b6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062c0b9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062c0c0:; BB(0x0062c0c0);
    /* 0062c0c0: mov dword ptr [0xa8ee64], eax */ W32((u32)(0xa8ee64u), r_eax);
    /* 0062c0c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062c0cc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0ce: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62c0d3u); f_008581c5();
    /* 0062c0d3: push 0x93273c */ { u32 v = 0x93273cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0d8: mov dword ptr [0xa8ee60], eax */ W32((u32)(0xa8ee60u), r_eax);
    /* 0062c0dd: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62c0e2u); f_008009dc();
    /* 0062c0e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062c0e5: mov edx, dword ptr [0xa8ee60] */ r_edx = R32((u32)(0xa8ee60u));
    /* 0062c0eb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062c0ed: mov eax, dword ptr [0xa8ee64] */ r_eax = R32((u32)(0xa8ee64u));
    /* 0062c0f2: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0062c0f8: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 0062c0fb: mov esi, dword ptr [0xa8ee60] */ r_esi = R32((u32)(0xa8ee60u));
    /* 0062c101: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 0062c104: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062c107: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c10a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062c10d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062c114: mov esp, ebp */ r_esp = r_ebp;
    /* 0062c116: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c117: ret  */ FN_RET(0x0062c050); r_esp += 4; return;
L_0062c118:; BB(0x0062c118);
    /* 0062c118: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062c11a: jmp 0x62c0c0 */ goto L_0062c0c0;
}

void f_0062c060(void)
{
    FN_ENTER(0x0062c060);
    /* 0062c060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c061: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062c068: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c06b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062c06e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062c071: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062c074: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062c077: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c07c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062c083: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62c088u); f_008581c5();
    /* 0062c088: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062c089: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062c08c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c08e: je 0x62c118 */ if (fZ) goto L_0062c118;
L_0062c094:; BB(0x0062c094);
    /* 0062c094: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062c09b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062c0a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062c0a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062c0a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0aa: push 0x9c5f5c */ { u32 v = 0x9c5f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0b1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62c0b6u); f_005b7a84();
    /* 0062c0b6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062c0b9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062c0c0:; BB(0x0062c0c0);
    /* 0062c0c0: mov dword ptr [0xa8ee64], eax */ W32((u32)(0xa8ee64u), r_eax);
    /* 0062c0c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062c0cc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0ce: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62c0d3u); f_008581c5();
    /* 0062c0d3: push 0x93273c */ { u32 v = 0x93273cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c0d8: mov dword ptr [0xa8ee60], eax */ W32((u32)(0xa8ee60u), r_eax);
    /* 0062c0dd: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62c0e2u); f_008009dc();
    /* 0062c0e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062c0e5: mov edx, dword ptr [0xa8ee60] */ r_edx = R32((u32)(0xa8ee60u));
    /* 0062c0eb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062c0ed: mov eax, dword ptr [0xa8ee64] */ r_eax = R32((u32)(0xa8ee64u));
    /* 0062c0f2: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0062c0f8: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 0062c0fb: mov esi, dword ptr [0xa8ee60] */ r_esi = R32((u32)(0xa8ee60u));
    /* 0062c101: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 0062c104: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062c107: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062c10a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062c10d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062c114: mov esp, ebp */ r_esp = r_ebp;
    /* 0062c116: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c117: ret  */ FN_RET(0x0062c060); r_esp += 4; return;
L_0062c118:; BB(0x0062c118);
    /* 0062c118: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062c11a: jmp 0x62c0c0 */ goto L_0062c0c0;
}

void f_0062c11c(void) /* sub_62C11C */
{
    FN_ENTER(0x0062c11c);
    /* 0062c11c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c11d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062c11f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062c121: call 0x62c140 */ r_esp -= 4; W32(r_esp, 0x62c126u); f_0062c140();
    /* 0062c126: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062c12a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062c12c: jne 0x62c132 */ if (!fZ) goto L_0062c132;
L_0062c12e:; BB(0x0062c12e);
    /* 0062c12e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062c12f: ret 4 */ FN_RET(0x0062c11c); r_esp += 8; return;
L_0062c132:; BB(0x0062c132);
    /* 0062c132: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c133: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62c138u); f_005c2f74();
    /* 0062c138: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062c139: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062c13a: ret 4 */ FN_RET(0x0062c11c); r_esp += 8; return;
}

void f_0062c140(void) /* sub_62C140 */
{
    FN_ENTER(0x0062c140);
    /* 0062c140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c141: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c145: push 0x8e3338 */ { u32 v = 0x8e3338u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c14a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062c150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c151: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062c158: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c15b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062c15e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062c161: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062c164: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062c167: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062c16a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062c16d: mov dword ptr [ecx], 0xb29f40 */ W32((u32)(r_ecx), 0xb29f40u);
    /* 0062c173: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062c17a: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x62c17fu); f_006131f4();
    /* 0062c17f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062c182: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062c189: mov esp, ebp */ r_esp = r_ebp;
    /* 0062c18b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c18c: ret  */ FN_RET(0x0062c140); r_esp += 4; return;
}

void f_0062c190(void) /* sub_62C190 */
{
    FN_ENTER(0x0062c190);
    /* 0062c190: mov ecx, dword ptr [0xa8ee70] */ r_ecx = R32((u32)(0xa8ee70u));
    /* 0062c196: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062c198: je 0x62c1ad */ if (fZ) goto L_0062c1ad;
L_0062c19a:; BB(0x0062c19a);
    /* 0062c19a: je 0x62c1a3 */ if (fZ) goto L_0062c1a3;
L_0062c19c:; BB(0x0062c19c);
    /* 0062c19c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c19e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62c1a3u); f_004066a8();
L_0062c1a3:; BB(0x0062c1a3);
    /* 0062c1a3: mov dword ptr [0xa8ee70], 0 */ W32((u32)(0xa8ee70u), 0x0u);
L_0062c1ad:; BB(0x0062c1ad);
    /* 0062c1ad: ret  */ FN_RET(0x0062c190); r_esp += 4; return;
}

void f_0062c1b0(void)
{
    FN_ENTER(0x0062c1b0);
    /* 0062c1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c1b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c1b5: push 0x8e3360 */ { u32 v = 0x8e3360u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c1ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062c1c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c1c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062c1c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c1cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062c1ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062c1d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062c1d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062c1d7: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c1dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062c1e3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62c1e8u); f_005caba4();
    /* 0062c1e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062c1e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062c1ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c1ee: je 0x62c227 */ if (fZ) goto L_0062c227;
L_0062c1f0:; BB(0x0062c1f0);
    /* 0062c1f0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062c1f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062c1fe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c201: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c207: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062c20a: call 0x62c22c */ r_esp -= 4; W32(r_esp, 0x62c20fu); f_0062c22c();
    /* 0062c20f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062c212: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062c219:; BB(0x0062c219);
    /* 0062c219: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062c21c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062c223: mov esp, ebp */ r_esp = r_ebp;
    /* 0062c225: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c226: ret  */ FN_RET(0x0062c1b0); r_esp += 4; return;
L_0062c227:; BB(0x0062c227);
    /* 0062c227: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062c229: jmp 0x62c219 */ goto L_0062c219;
}

void f_0062c22c(void) /* sub_62C22C */
{
    FN_ENTER(0x0062c22c);
    /* 0062c22c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062c22d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062c22f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c231: push 0x8e337c */ { u32 v = 0x8e337cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062c236: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062c23c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c23d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062c244: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c247: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062c24a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062c24d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062c250: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062c253: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062c256: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c259: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062c25c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062c25f: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x62c264u); f_006132e4();
    /* 0062c264: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062c26b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062c26e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062c271: mov dword ptr [ecx], 0xb29f40 */ W32((u32)(r_ecx), 0xb29f40u);
    /* 0062c277: mov eax, dword ptr [0x9c5f94] */ r_eax = R32((u32)(0x9c5f94u));
    /* 0062c27c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c27d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062c280: call dword ptr [0xb29f54] */ { u32 t = R32((u32)(0xb29f54u)); r_esp -= 4; W32(r_esp, 0x62c286u); call_ind(t); }
    /* 0062c286: mov ecx, dword ptr [0xa8ee70] */ r_ecx = R32((u32)(0xa8ee70u));
    /* 0062c28c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c28e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62c293u); f_005b8610();
    /* 0062c293: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062c296: mov ecx, dword ptr [0xa8ee70] */ r_ecx = R32((u32)(0xa8ee70u));
    /* 0062c29c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c29e: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0062c2a1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62c2a6u); f_005b8624();
    /* 0062c2a6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062c2a9: mov ecx, dword ptr [0xa8ee70] */ r_ecx = R32((u32)(0xa8ee70u));
    /* 0062c2af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2b1: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0062c2b4: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x62c2b9u); f_005b8638();
    /* 0062c2b9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062c2bc: mov ecx, dword ptr [0xa8ee70] */ r_ecx = R32((u32)(0xa8ee70u));
    /* 0062c2c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c2c4: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0062c2ca: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x62c2cfu); f_005b8638();
    /* 0062c2cf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062c2d2: mov dword ptr [ecx + 0xb8], 0x3f000000 */ W32((u32)(r_ecx+0xb8u), 0x3f000000u);
    /* 0062c2dc: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0062c2e2: mov eax, dword ptr [ecx + 0xbc] */ r_eax = R32((u32)(r_ecx+0xbcu));
    /* 0062c2e8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0062c2eb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0062c2ee: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0062c2f1: fadd dword ptr [edx*4 + 0x932758] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x932758u));
    /* 0062c2f8: fadd dword ptr [0x93280c] */ ST(0) = ST(0) + R_F32((u32)(0x93280cu));
    /* 0062c2fe: mov dword ptr [ecx + 0xc0], 0x43fa0000 */ W32((u32)(r_ecx+0xc0u), 0x43fa0000u);
    /* 0062c308: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0062c30e: mov dword ptr [ecx + 0xc4], 0x42c80000 */ W32((u32)(r_ecx+0xc4u), 0x42c80000u);
    /* 0062c318: call 0x62d02c */ r_esp -= 4; W32(r_esp, 0x62c31du); f_0062d02c();
    /* 0062c31d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062c320: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062c323: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062c32a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062c32c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062c32d: ret 8 */ FN_RET(0x0062c22c); r_esp += 12; return;
}

void f_0062c330(void) /* sub_62C330 */
{
    FN_ENTER(0x0062c330);
    /* 0062c330: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c331: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062c333: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0062c335: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062c337: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c33d: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c343: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62c346u); call_ind(t); }
    /* 0062c346: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062c348: je 0x62c443 */ if (fZ) goto L_0062c443;
L_0062c34e:; BB(0x0062c34e);
    /* 0062c34e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62c353u); f_0082d7b0();
    /* 0062c353: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0062c356: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62c35bu); f_0082d838();
    /* 0062c35b: push dword ptr [ebx + 0x64] */ { u32 v = R32((u32)(r_ebx+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c35e: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c361: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 0062c364: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c366: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x62c36bu); f_0082df5c();
    /* 0062c36b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0062c36e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62c373u); f_00829cc8();
    /* 0062c373: movzx eax, byte ptr [ebx + 0x100] */ r_eax = (u32)R8((u32)(r_ebx+0x100u));
    /* 0062c37a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c37d: jne 0x62c3c0 */ if (!fZ) goto L_0062c3c0;
L_0062c37f:; BB(0x0062c37f);
    /* 0062c37f: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0062c385: fld dword ptr [ebx + 0x104] */ FPUSH(R_F32((u32)(r_ebx+0x104u)));
    /* 0062c38b: fcom dword ptr [0x932800] */ fx_compare(ST(0), R_F32((u32)(0x932800u))); 
    /* 0062c391: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c393: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0062c399: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062c39c: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0062c3a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c3a3: jae 0x62c3b0 */ if (!fC) goto L_0062c3b0;
L_0062c3a5:; BB(0x0062c3a5);
    /* 0062c3a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c3a7: mov byte ptr [ebx + 0x100], 3 */ W8((u32)(r_ebx+0x100u), 0x3u);
    /* 0062c3ae: jmp 0x62c401 */ goto L_0062c401;
L_0062c3b0:; BB(0x0062c3b0);
    /* 0062c3b0: fld dword ptr [0x9327f8] */ FPUSH(R_F32((u32)(0x9327f8u)));
    /* 0062c3b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062c3b8: fstp dword ptr [ebx + 0x104] */ W_F32((u32)(r_ebx+0x104u), ST(0)); FPOP();
    /* 0062c3be: jmp 0x62c401 */ goto L_0062c401;
L_0062c3c0:; BB(0x0062c3c0);
    /* 0062c3c0: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 0062c3c3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0062c3c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c3c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062c3c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062c3cb: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x62c3d0u); f_006134c8();
    /* 0062c3d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c3d2: jne 0x62c3ef */ if (!fZ) goto L_0062c3ef;
L_0062c3d4:; BB(0x0062c3d4);
    /* 0062c3d4: fld dword ptr [ebx + 0x104] */ FPUSH(R_F32((u32)(r_ebx+0x104u)));
    /* 0062c3da: fcomp dword ptr [0x932800] */ fx_compare(ST(0), R_F32((u32)(0x932800u))); FPOP();
    /* 0062c3e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c3e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c3e3: jae 0x62c3ef */ if (!fC) goto L_0062c3ef;
L_0062c3e5:; BB(0x0062c3e5);
    /* 0062c3e5: mov dword ptr [ebx + 0x104], 0x3f800000 */ W32((u32)(r_ebx+0x104u), 0x3f800000u);
L_0062c3ef:; BB(0x0062c3ef);
    /* 0062c3ef: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0062c3f4: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0062c3f9: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062c3fc: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0062c401:; BB(0x0062c401);
    /* 0062c401: lea eax, [ebx + 0x104] */ r_eax = (u32)(r_ebx+0x104u);
    /* 0062c407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c408: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62c40du); f_0082d710();
    /* 0062c40d: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c413: push dword ptr [ebx + 0xc8] */ { u32 v = R32((u32)(r_ebx+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c419: push dword ptr [ebx + 0xbc] */ { u32 v = R32((u32)(r_ebx+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c41f: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062c422: call 0x8304e0 */ r_esp -= 4; W32(r_esp, 0x62c427u); f_008304e0();
    /* 0062c427: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062c42c: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62c431u); f_0082d710();
    /* 0062c431: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c434: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0062c439: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0062c43e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62c443u); f_0082da80();
L_0062c443:; BB(0x0062c443);
    /* 0062c443: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062c444: ret  */ FN_RET(0x0062c330); r_esp += 4; return;
}

void f_0062c448(void) /* sub_62C448 */
{
    FN_ENTER(0x0062c448);
    /* 0062c448: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c449: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062c44a: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062c450: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062c452: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0062c455: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0062c458: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 0062c45b: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0062c45e: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 0062c461: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 0062c464: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x62c469u); f_004f7c84();
    /* 0062c469: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c46c: je 0x62ce74 */ if (fZ) goto L_0062ce74;
L_0062c472:; BB(0x0062c472);
    /* 0062c472: mov eax, dword ptr [ebx + 0xbc] */ r_eax = R32((u32)(r_ebx+0xbcu));
    /* 0062c478: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c47a: je 0x62c483 */ if (fZ) goto L_0062c483;
L_0062c47c:; BB(0x0062c47c);
    /* 0062c47c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062c47e: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x62c483u); f_0061347c();
L_0062c483:; BB(0x0062c483);
    /* 0062c483: movsx ecx, word ptr [ebx + 0xfe] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xfeu));
    /* 0062c48a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x62c48fu); f_0082dcbc();
    /* 0062c48f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0062c493: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 0062c497: fmul dword ptr [0x9327f4] */ ST(0) = ST(0) * R_F32((u32)(0x9327f4u));
    /* 0062c49d: fadd dword ptr [ebx + 0xd0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xd0u));
    /* 0062c4a3: movzx edx, byte ptr [ebx + 0x101] */ r_edx = (u32)R8((u32)(r_ebx+0x101u));
    /* 0062c4aa: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0062c4ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c4b0: jne 0x62c53f */ if (!fZ) goto L_0062c53f;
L_0062c4b6:; BB(0x0062c4b6);
    /* 0062c4b6: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 0062c4ba: fld dword ptr [0x9327ec] */ FPUSH(R_F32((u32)(0x9327ecu)));
    /* 0062c4c0: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0062c4c3: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0062c4c5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062c4c7: fmul dword ptr [0x9327d0] */ ST(0) = ST(0) * R_F32((u32)(0x9327d0u));
    /* 0062c4cd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062c4cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c4d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c4d2: jae 0x62c4e9 */ if (!fC) goto L_0062c4e9;
L_0062c4d4:; BB(0x0062c4d4);
    /* 0062c4d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c4d6: fld dword ptr [0x9327ec] */ FPUSH(R_F32((u32)(0x9327ecu)));
    /* 0062c4dc: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 0062c4e1: mov dword ptr [ebx + 0xf8], eax */ W32((u32)(r_ebx+0xf8u), r_eax);
    /* 0062c4e7: jmp 0x62c500 */ goto L_0062c500;
L_0062c4e9:; BB(0x0062c4e9);
    /* 0062c4e9: fld dword ptr [0x9327e8] */ FPUSH(R_F32((u32)(0x9327e8u)));
    /* 0062c4ef: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062c4f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c4f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c4f4: ja 0x62c4f8 */ if ((!fC&&!fZ)) goto L_0062c4f8;
L_0062c4f6:; BB(0x0062c4f6);
    /* 0062c4f6: fst st(1) */ ST(1) = ST(0);
L_0062c4f8:; BB(0x0062c4f8);
    /* 0062c4f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c4fa: fst dword ptr [ebx + 0xf8] */ W_F32((u32)(r_ebx+0xf8u), ST(0));
L_0062c500:; BB(0x0062c500);
    /* 0062c500: fld dword ptr [0x9327c4] */ FPUSH(R_F32((u32)(0x9327c4u)));
    /* 0062c506: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062c508: fmul dword ptr [0x9327e0] */ ST(0) = ST(0) * R_F32((u32)(0x9327e0u));
    /* 0062c50e: fadd dword ptr [0x9327c8] */ ST(0) = ST(0) + R_F32((u32)(0x9327c8u));
    /* 0062c514: fld dword ptr [0x9327dc] */ FPUSH(R_F32((u32)(0x9327dcu)));
    /* 0062c51a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0062c51c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062c51e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062c520: fadd dword ptr [ebx + 0xdc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xdcu));
    /* 0062c526: fadd dword ptr [0x9327d4] */ ST(0) = ST(0) + R_F32((u32)(0x9327d4u));
    /* 0062c52c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c52e: fstp dword ptr [ebx + 0xf4] */ W_F32((u32)(r_ebx+0xf4u), ST(0)); FPOP();
    /* 0062c534: fstp dword ptr [ebx + 0xdc] */ W_F32((u32)(r_ebx+0xdcu), ST(0)); FPOP();
    /* 0062c53a: jmp 0x62c5f7 */ goto L_0062c5f7;
L_0062c53f:; BB(0x0062c53f);
    /* 0062c53f: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 0062c543: fld dword ptr [0x9327ec] */ FPUSH(R_F32((u32)(0x9327ecu)));
    /* 0062c549: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0062c54c: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0062c54e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062c550: fmul dword ptr [0x9327f0] */ ST(0) = ST(0) * R_F32((u32)(0x9327f0u));
    /* 0062c556: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062c558: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c55a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c55b: jae 0x62c572 */ if (!fC) goto L_0062c572;
L_0062c55d:; BB(0x0062c55d);
    /* 0062c55d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c55f: fld dword ptr [0x9327ec] */ FPUSH(R_F32((u32)(0x9327ecu)));
    /* 0062c565: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 0062c56a: mov dword ptr [ebx + 0xf8], eax */ W32((u32)(r_ebx+0xf8u), r_eax);
    /* 0062c570: jmp 0x62c589 */ goto L_0062c589;
L_0062c572:; BB(0x0062c572);
    /* 0062c572: fld dword ptr [0x9327e8] */ FPUSH(R_F32((u32)(0x9327e8u)));
    /* 0062c578: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062c57a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c57c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c57d: ja 0x62c581 */ if ((!fC&&!fZ)) goto L_0062c581;
L_0062c57f:; BB(0x0062c57f);
    /* 0062c57f: fst st(1) */ ST(1) = ST(0);
L_0062c581:; BB(0x0062c581);
    /* 0062c581: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c583: fst dword ptr [ebx + 0xf8] */ W_F32((u32)(r_ebx+0xf8u), ST(0));
L_0062c589:; BB(0x0062c589);
    /* 0062c589: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0062c58b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c58d: fmul dword ptr [0x9327e0] */ ST(0) = ST(0) * R_F32((u32)(0x9327e0u));
    /* 0062c593: fadd dword ptr [0x9327e4] */ ST(0) = ST(0) + R_F32((u32)(0x9327e4u));
    /* 0062c599: fld dword ptr [0x9327dc] */ FPUSH(R_F32((u32)(0x9327dcu)));
    /* 0062c59f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0062c5a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c5a3: fmul dword ptr [0x9327d8] */ ST(0) = ST(0) * R_F32((u32)(0x9327d8u));
    /* 0062c5a9: fadd dword ptr [ebx + 0xdc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xdcu));
    /* 0062c5af: fld dword ptr [ebx + 0xf0] */ FPUSH(R_F32((u32)(r_ebx+0xf0u)));
    /* 0062c5b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c5b7: fadd dword ptr [0x9327d4] */ ST(0) = ST(0) + R_F32((u32)(0x9327d4u));
    /* 0062c5bd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062c5bf: fst dword ptr [ebx + 0xf4] */ W_F32((u32)(r_ebx+0xf4u), ST(0));
    /* 0062c5c5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062c5c7: fstp dword ptr [ebx + 0xdc] */ W_F32((u32)(r_ebx+0xdcu), ST(0)); FPOP();
    /* 0062c5cd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062c5cf: fcom dword ptr [0x9327d0] */ fx_compare(ST(0), R_F32((u32)(0x9327d0u))); 
    /* 0062c5d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c5d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c5d8: jbe 0x62c5f1 */ if ((fC||fZ)) goto L_0062c5f1;
L_0062c5da:; BB(0x0062c5da);
    /* 0062c5da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c5dc: mov dword ptr [ebx + 0xf0], 0 */ W32((u32)(r_ebx+0xf0u), 0x0u);
    /* 0062c5e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062c5e8: mov byte ptr [ebx + 0x101], 0 */ W8((u32)(r_ebx+0x101u), 0x0u);
    /* 0062c5ef: jmp 0x62c5f7 */ goto L_0062c5f7;
L_0062c5f1:; BB(0x0062c5f1);
    /* 0062c5f1: fstp dword ptr [ebx + 0xf0] */ W_F32((u32)(r_ebx+0xf0u), ST(0)); FPOP();
L_0062c5f7:; BB(0x0062c5f7);
    /* 0062c5f7: movzx eax, byte ptr [ebx + 0x100] */ r_eax = (u32)R8((u32)(r_ebx+0x100u));
    /* 0062c5fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c600: je 0x62ce48 */ if (fZ) goto L_0062ce48;
L_0062c606:; BB(0x0062c606);
    /* 0062c606: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c609: je 0x62cd58 */ if (fZ) goto L_0062cd58;
L_0062c60f:; BB(0x0062c60f);
    /* 0062c60f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c612: je 0x62c744 */ if (fZ) goto L_0062c744;
L_0062c618:; BB(0x0062c618);
    /* 0062c618: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c61b: jne 0x62c6c8 */ if (!fZ) goto L_0062c6c8;
L_0062c621:; BB(0x0062c621);
    /* 0062c621: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c623: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0062c627: mov eax, dword ptr [ebx + 0xe4] */ r_eax = R32((u32)(r_ebx+0xe4u));
    /* 0062c62d: mov edi, dword ptr [ebx + 0xe8] */ r_edi = R32((u32)(r_ebx+0xe8u));
    /* 0062c633: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0062c637: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 0062c63d: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0062c641: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0062c645: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0062c648: mov edx, edi */ r_edx = r_edi;
    /* 0062c64a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x62c64fu); f_0082f9c4();
    /* 0062c64f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0062c653: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x62c658u); f_0082df08();
    /* 0062c658: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c65a: fld dword ptr [0x9327d0] */ FPUSH(R_F32((u32)(0x9327d0u)));
    /* 0062c660: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0062c664: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0062c666: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0062c66a: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0062c66e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c670: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0062c672: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0062c674: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0062c676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c678: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0062c67c: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0062c682: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c684: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 0062c688: fstp dword ptr [ebx + 0xdc] */ W_F32((u32)(r_ebx+0xdcu), ST(0)); FPOP();
    /* 0062c68e: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 0062c692: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
    /* 0062c698: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062c699: lea eax, [ebx + 0xe4] */ r_eax = (u32)(r_ebx+0xe4u);
    /* 0062c69f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c6a0: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x62c6a5u); f_00836208();
    /* 0062c6a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062c6a8: fld dword ptr [ebx + 0x6c] */ FPUSH(R_F32((u32)(r_ebx+0x6cu)));
    /* 0062c6ab: fdiv dword ptr [0x9327d0] */ ST(0) = ST(0) / R_F32((u32)(0x9327d0u));
    /* 0062c6b1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0062c6b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c6b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c6b6: jbe 0x62c8c1 */ if ((fC||fZ)) goto L_0062c8c1;
L_0062c6bc:; BB(0x0062c6bc);
    /* 0062c6bc: mov byte ptr [ebx + 0x100], 1 */ W8((u32)(r_ebx+0x100u), 0x1u);
    /* 0062c6c3: jmp 0x62c8c1 */ goto L_0062c8c1;
L_0062c6c8:; BB(0x0062c6c8);
    /* 0062c6c8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c6cb: jne 0x62c73a */ if (!fZ) goto L_0062c73a;
L_0062c6cd:; BB(0x0062c6cd);
    /* 0062c6cd: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0062c6d0: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 0062c6d3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0062c6d7: lea edx, [ebx + 0xe4] */ r_edx = (u32)(r_ebx+0xe4u);
    /* 0062c6dd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0062c6e0: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0062c6e4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0062c6e7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x62c6ecu); f_0082f9c4();
    /* 0062c6ec: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0062c6ef: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x62c6f4u); f_0082df08();
    /* 0062c6f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c6f6: fld dword ptr [0x9327d0] */ FPUSH(R_F32((u32)(0x9327d0u)));
    /* 0062c6fc: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0062c6ff: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0062c701: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0062c705: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0062c709: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c70b: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0062c70d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0062c70f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0062c711: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c713: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0062c716: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0062c71c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c71e: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0062c722: fstp dword ptr [ebx + 0xdc] */ W_F32((u32)(r_ebx+0xdcu), ST(0)); FPOP();
    /* 0062c728: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0062c72c: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
    /* 0062c732: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0062c735: jmp 0x62c8c1 */ goto L_0062c8c1;
L_0062c73a:; BB(0x0062c73a);
    /* 0062c73a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c73c: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0062c73f: jmp 0x62c8c1 */ goto L_0062c8c1;
L_0062c744:; BB(0x0062c744);
    /* 0062c744: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c746: movzx eax, byte ptr [ebx + 0x102] */ r_eax = (u32)R8((u32)(r_ebx+0x102u));
    /* 0062c74d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c74f: jne 0x62c792 */ if (!fZ) goto L_0062c792;
L_0062c751:; BB(0x0062c751);
    /* 0062c751: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62c756u); f_008587a5();
    /* 0062c756: fild dword ptr [ebx + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x60u)));
    /* 0062c759: fld dword ptr [0x9327b8] */ FPUSH(R_F32((u32)(0x9327b8u)));
    /* 0062c75f: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0062c763: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 0062c767: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062c76d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062c76f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062c771: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062c773: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0062c777: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0062c77c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062c781: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0062c785: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0062c789: fistp dword ptr [ebx + 0x60] */ W32((u32)(r_ebx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062c78c: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 0062c790: jmp 0x62c7d1 */ goto L_0062c7d1;
L_0062c792:; BB(0x0062c792);
    /* 0062c792: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62c797u); f_008587a5();
    /* 0062c797: fild dword ptr [ebx + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x60u)));
    /* 0062c79a: fld dword ptr [0x9327c0] */ FPUSH(R_F32((u32)(0x9327c0u)));
    /* 0062c7a0: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062c7a4: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062c7a8: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062c7ae: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062c7b0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062c7b2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062c7b4: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0062c7b8: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0062c7bd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062c7c2: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0062c7c6: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0062c7ca: fistp dword ptr [ebx + 0x60] */ W32((u32)(r_ebx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062c7cd: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
L_0062c7d1:; BB(0x0062c7d1);
    /* 0062c7d1: movzx eax, byte ptr [ebx + 0x101] */ r_eax = (u32)R8((u32)(r_ebx+0x101u));
    /* 0062c7d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c7da: je 0x62c806 */ if (fZ) goto L_0062c806;
L_0062c7dc:; BB(0x0062c7dc);
    /* 0062c7dc: fld dword ptr [0x9327b4] */ FPUSH(R_F32((u32)(0x9327b4u)));
    /* 0062c7e2: fld dword ptr [ebx + 0xd8] */ FPUSH(R_F32((u32)(r_ebx+0xd8u)));
    /* 0062c7e8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062c7ea: fld dword ptr [ebx + 0xe0] */ FPUSH(R_F32((u32)(r_ebx+0xe0u)));
    /* 0062c7f0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0062c7f2: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0062c7f8: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
    /* 0062c7fe: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0062c801: jmp 0x62c8c1 */ goto L_0062c8c1;
L_0062c806:; BB(0x0062c806);
    /* 0062c806: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62c80bu); f_008587a5();
    /* 0062c80b: fld dword ptr [0x9327e0] */ FPUSH(R_F32((u32)(0x9327e0u)));
    /* 0062c811: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0062c819: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062c81d: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062c821: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062c827: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062c829: fadd dword ptr [0x9327b0] */ ST(0) = ST(0) + R_F32((u32)(0x9327b0u));
    /* 0062c82f: fmul dword ptr [0x9327ac] */ ST(0) = ST(0) * R_F32((u32)(0x9327acu));
    /* 0062c835: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062c837: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0062c83b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62c840u); f_008587a5();
    /* 0062c840: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062c844: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062c848: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062c84e: fmul dword ptr [0x9327ac] */ ST(0) = ST(0) * R_F32((u32)(0x9327acu));
    /* 0062c854: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0062c859: fmul dword ptr [0x9327e0] */ ST(0) = ST(0) * R_F32((u32)(0x9327e0u));
    /* 0062c85f: fadd dword ptr [0x9327a8] */ ST(0) = ST(0) + R_F32((u32)(0x9327a8u));
    /* 0062c865: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0062c869: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x62c86eu); f_0082d990();
    /* 0062c86e: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0062c871: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c873: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62c878u); f_0082d8bc();
    /* 0062c878: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0062c87c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062c87d: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0062c881: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c883: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x62c888u); f_0082eab8();
    /* 0062c888: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0062c88d: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x62c892u); f_0082eb80();
    /* 0062c892: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0062c896: fadd dword ptr [ebx + 0xd8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xd8u));
    /* 0062c89c: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0062c8a0: fadd dword ptr [ebx + 0xe0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xe0u));
    /* 0062c8a6: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0062c8a9: fld dword ptr [0x9327a4] */ FPUSH(R_F32((u32)(0x9327a4u)));
    /* 0062c8af: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0062c8b1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062c8b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c8b5: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0062c8bb: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
L_0062c8c1:; BB(0x0062c8c1);
    /* 0062c8c1: lea edx, [ebx + 0xd8] */ r_edx = (u32)(r_ebx+0xd8u);
    /* 0062c8c7: mov ecx, edi */ r_ecx = r_edi;
    /* 0062c8c9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x62c8ceu); f_0082ebac();
    /* 0062c8ce: fld dword ptr [0x932794] */ FPUSH(R_F32((u32)(0x932794u)));
    /* 0062c8d4: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 0062c8d8: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0062c8db: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062c8dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c8df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c8e0: jbe 0x62c8e9 */ if ((fC||fZ)) goto L_0062c8e9;
L_0062c8e2:; BB(0x0062c8e2);
    /* 0062c8e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c8e4: fst dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0));
    /* 0062c8e7: jmp 0x62c90b */ goto L_0062c90b;
L_0062c8e9:; BB(0x0062c8e9);
    /* 0062c8e9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0062c8eb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0062c8ed: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 0062c8f1: fadd dword ptr [0x932790] */ ST(0) = ST(0) + R_F32((u32)(0x932790u));
    /* 0062c8f7: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0062c8f9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0062c8fb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c8fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062c8ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062c900: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062c902: jbe 0x62c906 */ if ((fC||fZ)) goto L_0062c906;
L_0062c904:; BB(0x0062c904);
    /* 0062c904: fst st(1) */ ST(1) = ST(0);
L_0062c906:; BB(0x0062c906);
    /* 0062c906: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c908: fst dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0));
L_0062c90b:; BB(0x0062c90b);
    /* 0062c90b: movsx eax, word ptr [ebx + 0xfc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xfcu));
    /* 0062c912: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c914: je 0x62c927 */ if (fZ) goto L_0062c927;
L_0062c916:; BB(0x0062c916);
    /* 0062c916: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c918: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062c91b: mov word ptr [ebx + 0xfc], ax */ W16((u32)(r_ebx+0xfcu), (u16)r_eax);
    /* 0062c922: jmp 0x62cb9f */ goto L_0062cb9f;
L_0062c927:; BB(0x0062c927);
    /* 0062c927: movzx eax, byte ptr [ebx + 0x100] */ r_eax = (u32)R8((u32)(r_ebx+0x100u));
    /* 0062c92e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c930: je 0x62ccfe */ if (fZ) goto L_0062ccfe;
L_0062c936:; BB(0x0062c936);
    /* 0062c936: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c939: je 0x62cc05 */ if (fZ) goto L_0062cc05;
L_0062c93f:; BB(0x0062c93f);
    /* 0062c93f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c942: je 0x62caaf */ if (fZ) goto L_0062caaf;
L_0062c948:; BB(0x0062c948);
    /* 0062c948: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c94b: jne 0x62ca37 */ if (!fZ) goto L_0062ca37;
L_0062c951:; BB(0x0062c951);
    /* 0062c951: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062c953: movzx eax, byte ptr [ebx + 0x102] */ r_eax = (u32)R8((u32)(r_ebx+0x102u));
    /* 0062c95a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c95c: jne 0x62c99f */ if (!fZ) goto L_0062c99f;
L_0062c95e:; BB(0x0062c95e);
    /* 0062c95e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62c963u); f_008587a5();
    /* 0062c963: fild dword ptr [ebx + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x60u)));
    /* 0062c966: fld dword ptr [0x9327b8] */ FPUSH(R_F32((u32)(0x9327b8u)));
    /* 0062c96c: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062c970: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062c974: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062c97a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062c97c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062c97e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062c980: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0062c984: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0062c989: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062c98e: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0062c992: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0062c996: fistp dword ptr [ebx + 0x60] */ W32((u32)(r_ebx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062c999: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 0062c99d: jmp 0x62c9de */ goto L_0062c9de;
L_0062c99f:; BB(0x0062c99f);
    /* 0062c99f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62c9a4u); f_008587a5();
    /* 0062c9a4: fild dword ptr [ebx + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x60u)));
    /* 0062c9a7: fld dword ptr [0x9327c0] */ FPUSH(R_F32((u32)(0x9327c0u)));
    /* 0062c9ad: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062c9b1: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062c9b5: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062c9bb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062c9bd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062c9bf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062c9c1: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0062c9c5: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0062c9ca: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062c9cf: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0062c9d3: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0062c9d7: fistp dword ptr [ebx + 0x60] */ W32((u32)(r_ebx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062c9da: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
L_0062c9de:; BB(0x0062c9de);
    /* 0062c9de: movzx eax, byte ptr [ebx + 0x101] */ r_eax = (u32)R8((u32)(r_ebx+0x101u));
    /* 0062c9e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062c9e7: jne 0x62ca07 */ if (!fZ) goto L_0062ca07;
L_0062c9e9:; BB(0x0062c9e9);
    /* 0062c9e9: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0062c9ee: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x62c9f3u); f_0082d990();
    /* 0062c9f3: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0062c9f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062c9f8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62c9fdu); f_0082d8bc();
    /* 0062c9fd: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0062ca02: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x62ca07u); f_0082eb80();
L_0062ca07:; BB(0x0062ca07);
    /* 0062ca07: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca08: lea eax, [ebx + 0xe4] */ r_eax = (u32)(r_ebx+0xe4u);
    /* 0062ca0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ca0f: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x62ca14u); f_00836208();
    /* 0062ca14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ca17: fld dword ptr [ebx + 0x6c] */ FPUSH(R_F32((u32)(r_ebx+0x6cu)));
    /* 0062ca1a: fdiv dword ptr [0x9327d0] */ ST(0) = ST(0) / R_F32((u32)(0x9327d0u));
    /* 0062ca20: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0062ca22: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062ca24: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062ca25: jbe 0x62cb9f */ if ((fC||fZ)) goto L_0062cb9f;
L_0062ca2b:; BB(0x0062ca2b);
    /* 0062ca2b: mov byte ptr [ebx + 0x100], 1 */ W8((u32)(r_ebx+0x100u), 0x1u);
    /* 0062ca32: jmp 0x62cb9f */ goto L_0062cb9f;
L_0062ca37:; BB(0x0062ca37);
    /* 0062ca37: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ca3a: jne 0x62ce84 */ if (!fZ) goto L_0062ce84;
L_0062ca40:; BB(0x0062ca40);
    /* 0062ca40: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0062ca43: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 0062ca46: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0062ca4a: lea edx, [ebx + 0xe4] */ r_edx = (u32)(r_ebx+0xe4u);
    /* 0062ca50: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0062ca54: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0062ca58: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0062ca5c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x62ca61u); f_0082f9c4();
    /* 0062ca61: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0062ca65: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x62ca6au); f_0082df08();
    /* 0062ca6a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062ca6c: fld dword ptr [0x9327d0] */ FPUSH(R_F32((u32)(0x9327d0u)));
    /* 0062ca72: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0062ca76: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0062ca78: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0062ca7c: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0062ca80: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062ca82: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0062ca84: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0062ca86: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0062ca88: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062ca8a: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0062ca8e: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0062ca94: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062ca96: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 0062ca9a: fstp dword ptr [ebx + 0xdc] */ W_F32((u32)(r_ebx+0xdcu), ST(0)); FPOP();
    /* 0062caa0: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 0062caa4: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
    /* 0062caaa: jmp 0x62cb9f */ goto L_0062cb9f;
L_0062caaf:; BB(0x0062caaf);
    /* 0062caaf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062cab1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cab6u); f_008587a5();
    /* 0062cab6: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062caba: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cabe: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cac4: fcomp dword ptr [0x932774] */ fx_compare(ST(0), R_F32((u32)(0x932774u))); FPOP();
    /* 0062caca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062cacc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062cacd: jae 0x62cb4c */ if (!fC) goto L_0062cb4c;
L_0062cacf:; BB(0x0062cacf);
    /* 0062cacf: mov byte ptr [ebx + 0x100], 2 */ W8((u32)(r_ebx+0x100u), 0x2u);
    /* 0062cad6: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cadbu); f_008587a5();
    /* 0062cadb: fld dword ptr [0x932788] */ FPUSH(R_F32((u32)(0x932788u)));
    /* 0062cae1: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062cae5: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cae9: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062caef: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062caf1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062caf3: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0062caf7: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0062cafc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062cb01: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0062cb05: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0062cb09: fistp dword ptr [esp + 0x74] */ W32((u32)(r_esp+0x74u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062cb0d: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 0062cb11: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0062cb15: mov word ptr [ebx + 0xfc], ax */ W16((u32)(r_ebx+0xfcu), (u16)r_eax);
    /* 0062cb1c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cb21u); f_008587a5();
    /* 0062cb21: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062cb25: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cb29: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cb2f: fcomp dword ptr [0x932784] */ fx_compare(ST(0), R_F32((u32)(0x932784u))); FPOP();
    /* 0062cb35: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062cb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062cb38: jae 0x62cb43 */ if (!fC) goto L_0062cb43;
L_0062cb3a:; BB(0x0062cb3a);
    /* 0062cb3a: mov byte ptr [ebx + 0x102], 0 */ W8((u32)(r_ebx+0x102u), 0x0u);
    /* 0062cb41: jmp 0x62cb9f */ goto L_0062cb9f;
L_0062cb43:; BB(0x0062cb43);
    /* 0062cb43: mov byte ptr [ebx + 0x102], 1 */ W8((u32)(r_ebx+0x102u), 0x1u);
    /* 0062cb4a: jmp 0x62cb9f */ goto L_0062cb9f;
L_0062cb4c:; BB(0x0062cb4c);
    /* 0062cb4c: mov byte ptr [ebx + 0x100], 1 */ W8((u32)(r_ebx+0x100u), 0x1u);
    /* 0062cb53: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cb58u); f_008587a5();
    /* 0062cb58: fld dword ptr [0x93278c] */ FPUSH(R_F32((u32)(0x93278cu)));
    /* 0062cb5e: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062cb62: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cb66: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cb6c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062cb6e: fmul dword ptr [0x9327e0] */ ST(0) = ST(0) * R_F32((u32)(0x9327e0u));
    /* 0062cb74: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062cb76: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0062cb7a: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0062cb7f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062cb84: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0062cb88: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0062cb8c: fistp dword ptr [esp + 0x74] */ W32((u32)(r_esp+0x74u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062cb90: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 0062cb94: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0062cb98: mov word ptr [ebx + 0xfc], ax */ W16((u32)(r_ebx+0xfcu), (u16)r_eax);
L_0062cb9f:; BB(0x0062cb9f);
    /* 0062cb9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062cba1: call 0x62ce8c */ r_esp -= 4; W32(r_esp, 0x62cba6u); f_0062ce8c();
    /* 0062cba6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062cba8: call 0x62cec0 */ r_esp -= 4; W32(r_esp, 0x62cbadu); f_0062cec0();
    /* 0062cbad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062cbaf: call 0x62cee4 */ r_esp -= 4; W32(r_esp, 0x62cbb4u); f_0062cee4();
    /* 0062cbb4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cbb9u); f_008587a5();
    /* 0062cbb9: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062cbbd: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cbc1: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cbc7: fmul dword ptr [0x932778] */ ST(0) = ST(0) * R_F32((u32)(0x932778u));
    /* 0062cbcd: fadd dword ptr [0x93277c] */ ST(0) = ST(0) + R_F32((u32)(0x93277cu));
    /* 0062cbd3: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0062cbd7: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0062cbdc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062cbe1: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0062cbe5: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0062cbe9: fistp qword ptr [esp + 0x74] */ W64((u32)(r_esp+0x74u), (u64)fx_int64(ST(0))); FPOP();
    /* 0062cbed: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 0062cbf1: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0062cbf5: add word ptr [ebx + 0xfe], ax */ { u32 ad = (u32)(r_ebx+0xfeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0062cbfc: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062cc02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062cc03: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062cc04: ret  */ FN_RET(0x0062c448); r_esp += 4; return;
L_0062cc05:; BB(0x0062cc05);
    /* 0062cc05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062cc07: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cc0cu); f_008587a5();
    /* 0062cc0c: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062cc10: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cc14: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cc1a: fcomp dword ptr [0x932770] */ fx_compare(ST(0), R_F32((u32)(0x932770u))); FPOP();
    /* 0062cc20: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062cc22: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062cc23: jae 0x62ccac */ if (!fC) goto L_0062ccac;
L_0062cc29:; BB(0x0062cc29);
    /* 0062cc29: mov byte ptr [ebx + 0x100], 2 */ W8((u32)(r_ebx+0x100u), 0x2u);
    /* 0062cc30: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cc35u); f_008587a5();
    /* 0062cc35: fld dword ptr [0x932788] */ FPUSH(R_F32((u32)(0x932788u)));
    /* 0062cc3b: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062cc3f: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cc43: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cc49: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062cc4b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062cc4d: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0062cc51: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0062cc56: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062cc5b: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0062cc5f: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0062cc63: fistp dword ptr [esp + 0x74] */ W32((u32)(r_esp+0x74u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062cc67: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 0062cc6b: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0062cc6f: mov word ptr [ebx + 0xfc], ax */ W16((u32)(r_ebx+0xfcu), (u16)r_eax);
    /* 0062cc76: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cc7bu); f_008587a5();
    /* 0062cc7b: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062cc7f: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cc83: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cc89: fcomp dword ptr [0x932784] */ fx_compare(ST(0), R_F32((u32)(0x932784u))); FPOP();
    /* 0062cc8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062cc91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062cc92: jae 0x62cca0 */ if (!fC) goto L_0062cca0;
L_0062cc94:; BB(0x0062cc94);
    /* 0062cc94: mov byte ptr [ebx + 0x102], 0 */ W8((u32)(r_ebx+0x102u), 0x0u);
    /* 0062cc9b: jmp 0x62cb9f */ goto L_0062cb9f;
L_0062cca0:; BB(0x0062cca0);
    /* 0062cca0: mov byte ptr [ebx + 0x102], 1 */ W8((u32)(r_ebx+0x102u), 0x1u);
    /* 0062cca7: jmp 0x62cb9f */ goto L_0062cb9f;
L_0062ccac:; BB(0x0062ccac);
    /* 0062ccac: mov byte ptr [ebx + 0x100], 0 */ W8((u32)(r_ebx+0x100u), 0x0u);
    /* 0062ccb3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62ccb8u); f_008587a5();
    /* 0062ccb8: fld dword ptr [0x93278c] */ FPUSH(R_F32((u32)(0x93278cu)));
    /* 0062ccbe: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062ccc2: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062ccc6: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cccc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062ccce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062ccd0: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0062ccd4: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0062ccd9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062ccde: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0062cce2: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0062cce6: fistp dword ptr [esp + 0x74] */ W32((u32)(r_esp+0x74u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062ccea: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 0062ccee: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0062ccf2: mov word ptr [ebx + 0xfc], ax */ W16((u32)(r_ebx+0xfcu), (u16)r_eax);
    /* 0062ccf9: jmp 0x62cb9f */ goto L_0062cb9f;
L_0062ccfe:; BB(0x0062ccfe);
    /* 0062ccfe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062cd00: mov byte ptr [ebx + 0x100], 1 */ W8((u32)(r_ebx+0x100u), 0x1u);
    /* 0062cd07: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cd0cu); f_008587a5();
    /* 0062cd0c: fld dword ptr [0x932780] */ FPUSH(R_F32((u32)(0x932780u)));
    /* 0062cd12: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062cd16: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cd1a: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cd20: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062cd22: fmul dword ptr [0x9327e0] */ ST(0) = ST(0) * R_F32((u32)(0x9327e0u));
    /* 0062cd28: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0062cd2a: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0062cd2e: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0062cd33: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062cd38: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0062cd3c: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0062cd40: fistp dword ptr [esp + 0x74] */ W32((u32)(r_esp+0x74u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062cd44: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 0062cd48: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0062cd4c: mov word ptr [ebx + 0xfc], ax */ W16((u32)(r_ebx+0xfcu), (u16)r_eax);
    /* 0062cd53: jmp 0x62cb9f */ goto L_0062cb9f;
L_0062cd58:; BB(0x0062cd58);
    /* 0062cd58: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062cd5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cd5c: je 0x62cd88 */ if (fZ) goto L_0062cd88;
L_0062cd5e:; BB(0x0062cd5e);
    /* 0062cd5e: fld dword ptr [0x9327a4] */ FPUSH(R_F32((u32)(0x9327a4u)));
    /* 0062cd64: fld dword ptr [ebx + 0xd8] */ FPUSH(R_F32((u32)(r_ebx+0xd8u)));
    /* 0062cd6a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062cd6c: fld dword ptr [ebx + 0xe0] */ FPUSH(R_F32((u32)(r_ebx+0xe0u)));
    /* 0062cd72: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0062cd74: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0062cd7a: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
    /* 0062cd80: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0062cd83: jmp 0x62c8c1 */ goto L_0062c8c1;
L_0062cd88:; BB(0x0062cd88);
    /* 0062cd88: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cd8du); f_008587a5();
    /* 0062cd8d: fld dword ptr [0x9327e0] */ FPUSH(R_F32((u32)(0x9327e0u)));
    /* 0062cd93: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 0062cd9b: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062cd9f: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cda3: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cda9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062cdab: fadd dword ptr [0x9327b0] */ ST(0) = ST(0) + R_F32((u32)(0x9327b0u));
    /* 0062cdb1: fmul dword ptr [0x9327a0] */ ST(0) = ST(0) * R_F32((u32)(0x9327a0u));
    /* 0062cdb7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062cdb9: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0062cdbd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cdc2u); f_008587a5();
    /* 0062cdc2: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062cdc6: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cdca: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cdd0: fmul dword ptr [0x9327a0] */ ST(0) = ST(0) * R_F32((u32)(0x9327a0u));
    /* 0062cdd6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0062cddb: fmul dword ptr [0x9327e0] */ ST(0) = ST(0) * R_F32((u32)(0x9327e0u));
    /* 0062cde1: fadd dword ptr [0x9327a8] */ ST(0) = ST(0) + R_F32((u32)(0x9327a8u));
    /* 0062cde7: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0062cdeb: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x62cdf0u); f_0082d990();
    /* 0062cdf0: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0062cdf3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062cdf5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62cdfau); f_0082d8bc();
    /* 0062cdfa: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 0062cdfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cdff: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 0062ce03: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ce05: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x62ce0au); f_0082eab8();
    /* 0062ce0a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0062ce0f: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x62ce14u); f_0082eb80();
    /* 0062ce14: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0062ce18: fadd dword ptr [ebx + 0xd8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xd8u));
    /* 0062ce1e: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0062ce22: fadd dword ptr [ebx + 0xe0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xe0u));
    /* 0062ce28: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0062ce2b: fld dword ptr [0x93279c] */ FPUSH(R_F32((u32)(0x93279cu)));
    /* 0062ce31: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0062ce33: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062ce35: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062ce37: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0062ce3d: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
    /* 0062ce43: jmp 0x62c8c1 */ goto L_0062c8c1;
L_0062ce48:; BB(0x0062ce48);
    /* 0062ce48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062ce4a: fld dword ptr [0x932798] */ FPUSH(R_F32((u32)(0x932798u)));
    /* 0062ce50: fld dword ptr [ebx + 0xd8] */ FPUSH(R_F32((u32)(r_ebx+0xd8u)));
    /* 0062ce56: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0062ce58: fld dword ptr [ebx + 0xe0] */ FPUSH(R_F32((u32)(r_ebx+0xe0u)));
    /* 0062ce5e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0062ce60: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 0062ce66: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
    /* 0062ce6c: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0062ce6f: jmp 0x62c8c1 */ goto L_0062c8c1;
L_0062ce74:; BB(0x0062ce74);
    /* 0062ce74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062ce76: call 0x62cf68 */ r_esp -= 4; W32(r_esp, 0x62ce7bu); f_0062cf68();
    /* 0062ce7b: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ce81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ce82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062ce83: ret  */ FN_RET(0x0062c448); r_esp += 4; return;
L_0062ce84:; BB(0x0062ce84);
    /* 0062ce84: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062ce86: jmp 0x62cb9f */ goto L_0062cb9f;
}

void f_0062cc7c(void)
{
    FN_ENTER(0x0062cc7c);
    goto L_0062cc7c;
L_0062cb9f:; BB(0x0062cb9f);
    /* 0062cb9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062cba1: call 0x62ce8c */ r_esp -= 4; W32(r_esp, 0x62cba6u); f_0062ce8c();
    /* 0062cba6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062cba8: call 0x62cec0 */ r_esp -= 4; W32(r_esp, 0x62cbadu); f_0062cec0();
    /* 0062cbad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062cbaf: call 0x62cee4 */ r_esp -= 4; W32(r_esp, 0x62cbb4u); f_0062cee4();
    /* 0062cbb4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x62cbb9u); f_008587a5();
    /* 0062cbb9: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0062cbbd: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cbc1: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cbc7: fmul dword ptr [0x932778] */ ST(0) = ST(0) * R_F32((u32)(0x932778u));
    /* 0062cbcd: fadd dword ptr [0x93277c] */ ST(0) = ST(0) + R_F32((u32)(0x93277cu));
    /* 0062cbd3: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0062cbd7: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0062cbdc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062cbe1: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0062cbe5: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0062cbe9: fistp qword ptr [esp + 0x74] */ W64((u32)(r_esp+0x74u), (u64)fx_int64(ST(0))); FPOP();
    /* 0062cbed: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 0062cbf1: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0062cbf5: add word ptr [ebx + 0xfe], ax */ { u32 ad = (u32)(r_ebx+0xfeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0062cbfc: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062cc02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062cc03: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062cc04: ret  */ FN_RET(0x0062cc7c); r_esp += 4; return;
L_0062cc7c:; BB(0x0062cc7c);
    /* 0062cc7c: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cc7d: and al, 0x6c */ {  u32 a = (u8)r_eax; u32 b = 0x6cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062cc7f: fild dword ptr [esp + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x6cu)));
    /* 0062cc83: fdiv dword ptr [0x9327bc] */ ST(0) = ST(0) / R_F32((u32)(0x9327bcu));
    /* 0062cc89: fcomp dword ptr [0x932784] */ fx_compare(ST(0), R_F32((u32)(0x932784u))); FPOP();
    /* 0062cc8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062cc91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062cc92: jae 0x62cca0 */ if (!fC) goto L_0062cca0;
L_0062cc94:; BB(0x0062cc94);
    /* 0062cc94: mov byte ptr [ebx + 0x102], 0 */ W8((u32)(r_ebx+0x102u), 0x0u);
    /* 0062cc9b: jmp 0x62cb9f */ goto L_0062cb9f;
L_0062cca0:; BB(0x0062cca0);
    /* 0062cca0: mov byte ptr [ebx + 0x102], 1 */ W8((u32)(r_ebx+0x102u), 0x1u);
    /* 0062cca7: jmp 0x62cb9f */ goto L_0062cb9f;
}

void f_0062ce8c(void) /* sub_62CE8C */
{
    FN_ENTER(0x0062ce8c);
    /* 0062ce8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ce8d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062ce8f: lea edx, [ebp + 0xe4] */ r_edx = (u32)(r_ebp+0xe4u);
    /* 0062ce95: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0062ce98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ce99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ce9a: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x62ce9fu); f_00836208();
    /* 0062ce9f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0062cea2: fcomp dword ptr [ebp + 0x6c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x6cu))); FPOP();
    /* 0062cea5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062cea7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062cea8: jbe 0x62cebd */ if ((fC||fZ)) goto L_0062cebd;
L_0062ceaa:; BB(0x0062ceaa);
    /* 0062ceaa: movzx eax, byte ptr [ebp + 0x100] */ r_eax = (u32)R8((u32)(r_ebp+0x100u));
    /* 0062ceb1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062ceb4: je 0x62cebd */ if (fZ) goto L_0062cebd;
L_0062ceb6:; BB(0x0062ceb6);
    /* 0062ceb6: mov byte ptr [ebp + 0x100], 3 */ W8((u32)(r_ebp+0x100u), 0x3u);
L_0062cebd:; BB(0x0062cebd);
    /* 0062cebd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062cebe: ret  */ FN_RET(0x0062ce8c); r_esp += 4; return;
}

void f_0062cec0(void) /* sub_62CEC0 */
{
    FN_ENTER(0x0062cec0);
    /* 0062cec0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062cec1: mov edi, ecx */ r_edi = r_ecx;
    /* 0062cec3: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 0062cec6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0062cec8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062cec9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062cecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0062cece: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x62ced3u); f_006134c8();
    /* 0062ced3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062ced6: jne 0x62cedf */ if (!fZ) goto L_0062cedf;
L_0062ced8:; BB(0x0062ced8);
    /* 0062ced8: mov byte ptr [edi + 0x100], 4 */ W8((u32)(r_edi+0x100u), 0x4u);
L_0062cedf:; BB(0x0062cedf);
    /* 0062cedf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062cee0: ret  */ FN_RET(0x0062cec0); r_esp += 4; return;
}

void f_0062cee4(void) /* sub_62CEE4 */
{
    FN_ENTER(0x0062cee4);
    /* 0062cee4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062cee5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062cee6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062cee9: mov esi, ecx */ r_esi = r_ecx;
    /* 0062ceeb: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 0062ceee: mov ebp, dword ptr [esi + 0x64] */ r_ebp = R32((u32)(r_esi+0x64u));
    /* 0062cef1: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 0062cef4: fsub dword ptr [esi + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x4cu));
    /* 0062cef7: fmul dword ptr [0x93276c] */ ST(0) = ST(0) * R_F32((u32)(0x93276cu));
    /* 0062cefd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0062cf00: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0062cf04: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062cf09: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0062cf0d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0062cf11: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062cf15: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0062cf18: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0062cf1b: fsub dword ptr [esi + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x44u));
    /* 0062cf1e: fmul dword ptr [0x932768] */ ST(0) = ST(0) * R_F32((u32)(0x932768u));
    /* 0062cf24: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0062cf28: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0062cf2b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0062cf2f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062cf34: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0062cf38: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0062cf3c: fistp dword ptr [esi + 0x64] */ W32((u32)(r_esi+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 0062cf3f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0062cf42: mov dword ptr [esi + 0x5c], edx */ W32((u32)(r_esi+0x5cu), r_edx);
    /* 0062cf45: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf49: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x62cf4eu); f_007a8c74();
    /* 0062cf4e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf50: push dword ptr [esi + 0x64] */ { u32 v = R32((u32)(r_esi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062cf53: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 0062cf56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf57: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x62cf5cu); f_007a8c74();
    /* 0062cf5c: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 0062cf5f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062cf62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062cf63: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062cf64: ret  */ FN_RET(0x0062cee4); r_esp += 4; return;
}

void f_0062cf68(void) /* sub_62CF68 */
{
    FN_ENTER(0x0062cf68);
    /* 0062cf68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf69: call 0x4fbf00 */ r_esp -= 4; W32(r_esp, 0x62cf6eu); f_004fbf00();
    /* 0062cf6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062cf6f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062cf72: je 0x62cf75 */ if (fZ) goto L_0062cf75;
L_0062cf74:; BB(0x0062cf74);
    /* 0062cf74: ret  */ FN_RET(0x0062cf68); r_esp += 4; return;
L_0062cf75:; BB(0x0062cf75);
    /* 0062cf75: push 0x93286c */ { u32 v = 0x93286cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf7a: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf7f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x62cf84u); f_0061cdb0();
    /* 0062cf84: push 0x93287c */ { u32 v = 0x93287cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf89: push 0x13001d */ { u32 v = 0x13001du; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf8e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x62cf93u); f_0061cdb0();
    /* 0062cf93: push 0x932888 */ { u32 v = 0x932888u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf98: push 0x13001e */ { u32 v = 0x13001eu; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf9d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x62cfa2u); f_0061cdb0();
    /* 0062cfa2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062cfa5: ret  */ FN_RET(0x0062cf68); r_esp += 4; return;
}

void f_0062cfa8(void) /* sub_62CFA8 */
{
    FN_ENTER(0x0062cfa8);
    /* 0062cfa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062cfa9: mov ebp, esp */ r_ebp = r_esp;
    /* 0062cfab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062cfad: push 0x8e33a4 */ { u32 v = 0x8e33a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cfb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062cfb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cfb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062cfc0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062cfc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062cfc6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062cfc9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062cfcc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062cfcf: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cfd4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062cfdb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62cfe0u); f_008581c5();
    /* 0062cfe0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062cfe1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062cfe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cfe6: je 0x62d027 */ if (fZ) goto L_0062d027;
L_0062cfe8:; BB(0x0062cfe8);
    /* 0062cfe8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062cfef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062cff6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062cff9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062cffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cffd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cffe: push 0x9c5f84 */ { u32 v = 0x9c5f84u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d003: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d005: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62d00au); f_005b7a84();
    /* 0062d00a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062d00d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062d014:; BB(0x0062d014);
    /* 0062d014: mov dword ptr [0xa8ee70], eax */ W32((u32)(0xa8ee70u), r_eax);
    /* 0062d019: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d01c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062d023: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d025: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d026: ret  */ FN_RET(0x0062cfa8); r_esp += 4; return;
L_0062d027:; BB(0x0062d027);
    /* 0062d027: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062d029: jmp 0x62d014 */ goto L_0062d014;
}

