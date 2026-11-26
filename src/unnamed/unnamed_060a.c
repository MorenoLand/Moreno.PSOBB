#include "protos.h"

void f_0060a0a4(void) /* sub_60A0A4 */
{
    FN_ENTER(0x0060a0a4);
    /* 0060a0a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a0a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a0a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a0a9: push 0x8df618 */ { u32 v = 0x8df618u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a0ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a0b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a0b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a0bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a0bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a0c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060a0c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060a0c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060a0cb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060a0ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a0d1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060a0d4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060a0d7: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x60a0dcu); f_00609010();
    /* 0060a0dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a0e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a0e6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060a0e9: mov dword ptr [ecx], 0xb1f820 */ W32((u32)(r_ecx), 0xb1f820u);
    /* 0060a0ef: mov eax, dword ptr [0x9c41ac] */ r_eax = R32((u32)(0x9c41acu));
    /* 0060a0f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a0f5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060a0f8: call dword ptr [0xb1f96c] */ { u32 t = R32((u32)(0xb1f96cu)); r_esp -= 4; W32(r_esp, 0x60a0feu); call_ind(t); }
    /* 0060a0fe: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a101: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060a104: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060a107: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060a10a: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060a110: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060a116: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a119: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060a11f: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060a125: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060a12b: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060a131: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060a137: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060a13d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a140: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060a146: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a149: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060a14f: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060a152: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060a158: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060a15b: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060a161: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060a164: mov edx, dword ptr [0xa8e7dc] */ r_edx = R32((u32)(0xa8e7dcu));
    /* 0060a16a: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060a170: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0060a173: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060a176: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060a17c: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060a17f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060a182: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60a187u); f_00606bc8();
    /* 0060a187: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a18a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a18d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060a190: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060a193: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a196: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a19d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a19f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a1a0: ret 8 */ FN_RET(0x0060a0a4); r_esp += 12; return;
}

void f_0060a1a4(void) /* sub_60A1A4 */
{
    FN_ENTER(0x0060a1a4);
    /* 0060a1a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a1a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a1a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a1a9: push 0x8df640 */ { u32 v = 0x8df640u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a1ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a1b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a1b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a1bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a1bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a1c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060a1c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060a1c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060a1cb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a1d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060a1d7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60a1dcu); f_008581c5();
    /* 0060a1dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a1dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060a1e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a1e2: je 0x60a223 */ if (fZ) goto L_0060a223;
L_0060a1e4:; BB(0x0060a1e4);
    /* 0060a1e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060a1eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a1f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a1f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060a1f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a1f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a1f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a1fa: push 0x9c419c */ { u32 v = 0x9c419cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a1ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a201: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60a206u); f_005b7a84();
    /* 0060a206: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a209: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060a210:; BB(0x0060a210);
    /* 0060a210: mov dword ptr [0xa8e7dc], eax */ W32((u32)(0xa8e7dcu), r_eax);
    /* 0060a215: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a218: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a21f: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a221: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a222: ret  */ FN_RET(0x0060a1a4); r_esp += 4; return;
L_0060a223:; BB(0x0060a223);
    /* 0060a223: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a225: jmp 0x60a210 */ goto L_0060a210;
}

void f_0060a228(void) /* sub_60A228 */
{
    FN_ENTER(0x0060a228);
    /* 0060a228: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a229: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060a22b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060a22d: call 0x60a24c */ r_esp -= 4; W32(r_esp, 0x60a232u); f_0060a24c();
    /* 0060a232: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060a236: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a238: jne 0x60a23e */ if (!fZ) goto L_0060a23e;
L_0060a23a:; BB(0x0060a23a);
    /* 0060a23a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060a23b: ret 4 */ FN_RET(0x0060a228); r_esp += 8; return;
L_0060a23e:; BB(0x0060a23e);
    /* 0060a23e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a23f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60a244u); f_005c2f74();
    /* 0060a244: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a245: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060a246: ret 4 */ FN_RET(0x0060a228); r_esp += 8; return;
}

void f_0060a24c(void) /* sub_60A24C */
{
    FN_ENTER(0x0060a24c);
    /* 0060a24c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a24d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a24f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a251: push 0x8df65c */ { u32 v = 0x8df65cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a256: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a25c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a25d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a264: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a267: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a26a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060a26d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060a270: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060a273: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060a276: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a279: mov dword ptr [ecx], 0xb1fa60 */ W32((u32)(r_ecx), 0xb1fa60u);
    /* 0060a27f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060a286: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x60a28bu); f_00608fc0();
    /* 0060a28b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a28e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a295: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a298: ret  */ FN_RET(0x0060a24c); r_esp += 4; return;
}

void f_0060a29c(void) /* sub_60A29C */
{
    FN_ENTER(0x0060a29c);
    /* 0060a29c: mov ecx, dword ptr [0xa8e7e8] */ r_ecx = R32((u32)(0xa8e7e8u));
    /* 0060a2a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a2a4: je 0x60a2b9 */ if (fZ) goto L_0060a2b9;
L_0060a2a6:; BB(0x0060a2a6);
    /* 0060a2a6: je 0x60a2af */ if (fZ) goto L_0060a2af;
L_0060a2a8:; BB(0x0060a2a8);
    /* 0060a2a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a2aa: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60a2afu); f_004066a8();
L_0060a2af:; BB(0x0060a2af);
    /* 0060a2af: mov dword ptr [0xa8e7e8], 0 */ W32((u32)(0xa8e7e8u), 0x0u);
L_0060a2b9:; BB(0x0060a2b9);
    /* 0060a2b9: ret  */ FN_RET(0x0060a29c); r_esp += 4; return;
}

void f_0060a2bc(void)
{
    FN_ENTER(0x0060a2bc);
    /* 0060a2bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a2bd: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a2bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a2c1: push 0x8df69e */ { u32 v = 0x8df69eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a2c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a2cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a2d4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a2d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a2da: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060a2dd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060a2e0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060a2e3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a2e5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060a2ec: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60a2f1u); f_005caba4();
    /* 0060a2f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a2f2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060a2f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a2f7: je 0x60a37f */ if (fZ) goto L_0060a37f;
L_0060a2fd:; BB(0x0060a2fd);
    /* 0060a2fd: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060a304: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a30b: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a311: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060a314: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60a319u); f_00787a4c();
    /* 0060a319: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060a31c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060a323: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060a326:; BB(0x0060a326);
    /* 0060a326: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060a32d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060a334: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a339: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60a33eu); f_005caba4();
    /* 0060a33e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a33f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060a342: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a344: je 0x60a37b */ if (fZ) goto L_0060a37b;
L_0060a346:; BB(0x0060a346);
    /* 0060a346: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060a34d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060a354: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a357: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060a35a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a35e: call 0x60a388 */ r_esp -= 4; W32(r_esp, 0x60a363u); f_0060a388();
    /* 0060a363: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a366: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060a36d:; BB(0x0060a36d);
    /* 0060a36d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a370: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a377: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a379: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a37a: ret  */ FN_RET(0x0060a2bc); r_esp += 4; return;
L_0060a37b:; BB(0x0060a37b);
    /* 0060a37b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a37d: jmp 0x60a36d */ goto L_0060a36d;
L_0060a37f:; BB(0x0060a37f);
    /* 0060a37f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060a381: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060a384: jmp 0x60a326 */ goto L_0060a326;
}

void f_0060a388(void) /* sub_60A388 */
{
    FN_ENTER(0x0060a388);
    /* 0060a388: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a389: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a38b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a38d: push 0x8df6b8 */ { u32 v = 0x8df6b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a392: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a399: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a3a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a3a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a3a6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060a3a9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060a3ac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060a3af: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060a3b2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a3b5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060a3b8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060a3bb: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x60a3c0u); f_00609010();
    /* 0060a3c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a3c7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a3ca: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060a3cd: mov dword ptr [ecx], 0xb1fa60 */ W32((u32)(r_ecx), 0xb1fa60u);
    /* 0060a3d3: mov eax, dword ptr [0x9c41c8] */ r_eax = R32((u32)(0x9c41c8u));
    /* 0060a3d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a3d9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060a3dc: call dword ptr [0xb1fbac] */ { u32 t = R32((u32)(0xb1fbacu)); r_esp -= 4; W32(r_esp, 0x60a3e2u); call_ind(t); }
    /* 0060a3e2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a3e5: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060a3e8: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060a3eb: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060a3ee: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060a3f4: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060a3fa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a3fd: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060a403: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060a409: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060a40f: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060a415: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060a41b: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060a421: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a424: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060a42a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a42d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060a433: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060a436: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060a43c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060a43f: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060a445: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060a448: mov edx, dword ptr [0xa8e7e8] */ r_edx = R32((u32)(0xa8e7e8u));
    /* 0060a44e: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060a454: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0060a457: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060a45a: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060a460: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060a463: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060a466: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60a46bu); f_00606bc8();
    /* 0060a46b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a46e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a471: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060a474: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060a477: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a47a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a481: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a483: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a484: ret 8 */ FN_RET(0x0060a388); r_esp += 12; return;
}

void f_0060a488(void) /* sub_60A488 */
{
    FN_ENTER(0x0060a488);
    /* 0060a488: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a489: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a48b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a48d: push 0x8df6e0 */ { u32 v = 0x8df6e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a492: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a499: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a4a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a4a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a4a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060a4a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060a4ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060a4af: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a4b4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060a4bb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60a4c0u); f_008581c5();
    /* 0060a4c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a4c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060a4c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a4c6: je 0x60a507 */ if (fZ) goto L_0060a507;
L_0060a4c8:; BB(0x0060a4c8);
    /* 0060a4c8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060a4cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a4d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a4d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060a4db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a4dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a4dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a4de: push 0x9c41b8 */ { u32 v = 0x9c41b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a4e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a4e5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60a4eau); f_005b7a84();
    /* 0060a4ea: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a4ed: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060a4f4:; BB(0x0060a4f4);
    /* 0060a4f4: mov dword ptr [0xa8e7e8], eax */ W32((u32)(0xa8e7e8u), r_eax);
    /* 0060a4f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a4fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a503: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a506: ret  */ FN_RET(0x0060a488); r_esp += 4; return;
L_0060a507:; BB(0x0060a507);
    /* 0060a507: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a509: jmp 0x60a4f4 */ goto L_0060a4f4;
}

void f_0060a50c(void) /* sub_60A50C */
{
    FN_ENTER(0x0060a50c);
    /* 0060a50c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a50d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060a50f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060a511: call 0x60a530 */ r_esp -= 4; W32(r_esp, 0x60a516u); f_0060a530();
    /* 0060a516: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060a51a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a51c: jne 0x60a522 */ if (!fZ) goto L_0060a522;
L_0060a51e:; BB(0x0060a51e);
    /* 0060a51e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060a51f: ret 4 */ FN_RET(0x0060a50c); r_esp += 8; return;
L_0060a522:; BB(0x0060a522);
    /* 0060a522: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a523: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60a528u); f_005c2f74();
    /* 0060a528: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a529: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060a52a: ret 4 */ FN_RET(0x0060a50c); r_esp += 8; return;
}

void f_0060a530(void) /* sub_60A530 */
{
    FN_ENTER(0x0060a530);
    /* 0060a530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a531: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a533: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a535: push 0x8df6fc */ { u32 v = 0x8df6fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a53a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a541: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a548: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a54b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a54e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060a551: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060a554: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060a557: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060a55a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a55d: mov dword ptr [ecx], 0xb1fc40 */ W32((u32)(r_ecx), 0xb1fc40u);
    /* 0060a563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060a56a: call 0x606190 */ r_esp -= 4; W32(r_esp, 0x60a56fu); f_00606190();
    /* 0060a56f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a572: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a579: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a57b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a57c: ret  */ FN_RET(0x0060a530); r_esp += 4; return;
}

void f_0060a580(void) /* sub_60A580 */
{
    FN_ENTER(0x0060a580);
    /* 0060a580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a581: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a583: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a585: push 0x8df718 */ { u32 v = 0x8df718u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a58a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a591: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a598: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a59b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a59e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060a5a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060a5a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060a5a7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a5aa: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060a5ad: call 0x606c28 */ r_esp -= 4; W32(r_esp, 0x60a5b2u); f_00606c28();
    /* 0060a5b2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a5b9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a5bc: mov dword ptr [ecx], 0xb1fc40 */ W32((u32)(r_ecx), 0xb1fc40u);
    /* 0060a5c2: mov eax, dword ptr [0xa8e4c4] */ r_eax = R32((u32)(0xa8e4c4u));
    /* 0060a5c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a5c9: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a5cb: push 0x92f5a4 */ { u32 v = 0x92f5a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a5d0: call 0x7aa624 */ r_esp -= 4; W32(r_esp, 0x60a5d5u); f_007aa624();
    /* 0060a5d5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a5d8: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 0060a5de: movzx ecx, word ptr [eax + 0xa] */ r_ecx = (u32)R16((u32)(r_eax+0xau));
    /* 0060a5e2: or ecx, 0xffff0080 */ {  u32 a = r_ecx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a5e8: mov word ptr [eax + 0xa], cx */ W16((u32)(r_eax+0xau), (u16)r_ecx);
    /* 0060a5ec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a5ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a5f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a5f9: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a5fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a5fc: ret 4 */ FN_RET(0x0060a580); r_esp += 8; return;
}

void f_0060a600(void) /* sub_60A600 */
{
    FN_ENTER(0x0060a600);
    /* 0060a600: mov eax, dword ptr [0xa8e800] */ r_eax = R32((u32)(0xa8e800u));
    /* 0060a605: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a607: je 0x60a613 */ if (fZ) goto L_0060a613;
L_0060a609:; BB(0x0060a609);
    /* 0060a609: mov dword ptr [0xa8e800], 0 */ W32((u32)(0xa8e800u), 0x0u);
L_0060a613:; BB(0x0060a613);
    /* 0060a613: ret  */ FN_RET(0x0060a600); r_esp += 4; return;
}

void f_0060a614(void) /* sub_60A614 */
{
    FN_ENTER(0x0060a614);
    /* 0060a614: mov dword ptr [0xa8e7f4], 0x3f800000 */ W32((u32)(0xa8e7f4u), 0x3f800000u);
    /* 0060a61e: mov dword ptr [0xa8e7f8], 0x41000000 */ W32((u32)(0xa8e7f8u), 0x41000000u);
    /* 0060a628: mov dword ptr [0xa8e7fc], 0x3fc00000 */ W32((u32)(0xa8e7fcu), 0x3fc00000u);
    /* 0060a632: ret  */ FN_RET(0x0060a614); r_esp += 4; return;
}

void f_0060a634(void) /* sub_60A634 */
{
    FN_ENTER(0x0060a634);
    /* 0060a634: mov eax, dword ptr [0xa9428c] */ r_eax = R32((u32)(0xa9428cu));
    /* 0060a639: mov dword ptr [0xa8e800], eax */ W32((u32)(0xa8e800u), r_eax);
    /* 0060a63e: ret  */ FN_RET(0x0060a634); r_esp += 4; return;
}

void f_0060a640(void) /* sub_60A640 */
{
    FN_ENTER(0x0060a640);
    /* 0060a640: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a641: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060a643: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060a645: call 0x60a664 */ r_esp -= 4; W32(r_esp, 0x60a64au); f_0060a664();
    /* 0060a64a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060a64e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a650: jne 0x60a656 */ if (!fZ) goto L_0060a656;
L_0060a652:; BB(0x0060a652);
    /* 0060a652: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060a653: ret 4 */ FN_RET(0x0060a640); r_esp += 8; return;
L_0060a656:; BB(0x0060a656);
    /* 0060a656: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a657: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60a65cu); f_005c2f74();
    /* 0060a65c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a65d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060a65e: ret 4 */ FN_RET(0x0060a640); r_esp += 8; return;
}

void f_0060a664(void) /* sub_60A664 */
{
    FN_ENTER(0x0060a664);
    /* 0060a664: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a665: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a667: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a669: push 0x8df734 */ { u32 v = 0x8df734u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a66e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a675: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a67c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a67f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a682: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060a685: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060a688: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060a68b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060a68e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a691: mov dword ptr [ecx], 0xb1fe80 */ W32((u32)(r_ecx), 0xb1fe80u);
    /* 0060a697: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060a69e: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60a6a3u); f_0060c7e4();
    /* 0060a6a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a6a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a6ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a6af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a6b0: ret  */ FN_RET(0x0060a664); r_esp += 4; return;
}

void f_0060a6b4(void) /* sub_60A6B4 */
{
    FN_ENTER(0x0060a6b4);
    /* 0060a6b4: mov ecx, dword ptr [0xa8e808] */ r_ecx = R32((u32)(0xa8e808u));
    /* 0060a6ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a6bc: je 0x60a6d1 */ if (fZ) goto L_0060a6d1;
L_0060a6be:; BB(0x0060a6be);
    /* 0060a6be: je 0x60a6c7 */ if (fZ) goto L_0060a6c7;
L_0060a6c0:; BB(0x0060a6c0);
    /* 0060a6c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a6c2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60a6c7u); f_004066a8();
L_0060a6c7:; BB(0x0060a6c7);
    /* 0060a6c7: mov dword ptr [0xa8e808], 0 */ W32((u32)(0xa8e808u), 0x0u);
L_0060a6d1:; BB(0x0060a6d1);
    /* 0060a6d1: ret  */ FN_RET(0x0060a6b4); r_esp += 4; return;
}

void f_0060a6d4(void)
{
    FN_ENTER(0x0060a6d4);
    /* 0060a6d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a6d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a6d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a6d9: push 0x8df776 */ { u32 v = 0x8df776u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a6de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a6e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a6e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a6ec: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a6ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a6f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060a6f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060a6f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060a6fb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a6fd: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060a704: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60a709u); f_005caba4();
    /* 0060a709: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a70a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060a70d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a70f: je 0x60a797 */ if (fZ) goto L_0060a797;
L_0060a715:; BB(0x0060a715);
    /* 0060a715: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060a71c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a723: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a729: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060a72c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60a731u); f_00787a4c();
    /* 0060a731: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060a734: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060a73b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060a73e:; BB(0x0060a73e);
    /* 0060a73e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060a745: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060a74c: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a751: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60a756u); f_005caba4();
    /* 0060a756: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a757: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060a75a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a75c: je 0x60a793 */ if (fZ) goto L_0060a793;
L_0060a75e:; BB(0x0060a75e);
    /* 0060a75e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060a765: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060a76c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a76f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060a772: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a776: call 0x60a7a0 */ r_esp -= 4; W32(r_esp, 0x60a77bu); f_0060a7a0();
    /* 0060a77b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a77e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060a785:; BB(0x0060a785);
    /* 0060a785: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a788: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a78f: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a792: ret  */ FN_RET(0x0060a6d4); r_esp += 4; return;
L_0060a793:; BB(0x0060a793);
    /* 0060a793: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a795: jmp 0x60a785 */ goto L_0060a785;
L_0060a797:; BB(0x0060a797);
    /* 0060a797: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060a799: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060a79c: jmp 0x60a73e */ goto L_0060a73e;
}

void f_0060a7a0(void) /* sub_60A7A0 */
{
    FN_ENTER(0x0060a7a0);
    /* 0060a7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a7a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a7a5: push 0x8df790 */ { u32 v = 0x8df790u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a7aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a7b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a7b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a7bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a7be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060a7c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060a7c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060a7c7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060a7ca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a7cd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060a7d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060a7d3: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60a7d8u); f_0060c858();
    /* 0060a7d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a7df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a7e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060a7e5: mov dword ptr [ecx], 0xb1fe80 */ W32((u32)(r_ecx), 0xb1fe80u);
    /* 0060a7eb: mov eax, dword ptr [0x9c41e8] */ r_eax = R32((u32)(0x9c41e8u));
    /* 0060a7f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a7f1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060a7f4: call dword ptr [0xb1ffcc] */ { u32 t = R32((u32)(0xb1ffccu)); r_esp -= 4; W32(r_esp, 0x60a7fau); call_ind(t); }
    /* 0060a7fa: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a7fd: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060a800: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060a803: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060a806: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060a80c: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060a812: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a815: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060a81b: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060a821: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060a827: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060a82d: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060a833: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060a839: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a83c: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060a842: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a845: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060a84b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060a84e: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060a854: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060a857: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060a85d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060a860: mov edx, dword ptr [0xa8e808] */ r_edx = R32((u32)(0xa8e808u));
    /* 0060a866: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060a86c: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0060a86f: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060a872: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060a878: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060a87b: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060a87e: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60a883u); f_00606bc8();
    /* 0060a883: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a886: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a889: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060a88c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060a88f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a892: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a899: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a89c: ret 8 */ FN_RET(0x0060a7a0); r_esp += 12; return;
}

void f_0060a8a0(void) /* sub_60A8A0 */
{
    FN_ENTER(0x0060a8a0);
    /* 0060a8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a8a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8a5: push 0x8df7b8 */ { u32 v = 0x8df7b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a8b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a8b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a8bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a8be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060a8c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060a8c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060a8c7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8cc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060a8d3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60a8d8u); f_008581c5();
    /* 0060a8d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a8d9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060a8dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a8de: je 0x60a91f */ if (fZ) goto L_0060a91f;
L_0060a8e0:; BB(0x0060a8e0);
    /* 0060a8e0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060a8e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a8ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a8f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060a8f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8f6: push 0x9c41d8 */ { u32 v = 0x9c41d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8fd: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60a902u); f_005b7a84();
    /* 0060a902: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a905: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060a90c:; BB(0x0060a90c);
    /* 0060a90c: mov dword ptr [0xa8e808], eax */ W32((u32)(0xa8e808u), r_eax);
    /* 0060a911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a91b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a91d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a91e: ret  */ FN_RET(0x0060a8a0); r_esp += 4; return;
L_0060a91f:; BB(0x0060a91f);
    /* 0060a91f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a921: jmp 0x60a90c */ goto L_0060a90c;
}

void f_0060a924(void) /* sub_60A924 */
{
    FN_ENTER(0x0060a924);
    /* 0060a924: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a925: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060a927: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060a929: call 0x60a948 */ r_esp -= 4; W32(r_esp, 0x60a92eu); f_0060a948();
    /* 0060a92e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060a932: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a934: jne 0x60a93a */ if (!fZ) goto L_0060a93a;
L_0060a936:; BB(0x0060a936);
    /* 0060a936: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060a937: ret 4 */ FN_RET(0x0060a924); r_esp += 8; return;
L_0060a93a:; BB(0x0060a93a);
    /* 0060a93a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a93b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60a940u); f_005c2f74();
    /* 0060a940: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a941: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060a942: ret 4 */ FN_RET(0x0060a924); r_esp += 8; return;
}

void f_0060a948(void) /* sub_60A948 */
{
    FN_ENTER(0x0060a948);
    /* 0060a948: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a949: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a94b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a94d: push 0x8df7d4 */ { u32 v = 0x8df7d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a952: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a959: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a960: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a963: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a966: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060a969: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060a96c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060a96f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060a972: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060a975: mov dword ptr [ecx], 0xb20080 */ W32((u32)(r_ecx), 0xb20080u);
    /* 0060a97b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060a982: call 0x60a530 */ r_esp -= 4; W32(r_esp, 0x60a987u); f_0060a530();
    /* 0060a987: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a98a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a991: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a993: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a994: ret  */ FN_RET(0x0060a948); r_esp += 4; return;
}

void f_0060a998(void) /* sub_60A998 */
{
    FN_ENTER(0x0060a998);
    /* 0060a998: mov ecx, dword ptr [0xa8e814] */ r_ecx = R32((u32)(0xa8e814u));
    /* 0060a99e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a9a0: je 0x60a9bd */ if (fZ) goto L_0060a9bd;
L_0060a9a2:; BB(0x0060a9a2);
    /* 0060a9a2: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60a9a7u); f_00829de0();
    /* 0060a9a7: push dword ptr [0xa8e814] */ { u32 v = R32((u32)(0xa8e814u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a9ad: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x60a9b2u); f_0082e960();
    /* 0060a9b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a9b3: mov dword ptr [0xa8e814], 0 */ W32((u32)(0xa8e814u), 0x0u);
L_0060a9bd:; BB(0x0060a9bd);
    /* 0060a9bd: mov eax, dword ptr [0xa8e818] */ r_eax = R32((u32)(0xa8e818u));
    /* 0060a9c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a9c4: je 0x60a9d7 */ if (fZ) goto L_0060a9d7;
L_0060a9c6:; BB(0x0060a9c6);
    /* 0060a9c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a9c7: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x60a9ccu); f_005b9bac();
    /* 0060a9cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a9cd: mov dword ptr [0xa8e818], 0 */ W32((u32)(0xa8e818u), 0x0u);
L_0060a9d7:; BB(0x0060a9d7);
    /* 0060a9d7: ret  */ FN_RET(0x0060a998); r_esp += 4; return;
}

void f_0060a9d8(void)
{
    FN_ENTER(0x0060a9d8);
    /* 0060a9d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a9d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a9db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060a9dd: push 0x8df816 */ { u32 v = 0x8df816u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a9e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060a9e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a9e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060a9f0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a9f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060a9f6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060a9f9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060a9fc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060a9ff: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060aa01: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060aa08: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60aa0du); f_005caba4();
    /* 0060aa0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060aa0e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060aa11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060aa13: je 0x60aa9b */ if (fZ) goto L_0060aa9b;
L_0060aa19:; BB(0x0060aa19);
    /* 0060aa19: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060aa20: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060aa27: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060aa2d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060aa30: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60aa35u); f_00787a4c();
    /* 0060aa35: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060aa38: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060aa3f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060aa42:; BB(0x0060aa42);
    /* 0060aa42: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060aa49: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060aa50: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060aa55: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60aa5au); f_005caba4();
    /* 0060aa5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060aa5b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060aa5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060aa60: je 0x60aa97 */ if (fZ) goto L_0060aa97;
L_0060aa62:; BB(0x0060aa62);
    /* 0060aa62: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060aa69: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060aa70: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060aa73: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060aa76: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060aa79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060aa7a: call 0x60aaa4 */ r_esp -= 4; W32(r_esp, 0x60aa7fu); f_0060aaa4();
    /* 0060aa7f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060aa82: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060aa89:; BB(0x0060aa89);
    /* 0060aa89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060aa8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060aa93: mov esp, ebp */ r_esp = r_ebp;
    /* 0060aa95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060aa96: ret  */ FN_RET(0x0060a9d8); r_esp += 4; return;
L_0060aa97:; BB(0x0060aa97);
    /* 0060aa97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060aa99: jmp 0x60aa89 */ goto L_0060aa89;
L_0060aa9b:; BB(0x0060aa9b);
    /* 0060aa9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060aa9d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060aaa0: jmp 0x60aa42 */ goto L_0060aa42;
}

void f_0060aaa4(void) /* sub_60AAA4 */
{
    FN_ENTER(0x0060aaa4);
    /* 0060aaa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060aaa5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060aaa7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060aaa9: push 0x8df830 */ { u32 v = 0x8df830u; r_esp -= 4; W32(r_esp, v); }
    /* 0060aaae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060aab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060aab5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060aabc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060aabf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060aac2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060aac5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060aac8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060aacb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060aace: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060aad1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060aad4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060aad7: call 0x60a580 */ r_esp -= 4; W32(r_esp, 0x60aadcu); f_0060a580();
    /* 0060aadc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060aae3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060aae6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060aae9: mov dword ptr [ecx], 0xb20080 */ W32((u32)(r_ecx), 0xb20080u);
    /* 0060aaef: mov eax, dword ptr [0x9c41ec] */ r_eax = R32((u32)(0x9c41ecu));
    /* 0060aaf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060aaf5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060aaf8: call dword ptr [0xb201cc] */ { u32 t = R32((u32)(0xb201ccu)); r_esp -= 4; W32(r_esp, 0x60aafeu); call_ind(t); }
    /* 0060aafe: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ab01: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060ab04: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060ab07: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060ab0a: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060ab10: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060ab16: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ab19: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060ab1f: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060ab25: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060ab2b: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060ab31: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060ab37: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060ab3d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ab40: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060ab46: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ab49: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060ab4f: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060ab52: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060ab58: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060ab5b: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060ab61: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060ab64: mov eax, dword ptr [0xa8e818] */ r_eax = R32((u32)(0xa8e818u));
    /* 0060ab69: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060ab6b: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060ab6e: mov eax, dword ptr [0xa8e814] */ r_eax = R32((u32)(0xa8e814u));
    /* 0060ab73: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060ab76: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60ab7bu); f_00606bc8();
    /* 0060ab7b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ab7e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060ab81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060ab84: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060ab87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ab8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ab91: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ab93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ab94: ret 8 */ FN_RET(0x0060aaa4); r_esp += 12; return;
}

void f_0060ab98(void) /* sub_60AB98 */
{
    FN_ENTER(0x0060ab98);
    /* 0060ab98: push 0x92f5f0 */ { u32 v = 0x92f5f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ab9d: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x60aba2u); f_005b938c();
    /* 0060aba2: push 0x92f604 */ { u32 v = 0x92f604u; r_esp -= 4; W32(r_esp, v); }
    /* 0060aba7: mov dword ptr [0xa8e818], eax */ W32((u32)(0xa8e818u), r_eax);
    /* 0060abac: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x60abb1u); f_008009dc();
    /* 0060abb1: mov dword ptr [0xa8e814], eax */ W32((u32)(0xa8e814u), r_eax);
    /* 0060abb6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060abb9: ret  */ FN_RET(0x0060ab98); r_esp += 4; return;
}

void f_0060abbc(void) /* sub_60ABBC */
{
    FN_ENTER(0x0060abbc);
    /* 0060abbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060abbd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060abbf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060abc1: call 0x60abe0 */ r_esp -= 4; W32(r_esp, 0x60abc6u); f_0060abe0();
    /* 0060abc6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060abca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060abcc: jne 0x60abd2 */ if (!fZ) goto L_0060abd2;
L_0060abce:; BB(0x0060abce);
    /* 0060abce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060abcf: ret 4 */ FN_RET(0x0060abbc); r_esp += 8; return;
L_0060abd2:; BB(0x0060abd2);
    /* 0060abd2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060abd3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60abd8u); f_005c2f74();
    /* 0060abd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060abd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060abda: ret 4 */ FN_RET(0x0060abbc); r_esp += 8; return;
}

void f_0060abe0(void) /* sub_60ABE0 */
{
    FN_ENTER(0x0060abe0);
    /* 0060abe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060abe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060abe3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060abe5: push 0x8df84c */ { u32 v = 0x8df84cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060abea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060abf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060abf1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060abf8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060abfb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060abfe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060ac01: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060ac04: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060ac07: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060ac0a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060ac0d: mov dword ptr [ecx], 0xb20280 */ W32((u32)(r_ecx), 0xb20280u);
    /* 0060ac13: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060ac1a: call 0x60a530 */ r_esp -= 4; W32(r_esp, 0x60ac1fu); f_0060a530();
    /* 0060ac1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ac22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ac29: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ac2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ac2c: ret  */ FN_RET(0x0060abe0); r_esp += 4; return;
}

void f_0060ac30(void) /* sub_60AC30 */
{
    FN_ENTER(0x0060ac30);
    /* 0060ac30: mov ecx, dword ptr [0xa8e820] */ r_ecx = R32((u32)(0xa8e820u));
    /* 0060ac36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ac38: je 0x60ac55 */ if (fZ) goto L_0060ac55;
L_0060ac3a:; BB(0x0060ac3a);
    /* 0060ac3a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60ac3fu); f_00829de0();
    /* 0060ac3f: push dword ptr [0xa8e820] */ { u32 v = R32((u32)(0xa8e820u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ac45: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x60ac4au); f_0082e960();
    /* 0060ac4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ac4b: mov dword ptr [0xa8e820], 0 */ W32((u32)(0xa8e820u), 0x0u);
L_0060ac55:; BB(0x0060ac55);
    /* 0060ac55: mov eax, dword ptr [0xa8e824] */ r_eax = R32((u32)(0xa8e824u));
    /* 0060ac5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060ac5c: je 0x60ac6f */ if (fZ) goto L_0060ac6f;
L_0060ac5e:; BB(0x0060ac5e);
    /* 0060ac5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ac5f: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x60ac64u); f_005b9bac();
    /* 0060ac64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ac65: mov dword ptr [0xa8e824], 0 */ W32((u32)(0xa8e824u), 0x0u);
L_0060ac6f:; BB(0x0060ac6f);
    /* 0060ac6f: ret  */ FN_RET(0x0060ac30); r_esp += 4; return;
}

void f_0060ac70(void)
{
    FN_ENTER(0x0060ac70);
    /* 0060ac70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ac71: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ac73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ac75: push 0x8df88e */ { u32 v = 0x8df88eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ac7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ac80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ac81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ac88: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ac8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ac8e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060ac91: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060ac94: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060ac97: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ac99: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060aca0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60aca5u); f_005caba4();
    /* 0060aca5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060aca6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060aca9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060acab: je 0x60ad33 */ if (fZ) goto L_0060ad33;
L_0060acb1:; BB(0x0060acb1);
    /* 0060acb1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060acb8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060acbf: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060acc5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060acc8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60accdu); f_00787a4c();
    /* 0060accd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060acd0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060acd7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060acda:; BB(0x0060acda);
    /* 0060acda: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060ace1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060ace8: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060aced: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60acf2u); f_005caba4();
    /* 0060acf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060acf3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060acf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060acf8: je 0x60ad2f */ if (fZ) goto L_0060ad2f;
L_0060acfa:; BB(0x0060acfa);
    /* 0060acfa: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060ad01: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060ad08: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ad0b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ad0e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ad11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ad12: call 0x60ad3c */ r_esp -= 4; W32(r_esp, 0x60ad17u); f_0060ad3c();
    /* 0060ad17: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ad1a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060ad21:; BB(0x0060ad21);
    /* 0060ad21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ad24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ad2b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ad2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ad2e: ret  */ FN_RET(0x0060ac70); r_esp += 4; return;
L_0060ad2f:; BB(0x0060ad2f);
    /* 0060ad2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060ad31: jmp 0x60ad21 */ goto L_0060ad21;
L_0060ad33:; BB(0x0060ad33);
    /* 0060ad33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060ad35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060ad38: jmp 0x60acda */ goto L_0060acda;
}

void f_0060ad3c(void) /* sub_60AD3C */
{
    FN_ENTER(0x0060ad3c);
    /* 0060ad3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ad3d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ad3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ad41: push 0x8df8a8 */ { u32 v = 0x8df8a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ad46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ad4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ad4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ad54: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ad57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ad5a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060ad5d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060ad60: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060ad63: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060ad66: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ad69: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060ad6c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060ad6f: call 0x60a580 */ r_esp -= 4; W32(r_esp, 0x60ad74u); f_0060a580();
    /* 0060ad74: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060ad7b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ad7e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ad81: mov dword ptr [ecx], 0xb20280 */ W32((u32)(r_ecx), 0xb20280u);
    /* 0060ad87: mov eax, dword ptr [0x9c41f0] */ r_eax = R32((u32)(0x9c41f0u));
    /* 0060ad8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ad8d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060ad90: call dword ptr [0xb203cc] */ { u32 t = R32((u32)(0xb203ccu)); r_esp -= 4; W32(r_esp, 0x60ad96u); call_ind(t); }
    /* 0060ad96: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ad99: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060ad9c: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060ad9f: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060ada2: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060ada8: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060adae: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060adb1: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060adb7: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060adbd: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060adc3: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060adc9: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060adcf: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060add5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060add8: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060adde: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ade1: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060ade7: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060adea: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060adf0: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060adf3: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060adf9: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060adfc: mov eax, dword ptr [0xa8e824] */ r_eax = R32((u32)(0xa8e824u));
    /* 0060ae01: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060ae03: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060ae06: mov eax, dword ptr [0xa8e820] */ r_eax = R32((u32)(0xa8e820u));
    /* 0060ae0b: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060ae0e: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60ae13u); f_00606bc8();
    /* 0060ae13: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ae16: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060ae19: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060ae1c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060ae1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ae22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ae29: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ae2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ae2c: ret 8 */ FN_RET(0x0060ad3c); r_esp += 12; return;
}

void f_0060ae30(void) /* sub_60AE30 */
{
    FN_ENTER(0x0060ae30);
    /* 0060ae30: push 0x92f614 */ { u32 v = 0x92f614u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae35: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x60ae3au); f_005b938c();
    /* 0060ae3a: push 0x92f628 */ { u32 v = 0x92f628u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae3f: mov dword ptr [0xa8e824], eax */ W32((u32)(0xa8e824u), r_eax);
    /* 0060ae44: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x60ae49u); f_008009dc();
    /* 0060ae49: mov dword ptr [0xa8e820], eax */ W32((u32)(0xa8e820u), r_eax);
    /* 0060ae4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060ae51: ret  */ FN_RET(0x0060ae30); r_esp += 4; return;
}

void f_0060ae54(void) /* sub_60AE54 */
{
    FN_ENTER(0x0060ae54);
    /* 0060ae54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060ae57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060ae59: call 0x60ae78 */ r_esp -= 4; W32(r_esp, 0x60ae5eu); f_0060ae78();
    /* 0060ae5e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060ae62: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060ae64: jne 0x60ae6a */ if (!fZ) goto L_0060ae6a;
L_0060ae66:; BB(0x0060ae66);
    /* 0060ae66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060ae67: ret 4 */ FN_RET(0x0060ae54); r_esp += 8; return;
L_0060ae6a:; BB(0x0060ae6a);
    /* 0060ae6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae6b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60ae70u); f_005c2f74();
    /* 0060ae70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ae71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060ae72: ret 4 */ FN_RET(0x0060ae54); r_esp += 8; return;
}

void f_0060ae78(void) /* sub_60AE78 */
{
    FN_ENTER(0x0060ae78);
    /* 0060ae78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae79: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ae7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae7d: push 0x8df8c4 */ { u32 v = 0x8df8c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ae88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ae89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ae90: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ae93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ae96: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060ae99: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060ae9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060ae9f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060aea2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060aea5: mov dword ptr [ecx], 0xb20480 */ W32((u32)(r_ecx), 0xb20480u);
    /* 0060aeab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060aeb2: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60aeb7u); f_0060c7e4();
    /* 0060aeb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060aeba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060aec1: mov esp, ebp */ r_esp = r_ebp;
    /* 0060aec3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060aec4: ret  */ FN_RET(0x0060ae78); r_esp += 4; return;
}

void f_0060aec8(void) /* sub_60AEC8 */
{
    FN_ENTER(0x0060aec8);
    /* 0060aec8: mov ecx, dword ptr [0xa8e82c] */ r_ecx = R32((u32)(0xa8e82cu));
    /* 0060aece: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060aed0: je 0x60aeed */ if (fZ) goto L_0060aeed;
L_0060aed2:; BB(0x0060aed2);
    /* 0060aed2: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60aed7u); f_00829de0();
    /* 0060aed7: push dword ptr [0xa8e82c] */ { u32 v = R32((u32)(0xa8e82cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060aedd: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x60aee2u); f_0082e960();
    /* 0060aee2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060aee3: mov dword ptr [0xa8e82c], 0 */ W32((u32)(0xa8e82cu), 0x0u);
L_0060aeed:; BB(0x0060aeed);
    /* 0060aeed: mov eax, dword ptr [0xa8e830] */ r_eax = R32((u32)(0xa8e830u));
    /* 0060aef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060aef4: je 0x60af07 */ if (fZ) goto L_0060af07;
L_0060aef6:; BB(0x0060aef6);
    /* 0060aef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060aef7: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x60aefcu); f_005b9bac();
    /* 0060aefc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060aefd: mov dword ptr [0xa8e830], 0 */ W32((u32)(0xa8e830u), 0x0u);
L_0060af07:; BB(0x0060af07);
    /* 0060af07: ret  */ FN_RET(0x0060aec8); r_esp += 4; return;
}

void f_0060af08(void)
{
    FN_ENTER(0x0060af08);
    /* 0060af08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060af09: mov ebp, esp */ r_ebp = r_esp;
    /* 0060af0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060af0d: push 0x8df906 */ { u32 v = 0x8df906u; r_esp -= 4; W32(r_esp, v); }
    /* 0060af12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060af18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060af19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060af20: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060af23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060af26: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060af29: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060af2c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060af2f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060af31: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060af38: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60af3du); f_005caba4();
    /* 0060af3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060af3e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060af41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060af43: je 0x60afcb */ if (fZ) goto L_0060afcb;
L_0060af49:; BB(0x0060af49);
    /* 0060af49: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060af50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060af57: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060af5d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060af60: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60af65u); f_00787a4c();
    /* 0060af65: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060af68: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060af6f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060af72:; BB(0x0060af72);
    /* 0060af72: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060af79: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060af80: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060af85: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60af8au); f_005caba4();
    /* 0060af8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060af8b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060af8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060af90: je 0x60afc7 */ if (fZ) goto L_0060afc7;
L_0060af92:; BB(0x0060af92);
    /* 0060af92: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060af99: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060afa0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060afa3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060afa6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060afa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060afaa: call 0x60afd4 */ r_esp -= 4; W32(r_esp, 0x60afafu); f_0060afd4();
    /* 0060afaf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060afb2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060afb9:; BB(0x0060afb9);
    /* 0060afb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060afbc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060afc3: mov esp, ebp */ r_esp = r_ebp;
    /* 0060afc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060afc6: ret  */ FN_RET(0x0060af08); r_esp += 4; return;
L_0060afc7:; BB(0x0060afc7);
    /* 0060afc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060afc9: jmp 0x60afb9 */ goto L_0060afb9;
L_0060afcb:; BB(0x0060afcb);
    /* 0060afcb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060afcd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060afd0: jmp 0x60af72 */ goto L_0060af72;
}

void f_0060afd4(void) /* sub_60AFD4 */
{
    FN_ENTER(0x0060afd4);
    /* 0060afd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060afd5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060afd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060afd9: push 0x8df920 */ { u32 v = 0x8df920u; r_esp -= 4; W32(r_esp, v); }
    /* 0060afde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060afe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060afe5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060afec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060afef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060aff2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060aff5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060aff8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060affb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060affe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b001: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060b004: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060b007: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60b00cu); f_0060c858();
    /* 0060b00c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060b013: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b016: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060b019: mov dword ptr [ecx], 0xb20480 */ W32((u32)(r_ecx), 0xb20480u);
    /* 0060b01f: mov eax, dword ptr [0x9c41f4] */ r_eax = R32((u32)(0x9c41f4u));
    /* 0060b024: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b025: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060b028: call dword ptr [0xb205cc] */ { u32 t = R32((u32)(0xb205ccu)); r_esp -= 4; W32(r_esp, 0x60b02eu); call_ind(t); }
    /* 0060b02e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b031: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060b034: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060b037: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060b03a: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060b040: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060b046: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b049: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060b04f: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060b055: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060b05b: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060b061: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060b067: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060b06d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b070: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060b076: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b079: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060b07f: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060b082: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060b088: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060b08b: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060b091: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060b094: mov eax, dword ptr [0xa8e830] */ r_eax = R32((u32)(0xa8e830u));
    /* 0060b099: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060b09b: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060b09e: mov eax, dword ptr [0xa8e82c] */ r_eax = R32((u32)(0xa8e82cu));
    /* 0060b0a3: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060b0a6: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60b0abu); f_00606bc8();
    /* 0060b0ab: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b0ae: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b0b1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060b0b4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060b0b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b0ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b0c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b0c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b0c4: ret 8 */ FN_RET(0x0060afd4); r_esp += 12; return;
}

