#include "protos.h"

void f_0060b0c8(void) /* sub_60B0C8 */
{
    FN_ENTER(0x0060b0c8);
    /* 0060b0c8: push 0x92f63c */ { u32 v = 0x92f63cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b0cd: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x60b0d2u); f_005b938c();
    /* 0060b0d2: push 0x92f650 */ { u32 v = 0x92f650u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b0d7: mov dword ptr [0xa8e830], eax */ W32((u32)(0xa8e830u), r_eax);
    /* 0060b0dc: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x60b0e1u); f_008009dc();
    /* 0060b0e1: mov dword ptr [0xa8e82c], eax */ W32((u32)(0xa8e82cu), r_eax);
    /* 0060b0e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060b0e9: ret  */ FN_RET(0x0060b0c8); r_esp += 4; return;
}

void f_0060b0ec(void) /* sub_60B0EC */
{
    FN_ENTER(0x0060b0ec);
    /* 0060b0ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b0ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060b0ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060b0f1: call 0x60b110 */ r_esp -= 4; W32(r_esp, 0x60b0f6u); f_0060b110();
    /* 0060b0f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060b0fa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b0fc: jne 0x60b102 */ if (!fZ) goto L_0060b102;
L_0060b0fe:; BB(0x0060b0fe);
    /* 0060b0fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060b0ff: ret 4 */ FN_RET(0x0060b0ec); r_esp += 8; return;
L_0060b102:; BB(0x0060b102);
    /* 0060b102: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b103: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60b108u); f_005c2f74();
    /* 0060b108: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b109: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060b10a: ret 4 */ FN_RET(0x0060b0ec); r_esp += 8; return;
}

void f_0060b110(void) /* sub_60B110 */
{
    FN_ENTER(0x0060b110);
    /* 0060b110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b111: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b113: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b115: push 0x8df93c */ { u32 v = 0x8df93cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b11a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b121: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b128: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b12b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b12e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060b131: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060b134: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060b137: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060b13a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b13d: mov dword ptr [ecx], 0xb206c0 */ W32((u32)(r_ecx), 0xb206c0u);
    /* 0060b143: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060b14a: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60b14fu); f_0060c7e4();
    /* 0060b14f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b152: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b159: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b15b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b15c: ret  */ FN_RET(0x0060b110); r_esp += 4; return;
}

void f_0060b160(void)
{
    FN_ENTER(0x0060b160);
    /* 0060b160: mov ecx, dword ptr [0xa8e838] */ r_ecx = R32((u32)(0xa8e838u));
    /* 0060b166: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b168: je 0x60b17d */ if (fZ) goto L_0060b17d;
L_0060b16a:; BB(0x0060b16a);
    /* 0060b16a: je 0x60b173 */ if (fZ) goto L_0060b173;
L_0060b16c:; BB(0x0060b16c);
    /* 0060b16c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b16e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60b173u); f_004066a8();
L_0060b173:; BB(0x0060b173);
    /* 0060b173: mov dword ptr [0xa8e838], 0 */ W32((u32)(0xa8e838u), 0x0u);
L_0060b17d:; BB(0x0060b17d);
    /* 0060b17d: ret  */ FN_RET(0x0060b160); r_esp += 4; return;
}

void f_0060b180(void)
{
    FN_ENTER(0x0060b180);
    /* 0060b180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b181: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b183: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b185: push 0x8df97e */ { u32 v = 0x8df97eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b18a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b190: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b191: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b198: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b19b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b19e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060b1a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060b1a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060b1a7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b1a9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060b1b0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60b1b5u); f_005caba4();
    /* 0060b1b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b1b6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060b1b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b1bb: je 0x60b243 */ if (fZ) goto L_0060b243;
L_0060b1c1:; BB(0x0060b1c1);
    /* 0060b1c1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060b1c8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060b1cf: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b1d5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060b1d8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60b1ddu); f_00787a4c();
    /* 0060b1dd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060b1e0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060b1e7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060b1ea:; BB(0x0060b1ea);
    /* 0060b1ea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060b1f1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060b1f8: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b1fd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60b202u); f_005caba4();
    /* 0060b202: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b203: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060b206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b208: je 0x60b23f */ if (fZ) goto L_0060b23f;
L_0060b20a:; BB(0x0060b20a);
    /* 0060b20a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060b211: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060b218: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b21b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060b21e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b221: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b222: call 0x60b24c */ r_esp -= 4; W32(r_esp, 0x60b227u); f_0060b24c();
    /* 0060b227: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b22a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060b231:; BB(0x0060b231);
    /* 0060b231: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b234: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b23b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b23d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b23e: ret  */ FN_RET(0x0060b180); r_esp += 4; return;
L_0060b23f:; BB(0x0060b23f);
    /* 0060b23f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b241: jmp 0x60b231 */ goto L_0060b231;
L_0060b243:; BB(0x0060b243);
    /* 0060b243: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060b245: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060b248: jmp 0x60b1ea */ goto L_0060b1ea;
}

void f_0060b24c(void) /* sub_60B24C */
{
    FN_ENTER(0x0060b24c);
    /* 0060b24c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b24d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b24f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b251: push 0x8df998 */ { u32 v = 0x8df998u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b256: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b25c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b25d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b264: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b267: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b26a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060b26d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060b270: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060b273: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060b276: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b279: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060b27c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060b27f: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60b284u); f_0060c858();
    /* 0060b284: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060b28b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b28e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060b291: mov dword ptr [ecx], 0xb206c0 */ W32((u32)(r_ecx), 0xb206c0u);
    /* 0060b297: mov eax, dword ptr [0x9c4210] */ r_eax = R32((u32)(0x9c4210u));
    /* 0060b29c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b29d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060b2a0: call dword ptr [0xb2080c] */ { u32 t = R32((u32)(0xb2080cu)); r_esp -= 4; W32(r_esp, 0x60b2a6u); call_ind(t); }
    /* 0060b2a6: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b2a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b2ab: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060b2ae: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060b2b1: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060b2b4: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060b2ba: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060b2c0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b2c3: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060b2c9: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060b2cf: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060b2d5: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060b2db: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060b2e1: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060b2e7: mov ecx, dword ptr [0xa8e838] */ r_ecx = R32((u32)(0xa8e838u));
    /* 0060b2ed: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060b2f3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b2f6: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060b2fc: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060b2ff: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060b305: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060b308: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060b30e: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060b311: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x60b316u); f_005b8610();
    /* 0060b316: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b319: mov ecx, dword ptr [0xa8e838] */ r_ecx = R32((u32)(0xa8e838u));
    /* 0060b31f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b321: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0060b324: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x60b329u); f_005b8624();
    /* 0060b329: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b32c: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060b32f: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60b334u); f_00606bc8();
    /* 0060b334: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b337: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b33a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060b33d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060b340: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b343: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b34a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b34c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b34d: ret 8 */ FN_RET(0x0060b24c); r_esp += 12; return;
}

void f_0060b350(void)
{
    FN_ENTER(0x0060b350);
    /* 0060b350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b351: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b353: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b355: push 0x8df9c0 */ { u32 v = 0x8df9c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b35a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b361: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b368: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b36b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b36e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060b371: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060b374: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060b377: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b37c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060b383: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60b388u); f_008581c5();
    /* 0060b388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b389: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060b38c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b38e: je 0x60b3cf */ if (fZ) goto L_0060b3cf;
L_0060b390:; BB(0x0060b390);
    /* 0060b390: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060b397: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060b39e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b3a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060b3a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b3a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b3a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b3a6: push 0x9c4200 */ { u32 v = 0x9c4200u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b3ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b3ad: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60b3b2u); f_005b7a84();
    /* 0060b3b2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b3b5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060b3bc:; BB(0x0060b3bc);
    /* 0060b3bc: mov dword ptr [0xa8e838], eax */ W32((u32)(0xa8e838u), r_eax);
    /* 0060b3c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b3c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b3cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b3cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b3ce: ret  */ FN_RET(0x0060b350); r_esp += 4; return;
L_0060b3cf:; BB(0x0060b3cf);
    /* 0060b3cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b3d1: jmp 0x60b3bc */ goto L_0060b3bc;
}

void f_0060b3d4(void) /* sub_60B3D4 */
{
    FN_ENTER(0x0060b3d4);
    /* 0060b3d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b3d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060b3d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060b3d9: call 0x60b3f8 */ r_esp -= 4; W32(r_esp, 0x60b3deu); f_0060b3f8();
    /* 0060b3de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060b3e2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b3e4: jne 0x60b3ea */ if (!fZ) goto L_0060b3ea;
L_0060b3e6:; BB(0x0060b3e6);
    /* 0060b3e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060b3e7: ret 4 */ FN_RET(0x0060b3d4); r_esp += 8; return;
L_0060b3ea:; BB(0x0060b3ea);
    /* 0060b3ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b3eb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60b3f0u); f_005c2f74();
    /* 0060b3f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b3f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060b3f2: ret 4 */ FN_RET(0x0060b3d4); r_esp += 8; return;
}

void f_0060b3f8(void) /* sub_60B3F8 */
{
    FN_ENTER(0x0060b3f8);
    /* 0060b3f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b3f9: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b3fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b3fd: push 0x8df9dc */ { u32 v = 0x8df9dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b402: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b409: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b410: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b413: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b416: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060b419: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060b41c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060b41f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060b422: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b425: mov dword ptr [ecx], 0xb20900 */ W32((u32)(r_ecx), 0xb20900u);
    /* 0060b42b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060b432: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60b437u); f_0060c7e4();
    /* 0060b437: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b43a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b441: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b443: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b444: ret  */ FN_RET(0x0060b3f8); r_esp += 4; return;
}

void f_0060b448(void)
{
    FN_ENTER(0x0060b448);
    /* 0060b448: mov ecx, dword ptr [0xa8e844] */ r_ecx = R32((u32)(0xa8e844u));
    /* 0060b44e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b450: je 0x60b465 */ if (fZ) goto L_0060b465;
L_0060b452:; BB(0x0060b452);
    /* 0060b452: je 0x60b45b */ if (fZ) goto L_0060b45b;
L_0060b454:; BB(0x0060b454);
    /* 0060b454: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b456: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60b45bu); f_004066a8();
L_0060b45b:; BB(0x0060b45b);
    /* 0060b45b: mov dword ptr [0xa8e844], 0 */ W32((u32)(0xa8e844u), 0x0u);
L_0060b465:; BB(0x0060b465);
    /* 0060b465: ret  */ FN_RET(0x0060b448); r_esp += 4; return;
}

void f_0060b468(void)
{
    FN_ENTER(0x0060b468);
    /* 0060b468: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b469: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b46b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b46d: push 0x8dfa1e */ { u32 v = 0x8dfa1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b472: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b479: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b480: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b483: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b486: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060b489: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060b48c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060b48f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b491: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060b498: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60b49du); f_005caba4();
    /* 0060b49d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b49e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060b4a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b4a3: je 0x60b52b */ if (fZ) goto L_0060b52b;
L_0060b4a9:; BB(0x0060b4a9);
    /* 0060b4a9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060b4b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060b4b7: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b4bd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060b4c0: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60b4c5u); f_00787a4c();
    /* 0060b4c5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060b4c8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060b4cf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060b4d2:; BB(0x0060b4d2);
    /* 0060b4d2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060b4d9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060b4e0: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b4e5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60b4eau); f_005caba4();
    /* 0060b4ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b4eb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060b4ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b4f0: je 0x60b527 */ if (fZ) goto L_0060b527;
L_0060b4f2:; BB(0x0060b4f2);
    /* 0060b4f2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060b4f9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060b500: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b503: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060b506: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b509: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b50a: call 0x60b534 */ r_esp -= 4; W32(r_esp, 0x60b50fu); f_0060b534();
    /* 0060b50f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b512: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060b519:; BB(0x0060b519);
    /* 0060b519: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b51c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b523: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b526: ret  */ FN_RET(0x0060b468); r_esp += 4; return;
L_0060b527:; BB(0x0060b527);
    /* 0060b527: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b529: jmp 0x60b519 */ goto L_0060b519;
L_0060b52b:; BB(0x0060b52b);
    /* 0060b52b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060b52d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060b530: jmp 0x60b4d2 */ goto L_0060b4d2;
}

void f_0060b534(void) /* sub_60B534 */
{
    FN_ENTER(0x0060b534);
    /* 0060b534: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b535: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b537: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b539: push 0x8dfa38 */ { u32 v = 0x8dfa38u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b53e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b544: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b545: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b54c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b54f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b552: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060b555: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060b558: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060b55b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060b55e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b561: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060b564: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060b567: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60b56cu); f_0060c858();
    /* 0060b56c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060b573: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b576: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060b579: mov dword ptr [ecx], 0xb20900 */ W32((u32)(r_ecx), 0xb20900u);
    /* 0060b57f: mov eax, dword ptr [0x9c422c] */ r_eax = R32((u32)(0x9c422cu));
    /* 0060b584: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b585: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060b588: call dword ptr [0xb20a4c] */ { u32 t = R32((u32)(0xb20a4cu)); r_esp -= 4; W32(r_esp, 0x60b58eu); call_ind(t); }
    /* 0060b58e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b591: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b593: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060b596: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060b599: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060b59c: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060b5a2: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060b5a8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b5ab: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060b5b1: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060b5b7: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060b5bd: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060b5c3: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060b5c9: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060b5cf: mov ecx, dword ptr [0xa8e844] */ r_ecx = R32((u32)(0xa8e844u));
    /* 0060b5d5: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060b5db: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b5de: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060b5e4: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060b5e7: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060b5ed: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060b5f0: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060b5f6: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060b5f9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x60b5feu); f_005b8610();
    /* 0060b5fe: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b601: mov ecx, dword ptr [0xa8e844] */ r_ecx = R32((u32)(0xa8e844u));
    /* 0060b607: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b609: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0060b60c: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x60b611u); f_005b8624();
    /* 0060b611: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b614: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060b617: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60b61cu); f_00606bc8();
    /* 0060b61c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b61f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b622: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060b625: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060b628: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b62b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b632: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b634: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b635: ret 8 */ FN_RET(0x0060b534); r_esp += 12; return;
}

void f_0060b638(void)
{
    FN_ENTER(0x0060b638);
    /* 0060b638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b639: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b63b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b63d: push 0x8dfa60 */ { u32 v = 0x8dfa60u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b642: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b649: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b650: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b653: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b656: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060b659: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060b65c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060b65f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b664: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060b66b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60b670u); f_008581c5();
    /* 0060b670: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b671: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060b674: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b676: je 0x60b6b7 */ if (fZ) goto L_0060b6b7;
L_0060b678:; BB(0x0060b678);
    /* 0060b678: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060b67f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060b686: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b689: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060b68b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b68c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b68d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b68e: push 0x9c421c */ { u32 v = 0x9c421cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b693: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b695: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60b69au); f_005b7a84();
    /* 0060b69a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b69d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060b6a4:; BB(0x0060b6a4);
    /* 0060b6a4: mov dword ptr [0xa8e844], eax */ W32((u32)(0xa8e844u), r_eax);
    /* 0060b6a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b6ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b6b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b6b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b6b6: ret  */ FN_RET(0x0060b638); r_esp += 4; return;
L_0060b6b7:; BB(0x0060b6b7);
    /* 0060b6b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b6b9: jmp 0x60b6a4 */ goto L_0060b6a4;
}

void f_0060b6bc(void) /* sub_60B6BC */
{
    FN_ENTER(0x0060b6bc);
    /* 0060b6bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b6bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060b6bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060b6c1: call 0x60b6e0 */ r_esp -= 4; W32(r_esp, 0x60b6c6u); f_0060b6e0();
    /* 0060b6c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060b6ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b6cc: jne 0x60b6d2 */ if (!fZ) goto L_0060b6d2;
L_0060b6ce:; BB(0x0060b6ce);
    /* 0060b6ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060b6cf: ret 4 */ FN_RET(0x0060b6bc); r_esp += 8; return;
L_0060b6d2:; BB(0x0060b6d2);
    /* 0060b6d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b6d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60b6d8u); f_005c2f74();
    /* 0060b6d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b6d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060b6da: ret 4 */ FN_RET(0x0060b6bc); r_esp += 8; return;
}

void f_0060b6e0(void) /* sub_60B6E0 */
{
    FN_ENTER(0x0060b6e0);
    /* 0060b6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b6e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b6e5: push 0x8dfa7c */ { u32 v = 0x8dfa7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b6ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b6f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b6f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b6f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b6fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b6fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060b701: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060b704: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060b707: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060b70a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b70d: mov dword ptr [ecx], 0xb20b00 */ W32((u32)(r_ecx), 0xb20b00u);
    /* 0060b713: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060b71a: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60b71fu); f_0060c7e4();
    /* 0060b71f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b722: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b729: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b72b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b72c: ret  */ FN_RET(0x0060b6e0); r_esp += 4; return;
}

void f_0060b730(void) /* sub_60B730 */
{
    FN_ENTER(0x0060b730);
    /* 0060b730: mov ecx, dword ptr [0xa8e850] */ r_ecx = R32((u32)(0xa8e850u));
    /* 0060b736: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b738: je 0x60b755 */ if (fZ) goto L_0060b755;
L_0060b73a:; BB(0x0060b73a);
    /* 0060b73a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60b73fu); f_00829de0();
    /* 0060b73f: push dword ptr [0xa8e850] */ { u32 v = R32((u32)(0xa8e850u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b745: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x60b74au); f_0082e960();
    /* 0060b74a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b74b: mov dword ptr [0xa8e850], 0 */ W32((u32)(0xa8e850u), 0x0u);
L_0060b755:; BB(0x0060b755);
    /* 0060b755: mov eax, dword ptr [0xa8e854] */ r_eax = R32((u32)(0xa8e854u));
    /* 0060b75a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b75c: je 0x60b76f */ if (fZ) goto L_0060b76f;
L_0060b75e:; BB(0x0060b75e);
    /* 0060b75e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b75f: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x60b764u); f_005b9bac();
    /* 0060b764: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b765: mov dword ptr [0xa8e854], 0 */ W32((u32)(0xa8e854u), 0x0u);
L_0060b76f:; BB(0x0060b76f);
    /* 0060b76f: ret  */ FN_RET(0x0060b730); r_esp += 4; return;
}

void f_0060b770(void)
{
    FN_ENTER(0x0060b770);
    /* 0060b770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b771: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b773: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b775: push 0x8dfabe */ { u32 v = 0x8dfabeu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b77a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b781: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b788: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b78b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b78e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060b791: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060b794: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060b797: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b799: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060b7a0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60b7a5u); f_005caba4();
    /* 0060b7a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b7a6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060b7a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b7ab: je 0x60b833 */ if (fZ) goto L_0060b833;
L_0060b7b1:; BB(0x0060b7b1);
    /* 0060b7b1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060b7b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060b7bf: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b7c5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060b7c8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60b7cdu); f_00787a4c();
    /* 0060b7cd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060b7d0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060b7d7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060b7da:; BB(0x0060b7da);
    /* 0060b7da: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060b7e1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060b7e8: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b7ed: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60b7f2u); f_005caba4();
    /* 0060b7f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b7f3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060b7f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b7f8: je 0x60b82f */ if (fZ) goto L_0060b82f;
L_0060b7fa:; BB(0x0060b7fa);
    /* 0060b7fa: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060b801: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060b808: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b80b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060b80e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b811: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b812: call 0x60b83c */ r_esp -= 4; W32(r_esp, 0x60b817u); f_0060b83c();
    /* 0060b817: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b81a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060b821:; BB(0x0060b821);
    /* 0060b821: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b824: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b82b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b82d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b82e: ret  */ FN_RET(0x0060b770); r_esp += 4; return;
L_0060b82f:; BB(0x0060b82f);
    /* 0060b82f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b831: jmp 0x60b821 */ goto L_0060b821;
L_0060b833:; BB(0x0060b833);
    /* 0060b833: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060b835: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060b838: jmp 0x60b7da */ goto L_0060b7da;
}

void f_0060b83c(void) /* sub_60B83C */
{
    FN_ENTER(0x0060b83c);
    /* 0060b83c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b83d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b841: push 0x8dfad8 */ { u32 v = 0x8dfad8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b846: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b84c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b84d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b854: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b857: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b85a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060b85d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060b860: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060b863: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060b866: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b869: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060b86c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060b86f: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60b874u); f_0060c858();
    /* 0060b874: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060b87b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b87e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060b881: mov dword ptr [ecx], 0xb20b00 */ W32((u32)(r_ecx), 0xb20b00u);
    /* 0060b887: mov eax, dword ptr [0x9c4230] */ r_eax = R32((u32)(0x9c4230u));
    /* 0060b88c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b88d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060b890: call dword ptr [0xb20c4c] */ { u32 t = R32((u32)(0xb20c4cu)); r_esp -= 4; W32(r_esp, 0x60b896u); call_ind(t); }
    /* 0060b896: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b899: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060b89c: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060b89f: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060b8a2: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060b8a8: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060b8ae: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b8b1: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060b8b7: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060b8bd: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060b8c3: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060b8c9: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060b8cf: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060b8d5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b8d8: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060b8de: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b8e1: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060b8e7: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060b8ea: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060b8f0: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060b8f3: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060b8f9: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060b8fc: mov eax, dword ptr [0xa8e854] */ r_eax = R32((u32)(0xa8e854u));
    /* 0060b901: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060b903: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060b906: mov eax, dword ptr [0xa8e850] */ r_eax = R32((u32)(0xa8e850u));
    /* 0060b90b: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060b90e: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60b913u); f_00606bc8();
    /* 0060b913: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060b916: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b919: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060b91c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060b91f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b922: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b929: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b92b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b92c: ret 8 */ FN_RET(0x0060b83c); r_esp += 12; return;
}

void f_0060b930(void) /* sub_60B930 */
{
    FN_ENTER(0x0060b930);
    /* 0060b930: push 0x92f6b0 */ { u32 v = 0x92f6b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b935: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x60b93au); f_005b938c();
    /* 0060b93a: push 0x92f6c4 */ { u32 v = 0x92f6c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b93f: mov dword ptr [0xa8e854], eax */ W32((u32)(0xa8e854u), r_eax);
    /* 0060b944: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x60b949u); f_008009dc();
    /* 0060b949: mov dword ptr [0xa8e850], eax */ W32((u32)(0xa8e850u), r_eax);
    /* 0060b94e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060b951: ret  */ FN_RET(0x0060b930); r_esp += 4; return;
}

void f_0060b954(void) /* sub_60B954 */
{
    FN_ENTER(0x0060b954);
    /* 0060b954: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b955: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060b957: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060b959: call 0x60b978 */ r_esp -= 4; W32(r_esp, 0x60b95eu); f_0060b978();
    /* 0060b95e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060b962: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b964: jne 0x60b96a */ if (!fZ) goto L_0060b96a;
L_0060b966:; BB(0x0060b966);
    /* 0060b966: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060b967: ret 4 */ FN_RET(0x0060b954); r_esp += 8; return;
L_0060b96a:; BB(0x0060b96a);
    /* 0060b96a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b96b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60b970u); f_005c2f74();
    /* 0060b970: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b971: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060b972: ret 4 */ FN_RET(0x0060b954); r_esp += 8; return;
}

void f_0060b978(void) /* sub_60B978 */
{
    FN_ENTER(0x0060b978);
    /* 0060b978: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b979: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b97b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b97d: push 0x8dfaf4 */ { u32 v = 0x8dfaf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b982: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060b988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b989: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060b990: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060b993: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060b996: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060b999: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060b99c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060b99f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060b9a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060b9a5: mov dword ptr [ecx], 0xb20d00 */ W32((u32)(r_ecx), 0xb20d00u);
    /* 0060b9ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060b9b2: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60b9b7u); f_0060c7e4();
    /* 0060b9b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060b9ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060b9c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b9c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b9c4: ret  */ FN_RET(0x0060b978); r_esp += 4; return;
}

void f_0060b9c8(void) /* sub_60B9C8 */
{
    FN_ENTER(0x0060b9c8);
    /* 0060b9c8: mov ecx, dword ptr [0xa8e85c] */ r_ecx = R32((u32)(0xa8e85cu));
    /* 0060b9ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b9d0: je 0x60b9ed */ if (fZ) goto L_0060b9ed;
L_0060b9d2:; BB(0x0060b9d2);
    /* 0060b9d2: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60b9d7u); f_00829de0();
    /* 0060b9d7: push dword ptr [0xa8e85c] */ { u32 v = R32((u32)(0xa8e85cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060b9dd: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x60b9e2u); f_0082e960();
    /* 0060b9e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b9e3: mov dword ptr [0xa8e85c], 0 */ W32((u32)(0xa8e85cu), 0x0u);
L_0060b9ed:; BB(0x0060b9ed);
    /* 0060b9ed: mov eax, dword ptr [0xa8e860] */ r_eax = R32((u32)(0xa8e860u));
    /* 0060b9f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060b9f4: je 0x60ba07 */ if (fZ) goto L_0060ba07;
L_0060b9f6:; BB(0x0060b9f6);
    /* 0060b9f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b9f7: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x60b9fcu); f_005b9bac();
    /* 0060b9fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060b9fd: mov dword ptr [0xa8e860], 0 */ W32((u32)(0xa8e860u), 0x0u);
L_0060ba07:; BB(0x0060ba07);
    /* 0060ba07: ret  */ FN_RET(0x0060b9c8); r_esp += 4; return;
}

void f_0060ba08(void)
{
    FN_ENTER(0x0060ba08);
    /* 0060ba08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba09: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ba0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba0d: push 0x8dfb36 */ { u32 v = 0x8dfb36u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ba18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ba20: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ba23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ba26: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060ba29: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060ba2c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060ba2f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba31: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060ba38: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60ba3du); f_005caba4();
    /* 0060ba3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ba3e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060ba41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ba43: je 0x60bacb */ if (fZ) goto L_0060bacb;
L_0060ba49:; BB(0x0060ba49);
    /* 0060ba49: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060ba50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060ba57: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ba5d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060ba60: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60ba65u); f_00787a4c();
    /* 0060ba65: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060ba68: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060ba6f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060ba72:; BB(0x0060ba72);
    /* 0060ba72: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060ba79: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060ba80: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ba85: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60ba8au); f_005caba4();
    /* 0060ba8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ba8b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060ba8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ba90: je 0x60bac7 */ if (fZ) goto L_0060bac7;
L_0060ba92:; BB(0x0060ba92);
    /* 0060ba92: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060ba99: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060baa0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060baa3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060baa6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060baa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060baaa: call 0x60bad4 */ r_esp -= 4; W32(r_esp, 0x60baafu); f_0060bad4();
    /* 0060baaf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bab2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060bab9:; BB(0x0060bab9);
    /* 0060bab9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060babc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060bac3: mov esp, ebp */ r_esp = r_ebp;
    /* 0060bac5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060bac6: ret  */ FN_RET(0x0060ba08); r_esp += 4; return;
L_0060bac7:; BB(0x0060bac7);
    /* 0060bac7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060bac9: jmp 0x60bab9 */ goto L_0060bab9;
L_0060bacb:; BB(0x0060bacb);
    /* 0060bacb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060bacd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060bad0: jmp 0x60ba72 */ goto L_0060ba72;
}

void f_0060bad4(void) /* sub_60BAD4 */
{
    FN_ENTER(0x0060bad4);
    /* 0060bad4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060bad5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060bad7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bad9: push 0x8dfb50 */ { u32 v = 0x8dfb50u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bade: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060bae4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bae5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060baec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060baef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060baf2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060baf5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060baf8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060bafb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060bafe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060bb01: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060bb04: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060bb07: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60bb0cu); f_0060c858();
    /* 0060bb0c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060bb13: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bb16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060bb19: mov dword ptr [ecx], 0xb20d00 */ W32((u32)(r_ecx), 0xb20d00u);
    /* 0060bb1f: mov eax, dword ptr [0x9c4234] */ r_eax = R32((u32)(0x9c4234u));
    /* 0060bb24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bb25: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060bb28: call dword ptr [0xb20e4c] */ { u32 t = R32((u32)(0xb20e4cu)); r_esp -= 4; W32(r_esp, 0x60bb2eu); call_ind(t); }
    /* 0060bb2e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bb31: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060bb34: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060bb37: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060bb3a: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060bb40: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060bb46: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bb49: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060bb4f: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060bb55: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060bb5b: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060bb61: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060bb67: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060bb6d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bb70: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060bb76: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bb79: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060bb7f: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060bb82: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060bb88: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060bb8b: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060bb91: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060bb94: mov eax, dword ptr [0xa8e860] */ r_eax = R32((u32)(0xa8e860u));
    /* 0060bb99: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060bb9b: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060bb9e: mov eax, dword ptr [0xa8e85c] */ r_eax = R32((u32)(0xa8e85cu));
    /* 0060bba3: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060bba6: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60bbabu); f_00606bc8();
    /* 0060bbab: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bbae: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bbb1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060bbb4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060bbb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060bbba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060bbc1: mov esp, ebp */ r_esp = r_ebp;
    /* 0060bbc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060bbc4: ret 8 */ FN_RET(0x0060bad4); r_esp += 12; return;
}

void f_0060bb57(void)
{
    FN_ENTER(0x0060bb57);
    /* 0060bb57: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;   }
    /* 0060bb59: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0060bb5b: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060bb61: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060bb67: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060bb6d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bb70: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060bb76: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bb79: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060bb7f: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060bb82: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060bb88: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060bb8b: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060bb91: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060bb94: mov eax, dword ptr [0xa8e860] */ r_eax = R32((u32)(0xa8e860u));
    /* 0060bb99: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060bb9b: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060bb9e: mov eax, dword ptr [0xa8e85c] */ r_eax = R32((u32)(0xa8e85cu));
    /* 0060bba3: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060bba6: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60bbabu); f_00606bc8();
    /* 0060bbab: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bbae: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bbb1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060bbb4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060bbb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060bbba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060bbc1: mov esp, ebp */ r_esp = r_ebp;
    /* 0060bbc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060bbc4: ret 8 */ FN_RET(0x0060bb57); r_esp += 12; return;
}

void f_0060bbc8(void) /* sub_60BBC8 */
{
    FN_ENTER(0x0060bbc8);
    /* 0060bbc8: push 0x92f6d8 */ { u32 v = 0x92f6d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bbcd: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x60bbd2u); f_005b938c();
    /* 0060bbd2: push 0x92f6ec */ { u32 v = 0x92f6ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bbd7: mov dword ptr [0xa8e860], eax */ W32((u32)(0xa8e860u), r_eax);
    /* 0060bbdc: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x60bbe1u); f_008009dc();
    /* 0060bbe1: mov dword ptr [0xa8e85c], eax */ W32((u32)(0xa8e85cu), r_eax);
    /* 0060bbe6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060bbe9: ret  */ FN_RET(0x0060bbc8); r_esp += 4; return;
}

void f_0060bbec(void) /* sub_60BBEC */
{
    FN_ENTER(0x0060bbec);
    /* 0060bbec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bbed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060bbef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060bbf1: call 0x60bc10 */ r_esp -= 4; W32(r_esp, 0x60bbf6u); f_0060bc10();
    /* 0060bbf6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060bbfa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060bbfc: jne 0x60bc02 */ if (!fZ) goto L_0060bc02;
L_0060bbfe:; BB(0x0060bbfe);
    /* 0060bbfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060bbff: ret 4 */ FN_RET(0x0060bbec); r_esp += 8; return;
L_0060bc02:; BB(0x0060bc02);
    /* 0060bc02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc03: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60bc08u); f_005c2f74();
    /* 0060bc08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060bc09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060bc0a: ret 4 */ FN_RET(0x0060bbec); r_esp += 8; return;
}

void f_0060bc10(void) /* sub_60BC10 */
{
    FN_ENTER(0x0060bc10);
    /* 0060bc10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc11: mov ebp, esp */ r_ebp = r_esp;
    /* 0060bc13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc15: push 0x8dfb6c */ { u32 v = 0x8dfb6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060bc20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060bc28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060bc2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060bc2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060bc31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060bc34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060bc37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060bc3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bc3d: mov dword ptr [ecx], 0xb20f40 */ W32((u32)(r_ecx), 0xb20f40u);
    /* 0060bc43: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060bc4a: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60bc4fu); f_0060c7e4();
    /* 0060bc4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060bc52: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060bc59: mov esp, ebp */ r_esp = r_ebp;
    /* 0060bc5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060bc5c: ret  */ FN_RET(0x0060bc10); r_esp += 4; return;
}

void f_0060bc60(void) /* sub_60BC60 */
{
    FN_ENTER(0x0060bc60);
    /* 0060bc60: mov ecx, dword ptr [0xa8e868] */ r_ecx = R32((u32)(0xa8e868u));
    /* 0060bc66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060bc68: je 0x60bc7d */ if (fZ) goto L_0060bc7d;
L_0060bc6a:; BB(0x0060bc6a);
    /* 0060bc6a: je 0x60bc73 */ if (fZ) goto L_0060bc73;
L_0060bc6c:; BB(0x0060bc6c);
    /* 0060bc6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc6e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60bc73u); f_004066a8();
L_0060bc73:; BB(0x0060bc73);
    /* 0060bc73: mov dword ptr [0xa8e868], 0 */ W32((u32)(0xa8e868u), 0x0u);
L_0060bc7d:; BB(0x0060bc7d);
    /* 0060bc7d: ret  */ FN_RET(0x0060bc60); r_esp += 4; return;
}

void f_0060bc80(void)
{
    FN_ENTER(0x0060bc80);
    /* 0060bc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc81: mov ebp, esp */ r_ebp = r_esp;
    /* 0060bc83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc85: push 0x8dfbae */ { u32 v = 0x8dfbaeu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060bc90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bc91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060bc98: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060bc9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060bc9e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060bca1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060bca4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060bca7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bca9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060bcb0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60bcb5u); f_005caba4();
    /* 0060bcb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060bcb6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060bcb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060bcbb: je 0x60bd43 */ if (fZ) goto L_0060bd43;
L_0060bcc1:; BB(0x0060bcc1);
    /* 0060bcc1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060bcc8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060bccf: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060bcd5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060bcd8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60bcddu); f_00787a4c();
    /* 0060bcdd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060bce0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060bce7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060bcea:; BB(0x0060bcea);
    /* 0060bcea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060bcf1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060bcf8: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bcfd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60bd02u); f_005caba4();
    /* 0060bd02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060bd03: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060bd06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060bd08: je 0x60bd3f */ if (fZ) goto L_0060bd3f;
L_0060bd0a:; BB(0x0060bd0a);
    /* 0060bd0a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060bd11: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060bd18: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060bd1b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060bd1e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bd21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bd22: call 0x60bd4c */ r_esp -= 4; W32(r_esp, 0x60bd27u); f_0060bd4c();
    /* 0060bd27: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bd2a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060bd31:; BB(0x0060bd31);
    /* 0060bd31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060bd34: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060bd3b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060bd3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060bd3e: ret  */ FN_RET(0x0060bc80); r_esp += 4; return;
L_0060bd3f:; BB(0x0060bd3f);
    /* 0060bd3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060bd41: jmp 0x60bd31 */ goto L_0060bd31;
L_0060bd43:; BB(0x0060bd43);
    /* 0060bd43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060bd45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060bd48: jmp 0x60bcea */ goto L_0060bcea;
}

void f_0060bd4c(void) /* sub_60BD4C */
{
    FN_ENTER(0x0060bd4c);
    /* 0060bd4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060bd4d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060bd4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bd51: push 0x8dfbc8 */ { u32 v = 0x8dfbc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bd56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060bd5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bd5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060bd64: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060bd67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060bd6a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060bd6d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060bd70: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060bd73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060bd76: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060bd79: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060bd7c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060bd7f: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60bd84u); f_0060c858();
    /* 0060bd84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060bd8b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bd8e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060bd91: mov dword ptr [ecx], 0xb20f40 */ W32((u32)(r_ecx), 0xb20f40u);
    /* 0060bd97: mov eax, dword ptr [0x9c4250] */ r_eax = R32((u32)(0x9c4250u));
    /* 0060bd9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bd9d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060bda0: call dword ptr [0xb2108c] */ { u32 t = R32((u32)(0xb2108cu)); r_esp -= 4; W32(r_esp, 0x60bda6u); call_ind(t); }
    /* 0060bda6: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bda9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bdab: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060bdae: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060bdb1: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060bdb4: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060bdba: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060bdc0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bdc3: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060bdc9: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060bdcf: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060bdd5: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060bddb: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060bde1: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060bde7: mov ecx, dword ptr [0xa8e868] */ r_ecx = R32((u32)(0xa8e868u));
    /* 0060bded: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060bdf3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060bdf6: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060bdfc: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060bdff: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060be05: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060be08: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060be0e: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060be11: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x60be16u); f_005b8610();
    /* 0060be16: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060be19: mov ecx, dword ptr [0xa8e868] */ r_ecx = R32((u32)(0xa8e868u));
    /* 0060be1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060be21: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0060be24: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x60be29u); f_005b8624();
    /* 0060be29: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060be2c: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060be2f: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60be34u); f_00606bc8();
    /* 0060be34: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060be37: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060be3a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060be3d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060be40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060be43: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060be4a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060be4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060be4d: ret 8 */ FN_RET(0x0060bd4c); r_esp += 12; return;
}

void f_0060be50(void) /* sub_60BE50 */
{
    FN_ENTER(0x0060be50);
    /* 0060be50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060be51: mov ebp, esp */ r_ebp = r_esp;
    /* 0060be53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060be55: push 0x8dfbf0 */ { u32 v = 0x8dfbf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060be5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060be60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060be61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060be68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060be6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060be6e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060be71: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060be74: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060be77: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060be7c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060be83: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60be88u); f_008581c5();
    /* 0060be88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060be89: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060be8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060be8e: je 0x60becf */ if (fZ) goto L_0060becf;
L_0060be90:; BB(0x0060be90);
    /* 0060be90: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060be97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060be9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bea1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060bea3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bea4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bea5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bea6: push 0x9c4240 */ { u32 v = 0x9c4240u; r_esp -= 4; W32(r_esp, v); }
    /* 0060beab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bead: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60beb2u); f_005b7a84();
    /* 0060beb2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060beb5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060bebc:; BB(0x0060bebc);
    /* 0060bebc: mov dword ptr [0xa8e868], eax */ W32((u32)(0xa8e868u), r_eax);
    /* 0060bec1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060bec4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060becb: mov esp, ebp */ r_esp = r_ebp;
    /* 0060becd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060bece: ret  */ FN_RET(0x0060be50); r_esp += 4; return;
L_0060becf:; BB(0x0060becf);
    /* 0060becf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060bed1: jmp 0x60bebc */ goto L_0060bebc;
}

void f_0060bed4(void) /* sub_60BED4 */
{
    FN_ENTER(0x0060bed4);
    /* 0060bed4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060bed5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060bed7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060bed9: call 0x60bef8 */ r_esp -= 4; W32(r_esp, 0x60bedeu); f_0060bef8();
    /* 0060bede: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060bee2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060bee4: jne 0x60beea */ if (!fZ) goto L_0060beea;
L_0060bee6:; BB(0x0060bee6);
    /* 0060bee6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060bee7: ret 4 */ FN_RET(0x0060bed4); r_esp += 8; return;
L_0060beea:; BB(0x0060beea);
    /* 0060beea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060beeb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60bef0u); f_005c2f74();
    /* 0060bef0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060bef1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060bef2: ret 4 */ FN_RET(0x0060bed4); r_esp += 8; return;
}

void f_0060bef8(void) /* sub_60BEF8 */
{
    FN_ENTER(0x0060bef8);
    /* 0060bef8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060bef9: mov ebp, esp */ r_ebp = r_esp;
    /* 0060befb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060befd: push 0x8dfc0c */ { u32 v = 0x8dfc0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060bf08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060bf10: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060bf13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060bf16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060bf19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060bf1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060bf1f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060bf22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060bf25: mov dword ptr [ecx], 0xb21180 */ W32((u32)(r_ecx), 0xb21180u);
    /* 0060bf2b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060bf32: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60bf37u); f_0060c7e4();
    /* 0060bf37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060bf3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060bf41: mov esp, ebp */ r_esp = r_ebp;
    /* 0060bf43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060bf44: ret  */ FN_RET(0x0060bef8); r_esp += 4; return;
}

void f_0060bf48(void)
{
    FN_ENTER(0x0060bf48);
    /* 0060bf48: mov ecx, dword ptr [0xa8e874] */ r_ecx = R32((u32)(0xa8e874u));
    /* 0060bf4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060bf50: je 0x60bf65 */ if (fZ) goto L_0060bf65;
L_0060bf52:; BB(0x0060bf52);
    /* 0060bf52: je 0x60bf5b */ if (fZ) goto L_0060bf5b;
L_0060bf54:; BB(0x0060bf54);
    /* 0060bf54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf56: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60bf5bu); f_004066a8();
L_0060bf5b:; BB(0x0060bf5b);
    /* 0060bf5b: mov dword ptr [0xa8e874], 0 */ W32((u32)(0xa8e874u), 0x0u);
L_0060bf65:; BB(0x0060bf65);
    /* 0060bf65: ret  */ FN_RET(0x0060bf48); r_esp += 4; return;
}

void f_0060bf68(void)
{
    FN_ENTER(0x0060bf68);
    /* 0060bf68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf69: mov ebp, esp */ r_ebp = r_esp;
    /* 0060bf6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf6d: push 0x8dfc4e */ { u32 v = 0x8dfc4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060bf78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060bf80: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060bf83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060bf86: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060bf89: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060bf8c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060bf8f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bf91: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060bf98: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60bf9du); f_005caba4();
    /* 0060bf9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060bf9e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060bfa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060bfa3: je 0x60c02b */ if (fZ) goto L_0060c02b;
L_0060bfa9:; BB(0x0060bfa9);
    /* 0060bfa9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060bfb0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060bfb7: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060bfbd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060bfc0: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60bfc5u); f_00787a4c();
    /* 0060bfc5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060bfc8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060bfcf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060bfd2:; BB(0x0060bfd2);
    /* 0060bfd2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060bfd9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060bfe0: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bfe5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60bfeau); f_005caba4();
    /* 0060bfea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060bfeb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060bfee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060bff0: je 0x60c027 */ if (fZ) goto L_0060c027;
L_0060bff2:; BB(0x0060bff2);
    /* 0060bff2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060bff9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060c000: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060c003: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c006: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c00a: call 0x60c034 */ r_esp -= 4; W32(r_esp, 0x60c00fu); f_0060c034();
    /* 0060c00f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c012: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060c019:; BB(0x0060c019);
    /* 0060c019: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c01c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c023: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c025: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c026: ret  */ FN_RET(0x0060bf68); r_esp += 4; return;
L_0060c027:; BB(0x0060c027);
    /* 0060c027: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c029: jmp 0x60c019 */ goto L_0060c019;
L_0060c02b:; BB(0x0060c02b);
    /* 0060c02b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060c02d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060c030: jmp 0x60bfd2 */ goto L_0060bfd2;
}

