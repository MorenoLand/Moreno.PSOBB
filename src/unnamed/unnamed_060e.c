#include "protos.h"

void f_0060e094(void) /* sub_60E094 */
{
    FN_ENTER(0x0060e094);
    /* 0060e094: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e095: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060e097: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060e099: call 0x60e0b8 */ r_esp -= 4; W32(r_esp, 0x60e09eu); f_0060e0b8();
    /* 0060e09e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060e0a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e0a4: jne 0x60e0aa */ if (!fZ) goto L_0060e0aa;
L_0060e0a6:; BB(0x0060e0a6);
    /* 0060e0a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060e0a7: ret 4 */ FN_RET(0x0060e094); r_esp += 8; return;
L_0060e0aa:; BB(0x0060e0aa);
    /* 0060e0aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e0ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60e0b0u); f_005c2f74();
    /* 0060e0b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e0b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060e0b2: ret 4 */ FN_RET(0x0060e094); r_esp += 8; return;
}

void f_0060e0b8(void) /* sub_60E0B8 */
{
    FN_ENTER(0x0060e0b8);
    /* 0060e0b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e0b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e0bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e0bd: push 0x8e02d4 */ { u32 v = 0x8e02d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e0c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e0c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e0c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e0d0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e0d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e0d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060e0d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060e0dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060e0df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060e0e2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060e0e5: mov dword ptr [ecx], 0xb22ba0 */ W32((u32)(r_ecx), 0xb22ba0u);
    /* 0060e0eb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060e0f2: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x60e0f7u); f_00608fc0();
    /* 0060e0f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e0fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e101: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e104: ret  */ FN_RET(0x0060e0b8); r_esp += 4; return;
}

void f_0060e108(void) /* sub_60E108 */
{
    FN_ENTER(0x0060e108);
    /* 0060e108: mov ecx, dword ptr [0xa8e8fc] */ r_ecx = R32((u32)(0xa8e8fcu));
    /* 0060e10e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e110: je 0x60e125 */ if (fZ) goto L_0060e125;
L_0060e112:; BB(0x0060e112);
    /* 0060e112: je 0x60e11b */ if (fZ) goto L_0060e11b;
L_0060e114:; BB(0x0060e114);
    /* 0060e114: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e116: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60e11bu); f_004066a8();
L_0060e11b:; BB(0x0060e11b);
    /* 0060e11b: mov dword ptr [0xa8e8fc], 0 */ W32((u32)(0xa8e8fcu), 0x0u);
L_0060e125:; BB(0x0060e125);
    /* 0060e125: ret  */ FN_RET(0x0060e108); r_esp += 4; return;
}

void f_0060e128(void)
{
    FN_ENTER(0x0060e128);
    /* 0060e128: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e129: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e12b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e12d: push 0x8e0316 */ { u32 v = 0x8e0316u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e132: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e139: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e140: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e143: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e146: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060e149: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060e14c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060e14f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e151: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060e158: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60e15du); f_005caba4();
    /* 0060e15d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e15e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060e161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e163: je 0x60e1eb */ if (fZ) goto L_0060e1eb;
L_0060e169:; BB(0x0060e169);
    /* 0060e169: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060e170: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060e177: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e17d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e180: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60e185u); f_00787a4c();
    /* 0060e185: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e188: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060e18f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060e192:; BB(0x0060e192);
    /* 0060e192: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060e199: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060e1a0: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1a5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60e1aau); f_005caba4();
    /* 0060e1aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e1ab: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060e1ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e1b0: je 0x60e1e7 */ if (fZ) goto L_0060e1e7;
L_0060e1b2:; BB(0x0060e1b2);
    /* 0060e1b2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060e1b9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060e1c0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e1c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060e1c6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e1c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1ca: call 0x60e1f4 */ r_esp -= 4; W32(r_esp, 0x60e1cfu); f_0060e1f4();
    /* 0060e1cf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e1d2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060e1d9:; BB(0x0060e1d9);
    /* 0060e1d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e1dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e1e3: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e1e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e1e6: ret  */ FN_RET(0x0060e128); r_esp += 4; return;
L_0060e1e7:; BB(0x0060e1e7);
    /* 0060e1e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e1e9: jmp 0x60e1d9 */ goto L_0060e1d9;
L_0060e1eb:; BB(0x0060e1eb);
    /* 0060e1eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060e1ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060e1f0: jmp 0x60e192 */ goto L_0060e192;
}

void f_0060e1f4(void) /* sub_60E1F4 */
{
    FN_ENTER(0x0060e1f4);
    /* 0060e1f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e1f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1f9: push 0x8e0330 */ { u32 v = 0x8e0330u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e1fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e205: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e20c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e20f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e212: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060e215: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060e218: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060e21b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060e21e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e221: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060e224: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060e227: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x60e22cu); f_00609010();
    /* 0060e22c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060e233: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e236: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060e239: mov dword ptr [ecx], 0xb22ba0 */ W32((u32)(r_ecx), 0xb22ba0u);
    /* 0060e23f: mov eax, dword ptr [0x9c44b0] */ r_eax = R32((u32)(0x9c44b0u));
    /* 0060e244: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e245: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060e248: call dword ptr [0xb22cec] */ { u32 t = R32((u32)(0xb22cecu)); r_esp -= 4; W32(r_esp, 0x60e24eu); call_ind(t); }
    /* 0060e24e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e251: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e253: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060e256: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060e259: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060e25c: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060e262: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060e268: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e26b: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060e271: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060e277: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060e27d: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060e283: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060e289: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060e28f: mov ecx, dword ptr [0xa8e8fc] */ r_ecx = R32((u32)(0xa8e8fcu));
    /* 0060e295: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060e29b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e29e: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060e2a4: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060e2a7: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060e2ad: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060e2b0: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060e2b6: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060e2b9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x60e2beu); f_005b8610();
    /* 0060e2be: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e2c1: mov ecx, dword ptr [0xa8e8fc] */ r_ecx = R32((u32)(0xa8e8fcu));
    /* 0060e2c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2c9: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0060e2cc: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x60e2d1u); f_005b8624();
    /* 0060e2d1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e2d4: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060e2d7: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60e2dcu); f_00606bc8();
    /* 0060e2dc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e2df: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060e2e2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060e2e5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060e2e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e2eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e2f2: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e2f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e2f5: ret 8 */ FN_RET(0x0060e1f4); r_esp += 12; return;
}

void f_0060e2f8(void) /* sub_60E2F8 */
{
    FN_ENTER(0x0060e2f8);
    /* 0060e2f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2f9: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e2fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e2fd: push 0x8e0358 */ { u32 v = 0x8e0358u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e302: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e309: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e310: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e313: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e316: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060e319: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060e31c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060e31f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e324: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060e32b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60e330u); f_008581c5();
    /* 0060e330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e331: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060e334: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e336: je 0x60e377 */ if (fZ) goto L_0060e377;
L_0060e338:; BB(0x0060e338);
    /* 0060e338: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060e33f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060e346: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060e349: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060e34b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e34c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e34d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e34e: push 0x9c44a0 */ { u32 v = 0x9c44a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e353: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e355: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60e35au); f_005b7a84();
    /* 0060e35a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060e35d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060e364:; BB(0x0060e364);
    /* 0060e364: mov dword ptr [0xa8e8fc], eax */ W32((u32)(0xa8e8fcu), r_eax);
    /* 0060e369: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e36c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e373: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e375: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e376: ret  */ FN_RET(0x0060e2f8); r_esp += 4; return;
L_0060e377:; BB(0x0060e377);
    /* 0060e377: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e379: jmp 0x60e364 */ goto L_0060e364;
}

void f_0060e37c(void) /* sub_60E37C */
{
    FN_ENTER(0x0060e37c);
    /* 0060e37c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e37d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060e37f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060e381: call 0x60e3a0 */ r_esp -= 4; W32(r_esp, 0x60e386u); f_0060e3a0();
    /* 0060e386: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060e38a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e38c: jne 0x60e392 */ if (!fZ) goto L_0060e392;
L_0060e38e:; BB(0x0060e38e);
    /* 0060e38e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060e38f: ret 4 */ FN_RET(0x0060e37c); r_esp += 8; return;
L_0060e392:; BB(0x0060e392);
    /* 0060e392: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e393: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60e398u); f_005c2f74();
    /* 0060e398: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e399: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060e39a: ret 4 */ FN_RET(0x0060e37c); r_esp += 8; return;
}

void f_0060e3a0(void) /* sub_60E3A0 */
{
    FN_ENTER(0x0060e3a0);
    /* 0060e3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e3a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e3a5: push 0x8e0374 */ { u32 v = 0x8e0374u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e3aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e3b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e3b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e3b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e3bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e3be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060e3c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060e3c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060e3c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060e3ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060e3cd: mov dword ptr [ecx], 0xb22da0 */ W32((u32)(r_ecx), 0xb22da0u);
    /* 0060e3d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060e3da: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60e3dfu); f_0060c7e4();
    /* 0060e3df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e3e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e3e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e3eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e3ec: ret  */ FN_RET(0x0060e3a0); r_esp += 4; return;
}

void f_0060e3f0(void) /* sub_60E3F0 */
{
    FN_ENTER(0x0060e3f0);
    /* 0060e3f0: mov ecx, dword ptr [0xa8e908] */ r_ecx = R32((u32)(0xa8e908u));
    /* 0060e3f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e3f8: je 0x60e415 */ if (fZ) goto L_0060e415;
L_0060e3fa:; BB(0x0060e3fa);
    /* 0060e3fa: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60e3ffu); f_00829de0();
    /* 0060e3ff: push dword ptr [0xa8e908] */ { u32 v = R32((u32)(0xa8e908u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e405: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x60e40au); f_0082e960();
    /* 0060e40a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e40b: mov dword ptr [0xa8e908], 0 */ W32((u32)(0xa8e908u), 0x0u);
L_0060e415:; BB(0x0060e415);
    /* 0060e415: mov eax, dword ptr [0xa8e90c] */ r_eax = R32((u32)(0xa8e90cu));
    /* 0060e41a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e41c: je 0x60e42f */ if (fZ) goto L_0060e42f;
L_0060e41e:; BB(0x0060e41e);
    /* 0060e41e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e41f: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x60e424u); f_005b9bac();
    /* 0060e424: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e425: mov dword ptr [0xa8e90c], 0 */ W32((u32)(0xa8e90cu), 0x0u);
L_0060e42f:; BB(0x0060e42f);
    /* 0060e42f: ret  */ FN_RET(0x0060e3f0); r_esp += 4; return;
}

void f_0060e430(void)
{
    FN_ENTER(0x0060e430);
    /* 0060e430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e431: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e433: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e435: push 0x8e03b6 */ { u32 v = 0x8e03b6u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e43a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e441: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e448: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e44b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e44e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060e451: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060e454: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060e457: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e459: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060e460: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60e465u); f_005caba4();
    /* 0060e465: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e466: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060e469: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e46b: je 0x60e4f3 */ if (fZ) goto L_0060e4f3;
L_0060e471:; BB(0x0060e471);
    /* 0060e471: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060e478: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060e47f: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e485: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e488: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60e48du); f_00787a4c();
    /* 0060e48d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e490: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060e497: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060e49a:; BB(0x0060e49a);
    /* 0060e49a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060e4a1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060e4a8: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e4ad: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60e4b2u); f_005caba4();
    /* 0060e4b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e4b3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060e4b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e4b8: je 0x60e4ef */ if (fZ) goto L_0060e4ef;
L_0060e4ba:; BB(0x0060e4ba);
    /* 0060e4ba: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060e4c1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060e4c8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e4cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060e4ce: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e4d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e4d2: call 0x60e4fc */ r_esp -= 4; W32(r_esp, 0x60e4d7u); f_0060e4fc();
    /* 0060e4d7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e4da: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060e4e1:; BB(0x0060e4e1);
    /* 0060e4e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e4e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e4eb: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e4ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e4ee: ret  */ FN_RET(0x0060e430); r_esp += 4; return;
L_0060e4ef:; BB(0x0060e4ef);
    /* 0060e4ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e4f1: jmp 0x60e4e1 */ goto L_0060e4e1;
L_0060e4f3:; BB(0x0060e4f3);
    /* 0060e4f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060e4f5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060e4f8: jmp 0x60e49a */ goto L_0060e49a;
}

void f_0060e4fc(void) /* sub_60E4FC */
{
    FN_ENTER(0x0060e4fc);
    /* 0060e4fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e4fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e4ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e501: push 0x8e03d0 */ { u32 v = 0x8e03d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e50c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e50d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e514: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e51a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060e51d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060e520: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060e523: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060e526: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e529: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060e52c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060e52f: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60e534u); f_0060c858();
    /* 0060e534: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060e53b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e53e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060e541: mov dword ptr [ecx], 0xb22da0 */ W32((u32)(r_ecx), 0xb22da0u);
    /* 0060e547: mov eax, dword ptr [0x9c44b4] */ r_eax = R32((u32)(0x9c44b4u));
    /* 0060e54c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e54d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060e550: call dword ptr [0xb22eec] */ { u32 t = R32((u32)(0xb22eecu)); r_esp -= 4; W32(r_esp, 0x60e556u); call_ind(t); }
    /* 0060e556: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e559: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060e55c: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060e55f: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060e562: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060e568: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060e56e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e571: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060e577: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060e57d: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060e583: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060e589: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060e58f: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060e595: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e598: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060e59e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e5a1: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060e5a7: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060e5aa: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060e5b0: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060e5b3: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060e5b9: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060e5bc: mov eax, dword ptr [0xa8e90c] */ r_eax = R32((u32)(0xa8e90cu));
    /* 0060e5c1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060e5c3: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060e5c6: mov eax, dword ptr [0xa8e908] */ r_eax = R32((u32)(0xa8e908u));
    /* 0060e5cb: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060e5ce: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60e5d3u); f_00606bc8();
    /* 0060e5d3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e5d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060e5d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060e5dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060e5df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e5e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e5e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e5eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e5ec: ret 8 */ FN_RET(0x0060e4fc); r_esp += 12; return;
}

void f_0060e5f0(void) /* sub_60E5F0 */
{
    FN_ENTER(0x0060e5f0);
    /* 0060e5f0: push 0x92f8ec */ { u32 v = 0x92f8ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e5f5: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x60e5fau); f_005b938c();
    /* 0060e5fa: push 0x92f900 */ { u32 v = 0x92f900u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e5ff: mov dword ptr [0xa8e90c], eax */ W32((u32)(0xa8e90cu), r_eax);
    /* 0060e604: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x60e609u); f_008009dc();
    /* 0060e609: mov dword ptr [0xa8e908], eax */ W32((u32)(0xa8e908u), r_eax);
    /* 0060e60e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060e611: ret  */ FN_RET(0x0060e5f0); r_esp += 4; return;
}

void f_0060e614(void) /* sub_60E614 */
{
    FN_ENTER(0x0060e614);
    /* 0060e614: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e615: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060e617: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060e619: call 0x60e638 */ r_esp -= 4; W32(r_esp, 0x60e61eu); f_0060e638();
    /* 0060e61e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060e622: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e624: jne 0x60e62a */ if (!fZ) goto L_0060e62a;
L_0060e626:; BB(0x0060e626);
    /* 0060e626: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060e627: ret 4 */ FN_RET(0x0060e614); r_esp += 8; return;
L_0060e62a:; BB(0x0060e62a);
    /* 0060e62a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e62b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60e630u); f_005c2f74();
    /* 0060e630: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e631: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060e632: ret 4 */ FN_RET(0x0060e614); r_esp += 8; return;
}

void f_0060e638(void) /* sub_60E638 */
{
    FN_ENTER(0x0060e638);
    /* 0060e638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e639: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e63b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e63d: push 0x8e03ec */ { u32 v = 0x8e03ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e642: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e649: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e650: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e653: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e656: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060e659: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060e65c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060e65f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060e662: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060e665: mov dword ptr [ecx], 0xb22fa0 */ W32((u32)(r_ecx), 0xb22fa0u);
    /* 0060e66b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060e672: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60e677u); f_0060c7e4();
    /* 0060e677: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e67a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e681: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e683: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e684: ret  */ FN_RET(0x0060e638); r_esp += 4; return;
}

void f_0060e688(void) /* sub_60E688 */
{
    FN_ENTER(0x0060e688);
    /* 0060e688: mov ecx, dword ptr [0xa8e914] */ r_ecx = R32((u32)(0xa8e914u));
    /* 0060e68e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e690: je 0x60e6ad */ if (fZ) goto L_0060e6ad;
L_0060e692:; BB(0x0060e692);
    /* 0060e692: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60e697u); f_00829de0();
    /* 0060e697: push dword ptr [0xa8e914] */ { u32 v = R32((u32)(0xa8e914u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e69d: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x60e6a2u); f_0082e960();
    /* 0060e6a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e6a3: mov dword ptr [0xa8e914], 0 */ W32((u32)(0xa8e914u), 0x0u);
L_0060e6ad:; BB(0x0060e6ad);
    /* 0060e6ad: mov eax, dword ptr [0xa8e918] */ r_eax = R32((u32)(0xa8e918u));
    /* 0060e6b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e6b4: je 0x60e6c7 */ if (fZ) goto L_0060e6c7;
L_0060e6b6:; BB(0x0060e6b6);
    /* 0060e6b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e6b7: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x60e6bcu); f_005b9bac();
    /* 0060e6bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e6bd: mov dword ptr [0xa8e918], 0 */ W32((u32)(0xa8e918u), 0x0u);
L_0060e6c7:; BB(0x0060e6c7);
    /* 0060e6c7: ret  */ FN_RET(0x0060e688); r_esp += 4; return;
}

void f_0060e6c8(void)
{
    FN_ENTER(0x0060e6c8);
    /* 0060e6c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e6c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e6cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e6cd: push 0x8e042e */ { u32 v = 0x8e042eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e6d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e6d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e6d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e6e0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e6e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e6e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060e6e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060e6ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060e6ef: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e6f1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060e6f8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60e6fdu); f_005caba4();
    /* 0060e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e6fe: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060e701: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e703: je 0x60e78b */ if (fZ) goto L_0060e78b;
L_0060e709:; BB(0x0060e709);
    /* 0060e709: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060e710: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060e717: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e71d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e720: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60e725u); f_00787a4c();
    /* 0060e725: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e728: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060e72f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060e732:; BB(0x0060e732);
    /* 0060e732: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060e739: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060e740: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e745: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60e74au); f_005caba4();
    /* 0060e74a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e74b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060e74e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e750: je 0x60e787 */ if (fZ) goto L_0060e787;
L_0060e752:; BB(0x0060e752);
    /* 0060e752: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060e759: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060e760: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e763: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060e766: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e769: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e76a: call 0x60e794 */ r_esp -= 4; W32(r_esp, 0x60e76fu); f_0060e794();
    /* 0060e76f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e772: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060e779:; BB(0x0060e779);
    /* 0060e779: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e77c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e783: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e785: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e786: ret  */ FN_RET(0x0060e6c8); r_esp += 4; return;
L_0060e787:; BB(0x0060e787);
    /* 0060e787: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e789: jmp 0x60e779 */ goto L_0060e779;
L_0060e78b:; BB(0x0060e78b);
    /* 0060e78b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060e78d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060e790: jmp 0x60e732 */ goto L_0060e732;
}

void f_0060e794(void) /* sub_60E794 */
{
    FN_ENTER(0x0060e794);
    /* 0060e794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e795: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e797: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e799: push 0x8e0448 */ { u32 v = 0x8e0448u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e79e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e7a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e7a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e7ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e7af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e7b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060e7b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060e7b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060e7bb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060e7be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e7c1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060e7c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060e7c7: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60e7ccu); f_0060c858();
    /* 0060e7cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060e7d3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e7d6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060e7d9: mov dword ptr [ecx], 0xb22fa0 */ W32((u32)(r_ecx), 0xb22fa0u);
    /* 0060e7df: mov eax, dword ptr [0x9c44b8] */ r_eax = R32((u32)(0x9c44b8u));
    /* 0060e7e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e7e5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060e7e8: call dword ptr [0xb230ec] */ { u32 t = R32((u32)(0xb230ecu)); r_esp -= 4; W32(r_esp, 0x60e7eeu); call_ind(t); }
    /* 0060e7ee: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e7f1: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060e7f4: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060e7f7: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060e7fa: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060e800: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060e806: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e809: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060e80f: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060e815: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060e81b: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060e821: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060e827: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060e82d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e830: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060e836: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e839: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060e83f: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060e842: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060e848: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060e84b: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060e851: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060e854: mov eax, dword ptr [0xa8e918] */ r_eax = R32((u32)(0xa8e918u));
    /* 0060e859: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060e85b: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060e85e: mov eax, dword ptr [0xa8e914] */ r_eax = R32((u32)(0xa8e914u));
    /* 0060e863: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060e866: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60e86bu); f_00606bc8();
    /* 0060e86b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e86e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060e871: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060e874: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060e877: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e87a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e881: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e883: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e884: ret 8 */ FN_RET(0x0060e794); r_esp += 12; return;
}

void f_0060e888(void) /* sub_60E888 */
{
    FN_ENTER(0x0060e888);
    /* 0060e888: push 0x92f910 */ { u32 v = 0x92f910u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e88d: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x60e892u); f_005b938c();
    /* 0060e892: push 0x92f924 */ { u32 v = 0x92f924u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e897: mov dword ptr [0xa8e918], eax */ W32((u32)(0xa8e918u), r_eax);
    /* 0060e89c: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x60e8a1u); f_008009dc();
    /* 0060e8a1: mov dword ptr [0xa8e914], eax */ W32((u32)(0xa8e914u), r_eax);
    /* 0060e8a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060e8a9: ret  */ FN_RET(0x0060e888); r_esp += 4; return;
}

void f_0060e8ac(void) /* sub_60E8AC */
{
    FN_ENTER(0x0060e8ac);
    /* 0060e8ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060e8af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060e8b1: call 0x60e8d0 */ r_esp -= 4; W32(r_esp, 0x60e8b6u); f_0060e8d0();
    /* 0060e8b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060e8ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e8bc: jne 0x60e8c2 */ if (!fZ) goto L_0060e8c2;
L_0060e8be:; BB(0x0060e8be);
    /* 0060e8be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060e8bf: ret 4 */ FN_RET(0x0060e8ac); r_esp += 8; return;
L_0060e8c2:; BB(0x0060e8c2);
    /* 0060e8c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60e8c8u); f_005c2f74();
    /* 0060e8c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e8c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060e8ca: ret 4 */ FN_RET(0x0060e8ac); r_esp += 8; return;
}

void f_0060e8d0(void) /* sub_60E8D0 */
{
    FN_ENTER(0x0060e8d0);
    /* 0060e8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e8d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8d5: push 0x8e0464 */ { u32 v = 0x8e0464u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e8e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e8e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e8e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e8eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e8ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060e8f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060e8f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060e8f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060e8fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060e8fd: mov dword ptr [ecx], 0xb231a0 */ W32((u32)(r_ecx), 0xb231a0u);
    /* 0060e903: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060e90a: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x60e90fu); f_00608fc0();
    /* 0060e90f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e912: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e919: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e91b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e91c: ret  */ FN_RET(0x0060e8d0); r_esp += 4; return;
}

void f_0060e920(void) /* sub_60E920 */
{
    FN_ENTER(0x0060e920);
    /* 0060e920: mov ecx, dword ptr [0xa8e920] */ r_ecx = R32((u32)(0xa8e920u));
    /* 0060e926: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e928: je 0x60e945 */ if (fZ) goto L_0060e945;
L_0060e92a:; BB(0x0060e92a);
    /* 0060e92a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60e92fu); f_00829de0();
    /* 0060e92f: push dword ptr [0xa8e920] */ { u32 v = R32((u32)(0xa8e920u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e935: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x60e93au); f_0082e960();
    /* 0060e93a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e93b: mov dword ptr [0xa8e920], 0 */ W32((u32)(0xa8e920u), 0x0u);
L_0060e945:; BB(0x0060e945);
    /* 0060e945: mov eax, dword ptr [0xa8e924] */ r_eax = R32((u32)(0xa8e924u));
    /* 0060e94a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060e94c: je 0x60e95f */ if (fZ) goto L_0060e95f;
L_0060e94e:; BB(0x0060e94e);
    /* 0060e94e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e94f: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x60e954u); f_005b9bac();
    /* 0060e954: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e955: mov dword ptr [0xa8e924], 0 */ W32((u32)(0xa8e924u), 0x0u);
L_0060e95f:; BB(0x0060e95f);
    /* 0060e95f: ret  */ FN_RET(0x0060e920); r_esp += 4; return;
}

void f_0060e960(void)
{
    FN_ENTER(0x0060e960);
    /* 0060e960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e961: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e963: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e965: push 0x8e04a6 */ { u32 v = 0x8e04a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e96a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060e970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e971: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060e978: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e97b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060e97e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060e981: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060e984: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060e987: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e989: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060e990: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60e995u); f_005caba4();
    /* 0060e995: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e996: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060e999: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e99b: je 0x60ea23 */ if (fZ) goto L_0060ea23;
L_0060e9a1:; BB(0x0060e9a1);
    /* 0060e9a1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060e9a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060e9af: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e9b5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e9b8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60e9bdu); f_00787a4c();
    /* 0060e9bd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e9c0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060e9c7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060e9ca:; BB(0x0060e9ca);
    /* 0060e9ca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060e9d1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060e9d8: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e9dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60e9e2u); f_005caba4();
    /* 0060e9e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060e9e3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060e9e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e9e8: je 0x60ea1f */ if (fZ) goto L_0060ea1f;
L_0060e9ea:; BB(0x0060e9ea);
    /* 0060e9ea: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060e9f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060e9f8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e9fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060e9fe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ea01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea02: call 0x60ea2c */ r_esp -= 4; W32(r_esp, 0x60ea07u); f_0060ea2c();
    /* 0060ea07: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ea0a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060ea11:; BB(0x0060ea11);
    /* 0060ea11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ea14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ea1b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ea1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ea1e: ret  */ FN_RET(0x0060e960); r_esp += 4; return;
L_0060ea1f:; BB(0x0060ea1f);
    /* 0060ea1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060ea21: jmp 0x60ea11 */ goto L_0060ea11;
L_0060ea23:; BB(0x0060ea23);
    /* 0060ea23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060ea25: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060ea28: jmp 0x60e9ca */ goto L_0060e9ca;
}

void f_0060ea2c(void) /* sub_60EA2C */
{
    FN_ENTER(0x0060ea2c);
    /* 0060ea2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea2d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ea2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea31: push 0x8e04c0 */ { u32 v = 0x8e04c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ea3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ea44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ea47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ea4a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060ea4d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060ea50: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060ea53: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060ea56: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ea59: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060ea5c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060ea5f: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x60ea64u); f_00609010();
    /* 0060ea64: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060ea6b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ea6e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ea71: mov dword ptr [ecx], 0xb231a0 */ W32((u32)(r_ecx), 0xb231a0u);
    /* 0060ea77: mov eax, dword ptr [0x9c44bc] */ r_eax = R32((u32)(0x9c44bcu));
    /* 0060ea7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ea7d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060ea80: call dword ptr [0xb232ec] */ { u32 t = R32((u32)(0xb232ecu)); r_esp -= 4; W32(r_esp, 0x60ea86u); call_ind(t); }
    /* 0060ea86: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ea89: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060ea8c: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060ea8f: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060ea92: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060ea98: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060ea9e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060eaa1: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060eaa7: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060eaad: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060eab3: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060eab9: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060eabf: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060eac5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060eac8: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060eace: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ead1: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060ead7: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060eada: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060eae0: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060eae3: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060eae9: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060eaec: mov eax, dword ptr [0xa8e924] */ r_eax = R32((u32)(0xa8e924u));
    /* 0060eaf1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060eaf3: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060eaf6: mov eax, dword ptr [0xa8e920] */ r_eax = R32((u32)(0xa8e920u));
    /* 0060eafb: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060eafe: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60eb03u); f_00606bc8();
    /* 0060eb03: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060eb06: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060eb09: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060eb0c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060eb0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060eb12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060eb19: mov esp, ebp */ r_esp = r_ebp;
    /* 0060eb1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060eb1c: ret 8 */ FN_RET(0x0060ea2c); r_esp += 12; return;
}

void f_0060eb20(void) /* sub_60EB20 */
{
    FN_ENTER(0x0060eb20);
    /* 0060eb20: push 0x92f938 */ { u32 v = 0x92f938u; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb25: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x60eb2au); f_005b938c();
    /* 0060eb2a: push 0x92f94c */ { u32 v = 0x92f94cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb2f: mov dword ptr [0xa8e924], eax */ W32((u32)(0xa8e924u), r_eax);
    /* 0060eb34: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x60eb39u); f_008009dc();
    /* 0060eb39: mov dword ptr [0xa8e920], eax */ W32((u32)(0xa8e920u), r_eax);
    /* 0060eb3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060eb41: ret  */ FN_RET(0x0060eb20); r_esp += 4; return;
}

void f_0060eb44(void) /* sub_60EB44 */
{
    FN_ENTER(0x0060eb44);
    /* 0060eb44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060eb47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060eb49: call 0x60eb68 */ r_esp -= 4; W32(r_esp, 0x60eb4eu); f_0060eb68();
    /* 0060eb4e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060eb52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060eb54: jne 0x60eb5a */ if (!fZ) goto L_0060eb5a;
L_0060eb56:; BB(0x0060eb56);
    /* 0060eb56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060eb57: ret 4 */ FN_RET(0x0060eb44); r_esp += 8; return;
L_0060eb5a:; BB(0x0060eb5a);
    /* 0060eb5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb5b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60eb60u); f_005c2f74();
    /* 0060eb60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060eb61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060eb62: ret 4 */ FN_RET(0x0060eb44); r_esp += 8; return;
}

void f_0060eb68(void) /* sub_60EB68 */
{
    FN_ENTER(0x0060eb68);
    /* 0060eb68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb69: mov ebp, esp */ r_ebp = r_esp;
    /* 0060eb6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb6d: push 0x8e04dc */ { u32 v = 0x8e04dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060eb78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060eb79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060eb80: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060eb83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060eb86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060eb89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060eb8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060eb8f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060eb92: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060eb95: mov dword ptr [ecx], 0xb233a0 */ W32((u32)(r_ecx), 0xb233a0u);
    /* 0060eb9b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060eba2: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x60eba7u); f_00608fc0();
    /* 0060eba7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ebaa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ebb1: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ebb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ebb4: ret  */ FN_RET(0x0060eb68); r_esp += 4; return;
}

void f_0060ebb8(void) /* sub_60EBB8 */
{
    FN_ENTER(0x0060ebb8);
    /* 0060ebb8: mov ecx, dword ptr [0xa8e92c] */ r_ecx = R32((u32)(0xa8e92cu));
    /* 0060ebbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ebc0: je 0x60ebdd */ if (fZ) goto L_0060ebdd;
L_0060ebc2:; BB(0x0060ebc2);
    /* 0060ebc2: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60ebc7u); f_00829de0();
    /* 0060ebc7: push dword ptr [0xa8e92c] */ { u32 v = R32((u32)(0xa8e92cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ebcd: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x60ebd2u); f_0082e960();
    /* 0060ebd2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ebd3: mov dword ptr [0xa8e92c], 0 */ W32((u32)(0xa8e92cu), 0x0u);
L_0060ebdd:; BB(0x0060ebdd);
    /* 0060ebdd: mov eax, dword ptr [0xa8e930] */ r_eax = R32((u32)(0xa8e930u));
    /* 0060ebe2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060ebe4: je 0x60ebf7 */ if (fZ) goto L_0060ebf7;
L_0060ebe6:; BB(0x0060ebe6);
    /* 0060ebe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ebe7: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x60ebecu); f_005b9bac();
    /* 0060ebec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ebed: mov dword ptr [0xa8e930], 0 */ W32((u32)(0xa8e930u), 0x0u);
L_0060ebf7:; BB(0x0060ebf7);
    /* 0060ebf7: ret  */ FN_RET(0x0060ebb8); r_esp += 4; return;
}

void f_0060ebf8(void)
{
    FN_ENTER(0x0060ebf8);
    /* 0060ebf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ebf9: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ebfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ebfd: push 0x8e051e */ { u32 v = 0x8e051eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ec08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ec10: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ec13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ec16: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060ec19: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060ec1c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060ec1f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec21: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060ec28: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60ec2du); f_005caba4();
    /* 0060ec2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ec2e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060ec31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ec33: je 0x60ecbb */ if (fZ) goto L_0060ecbb;
L_0060ec39:; BB(0x0060ec39);
    /* 0060ec39: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060ec40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060ec47: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ec4d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060ec50: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60ec55u); f_00787a4c();
    /* 0060ec55: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060ec58: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060ec5f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060ec62:; BB(0x0060ec62);
    /* 0060ec62: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060ec69: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060ec70: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec75: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60ec7au); f_005caba4();
    /* 0060ec7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ec7b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060ec7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ec80: je 0x60ecb7 */ if (fZ) goto L_0060ecb7;
L_0060ec82:; BB(0x0060ec82);
    /* 0060ec82: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060ec89: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060ec90: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ec93: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ec96: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ec99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ec9a: call 0x60ecc4 */ r_esp -= 4; W32(r_esp, 0x60ec9fu); f_0060ecc4();
    /* 0060ec9f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060eca2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060eca9:; BB(0x0060eca9);
    /* 0060eca9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ecac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ecb3: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ecb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ecb6: ret  */ FN_RET(0x0060ebf8); r_esp += 4; return;
L_0060ecb7:; BB(0x0060ecb7);
    /* 0060ecb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060ecb9: jmp 0x60eca9 */ goto L_0060eca9;
L_0060ecbb:; BB(0x0060ecbb);
    /* 0060ecbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060ecbd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060ecc0: jmp 0x60ec62 */ goto L_0060ec62;
}

void f_0060ecc4(void) /* sub_60ECC4 */
{
    FN_ENTER(0x0060ecc4);
    /* 0060ecc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ecc5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ecc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ecc9: push 0x8e0538 */ { u32 v = 0x8e0538u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ecce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ecd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ecd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ecdc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ecdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ece2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060ece5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060ece8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060eceb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060ecee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ecf1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060ecf4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060ecf7: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x60ecfcu); f_00609010();
    /* 0060ecfc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060ed03: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ed06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ed09: mov dword ptr [ecx], 0xb233a0 */ W32((u32)(r_ecx), 0xb233a0u);
    /* 0060ed0f: mov eax, dword ptr [0x9c44c0] */ r_eax = R32((u32)(0x9c44c0u));
    /* 0060ed14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ed15: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060ed18: call dword ptr [0xb234ec] */ { u32 t = R32((u32)(0xb234ecu)); r_esp -= 4; W32(r_esp, 0x60ed1eu); call_ind(t); }
    /* 0060ed1e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ed21: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060ed24: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060ed27: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060ed2a: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060ed30: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060ed36: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ed39: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060ed3f: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060ed45: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060ed4b: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060ed51: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060ed57: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060ed5d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ed60: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060ed66: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ed69: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060ed6f: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060ed72: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060ed78: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060ed7b: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060ed81: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060ed84: mov eax, dword ptr [0xa8e930] */ r_eax = R32((u32)(0xa8e930u));
    /* 0060ed89: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060ed8b: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060ed8e: mov eax, dword ptr [0xa8e92c] */ r_eax = R32((u32)(0xa8e92cu));
    /* 0060ed93: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060ed96: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60ed9bu); f_00606bc8();
    /* 0060ed9b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ed9e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060eda1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060eda4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060eda7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060edaa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060edb1: mov esp, ebp */ r_esp = r_ebp;
    /* 0060edb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060edb4: ret 8 */ FN_RET(0x0060ecc4); r_esp += 12; return;
}

void f_0060edb8(void) /* sub_60EDB8 */
{
    FN_ENTER(0x0060edb8);
    /* 0060edb8: push 0x92f95c */ { u32 v = 0x92f95cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060edbd: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x60edc2u); f_005b938c();
    /* 0060edc2: push 0x92f970 */ { u32 v = 0x92f970u; r_esp -= 4; W32(r_esp, v); }
    /* 0060edc7: mov dword ptr [0xa8e930], eax */ W32((u32)(0xa8e930u), r_eax);
    /* 0060edcc: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x60edd1u); f_008009dc();
    /* 0060edd1: mov dword ptr [0xa8e92c], eax */ W32((u32)(0xa8e92cu), r_eax);
    /* 0060edd6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060edd9: ret  */ FN_RET(0x0060edb8); r_esp += 4; return;
}

void f_0060eddc(void) /* sub_60EDDC */
{
    FN_ENTER(0x0060eddc);
    /* 0060eddc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060eddd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060eddf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060ede1: call 0x60ee00 */ r_esp -= 4; W32(r_esp, 0x60ede6u); f_0060ee00();
    /* 0060ede6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060edea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060edec: jne 0x60edf2 */ if (!fZ) goto L_0060edf2;
L_0060edee:; BB(0x0060edee);
    /* 0060edee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060edef: ret 4 */ FN_RET(0x0060eddc); r_esp += 8; return;
L_0060edf2:; BB(0x0060edf2);
    /* 0060edf2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060edf3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60edf8u); f_005c2f74();
    /* 0060edf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060edf9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060edfa: ret 4 */ FN_RET(0x0060eddc); r_esp += 8; return;
}

void f_0060ee00(void) /* sub_60EE00 */
{
    FN_ENTER(0x0060ee00);
    /* 0060ee00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee01: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ee03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee05: push 0x8e0554 */ { u32 v = 0x8e0554u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ee10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ee18: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ee1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ee1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060ee21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060ee24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060ee27: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060ee2a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060ee2d: mov dword ptr [ecx], 0xb23840 */ W32((u32)(r_ecx), 0xb23840u);
    /* 0060ee33: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060ee3a: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60ee3fu); f_0060c7e4();
    /* 0060ee3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ee42: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ee49: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ee4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ee4c: ret  */ FN_RET(0x0060ee00); r_esp += 4; return;
}

void f_0060ee50(void) /* sub_60EE50 */
{
    FN_ENTER(0x0060ee50);
    /* 0060ee50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee51: mov eax, 0x34 */ r_eax = 0x34u;
    /* 0060ee56: mov ebx, eax */ r_ebx = r_eax;
L_0060ee58:; BB(0x0060ee58);
    /* 0060ee58: mov ecx, dword ptr [ebx + 0xa8e938] */ r_ecx = R32((u32)(r_ebx+0xa8e938u));
    /* 0060ee5e: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0060ee61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ee63: je 0x60ee78 */ if (fZ) goto L_0060ee78;
L_0060ee65:; BB(0x0060ee65);
    /* 0060ee65: je 0x60ee6e */ if (fZ) goto L_0060ee6e;
L_0060ee67:; BB(0x0060ee67);
    /* 0060ee67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee69: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60ee6eu); f_004066a8();
L_0060ee6e:; BB(0x0060ee6e);
    /* 0060ee6e: mov dword ptr [ebx + 0xa8e93c], 0 */ W32((u32)(r_ebx+0xa8e93cu), 0x0u);
L_0060ee78:; BB(0x0060ee78);
    /* 0060ee78: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060ee7a: jge 0x60ee58 */ if ((fS==fO)) goto L_0060ee58;
L_0060ee7c:; BB(0x0060ee7c);
    /* 0060ee7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060ee7d: ret  */ FN_RET(0x0060ee50); r_esp += 4; return;
}

void f_0060ee80(void)
{
    FN_ENTER(0x0060ee80);
    /* 0060ee80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee81: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ee83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee85: push 0x8e0596 */ { u32 v = 0x8e0596u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ee90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ee91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ee98: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ee9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ee9e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060eea1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060eea4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060eea7: mov eax, dword ptr [0xa8e938] */ r_eax = R32((u32)(0xa8e938u));
    /* 0060eeac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eeae: je 0x60ef5d */ if (fZ) goto L_0060ef5d;
L_0060eeb4:; BB(0x0060eeb4);
    /* 0060eeb4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060eebb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060eebd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60eec2u); f_005caba4();
    /* 0060eec2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060eec3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060eec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060eec8: je 0x60ef56 */ if (fZ) goto L_0060ef56;
L_0060eece:; BB(0x0060eece);
    /* 0060eece: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060eed5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060eedc: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060eee2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060eee5: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60eeeau); f_00787a4c();
    /* 0060eeea: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060eeed: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060eef4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060eef7:; BB(0x0060eef7);
    /* 0060eef7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060eefe: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060ef05: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef0a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60ef0fu); f_005caba4();
    /* 0060ef0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ef10: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060ef13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ef15: je 0x60ef52 */ if (fZ) goto L_0060ef52;
L_0060ef17:; BB(0x0060ef17);
    /* 0060ef17: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060ef1e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060ef25: push dword ptr [0xa8e938] */ { u32 v = R32((u32)(0xa8e938u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ef2b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ef2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ef31: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ef34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef35: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60ef3au); f_0060ef70();
    /* 0060ef3a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ef3d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060ef44:; BB(0x0060ef44);
    /* 0060ef44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ef47: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ef4e: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ef50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ef51: ret  */ FN_RET(0x0060ee80); r_esp += 4; return;
L_0060ef52:; BB(0x0060ef52);
    /* 0060ef52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060ef54: jmp 0x60ef44 */ goto L_0060ef44;
L_0060ef56:; BB(0x0060ef56);
    /* 0060ef56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060ef58: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060ef5b: jmp 0x60eef7 */ goto L_0060eef7;
L_0060ef5d:; BB(0x0060ef5d);
    /* 0060ef5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060ef5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ef62: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ef69: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ef6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ef6c: ret  */ FN_RET(0x0060ee80); r_esp += 4; return;
}

void f_0060ef70(void) /* sub_60EF70 */
{
    FN_ENTER(0x0060ef70);
    /* 0060ef70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef71: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ef73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef75: push 0x8e05b0 */ { u32 v = 0x8e05b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ef80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ef81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ef88: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ef8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ef8e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0060ef91: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0060ef94: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0060ef97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060ef9a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ef9d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0060efa0: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0060efa3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060efa6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0060efa9: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60efaeu); f_0060c858();
    /* 0060efae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060efb5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060efb8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060efbb: mov dword ptr [ecx], 0xb23840 */ W32((u32)(r_ecx), 0xb23840u);
    /* 0060efc1: mov eax, dword ptr [0x9c46a8] */ r_eax = R32((u32)(0x9c46a8u));
    /* 0060efc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060efc7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060efca: call dword ptr [0xb2398c] */ { u32 t = R32((u32)(0xb2398cu)); r_esp -= 4; W32(r_esp, 0x60efd0u); call_ind(t); }
    /* 0060efd0: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060efd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060efd5: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060efd8: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060efdb: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060efde: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060efe4: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060efea: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060efed: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060eff3: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060eff9: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060efff: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060f005: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060f00b: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060f011: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060f014: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060f01a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f01d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060f023: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060f026: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060f02c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060f02f: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060f035: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060f038: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x60f03du); f_005b8610();
    /* 0060f03d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f040: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060f043: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f045: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0060f048: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x60f04du); f_005b8624();
    /* 0060f04d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f050: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060f053: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60f058u); f_00606bc8();
    /* 0060f058: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060f05b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f05e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f061: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060f064: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f067: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f06e: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f070: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f071: ret 0xc */ FN_RET(0x0060ef70); r_esp += 16; return;
}

