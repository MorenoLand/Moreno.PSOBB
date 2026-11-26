#include "protos.h"

void f_0059a12c(void) /* sub_59A12C */
{
    FN_ENTER(0x0059a12c);
    /* 0059a12c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a12d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059a12f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059a131: call 0x59a150 */ r_esp -= 4; W32(r_esp, 0x59a136u); f_0059a150();
    /* 0059a136: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059a13a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a13c: jne 0x59a142 */ if (!fZ) goto L_0059a142;
L_0059a13e:; BB(0x0059a13e);
    /* 0059a13e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059a13f: ret 4 */ FN_RET(0x0059a12c); r_esp += 8; return;
L_0059a142:; BB(0x0059a142);
    /* 0059a142: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a143: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x59a148u); f_005c2f74();
    /* 0059a148: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059a149: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059a14a: ret 4 */ FN_RET(0x0059a12c); r_esp += 8; return;
}

void f_0059a150(void) /* sub_59A150 */
{
    FN_ENTER(0x0059a150);
    /* 0059a150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a151: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a153: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059a155: push 0x8d8558 */ { u32 v = 0x8d8558u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a15a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059a160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a161: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059a168: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a16b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059a16e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0059a171: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0059a174: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0059a177: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059a17a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0059a181: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059a184: mov dword ptr [ecx], 0xb099c0 */ W32((u32)(r_ecx), 0xb099c0u);
    /* 0059a18a: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x59a18fu); f_007b9c8c();
    /* 0059a18f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0059a196: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059a199: add ecx, 0x3e4 */ {  u32 a = r_ecx; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059a19f: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x59a1a4u); f_005122a8();
    /* 0059a1a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059a1ab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059a1ae: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x59a1b3u); f_0051f4fc();
    /* 0059a1b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a1b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059a1bd: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a1bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a1c0: ret  */ FN_RET(0x0059a150); r_esp += 4; return;
}

void f_0059a1c4(void) /* sub_59A1C4 */
{
    FN_ENTER(0x0059a1c4);
    /* 0059a1c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a1c5: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a1c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059a1c9: push 0x8d8588 */ { u32 v = 0x8d8588u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a1ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059a1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a1d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059a1dc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a1df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059a1e2: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0059a1e5: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0059a1e8: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0059a1eb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059a1ee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a1f1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0059a1f4: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0059a1f7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0059a1fa: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0059a1fd: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0059a200: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059a203: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 0059a207: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059a20a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0059a20d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059a210: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x59a215u); f_005216f4();
    /* 0059a215: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059a21c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0059a21f: mov dword ptr [ecx], 0xb099c0 */ W32((u32)(r_ecx), 0xb099c0u);
    /* 0059a225: add ecx, 0x3e4 */ {  u32 a = r_ecx; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059a22b: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x59a230u); f_005122f8();
    /* 0059a230: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0059a237: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0059a23a: mov eax, dword ptr [0x9bfe24] */ r_eax = R32((u32)(0x9bfe24u));
    /* 0059a23f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a242: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a243: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0059a246: call 0x51f760 */ r_esp -= 4; W32(r_esp, 0x59a24bu); f_0051f760();
    /* 0059a24b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a24e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0059a251: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059a254: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059a257: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0059a25b: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059a25e: mov word ptr [ecx + 0x3cc], dx */ W16((u32)(r_ecx+0x3ccu), (u16)r_edx);
    /* 0059a265: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059a268: mov word ptr [ecx + 0x1c], bx */ W16((u32)(r_ecx+0x1cu), (u16)r_ebx);
    /* 0059a26c: mov word ptr [ecx + 0x2c], si */ W16((u32)(r_ecx+0x2cu), (u16)r_esi);
    /* 0059a270: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
    /* 0059a276: mov dword ptr [ecx + 0x3d0], edi */ W32((u32)(r_ecx+0x3d0u), r_edi);
    /* 0059a27c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059a27e: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0059a281: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059a284: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0059a287: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059a28a: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0059a28d: call 0x59ae6c */ r_esp -= 4; W32(r_esp, 0x59a292u); f_0059ae6c();
    /* 0059a292: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0059a295: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059a298: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0059a29b: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059a29e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a2a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059a2a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a2aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a2ab: ret 0x18 */ FN_RET(0x0059a1c4); r_esp += 28; return;
}

void f_0059a2b0(void) /* sub_59A2B0 */
{
    FN_ENTER(0x0059a2b0);
    /* 0059a2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a2b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2b5: push 0x8d85b0 */ { u32 v = 0x8d85b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059a2c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059a2c8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a2cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059a2ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0059a2d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0059a2d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0059a2d7: push 0x418 */ { u32 v = 0x418u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a2dc: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0059a2e3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x59a2e8u); f_005caba4();
    /* 0059a2e8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059a2eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a2ee: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059a2f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a2f3: je 0x59a339 */ if (fZ) goto L_0059a339;
L_0059a2f5:; BB(0x0059a2f5);
    /* 0059a2f5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0059a2fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059a303: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a306: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0059a30a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059a30d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a30e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a310: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a313: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a316: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a31c: call 0x59a1c4 */ r_esp -= 4; W32(r_esp, 0x59a321u); f_0059a1c4();
    /* 0059a321: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0059a328:; BB(0x0059a328);
    /* 0059a328: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059a32b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a32e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059a335: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a337: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a338: ret  */ FN_RET(0x0059a2b0); r_esp += 4; return;
L_0059a339:; BB(0x0059a339);
    /* 0059a339: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a33b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059a33e: jmp 0x59a328 */ goto L_0059a328;
}

void f_0059a340(void) /* sub_59A340 */
{
    FN_ENTER(0x0059a340);
    /* 0059a340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a341: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059a345: push 0x8d85d8 */ { u32 v = 0x8d85d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a34a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059a350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a351: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059a358: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a35b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059a35e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0059a361: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0059a364: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0059a367: push 0x418 */ { u32 v = 0x418u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a36c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0059a373: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x59a378u); f_005caba4();
    /* 0059a378: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059a37b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a37e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059a381: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a383: je 0x59a3c9 */ if (fZ) goto L_0059a3c9;
L_0059a385:; BB(0x0059a385);
    /* 0059a385: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0059a38c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059a393: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a396: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0059a39a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059a39d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a39e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3a0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a3a3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a3a6: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a3ac: call 0x59a1c4 */ r_esp -= 4; W32(r_esp, 0x59a3b1u); f_0059a1c4();
    /* 0059a3b1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0059a3b8:; BB(0x0059a3b8);
    /* 0059a3b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059a3bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a3be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059a3c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a3c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a3c8: ret  */ FN_RET(0x0059a340); r_esp += 4; return;
L_0059a3c9:; BB(0x0059a3c9);
    /* 0059a3c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a3cb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059a3ce: jmp 0x59a3b8 */ goto L_0059a3b8;
}

void f_0059a3d0(void) /* sub_59A3D0 */
{
    FN_ENTER(0x0059a3d0);
    /* 0059a3d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059a3d1: mov esi, ecx */ r_esi = r_ecx;
    /* 0059a3d3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x59a3d8u); f_004f7c84();
    /* 0059a3d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a3da: je 0x59a3e8 */ if (fZ) goto L_0059a3e8;
L_0059a3dc:; BB(0x0059a3dc);
    /* 0059a3dc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059a3de: mov ecx, esi */ r_ecx = r_esi;
    /* 0059a3e0: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x59a3e6u); call_ind(t); }
    /* 0059a3e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059a3e7: ret  */ FN_RET(0x0059a3d0); r_esp += 4; return;
L_0059a3e8:; BB(0x0059a3e8);
    /* 0059a3e8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059a3ea: mov ecx, esi */ r_ecx = r_esi;
    /* 0059a3ec: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x59a3f2u); call_ind(t); }
    /* 0059a3f2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a3f5: je 0x59a411 */ if (fZ) goto L_0059a411;
L_0059a3f7:; BB(0x0059a3f7);
    /* 0059a3f7: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059a3fd: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a402: je 0x59a411 */ if (fZ) goto L_0059a411;
L_0059a404:; BB(0x0059a404);
    /* 0059a404: and eax, 0xffffdfff */ {  u32 a = r_eax; u32 b = 0xffffdfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059a409: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0059a40f: jmp 0x59a422 */ goto L_0059a422;
L_0059a411:; BB(0x0059a411);
    /* 0059a411: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059a413: mov ecx, esi */ r_ecx = r_esi;
    /* 0059a415: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x59a41bu); call_ind(t); }
    /* 0059a41b: mov ecx, esi */ r_ecx = r_esi;
    /* 0059a41d: call 0x59a43c */ r_esp -= 4; W32(r_esp, 0x59a422u); f_0059a43c();
L_0059a422:; BB(0x0059a422);
    /* 0059a422: mov ecx, esi */ r_ecx = r_esi;
    /* 0059a424: call 0x590294 */ r_esp -= 4; W32(r_esp, 0x59a429u); f_00590294();
    /* 0059a429: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059a42b: mov ecx, esi */ r_ecx = r_esi;
    /* 0059a42d: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x59a433u); call_ind(t); }
    /* 0059a433: mov ecx, esi */ r_ecx = r_esi;
    /* 0059a435: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x59a43au); f_006401f0();
    /* 0059a43a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059a43b: ret  */ FN_RET(0x0059a3d0); r_esp += 4; return;
}

void f_0059a43c(void) /* sub_59A43C */
{
    FN_ENTER(0x0059a43c);
    /* 0059a43c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a43d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059a43f: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059a445: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059a447: jne 0x59a473 */ if (!fZ) goto L_0059a473;
L_0059a449:; BB(0x0059a449);
    /* 0059a449: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a44b: je 0x59a497 */ if (fZ) goto L_0059a497;
L_0059a44d:; BB(0x0059a44d);
    /* 0059a44d: mov eax, dword ptr [ebp + 0x3e4] */ r_eax = R32((u32)(r_ebp+0x3e4u));
    /* 0059a453: lea ecx, [ebp + 0x3e4] */ r_ecx = (u32)(r_ebp+0x3e4u);
    /* 0059a459: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x59a45cu); call_ind(t); }
    /* 0059a45c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a45e: je 0x59a497 */ if (fZ) goto L_0059a497;
L_0059a460:; BB(0x0059a460);
    /* 0059a460: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059a466: and eax, 0xfffffdf7 */ {  u32 a = r_eax; u32 b = 0xfffffdf7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a46b: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0059a471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a472: ret  */ FN_RET(0x0059a43c); r_esp += 4; return;
L_0059a473:; BB(0x0059a473);
    /* 0059a473: mov eax, dword ptr [ebp + 0x3e4] */ r_eax = R32((u32)(r_ebp+0x3e4u));
    /* 0059a479: lea ecx, [ebp + 0x3e4] */ r_ecx = (u32)(r_ebp+0x3e4u);
    /* 0059a47f: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x59a482u); call_ind(t); }
    /* 0059a482: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a484: je 0x59a497 */ if (fZ) goto L_0059a497;
L_0059a486:; BB(0x0059a486);
    /* 0059a486: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059a48c: and eax, 0xfffffcfb */ {  u32 a = r_eax; u32 b = 0xfffffcfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a491: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
L_0059a497:; BB(0x0059a497);
    /* 0059a497: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a498: ret  */ FN_RET(0x0059a43c); r_esp += 4; return;
}

void f_0059a49c(void) /* sub_59A49C */
{
    FN_ENTER(0x0059a49c);
    /* 0059a49c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059a49d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059a49e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a49f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a4a2: mov edi, ecx */ r_edi = r_ecx;
    /* 0059a4a4: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x59a4a9u); f_004f7c84();
    /* 0059a4a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a4ab: je 0x59a4be */ if (fZ) goto L_0059a4be;
L_0059a4ad:; BB(0x0059a4ad);
    /* 0059a4ad: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059a4af: mov ecx, edi */ r_ecx = r_edi;
    /* 0059a4b1: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x59a4b7u); call_ind(t); }
    /* 0059a4b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059a4ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a4bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059a4bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059a4bd: ret  */ FN_RET(0x0059a49c); r_esp += 4; return;
L_0059a4be:; BB(0x0059a4be);
    /* 0059a4be: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x59a4c3u); f_00694cc8();
    /* 0059a4c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a4c5: je 0x59a4cf */ if (fZ) goto L_0059a4cf;
L_0059a4c7:; BB(0x0059a4c7);
    /* 0059a4c7: mov edx, dword ptr [0x921684] */ r_edx = R32((u32)(0x921684u));
    /* 0059a4cd: jmp 0x59a4d4 */ goto L_0059a4d4;
L_0059a4cf:; BB(0x0059a4cf);
    /* 0059a4cf: mov edx, 0x43c80000 */ r_edx = 0x43c80000u;
L_0059a4d4:; BB(0x0059a4d4);
    /* 0059a4d4: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059a4da: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a4df: je 0x59a621 */ if (fZ) goto L_0059a621;
L_0059a4e5:; BB(0x0059a4e5);
    /* 0059a4e5: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a4ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a4eb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059a4ed: mov ecx, edi */ r_ecx = r_edi;
    /* 0059a4ef: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x59a4f2u); call_ind(t); }
    /* 0059a4f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a4f4: je 0x59a621 */ if (fZ) goto L_0059a621;
L_0059a4fa:; BB(0x0059a4fa);
    /* 0059a4fa: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059a500: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a505: je 0x59a52b */ if (fZ) goto L_0059a52b;
L_0059a507:; BB(0x0059a507);
    /* 0059a507: mov dword ptr [esp], 0x3f000000 */ W32((u32)(r_esp), 0x3f000000u);
    /* 0059a50e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059a511: mov ecx, edi */ r_ecx = r_edi;
    /* 0059a513: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0059a51b: mov dword ptr [esp + 8], 0x3f000000 */ W32((u32)(r_esp+0x8u), 0x3f000000u);
    /* 0059a523: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a525: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a526: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x59a52bu); f_00779d4c();
L_0059a52b:; BB(0x0059a52b);
    /* 0059a52b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059a52d: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x59a532u); f_00520608();
    /* 0059a532: mov esi, dword ptr [edi + 0x24] */ r_esi = R32((u32)(r_edi+0x24u));
    /* 0059a535: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0059a537: mov esi, dword ptr [ecx + 0x2c] */ r_esi = R32((u32)(r_ecx+0x2cu));
    /* 0059a53a: mov eax, dword ptr [edi + 0x3d8] */ r_eax = R32((u32)(r_edi+0x3d8u));
    /* 0059a540: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059a542: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059a544: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0059a547: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059a549: mov ebp, dword ptr [edx + ecx + 8] */ r_ebp = R32((u32)(r_edx+r_ecx+0x8u));
    /* 0059a54d: mov dword ptr [ecx + 0x2c], ebp */ W32((u32)(r_ecx+0x2cu), r_ebp);
    /* 0059a550: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0059a553: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x59a558u); f_00829cc8();
    /* 0059a558: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0059a55d: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0059a562: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x59a567u); f_00520d08();
    /* 0059a567: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x59a56cu); f_00578b38();
    /* 0059a56c: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059a572: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a577: jne 0x59a581 */ if (!fZ) goto L_0059a581;
L_0059a579:; BB(0x0059a579);
    /* 0059a579: lea ebp, [edi + 0x3e4] */ r_ebp = (u32)(r_edi+0x3e4u);
    /* 0059a57f: jmp 0x59a59a */ goto L_0059a59a;
L_0059a581:; BB(0x0059a581);
    /* 0059a581: lea ebp, [edi + 0x3e4] */ r_ebp = (u32)(r_edi+0x3e4u);
    /* 0059a587: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059a58a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059a58c: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x59a58fu); call_ind(t); }
    /* 0059a58f: mov ecx, edi */ r_ecx = r_edi;
    /* 0059a591: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x59a596u); f_008173d0();
    /* 0059a596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a598: jne 0x59a5fb */ if (!fZ) goto L_0059a5fb;
L_0059a59a:; BB(0x0059a59a);
    /* 0059a59a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x59a59fu); f_0082d7b0();
    /* 0059a59f: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0059a5a2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x59a5a7u); f_0082d838();
    /* 0059a5a7: fld dword ptr [edi + 0x304] */ FPUSH(R_F32((u32)(r_edi+0x304u)));
    /* 0059a5ad: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 0059a5b0: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a5b3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0059a5b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059a5b9: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0059a5c0: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0059a5c8: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x59a5cdu); f_00830b74();
    /* 0059a5cd: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0059a5d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059a5d2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x59a5d7u); f_0082d8bc();
    /* 0059a5d7: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5dc: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5e1: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a5e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059a5e8: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x59a5edu); f_0082fa0c();
    /* 0059a5ed: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a5f0: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x59a5f5u); f_0082e1e8();
    /* 0059a5f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059a5f6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x59a5fbu); f_0082da80();
L_0059a5fb:; BB(0x0059a5fb);
    /* 0059a5fb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059a5fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059a600: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x59a603u); call_ind(t); }
    /* 0059a603: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0059a608: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0059a60d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x59a612u); f_0082dab0();
    /* 0059a612: mov ecx, edi */ r_ecx = r_edi;
    /* 0059a614: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x59a619u); f_00520610();
    /* 0059a619: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0059a61c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059a61e: mov dword ptr [edx + 0x2c], esi */ W32((u32)(r_edx+0x2cu), r_esi);
L_0059a621:; BB(0x0059a621);
    /* 0059a621: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059a624: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a625: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059a626: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059a627: ret  */ FN_RET(0x0059a49c); r_esp += 4; return;
}

void f_0059a628(void) /* sub_59A628 */
{
    FN_ENTER(0x0059a628);
    /* 0059a628: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0059a62c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a62e: je 0x59a68a */ if (fZ) goto L_0059a68a;
L_0059a630:; BB(0x0059a630);
    /* 0059a630: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a633: je 0x59a67d */ if (fZ) goto L_0059a67d;
L_0059a635:; BB(0x0059a635);
    /* 0059a635: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a638: je 0x59a670 */ if (fZ) goto L_0059a670;
L_0059a63a:; BB(0x0059a63a);
    /* 0059a63a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a63d: je 0x59a663 */ if (fZ) goto L_0059a663;
L_0059a63f:; BB(0x0059a63f);
    /* 0059a63f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a642: jne 0x59a651 */ if (!fZ) goto L_0059a651;
L_0059a644:; BB(0x0059a644);
    /* 0059a644: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059a648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a649: call 0x59a7f0 */ r_esp -= 4; W32(r_esp, 0x59a64eu); f_0059a7f0();
    /* 0059a64e: ret 8 */ FN_RET(0x0059a628); r_esp += 12; return;
L_0059a651:; BB(0x0059a651);
    /* 0059a651: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059a654: jne 0x59a66d */ if (!fZ) goto L_0059a66d;
L_0059a656:; BB(0x0059a656);
    /* 0059a656: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059a65a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a65b: call 0x59a698 */ r_esp -= 4; W32(r_esp, 0x59a660u); f_0059a698();
    /* 0059a660: ret 8 */ FN_RET(0x0059a628); r_esp += 12; return;
L_0059a663:; BB(0x0059a663);
    /* 0059a663: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059a667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a668: call 0x59a8b4 */ r_esp -= 4; W32(r_esp, 0x59a66du); f_0059a8b4();
L_0059a66d:; BB(0x0059a66d);
    /* 0059a66d: ret 8 */ FN_RET(0x0059a628); r_esp += 12; return;
L_0059a670:; BB(0x0059a670);
    /* 0059a670: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059a674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a675: call 0x59aa14 */ r_esp -= 4; W32(r_esp, 0x59a67au); f_0059aa14();
    /* 0059a67a: ret 8 */ FN_RET(0x0059a628); r_esp += 12; return;
L_0059a67d:; BB(0x0059a67d);
    /* 0059a67d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059a681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a682: call 0x59ab0c */ r_esp -= 4; W32(r_esp, 0x59a687u); f_0059ab0c();
    /* 0059a687: ret 8 */ FN_RET(0x0059a628); r_esp += 12; return;
L_0059a68a:; BB(0x0059a68a);
    /* 0059a68a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059a68e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a68f: call 0x59adf0 */ r_esp -= 4; W32(r_esp, 0x59a694u); f_0059adf0();
    /* 0059a694: ret 8 */ FN_RET(0x0059a628); r_esp += 12; return;
}

void f_0059a698(void) /* sub_59A698 */
{
    FN_ENTER(0x0059a698);
    /* 0059a698: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059a699: mov edi, ecx */ r_edi = r_ecx;
    /* 0059a69b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059a69f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a6a2: je 0x59a75b */ if (fZ) goto L_0059a75b;
L_0059a6a8:; BB(0x0059a6a8);
    /* 0059a6a8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a6ab: je 0x59a725 */ if (fZ) goto L_0059a725;
L_0059a6ad:; BB(0x0059a6ad);
    /* 0059a6ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a6af: jne 0x59a6ef */ if (!fZ) goto L_0059a6ef;
L_0059a6b1:; BB(0x0059a6b1);
    /* 0059a6b1: mov eax, dword ptr [edi + 0x410] */ r_eax = R32((u32)(r_edi+0x410u));
    /* 0059a6b7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059a6ba: mov dword ptr [edi + 0x410], eax */ W32((u32)(r_edi+0x410u), r_eax);
    /* 0059a6c0: cmp eax, 0x384 */ {  u32 a = r_eax; u32 b = 0x384u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059a6c5: jl 0x59a757 */ if ((fS!=fO)) goto L_0059a757;
L_0059a6cb:; BB(0x0059a6cb);
    /* 0059a6cb: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059a6d1: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a6d3: jne 0x59a757 */ if (!fZ) goto L_0059a757;
L_0059a6d9:; BB(0x0059a6d9);
    /* 0059a6d9: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059a6de: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059a6e4: mov ecx, edi */ r_ecx = r_edi;
    /* 0059a6e6: call 0x59a7a0 */ r_esp -= 4; W32(r_esp, 0x59a6ebu); f_0059a7a0();
    /* 0059a6eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059a6ec: ret 4 */ FN_RET(0x0059a698); r_esp += 8; return;
L_0059a6ef:; BB(0x0059a6ef);
    /* 0059a6ef: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059a6f2: jne 0x59a757 */ if (!fZ) goto L_0059a757;
L_0059a6f4:; BB(0x0059a6f4);
    /* 0059a6f4: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0059a6f7: movzx edx, word ptr [edi + 0x2bc] */ r_edx = (u32)R16((u32)(r_edi+0x2bcu));
    /* 0059a6fe: mov dword ptr [edi + 0x3d8], 3 */ W32((u32)(r_edi+0x3d8u), 0x3u);
    /* 0059a708: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a70d: mov dword ptr [edi + 0x3e0], 0 */ W32((u32)(r_edi+0x3e0u), 0x0u);
    /* 0059a717: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0059a71a: mov word ptr [edi + 0x334], dx */ W16((u32)(r_edi+0x334u), (u16)r_edx);
    /* 0059a721: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059a722: ret 4 */ FN_RET(0x0059a698); r_esp += 8; return;
L_0059a725:; BB(0x0059a725);
    /* 0059a725: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059a72b: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a72d: je 0x59a757 */ if (fZ) goto L_0059a757;
L_0059a72f:; BB(0x0059a72f);
    /* 0059a72f: push 0x1e1 */ { u32 v = 0x1e1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a734: mov ecx, edi */ r_ecx = r_edi;
    /* 0059a736: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x59a73bu); f_007879b8();
    /* 0059a73b: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a73d: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0059a740: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059a742: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a743: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a745: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a746: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59a74bu); f_00814298();
    /* 0059a74b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a74e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a750: mov ecx, edi */ r_ecx = r_edi;
    /* 0059a752: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59a757u); f_0051f62c();
L_0059a757:; BB(0x0059a757);
    /* 0059a757: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059a758: ret 4 */ FN_RET(0x0059a698); r_esp += 8; return;
L_0059a75b:; BB(0x0059a75b);
    /* 0059a75b: mov dword ptr [edi + 0x410], 0 */ W32((u32)(r_edi+0x410u), 0x0u);
    /* 0059a765: mov ecx, edi */ r_ecx = r_edi;
    /* 0059a767: call 0x59a7c8 */ r_esp -= 4; W32(r_esp, 0x59a76cu); f_0059a7c8();
    /* 0059a76c: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a771: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059a777: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059a77c: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059a782: mov ecx, edi */ r_ecx = r_edi;
    /* 0059a784: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x59a789u); f_007879b8();
    /* 0059a789: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059a78c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059a78e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a78f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a790: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059a791: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a792: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59a797u); f_00814298();
    /* 0059a797: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059a79a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059a79b: ret 4 */ FN_RET(0x0059a698); r_esp += 8; return;
}

void f_0059a7a0(void) /* sub_59A7A0 */
{
    FN_ENTER(0x0059a7a0);
    /* 0059a7a0: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059a7a6: mov edx, dword ptr [ecx + 0x3e4] */ r_edx = R32((u32)(r_ecx+0x3e4u));
    /* 0059a7ac: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059a7af: or eax, 0x308 */ {  u32 a = r_eax; u32 b = 0x308u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059a7b4: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 0059a7ba: lea eax, [ecx + 0x3e4] */ r_eax = (u32)(r_ecx+0x3e4u);
    /* 0059a7c0: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a7c2: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x59a7c5u); call_ind(t); }
    /* 0059a7c5: ret  */ FN_RET(0x0059a7a0); r_esp += 4; return;
}

void f_0059a7c8(void) /* sub_59A7C8 */
{
    FN_ENTER(0x0059a7c8);
    /* 0059a7c8: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059a7ce: mov edx, dword ptr [ecx + 0x3e4] */ r_edx = R32((u32)(r_ecx+0x3e4u));
    /* 0059a7d4: or eax, 0x204 */ {  u32 a = r_eax; u32 b = 0x204u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059a7d9: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059a7dc: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 0059a7e2: lea eax, [ecx + 0x3e4] */ r_eax = (u32)(r_ecx+0x3e4u);
    /* 0059a7e8: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a7ea: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x59a7edu); call_ind(t); }
    /* 0059a7ed: ret  */ FN_RET(0x0059a7c8); r_esp += 4; return;
}

void f_0059a7f0(void) /* sub_59A7F0 */
{
    FN_ENTER(0x0059a7f0);
    /* 0059a7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a7f1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059a7f3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059a7f7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059a7fa: je 0x59a8a4 */ if (fZ) goto L_0059a8a4;
L_0059a800:; BB(0x0059a800);
    /* 0059a800: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a803: je 0x59a88c */ if (fZ) goto L_0059a88c;
L_0059a809:; BB(0x0059a809);
    /* 0059a809: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a80b: jne 0x59a87c */ if (!fZ) goto L_0059a87c;
L_0059a80d:; BB(0x0059a80d);
    /* 0059a80d: mov ecx, dword ptr [ebp + 0x3c8] */ r_ecx = R32((u32)(r_ebp+0x3c8u));
    /* 0059a813: add dword ptr [ebp + 0x410], 1 */ { u32 ad = (u32)(r_ebp+0x410u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0059a81a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0059a81c: mov dword ptr [ebp + 0x300], eax */ W32((u32)(r_ebp+0x300u), r_eax);
    /* 0059a822: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0059a825: fadd dword ptr [ebp + 0x3e0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e0u));
    /* 0059a82b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059a82e: mov dword ptr [ebp + 0x304], edx */ W32((u32)(r_ebp+0x304u), r_edx);
    /* 0059a834: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0059a837: fstp dword ptr [ebp + 0x304] */ W_F32((u32)(r_ebp+0x304u), ST(0)); FPOP();
    /* 0059a83d: mov dword ptr [ebp + 0x308], eax */ W32((u32)(r_ebp+0x308u), r_eax);
    /* 0059a843: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059a845: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x59a84au); f_00520bf4();
    /* 0059a84a: fld dword ptr [ebp + 0x300] */ FPUSH(R_F32((u32)(r_ebp+0x300u)));
    /* 0059a850: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0059a852: fstp dword ptr [ebp + 0x300] */ W_F32((u32)(r_ebp+0x300u), ST(0)); FPOP();
    /* 0059a858: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059a85a: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x59a85fu); f_00520bf4();
    /* 0059a85f: fld dword ptr [ebp + 0x308] */ FPUSH(R_F32((u32)(r_ebp+0x308u)));
    /* 0059a865: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0059a867: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059a86a: fstp dword ptr [ebp + 0x308] */ W_F32((u32)(r_ebp+0x308u), ST(0)); FPOP();
    /* 0059a870: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059a872: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59a878u); call_ind(t); }
    /* 0059a878: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a879: ret 4 */ FN_RET(0x0059a7f0); r_esp += 8; return;
L_0059a87c:; BB(0x0059a87c);
    /* 0059a87c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059a87f: jne 0x59a8a0 */ if (!fZ) goto L_0059a8a0;
L_0059a881:; BB(0x0059a881);
    /* 0059a881: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059a883: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x59a888u); f_0051f81c();
    /* 0059a888: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a889: ret 4 */ FN_RET(0x0059a7f0); r_esp += 8; return;
L_0059a88c:; BB(0x0059a88c);
    /* 0059a88c: mov eax, dword ptr [ebp + 0x410] */ r_eax = R32((u32)(r_ebp+0x410u));
    /* 0059a892: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059a895: jle 0x59a8a0 */ if ((fZ||fS!=fO)) goto L_0059a8a0;
L_0059a897:; BB(0x0059a897);
    /* 0059a897: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a899: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059a89b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59a8a0u); f_0051f62c();
L_0059a8a0:; BB(0x0059a8a0);
    /* 0059a8a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a8a1: ret 4 */ FN_RET(0x0059a7f0); r_esp += 8; return;
L_0059a8a4:; BB(0x0059a8a4);
    /* 0059a8a4: mov dword ptr [ebp + 0x410], 0 */ W32((u32)(r_ebp+0x410u), 0x0u);
    /* 0059a8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a8af: ret 4 */ FN_RET(0x0059a7f0); r_esp += 8; return;
}

void f_0059a8b4(void) /* sub_59A8B4 */
{
    FN_ENTER(0x0059a8b4);
    /* 0059a8b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a8b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059a8b7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059a8bb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a8be: je 0x59a92a */ if (fZ) goto L_0059a92a;
L_0059a8c0:; BB(0x0059a8c0);
    /* 0059a8c0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a8c3: je 0x59a90c */ if (fZ) goto L_0059a90c;
L_0059a8c5:; BB(0x0059a8c5);
    /* 0059a8c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a8c7: jne 0x59a926 */ if (!fZ) goto L_0059a926;
L_0059a8c9:; BB(0x0059a8c9);
    /* 0059a8c9: fld dword ptr [0x929850] */ FPUSH(R_F32((u32)(0x929850u)));
    /* 0059a8cf: fld dword ptr [ebx + 0x3e0] */ FPUSH(R_F32((u32)(r_ebx+0x3e0u)));
    /* 0059a8d5: fsub dword ptr [0x92984c] */ ST(0) = ST(0) - R_F32((u32)(0x92984cu));
    /* 0059a8db: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059a8dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059a8df: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0059a8e2: add edx, 0xffffe800 */ {  u32 a = r_edx; u32 b = 0xffffe800u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059a8e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059a8e9: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 0059a8ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059a8ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059a8f0: ja 0x59a8f4 */ if ((!fC&&!fZ)) goto L_0059a8f4;
L_0059a8f2:; BB(0x0059a8f2);
    /* 0059a8f2: fst st(1) */ ST(1) = ST(0);
L_0059a8f4:; BB(0x0059a8f4);
    /* 0059a8f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059a8f6: fstp dword ptr [ebx + 0x3e0] */ W_F32((u32)(r_ebx+0x3e0u), ST(0)); FPOP();
    /* 0059a8fc: call 0x59a954 */ r_esp -= 4; W32(r_esp, 0x59a901u); f_0059a954();
    /* 0059a901: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059a903: call 0x59ae08 */ r_esp -= 4; W32(r_esp, 0x59a908u); f_0059ae08();
    /* 0059a908: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059a909: ret 4 */ FN_RET(0x0059a8b4); r_esp += 8; return;
L_0059a90c:; BB(0x0059a90c);
    /* 0059a90c: fld dword ptr [ebx + 0x3e0] */ FPUSH(R_F32((u32)(r_ebx+0x3e0u)));
    /* 0059a912: fcomp dword ptr [0x929850] */ fx_compare(ST(0), R_F32((u32)(0x929850u))); FPOP();
    /* 0059a918: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059a91a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059a91b: ja 0x59a926 */ if ((!fC&&!fZ)) goto L_0059a926;
L_0059a91d:; BB(0x0059a91d);
    /* 0059a91d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a91f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059a921: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59a926u); f_0051f62c();
L_0059a926:; BB(0x0059a926);
    /* 0059a926: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059a927: ret 4 */ FN_RET(0x0059a8b4); r_esp += 8; return;
L_0059a92a:; BB(0x0059a92a);
    /* 0059a92a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a92c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059a92e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59a933u); f_0051f664();
    /* 0059a933: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0059a939: mov dword ptr [ebx + 0x3d8], 3 */ W32((u32)(r_ebx+0x3d8u), 0x3u);
    /* 0059a943: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a948: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0059a94e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059a94f: ret 4 */ FN_RET(0x0059a8b4); r_esp += 8; return;
}

void f_0059a954(void) /* sub_59A954 */
{
    FN_ENTER(0x0059a954);
    /* 0059a954: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059a955: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a956: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a959: mov esi, ecx */ r_esi = r_ecx;
    /* 0059a95b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0059a95e: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 0059a964: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059a966: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059a969: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0059a96c: fadd dword ptr [esi + 0x3e0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3e0u));
    /* 0059a972: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059a975: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0059a979: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059a97c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0059a980: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059a984: lea ebp, [esi + 0x300] */ r_ebp = (u32)(r_esi+0x300u);
    /* 0059a98a: mov edx, ebp */ r_edx = r_ebp;
    /* 0059a98c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x59a991u); f_0082f9c4();
    /* 0059a991: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059a994: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a995: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x59a99au); f_00782868();
    /* 0059a99a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059a99b: fld dword ptr [0x929848] */ FPUSH(R_F32((u32)(0x929848u)));
    /* 0059a9a1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059a9a3: fld dword ptr [0x929844] */ FPUSH(R_F32((u32)(0x929844u)));
    /* 0059a9a9: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0059a9ac: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0059a9ae: fadd dword ptr [esi + 0x400] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x400u));
    /* 0059a9b4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0059a9b6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0059a9ba: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0059a9be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059a9c0: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0059a9c2: fadd dword ptr [esi + 0x404] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x404u));
    /* 0059a9c8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0059a9ca: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059a9cc: fadd dword ptr [esi + 0x408] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x408u));
    /* 0059a9d2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0059a9d4: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0059a9d6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0059a9d8: fstp dword ptr [esi + 0x400] */ W_F32((u32)(r_esi+0x400u), ST(0)); FPOP();
    /* 0059a9de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059a9e0: fstp dword ptr [esi + 0x404] */ W_F32((u32)(r_esi+0x404u), ST(0)); FPOP();
    /* 0059a9e6: fstp dword ptr [esi + 0x408] */ W_F32((u32)(r_esi+0x408u), ST(0)); FPOP();
    /* 0059a9ec: lea edx, [esi + 0x400] */ r_edx = (u32)(r_esi+0x400u);
    /* 0059a9f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059a9f4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x59a9f9u); f_0082ebac();
    /* 0059a9f9: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0059a9ff: mov edx, dword ptr [esi + 0x308] */ r_edx = R32((u32)(r_esi+0x308u));
    /* 0059aa05: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0059aa08: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 0059aa0b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059aa0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059aa0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059aa10: ret  */ FN_RET(0x0059a954); r_esp += 4; return;
}

void f_0059aa14(void) /* sub_59AA14 */
{
    FN_ENTER(0x0059aa14);
    /* 0059aa14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059aa15: mov edi, ecx */ r_edi = r_ecx;
    /* 0059aa17: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059aa1b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059aa1e: je 0x59aacb */ if (fZ) goto L_0059aacb;
L_0059aa24:; BB(0x0059aa24);
    /* 0059aa24: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059aa27: je 0x59aaab */ if (fZ) goto L_0059aaab;
L_0059aa2d:; BB(0x0059aa2d);
    /* 0059aa2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059aa2f: jne 0x59aa98 */ if (!fZ) goto L_0059aa98;
L_0059aa31:; BB(0x0059aa31);
    /* 0059aa31: mov eax, dword ptr [edi + 0x410] */ r_eax = R32((u32)(r_edi+0x410u));
    /* 0059aa37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059aa39: jne 0x59aa86 */ if (!fZ) goto L_0059aa86;
L_0059aa3b:; BB(0x0059aa3b);
    /* 0059aa3b: fld dword ptr [0x92984c] */ FPUSH(R_F32((u32)(0x92984cu)));
    /* 0059aa41: fadd dword ptr [edi + 0x3e0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3e0u));
    /* 0059aa47: fcom dword ptr [0x929840] */ fx_compare(ST(0), R_F32((u32)(0x929840u))); 
    /* 0059aa4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059aa4f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059aa50: jbe 0x59aa75 */ if ((fC||fZ)) goto L_0059aa75;
L_0059aa52:; BB(0x0059aa52);
    /* 0059aa52: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059aa54: mov dword ptr [edi + 0x410], 1 */ W32((u32)(r_edi+0x410u), 0x1u);
    /* 0059aa5e: mov eax, 0x41a00000 */ r_eax = 0x41a00000u;
    /* 0059aa63: mov dword ptr [edi + 0x3e0], eax */ W32((u32)(r_edi+0x3e0u), r_eax);
    /* 0059aa69: mov dword ptr [edi + 0x40c], 2 */ W32((u32)(r_edi+0x40cu), 0x2u);
    /* 0059aa73: jmp 0x59aa7b */ goto L_0059aa7b;
L_0059aa75:; BB(0x0059aa75);
    /* 0059aa75: fstp dword ptr [edi + 0x3e0] */ W_F32((u32)(r_edi+0x3e0u), ST(0)); FPOP();
L_0059aa7b:; BB(0x0059aa7b);
    /* 0059aa7b: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0059aa7e: add eax, 0x1800 */ {  u32 a = r_eax; u32 b = 0x1800u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059aa83: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
L_0059aa86:; BB(0x0059aa86);
    /* 0059aa86: mov ecx, edi */ r_ecx = r_edi;
    /* 0059aa88: call 0x59a954 */ r_esp -= 4; W32(r_esp, 0x59aa8du); f_0059a954();
    /* 0059aa8d: mov ecx, edi */ r_ecx = r_edi;
    /* 0059aa8f: call 0x59ae08 */ r_esp -= 4; W32(r_esp, 0x59aa94u); f_0059ae08();
    /* 0059aa94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059aa95: ret 4 */ FN_RET(0x0059aa14); r_esp += 8; return;
L_0059aa98:; BB(0x0059aa98);
    /* 0059aa98: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059aa9b: jne 0x59aac7 */ if (!fZ) goto L_0059aac7;
L_0059aa9d:; BB(0x0059aa9d);
    /* 0059aa9d: mov dword ptr [edi + 0x40c], 0 */ W32((u32)(r_edi+0x40cu), 0x0u);
    /* 0059aaa7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059aaa8: ret 4 */ FN_RET(0x0059aa14); r_esp += 8; return;
L_0059aaab:; BB(0x0059aaab);
    /* 0059aaab: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059aab1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059aab3: je 0x59aac7 */ if (fZ) goto L_0059aac7;
L_0059aab5:; BB(0x0059aab5);
    /* 0059aab5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aab7: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059aaba: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059aac0: mov ecx, edi */ r_ecx = r_edi;
    /* 0059aac2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59aac7u); f_0051f62c();
L_0059aac7:; BB(0x0059aac7);
    /* 0059aac7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059aac8: ret 4 */ FN_RET(0x0059aa14); r_esp += 8; return;
L_0059aacb:; BB(0x0059aacb);
    /* 0059aacb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aacd: mov ecx, edi */ r_ecx = r_edi;
    /* 0059aacf: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59aad4u); f_0051f664();
    /* 0059aad4: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059aada: mov edx, dword ptr [edi + 0x3dc] */ r_edx = R32((u32)(r_edi+0x3dcu));
    /* 0059aae0: mov dword ptr [edi + 0x410], 0 */ W32((u32)(r_edi+0x410u), 0x0u);
    /* 0059aaea: or eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059aaef: mov dword ptr [edi + 0x40c], 1 */ W32((u32)(r_edi+0x40cu), 0x1u);
    /* 0059aaf9: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059aaff: mov dword ptr [edi + 0x3d8], edx */ W32((u32)(r_edi+0x3d8u), r_edx);
    /* 0059ab05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ab06: ret 4 */ FN_RET(0x0059aa14); r_esp += 8; return;
}

void f_0059ab0c(void) /* sub_59AB0C */
{
    FN_ENTER(0x0059ab0c);
    /* 0059ab0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ab0d: mov esi, ecx */ r_esi = r_ecx;
    /* 0059ab0f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059ab13: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ab16: je 0x59ab6d */ if (fZ) goto L_0059ab6d;
L_0059ab18:; BB(0x0059ab18);
    /* 0059ab18: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ab1b: je 0x59ab33 */ if (fZ) goto L_0059ab33;
L_0059ab1d:; BB(0x0059ab1d);
    /* 0059ab1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ab1f: jne 0x59ab69 */ if (!fZ) goto L_0059ab69;
L_0059ab21:; BB(0x0059ab21);
    /* 0059ab21: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ab23: call 0x59a954 */ r_esp -= 4; W32(r_esp, 0x59ab28u); f_0059a954();
    /* 0059ab28: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ab2a: call 0x59ae08 */ r_esp -= 4; W32(r_esp, 0x59ab2fu); f_0059ae08();
    /* 0059ab2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ab30: ret 4 */ FN_RET(0x0059ab0c); r_esp += 8; return;
L_0059ab33:; BB(0x0059ab33);
    /* 0059ab33: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059ab39: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059ab3b: jne 0x59ab57 */ if (!fZ) goto L_0059ab57;
L_0059ab3d:; BB(0x0059ab3d);
    /* 0059ab3d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ab3f: je 0x59ab69 */ if (fZ) goto L_0059ab69;
L_0059ab41:; BB(0x0059ab41);
    /* 0059ab41: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ab43: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ab46: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0059ab4c: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ab4e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59ab53u); f_0051f62c();
    /* 0059ab53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ab54: ret 4 */ FN_RET(0x0059ab0c); r_esp += 8; return;
L_0059ab57:; BB(0x0059ab57);
    /* 0059ab57: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ab59: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ab5c: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0059ab62: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ab64: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59ab69u); f_0051f62c();
L_0059ab69:; BB(0x0059ab69);
    /* 0059ab69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ab6a: ret 4 */ FN_RET(0x0059ab0c); r_esp += 8; return;
L_0059ab6d:; BB(0x0059ab6d);
    /* 0059ab6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ab6f: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ab71: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59ab76u); f_0051f664();
    /* 0059ab76: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059ab7c: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ab81: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0059ab87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ab88: ret 4 */ FN_RET(0x0059ab0c); r_esp += 8; return;
}

void f_0059ab8c(void) /* sub_59AB8C */
{
    FN_ENTER(0x0059ab8c);
    /* 0059ab8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ab8d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059ab8f: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0059ab96: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ab99: je 0x59aba9 */ if (fZ) goto L_0059aba9;
L_0059ab9b:; BB(0x0059ab9b);
    /* 0059ab9b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ab9e: je 0x59abab */ if (fZ) goto L_0059abab;
L_0059aba0:; BB(0x0059aba0);
    /* 0059aba0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aba2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059aba4: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59aba9u); f_0051f62c();
L_0059aba9:; BB(0x0059aba9);
    /* 0059aba9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059abaa: ret  */ FN_RET(0x0059ab8c); r_esp += 4; return;
L_0059abab:; BB(0x0059abab);
    /* 0059abab: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059abad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059abaf: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59abb4u); f_0051f62c();
    /* 0059abb4: mov dword ptr [ebx + 0x40c], 3 */ W32((u32)(r_ebx+0x40cu), 0x3u);
    /* 0059abbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059abbf: ret  */ FN_RET(0x0059ab8c); r_esp += 4; return;
}

void f_0059abc0(void) /* sub_59ABC0 */
{
    FN_ENTER(0x0059abc0);
    /* 0059abc0: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0059abc7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059abca: je 0x59abe6 */ if (fZ) goto L_0059abe6;
L_0059abcc:; BB(0x0059abcc);
    /* 0059abcc: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059abd2: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059abd7: je 0x59abdf */ if (fZ) goto L_0059abdf;
L_0059abd9:; BB(0x0059abd9);
    /* 0059abd9: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x59abdeu); f_0051f81c();
    /* 0059abde: ret  */ FN_RET(0x0059abc0); r_esp += 4; return;
L_0059abdf:; BB(0x0059abdf);
    /* 0059abdf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059abe1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59abe6u); f_0051f62c();
L_0059abe6:; BB(0x0059abe6);
    /* 0059abe6: ret  */ FN_RET(0x0059abc0); r_esp += 4; return;
}

void f_0059abe8(void) /* sub_59ABE8 */
{
    FN_ENTER(0x0059abe8);
    /* 0059abe8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0059abef: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059abf2: je 0x59abff */ if (fZ) goto L_0059abff;
L_0059abf4:; BB(0x0059abf4);
    /* 0059abf4: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059abf7: je 0x59abff */ if (fZ) goto L_0059abff;
L_0059abf9:; BB(0x0059abf9);
    /* 0059abf9: mov eax, 1 */ r_eax = 0x1u;
    /* 0059abfe: ret  */ FN_RET(0x0059abe8); r_esp += 4; return;
L_0059abff:; BB(0x0059abff);
    /* 0059abff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ac01: ret  */ FN_RET(0x0059abe8); r_esp += 4; return;
}

void f_0059ac0c(void) /* sub_59AC0C */
{
    FN_ENTER(0x0059ac0c);
    /* 0059ac0c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0059ac10: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059ac16: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059ac19: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 0059ac1f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ac21: je 0x59ac47 */ if (fZ) goto L_0059ac47;
L_0059ac23:; BB(0x0059ac23);
    /* 0059ac23: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ac26: jne 0x59ac35 */ if (!fZ) goto L_0059ac35;
L_0059ac28:; BB(0x0059ac28);
    /* 0059ac28: mov dword ptr [ecx + 0x3dc], 5 */ W32((u32)(r_ecx+0x3dcu), 0x5u);
    /* 0059ac32: ret 4 */ FN_RET(0x0059ac0c); r_esp += 8; return;
L_0059ac35:; BB(0x0059ac35);
    /* 0059ac35: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ac38: jne 0x59ac51 */ if (!fZ) goto L_0059ac51;
L_0059ac3a:; BB(0x0059ac3a);
    /* 0059ac3a: mov dword ptr [ecx + 0x3dc], 6 */ W32((u32)(r_ecx+0x3dcu), 0x6u);
    /* 0059ac44: ret 4 */ FN_RET(0x0059ac0c); r_esp += 8; return;
L_0059ac47:; BB(0x0059ac47);
    /* 0059ac47: mov dword ptr [ecx + 0x3dc], 4 */ W32((u32)(r_ecx+0x3dcu), 0x4u);
L_0059ac51:; BB(0x0059ac51);
    /* 0059ac51: ret 4 */ FN_RET(0x0059ac0c); r_esp += 8; return;
}

void f_0059ac54(void) /* sub_59AC54 */
{
    FN_ENTER(0x0059ac54);
    /* 0059ac54: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059ac5a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ac5d: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 0059ac63: ret  */ FN_RET(0x0059ac54); r_esp += 4; return;
}

void f_0059ac64(void) /* sub_59AC64 */
{
    FN_ENTER(0x0059ac64);
    /* 0059ac64: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059ac6a: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059ac6d: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 0059ac73: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ac75: jne 0x59ac7c */ if (!fZ) goto L_0059ac7c;
L_0059ac77:; BB(0x0059ac77);
    /* 0059ac77: call 0x59a7c8 */ r_esp -= 4; W32(r_esp, 0x59ac7cu); f_0059a7c8();
L_0059ac7c:; BB(0x0059ac7c);
    /* 0059ac7c: ret  */ FN_RET(0x0059ac64); r_esp += 4; return;
}

void f_0059ac80(void) /* sub_59AC80 */
{
    FN_ENTER(0x0059ac80);
    /* 0059ac80: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059ac86: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ac89: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 0059ac8f: test eax, 0x408 */ {  u32 a = r_eax; u32 b = 0x408u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ac94: jne 0x59ac9b */ if (!fZ) goto L_0059ac9b;
L_0059ac96:; BB(0x0059ac96);
    /* 0059ac96: call 0x59a7a0 */ r_esp -= 4; W32(r_esp, 0x59ac9bu); f_0059a7a0();
L_0059ac9b:; BB(0x0059ac9b);
    /* 0059ac9b: ret  */ FN_RET(0x0059ac80); r_esp += 4; return;
}

void f_0059ac9c(void) /* sub_59AC9C */
{
    FN_ENTER(0x0059ac9c);
    /* 0059ac9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ac9d: mov edi, ecx */ r_edi = r_ecx;
    /* 0059ac9f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059aca1: mov ecx, edi */ r_ecx = r_edi;
    /* 0059aca3: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x59aca9u); call_ind(t); }
    /* 0059aca9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059acab: mov ecx, edi */ r_ecx = r_edi;
    /* 0059acad: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x59acb3u); call_ind(t); }
    /* 0059acb3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059acb4: ret  */ FN_RET(0x0059ac9c); r_esp += 4; return;
}

void f_0059acb8(void) /* sub_59ACB8 */
{
    FN_ENTER(0x0059acb8);
    /* 0059acb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059acb9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059acbb: mov ecx, dword ptr [ebp + 0x3c8] */ r_ecx = R32((u32)(r_ebp+0x3c8u));
    /* 0059acc1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0059acc3: mov dword ptr [ebp + 0x300], eax */ W32((u32)(r_ebp+0x300u), r_eax);
    /* 0059acc9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059accc: mov dword ptr [ebp + 0x304], edx */ W32((u32)(r_ebp+0x304u), r_edx);
    /* 0059acd2: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0059acd5: mov dword ptr [ebp + 0x308], eax */ W32((u32)(r_ebp+0x308u), r_eax);
    /* 0059acdb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059acdd: mov dword ptr [ebp + 0x400], 0 */ W32((u32)(r_ebp+0x400u), 0x0u);
    /* 0059ace7: mov dword ptr [ebp + 0x404], 0 */ W32((u32)(r_ebp+0x404u), 0x0u);
    /* 0059acf1: mov dword ptr [ebp + 0x408], 0 */ W32((u32)(r_ebp+0x408u), 0x0u);
    /* 0059acfb: call 0x59ae08 */ r_esp -= 4; W32(r_esp, 0x59ad00u); f_0059ae08();
    /* 0059ad00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ad02: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x59ad07u); f_0051ffdc();
    /* 0059ad07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ad08: ret  */ FN_RET(0x0059acb8); r_esp += 4; return;
}

void f_0059ad38(void) /* sub_59AD38 */
{
    FN_ENTER(0x0059ad38);
    /* 0059ad38: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059ad3e: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ad43: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 0059ad49: ret  */ FN_RET(0x0059ad38); r_esp += 4; return;
}

void f_0059ad4c(void) /* sub_59AD4C */
{
    FN_ENTER(0x0059ad4c);
    /* 0059ad4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ad4d: mov edi, ecx */ r_edi = r_ecx;
    /* 0059ad4f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ad51: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ad53: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x59ad59u); call_ind(t); }
    /* 0059ad59: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ad5b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ad5d: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x59ad63u); call_ind(t); }
    /* 0059ad63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ad64: ret  */ FN_RET(0x0059ad4c); r_esp += 4; return;
}

void f_0059ad68(void) /* sub_59AD68 */
{
    FN_ENTER(0x0059ad68);
    /* 0059ad68: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0059ad6e: or eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ad73: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 0059ad79: ret  */ FN_RET(0x0059ad68); r_esp += 4; return;
}

void f_0059ad7c(void) /* sub_59AD7C */
{
    FN_ENTER(0x0059ad7c);
    /* 0059ad7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ad7d: mov eax, dword ptr [0xa7470c] */ r_eax = R32((u32)(0xa7470cu));
    /* 0059ad82: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0059ad88: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0059ad8b: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0059ad8e: mov dword ptr [0xa7468c], edx */ W32((u32)(0xa7468cu), r_edx);
    /* 0059ad94: mov dword ptr [0xa74688], eax */ W32((u32)(0xa74688u), r_eax);
    /* 0059ad99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059ad9b: mov ebx, eax */ r_ebx = r_eax;
L_0059ad9d:; BB(0x0059ad9d);
    /* 0059ad9d: push dword ptr [ebx + 0x929824] */ { u32 v = R32((u32)(r_ebx+0x929824u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059ada3: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x59ada8u); f_0077a684();
    /* 0059ada8: push dword ptr [ebx + 0x92981c] */ { u32 v = R32((u32)(r_ebx+0x92981cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059adae: mov dword ptr [ebx + 0xa746a8], eax */ W32((u32)(r_ebx+0xa746a8u), r_eax);
    /* 0059adb4: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x59adb9u); f_0077a698();
    /* 0059adb9: push dword ptr [ebx + 0x929814] */ { u32 v = R32((u32)(r_ebx+0x929814u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059adbf: mov dword ptr [ebx + 0xa746a0], eax */ W32((u32)(r_ebx+0xa746a0u), r_eax);
    /* 0059adc5: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x59adcau); f_0077a6b4();
    /* 0059adca: push dword ptr [ebx + 0x92980c] */ { u32 v = R32((u32)(r_ebx+0x92980cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059add0: mov dword ptr [ebx + 0xa74698], eax */ W32((u32)(r_ebx+0xa74698u), r_eax);
    /* 0059add6: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x59addbu); f_0077a6cc();
    /* 0059addb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059adde: mov dword ptr [ebx + 0xa74690], eax */ W32((u32)(r_ebx+0xa74690u), r_eax);
    /* 0059ade4: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059ade7: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059adea: jl 0x59ad9d */ if ((fS!=fO)) goto L_0059ad9d;
L_0059adec:; BB(0x0059adec);
    /* 0059adec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059aded: ret  */ FN_RET(0x0059ad7c); r_esp += 4; return;
}

void f_0059adf0(void) /* sub_59ADF0 */
{
    FN_ENTER(0x0059adf0);
    /* 0059adf0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0059adf4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059adf7: je 0x59ae05 */ if (fZ) goto L_0059ae05;
L_0059adf9:; BB(0x0059adf9);
    /* 0059adf9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059adfc: jne 0x59ae05 */ if (!fZ) goto L_0059ae05;
L_0059adfe:; BB(0x0059adfe);
    /* 0059adfe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae00: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59ae05u); f_0051f62c();
L_0059ae05:; BB(0x0059ae05);
    /* 0059ae05: ret 4 */ FN_RET(0x0059adf0); r_esp += 8; return;
}

void f_0059ae08(void) /* sub_59AE08 */
{
    FN_ENTER(0x0059ae08);
    /* 0059ae08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae09: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059ae0c: mov edi, ecx */ r_edi = r_ecx;
    /* 0059ae0e: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0059ae14: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 0059ae1a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059ae1d: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 0059ae23: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059ae27: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0059ae29: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059ae2d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059ae30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae31: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ae33: call dword ptr [edx + 0x19c] */ { u32 t = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, 0x59ae39u); call_ind(t); }
    /* 0059ae39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ae3b: je 0x59ae53 */ if (fZ) goto L_0059ae53;
L_0059ae3d:; BB(0x0059ae3d);
    /* 0059ae3d: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059ae43: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059ae48: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059ae4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059ae51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ae52: ret  */ FN_RET(0x0059ae08); r_esp += 4; return;
L_0059ae53:; BB(0x0059ae53);
    /* 0059ae53: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059ae59: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ae5e: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059ae64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059ae67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ae68: ret  */ FN_RET(0x0059ae08); r_esp += 4; return;
}

void f_0059ae6c(void) /* sub_59AE6C */
{
    FN_ENTER(0x0059ae6c);
    /* 0059ae6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae6d: mov edi, ecx */ r_edi = r_ecx;
    /* 0059ae6f: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ae71: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x59ae76u); f_00521840();
    /* 0059ae76: mov eax, dword ptr [0xa7468c] */ r_eax = R32((u32)(0xa7468cu));
    /* 0059ae7b: mov edx, dword ptr [0xa74688] */ r_edx = R32((u32)(0xa74688u));
    /* 0059ae81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae83: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 0059ae86: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0059ae89: push 0x9bfe44 */ { u32 v = 0x9bfe44u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae8e: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ae90: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x59ae95u); f_0051ff3c();
    /* 0059ae95: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059ae9b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ae9e: je 0x59af92 */ if (fZ) goto L_0059af92;
L_0059aea4:; BB(0x0059aea4);
    /* 0059aea4: mov eax, 1 */ r_eax = 0x1u;
L_0059aea9:; BB(0x0059aea9);
    /* 0059aea9: push dword ptr [eax*4 + 0xa74698] */ { u32 v = R32((u32)(r_eax*4+0xa74698u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059aeb0: mov ecx, edi */ r_ecx = r_edi;
    /* 0059aeb2: push dword ptr [eax*4 + 0xa746a0] */ { u32 v = R32((u32)(r_eax*4+0xa746a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059aeb9: push dword ptr [eax*4 + 0xa746a8] */ { u32 v = R32((u32)(r_eax*4+0xa746a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059aec0: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x59aec5u); f_00520c70();
    /* 0059aec5: mov ecx, edi */ r_ecx = r_edi;
    /* 0059aec7: call 0x520380 */ r_esp -= 4; W32(r_esp, 0x59aeccu); f_00520380();
    /* 0059aecc: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059aed2: mov dword ptr [edi + 0x358], 0x9bfe28 */ W32((u32)(r_edi+0x358u), 0x9bfe28u);
    /* 0059aedc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059aedf: je 0x59af84 */ if (fZ) goto L_0059af84;
L_0059aee5:; BB(0x0059aee5);
    /* 0059aee5: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aee7: mov ecx, edi */ r_ecx = r_edi;
    /* 0059aee9: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x59aeeeu); f_00520390();
L_0059aeee:; BB(0x0059aeee);
    /* 0059aeee: mov edx, dword ptr [edi + 0x3e4] */ r_edx = R32((u32)(r_edi+0x3e4u));
    /* 0059aef4: mov dword ptr [edi + 0x384], 0x40400000 */ W32((u32)(r_edi+0x384u), 0x40400000u);
    /* 0059aefe: mov eax, 3 */ r_eax = 0x3u;
    /* 0059af03: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
    /* 0059af09: mov dword ptr [edi + 0x3d4], 0 */ W32((u32)(r_edi+0x3d4u), 0x0u);
    /* 0059af13: mov dword ptr [edi + 0x3dc], eax */ W32((u32)(r_edi+0x3dcu), r_eax);
    /* 0059af19: lea ecx, [edi + 0x3e4] */ r_ecx = (u32)(r_edi+0x3e4u);
    /* 0059af1f: mov dword ptr [edi + 0x3e0], 0 */ W32((u32)(r_edi+0x3e0u), 0x0u);
    /* 0059af29: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x59af2cu); call_ind(t); }
    /* 0059af2c: mov dword ptr [edi + 0x400], 0 */ W32((u32)(r_edi+0x400u), 0x0u);
    /* 0059af36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059af38: mov dword ptr [edi + 0x40c], eax */ W32((u32)(r_edi+0x40cu), r_eax);
    /* 0059af3e: mov dword ptr [edi + 0x410], eax */ W32((u32)(r_edi+0x410u), r_eax);
    /* 0059af44: mov dword ptr [edi + 0x404], 0 */ W32((u32)(r_edi+0x404u), 0x0u);
    /* 0059af4e: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 0059af54: mov ecx, edi */ r_ecx = r_edi;
    /* 0059af56: mov dword ptr [edi + 0x408], 0 */ W32((u32)(r_edi+0x408u), 0x0u);
    /* 0059af60: call 0x59ad38 */ r_esp -= 4; W32(r_esp, 0x59af65u); f_0059ad38();
    /* 0059af65: mov ecx, edi */ r_ecx = r_edi;
    /* 0059af67: call 0x59ad4c */ r_esp -= 4; W32(r_esp, 0x59af6cu); f_0059ad4c();
    /* 0059af6c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059af6e: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0059af70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059af72: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0059af79: mov ecx, edi */ r_ecx = r_edi;
    /* 0059af7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059af7c: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x59af82u); call_ind(t); }
    /* 0059af82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059af83: ret  */ FN_RET(0x0059ae6c); r_esp += 4; return;
L_0059af84:; BB(0x0059af84);
    /* 0059af84: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0059af86: mov ecx, edi */ r_ecx = r_edi;
    /* 0059af88: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x59af8du); f_00520390();
    /* 0059af8d: jmp 0x59aeee */ goto L_0059aeee;
L_0059af92:; BB(0x0059af92);
    /* 0059af92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059af94: jmp 0x59aea9 */ goto L_0059aea9;
}

void f_0059af9c(void) /* sub_59AF9C */
{
    FN_ENTER(0x0059af9c);
    /* 0059af9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059af9d: mov ebp, esp */ r_ebp = r_esp;
    /* 0059af9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059afa1: push 0x8d863c */ { u32 v = 0x8d863cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059afa6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059afac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059afad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059afb4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059afb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059afba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0059afbd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0059afc0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0059afc3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0059afc6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0059afc9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0059afd0: mov eax, ecx */ r_eax = r_ecx;
    /* 0059afd2: mov dword ptr [eax], 0xb09c60 */ W32((u32)(r_eax), 0xb09c60u);
    /* 0059afd8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0059afda:; BB(0x0059afda);
    /* 0059afda: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059afdd: movzx edx, word ptr [eax + esi*2 + 0x3ec] */ r_edx = (u32)R16((u32)(r_eax+r_esi*2+0x3ecu));
    /* 0059afe5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059afe6: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0059afe9: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x59afeeu); f_007b4d18();
    /* 0059afee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059afef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059aff1: je 0x59b001 */ if (fZ) goto L_0059b001;
L_0059aff3:; BB(0x0059aff3);
    /* 0059aff3: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0059aff7: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059affd: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_0059b001:; BB(0x0059b001);
    /* 0059b001: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059b004: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0059b009: mov word ptr [edx + ebx + 0x3ec], ax */ W16((u32)(r_edx+r_ebx+0x3ecu), (u16)r_eax);
    /* 0059b011: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059b014: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b017: jl 0x59afda */ if ((fS!=fO)) goto L_0059afda;
L_0059b019:; BB(0x0059b019);
    /* 0059b019: mov ecx, edx */ r_ecx = r_edx;
    /* 0059b01b: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x59b020u); f_007b9c8c();
    /* 0059b020: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0059b027: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0059b02c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059b02f: lea edx, [eax + 0x47c] */ r_edx = (u32)(r_eax+0x47cu);
    /* 0059b035: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b037: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059b039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b03a: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x59b03fu); f_008586d6();
    /* 0059b03f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059b046: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059b049: lea ecx, [eax + 0x404] */ r_ecx = (u32)(r_eax+0x404u);
    /* 0059b04f: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x59b054u); f_005122a8();
    /* 0059b054: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059b057: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x59b05cu); f_0051f4fc();
    /* 0059b05c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059b05f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059b061: jne 0x59b07c */ if (!fZ) goto L_0059b07c;
L_0059b063:; BB(0x0059b063);
    /* 0059b063: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059b066: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059b069: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059b06c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b06f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059b076: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b079: ret 4 */ FN_RET(0x0059af9c); r_esp += 8; return;
L_0059b07c:; BB(0x0059b07c);
    /* 0059b07c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059b07f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b080: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x59b085u); f_005c2f74();
    /* 0059b085: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059b086: jmp 0x59b063 */ goto L_0059b063;
}

